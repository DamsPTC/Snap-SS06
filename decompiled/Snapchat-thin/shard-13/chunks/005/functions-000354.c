/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a79950c; end: 10a79958b;  */

undefined1  [16] FUN_10a79950c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6772d7;
  return auVar1;
}



/* Entry: 10a79958c; end: 10a79968f;  */

void FUN_10a79958c(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,4);
  puStack_90 = &UNK_10f674def;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x1450000016c;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a799690(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f676357;
  uStack_88 = 0x4ffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f674def;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1450000016c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a7c6070();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f676364;
  uStack_88 = 0x4ffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f674def;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1450000016c;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a7c61e8(param_1,&puStack_a8);
  FUN_10a7c62f4(param_1);
  return;
}



/* Entry: 10a799690; end: 10a799767;  */

/* WARNING: Removing unreachable block (ram,0x00010a799728) */

undefined1  [16] FUN_10a799690(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6772d7,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a7c5f74(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a799768; end: 10a7997eb;  */

undefined1  [16] FUN_10a799768(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6772e8;
  return auVar1;
}



/* Entry: 10a7997ec; end: 10a799c5b;  */

void FUN_10a7997ec(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6772e8,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c18ec8;
  pppuVar2 = (undefined8 ***)&UNK_10f674def;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c18ec8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f67636f,FUN_10a7c63b0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f57b07d,FUN_10a7c64e8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f676382,FUN_10a7c6614,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f67638e,FUN_10a7c66f8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f67639a,FUN_10a7c6954,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a799c3c;
    FUN_10a054dac(param_1,&UNK_10f6763a9,FUN_10a7c6a0c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6763c2,FUN_10a7c6f1c,FUN_10a7c6fd8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6772e8,0xd);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f6553a4;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f6763f6;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a7c7968();
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f67640a;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a7c7968();
    func_0x00010a004064();
    return;
  }
LAB_10a799c3c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a799c40);
  (*pcVar6)();
}



/* Entry: 10a799c5c; end: 10a799d47;  */

bool FUN_10a799c5c(long param_1,int param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar3 + 0x1e0) == 2) {
      uVar1 = *(ulong *)(lVar3 + 0x38);
      if (-1 < (char)*(byte *)(lVar3 + 0x47)) {
        uVar1 = (ulong)*(byte *)(lVar3 + 0x47);
      }
      bVar2 = uVar1 != 0;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    if (param_2 == -1) {
      lVar3 = *(long *)(param_1 + 0x18) + 0x48;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x9c0);
      FUN_10a9de890(lVar3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_38,lVar3);
    uVar1 = uStack_30;
    if (-1 < (long)uStack_28) {
      uVar1 = uStack_28 >> 0x38;
    }
    bVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x1e4) == 2 && uVar1 != 0;
    if ((long)uStack_28 < 0) {
      __ZdlPv(uStack_38);
    }
  }
  return bVar2;
}



/* Entry: 10a799d48; end: 10a799f9b;  */

undefined1  [16]
FUN_10a799d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  int iVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  code *pcStack_1d8;
  undefined8 *apuStack_1d0 [7];
  code *pcStack_198;
  undefined **ppuStack_190;
  undefined ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_158;
  code **ppcStack_150;
  code **ppcStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  undefined8 *apuStack_d0 [7];
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5d0764(param_1 + 0x28,param_4,param_4);
  pppuVar10 = (undefined ***)param_4[1];
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  if (pppuVar10 != (undefined ***)0x0) {
    pppuVar5 = pppuVar10 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_98 = FUN_10a7c70e4;
  ppuStack_90 = &PTR_FUN_110c18cc8;
  iVar11 = (int)param_3;
  lVar1 = 0x48;
  if (iVar11 == 0) {
    lVar1 = 0x30;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar1);
  lStack_88 = param_1;
  if (*(char *)((long)puVar9 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_f0,*puVar9,puVar9[1]);
  }
  else {
    uStack_e8 = puVar9[1];
    uStack_f0 = *puVar9;
    lStack_e0 = puVar9[2];
  }
  if (iVar11 - 1U < 0xfffffffe) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9c0);
    FUN_10a9de890(uVar4,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_f0,uVar4);
  }
  uVar12 = (ulong)(iVar11 != 0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c2b054(auStack_108,&UNK_10f674def);
  pcStack_d8 = pcStack_98;
  (*(code *)ppuStack_90[3])(apuStack_d0,&ppuStack_90);
  puVar9 = &uStack_f0;
  uVar8 = uVar12;
  FUN_10ad39efc(uVar4,uVar12,param_2,puVar9,auStack_108,1,0,&pcStack_d8);
  (*(code *)*apuStack_d0[0])(apuStack_d0);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  pppuVar5 = &ppuStack_90;
  (*(code *)*ppuStack_90)();
  if (pppuVar10 != (undefined ***)0x0) {
    pppuVar5 = pppuVar10;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar13._8_8_ = uVar8;
    auVar13._0_8_ = pppuVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (pppuVar10 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
  }
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_10a799f9c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_150 = &pcStack_d8;
  ppcStack_148 = &pcStack_98;
  uStack_140 = uVar12;
  uStack_138 = uVar4;
  pppuStack_130 = pppuVar5;
  pppuStack_128 = pppuVar10;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a5d0764(pppuVar6 + 5,puVar9,puVar9);
  pppuVar10 = (undefined ***)puVar9[1];
  uStack_178 = puVar9[1];
  uStack_180 = *puVar9;
  if (pppuVar10 != (undefined ***)0x0) {
    pppuVar5 = pppuVar10 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_198 = FUN_10a7c7784;
  ppuStack_190 = &PTR_FUN_110c18d08;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  pppuStack_188 = pppuVar6;
  if ((int)param_2 == -1) {
    ppuVar7 = pppuVar6[3] + 9;
  }
  else {
    ppuVar7 = (undefined **)pppuVar6[4][0x138];
    FUN_10a9de890(ppuVar7,param_2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_1f0,ppuVar7);
  ppuVar7 = pppuVar6[3];
  pcStack_1d8 = pcStack_198;
  (*(code *)ppuStack_190[3])(apuStack_1d0,&ppuStack_190);
  uVar4 = 2;
  FUN_10ad39efc(ppuVar7,2,uVar8,ppuVar7 + 6,&uStack_1f0,1,0,&pcStack_1d8);
  (*(code *)*apuStack_1d0[0])(apuStack_1d0);
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  pppuVar5 = &ppuStack_190;
  (*(code *)*ppuStack_190)(pppuVar5);
  if (pppuVar10 != (undefined ***)0x0) {
    pppuVar5 = pppuVar10;
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    auVar14._8_8_ = uVar4;
    auVar14._0_8_ = pppuVar5;
    return auVar14;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_1d0[0])(apuStack_1d0);
  if (lStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (pppuVar10 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
  }
  __Unwind_Resume(pppuVar5);
  auVar15._8_8_ = 0x15;
  auVar15._0_8_ = &UNK_10f6772f6;
  return auVar15;
}



/* Entry: 10a799f9c; end: 10a79a173;  */

undefined1  [16]
FUN_10a799f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5d0764(param_1 + 0x28,param_4,param_4);
  pppuVar6 = (undefined ***)param_4[1];
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  if (pppuVar6 != (undefined ***)0x0) {
    pppuVar4 = pppuVar6 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar2) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_88 = FUN_10a7c7784;
  ppuStack_80 = &PTR_FUN_110c18d08;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  lStack_78 = param_1;
  if ((int)param_3 == -1) {
    lVar3 = *(long *)(param_1 + 0x18) + 0x48;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x9c0);
    FUN_10a9de890(lVar3,param_3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_e0,lVar3);
  lVar3 = *(long *)(param_1 + 0x18);
  pcStack_c8 = pcStack_88;
  (*(code *)ppuStack_80[3])(apuStack_c0,&ppuStack_80);
  uVar5 = 2;
  FUN_10ad39efc(lVar3,2,param_2,lVar3 + 0x30,&uStack_e0,1,0,&pcStack_c8);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  pppuVar4 = &ppuStack_80;
  (*(code *)*ppuStack_80)(pppuVar4);
  if (pppuVar6 != (undefined ***)0x0) {
    pppuVar4 = pppuVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = pppuVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (pppuVar6 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
  }
  __Unwind_Resume(pppuVar4);
  auVar8._8_8_ = 0x15;
  auVar8._0_8_ = &UNK_10f6772f6;
  return auVar8;
}



/* Entry: 10a79a174; end: 10a79a20b;  */

undefined1  [16] FUN_10a79a174(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f6772f6;
  return auVar1;
}



/* Entry: 10a79a20c; end: 10a79a6eb;  */

void FUN_10a79a20c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6772f6,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c18e70;
  pppuVar2 = (undefined8 ***)&UNK_10f674def;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c18e70;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f676420,FUN_10a7c7a0c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&DAT_10f521b51,FUN_10a7c7b7c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f67643a,FUN_10a7c7cc0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f676457,FUN_10a7c7e3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f67646c,FUN_10a7c7fa8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&DAT_10f676486,FUN_10a7c8060,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f67648e,FUN_10a7c8168,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f6764a6,FUN_10a7c82a0,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f6764bb,FUN_10a7c88ac,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f6764d0,FUN_10a7c8fac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a79a6cc;
    FUN_10a054dac(param_1,&UNK_10f6764ee,FUN_10a7c90b0,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6772f6,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a79a6cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a79a6d0);
  (*pcVar6)();
}



/* Entry: 10a79a6ec; end: 10a79a7a3;  */

void FUN_10a79a6ec(undefined8 param_1)

{
  undefined2 uStack_9a;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f676505;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a79a7a4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f676511;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9a = 0;
  FUN_10a79a7fc(param_1,&puStack_98,&uStack_9a);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a79a7a4; end: 10a79a7fb;  */

ulong FUN_10a79a7a4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a79a7fc; end: 10a79a853;  */

ulong FUN_10a79a7fc(ulong param_1,undefined8 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a7c9158(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a79a854; end: 10a79ab4f;  */

undefined8 * FUN_10a79a854(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  long *plStack_68;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110c19358;
  FUN_10a3f840c(param_1 + 4);
  FUN_10a03e114(param_1 + 8);
  *param_1 = &PTR_FUN_110c17c38;
  param_1[3] = &PTR_DAT_110c17cc0;
  param_1[4] = &PTR_DAT_110c17d08;
  param_1[8] = &PTR_DAT_110c17d30;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xc,*param_3,param_3[1]);
  }
  else {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    param_1[0xe] = param_3[2];
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar7;
  }
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x21] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10a5ae998(param_1[5],&PTR_DAT_110bd3150,param_2,param_1 + 4);
  FUN_10a5ae998(param_1[9],&PTR_DAT_110b9fab0,param_2,param_1 + 8);
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = &PTR_DAT_110c18d88;
  *puVar4 = &PTR_FUN_110c18d38;
  puVar4[4] = param_2;
  *(undefined1 *)(puVar4 + 5) = 0;
  plVar6 = (long *)param_1[0x22];
  param_1[0x21] = puVar4 + 3;
  param_1[0x22] = puVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0x100) + 0x200);
  if (lVar5 != 0) {
    plStack_68 = (long *)param_1[0x22];
    uStack_70 = param_1[0x21];
    if (param_1[0x22] != 0) {
      plVar6 = (long *)(param_1[0x22] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10ad3b340(lVar5,&uStack_70,&uStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return param_1;
}



/* Entry: 10a79ab50; end: 10a79ab7f;  */

long FUN_10a79ab50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a79ab80; end: 10a79acef;  */

undefined8 * FUN_10a79ab80(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c17c38;
  param_1[3] = &PTR_DAT_110c17cc0;
  param_1[4] = &PTR_DAT_110c17d08;
  param_1[8] = &PTR_DAT_110c17d30;
  lVar5 = *(long *)(*(long *)(param_1[0x23] + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = param_1[0x21];
    plStack_28 = (long *)param_1[0x22];
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  FUN_10a7c923c(param_1 + 0x21);
  FUN_10a7c9214(param_1 + 0x20,0);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  func_0x00010a136de4(param_1 + 0x1a);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_10a500034(param_1 + 0x17);
  }
  FUN_10a7a77b0(param_1 + 0x14);
  FUN_10a7c91cc(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  param_1[8] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = 0;
  }
  func_0x00010a004e5c(param_1 + 9);
  param_1[4] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a79acf0; end: 10a79ad0b;  */

undefined8 * FUN_10a79acf0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110c17c38;
  param_1[3] = &PTR_DAT_110c17cc0;
  param_1[4] = &PTR_DAT_110c17d08;
  param_1[8] = &PTR_DAT_110c17d30;
  lVar5 = *(long *)(*(long *)(param_1[0x23] + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = param_1[0x21];
    plStack_28 = (long *)param_1[0x22];
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  FUN_10a7c923c(param_1 + 0x21);
  FUN_10a7c9214(param_1 + 0x20,0);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  func_0x00010a136de4(param_1 + 0x1a);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_10a500034(param_1 + 0x17);
  }
  FUN_10a7a77b0(param_1 + 0x14);
  FUN_10a7c91cc(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  param_1[8] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = 0;
  }
  func_0x00010a004e5c(param_1 + 9);
  param_1[4] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a79ad0c; end: 10a79ad67;  */

void FUN_10a79ad0c(void)

{
  FUN_10a79ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a79ad68; end: 10a79ae13;  */

void FUN_10a79ad68(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x118) + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x108);
    plStack_28 = *(long **)(param_1 + 0x110);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ad3b340(lVar5,&uStack_30,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a79ae14; end: 10a79ae1b;  */

void FUN_10a79ae14(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0xe8);
    plStack_28 = *(long **)(param_1 + 0xf0);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ad3b340(lVar5,&uStack_30,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a79ae1c; end: 10a79aecb;  */

void FUN_10a79ae1c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a79aecc(param_1,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x118) + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x108);
    plStack_28 = *(long **)(param_1 + 0x110);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a79aecc; end: 10a79af9f;  */

uint FUN_10a79aecc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79af34;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79af30;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79af30:
    param_1 = 0;
    goto LAB_10a79af34;
  }
  (**(code **)(*plStack_40 + 0x28))(plStack_40,param_1 + 0x60,param_2);
  param_1 = 1;
LAB_10a79af34:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (uint)(plStack_40 != (long *)0x0) & (uint)param_1;
}



/* Entry: 10a79afa0; end: 10a79afa7;  */

void FUN_10a79afa0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a79aecc(param_1 + -0x40,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x100) + 0x200);
  if (lVar5 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 200);
    plStack_28 = *(long **)(param_1 + 0xd0);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a79afa8; end: 10a79b2c7;  */

ulong FUN_10a79afa8(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long *extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  FUN_10a79b2c8(&plStack_d0);
  if (plStack_d0 == (long *)0x0) goto LAB_10a79b1b0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    if (param_1[0xd] == 0) goto LAB_10a79b16c;
  }
  else if (*(char *)((long)param_1 + 0x77) == '\0') {
LAB_10a79b16c:
    param_2 = 0;
    goto LAB_10a79b1b0;
  }
  FUN_10a0ec420(&uStack_110,param_3);
  lStack_b8 = 0x6449726564616548;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  uStack_a8 = CONCAT17(8,(undefined7)uStack_a8);
  uStack_98 = uStack_108;
  lStack_a0 = uStack_110;
  uStack_90 = uStack_100;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  FUN_10a0ec420(&puStack_130,param_4);
  uStack_88 = 0x7470697263736544;
  uStack_80 = 0x496e6f69;
  uStack_7c = 100;
  cStack_71 = '\r';
  uStack_68 = uStack_128;
  puStack_70 = puStack_130;
  uStack_60 = uStack_120;
  puStack_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  FUN_10a7c946c(&lStack_f8,&lStack_b8,2);
  lVar8 = 0;
  do {
    puStack_c0 = (undefined1 *)((long)&puStack_70 + lVar8);
    FUN_10a0426d8(&puStack_c0);
    if ((&cStack_71)[lVar8] < '\0') {
      __ZdlPv(*(undefined8 *)((long)&uStack_88 + lVar8));
    }
    lVar8 = lVar8 + -0x30;
  } while (lVar8 != -0x60);
  puStack_c0 = (undefined1 *)&puStack_130;
  FUN_10a0426d8(&puStack_c0);
  puStack_130 = &uStack_110;
  FUN_10a0426d8(&puStack_130);
  FUN_10a79b368();
  uStack_b0 = uStack_f0;
  lStack_b8 = lStack_f8;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_a8 = lStack_e8;
  lStack_a0 = lStack_e0;
  uStack_98 = CONCAT44(uStack_98._4_4_,uStack_d8);
  if (lStack_e0 != 0) {
    uVar7 = *(ulong *)(lStack_e8 + 8);
    if ((uStack_b0 & uStack_b0 - 1) == 0) {
      uVar7 = uVar7 & uStack_b0 - 1;
    }
    else if (uStack_b0 <= uVar7) {
      uVar4 = 0;
      if (uStack_b0 != 0) {
        uVar4 = uVar7 / uStack_b0;
      }
      uVar7 = uVar7 - uVar4 * uStack_b0;
    }
    *(undefined8 **)(lStack_b8 + uVar7 * 8) = &uStack_a8;
    lStack_e8 = 0;
    lStack_e0 = 0;
  }
  (**(code **)(*plStack_d0 + 0x18))(plStack_d0,param_1 + 0xc,ppuVar5,3,&lStack_b8);
  FUN_10a7575a8(&lStack_b8);
  plVar6 = &lStack_f8;
  FUN_10a7575a8();
  param_2 = 1;
LAB_10a79b1b0:
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a7575a8(&lStack_b8);
    FUN_10a7575a8(&lStack_f8);
    FUN_10a7c9414(&plStack_d0);
    __Unwind_Resume();
    plVar6 = *(long **)(*(long *)(plVar6[0x23] + 0x100) + 0x1c8);
    (**(code **)(*plVar6 + 0x50))();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    uVar7 = plVar6[1];
    if (uVar7 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      extraout_x8[1] = uVar7;
      if (uVar7 != 0) {
        *extraout_x8 = *plVar6;
      }
    }
    return uVar7;
  }
  return (ulong)(plStack_d0 != (long *)0x0 & param_2);
}



/* Entry: 10a79b2c8; end: 10a79b367;  */

void FUN_10a79b2c8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x118) + 0x100) + 0x1c8);
  (**(code **)(*plVar1 + 0x50))();
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      *param_1 = *plVar1;
    }
  }
  return;
}



/* Entry: 10a79b368; end: 10a79b53b;  */

undefined4 FUN_10a79b368(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 ****ppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  ppppuStack_68 = (undefined8 *****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppppuStack_68,uVar12,0);
  puVar8 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      cVar6 = *(char *)((long)puVar4 + uVar11);
      lVar7 = (long)cVar6;
      if ((-1 < lVar7) && ((*(uint *)(puVar8 + lVar7 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar6 = (char)lVar7;
      }
      uVar1 = uStack_60;
      if (-1 < (long)uStack_58) {
        uVar1 = uStack_58 >> 0x38;
      }
      if (uVar1 < uVar11) goto LAB_10a79b514;
      pppppuVar2 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)uStack_58) {
        pppppuVar2 = &ppppuStack_68;
      }
      *(char *)((long)pppppuVar2 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
    } while (uVar12 != uVar11);
  }
  uVar12 = 0;
  ppuVar9 = (undefined **)&UNK_110c18518;
  while( true ) {
    while( true ) {
      ppuVar10 = &PTR_DAT_110c18410 + uVar12 * 3;
      puVar8 = *ppuVar10;
      uVar11 = uStack_60;
      pppppuVar2 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)uStack_58) {
        uVar11 = uStack_58 >> 0x38;
        pppppuVar2 = &ppppuStack_68;
      }
      FUN_10a003d5c(puVar8,*(undefined8 *)(&UNK_110c18418 + uVar12 * 0x18),pppppuVar2,uVar11);
      if (((uint)puVar8 >> 7 & 1) == 0) break;
      ppuVar10 = ppuVar9;
      if (4 < uVar12) goto LAB_10a79b498;
      uVar12 = uVar12 * 2 + 2;
    }
    if (4 < uVar12) break;
    uVar12 = uVar12 << 1 | 1;
    ppuVar9 = ppuVar10;
  }
LAB_10a79b498:
  if (ppuVar10 != (undefined **)&UNK_110c18518) {
    puVar8 = *ppuVar10;
    uVar12 = uStack_60;
    pppppuVar2 = (undefined8 *****)ppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar12 = uStack_58 >> 0x38;
      pppppuVar2 = &ppppuStack_68;
    }
    FUN_10a003d5c(puVar8,ppuVar10[1],pppppuVar2,uVar12);
    if ((char)puVar8 < '\x01' && ppuVar10 != (undefined **)&UNK_110c18518) {
      uVar3 = *(undefined4 *)(ppuVar10 + 2);
      if ((long)uStack_58 < 0) {
        __ZdlPv(ppppuStack_68);
      }
      return uVar3;
    }
  }
  FUN_10a00946c(&UNK_10f676520);
LAB_10a79b514:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79b518);
  (*pcVar5)();
}



/* Entry: 10a79b53c; end: 10a79b64b;  */

byte FUN_10a79b53c(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = param_1;
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79b5d0;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79b5cc;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79b5cc:
    param_2 = 0;
    goto LAB_10a79b5d0;
  }
  FUN_10a79b368();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  (**(code **)(*plStack_40 + 0x18))(plStack_40,param_1 + 0x60,lVar4,4,&uStack_70);
  FUN_10a7575a8(&uStack_70);
  param_2 = 1;
LAB_10a79b5d0:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return plStack_40 != (long *)0x0 & param_2;
}



/* Entry: 10a79b64c; end: 10a79b727;  */

uint FUN_10a79b64c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79b6bc;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    if (param_1[0xd] == 0) goto LAB_10a79b6b8;
  }
  else if (*(char *)((long)param_1 + 0x77) == '\0') {
LAB_10a79b6b8:
    param_1 = (long *)0x0;
    goto LAB_10a79b6bc;
  }
  FUN_10a79b368();
  plVar1 = param_1 + 0xc;
  param_1 = plStack_40;
  (**(code **)(*plStack_40 + 0x10))(plStack_40,plVar1,plVar4);
LAB_10a79b6bc:
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (uint)(plStack_40 != (long *)0x0) & (uint)param_1;
}



/* Entry: 10a79b728; end: 10a79b847;  */

byte FUN_10a79b728(long param_1,undefined8 param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1;
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79b7cc;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79b7c8;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79b7c8:
    param_3 = 0;
    goto LAB_10a79b7cc;
  }
  FUN_10a79b368();
  lVar4 = lVar5;
  FUN_10a79b848();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  (**(code **)(*plStack_40 + 0x18))(plStack_40,param_1 + 0x60,lVar5,lVar4,&uStack_70);
  FUN_10a7575a8(&uStack_70);
  param_3 = 1;
LAB_10a79b7cc:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return plStack_40 != (long *)0x0 & param_3;
}



/* Entry: 10a79b848; end: 10a79ba1b;  */

undefined4 FUN_10a79b848(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 ****ppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar12 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  ppppuStack_68 = (undefined8 *****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppppuStack_68,uVar12,0);
  puVar8 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      cVar6 = *(char *)((long)puVar4 + uVar11);
      lVar7 = (long)cVar6;
      if ((-1 < lVar7) && ((*(uint *)(puVar8 + lVar7 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar6 = (char)lVar7;
      }
      uVar1 = uStack_60;
      if (-1 < (long)uStack_58) {
        uVar1 = uStack_58 >> 0x38;
      }
      if (uVar1 < uVar11) goto LAB_10a79b9f4;
      pppppuVar2 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)uStack_58) {
        pppppuVar2 = &ppppuStack_68;
      }
      *(char *)((long)pppppuVar2 + uVar11) = cVar6;
      uVar11 = uVar11 + 1;
    } while (uVar12 != uVar11);
  }
  uVar12 = 0;
  ppuVar9 = (undefined **)&UNK_110c18598;
  while( true ) {
    while( true ) {
      ppuVar10 = &PTR_s_show_110c18520 + uVar12 * 3;
      puVar8 = *ppuVar10;
      uVar11 = uStack_60;
      pppppuVar2 = (undefined8 *****)ppppuStack_68;
      if (-1 < (long)uStack_58) {
        uVar11 = uStack_58 >> 0x38;
        pppppuVar2 = &ppppuStack_68;
      }
      FUN_10a003d5c(puVar8,*(undefined8 *)(&UNK_110c18528 + uVar12 * 0x18),pppppuVar2,uVar11);
      if (((uint)puVar8 >> 7 & 1) == 0) break;
      ppuVar10 = ppuVar9;
      if (1 < uVar12) goto LAB_10a79b978;
      uVar12 = uVar12 * 2 + 2;
    }
    if (1 < uVar12) break;
    uVar12 = uVar12 << 1 | 1;
    ppuVar9 = ppuVar10;
  }
LAB_10a79b978:
  if (ppuVar10 != (undefined **)&UNK_110c18598) {
    puVar8 = *ppuVar10;
    uVar12 = uStack_60;
    pppppuVar2 = (undefined8 *****)ppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar12 = uStack_58 >> 0x38;
      pppppuVar2 = &ppppuStack_68;
    }
    FUN_10a003d5c(puVar8,ppuVar10[1],pppppuVar2,uVar12);
    if ((char)puVar8 < '\x01' && ppuVar10 != (undefined **)&UNK_110c18598) {
      uVar3 = *(undefined4 *)(ppuVar10 + 2);
      if ((long)uStack_58 < 0) {
        __ZdlPv(ppppuStack_68);
      }
      return uVar3;
    }
  }
  FUN_10a00946c(&UNK_10f67653a);
LAB_10a79b9f4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79b9f8);
  (*pcVar5)();
}



/* Entry: 10a79ba1c; end: 10a79bd2b;  */

uint FUN_10a79ba1c(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  plVar5 = param_2;
  FUN_10a79b2c8(&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x77) < '\0') {
      if (param_1[0xd] == 0) goto LAB_10a79bbd4;
    }
    else if (*(char *)((long)param_1 + 0x77) == '\0') {
LAB_10a79bbd4:
      param_1 = (long *)0x0;
      goto LAB_10a79bc1c;
    }
    FUN_10a0ec420(&uStack_110,param_3);
    lStack_b8 = 0x6449726564616548;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_a8 = CONCAT17(8,(undefined7)uStack_a8);
    uStack_98 = uStack_108;
    lStack_a0 = uStack_110;
    uStack_90 = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    FUN_10a0ec420(&puStack_130,param_4);
    uStack_88 = 0x7470697263736544;
    uStack_80 = 0x496e6f69;
    uStack_7c = 100;
    cStack_71 = '\r';
    uStack_68 = uStack_128;
    puStack_70 = puStack_130;
    uStack_60 = uStack_120;
    puStack_130 = (undefined8 *)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
    param_4 = &lStack_b8;
    FUN_10a7c946c(&lStack_f8,&lStack_b8,2);
    lVar8 = 0;
    do {
      puStack_c0 = (undefined1 *)((long)&puStack_70 + lVar8);
      FUN_10a0426d8(&puStack_c0);
      if ((&cStack_71)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)&uStack_88 + lVar8));
      }
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != -0x60);
    puStack_c0 = (undefined1 *)&puStack_130;
    FUN_10a0426d8(&puStack_c0);
    puStack_130 = &uStack_110;
    FUN_10a0426d8(&puStack_130);
    uStack_b0 = uStack_f0;
    lStack_b8 = lStack_f8;
    lStack_f8 = 0;
    uStack_f0 = 0;
    uStack_a8 = lStack_e8;
    lStack_a0 = lStack_e0;
    uStack_98 = CONCAT44(uStack_98._4_4_,uStack_d8);
    if (lStack_e0 != 0) {
      uVar6 = *(ulong *)(lStack_e8 + 8);
      if ((uStack_b0 & uStack_b0 - 1) == 0) {
        uVar6 = uVar6 & uStack_b0 - 1;
      }
      else if (uStack_b0 <= uVar6) {
        uVar3 = 0;
        if (uStack_b0 != 0) {
          uVar3 = uVar6 / uStack_b0;
        }
        uVar6 = uVar6 - uVar3 * uStack_b0;
      }
      *(undefined8 **)(lStack_b8 + uVar6 * 8) = &uStack_a8;
      lStack_e8 = 0;
      lStack_e0 = 0;
    }
    plVar5 = param_1 + 0xc;
    (**(code **)(*plStack_d0 + 0x18))(plStack_d0,plVar5,param_2,3,&lStack_b8);
    FUN_10a7575a8(&lStack_b8);
    plVar4 = &lStack_f8;
    FUN_10a7575a8();
    param_1 = (long *)0x1;
  }
LAB_10a79bc1c:
  if (plStack_c8 != (long *)0x0) {
    plVar7 = plStack_c8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      plVar4 = plStack_c8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (uint)(plStack_d0 != (long *)0x0) & (uint)param_1;
  }
  ___stack_chk_fail();
  FUN_10a7575a8(&lStack_b8);
  FUN_10a7575a8(&lStack_f8);
  FUN_10a7c9414(&plStack_d0);
  plVar7 = plVar4;
  __Unwind_Resume();
  plStack_150 = plStack_c8;
  pcStack_138 = FUN_10a79bd2c;
  plStack_160 = param_4;
  plStack_158 = param_1;
  plStack_148 = plVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10a79b2c8(&plStack_170);
  if (plStack_170 == (long *)0x0) goto LAB_10a79bdb8;
  if (*(char *)((long)plVar7 + 0x77) < '\0') {
    if (plVar7[0xd] == 0) goto LAB_10a79bdb4;
  }
  else if (*(char *)((long)plVar7 + 0x77) == '\0') {
LAB_10a79bdb4:
    plVar7 = (long *)0x0;
    goto LAB_10a79bdb8;
  }
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  (**(code **)(*plStack_170 + 0x18))(plStack_170,plVar7 + 0xc,plVar5,4,&uStack_1a0);
  FUN_10a7575a8(&uStack_1a0);
  plVar7 = (long *)0x1;
LAB_10a79bdb8:
  if (plStack_168 != (long *)0x0) {
    plVar5 = plStack_168 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
    }
  }
  return (uint)(plStack_170 != (long *)0x0) & (uint)plVar7;
}



/* Entry: 10a79bd2c; end: 10a79be2b;  */

uint FUN_10a79bd2c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79bdb8;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79bdb4;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79bdb4:
    param_1 = 0;
    goto LAB_10a79bdb8;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  (**(code **)(*plStack_40 + 0x18))(plStack_40,param_1 + 0x60,param_2,4,&uStack_70);
  FUN_10a7575a8(&uStack_70);
  param_1 = 1;
LAB_10a79bdb8:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (uint)(plStack_40 != (long *)0x0) & (uint)param_1;
}



/* Entry: 10a79be2c; end: 10a79beff;  */

uint FUN_10a79be2c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79be94;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79be90;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79be90:
    param_2 = (long *)0x0;
    goto LAB_10a79be94;
  }
  plVar3 = plStack_40;
  (**(code **)(*plStack_40 + 0x10))(plStack_40,param_1 + 0x60,param_2);
  param_2 = plVar3;
LAB_10a79be94:
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (uint)(plStack_40 != (long *)0x0) & (uint)param_2;
}



/* Entry: 10a79bf00; end: 10a79c003;  */

uint FUN_10a79bf00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) goto LAB_10a79bf90;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79bf8c;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79bf8c:
    param_2 = 0;
    goto LAB_10a79bf90;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  (**(code **)(*plStack_40 + 0x18))(plStack_40,param_1 + 0x60,param_2,param_3,&uStack_70);
  FUN_10a7575a8(&uStack_70);
  param_2 = 1;
LAB_10a79bf90:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return (uint)(plStack_40 != (long *)0x0) & (uint)param_2;
}



/* Entry: 10a79c004; end: 10a79c0ef;  */

uint FUN_10a79c004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_50;
  long *plStack_48;
  
  FUN_10a79b2c8(&plStack_50);
  if (plStack_50 == (long *)0x0) goto LAB_10a79c080;
  if (*(char *)(param_1 + 0x77) < '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_10a79c07c;
  }
  else if (*(char *)(param_1 + 0x77) == '\0') {
LAB_10a79c07c:
    param_3 = 0;
    goto LAB_10a79c080;
  }
  (**(code **)(*plStack_50 + 0x18))(plStack_50,param_1 + 0x60,param_2,param_3,param_4);
  param_3 = 1;
LAB_10a79c080:
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return (uint)(plStack_50 != (long *)0x0) & (uint)param_3;
}



/* Entry: 10a79c0f0; end: 10a79c1df;  */

void FUN_10a79c0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_4 + 0x88); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[2] + 0x10))
              (param_1,param_2,param_3,(long *)plVar1[2],param_5,param_6);
  }
  return;
}



/* Entry: 10a79c1e0; end: 10a79c55b;  */

void FUN_10a79c1e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  FUN_10a79c55c(&lStack_78,param_3,param_4);
  plVar14 = *(long **)(param_1 + 0x88);
  if (plVar14 != (long *)0x0) {
    puVar13 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    do {
      plVar6 = (long *)plVar14[2];
      (**(code **)(*plVar6 + 0x30))();
      plVar12 = (long *)plVar14[2];
      puVar11 = puVar10;
      if ((int)plVar6 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12,param_2,lStack_78,lStack_70 - lStack_78 >> 4,param_5)
        ;
      }
      else if (puVar13 < puVar15) {
        *puVar13 = plVar12;
        puVar13 = puVar13 + 1;
      }
      else {
        lVar8 = (long)puVar13 - (long)puVar10;
        uVar1 = (lVar8 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a7a780c();
LAB_10a79c440:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79c444);
          (*pcVar5)();
        }
        uVar9 = (long)puVar15 - (long)puVar10 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puVar15 - (long)puVar10)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a79c440;
        }
        lVar7 = uVar9 << 3;
        __Znwm();
        puVar2 = (undefined8 *)(lVar7 + lVar8);
        puVar15 = (undefined8 *)(lVar7 + uVar9 * 8);
        puVar11 = puVar2 + -(lVar8 >> 3);
        puVar13 = puVar2 + 1;
        *puVar2 = plVar12;
        _memcpy(puVar11,puVar10,lVar8);
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv(puVar10);
        }
      }
      plVar14 = (long *)*plVar14;
      puVar10 = puVar11;
    } while (plVar14 != (long *)0x0);
    if (puVar11 != puVar13) {
      plStack_90 = (long *)CONCAT62(plStack_90._2_6_,0x100);
      lVar8 = 0x90;
      __Znwm();
      FUN_10a1b0de4();
      plVar6 = (long *)0xa8;
      lStack_80 = lVar8;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110baca38;
      plVar14 = plVar6 + 3;
      FUN_10a1b27b8(plVar14,&lStack_80);
      plStack_90 = plVar14;
      plStack_88 = plVar6;
      FUN_10a79c5b0(param_1,plVar14,lStack_78,lStack_70 - lStack_78 >> 4,param_5);
      puVar15 = puVar11;
      do {
        puVar10 = puVar15 + 1;
        (**(code **)(*(long *)*puVar15 + 0x20))
                  ((long *)*puVar15,&plStack_90,lStack_78,lStack_70 - lStack_78 >> 4,param_5);
        plVar14 = plStack_88;
        puVar15 = puVar10;
      } while (puVar10 != puVar13);
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      lVar8 = lStack_80;
      lStack_80 = 0;
      if (lVar8 != 0) {
        func_0x00010a0e32bc(&lStack_80);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a79c55c; end: 10a79c5af;  */

void FUN_10a79c55c(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  code *pcVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  bool bVar24;
  float *pfVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a7a7820(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  pfVar21 = (float *)*param_1;
  pfVar22 = (float *)param_1[1];
  lVar23 = 0;
  if (pfVar22 != pfVar21) {
    lVar23 = LZCOUNT((long)pfVar22 - (long)pfVar21 >> 4) * -2 + 0x7e;
  }
  bVar24 = true;
LAB_10a7a7a84:
  pfVar12 = pfVar22 + -4;
  pfVar10 = pfVar21;
LAB_10a7a7a94:
  do {
    pfVar21 = pfVar10;
    uVar7 = (long)pfVar22 - (long)pfVar21 >> 4;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        pfVar10 = pfVar22 + -4;
        if (((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)pfVar10) *
            ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar21 >> 0x20))) {
          return;
        }
        uVar34 = *(undefined8 *)(pfVar21 + 2);
        uVar35 = *(undefined8 *)pfVar21;
        uVar36 = *(undefined8 *)pfVar10;
        *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar22 + -2);
        *(undefined8 *)pfVar21 = uVar36;
        *(undefined8 *)(pfVar22 + -2) = uVar34;
        *(undefined8 *)pfVar10 = uVar35;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        pfVar10 = pfVar21 + 4;
        fVar26 = ((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)pfVar12) *
                 ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar12 >> 0x20));
        fVar29 = ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                 ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar10 >> 0x20));
        if (fVar29 <= ((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
                      ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
                      (float)((ulong)*(undefined8 *)pfVar21 >> 0x20))) {
          if (fVar29 < fVar26) {
            uVar36 = *(undefined8 *)(pfVar21 + 6);
            uVar35 = *(undefined8 *)pfVar10;
            uVar34 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar22 + -2);
            *(undefined8 *)pfVar10 = uVar34;
            *(undefined8 *)(pfVar22 + -2) = uVar36;
            *(undefined8 *)pfVar12 = uVar35;
            if (((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar21 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20))) {
              uVar36 = *(undefined8 *)(pfVar21 + 2);
              uVar35 = *(undefined8 *)pfVar21;
              *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 6);
              *(undefined8 *)pfVar21 = *(undefined8 *)pfVar10;
              *(undefined8 *)(pfVar21 + 6) = uVar36;
              *(undefined8 *)pfVar10 = uVar35;
            }
          }
        }
        else {
          if (fVar26 <= fVar29) {
            uVar36 = *(undefined8 *)(pfVar21 + 2);
            uVar35 = *(undefined8 *)pfVar21;
            *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 6);
            *(undefined8 *)pfVar21 = *(undefined8 *)pfVar10;
            *(undefined8 *)(pfVar21 + 6) = uVar36;
            *(undefined8 *)pfVar10 = uVar35;
            if (((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)pfVar12) *
                ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) <=
                ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20))) {
              return;
            }
            uVar35 = *(undefined8 *)(pfVar21 + 6);
            uVar27 = (undefined4)*(undefined8 *)pfVar10;
            uVar28 = (undefined4)((ulong)*(undefined8 *)pfVar10 >> 0x20);
            uVar36 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar22 + -2);
            *(undefined8 *)pfVar10 = uVar36;
          }
          else {
            uVar35 = *(undefined8 *)(pfVar21 + 2);
            uVar27 = (undefined4)*(undefined8 *)pfVar21;
            uVar28 = (undefined4)((ulong)*(undefined8 *)pfVar21 >> 0x20);
            uVar36 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar22 + -2);
            *(undefined8 *)pfVar21 = uVar36;
          }
          *(undefined8 *)(pfVar22 + -2) = uVar35;
          *(ulong *)pfVar12 = CONCAT44(uVar28,uVar27);
        }
        return;
      }
      if (uVar7 == 4) {
        FUN_10a7a837c(pfVar21,pfVar21 + 4,pfVar21 + 8);
        pfVar10 = pfVar22 + -4;
        if (((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)pfVar10) *
            ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)(pfVar21 + 8)) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar21 + 8) >> 0x20))) {
          return;
        }
        uVar36 = *(undefined8 *)(pfVar21 + 10);
        uVar35 = *(undefined8 *)(pfVar21 + 8);
        uVar34 = *(undefined8 *)pfVar10;
        *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar22 + -2);
        *(undefined8 *)(pfVar21 + 8) = uVar34;
        *(undefined8 *)(pfVar22 + -2) = uVar36;
        *(undefined8 *)pfVar10 = uVar35;
        if (((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)(pfVar21 + 8)) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar21 + 8) >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)(pfVar21 + 4)) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20))) {
          return;
        }
        uVar36 = *(undefined8 *)(pfVar21 + 6);
        uVar35 = *(undefined8 *)(pfVar21 + 4);
        *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar21 + 10);
        *(undefined8 *)(pfVar21 + 4) = *(undefined8 *)(pfVar21 + 8);
        *(undefined8 *)(pfVar21 + 10) = uVar36;
        *(undefined8 *)(pfVar21 + 8) = uVar35;
        if (((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)(pfVar21 + 4)) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
            (float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20)) <=
            ((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar21 >> 0x20))) {
          return;
        }
        uVar36 = *(undefined8 *)(pfVar21 + 2);
        uVar35 = *(undefined8 *)pfVar21;
        *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 6);
        *(undefined8 *)pfVar21 = *(undefined8 *)(pfVar21 + 4);
        *(undefined8 *)(pfVar21 + 6) = uVar36;
        *(undefined8 *)(pfVar21 + 4) = uVar35;
        return;
      }
      if (uVar7 == 5) {
        pfVar10 = pfVar21 + 4;
        pfVar5 = pfVar21 + 8;
        pfVar6 = pfVar21 + 0xc;
        FUN_10a7a837c();
        if (((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)pfVar5) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar5 >> 0x20)) <
            ((float)*(undefined8 *)(pfVar21 + 0xe) - (float)*(undefined8 *)pfVar6) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
          uVar36 = *(undefined8 *)(pfVar21 + 10);
          uVar35 = *(undefined8 *)pfVar5;
          *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar21 + 0xe);
          *(undefined8 *)pfVar5 = *(undefined8 *)pfVar6;
          *(undefined8 *)(pfVar21 + 0xe) = uVar36;
          *(undefined8 *)pfVar6 = uVar35;
          if (((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
              ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)) <
              ((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)pfVar5) *
              ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) {
            uVar36 = *(undefined8 *)(pfVar21 + 6);
            uVar35 = *(undefined8 *)pfVar10;
            *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar21 + 10);
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar5;
            *(undefined8 *)(pfVar21 + 10) = uVar36;
            *(undefined8 *)pfVar5 = uVar35;
            if (((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar21 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20))) {
              uVar36 = *(undefined8 *)(pfVar21 + 2);
              uVar35 = *(undefined8 *)pfVar21;
              *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 6);
              *(undefined8 *)pfVar21 = *(undefined8 *)pfVar10;
              *(undefined8 *)(pfVar21 + 6) = uVar36;
              *(undefined8 *)pfVar10 = uVar35;
            }
          }
        }
        if (((float)*(undefined8 *)(pfVar21 + 0xe) - (float)*(undefined8 *)pfVar6) *
            ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <
            ((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)pfVar12) *
            ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
            (float)((ulong)*(undefined8 *)pfVar12 >> 0x20))) {
          uVar36 = *(undefined8 *)(pfVar21 + 0xe);
          uVar35 = *(undefined8 *)pfVar6;
          uVar34 = *(undefined8 *)pfVar12;
          *(undefined8 *)(pfVar21 + 0xe) = *(undefined8 *)(pfVar22 + -2);
          *(undefined8 *)pfVar6 = uVar34;
          *(undefined8 *)(pfVar22 + -2) = uVar36;
          *(undefined8 *)pfVar12 = uVar35;
          if (((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)pfVar5) *
              ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar5 >> 0x20)) <
              ((float)*(undefined8 *)(pfVar21 + 0xe) - (float)*(undefined8 *)pfVar6) *
              ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) -
              (float)((ulong)*(undefined8 *)pfVar6 >> 0x20))) {
            uVar36 = *(undefined8 *)(pfVar21 + 10);
            uVar35 = *(undefined8 *)pfVar5;
            *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar21 + 0xe);
            *(undefined8 *)pfVar5 = *(undefined8 *)pfVar6;
            *(undefined8 *)(pfVar21 + 0xe) = uVar36;
            *(undefined8 *)pfVar6 = uVar35;
            if (((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)) <
                ((float)*(undefined8 *)(pfVar21 + 10) - (float)*(undefined8 *)pfVar5) *
                ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) -
                (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) {
              uVar36 = *(undefined8 *)(pfVar21 + 6);
              uVar35 = *(undefined8 *)pfVar10;
              *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar21 + 10);
              *(undefined8 *)pfVar10 = *(undefined8 *)pfVar5;
              *(undefined8 *)(pfVar21 + 10) = uVar36;
              *(undefined8 *)pfVar5 = uVar35;
              if (((float)*(undefined8 *)(pfVar21 + 2) - (float)*(undefined8 *)pfVar21) *
                  ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)pfVar21 >> 0x20)) <
                  ((float)*(undefined8 *)(pfVar21 + 6) - (float)*(undefined8 *)pfVar10) *
                  ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) -
                  (float)((ulong)*(undefined8 *)pfVar10 >> 0x20))) {
                uVar36 = *(undefined8 *)(pfVar21 + 2);
                uVar35 = *(undefined8 *)pfVar21;
                *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar21 + 6);
                *(undefined8 *)pfVar21 = *(undefined8 *)pfVar10;
                *(undefined8 *)(pfVar21 + 6) = uVar36;
                *(undefined8 *)pfVar10 = uVar35;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      pfVar10 = pfVar21 + 4;
      if (bVar24 == false) {
        if (pfVar21 == pfVar22 || pfVar10 == pfVar22) {
          return;
        }
        lVar23 = 0;
        lVar13 = 0x10;
        do {
          puVar2 = (undefined8 *)((long)pfVar21 + lVar23);
          fVar29 = *pfVar10;
          fVar32 = *(float *)((long)puVar2 + 0x14);
          fVar26 = *(float *)(puVar2 + 3);
          fVar30 = *(float *)((long)puVar2 + 0x1c);
          fVar33 = (fVar26 - fVar29) * (fVar30 - fVar32);
          if (((float)puVar2[1] - (float)*puVar2) *
              ((float)((ulong)puVar2[1] >> 0x20) - (float)((ulong)*puVar2 >> 0x20)) < fVar33) {
            do {
              lVar9 = lVar23;
              puVar2 = (undefined8 *)((long)pfVar21 + lVar9);
              puVar2[3] = puVar2[1];
              puVar2[2] = *puVar2;
              if (lVar9 == -0x10) {
LAB_10a7a8378:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7a837c);
                (*pcVar4)();
              }
              lVar23 = lVar9 + -0x10;
            } while (((float)puVar2[-1] - (float)puVar2[-2]) *
                     ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) <
                     fVar33);
            *(float *)((long)pfVar21 + lVar9) = fVar29;
            *(float *)((long)pfVar21 + lVar9 + 4) = fVar32;
            *(float *)((long)pfVar21 + lVar9 + 8) = fVar26;
            *(float *)((long)pfVar21 + lVar9 + 0xc) = fVar30;
          }
          pfVar10 = (float *)((long)pfVar21 + lVar13 + 0x10);
          lVar23 = lVar13;
          lVar13 = lVar13 + 0x10;
          if (pfVar10 == pfVar22) {
            return;
          }
        } while( true );
      }
      if (pfVar21 == pfVar22 || pfVar10 == pfVar22) {
        return;
      }
      lVar23 = 0;
      pfVar12 = pfVar21;
      break;
    }
    if (lVar23 == 0) {
      if (pfVar21 == pfVar22) {
        return;
      }
      uVar11 = uVar7 - 2 >> 1;
      uVar15 = uVar11;
      goto LAB_10a7a8050;
    }
    pfVar10 = pfVar21 + (uVar7 >> 1) * 4;
    if (uVar7 < 0x81) {
      FUN_10a7a837c(pfVar10,pfVar21,pfVar12);
    }
    else {
      FUN_10a7a837c(pfVar21,pfVar10,pfVar12);
      FUN_10a7a837c(pfVar21 + 4,pfVar10 + -4,pfVar22 + -8);
      FUN_10a7a837c(pfVar21 + 8,pfVar10 + 4,pfVar22 + -0xc);
      FUN_10a7a837c(pfVar10 + -4,pfVar10,pfVar10 + 4);
      uVar34 = *(undefined8 *)(pfVar21 + 2);
      uVar35 = *(undefined8 *)pfVar21;
      uVar36 = *(undefined8 *)pfVar10;
      *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar10 + 2);
      *(undefined8 *)pfVar21 = uVar36;
      *(undefined8 *)(pfVar10 + 2) = uVar34;
      *(undefined8 *)pfVar10 = uVar35;
    }
    lVar23 = lVar23 + -1;
    fVar26 = *pfVar21;
    if (bVar24) {
      fVar32 = pfVar21[1];
      fVar29 = pfVar21[2];
      fVar30 = pfVar21[3];
      fVar33 = (fVar29 - fVar26) * (fVar30 - fVar32);
LAB_10a7a7ba8:
      lVar13 = 0;
      do {
        pfVar10 = (float *)((long)pfVar21 + lVar13 + 0x10);
        if (pfVar10 == pfVar22) goto LAB_10a7a8378;
        uVar35 = *(undefined8 *)((long)pfVar21 + lVar13 + 0x18);
        uVar36 = *(undefined8 *)pfVar10;
        lVar13 = lVar13 + 0x10;
      } while (fVar33 < ((float)uVar35 - (float)uVar36) *
                        ((float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar36 >> 0x20)));
      pfVar5 = (float *)((long)pfVar21 + lVar13);
      pfVar10 = pfVar22;
      if (lVar13 == 0x10) {
        do {
          pfVar6 = pfVar10;
          if (pfVar10 <= pfVar5) break;
          pfVar6 = pfVar10 + -4;
          pfVar25 = pfVar10 + -2;
          pfVar10 = pfVar6;
        } while (((float)*(undefined8 *)pfVar25 - (float)*(undefined8 *)pfVar6) *
                 ((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <= fVar33);
      }
      else {
        do {
          if (pfVar10 == pfVar21) goto LAB_10a7a8378;
          pfVar6 = pfVar10 + -4;
          pfVar25 = pfVar10 + -2;
          pfVar10 = pfVar6;
        } while (((float)*(undefined8 *)pfVar25 - (float)*(undefined8 *)pfVar6) *
                 ((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar6 >> 0x20)) <= fVar33);
      }
      pfVar8 = pfVar6;
      pfVar10 = pfVar5;
      pfVar25 = pfVar5;
      if (pfVar5 < pfVar6) {
        do {
          uVar34 = *(undefined8 *)(pfVar25 + 2);
          uVar35 = *(undefined8 *)pfVar25;
          uVar36 = *(undefined8 *)pfVar8;
          *(undefined8 *)(pfVar25 + 2) = *(undefined8 *)(pfVar8 + 2);
          *(undefined8 *)pfVar25 = uVar36;
          *(undefined8 *)(pfVar8 + 2) = uVar34;
          *(undefined8 *)pfVar8 = uVar35;
          do {
            pfVar10 = pfVar25 + 4;
            if (pfVar10 == pfVar22) goto LAB_10a7a8378;
            pfVar3 = pfVar25 + 6;
            pfVar25 = pfVar10;
          } while (fVar33 < ((float)*(undefined8 *)pfVar3 - (float)*(undefined8 *)pfVar10) *
                            ((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)));
          do {
            if (pfVar8 == pfVar21) goto LAB_10a7a8378;
            pfVar14 = pfVar8 + -4;
            pfVar3 = pfVar8 + -2;
            pfVar8 = pfVar14;
          } while (((float)*(undefined8 *)pfVar3 - (float)*(undefined8 *)pfVar14) *
                   ((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) -
                   (float)((ulong)*(undefined8 *)pfVar14 >> 0x20)) <= fVar33);
        } while (pfVar10 < pfVar14);
      }
      pfVar25 = pfVar10 + -4;
      if (pfVar25 != pfVar21) {
        uVar35 = *(undefined8 *)pfVar25;
        *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar10 + -2);
        *(undefined8 *)pfVar21 = uVar35;
      }
      pfVar10[-4] = fVar26;
      pfVar10[-3] = fVar32;
      pfVar10[-2] = fVar29;
      pfVar10[-1] = fVar30;
      if (pfVar6 <= pfVar5) {
        pfVar5 = pfVar21;
        FUN_10a7a8664(pfVar21,pfVar25);
        pfVar6 = pfVar10;
        FUN_10a7a8664(pfVar10,pfVar22);
        if ((int)pfVar6 != 0) goto LAB_10a7a7e10;
        if (((ulong)pfVar5 & 1) != 0) goto LAB_10a7a7a94;
      }
      FUN_10a7a7a54(pfVar21,pfVar25,lVar23,bVar24);
      bVar24 = false;
      goto LAB_10a7a7a94;
    }
    fVar32 = pfVar21[1];
    fVar29 = pfVar21[2];
    fVar30 = pfVar21[3];
    fVar33 = (fVar29 - fVar26) * (fVar30 - fVar32);
    if (fVar33 < ((float)*(undefined8 *)(pfVar21 + -2) - (float)*(undefined8 *)(pfVar21 + -4)) *
                 ((float)((ulong)*(undefined8 *)(pfVar21 + -2) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(pfVar21 + -4) >> 0x20))) goto LAB_10a7a7ba8;
    pfVar5 = pfVar21 + 4;
    if (fVar33 <= ((float)*(undefined8 *)(pfVar22 + -2) - (float)*(undefined8 *)(pfVar22 + -4)) *
                  ((float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(pfVar22 + -4) >> 0x20))) {
      do {
        pfVar10 = pfVar5;
        if (pfVar22 <= pfVar10) break;
        pfVar5 = pfVar10 + 4;
      } while (fVar33 <= ((float)*(undefined8 *)(pfVar10 + 2) - (float)*(undefined8 *)pfVar10) *
                         ((float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)));
    }
    else {
      do {
        pfVar10 = pfVar5;
        if (pfVar10 == pfVar22) goto LAB_10a7a8378;
        pfVar5 = pfVar10 + 4;
      } while (fVar33 <= ((float)*(undefined8 *)(pfVar10 + 2) - (float)*(undefined8 *)pfVar10) *
                         ((float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)));
    }
    pfVar5 = pfVar22;
    pfVar6 = pfVar22;
    if (pfVar10 < pfVar22) {
      do {
        if (pfVar6 == pfVar21) goto LAB_10a7a8378;
        pfVar5 = pfVar6 + -4;
        pfVar25 = pfVar6 + -2;
        pfVar6 = pfVar5;
      } while (((float)*(undefined8 *)pfVar25 - (float)*(undefined8 *)pfVar5) *
               ((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar5 >> 0x20)) < fVar33);
    }
    while (pfVar10 < pfVar5) {
      uVar34 = *(undefined8 *)(pfVar10 + 2);
      uVar35 = *(undefined8 *)pfVar10;
      uVar36 = *(undefined8 *)pfVar5;
      *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(pfVar5 + 2);
      *(undefined8 *)pfVar10 = uVar36;
      *(undefined8 *)(pfVar5 + 2) = uVar34;
      *(undefined8 *)pfVar5 = uVar35;
      pfVar6 = pfVar10;
      do {
        pfVar10 = pfVar6 + 4;
        if (pfVar10 == pfVar22) goto LAB_10a7a8378;
        pfVar25 = pfVar6 + 6;
        pfVar8 = pfVar5;
        pfVar6 = pfVar10;
      } while (fVar33 <= ((float)*(undefined8 *)pfVar25 - (float)*(undefined8 *)pfVar10) *
                         ((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) -
                         (float)((ulong)*(undefined8 *)pfVar10 >> 0x20)));
      do {
        if (pfVar8 == pfVar21) goto LAB_10a7a8378;
        pfVar5 = pfVar8 + -4;
        pfVar6 = pfVar8 + -2;
        pfVar8 = pfVar5;
      } while (((float)*(undefined8 *)pfVar6 - (float)*(undefined8 *)pfVar5) *
               ((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) -
               (float)((ulong)*(undefined8 *)pfVar5 >> 0x20)) < fVar33);
    }
    if (pfVar10 + -4 != pfVar21) {
      uVar35 = *(undefined8 *)(pfVar10 + -4);
      *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar10 + -2);
      *(undefined8 *)pfVar21 = uVar35;
    }
    bVar24 = false;
    pfVar10[-4] = fVar26;
    pfVar10[-3] = fVar32;
    pfVar10[-2] = fVar29;
    pfVar10[-1] = fVar30;
  } while( true );
LAB_10a7a7fac:
  pfVar5 = pfVar10;
  fVar26 = pfVar12[6];
  fVar29 = pfVar12[7];
  fVar30 = pfVar12[4];
  fVar32 = pfVar12[5];
  fVar33 = (fVar26 - fVar30) * (fVar29 - fVar32);
  lVar13 = lVar23;
  if (((float)*(undefined8 *)(pfVar12 + 2) - (float)*(undefined8 *)pfVar12) *
      ((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) -
      (float)((ulong)*(undefined8 *)pfVar12 >> 0x20)) < fVar33) {
    do {
      lVar9 = lVar13;
      puVar2 = (undefined8 *)((long)pfVar21 + lVar9);
      puVar2[3] = puVar2[1];
      puVar2[2] = *puVar2;
      pfVar10 = pfVar21;
      if (lVar9 == 0) goto LAB_10a7a8024;
      lVar13 = lVar9 + -0x10;
    } while (((float)puVar2[-1] - (float)puVar2[-2]) *
             ((float)((ulong)puVar2[-1] >> 0x20) - (float)((ulong)puVar2[-2] >> 0x20)) < fVar33);
    pfVar10 = (float *)((long)pfVar21 + lVar9);
LAB_10a7a8024:
    *pfVar10 = fVar30;
    pfVar10[1] = fVar32;
    pfVar10[2] = fVar26;
    pfVar10[3] = fVar29;
  }
  pfVar10 = pfVar5 + 4;
  lVar23 = lVar23 + 0x10;
  pfVar12 = pfVar5;
  if (pfVar10 == pfVar22) {
    return;
  }
  goto LAB_10a7a7fac;
LAB_10a7a8050:
  do {
    if ((long)uVar15 <= (long)uVar11) {
      uVar19 = uVar15 << 1 | 1;
      pauVar18 = (undefined1 (*) [16])(pfVar21 + uVar19 * 4);
      uVar1 = uVar15 * 2 + 2;
      pauVar17 = pauVar18;
      uVar20 = uVar19;
      if (((long)uVar1 < (long)uVar7) &&
         (uVar35 = *(undefined8 *)pauVar18[1], pauVar17 = pauVar18 + 1, uVar20 = uVar1,
         ((float)*(undefined8 *)(*pauVar18 + 8) - (float)*(undefined8 *)*pauVar18) *
         ((float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20) -
         (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20)) <=
         ((float)*(undefined8 *)(pauVar18[1] + 8) - (float)uVar35) *
         ((float)((ulong)*(undefined8 *)(pauVar18[1] + 8) >> 0x20) - (float)((ulong)uVar35 >> 0x20))
         )) {
        pauVar17 = pauVar18;
        uVar20 = uVar19;
      }
      pauVar18 = (undefined1 (*) [16])(pfVar21 + uVar15 * 4);
      uVar36 = *(undefined8 *)(*pauVar18 + 8);
      uVar35 = *(undefined8 *)*pauVar18;
      auVar31 = NEON_ext(*pauVar18,*pauVar18,8,1);
      fVar26 = (auVar31._0_4_ - (float)uVar35) * (auVar31._4_4_ - (float)((ulong)uVar35 >> 0x20));
      if (((float)*(undefined8 *)(*pauVar17 + 8) - (float)*(undefined8 *)*pauVar17) *
          ((float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20)) <= fVar26) {
        do {
          pauVar16 = pauVar17;
          auVar31 = *pauVar16;
          *(long *)(*pauVar18 + 8) = auVar31._8_8_;
          *(long *)*pauVar18 = auVar31._0_8_;
          if ((long)uVar11 < (long)uVar20) break;
          uVar19 = uVar20 << 1 | 1;
          pauVar18 = (undefined1 (*) [16])(pfVar21 + uVar19 * 4);
          uVar1 = uVar20 * 2 + 2;
          pauVar17 = pauVar18;
          uVar20 = uVar19;
          if (((long)uVar1 < (long)uVar7) &&
             (uVar34 = *(undefined8 *)pauVar18[1], pauVar17 = pauVar18 + 1, uVar20 = uVar1,
             ((float)*(undefined8 *)(*pauVar18 + 8) - (float)*(undefined8 *)*pauVar18) *
             ((float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20) -
             (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20)) <=
             ((float)*(undefined8 *)(pauVar18[1] + 8) - (float)uVar34) *
             ((float)((ulong)*(undefined8 *)(pauVar18[1] + 8) >> 0x20) -
             (float)((ulong)uVar34 >> 0x20)))) {
            pauVar17 = pauVar18;
            uVar20 = uVar19;
          }
          pauVar18 = pauVar16;
        } while (((float)*(undefined8 *)(*pauVar17 + 8) - (float)*(undefined8 *)*pauVar17) *
                 ((float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20) -
                 (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20)) <= fVar26);
        *(undefined8 *)(*pauVar16 + 8) = uVar36;
        *(undefined8 *)*pauVar16 = uVar35;
      }
    }
    bVar24 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar24);
  do {
    uVar36 = *(undefined8 *)(pfVar21 + 2);
    uVar35 = *(undefined8 *)pfVar21;
    pfVar10 = pfVar21;
    uVar15 = 0;
    do {
      uVar1 = uVar15 << 1 | 1;
      uVar11 = uVar15 * 2 + 2;
      pfVar12 = pfVar10 + uVar15 * 4 + 4;
      uVar19 = uVar1;
      if (((long)uVar11 < (long)uVar7) &&
         (uVar34 = *(undefined8 *)(pfVar10 + uVar15 * 4 + 8), pfVar12 = pfVar10 + uVar15 * 4 + 8,
         uVar19 = uVar11,
         ((float)*(undefined8 *)(pfVar10 + uVar15 * 4 + 6) -
         (float)*(undefined8 *)(pfVar10 + uVar15 * 4 + 4)) *
         ((float)((ulong)*(undefined8 *)(pfVar10 + uVar15 * 4 + 6) >> 0x20) -
         (float)((ulong)*(undefined8 *)(pfVar10 + uVar15 * 4 + 4) >> 0x20)) <=
         ((float)*(undefined8 *)(pfVar10 + uVar15 * 4 + 10) - (float)uVar34) *
         ((float)((ulong)*(undefined8 *)(pfVar10 + uVar15 * 4 + 10) >> 0x20) -
         (float)((ulong)uVar34 >> 0x20)))) {
        pfVar12 = pfVar10 + uVar15 * 4 + 4;
        uVar19 = uVar1;
      }
      uVar34 = *(undefined8 *)pfVar12;
      *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(pfVar12 + 2);
      *(undefined8 *)pfVar10 = uVar34;
      pfVar10 = pfVar12;
      uVar15 = uVar19;
    } while ((long)uVar19 <= (long)(uVar7 - 2 >> 1));
    pfVar10 = pfVar22 + -4;
    if (pfVar12 == pfVar10) {
      *(undefined8 *)(pfVar12 + 2) = uVar36;
      *(undefined8 *)pfVar12 = uVar35;
    }
    else {
      uVar34 = *(undefined8 *)pfVar10;
      *(undefined8 *)(pfVar12 + 2) = *(undefined8 *)(pfVar22 + -2);
      *(undefined8 *)pfVar12 = uVar34;
      *(undefined8 *)(pfVar22 + -2) = uVar36;
      *(undefined8 *)pfVar10 = uVar35;
      lVar23 = (long)pfVar12 + (0x10 - (long)pfVar21) >> 4;
      if (1 < lVar23) {
        uVar15 = lVar23 - 2U >> 1;
        pfVar22 = pfVar21 + uVar15 * 4;
        fVar26 = pfVar12[2];
        fVar29 = pfVar12[3];
        fVar30 = *pfVar12;
        fVar32 = pfVar12[1];
        fVar33 = (fVar26 - fVar30) * (fVar29 - fVar32);
        if (fVar33 < ((float)*(undefined8 *)(pfVar22 + 2) - (float)*(undefined8 *)pfVar22) *
                     ((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) -
                     (float)((ulong)*(undefined8 *)pfVar22 >> 0x20))) {
          do {
            pfVar5 = pfVar22;
            uVar35 = *(undefined8 *)pfVar5;
            *(undefined8 *)(pfVar12 + 2) = *(undefined8 *)(pfVar5 + 2);
            *(undefined8 *)pfVar12 = uVar35;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            pfVar22 = pfVar21 + uVar15 * 4;
            pfVar12 = pfVar5;
          } while (fVar33 < ((float)*(undefined8 *)(pfVar22 + 2) - (float)*(undefined8 *)pfVar22) *
                            ((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) -
                            (float)((ulong)*(undefined8 *)pfVar22 >> 0x20)));
          *pfVar5 = fVar30;
          pfVar5[1] = fVar32;
          pfVar5[2] = fVar26;
          pfVar5[3] = fVar29;
        }
      }
    }
    bVar24 = (long)uVar7 < 3;
    uVar7 = uVar7 - 1;
    pfVar22 = pfVar10;
    if (bVar24) {
      return;
    }
  } while( true );
LAB_10a7a7e10:
  pfVar22 = pfVar25;
  if (((ulong)pfVar5 & 1) != 0) {
    return;
  }
  goto LAB_10a7a7a84;
}



/* Entry: 10a79c5b0; end: 10a79ccc3;  */

void FUN_10a79c5b0(long param_1,long *param_2,long param_3,long param_4,uint param_5)

{
  float *pfVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  long *aplStack_2a0 [53];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char cStack_88;
  float *pfStack_80;
  float *pfStack_78;
  undefined8 uStack_70;
  
  FUN_10a79ce18();
  pfStack_80 = (float *)0x0;
  pfStack_78 = (float *)0x0;
  uStack_70 = 0;
  FUN_10a7a7820(&pfStack_80,param_3,param_3 + param_4 * 0x10,param_4);
  for (pfVar1 = pfStack_80; pfVar1 != pfStack_78; pfVar1 = pfVar1 + 4) {
    fVar19 = pfVar1[2];
    fVar20 = *pfVar1;
    if (fVar19 - fVar20 <= 0.0) {
LAB_10a79c64c:
      pfVar1[2] = 1.0;
      pfVar1[3] = 1.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      fVar21 = 1.0;
      fVar22 = 0.0;
      fVar20 = 0.0;
      fVar19 = 1.0;
    }
    else {
      fVar21 = pfVar1[3];
      fVar22 = pfVar1[1];
      if (fVar21 - fVar22 <= 0.0) goto LAB_10a79c64c;
    }
    if (1.0001 < (fVar21 - fVar22) * (fVar19 - fVar20)) {
      iVar3 = *(int *)((long)param_2 + 0x14);
      iVar6 = (int)param_2[2];
      if ((param_5 & 1) != 0) {
        iVar3 = (int)param_2[2];
        iVar6 = *(int *)((long)param_2 + 0x14);
      }
      fVar20 = fVar20 / (float)iVar6;
      fVar22 = fVar22 / (float)iVar3;
      *pfVar1 = fVar20;
      pfVar1[1] = fVar22;
      fVar19 = fVar19 / (float)iVar6;
      fVar21 = fVar21 / (float)iVar3;
      pfVar1[2] = fVar19;
      pfVar1[3] = fVar21;
    }
    *pfVar1 = fVar20;
    pfVar1[1] = 1.0 - fVar21;
    pfVar1[2] = fVar19;
    pfVar1[3] = 1.0 - fVar22;
  }
  (**(code **)(*param_2 + 0x40))(param_2,1);
  FUN_10a7c9740(&uStack_2a8,param_2);
  func_0x00010a22b8d4(param_1 + 0xd0,&uStack_2a8);
  if (aplStack_2a0[0] != (long *)0x0) {
    plVar2 = aplStack_2a0[0] + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*aplStack_2a0[0] + 0x10))(aplStack_2a0[0]);
      __ZNSt3__119__shared_weak_count14__release_weakEv(aplStack_2a0[0]);
    }
  }
  if ((float **)(param_1 + 0xe0) != &pfStack_80) {
    FUN_10a5e46ac();
  }
  *(uint *)(param_1 + 0xf8) = param_5;
  puVar17 = (undefined8 *)(param_1 + 0xa0);
  puVar13 = (undefined8 *)*puVar17;
  uVar15 = (long)pfStack_78 - (long)pfStack_80 >> 4;
  uStack_2a8 = 0;
  cStack_88 = '\0';
  lVar11 = *(long *)(param_1 + 0xb0);
  if ((ulong)((lVar11 - (long)puVar13 >> 3) * -0xed7303b5cc0ed73) < uVar15) {
    if (puVar13 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0xa8);
      puVar9 = puVar13;
      if (puVar8 != puVar13) {
        do {
          puVar8 = puVar8 + -0x45;
          FUN_10a58e034();
        } while (puVar8 != puVar13);
        puVar9 = (undefined8 *)*puVar17;
      }
      *(undefined8 **)(param_1 + 0xa8) = puVar13;
      __ZdlPv(puVar9);
      lVar11 = 0;
      *puVar17 = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (uVar15 < 0x76b981dae6076c) {
      uVar12 = (lVar11 >> 3) * -0x1dae6076b981dae6;
      if (uVar12 < uVar15 || uVar12 - uVar15 == 0) {
        uVar12 = uVar15;
      }
      if (0x3b5cc0ed7303b4 < (ulong)((lVar11 >> 3) * -0xed7303b5cc0ed73)) {
        uVar12 = 0x76b981dae6076b;
      }
      if (uVar12 < 0x76b981dae6076c) {
        lVar11 = uVar12 * 0x228;
        __Znwm();
        *(long *)(param_1 + 0xa0) = lVar11;
        *(long *)(param_1 + 0xa8) = lVar11;
        *(ulong *)(param_1 + 0xb0) = lVar11 + uVar12 * 0x228;
        lVar16 = uVar15 * 0x228;
        lVar14 = lVar11 + lVar16;
        do {
          FUN_10a7a7890(lVar11,&uStack_2a8);
          lVar11 = lVar11 + 0x228;
          lVar16 = lVar16 + -0x228;
        } while (lVar16 != 0);
        goto LAB_10a79cc04;
      }
    }
    FUN_10a7a7a40();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a79cc80);
    (*pcVar7)();
  }
  lVar11 = *(long *)(param_1 + 0xa8) - (long)puVar13 >> 3;
  uVar18 = lVar11 * -0xed7303b5cc0ed73;
  uVar12 = uVar18;
  if (uVar15 <= uVar18) {
    uVar12 = uVar15;
  }
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    cVar4 = *(char *)(puVar13 + 0x44);
    if (cVar4 == cStack_88) {
      if (cVar4 != '\0') {
        *puVar13 = CONCAT71(uStack_2a7,uStack_2a8);
        FUN_10a14c1dc(puVar13 + 1,aplStack_2a0);
        if (puVar13[0x37] != lStack_f0) {
          func_0x000107c2acd4(puVar13 + 0x36);
          puVar13[0x37] = lStack_f0;
          puVar13[0x36] = uStack_f8;
          if (puVar13[0x37] != 0) {
            piVar10 = (int *)(puVar13[0x37] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x39] != lStack_e0) {
          func_0x000107c2acd4(puVar13 + 0x38);
          puVar13[0x39] = lStack_e0;
          puVar13[0x38] = uStack_e8;
          if (puVar13[0x39] != 0) {
            piVar10 = (int *)(puVar13[0x39] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x3b] != lStack_d0) {
          func_0x000107c2acd4(puVar13 + 0x3a);
          puVar13[0x3b] = lStack_d0;
          puVar13[0x3a] = uStack_d8;
          if (puVar13[0x3b] != 0) {
            piVar10 = (int *)(puVar13[0x3b] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x3d] != lStack_c0) {
          func_0x000107c2acd4(puVar13 + 0x3c);
          puVar13[0x3d] = lStack_c0;
          puVar13[0x3c] = uStack_c8;
          if (puVar13[0x3d] != 0) {
            piVar10 = (int *)(puVar13[0x3d] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x3f] != lStack_b0) {
          func_0x000107c2acd4(puVar13 + 0x3e);
          puVar13[0x3f] = lStack_b0;
          puVar13[0x3e] = uStack_b8;
          if (puVar13[0x3f] != 0) {
            piVar10 = (int *)(puVar13[0x3f] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x41] != lStack_a0) {
          func_0x000107c2acd4(puVar13 + 0x40);
          puVar13[0x41] = lStack_a0;
          puVar13[0x40] = uStack_a8;
          if (puVar13[0x41] != 0) {
            piVar10 = (int *)(puVar13[0x41] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (puVar13[0x43] != lStack_90) {
          func_0x000107c2acd4(puVar13 + 0x42);
          puVar13[0x43] = lStack_90;
          puVar13[0x42] = uStack_98;
          if (puVar13[0x43] != 0) {
            piVar10 = (int *)(puVar13[0x43] + -8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar5) {
                *piVar10 = *piVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
      }
    }
    else if (cVar4 == '\0') {
      *puVar13 = CONCAT71(uStack_2a7,uStack_2a8);
      FUN_10a14c0b0(puVar13 + 1,aplStack_2a0);
      puVar13[0x36] = &PTR_SUB_110b01d60;
      puVar13[0x37] = lStack_f0;
      puVar13[0x36] = uStack_f8;
      if (puVar13[0x37] != 0) {
        piVar10 = (int *)(puVar13[0x37] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x36] = &PTR_DAT_110b05358;
      puVar13[0x38] = &PTR_SUB_110b01d60;
      puVar13[0x39] = lStack_e0;
      puVar13[0x38] = uStack_e8;
      if (puVar13[0x39] != 0) {
        piVar10 = (int *)(puVar13[0x39] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x38] = &PTR_DAT_110b05018;
      puVar13[0x3a] = &PTR_SUB_110b01d60;
      puVar13[0x3b] = lStack_d0;
      puVar13[0x3a] = uStack_d8;
      if (puVar13[0x3b] != 0) {
        piVar10 = (int *)(puVar13[0x3b] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x3a] = &PTR_DAT_110b05018;
      puVar13[0x3c] = &PTR_SUB_110b01d60;
      puVar13[0x3d] = lStack_c0;
      puVar13[0x3c] = uStack_c8;
      if (puVar13[0x3d] != 0) {
        piVar10 = (int *)(puVar13[0x3d] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x3c] = &PTR_DAT_110b05018;
      puVar13[0x3e] = &PTR_SUB_110b01d60;
      puVar13[0x3f] = lStack_b0;
      puVar13[0x3e] = uStack_b8;
      if (puVar13[0x3f] != 0) {
        piVar10 = (int *)(puVar13[0x3f] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x3e] = &PTR_DAT_110b05018;
      puVar13[0x40] = &PTR_SUB_110b01d60;
      puVar13[0x41] = lStack_a0;
      puVar13[0x40] = uStack_a8;
      if (puVar13[0x41] != 0) {
        piVar10 = (int *)(puVar13[0x41] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x40] = &PTR_DAT_110b05018;
      puVar13[0x42] = &PTR_SUB_110b01d60;
      puVar13[0x43] = lStack_90;
      puVar13[0x42] = uStack_98;
      if (puVar13[0x43] != 0) {
        piVar10 = (int *)(puVar13[0x43] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar13[0x42] = &PTR_DAT_110b05018;
      *(undefined1 *)(puVar13 + 0x44) = 1;
    }
    else {
      FUN_10a69be78(puVar13);
    }
    puVar13 = puVar13 + 0x45;
  }
  lVar14 = uVar15 + lVar11 * 0xed7303b5cc0ed73;
  if (uVar15 < uVar18 || lVar14 == 0) {
    lVar11 = *(long *)(param_1 + 0xa8);
    lVar14 = *(long *)(param_1 + 0xa0) + uVar15 * 0x228;
    while (lVar11 != lVar14) {
      lVar11 = lVar11 + -0x228;
      FUN_10a58e034();
    }
  }
  else {
    lVar16 = *(long *)(param_1 + 0xa8);
    lVar14 = lVar16 + lVar14 * 0x228;
    lVar11 = uVar15 * 0x228 + lVar11 * -8;
    do {
      FUN_10a7a7890(lVar16,&uStack_2a8);
      lVar16 = lVar16 + 0x228;
      lVar11 = lVar11 + -0x228;
    } while (lVar11 != 0);
  }
LAB_10a79cc04:
  *(long *)(param_1 + 0xa8) = lVar14;
  FUN_10a58e034(&uStack_2a8);
  if (*(long *)(param_1 + 0xa0) != *(long *)(param_1 + 0xa8)) {
    FUN_10a79cfbc(param_1,0);
  }
  if (pfStack_80 != (float *)0x0) {
    pfStack_78 = pfStack_80;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a79ccc4; end: 10a79cccb;  */

void FUN_10a79ccc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  FUN_10a79c55c(&lStack_78,param_3,param_4);
  plVar14 = *(long **)(param_1 + 0x70);
  if (plVar14 != (long *)0x0) {
    puVar13 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    do {
      plVar6 = (long *)plVar14[2];
      (**(code **)(*plVar6 + 0x30))();
      plVar12 = (long *)plVar14[2];
      puVar11 = puVar10;
      if ((int)plVar6 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12,param_2,lStack_78,lStack_70 - lStack_78 >> 4,param_5)
        ;
      }
      else if (puVar13 < puVar15) {
        *puVar13 = plVar12;
        puVar13 = puVar13 + 1;
      }
      else {
        lVar8 = (long)puVar13 - (long)puVar10;
        uVar1 = (lVar8 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a7a780c();
LAB_10a79c440:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79c444);
          (*pcVar5)();
        }
        uVar9 = (long)puVar15 - (long)puVar10 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puVar15 - (long)puVar10)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a79c440;
        }
        lVar7 = uVar9 << 3;
        __Znwm();
        puVar2 = (undefined8 *)(lVar7 + lVar8);
        puVar15 = (undefined8 *)(lVar7 + uVar9 * 8);
        puVar11 = puVar2 + -(lVar8 >> 3);
        puVar13 = puVar2 + 1;
        *puVar2 = plVar12;
        _memcpy(puVar11,puVar10,lVar8);
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv(puVar10);
        }
      }
      plVar14 = (long *)*plVar14;
      puVar10 = puVar11;
    } while (plVar14 != (long *)0x0);
    if (puVar11 != puVar13) {
      plStack_90 = (long *)CONCAT62(plStack_90._2_6_,0x100);
      lVar8 = 0x90;
      __Znwm();
      FUN_10a1b0de4();
      plVar6 = (long *)0xa8;
      lStack_80 = lVar8;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110baca38;
      plVar14 = plVar6 + 3;
      FUN_10a1b27b8(plVar14,&lStack_80);
      plStack_90 = plVar14;
      plStack_88 = plVar6;
      FUN_10a79c5b0(param_1 + -0x18,plVar14,lStack_78,lStack_70 - lStack_78 >> 4,param_5);
      puVar15 = puVar11;
      do {
        puVar10 = puVar15 + 1;
        (**(code **)(*(long *)*puVar15 + 0x20))
                  ((long *)*puVar15,&plStack_90,lStack_78,lStack_70 - lStack_78 >> 4,param_5);
        plVar14 = plStack_88;
        puVar15 = puVar10;
      } while (puVar10 != puVar13);
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar8 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      lVar8 = lStack_80;
      lStack_80 = 0;
      if (lVar8 != 0) {
        func_0x00010a0e32bc(&lStack_80);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a79cccc; end: 10a79cd8f;  */

void FUN_10a79cccc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lStack_48;
  long lStack_40;
  
  FUN_10a79c55c(&lStack_48,param_3,param_4);
  FUN_10a79c5b0(param_1,*param_2,lStack_48,lStack_40 - lStack_48 >> 4,param_5);
  plVar1 = (long *)(param_1 + 0x88);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*(long *)plVar1[2] + 0x20))
              ((long *)plVar1[2],param_2,lStack_48,lStack_40 - lStack_48 >> 4,param_5);
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a79cd90; end: 10a79cd97;  */

void FUN_10a79cd90(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lStack_48;
  long lStack_40;
  
  FUN_10a79c55c(&lStack_48,param_3,param_4);
  FUN_10a79c5b0(param_1 + -0x18,*param_2,lStack_48,lStack_40 - lStack_48 >> 4,param_5);
  plVar1 = (long *)(param_1 + 0x70);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*(long *)plVar1[2] + 0x20))
              ((long *)plVar1[2],param_2,lStack_48,lStack_40 - lStack_48 >> 4,param_5);
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a79cd98; end: 10a79ce17;  */

void FUN_10a79cd98(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x88); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[2] + 0x28))((long *)plVar1[2],param_2);
  }
  return;
}



/* Entry: 10a79ce18; end: 10a79cfbb;  */

undefined1 * FUN_10a79ce18(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long ***ppplVar7;
  undefined1 *puVar8;
  uint uVar9;
  long ***ppplVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *unaff_x20;
  undefined8 *puVar14;
  long ***unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined1 *puStack_578;
  undefined8 *puStack_570;
  undefined1 *puStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined **ppuStack_540;
  undefined1 *puStack_538;
  undefined8 *puStack_530;
  undefined1 *puStack_528;
  undefined1 ***pppuStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined **ppuStack_500;
  undefined1 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 **ppuStack_4e0;
  code *pcStack_4d8;
  long **pplStack_4d0;
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
  undefined8 uStack_3e0;
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
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  long lStack_318;
  undefined **ppuStack_310;
  long lStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  long lStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined1 *puStack_c8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x100) == 0) {
    plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x118) + 0x100) + 0x1c8);
    (**(code **)(*plVar5 + 0x18))();
    puStack_f8 = (undefined1 *)plVar5[1];
    lStack_100 = *plVar5;
    if (plVar5[1] != 0) {
      plVar5 = (long *)(plVar5[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x22 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x118) + 0x100) + 0x10);
    unaff_x21 = *(long ****)(*(long *)(*(long *)(param_1 + 0x118) + 0x100) + 0x18);
    if (unaff_x21 != (long ***)0x0) {
      plVar5 = (long *)((long)unaff_x21 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    puStack_e0 = &UNK_109896774;
    ppuStack_d8 = &PTR_DAT_110b17068;
    unaff_x20 = (undefined1 *)0x10;
    ppuStack_e8 = unaff_x22;
    ppuStack_d0 = unaff_x22;
    puStack_c8 = (undefined1 *)unaff_x21;
    __Znwm();
    puStack_98 = &UNK_109896774;
    ppuStack_90 = &PTR_DAT_110b17068;
    ppuStack_d0 = (undefined **)0x0;
    puStack_c8 = (undefined1 *)0x0;
    puStack_e0 = &UNK_1053a6a3c;
    ppuStack_d8 = &PTR_DAT_110ae9180;
    ppuStack_a0 = unaff_x22;
    ppuStack_88 = unaff_x22;
    puStack_80 = (undefined1 *)unaff_x21;
    FUN_10aabf128();
    func_0x0001092ba41c(&ppuStack_a0);
    param_2 = unaff_x20;
    FUN_10a7c9214(param_1 + 0x100);
    func_0x0001092ba41c(&ppuStack_e8);
    param_1 = puStack_f8;
    if (puStack_f8 != (undefined1 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001092ba41c(&ppuStack_a0);
  __ZdlPv(unaff_x20);
  func_0x0001092ba41c(&ppuStack_e8);
  func_0x00010a06e274(&uStack_110);
  func_0x00010a061620(&uStack_120);
  if (puStack_f8 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
  pcStack_128 = FUN_10a79cfbc;
  ppplVar10 = &pplStack_4d0;
  ppplVar7 = &pplStack_4d0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  if (-1 < (int)param_2) {
    puVar14 = (undefined8 *)0xf128cfc4a33f128d;
    uVar13 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
    pplStack_4d0 = (long **)&UNK_10f6767ae;
    uStack_4c8 = 0x46;
    if (((ulong)param_2 & 0xffffffff) <= uVar13 && uVar13 - ((ulong)param_2 & 0xffffffff) != 0) {
      uVar13 = (ulong)param_2 & 0xffffffff;
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x228 + 0x220) & 1) != 0) {
LAB_10a79d444:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
          return param_1;
        }
        ___stack_chk_fail();
        if ((int)param_2 != 0) {
          func_0x000104bd46a0();
          FUN_10a79d64c(&plStack_2a8);
        }
        puVar8 = param_1;
        __Unwind_Resume();
        ppuVar15 = &puStack_510;
        pcStack_4d8 = FUN_10a79d4d8;
        uVar9 = (uint)param_2;
        ppuStack_500 = unaff_x22;
        puStack_4f8 = (undefined1 *)unaff_x21;
        puStack_4f0 = puVar14;
        puStack_4e8 = param_1;
        ppuStack_4e0 = &puStack_130;
        if (-1 < (int)uVar9) {
          uVar13 = (*(long *)(puVar8 + 0xa8) - *(long *)(puVar8 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
          puStack_510 = &UNK_10f676683;
          uStack_508 = 0x4d;
          param_1 = puVar8;
          puVar14 = (undefined8 *)0xf128cfc4a33f128d;
          if (((ulong)param_2 & 0xffffffff) <= uVar13 && uVar13 - ((ulong)param_2 & 0xffffffff) != 0
             ) {
            uVar6 = (ulong)param_2 & 0xffffffff;
            FUN_10a79cfbc(puVar8);
            uVar13 = (*(long *)(puVar8 + 0xa8) - *(long *)(puVar8 + 0xa0) >> 3) * -0xed7303b5cc0ed73
            ;
            if ((uVar6 <= uVar13 && uVar13 - uVar6 != 0) &&
               (lVar12 = *(long *)(puVar8 + 0xa0) + uVar6 * 0x228,
               (*(byte *)(lVar12 + 0x220) & 1) != 0)) {
              return (undefined1 *)(lVar12 + 8);
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a79d57c);
            (*pcVar4)();
          }
        }
        uStack_508 = 0x4d;
        puStack_510 = &UNK_10f676683;
        FUN_10a0edfc4();
        ppuVar16 = &puStack_550;
        uStack_518 = 0x10a79d594;
        ppuStack_540 = unaff_x22;
        puStack_538 = (undefined1 *)unaff_x21;
        puStack_530 = puVar14;
        puStack_528 = param_1;
        pppuStack_520 = &ppuStack_4e0;
        if (-1 < (int)uVar9) {
          uVar13 = (*(long *)((long)ppuVar15 + 0xa8) - *(long *)((long)ppuVar15 + 0xa0) >> 3) *
                   -0xed7303b5cc0ed73;
          puStack_550 = &UNK_10f6766d1;
          uStack_548 = 0x4c;
          param_1 = (undefined1 *)ppuVar15;
          puVar14 = (undefined8 *)0xf128cfc4a33f128d;
          if (uVar9 <= uVar13 && uVar13 - uVar9 != 0) {
            uVar6 = (ulong)uVar9;
            FUN_10a79cfbc(ppuVar15);
            uVar13 = (*(long *)((long)ppuVar15 + 0xa8) - *(long *)((long)ppuVar15 + 0xa0) >> 3) *
                     -0xed7303b5cc0ed73;
            if ((uVar6 <= uVar13 && uVar13 - uVar6 != 0) &&
               (puVar8 = (undefined1 *)(*(long *)((long)ppuVar15 + 0xa0) + uVar6 * 0x228),
               (puVar8[0x220] & 1) != 0)) {
              return puVar8;
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a79d634);
            (*pcVar4)();
          }
        }
        uStack_548 = 0x4c;
        puStack_550 = &UNK_10f6766d1;
        FUN_10a0edfc4();
        pcStack_558 = FUN_10a79d64c;
        puStack_570 = puVar14;
        puStack_568 = param_1;
        pppuStack_560 = &pppuStack_520;
        FUN_10a500034((undefined1 *)((long)ppuVar16 + 0x18));
        puStack_578 = (undefined1 *)ppuVar16;
        FUN_10a4fff4c(&puStack_578);
        return (undefined1 *)ppuVar16;
      }
      if (uVar13 < (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4)) {
        puVar14 = (undefined8 *)(*(long *)(param_1 + 0xe0) + uVar13 * 0x10);
        uStack_278 = puVar14[1];
        uStack_280 = *puVar14;
        FUN_10aabf4bc(&plStack_2a8,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xd0),
                      &uStack_280,1,0,*(undefined4 *)(param_1 + 0xf8),param_1[0x120]);
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_418 = 0;
        uStack_420 = 0;
        uStack_408 = 0;
        uStack_410 = 0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        uStack_478 = 0;
        uStack_480 = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        pplStack_4d0 = (long **)0x0;
        uVar6 = (ulong)&pplStack_4d0 | 8;
        FUN_10a7a88cc();
        func_0x000107c2acdc();
        unaff_x22 = &PTR_SUB_110b01d60;
        lStack_318 = *(long *)(uVar6 + 8);
        if (lStack_318 != 0) {
          piVar11 = (int *)(lStack_318 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_320 = &PTR_DAT_110b05358;
        func_0x000107c2acdc();
        lStack_308 = *(long *)(uVar6 + 8);
        if (lStack_308 != 0) {
          piVar11 = (int *)(lStack_308 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_310 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_2f8 = *(long *)(uVar6 + 8);
        if (lStack_2f8 != 0) {
          piVar11 = (int *)(lStack_2f8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_300 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_2e8 = *(long *)(uVar6 + 8);
        if (lStack_2e8 != 0) {
          piVar11 = (int *)(lStack_2e8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_2f0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_2d8 = *(long *)(uVar6 + 8);
        if (lStack_2d8 != 0) {
          piVar11 = (int *)(lStack_2d8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_2e0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_2c8 = *(long *)(uVar6 + 8);
        if (lStack_2c8 != 0) {
          piVar11 = (int *)(lStack_2c8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_2d0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_2b8 = *(long *)(uVar6 + 8);
        if (lStack_2b8 != 0) {
          piVar11 = (int *)(lStack_2b8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_2c0 = &PTR_DAT_110b05018;
        if (plStack_2a8 != plStack_2a0) {
          pplStack_4d0 = (long **)*plStack_2a8;
          FUN_10a69bf24((ulong)&pplStack_4d0 | 8,plStack_2a8 + 1);
          lVar21 = plStack_2a8[0x37];
          ppuVar16 = (undefined **)plStack_2a8[0x36];
          lVar24 = plStack_2a8[0x39];
          ppuVar19 = (undefined **)plStack_2a8[0x38];
          plStack_2a8[0x37] = lStack_318;
          plStack_2a8[0x36] = (long)ppuStack_320;
          plStack_2a8[0x39] = lStack_308;
          plStack_2a8[0x38] = (long)ppuStack_310;
          lVar22 = plStack_2a8[0x3b];
          ppuVar17 = (undefined **)plStack_2a8[0x3a];
          lVar26 = plStack_2a8[0x3d];
          ppuVar27 = (undefined **)plStack_2a8[0x3c];
          plStack_2a8[0x3b] = lStack_2f8;
          plStack_2a8[0x3a] = (long)ppuStack_300;
          plStack_2a8[0x3d] = lStack_2e8;
          plStack_2a8[0x3c] = (long)ppuStack_2f0;
          lVar23 = plStack_2a8[0x3f];
          ppuVar18 = (undefined **)plStack_2a8[0x3e];
          lVar25 = plStack_2a8[0x41];
          ppuVar20 = (undefined **)plStack_2a8[0x40];
          plStack_2a8[0x3f] = lStack_2d8;
          plStack_2a8[0x3e] = (long)ppuStack_2e0;
          plStack_2a8[0x41] = lStack_2c8;
          plStack_2a8[0x40] = (long)ppuStack_2d0;
          lVar12 = plStack_2a8[0x43];
          ppuVar15 = (undefined **)plStack_2a8[0x42];
          plStack_2a8[0x43] = lStack_2b8;
          plStack_2a8[0x42] = (long)ppuStack_2c0;
          ppuStack_320 = ppuVar16;
          lStack_318 = lVar21;
          ppuStack_310 = ppuVar19;
          lStack_308 = lVar24;
          ppuStack_300 = ppuVar17;
          lStack_2f8 = lVar22;
          ppuStack_2f0 = ppuVar27;
          lStack_2e8 = lVar26;
          ppuStack_2e0 = ppuVar18;
          lStack_2d8 = lVar23;
          ppuStack_2d0 = ppuVar20;
          lStack_2c8 = lVar25;
          ppuStack_2c0 = ppuVar15;
          lStack_2b8 = lVar12;
        }
        uVar6 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
        if (uVar13 <= uVar6 && uVar6 - uVar13 != 0) {
          puVar14 = (undefined8 *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x228);
          if (*(char *)(puVar14 + 0x44) == '\x01') {
            *puVar14 = pplStack_4d0;
            param_2 = (undefined1 *)((ulong)&pplStack_4d0 | 8);
            FUN_10a69bf24(puVar14 + 1);
            lVar12 = puVar14[0x37];
            ppuVar15 = (undefined **)puVar14[0x36];
            puVar14[0x37] = lStack_318;
            puVar14[0x36] = ppuStack_320;
            lVar21 = puVar14[0x39];
            ppuVar16 = (undefined **)puVar14[0x38];
            puVar14[0x39] = lStack_308;
            puVar14[0x38] = ppuStack_310;
            lVar22 = puVar14[0x3b];
            ppuVar17 = (undefined **)puVar14[0x3a];
            puVar14[0x3b] = lStack_2f8;
            puVar14[0x3a] = ppuStack_300;
            lVar23 = puVar14[0x3d];
            ppuVar18 = (undefined **)puVar14[0x3c];
            puVar14[0x3d] = lStack_2e8;
            puVar14[0x3c] = ppuStack_2f0;
            lVar24 = puVar14[0x3f];
            ppuVar19 = (undefined **)puVar14[0x3e];
            puVar14[0x3f] = lStack_2d8;
            puVar14[0x3e] = ppuStack_2e0;
            lVar25 = puVar14[0x41];
            ppuVar20 = (undefined **)puVar14[0x40];
            puVar14[0x41] = lStack_2c8;
            puVar14[0x40] = ppuStack_2d0;
            lVar26 = puVar14[0x43];
            puVar14[0x43] = lStack_2b8;
            puVar14[0x42] = ppuStack_2c0;
            ppuStack_320 = ppuVar15;
            lStack_318 = lVar12;
            ppuStack_310 = ppuVar16;
            lStack_308 = lVar21;
            ppuStack_300 = ppuVar17;
            lStack_2f8 = lVar22;
            ppuStack_2f0 = ppuVar18;
            lStack_2e8 = lVar23;
            ppuStack_2e0 = ppuVar19;
            lStack_2d8 = lVar24;
            ppuStack_2d0 = ppuVar20;
            lStack_2c8 = lVar25;
            lStack_2b8 = lVar26;
          }
          else {
            func_0x00010a69c0d4(puVar14);
            *(undefined1 *)(puVar14 + 0x44) = 1;
            param_2 = (undefined1 *)ppplVar10;
          }
          if ((param_1[200] & 1) == 0) {
            *(long **)(param_1 + 0xc0) = plStack_288;
            *(undefined8 *)(param_1 + 0xb8) = uStack_290;
            plStack_288 = (long *)0x0;
            uStack_290 = 0;
            param_1[200] = 1;
          }
          ppuStack_2c0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_2c0);
          ppuStack_2d0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_2d0);
          ppuStack_2e0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_2e0);
          ppuStack_2f0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_2f0);
          ppuStack_300 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_300);
          ppuStack_310 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_310);
          ppuStack_320 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_320);
          FUN_10a14e140((ulong)&pplStack_4d0 | 8);
          plVar5 = plStack_288;
          if (plStack_288 != (long *)0x0) {
            plVar1 = plStack_288 + 1;
            do {
              lVar12 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_288 + 0x10))(plStack_288);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          pplStack_4d0 = &plStack_2a8;
          FUN_10a4fff4c();
          param_1 = (undefined1 *)ppplVar7;
          unaff_x21 = &pplStack_4d0;
          goto LAB_10a79d444;
        }
      }
      goto LAB_10a79d48c;
    }
  }
  uStack_4c8 = 0x46;
  pplStack_4d0 = (long **)&UNK_10f6767ae;
  FUN_10a0edfc4(&pplStack_4d0);
LAB_10a79d48c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a79d490);
  (*pcVar4)();
}



/* Entry: 10a79cfbc; end: 10a79d4d7;  */

undefined1 * FUN_10a79cfbc(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  long ***ppplVar7;
  undefined1 *puVar8;
  uint uVar9;
  long ***ppplVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long ***unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined1 *puStack_458;
  undefined8 *puStack_450;
  undefined1 *puStack_448;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined **ppuStack_420;
  undefined1 *puStack_418;
  undefined8 *puStack_410;
  undefined1 *puStack_408;
  undefined1 **ppuStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined **ppuStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  long **pplStack_3b0;
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
  undefined8 uStack_330;
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
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_68;
  
  ppplVar10 = &pplStack_3b0;
  ppplVar7 = &pplStack_3b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (-1 < (int)param_2) {
    puVar14 = (undefined8 *)0xf128cfc4a33f128d;
    uVar13 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
    pplStack_3b0 = (long **)&UNK_10f6767ae;
    uStack_3a8 = 0x46;
    if (((ulong)param_2 & 0xffffffff) <= uVar13 && uVar13 - ((ulong)param_2 & 0xffffffff) != 0) {
      uVar13 = (ulong)param_2 & 0xffffffff;
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x228 + 0x220) & 1) != 0) {
LAB_10a79d444:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return param_1;
        }
        ___stack_chk_fail();
        if ((int)param_2 != 0) {
          func_0x000104bd46a0();
          FUN_10a79d64c(&plStack_188);
        }
        puVar8 = param_1;
        __Unwind_Resume();
        ppuVar15 = &puStack_3f0;
        pcStack_3b8 = FUN_10a79d4d8;
        uVar9 = (uint)param_2;
        ppuStack_3e0 = unaff_x22;
        puStack_3d8 = (undefined1 *)unaff_x21;
        puStack_3d0 = puVar14;
        puStack_3c8 = param_1;
        puStack_3c0 = &stack0xfffffffffffffff0;
        if (-1 < (int)uVar9) {
          uVar13 = (*(long *)(puVar8 + 0xa8) - *(long *)(puVar8 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
          puStack_3f0 = &UNK_10f676683;
          uStack_3e8 = 0x4d;
          param_1 = puVar8;
          puVar14 = (undefined8 *)0xf128cfc4a33f128d;
          if (((ulong)param_2 & 0xffffffff) <= uVar13 && uVar13 - ((ulong)param_2 & 0xffffffff) != 0
             ) {
            uVar6 = (ulong)param_2 & 0xffffffff;
            FUN_10a79cfbc(puVar8);
            uVar13 = (*(long *)(puVar8 + 0xa8) - *(long *)(puVar8 + 0xa0) >> 3) * -0xed7303b5cc0ed73
            ;
            if ((uVar6 <= uVar13 && uVar13 - uVar6 != 0) &&
               (lVar12 = *(long *)(puVar8 + 0xa0) + uVar6 * 0x228,
               (*(byte *)(lVar12 + 0x220) & 1) != 0)) {
              return (undefined1 *)(lVar12 + 8);
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79d57c);
            (*pcVar5)();
          }
        }
        uStack_3e8 = 0x4d;
        puStack_3f0 = &UNK_10f676683;
        FUN_10a0edfc4();
        ppuVar16 = &puStack_430;
        uStack_3f8 = 0x10a79d594;
        ppuStack_420 = unaff_x22;
        puStack_418 = (undefined1 *)unaff_x21;
        puStack_410 = puVar14;
        puStack_408 = param_1;
        ppuStack_400 = &puStack_3c0;
        if (-1 < (int)uVar9) {
          uVar13 = (*(long *)((long)ppuVar15 + 0xa8) - *(long *)((long)ppuVar15 + 0xa0) >> 3) *
                   -0xed7303b5cc0ed73;
          puStack_430 = &UNK_10f6766d1;
          uStack_428 = 0x4c;
          param_1 = (undefined1 *)ppuVar15;
          puVar14 = (undefined8 *)0xf128cfc4a33f128d;
          if (uVar9 <= uVar13 && uVar13 - uVar9 != 0) {
            uVar6 = (ulong)uVar9;
            FUN_10a79cfbc(ppuVar15);
            uVar13 = (*(long *)((long)ppuVar15 + 0xa8) - *(long *)((long)ppuVar15 + 0xa0) >> 3) *
                     -0xed7303b5cc0ed73;
            if ((uVar6 <= uVar13 && uVar13 - uVar6 != 0) &&
               (puVar8 = (undefined1 *)(*(long *)((long)ppuVar15 + 0xa0) + uVar6 * 0x228),
               (puVar8[0x220] & 1) != 0)) {
              return puVar8;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79d634);
            (*pcVar5)();
          }
        }
        uStack_428 = 0x4c;
        puStack_430 = &UNK_10f6766d1;
        FUN_10a0edfc4();
        pcStack_438 = FUN_10a79d64c;
        puStack_450 = puVar14;
        puStack_448 = param_1;
        pppuStack_440 = &ppuStack_400;
        FUN_10a500034((undefined1 *)((long)ppuVar16 + 0x18));
        puStack_458 = (undefined1 *)ppuVar16;
        FUN_10a4fff4c(&puStack_458);
        return (undefined1 *)ppuVar16;
      }
      if (uVar13 < (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4)) {
        puVar14 = (undefined8 *)(*(long *)(param_1 + 0xe0) + uVar13 * 0x10);
        uStack_158 = puVar14[1];
        uStack_160 = *puVar14;
        FUN_10aabf4bc(&plStack_188,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xd0),
                      &uStack_160,1,0,*(undefined4 *)(param_1 + 0xf8),param_1[0x120]);
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_3a8 = 0;
        pplStack_3b0 = (long **)0x0;
        uVar6 = (ulong)&pplStack_3b0 | 8;
        FUN_10a7a88cc();
        func_0x000107c2acdc();
        unaff_x22 = &PTR_SUB_110b01d60;
        lStack_1f8 = *(long *)(uVar6 + 8);
        if (lStack_1f8 != 0) {
          piVar11 = (int *)(lStack_1f8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_200 = &PTR_DAT_110b05358;
        func_0x000107c2acdc();
        lStack_1e8 = *(long *)(uVar6 + 8);
        if (lStack_1e8 != 0) {
          piVar11 = (int *)(lStack_1e8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1f0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_1d8 = *(long *)(uVar6 + 8);
        if (lStack_1d8 != 0) {
          piVar11 = (int *)(lStack_1d8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1e0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_1c8 = *(long *)(uVar6 + 8);
        if (lStack_1c8 != 0) {
          piVar11 = (int *)(lStack_1c8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1d0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_1b8 = *(long *)(uVar6 + 8);
        if (lStack_1b8 != 0) {
          piVar11 = (int *)(lStack_1b8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1c0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_1a8 = *(long *)(uVar6 + 8);
        if (lStack_1a8 != 0) {
          piVar11 = (int *)(lStack_1a8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1b0 = &PTR_DAT_110b05018;
        func_0x000107c2acdc();
        lStack_198 = *(long *)(uVar6 + 8);
        if (lStack_198 != 0) {
          piVar11 = (int *)(lStack_198 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_1a0 = &PTR_DAT_110b05018;
        if (plStack_188 != plStack_180) {
          pplStack_3b0 = (long **)*plStack_188;
          FUN_10a69bf24((ulong)&pplStack_3b0 | 8,plStack_188 + 1);
          lVar21 = plStack_188[0x37];
          ppuVar16 = (undefined **)plStack_188[0x36];
          lVar24 = plStack_188[0x39];
          ppuVar19 = (undefined **)plStack_188[0x38];
          plStack_188[0x37] = lStack_1f8;
          plStack_188[0x36] = (long)ppuStack_200;
          plStack_188[0x39] = lStack_1e8;
          plStack_188[0x38] = (long)ppuStack_1f0;
          lVar22 = plStack_188[0x3b];
          ppuVar17 = (undefined **)plStack_188[0x3a];
          lVar26 = plStack_188[0x3d];
          ppuVar27 = (undefined **)plStack_188[0x3c];
          plStack_188[0x3b] = lStack_1d8;
          plStack_188[0x3a] = (long)ppuStack_1e0;
          plStack_188[0x3d] = lStack_1c8;
          plStack_188[0x3c] = (long)ppuStack_1d0;
          lVar23 = plStack_188[0x3f];
          ppuVar18 = (undefined **)plStack_188[0x3e];
          lVar25 = plStack_188[0x41];
          ppuVar20 = (undefined **)plStack_188[0x40];
          plStack_188[0x3f] = lStack_1b8;
          plStack_188[0x3e] = (long)ppuStack_1c0;
          plStack_188[0x41] = lStack_1a8;
          plStack_188[0x40] = (long)ppuStack_1b0;
          lVar12 = plStack_188[0x43];
          ppuVar15 = (undefined **)plStack_188[0x42];
          plStack_188[0x43] = lStack_198;
          plStack_188[0x42] = (long)ppuStack_1a0;
          ppuStack_200 = ppuVar16;
          lStack_1f8 = lVar21;
          ppuStack_1f0 = ppuVar19;
          lStack_1e8 = lVar24;
          ppuStack_1e0 = ppuVar17;
          lStack_1d8 = lVar22;
          ppuStack_1d0 = ppuVar27;
          lStack_1c8 = lVar26;
          ppuStack_1c0 = ppuVar18;
          lStack_1b8 = lVar23;
          ppuStack_1b0 = ppuVar20;
          lStack_1a8 = lVar25;
          ppuStack_1a0 = ppuVar15;
          lStack_198 = lVar12;
        }
        uVar6 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
        if (uVar13 <= uVar6 && uVar6 - uVar13 != 0) {
          puVar14 = (undefined8 *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x228);
          if (*(char *)(puVar14 + 0x44) == '\x01') {
            *puVar14 = pplStack_3b0;
            param_2 = (undefined1 *)((ulong)&pplStack_3b0 | 8);
            FUN_10a69bf24(puVar14 + 1);
            lVar12 = puVar14[0x37];
            ppuVar15 = (undefined **)puVar14[0x36];
            puVar14[0x37] = lStack_1f8;
            puVar14[0x36] = ppuStack_200;
            lVar21 = puVar14[0x39];
            ppuVar16 = (undefined **)puVar14[0x38];
            puVar14[0x39] = lStack_1e8;
            puVar14[0x38] = ppuStack_1f0;
            lVar22 = puVar14[0x3b];
            ppuVar17 = (undefined **)puVar14[0x3a];
            puVar14[0x3b] = lStack_1d8;
            puVar14[0x3a] = ppuStack_1e0;
            lVar23 = puVar14[0x3d];
            ppuVar18 = (undefined **)puVar14[0x3c];
            puVar14[0x3d] = lStack_1c8;
            puVar14[0x3c] = ppuStack_1d0;
            lVar24 = puVar14[0x3f];
            ppuVar19 = (undefined **)puVar14[0x3e];
            puVar14[0x3f] = lStack_1b8;
            puVar14[0x3e] = ppuStack_1c0;
            lVar25 = puVar14[0x41];
            ppuVar20 = (undefined **)puVar14[0x40];
            puVar14[0x41] = lStack_1a8;
            puVar14[0x40] = ppuStack_1b0;
            lVar26 = puVar14[0x43];
            puVar14[0x43] = lStack_198;
            puVar14[0x42] = ppuStack_1a0;
            ppuStack_200 = ppuVar15;
            lStack_1f8 = lVar12;
            ppuStack_1f0 = ppuVar16;
            lStack_1e8 = lVar21;
            ppuStack_1e0 = ppuVar17;
            lStack_1d8 = lVar22;
            ppuStack_1d0 = ppuVar18;
            lStack_1c8 = lVar23;
            ppuStack_1c0 = ppuVar19;
            lStack_1b8 = lVar24;
            ppuStack_1b0 = ppuVar20;
            lStack_1a8 = lVar25;
            lStack_198 = lVar26;
          }
          else {
            func_0x00010a69c0d4(puVar14);
            *(undefined1 *)(puVar14 + 0x44) = 1;
            param_2 = (undefined1 *)ppplVar10;
          }
          if ((param_1[200] & 1) == 0) {
            *(long **)(param_1 + 0xc0) = plStack_168;
            *(undefined8 *)(param_1 + 0xb8) = uStack_170;
            plStack_168 = (long *)0x0;
            uStack_170 = 0;
            param_1[200] = 1;
          }
          ppuStack_1a0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1a0);
          ppuStack_1b0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1b0);
          ppuStack_1c0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1c0);
          ppuStack_1d0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1d0);
          ppuStack_1e0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1e0);
          ppuStack_1f0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_1f0);
          ppuStack_200 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&ppuStack_200);
          FUN_10a14e140((ulong)&pplStack_3b0 | 8);
          plVar4 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar1 = plStack_168 + 1;
            do {
              lVar12 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_168 + 0x10))(plStack_168);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
          pplStack_3b0 = &plStack_188;
          FUN_10a4fff4c();
          param_1 = (undefined1 *)ppplVar7;
          unaff_x21 = &pplStack_3b0;
          goto LAB_10a79d444;
        }
      }
      goto LAB_10a79d48c;
    }
  }
  uStack_3a8 = 0x46;
  pplStack_3b0 = (long **)&UNK_10f6767ae;
  FUN_10a0edfc4(&pplStack_3b0);
LAB_10a79d48c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79d490);
  (*pcVar5)();
}



/* Entry: 10a79d4d8; end: 10a79d64b;  */

undefined1 * FUN_10a79d4d8(undefined1 *param_1,uint param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_40;
  if (-1 < (int)param_2) {
    unaff_x20 = 0xf128cfc4a33f128d;
    uVar5 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
    puStack_40 = &UNK_10f676683;
    uStack_38 = 0x4d;
    unaff_x19 = param_1;
    if (param_2 <= uVar5 && uVar5 - param_2 != 0) {
      uVar7 = (ulong)param_2;
      FUN_10a79cfbc(param_1);
      uVar5 = (*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) * -0xed7303b5cc0ed73;
      if ((uVar7 <= uVar5 && uVar5 - uVar7 != 0) &&
         (lVar6 = *(long *)(param_1 + 0xa0) + uVar7 * 0x228, (*(byte *)(lVar6 + 0x220) & 1) != 0)) {
        return (undefined1 *)(lVar6 + 8);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a79d57c);
      (*pcVar1)();
    }
  }
  uStack_38 = 0x4d;
  puStack_40 = &UNK_10f676683;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_48 = 0x10a79d594;
  puStack_50 = &stack0xfffffffffffffff0;
  if (-1 < (int)param_2) {
    unaff_x20 = 0xf128cfc4a33f128d;
    uVar5 = (*(long *)((long)ppuVar2 + 0xa8) - *(long *)((long)ppuVar2 + 0xa0) >> 3) *
            -0xed7303b5cc0ed73;
    puStack_80 = &UNK_10f6766d1;
    uStack_78 = 0x4c;
    unaff_x19 = (undefined1 *)ppuVar2;
    if (param_2 <= uVar5 && uVar5 - param_2 != 0) {
      uVar7 = (ulong)param_2;
      FUN_10a79cfbc(ppuVar2);
      uVar5 = (*(long *)((long)ppuVar2 + 0xa8) - *(long *)((long)ppuVar2 + 0xa0) >> 3) *
              -0xed7303b5cc0ed73;
      if ((uVar7 <= uVar5 && uVar5 - uVar7 != 0) &&
         (puVar3 = (undefined1 *)(*(long *)((long)ppuVar2 + 0xa0) + uVar7 * 0x228),
         (puVar3[0x220] & 1) != 0)) {
        return puVar3;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a79d634);
      (*pcVar1)();
    }
  }
  uStack_78 = 0x4c;
  puStack_80 = &UNK_10f6766d1;
  FUN_10a0edfc4();
  pcStack_88 = FUN_10a79d64c;
  uStack_a0 = unaff_x20;
  puStack_98 = unaff_x19;
  ppuStack_90 = &puStack_50;
  FUN_10a500034((undefined1 *)((long)ppuVar4 + 0x18));
  puStack_a8 = (undefined1 *)ppuVar4;
  FUN_10a4fff4c(&puStack_a8);
  return (undefined1 *)ppuVar4;
}



/* Entry: 10a79d64c; end: 10a79d687;  */

long FUN_10a79d64c(long param_1)

{
  long lStack_28;
  
  FUN_10a500034(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_10a4fff4c(&lStack_28);
  return param_1;
}



/* Entry: 10a79d688; end: 10a79d73b;  */

float FUN_10a79d688(float param_1,undefined8 param_2,float param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a79b2c8(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    param_3 = 1.0;
  }
  else {
    (**(code **)(*plStack_40 + 0x20))(plStack_40,param_5);
    param_3 = param_3 - param_1;
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_3;
}



/* Entry: 10a79d73c; end: 10a79d84b;  */

undefined8 * FUN_10a79d73c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a79d84c; end: 10a79d863;  */

undefined8 FUN_10a79d84c(void)

{
  return 1;
}



/* Entry: 10a79d864; end: 10a79d8e3;  */

undefined8 * FUN_10a79d864(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17a78;
  FUN_10a7c5490(param_1 + 7);
  FUN_10a7c53f8(param_1 + 2);
  return param_1;
}



/* Entry: 10a79d8e4; end: 10a79d953;  */

void FUN_10a79d8e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x50;
        FUN_10a79d954(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a79d954; end: 10a79dabf;  */

void FUN_10a79d954(long param_1)

{
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a79dac0; end: 10a79dbcb;  */

void FUN_10a79dac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar4;
    if ((undefined8 *)puVar3[1] != puVar4) {
      puVar1 = (undefined8 *)puVar3[1] + -7;
      do {
        (**(code **)*puVar1)(puVar1);
        (**(code **)puVar1[-8])(puVar1 + -8);
        puVar2 = puVar1 + -9;
        puVar1 = puVar1 + -0x10;
      } while (puVar2 != puVar4);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a79dbcc; end: 10a79dc7f;  */

long FUN_10a79dbcc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a79dc80(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0x48;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    FUN_10a79dd04(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 10a79dc80; end: 10a79dd03;  */

long * FUN_10a79dc80(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a79dcec;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a79dcec:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a79dd04; end: 10a79dddb;  */

void FUN_10a79dd04(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a79dddc; end: 10a79de4b;  */

void FUN_10a79dddc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c14a28;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a79de4c; end: 10a79deef;  */

undefined8 FUN_10a79de4c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a79def0; end: 10a79e013;  */

void FUN_10a79def0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a70a5c8(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a79e014; end: 10a79e03b;  */

void FUN_10a79e014(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a79e03c; end: 10a79e107;  */

void FUN_10a79e03c(undefined8 param_1,long param_2)

{
  undefined8 auStack_2a0 [2];
  char cStack_289;
  undefined **appuStack_288 [2];
  undefined1 auStack_278 [272];
  undefined1 auStack_168 [8];
  undefined **appuStack_160 [2];
  undefined1 auStack_150 [272];
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_2a0,&UNK_10f676b75,param_1);
  FUN_10a002a94(appuStack_288,auStack_2a0);
  appuStack_288[0] = &PTR_FUN_110b99e70;
  __ZNSt13runtime_errorC2ERKS_(appuStack_160,appuStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  appuStack_160[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,appuStack_160);
  __ZNSt13runtime_errorD2Ev(appuStack_160);
  func_0x000109d1b350(*(undefined8 *)(param_2 + 0x10),auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(appuStack_288);
  if (cStack_289 < '\0') {
    __ZdlPv(auStack_2a0[0]);
  }
  return;
}



/* Entry: 10a79e108; end: 10a79e12f;  */

void FUN_10a79e108(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a79e130; end: 10a79e1b3;  */

long FUN_10a79e130(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a79e1b4; end: 10a79e1c7;  */

void FUN_10a79e1b4(undefined8 param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *****pppppcVar5;
  code *pcVar6;
  long *plVar7;
  code *******pppppppcVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  int *******pppppppiVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  long lVar14;
  code *******pppppppcVar15;
  undefined **ppuVar16;
  code *******unaff_x22;
  undefined8 *puVar17;
  code *******pppppppcVar18;
  code *******pppppppcVar19;
  code ******ppppppcStack_488;
  undefined1 uStack_480;
  char cStack_471;
  undefined8 ******ppppppuStack_470;
  code *****pppppcStack_468;
  code *****pppppcStack_460;
  int ******ppppppiStack_458;
  long lStack_450;
  char cStack_441;
  code ******ppppppcStack_440;
  code ******ppppppcStack_438;
  code ******ppppppcStack_428;
  code ******ppppppcStack_420;
  code ******ppppppcStack_418;
  code *****pppppcStack_410;
  code ******ppppppcStack_408;
  undefined8 ******ppppppuStack_400;
  code *****pppppcStack_3f8;
  code *****pppppcStack_3f0;
  code ******ppppppcStack_3e8;
  code ******ppppppcStack_3e0;
  code *****pppppcStack_3d8;
  code ******ppppppcStack_3d0;
  code ******ppppppcStack_3c8;
  code ******ppppppcStack_3c0;
  code *****pppppcStack_3b8;
  code ******ppppppcStack_3b0;
  undefined8 ******ppppppuStack_3a8;
  code *****pppppcStack_3a0;
  code *****pppppcStack_398;
  code ******ppppppcStack_390;
  code ******ppppppcStack_388;
  code *****pppppcStack_380;
  code ******ppppppcStack_378;
  undefined8 ******ppppppuStack_370;
  code *****pppppcStack_368;
  code *****pppppcStack_360;
  code ******ppppppcStack_358;
  code ******ppppppcStack_350;
  code *****pppppcStack_348;
  code ******ppppppcStack_340;
  code ******ppppppcStack_338;
  code *****pppppcStack_330;
  code ******ppppppcStack_320;
  code ******ppppppcStack_318;
  undefined1 auStack_310 [8];
  undefined8 *apuStack_308 [7];
  code ******ppppppcStack_2d0;
  undefined **ppuStack_2c8;
  code ******ppppppcStack_2c0;
  code ******ppppppcStack_290;
  code ******ppppppcStack_288;
  long *plStack_280;
  code ******ppppppcStack_250;
  code ******ppppppcStack_248;
  code *****pppppcStack_240;
  code *****pppppcStack_188;
  code ******ppppppcStack_180;
  code ******ppppppcStack_178;
  code *****pppppcStack_148;
  code ******ppppppcStack_140;
  undefined8 *puStack_138;
  code *****pppppcStack_108;
  code ******appppppcStack_100 [7];
  code ******ppppppcStack_c8;
  code ******appppppcStack_c0 [7];
  long lStack_88;
  
  ppuVar16 = (undefined **)&UNK_10f676ba7;
  FUN_109ffde64();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = *(undefined8 **)(param_2 + 0x10);
  plVar7 = (long *)puVar17[2];
  if (plVar7 == (long *)0x0) {
LAB_10a79f0f8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppppppcVar15 = (code *******)*puVar17;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) goto LAB_10a79f0f8;
    if ((puVar17[1] == 0) || (((uint)pppppppcVar15[6][0x20][0x35][2] >> 1 & 1) != 0)) {
LAB_10a79f0c8:
      plVar10 = plVar7 + 1;
      do {
        lVar14 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      goto LAB_10a79f0f8;
    }
    FUN_10a296138(auStack_310,pppppppcVar15[6][0x20],&UNK_10f676bae,0x19);
    unaff_x22 = (code *******)(puVar17 + 3);
    if (((ulong)ppuVar16[3] & 1) == 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppppppcVar8 = (code *******)puVar17[3];
        if (-1 < *(char *)((long)puVar17 + 0x2f)) {
          pppppppcVar8 = unaff_x22;
        }
        func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676c03,0x141,&UNK_10f676c60,in_x6,in_x7,
                            pppppppcVar8);
      }
      __ZNSt3__115recursive_mutex4lockEv(pppppppcVar15 + 0x10);
      pppppppcVar8 = pppppppcVar15 + 10;
      FUN_10a79f538(pppppppcVar8,unaff_x22);
      if (pppppppcVar15 + 0xb != pppppppcVar8) {
        pppppppcVar18 = (code *******)pppppppcVar8[7];
        pppppcStack_240 = (code *****)pppppppcVar8[9];
        pppppppcVar19 = (code *******)pppppppcVar8[8];
        pppppppcVar8[8] = (code ******)0x0;
        pppppppcVar8[9] = (code ******)0x0;
        pppppppcVar8[7] = (code ******)0x0;
        ppppppcStack_250 = (code ******)pppppppcVar18;
        ppppppcStack_248 = (code ******)pppppppcVar19;
        FUN_10a79f5b4(pppppppcVar15 + 10,pppppppcVar8);
        func_0x00010a79da7c(pppppppcVar8 + 4);
        __ZdlPv(pppppppcVar8);
        if (pppppppcVar18 != pppppppcVar19) {
          pppppppcVar8 = pppppppcVar18 + 8;
          do {
            if (*(char *)(pppppppcVar8[1] + 1) == '\x01') {
              (*(code *)*pppppppcVar8)(unaff_x22,pppppppcVar8);
            }
            pppppppcVar18 = pppppppcVar8 + 8;
            pppppppcVar8 = pppppppcVar8 + 0x10;
          } while (pppppppcVar18 != pppppppcVar19);
        }
        ppppppcStack_3d0 = (code ******)&ppppppcStack_250;
        func_0x00010a79dac0(&ppppppcStack_3d0);
        ppuVar16 = (undefined **)pppppppcVar8;
      }
      __ZNSt3__115recursive_mutex6unlockEv(pppppppcVar15 + 0x10);
LAB_10a79f0ac:
      FUN_10a044790(auStack_310);
      (*(code *)*apuStack_308[0])(apuStack_308);
      goto LAB_10a79f0c8;
    }
    if (*(char *)((long)ppuVar16 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppppcStack_340,*ppuVar16,ppuVar16[1]);
    }
    else {
      ppppppcStack_338 = (code ******)ppuVar16[1];
      ppppppcStack_340 = (code ******)*ppuVar16;
      pppppcStack_330 = (code *****)ppuVar16[2];
    }
    pppppppcVar8 = (code *******)ppuVar16;
    FUN_10ad015f0(ppuVar16,0x8000);
    if ((int)pppppppcVar8 != 0) {
      ppppppcVar12 = (code ******)ppuVar16[1];
      pppppppcVar8 = (code *******)*ppuVar16;
      if (-1 < (char)*(byte *)((long)ppuVar16 + 0x17)) {
        ppppppcVar12 = (code ******)(ulong)*(byte *)((long)ppuVar16 + 0x17);
        pppppppcVar8 = (code *******)ppuVar16;
      }
      FUN_10a151324(&ppppppcStack_250,pppppppcVar8,ppppppcVar12);
      if ((long)pppppcStack_330 < 0) {
        __ZdlPv(ppppppcStack_340);
      }
      ppppppcStack_338 = ppppppcStack_248;
      ppppppcStack_340 = ppppppcStack_250;
      pppppcStack_330 = pppppcStack_240;
LAB_10a79e3f8:
      ppppppcStack_378 = (code ******)pppppppcVar15;
      if (*(char *)((long)puVar17 + 0x2f) < '\0') {
        func_0x000107c3192c(&ppppppuStack_370,puVar17[3],puVar17[4]);
      }
      else {
        pppppcStack_368 = (code *****)puVar17[4];
        ppppppuStack_370 = (undefined8 ******)*unaff_x22;
        pppppcStack_360 = (code *****)puVar17[5];
      }
      ppppppcStack_3d0 = (code ******)pppppppcVar15;
      if ((long)pppppcStack_330 < 0) {
        func_0x000107c3192c(&ppppppcStack_358,ppppppcStack_340,ppppppcStack_338);
        if (-1 < (long)pppppcStack_330) goto LAB_10a79e478;
        func_0x000107c3192c(&ppppppcStack_3c8,ppppppcStack_340,ppppppcStack_338);
      }
      else {
        ppppppcStack_350 = ppppppcStack_338;
        ppppppcStack_358 = ppppppcStack_340;
        pppppcStack_348 = pppppcStack_330;
LAB_10a79e478:
        ppppppcStack_3c0 = ppppppcStack_338;
        ppppppcStack_3c8 = ppppppcStack_340;
        pppppcStack_3b8 = pppppcStack_330;
      }
      ppppppcStack_3b0 = ppppppcStack_378;
      if ((long)pppppcStack_360 < 0) {
        func_0x000107c3192c(&ppppppuStack_3a8,ppppppuStack_370,pppppcStack_368);
      }
      else {
        pppppcStack_3a0 = pppppcStack_368;
        ppppppuStack_3a8 = ppppppuStack_370;
        pppppcStack_398 = pppppcStack_360;
      }
      if ((long)pppppcStack_348 < 0) {
        func_0x000107c3192c(&ppppppcStack_390,ppppppcStack_358,ppppppcStack_350);
      }
      else {
        ppppppcStack_388 = ppppppcStack_350;
        ppppppcStack_390 = ppppppcStack_358;
        pppppcStack_380 = pppppcStack_348;
      }
      ppppppcStack_428 = (code ******)pppppppcVar15;
      if ((long)pppppcStack_330 < 0) {
        func_0x000107c3192c(&ppppppcStack_420,ppppppcStack_340,ppppppcStack_338);
      }
      else {
        ppppppcStack_418 = ppppppcStack_338;
        ppppppcStack_420 = ppppppcStack_340;
        pppppcStack_410 = pppppcStack_330;
      }
      ppppppcStack_408 = ppppppcStack_378;
      if ((long)pppppcStack_360 < 0) {
        func_0x000107c3192c(&ppppppuStack_400,ppppppuStack_370,pppppcStack_368);
      }
      else {
        pppppcStack_3f8 = pppppcStack_368;
        ppppppuStack_400 = ppppppuStack_370;
        pppppcStack_3f0 = pppppcStack_360;
      }
      if ((long)pppppcStack_348 < 0) {
        func_0x000107c3192c(&ppppppcStack_3e8,ppppppcStack_358,ppppppcStack_350);
      }
      else {
        ppppppcStack_3e0 = ppppppcStack_350;
        ppppppcStack_3e8 = ppppppcStack_358;
        pppppcStack_3d8 = pppppcStack_348;
      }
      ppppppcStack_440 = (code ******)0x0;
      ppppppcStack_438 = (code ******)0x0;
      pppppppcVar8 = pppppppcVar15;
      func_0x00010a79db50(pppppppcVar15,unaff_x22);
      if (pppppppcVar15 + 1 == pppppppcVar8) {
        FUN_10a0f2388(&ppppppiStack_458,ppuVar16);
        if (cStack_441 < '\0') {
          pppppppiVar11 = (int *******)ppppppiStack_458;
          if (lStack_450 == 4) goto LAB_10a79e668;
LAB_10a79e67c:
          pppppppcVar8 = (code *******)ppuVar16;
          FUN_10ab275d8();
          if ((int)pppppppcVar8 != 0) goto LAB_10a79e688;
          pppppppcVar8 = &ppppppcStack_340;
          FUN_10ad76578();
          if ((int)pppppppcVar8 != 0) {
            FUN_10a8bb1fc();
            ppppppcVar12 = *pppppppcVar8 + 0xdd;
            FUN_10a08f69c();
            uVar2 = *(undefined1 *)ppppppcVar12;
            pppppppcVar8 = (code *******)0x60;
            __Znwm();
            pppppppcVar19 = pppppppcVar8 + 1;
            *pppppppcVar19 = (code ******)0x0;
            pppppppcVar8[2] = (code ******)0x0;
            pppppppcVar18 = pppppppcVar8 + 3;
            *pppppppcVar8 = (code ******)&PTR_FUN_110b9f108;
            FUN_10ad76790(pppppppcVar18,&ppppppcStack_340,uVar2);
            pppppcStack_108 = (code *****)0x0;
            appppppcStack_100[0] = (code ******)0x0;
            ppppppcStack_c8 = (code ******)pppppppcVar18;
            appppppcStack_c0[0] = (code ******)pppppppcVar8;
            FUN_109d2e134(&ppppppcStack_250,&ppppppcStack_c8);
            do {
              ppppppcVar12 = *pppppppcVar19;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar19,0x10);
              if (bVar4) {
                *pppppppcVar19 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*pppppppcVar8)[2])(pppppppcVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar8);
            }
            ppppppcVar12 = appppppcStack_100[0];
            if ((code *******)appppppcStack_100[0] != (code *******)0x0) {
              pppppppcVar8 = (code *******)(appppppcStack_100[0] + 1);
              do {
                ppppppcVar13 = *pppppppcVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                if (bVar4) {
                  *pppppppcVar8 = (code ******)((long)ppppppcVar13 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppcVar13 == (code ******)0x0) {
                (*(code *)(*appppppcStack_100[0])[2])(appppppcStack_100[0]);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
              }
            }
            ppuVar16 = (undefined **)pppppppcVar15[6];
            if ((code *******)ppuVar16 == (code *******)0x0) {
              pppppppcVar15 = (code *******)0x1d0;
              __Znwm();
              pppppppcVar15[1] = (code ******)0x0;
              pppppppcVar15[2] = (code ******)0x0;
              *pppppppcVar15 = (code ******)&PTR_DAT_110bc7fe0;
              ppuVar16 = (undefined **)(pppppppcVar15 + 3);
              FUN_10a8c0e38(ppuVar16,0,&ppppppcStack_250);
              ppppppcStack_c8 = (code ******)ppuVar16;
              appppppcStack_c0[0] = (code ******)pppppppcVar15;
              FUN_10a37d52c(&ppppppcStack_c8,pppppppcVar15 + 8,ppuVar16);
              FUN_10a37d328(&ppppppcStack_290,&ppppppcStack_c8);
              if ((code *******)appppppcStack_c0[0] != (code *******)0x0) {
                pppppppcVar15 = (code *******)(appppppcStack_c0[0] + 1);
                do {
                  ppppppcVar12 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar8 = (code *******)appppppcStack_c0[0];
                } while (cVar3 != '\0');
                goto LAB_10a79ed58;
              }
            }
            else {
              ppppppcVar12 = (code ******)ppuVar16[0x10b];
              pppppppcVar15 = (code *******)ppuVar16[0x10c];
              if (pppppppcVar15 != (code *******)0x0) {
                pppppppcVar8 = pppppppcVar15 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uVar9 = 0x1b8;
              pppppcStack_188 = (code *****)ppppppcVar12;
              ppppppcStack_180 = (code ******)pppppppcVar15;
              __Znwm(0x1b8);
              FUN_10a8c0e38();
              pppppcStack_148 = (code *****)ppppppcVar12;
              ppppppcStack_140 = (code ******)pppppppcVar15;
              if (pppppppcVar15 != (code *******)0x0) {
                pppppppcVar8 = pppppppcVar15 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                pppppppcVar8 = pppppppcVar15 + 2;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
              }
              pppppcStack_108 = (code *****)ppppppcVar12;
              appppppcStack_100[0] = (code ******)pppppppcVar15;
              FUN_10a37d48c(&ppppppcStack_c8,uVar9,&pppppcStack_108);
              FUN_10a37d328(&ppppppcStack_290);
              ppppppcVar12 = appppppcStack_c0[0];
              if ((code *******)appppppcStack_c0[0] != (code *******)0x0) {
                pppppppcVar15 = (code *******)(appppppcStack_c0[0] + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*appppppcStack_c0[0])[2])(appppppcStack_c0[0]);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
              if ((code *******)appppppcStack_100[0] != (code *******)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              ppppppcVar12 = ppppppcStack_140;
              if ((code *******)ppppppcStack_140 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_140 + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*ppppppcStack_140)[2])(ppppppcStack_140);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
              if (((code ******)pppppcStack_188 != (code ******)0x0) &&
                 ((code *******)ppppppcStack_290 != (code *******)0x0)) {
                ppppppcStack_c8 = ppppppcStack_290;
                appppppcStack_c0[0] = ppppppcStack_288;
                if ((code *******)ppppppcStack_288 != (code *******)0x0) {
                  pppppppcVar15 = (code *******)(ppppppcStack_288 + 1);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                    if (bVar4) {
                      *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                FUN_10aa88c30(pppppcStack_188,&ppppppcStack_c8);
                ppppppcVar12 = appppppcStack_c0[0];
                if ((code *******)appppppcStack_c0[0] != (code *******)0x0) {
                  pppppppcVar15 = (code *******)(appppppcStack_c0[0] + 1);
                  do {
                    ppppppcVar13 = *pppppppcVar15;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                    if (bVar4) {
                      *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppppppcVar13 == (code ******)0x0) {
                    (*(code *)(*appppppcStack_c0[0])[2])(appppppcStack_c0[0]);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                  }
                }
              }
              if ((code *******)ppppppcStack_180 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_180 + 1);
                do {
                  ppppppcVar12 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar8 = (code *******)ppppppcStack_180;
                } while (cVar3 != '\0');
LAB_10a79ed58:
                if (ppppppcVar12 == (code ******)0x0) {
                  (*(code *)(*pppppppcVar8)[2])(pppppppcVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar8);
                }
              }
            }
            ppppppcVar13 = ppppppcStack_288;
            ppppppcVar12 = ppppppcStack_290;
            func_0x000109a1ab0c(&ppppppcStack_250);
            pppppppcVar15 = (code *******)ppppppcStack_438;
            ppppppcStack_438 = ppppppcVar13;
            ppppppcStack_440 = ppppppcVar12;
            if (pppppppcVar15 != (code *******)0x0) {
              pppppppcVar8 = pppppppcVar15 + 1;
              do {
                ppppppcVar12 = *pppppppcVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                if (bVar4) {
                  *pppppppcVar8 = (code ******)((long)ppppppcVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_10a79eda8;
            }
            goto LAB_10a79edc8;
          }
          cStack_471 = '\b';
          ppppppcStack_488 = (code ******)0x746e65746e6f432f;
          uStack_480 = 0;
          pppppppcVar8 = (code *******)ppppppcStack_338;
          pppppppcVar18 = (code *******)ppppppcStack_340;
          if (-1 < (long)pppppcStack_330) {
            pppppppcVar8 = (code *******)((ulong)pppppcStack_330 >> 0x38);
            pppppppcVar18 = &ppppppcStack_340;
          }
          pppppppcVar19 = &ppppppcStack_488;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppcVar19,0,pppppppcVar18,pppppppcVar8);
          pppppcStack_468 = (code *****)pppppppcVar19[1];
          ppppppuStack_470 = (undefined8 ******)*pppppppcVar19;
          pppppcStack_460 = (code *****)pppppppcVar19[2];
          pppppppcVar19[1] = (code ******)0x0;
          pppppppcVar19[2] = (code ******)0x0;
          *pppppppcVar19 = (code ******)0x0;
          ppppppcStack_290 = (code ******)FUN_10a79f9e0;
          ppppppcStack_288 = (code ******)&PTR_FUN_110c180b0;
          plVar10 = (long *)0x58;
          __Znwm();
          pppppcVar5 = pppppcStack_3b8;
          *plVar10 = (long)ppppppcStack_3d0;
          plVar10[2] = (long)ppppppcStack_3c0;
          plVar10[1] = (long)ppppppcStack_3c8;
          ppppppcStack_3c8 = (code ******)0x0;
          ppppppcStack_3c0 = (code ******)0x0;
          pppppcStack_3b8 = (code *****)0x0;
          plVar10[3] = (long)pppppcVar5;
          plVar10[4] = (long)ppppppcStack_3b0;
          if ((long)pppppcStack_398 < 0) {
            func_0x000107c3192c(plVar10 + 5,ppppppuStack_3a8,pppppcStack_3a0);
          }
          else {
            plVar10[6] = (long)pppppcStack_3a0;
            plVar10[5] = (long)ppppppuStack_3a8;
            plVar10[7] = (long)pppppcStack_398;
          }
          plVar10[9] = (long)ppppppcStack_388;
          plVar10[8] = (long)ppppppcStack_390;
          plVar10[10] = (long)pppppcStack_380;
          ppppppcStack_388 = (code ******)0x0;
          pppppcStack_380 = (code *****)0x0;
          ppppppcStack_390 = (code ******)0x0;
          ppppppcStack_2d0 = (code ******)FUN_10a7a0470;
          ppuStack_2c8 = &PTR_FUN_110c180c8;
          unaff_x22 = (code *******)0x58;
          plStack_280 = plVar10;
          __Znwm();
          pppppcVar5 = pppppcStack_410;
          *unaff_x22 = ppppppcStack_428;
          unaff_x22[2] = ppppppcStack_418;
          unaff_x22[1] = ppppppcStack_420;
          ppppppcStack_420 = (code ******)0x0;
          ppppppcStack_418 = (code ******)0x0;
          pppppcStack_410 = (code *****)0x0;
          unaff_x22[3] = (code ******)pppppcVar5;
          unaff_x22[4] = ppppppcStack_408;
          if ((long)pppppcStack_3f0 < 0) {
            func_0x000107c3192c(unaff_x22 + 5,ppppppuStack_400,pppppcStack_3f8);
          }
          else {
            unaff_x22[6] = (code ******)pppppcStack_3f8;
            unaff_x22[5] = (code ******)ppppppuStack_400;
            unaff_x22[7] = (code ******)pppppcStack_3f0;
          }
          unaff_x22[9] = ppppppcStack_3e0;
          unaff_x22[8] = ppppppcStack_3e8;
          unaff_x22[10] = (code ******)pppppcStack_3d8;
          ppppppcStack_3e0 = (code ******)0x0;
          pppppcStack_3d8 = (code *****)0x0;
          ppppppcStack_3e8 = (code ******)0x0;
          ppuVar16 = &PTR_PTR_11330a000;
          ppppppcStack_2c0 = (code ******)unaff_x22;
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            pppppppuVar1 = (undefined8 *******)ppppppuStack_470;
            if (-1 < (long)pppppcStack_460) {
              pppppppuVar1 = &ppppppuStack_470;
            }
            func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f67709c,0xb2,&UNK_10f67714c,in_x6,in_x7,
                                pppppppuVar1);
          }
          FUN_10a34bba8(&ppppppcStack_320,pppppppcVar15[6],&ppppppuStack_470);
          ppppppcVar12 = ppppppcStack_2d0;
          if ((code *******)ppppppcStack_320 == (code *******)0x0) {
            func_0x000107c2b054(&ppppppcStack_250,&UNK_10f677168);
            (*(code *)ppppppcVar12)(&ppppppcStack_250,&ppppppcStack_2d0);
            if ((long)pppppcStack_240 < 0) {
              __ZdlPv(ppppppcStack_250);
            }
          }
          else {
            FUN_10a771364(pppppppcVar15 + 3,ppppppcStack_320 + 0x23);
            if (*(int *)(ppppppcStack_320 + 0x22) == 2) {
              ppppppcStack_250 = ppppppcStack_320;
              ppppppcStack_248 = ppppppcStack_318;
              if ((code *******)ppppppcStack_318 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_318 + 1);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              (*(code *)ppppppcStack_290)(&ppppppcStack_250,&ppppppcStack_290);
              ppppppcVar12 = ppppppcStack_248;
              if ((code *******)ppppppcStack_248 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_248 + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*ppppppcStack_248)[2])(ppppppcStack_248);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
            }
            else {
              if (*(int *)(ppppppcStack_320 + 0x22) != 1) {
                FUN_10a00946c(&UNK_10f6771e0);
                goto LAB_10a79f150;
              }
              ppppppcStack_250 = ppppppcStack_290;
              unaff_x22 = &ppppppcStack_250;
              (*(code *)ppppppcStack_288[2])(&ppppppcStack_248,&ppppppcStack_288);
              ppppppcStack_c8 = ppppppcStack_2d0;
              (*(code *)ppuStack_2c8[2])(appppppcStack_c0,&ppuStack_2c8);
              pppppcStack_108 = (code *****)FUN_10a7a2734;
              appppppcStack_100[0] = (code ******)&PTR_DAT_110c18170;
              if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                pppppppuVar1 = (undefined8 *******)ppppppuStack_470;
                if (-1 < (long)pppppcStack_460) {
                  pppppppuVar1 = &ppppppuStack_470;
                }
                func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f67709c,0xca,&UNK_10f6771b5,in_x6,
                                    in_x7,pppppppuVar1);
              }
              pppppcStack_148 = (code *****)FUN_10a7a274c;
              ppppppcStack_140 = (code ******)&PTR_FUN_110c18188;
              puVar17 = (undefined8 *)0x40;
              __Znwm();
              *puVar17 = ppppppcStack_250;
              (*(code *)ppppppcStack_248[2])(puVar17 + 1,&ppppppcStack_248);
              pppppcStack_188 = (code *****)FUN_10a7a282c;
              ppppppcStack_180 = (code ******)&PTR_FUN_110c181a0;
              ppuVar16 = (undefined **)0x40;
              puStack_138 = puVar17;
              __Znwm();
              *ppuVar16 = (undefined *)ppppppcStack_c8;
              (*(code *)appppppcStack_c0[0][2])(ppuVar16 + 1,appppppcStack_c0);
              ppppppcStack_178 = (code ******)ppuVar16;
              FUN_10a349c18(ppppppcStack_320,&pppppcStack_148,&pppppcStack_188,&pppppcStack_108);
              (*(code *)*ppppppcStack_180)(&ppppppcStack_180);
              (*(code *)*ppppppcStack_140)(&ppppppcStack_140);
              (*(code *)*appppppcStack_100[0])(appppppcStack_100);
              (*(code *)*appppppcStack_c0[0])(appppppcStack_c0);
              (*(code *)*ppppppcStack_248)(&ppppppcStack_248);
            }
          }
          if ((code *******)ppppppcStack_318 != (code *******)0x0) {
            pppppppcVar15 = (code *******)(ppppppcStack_318 + 1);
            do {
              ppppppcVar12 = *pppppppcVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
              if (bVar4) {
                *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*ppppppcStack_318)[2])(ppppppcStack_318);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcStack_318);
            }
          }
          (*(code *)*ppuStack_2c8)(&ppuStack_2c8);
          (*(code *)*ppppppcStack_288)(&ppppppcStack_288);
          if ((long)pppppcStack_460 < 0) {
            __ZdlPv(ppppppuStack_470);
          }
          pppppppcVar15 = (code *******)ppppppcStack_488;
          if (cStack_471 < '\0') goto LAB_10a79efd0;
        }
        else {
          if (cStack_441 != '\x04') goto LAB_10a79e67c;
          pppppppiVar11 = &ppppppiStack_458;
LAB_10a79e668:
          if (*(int *)pppppppiVar11 != 0x66746c67) goto LAB_10a79e67c;
LAB_10a79e688:
          FUN_10ab273c0(&ppppppcStack_250,pppppppcVar15[6],ppuVar16);
          pppppppcVar15 = (code *******)ppppppcStack_438;
          ppppppcStack_438 = ppppppcStack_248;
          ppppppcStack_440 = ppppppcStack_250;
          if (pppppppcVar15 != (code *******)0x0) {
            pppppppcVar8 = pppppppcVar15 + 1;
            do {
              ppppppcVar12 = *pppppppcVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
              if (bVar4) {
                *pppppppcVar8 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10a79eda8:
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*pppppppcVar15)[2])(pppppppcVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
            }
          }
LAB_10a79edc8:
          unaff_x22 = &ppppppcStack_428;
          if ((code *******)ppppppcStack_440 == (code *******)0x0) {
            if ((long)pppppcStack_330 < 0) {
              func_0x000107c3192c(&ppppppcStack_250,ppppppcStack_340,ppppppcStack_338);
            }
            else {
              ppppppcStack_248 = ppppppcStack_338;
              ppppppcStack_250 = ppppppcStack_340;
              pppppcStack_240 = pppppcStack_330;
            }
            ppppppcVar12 = ppppppcStack_428;
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              pppppppcVar15 = (code *******)ppppppcStack_250;
              if (-1 < (long)pppppcStack_240) {
                pppppppcVar15 = &ppppppcStack_250;
              }
              func_0x00010ae06f08(1,8,&UNK_10f676bc8,&UNK_10f676da2,0x11e,&UNK_10f676e42,in_x6,in_x7
                                  ,pppppppcVar15);
            }
            FUN_10a79fbb4(&ppppppcStack_290,ppppppcVar12,&ppppppcStack_420);
            FUN_10a79f734(&ppppppcStack_408,&ppppppcStack_290);
            ppppppcVar12 = ppppppcStack_288;
            if ((code *******)ppppppcStack_288 != (code *******)0x0) {
              pppppppcVar15 = (code *******)(ppppppcStack_288 + 1);
              do {
                ppppppcVar13 = *pppppppcVar15;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                if (bVar4) {
                  *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppcVar13 == (code ******)0x0) {
                (*(code *)(*ppppppcStack_288)[2])(ppppppcStack_288);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
              }
            }
            pppppppcVar15 = (code *******)ppppppcStack_250;
            if ((long)pppppcStack_240 < 0) {
LAB_10a79efd0:
              __ZdlPv(pppppppcVar15);
            }
          }
          else {
            FUN_10a79f734(&ppppppcStack_378,&ppppppcStack_440);
          }
        }
        if (cStack_441 < '\0') {
          __ZdlPv(ppppppiStack_458);
        }
      }
      else {
        FUN_10a2e9dcc(&ppppppcStack_440,pppppppcVar8 + 7);
        ppppppcVar12 = ppppppcStack_378;
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          pppppppuVar1 = (undefined8 *******)ppppppuStack_370;
          if (-1 < (long)pppppcStack_360) {
            pppppppuVar1 = &ppppppuStack_370;
          }
          func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676cbe,0x10c,&UNK_10f676d7d,in_x6,in_x7,
                              pppppppuVar1);
        }
        __ZNSt3__115recursive_mutex4lockEv(ppppppcVar12 + 0x10);
        FUN_10a7a0604(ppppppcVar12 + 10,&ppppppuStack_370,&ppppppcStack_358,&ppppppcStack_440);
        __ZNSt3__115recursive_mutex6unlockEv(ppppppcVar12 + 0x10);
      }
      ppppppcVar12 = ppppppcStack_438;
      if ((code *******)ppppppcStack_438 != (code *******)0x0) {
        pppppppcVar15 = (code *******)(ppppppcStack_438 + 1);
        do {
          ppppppcVar13 = *pppppppcVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
          if (bVar4) {
            *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppcVar13 == (code ******)0x0) {
          (*(code *)(*ppppppcStack_438)[2])(ppppppcStack_438);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
        }
      }
      if ((long)pppppcStack_3d8 < 0) {
        __ZdlPv(ppppppcStack_3e8);
      }
      if ((long)pppppcStack_3f0 < 0) {
        __ZdlPv(ppppppuStack_400);
      }
      if ((long)pppppcStack_410 < 0) {
        __ZdlPv(ppppppcStack_420);
      }
      if ((long)pppppcStack_380 < 0) {
        __ZdlPv(ppppppcStack_390);
      }
      if ((long)pppppcStack_398 < 0) {
        __ZdlPv(ppppppuStack_3a8);
      }
      if ((long)pppppcStack_3b8 < 0) {
        __ZdlPv(ppppppcStack_3c8);
      }
      if ((long)pppppcStack_348 < 0) {
        __ZdlPv(ppppppcStack_358);
      }
      if ((long)pppppcStack_360 < 0) {
        __ZdlPv(ppppppuStack_370);
      }
      if ((long)pppppcStack_330 < 0) {
        __ZdlPv(ppppppcStack_340);
      }
      goto LAB_10a79f0ac;
    }
    pppppppcVar8 = (code *******)ppuVar16;
    FUN_10ad015f0(ppuVar16,0x4000);
    if (((ulong)pppppppcVar8 & 1) != 0) goto LAB_10a79e3f8;
  }
  FUN_10a79f608(unaff_x22,ppuVar16);
LAB_10a79f150:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a79f154);
  (*pcVar6)();
}



/* Entry: 10a79e1c8; end: 10a79f537;  */

void FUN_10a79e1c8(undefined **param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *****pppppcVar5;
  code *pcVar6;
  long *plVar7;
  code *******pppppppcVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  int *******pppppppiVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  long lVar14;
  code *******pppppppcVar15;
  code *******unaff_x22;
  undefined8 *puVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  code ******ppppppcStack_478;
  undefined1 uStack_470;
  char cStack_461;
  undefined8 ******ppppppuStack_460;
  code *****pppppcStack_458;
  code *****pppppcStack_450;
  int ******ppppppiStack_448;
  long lStack_440;
  char cStack_431;
  code ******ppppppcStack_430;
  code ******ppppppcStack_428;
  code ******ppppppcStack_418;
  code ******ppppppcStack_410;
  code ******ppppppcStack_408;
  code *****pppppcStack_400;
  code ******ppppppcStack_3f8;
  undefined8 ******ppppppuStack_3f0;
  code *****pppppcStack_3e8;
  code *****pppppcStack_3e0;
  code ******ppppppcStack_3d8;
  code ******ppppppcStack_3d0;
  code *****pppppcStack_3c8;
  code ******ppppppcStack_3c0;
  code ******ppppppcStack_3b8;
  code ******ppppppcStack_3b0;
  code *****pppppcStack_3a8;
  code ******ppppppcStack_3a0;
  undefined8 ******ppppppuStack_398;
  code *****pppppcStack_390;
  code *****pppppcStack_388;
  code ******ppppppcStack_380;
  code ******ppppppcStack_378;
  code *****pppppcStack_370;
  code ******ppppppcStack_368;
  undefined8 ******ppppppuStack_360;
  code *****pppppcStack_358;
  code *****pppppcStack_350;
  code ******ppppppcStack_348;
  code ******ppppppcStack_340;
  code *****pppppcStack_338;
  code ******ppppppcStack_330;
  code ******ppppppcStack_328;
  code *****pppppcStack_320;
  code ******ppppppcStack_310;
  code ******ppppppcStack_308;
  undefined1 auStack_300 [8];
  undefined8 *apuStack_2f8 [7];
  code ******ppppppcStack_2c0;
  undefined **ppuStack_2b8;
  code ******ppppppcStack_2b0;
  code ******ppppppcStack_280;
  code ******ppppppcStack_278;
  long *plStack_270;
  code ******ppppppcStack_240;
  code ******ppppppcStack_238;
  code *****pppppcStack_230;
  code *****pppppcStack_178;
  code ******ppppppcStack_170;
  code ******ppppppcStack_168;
  code *****pppppcStack_138;
  code ******ppppppcStack_130;
  long *plStack_128;
  code *****pppppcStack_f8;
  code ******appppppcStack_f0 [7];
  code ******ppppppcStack_b8;
  code ******appppppcStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(undefined8 **)(param_2 + 0x10);
  plVar7 = (long *)puVar16[2];
  if (plVar7 == (long *)0x0) {
LAB_10a79f0f8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pppppppcVar15 = (code *******)*puVar16;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) goto LAB_10a79f0f8;
    if ((puVar16[1] == 0) || (((uint)pppppppcVar15[6][0x20][0x35][2] >> 1 & 1) != 0)) {
LAB_10a79f0c8:
      plVar10 = plVar7 + 1;
      do {
        lVar14 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      goto LAB_10a79f0f8;
    }
    FUN_10a296138(auStack_300,pppppppcVar15[6][0x20],&UNK_10f676bae,0x19);
    unaff_x22 = (code *******)(puVar16 + 3);
    if (((ulong)param_1[3] & 1) == 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppppppcVar8 = (code *******)puVar16[3];
        if (-1 < *(char *)((long)puVar16 + 0x2f)) {
          pppppppcVar8 = unaff_x22;
        }
        func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676c03,0x141,&UNK_10f676c60,in_x6,in_x7,
                            pppppppcVar8);
      }
      __ZNSt3__115recursive_mutex4lockEv(pppppppcVar15 + 0x10);
      pppppppcVar8 = pppppppcVar15 + 10;
      FUN_10a79f538(pppppppcVar8,unaff_x22);
      if (pppppppcVar15 + 0xb != pppppppcVar8) {
        pppppppcVar17 = (code *******)pppppppcVar8[7];
        pppppcStack_230 = (code *****)pppppppcVar8[9];
        pppppppcVar18 = (code *******)pppppppcVar8[8];
        pppppppcVar8[8] = (code ******)0x0;
        pppppppcVar8[9] = (code ******)0x0;
        pppppppcVar8[7] = (code ******)0x0;
        ppppppcStack_240 = (code ******)pppppppcVar17;
        ppppppcStack_238 = (code ******)pppppppcVar18;
        FUN_10a79f5b4(pppppppcVar15 + 10,pppppppcVar8);
        func_0x00010a79da7c(pppppppcVar8 + 4);
        __ZdlPv(pppppppcVar8);
        if (pppppppcVar17 != pppppppcVar18) {
          pppppppcVar8 = pppppppcVar17 + 8;
          do {
            if (*(char *)(pppppppcVar8[1] + 1) == '\x01') {
              (*(code *)*pppppppcVar8)(unaff_x22,pppppppcVar8);
            }
            pppppppcVar17 = pppppppcVar8 + 8;
            pppppppcVar8 = pppppppcVar8 + 0x10;
          } while (pppppppcVar17 != pppppppcVar18);
        }
        ppppppcStack_3c0 = (code ******)&ppppppcStack_240;
        func_0x00010a79dac0(&ppppppcStack_3c0);
        param_1 = (undefined **)pppppppcVar8;
      }
      __ZNSt3__115recursive_mutex6unlockEv(pppppppcVar15 + 0x10);
LAB_10a79f0ac:
      FUN_10a044790(auStack_300);
      (*(code *)*apuStack_2f8[0])(apuStack_2f8);
      goto LAB_10a79f0c8;
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&ppppppcStack_330,*param_1,param_1[1]);
    }
    else {
      ppppppcStack_328 = (code ******)param_1[1];
      ppppppcStack_330 = (code ******)*param_1;
      pppppcStack_320 = (code *****)param_1[2];
    }
    pppppppcVar8 = (code *******)param_1;
    FUN_10ad015f0(param_1,0x8000);
    if ((int)pppppppcVar8 != 0) {
      ppppppcVar12 = (code ******)param_1[1];
      pppppppcVar8 = (code *******)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        ppppppcVar12 = (code ******)(ulong)*(byte *)((long)param_1 + 0x17);
        pppppppcVar8 = (code *******)param_1;
      }
      FUN_10a151324(&ppppppcStack_240,pppppppcVar8,ppppppcVar12);
      if ((long)pppppcStack_320 < 0) {
        __ZdlPv(ppppppcStack_330);
      }
      ppppppcStack_328 = ppppppcStack_238;
      ppppppcStack_330 = ppppppcStack_240;
      pppppcStack_320 = pppppcStack_230;
LAB_10a79e3f8:
      ppppppcStack_368 = (code ******)pppppppcVar15;
      if (*(char *)((long)puVar16 + 0x2f) < '\0') {
        func_0x000107c3192c(&ppppppuStack_360,puVar16[3],puVar16[4]);
      }
      else {
        pppppcStack_358 = (code *****)puVar16[4];
        ppppppuStack_360 = (undefined8 ******)*unaff_x22;
        pppppcStack_350 = (code *****)puVar16[5];
      }
      ppppppcStack_3c0 = (code ******)pppppppcVar15;
      if ((long)pppppcStack_320 < 0) {
        func_0x000107c3192c(&ppppppcStack_348,ppppppcStack_330,ppppppcStack_328);
        if (-1 < (long)pppppcStack_320) goto LAB_10a79e478;
        func_0x000107c3192c(&ppppppcStack_3b8,ppppppcStack_330,ppppppcStack_328);
      }
      else {
        ppppppcStack_340 = ppppppcStack_328;
        ppppppcStack_348 = ppppppcStack_330;
        pppppcStack_338 = pppppcStack_320;
LAB_10a79e478:
        ppppppcStack_3b0 = ppppppcStack_328;
        ppppppcStack_3b8 = ppppppcStack_330;
        pppppcStack_3a8 = pppppcStack_320;
      }
      ppppppcStack_3a0 = ppppppcStack_368;
      if ((long)pppppcStack_350 < 0) {
        func_0x000107c3192c(&ppppppuStack_398,ppppppuStack_360,pppppcStack_358);
      }
      else {
        pppppcStack_390 = pppppcStack_358;
        ppppppuStack_398 = ppppppuStack_360;
        pppppcStack_388 = pppppcStack_350;
      }
      if ((long)pppppcStack_338 < 0) {
        func_0x000107c3192c(&ppppppcStack_380,ppppppcStack_348,ppppppcStack_340);
      }
      else {
        ppppppcStack_378 = ppppppcStack_340;
        ppppppcStack_380 = ppppppcStack_348;
        pppppcStack_370 = pppppcStack_338;
      }
      ppppppcStack_418 = (code ******)pppppppcVar15;
      if ((long)pppppcStack_320 < 0) {
        func_0x000107c3192c(&ppppppcStack_410,ppppppcStack_330,ppppppcStack_328);
      }
      else {
        ppppppcStack_408 = ppppppcStack_328;
        ppppppcStack_410 = ppppppcStack_330;
        pppppcStack_400 = pppppcStack_320;
      }
      ppppppcStack_3f8 = ppppppcStack_368;
      if ((long)pppppcStack_350 < 0) {
        func_0x000107c3192c(&ppppppuStack_3f0,ppppppuStack_360,pppppcStack_358);
      }
      else {
        pppppcStack_3e8 = pppppcStack_358;
        ppppppuStack_3f0 = ppppppuStack_360;
        pppppcStack_3e0 = pppppcStack_350;
      }
      if ((long)pppppcStack_338 < 0) {
        func_0x000107c3192c(&ppppppcStack_3d8,ppppppcStack_348,ppppppcStack_340);
      }
      else {
        ppppppcStack_3d0 = ppppppcStack_340;
        ppppppcStack_3d8 = ppppppcStack_348;
        pppppcStack_3c8 = pppppcStack_338;
      }
      ppppppcStack_430 = (code ******)0x0;
      ppppppcStack_428 = (code ******)0x0;
      pppppppcVar8 = pppppppcVar15;
      func_0x00010a79db50(pppppppcVar15,unaff_x22);
      if (pppppppcVar15 + 1 == pppppppcVar8) {
        FUN_10a0f2388(&ppppppiStack_448,param_1);
        if (cStack_431 < '\0') {
          pppppppiVar11 = (int *******)ppppppiStack_448;
          if (lStack_440 == 4) goto LAB_10a79e668;
LAB_10a79e67c:
          pppppppcVar8 = (code *******)param_1;
          FUN_10ab275d8();
          if ((int)pppppppcVar8 != 0) goto LAB_10a79e688;
          pppppppcVar8 = &ppppppcStack_330;
          FUN_10ad76578();
          if ((int)pppppppcVar8 != 0) {
            FUN_10a8bb1fc();
            ppppppcVar12 = *pppppppcVar8 + 0xdd;
            FUN_10a08f69c();
            uVar2 = *(undefined1 *)ppppppcVar12;
            pppppppcVar8 = (code *******)0x60;
            __Znwm();
            pppppppcVar18 = pppppppcVar8 + 1;
            *pppppppcVar18 = (code ******)0x0;
            pppppppcVar8[2] = (code ******)0x0;
            pppppppcVar17 = pppppppcVar8 + 3;
            *pppppppcVar8 = (code ******)&PTR_FUN_110b9f108;
            FUN_10ad76790(pppppppcVar17,&ppppppcStack_330,uVar2);
            pppppcStack_f8 = (code *****)0x0;
            appppppcStack_f0[0] = (code ******)0x0;
            ppppppcStack_b8 = (code ******)pppppppcVar17;
            appppppcStack_b0[0] = (code ******)pppppppcVar8;
            FUN_109d2e134(&ppppppcStack_240,&ppppppcStack_b8);
            do {
              ppppppcVar12 = *pppppppcVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar18,0x10);
              if (bVar4) {
                *pppppppcVar18 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*pppppppcVar8)[2])(pppppppcVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar8);
            }
            ppppppcVar12 = appppppcStack_f0[0];
            if ((code *******)appppppcStack_f0[0] != (code *******)0x0) {
              pppppppcVar8 = (code *******)(appppppcStack_f0[0] + 1);
              do {
                ppppppcVar13 = *pppppppcVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                if (bVar4) {
                  *pppppppcVar8 = (code ******)((long)ppppppcVar13 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppcVar13 == (code ******)0x0) {
                (*(code *)(*appppppcStack_f0[0])[2])(appppppcStack_f0[0]);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
              }
            }
            param_1 = (undefined **)pppppppcVar15[6];
            if ((code *******)param_1 == (code *******)0x0) {
              pppppppcVar15 = (code *******)0x1d0;
              __Znwm();
              pppppppcVar15[1] = (code ******)0x0;
              pppppppcVar15[2] = (code ******)0x0;
              *pppppppcVar15 = (code ******)&PTR_DAT_110bc7fe0;
              param_1 = (undefined **)(pppppppcVar15 + 3);
              FUN_10a8c0e38(param_1,0,&ppppppcStack_240);
              ppppppcStack_b8 = (code ******)param_1;
              appppppcStack_b0[0] = (code ******)pppppppcVar15;
              FUN_10a37d52c(&ppppppcStack_b8,pppppppcVar15 + 8,param_1);
              FUN_10a37d328(&ppppppcStack_280,&ppppppcStack_b8);
              if ((code *******)appppppcStack_b0[0] != (code *******)0x0) {
                pppppppcVar15 = (code *******)(appppppcStack_b0[0] + 1);
                do {
                  ppppppcVar12 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar8 = (code *******)appppppcStack_b0[0];
                } while (cVar3 != '\0');
                goto LAB_10a79ed58;
              }
            }
            else {
              ppppppcVar12 = (code ******)param_1[0x10b];
              pppppppcVar15 = (code *******)param_1[0x10c];
              if (pppppppcVar15 != (code *******)0x0) {
                pppppppcVar8 = pppppppcVar15 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uVar9 = 0x1b8;
              pppppcStack_178 = (code *****)ppppppcVar12;
              ppppppcStack_170 = (code ******)pppppppcVar15;
              __Znwm(0x1b8);
              FUN_10a8c0e38();
              pppppcStack_138 = (code *****)ppppppcVar12;
              ppppppcStack_130 = (code ******)pppppppcVar15;
              if (pppppppcVar15 != (code *******)0x0) {
                pppppppcVar8 = pppppppcVar15 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                pppppppcVar8 = pppppppcVar15 + 2;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                  if (bVar4) {
                    *pppppppcVar8 = (code ******)((long)*pppppppcVar8 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
              }
              pppppcStack_f8 = (code *****)ppppppcVar12;
              appppppcStack_f0[0] = (code ******)pppppppcVar15;
              FUN_10a37d48c(&ppppppcStack_b8,uVar9,&pppppcStack_f8);
              FUN_10a37d328(&ppppppcStack_280);
              ppppppcVar12 = appppppcStack_b0[0];
              if ((code *******)appppppcStack_b0[0] != (code *******)0x0) {
                pppppppcVar15 = (code *******)(appppppcStack_b0[0] + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*appppppcStack_b0[0])[2])(appppppcStack_b0[0]);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
              if ((code *******)appppppcStack_f0[0] != (code *******)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              ppppppcVar12 = ppppppcStack_130;
              if ((code *******)ppppppcStack_130 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_130 + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*ppppppcStack_130)[2])(ppppppcStack_130);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
              if (((code ******)pppppcStack_178 != (code ******)0x0) &&
                 ((code *******)ppppppcStack_280 != (code *******)0x0)) {
                ppppppcStack_b8 = ppppppcStack_280;
                appppppcStack_b0[0] = ppppppcStack_278;
                if ((code *******)ppppppcStack_278 != (code *******)0x0) {
                  pppppppcVar15 = (code *******)(ppppppcStack_278 + 1);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                    if (bVar4) {
                      *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                FUN_10aa88c30(pppppcStack_178,&ppppppcStack_b8);
                ppppppcVar12 = appppppcStack_b0[0];
                if ((code *******)appppppcStack_b0[0] != (code *******)0x0) {
                  pppppppcVar15 = (code *******)(appppppcStack_b0[0] + 1);
                  do {
                    ppppppcVar13 = *pppppppcVar15;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                    if (bVar4) {
                      *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppppppcVar13 == (code ******)0x0) {
                    (*(code *)(*appppppcStack_b0[0])[2])(appppppcStack_b0[0]);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                  }
                }
              }
              if ((code *******)ppppppcStack_170 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_170 + 1);
                do {
                  ppppppcVar12 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  pppppppcVar8 = (code *******)ppppppcStack_170;
                } while (cVar3 != '\0');
LAB_10a79ed58:
                if (ppppppcVar12 == (code ******)0x0) {
                  (*(code *)(*pppppppcVar8)[2])(pppppppcVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar8);
                }
              }
            }
            ppppppcVar13 = ppppppcStack_278;
            ppppppcVar12 = ppppppcStack_280;
            func_0x000109a1ab0c(&ppppppcStack_240);
            pppppppcVar15 = (code *******)ppppppcStack_428;
            ppppppcStack_428 = ppppppcVar13;
            ppppppcStack_430 = ppppppcVar12;
            if (pppppppcVar15 != (code *******)0x0) {
              pppppppcVar8 = pppppppcVar15 + 1;
              do {
                ppppppcVar12 = *pppppppcVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
                if (bVar4) {
                  *pppppppcVar8 = (code ******)((long)ppppppcVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_10a79eda8;
            }
            goto LAB_10a79edc8;
          }
          cStack_461 = '\b';
          ppppppcStack_478 = (code ******)0x746e65746e6f432f;
          uStack_470 = 0;
          pppppppcVar8 = (code *******)ppppppcStack_328;
          pppppppcVar17 = (code *******)ppppppcStack_330;
          if (-1 < (long)pppppcStack_320) {
            pppppppcVar8 = (code *******)((ulong)pppppcStack_320 >> 0x38);
            pppppppcVar17 = &ppppppcStack_330;
          }
          pppppppcVar18 = &ppppppcStack_478;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppcVar18,0,pppppppcVar17,pppppppcVar8);
          pppppcStack_458 = (code *****)pppppppcVar18[1];
          ppppppuStack_460 = (undefined8 ******)*pppppppcVar18;
          pppppcStack_450 = (code *****)pppppppcVar18[2];
          pppppppcVar18[1] = (code ******)0x0;
          pppppppcVar18[2] = (code ******)0x0;
          *pppppppcVar18 = (code ******)0x0;
          ppppppcStack_280 = (code ******)FUN_10a79f9e0;
          ppppppcStack_278 = (code ******)&PTR_FUN_110c180b0;
          plVar10 = (long *)0x58;
          __Znwm();
          pppppcVar5 = pppppcStack_3a8;
          *plVar10 = (long)ppppppcStack_3c0;
          plVar10[2] = (long)ppppppcStack_3b0;
          plVar10[1] = (long)ppppppcStack_3b8;
          ppppppcStack_3b8 = (code ******)0x0;
          ppppppcStack_3b0 = (code ******)0x0;
          pppppcStack_3a8 = (code *****)0x0;
          plVar10[3] = (long)pppppcVar5;
          plVar10[4] = (long)ppppppcStack_3a0;
          if ((long)pppppcStack_388 < 0) {
            func_0x000107c3192c(plVar10 + 5,ppppppuStack_398,pppppcStack_390);
          }
          else {
            plVar10[6] = (long)pppppcStack_390;
            plVar10[5] = (long)ppppppuStack_398;
            plVar10[7] = (long)pppppcStack_388;
          }
          plVar10[9] = (long)ppppppcStack_378;
          plVar10[8] = (long)ppppppcStack_380;
          plVar10[10] = (long)pppppcStack_370;
          ppppppcStack_378 = (code ******)0x0;
          pppppcStack_370 = (code *****)0x0;
          ppppppcStack_380 = (code ******)0x0;
          ppppppcStack_2c0 = (code ******)FUN_10a7a0470;
          ppuStack_2b8 = &PTR_FUN_110c180c8;
          unaff_x22 = (code *******)0x58;
          plStack_270 = plVar10;
          __Znwm();
          pppppcVar5 = pppppcStack_400;
          *unaff_x22 = ppppppcStack_418;
          unaff_x22[2] = ppppppcStack_408;
          unaff_x22[1] = ppppppcStack_410;
          ppppppcStack_410 = (code ******)0x0;
          ppppppcStack_408 = (code ******)0x0;
          pppppcStack_400 = (code *****)0x0;
          unaff_x22[3] = (code ******)pppppcVar5;
          unaff_x22[4] = ppppppcStack_3f8;
          if ((long)pppppcStack_3e0 < 0) {
            func_0x000107c3192c(unaff_x22 + 5,ppppppuStack_3f0,pppppcStack_3e8);
          }
          else {
            unaff_x22[6] = (code ******)pppppcStack_3e8;
            unaff_x22[5] = (code ******)ppppppuStack_3f0;
            unaff_x22[7] = (code ******)pppppcStack_3e0;
          }
          unaff_x22[9] = ppppppcStack_3d0;
          unaff_x22[8] = ppppppcStack_3d8;
          unaff_x22[10] = (code ******)pppppcStack_3c8;
          ppppppcStack_3d0 = (code ******)0x0;
          pppppcStack_3c8 = (code *****)0x0;
          ppppppcStack_3d8 = (code ******)0x0;
          param_1 = &PTR_PTR_11330a000;
          ppppppcStack_2b0 = (code ******)unaff_x22;
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            pppppppuVar1 = (undefined8 *******)ppppppuStack_460;
            if (-1 < (long)pppppcStack_450) {
              pppppppuVar1 = &ppppppuStack_460;
            }
            func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f67709c,0xb2,&UNK_10f67714c,in_x6,in_x7,
                                pppppppuVar1);
          }
          FUN_10a34bba8(&ppppppcStack_310,pppppppcVar15[6],&ppppppuStack_460);
          ppppppcVar12 = ppppppcStack_2c0;
          if ((code *******)ppppppcStack_310 == (code *******)0x0) {
            func_0x000107c2b054(&ppppppcStack_240,&UNK_10f677168);
            (*(code *)ppppppcVar12)(&ppppppcStack_240,&ppppppcStack_2c0);
            if ((long)pppppcStack_230 < 0) {
              __ZdlPv(ppppppcStack_240);
            }
          }
          else {
            FUN_10a771364(pppppppcVar15 + 3,ppppppcStack_310 + 0x23);
            if (*(int *)(ppppppcStack_310 + 0x22) == 2) {
              ppppppcStack_240 = ppppppcStack_310;
              ppppppcStack_238 = ppppppcStack_308;
              if ((code *******)ppppppcStack_308 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_308 + 1);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              (*(code *)ppppppcStack_280)(&ppppppcStack_240,&ppppppcStack_280);
              ppppppcVar12 = ppppppcStack_238;
              if ((code *******)ppppppcStack_238 != (code *******)0x0) {
                pppppppcVar15 = (code *******)(ppppppcStack_238 + 1);
                do {
                  ppppppcVar13 = *pppppppcVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                  if (bVar4) {
                    *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar13 == (code ******)0x0) {
                  (*(code *)(*ppppppcStack_238)[2])(ppppppcStack_238);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
                }
              }
            }
            else {
              if (*(int *)(ppppppcStack_310 + 0x22) != 1) {
                FUN_10a00946c(&UNK_10f6771e0);
                goto LAB_10a79f150;
              }
              ppppppcStack_240 = ppppppcStack_280;
              unaff_x22 = &ppppppcStack_240;
              (*(code *)ppppppcStack_278[2])(&ppppppcStack_238,&ppppppcStack_278);
              ppppppcStack_b8 = ppppppcStack_2c0;
              (*(code *)ppuStack_2b8[2])(appppppcStack_b0,&ppuStack_2b8);
              pppppcStack_f8 = (code *****)FUN_10a7a2734;
              appppppcStack_f0[0] = (code ******)&PTR_DAT_110c18170;
              if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                pppppppuVar1 = (undefined8 *******)ppppppuStack_460;
                if (-1 < (long)pppppcStack_450) {
                  pppppppuVar1 = &ppppppuStack_460;
                }
                func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f67709c,0xca,&UNK_10f6771b5,in_x6,
                                    in_x7,pppppppuVar1);
              }
              pppppcStack_138 = (code *****)FUN_10a7a274c;
              ppppppcStack_130 = (code ******)&PTR_FUN_110c18188;
              plVar10 = (long *)0x40;
              __Znwm();
              *plVar10 = (long)ppppppcStack_240;
              (*(code *)ppppppcStack_238[2])(plVar10 + 1,&ppppppcStack_238);
              pppppcStack_178 = (code *****)FUN_10a7a282c;
              ppppppcStack_170 = (code ******)&PTR_FUN_110c181a0;
              param_1 = (undefined **)0x40;
              plStack_128 = plVar10;
              __Znwm();
              *param_1 = (undefined *)ppppppcStack_b8;
              (*(code *)appppppcStack_b0[0][2])(param_1 + 1,appppppcStack_b0);
              ppppppcStack_168 = (code ******)param_1;
              FUN_10a349c18(ppppppcStack_310,&pppppcStack_138,&pppppcStack_178,&pppppcStack_f8);
              (*(code *)*ppppppcStack_170)(&ppppppcStack_170);
              (*(code *)*ppppppcStack_130)(&ppppppcStack_130);
              (*(code *)*appppppcStack_f0[0])(appppppcStack_f0);
              (*(code *)*appppppcStack_b0[0])(appppppcStack_b0);
              (*(code *)*ppppppcStack_238)(&ppppppcStack_238);
            }
          }
          if ((code *******)ppppppcStack_308 != (code *******)0x0) {
            pppppppcVar15 = (code *******)(ppppppcStack_308 + 1);
            do {
              ppppppcVar12 = *pppppppcVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
              if (bVar4) {
                *pppppppcVar15 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*ppppppcStack_308)[2])(ppppppcStack_308);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcStack_308);
            }
          }
          (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
          (*(code *)*ppppppcStack_278)(&ppppppcStack_278);
          if ((long)pppppcStack_450 < 0) {
            __ZdlPv(ppppppuStack_460);
          }
          pppppppcVar15 = (code *******)ppppppcStack_478;
          if (cStack_461 < '\0') goto LAB_10a79efd0;
        }
        else {
          if (cStack_431 != '\x04') goto LAB_10a79e67c;
          pppppppiVar11 = &ppppppiStack_448;
LAB_10a79e668:
          if (*(int *)pppppppiVar11 != 0x66746c67) goto LAB_10a79e67c;
LAB_10a79e688:
          FUN_10ab273c0(&ppppppcStack_240,pppppppcVar15[6],param_1);
          pppppppcVar15 = (code *******)ppppppcStack_428;
          ppppppcStack_428 = ppppppcStack_238;
          ppppppcStack_430 = ppppppcStack_240;
          if (pppppppcVar15 != (code *******)0x0) {
            pppppppcVar8 = pppppppcVar15 + 1;
            do {
              ppppppcVar12 = *pppppppcVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar8,0x10);
              if (bVar4) {
                *pppppppcVar8 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10a79eda8:
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*pppppppcVar15)[2])(pppppppcVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
            }
          }
LAB_10a79edc8:
          unaff_x22 = &ppppppcStack_418;
          if ((code *******)ppppppcStack_430 == (code *******)0x0) {
            if ((long)pppppcStack_320 < 0) {
              func_0x000107c3192c(&ppppppcStack_240,ppppppcStack_330,ppppppcStack_328);
            }
            else {
              ppppppcStack_238 = ppppppcStack_328;
              ppppppcStack_240 = ppppppcStack_330;
              pppppcStack_230 = pppppcStack_320;
            }
            ppppppcVar12 = ppppppcStack_418;
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              pppppppcVar15 = (code *******)ppppppcStack_240;
              if (-1 < (long)pppppcStack_230) {
                pppppppcVar15 = &ppppppcStack_240;
              }
              func_0x00010ae06f08(1,8,&UNK_10f676bc8,&UNK_10f676da2,0x11e,&UNK_10f676e42,in_x6,in_x7
                                  ,pppppppcVar15);
            }
            FUN_10a79fbb4(&ppppppcStack_280,ppppppcVar12,&ppppppcStack_410);
            FUN_10a79f734(&ppppppcStack_3f8,&ppppppcStack_280);
            ppppppcVar12 = ppppppcStack_278;
            if ((code *******)ppppppcStack_278 != (code *******)0x0) {
              pppppppcVar15 = (code *******)(ppppppcStack_278 + 1);
              do {
                ppppppcVar13 = *pppppppcVar15;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
                if (bVar4) {
                  *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppcVar13 == (code ******)0x0) {
                (*(code *)(*ppppppcStack_278)[2])(ppppppcStack_278);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
              }
            }
            pppppppcVar15 = (code *******)ppppppcStack_240;
            if ((long)pppppcStack_230 < 0) {
LAB_10a79efd0:
              __ZdlPv(pppppppcVar15);
            }
          }
          else {
            FUN_10a79f734(&ppppppcStack_368,&ppppppcStack_430);
          }
        }
        if (cStack_431 < '\0') {
          __ZdlPv(ppppppiStack_448);
        }
      }
      else {
        FUN_10a2e9dcc(&ppppppcStack_430,pppppppcVar8 + 7);
        ppppppcVar12 = ppppppcStack_368;
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          pppppppuVar1 = (undefined8 *******)ppppppuStack_360;
          if (-1 < (long)pppppcStack_350) {
            pppppppuVar1 = &ppppppuStack_360;
          }
          func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676cbe,0x10c,&UNK_10f676d7d,in_x6,in_x7,
                              pppppppuVar1);
        }
        __ZNSt3__115recursive_mutex4lockEv(ppppppcVar12 + 0x10);
        FUN_10a7a0604(ppppppcVar12 + 10,&ppppppuStack_360,&ppppppcStack_348,&ppppppcStack_430);
        __ZNSt3__115recursive_mutex6unlockEv(ppppppcVar12 + 0x10);
      }
      ppppppcVar12 = ppppppcStack_428;
      if ((code *******)ppppppcStack_428 != (code *******)0x0) {
        pppppppcVar15 = (code *******)(ppppppcStack_428 + 1);
        do {
          ppppppcVar13 = *pppppppcVar15;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
          if (bVar4) {
            *pppppppcVar15 = (code ******)((long)ppppppcVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppcVar13 == (code ******)0x0) {
          (*(code *)(*ppppppcStack_428)[2])(ppppppcStack_428);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar12);
        }
      }
      if ((long)pppppcStack_3c8 < 0) {
        __ZdlPv(ppppppcStack_3d8);
      }
      if ((long)pppppcStack_3e0 < 0) {
        __ZdlPv(ppppppuStack_3f0);
      }
      if ((long)pppppcStack_400 < 0) {
        __ZdlPv(ppppppcStack_410);
      }
      if ((long)pppppcStack_370 < 0) {
        __ZdlPv(ppppppcStack_380);
      }
      if ((long)pppppcStack_388 < 0) {
        __ZdlPv(ppppppuStack_398);
      }
      if ((long)pppppcStack_3a8 < 0) {
        __ZdlPv(ppppppcStack_3b8);
      }
      if ((long)pppppcStack_338 < 0) {
        __ZdlPv(ppppppcStack_348);
      }
      if ((long)pppppcStack_350 < 0) {
        __ZdlPv(ppppppuStack_360);
      }
      if ((long)pppppcStack_320 < 0) {
        __ZdlPv(ppppppcStack_330);
      }
      goto LAB_10a79f0ac;
    }
    pppppppcVar8 = (code *******)param_1;
    FUN_10ad015f0(param_1,0x4000);
    if (((ulong)pppppppcVar8 & 1) != 0) goto LAB_10a79e3f8;
  }
  FUN_10a79f608(unaff_x22,param_1);
LAB_10a79f150:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a79f154);
  (*pcVar6)();
}



/* Entry: 10a79f538; end: 10a79f5b3;  */

long * FUN_10a79f538(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a79f5b4; end: 10a79f607;  */

void FUN_10a79f5b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = param_2;
  plVar6 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar5 = (long *)plVar8[2];
      bVar3 = (long *)*plVar5 != plVar8;
      plVar8 = plVar5;
    } while (bVar3);
  }
  else {
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = plVar5;
  }
  plVar8 = (long *)param_1[1];
  param_1[2] = param_1[2] + -1;
  plVar5 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_10a04817c:
    plVar5 = (long *)plVar6[1];
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)plVar6[2];
      bVar3 = true;
      goto LAB_10a0481a0;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_10a04817c;
    }
  }
  bVar3 = false;
  puVar7 = (undefined8 *)plVar6[2];
  plVar5[2] = (long)puVar7;
LAB_10a0481a0:
  plVar4 = (long *)*puVar7;
  if (plVar4 == plVar6) {
    *puVar7 = plVar5;
    if (plVar6 == plVar8) {
      plVar4 = (long *)0x0;
      plVar8 = plVar5;
    }
    else {
      plVar4 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar5;
  }
  lVar10 = plVar6[3];
  plVar9 = plVar8;
  if (plVar6 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar6[2] = (long)puVar7;
    lVar1 = 0;
    if ((long *)*puVar7 != param_2) {
      lVar1 = 8;
    }
    *(long **)((long)puVar7 + lVar1) = plVar6;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar6;
    *plVar6 = lVar1;
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar6;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar9 = plVar6;
    if (plVar8 != param_2) {
      plVar9 = plVar8;
    }
  }
  if ((plVar9 != (long *)0x0) && ((char)lVar10 != '\0')) {
    if (bVar3) {
      while( true ) {
        plVar6 = (long *)plVar4[2];
        plVar5 = (long *)*plVar6;
        plVar8 = plVar9;
        if (plVar5 == plVar4) break;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar6 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          lVar10 = *plVar8;
          plVar6[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar6;
          }
          puVar7 = (undefined8 *)plVar6[2];
          plVar8[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar6) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar8;
          *plVar8 = (long)plVar6;
          plVar6[2] = (long)plVar8;
          plVar8 = plVar4;
          if (plVar9 != (long *)*plVar4) {
            plVar8 = plVar9;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar5 = (long *)*plVar4;
        plVar6 = plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar9 = (long *)plVar4[1];
          if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(plVar4 + 3) = 0;
            lVar10 = plVar5[1];
            *plVar4 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 0x10) = plVar4;
            }
            puVar7 = (undefined8 *)plVar4[2];
            plVar5[2] = (long)puVar7;
            lVar10 = 0;
            if ((long *)*puVar7 != plVar4) {
              lVar10 = 8;
            }
            *(long **)((long)puVar7 + lVar10) = plVar5;
            plVar5[1] = (long)plVar4;
            plVar4[2] = (long)plVar5;
            plVar6 = plVar5;
            plVar9 = plVar4;
          }
LAB_10a0483f4:
          plVar8 = (long *)plVar6[2];
          *(char *)(plVar6 + 3) = (char)plVar8[3];
          *(undefined1 *)(plVar8 + 3) = 1;
          *(undefined1 *)(plVar9 + 3) = 1;
          plVar6 = (long *)plVar8[1];
          lVar10 = *plVar6;
          plVar8[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar8;
          }
          puVar7 = (undefined8 *)plVar8[2];
          plVar6[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar8) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar6;
          *plVar6 = (long)plVar8;
LAB_10a0484ec:
          plVar8[2] = (long)plVar6;
          return;
        }
        plVar9 = (long *)plVar4[1];
        if ((plVar9 != (long *)0x0) && ((char)plVar9[3] != '\x01')) goto LAB_10a0483f4;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar6 = (long *)plVar4[2];
        if ((plVar6 == plVar8) || ((*(byte *)(plVar6 + 3) & 1) == 0)) goto LAB_10a048388;
LAB_10a048364:
        lVar10 = 8;
        if (*(long **)plVar6[2] != plVar6) {
          lVar10 = 0;
        }
        plVar4 = *(long **)((long)plVar6[2] + lVar10);
        plVar9 = plVar8;
      }
      if ((*(byte *)(plVar4 + 3) & 1) == 0) {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar6 + 3) = 0;
        lVar10 = plVar5[1];
        *plVar6 = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar6;
        }
        puVar7 = (undefined8 *)plVar6[2];
        plVar5[2] = (long)puVar7;
        lVar10 = 0;
        if ((long *)*puVar7 != plVar6) {
          lVar10 = 8;
        }
        *(long **)((long)puVar7 + lVar10) = plVar5;
        plVar5[1] = (long)plVar6;
        plVar6[2] = (long)plVar5;
        plVar8 = plVar4;
        if (plVar9 != (long *)plVar4[1]) {
          plVar8 = plVar9;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar5 = (long *)*plVar4;
      plVar6 = plVar4;
      if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
        plVar9 = (long *)plVar4[1];
        if ((plVar9 == (long *)0x0) || ((char)plVar9[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar6 = (long *)plVar4[2];
          if ((char)plVar6[3] == '\x01' && plVar6 != plVar8) goto LAB_10a048364;
LAB_10a048388:
          *(undefined1 *)(plVar6 + 3) = 1;
          return;
        }
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] == '\x01')) {
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar10 = *plVar9;
          plVar4[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar4;
          }
          puVar7 = (undefined8 *)plVar4[2];
          plVar9[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar4) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar9;
          *plVar9 = (long)plVar4;
          plVar4[2] = (long)plVar9;
          plVar6 = plVar9;
          plVar5 = plVar4;
        }
      }
      plVar8 = (long *)plVar6[2];
      *(char *)(plVar6 + 3) = (char)plVar8[3];
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar6 = (long *)*plVar8;
      lVar10 = plVar6[1];
      *plVar8 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar8;
      }
      puVar7 = (undefined8 *)plVar8[2];
      plVar6[2] = (long)puVar7;
      lVar10 = 0;
      if ((long *)*puVar7 != plVar8) {
        lVar10 = 8;
      }
      *(long **)((long)puVar7 + lVar10) = plVar6;
      plVar6[1] = (long)plVar8;
      goto LAB_10a0484ec;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* Entry: 10a79f608; end: 10a79f733;  */

void FUN_10a79f608(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_41;
  
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  for (uVar4 = uVar4 - 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    uVar1 = param_2[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if (uVar1 < uVar4) goto LAB_10a79f68c;
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar3) {
      plVar2 = param_2;
    }
    if (*(char *)((long)plVar2 + uVar4) == '/') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_60,param_2,0,uVar4,&uStack_41);
      puVar6 = auStack_60;
      FUN_10ad015f0(puVar6,0x4000);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
      if (((ulong)puVar6 & 1) != 0) break;
    }
  }
  FUN_10a0ee900(auStack_60,&UNK_10f676c82,0x3b);
  FUN_10a1084cc(auStack_60);
LAB_10a79f68c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a79f690);
  (*pcVar5)();
}



/* Entry: 10a79f734; end: 10a79f8a7;  */

void FUN_10a79f734(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  
  plVar6 = (long *)*param_1;
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 8) = 1;
    plVar5 = plVar6;
    FUN_10a79dc80(plVar6,&uStack_48,param_1 + 1);
    lVar7 = *plVar5;
    if (lVar7 == 0) {
      lVar7 = 0x48;
      __Znwm();
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        func_0x000107c3192c(lVar7 + 0x20,param_1[1],param_1[2]);
      }
      else {
        lVar4 = param_1[1];
        *(long *)(lVar7 + 0x28) = param_1[2];
        *(long *)(lVar7 + 0x20) = lVar4;
        *(long *)(lVar7 + 0x30) = param_1[3];
      }
      lVar4 = param_2[1];
      lVar8 = *param_2;
      *(long *)(lVar7 + 0x40) = param_2[1];
      *(long *)(lVar7 + 0x38) = lVar8;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a79dd04(plVar6,uStack_48,plVar5,lVar7);
    }
    FUN_10a2e9dcc(param_2,lVar7 + 0x38);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar5 = param_1 + 1;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    func_0x00010ae06f08(1,4,&UNK_10f676bc8,&UNK_10f676cbe,0x10c,&UNK_10f676d7d,in_x6,in_x7,plVar5);
  }
  __ZNSt3__115recursive_mutex4lockEv(plVar6 + 0x10);
  FUN_10a7a0604(plVar6 + 10,param_1 + 1,param_1 + 4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(plVar6 + 0x10);
  return;
}



/* Entry: 10a79f8a8; end: 10a79f9df;  */

long FUN_10a79f8a8(long param_1)

{
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a79f9e0; end: 10a79fbb3;  */

void FUN_10a79f9e0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  plVar7 = (long *)param_1[1];
  lVar5 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  if (lVar5 == 0) {
    FUN_10a79fbb4(&uStack_40,*puVar6,puVar6 + 1);
    plVar2 = plStack_28;
    plStack_28 = plStack_38;
    uStack_30 = uStack_40;
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 == (long *)0x0) goto LAB_10a79fb04;
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_10a2ea178(&uStack_40);
    plVar2 = plStack_28;
    plStack_28 = plStack_38;
    uStack_30 = uStack_40;
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 == (long *)0x0) goto LAB_10a79fb04;
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = plStack_38;
  if (lVar5 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
  }
LAB_10a79fb04:
  FUN_10a79f734(puVar6 + 4,&uStack_30);
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a79fbb4; end: 10a79ff5b;  */

void FUN_10a79fbb4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  char cStack_a1;
  undefined8 uStack_a0;
  char cStack_89;
  undefined1 auStack_80 [8];
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a0ff18c(&plStack_b8,param_3,2);
  FUN_10a79ff5c(auStack_80,&lStack_50,param_2 + 0x30,&plStack_b8);
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(plStack_b8);
  }
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 == 0) {
    plVar4 = (long *)0x108;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c192f0;
    plVar5 = plVar4 + 3;
    FUN_10aae9d08(plVar5,0,auStack_80);
    plStack_b8 = plVar5;
    plStack_b0 = plVar4;
    FUN_10a7a0214(&plStack_b8,plVar4 + 8,plVar5);
    FUN_10a7a0010(&plStack_d0,&plStack_b8);
    if (plStack_b0 == (long *)0x0) goto LAB_10a79fe58;
    plVar5 = plStack_b0 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_b0;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar3 = 0xf0;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    __Znwm(0xf0);
    FUN_10aae9d08();
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    lStack_50 = lVar7;
    plStack_48 = plVar5;
    FUN_10a7a0174(&plStack_b8,uVar3,&lStack_50);
    FUN_10a7a0010(&plStack_d0,&plStack_b8);
    plVar5 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar4 = plStack_b0 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_70 != 0) && (plStack_d0 != (long *)0x0)) {
      plStack_b8 = plStack_d0;
      plStack_b0 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar5 = plStack_c8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_70,&plStack_b8);
      plVar5 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar4 = plStack_b0 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_68 == (long *)0x0) goto LAB_10a79fe58;
    plVar5 = plStack_68 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_68;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a79fe58:
  param_1[1] = plStack_c8;
  *param_1 = plStack_d0;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10a79ff5c; end: 10a79ffc3;  */

void FUN_10a79ff5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x128;
  __Znwm();
  FUN_10a79ffc4();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a79ffc4; end: 10a7a000f;  */

undefined8 * FUN_10a79ffc4(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc7f30;
  FUN_10ac1ec64(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a7a0010; end: 10a7a0173;  */

void FUN_10a7a0010(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a7a0174; end: 10a7a0213;  */

long * FUN_10a7a0174(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110c19290;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a7a0214(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a7a0214; end: 10a7a0337;  */

void FUN_10a7a0214(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a7a0338; end: 10a7a0377;  */

void FUN_10a7a0338(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7a0378; end: 10a7a03b3;  */

long FUN_10a7a0378(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c192d0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7a03b4; end: 10a7a03c7;  */

void FUN_10a7a03b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a03c8; end: 10a7a03e7;  */

void FUN_10a7a03c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c192f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7a03e8; end: 10a7a03f7;  */

void FUN_10a7a03e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a7a03f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a7a03f8; end: 10a7a0457;  */

void FUN_10a7a03f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a0458; end: 10a7a046f;  */

void FUN_10a7a0458(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a0470; end: 10a7a058b;  */

void FUN_10a7a0470(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 **ppuStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  puVar7 = *(undefined8 **)(param_2 + 0x10);
  lStack_48 = param_1[1];
  ppuStack_50 = (undefined8 **)*param_1;
  lStack_40 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar6 = *puVar7;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    pppuVar2 = (undefined8 ***)ppuStack_50;
    if (-1 < lStack_40) {
      pppuVar2 = &ppuStack_50;
    }
    func_0x00010ae06f08(1,8,&UNK_10f676bc8,&UNK_10f676da2,0x11e,&UNK_10f676e42,in_x6,in_x7,pppuVar2)
    ;
  }
  FUN_10a79fbb4(auStack_30,uVar6,puVar7 + 1);
  FUN_10a79f734(puVar7 + 4,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (lStack_40 < 0) {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10a7a058c; end: 10a7a05eb;  */

void FUN_10a7a058c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a05ec; end: 10a7a0603;  */

void FUN_10a7a05ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a0604; end: 10a7a075f;  */

void FUN_10a7a0604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_50;
  long *plStack_48;
  
  lVar6 = param_1;
  FUN_10a79f538();
  if (param_1 + 8 != lVar6) {
    puVar7 = *(undefined8 **)(lVar6 + 0x38);
    uStack_60 = *(undefined8 *)(lVar6 + 0x48);
    puVar8 = *(undefined8 **)(lVar6 + 0x40);
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    puStack_70 = puVar7;
    puStack_68 = puVar8;
    FUN_10a79f5b4(param_1,lVar6);
    func_0x00010a79da7c(lVar6 + 0x20);
    __ZdlPv(lVar6);
    for (; puVar7 != puVar8; puVar7 = puVar7 + 0x10) {
      if (*(char *)(puVar7[1] + 8) == '\x01') {
        pcVar5 = (code *)*puVar7;
        plStack_48 = (long *)param_4[1];
        ppuStack_50 = (undefined8 **)*param_4;
        if (param_4[1] != 0) {
          plVar1 = (long *)(param_4[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (*pcVar5)(param_2,param_3,&ppuStack_50,puVar7);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar6 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
    }
    ppuStack_50 = &puStack_70;
    FUN_10a79dac0(&ppuStack_50);
  }
  return;
}



/* Entry: 10a7a0760; end: 10a7a07ab;  */

void FUN_10a7a0760(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x18));
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7a07ac; end: 10a7a07c3;  */

void FUN_10a7a07ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a7a07c4; end: 10a7a0853;  */

void FUN_10a7a07c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a7a0854(*(undefined8 *)(param_4 + 0x10),param_1,param_2,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7a0854; end: 10a7a087b;  */

void FUN_10a7a0854(long *param_1,code **param_2,long *param_3,code **param_4)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  long *plVar11;
  long *plVar12;
  code **ppcVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  code **ppcStack_110;
  long *plStack_108;
  code **ppcStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 **ppuStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
      pcVar16 = (code *)*param_1;
      pcVar17 = param_4[1];
      if (param_4[1] != (code *)0x0) {
        pcVar1 = param_4[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar16)(param_2,param_3,&stack0xffffffffffffffd0,param_1);
      if (pcVar17 != (code *)0x0) {
        pcVar16 = pcVar17 + 8;
        do {
          lVar14 = *(long *)pcVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
          if (bVar4) {
            *(long *)pcVar16 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)pcVar17 + 0x10))(pcVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
        }
      }
      return;
    }
    return;
  }
  plVar12 = &lStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  ppcVar9 = param_2;
  plVar11 = param_3;
  ppcVar13 = param_4;
  FUN_10a688b40();
  if (plVar6 == (long *)0x0) {
    ppcVar10 = (code **)0x0;
    ppuVar7 = (undefined8 **)0x0;
    if (ppcVar9 != (code **)0x0) {
      ppuStack_d8 = (undefined8 **)param_1[1];
      lStack_e0 = *param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_d0,*param_2,param_2[1]);
      }
      else {
        pcStack_c8 = param_2[1];
        ppuStack_d0 = (undefined8 **)*param_2;
        pcStack_c0 = param_2[2];
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_b8,*param_3,param_3[1]);
      }
      else {
        lStack_b0 = param_3[1];
        ppuStack_b8 = (undefined8 **)*param_3;
        lStack_a8 = param_3[2];
      }
      ppuStack_98 = (undefined8 **)param_4[1];
      pcStack_a0 = *param_4;
      if (param_4[1] != (code *)0x0) {
        pcVar16 = param_4[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
          if (bVar4) {
            *(long *)pcVar16 = *(long *)pcVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = FUN_10a7a0f08;
      param_4 = &pcStack_88;
      FUN_10a7a0f90(apuStack_80,&PTR_FUN_110c180f8,&lStack_e0);
      ppcVar10 = &pcStack_88;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      ppuVar7 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppuVar8 = ppuStack_98;
      if (ppuStack_98 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_98 + 1;
        do {
          puVar15 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar15 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar15 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_98)[2])(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
      plVar11 = plVar12;
      if (lStack_a8 < 0) {
        ppuVar7 = ppuStack_b8;
        __ZdlPv();
        plVar11 = plVar12;
      }
      if ((long)pcStack_c0 < 0) {
        ppuVar7 = ppuStack_d0;
        __ZdlPv();
      }
      ppuVar8 = ppuStack_d8;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_d8 + 1;
        do {
          puVar15 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar15 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar15 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
    }
  }
  else {
    *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
    ppuVar7 = (undefined8 **)*param_1;
    ppcVar10 = param_2;
    plVar11 = param_3;
    ppcVar13 = param_4;
    FUN_10a7a0bc8(ppuVar7,param_2,param_3,param_4);
    iVar5 = *(int *)((long)plVar6 + 4) + -1;
    *(int *)((long)plVar6 + 4) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)plVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pcStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  func_0x00010a004dac(&lStack_e0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a7a0bc8;
  ppcStack_110 = param_2;
  plStack_108 = param_3;
  ppcStack_100 = param_4;
  ppuStack_f8 = ppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_120,ppuVar8 + 1,*ppuVar8);
  func_0x000109884820(&puStack_118,&puStack_120,*ppuVar8);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  (**(code **)(**ppuVar8 + 0x30))(&puStack_120);
  FUN_10a7a0d14(*ppuVar8,&puStack_120,&puStack_118,ppcVar10,plVar11,ppcVar13);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a7a087c; end: 10a7a092b;  */

void FUN_10a7a087c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar6 = (code *)*param_1;
  plStack_28 = (long *)param_4[1];
  uStack_30 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar6)(param_2,param_3,&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7a092c; end: 10a7a0bc7;  */

void FUN_10a7a092c(long *param_1,code **param_2,long *param_3,code **param_4)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  long *plVar11;
  long *plVar12;
  code **ppcVar13;
  undefined8 *puVar14;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  code **ppcStack_110;
  long *plStack_108;
  code **ppcStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 **ppuStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  plVar12 = &lStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  ppcVar9 = param_2;
  plVar11 = param_3;
  ppcVar13 = param_4;
  FUN_10a688b40();
  if (plVar6 == (long *)0x0) {
    ppcVar10 = (code **)0x0;
    ppuVar7 = (undefined8 **)0x0;
    if (ppcVar9 != (code **)0x0) {
      ppuStack_d8 = (undefined8 **)param_1[1];
      lStack_e0 = *param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_d0,*param_2,param_2[1]);
      }
      else {
        pcStack_c8 = param_2[1];
        ppuStack_d0 = (undefined8 **)*param_2;
        pcStack_c0 = param_2[2];
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_b8,*param_3,param_3[1]);
      }
      else {
        lStack_b0 = param_3[1];
        ppuStack_b8 = (undefined8 **)*param_3;
        lStack_a8 = param_3[2];
      }
      ppuStack_98 = (undefined8 **)param_4[1];
      pcStack_a0 = *param_4;
      if (param_4[1] != (code *)0x0) {
        pcVar1 = param_4[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = FUN_10a7a0f08;
      param_4 = &pcStack_88;
      FUN_10a7a0f90(apuStack_80,&PTR_FUN_110c180f8,&lStack_e0);
      ppcVar10 = &pcStack_88;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      ppuVar7 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      ppuVar8 = ppuStack_98;
      if (ppuStack_98 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_98 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_98)[2])(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
      plVar11 = plVar12;
      if (lStack_a8 < 0) {
        ppuVar7 = ppuStack_b8;
        __ZdlPv();
        plVar11 = plVar12;
      }
      if ((long)pcStack_c0 < 0) {
        ppuVar7 = ppuStack_d0;
        __ZdlPv();
      }
      ppuVar8 = ppuStack_d8;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_d8 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
    }
  }
  else {
    *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
    ppuVar7 = (undefined8 **)*param_1;
    ppcVar10 = param_2;
    plVar11 = param_3;
    ppcVar13 = param_4;
    FUN_10a7a0bc8(ppuVar7,param_2,param_3,param_4);
    iVar5 = *(int *)((long)plVar6 + 4) + -1;
    *(int *)((long)plVar6 + 4) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)plVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pcStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  func_0x00010a004dac(&lStack_e0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a7a0bc8;
  ppcStack_110 = param_2;
  plStack_108 = param_3;
  ppcStack_100 = param_4;
  ppuStack_f8 = ppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_120,ppuVar8 + 1,*ppuVar8);
  func_0x000109884820(&puStack_118,&puStack_120,*ppuVar8);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  (**(code **)(**ppuVar8 + 0x30))(&puStack_120);
  FUN_10a7a0d14(*ppuVar8,&puStack_120,&puStack_118,ppcVar10,plVar11,ppcVar13);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a7a0bc8; end: 10a7a0ccb;  */

void FUN_10a7a0bc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_40,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_38,&puStack_40,*param_1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_40);
  FUN_10a7a0d14(*param_1,&puStack_40,&puStack_38,param_2,param_3,param_4);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a7a0ccc; end: 10a7a0d13;  */

long FUN_10a7a0ccc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a0536d4(param_1 + 0x40);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a7a0d14; end: 10a7a0e27;  */

void FUN_10a7a0d14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [32];
  int aiStack_70 [2];
  long alStack_68 [2];
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a7a0e28(auStack_90,param_1,param_4,param_5,param_6);
  uStack_38 = 3;
  puStack_40 = auStack_90;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &puStack_40;
  alStack_68[1] = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar1)) &&
       (*(undefined8 **)((long)alStack_68 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_68 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x30);
  return;
}



/* Entry: 10a7a0e28; end: 10a7a0f07;  */

void FUN_10a7a0e28(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  param_1[4] = 6;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  FUN_10a052f68(param_1 + 8,param_2,param_5);
  return;
}



/* Entry: 10a7a0f08; end: 10a7a0f1b;  */

void FUN_10a7a0f08(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&puStack_40,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_38,&puStack_40,*puVar1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_40);
  FUN_10a7a0d14(*puVar1,&puStack_40,&puStack_38,puVar2 + 2,puVar2 + 5,puVar2 + 8);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}


