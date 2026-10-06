/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e18210; end: 102e18233;  */

void FUN_102e18210(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e18234; end: 102e18237;  */

long FUN_102e18234(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f1102e0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    lVar2 = (long)iVar3;
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x18);
  }
  return lVar2;
}



/* Entry: 102e18238; end: 102e18257;  */

void FUN_102e18238(void)

{
  func_0x000107c61168(&PTR_PTR_112f1d148);
  return;
}



/* Entry: 102e18258; end: 102e184cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e18258(byte param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar3 = unaff_x20 + _DAT_112f1d200;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c5a378();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1105d7ba0;
    func_0x000107c613fc(&UNK_1105d7ba0,0x19,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    puVar5[0x18] = param_1 & 1;
    uStack_70 = 0x102e1b354;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d7bb8;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd4(0x3fc999999999999a,0,puVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c60bd0(ppuVar6);
  }
  lVar3 = unaff_x20 + _DAT_112f1d208;
  func_0x000107c61618();
  if ((param_1 & 1) == 0) {
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    if (lVar3 == 0) {
      func_0x000102e1a218();
    }
    else {
      func_0x000107c61170(lVar3);
    }
    lVar3 = unaff_x20 + _DAT_112f1d208;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_102e184a8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e184d0);
      (*pcVar2)();
    }
    func_0x000107c3ec8c();
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c5a378(lVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1105d7b50;
  func_0x000107c613fc(&UNK_1105d7b50,0x19,7);
  *(long *)(puVar5 + 0x10) = lVar3;
  puVar5[0x18] = param_1 & 1;
  uStack_70 = 0x102e1b338;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105d7b68;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(lVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c3dcd4(0x3fc999999999999a,0,puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c60bd0(ppuVar7);
  if ((param_1 & 1) == 0) {
    return;
  }
LAB_102e184a8:
  FUN_102e19fe0();
  return;
}



/* Entry: 102e184d0; end: 102e18597;  */

/* WARNING: Possible PIC construction at 0x000102e19c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1850c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e18510) */
/* WARNING: Removing unreachable block (ram,0x000102e18588) */
/* WARNING: Removing unreachable block (ram,0x000102e18524) */
/* WARNING: Removing unreachable block (ram,0x000102e18538) */
/* WARNING: Removing unreachable block (ram,0x000102e19d38) */
/* WARNING: Removing unreachable block (ram,0x000102e19c88) */
/* WARNING: Removing unreachable block (ram,0x000102e19c50) */
/* WARNING: Removing unreachable block (ram,0x000102e19c14) */
/* WARNING: Removing unreachable block (ram,0x000102e19d50) */
/* WARNING: Removing unreachable block (ram,0x000102e19c30) */
/* WARNING: Removing unreachable block (ram,0x000102e18558) */
/* WARNING: Removing unreachable block (ram,0x000102e18560) */

void FUN_102e184d0(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  if ((param_1 & 0xff) == 0) {
    FUN_102e185cc();
    FUN_102e1cb54();
  }
  else {
    FUN_102e19ab0(((uint)param_1 & 0xff) != 1);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e19d50);
      (*pcVar1)();
    }
    uVar2 = unaff_x20;
    FUN_102e185cc();
    func_0x000107c3ec8c(unaff_x20,param_2,uVar2);
    param_1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e18598; end: 102e185b7; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController actionBarHostDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e18598(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f1d1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e185b8; end: 102e185cb; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController setActionBarHostDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e185b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f1d1b0,param_3);
  return;
}



/* Entry: 102e185cc; end: 102e18787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e185cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d1d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d1d0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_102e1d0d8();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102e18788; end: 102e18e0b;  */

/* WARNING: Possible PIC construction at 0x000102e187dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e188c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e188e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e189d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e189f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e18dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e18d98) */
/* WARNING: Removing unreachable block (ram,0x000102e18d74) */
/* WARNING: Removing unreachable block (ram,0x000102e18d50) */
/* WARNING: Removing unreachable block (ram,0x000102e18d2c) */
/* WARNING: Removing unreachable block (ram,0x000102e18cd8) */
/* WARNING: Removing unreachable block (ram,0x000102e18c84) */
/* WARNING: Removing unreachable block (ram,0x000102e18c30) */
/* WARNING: Removing unreachable block (ram,0x000102e18c10) */
/* WARNING: Removing unreachable block (ram,0x000102e18bc0) */
/* WARNING: Removing unreachable block (ram,0x000102e18e08) */
/* WARNING: Removing unreachable block (ram,0x000102e18bf4) */
/* WARNING: Removing unreachable block (ram,0x000102e18ba0) */
/* WARNING: Removing unreachable block (ram,0x000102e18b24) */
/* WARNING: Removing unreachable block (ram,0x000102e18e04) */
/* WARNING: Removing unreachable block (ram,0x000102e18b84) */
/* WARNING: Removing unreachable block (ram,0x000102e18a64) */
/* WARNING: Removing unreachable block (ram,0x000102e18dfc) */
/* WARNING: Removing unreachable block (ram,0x000102e18af8) */
/* WARNING: Removing unreachable block (ram,0x000102e18e00) */
/* WARNING: Removing unreachable block (ram,0x000102e18b10) */
/* WARNING: Removing unreachable block (ram,0x000102e18a20) */
/* WARNING: Removing unreachable block (ram,0x000102e189f8) */
/* WARNING: Removing unreachable block (ram,0x000102e189dc) */
/* WARNING: Removing unreachable block (ram,0x000102e18978) */
/* WARNING: Removing unreachable block (ram,0x000102e18df8) */
/* WARNING: Removing unreachable block (ram,0x000102e189ac) */
/* WARNING: Removing unreachable block (ram,0x000102e18958) */
/* WARNING: Removing unreachable block (ram,0x000102e1893c) */
/* WARNING: Removing unreachable block (ram,0x000102e188ec) */
/* WARNING: Removing unreachable block (ram,0x000102e18df4) */
/* WARNING: Removing unreachable block (ram,0x000102e18920) */
/* WARNING: Removing unreachable block (ram,0x000102e188cc) */
/* WARNING: Removing unreachable block (ram,0x000102e1887c) */
/* WARNING: Removing unreachable block (ram,0x000102e18df0) */
/* WARNING: Removing unreachable block (ram,0x000102e188b0) */
/* WARNING: Removing unreachable block (ram,0x000102e1885c) */
/* WARNING: Removing unreachable block (ram,0x000102e187e0) */
/* WARNING: Removing unreachable block (ram,0x000102e18dec) */
/* WARNING: Removing unreachable block (ram,0x000102e18840) */
/* WARNING: Removing unreachable block (ram,0x000102e18dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e18788(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d72c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e18dec);
  (*pcVar1)();
}



/* Entry: 102e18e0c; end: 102e18e33; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController initWithCoder:] */

void FUN_102e18e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102e1b3a8();
  return;
}



/* Entry: 102e18e34; end: 102e18e3b; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController prefersStatusBarHidden] */

undefined8 FUN_102e18e34(void)

{
  return 0;
}



/* Entry: 102e18e3c; end: 102e18e63; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController backgroundExitBehavior] */

void FUN_102e18e3c(void)

{
  func_0x000107c61168(PTR_PTR_1126aecb0);
  func_0x000107c4d60c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e18e64; end: 102e18f93; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController policyForNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e18e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1d1f0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102e1b1bc(param_3,uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102e18f94; end: 102e1905b; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController viewDidLoad] */

void FUN_102e18f94(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102e18ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1905c; end: 102e1908b; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController viewWillDisappear:] */

void FUN_102e1905c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102e18fbc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1908c; end: 102e19aaf;  */

/* WARNING: Possible PIC construction at 0x000102e190d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e191c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1926c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1921c) */
/* WARNING: Removing unreachable block (ram,0x000102e191c8) */
/* WARNING: Removing unreachable block (ram,0x000102e19174) */
/* WARNING: Removing unreachable block (ram,0x000102e190dc) */
/* WARNING: Removing unreachable block (ram,0x000102e19270) */

void FUN_102e1908c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000102e18638();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e192c8);
  (*pcVar1)();
}



/* Entry: 102e19ab0; end: 102e19bc7;  */

/* WARNING: Possible PIC construction at 0x000102e19b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e19b80) */
/* WARNING: Removing unreachable block (ram,0x000102e19b48) */
/* WARNING: Removing unreachable block (ram,0x000102e19ba0) */

void FUN_102e19ab0(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  plVar1 = (long *)&DAT_112f1d220;
  if ((param_1 & 1) == 0) {
    plVar1 = (long *)&DAT_112f1d228;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + *plVar1);
  func_0x000107c61434(0x4024000000000000,0,uVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar3 = 0;
  func_0x000100847984(0);
  uVar4 = uVar5;
  func_0x000107c5fc48(uVar5,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c413a0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 102e19bc8; end: 102e19df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e19bc8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar8 = &puStack_60;
  FUN_102e19ab0();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e19d50);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  FUN_102e185cc();
  func_0x000107c3ec8c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000102e19d54();
    func_0x000107c3ec8c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1d1d0);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c550d8();
    FUN_102e1cca0();
    func_0x000107c5ba54();
    func_0x000107c61170(uVar5);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105d7c18;
    func_0x000107c613fc(&UNK_1105d7c18,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    uStack_40 = 0x102e1b55c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d7c30;
    puStack_38 = puVar7;
    func_0x000107c60bc4(&puStack_60);
    puVar7 = puStack_38;
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd4(0x3fe0000000000000,0,puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e19d54);
  (*pcVar1)();
}



/* Entry: 102e19df4; end: 102e19e53; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController initWithNibName:bundle:] */

void FUN_102e19df4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesContainerViewController",0x36,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e19e20);
  (*pcVar1)();
}



/* Entry: 102e19e54; end: 102e19fbf; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e19ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e19fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e19f84) */
/* WARNING: Removing unreachable block (ram,0x000102e19f34) */
/* WARNING: Removing unreachable block (ram,0x000102e19ec4) */
/* WARNING: Removing unreachable block (ram,0x000102e19ea4) */
/* WARNING: Removing unreachable block (ram,0x000102e19fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e19e54(long param_1)

{
  func_0x000100d2831c(param_1 + _DAT_112f1d1b0);
  func_0x000100d2831c(param_1 + _DAT_112f1d1b8);
  func_0x000100d2831c(param_1 + _DAT_112f1d1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d1c8));
  return;
}



/* Entry: 102e19fc0; end: 102e19fdf;  */

void FUN_102e19fc0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7988);
  return;
}



/* Entry: 102e19fe0; end: 102e1a42f;  */

/* WARNING: Possible PIC construction at 0x000102e1a018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1a1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1a1b8) */
/* WARNING: Removing unreachable block (ram,0x000102e1a180) */
/* WARNING: Removing unreachable block (ram,0x000102e1a158) */
/* WARNING: Removing unreachable block (ram,0x000102e1a0bc) */
/* WARNING: Removing unreachable block (ram,0x000102e1a074) */
/* WARNING: Removing unreachable block (ram,0x000102e1a214) */
/* WARNING: Removing unreachable block (ram,0x000102e1a0a0) */
/* WARNING: Removing unreachable block (ram,0x000102e1a1f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e19fe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f1d210;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000102e20778();
    puVar2 = PTR_PTR_1126b09c0;
    func_0x000107c610f8(PTR_PTR_1126b09c0);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48cac(puVar2);
  }
  else {
    func_0x000107c42008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102e1a430; end: 102e1a53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1a430(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f1d1b8;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + _DAT_112f1cb70);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + _DAT_11306fb58);
        func_0x000107c6157c(lVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c61428(lVar4 + 0x20,auStack_60,0,0);
        pcVar5 = *(code **)(lVar4 + 0x20);
        if (pcVar5 != (code *)0x0) {
          uVar3 = *(undefined8 *)(lVar4 + 0x28);
          func_0x000107c6157c(uVar3);
          (*pcVar5)();
          func_0x000107c61574(lVar4);
          func_0x000107c615e8(lVar1);
          func_0x00010058d43c(pcVar5,uVar3);
          return;
        }
        func_0x000107c61574(lVar4);
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102e1a53c; end: 102e1a57f; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController actionBarParentView] */

void FUN_102e1a53c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1a580);
  (*pcVar1)();
}



/* Entry: 102e1a580; end: 102e1a58f; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController actionBarLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1a580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f1d1c8));
  return;
}



/* Entry: 102e1a590; end: 102e1a5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1a590(byte param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f1d1f8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_1 & 1) != *(byte *)(lVar1 + _DAT_112f1d5e8)) {
      *(byte *)(lVar1 + _DAT_112f1d5e8) = param_1 & 1;
      FUN_102e1fa04();
      FUN_102e1f808();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102e1a5f8; end: 102e1a627; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController setReactionCameraSuspended:] */

void FUN_102e1a5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102e1a590(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1a628; end: 102e1aa13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1a628(byte param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d250);
  uVar11 = *puVar1;
  uVar13 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000100b64c10(param_4,param_5);
  func_0x00010058d43c(uVar11,uVar13);
  lVar3 = _DAT_112f1d248;
  if ((param_1 & 1) != *(byte *)(unaff_x20 + _DAT_112f1d248)) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112f1d218);
    if (lVar12 != 0) {
      if ((param_1 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar2 = _DAT_112f1d238;
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f1d238);
        func_0x000100847984(0);
        func_0x000107c61174(lVar12);
        uVar11 = uVar13;
        func_0x000107c61434(uVar13);
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar13);
        func_0x000107c413a0(puVar5);
        func_0x000107c61170(uVar11);
        uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c6142c(uVar11);
        lVar2 = _DAT_112f1d240;
        lVar6 = *(long *)(unaff_x20 + _DAT_112f1d240);
        if (lVar6 != 0) {
          func_0x000107c61174();
          lVar7 = unaff_x20;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102e1aa10);
            (*pcVar4)();
          }
          func_0x000107c4ff58();
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar6);
          uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
          *(undefined8 *)(unaff_x20 + lVar2) = 0;
          func_0x000107c61170(uVar11);
        }
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f1d230);
        uVar11 = uVar13;
        func_0x000107c61434(uVar13);
        func_0x000107c5fc48();
      }
      else {
        lVar6 = lVar12;
        func_0x000107c61174();
        FUN_102e1aa14();
        FUN_102e1aae8(lVar6,param_2);
        lVar2 = _DAT_112f1d238;
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f1d238);
        *(long *)(unaff_x20 + _DAT_112f1d238) = lVar6;
        func_0x000107c6142c(uVar11);
        puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f1d230);
        func_0x000100847984(0);
        uVar11 = uVar13;
        func_0x000107c61434(uVar13);
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar13);
        func_0x000107c413a0(puVar5);
        func_0x000107c61170(uVar11);
        uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
        uVar11 = uVar13;
        func_0x000107c61434(uVar13);
        func_0x000107c5fc48();
      }
      func_0x000107c6142c(uVar13);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(uVar11);
      *(byte *)(unaff_x20 + lVar3) = param_1 & 1;
      func_0x000102e18638();
      func_0x000107c550d8();
      func_0x000107c61170(uVar11);
      puVar5 = &UNK_1105d7bf0;
      func_0x000107c613fc(&UNK_1105d7bf0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      if ((param_3 & 1) == 0) {
        func_0x000107c61428(puVar5 + 0x10,&puStack_90,0,0);
        puVar9 = puVar5 + 0x10;
        func_0x000107c61618();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61574(puVar5);
        }
        else {
          func_0x000107c6157c(puVar5);
          puVar10 = puVar9;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102e1aa14);
            (*pcVar4)();
          }
          func_0x000107c4abfc(puVar10);
          func_0x000107c61170(puVar10);
          func_0x000107c61578(puVar5,2);
        }
        func_0x000107c61170(lVar12);
      }
      else {
        puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar9 = &UNK_1105d7c90;
        func_0x000107c613fc(&UNK_1105d7c90,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = 0x102e1b380;
        *(undefined **)(puVar9 + 0x18) = puVar5;
        pcStack_70 = FUN_102e1b388;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_1105d7ca8;
        puStack_68 = puVar9;
        func_0x000107c60bc4(&puStack_90);
        puVar9 = puStack_68;
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar9);
        func_0x000107c3dcd4(0x3fd3333333333333,0,puVar10);
        func_0x000107c61170(lVar12);
        func_0x000107c61574(puVar5);
        func_0x000107c60bd0(ppuVar8);
      }
    }
  }
  return;
}



/* Entry: 102e1aa14; end: 102e1aae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102e1aa14(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  if (((*(long *)(unaff_x20 + _DAT_112f1d218) == 0) || (func_0x000107c3ec60(), param_3 <= 0.0)) ||
     (param_4 <= 0.0)) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1aae8);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    dVar3 = param_3;
    dVar4 = param_4;
    func_0x000107c61170(unaff_x20);
    if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c61170(puVar2);
      param_3 = 1.0;
      if (1.0 < dVar4) {
        param_3 = dVar4;
      }
      param_3 = dVar3 / param_3;
    }
    else {
      param_3 = param_3 / param_4;
    }
  }
  else {
    param_3 = param_3 / param_4;
  }
  return param_3;
}



/* Entry: 102e1aae8; end: 102e1afff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e1aae8(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1aff8);
    (*pcVar1)();
  }
  func_0x000107c3d72c();
  func_0x000107c61170(lVar3);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f1d240);
  *(undefined **)(unaff_x20 + _DAT_112f1d240) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  lVar3 = param_3;
  if (param_3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1d1c8);
    func_0x000107c3f764(lVar3);
    func_0x000107c61180();
  }
  func_0x000107c61174(param_3);
  lVar4 = param_2;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c5e308(puVar2);
  func_0x000107c61180();
  lVar6 = lVar4;
  func_0x000107c402a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  lVar4 = param_2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c44d9c(puVar2);
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c402a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  lVar4 = param_2;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c5e308(puVar2);
  func_0x000107c61180();
  lVar8 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5784c(0x443b8000,lVar8);
  lVar4 = param_2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c44d9c(puVar2);
  func_0x000107c61180();
  lVar9 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar5);
  lVar4 = lVar9;
  func_0x000107c5784c(0x443b8000);
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0x17;
  *(undefined8 *)(lVar4 + 0x10) = 0xb;
  puVar5 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1affc);
    (*pcVar1)();
  }
  lVar11 = lVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar12 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar11);
  *(undefined **)(lVar4 + 0x20) = puVar12;
  puVar5 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1b000);
    (*pcVar1)();
  }
  lVar11 = lVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar12 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar11);
  *(undefined **)(lVar4 + 0x28) = puVar12;
  puVar5 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f1d1c8);
  func_0x000107c5cbe4(uVar13);
  func_0x000107c61180();
  puVar12 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar13);
  *(undefined **)(lVar4 + 0x30) = puVar12;
  puVar5 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar12 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar4 + 0x38) = puVar12;
  lVar10 = param_2;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3f75c(puVar2);
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar5);
  *(long *)(lVar4 + 0x40) = lVar11;
  lVar10 = param_2;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar5);
  *(long *)(lVar4 + 0x48) = lVar11;
  lVar10 = param_2;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c44d9c(param_2);
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c40288(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  *(long *)(lVar4 + 0x50) = lVar11;
  *(long *)(lVar4 + 0x58) = lVar6;
  *(long *)(lVar4 + 0x60) = lVar7;
  *(long *)(lVar4 + 0x68) = lVar8;
  *(long *)(lVar4 + 0x70) = lVar9;
  return lVar4;
}



/* Entry: 102e1b000; end: 102e1b083;  */

undefined8 FUN_102e1b000(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1b084);
      (*pcVar1)();
    }
    func_0x000107c4abfc(lVar2);
    func_0x000107c61170(lVar2);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 102e1b084; end: 102e1b14b; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController setGamesViewExpandedScaling:barTopAnchor:animated:onTapToCollapse:] */

/* WARNING: Possible PIC construction at 0x000102e1b12c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1b130) */

void FUN_102e1b084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1105d7c68;
    func_0x000107c613fc(&UNK_1105d7c68,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x102e1b378;
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102e1a628(param_3,param_4,param_5,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e1b14c; end: 102e1b1bb; -[_TtC21PlayGamesServicesImpl32PlayGamesContainerViewController handleExpandedContentTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1b14c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f1d250);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f1d250))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102e1b1bc; end: 102e1b313;  */

undefined8 FUN_102e1b1bc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(char *)(param_2 + 0x10) == '\x01') && (uVar3 = *(ulong *)(param_2 + 0x28), uVar3 != 0)) {
    lVar2 = param_2;
    func_0x000107c4a634();
    if (((uVar3 & 1) != 0) && (lVar4 = *(long *)(param_2 + 0x20), lVar4 != 0)) {
      uVar5 = *(ulong *)(param_2 + 0x18);
      func_0x000107c61434(lVar4);
      func_0x000107c61174();
      uVar3 = param_1;
      FUN_102e0c934();
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1;
        func_0x000107c444e4();
        func_0x000107c61180();
        if (uVar3 == 0) {
          uVar3 = param_1;
          func_0x000107c3e190();
          func_0x000107c61180();
          if (uVar3 == 0) {
            func_0x000107c6142c(lVar4);
            func_0x000107c61170(param_1);
            return 0;
          }
        }
        uVar1 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
        if ((uVar1 == uVar5) && (lVar4 == lVar2)) {
          func_0x000107c6142c(lVar2);
          func_0x000107c6142c(lVar4);
          func_0x000107c61170(param_1);
        }
        else {
          func_0x000107c605b8(uVar1,lVar2,uVar5,lVar4,0);
          func_0x000107c6142c(lVar2);
          func_0x000107c6142c(lVar4);
          func_0x000107c61170(param_1);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
        }
        return 4;
      }
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar4);
    }
    return 0;
  }
  return 0;
}



/* Entry: 102e1b314; end: 102e1b387;  */

void FUN_102e1b314(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e1b388; end: 102e1b543;  */

void FUN_102e1b388(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e1b544; end: 102e1b567;  */

void FUN_102e1b544(long param_1,long param_2)

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



/* Entry: 102e1b568; end: 102e1b7bf;  */

void FUN_102e1b568(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  uVar1 = param_1;
  uVar7 = param_2;
  if ((param_1 & 0xff) == 0) {
    func_0x000102e20848();
    uVar2 = uVar1;
    uVar9 = uVar7;
    func_0x000102e20914();
  }
  else {
    func_0x000102e209e4();
    uVar2 = uVar1;
    uVar9 = uVar7;
    func_0x000102e20ab0();
  }
  puVar3 = &UNK_1105d7ce8;
  func_0x000107c613fc(&UNK_1105d7ce8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  func_0x000107c6157c(puVar3);
  func_0x000107c5fadc(uVar2,uVar9);
  func_0x000107c6142c(uVar9);
  pcStack_70 = FUN_102e1bb98;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de205c;
  puStack_78 = &UNK_1105d7d00;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dac8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574();
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 3;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  puStack_90 = puVar6;
  func_0x000107c61174(puVar5);
  if ((param_1 & 0xff) == 0) {
    puVar3 = puVar5;
    func_0x000102e1b860();
    FUN_102e1bcd8(0,0,puVar3);
    func_0x000107c61170(puVar3);
    puVar6 = puStack_90;
  }
  puVar3 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(uVar1,uVar7);
  func_0x000107c6142c(uVar7);
  uVar7 = 0;
  func_0x000100dfe1a0(0);
  puVar8 = puVar6;
  func_0x000107c5fc48(puVar6,uVar7);
  func_0x000107c48d50(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c4f018(param_2);
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102e1b7c0; end: 102e1ba33;  */

void FUN_102e1b7c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  pcStack_40 = FUN_102e1bdb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d7d78;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102e1ba34; end: 102e1baa3;  */

void FUN_102e1ba34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(param_1);
    if (lVar1 != 0) {
      FUN_102e0dd48(0);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102e1baa4; end: 102e1bae7;  */

void FUN_102e1baa4(void)

{
  long unaff_x20;
  
  FUN_102e1bdd0(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e1bae8; end: 102e1bb97;  */

void FUN_102e1bae8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x00010108329c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102e1bb98; end: 102e1bbbb;  */

void FUN_102e1bb98(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar1 = &puStack_60;
  pcStack_40 = FUN_102e1bdb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d7d78;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 102e1bbbc; end: 102e1bcd7;  */

void FUN_102e1bbbc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcb4);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  func_0x000100dfe1a0(0);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcb8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcd0);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcd4);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcd8);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 102e1bcd8; end: 102e1bdaf;  */

/* WARNING: Removing unreachable block (ram,0x000102e1bcd4) */

void FUN_102e1bcd8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bd8c);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bda4);
    (*pcVar6)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bda8);
    (*pcVar6)();
  }
  lVar5 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffff8;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bdb0);
      (*pcVar6)();
    }
    FUN_102e1bae8(uVar9 + lVar5,1);
    lVar5 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcb4);
      (*pcVar6)();
    }
    uVar9 = *unaff_x20;
    uVar10 = uVar9 & 0xffffffffffffff8;
    puVar1 = (undefined8 *)(uVar10 + 0x20 + param_1 * 8);
    uVar7 = 0;
    func_0x000100dfe1a0(0);
    func_0x000107c61408(puVar1,lVar5,uVar7);
    lVar4 = 1 - lVar5;
    if (SBORROW8(1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcb8);
      (*pcVar6)();
    }
    if (lVar4 != 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
        lVar5 = uVar8 - param_2;
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        lVar5 = uVar8 - param_2;
      }
      if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcd0);
        (*pcVar6)();
      }
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)(uVar10 + 0x20 + param_2 * 8);
      if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
        func_0x000107c610b8(puVar2,puVar3,lVar5 << 3);
      }
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bcd4);
        (*pcVar6)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + lVar4;
    }
    *puVar1 = param_3;
    func_0x000107c61174(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102e1bdac);
  (*pcVar6)();
}



/* Entry: 102e1bdb0; end: 102e1bdb7;  */

void FUN_102e1bdb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517a8();
  func_0x000107c61170(puVar1);
  uStack_40 = 0x102e1be0c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d7d50;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102e1bdb8; end: 102e1bdcf;  */

void FUN_102e1bdb8(void)

{
  FUN_102e1ba34();
  return;
}



/* Entry: 102e1bdd0; end: 102e1bdf3;  */

undefined8 FUN_102e1bdd0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e1bdf4; end: 102e1be0f;  */

void FUN_102e1bdf4(long param_1,long param_2)

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



/* Entry: 102e1be10; end: 102e1c1ef;  */

void FUN_102e1be10(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = &UNK_1105d7db0;
  func_0x000107c613fc(&UNK_1105d7db0,0x18,7);
  puVar9 = (undefined *)0x0;
  func_0x000107c61614(puVar2 + 0x10,0);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c6157c(puVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_68 = puVar2;
  if (lVar10 != 0) {
    puVar9 = PTR_PTR_1126b5928;
    func_0x000107c610f8(PTR_PTR_1126b5928);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c472e8(puVar9);
    func_0x000107c61170(param_1);
    lVar3 = lVar10;
    func_0x000107c4b1bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(puVar9);
    puVar9 = param_2;
    if (lVar3 != 0) {
      puVar6 = PTR_PTR_1126b0ae0;
      func_0x000107c61168(PTR_PTR_1126b0ae0);
      puVar4 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c451b0();
      func_0x000107c61180();
      puVar7 = puVar4;
      func_0x000102e209e4();
      puVar9 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      func_0x000102e20c4c();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar9);
      pcStack_70 = FUN_102e1c290;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105d7df0;
      ppuVar8 = &puStack_90;
      func_0x000107c60bc4(ppuVar8);
      puVar9 = puStack_68;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar9);
      uVar5 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010f1103d0);
      func_0x000107c40b08(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar4);
      goto LAB_102e1c178;
    }
  }
  puVar6 = PTR_PTR_1126b0ae0;
  func_0x000107c61168(PTR_PTR_1126b0ae0);
  puVar7 = puVar6;
  func_0x000102e209e4();
  puVar4 = puVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  func_0x000102e20c4c();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar4);
  param_2 = PTR_PTR_1126b15a0;
  func_0x000107c61168(PTR_PTR_1126b15a0);
  func_0x000107c3ee8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  pcStack_70 = FUN_102e1c290;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105d7dc8;
  ppuVar8 = &puStack_90;
  func_0x000107c60bc4();
  puVar9 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar9);
  uVar5 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1103d0);
  func_0x000107c40b00(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c60bd0(ppuVar8);
LAB_102e1c178:
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61428(puVar2 + 0x10,&puStack_90,1,0);
  func_0x000107c61604(puVar2 + 0x10,puVar6);
  func_0x000107c5c2e0(lVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(lVar1);
  func_0x000107c61578(puVar2,2);
  return;
}



/* Entry: 102e1c1f0; end: 102e1c243;  */

void FUN_102e1c1f0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4207c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e1c244; end: 102e1c28f;  */

void FUN_102e1c244(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e1c290; end: 102e1c2bb;  */

void FUN_102e1c290(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4207c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102e1c2bc; end: 102e1c3bb;  */

ulong * FUN_102e1c2bc(void)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x20);
  puVar2 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    func_0x000102e24908();
    puVar2 = (ulong *)0x1;
    FUN_102e231fc(1,1);
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c550d8(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c55394(puVar2);
    puVar3 = &UNK_1105d7e28;
    func_0x000107c613fc(&UNK_1105d7e28,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0xa0);
    func_0x000107c6157c(puVar3);
    (*pcVar5)(FUN_102e1c79c,puVar3);
    func_0x000107c61574(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    *(ulong **)(unaff_x20 + 0x20) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (ulong *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 102e1c3bc; end: 102e1c67f;  */

/* WARNING: Possible PIC construction at 0x000102e1c404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1c7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1c7cc) */
/* WARNING: Removing unreachable block (ram,0x000102e1c4b4) */
/* WARNING: Removing unreachable block (ram,0x000102e1c7a4) */
/* WARNING: Removing unreachable block (ram,0x000102e1c7bc) */
/* WARNING: Removing unreachable block (ram,0x000102e1c7c4) */
/* WARNING: Removing unreachable block (ram,0x000102e1c664) */
/* WARNING: Removing unreachable block (ram,0x000102e1c618) */
/* WARNING: Removing unreachable block (ram,0x000102e1c608) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5e4) */
/* WARNING: Removing unreachable block (ram,0x000102e1c59c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c580) */
/* WARNING: Removing unreachable block (ram,0x000102e1c584) */
/* WARNING: Removing unreachable block (ram,0x000102e1c544) */
/* WARNING: Removing unreachable block (ram,0x000102e1c550) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5a0) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5a8) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5e8) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5ec) */
/* WARNING: Removing unreachable block (ram,0x000102e1c5cc) */
/* WARNING: Removing unreachable block (ram,0x000102e1c564) */
/* WARNING: Removing unreachable block (ram,0x000102e1c500) */
/* WARNING: Removing unreachable block (ram,0x000102e1c50c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c48c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c468) */
/* WARNING: Removing unreachable block (ram,0x000102e1c4d0) */
/* WARNING: Removing unreachable block (ram,0x000102e1c52c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c46c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c474) */
/* WARNING: Removing unreachable block (ram,0x000102e1c4dc) */
/* WARNING: Removing unreachable block (ram,0x000102e1c47c) */
/* WARNING: Removing unreachable block (ram,0x000102e1c434) */
/* WARNING: Removing unreachable block (ram,0x000102e1c4ac) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102e1c438) */
/* WARNING: Removing unreachable block (ram,0x000102e1c408) */
/* WARNING: Removing unreachable block (ram,0x000102e1c7e4) */

void FUN_102e1c3bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = param_1;
    func_0x000107c61174(param_1);
    lVar1 = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102e1c680; end: 102e1c70f;  */

void FUN_102e1c680(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c61174(lVar2);
        FUN_102e0fff8();
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102e1c710; end: 102e1c79b;  */

void FUN_102e1c710(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61170(uVar1);
  FUN_102e1cb28(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102e1c79c; end: 102e1c7a3;  */

void FUN_102e1c79c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x28);
    if (lVar3 != 0) {
      lVar2 = lVar1 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c61174(lVar3);
        FUN_102e0fff8();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102e1c7a4; end: 102e1c83b;  */

void FUN_102e1c7a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61170(uVar1);
  FUN_102e1c2bc();
  func_0x000107c550d8();
  func_0x000107c61170(uVar1);
  uStack_50 = 0x3ff0000000000000;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x20),param_2,&uStack_50);
  func_0x000107c5d4c8(*(undefined8 *)(unaff_x20 + 0x20),param_2,0);
  func_0x000107c5d3f0(*(undefined8 *)(unaff_x20 + 0x20),param_2,0,0,1);
  func_0x000107c55394(*(undefined8 *)(unaff_x20 + 0x20),param_2,1);
  return;
}



/* Entry: 102e1c83c; end: 102e1ca73;  */

void FUN_102e1c83c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c498f8();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_1105d7e28;
  func_0x000107c613fc(&UNK_1105d7e28,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_40 = FUN_102e1ca74;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100fef460;
  puStack_48 = &UNK_1105d7e40;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  func_0x000107c6157c(puVar3);
  func_0x000107c5ca5c(0x400c000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar1 = puStack_38;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  func_0x000107c4c190();
  func_0x000107c61180();
  func_0x000107c3d8e0();
  func_0x000107c61170(puVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e1ca74; end: 102e1ca7b;  */

void FUN_102e1ca74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1105d7e78;
    func_0x000107c613fc(&UNK_1105d7e78,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = 0x3fe6666666666666;
    uStack_58 = 0x102e1cb1c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105d7e90;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_50;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c3dccc(0x3fd0000000000000,puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102e1ca7c; end: 102e1caff;  */

void FUN_102e1ca7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  FUN_102e1c2bc();
  func_0x000107c529dc();
  func_0x000107c61170(lVar1);
  func_0x000107c55394(*(undefined8 *)(param_2 + 0x20),param_3,0);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c6088c(auStack_60,param_1,param_1);
  func_0x000107c5a03c(uVar2,param_3,auStack_60);
  return;
}



/* Entry: 102e1cb00; end: 102e1cb27;  */

void FUN_102e1cb00(long param_1,long param_2)

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



/* Entry: 102e1cb28; end: 102e1cb4b;  */

undefined8 FUN_102e1cb28(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e1cb4c; end: 102e1cb53;  */

void FUN_102e1cb4c(long param_1,long param_2)

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



/* Entry: 102e1cb54; end: 102e1cc9f;  */

void FUN_102e1cb54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1105d7ec8;
  func_0x000107c613fc(&UNK_1105d7ec8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102e1d0f8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105d7ee0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105d7f18;
  func_0x000107c613fc(&UNK_1105d7f18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,unaff_x20);
  pcStack_60 = (code *)0x102e1d120;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105d7f30;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3dcd4(0x3fe0000000000000,0,puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102e1cca0; end: 102e1cd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e1cca0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d490;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f1d490);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeff0;
    func_0x000107c610f8();
    func_0x000107c45eac();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102e1cd28; end: 102e1cf0b;  */

/* WARNING: Possible PIC construction at 0x000102e1cd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1cd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1cdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1ce60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1ceb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1ce64) */
/* WARNING: Removing unreachable block (ram,0x000102e1cdd4) */
/* WARNING: Removing unreachable block (ram,0x000102e1cda0) */
/* WARNING: Removing unreachable block (ram,0x000102e1cd8c) */
/* WARNING: Removing unreachable block (ram,0x000102e1ceb8) */

void FUN_102e1cd28(void)

{
  undefined *puVar1;
  
  func_0x000107c5a050();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c3fdd0(0x3feb333333333333);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102e1cf0c; end: 102e1cf9f; -[_TtC21PlayGamesServicesImpl24PlayGamesLensLoadingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102e1cf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112f1d490) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102e1cd28();
  func_0x000107c61170(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 102e1cfa0; end: 102e1d003; -[_TtC21PlayGamesServicesImpl24PlayGamesLensLoadingView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1cfa0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f1d490) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlayGamesServicesImpl/PlayGamesLensLoadingView.swift",0x34,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1d004);
  (*pcVar1)();
}



/* Entry: 102e1d004; end: 102e1d00b;  */

void FUN_102e1d004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e1d00c; end: 102e1d093;  */

void FUN_102e1d00c(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61174();
    lVar1 = param_3;
    func_0x000107c3dc40();
    if (param_1 == 0.0) {
      FUN_102e1cca0();
      func_0x000107c5be00();
      func_0x000107c61170(lVar1);
      func_0x000107c550d8(param_3);
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102e1d094; end: 102e1d0c7;  */

void FUN_102e1d094(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e1d0c8; end: 102e1d0d7; -[_TtC21PlayGamesServicesImpl24PlayGamesLensLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d490));
  return;
}



/* Entry: 102e1d0d8; end: 102e1d0f7;  */

void FUN_102e1d0d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7af8);
  return;
}



/* Entry: 102e1d0f8; end: 102e1d12f;  */

void FUN_102e1d0f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e1d130; end: 102e1d1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e1d130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d4c0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f1d4c0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c526c0(0,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102e1d1e0; end: 102e1d273; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController frameOfPresentedViewInContainerView] */

undefined8 FUN_102e1d1e0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_2;
  func_0x000107c403bc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    param_1 = 0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 102e1d274; end: 102e1d3d7;  */

/* WARNING: Possible PIC construction at 0x000102e1d2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1d304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1d390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1d308) */
/* WARNING: Removing unreachable block (ram,0x000102e1d3bc) */
/* WARNING: Removing unreachable block (ram,0x000102e1d30c) */
/* WARNING: Removing unreachable block (ram,0x000102e1d2c4) */
/* WARNING: Removing unreachable block (ram,0x000102e1d394) */

void FUN_102e1d274(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c403bc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x20;
    FUN_102e1d130();
    func_0x000107c3ec60(unaff_x20);
    func_0x000107c54b80(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102e1d3d8; end: 102e1d3ff; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController presentationTransitionWillBegin] */

void FUN_102e1d3d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e1d274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1d400; end: 102e1d4e7;  */

void FUN_102e1d400(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5cf40();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = &UNK_1105d7f68;
    func_0x000107c613fc(&UNK_1105d7f68,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    uStack_40 = 0x102e1d828;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1013c1f34;
    puStack_48 = &UNK_1105d7f80;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    func_0x000107c3dcb8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102e1d4e8; end: 102e1d50f; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController dismissalTransitionWillBegin] */

void FUN_102e1d4e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e1d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1d510; end: 102e1d54f; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController dismissalTransitionDidEnd:] */

/* WARNING: Possible PIC construction at 0x000102e1d538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1d53c) */

void FUN_102e1d510(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x000107c61174();
    FUN_102e1d130();
    func_0x000107c4ff34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102e1d550; end: 102e1d693;  */

void FUN_102e1d550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_containerViewWillLayoutSubviews_112540930);
  FUN_102e1d130();
  lVar2 = unaff_x20;
  func_0x000107c403bc();
  func_0x000107c61180();
  if (lVar2 == 0) {
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
    param_4 = 0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c54b80(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61170(puVar1);
  lVar2 = unaff_x20;
  func_0x000107c4f074();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c403bc();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
    }
    else {
      func_0x000107c3ec60();
      func_0x000107c61170(unaff_x20);
    }
    func_0x000107c54b80(param_1,param_2,param_3,param_4,lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102e1d694; end: 102e1d6bb; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController containerViewWillLayoutSubviews] */

void FUN_102e1d694(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e1d550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1d6bc; end: 102e1d71b; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController initWithPresentedViewController:presentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d6bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f1d4c0) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_initWithPresentedViewController__1125ebc88,param_3,param_4);
  return;
}



/* Entry: 102e1d71c; end: 102e1d74f;  */

void FUN_102e1d71c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e1d750; end: 102e1d75f; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d4c0));
  return;
}



/* Entry: 102e1d760; end: 102e1d77f;  */

void FUN_102e1d760(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7bb0);
  return;
}



/* Entry: 102e1d780; end: 102e1d783; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_102e1d780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102e1d784; end: 102e1d7d7; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController animationControllerForPresentedController:presentingController:sourceController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d784(void)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0;
  func_0x000102e1da28();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f1d4f0) = 1;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e1d7d8; end: 102e1d857; -[_TtC21PlayGamesServicesImpl31PlayGamesPresentationController animationControllerForDismissedController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d7d8(void)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0;
  func_0x000102e1da28();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f1d4f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e1d858; end: 102e1d873;  */

void FUN_102e1d858(long param_1,long param_2)

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



/* Entry: 102e1d874; end: 102e1d8a3;  */

void FUN_102e1d874(undefined8 param_1)

{
  FUN_102e1d130();
  func_0x000107c526c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1d8a4; end: 102e1d8ab;  */

void FUN_102e1d8a4(long param_1,long param_2)

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



/* Entry: 102e1d8ac; end: 102e1d8b7; -[_TtC21PlayGamesServicesImpl27PlayGamesTransitionAnimator transitionDuration:] */

undefined8 FUN_102e1d8ac(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 102e1d8b8; end: 102e1d923; -[_TtC21PlayGamesServicesImpl27PlayGamesTransitionAnimator animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1d8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_112f1d4f0);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  if (cVar1 == '\x01') {
    FUN_102e1da48();
  }
  else {
    FUN_102e1dca0(param_3);
  }
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1d924; end: 102e1d95f;  */

void FUN_102e1d924(long param_1)

{
  code *pcVar1;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1d960);
  (*pcVar1)();
}



/* Entry: 102e1d960; end: 102e1d9c7;  */

void FUN_102e1d960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_5 != 0) {
    func_0x000107c54b80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1d9c8);
  (*pcVar1)();
}



/* Entry: 102e1d9c8; end: 102e1da47; -[_TtC21PlayGamesServicesImpl27PlayGamesTransitionAnimator init] */

void FUN_102e1d9c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesTransitionAnimator",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1d9f4);
  (*pcVar1)();
}


