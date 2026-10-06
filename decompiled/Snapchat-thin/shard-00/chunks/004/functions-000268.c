/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005f710c; end: 1005f716f;  */

void FUN_1005f710c(ulong *param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if (param_2 == 0) {
    puVar1 = param_1;
    FUN_100063c9c();
    uVar2 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar2;
    puVar1[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    uVar2 = 2;
  }
  else {
    puVar1 = &uStack_28;
    uStack_28 = param_2;
    func_0x0001072efdf4(puVar1,param_3);
    uVar2 = 3;
  }
  *param_1 = uVar2 | (ulong)puVar1;
  return;
}



/* Entry: 1005f7170; end: 1005f718f;  */

void FUN_1005f7170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1005f7190; end: 1005f71af;  */

void FUN_1005f7190(void)

{
  FUN_1005ec9ec();
  FUN_1005f71b0();
  func_0x0001005eca94();
  return;
}



/* Entry: 1005f71b0; end: 1005f721b;  */

void FUN_1005f71b0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_f0 [208];
  
  FUN_1005f6168();
  cVar1 = *(char *)(param_1 + 0xd0);
  if (cVar1 != *(char *)(param_2 + 0xd0)) {
    if (cVar1 == '\0') {
      func_0x000107c324cc();
      func_0x000107c28fd4();
    }
    else {
      FUN_10005e42c();
      func_0x000107c28fd4();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
      func_0x000107c28f8c();
      *(undefined1 *)(unaff_x19 + 0xd0) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324cc();
    func_0x000107c324b0();
    func_0x000107c32574();
    func_0x0001086ad844();
    func_0x0001086b0314();
    func_0x0001086ad7c0();
    func_0x0001086b069c();
    func_0x0001086ad7c0();
    func_0x0001086a9ac4(auStack_f0);
    return;
  }
  return;
}



/* Entry: 1005f721c; end: 1005f7223;  */

void FUN_1005f721c(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c28f8c();
  }
  return;
}



/* Entry: 1005f7224; end: 1005f7243;  */

void FUN_1005f7224(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x000107c28f8c();
  }
  return;
}



/* Entry: 1005f7244; end: 1005f724b;  */

void FUN_1005f7244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 1005f724c; end: 1005f7287;  */

undefined8 * FUN_1005f724c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_58;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  uVar2 = 0;
  func_0x00010527822c();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_3;
  puVar5 = (undefined8 *)((ulong)&puStack_d0 | 8);
  puStack_d0 = param_2;
  FUN_1005f724c(puVar5,uVar2);
  pcStack_b8 = FUN_10063404c;
  ppuStack_b0 = &PTR_DAT_110a720e8;
  uStack_a0 = uStack_c8;
  puStack_a8 = puStack_d0;
  uStack_98 = uStack_c0;
  *puVar5 = 0;
  puVar5[1] = 0;
  ppcVar4 = &pcStack_b8;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  func_0x0001005f7394();
  puVar3 = puVar5;
  func_0x00010056894c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x0001005f7394();
  func_0x00010056894c(puVar5);
  func_0x000107c60bd8();
  *puVar3 = &PTR_DAT_110a720e8;
  pcVar7 = ppcVar4[1];
  puVar3[2] = ppcVar4[2];
  puVar3[1] = pcVar7;
  puVar3[3] = ppcVar4[3];
  ppcVar4[2] = (code *)0x0;
  ppcVar4[3] = (code *)0x0;
  return puVar3;
}



/* Entry: 1005f7288; end: 1005f7367;  */

void FUN_1005f7288(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code **ppcVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*param_3;
  puVar3 = (undefined8 *)((ulong)&uStack_b0 | 8);
  uStack_b0 = param_2;
  FUN_1005f724c(puVar3,param_1);
  pcStack_98 = FUN_10063404c;
  ppuStack_90 = &PTR_DAT_110a720e8;
  uStack_80 = uStack_a8;
  uStack_88 = uStack_b0;
  uStack_78 = uStack_a0;
  *puVar3 = 0;
  puVar3[1] = 0;
  ppcVar2 = &pcStack_98;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  func_0x0001005f7394();
  puVar1 = puVar3;
  func_0x00010056894c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001005f7394();
  func_0x00010056894c(puVar3);
  func_0x000107c60bd8();
  *puVar1 = &PTR_DAT_110a720e8;
  pcVar5 = ppcVar2[1];
  puVar1[2] = ppcVar2[2];
  puVar1[1] = pcVar5;
  puVar1[3] = ppcVar2[3];
  ppcVar2[2] = (code *)0x0;
  ppcVar2[3] = (code *)0x0;
  return;
}



/* Entry: 1005f7368; end: 1005f73a3;  */

void FUN_1005f7368(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a720e8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 1005f73a4; end: 1005f73d3;  */

long FUN_1005f73a4(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1005f73d4; end: 1005f73e3;  */

void FUN_1005f73d4(void)

{
  return;
}



/* Entry: 1005f73e4; end: 1005f7447;  */

long FUN_1005f73e4(long param_1)

{
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [216];
  
  func_0x0001005f73dc(auStack_110);
  FUN_1005f7448(param_1 + 8,auStack_110);
  FUN_1005f7224(auStack_108);
  func_0x0001005f67a4();
  FUN_10054cac4();
  FUN_1005f7224(param_1 + 0x10);
  return param_1;
}



/* Entry: 1005f7448; end: 1005f746b;  */

undefined8 FUN_1005f7448(undefined8 param_1)

{
  FUN_1005f6720();
  FUN_1005f7494();
  return param_1;
}



/* Entry: 1005f746c; end: 1005f7493;  */

void FUN_1005f746c(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xd0);
  if (cVar1 != *(char *)(param_2 + 0xd0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xd0) == '\x01') {
        func_0x000107c28f8c();
        *(undefined1 *)(param_1 + 0xd0) = 0;
      }
      return;
    }
    func_0x0001086ad844();
    *(undefined1 *)(param_1 + 0xd0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324b0();
    func_0x000107c3194c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    func_0x0001086a76e0(unaff_x20 + 0x28,unaff_x19 + 0x28);
    func_0x000107c27b9c(unaff_x20 + 0x78,unaff_x19 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
    func_0x000107c3194c(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
    func_0x00010865f9c0(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
    return;
  }
  return;
}



/* Entry: 1005f7494; end: 1005f74b7;  */

undefined8 FUN_1005f7494(undefined8 param_1)

{
  FUN_1005f746c();
  return param_1;
}



/* Entry: 1005f74b8; end: 1005f74d3;  */

void FUN_1005f74b8(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f74d4; end: 1005f7753;  */

void FUN_1005f74d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char cVar9;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar7 = param_1 + 7;
  puVar1 = param_1 + 8;
  puVar2 = param_1 + 9;
  uVar3 = (long)param_1 + 0x52;
  puVar4 = param_1 + 2;
  if (*(byte *)(param_1 + 10) == 2) {
    cVar9 = '\0';
  }
  else {
    if ((*(byte *)(param_1 + 10) & 3) == 0) {
      func_0x0001005efcb8((long)param_1 + 0x51);
      *puVar7 = param_1[6];
      func_0x0001005efcc8(puVar7);
      *(undefined1 *)(param_1 + 10) = 1;
      puVar5 = param_1;
      FUN_1005efd24();
      ppuVar6 = &puStack_68;
      puStack_68 = puVar5;
      FUN_1005efd6c(ppuVar6);
      puVar5 = puVar7;
      func_0x0001005efe18(puVar7,ppuVar6);
      if (((ulong)puVar5 & 1) != 0) {
        cVar9 = -1;
        goto LAB_1005f75a4;
      }
    }
    else {
      cVar9 = '\0';
LAB_1005f75a4:
      if (cVar9 != '\0') {
        return;
      }
    }
    FUN_1005f7754(puVar7);
    FUN_1005f7764(puVar2,param_1 + 4);
    FUN_1005f89e0(puVar1,puVar2);
    puVar7 = puVar1;
    FUN_1005f8a24();
    if (((ulong)puVar7 & 1) != 0) goto LAB_1005f7648;
    *(undefined1 *)(param_1 + 10) = 2;
    puVar7 = param_1;
    FUN_1005efd24();
    ppuVar6 = &puStack_60;
    puStack_60 = puVar7;
    FUN_1005efd6c(ppuVar6);
    puVar7 = puVar1;
    FUN_1005f8b14(puVar1,ppuVar6);
    if (((ulong)puVar7 & 1) == 0) goto LAB_1005f7648;
    cVar9 = -1;
  }
  if (cVar9 != '\0') {
    return;
  }
LAB_1005f7648:
  FUN_1005f9618(puVar1);
  func_0x000107c2a1a8(puVar1);
  func_0x0001005eff74(puVar2);
  FUN_1005f94f0(puVar4);
  func_0x000107c2a1b0(puVar4);
  uVar8 = uVar3;
  func_0x0001005efca0();
  if ((uVar8 & 1) == 0) {
    *param_1 = 0;
    FUN_1005efd24();
    ppuVar6 = &puStack_58;
    puStack_58 = param_1;
    FUN_1005efd6c(ppuVar6);
    func_0x000107c2a190(uVar3,ppuVar6);
  }
  else {
    func_0x0001005efcb8(uVar3);
    func_0x000107c2a1b4(puVar4);
    func_0x0001005efed8(param_1 + 4);
    func_0x000107c60e14(param_1);
  }
  return;
}



/* Entry: 1005f7754; end: 1005f7763;  */

void FUN_1005f7754(void)

{
  return;
}



/* Entry: 1005f7764; end: 1005f79d7;  */

void FUN_1005f7764(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar5 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *puVar5 = &UNK_1088b3b48;
  puVar5[1] = &UNK_1088b3d44;
  uVar9 = (long)puVar5 + 0x39;
  puVar1 = puVar5 + 4;
  puVar2 = puVar5 + 5;
  uVar3 = (long)puVar5 + 0x3a;
  puVar4 = puVar5 + 2;
  puVar5[6] = param_2;
  FUN_1005efc5c(puVar4);
  FUN_10054f4ac(param_1,puVar4);
  FUN_1005efc90(puVar4);
  uVar6 = uVar9;
  func_0x0001005efca0();
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 7) = 0;
    FUN_1005efd24();
    ppuVar8 = &puStack_68;
    puStack_68 = puVar5;
    FUN_1005efd6c(ppuVar8);
    func_0x000107c2a190(uVar9,ppuVar8);
  }
  else {
    func_0x0001005efcb8(uVar9);
    FUN_1005f79d8(puVar2,puVar5[6]);
    FUN_1005f89e0(puVar1,puVar2);
    puVar7 = puVar1;
    FUN_1005f8a24();
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined1 *)(puVar5 + 7) = 1;
      puVar7 = puVar5;
      FUN_1005efd24();
      ppuVar8 = &puStack_60;
      puStack_60 = puVar7;
      FUN_1005efd6c(ppuVar8);
      puVar7 = puVar1;
      FUN_1005f8b14(puVar1,ppuVar8);
      if (((ulong)puVar7 & 1) != 0) {
        return;
      }
    }
    FUN_1005f9618(puVar1);
    func_0x000107c2a1a8(puVar1);
    func_0x0001005eff74(puVar2);
    FUN_1005f94f0(puVar4);
    func_0x000107c2a1b0(puVar4);
    uVar9 = uVar3;
    func_0x0001005efca0();
    if ((uVar9 & 1) == 0) {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 7) = 2;
      FUN_1005efd24();
      ppuVar8 = &puStack_58;
      puStack_58 = puVar5;
      FUN_1005efd6c(ppuVar8);
      func_0x000107c2a190(uVar3,ppuVar8);
    }
    else {
      func_0x0001005efcb8(uVar3);
      func_0x000107c2a1b4(puVar4);
      func_0x000107c60e14(puVar5);
    }
  }
  return;
}



/* Entry: 1005f79d8; end: 1005f8257;  */

void FUN_1005f79d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_2d8 [376];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [3];
  
  uVar19 = *param_2;
  puVar9 = (undefined8 *)0x130;
  puStack_160 = param_2;
  uStack_158 = param_1;
  func_0x000107c60e20();
  *puVar9 = &UNK_1088b3180;
  puVar9[1] = &UNK_1088b39c8;
  puVar1 = puVar9 + 0x17;
  puVar2 = puVar9 + 0x14;
  uVar16 = (long)puVar9 + 0x121;
  puVar3 = puVar9 + 10;
  puVar13 = puVar9 + 0x1c;
  puVar14 = puVar9 + 0x1d;
  puVar15 = puVar9 + 0x1f;
  puVar4 = puVar9 + 0x20;
  puVar5 = puVar9 + 0x21;
  puVar6 = puVar9 + 0x22;
  uVar7 = (long)puVar9 + 0x122;
  puVar8 = puVar9 + 2;
  puVar9[0x23] = uVar19;
  FUN_1005efc5c(puVar8);
  FUN_10054f4ac(param_1,puVar8);
  FUN_1005efc90(puVar8);
  uVar10 = uVar16;
  func_0x0001005efca0();
  if ((uVar10 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x24) = 0;
    FUN_1005efd24();
    ppuVar12 = &puStack_98;
    puStack_98 = puVar9;
    FUN_1005efd6c(ppuVar12);
    func_0x000107c2a190(uVar16,ppuVar12);
  }
  else {
    func_0x0001005efcb8(uVar16);
    lVar18 = puVar9[0x23];
    func_0x0001005f83ac(puVar3);
    puVar9[0x1e] = *(undefined8 *)(lVar18 + 0x158);
    FUN_1005f83e0(puVar14,lVar18 + 0x80,puVar9[0x1e]);
    FUN_1005f89e0(puVar13,puVar14);
    puVar11 = puVar13;
    FUN_1005f8a24();
    if (((ulong)puVar11 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x24) = 1;
      puVar11 = puVar9;
      FUN_1005efd24();
      ppuVar12 = &puStack_90;
      puStack_90 = puVar11;
      FUN_1005efd6c(ppuVar12);
      puVar11 = puVar13;
      FUN_1005f8b14(puVar13,ppuVar12);
      if (((ulong)puVar11 & 1) != 0) {
        return;
      }
    }
    FUN_1005f9618(puVar13);
    func_0x000107c2a1a8(puVar13);
    func_0x0001005eff74(puVar14);
    if ((*(byte *)(puVar9[0x23] + 0x150) & 1) != 0) {
      (**(code **)(*(long *)puVar9[0x23] + 0x18))(puVar4);
      FUN_1005f89e0(puVar15,puVar4);
      puVar13 = puVar15;
      FUN_1005f8a24();
      if (((ulong)puVar13 & 1) == 0) {
        *(undefined1 *)(puVar9 + 0x24) = 2;
        puVar13 = puVar9;
        FUN_1005efd24();
        ppuVar12 = &puStack_88;
        puStack_88 = puVar13;
        FUN_1005efd6c(ppuVar12);
        puVar13 = puVar15;
        FUN_1005f8b14(puVar15,ppuVar12);
        if (((ulong)puVar13 & 1) != 0) {
          return;
        }
      }
      FUN_1005f9618(puVar15);
      func_0x000107c2a1a8(puVar15);
      func_0x0001005eff74(puVar4);
    }
    func_0x000107c2a22c(puVar6,puVar9[0x23]);
    FUN_1005f89e0(puVar5,puVar6);
    puVar13 = puVar5;
    FUN_1005f8a24();
    if (((ulong)puVar13 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x24) = 3;
      puVar13 = puVar9;
      FUN_1005efd24();
      ppuVar12 = &puStack_80;
      puStack_80 = puVar13;
      FUN_1005efd6c(ppuVar12);
      puVar13 = puVar5;
      FUN_1005f8b14(puVar5,ppuVar12);
      if (((ulong)puVar13 & 1) != 0) {
        return;
      }
    }
    FUN_1005f9618(puVar5);
    func_0x000107c2a1a8(puVar5);
    func_0x0001005eff74(puVar6);
    puVar13 = puVar3;
    func_0x000107c2a250();
    if (((ulong)puVar13 & 1) != 0) {
      puVar13 = puVar3;
      func_0x000107c2a254();
      puVar14 = puVar3;
      func_0x000107c2a254();
      puVar15 = puVar3;
      func_0x000107c2a254();
      puVar9[0x16] = auStack_2d8;
      *puVar1 = &UNK_10f4ea0b1;
      puVar9[0x18] = puVar13;
      puVar9[0x19] = puVar14 + 6;
      puVar9[0x1a] = puVar15 + 3;
      uVar17 = *puVar1;
      func_0x000107c2a25c(puVar9 + 4,uVar17,puVar9[0x18],puVar9[0x19],puVar9[0x1a]);
      puVar9[0x1b] = puVar9 + 4;
      uVar19 = *puVar1;
      FUN_1003a91d4();
      puVar9[0x12] = uVar19;
      puVar9[0x13] = uVar17;
      uStack_d0 = puVar9[0x1b];
      puStack_c8 = puVar2;
      uStack_c0 = uStack_d0;
      puStack_b8 = puVar2;
      uStack_b0 = uStack_d0;
      puStack_a8 = puVar2;
      uStack_a0 = uStack_d0;
      func_0x000107c2a224(puVar2,0xd1d,uStack_d0);
      FUN_1003a9204(auStack_2d8,puVar9[0x12],puVar9[0x13],*puVar2,puVar9[0x15]);
      (**(code **)(*(long *)puVar9[0x23] + 0x20))((long *)puVar9[0x23],auStack_2d8);
      func_0x000107c60c9c(auStack_2d8);
    }
    func_0x000107c2a258(puVar3);
    FUN_1005f94f0(puVar8);
    func_0x000107c2a1b0(puVar8);
    uVar16 = uVar7;
    func_0x0001005efca0();
    if ((uVar16 & 1) == 0) {
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 0x24) = 4;
      FUN_1005efd24();
      ppuVar12 = apuStack_78;
      apuStack_78[0] = puVar9;
      FUN_1005efd6c(ppuVar12);
      func_0x000107c2a190(uVar7,ppuVar12);
    }
    else {
      func_0x0001005efcb8(uVar7);
      func_0x000107c2a1b4(puVar8);
      func_0x000107c60e14(puVar9);
    }
  }
  return;
}



/* Entry: 1005f8258; end: 1005f8273;  */

void FUN_1005f8258(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 1005f8274; end: 1005f83df;  */

undefined8 FUN_1005f8274(undefined8 param_1)

{
  FUN_1005f8258(param_1);
  return param_1;
}



/* Entry: 1005f83e0; end: 1005f842b;  */

void FUN_1005f83e0(undefined8 param_1,long param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_100578fe4(auStack_28,*(undefined8 *)(param_2 + 0x10));
  FUN_1005f842c(param_1,param_2,auStack_28);
  func_0x0001005799c4();
  return;
}



/* Entry: 1005f842c; end: 1005f86b3;  */

void FUN_1005f842c(void)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar6;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_58 [24];
  
  func_0x000100579864();
  lVar4 = 0x48;
  func_0x000107c60e20();
  lVar8 = lVar4;
  FUN_1005f86b4(&UNK_10865bdec);
  *(long *)(lVar8 + 0x38) = unaff_x21;
  if (extraout_x8_00 != 0) {
    do {
      FUN_100579ba4();
    } while (extraout_w10 != 0);
  }
  FUN_10054f3f8(lVar4 + 0x10);
  FUN_10054f4ac(extraout_x8,lVar4 + 0x10);
  plVar5 = (long *)(unaff_x21 + 0x38);
  FUN_100579870(lVar4 + 0x30);
  func_0x0001005f86c8(*(undefined8 *)(lVar4 + 0x30));
  do {
    FUN_100579ba4();
  } while (extraout_w10_00 != 0);
  func_0x0001005ef7fc(*(undefined8 *)(lVar4 + 0x28));
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x40) = 0;
    lVar8 = *(long *)(lVar4 + 0x28);
    func_0x0001005f86d4();
    if (*plVar5 == 0) {
      FUN_10054ef74();
    }
    func_0x0001005f86e0();
    plVar6 = extraout_x8_01;
    do {
      if (*plVar6 == 0) {
        func_0x0001005f86ec();
        plVar6 = extraout_x8_03;
        uVar2 = extraout_w10_02;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000107c31d78();
        plVar6 = extraout_x8_02;
        uVar2 = extraout_w10_01;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001005f86fc();
        if ((bool)in_ZR) {
          func_0x000107c31d18();
          func_0x000107c31d0c();
          func_0x000107c31cfc();
          *(long **)(lVar8 + 0x90) = plVar5;
        }
        func_0x0001005f8710();
        goto LAB_1005f85f0;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar5 = (long *)(lVar4 + 0x28);
  FUN_10061a9e4();
  lVar8 = *plVar5;
  func_0x000107c31d44();
  func_0x000107c31d58();
  if (lVar8 == 0) {
    lVar8 = *(long *)(lVar4 + 0x38);
    func_0x000107c31d80();
    func_0x000107c60dec(auStack_58,&UNK_10f4afc25,lVar8 + 0x20);
    func_0x000107c288a0(plVar5,auStack_58);
    func_0x000107c31d38();
    func_0x000107c60e54(plVar5);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005f863c);
    (*pcVar3)();
  }
  func_0x0001005f86c8(*unaff_x20);
  do {
    FUN_100579ba4();
  } while (extraout_w10_03 != 0);
  func_0x0001005ef7fc(*(undefined8 *)(lVar4 + 0x28));
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x40) = 1;
    func_0x0001005f86d4();
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      FUN_10054ef74();
      lVar8 = *plVar5;
    }
    func_0x0001005f86e0();
    plVar6 = extraout_x8_04;
    do {
      if (*plVar6 == 0) {
        func_0x0001005f86ec();
        plVar6 = extraout_x8_06;
        uVar2 = extraout_w10_05;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x000107c31d78();
        plVar6 = extraout_x8_05;
        uVar2 = extraout_w10_04;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001005f86fc();
        if ((bool)in_ZR) {
          func_0x000107c31d18();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000107c31d04();
          *(undefined1 *)plVar5 = uVar1;
          func_0x000107c31d00(0);
        }
        func_0x000107c31d28();
        *(long *)(extraout_x8_07 + 0x20) = lVar8;
LAB_1005f85f0:
        func_0x0001005f8724();
        *extraout_x8_08 = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1005f9618(lVar4 + 0x28);
  func_0x000107c31d44();
  FUN_1005f94f0(lVar4 + 0x10);
  func_0x000107c31d3c();
  func_0x000107c31d8c();
  func_0x000107c31d48();
  return;
}



/* Entry: 1005f86b4; end: 1005f874f;  */

void FUN_1005f86b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_x9;
  undefined8 *unaff_x20;
  
  *param_2 = param_1;
  param_2[1] = in_x9;
  param_2[4] = *unaff_x20;
  return;
}



/* Entry: 1005f8750; end: 1005f8837;  */

long FUN_1005f8750(long *param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uStack_28;
  
  if (param_3 - 1U < 2) {
    do {
      uStack_28 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uStack_28 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else if (param_3 == 3) {
    do {
      uStack_28 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uStack_28 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else if (param_3 == 4) {
    do {
      uStack_28 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uStack_28 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else if (param_3 == 5) {
    do {
      uStack_28 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uStack_28 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    do {
      uStack_28 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uStack_28 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return uStack_28;
}



/* Entry: 1005f8838; end: 1005f88ef;  */

void FUN_1005f8838(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1005f8750(param_1,param_2,param_3);
  return;
}



/* Entry: 1005f88f0; end: 1005f89df;  */

undefined8 FUN_1005f88f0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001005f88a8(param_1,param_2);
  return param_1;
}



/* Entry: 1005f89e0; end: 1005f8a0b;  */

void FUN_1005f89e0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001005f89a4(param_1,param_2);
  return;
}



/* Entry: 1005f8a0c; end: 1005f8a23;  */

undefined8 FUN_1005f8a0c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005f8a24; end: 1005f8a4f;  */

uint FUN_1005f8a24(undefined8 param_1)

{
  uint uVar1;
  
  FUN_1005f8a0c(param_1);
  uVar1 = (uint)param_1;
  func_0x0001005f8ad8();
  return uVar1 & 1;
}



/* Entry: 1005f8a50; end: 1005f8aab;  */

undefined8 FUN_1005f8a50(undefined8 *param_1,int param_2)

{
  undefined8 uStack_18;
  
  if (param_2 - 1U < 2) {
    uStack_18 = *param_1;
  }
  else if (param_2 == 5) {
    uStack_18 = *param_1;
  }
  else {
    uStack_18 = *param_1;
  }
  return uStack_18;
}



/* Entry: 1005f8aac; end: 1005f8b13;  */

void FUN_1005f8aac(undefined8 param_1,undefined4 param_2)

{
  FUN_1005f8a50(param_1,param_2);
  return;
}



/* Entry: 1005f8b14; end: 1005f8b27;  */

/* WARNING: Removing unreachable block (ram,0x0001005f8b88) */

undefined1 FUN_1005f8b14(long *param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  byte *pbVar12;
  
  lVar5 = *param_1;
  ppuVar6 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)(&PTR___tlv_bootstrap_11340e278,param_1);
  puVar11 = *ppuVar6;
  if (puVar11 == (undefined *)0x0) {
    FUN_10054ef74();
    puVar11 = *ppuVar6;
  }
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar10 = *plVar1;
    if (lVar10 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pbVar12 = *(byte **)(lVar5 + 0x90);
        bVar2 = pbVar12[1];
        uVar9 = (ulong)bVar2;
        pbVar7 = pbVar12;
        if (bVar2 == *pbVar12) {
          uVar8 = (uint)bVar2 << 1;
          if (0x7f < uVar8) {
            uVar8 = 0x80;
          }
          pbVar7 = (byte *)(ulong)(uVar8 * 0x18 + 0x10);
          func_0x000107c610a0();
          uVar9 = 0;
          *pbVar7 = (byte)uVar8;
          pbVar7[1] = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          *(byte **)(pbVar12 + 8) = pbVar7;
          *(byte **)(lVar5 + 0x90) = pbVar7;
        }
        pbVar12 = pbVar7 + uVar9 * 0x18 + 0x10;
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        *(undefined8 *)(pbVar7 + uVar9 * 0x18 + 0x18) = param_2;
        *(undefined **)(pbVar7 + uVar9 * 0x18 + 0x20) = puVar11;
        *(char *)(*(long *)(lVar5 + 0x90) + 1) = *(char *)(*(long *)(lVar5 + 0x90) + 1) + '\x01';
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar10 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1005f8b28; end: 1005f8c3b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f8b88) */

undefined1 FUN_1005f8b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  byte *pbVar11;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  puVar10 = *ppuVar5;
  if (puVar10 == (undefined *)0x0) {
    FUN_10054ef74();
    puVar10 = *ppuVar5;
  }
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        pbVar11 = *(byte **)(param_1 + 0x90);
        bVar2 = pbVar11[1];
        uVar8 = (ulong)bVar2;
        pbVar6 = pbVar11;
        if (bVar2 == *pbVar11) {
          uVar7 = (uint)bVar2 << 1;
          if (0x7f < uVar7) {
            uVar7 = 0x80;
          }
          pbVar6 = (byte *)(ulong)(uVar7 * 0x18 + 0x10);
          func_0x000107c610a0();
          uVar8 = 0;
          *pbVar6 = (byte)uVar7;
          pbVar6[1] = 0;
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          *(byte **)(pbVar11 + 8) = pbVar6;
          *(byte **)(param_1 + 0x90) = pbVar6;
        }
        *(undefined8 *)(pbVar6 + uVar8 * 0x18 + 0x10) = param_3;
        *(undefined8 *)(pbVar6 + uVar8 * 0x18 + 0x18) = param_4;
        *(undefined **)(pbVar6 + uVar8 * 0x18 + 0x20) = puVar10;
        *(char *)(*(long *)(param_1 + 0x90) + 1) = *(char *)(*(long *)(param_1 + 0x90) + 1) + '\x01'
        ;
        *(undefined8 *)(param_1 + 0x10) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar9 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1005f8c3c; end: 1005f8c47;  */

void FUN_1005f8c3c(void)

{
  return;
}



/* Entry: 1005f8c48; end: 1005f8d2f;  */

void FUN_1005f8c48(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  FUN_1005f8c3c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1005f8d30();
    FUN_1005f8d4c();
    func_0x0001005f96b8();
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f96c8();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      FUN_10061e858();
      func_0x00010061de64();
      if (*param_1 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010061de14();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32fe4();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001005f96d8();
  func_0x0001005f96e0();
  func_0x0001005f96e8();
  func_0x0001005f9698();
  func_0x0001005f96a0();
  func_0x0001005f96f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005f8d30; end: 1005f8d4b;  */

long FUN_1005f8d30(void)

{
  long unaff_x19;
  
  return unaff_x19 + 0x20;
}



/* Entry: 1005f8d4c; end: 1005f8e47;  */

void FUN_1005f8d4c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x0001005f8d3c();
  plVar2 = param_1;
  FUN_1005f8e48(&UNK_108734d28);
  func_0x0001005f8e50();
  func_0x0001005f8e5c();
  FUN_1005f8e68();
  FUN_1005f95f0();
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9600();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010061debc();
    if (*plVar2 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010061de14();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c330a8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          func_0x000107c32ff8();
          func_0x000107c32fe4();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001005f9610();
  FUN_1005f9654();
  func_0x0001005f965c();
  FUN_1005f9698();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005f8e48; end: 1005f8e67;  */

undefined8 * FUN_1005f8e48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 in_x9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_2 = param_1;
  param_2[1] = in_x9;
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar1 + 4) = 4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[0x12] = puVar1 + 4;
  *puVar1 = &PTR_DAT_11087bc20;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ec98(&uStack_40);
  FUN_10054ebfc(&uStack_38);
  param_2[2] = puVar1;
  param_2[3] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return param_2 + 2;
}



/* Entry: 1005f8e68; end: 1005f8f17;  */

void FUN_1005f8e68(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *param_2;
  FUN_10054f3f8(auStack_68);
  FUN_10054f4ac(param_1,auStack_68);
  FUN_1004b4eb0(lVar1 + 0x188);
  FUN_1005f8f18(&uStack_50,*(undefined8 *)(lVar1 + 0xb0));
  *(undefined8 *)(lVar1 + 0x160) = uStack_50;
  *(undefined1 *)(lVar1 + 0x168) = uStack_48;
  *(undefined8 *)(lVar1 + 0x170) = uStack_40;
  *(undefined1 *)(lVar1 + 0x178) = uStack_38;
  FUN_1005f94f0(auStack_68);
  FUN_1005f95d0(auStack_68);
  return;
}



/* Entry: 1005f8f18; end: 1005f9003;  */

void FUN_1005f8f18(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [80];
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_98);
      func_0x000107c34370(auStack_b0);
      FUN_10054f908();
      func_0x000107c34504();
      func_0x000107c34394();
      func_0x000107c34654();
      func_0x0001005ed2d8();
      func_0x000107c34560();
    }
  }
  FUN_1005f90ac(auStack_80,*(long *)(unaff_x20 + 0x20) + 0x78e8);
  FUN_1005f9270(&uStack_e0,auStack_80);
  FUN_1005f93e8(auStack_80);
  if (cStack_c0 == '\x01') {
    unaff_x19[1] = uStack_d8;
    *unaff_x19 = uStack_e0;
    unaff_x19[3] = uStack_c8;
    unaff_x19[2] = uStack_d0;
  }
  else {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 1) = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  return;
}



/* Entry: 1005f9004; end: 1005f90ab;  */

long FUN_1005f9004(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f9078;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f9078:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f9004();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f911c();
  return param_1;
}



/* Entry: 1005f90ac; end: 1005f90cf;  */

void FUN_1005f90ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f9004();
  func_0x0001005ec788(param_1);
  FUN_1005f911c(param_2,auStack_28);
  return;
}



/* Entry: 1005f90d0; end: 1005f911b;  */

void FUN_1005f90d0(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f911c(param_1,auStack_28);
  return;
}



/* Entry: 1005f911c; end: 1005f9167;  */

void FUN_1005f911c(void)

{
  FUN_1005ec7e4();
  func_0x0001005f9140();
  return;
}



/* Entry: 1005f9168; end: 1005f91e7;  */

void FUN_1005f9168(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  iVar2 = (int)param_1;
  func_0x0001005eddc0();
  if ((CONCAT44(uVar3,iVar2) == 0) || (FUN_10054c3a4(), iVar2 == 0)) {
    if (*(char *)(unaff_x19 + 0x28) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x28) = 0;
    }
  }
  else {
    FUN_1005ee9a8();
    uVar4 = 0;
    FUN_1005f9230();
    uVar1 = CONCAT44(uVar3,iVar2);
    uVar5 = uVar4;
    func_0x0001005ee9c4();
    FUN_1005f9230();
    *(undefined8 *)(unaff_x19 + 8) = uVar1;
    *(undefined1 *)(unaff_x19 + 0x10) = uVar4;
    *(ulong *)(unaff_x19 + 0x18) = CONCAT44(uVar3,iVar2);
    *(undefined1 *)(unaff_x19 + 0x20) = uVar5;
    if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
    }
  }
  return;
}



/* Entry: 1005f91e8; end: 1005f922f;  */

void FUN_1005f91e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c61360();
  if ((int)uVar1 != 5) {
    FUN_10054c8f4(param_1,param_2);
  }
  return;
}



/* Entry: 1005f9230; end: 1005f9247;  */

void FUN_1005f9230(void)

{
  FUN_1005f91e8();
  return;
}



/* Entry: 1005f9248; end: 1005f926f;  */

void FUN_1005f9248(void)

{
  return;
}



/* Entry: 1005f9270; end: 1005f9373;  */

void FUN_1005f9270(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 extraout_w8;
  undefined1 uVar2;
  long extraout_x9;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_50 [5];
  undefined1 uStack_28;
  
  puVar1 = auStack_50;
  func_0x0001005f9258(auStack_50);
  FUN_1005f9374(uStack_28);
  if ((bool)in_ZR && extraout_x9 != 0) {
    FUN_1005f9380();
    uVar3 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar2 = 1;
  }
  else {
    func_0x000107c34608();
    uVar2 = extraout_w8;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 1005f9374; end: 1005f937f;  */

void FUN_1005f9374(void)

{
  return;
}



/* Entry: 1005f9380; end: 1005f93cf;  */

long FUN_1005f9380(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x000107c341f0();
    func_0x000107c341ec();
    func_0x000107c34220();
    func_0x0001005eb600();
    FUN_100678270();
  }
  return param_1 + 8;
}



/* Entry: 1005f93d0; end: 1005f93e7;  */

void FUN_1005f93d0(void)

{
  return;
}



/* Entry: 1005f93e8; end: 1005f9427;  */

undefined8 FUN_1005f93e8(undefined8 param_1)

{
  func_0x0001005f93dc();
  FUN_1005f9428();
  FUN_1005ed1e8();
  FUN_10054cac4();
  return param_1;
}



/* Entry: 1005f9428; end: 1005f9447;  */

void FUN_1005f9428(void)

{
  func_0x0001005f5cdc();
  FUN_1005f94a0();
  return;
}



/* Entry: 1005f9448; end: 1005f949f;  */

void FUN_1005f9448(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == *(char *)(param_2 + 4)) {
    if (cVar1 != '\0') {
      uVar2 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar2;
      uVar2 = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      param_1[2] = uVar2;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



/* Entry: 1005f94a0; end: 1005f94c3;  */

undefined8 FUN_1005f94a0(undefined8 param_1)

{
  FUN_1005f9448();
  return param_1;
}



/* Entry: 1005f94c4; end: 1005f94df;  */

void FUN_1005f94c4(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f94e0; end: 1005f94ef;  */

void FUN_1005f94e0(void)

{
  return;
}



/* Entry: 1005f94f0; end: 1005f951f;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1005f94f0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1005ed54c(*puVar5,puVar5);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1005f9520; end: 1005f95cf;  */

void FUN_1005f9520(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
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
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 1005f95d0; end: 1005f95ef;  */

void FUN_1005f95d0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010054ee70();
  plVar5 = (long *)*unaff_x19;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
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
  return;
}



/* Entry: 1005f95f0; end: 1005f9617;  */

void FUN_1005f95f0(void)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1005f9618; end: 1005f9653;  */

void FUN_1005f9618(undefined8 *param_1)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x0001005ef7fc(*param_1);
  if ((extraout_w8 >> 5 & 1) == 0) {
    return;
  }
  func_0x000107c31d68(*param_1);
  func_0x000107c31db8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005f964c);
  (*pcVar1)();
}



/* Entry: 1005f9654; end: 1005f9663;  */

undefined8 * FUN_1005f9654(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 1005f9664; end: 1005f9697;  */

void FUN_1005f9664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005f9698; end: 1005f9727;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1005f9698(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_1005ed54c(*puVar5,puVar5);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1005f9728; end: 1005f9827;  */

void FUN_1005f9728(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x0001005f971c();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_1005f9828(unaff_x19 + 0x40);
    func_0x0001005fbc9c();
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9b68(*(undefined8 *)(unaff_x19 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010061ded4();
      func_0x00010061de64();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010061de14();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32fe4();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005fbafc(unaff_x19 + 0x38);
  func_0x0001005fbcac();
  func_0x0001005f96e8();
  FUN_1005fbd40();
  func_0x0001005f96a0();
  FUN_1005f049c(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005f9828; end: 1005f9927;  */

void FUN_1005f9828(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x0001005f8d3c();
  plVar2 = param_1;
  FUN_1005f9928(&UNK_108735684);
  func_0x0001005f9930();
  func_0x0001005f8e5c();
  FUN_1005f9948();
  FUN_1005f95f0();
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9600();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010061debc();
    if (*plVar2 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010061de14();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c330a8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          func_0x000107c32ff8();
          func_0x000107c32fe4();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005fbc94();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005f9928; end: 1005f9947;  */

undefined8 * FUN_1005f9928(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_x9;
  undefined1 auStack_30 [16];
  
  *param_2 = param_1;
  param_2[1] = in_x9;
  FUN_1005f035c(auStack_30);
  FUN_1005f0404();
  return param_2 + 2;
}



/* Entry: 1005f9948; end: 1005f9b5f;  */

void FUN_1005f9948(long *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar3;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar4;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  func_0x0001005f993c();
  lVar7 = *param_1;
  plVar3 = (long *)0x40;
  func_0x000107c60e20();
  *plVar3 = (long)&UNK_10873553c;
  plVar3[1] = (long)&UNK_108735644;
  plVar3[6] = lVar7;
  plVar8 = plVar3;
  FUN_1005f9b60();
  func_0x0001005f9930();
  plVar6 = plVar3 + 4;
  *plVar6 = *(long *)(unaff_x20 + 8);
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9b68(*plVar6);
  func_0x0001005f9b74();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar3 + 7) = 0;
    lVar7 = plVar3[4];
    func_0x00010061ddfc();
    lVar9 = *plVar8;
    if (lVar9 == 0) {
      FUN_10054ef74();
      lVar9 = *plVar8;
    }
    func_0x000107c331d8();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x00010061de14();
        plVar4 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x000107c330a8();
        plVar4 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x000107c33050();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000107c330b0();
          func_0x000107c33244();
          *(undefined1 *)plVar8 = uVar1;
          func_0x000107c33018(0);
          *(long **)(lVar7 + 0x90) = plVar8;
        }
        func_0x000107c3304c();
        *(long *)(extraout_x8_05 + 0x20) = lVar9;
        goto LAB_1005f0260;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1005f9618(plVar6);
  plVar8 = (long *)plVar3[6];
  func_0x0001005f9b80();
  FUN_1005f9ba0(plVar3 + 5);
  *plVar6 = plVar3[5];
  do {
    func_0x0001005f0280();
  } while (extraout_w10_02 != 0);
  func_0x0001005f9b68(*plVar6);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar3 + 7) = 1;
    lVar7 = plVar3[4];
    func_0x00010061ddfc();
    lVar9 = *plVar8;
    if (lVar9 == 0) {
      FUN_10054ef74();
      lVar9 = *plVar8;
    }
    func_0x000107c331d8();
    plVar4 = extraout_x8_02;
    do {
      if (*plVar4 == 0) {
        func_0x00010061de14();
        plVar4 = extraout_x8_04;
        uVar2 = extraout_w10_04;
        uVar5 = extraout_w11_02;
      }
      else {
        func_0x000107c330a8();
        plVar4 = extraout_x8_03;
        uVar2 = extraout_w10_03;
        uVar5 = extraout_w11_01;
      }
      if ((uVar5 & 1) != 0) {
        func_0x000107c33050();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          func_0x000107c32ff8();
          func_0x000107c32ff4();
          *(long **)(lVar7 + 0x90) = plVar8;
        }
        func_0x000107c3304c();
        *(long *)(extraout_x8_06 + 0x20) = lVar9;
LAB_1005f0260:
        func_0x000107c3302c(*(undefined8 *)(lVar7 + 0x90));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1005fbafc(plVar6);
  FUN_1005fbb50();
  func_0x0001005f9b80();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar3);
  return;
}



/* Entry: 1005f9b60; end: 1005f9b9f;  */

long FUN_1005f9b60(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1005f035c(auStack_30);
  FUN_1005f0404();
  return param_1 + 0x10;
}



/* Entry: 1005f9ba0; end: 1005fa13b;  */

void FUN_1005f9ba0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long lVar8;
  code *extraout_x8_09;
  uint extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *unaff_x20;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x25;
  long unaff_x27;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *aplStack_3b0 [3];
  undefined1 auStack_398 [280];
  undefined1 auStack_280 [24];
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e4;
  undefined4 auStack_1e0 [6];
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b4;
  byte bStack_14;
  char cStack_10;
  
  func_0x0001005f9b88();
  func_0x0001005f993c();
  puVar6 = (undefined8 *)0x898;
  func_0x000107c60e20();
  *puVar6 = &UNK_10873506c;
  puVar6[1] = &UNK_108735514;
  puVar6[0x111] = unaff_x20;
  func_0x0001005f9b60();
  func_0x0001005f9930();
  uVar5 = (char)unaff_x20[0x2d] == '\x01';
  if ((bool)uVar5) {
    (**(code **)(*(long *)unaff_x20[0x1c] + 0x20))();
    func_0x0001005fb820();
    func_0x0001005fb844(auStack_1e0,400);
    plVar7 = unaff_x20 + 0x31;
    FUN_1005e3518();
    aplStack_3b0[0] = plVar7;
    func_0x0001005fb904();
    func_0x0001005fb910();
    func_0x0001005fb928();
    func_0x0001005fb930();
  }
  else {
    puVar1 = puVar6 + 0x82;
    FUN_1005fd790(puVar1);
    puVar2 = puVar6 + 0x104;
    func_0x000107c330ec(*puVar1);
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9600();
    ppuVar10 = &PTR___tlv_bootstrap_11340e278;
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x112) = 0;
      func_0x000107c331cc();
      if (*unaff_x20 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar7 = extraout_x8;
      do {
        if (*plVar7 == 0) {
          func_0x00010061de14();
          plVar7 = extraout_x8_01;
          uVar3 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          plVar7 = extraout_x8_00;
          uVar3 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) goto LAB_1005f9f78;
      } while ((uVar3 >> 1 & 1) == 0);
    }
    func_0x0001005f9610();
    FUN_1005f9654();
    func_0x0001005fdc9c();
    func_0x0001005fdcac();
    (**(code **)(extraout_x8_02 + 0x40))(puVar1);
    func_0x000107c330ec(*puVar1);
    do {
      func_0x0001005f0280();
    } while (extraout_w10_02 != 0);
    func_0x0001005f9600();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x112) = 1;
      func_0x000107c331cc();
      if (*unaff_x20 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar7 = extraout_x8_03;
      do {
        if (*plVar7 == 0) {
          func_0x00010061de14();
          plVar7 = extraout_x8_05;
          uVar3 = extraout_w10_04;
          uVar9 = extraout_w11_02;
        }
        else {
          func_0x000107c330a8();
          plVar7 = extraout_x8_04;
          uVar3 = extraout_w10_03;
          uVar9 = extraout_w11_01;
        }
        if ((uVar9 & 1) != 0) {
LAB_1005f9f78:
          func_0x00010061de24();
          if ((bool)uVar5) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32fe4();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
    func_0x000107c33138(puVar6[4]);
    if ((extraout_w9 >> 5 & 1) != 0) {
      func_0x000107c33104(auStack_1e0);
      func_0x000107c60e08(auStack_1e0);
LAB_1005f9fdc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005f9fe0);
      (*pcVar4)();
    }
    func_0x000107c2973c(puVar2,puVar6[4] + 0x98);
    FUN_1005f9654();
    func_0x0001005fdc9c();
    if (*(int *)(puVar6 + 0x10a) == 0) {
      auStack_1e0[0] = *(undefined4 *)puVar2;
      func_0x000107c297e0();
      func_0x000107c33250();
    }
    else {
      func_0x000107c3326c();
      FUN_10002b838(puVar6 + 0x10b,&UNK_10f4b2a25);
      func_0x000107c331c4();
      func_0x000107c331c8();
      if (*(int *)(puVar6 + 0x10a) != 1) {
        func_0x00010563ab98();
        goto LAB_1005f9fdc;
      }
      func_0x000107c3318c();
      func_0x000107c3316c();
      do {
        func_0x000107c33188();
        FUN_100696384(puVar6 + 0x10e);
        func_0x000107c33230(*(undefined8 *)(unaff_x25 + 0x120));
        if ((*(byte *)(puVar6 + 0x81) & 1) == 0) {
          func_0x000107c33214();
          func_0x000107c3313c();
          uVar11 = *(undefined8 *)(lStack_3b8 + 0xb0);
          func_0x000107c331b0(auStack_1e0);
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          func_0x000107c29f5c(uVar11,auStack_1e0);
          FUN_100100fec(auStack_1e0);
          func_0x000107c33154(auStack_1e0,*(undefined8 *)(lStack_3b8 + 0xb0),puVar6 + 0x10e);
          uVar5 = cStack_10 == '\x01';
          if ((!(bool)uVar5) || ((bStack_14 & 1) != 0)) {
            func_0x000107c331b0(aplStack_3b0);
            func_0x000107c331b8();
            lVar8 = unaff_x27;
            if (!(bool)uVar5) {
              lVar8 = extraout_x8_06;
            }
            FUN_100694450(auStack_398,lVar8);
            func_0x000107c330f0(auStack_280);
            func_0x000107c331b8();
            lVar8 = unaff_x27;
            if (!(bool)uVar5) {
              lVar8 = extraout_x8_07;
            }
            uStack_268 = *(undefined8 *)(lVar8 + 0xe8);
            uStack_260 = 1;
            uStack_240 = 0;
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_258 = 0;
            uStack_250 = 0;
            uStack_248 = 0;
            uStack_228 = 1;
            uStack_224 = 2;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_1e4 = 0;
            func_0x000107c331a4();
            func_0x000107c29f70();
            func_0x000107c331fc();
          }
          if ((*(int *)(puVar6 + 0xe5) == 2) && (*(char *)(unaff_x25 + 0x48) == '\x01')) {
            func_0x000107c331b4(*(undefined8 *)(unaff_x25 + 0x110));
          }
          else {
            func_0x000107c331a8();
            func_0x000107c29fd8();
          }
          FUN_10066b97c(auStack_1e0);
          FUN_100657324(uStack_3c0);
        }
        func_0x000107c331ec();
        func_0x000107c331ac();
        ppuVar10 = ppuVar10 + -1;
      } while (ppuVar10 != (undefined **)0x0);
      FUN_1005fcfac(*(undefined8 *)(puVar6[0x111] + 0xd0));
      (*extraout_x8_08)();
      func_0x000107c331a8();
      func_0x000107c2a044();
      FUN_10054cbac(puVar6 + 0xfc);
      lVar8 = puVar6[0x111];
      if ((*(byte *)(lVar8 + 0x168) & 1) == 0) {
        *(undefined1 *)(lVar8 + 0x168) = 1;
        lVar8 = puVar6[0x111];
      }
      func_0x000107c33294(lVar8);
      (*extraout_x8_09)();
      func_0x0001005fb820();
      func_0x0001005fb844(auStack_1e0,0x191);
      plVar7 = (long *)(puVar6[0x111] + 0x188);
      FUN_1005e3518();
      aplStack_3b0[0] = plVar7;
      func_0x0001005fb904();
      func_0x0001005fb910();
      func_0x0001005fb928();
      func_0x000107c331c0();
      func_0x0001005fb930();
    }
    func_0x000107c29740(puVar2);
  }
  func_0x0001005f96a0();
  func_0x0001005fbadc();
  return;
}



/* Entry: 1005fa13c; end: 1005fa143;  */

void FUN_1005fa13c(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  code *extraout_x9;
  long unaff_x19;
  long lVar6;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  undefined1 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  param_1 = param_1 + -0x88;
  FUN_1005fa1bc(param_1);
  FUN_1005fa4a0();
  FUN_1005facd8();
  (*extraout_x9)(extraout_x8,param_1 + 0x78,1);
  ppuStack_d0 = (undefined8 ***)0x0;
  ppuStack_c8 = (undefined8 ***)0x0;
  ppuStack_c0 = (undefined8 ***)0x0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_98 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_a0 = (undefined1 *)&ppuStack_d0;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 200;
    if (0x147ae147ae147ae < uVar5) {
      puStack_a0 = (undefined1 *)&ppuStack_d0;
      func_0x000107c28c64();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005fa38c);
      (*pcVar3)();
    }
    pppuVar4 = &ppuStack_c0;
    puStack_a0 = (undefined1 *)&ppuStack_d0;
    func_0x000107c28c68();
    ppuStack_c0 = pppuVar4 + uVar5 * 0x19;
    ppuStack_88 = &ppuStack_70;
    ppuStack_80 = &ppuStack_68;
    uStack_78 = 0;
    ppuStack_d0 = pppuVar4;
    ppuStack_c8 = pppuVar4;
    ppuStack_90 = &ppuStack_c0;
    ppuStack_70 = pppuVar4;
    for (; ppuStack_68 = pppuVar4, lVar6 != lVar1; lVar6 = lVar6 + 200) {
      FUN_10054f8dc(pppuVar4,lVar6);
      FUN_10028af84(pppuVar4 + 3,lVar6 + 0x18);
      func_0x0001005fad5c(pppuVar4 + 7,lVar6 + 0x38);
      *(undefined1 *)(pppuVar4 + 10) = 0;
      *(undefined1 *)(pppuVar4 + 0xd) = 0;
      if (*(char *)(lVar6 + 0x68) == '\x01') {
        func_0x000107c28c6c(pppuVar4 + 10,lVar6 + 0x50);
        *(undefined1 *)(pppuVar4 + 0xd) = 1;
      }
      FUN_10066dd94(pppuVar4 + 0xe,lVar6 + 0x70);
      pppuVar4 = (undefined8 ***)(ppuStack_68 + 0x19);
    }
    uStack_78 = 1;
    func_0x000107c28c70(&ppuStack_90);
    ppuStack_c8 = pppuVar4;
  }
  uStack_98 = 1;
  func_0x0001005fad34(&puStack_a0);
  func_0x0001005fad5c(auStack_b8,param_3);
  FUN_1005fa4a0(unaff_x19 + 0xe0,10);
  FUN_1005facd8();
  FUN_1005fae10();
  FUN_1005fae38(unaff_x19 + 0x1b8,&ppuStack_d0);
  func_0x0001005fb590(&ppuStack_d0);
  return;
}



/* Entry: 1005fa144; end: 1005fa1bb;  */

void FUN_1005fa144(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&uStack_38,&uStack_50);
  func_0x0001005fb56c(&uStack_50);
  FUN_1005fb778(&uStack_38);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



/* Entry: 1005fa1bc; end: 1005fa1c7;  */

long FUN_1005fa1bc(long param_1)

{
  return param_1 + 0xe0;
}



/* Entry: 1005fa1c8; end: 1005fa403;  */

void FUN_1005fa1c8(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  code *extraout_x9;
  long unaff_x19;
  long lVar6;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  undefined1 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  FUN_1005fa1bc();
  FUN_1005fa4a0();
  FUN_1005facd8();
  (*extraout_x9)(extraout_x8,param_1 + 0x78,1);
  ppuStack_d0 = (undefined8 ***)0x0;
  ppuStack_c8 = (undefined8 ***)0x0;
  ppuStack_c0 = (undefined8 ***)0x0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_98 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_a0 = (undefined1 *)&ppuStack_d0;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 200;
    if (0x147ae147ae147ae < uVar5) {
      puStack_a0 = (undefined1 *)&ppuStack_d0;
      func_0x000107c28c64();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005fa38c);
      (*pcVar3)();
    }
    pppuVar4 = &ppuStack_c0;
    puStack_a0 = (undefined1 *)&ppuStack_d0;
    func_0x000107c28c68();
    ppuStack_c0 = pppuVar4 + uVar5 * 0x19;
    ppuStack_88 = &ppuStack_70;
    ppuStack_80 = &ppuStack_68;
    uStack_78 = 0;
    ppuStack_d0 = pppuVar4;
    ppuStack_c8 = pppuVar4;
    ppuStack_90 = &ppuStack_c0;
    ppuStack_70 = pppuVar4;
    for (; ppuStack_68 = pppuVar4, lVar6 != lVar1; lVar6 = lVar6 + 200) {
      FUN_10054f8dc(pppuVar4,lVar6);
      FUN_10028af84(pppuVar4 + 3,lVar6 + 0x18);
      func_0x0001005fad5c(pppuVar4 + 7,lVar6 + 0x38);
      *(undefined1 *)(pppuVar4 + 10) = 0;
      *(undefined1 *)(pppuVar4 + 0xd) = 0;
      if (*(char *)(lVar6 + 0x68) == '\x01') {
        func_0x000107c28c6c(pppuVar4 + 10,lVar6 + 0x50);
        *(undefined1 *)(pppuVar4 + 0xd) = 1;
      }
      FUN_10066dd94(pppuVar4 + 0xe,lVar6 + 0x70);
      pppuVar4 = (undefined8 ***)(ppuStack_68 + 0x19);
    }
    uStack_78 = 1;
    func_0x000107c28c70(&ppuStack_90);
    ppuStack_c8 = pppuVar4;
  }
  uStack_98 = 1;
  func_0x0001005fad34(&puStack_a0);
  func_0x0001005fad5c(auStack_b8,param_3);
  FUN_1005fa4a0(unaff_x19 + 0xe0,10);
  FUN_1005facd8();
  FUN_1005fae10();
  FUN_1005fae38(unaff_x19 + 0x1b8,&ppuStack_d0);
  func_0x0001005fb590(&ppuStack_d0);
  return;
}



/* Entry: 1005fa404; end: 1005fa49f;  */

long FUN_1005fa404(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1005fa4a0; end: 1005fa57f;  */

long FUN_1005fa4a0(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 auStack_1b8 [2];
  undefined1 auStack_1b0 [176];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [180];
  undefined4 uStack_34;
  
  lVar4 = param_1;
  uStack_34 = param_2;
  FUN_1005fa404(param_1,&uStack_34);
  if (lVar4 == 0) {
    uStack_f8 = *(undefined8 *)(param_1 + 0x90);
    uStack_100 = *(undefined8 *)(param_1 + 0x88);
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1005fa590(auStack_e8,uStack_34,&uStack_100);
    FUN_100550638(&uStack_100);
    auStack_1b8[0] = uStack_34;
    func_0x0001005fa7d8(auStack_1b0,auStack_e8);
    func_0x0001005fac20(param_1,auStack_1b8);
    func_0x0001005fac98(auStack_1b0);
    func_0x0001005fac98(auStack_e8);
    lVar4 = param_1;
  }
  return lVar4 + 0x18;
}



/* Entry: 1005fa580; end: 1005fa58f;  */

void FUN_1005fa580(void)

{
  return;
}



/* Entry: 1005fa590; end: 1005fa6a3;  */

long FUN_1005fa590(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  
  FUN_1005fa580();
  uStack_38 = 0x6f;
  puVar1 = auStack_58;
  FUN_1005fa6a4(puVar1);
  lVar2 = param_1;
  func_0x0001005505a0(param_1,puVar1);
  func_0x0001005505dc();
  FUN_1005fa580();
  uStack_38 = 0x70;
  FUN_1005fa710();
  lVar3 = param_1 + 0x28;
  func_0x0001005505a0(lVar3,lVar2);
  func_0x0001005505dc();
  FUN_1005fa580();
  uStack_38 = 0x71;
  FUN_1005fa710();
  FUN_1005fa71c();
  lVar2 = param_1 + 0x50;
  func_0x0001005505a0(lVar2,lVar3);
  func_0x0001005505dc();
  FUN_1005fa580();
  uStack_38 = 0x71;
  FUN_1005fa710();
  FUN_1005fa71c();
  func_0x0001005505a0(param_1 + 0x78,lVar2);
  func_0x0001005505dc();
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0xa8) = param_3[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 1005fa6a4; end: 1005fa70f;  */

undefined8 FUN_1005fa6a4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  FUN_100550424(param_1,&UNK_10f4b1c82);
  if (param_2 - 2U < 0xd) {
    puVar1 = (&PTR_DAT_110a66bf0)[param_2 - 2U];
  }
  else {
    puVar1 = &DAT_10f4b1c93;
  }
  FUN_1005504ac(param_1,auStack_38,puVar1);
  func_0x000100550554();
  return param_1;
}



/* Entry: 1005fa710; end: 1005fa71b;  */

undefined1 * FUN_1005fa710(void)

{
  undefined *puVar1;
  int unaff_w21;
  undefined1 auStack_38 [24];
  
  FUN_100550424(&stack0x00000008,&UNK_10f4b1c82);
  if (unaff_w21 - 2U < 0xd) {
    puVar1 = (&PTR_DAT_110a66bf0)[unaff_w21 - 2U];
  }
  else {
    puVar1 = &DAT_10f4b1c93;
  }
  FUN_1005504ac(&stack0x00000008,auStack_38,puVar1);
  func_0x000100550554();
  return &stack0x00000008;
}



/* Entry: 1005fa71c; end: 1005fa773;  */

undefined8 FUN_1005fa71c(undefined8 param_1,undefined8 param_2)

{
  FUN_100550424(param_1,&UNK_10f4b1dc6);
  FUN_100550484();
  func_0x000100550554();
  return param_2;
}



/* Entry: 1005fa774; end: 1005fa7a3;  */

void FUN_1005fa774(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a60a10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 1005fa7a4; end: 1005fa82f;  */

void FUN_1005fa7a4(undefined8 *param_1,long param_2)

{
  FUN_1005fa774();
  *param_1 = &PTR_DAT_110a609a8;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 1005fa830; end: 1005fa837;  */

void FUN_1005fa830(void)

{
  return;
}



/* Entry: 1005fa838; end: 1005fabeb;  */

undefined1  [16] FUN_1005fa838(long *param_1,int *param_2,undefined4 *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar13 = (ulong)*param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar6 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1005fa8ec;
          uVar6 = plVar12[1];
          if (uVar6 != uVar13) break;
          if ((int)plVar12[2] == *param_2) {
            uVar4 = 0;
            goto LAB_1005fabb4;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (uVar14 <= uVar6) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar7 * uVar14;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_1005fa8ec:
  plVar1 = param_1 + 2;
  plVar12 = (long *)0xc8;
  func_0x000107c60e20();
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar13;
  *(undefined4 *)(plVar12 + 2) = *param_3;
  plStack_68 = plVar12;
  plStack_60 = plVar1;
  func_0x0001005fa7d8(plVar12 + 3,param_3 + 2);
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_1005fab38;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar14) {
    uVar5 = uVar14;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar14 = param_1[1];
  if (uVar14 < uVar5) {
LAB_1005fa9a4:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005fabdc);
      (*pcVar2)();
    }
    lVar3 = uVar5 << 3;
    func_0x000107c60e20(lVar3);
    FUN_1005fac38(param_1,lVar3);
    param_1[1] = uVar5;
    lVar3 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar3 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar5 - 1;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar6 * uVar5;
      }
      if ((uVar5 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar3 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar6 = plVar8[1];
        if ((uVar5 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar5 <= uVar6) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar10 * uVar5;
        }
        if (uVar6 != uVar11) {
          if (*(long *)(lVar3 + uVar6 * 8) == 0) {
            *(long **)(lVar3 + uVar6 * 8) = plVar9;
            uVar11 = uVar6;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar6 * 8);
            **(long **)(lVar3 + uVar6 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1005fa9a4;
      FUN_1005fac38(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x25 = uVar13;
    if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      unaff_x25 = uVar13 - uVar5 * uVar14;
    }
  }
LAB_1005fab38:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar3 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1005fac50(&plStack_68);
  uVar4 = 1;
LAB_1005fabb4:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 1005fabec; end: 1005fac37;  */

void FUN_1005fabec(undefined8 param_1,undefined8 param_2)

{
  FUN_1005fa838(param_1,param_2,param_2);
  return;
}



/* Entry: 1005fac38; end: 1005fac4f;  */

void FUN_1005fac38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005fac50; end: 1005facd7;  */

long * FUN_1005fac50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001005fac98(lVar1 + 0x18);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 1005facd8; end: 1005facf3;  */

void FUN_1005facd8(void)

{
  return;
}



/* Entry: 1005facf4; end: 1005fad1f;  */

void FUN_1005facf4(undefined8 *param_1)

{
  func_0x0001005face8();
                    /* WARNING: Could not recover jumptable at 0x0001005fad24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}



/* Entry: 1005fad20; end: 1005fad33;  */

void FUN_1005fad20(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001005fad24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1005fad34; end: 1005fad7f;  */

void FUN_1005fad34(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    FUN_1005fb7ac();
  }
  return;
}



/* Entry: 1005fad80; end: 1005fad93;  */

void FUN_1005fad80(void)

{
  return;
}



/* Entry: 1005fad94; end: 1005fade7;  */

void FUN_1005fad94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000100292158();
  if (param_4 != 0) {
    FUN_100658020();
    FUN_100658030();
    func_0x000100658070(param_1);
    FUN_10065808c();
  }
  FUN_100292240();
  FUN_1005fade8();
  return;
}



/* Entry: 1005fade8; end: 1005fae0f;  */

void FUN_1005fade8(void)

{
  uint extraout_w8;
  
  func_0x00010002b9f0();
  if ((extraout_w8 & 1) == 0) {
    FUN_1005fb5c8();
  }
  return;
}


