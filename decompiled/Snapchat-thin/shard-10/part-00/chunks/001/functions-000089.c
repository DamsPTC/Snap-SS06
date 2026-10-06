/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10745f4b0; end: 10745f4cf;  */

undefined8 FUN_10745f4b0(undefined8 *param_1)

{
  func_0x00010745f964();
  return *param_1;
}



/* Entry: 10745f4d0; end: 10745f547;  */

void FUN_10745f4d0(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined ***pppuStack_f0;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_48;
  
  func_0x000107460818();
  func_0x000107460754();
  param_1 = param_1 + 0xe0;
  func_0x0001074607b0();
  func_0x00010724e404();
  ppuStack_48 = &PTR_FUN_1109b2600;
  func_0x000107460894();
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746072c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_1;
  func_0x000107460854();
  func_0x00010746086c();
  func_0x00010746079c();
  pcStack_68 = FUN_10745f548;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107460740();
  uStack_98 = extraout_x8_00;
  FUN_10745f83c(param_1);
  uVar3 = lVar2 + 0xe0;
  func_0x0001074607b0();
  func_0x000107279a5c();
  uVar1 = *(char *)(param_2 + 0x38) == '\x01';
  if ((bool)uVar1) {
    func_0x0001074607f8();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869920();
    if ((uVar3 & 1) != 0) {
      func_0x0001074607f8();
      lVar4 = param_1;
      func_0x000107869874(param_1,plVar5,lVar2 + 0x188);
      func_0x0001074607f8();
      uStack_a0 = 0;
      func_0x000107869848(param_1 + 0x18,lVar4,&ppuStack_108);
      plVar5 = &lStack_100;
      func_0x00010726af18(plVar5);
      func_0x0001074607f8();
      lVar4 = lVar2 + 0x188;
      func_0x0001077551c8(lVar4,plVar5);
      func_0x0001074607f8();
      plVar5 = (long *)(lVar2 + 0x1a0);
      FUN_10745f68c(&ppuStack_108,plVar5,lVar4);
    }
  }
  else {
    ppuStack_108 = &PTR_DAT_1109b2680;
    pppuStack_f0 = &ppuStack_108;
    lStack_100 = lVar2;
    lStack_f8 = param_1;
    func_0x000107460894();
    func_0x000107460854();
    plVar5 = (long *)(lVar2 + 0x188);
    func_0x000107869990();
  }
  func_0x000107460874();
  func_0x00010746072c(uStack_98);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107460874();
  FUN_10745f870(param_1);
  func_0x000107460794();
  pcStack_128 = FUN_10745f68c;
  lStack_138 = param_1;
  ppuStack_130 = &puStack_70;
  func_0x000107460818();
  func_0x00010745f964();
  lStack_138 = *plVar5;
  func_0x00010726290c(extraout_x8_01,&lStack_138,param_1);
  return;
}



/* Entry: 10745f548; end: 10745f68b;  */

void FUN_10745f548(long param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined **ppuStack_a8;
  long lStack_a0;
  
  func_0x000107460740();
  FUN_10745f83c();
  uVar2 = param_1 + 0xe0;
  func_0x0001074607b0();
  func_0x000107279a5c();
  uVar1 = *(char *)(param_2 + 0x38) == '\x01';
  if ((bool)uVar1) {
    func_0x0001074607f8();
    func_0x000107869920();
    if ((uVar2 & 1) != 0) {
      func_0x0001074607f8();
      lVar3 = unaff_x19;
      func_0x000107869874();
      func_0x0001074607f8();
      func_0x000107869848(unaff_x19 + 0x18,lVar3,&ppuStack_a8);
      plVar4 = &lStack_a0;
      func_0x00010726af18(plVar4);
      func_0x0001074607f8();
      lVar3 = param_1 + 0x188;
      func_0x0001077551c8(lVar3,plVar4);
      func_0x0001074607f8();
      FUN_10745f68c(&ppuStack_a8,param_1 + 0x1a0,lVar3);
    }
  }
  else {
    ppuStack_a8 = &PTR_DAT_1109b2680;
    lStack_a0 = param_1;
    func_0x000107460894();
    func_0x000107460854();
    func_0x000107869990();
  }
  func_0x000107460874();
  func_0x00010746072c(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107460874();
  FUN_10745f870();
  func_0x000107460794();
  func_0x000107460818();
  func_0x00010745f964();
  func_0x00010726290c(extraout_x8_00,&stack0xffffffffffffff28);
  return;
}



/* Entry: 10745f68c; end: 10745f6c3;  */

void FUN_10745f68c(void)

{
  undefined8 extraout_x8;
  
  func_0x000107460818();
  func_0x00010745f964();
  func_0x00010726290c(extraout_x8,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10745f6c4; end: 10745f74f;  */

void FUN_10745f6c4(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x0001074608b4();
  func_0x000107279a5c();
  func_0x00010786a340(param_1);
  if (*(long *)(*(long *)(param_2 + 0x1a0) + 0x18) != 0) {
    func_0x00010786a740(param_1,0x1138369c0,0x1138369c0,param_2 + 0x1a0,
                        *(undefined8 *)(param_2 + 0x198));
  }
  FUN_10746024c(param_2 + 0x1a0,0,0);
  func_0x000107279ee0(auStack_30);
  return;
}



/* Entry: 10745f750; end: 10745f79b;  */

void FUN_10745f750(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x0001074608b4();
  func_0x00010724e404();
  func_0x000107277f0c(param_1,param_2 + 0x188);
  func_0x00010724e49c(auStack_30);
  return;
}



/* Entry: 10745f79c; end: 10745f83b;  */

undefined *** FUN_10745f79c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  undefined ***unaff_x19;
  undefined **ppuStack_58;
  long lStack_50;
  
  lVar1 = param_1;
  func_0x000107460740();
  func_0x0001074607b0(lVar1 + 0xe0);
  func_0x00010724e404();
  func_0x0001078696e8();
  ppuStack_58 = &PTR_FUN_1109b2700;
  lStack_50 = param_1;
  func_0x000107869d34(param_2,&ppuStack_58);
  pppuVar2 = &ppuStack_58;
  FUN_1074606e8();
  func_0x00010746086c();
  func_0x00010746072c(extraout_x8);
  if ((bool)in_ZR) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  FUN_1074606e8(&ppuStack_58);
  func_0x00010726b264();
  func_0x00010746086c();
  func_0x000107460794();
  pppuVar2 = unaff_x19;
  func_0x0001078696e8();
  func_0x0001078696e8(pppuVar2 + 3);
  return unaff_x19;
}



/* Entry: 10745f83c; end: 10745f86f;  */

long FUN_10745f83c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001078696e8();
  func_0x0001078696e8(lVar1 + 0x18);
  return param_1;
}



/* Entry: 10745f870; end: 10745f897;  */

/* WARNING: Possible PIC construction at 0x00010745f884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010745f888) */

void FUN_10745f870(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1 + 0x18;
  func_0x00010726b2ac();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230(param_1 + 0x18);
  return;
}



/* Entry: 10745f898; end: 10745f8ff;  */

void FUN_10745f898(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_10745f900();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_10745f93c(param_1);
  return;
}



/* Entry: 10745f900; end: 10745f93b;  */

long FUN_10745f900(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10745f93c; end: 10745f9a3;  */

long FUN_10745f93c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10745f9a4; end: 10745f9c3;  */

void FUN_10745f9a4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10745f9c4(&uStack_11,param_1);
  return;
}



/* Entry: 10745f9c4; end: 10745fa2f;  */

long FUN_10745f9c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_30;
  
  func_0x000107460740();
  func_0x0001074607a4();
  lVar1 = lStack_30;
  FUN_10745fa74();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x000107460800();
  func_0x00010746072c(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000107460800();
  func_0x00010746079c();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10745fa58();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10745fa30; end: 10745fa57;  */

long FUN_10745fa30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10745fa58();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10745fa58; end: 10745fa73;  */

void FUN_10745fa58(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107460824();
  FUN_10745fac4();
  return;
}



/* Entry: 10745fa74; end: 10745fa9f;  */

void FUN_10745fa74(void)

{
  func_0x000107460824();
  FUN_10745fac4();
  return;
}



/* Entry: 10745faa0; end: 10745faa3;  */

void FUN_10745faa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10745faa4; end: 10745fab7;  */

void FUN_10745faa4(void)

{
  FUN_10745fadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745fab8; end: 10745fac3;  */

void FUN_10745fab8(long param_1)

{
  long extraout_x8;
  
  func_0x000107274f8c(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107261ddc();
    func_0x000107274f80();
  }
  return;
}



/* Entry: 10745fac4; end: 10745fadb;  */

void FUN_10745fac4(long param_1)

{
  func_0x000107261fa8();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10745fadc; end: 10745fb07;  */

void FUN_10745fadc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b2790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10745fb08; end: 10745fb43;  */

void FUN_10745fb08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x30;
  __Znwm();
  func_0x0001074607cc(&PTR_DAT_1109b2530);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10745fb44; end: 10745fb7b;  */

void FUN_10745fb44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_DAT_1109b2530;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10745fb7c; end: 10745fc0b;  */

void FUN_10745fb7c(long param_1,ulong param_2)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107460818();
  iVar1 = (int)*(undefined8 *)(param_1 + 8) + 0x188;
  func_0x000107869920();
  if ((param_2 & 1) == 0) {
    func_0x0001072772ec(auStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    FUN_10745fc40();
    if (iVar1 == 0) {
      return;
    }
    FUN_10745ffc8(auStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  }
  func_0x000107460808(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107460808(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001072628ec(auStack_48,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10745fc0c; end: 10745fc33;  */

void FUN_10745fc0c(undefined8 param_1)

{
  func_0x0001074608c8();
  func_0x00010746084c(param_1,&PTR_DAT_1109b25e0);
  func_0x0001074607dc();
  return;
}



/* Entry: 10745fc34; end: 10745fc3f;  */

undefined ** FUN_10745fc34(void)

{
  return &PTR_DAT_1109b25e0;
}



/* Entry: 10745fc40; end: 10745fcb7;  */

uint FUN_10745fc40(uint param_1)

{
  func_0x00010745fc58();
  return param_1 ^ 1;
}



/* Entry: 10745fcb8; end: 10745fdaf;  */

undefined8 FUN_10745fcb8(void)

{
  return 1;
}



/* Entry: 10745fdb0; end: 10745fdcf;  */

void FUN_10745fdb0(void)

{
  FUN_10745fdd0();
  return;
}



/* Entry: 10745fdd0; end: 10745fe27;  */

bool FUN_10745fdd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 &&
         (lVar1 = param_1, func_0x00010745fc58(param_1,param_3), (int)lVar1 != 0))) {
    param_1 = param_1 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return param_1 == param_2;
}



/* Entry: 10745fe28; end: 10745fe33;  */

bool FUN_10745fe28(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  if (*(long *)(lVar2 + 0x18) == *(long *)(lVar4 + 0x18)) {
    lVar3 = lVar4;
    if (*(ulong *)(lVar2 + 0x10) <= *(ulong *)(lVar4 + 0x10)) {
      lVar3 = lVar2;
      lVar2 = lVar4;
    }
    func_0x000107296314();
    lStack_30 = lVar3;
    lStack_28 = lVar4;
    while ((bVar1 = lStack_30 == 0, lStack_30 != 0 &&
           (lVar4 = lVar2, FUN_10745feb4(lVar2,lStack_28), (int)lVar4 != 0))) {
      func_0x0001072963cc(&lStack_30);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10745fe34; end: 10745feb3;  */

bool FUN_10745fe34(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    lVar2 = param_2;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar2 = param_1;
      param_1 = param_2;
    }
    func_0x000107296314();
    lStack_30 = lVar2;
    lStack_28 = param_2;
    while ((bVar1 = lStack_30 == 0, lStack_30 != 0 &&
           (lVar2 = param_1, FUN_10745feb4(param_1,lStack_28), (int)lVar2 != 0))) {
      func_0x0001072963cc(&lStack_30);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10745feb4; end: 10745ff8f;  */

bool FUN_10745feb4(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint6 uVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar10;
  byte bVar16;
  
  func_0x000107460818();
  func_0x000104c2fe38();
  lVar4 = 0;
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[2];
  uVar2 = uVar5 >> 0xc ^ param_2 >> 7;
  bVar1 = (byte)param_2;
  uVar9 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
          0x7f7f7f7f7f7f;
  while( true ) {
    uVar10 = *(undefined8 *)(uVar5 + (uVar2 & uVar6));
    cVar11 = (char)((ulong)uVar10 >> 8);
    cVar12 = (char)((ulong)uVar10 >> 0x10);
    cVar13 = (char)((ulong)uVar10 >> 0x18);
    cVar14 = (char)((ulong)uVar10 >> 0x20);
    cVar15 = (char)((ulong)uVar10 >> 0x28);
    bVar8 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar16 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar8 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar15 == (char)(uVar9 >> 0x28)),
                                            CONCAT14(-(cVar14 == (char)(uVar9 >> 0x20)),
                                                     CONCAT13(-(cVar13 == (char)(uVar9 >> 0x18)),
                                                              CONCAT12(-(cVar12 ==
                                                                        (char)(uVar9 >> 0x10)),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 (char)(uVar9 >> 8))
                                                                                ,-((char)uVar10 ==
                                                                                  (char)uVar9)))))))
                         ) & 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar3 = unaff_x20[1];
      FUN_10745ff90();
      if ((uVar3 & 1) != 0) goto LAB_10745ff68;
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar8 == 0x80),
                                         CONCAT15(-(cVar15 == -0x80),
                                                  CONCAT14(-(cVar14 == -0x80),
                                                           CONCAT13(-(cVar13 == -0x80),
                                                                    CONCAT12(-(cVar12 == -0x80),
                                                                             CONCAT11(-(cVar11 ==
                                                                                       -0x80),-((
                                                  char)uVar10 == -0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar2 = lVar4 + (uVar2 & uVar6);
  }
LAB_10745ff68:
  return uVar7 != 0;
}



/* Entry: 10745ff90; end: 10745ffc7;  */

void FUN_10745ff90(int param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107460818();
  func_0x000104c32db4();
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0xa0);
    if (uVar1 != 0xffffffff && *(uint *)(unaff_x19 + 0xa0) == uVar1) {
      (*(code *)(&PTR_FUN_1109b2590)[uVar1])
                (&stack0xffffffffffffffe8,unaff_x20 + 0x40,unaff_x19 + 0x40);
    }
    return;
  }
  return;
}



/* Entry: 10745ffc8; end: 107460057;  */

void FUN_10745ffc8(long *param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  func_0x00010726c9e8();
  if ((uVar3 & 1) == 0) {
    func_0x0001072955a4(param_2[1] + (long)plVar2 * 0xa8 + 0x40,param_4 + 8);
  }
  else {
    FUN_107460058(param_2,plVar2,param_3,param_4);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0xa8;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107460058; end: 10746006f;  */

long FUN_107460058(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0xa8;
  lVar2 = lVar1;
  func_0x000104c2fe00(lVar1,param_3);
  func_0x0001072786d8(lVar2 + 0x40,param_4 + 8);
  return lVar1;
}



/* Entry: 107460070; end: 1074600ab;  */

long FUN_107460070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x0001072786d8(lVar1 + 0x40,param_3 + 8);
  return param_1;
}



/* Entry: 1074600ac; end: 1074600b3;  */

void FUN_1074600ac(void)

{
  return;
}



/* Entry: 1074600b4; end: 1074600d7;  */

void FUN_1074600b4(void)

{
  func_0x0001074607c0();
  func_0x0001074607cc(&PTR_FUN_1109b2600);
  return;
}



/* Entry: 1074600d8; end: 1074600ff;  */

void FUN_1074600d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b2600;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107460100; end: 107460127;  */

void FUN_107460100(undefined8 param_1)

{
  func_0x0001074608c8();
  func_0x00010746084c(param_1,&PTR_DAT_1109b2660);
  func_0x0001074607dc();
  return;
}



/* Entry: 107460128; end: 10746013b;  */

undefined ** FUN_107460128(void)

{
  return &PTR_DAT_1109b2660;
}



/* Entry: 10746013c; end: 10746015f;  */

void FUN_10746013c(void)

{
  func_0x0001074607c0();
  func_0x0001074607cc(&PTR_DAT_1109b2680);
  return;
}



/* Entry: 107460160; end: 10746017b;  */

void FUN_107460160(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b2680;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10746017c; end: 107460217;  */

void FUN_10746017c(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [96];
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107460818();
  func_0x000107460754();
  uStack_38 = extraout_x8;
  func_0x000107869874(*(undefined8 *)(param_1 + 0x10));
  uStack_40 = 0;
  func_0x000107869848(*(long *)(unaff_x20 + 0x10) + 0x18);
  func_0x00010726af18(auStack_a0);
  FUN_10745f68c(auStack_a8);
  func_0x00010746072c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010746079c();
  func_0x0001074608c8();
  func_0x00010746084c();
  func_0x0001074607dc();
  return;
}



/* Entry: 107460218; end: 10746023f;  */

void FUN_107460218(undefined8 param_1)

{
  func_0x0001074608c8();
  func_0x00010746084c(param_1,&PTR_DAT_1109b26e0);
  func_0x0001074607dc();
  return;
}



/* Entry: 107460240; end: 10746024b;  */

undefined ** FUN_107460240(void)

{
  return &PTR_DAT_1109b26e0;
}



/* Entry: 10746024c; end: 10746027b;  */

void FUN_10746024c(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10746027c(auStack_30);
  func_0x0001074608a0();
  FUN_1073dd578(auStack_30);
  return;
}



/* Entry: 10746027c; end: 1074602e3;  */

void FUN_10746027c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [32];
  
  FUN_1074604e8(auStack_40,param_3,param_4,0,&uStack_41,&uStack_42,&uStack_43);
  FUN_1074602e4(param_1,param_2,auStack_40);
  func_0x000107261dac(auStack_40);
  return;
}



/* Entry: 1074602e4; end: 1074602f7;  */

void FUN_1074602e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_107460444(&stack0xffffffffffffffef,param_3);
    return;
  }
  if ((bRam00000001131ad798 & 1) == 0) {
    iVar6 = 0x131ad798;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_107460390(0x1131ad788);
      ___cxa_guard_release(0x1131ad798);
    }
  }
  lVar5 = lRam00000001131ad790;
  uVar4 = uRam00000001131ad788;
  param_1[1] = lRam00000001131ad790;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1074602f8; end: 10746038f;  */

void FUN_1074602f8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam00000001131ad798 & 1) == 0) {
    iVar6 = 0x131ad798;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_107460390(0x1131ad788);
      ___cxa_guard_release(0x1131ad798);
    }
  }
  lVar5 = lRam00000001131ad790;
  uVar4 = uRam00000001131ad788;
  param_1[1] = lRam00000001131ad790;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 107460390; end: 1074603ab;  */

void FUN_107460390(void)

{
  undefined1 uStack_11;
  
  FUN_1074603ac(&uStack_11);
  return;
}



/* Entry: 1074603ac; end: 107460423;  */

void FUN_1074603ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107460740();
  uStack_28 = extraout_x8;
  func_0x0001074607a4();
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_1109b2790;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &UNK_10e52b660;
  puStack_30[6] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  func_0x000107460800();
  func_0x00010746072c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_48 = FUN_107460424;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_107460444(&uStack_51,param_1);
  return;
}



/* Entry: 107460424; end: 107460443;  */

void FUN_107460424(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107460444(&uStack_11,param_1);
  return;
}



/* Entry: 107460444; end: 1074604af;  */

long FUN_107460444(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_30;
  
  func_0x000107460740();
  func_0x0001074607a4();
  lVar1 = lStack_30;
  FUN_1074604b0(lStack_30,param_2);
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x000107460800();
  func_0x00010746072c(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000107460800();
  func_0x00010746079c();
  func_0x000107460824();
  FUN_1074604d0();
  return lVar1;
}



/* Entry: 1074604b0; end: 1074604cf;  */

void FUN_1074604b0(void)

{
  func_0x000107460824();
  FUN_1074604d0();
  return;
}



/* Entry: 1074604d0; end: 1074604e7;  */

void FUN_1074604d0(long param_1)

{
  FUN_10732f758();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1074604e8; end: 1074604f3;  */

undefined8
FUN_1074604e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 * 0x38 == 0x188) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 * 0x38) / 0x38;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  func_0x00010726207c(param_1,param_4,param_5,param_6,param_7);
  FUN_107460584();
  return param_1;
}



/* Entry: 1074604f4; end: 107460583;  */

undefined8
FUN_1074604f4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 - param_2 == 0x188) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 - param_2) / 0x38;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  func_0x00010726207c(param_1,param_4,param_5,param_6,param_7);
  FUN_107460584();
  return param_1;
}



/* Entry: 107460584; end: 1074605cb;  */

void FUN_107460584(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x0001072628ec(auStack_48,param_1,param_2);
  }
  return;
}



/* Entry: 1074605cc; end: 1074605d3;  */

void FUN_1074605cc(void)

{
  return;
}



/* Entry: 1074605d4; end: 1074605f7;  */

void FUN_1074605d4(void)

{
  func_0x0001074607c0();
  func_0x0001074607cc(&PTR_FUN_1109b2700);
  return;
}



/* Entry: 1074605f8; end: 107460613;  */

void FUN_1074605f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b2700;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107460614; end: 1074606b3;  */

void FUN_107460614(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x000107460754();
  uVar1 = *(char *)(param_4 + 0x38) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    lVar4 = *(long *)(param_1 + 8);
    lVar2 = param_4;
    func_0x00010725ffc4(param_4);
    func_0x000107869920(lVar4 + 0x188,lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010725ffc4(param_4);
    func_0x000104c2fe00(auStack_70,param_4);
    func_0x000107869874(uVar3,auStack_70,lVar4 + 0x188);
    func_0x000104c2f714();
  }
  func_0x00010746072c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  func_0x00010746079c();
  func_0x0001074608c8();
  func_0x00010746084c();
  func_0x0001074607dc();
  return;
}



/* Entry: 1074606b4; end: 1074606db;  */

void FUN_1074606b4(undefined8 param_1)

{
  func_0x0001074608c8();
  func_0x00010746084c(param_1,&PTR_DAT_1109b2760);
  func_0x0001074607dc();
  return;
}



/* Entry: 1074606dc; end: 1074606e7;  */

undefined ** FUN_1074606dc(void)

{
  return &PTR_DAT_1109b2760;
}



/* Entry: 1074606e8; end: 10746072b;  */

long * FUN_1074606e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10746072c; end: 1074608db;  */

void FUN_10746072c(void)

{
  return;
}



/* Entry: 1074608dc; end: 107460953;  */

void FUN_1074608dc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 uStack_88;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  FUN_107460b98();
  (**(code **)(extraout_x8 + 0x18))(auStack_60);
  func_0x000107460bcc();
  func_0x000107460bf0();
  func_0x000107460bb8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107460b98();
    func_0x000107460be4();
    func_0x000107460bcc();
    func_0x000107460bf0();
    func_0x000107460bb8(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      return;
    }
  }
  return;
}



/* Entry: 107460954; end: 10746095b;  */

void FUN_107460954(void)

{
  return;
}



/* Entry: 10746095c; end: 107460a0b;  */

void FUN_10746095c(void)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  FUN_107460b98();
  func_0x000107460be4();
  func_0x000107460bcc();
  func_0x000107460bf0();
  func_0x000107460bb8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107460b98();
    func_0x000107460be4();
    func_0x000107460bcc();
    func_0x000107460bf0();
    func_0x000107460bb8(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_107460a0c(&uStack_f0);
      extraout_x8[1] = uStack_e8;
      *extraout_x8 = uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      FUN_107460b6c(&uStack_f0);
      return;
    }
  }
  return;
}



/* Entry: 107460a0c; end: 107460a2f;  */

void FUN_107460a0c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107460a30(&uStack_11,param_1);
  return;
}



/* Entry: 107460a30; end: 107460ac7;  */

undefined1 * FUN_107460a30(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_107460ac8(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_1109b28c0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_1109b2858;
  puStack_30[4] = *(undefined8 *)(param_3 + 8);
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x000107460b5c();
  func_0x000107460bb8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_107460af4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 107460ac8; end: 107460af3;  */

long FUN_107460ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107460af4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107460af4; end: 107460b1f;  */

void FUN_107460af4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b28c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107460b20; end: 107460b23;  */

void FUN_107460b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b28c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107460b24; end: 107460b37;  */

void FUN_107460b24(void)

{
  func_0x000107460b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107460b38; end: 107460b6b;  */

void FUN_107460b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107460b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107460b6c; end: 107460b97;  */

long FUN_107460b6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107460b98; end: 107460bf7;  */

void FUN_107460b98(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 107460bf8; end: 107460d63;  */

ulong FUN_107460bf8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_68;
  
  lVar5 = -0x61c8864680b583eb;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if ((char)param_1[0x2a] == '\x01') {
    lVar5 = param_1[0x28];
    FUN_107460db8(lVar5);
    lVar5 = lVar5 + -0x61c8864680b583eb;
  }
  if ((char)param_1[0x25] == '\x01') {
    uStack_68 = 0;
    FUN_107460d64(&uStack_68,param_1 + 0x1d);
    uVar2 = uStack_68;
  }
  else if ((char)param_1[0x1c] == '\x01') {
    uVar2 = param_1[0x1a];
    FUN_107460db8(uVar2);
  }
  else {
    uVar2 = 0;
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x20))(param_1);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1);
  uStack_68 = (long)plVar1 + 0x9e3779b97f4a7c15;
  func_0x0001073f26dc(&uStack_68,param_1 + 8);
  func_0x0001073f26dc(&uStack_68,param_1 + 0xf);
  FUN_1073ca0ec(&uStack_68,param_1 + 0x26);
  FUN_1073ca0ec(&uStack_68,(long)param_1 + 0x134);
  uStack_68 = lVar5 + uStack_68 * 0x1000 + (uStack_68 >> 4) ^ uStack_68;
  uStack_68 = uVar2 + 0x9e3779b97f4a7c15 + uStack_68 * 0x1000 + (uStack_68 >> 4) ^ uStack_68;
  uStack_68 = (long)plVar3 + (uStack_68 >> 4) + uStack_68 * 0x1000 + -0x61c8864680b583eb ^ uStack_68
  ;
  return (long)plVar4 + (uStack_68 >> 4) + uStack_68 * 0x1000 + -0x61c8864680b583eb ^ uStack_68;
}



/* Entry: 107460d64; end: 107460db7;  */

void FUN_107460d64(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x00010786e644();
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 107460db8; end: 107460dc3;  */

void FUN_107460db8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107460dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 107460dc4; end: 107460e9f;  */

undefined4 *
FUN_107460dc4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x000107781994(param_5);
  *param_2 = param_1;
  uStack_48 = *param_4;
  puVar1 = param_5;
  func_0x00010778196c(param_5);
  puVar2 = &uStack_48;
  FUN_107460ea0(puVar2,puVar1);
  *(undefined8 **)(param_2 + 1) = puVar2;
  param_2[3] = param_3;
  param_2[4] = param_6;
  *(undefined1 *)(param_2 + 5) = 1;
  puVar2 = param_5;
  func_0x0001077819e4(param_5);
  func_0x00010724e660(param_2 + 6,puVar2);
  puVar2 = param_5;
  func_0x000107781a0c(param_5);
  func_0x00010724e660(param_2 + 0xc,puVar2);
  puVar2 = param_5;
  FUN_107460ed0();
  *(undefined8 **)(param_2 + 0x12) = puVar2;
  func_0x000107781a34();
  uVar4 = param_5[1];
  uVar3 = *param_5;
  param_2[0x18] = *(undefined4 *)(param_5 + 2);
  *(undefined8 *)(param_2 + 0x16) = uVar4;
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  return param_2;
}



/* Entry: 107460ea0; end: 107460ecf;  */

ulong FUN_107460ea0(ushort *param_1,int *param_2)

{
  return (ulong)(*param_2 + 2U & 0xffff) << 0x20 | (ulong)(param_2[1] + 2) << 0x30 |
         (ulong)(uint)(*(int *)(param_1 + 2) << 0x10) | (ulong)*param_1;
}



/* Entry: 107460ed0; end: 107460f23;  */

undefined8 FUN_107460ed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  func_0x00010778196c();
  func_0x000107781a5c();
  puVar1 = param_1;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar1 = puVar3;
  }
  puVar2 = param_1 + 2;
  if (*(char *)(param_1 + 3) == '\0') {
    puVar2 = puVar3 + 1;
  }
  return CONCAT44(*puVar2,*puVar1);
}



/* Entry: 107460f24; end: 107461013;  */

uint FUN_107460f24(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    func_0x000107468f7c();
    uVar3 = 0;
    puVar2 = (undefined8 *)*unaff_x20;
    while (puVar2 != unaff_x20 + 1) {
      lVar1 = unaff_x19;
      FUN_1073f9894();
      if (param_2 + 8 == lVar1) {
        uVar3 = 3;
      }
      else {
        if ((((*(int *)(lVar1 + 100) != *(int *)((long)puVar2 + 100)) ||
             (*(short *)(lVar1 + 0x5c) != *(short *)((long)puVar2 + 0x5c))) ||
            (*(short *)(lVar1 + 0x5e) != *(short *)((long)puVar2 + 0x5e))) && ((uVar3 & 0xfe) == 0))
        {
          uVar3 = 1;
        }
        if (((*(int *)(lVar1 + 0xa0) != *(int *)(puVar2 + 0x14)) ||
            (*(int *)(lVar1 + 0xa4) != *(int *)((long)puVar2 + 0xa4))) && (uVar3 < 3)) {
          uVar3 = 2;
        }
      }
      func_0x00010002c7d4();
    }
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}



/* Entry: 107461014; end: 107461027;  */

void FUN_107461014(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_DAT_1109b2930)[param_2 & 0xffffffff];
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 107461028; end: 1074610df;  */

void FUN_107461028(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  FUN_1074610e0(param_2 + 0x88,param_3,&uStack_50,&uStack_80);
  FUN_1074610e0(param_2 + 0xa0,param_3,&uStack_50,&uStack_80);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  func_0x0001072638b4(param_1 + 3,&uStack_80);
  func_0x00010726ea70(&uStack_80);
  FUN_1074623cc(&uStack_50);
  return;
}



/* Entry: 1074610e0; end: 1074613a3;  */

void FUN_1074610e0(undefined8 *param_1,ulong *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  int extraout_w10;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  puVar16 = (undefined8 *)*param_1;
  do {
    if (puVar16 == param_1 + 1) {
      return;
    }
    puVar6 = param_2;
    func_0x00010747b918(param_2,puVar16 + 4);
    if ((ulong)puVar6 >> 0x20 == 0) {
      func_0x0001072e89a4(param_4,puVar16 + 4);
    }
    else {
      if (*(char *)((long)puVar16 + 0x6c) == '\x01') {
        piVar7 = (int *)(puVar16 + 0xd);
        func_0x000107312278();
        if (*piVar7 == (int)puVar6) goto LAB_107461348;
      }
      puVar8 = param_2;
      func_0x00010747b8f8(param_2,puVar16 + 4);
      if (puVar8 != (ulong *)0x0) {
        uVar9 = *puVar8;
        FUN_107460ed0();
        if ((*(int *)(puVar16 + 0x14) == (int)uVar9) &&
           (*(int *)((long)puVar16 + 0xa4) == (int)(uVar9 >> 0x20))) {
          iVar5 = (int)*puVar8;
          func_0x00010778196c();
          FUN_1074344b4();
          if (iVar5 != 0) {
            uStack_78 = (ulong)CONCAT24(*(undefined2 *)((long)puVar16 + 0x5e),
                                        (uint)*(ushort *)((long)puVar16 + 0x5c));
            uVar9 = *puVar8;
            func_0x00010778196c(uVar9);
            puVar10 = &uStack_78;
            FUN_107460ea0(puVar10,uVar9);
            uVar9 = *puVar8;
            uStack_80 = puVar8[1];
            uStack_88 = uVar9;
            if (uStack_80 == 0) {
              uVar15 = 0;
            }
            else {
              do {
                func_0x000107469668();
                uVar15 = uStack_80;
              } while (extraout_w10 != 0);
            }
            uStack_88 = 0;
            uStack_80 = 0;
            puVar8 = (ulong *)param_3[1];
            puStack_68 = puVar10;
            if (puVar8 < (ulong *)param_3[2]) {
              *puVar8 = uVar9;
              puVar8[1] = uVar15;
              uStack_78 = 0;
              uStack_70 = 0;
              puVar8[2] = (ulong)puVar10;
              puVar8 = puVar8 + 3;
            }
            else {
              puVar17 = (ulong *)*param_3;
              lVar18 = (long)puVar8 - (long)puVar17;
              uVar1 = lVar18 / 0x18 + 1;
              uStack_78 = uVar9;
              uStack_70 = uVar15;
              if (0xaaaaaaaaaaaaaaa < uVar1) {
                FUN_1074623c0();
LAB_107461384:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x107461388);
                (*pcVar4)();
              }
              uVar3 = (param_3[2] - (long)puVar17) / 0x18;
              uVar14 = uVar3 * 2;
              if (uVar14 < uVar1 || uVar14 - uVar1 == 0) {
                uVar14 = uVar1;
              }
              if (0x555555555555554 < uVar3) {
                uVar14 = 0xaaaaaaaaaaaaaaa;
              }
              if (0xaaaaaaaaaaaaaaa < uVar14) {
                func_0x000104bd35f4();
                goto LAB_107461384;
              }
              lVar11 = uVar14 * 0x18;
              __Znwm();
              puVar2 = (ulong *)(lVar11 + lVar18);
              *puVar2 = uVar9;
              puVar2[1] = uVar15;
              uStack_78 = 0;
              uStack_70 = 0;
              puVar2[2] = (ulong)puVar10;
              puVar13 = puVar2 + (lVar18 / -0x18) * 3;
              for (puVar10 = puVar17; puVar10 != puVar8; puVar10 = puVar10 + 3) {
                uVar9 = *puVar10;
                puVar13[1] = puVar10[1];
                *puVar13 = uVar9;
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar13[2] = puVar10[2];
                puVar13 = puVar13 + 3;
              }
              for (; puVar17 != puVar8; puVar17 = puVar17 + 3) {
                func_0x00010725af58(puVar17);
              }
              lVar12 = *param_3;
              puVar8 = puVar2 + 3;
              *param_3 = (long)(puVar2 + (lVar18 / -0x18) * 3);
              param_3[1] = (long)puVar8;
              param_3[2] = lVar11 + uVar14 * 0x18;
              if (lVar12 != 0) {
                __ZdlPv();
              }
            }
            param_3[1] = (long)puVar8;
            func_0x00010725af58(&uStack_78);
            func_0x00010725af58(&uStack_88);
            *(int *)(puVar16 + 0xd) = (int)puVar6;
            *(undefined1 *)((long)puVar16 + 0x6c) = 1;
          }
        }
      }
    }
LAB_107461348:
    func_0x00010002c7d4();
  } while( true );
}



/* Entry: 1074613a4; end: 10746140f;  */

ulong FUN_1074613a4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    puVar1 = (ulong *)(param_1 + 0xb8);
    FUN_107461410();
    uVar2 = *puVar1;
  }
  else {
    lVar3 = param_1 + 0x88;
    FUN_107461428();
    func_0x0001074697e8();
    uVar2 = lVar3 + unaff_x20;
    lVar3 = param_1 + 0xa0;
    FUN_107461428();
    uVar2 = lVar3 + uVar2 * 0x1000 + (uVar2 >> 4) + unaff_x20 ^ uVar2;
    *(ulong *)(param_1 + 0xb8) = uVar2;
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return uVar2;
}



/* Entry: 107461410; end: 107461427;  */

undefined8 * FUN_107461410(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x0001074697e8();
  puStack_48 = (undefined8 *)(param_1[2] + unaff_x20);
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1 + 1) {
    func_0x0001073f26dc(&puStack_48,puVar1 + 4);
    func_0x000107469214((ulong)*(ushort *)((long)puVar1 + 0x5c) + unaff_x20 +
                        (long)puStack_48 * 0x1000 + ((ulong)puStack_48 >> 4) ^ (ulong)puStack_48);
    func_0x000107469214();
    func_0x000107469214();
    func_0x000107469214();
    puStack_48 = extraout_x8;
    func_0x00010002c7d4();
  }
  return puStack_48;
}



/* Entry: 107461428; end: 10746150b;  */

ulong FUN_107461428(undefined8 *param_1)

{
  ulong extraout_x8;
  undefined8 *puVar1;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x0001074697e8();
  uStack_38 = param_1[2] + unaff_x20;
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1 + 1) {
    func_0x0001073f26dc(&uStack_38,puVar1 + 4);
    func_0x000107469214((ulong)*(ushort *)((long)puVar1 + 0x5c) + unaff_x20 + uStack_38 * 0x1000 +
                        (uStack_38 >> 4) ^ uStack_38);
    func_0x000107469214();
    func_0x000107469214();
    func_0x000107469214();
    uStack_38 = extraout_x8;
    func_0x00010002c7d4();
  }
  return uStack_38;
}



/* Entry: 10746150c; end: 10746167b;  */

/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_10746150c(undefined8 *param_1,undefined4 param_2,undefined *****param_3,undefined *****param_4,
             undefined *****param_5,undefined *****param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  int *******pppppppiVar1;
  uint uVar2;
  undefined ****ppppuVar3;
  int *******pppppppiVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ****ppppuVar9;
  undefined1 in_ZR;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined **ppuVar16;
  int iVar22;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined8 *******pppppppuVar20;
  undefined1 *puVar21;
  undefined8 *puVar23;
  undefined *****pppppuVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined **ppuVar32;
  ulong uVar33;
  long lVar34;
  undefined **ppuVar35;
  undefined *****pppppuVar36;
  undefined **ppuVar37;
  undefined ****ppppuVar38;
  int *******pppppppiVar39;
  long lVar40;
  long lVar41;
  undefined ***pppuVar42;
  double dVar43;
  undefined1 auStack_428 [8];
  long lStack_420;
  ulong uStack_408;
  long lStack_400;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long lStack_378;
  undefined ****ppppuStack_370;
  undefined ***pppuStack_368;
  uint ****ppppuStack_360;
  long *plStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined ****ppppuStack_330;
  undefined ***pppuStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined ****ppppuStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined ***pppuStack_2c0;
  undefined ***pppuStack_2b8;
  undefined8 uStack_2b0;
  int ******ppppppiStack_2a8;
  int *****pppppiStack_2a0;
  undefined8 uStack_298;
  int *******pppppppiStack_290;
  int *******pppppppiStack_288;
  undefined8 uStack_280;
  undefined ****ppppuStack_278;
  undefined ****ppppuStack_270;
  undefined8 uStack_268;
  uint uStack_260;
  uint uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *******pppppppuStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined1 auStack_210 [8];
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_200;
  int iStack_1f8;
  char cStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ushort uStack_1d0;
  undefined1 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined1 uStack_190;
  int iStack_188;
  undefined1 uStack_180;
  undefined8 uStack_158;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined ****appppuStack_b8 [7];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  pppppuVar24 = param_5;
  func_0x00010746948c();
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pppppuVar36 = param_3 + 2;
  uStack_68 = extraout_x8;
LAB_107461558:
  uVar27 = (uint)param_8;
  iVar25 = (int)param_7;
  pppppuVar36 = (undefined *****)*pppppuVar36;
  if (pppppuVar36 != (undefined *****)0x0) {
    if (((ulong)pppppuVar36[9] & 1) == 0) {
      param_3 = param_5;
      FUN_107409864(param_5,pppppuVar36 + 2);
      bVar10 = param_3 == (undefined *****)0x0;
      if (*(char *)(pppppuVar36 + 9) == '\x01') goto LAB_107461590;
      in_ZR = false;
      bVar5 = false;
      if (!bVar10) goto LAB_1074615b4;
      goto LAB_1074615b8;
    }
    bVar10 = false;
LAB_107461590:
    param_3 = param_6;
    FUN_107409864(param_6,pppppuVar36 + 2);
    in_ZR = param_3 == (undefined *****)0x0;
    bVar5 = (bool)in_ZR;
    if (bVar10) goto LAB_1074615b8;
LAB_1074615b4:
    bVar5 = true;
    if ((bool)in_ZR) {
LAB_1074615b8:
      param_3 = param_4;
      FUN_10746e4dc(&uStack_d0,param_4,pppppuVar36 + 2);
      if ((bStack_c0 & 1) != 0) {
        if (bVar10) {
          func_0x0001074696a8();
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          uStack_70 = param_2;
          FUN_107462460(param_1,appppuStack_b8);
        }
        else {
          if (!bVar5) goto LAB_107461558;
          func_0x0001074696a8();
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          uStack_70 = param_2;
          FUN_107462460(param_1 + 3,appppuStack_b8);
        }
        param_3 = appppuStack_b8;
        func_0x000104c2f714();
      }
    }
    goto LAB_107461558;
  }
  func_0x0001074691cc(uStack_68);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(appppuStack_b8);
  FUN_1074625ac(param_1);
  func_0x000107469138();
  lVar34 = param_9;
  func_0x00010746948c();
  uStack_1e0._0_4_ = (uint)uStack_1e0 & 0xffffff00;
  uVar12 = (int)lVar34 + 0x980;
  uStack_158 = extraout_x8_01;
  func_0x00010746939c();
  iVar15 = (int)param_9;
  if (uVar12 == 0) {
    uStack_1e0._0_4_ = 0;
    func_0x000107469680();
    uStack_1e0._0_4_ = (uint)uStack_1e0 & 0xffffff00;
    iVar15 = iVar15 + 0x140;
    func_0x00010746939c();
    uVar11 = iVar15 == 0;
    uStack_260 = uVar27;
    if ((bool)uVar11) {
      uStack_260 = uVar12;
    }
    ppppuStack_278 = (undefined ****)0x0;
    ppppuStack_270 = (undefined ****)0x0;
    uStack_268 = 0;
    pppppppiStack_290 = (int *******)&pppppppiStack_288;
    pppppppiStack_288 = (int *******)0x0;
    uStack_280 = 0;
    uStack_298 = 0;
    ppppppiStack_2a8 = &pppppiStack_2a0;
    pppppiStack_2a0 = (int *****)0x0;
    pppuStack_2c0 = (undefined ***)0x0;
    pppuStack_2b8 = (undefined ***)0x0;
    uStack_2b0 = 0;
    ppuStack_2d8 = (undefined **)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2f8 = 0;
    ppppuStack_300 = (undefined ****)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2e0 = 0x3f800000;
    pppuStack_328 = (undefined ***)0x0;
    ppppuStack_330 = (undefined ****)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_310 = 0x3f800000;
    lStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    ppppuStack_370 = &pppuStack_2c0;
    pppuStack_368 = &ppuStack_2d8;
    ppppuStack_360 = (uint ****)&ppppuStack_278;
    plStack_358 = &lStack_348;
    lStack_350 = param_9;
    uStack_25c = uStack_260;
    func_0x00010746945c(&uStack_3a0);
    func_0x000107468fcc(auStack_428);
    while (lStack_378 != 0) {
      FUN_107462924(&uStack_250,
                    *(long *)(lStack_398 + (CONCAT44(uStack_37c,uStack_380) / 0x27) * 8) +
                    (CONCAT44(uStack_37c,uStack_380) % 0x27) * 0x68);
      FUN_10746297c(&uStack_3a0);
      iVar15 = (int)(((long)ppppuStack_270 - (long)ppppuStack_278) / 0x18) + -1;
      if (iStack_1f8 == 0) {
        pppppppuVar20 = pppppppuStack_248;
        FUN_107460ed0(pppppppuStack_248);
        puVar21 = auStack_428;
        FUN_1074672d4(puVar21,pppppppuVar20,(ulong)pppppppuVar20 >> 0x20);
        if (puVar21 == (undefined1 *)0x0) {
          if (iVar25 != 0) {
            func_0x00010746965c();
            func_0x0001074691e8();
            func_0x000107468fcc(&uStack_1e0);
            goto LAB_1074620b8;
          }
          pppppuVar36 = &ppppuStack_330;
          pppppppuVar20 = pppppppuStack_248;
        }
        else {
          func_0x000107469558(pppppppuStack_248);
          FUN_1074660d4(&pppuStack_2c0,&uStack_1e0);
          pppppuVar36 = pppppuVar24;
          func_0x0001072ef024(pppppuVar24,pppppppuStack_248);
          pppppppuVar20 = pppppppuStack_248;
          if (pppppuVar36 == (undefined *****)0x0) {
            uVar26 = 0;
          }
          else {
            uVar26 = *(undefined4 *)(pppppuVar36 + 9);
          }
          uStack_258 = *(undefined8 *)(puVar21 + 0x14);
          FUN_107460dc4(&uStack_1e0,iVar15,&uStack_258,pppppppuStack_248,uVar26);
          pppppppiVar1 = &ppppppiStack_2a8;
          if (cStack_1f0 == '\0') {
            pppppppiVar1 = (int *******)&pppppppiStack_290;
          }
          FUN_1074661bc(pppppppiVar1,pppppppuVar20,&uStack_1e0);
          func_0x000107469298();
          pppppppuVar20 = pppppppuStack_248;
          func_0x00010778196c();
          uVar11 = *(char *)(pppppppuVar20 + 2) == '\x01';
          if (!(bool)uVar11) goto LAB_107462144;
          pppppuVar36 = &ppppuStack_300;
          pppppppuVar20 = pppppppuStack_248;
        }
LAB_107462140:
        func_0x0001072e89a4(pppppuVar36,pppppppuVar20);
      }
      else {
        puVar21 = auStack_428;
        FUN_1074672d4(puVar21,uStack_208,uStack_204);
        pppppppuVar20 = &pppppppuStack_248;
        if (puVar21 != (undefined1 *)0x0) {
          func_0x000107469558(CONCAT44(uStack_204,uStack_208));
          FUN_107466558(&ppuStack_2d8,&uStack_1e0);
          uStack_1e0._0_4_ = uStack_200;
          uStack_258 = *(undefined8 *)(puVar21 + 0x14);
          puVar29 = &uStack_258;
          FUN_107460ea0(puVar29,auStack_210);
          uStack_1e0._4_4_ = SUB84(puVar29,0);
          uStack_1d8._0_4_ = (int)((ulong)puVar29 >> 0x20);
          uStack_1d0 = uStack_1d0 & 0xff00;
          uStack_1cc = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_1b0 = 0;
          uStack_1b8 = 0;
          uStack_1a0 = 0;
          uStack_1a8 = 0;
          ppuStack_198 = (undefined **)CONCAT44(uStack_204,uStack_208);
          uStack_190 = 0;
          uStack_180 = 0;
          uVar11 = cStack_1f0 == '\0';
          pppppppiVar1 = &ppppppiStack_2a8;
          if ((bool)uVar11) {
            pppppppiVar1 = (int *******)&pppppppiStack_290;
          }
          uStack_1d8._4_4_ = iVar15;
          FUN_1074661bc(pppppppiVar1,&pppppppuStack_248,&uStack_1e0);
          func_0x000107469298();
          pppppuVar36 = &ppppuStack_300;
          goto LAB_107462140;
        }
        if (iVar25 == 0) {
          pppppuVar36 = &ppppuStack_330;
          goto LAB_107462140;
        }
        func_0x00010746965c();
        func_0x0001074691e8();
        func_0x000107468fcc(&uStack_1e0);
LAB_1074620b8:
        FUN_10746714c(auStack_428,&uStack_1e0);
        FUN_107468a64(&uStack_1e0);
      }
LAB_107462144:
      FUN_107463120(&pppppppuStack_248);
    }
    func_0x0001074691e8();
    lVar34 = extraout_x8_00;
    FUN_107466ba4(extraout_x8_00,&ppppuStack_278,&pppppppiStack_290,&ppppppiStack_2a8,
                  &ppppuStack_300,&lStack_348);
    func_0x0001072638b4(lVar34 + 200,&ppppuStack_330);
    FUN_107468a64(auStack_428);
    FUN_107462a28(&uStack_3a0);
    FUN_107466e2c(&lStack_348);
    func_0x00010726ea70(&ppppuStack_330);
    func_0x00010726ea70(&ppppuStack_300);
    FUN_107462b40(&ppuStack_2d8);
    func_0x000107462b68(&pppuStack_2c0);
    FUN_107408ca0(&ppppppiStack_2a8);
    FUN_107408ca0(&pppppppiStack_290);
    pppppuVar36 = &ppppuStack_278;
  }
  else {
    uStack_1e0._0_4_ = 0;
    func_0x000107469680();
    uStack_1e0._0_4_ = (uint)uStack_1e0 & 0xffffff00;
    iVar13 = iVar15 + 0x140;
    func_0x00010746939c();
    uVar11 = iVar13 == 0;
    if ((bool)uVar11) {
      uVar27 = uVar12;
    }
    uStack_1e0._0_4_ = 0xfffffffc;
    param_9 = param_9 + 0x990;
    func_0x0001072a5e64(param_9,&uStack_1e0);
    ppppuStack_300 = (undefined ****)0x0;
    lStack_2f8 = 0;
    uStack_2f0 = 0;
    ppppuStack_330 = &pppuStack_328;
    pppuStack_328 = (undefined ***)0x0;
    uStack_320 = 0;
    ppppuStack_370 = &pppuStack_368;
    pppuStack_368 = (undefined ***)0x0;
    ppppuStack_360 = (uint ****)0x0;
    ppppuStack_278 = (undefined ****)0x0;
    ppppuStack_270 = (undefined ****)0x0;
    uStack_268 = 0;
    pppppppiStack_290 = (int *******)0x0;
    pppppppiStack_288 = (int *******)0x0;
    uStack_280 = 0;
    pppppppuStack_248 = (undefined8 *******)0x0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_230 = 0x3f800000;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_380 = 0x3f800000;
    ppppppiStack_2a8 = (int ******)0x0;
    pppppiStack_2a0 = (int *****)0x0;
    uStack_298 = 0;
    func_0x00010746945c(auStack_428);
    puVar6 = PTR___tlv_bootstrap_11340d528;
    pppuStack_2c0 = (undefined ***)0x0;
    pppuStack_2b8 = (undefined ***)0x0;
    uStack_2b0 = 0;
    ppuVar16 = &PTR___tlv_bootstrap_11340d528;
    (*(code *)PTR___tlv_bootstrap_11340d528)();
    while (lStack_400 != 0) {
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      uStack_1d8._0_4_ = 0;
      uStack_1d8._4_4_ = 0;
      uStack_1d0 = 1;
      FUN_1074627c8(&ppppuStack_300,&uStack_1e0);
      func_0x000107469420();
      iVar13 = (int)((lStack_2f8 - (long)ppppuStack_300) / 0x18) + -1;
      FUN_1074628e8(&pppuStack_2c0);
      while (lStack_400 != 0) {
        FUN_107462924(&uStack_1e0,
                      *(long *)(lStack_420 + (uStack_408 / 0x27) * 8) + (uStack_408 % 0x27) * 0x68);
        FUN_10746297c(auStack_428);
        if (iStack_188 == 0) {
          iVar14 = (int)uStack_1d8;
          iVar22 = uStack_1d8._4_4_;
          FUN_107460ed0();
          ppuStack_2d8 = (undefined **)0xffffffffffffffff;
          uStack_2d0 = CONCAT44(iVar22 + 2,iVar14 + 2);
          func_0x000107469410();
        }
        else {
          uStack_2d0 = CONCAT44((int)((ulong)ppuStack_198 >> 0x20) + 2,(int)ppuStack_198 + 2);
          ppuStack_2d8 = (undefined **)0xffffffffffffffff;
          func_0x000107469410();
        }
        FUN_107463120(&uStack_1d8);
      }
      FUN_107463460(&lStack_348,((long)pppuStack_2b8 - (long)pppuStack_2c0) / 0x18);
      lVar34 = lStack_348;
      puVar29 = (undefined8 *)0x0;
      for (pppuVar19 = pppuStack_2c0; pppuVar19 != pppuStack_2b8; pppuVar19 = pppuVar19 + 0xf) {
        if (*(int *)((long)pppuVar19 + 0xc) * *(int *)(pppuVar19 + 1) != 0) {
          *(undefined ****)(lStack_348 + (long)puVar29 * 8) = pppuVar19;
          puVar29 = (undefined8 *)((long)puVar29 + 1);
        }
      }
      lVar40 = (long)puVar29 * 8;
      lVar31 = 4;
      lVar41 = lVar40;
      do {
        if (puVar29 != (undefined8 *)0x0) {
          _memmove(lStack_348 + lVar41,lVar34,lVar40);
        }
        lVar41 = lVar41 + lVar40;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      if (puVar29 == (undefined8 *)0x0) {
        lVar34 = 0;
      }
      else {
        FUN_1074634a4(lStack_348,lStack_348 + lVar40,LZCOUNT(puVar29) << 1 ^ 0x7e,1);
        lVar34 = (long)puVar29 << 1;
        FUN_107463b9c(lStack_348 + lVar40,lStack_348 + (long)puVar29 * 0x10,
                      LZCOUNT(lVar40 >> 3) << 1 ^ 0x7e,1);
      }
      if (lVar34 != (long)puVar29 * 3) {
        func_0x000107469224(lStack_348 + (long)puVar29 * 0x10,lStack_348 + (long)puVar29 * 0x18);
        FUN_1074642d0();
      }
      if ((long)puVar29 * 3 != (long)puVar29 * 4) {
        func_0x000107469224(lStack_348 + (long)puVar29 * 0x18,lStack_348 + (long)puVar29 * 0x20);
        FUN_107464a8c();
      }
      if (puVar29 != (undefined8 *)0x0) {
        func_0x000107469224(lStack_348 + (long)puVar29 * 0x20,lStack_348 + (long)puVar29 * 0x28);
        FUN_107465128();
      }
      puVar7 = PTR___tlv_bootstrap_11340d540;
      ppuVar32 = &PTR___tlv_bootstrap_11340d540;
      ppuStack_2d8 = (undefined **)CONCAT44(uVar27,uVar27);
      (*(code *)PTR___tlv_bootstrap_11340d540)();
      if (((ulong)*ppuVar32 & 1) == 0) {
        uStack_1e0._0_4_ = 0;
        uStack_1e0._4_4_ = 0;
        (*(code *)puVar6)(&PTR___tlv_bootstrap_11340d528);
        FUN_1074657e4();
        ppuVar32 = &PTR___tlv_bootstrap_11340d540;
        (*(code *)puVar7)();
        *(undefined1 *)ppuVar32 = 1;
      }
      lVar34 = 0;
      puVar28 = (undefined8 *)0x0;
      bVar10 = false;
      *(undefined4 *)(ppuVar16 + 4) = 0;
      ppuVar32 = (undefined **)0xffffffff;
      lVar41 = 5;
      puVar30 = puVar29;
      ppuVar35 = (undefined **)(ulong)uVar27;
      ppuVar37 = (undefined **)(ulong)uVar27;
      do {
        uStack_1e0 = (undefined8 *)(lVar34 + lStack_348);
        uStack_1d8 = uStack_1e0 + (long)puVar29;
        puVar23 = &uStack_1e0;
        ppuVar17 = ppuVar16;
        FUN_10746585c(ppuVar16,puVar23,(undefined **)CONCAT44(uVar27,uVar27),(int)param_9);
        if ((int)puVar23 == 1) {
          if ((int)((ulong)ppuVar17 >> 0x20) * (int)ppuVar17 <= (int)ppuVar35 * (int)ppuVar37) {
            bVar10 = true;
            puVar28 = uStack_1e0;
            puVar30 = uStack_1d8;
            ppuVar35 = ppuVar17;
            ppuVar37 = (undefined **)((ulong)ppuVar17 >> 0x20);
            ppuStack_2d8 = ppuVar17;
          }
        }
        else if ((int)puVar23 == 0) {
          if (bVar10) {
            bVar10 = true;
          }
          else if ((int)ppuVar32 < (int)ppuVar17) {
            bVar10 = true;
            puVar28 = uStack_1e0;
            puVar30 = uStack_1d8;
            ppuVar32 = ppuVar17;
          }
          else {
            bVar10 = false;
          }
        }
        lVar34 = lVar34 + lVar40;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      FUN_1074657c4(ppuVar16,&ppuStack_2d8);
      for (; puVar28 != puVar30; puVar28 = puVar28 + 1) {
        puVar29 = (undefined8 *)*puVar28;
        FUN_107465e10(&uStack_1e0,ppuVar16,puVar29[1]);
        if ((char)uStack_1d0 == '\x01') {
          puVar29[1] = uStack_1d8;
          *puVar29 = uStack_1e0;
        }
        else {
          *puVar29 = 0xffffffffffffffff;
        }
      }
      uVar12 = *(uint *)ppuVar16;
      uVar2 = *(uint *)((long)ppuVar16 + 4);
      FUN_10746609c(&lStack_348);
      pppuVar8 = pppuStack_2b8;
      pppuVar19 = pppuStack_2c0;
      puVar29 = uStack_1e0;
      while( true ) {
        lVar34 = lStack_2f8;
        uStack_1e0._4_4_ = (undefined4)((ulong)puVar29 >> 0x20);
        uStack_1e0._0_4_ = (uint)puVar29;
        if (pppuVar19 == pppuVar8) break;
        uStack_1e0 = puVar29;
        if ((*(int *)pppuVar19 == -1) || (*(int *)((long)pppuVar19 + 4) == -1)) {
          if (iVar25 == 0) {
            iVar14 = *(int *)(pppuVar19 + 0xd);
joined_r0x000107461be8:
            pppuVar42 = pppuVar19 + 3;
            if (iVar14 == 0) {
              pppuVar42 = (undefined ***)pppuVar19[3];
            }
LAB_107461bf0:
            puVar28 = &uStack_3a0;
            goto LAB_107461d04;
          }
          if (*(int *)(pppuVar19 + 0xd) == 0) {
            ppuVar32 = pppuVar19[3];
            FUN_107460ed0();
            if (uVar27 < (int)ppuVar32 + 2U || uVar27 < (int)((ulong)ppuVar32 >> 0x20) + 2U) {
              iVar14 = *(int *)(pppuVar19 + 0xd);
              puVar29 = uStack_1e0;
              goto joined_r0x000107461be8;
            }
          }
          else if (uVar27 <= *(int *)(pppuVar19 + 0xb) + 2U ||
                   uVar27 <= *(int *)((long)pppuVar19 + 0x5c) + 2U) {
            pppuVar42 = pppuVar19 + 3;
            goto LAB_107461bf0;
          }
          puVar21 = auStack_428;
          FUN_107462bcc();
          if (puVar21 == (undefined1 *)0x0) {
            FUN_107462be8(auStack_428);
          }
          FUN_107463370(*(long *)(lStack_420 + ((lStack_400 + uStack_408) / 0x27) * 8) +
                        ((lStack_400 + uStack_408) % 0x27) * 0x68,pppuVar19 + 2);
          lStack_400 = lStack_400 + 1;
          puVar29 = uStack_1e0;
        }
        else {
          pppuVar42 = pppuVar19 + 3;
          if (*(int *)(pppuVar19 + 0xd) == 0) {
            func_0x000107469788();
            FUN_1074660d4(&ppppuStack_278,&uStack_1e0);
            pppppuVar36 = pppppuVar24;
            func_0x0001072ef024(pppppuVar24,*pppuVar42);
            if (pppppuVar36 == (undefined *****)0x0) {
              uVar26 = 0;
            }
            else {
              uVar26 = *(undefined4 *)(pppppuVar36 + 9);
            }
            ppuVar32 = pppuVar19[3];
            ppuStack_2d8 = *pppuVar19;
            FUN_107460dc4(&uStack_1e0,iVar13,&ppuStack_2d8,ppuVar32,uVar26);
            pppppuVar36 = &ppppuStack_370;
            if (*(char *)(pppuVar19 + 0xe) == '\0') {
              pppppuVar36 = &ppppuStack_330;
            }
            FUN_1074661bc(pppppuVar36,ppuVar32,&uStack_1e0);
            func_0x000107469298();
            ppuVar32 = *pppuVar42;
            func_0x00010778196c();
            puVar29 = uStack_1e0;
            if (*(char *)(ppuVar32 + 2) != '\x01') goto LAB_107461d0c;
            pppuVar42 = (undefined ***)*pppuVar42;
          }
          else {
            func_0x000107469788();
            FUN_107466558(&pppppppiStack_290,&uStack_1e0);
            uStack_1e0._0_4_ = *(uint *)(pppuVar19 + 0xc);
            ppuStack_2d8 = *pppuVar19;
            pppuVar18 = &ppuStack_2d8;
            FUN_107460ea0(pppuVar18,pppuVar19 + 10);
            uStack_1e0._4_4_ = SUB84(pppuVar18,0);
            uStack_1d8._0_4_ = (int)((ulong)pppuVar18 >> 0x20);
            uStack_1d0 = uStack_1d0 & 0xff00;
            uStack_1cc = 0;
            uStack_1c0 = 0;
            uStack_1c8 = 0;
            uStack_1b0 = 0;
            uStack_1b8 = 0;
            uStack_1a0 = 0;
            uStack_1a8 = 0;
            ppuStack_198 = pppuVar19[0xb];
            uStack_190 = 0;
            uStack_180 = 0;
            pppppuVar36 = &ppppuStack_370;
            if (*(char *)(pppuVar19 + 0xe) == '\0') {
              pppppuVar36 = &ppppuStack_330;
            }
            uStack_1d8._4_4_ = iVar13;
            FUN_1074661bc(pppppuVar36,pppuVar42,&uStack_1e0);
            func_0x000107469298();
            puVar29 = (undefined8 *)CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0);
          }
          puVar28 = &uStack_250;
LAB_107461d04:
          uStack_1e0 = puVar29;
          func_0x0001072e89a4(puVar28,pppuVar42);
          puVar29 = uStack_1e0;
        }
LAB_107461d0c:
        pppuVar19 = pppuVar19 + 0xf;
      }
      uStack_1e0._0_4_ = (uint)uStack_1e0 & 0xffffff00;
      iVar13 = iVar15 + 0x3f0;
      func_0x00010746939c();
      if (uVar12 < 9) {
        uVar12 = 8;
      }
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      func_0x00010724e0f8(&uStack_1e0,CONCAT44(uVar2,uVar12));
      FUN_10742a894(lVar34 + -0x18,&uStack_1e0);
      func_0x000107469420();
      ppppuVar9 = ppppuStack_270;
      uVar33 = 0;
      ppppuVar3 = ppppuStack_278;
      for (ppppuVar38 = ppppuStack_278; pppppppiVar1 = pppppppiStack_288, ppppuVar38 != ppppuVar9;
          ppppuVar38 = ppppuVar38 + 3) {
        func_0x00010778196c(*ppppuVar38);
        FUN_107466640();
        pppuVar19 = *ppppuVar38;
        func_0x00010778196c();
        iVar14 = *(int *)pppuVar19;
        pppuVar19 = *ppppuVar38;
        func_0x00010778196c();
        uVar33 = uVar33 + (uint)(*(int *)((long)pppuVar19 + 4) * iVar14);
      }
      pppppppiVar4 = pppppppiStack_290;
      for (pppppppiVar39 = pppppppiStack_290; uVar11 = pppppppiVar39 == pppppppiVar1, !(bool)uVar11;
          pppppppiVar39 = (int *******)((long)pppppppiVar39 + 0x14)) {
        if (iVar13 == 0) {
          FUN_1074668c8(*(int *)(pppppppiVar39 + 1),*(int *)((long)pppppppiVar39 + 0xc),
                        *(int *)pppppppiVar39,*(int *)((long)pppppppiVar39 + 4),lVar34 + -0x18);
        }
        else {
          func_0x0001074696d8(&uStack_1e0,*pppppppiVar39);
          FUN_107466640();
          func_0x000107469420();
        }
        uVar33 = uVar33 + (uint)(*(int *)((long)pppppppiVar39 + 4) * *(int *)pppppppiVar39);
      }
      dVar43 = (double)uVar33;
      func_0x0001074695ac(uVar2 * uVar12);
      uStack_1e0._0_4_ = SUB84(dVar43,0);
      uStack_1e0._4_4_ = (undefined4)((ulong)dVar43 >> 0x20);
      FUN_1074669f0(&ppppppiStack_2a8,&uStack_1e0);
      pppppppiStack_288 = pppppppiVar4;
      ppppuStack_270 = ppppuVar3;
    }
    lVar34 = extraout_x8_00;
    FUN_107466ba4(extraout_x8_00,&ppppuStack_300,&ppppuStack_330,&ppppuStack_370,&uStack_250,
                  &ppppppiStack_2a8);
    func_0x0001072638b4(lVar34 + 200,&uStack_3a0);
    func_0x0001074629f4(&pppuStack_2c0);
    FUN_107462a28(auStack_428);
    FUN_107466e2c(&ppppppiStack_2a8);
    func_0x00010726ea70(&uStack_3a0);
    func_0x00010726ea70(&uStack_250);
    FUN_107462b40(&pppppppiStack_290);
    func_0x000107462b68(&ppppuStack_278);
    FUN_107408ca0(&ppppuStack_370);
    FUN_107408ca0(&ppppuStack_330);
    pppppuVar36 = &ppppuStack_300;
  }
  FUN_107466e64();
  func_0x0001074691cc(uStack_158);
  if (!(bool)uVar11) {
    ___stack_chk_fail();
    func_0x0001074629f4(&pppuStack_2c0);
    FUN_107462a28(auStack_428);
    FUN_107466e2c(&ppppppiStack_2a8);
    func_0x00010726ea70(&uStack_3a0);
    func_0x00010726ea70(&uStack_250);
    FUN_107462b40(&pppppppiStack_290);
    func_0x000107462b68(&ppppuStack_278);
    FUN_107408ca0(&ppppuStack_370);
    FUN_107408ca0(&ppppuStack_330);
    FUN_107466e64(&ppppuStack_300);
    func_0x000107468f54();
    func_0x000107468d68();
    func_0x000107468ef8();
    func_0x0001074623f0();
    return pppppuVar36;
  }
  return pppppuVar36;
}



/* Entry: 10746167c; end: 1074623bf;  */

/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_10746167c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             int param_6,uint param_7,long param_8)

{
  int *******pppppppiVar1;
  uint uVar2;
  undefined ****ppppuVar3;
  int *******pppppppiVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  int iVar21;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  undefined *****pppppuVar20;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined8 extraout_x8;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined **ppuVar28;
  ulong uVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined ****ppppuVar33;
  int *******pppppppiVar34;
  bool bVar35;
  long lVar36;
  long lVar37;
  undefined ***pppuVar38;
  double dVar39;
  undefined1 auStack_358 [8];
  long lStack_350;
  ulong uStack_338;
  long lStack_330;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  undefined ****ppppuStack_2a0;
  undefined ***pppuStack_298;
  uint ****ppppuStack_290;
  long *plStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined ****ppppuStack_260;
  undefined ***pppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined ****ppppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined8 uStack_1e0;
  int ******ppppppiStack_1d8;
  int *****pppppiStack_1d0;
  undefined8 uStack_1c8;
  int *******pppppppiStack_1c0;
  int *******pppppppiStack_1b8;
  undefined8 uStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  int iStack_128;
  char cStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ushort uStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined1 uStack_c0;
  int iStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_88;
  
  lVar30 = param_8;
  func_0x00010746948c();
  uStack_110._0_4_ = (uint)uStack_110 & 0xffffff00;
  uVar10 = (int)lVar30 + 0x980;
  uStack_88 = extraout_x8;
  func_0x00010746939c();
  iVar13 = (int)param_8;
  if (uVar10 == 0) {
    uStack_110._0_4_ = 0;
    func_0x000107469680();
    uStack_110._0_4_ = (uint)uStack_110 & 0xffffff00;
    iVar13 = iVar13 + 0x140;
    func_0x00010746939c();
    uVar9 = iVar13 == 0;
    uStack_190 = param_7;
    if ((bool)uVar9) {
      uStack_190 = uVar10;
    }
    ppppuStack_1a8 = (undefined ****)0x0;
    ppppuStack_1a0 = (undefined ****)0x0;
    uStack_198 = 0;
    pppppppiStack_1c0 = (int *******)&pppppppiStack_1b8;
    pppppppiStack_1b8 = (int *******)0x0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    ppppppiStack_1d8 = &pppppiStack_1d0;
    pppppiStack_1d0 = (int *****)0x0;
    pppuStack_1f0 = (undefined ***)0x0;
    pppuStack_1e8 = (undefined ***)0x0;
    uStack_1e0 = 0;
    ppuStack_208 = (undefined **)0x0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    lStack_228 = 0;
    ppppuStack_230 = (undefined ****)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_210 = 0x3f800000;
    pppuStack_258 = (undefined ***)0x0;
    ppppuStack_260 = (undefined ****)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_240 = 0x3f800000;
    lStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    ppppuStack_2a0 = &pppuStack_1f0;
    pppuStack_298 = &ppuStack_208;
    ppppuStack_290 = (uint ****)&ppppuStack_1a8;
    plStack_288 = &lStack_278;
    lStack_280 = param_8;
    uStack_18c = uStack_190;
    func_0x00010746945c(&uStack_2d0);
    func_0x000107468fcc(auStack_358);
    while (lStack_2a8 != 0) {
      FUN_107462924(&uStack_180,
                    *(long *)(lStack_2c8 + (CONCAT44(uStack_2ac,uStack_2b0) / 0x27) * 8) +
                    (CONCAT44(uStack_2ac,uStack_2b0) % 0x27) * 0x68);
      FUN_10746297c(&uStack_2d0);
      iVar13 = (int)(((long)ppppuStack_1a0 - (long)ppppuStack_1a8) / 0x18) + -1;
      if (iStack_128 == 0) {
        pppppppuVar18 = pppppppuStack_178;
        FUN_107460ed0(pppppppuStack_178);
        puVar19 = auStack_358;
        FUN_1074672d4(puVar19,pppppppuVar18,(ulong)pppppppuVar18 >> 0x20);
        if (puVar19 == (undefined1 *)0x0) {
          if (param_6 != 0) {
            func_0x00010746965c();
            func_0x0001074691e8();
            func_0x000107468fcc(&uStack_110);
            goto LAB_1074620b8;
          }
          pppppuVar20 = &ppppuStack_260;
          pppppppuVar18 = pppppppuStack_178;
        }
        else {
          func_0x000107469558(pppppppuStack_178);
          FUN_1074660d4(&pppuStack_1f0,&uStack_110);
          lVar30 = param_4;
          func_0x0001072ef024(param_4,pppppppuStack_178);
          pppppppuVar18 = pppppppuStack_178;
          if (lVar30 == 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = *(undefined4 *)(lVar30 + 0x48);
          }
          uStack_188 = *(undefined8 *)(puVar19 + 0x14);
          FUN_107460dc4(&uStack_110,iVar13,&uStack_188,pppppppuStack_178,uVar23);
          pppppppiVar1 = &ppppppiStack_1d8;
          if (cStack_120 == '\0') {
            pppppppiVar1 = (int *******)&pppppppiStack_1c0;
          }
          FUN_1074661bc(pppppppiVar1,pppppppuVar18,&uStack_110);
          func_0x000107469298();
          pppppppuVar18 = pppppppuStack_178;
          func_0x00010778196c();
          uVar9 = *(char *)(pppppppuVar18 + 2) == '\x01';
          if (!(bool)uVar9) goto LAB_107462144;
          pppppuVar20 = &ppppuStack_230;
          pppppppuVar18 = pppppppuStack_178;
        }
LAB_107462140:
        func_0x0001072e89a4(pppppuVar20,pppppppuVar18);
      }
      else {
        puVar19 = auStack_358;
        FUN_1074672d4(puVar19,uStack_138,uStack_134);
        pppppppuVar18 = &pppppppuStack_178;
        if (puVar19 != (undefined1 *)0x0) {
          func_0x000107469558(CONCAT44(uStack_134,uStack_138));
          FUN_107466558(&ppuStack_208,&uStack_110);
          uStack_110._0_4_ = uStack_130;
          uStack_188 = *(undefined8 *)(puVar19 + 0x14);
          puVar25 = &uStack_188;
          FUN_107460ea0(puVar25,auStack_140);
          uStack_110._4_4_ = SUB84(puVar25,0);
          uStack_108._0_4_ = (int)((ulong)puVar25 >> 0x20);
          uStack_100 = uStack_100 & 0xff00;
          uStack_fc = 0;
          uStack_f0 = 0;
          uStack_f8 = 0;
          uStack_e0 = 0;
          uStack_e8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          ppuStack_c8 = (undefined **)CONCAT44(uStack_134,uStack_138);
          uStack_c0 = 0;
          uStack_b0 = 0;
          uVar9 = cStack_120 == '\0';
          pppppppiVar1 = &ppppppiStack_1d8;
          if ((bool)uVar9) {
            pppppppiVar1 = (int *******)&pppppppiStack_1c0;
          }
          uStack_108._4_4_ = iVar13;
          FUN_1074661bc(pppppppiVar1,&pppppppuStack_178,&uStack_110);
          func_0x000107469298();
          pppppuVar20 = &ppppuStack_230;
          goto LAB_107462140;
        }
        if (param_6 == 0) {
          pppppuVar20 = &ppppuStack_260;
          goto LAB_107462140;
        }
        func_0x00010746965c();
        func_0x0001074691e8();
        func_0x000107468fcc(&uStack_110);
LAB_1074620b8:
        FUN_10746714c(auStack_358,&uStack_110);
        FUN_107468a64(&uStack_110);
      }
LAB_107462144:
      FUN_107463120(&pppppppuStack_178);
    }
    func_0x0001074691e8();
    FUN_107466ba4(param_1,&ppppuStack_1a8,&pppppppiStack_1c0,&ppppppiStack_1d8,&ppppuStack_230,
                  &lStack_278);
    func_0x0001072638b4(param_1 + 200,&ppppuStack_260);
    FUN_107468a64(auStack_358);
    FUN_107462a28(&uStack_2d0);
    FUN_107466e2c(&lStack_278);
    func_0x00010726ea70(&ppppuStack_260);
    func_0x00010726ea70(&ppppuStack_230);
    FUN_107462b40(&ppuStack_208);
    func_0x000107462b68(&pppuStack_1f0);
    FUN_107408ca0(&ppppppiStack_1d8);
    FUN_107408ca0(&pppppppiStack_1c0);
    pppppuVar20 = &ppppuStack_1a8;
  }
  else {
    uStack_110._0_4_ = 0;
    func_0x000107469680();
    uStack_110._0_4_ = (uint)uStack_110 & 0xffffff00;
    iVar11 = iVar13 + 0x140;
    func_0x00010746939c();
    uVar9 = iVar11 == 0;
    if ((bool)uVar9) {
      param_7 = uVar10;
    }
    uStack_110._0_4_ = 0xfffffffc;
    param_8 = param_8 + 0x990;
    func_0x0001072a5e64(param_8,&uStack_110);
    ppppuStack_230 = (undefined ****)0x0;
    lStack_228 = 0;
    uStack_220 = 0;
    ppppuStack_260 = &pppuStack_258;
    pppuStack_258 = (undefined ***)0x0;
    uStack_250 = 0;
    ppppuStack_2a0 = &pppuStack_298;
    pppuStack_298 = (undefined ***)0x0;
    ppppuStack_290 = (uint ****)0x0;
    ppppuStack_1a8 = (undefined ****)0x0;
    ppppuStack_1a0 = (undefined ****)0x0;
    uStack_198 = 0;
    pppppppiStack_1c0 = (int *******)0x0;
    pppppppiStack_1b8 = (int *******)0x0;
    uStack_1b0 = 0;
    pppppppuStack_178 = (undefined8 *******)0x0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_160 = 0x3f800000;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3f800000;
    ppppppiStack_1d8 = (int ******)0x0;
    pppppiStack_1d0 = (int *****)0x0;
    uStack_1c8 = 0;
    func_0x00010746945c(auStack_358);
    puVar5 = PTR___tlv_bootstrap_11340d528;
    pppuStack_1f0 = (undefined ***)0x0;
    pppuStack_1e8 = (undefined ***)0x0;
    uStack_1e0 = 0;
    ppuVar14 = &PTR___tlv_bootstrap_11340d528;
    (*(code *)PTR___tlv_bootstrap_11340d528)();
    while (lStack_330 != 0) {
      uStack_110._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uStack_108._0_4_ = 0;
      uStack_108._4_4_ = 0;
      uStack_100 = 1;
      FUN_1074627c8(&ppppuStack_230,&uStack_110);
      func_0x000107469420();
      iVar11 = (int)((lStack_228 - (long)ppppuStack_230) / 0x18) + -1;
      FUN_1074628e8(&pppuStack_1f0);
      while (lStack_330 != 0) {
        FUN_107462924(&uStack_110,
                      *(long *)(lStack_350 + (uStack_338 / 0x27) * 8) + (uStack_338 % 0x27) * 0x68);
        FUN_10746297c(auStack_358);
        if (iStack_b8 == 0) {
          iVar12 = (int)uStack_108;
          iVar21 = uStack_108._4_4_;
          FUN_107460ed0();
          ppuStack_208 = (undefined **)0xffffffffffffffff;
          uStack_200 = CONCAT44(iVar21 + 2,iVar12 + 2);
          func_0x000107469410();
        }
        else {
          uStack_200 = CONCAT44((int)((ulong)ppuStack_c8 >> 0x20) + 2,(int)ppuStack_c8 + 2);
          ppuStack_208 = (undefined **)0xffffffffffffffff;
          func_0x000107469410();
        }
        FUN_107463120(&uStack_108);
      }
      FUN_107463460(&lStack_278,((long)pppuStack_1e8 - (long)pppuStack_1f0) / 0x18);
      lVar30 = lStack_278;
      puVar25 = (undefined8 *)0x0;
      for (pppuVar17 = pppuStack_1f0; pppuVar17 != pppuStack_1e8; pppuVar17 = pppuVar17 + 0xf) {
        if (*(int *)((long)pppuVar17 + 0xc) * *(int *)(pppuVar17 + 1) != 0) {
          *(undefined ****)(lStack_278 + (long)puVar25 * 8) = pppuVar17;
          puVar25 = (undefined8 *)((long)puVar25 + 1);
        }
      }
      lVar36 = (long)puVar25 * 8;
      lVar27 = 4;
      lVar37 = lVar36;
      do {
        if (puVar25 != (undefined8 *)0x0) {
          _memmove(lStack_278 + lVar37,lVar30,lVar36);
        }
        lVar37 = lVar37 + lVar36;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      if (puVar25 == (undefined8 *)0x0) {
        lVar30 = 0;
      }
      else {
        FUN_1074634a4(lStack_278,lStack_278 + lVar36,LZCOUNT(puVar25) << 1 ^ 0x7e,1);
        lVar30 = (long)puVar25 << 1;
        FUN_107463b9c(lStack_278 + lVar36,lStack_278 + (long)puVar25 * 0x10,
                      LZCOUNT(lVar36 >> 3) << 1 ^ 0x7e,1);
      }
      if (lVar30 != (long)puVar25 * 3) {
        func_0x000107469224(lStack_278 + (long)puVar25 * 0x10,lStack_278 + (long)puVar25 * 0x18);
        FUN_1074642d0();
      }
      if ((long)puVar25 * 3 != (long)puVar25 * 4) {
        func_0x000107469224(lStack_278 + (long)puVar25 * 0x18,lStack_278 + (long)puVar25 * 0x20);
        FUN_107464a8c();
      }
      if (puVar25 != (undefined8 *)0x0) {
        func_0x000107469224(lStack_278 + (long)puVar25 * 0x20,lStack_278 + (long)puVar25 * 0x28);
        FUN_107465128();
      }
      puVar6 = PTR___tlv_bootstrap_11340d540;
      ppuVar28 = &PTR___tlv_bootstrap_11340d540;
      ppuStack_208 = (undefined **)CONCAT44(param_7,param_7);
      (*(code *)PTR___tlv_bootstrap_11340d540)();
      if (((ulong)*ppuVar28 & 1) == 0) {
        uStack_110._0_4_ = 0;
        uStack_110._4_4_ = 0;
        (*(code *)puVar5)(&PTR___tlv_bootstrap_11340d528);
        FUN_1074657e4();
        ppuVar28 = &PTR___tlv_bootstrap_11340d540;
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar28 = 1;
      }
      lVar30 = 0;
      puVar24 = (undefined8 *)0x0;
      bVar35 = false;
      *(undefined4 *)(ppuVar14 + 4) = 0;
      ppuVar28 = (undefined **)0xffffffff;
      lVar37 = 5;
      puVar26 = puVar25;
      ppuVar31 = (undefined **)(ulong)param_7;
      ppuVar32 = (undefined **)(ulong)param_7;
      do {
        uStack_110 = (undefined8 *)(lVar30 + lStack_278);
        uStack_108 = uStack_110 + (long)puVar25;
        puVar22 = &uStack_110;
        ppuVar15 = ppuVar14;
        FUN_10746585c(ppuVar14,puVar22,(undefined **)CONCAT44(param_7,param_7),(int)param_8);
        if ((int)puVar22 == 1) {
          if ((int)((ulong)ppuVar15 >> 0x20) * (int)ppuVar15 <= (int)ppuVar31 * (int)ppuVar32) {
            bVar35 = true;
            puVar24 = uStack_110;
            puVar26 = uStack_108;
            ppuVar31 = ppuVar15;
            ppuVar32 = (undefined **)((ulong)ppuVar15 >> 0x20);
            ppuStack_208 = ppuVar15;
          }
        }
        else if ((int)puVar22 == 0) {
          if (bVar35) {
            bVar35 = true;
          }
          else if ((int)ppuVar28 < (int)ppuVar15) {
            bVar35 = true;
            puVar24 = uStack_110;
            puVar26 = uStack_108;
            ppuVar28 = ppuVar15;
          }
          else {
            bVar35 = false;
          }
        }
        lVar30 = lVar30 + lVar36;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      FUN_1074657c4(ppuVar14,&ppuStack_208);
      for (; puVar24 != puVar26; puVar24 = puVar24 + 1) {
        puVar25 = (undefined8 *)*puVar24;
        FUN_107465e10(&uStack_110,ppuVar14,puVar25[1]);
        if ((char)uStack_100 == '\x01') {
          puVar25[1] = uStack_108;
          *puVar25 = uStack_110;
        }
        else {
          *puVar25 = 0xffffffffffffffff;
        }
      }
      uVar10 = *(uint *)ppuVar14;
      uVar2 = *(uint *)((long)ppuVar14 + 4);
      FUN_10746609c(&lStack_278);
      pppuVar7 = pppuStack_1e8;
      pppuVar17 = pppuStack_1f0;
      puVar25 = uStack_110;
      while( true ) {
        lVar30 = lStack_228;
        uStack_110._4_4_ = (undefined4)((ulong)puVar25 >> 0x20);
        uStack_110._0_4_ = (uint)puVar25;
        if (pppuVar17 == pppuVar7) break;
        uStack_110 = puVar25;
        if ((*(int *)pppuVar17 == -1) || (*(int *)((long)pppuVar17 + 4) == -1)) {
          if (param_6 == 0) {
            iVar12 = *(int *)(pppuVar17 + 0xd);
joined_r0x000107461be8:
            pppuVar38 = pppuVar17 + 3;
            if (iVar12 == 0) {
              pppuVar38 = (undefined ***)pppuVar17[3];
            }
LAB_107461bf0:
            puVar24 = &uStack_2d0;
            goto LAB_107461d04;
          }
          if (*(int *)(pppuVar17 + 0xd) == 0) {
            ppuVar28 = pppuVar17[3];
            FUN_107460ed0();
            if (param_7 < (int)ppuVar28 + 2U || param_7 < (int)((ulong)ppuVar28 >> 0x20) + 2U) {
              iVar12 = *(int *)(pppuVar17 + 0xd);
              puVar25 = uStack_110;
              goto joined_r0x000107461be8;
            }
          }
          else if (param_7 <= *(int *)(pppuVar17 + 0xb) + 2U ||
                   param_7 <= *(int *)((long)pppuVar17 + 0x5c) + 2U) {
            pppuVar38 = pppuVar17 + 3;
            goto LAB_107461bf0;
          }
          puVar19 = auStack_358;
          FUN_107462bcc();
          if (puVar19 == (undefined1 *)0x0) {
            FUN_107462be8(auStack_358);
          }
          FUN_107463370(*(long *)(lStack_350 + ((lStack_330 + uStack_338) / 0x27) * 8) +
                        ((lStack_330 + uStack_338) % 0x27) * 0x68,pppuVar17 + 2);
          lStack_330 = lStack_330 + 1;
          puVar25 = uStack_110;
        }
        else {
          pppuVar38 = pppuVar17 + 3;
          if (*(int *)(pppuVar17 + 0xd) == 0) {
            func_0x000107469788();
            FUN_1074660d4(&ppppuStack_1a8,&uStack_110);
            lVar30 = param_4;
            func_0x0001072ef024(param_4,*pppuVar38);
            if (lVar30 == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = *(undefined4 *)(lVar30 + 0x48);
            }
            ppuVar28 = pppuVar17[3];
            ppuStack_208 = *pppuVar17;
            FUN_107460dc4(&uStack_110,iVar11,&ppuStack_208,ppuVar28,uVar23);
            pppppuVar20 = &ppppuStack_2a0;
            if (*(char *)(pppuVar17 + 0xe) == '\0') {
              pppppuVar20 = &ppppuStack_260;
            }
            FUN_1074661bc(pppppuVar20,ppuVar28,&uStack_110);
            func_0x000107469298();
            ppuVar28 = *pppuVar38;
            func_0x00010778196c();
            puVar25 = uStack_110;
            if (*(char *)(ppuVar28 + 2) != '\x01') goto LAB_107461d0c;
            pppuVar38 = (undefined ***)*pppuVar38;
          }
          else {
            func_0x000107469788();
            FUN_107466558(&pppppppiStack_1c0,&uStack_110);
            uStack_110._0_4_ = *(uint *)(pppuVar17 + 0xc);
            ppuStack_208 = *pppuVar17;
            pppuVar16 = &ppuStack_208;
            FUN_107460ea0(pppuVar16,pppuVar17 + 10);
            uStack_110._4_4_ = SUB84(pppuVar16,0);
            uStack_108._0_4_ = (int)((ulong)pppuVar16 >> 0x20);
            uStack_100 = uStack_100 & 0xff00;
            uStack_fc = 0;
            uStack_f0 = 0;
            uStack_f8 = 0;
            uStack_e0 = 0;
            uStack_e8 = 0;
            uStack_d0 = 0;
            uStack_d8 = 0;
            ppuStack_c8 = pppuVar17[0xb];
            uStack_c0 = 0;
            uStack_b0 = 0;
            pppppuVar20 = &ppppuStack_2a0;
            if (*(char *)(pppuVar17 + 0xe) == '\0') {
              pppppuVar20 = &ppppuStack_260;
            }
            uStack_108._4_4_ = iVar11;
            FUN_1074661bc(pppppuVar20,pppuVar38,&uStack_110);
            func_0x000107469298();
            puVar25 = (undefined8 *)CONCAT44(uStack_110._4_4_,(uint)uStack_110);
          }
          puVar24 = &uStack_180;
LAB_107461d04:
          uStack_110 = puVar25;
          func_0x0001072e89a4(puVar24,pppuVar38);
          puVar25 = uStack_110;
        }
LAB_107461d0c:
        pppuVar17 = pppuVar17 + 0xf;
      }
      uStack_110._0_4_ = (uint)uStack_110 & 0xffffff00;
      iVar11 = iVar13 + 0x3f0;
      func_0x00010746939c();
      if (uVar10 < 9) {
        uVar10 = 8;
      }
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      func_0x00010724e0f8(&uStack_110,CONCAT44(uVar2,uVar10));
      FUN_10742a894(lVar30 + -0x18,&uStack_110);
      func_0x000107469420();
      ppppuVar8 = ppppuStack_1a0;
      uVar29 = 0;
      ppppuVar3 = ppppuStack_1a8;
      for (ppppuVar33 = ppppuStack_1a8; pppppppiVar1 = pppppppiStack_1b8, ppppuVar33 != ppppuVar8;
          ppppuVar33 = ppppuVar33 + 3) {
        func_0x00010778196c(*ppppuVar33);
        FUN_107466640();
        pppuVar17 = *ppppuVar33;
        func_0x00010778196c();
        iVar12 = *(int *)pppuVar17;
        pppuVar17 = *ppppuVar33;
        func_0x00010778196c();
        uVar29 = uVar29 + (uint)(*(int *)((long)pppuVar17 + 4) * iVar12);
      }
      pppppppiVar4 = pppppppiStack_1c0;
      for (pppppppiVar34 = pppppppiStack_1c0; uVar9 = pppppppiVar34 == pppppppiVar1, !(bool)uVar9;
          pppppppiVar34 = (int *******)((long)pppppppiVar34 + 0x14)) {
        if (iVar11 == 0) {
          FUN_1074668c8(*(int *)(pppppppiVar34 + 1),*(int *)((long)pppppppiVar34 + 0xc),
                        *(int *)pppppppiVar34,*(int *)((long)pppppppiVar34 + 4),lVar30 + -0x18);
        }
        else {
          func_0x0001074696d8(&uStack_110,*pppppppiVar34);
          FUN_107466640();
          func_0x000107469420();
        }
        uVar29 = uVar29 + (uint)(*(int *)((long)pppppppiVar34 + 4) * *(int *)pppppppiVar34);
      }
      dVar39 = (double)uVar29;
      func_0x0001074695ac(uVar2 * uVar10);
      uStack_110._0_4_ = SUB84(dVar39,0);
      uStack_110._4_4_ = (undefined4)((ulong)dVar39 >> 0x20);
      FUN_1074669f0(&ppppppiStack_1d8,&uStack_110);
      pppppppiStack_1b8 = pppppppiVar4;
      ppppuStack_1a0 = ppppuVar3;
    }
    FUN_107466ba4(param_1,&ppppuStack_230,&ppppuStack_260,&ppppuStack_2a0,&uStack_180,
                  &ppppppiStack_1d8);
    func_0x0001072638b4(param_1 + 200,&uStack_2d0);
    func_0x0001074629f4(&pppuStack_1f0);
    FUN_107462a28(auStack_358);
    FUN_107466e2c(&ppppppiStack_1d8);
    func_0x00010726ea70(&uStack_2d0);
    func_0x00010726ea70(&uStack_180);
    FUN_107462b40(&pppppppiStack_1c0);
    func_0x000107462b68(&ppppuStack_1a8);
    FUN_107408ca0(&ppppuStack_2a0);
    FUN_107408ca0(&ppppuStack_260);
    pppppuVar20 = &ppppuStack_230;
  }
  FUN_107466e64();
  func_0x0001074691cc(uStack_88);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x0001074629f4(&pppuStack_1f0);
    FUN_107462a28(auStack_358);
    FUN_107466e2c(&ppppppiStack_1d8);
    func_0x00010726ea70(&uStack_2d0);
    func_0x00010726ea70(&uStack_180);
    FUN_107462b40(&pppppppiStack_1c0);
    func_0x000107462b68(&ppppuStack_1a8);
    FUN_107408ca0(&ppppuStack_2a0);
    FUN_107408ca0(&ppppuStack_260);
    FUN_107466e64(&ppppuStack_230);
    func_0x000107468f54();
    func_0x000107468d68();
    func_0x000107468ef8();
    func_0x0001074623f0();
    return pppppuVar20;
  }
  return pppppuVar20;
}



/* Entry: 1074623c0; end: 1074623cb;  */

void FUN_1074623c0(void)

{
  func_0x000107468d68();
  func_0x000107468ef8();
  func_0x0001074623f0();
  return;
}



/* Entry: 1074623cc; end: 107462423;  */

void FUN_1074623cc(void)

{
  func_0x000107468ef8();
  func_0x0001074623f0();
  return;
}



/* Entry: 107462424; end: 10746242b;  */

void FUN_107462424(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f7c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010725af58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10746242c; end: 10746245f;  */

void FUN_10746242c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107468f7c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010725af58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


