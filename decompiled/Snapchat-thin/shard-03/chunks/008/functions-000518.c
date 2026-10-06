/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cb662c; end: 102cb66f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb662c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f107e80);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb66f4; end: 102cb6727; -[SCOperaConfigProvider fixMediaViewFrameEnabled] */

uint FUN_102cb66f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6728();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb6728; end: 102cb67ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6728(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f107eb0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb67f0; end: 102cb6823; -[SCOperaConfigProvider fixLeftTapGradientOnActionBarTapEnabled] */

uint FUN_102cb67f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb6824();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cb6824; end: 102cb68eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cb6824(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f107ee0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cb68ec; end: 102cb6973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb68ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f0a188);
    func_0x000107c4097c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f0a168);
    *(undefined8 *)(param_1 + _DAT_112f0a168) = uVar1;
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102cb6974; end: 102cb697b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb6974(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f0a188);
    func_0x000107c4097c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f0a168);
    *(undefined8 *)(lVar1 + _DAT_112f0a168) = uVar2;
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102cb697c; end: 102cb69db; -[SCOperaConfigProvider init] */

void FUN_102cb697c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaInternalServicesImpl.OperaConfigProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb69a8);
  (*pcVar1)();
}



/* Entry: 102cb69dc; end: 102cb6a53; -[SCOperaConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cb69f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cb6a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb69fc) */
/* WARNING: Removing unreachable block (ram,0x000102cb6a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb69dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0a160));
  return;
}



/* Entry: 102cb6a54; end: 102cb6b13;  */

undefined1  [16] FUN_102cb6a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  func_0x000107c60e78();
  ppuVar2 = &PTR_PTR_11289ce90;
  func_0x000107c61168(&PTR_PTR_11289ce90);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ppuVar2;
  return auVar5;
}



/* Entry: 102cb6b14; end: 102cb6b33;  */

void FUN_102cb6b14(void)

{
  func_0x000107c61168(&PTR_PTR_11289ce90);
  return;
}



/* Entry: 102cb6b34; end: 102cb6b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb6b34(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f0a188);
    func_0x000107c4097c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f0a168);
    *(undefined8 *)(lVar1 + _DAT_112f0a168) = uVar2;
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102cb6b38; end: 102cb6b7b;  */

void FUN_102cb6b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102cb6b7c; end: 102cb6b8b;  */

void FUN_102cb6b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 102cb6b8c; end: 102cb6c0f;  */

void FUN_102cb6b8c(void)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112f0a1b8,&UNK_10db3d000);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_102cb6cd4;
  func_0x0001000bdd8c(FUN_102cb6cd4);
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x0001044515c8(0);
  func_0x000107c610f8();
  func_0x0001044514b4(pcVar2);
  return;
}



/* Entry: 102cb6c10; end: 102cb6cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb6c10(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113078cc8);
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113078cf0);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c3e270(uVar3);
  func_0x000107c61180();
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_102cb6b14(0);
    func_0x000107c610f8();
    FUN_102cad074(uVar2,uVar6,uVar3,lVar4,uVar5);
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb6cd4);
  (*pcVar1)();
}



/* Entry: 102cb6cd4; end: 102cb6cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb6cd4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113078cc8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113078cf0);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c3e270(uVar3);
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_102cb6b14(0);
    func_0x000107c610f8();
    FUN_102cad074(uVar2,uVar6,uVar3,lVar4,uVar5);
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb6cd4);
  (*pcVar1)();
}



/* Entry: 102cb6cdc; end: 102cb6cff;  */

/* WARNING: Possible PIC construction at 0x000102cb6ce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb6cec) */

void FUN_102cb6cdc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102cb6d00; end: 102cb6d53;  */

void FUN_102cb6d00(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cb6d54; end: 102cb6dd3;  */

void FUN_102cb6d54(undefined8 param_1)

{
  if (lRam0000000112f0a1e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e726f9c);
  return;
}



/* Entry: 102cb6dd4; end: 102cb6e67;  */

void FUN_102cb6dd4(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112f0a1b8,&UNK_10db3d000);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar1 = FUN_102cb6e68;
  func_0x0001000bdd8c();
  pcVar2 = pcVar1;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar1);
  func_0x0001044515c8(0);
  func_0x000107c610f8();
  func_0x0001044514b4();
  *param_1 = pcVar2;
  return;
}



/* Entry: 102cb6e68; end: 102cb6e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb6e68(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113078cc8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113078cf0);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c3e270(uVar3);
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_102cb6b14(0);
    func_0x000107c610f8();
    FUN_102cad074(uVar2,uVar6,uVar3,lVar4,uVar5);
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb6cd4);
  (*pcVar1)();
}



/* Entry: 102cb6e74; end: 102cb6f0b;  */

void FUN_102cb6e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105bd718;
  func_0x000107c613fc(&UNK_1105bd718,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102cb6f0c,puVar1);
  return;
}



/* Entry: 102cb6f0c; end: 102cb6f47;  */

void FUN_102cb6f0c(long *param_1,long param_2)

{
  FUN_102cb7020();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1105bd740;
  return;
}



/* Entry: 102cb6f48; end: 102cb6fa3;  */

long FUN_102cb6f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61574(param_3);
  func_0x000107c613fc();
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return unaff_x20;
}



/* Entry: 102cb6fa4; end: 102cb6fc7;  */

void FUN_102cb6fa4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cb6fc8; end: 102cb701f;  */

undefined1  [16] FUN_102cb6fc8(void)

{
  return ZEXT816(0);
}



/* Entry: 102cb7020; end: 102cb703f;  */

void FUN_102cb7020(void)

{
  func_0x000107c61168(&PTR_PTR_112f0a320);
  return;
}



/* Entry: 102cb7040; end: 102cb764f;  */

long FUN_102cb7040(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102cb7650; end: 102cb7713;  */

void FUN_102cb7650(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f0a3b0;
  func_0x0001000285a8(0x112f0a3b0,&UNK_10db3d190);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102cb7714; end: 102cb7717;  */

void FUN_102cb7714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d1a0;
  func_0x000107c61520(&UNK_10db3d1a0,&UNK_1105bdaa0);
  puRam0000000112f0a3f0 = puVar1;
  return;
}



/* Entry: 102cb7718; end: 102cb7783;  */

void FUN_102cb7718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d1a0;
  func_0x000107c61520(&UNK_10db3d1a0,&UNK_1105bdaa0);
  puRam0000000112f0a3f0 = puVar1;
  return;
}



/* Entry: 102cb7784; end: 102cb7787;  */

void FUN_102cb7784(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d248;
  func_0x000107c61520(&UNK_10db3d248,&UNK_1105bd968);
  puRam0000000112f0a408 = puVar1;
  return;
}



/* Entry: 102cb7788; end: 102cb77f3;  */

void FUN_102cb7788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d248;
  func_0x000107c61520(&UNK_10db3d248,&UNK_1105bd968);
  puRam0000000112f0a408 = puVar1;
  return;
}



/* Entry: 102cb77f4; end: 102cb7877;  */

void FUN_102cb77f4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102cb7878; end: 102cb787b;  */

void FUN_102cb7878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d2b8;
  func_0x000107c61520(&UNK_10db3d2b8,&UNK_1105bd968);
  puRam0000000112f0a420 = puVar1;
  return;
}



/* Entry: 102cb787c; end: 102cb78bb;  */

void FUN_102cb787c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d2b8;
  func_0x000107c61520(&UNK_10db3d2b8,&UNK_1105bd968);
  puRam0000000112f0a420 = puVar1;
  return;
}



/* Entry: 102cb78bc; end: 102cb78bf;  */

void FUN_102cb78bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d270;
  func_0x000107c61520(&UNK_10db3d270,&UNK_1105bd968);
  puRam0000000112f0a428 = puVar1;
  return;
}



/* Entry: 102cb78c0; end: 102cb78ff;  */

void FUN_102cb78c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0a428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3d270;
  func_0x000107c61520(&UNK_10db3d270,&UNK_1105bd968);
  puRam0000000112f0a428 = puVar1;
  return;
}



/* Entry: 102cb7900; end: 102cb7a83;  */

int FUN_102cb7900(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102cb797c;
        goto LAB_102cb7960;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102cb7960:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_102cb797c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102cb7a84; end: 102cb7acf;  */

void FUN_102cb7a84(undefined8 param_1)

{
  func_0x0001000285a8(0x112f0a458,&UNK_10db3d330);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102cb7b3c,param_1);
  return;
}



/* Entry: 102cb7ad0; end: 102cb7b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb7ad0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102cb7eec();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f0a460) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102cb7b3c; end: 102cb7b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb7b3c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102cb7eec();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0a460) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102cb7b44; end: 102cb7b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb7b44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0a460) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb7b90; end: 102cb7ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cb7b90(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112f0a3a8);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_102cb7db4(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_102cb7db4(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 7);
  return puVar5;
}



/* Entry: 102cb7cd0; end: 102cb7d2f; -[_TtC25SCOperaFeaturePluginScope32SCOperaFeaturePluginSaberService buildSaberPluginRegistrators] */

void FUN_102cb7cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb7b90();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f0a490;
  func_0x0001000285a8(0x112f0a490,&UNK_10db3d398);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102cb7d30; end: 102cb7d8f; -[_TtC25SCOperaFeaturePluginScope32SCOperaFeaturePluginSaberService init] */

void FUN_102cb7d30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaFeaturePluginScope.SCOperaFeaturePluginSaberService",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb7d5c);
  (*pcVar1)();
}



/* Entry: 102cb7d90; end: 102cb7db3; -[_TtC25SCOperaFeaturePluginScope32SCOperaFeaturePluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb7d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0a460));
  return;
}



/* Entry: 102cb7db4; end: 102cb7edb;  */

ulong FUN_102cb7db4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb7edc);
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
  FUN_102cb7f0c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb7ed8);
      (*pcVar1)();
    }
    FUN_102cb7f8c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102cb7edc; end: 102cb7eeb;  */

undefined1  [16] FUN_102cb7edc(void)

{
  return ZEXT816(0x1105bdb20);
}



/* Entry: 102cb7eec; end: 102cb7f0b;  */

void FUN_102cb7eec(void)

{
  func_0x000107c61168(&PTR_PTR_11289cf80);
  return;
}



/* Entry: 102cb7f0c; end: 102cb7f8b;  */

undefined * FUN_102cb7f0c(undefined *param_1,undefined *param_2)

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
    func_0x000102cb7da0();
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



/* Entry: 102cb7f8c; end: 102cb80af;  */

long FUN_102cb7f8c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cb80ac);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cb80b0);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f0a490;
        func_0x0001000285a8(0x112f0a490,&UNK_10db3d398);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f0a490;
      func_0x0001000285a8(0x112f0a490,&UNK_10db3d398);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102cb80a8);
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



/* Entry: 102cb80b0; end: 102cb810b; -[SCOperaFeaturePluginRegistrationContext fromUIPageName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb80b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f0a4a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f0a4a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cb810c; end: 102cb811b; -[SCOperaFeaturePluginRegistrationContext featureMajorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb810c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0a4a8);
}



/* Entry: 102cb811c; end: 102cb812b; -[SCOperaFeaturePluginRegistrationContext featureMinorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb811c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0a4b0);
}



/* Entry: 102cb812c; end: 102cb813b; -[SCOperaFeaturePluginRegistrationContext playSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb812c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0a4b8);
}



/* Entry: 102cb813c; end: 102cb814b; -[SCOperaFeaturePluginRegistrationContext navigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb813c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0a4c0);
}



/* Entry: 102cb814c; end: 102cb815b; -[SCOperaFeaturePluginRegistrationContext shouldLogProbability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102cb814c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f0a4c8);
}



/* Entry: 102cb815c; end: 102cb816b; -[SCOperaFeaturePluginRegistrationContext viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cb815c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0a4d0);
}



/* Entry: 102cb816c; end: 102cb823f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb816c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4c0) = param_7;
  *(undefined4 *)(unaff_x20 + _DAT_112f0a4c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4d0) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb8240; end: 102cb832b; -[SCOperaFeaturePluginRegistrationContext initFromUIPageName:featureMajorName:featureMinorName:playSource:navigationType:shouldLogProbability:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8240(undefined4 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_2 + _DAT_112f0a4a0);
  *plVar1 = param_4;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_112f0a4a8) = param_5;
  *(undefined8 *)(param_2 + _DAT_112f0a4b0) = param_6;
  *(undefined8 *)(param_2 + _DAT_112f0a4b8) = param_7;
  *(undefined8 *)(param_2 + _DAT_112f0a4c0) = param_8;
  *(undefined4 *)(param_2 + _DAT_112f0a4c8) = param_1;
  *(undefined8 *)(param_2 + _DAT_112f0a4d0) = param_9;
  lStack_70 = param_2;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb832c; end: 102cb83d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb832c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4a0);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4a8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4b0) = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4b8) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4c0) = uVar2;
  *(undefined4 *)(unaff_x20 + _DAT_112f0a4c8) = *(undefined4 *)(param_1 + 6);
  *(undefined8 *)(unaff_x20 + _DAT_112f0a4d0) = param_1[7];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb83d4; end: 102cb83d7; -[SCOperaFeaturePluginRegistrationContext copyWithZone:] */

void FUN_102cb83d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102cb83d8; end: 102cb840b; -[SCOperaFeaturePluginRegistrationContext description] */

void FUN_102cb83d8(void)

{
  undefined1 auStack_50 [64];
  
  func_0x000102cb8948(auStack_50);
  FUN_102cb89bc(auStack_50);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cb840c; end: 102cb8453; -[SCOperaFeaturePluginRegistrationContext init] */

void FUN_102cb840c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaFeaturePluginScope/SCOperaFeaturePluginRegistrationContextWrapper.swift"
                      ,0x4e,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb8454);
  (*pcVar1)();
}



/* Entry: 102cb8454; end: 102cb846f; +[SCOperaFeaturePluginRegistrationContextBuilder operaFeaturePluginRegistrationContext] */

void FUN_102cb8454(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cb8470; end: 102cb84af; +[SCOperaFeaturePluginRegistrationContextBuilder operaFeaturePluginRegistrationContextWithExistingOperaFeaturePluginRegistrationContext:] */

void FUN_102cb8470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_102cb89f0(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb84b0; end: 102cb8513; -[SCOperaFeaturePluginRegistrationContextBuilder withFromUIPageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb84b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f0a4d8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102cb8514; end: 102cb852b; -[SCOperaFeaturePluginRegistrationContextBuilder withFeatureMajorName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0a4e0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb852c; end: 102cb8543; -[SCOperaFeaturePluginRegistrationContextBuilder withFeatureMinorName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb852c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0a4e8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb8544; end: 102cb855b; -[SCOperaFeaturePluginRegistrationContextBuilder withPlaySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0a4f0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb855c; end: 102cb8573; -[SCOperaFeaturePluginRegistrationContextBuilder withNavigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb855c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0a4f8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb8574; end: 102cb858b; -[SCOperaFeaturePluginRegistrationContextBuilder withShouldLogProbability:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8574(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + _DAT_112f0a500);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb858c; end: 102cb85a3; -[SCOperaFeaturePluginRegistrationContextBuilder withViewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb858c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0a508);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102cb85a4; end: 102cb877f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb85a4(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4e0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4e8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4f0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4f8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar10 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar10 = *puVar1;
  }
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112f0a500);
  if (*(char *)(puVar2 + 1) == '\x01') {
    uVar11 = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  else {
    uVar11 = *puVar2;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a508);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar12 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar12 = *puVar1;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0a4d8);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f0a4d8))[1];
  FUN_102cb8b54();
  lVar6 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f0a4a0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112f0a4a8) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_112f0a4b0) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112f0a4b8) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112f0a4c0) = uVar10;
  *(undefined4 *)(lVar6 + _DAT_112f0a4c8) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_112f0a4d0) = uVar12;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = param_1;
  func_0x000107c61434(uVar4);
  func_0x000107c61154(&lStack_70,puVar5);
  return;
}



/* Entry: 102cb8780; end: 102cb87c3; -[SCOperaFeaturePluginRegistrationContextBuilder build] */

void FUN_102cb8780(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb85a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb87c4; end: 102cb8807; -[SCOperaFeaturePluginRegistrationContextBuilder safeBuildAndReturnError:] */

void FUN_102cb87c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cb85a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cb8808; end: 102cb88c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8808(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a4f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112f0a500);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0a508);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cb88c8; end: 102cb88e7; -[SCOperaFeaturePluginRegistrationContextBuilder init] */

void FUN_102cb88c8(void)

{
  FUN_102cb8808();
  return;
}



/* Entry: 102cb88e8; end: 102cb88eb;  */

void FUN_102cb88e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb88ec; end: 102cb88ff; -[SCOperaFeaturePluginRegistrationContextBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb88ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0a4d8 + 8))
  ;
  return;
}



/* Entry: 102cb8900; end: 102cb8933;  */

void FUN_102cb8900(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb8934; end: 102cb89bb; -[SCOperaFeaturePluginRegistrationContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cb8934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0a4a0 + 8))
  ;
  return;
}



/* Entry: 102cb89bc; end: 102cb89ef;  */

undefined8 FUN_102cb89bc(undefined8 param_1)

{
  (*(code *)(undefined *)0x102cb746c)();
  return param_1;
}



/* Entry: 102cb89f0; end: 102cb8b53;  */

/* WARNING: Possible PIC construction at 0x000102cb8a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cb8a28) */

void FUN_102cb89f0(long param_1)

{
  if (param_1 == 0) {
    func_0x000102cb8b74();
    func_0x000107c610f8();
  }
  else {
    func_0x000102cb8b74();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102cb8b54; end: 102cb8b93;  */

void FUN_102cb8b54(void)

{
  func_0x000107c61168(&PTR_PTR_11289d040);
  return;
}



/* Entry: 102cb8b94; end: 102cb8b97;  */

void FUN_102cb8b94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cb8b98; end: 102cb8c6b;  */

void FUN_102cb8b98(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102cb8c6c; end: 102cb8c8b;  */

void FUN_102cb8c6c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 102cb8c8c; end: 102cb8cbf;  */

undefined8 FUN_102cb8c8c(undefined8 param_1)

{
  (*(code *)(undefined *)0x102cb70b4)();
  return param_1;
}



/* Entry: 102cb8cc0; end: 102cb8cf3; -[SCOperaEvent description] */

void FUN_102cb8cc0(void)

{
  undefined1 auStack_38 [40];
  
  FUN_102cb903c(auStack_38);
  FUN_102cb8c8c(auStack_38);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cb8cf4; end: 102cb8d3b; -[SCOperaEvent init] */

void FUN_102cb8cf4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaFeaturePluginScope/SCOperaEventWrapper.swift",0x33,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cb8d3c);
  (*pcVar1)();
}



/* Entry: 102cb8d3c; end: 102cb8d3f; -[SCOperaEvent copyWithZone:] */

void FUN_102cb8d3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102cb8d40; end: 102cb8dab; +[SCOperaEvent sessionLifecycleEventWithEventName:sessionId:] */

void FUN_102cb8d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000102cb913c(param_3,param_2,param_4,uVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb8dac; end: 102cb8db7; +[SCOperaEvent navigationEventWithEventName:] */

void FUN_102cb8dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_102cb920c();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb8db8; end: 102cb8dc3; +[SCOperaEvent gestureEventWithEventName:] */

void FUN_102cb8db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  (*(code *)0x102cb92c8)();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb8dc4; end: 102cb8dcf; +[SCOperaEvent actionMenuEventWithEventName:] */

void FUN_102cb8dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  (*(code *)0x102cb9384)();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb8dd0; end: 102cb8f07;  */

void FUN_102cb8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  (*param_4)();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cb8f08; end: 102cb8f7b; -[SCOperaEvent matchSessionLifecycleEvent:navigationEvent:gestureEvent:actionMenuEvent:] */

void FUN_102cb8f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000102cb8e0c(FUN_102cb9608,auStack_40,0x102cb9610,auStack_60,FUN_102cb964c,auStack_80,
                      0x102cb9650,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}


