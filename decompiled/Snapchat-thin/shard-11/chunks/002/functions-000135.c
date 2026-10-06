/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10828f560; end: 10828f59f;  */

undefined8 * FUN_10828f560(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a353d0;
  func_0x00010828afb8(param_1 + 4);
  FUN_1082764bc(param_1 + 2);
  return param_1;
}



/* Entry: 10828f5a0; end: 10828f5b3;  */

void FUN_10828f5a0(void)

{
  FUN_10828f560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828f5b4; end: 10828f5bb;  */

undefined8 FUN_10828f5b4(void)

{
  return 0;
}



/* Entry: 10828f5bc; end: 10828f5db;  */

void FUN_10828f5bc(void)

{
  func_0x00010828fd34();
  FUN_10828f5dc();
  return;
}



/* Entry: 10828f5dc; end: 10828f613;  */

void FUN_10828f5dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1083a75c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10828f614; end: 10828f633;  */

void FUN_10828f614(void)

{
  func_0x00010828fd34();
  FUN_10828f634();
  return;
}



/* Entry: 10828f634; end: 10828f65b;  */

void FUN_10828f634(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_108315664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10828f65c; end: 10828f67b;  */

void FUN_10828f65c(void)

{
  func_0x00010828fd34();
  FUN_10828f67c();
  return;
}



/* Entry: 10828f67c; end: 10828f6a3;  */

void FUN_10828f67c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1082ab170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10828f6a4; end: 10828f707;  */

void FUN_10828f6a4(void)

{
  func_0x00010828fd34();
  func_0x00010828f6c4();
  return;
}



/* Entry: 10828f708; end: 10828f737;  */

long * FUN_10828f708(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082647c0(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 10828f738; end: 10828f757;  */

void FUN_10828f738(void)

{
  func_0x00010828fd34();
  FUN_10828ec9c();
  return;
}



/* Entry: 10828f758; end: 10828f793;  */

void FUN_10828f758(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_10828f794(param_1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10828f794; end: 10828f7b7;  */

void FUN_10828f794(undefined8 param_1,long param_2)

{
  FUN_10826b598(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10828f7b8; end: 10828f7c7;  */

void FUN_10828f7b8(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 10828f7c8; end: 10828f7f7;  */

long FUN_10828f7c8(long param_1)

{
  FUN_10828f7f8();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010828fd58();
  }
  return param_1;
}



/* Entry: 10828f7f8; end: 10828f82f;  */

void FUN_10828f7f8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_10826b598();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828f830; end: 10828f87f;  */

void FUN_10828f830(undefined8 param_1,undefined8 param_2)

{
  FUN_10828f924(param_2);
  func_0x0001081efc58();
  FUN_10828f944(param_1,param_2);
  func_0x00010828fd50();
  return;
}



/* Entry: 10828f880; end: 10828f8ab;  */

undefined8 * FUN_10828f880(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x28);
  do {
    puVar1 = puVar2;
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)(param_1 + 0x28);
    }
  } while (puVar2[1] != *param_2);
  *puVar1 = *(undefined8 *)*puVar1;
  FUN_10828f794();
  return (undefined8 *)*puVar1;
}



/* Entry: 10828f8ac; end: 10828f8f3;  */

void FUN_10828f8ac(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  uVar2 = param_2;
  FUN_10828f8f4(0x3ff0000000000000);
  uVar2 = uVar2 >> 4;
  if (0x7ffffffe < uVar2) {
    uVar2 = 0x7fffffff;
  }
  *param_1 = uVar1;
  *(int *)(param_1 + 1) = (int)param_2;
  *(uint *)((long)param_1 + 0xc) = (int)uVar2 << 1 | 1;
  return;
}



/* Entry: 10828f8f4; end: 10828f923;  */

void FUN_10828f8f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10828f924; end: 10828f943;  */

void FUN_10828f924(long param_1)

{
  FUN_10828f7f8();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10828f944; end: 10828f9f3;  */

void FUN_10828f944(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_30 [16];
  
  if (param_1 != param_2) {
    func_0x00010828fd6c();
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)((long)unaff_x20 + 0xc) & 1) == 0)) {
      func_0x00010828fa90(auStack_30);
      func_0x00010828f9f4();
      func_0x00010828f9f4();
      FUN_10828f7c8(auStack_30);
    }
    else {
      uVar3 = *unaff_x19;
      *unaff_x19 = *unaff_x20;
      *unaff_x20 = uVar3;
      uVar1 = *(undefined4 *)(unaff_x19 + 1);
      *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      uVar2 = *(uint *)((long)unaff_x19 + 0xc);
      *(uint *)((long)unaff_x19 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) & 0xfffffffe | uVar2 & 1;
      *(uint *)((long)unaff_x20 + 0xc) = uVar2 & 0xfffffffe | *(uint *)((long)unaff_x20 + 0xc) & 1;
    }
  }
  return;
}



/* Entry: 10828f9f4; end: 10828faf7;  */

undefined8 * FUN_10828f9f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_10828f924(param_1);
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      FUN_10828fbd8(0x3ff0000000000000,param_1,*(undefined4 *)(param_2 + 1));
      func_0x00010828fd78();
      func_0x00010828fd60();
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x00010828fd58();
      }
      uVar1 = *param_2;
      *param_2 = 0;
      *param_1 = uVar1;
      *(uint *)((long)param_1 + 0xc) =
           *(uint *)((long)param_2 + 0xc) & 0xfffffffe | *(uint *)((long)param_1 + 0xc) & 1;
      *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 1;
      *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 1;
      func_0x00010828fd78();
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 10828faf8; end: 10828fb57;  */

void FUN_10828faf8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)param_1[1]; lVar2 = lVar2 + 1) {
    FUN_10828fb58(param_2,*param_1 + lVar1);
    FUN_10826b598(*param_1 + lVar1);
    param_2 = param_2 + 0x10;
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 10828fb58; end: 10828fb9b;  */

void FUN_10828fb58(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010828fd6c();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10828fb9c();
  func_0x00010828fd78();
  *(undefined4 *)(unaff_x20 + 8) = 0;
  return;
}



/* Entry: 10828fb9c; end: 10828fbc7;  */

undefined8 FUN_10828fb9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_10828fbc8(param_1,uVar1);
  return param_1;
}



/* Entry: 10828fbc8; end: 10828fbd7;  */

void FUN_10828fbc8(long *param_1,long param_2)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar8 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = plVar8 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (plVar8[0x10] == 0) {
    if ((*(int *)((long)plVar8 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(plVar8[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 10828fbd8; end: 10828fc23;  */

void FUN_10828fbd8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
    lVar1 = param_1;
    FUN_10828fc74();
    func_0x00010828fd6c(param_1,lVar1);
    FUN_10828faf8();
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      func_0x00010828fd58();
    }
    param_2 = param_2 >> 4;
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    *unaff_x19 = unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = (int)param_2 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 10828fc24; end: 10828fc73;  */

void FUN_10828fc24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010828fd6c();
  FUN_10828faf8();
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010828fd58();
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10828fc74; end: 10828fc97;  */

undefined1 ** FUN_10828fc74(long param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    ppuVar1 = &puStack_20;
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x10;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + (int)param_2);
    return ppuVar1;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10828fc98;
  *param_2 = *(undefined8 *)*param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10828f794();
  return (undefined1 **)*param_2;
}



/* Entry: 10828fc98; end: 10828fcc3;  */

undefined8 FUN_10828fc98(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_2;
  FUN_10828f794();
  return *param_2;
}



/* Entry: 10828fcc4; end: 10828fd83;  */

void FUN_10828fcc4(void)

{
  return;
}



/* Entry: 10828fd84; end: 10828fe53;  */

byte FUN_10828fd84(long *param_1,undefined8 *param_2,long param_3,int param_4,long *param_5,
                  long param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined4 uVar13;
  code *extraout_x8;
  ulong uVar14;
  long *plVar15;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  long *plVar24;
  int iVar25;
  ulong *puVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  ulong uStack_1b10;
  ulong uStack_1b08;
  ulong uStack_1b00;
  int *piStack_1ac8;
  undefined1 auStack_1ac0 [352];
  long lStack_1960;
  long *plStack_1930;
  long *plStack_1928;
  ulong uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined4 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined4 uStack_18b0;
  undefined1 auStack_18a8 [6144];
  undefined1 auStack_a8 [48];
  undefined1 uStack_78;
  long lStack_70;
  
  plVar4 = (long *)*param_1;
  if (*(char *)(plVar4[4] + 0x54) == '\x01') {
    FUN_10827b938(plVar4[4],&UNK_10f481f6e);
    plVar4 = (long *)*param_1;
  }
  (**(code **)(*plVar4 + 0x40))();
  if ((int)plVar4 != 0) {
    if ((code *)param_5[6] != (code *)0x0) {
      (*(code *)param_5[6])(param_5[7],0);
    }
    if ((code *)param_5[3] != (code *)0x0) {
      (*(code *)param_5[3])(param_5[5]);
    }
    return 0;
  }
  puVar5 = *(ulong **)(*param_1 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *puVar5;
  func_0x000108294f54();
  if ((int)uVar6 == 0) {
    func_0x000108294eb8();
    uVar18 = *(undefined8 *)(uVar6 + 0x70);
    if (*(char *)(*(long *)(*puVar5 + 0x20) + 0x54) == '\x01') {
      FUN_10827b938(*(long *)(*puVar5 + 0x20),&UNK_10f482154);
    }
    if ((puVar5[0xd] & 1) == 0) {
      uVar7 = *puVar5;
      func_0x000108294f54();
      if ((int)uVar7 != 0) goto LAB_108292914;
      if ((((param_3 == 0) || (*param_5 != 0)) || (param_6 != 0)) ||
         ((param_4 != 0 || (param_5[3] != 0)))) {
LAB_1082929b0:
        func_0x000108294eb8();
        FUN_10828f2a4(*(undefined8 *)(uVar7 + 0x98));
        plVar4 = *(long **)(uVar7 + 0x70);
        *(undefined1 *)(puVar5 + 0xd) = 1;
        uVar16 = *(undefined8 *)(uVar7 + 0x78);
        uVar11 = *(undefined8 *)(uVar7 + 0x80);
        FUN_1082924e4(puVar5);
        puVar5[7] = 0;
        FUN_1082925c8(puVar5);
        piStack_1ac8 = (int *)puVar5[1];
        if (piStack_1ac8 == (int *)0x0) {
          uVar13 = 6;
          if ((*(ulong *)(*(long *)(*(long *)(*puVar5 + 0x10) + 0xb8) + 0x18) & 0x20000) != 0) {
            uVar13 = 2;
          }
          FUN_108288f3c(&uStack_1920,uVar13);
          uVar14 = uStack_1920;
          uStack_1920 = 0;
          uVar21 = puVar5[1];
          puVar5[1] = uVar14;
          FUN_108294254(uVar21);
          FUN_108289ea0(&uStack_1920);
          piStack_1ac8 = (int *)puVar5[1];
          if (piStack_1ac8 != (int *)0x0) goto LAB_108292a4c;
        }
        else {
LAB_108292a4c:
          *piStack_1ac8 = *piStack_1ac8 + 1;
        }
        FUN_1082a0d24(auStack_1ac0,plVar4,uVar11,puVar5 + 0xb,&piStack_1ac8);
        FUN_108289ea0(&piStack_1ac8);
        if ((param_5[4] == 0) || ((*(byte *)(param_5 + 1) & 1) == 0)) {
          uStack_1b10 = 0;
          uStack_1b08 = 0;
          uStack_1b00 = 0;
        }
        else {
          plVar10 = plVar4;
          (**(code **)(*plVar4 + 0x70))();
          uStack_1b08 = (ulong)plVar10 & 0xff00000000;
          uStack_1b00 = (ulong)plVar10 & 0xffffff00;
          uStack_1b10 = (ulong)plVar10 & 0xff;
        }
        uVar19 = 1;
        puVar22 = (undefined8 *)puVar5[0xe];
        for (lVar27 = (long)(int)puVar5[0xf] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
          uVar3 = (uint)*puVar22;
          func_0x000108294e50();
          (*extraout_x8)();
          uVar19 = uVar19 & uVar3;
          puVar22 = puVar22 + 1;
        }
        if (uVar19 == 0) {
          uVar19 = 0;
        }
        else {
          uStack_1910 = 0;
          uStack_1918 = 0;
          uStack_1908 = 0;
          uStack_18f8 = 0;
          uStack_1900 = 0;
          uStack_18e8 = 0;
          uStack_18f0 = 0;
          uStack_18d8 = 0;
          uStack_18e0 = 0;
          uStack_18c8 = 0;
          uStack_18d0 = 0;
          uStack_18b8 = 0;
          uStack_18c0 = 0;
          uStack_18b0 = 0;
          uStack_1920 = uVar7;
          FUN_10840f97c(auStack_a8,auStack_18a8,0x1800,0x1800);
          uStack_78 = 0;
          if (*(char *)((long)puVar5 + 0x69) == '\x01') {
            uVar7 = 0;
            uVar19 = 0;
            uVar14 = 0;
            plVar9 = (long *)0x0;
            plVar10 = (long *)0x0;
            while (uVar21 = (ulong)(int)puVar5[3], uVar14 < uVar21) {
              if (uVar7 != (long)(puVar5[5] - puVar5[4]) >> 2) {
                uVar21 = (ulong)*(int *)(puVar5[4] + uVar7 * 4);
              }
              lVar27 = puVar5[2] + uVar14 * 8;
              plStack_1930 = (long *)0x0;
              plStack_1928 = (long *)0x0;
              FUN_1082a9054(lVar27,uVar21 - uVar14,&plStack_1930);
              if (uVar7 < (ulong)((long)(puVar5[5] - puVar5[4]) >> 2)) {
                uVar3 = *(uint *)(puVar5[4] + uVar7 * 4);
                if (((int)uVar3 < 0) || ((int)puVar5[3] <= (int)uVar3)) goto LAB_108293180;
                plVar15 = *(long **)(puVar5[2] + (ulong)uVar3 * 8);
                plVar15[2] = (long)plStack_1928;
                plVar15[3] = 0;
                if (plStack_1928 != (long *)0x0) {
                  plStack_1928[3] = (long)plVar15;
                }
                plStack_1928 = plVar15;
                if (plStack_1930 != (long *)0x0) {
                  plVar15 = plStack_1930;
                }
LAB_108292bf4:
                plVar15[2] = (long)plVar9;
                plVar24 = plStack_1928;
                plVar28 = plVar15;
                if (plVar10 != (long *)0x0) {
                  plVar9[3] = (long)plVar15;
                  plVar28 = plVar10;
                }
              }
              else {
                plVar15 = plStack_1930;
                plVar24 = plVar9;
                plVar28 = plVar10;
                if (plStack_1930 != (long *)0x0) goto LAB_108292bf4;
              }
              uVar19 = (uint)lVar27 | uVar19;
              uVar7 = uVar7 + 1;
              plVar9 = plVar24;
              plVar10 = plVar28;
              uVar14 = uVar21 + 1;
            }
            plVar9 = plVar10;
            if ((uVar19 & 1) != 0) {
              for (; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[3]) {
                (**(code **)(*plVar9 + 0x38))(plVar9,&uStack_1920);
              }
              uVar7 = 0;
              FUN_1082aa284();
              if ((uVar7 & 1) == 0) goto LAB_108292d74;
              iVar25 = (int)&uStack_1920;
              func_0x0001082aa350();
              if (iVar25 == 0) {
                (**(code **)(*(long *)*puVar5 + 0x18))();
                goto LAB_108292d74;
              }
              lVar17 = 0;
              lVar27 = 0;
              for (; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[3]) {
                if ((int)puVar5[3] <= lVar27) goto LAB_108293180;
                uVar7 = puVar5[2];
                *(undefined8 *)(uVar7 + lVar17) = 0;
                FUN_1082945a4(uVar7 + lVar17,plVar10);
                lVar27 = lVar27 + 1;
                lVar17 = lVar17 + 8;
              }
              lVar27 = 0;
              uVar19 = 0;
              while( true ) {
                uVar3 = (uint)puVar5[3];
                uVar7 = (ulong)uVar3;
                if ((int)uVar3 <= (int)uVar19) break;
                if ((int)uVar19 < 0) goto LAB_108293180;
                uVar7 = puVar5[2];
                plVar10 = *(long **)(uVar7 + (ulong)uVar19 * 8);
                (**(code **)(*plVar10 + 0x30))();
                uVar3 = uVar19;
                if (plVar10 != (long *)0x0) {
                  uVar14 = puVar5[3];
                  uVar3 = (int)uVar14 + ~uVar19;
                  uVar21 = puVar5[2];
                  FUN_1082ff740();
                  if (uVar3 < (uint)plVar10) goto LAB_108293180;
                  puVar22 = (undefined8 *)(uVar21 + (long)(int)uVar14 * 8 + (long)(int)uVar3 * -8);
                  for (uVar29 = -((ulong)plVar10 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar10 & 0xffffffff) << 3; uVar29 != 0; uVar29 = uVar29 - 8
                      ) {
                    func_0x000108294fbc(*puVar22);
                    (*extraout_x8_00)();
                    puVar22 = puVar22 + 1;
                  }
                  uVar3 = (uint)plVar10 + uVar19;
                }
                if ((int)puVar5[3] <= lVar27) goto LAB_108293180;
                uVar14 = puVar5[2];
                uVar11 = *(undefined8 *)(uVar7 + (ulong)uVar19 * 8);
                *(undefined8 *)(uVar7 + (ulong)uVar19 * 8) = 0;
                FUN_1082945a4(uVar14 + lVar27 * 8,uVar11);
                lVar27 = lVar27 + 1;
                uVar19 = uVar3 + 1;
              }
              iVar25 = (int)lVar27;
              if (iVar25 - uVar3 == 0 || iVar25 < (int)uVar3) {
                if (iVar25 < (int)uVar3) {
                  lVar27 = uVar7 * 8;
                  uVar14 = uVar7;
                  while( true ) {
                    lVar27 = lVar27 + -8;
                    iVar1 = (int)uVar7 + (iVar25 - uVar3);
                    iVar20 = (int)uVar14;
                    if (iVar20 <= iVar1) break;
                    uVar14 = (ulong)(iVar20 - 1);
                    if (iVar20 < 1 || (int)uVar7 < iVar20) goto LAB_108293180;
                    FUN_10828ea04(puVar5[2] + lVar27);
                    uVar7 = (ulong)(uint)puVar5[3];
                  }
                  *(int *)(puVar5 + 3) = iVar1;
                }
              }
              else {
                if (uVar3 == 0) {
                  FUN_1082945dc(0x3ff0000000000000,puVar5 + 2,lVar27);
                  uVar3 = (uint)puVar5[3];
                }
                FUN_1082945dc(0x3ff8000000000000,puVar5 + 2,iVar25 - uVar3);
                uVar14 = puVar5[3];
                *(uint *)(puVar5 + 3) = (int)uVar14 + (iVar25 - uVar3);
                puVar22 = (undefined8 *)(puVar5[2] + (long)(int)uVar14 * 8);
                for (uVar7 = (ulong)(iVar25 - uVar3 & ((int)(iVar25 - uVar3) >> 0x1f ^ 0xffffffffU))
                    ; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
              }
              func_0x000108294f10();
              if ((extraout_x8_03 & 1) != 0) goto LAB_108292dc8;
              goto LAB_108292db8;
            }
LAB_108292d74:
            func_0x0001082aa42c(&uStack_1920);
            func_0x000108294f10();
            if ((extraout_x8_01 & 1) == 0) goto LAB_108292d84;
LAB_108292dc8:
            uVar19 = 0;
          }
          else {
LAB_108292d84:
            puVar22 = (undefined8 *)puVar5[2];
            for (lVar27 = (long)(int)puVar5[3] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
              (**(code **)(*(long *)*puVar22 + 0x38))((long *)*puVar22,&uStack_1920);
              puVar22 = puVar22 + 1;
            }
            FUN_1082aa284(&uStack_1920);
LAB_108292db8:
            FUN_1082aa470(&uStack_1920);
            func_0x000108294f10();
            if ((extraout_x8_02 & 1) != 0) goto LAB_108292dc8;
            plVar10 = (long *)puVar5[2];
            for (lVar27 = (long)(int)puVar5[3] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
              lVar17 = *plVar10;
              if ((lVar17 != 0) && (lVar8 = lVar17, FUN_1082a8cec(), (int)lVar8 != 0)) {
                FUN_1082a889c(lVar17,auStack_1ac0);
              }
              plVar10 = plVar10 + 1;
            }
            FUN_1082a1218(auStack_1ac0);
            iVar25 = 0;
            uVar19 = 0;
            puVar22 = (undefined8 *)puVar5[2];
            for (lVar27 = (long)(int)puVar5[3] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
              plVar9 = (long *)*puVar22;
              plVar10 = plVar9;
              FUN_1082a8cec();
              if ((int)plVar10 != 0) {
                (**(code **)(*plVar9 + 0x68))(plVar9,auStack_1ac0);
                uVar19 = (uint)plVar9 | uVar19;
                if ((iVar25 < 99) && (*(int *)(lStack_1960 + 0x7c) < 100)) {
                  iVar25 = iVar25 + 1;
                }
                else {
                  FUN_1082683c8();
                  iVar25 = 0;
                }
              }
              puVar22 = puVar22 + 1;
            }
            FUN_1082a1308(auStack_1ac0);
          }
          FUN_1082a96bc(&uStack_1920);
        }
        func_0x000108292528(puVar5);
        FUN_10829fc04(plVar4,param_2,param_3,param_4,param_5,uStack_1b08 | uStack_1b10 | uStack_1b00
                      ,param_6);
        if ((uVar19 & 1) != 0) {
          FUN_1082ab230(uVar16);
        }
        bVar23 = false;
        puVar22 = (undefined8 *)puVar5[0xe];
        for (lVar27 = (long)(int)puVar5[0xf] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
          (**(code **)(*(long *)*puVar22 + 0x18))((long *)*puVar22,puVar5[0xc] + 1);
          bVar23 = true;
          puVar22 = puVar22 + 1;
        }
        if (bVar23) {
          FUN_1082ab230(uVar16);
        }
        *(undefined1 *)(puVar5 + 0xd) = 0;
        FUN_108294210(auStack_1ac0);
        bVar23 = true;
      }
      else {
        for (puVar22 = param_2; puVar22 != param_2 + param_3; puVar22 = puVar22 + 1) {
          uVar16 = *puVar22;
          puVar26 = (ulong *)puVar5[2];
          for (lVar27 = (long)(int)puVar5[3] << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
            uVar7 = *puVar26;
            if ((uVar7 != 0) && (func_0x00010828ca44(uVar7,uVar16), (uVar7 & 1) != 0))
            goto LAB_1082929b0;
            puVar26 = puVar26 + 1;
          }
        }
        if ((code *)param_5[6] != (code *)0x0) {
          (*(code *)param_5[6])(param_5[7],1);
        }
        bVar23 = false;
      }
    }
    else {
LAB_108292914:
      if (param_5[6] != 0) {
        func_0x000108294fa4();
      }
      if ((code *)param_5[3] != (code *)0x0) {
        (*(code *)param_5[3])(param_5[5]);
      }
      bVar23 = false;
    }
    for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
      plVar4 = (long *)*param_2;
      if (plVar4[2] != 0) {
        if ((*(byte *)(plVar4 + 3) >> 2 & 1) != 0) {
          plVar10 = plVar4;
          (**(code **)(*plVar4 + 0x28))();
          plVar9 = plVar10;
          func_0x000108293408();
          if ((int)plVar9 != 0) {
            plVar9 = *(long **)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0x10);
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar9 + 0x68))();
            }
            FUN_10829fbc0(uVar18,plVar9,(long)plVar10 + 0xc);
            FUN_1082683c8(uVar18);
            *(undefined8 *)((long)plVar10 + 0x14) = 0;
            *(undefined8 *)((long)plVar10 + 0xc) = 0;
          }
        }
        (**(code **)(*plVar4 + 0x18))();
        if (((plVar4 != (long *)0x0) && ((char)plVar4[1] == '\x01')) &&
           (*(int *)((long)plVar4 + 0xc) != 2)) {
          plVar10 = *(long **)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x10);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar10 + 0x58))();
          }
          FUN_10829fb54(uVar18,plVar10);
          *(undefined4 *)((long)plVar4 + 0xc) = 2;
        }
      }
      param_2 = param_2 + 1;
    }
    if (bVar23) {
      bVar12 = *(byte *)(*(long *)(*(long *)(uVar6 + 0x10) + 0xb8) + 0x1e) | *param_5 == 0;
      goto LAB_108293050;
    }
  }
  else {
    if (param_5[6] != 0) {
      func_0x000108294fa4();
    }
    bVar12 = 0;
    if ((code *)param_5[3] == (code *)0x0) goto LAB_108293050;
    (*(code *)param_5[3])(param_5[5]);
  }
  bVar12 = 0;
LAB_108293050:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar12 & 1;
  }
  ___stack_chk_fail();
LAB_108293180:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108293184);
  (*pcVar2)();
}



/* Entry: 10828fe54; end: 10829054b;  */

/* WARNING: Type propagation algorithm not settling */

byte FUN_10828fe54(long *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  int *piVar14;
  long lVar15;
  byte bVar16;
  int *piVar17;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_270;
  long lStack_268;
  undefined4 uStack_260;
  undefined2 uStack_25c;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined4 uStack_238;
  undefined2 uStack_234;
  long lStack_230;
  long alStack_228 [8];
  long lStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1d4;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [56];
  undefined1 auStack_168 [32];
  long lStack_148;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  long lStack_110;
  undefined4 uStack_108;
  undefined2 uStack_104;
  long alStack_100 [4];
  undefined8 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puVar9;
  
  lVar15 = *param_1;
  if (*(char *)(lVar15 + 0x8c) == '\x01') {
    bVar16 = *(byte *)(lVar15 + 0x8d);
    goto LAB_108290384;
  }
  lVar7 = 0x30000;
  FUN_10840ffdc(0x30000,4);
  puVar11 = (undefined1 *)(lVar7 + 3);
  for (lVar10 = 0; lVar10 != 0x100; lVar10 = lVar10 + 1) {
    puVar13 = puVar11;
    for (lVar12 = 0; lVar12 != 0x100; lVar12 = lVar12 + 1) {
      *puVar13 = (char)lVar10;
      uVar2 = (uint)lVar10;
      if ((uint)lVar12 <= (uint)lVar10) {
        uVar2 = (uint)lVar12;
      }
      uVar3 = (undefined1)uVar2;
      puVar13[-1] = uVar3;
      puVar13[-2] = uVar3;
      puVar13[-3] = uVar3;
      puVar13 = puVar13 + 4;
    }
    puVar11 = puVar11 + 0x400;
  }
  uStack_60 = 0;
  uStack_50 = 0x10000000100;
  uStack_58 = 0x200000004;
  lStack_48 = lVar7;
  FUN_10814bd9c(auStack_78,&uStack_60,3);
  alStack_100[0] = lVar15;
  func_0x000108290a6c(auStack_a0);
  func_0x000108290a34(&lStack_80,alStack_100,auStack_a0,&UNK_10f481f91);
  func_0x00010828afb8(auStack_a0);
  alStack_100[0] = lVar15;
  FUN_1082a0a90(auStack_c8,&uStack_60);
  func_0x000108290a34(&lStack_a8,alStack_100,auStack_c8,&UNK_10f481fab);
  func_0x00010828afb8(auStack_c8);
  if (lStack_80 == 0) {
    bVar16 = 0;
LAB_108290340:
    lVar10 = lStack_a8;
    lStack_a8 = 0;
    if (lVar10 != 0) {
      func_0x000108290a08();
    }
    lVar10 = lStack_80;
    lStack_80 = 0;
    if (lVar10 != 0) goto LAB_10829035c;
  }
  else {
    if (lStack_a8 != 0) {
      uStack_d0 = 0;
      alStack_100[3] = 0;
      alStack_100[2] = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      alStack_100[1] = 0;
      alStack_100[0] = 0;
      FUN_10814bdf0(alStack_100,&uStack_60,lVar7,0x400);
      if (alStack_100[0] != 0) {
        *(undefined1 *)(alStack_100[0] + 0x59) = 2;
      }
      FUN_1082b8914(&lStack_148,lVar15,alStack_100,0,1,1);
      lStack_110 = lStack_148;
      lStack_148 = 0;
      uStack_108 = uStack_140;
      uStack_104 = uStack_13c;
      FUN_1082764bc(&lStack_148);
      if (lStack_110 == 0) {
        bVar16 = 0;
      }
      else {
        lVar7 = lStack_48 + 0x40000;
        for (lVar10 = 0; (int)lVar10 != 0x40000; lVar10 = lVar10 + 4) {
          *(undefined4 *)(lVar7 + lVar10) = 0;
        }
        piVar17 = (int *)(lStack_48 + 0x80000);
        for (lVar10 = 0; (int)lVar10 != 0x40000; lVar10 = lVar10 + 4) {
          *(undefined4 *)((long)piVar17 + lVar10) = 0;
        }
        func_0x000108290a6c(auStack_168);
        FUN_10829082c(&lStack_148,auStack_168,lVar7,0x400);
        func_0x00010828afb8(auStack_168);
        func_0x000108290a6c(auStack_1c0);
        FUN_10829082c(auStack_1a0,auStack_1c0,piVar17,0x400);
        func_0x00010828afb8(auStack_1c0);
        lStack_1e0 = lStack_110;
        lStack_110 = 0;
        uStack_1d8 = uStack_108;
        uStack_1d4 = uStack_104;
        func_0x000108290a1c(&lStack_1d0,&lStack_1e0,uStack_dc,0x113254e20);
        FUN_1082905a0(&lStack_1c8,&lStack_1d0);
        lVar10 = lStack_1d0;
        lStack_1d0 = 0;
        if (lVar10 != 0) {
          func_0x000108290a08();
        }
        FUN_1082764bc(&lStack_1e0);
        lStack_1e8 = lStack_1c8;
        alStack_228[2] = 0x10000000100;
        alStack_228[1] = 0;
        lStack_1c8 = 0;
        FUN_1082c4338(lStack_80,alStack_228 + 1,&lStack_1e8);
        lVar10 = lStack_1e8;
        lStack_1e8 = 0;
        if (lVar10 != 0) {
          func_0x000108290a08();
        }
        plVar8 = alStack_228 + 1;
        FUN_108290898(plVar8,&lStack_148);
        func_0x000108290a4c();
        func_0x00010827ec18(alStack_228 + 1);
        if (((ulong)plVar8 & 1) == 0) {
LAB_108290308:
          bVar16 = 0;
        }
        else {
          lStack_240 = *(long *)(lStack_80 + 0x10);
          if (lStack_240 != 0) {
            piVar14 = (int *)(lStack_240 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar5) {
                *piVar14 = *piVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_238 = *(undefined4 *)(lStack_80 + 0x18);
          uStack_234 = *(undefined2 *)(lStack_80 + 0x1c);
          func_0x000108290a1c(&lStack_230,&lStack_240,*(undefined4 *)(lStack_80 + 0x34),0x113254e20)
          ;
          FUN_108290710(alStack_228,&lStack_230);
          lVar10 = lStack_230;
          lStack_230 = 0;
          if (lVar10 != 0) {
            func_0x000108290a08();
          }
          FUN_1082764bc(&lStack_240);
          lStack_248 = alStack_228[0];
          uStack_2a8 = 0x10000000100;
          uStack_2b0 = 0;
          alStack_228[0] = 0;
          FUN_1082c4338(lStack_a8,&uStack_2b0,&lStack_248);
          lVar10 = lStack_248;
          lStack_248 = 0;
          if (lVar10 != 0) {
            func_0x000108290a08();
          }
          lStack_268 = *(long *)(lStack_a8 + 0x10);
          if (lStack_268 != 0) {
            piVar14 = (int *)(lStack_268 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar5) {
                *piVar14 = *piVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_260 = *(undefined4 *)(lStack_a8 + 0x18);
          uStack_25c = *(undefined2 *)(lStack_a8 + 0x1c);
          func_0x000108290a1c(&lStack_258,&lStack_268,*(undefined4 *)(lStack_a8 + 0x34),0x113254e20)
          ;
          FUN_1082905a0(&lStack_250,&lStack_258);
          lVar10 = lStack_258;
          lStack_258 = 0;
          if (lVar10 != 0) {
            func_0x000108290a08();
          }
          FUN_1082764bc(&lStack_268);
          uStack_2a8 = 0x10000000100;
          uStack_2b0 = 0;
          lStack_270 = lStack_250;
          FUN_1082c4338(lStack_80,&uStack_2b0,&lStack_270);
          lVar10 = lStack_270;
          lStack_270 = 0;
          if (lVar10 != 0) {
            func_0x000108290a08();
          }
          puVar9 = &uStack_2b0;
          FUN_108290898(puVar9,auStack_1a0);
          iVar6 = (int)puVar9;
          func_0x000108290a4c();
          func_0x00010827ec18(&uStack_2b0);
          if (iVar6 == 0) goto LAB_108290308;
          lVar7 = 1;
          for (lVar10 = 0; lVar12 = lVar7, piVar14 = piVar17, lVar10 != 0x100; lVar10 = lVar10 + 1)
          {
            while (lVar12 != 0) {
              piVar1 = piVar14 + -0x10000;
              iVar6 = *piVar14;
              lVar12 = lVar12 + -1;
              piVar14 = piVar14 + 1;
              if (*piVar1 != iVar6) goto LAB_108290308;
            }
            lVar7 = lVar7 + 1;
            piVar17 = piVar17 + 0x100;
          }
          bVar16 = 1;
        }
        func_0x00010827ec18(auStack_1a0);
        func_0x00010827ec18(&lStack_148);
      }
      FUN_1082764bc(&lStack_110);
      FUN_108330548(alStack_100);
      goto LAB_108290340;
    }
    bVar16 = 0;
LAB_10829035c:
    lStack_80 = 0;
    func_0x000108290a08();
  }
  FUN_10810a400(auStack_78);
  FUN_10810a400(&uStack_60);
  func_0x0001082908e4(&lStack_48);
  *(byte *)(lVar15 + 0x8d) = bVar16;
  *(undefined1 *)(lVar15 + 0x8c) = 1;
LAB_108290384:
  return bVar16 & 1;
}



/* Entry: 10829054c; end: 10829059f;  */

void FUN_10829054c(undefined8 param_1,undefined8 *param_2)

{
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  FUN_1082905a0(&plStack_28);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108290a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 1082905a0; end: 1082906bb;  */

void FUN_1082905a0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long alStack_50 [6];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    if ((bRam000000011372a530 & 1) == 0) {
      iVar1 = 0x1372a530;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        alStack_50[4] = 0;
        alStack_50[1] = 0;
        alStack_50[0] = 0;
        alStack_50[3] = 0;
        alStack_50[2] = 0;
        FUN_108287980(FUN_108394238,&UNK_10f481fc5,alStack_50);
        func_0x000108290a98(0x11372a528);
      }
    }
    lVar2 = lRam000000011372a528;
    func_0x000108290aa4();
    func_0x000108290a5c();
    func_0x000108290abc();
    if (lVar2 != 0) {
      func_0x000108290a08();
      lVar2 = alStack_50[0];
      alStack_50[0] = 0;
      if (lVar2 != 0) {
        func_0x000108290a08();
      }
    }
    if (extraout_x8 != 0) {
      func_0x000108290a08();
    }
    func_0x000108290aa4();
    func_0x000108290a8c();
    if (extraout_x8_00 != 0) {
      func_0x000108290a08();
    }
  }
  return;
}



/* Entry: 1082906bc; end: 10829070f;  */

void FUN_1082906bc(undefined8 param_1,undefined8 *param_2)

{
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  FUN_108290710(&plStack_28);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108290a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 108290710; end: 10829082b;  */

void FUN_108290710(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long alStack_50 [6];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    if ((bRam000000011372a540 & 1) == 0) {
      iVar1 = 0x1372a540;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        alStack_50[4] = 0;
        alStack_50[1] = 0;
        alStack_50[0] = 0;
        alStack_50[3] = 0;
        alStack_50[2] = 0;
        FUN_108287980(FUN_108394238,&UNK_10f482097,alStack_50);
        func_0x000108290a98(0x11372a538);
      }
    }
    lVar2 = lRam000000011372a538;
    func_0x000108290aa4();
    func_0x000108290a5c();
    func_0x000108290abc();
    if (lVar2 != 0) {
      func_0x000108290a08();
      lVar2 = alStack_50[0];
      alStack_50[0] = 0;
      if (lVar2 != 0) {
        func_0x000108290a08();
      }
    }
    if (extraout_x8 != 0) {
      func_0x000108290a08();
    }
    func_0x000108290aa4();
    func_0x000108290a8c();
    if (extraout_x8_00 != 0) {
      func_0x000108290a08();
    }
  }
  return;
}



/* Entry: 10829082c; end: 108290897;  */

undefined8
FUN_10829082c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x0001082a0b90(auStack_50);
  FUN_10827eb7c(param_1,auStack_50,param_3,param_4);
  func_0x00010828afb8(auStack_50);
  return param_1;
}



/* Entry: 108290898; end: 10829090b;  */

undefined8 * FUN_108290898(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  FUN_1082a0b6c(param_1 + 2,param_2 + 2);
  piVar3 = (int *)param_2[6];
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[6] = piVar3;
  return param_1;
}



/* Entry: 10829090c; end: 10829091b;  */

void FUN_10829090c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 10829091c; end: 108290a07;  */

void FUN_10829091c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_2;
  FUN_108287aa8();
  uVar5 = 0x68;
  FUN_1082a387c(0x68,lVar4);
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_48 = param_2;
  FUN_1082cc5c8(uVar5,&lStack_48,param_3,param_5);
  *param_1 = uVar5;
  FUN_108154c00(&lStack_48);
  lStack_50 = *param_4;
  if (lStack_50 != 0) {
    *param_4 = 0;
    FUN_1082cc550(uVar5,&lStack_50);
    if (lStack_50 != 0) {
      FUN_108290a08();
    }
  }
  return;
}



/* Entry: 108290a08; end: 108290acf;  */

void FUN_108290a08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108290a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108290ad0; end: 108290bff;  */

void FUN_108290ad0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_stack_00000000;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long lStack_68;
  
  lVar1 = in_stack_00000010;
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = 400;
    __Znwm();
    FUN_108290f48();
    lVar3 = lVar2;
    lStack_68 = lVar2;
    FUN_108290c00(lVar2,param_2,in_stack_00000000);
    if (((int)lVar3 == 0) || (*(long *)(lVar2 + 0xe8) == 0)) {
      lVar2 = 0;
    }
    else {
      if (lVar1 != 0) {
        FUN_108290f04(lVar2 + 0xd0,&stack0x00000010);
        lVar2 = lStack_68;
      }
      lStack_68 = 0;
    }
    *param_1 = lVar2;
    FUN_108291e40(&lStack_68);
  }
  return;
}



/* Entry: 108290c00; end: 108290f03;  */

bool FUN_108290c00(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint in_stack_fffffffffffffef0;
  undefined8 uStack_90;
  long *plStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  long *plStack_78;
  undefined2 auStack_6a [5];
  
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar4 = *(int *)(param_1 + 0x80) / *(int *)(param_1 + 0x88);
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x70);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar5 = *(int *)(param_1 + 0x84) / *(int *)(param_1 + 0x8c);
  }
  FUN_10829112c();
  uVar12 = 0;
  uVar3 = iVar5 * iVar4;
  puVar1 = (undefined8 *)((long)(int)uVar3 * 8 + 0x10);
  uVar15 = uVar8;
  if (0xffffffffffffffef < (ulong)((long)(int)uVar3 * 8) || (int)uVar3 < 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  do {
    uVar2 = *(uint *)(param_1 + 0x188);
    if (uVar2 <= uVar12) {
LAB_108290eac:
      return uVar2 <= uVar12;
    }
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0xb8);
    func_0x00010828a9ac(uVar9,param_1,uVar15);
    auStack_6a[0] = (undefined2)uVar9;
    if ((1 << (ulong)((uint)uVar15 & 0x1f) & 0x79defffdU) == 0) {
      FUN_108266014(&plStack_88,&UNK_10f481050);
      puVar10 = auStack_6a;
      FUN_1082819b0(puVar10,&plStack_88);
      auStack_6a[0] = SUB82(puVar10,0);
    }
    in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffff00;
    FUN_1082a5548(&plStack_88,param_2,param_1,uVar7,0,1,0,1,1,in_stack_fffffffffffffef0);
    plStack_78 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plStack_78 != (long *)0x0) {
      plStack_78 = (long *)((long)plStack_78 + *(long *)(*plStack_78 + -0x18));
    }
    func_0x00010827aaa0(&plStack_88);
    plVar17 = plStack_78;
    if (plStack_78 == (long *)0x0) {
      func_0x0001082923e8();
      goto LAB_108290eac;
    }
    plStack_78 = (long *)0x0;
    uStack_90 = 0;
    plStack_88 = plVar17;
    uStack_80 = 0;
    uStack_7c = auStack_6a[0];
    FUN_108279f20(param_1 + 0xe8 + uVar12 * 0x10,&plStack_88);
    FUN_1082764bc(&plStack_88);
    FUN_1082764bc(&uStack_90);
    puVar16 = puVar1;
    __Znam();
    *puVar16 = 8;
    puVar16[1] = (long)(int)uVar3;
    if (uVar3 != 0) {
      _bzero(puVar16 + 2,-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
    }
    plVar17 = (long *)(param_1 + 0x128 + uVar12 * 0x18);
    plStack_88 = (long *)0x0;
    lVar11 = *plVar17;
    *plVar17 = (long)(puVar16 + 2);
    if (lVar11 != 0) {
      FUN_108292148(plVar17);
    }
    FUN_108292110(&plStack_88);
    puVar16 = (undefined8 *)*plVar17;
    iVar13 = iVar5;
    while (iVar6 = iVar13 + -1, iVar14 = iVar4, 0 < iVar13) {
      for (; iVar13 = iVar6, 0 < iVar14; iVar14 = iVar14 + -1) {
        uVar9 = 0xc0;
        __Znwm(0xc0);
        in_stack_fffffffffffffef0 = *(uint *)(param_1 + 0x70);
        FUN_10831f6a8();
        FUN_108291bc0(puVar16,uVar9);
        func_0x0001082917b0(plVar17 + 1,*puVar16);
        puVar16 = puVar16 + 1;
      }
    }
    func_0x0001082923e8();
    uVar12 = uVar12 + 1;
    uVar15 = uVar8 & 0xffffffff;
  } while( true );
}



/* Entry: 108290f04; end: 108290f47;  */

undefined8 * FUN_108290f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_108291f08();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 108290f48; end: 10829106f;  */

long FUN_108290f48(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7,int param_8,int param_9,
                  undefined4 param_10,long *param_11,char param_12,undefined4 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_14;
  uStack_58 = param_15;
  lVar4 = param_1;
  FUN_108283324(param_1,param_3);
  *(undefined4 *)(lVar4 + 0x70) = param_4;
  *(undefined8 *)(lVar4 + 0x78) = param_5;
  *(int *)(lVar4 + 0x80) = param_6;
  *(int *)(lVar4 + 0x84) = param_7;
  *(int *)(lVar4 + 0x88) = param_8;
  *(int *)(lVar4 + 0x8c) = param_9;
  func_0x000107c27958(lVar4 + 0x98,&uStack_60);
  lVar4 = 0;
  lVar5 = *param_11;
  *param_11 = lVar5 + 1;
  *(long **)(param_1 + 0xb0) = param_11;
  *(long *)(param_1 + 0xb8) = lVar5;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  do {
    lVar5 = param_1 + lVar4;
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    *(undefined4 *)(lVar5 + 0xf0) = 0;
    *(undefined2 *)(lVar5 + 0xf4) = 0x3210;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  uVar3 = 4;
  if (param_12 == '\0') {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  iVar1 = 0;
  if (param_8 != 0) {
    iVar1 = param_6 / param_8;
  }
  iVar2 = 0;
  if (param_9 != 0) {
    iVar2 = param_7 / param_9;
  }
  *(int *)(param_1 + 0x90) = iVar2 * iVar1;
  return param_1;
}



/* Entry: 108291070; end: 1082910eb;  */

void FUN_108291070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x00010831fa54(auStack_58,param_4);
  FUN_10829112c();
  FUN_1082921e0(param_2,&stack0xffffffffffffffd8,&stack0xffffffffffffffe0,&stack0xffffffffffffffd4,
                &stack0xffffffffffffffc8,&stack0xffffffffffffffc0);
  return;
}



/* Entry: 1082910ec; end: 10829112b;  */

void FUN_1082910ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = param_7;
  uStack_38 = param_6;
  uStack_2c = param_5;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_1082921e0(param_1,&uStack_28,&uStack_20,&uStack_2c,&uStack_38,&uStack_40);
  return;
}



/* Entry: 10829112c; end: 108291147;  */

undefined4 FUN_10829112c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df13a28 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108291148);
  (*pcVar1)();
}



/* Entry: 108291148; end: 1082911f3;  */

/* WARNING: Removing unreachable block (ram,0x00010831fb40) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_108291148(long param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                    undefined8 param_6,long *param_7)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  ulong unaff_x28;
  long lStack_150;
  long *plStack_148;
  long alStack_140 [4];
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar12 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x18 + 0x130);
  plVar9 = param_7;
  while( true ) {
    lVar19 = *plVar12;
    if (lVar19 == 0) {
      return (long *)0x0;
    }
    lVar7 = lVar19;
    plVar12 = param_7;
    FUN_10831f9f8(lVar19,param_4,param_5,param_6);
    iVar15 = (int)plVar12;
    if ((int)lVar7 != 0) break;
    plVar12 = (long *)(lVar19 + 0x18);
  }
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ushort *)(lVar19 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x18c);
  plVar12 = param_7;
  lVar7 = lVar19;
  if (uVar3 < uVar2) {
    plVar12 = (long *)(ulong)uVar3;
    FUN_108291ca0(param_1,lVar19);
    uVar17 = *(ulong *)(lVar19 + 0x20);
    plVar8 = param_3;
    (**(code **)(*param_3 + 0x10))();
    if (uVar17 < plVar8[1] + 1U) {
      piVar1 = (int *)(lVar19 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = *(long **)(param_1 + (long)(ulong)uVar3 * 0x10 + 0xe8);
      lStack_90 = lVar19;
      if (plVar8 == (long *)0x0) {
        plVar18 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        plVar18 = plVar8;
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_70 = (long *)0x0;
      lStack_a0 = lVar19;
      plStack_98 = plVar18;
      func_0x0001082923e0();
      *plVar8 = (long)&PTR_FUN_110a35408;
      plVar8[1] = param_1;
      lStack_a0 = 0;
      plVar8[2] = lVar19;
      plVar8[3] = (long)plVar18;
      plStack_70 = plVar8;
      (**(code **)(*param_3 + 0x20))(param_3,auStack_88);
      FUN_108292200(auStack_88);
      FUN_108291dec(&lStack_a0);
      *(long **)(lVar19 + 0x20) = param_3;
      FUN_108291dec(&lStack_90);
    }
    param_3 = *(long **)(lVar19 + 0x48);
    func_0x0001082917d8(param_7);
  }
  iVar14 = (int)lVar7;
  bVar5 = uVar3 == uVar2;
  plVar8 = (long *)(ulong)(uVar3 < uVar2);
  func_0x000108292420(uStack_68);
  if (bVar5) {
    return plVar8;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_90;
  FUN_108291dec();
  func_0x00010829238c();
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = iVar14 == (int)plVar8[0x11];
  plVar18 = param_3;
  if ((!(bool)uVar6 && (int)plVar8[0x11] <= iVar14) ||
     (uVar6 = iVar15 == *(int *)((long)plVar8 + 0x8c), *(int *)((long)plVar8 + 0x8c) < iVar15)) {
LAB_1082913e4:
    plVar9 = (long *)0x0;
    param_3 = plVar18;
    goto LAB_1082913e8;
  }
  plVar11 = plVar8;
  plVar16 = (long *)0x0;
  do {
    plVar13 = plVar16;
    uVar2 = *(uint *)((long)plVar8 + 0x18c);
    uVar20 = (uint)plVar13;
    uVar6 = uVar20 == uVar2;
    if (uVar2 <= uVar20) {
      uVar6 = uVar2 == *(uint *)(plVar8 + 0x31);
      if ((bool)uVar6) {
        uVar17 = 0xffffffffffffffff;
        lVar19 = 0x138;
        goto LAB_108291468;
      }
      plVar9 = (long *)plVar8[(ulong)uVar2 * 2 + 0x1d];
      (**(code **)(*plVar9 + 0x10))();
      if ((int)plVar9 != 0) {
        param_3 = (long *)(ulong)*(uint *)((long)plVar8 + 0x18c);
        *(uint *)((long)plVar8 + 0x18c) = *(uint *)((long)plVar8 + 0x18c) + 1;
        func_0x000108292394();
        plVar9 = plVar8;
      }
      goto LAB_1082913e8;
    }
    plVar11 = plVar8;
    func_0x000108292394();
    plVar18 = plVar13;
    plVar16 = (long *)(ulong)(uVar20 + 1);
  } while (((ulong)plVar11 & 1) == 0);
  goto LAB_10829144c;
  while( true ) {
    func_0x000108292374(lVar19);
    uVar6 = unaff_x28 == plVar11[1] + 1U;
    lVar19 = lVar19 + 0x18;
    if (unaff_x28 < plVar11[1] + 1U) break;
LAB_108291468:
    uVar2 = *(uint *)((long)plVar8 + 0x18c);
    uVar17 = uVar17 + 1;
    uVar6 = uVar17 == uVar2;
    if (uVar2 <= uVar17) {
      if (uVar2 == 0) goto LAB_1082913e4;
      iVar15 = uVar2 + 1;
      lVar19 = (ulong)uVar2 * 0x18 + 0x120;
      goto LAB_108291508;
    }
  }
  FUN_108291700(plVar8,param_3);
  func_0x0001082923ac(param_3);
  FUN_1082911f4(plVar8,plVar12,plVar9,param_3);
  plVar9 = plVar8;
  param_3 = plVar12;
  goto LAB_1082913e8;
  while( true ) {
    func_0x000108292374(lVar19);
    uVar6 = unaff_x28 == *plVar11 + 1U;
    lVar19 = lVar19 + -0x18;
    if (!(bool)uVar6) break;
LAB_108291508:
    iVar15 = iVar15 + -1;
    uVar6 = iVar15 == 1;
    if (iVar15 < 1) {
      plVar9 = (long *)0x2;
      param_3 = plVar18;
      goto LAB_1082913e8;
    }
  }
  FUN_10829172c(plVar8,param_3[9]);
  uVar17 = (ulong)*(ushort *)((long)param_3 + 0x34);
  func_0x000108291784(plVar8 + uVar17 * 3 + 0x26,param_3);
  uVar2 = *(uint *)((long)param_3 + 0x34);
  lVar19 = plVar8[uVar17 * 3 + 0x25];
  uVar10 = 0xc0;
  __Znwm(0xc0);
  FUN_10831f6a8();
  plVar18 = (long *)(lVar19 + (ulong)(uVar2 >> 0x10) * 8);
  alStack_140[1] = 0;
  FUN_108291bc0(plVar18,uVar10);
  FUN_108291dec(alStack_140 + 1);
  func_0x0001082917b0(plVar8 + uVar17 * 3 + 0x26,*plVar18);
  func_0x0001082923ac(*plVar18);
  lVar19 = *plVar18;
  piVar1 = (int *)(lVar19 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar11 = (long *)plVar8[uVar17 * 2 + 0x1d];
  alStack_140[0] = lVar19;
  if (plVar11 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))();
    plVar16 = plVar11;
  }
  if (lVar19 != 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_120 = (long *)0x0;
  lStack_150 = lVar19;
  plStack_148 = plVar16;
  func_0x0001082923e0();
  *plVar11 = (long)&PTR_SUB_110a35488;
  plVar11[1] = (long)plVar8;
  lStack_150 = 0;
  plVar11[2] = lVar19;
  plVar11[3] = (long)plVar16;
  plStack_120 = plVar11;
  (**(code **)(*plVar12 + 0x18))(plVar12,alStack_140 + 1);
  FUN_108292200(alStack_140 + 1);
  FUN_108291dec(&lStack_150);
  lVar19 = *plVar18;
  *(long **)(lVar19 + 0x20) = plVar12;
  plVar13 = *(long **)(lVar19 + 0x48);
  func_0x0001082917d8(plVar9);
  FUN_108291dec(alStack_140);
LAB_10829144c:
  plVar9 = (long *)0x1;
  param_3 = plVar13;
LAB_1082913e8:
  func_0x000108292420(uStack_118);
  if ((bool)uVar6) {
    return plVar9;
  }
  ___stack_chk_fail();
  FUN_108291dec(alStack_140);
  func_0x00010829238c();
  FUN_10829172c();
  FUN_108295980(param_3 + 0xd);
  uVar17 = *(ulong *)param_3[7];
  *(ulong *)param_3[7] = uVar17 + 1;
  param_3[8] = uVar17;
  param_3[9] = uVar17 & 0xffffffffffff |
               (ulong)(*(uint *)((long)param_3 + 0x34) >> 0x10 & 0xff) << 0x30 |
               (ulong)*(uint *)((long)param_3 + 0x34) << 0x38;
  param_3[4] = 0;
  param_3[5] = 0;
  plVar12 = (long *)param_3[10];
  if ((plVar12 != (long *)0x0) &&
     (param_3[0x14] * (long)(int)param_3[0xb] * (long)*(int *)((long)param_3 + 0x5c) != 0)) {
    _bzero();
  }
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  *(undefined1 *)(param_3 + 0x17) = 0;
  return plVar12;
}



/* Entry: 1082911f4; end: 108291393;  */

/* WARNING: Removing unreachable block (ram,0x00010831fb40) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1082911f4(long param_1,long *param_2,long *param_3,long param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  long *plVar5;
  bool bVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong unaff_x28;
  long lStack_150;
  long *plStack_148;
  long alStack_140 [4];
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ushort *)(param_4 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x18c);
  plVar9 = param_3;
  lVar14 = param_4;
  if (uVar3 < uVar2) {
    plVar9 = (long *)(ulong)uVar3;
    FUN_108291ca0(param_1,param_4);
    uVar16 = *(ulong *)(param_4 + 0x20);
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x10))();
    if (uVar16 < plVar8[1] + 1U) {
      piVar1 = (int *)(param_4 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = *(long **)(param_1 + (long)(ulong)uVar3 * 0x10 + 0xe8);
      lStack_90 = param_4;
      if (plVar8 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar8 + 0x18))();
        plVar12 = plVar8;
      }
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plStack_70 = (long *)0x0;
      lStack_a0 = param_4;
      plStack_98 = plVar12;
      func_0x0001082923e0();
      *plVar8 = (long)&PTR_FUN_110a35408;
      plVar8[1] = param_1;
      lStack_a0 = 0;
      plVar8[2] = param_4;
      plVar8[3] = (long)plVar12;
      plStack_70 = plVar8;
      (**(code **)(*param_2 + 0x20))(param_2,auStack_88);
      FUN_108292200(auStack_88);
      FUN_108291dec(&lStack_a0);
      *(long **)(param_4 + 0x20) = param_2;
      FUN_108291dec(&lStack_90);
    }
    param_2 = *(long **)(param_4 + 0x48);
    func_0x0001082917d8(param_3);
  }
  iVar13 = (int)lVar14;
  bVar6 = uVar3 == uVar2;
  func_0x000108292420(uStack_68);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_90;
  FUN_108291dec();
  func_0x00010829238c();
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = iVar13 == (int)plVar8[0x11];
  plVar12 = param_2;
  if ((iVar13 <= (int)plVar8[0x11]) &&
     (uVar7 = param_5 == *(int *)((long)plVar8 + 0x8c), param_5 <= *(int *)((long)plVar8 + 0x8c))) {
    plVar11 = plVar8;
    plVar15 = param_2;
    plVar5 = (long *)0x0;
    do {
      plVar12 = plVar5;
      uVar2 = *(uint *)((long)plVar8 + 0x18c);
      uVar17 = (uint)plVar12;
      uVar7 = uVar17 == uVar2;
      if (uVar2 <= uVar17) {
        uVar7 = uVar2 == *(uint *)(plVar8 + 0x31);
        if ((bool)uVar7) {
          uVar16 = 0xffffffffffffffff;
          plVar12 = plVar15;
          lVar14 = 0x138;
          goto LAB_108291468;
        }
        plVar9 = (long *)plVar8[(ulong)uVar2 * 2 + 0x1d];
        (**(code **)(*plVar9 + 0x10))();
        plVar12 = param_2;
        if ((int)plVar9 != 0) {
          plVar12 = (long *)(ulong)*(uint *)((long)plVar8 + 0x18c);
          *(uint *)((long)plVar8 + 0x18c) = *(uint *)((long)plVar8 + 0x18c) + 1;
          func_0x000108292394();
        }
        break;
      }
      plVar11 = plVar8;
      func_0x000108292394();
      plVar15 = plVar12;
      plVar5 = (long *)(ulong)(uVar17 + 1);
    } while (((ulong)plVar11 & 1) == 0);
  }
  goto LAB_1082913e8;
  while( true ) {
    func_0x000108292374(lVar14);
    uVar7 = unaff_x28 == plVar11[1] + 1U;
    lVar14 = lVar14 + 0x18;
    if (unaff_x28 < plVar11[1] + 1U) break;
LAB_108291468:
    uVar2 = *(uint *)((long)plVar8 + 0x18c);
    uVar16 = uVar16 + 1;
    uVar7 = uVar16 == uVar2;
    if (uVar2 <= uVar16) {
      if (uVar2 == 0) goto LAB_1082913e8;
      iVar13 = uVar2 + 1;
      lVar14 = (ulong)uVar2 * 0x18 + 0x120;
      goto LAB_108291508;
    }
  }
  FUN_108291700(plVar8,param_2);
  func_0x0001082923ac(param_2);
  FUN_1082911f4(plVar8,plVar9,param_7,param_2);
  plVar12 = plVar9;
  goto LAB_1082913e8;
  while( true ) {
    func_0x000108292374(lVar14);
    uVar7 = unaff_x28 == *plVar11 + 1U;
    lVar14 = lVar14 + -0x18;
    if (!(bool)uVar7) break;
LAB_108291508:
    iVar13 = iVar13 + -1;
    uVar7 = iVar13 == 1;
    if (iVar13 < 1) goto LAB_1082913e8;
  }
  FUN_10829172c(plVar8,param_2[9]);
  uVar16 = (ulong)*(ushort *)((long)param_2 + 0x34);
  func_0x000108291784(plVar8 + uVar16 * 3 + 0x26,param_2);
  uVar2 = *(uint *)((long)param_2 + 0x34);
  lVar14 = plVar8[uVar16 * 3 + 0x25];
  uVar10 = 0xc0;
  __Znwm(0xc0);
  FUN_10831f6a8();
  plVar12 = (long *)(lVar14 + (ulong)(uVar2 >> 0x10) * 8);
  alStack_140[1] = 0;
  FUN_108291bc0(plVar12,uVar10);
  FUN_108291dec(alStack_140 + 1);
  func_0x0001082917b0(plVar8 + uVar16 * 3 + 0x26,*plVar12);
  func_0x0001082923ac(*plVar12);
  lVar14 = *plVar12;
  piVar1 = (int *)(lVar14 + 8);
  do {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar11 = (long *)plVar8[uVar16 * 2 + 0x1d];
  alStack_140[0] = lVar14;
  if (plVar11 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))();
    plVar15 = plVar11;
  }
  if (lVar14 != 0) {
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_120 = (long *)0x0;
  lStack_150 = lVar14;
  plStack_148 = plVar15;
  func_0x0001082923e0();
  *plVar11 = (long)&PTR_SUB_110a35488;
  plVar11[1] = (long)plVar8;
  lStack_150 = 0;
  plVar11[2] = lVar14;
  plVar11[3] = (long)plVar15;
  plStack_120 = plVar11;
  (**(code **)(*plVar9 + 0x18))(plVar9,alStack_140 + 1);
  FUN_108292200(alStack_140 + 1);
  FUN_108291dec(&lStack_150);
  lVar14 = *plVar12;
  *(long **)(lVar14 + 0x20) = plVar9;
  plVar12 = *(long **)(lVar14 + 0x48);
  func_0x0001082917d8(param_7);
  FUN_108291dec(alStack_140);
LAB_1082913e8:
  func_0x000108292420(uStack_118);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_108291dec(alStack_140);
  func_0x00010829238c();
  FUN_10829172c();
  FUN_108295980(plVar12 + 0xd);
  uVar16 = *(ulong *)plVar12[7];
  *(ulong *)plVar12[7] = uVar16 + 1;
  plVar12[8] = uVar16;
  plVar12[9] = uVar16 & 0xffffffffffff |
               (ulong)(*(uint *)((long)plVar12 + 0x34) >> 0x10 & 0xff) << 0x30 |
               (ulong)*(uint *)((long)plVar12 + 0x34) << 0x38;
  plVar12[4] = 0;
  plVar12[5] = 0;
  if ((plVar12[10] != 0) &&
     (plVar12[0x14] * (long)(int)plVar12[0xb] * (long)*(int *)((long)plVar12 + 0x5c) != 0)) {
    _bzero();
  }
  plVar12[0x15] = 0;
  plVar12[0x16] = 0;
  *(undefined1 *)(plVar12 + 0x17) = 0;
  return;
}



/* Entry: 108291394; end: 1082916ff;  */

/* WARNING: Removing unreachable block (ram,0x00010831fb40) */
/* WARNING: Type propagation algorithm not settling */

void FUN_108291394(long *param_1,long *param_2,long *param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  ulong unaff_x28;
  long lStack_a0;
  long *plStack_98;
  long alStack_90 [4];
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_4 == (int)param_1[0x11];
  plVar9 = param_2;
  if ((param_4 <= (int)param_1[0x11]) &&
     (uVar6 = param_5 == *(int *)((long)param_1 + 0x8c), param_5 <= *(int *)((long)param_1 + 0x8c)))
  {
    plVar8 = param_1;
    plVar12 = param_2;
    plVar5 = (long *)0x0;
    do {
      plVar9 = plVar5;
      uVar2 = *(uint *)((long)param_1 + 0x18c);
      uVar13 = (uint)plVar9;
      uVar6 = uVar13 == uVar2;
      if (uVar2 <= uVar13) {
        uVar6 = uVar2 == *(uint *)(param_1 + 0x31);
        if ((bool)uVar6) {
          uVar11 = 0xffffffffffffffff;
          plVar9 = plVar12;
          lVar10 = 0x138;
          goto LAB_108291468;
        }
        plVar8 = (long *)param_1[(ulong)uVar2 * 2 + 0x1d];
        (**(code **)(*plVar8 + 0x10))();
        plVar9 = param_2;
        if ((int)plVar8 != 0) {
          plVar9 = (long *)(ulong)*(uint *)((long)param_1 + 0x18c);
          *(uint *)((long)param_1 + 0x18c) = *(uint *)((long)param_1 + 0x18c) + 1;
          func_0x000108292394();
        }
        break;
      }
      plVar8 = param_1;
      func_0x000108292394();
      plVar12 = plVar9;
      plVar5 = (long *)(ulong)(uVar13 + 1);
    } while (((ulong)plVar8 & 1) == 0);
  }
  goto LAB_1082913e8;
  while( true ) {
    func_0x000108292374(lVar10);
    uVar6 = unaff_x28 == plVar8[1] + 1U;
    lVar10 = lVar10 + 0x18;
    if (unaff_x28 < plVar8[1] + 1U) break;
LAB_108291468:
    uVar2 = *(uint *)((long)param_1 + 0x18c);
    uVar11 = uVar11 + 1;
    uVar6 = uVar11 == uVar2;
    if (uVar2 <= uVar11) {
      if (uVar2 == 0) goto LAB_1082913e8;
      iVar14 = uVar2 + 1;
      lVar10 = (ulong)uVar2 * 0x18 + 0x120;
      goto LAB_108291508;
    }
  }
  FUN_108291700(param_1,param_2);
  func_0x0001082923ac(param_2);
  FUN_1082911f4(param_1,param_3,param_7,param_2);
  plVar9 = param_3;
  goto LAB_1082913e8;
  while( true ) {
    func_0x000108292374(lVar10);
    uVar6 = unaff_x28 == *plVar8 + 1U;
    lVar10 = lVar10 + -0x18;
    if (!(bool)uVar6) break;
LAB_108291508:
    iVar14 = iVar14 + -1;
    uVar6 = iVar14 == 1;
    if (iVar14 < 1) goto LAB_1082913e8;
  }
  FUN_10829172c(param_1,param_2[9]);
  uVar11 = (ulong)*(ushort *)((long)param_2 + 0x34);
  FUN_108291784(param_1 + uVar11 * 3 + 0x26,param_2);
  uVar2 = *(uint *)((long)param_2 + 0x34);
  lVar10 = param_1[uVar11 * 3 + 0x25];
  uVar7 = 0xc0;
  __Znwm(0xc0);
  FUN_10831f6a8();
  plVar9 = (long *)(lVar10 + (ulong)(uVar2 >> 0x10) * 8);
  alStack_90[1] = 0;
  FUN_108291bc0(plVar9,uVar7);
  FUN_108291dec(alStack_90 + 1);
  func_0x0001082917b0(param_1 + uVar11 * 3 + 0x26,*plVar9);
  func_0x0001082923ac(*plVar9);
  lVar10 = *plVar9;
  piVar1 = (int *)(lVar10 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar8 = (long *)param_1[uVar11 * 2 + 0x1d];
  alStack_90[0] = lVar10;
  if (plVar8 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x18))();
    plVar12 = plVar8;
  }
  if (lVar10 != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_70 = (long *)0x0;
  lStack_a0 = lVar10;
  plStack_98 = plVar12;
  func_0x0001082923e0();
  *plVar8 = (long)&PTR_SUB_110a35488;
  plVar8[1] = (long)param_1;
  lStack_a0 = 0;
  plVar8[2] = lVar10;
  plVar8[3] = (long)plVar12;
  plStack_70 = plVar8;
  (**(code **)(*param_3 + 0x18))(param_3,alStack_90 + 1);
  FUN_108292200(alStack_90 + 1);
  FUN_108291dec(&lStack_a0);
  lVar10 = *plVar9;
  *(long **)(lVar10 + 0x20) = param_3;
  plVar9 = *(long **)(lVar10 + 0x48);
  func_0x0001082917d8(param_7);
  FUN_108291dec(alStack_90);
LAB_1082913e8:
  func_0x000108292420(uStack_68);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  FUN_108291dec(alStack_90);
  func_0x00010829238c();
  FUN_10829172c();
  FUN_108295980(plVar9 + 0xd);
  uVar11 = *(ulong *)plVar9[7];
  *(ulong *)plVar9[7] = uVar11 + 1;
  plVar9[8] = uVar11;
  plVar9[9] = uVar11 & 0xffffffffffff |
              (ulong)(*(uint *)((long)plVar9 + 0x34) >> 0x10 & 0xff) << 0x30 |
              (ulong)*(uint *)((long)plVar9 + 0x34) << 0x38;
  plVar9[4] = 0;
  plVar9[5] = 0;
  if ((plVar9[10] != 0) &&
     (plVar9[0x14] * (long)(int)plVar9[0xb] * (long)*(int *)((long)plVar9 + 0x5c) != 0)) {
    _bzero();
  }
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  *(undefined1 *)(plVar9 + 0x17) = 0;
  return;
}



/* Entry: 108291700; end: 10829172b;  */

/* WARNING: Removing unreachable block (ram,0x00010831fb40) */

void FUN_108291700(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  FUN_10829172c(param_1,*(undefined8 *)(param_2 + 0x48));
  FUN_108295980(param_2 + 0x68);
  uVar1 = **(ulong **)(param_2 + 0x38);
  **(ulong **)(param_2 + 0x38) = uVar1 + 1;
  *(ulong *)(param_2 + 0x40) = uVar1;
  *(ulong *)(param_2 + 0x48) =
       uVar1 & 0xffffffffffff | (ulong)(*(uint *)(param_2 + 0x34) >> 0x10 & 0xff) << 0x30 |
       (ulong)*(uint *)(param_2 + 0x34) << 0x38;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  if ((*(long *)(param_2 + 0x50) != 0) &&
     (*(long *)(param_2 + 0xa0) * (long)*(int *)(param_2 + 0x58) * (long)*(int *)(param_2 + 0x5c) !=
      0)) {
    _bzero();
  }
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined1 *)(param_2 + 0xb8) = 0;
  return;
}



/* Entry: 10829172c; end: 108291783;  */

void FUN_10829172c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  for (puVar3 = *(undefined8 **)(param_1 + 0xd0); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_2);
  }
  lVar2 = **(long **)(param_1 + 0xb0);
  **(long **)(param_1 + 0xb0) = lVar2 + 1;
  *(long *)(param_1 + 0xb8) = lVar2;
  return;
}



/* Entry: 108291784; end: 1082917ff;  */

void FUN_108291784(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *param_1 = lVar2;
  }
  else {
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  if (lVar2 == 0) {
    param_1[1] = lVar1;
  }
  else {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  *(long *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 108291800; end: 108291bbf;  */

void FUN_108291800(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(uint *)(param_1 + 0x18c);
  if (uVar1 == 0) goto LAB_108291b48;
  bVar8 = false;
  lVar13 = param_1 + 0x130;
  for (uVar7 = 0; uVar7 != uVar1; uVar7 = uVar7 + 1) {
    plVar9 = (long *)(lVar13 + uVar7 * 0x18);
    while (lVar10 = *plVar9, lVar10 != 0) {
      if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(lVar10 + 0x28) &&
          *(ulong *)(lVar10 + 0x28) <= param_2) {
        *(undefined4 *)(lVar10 + 0x30) = 0;
        bVar8 = true;
      }
      plVar9 = (long *)(lVar10 + 0x18);
    }
  }
  if (bVar8) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else {
    iVar16 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar16 + 1;
    if (iVar16 < 0x80) goto LAB_108291b48;
  }
  uVar17 = 0;
  puStack_80 = (undefined8 *)0x0;
  uStack_78 = 0x100000000;
  uVar14 = 1;
  for (uVar7 = 0; puVar11 = puStack_80, uVar7 != uVar1 - 1; uVar7 = uVar7 + 1) {
    plVar9 = (long *)(lVar13 + uVar7 * 0x18);
    while( true ) {
      lVar10 = *plVar9;
      iVar16 = (int)uVar17;
      if (lVar10 == 0) break;
      iVar2 = *(int *)(lVar10 + 0x30);
      if (*(ulong *)(lVar10 + 0x28) < *(ulong *)(param_1 + 0xc0) ||
          param_2 < *(ulong *)(lVar10 + 0x28)) {
        iVar2 = iVar2 + 1;
        *(int *)(lVar10 + 0x30) = iVar2;
      }
      puVar5 = puVar11;
      uVar12 = uVar17;
      if (0x20 < iVar2) {
        if (iVar16 < (int)(uVar14 >> 1)) {
          uVar12 = (ulong)(iVar16 + 1);
        }
        else {
          if (iVar16 == 0x7fffffff) {
            uStack_78 = CONCAT44(uVar14,0x7fffffff);
            puStack_80 = puVar11;
            func_0x00010bdb1a68();
            goto LAB_108291b84;
          }
          uVar12 = (ulong)(iVar16 + 1);
          uStack_68 = 0x7fffffff;
          uStack_70 = 8;
          puVar5 = &uStack_70;
          uVar6 = uVar12;
          FUN_10840fe24(0x3ff8000000000000);
          if (iVar16 != 0) {
            _memcpy(puVar5,puVar11,uVar17 << 3);
          }
          if ((uVar14 & 1) != 0) {
            _free(puVar11);
          }
          uVar6 = uVar6 >> 3;
          if (0x7ffffffe < uVar6) {
            uVar6 = 0x7fffffff;
          }
          uVar14 = (int)uVar6 << 1 | 1;
        }
        puVar5[iVar16] = lVar10;
      }
      plVar9 = (long *)(lVar10 + 0x18);
      puVar11 = puVar5;
      uVar17 = uVar12;
    }
    uStack_78 = CONCAT44(uVar14,iVar16);
    puStack_80 = puVar11;
  }
  uVar14 = 0;
  plVar15 = (long *)(lVar13 + (ulong)(uVar1 - 1) * 0x18);
  plVar9 = plVar15;
  while (lVar13 = *plVar9, lVar13 != 0) {
    uVar7 = *(ulong *)(lVar13 + 0x28);
    iVar16 = *(int *)(lVar13 + 0x30);
    if (uVar7 < *(ulong *)(param_1 + 0xc0) || param_2 < uVar7) {
      iVar16 = iVar16 + 1;
      *(int *)(lVar13 + 0x30) = iVar16;
    }
    if (iVar16 < 0x21) {
      uVar14 = uVar14 + 1;
    }
    else if (uVar7 != 0) {
      FUN_108291700(param_1,lVar13);
    }
    plVar9 = (long *)(lVar13 + 0x18);
  }
  if (((int)uVar17 == 0) || (uVar14 == 0)) {
LAB_108291a88:
    if (uVar14 == 0) {
LAB_108291a94:
      uVar17 = 0;
      uVar7 = 0;
      uVar12 = (ulong)(*(int *)(param_1 + 0x18c) - 1);
      iVar16 = *(int *)(param_1 + 0x84);
      iVar2 = *(int *)(param_1 + 0x8c);
      uVar1 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        uVar1 = *(int *)(param_1 + 0x80) / *(int *)(param_1 + 0x88);
      }
      lVar13 = param_1 + uVar12 * 0x18;
      *(undefined8 *)(lVar13 + 0x130) = 0;
      *(undefined8 *)(lVar13 + 0x138) = 0;
      uVar14 = 0;
      if (iVar2 != 0) {
        uVar14 = iVar16 / iVar2;
      }
      for (; uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)), uVar3 = uVar17,
          uVar7 != (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)); uVar7 = uVar7 + 1) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          lVar10 = *(long *)(*(long *)(lVar13 + 0x128) + (uVar3 & 0xffffffff) * 8);
          FUN_10831faf0(lVar10,0);
          *(undefined4 *)(lVar10 + 0x30) = 0;
          func_0x0001082917b0(lVar13 + 0x130,lVar10);
          uVar3 = uVar3 + 1;
        }
        uVar17 = uVar17 + uVar1;
      }
      FUN_1082b1d48(*(undefined8 *)(param_1 + uVar12 * 0x10 + 0xe8));
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  else if (uVar14 <= *(uint *)(param_1 + 0x90) >> 2) {
    while( true ) {
      lVar13 = *plVar15;
      iVar16 = (int)uVar17;
      if (lVar13 == 0) break;
      if (*(int *)(lVar13 + 0x30) < 0x21) {
        FUN_108291700(param_1,lVar13);
        if (iVar16 == 0) {
LAB_108291b84:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108291b88);
          (*pcVar4)();
        }
        FUN_108291700(param_1,puVar11[(long)iVar16 + -1]);
        uVar1 = iVar16 - 1;
        uVar17 = (ulong)uVar1;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
          goto LAB_108291a94;
        }
        if (uVar1 == 0) {
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          goto LAB_108291b40;
        }
      }
      plVar15 = (long *)(lVar13 + 0x18);
    }
    uStack_78 = CONCAT44(uStack_78._4_4_,iVar16);
    goto LAB_108291a88;
  }
LAB_108291b40:
  FUN_108292340(&puStack_80);
LAB_108291b48:
  *(ulong *)(param_1 + 0xc0) = param_2;
  return;
}



/* Entry: 108291bc0; end: 108291c57;  */

void FUN_108291bc0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108291e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108291c58; end: 108291c9f;  */

ulong FUN_108291c58(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    return 0x10000000100;
  }
  func_0x000108291c20();
  uVar1 = 0x200;
  if ((int)param_1 < 0x800) {
    uVar1 = 0x100;
  }
  uVar2 = 0x20000000000;
  if ((int)((ulong)param_1 >> 0x20) < 0x800) {
    uVar2 = 0x10000000000;
  }
  return uVar2 | uVar1;
}



/* Entry: 108291ca0; end: 108291ceb;  */

void FUN_108291ca0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  param_1 = param_1 + (ulong)param_3 * 0x18;
  if (*(long *)(param_1 + 0x130) == param_2) {
    return;
  }
  FUN_108291784(param_1 + 0x130);
  lVar1 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(long *)(param_2 + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_2;
  }
  *(long *)(param_1 + 0x130) = param_2;
  if (*(long *)(param_1 + 0x138) != 0) {
    return;
  }
  *(long *)(param_1 + 0x138) = param_2;
  return;
}



/* Entry: 108291cec; end: 108291cef;  */

undefined8 * FUN_108291cec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35408;
  FUN_108291dec(param_1 + 2);
  return param_1;
}



/* Entry: 108291cf0; end: 108291d03;  */

void FUN_108291cf0(void)

{
  FUN_108291d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108291d04; end: 108291d27;  */

void FUN_108291d04(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = param_1;
  func_0x0001082923e0();
  uVar6 = param_1[1];
  lVar2 = param_1[2];
  *puVar5 = &PTR_FUN_110a35408;
  puVar5[1] = uVar6;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = param_1[3];
  puVar5[2] = lVar2;
  puVar5[3] = uVar6;
  return;
}



/* Entry: 108291d28; end: 108291d4f;  */

void FUN_108291d28(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_110a35408;
  param_2[1] = uVar5;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = lVar2;
  param_2[3] = uVar5;
  return;
}



/* Entry: 108291d50; end: 108291d87;  */

long FUN_108291d50(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a35468);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108291d88; end: 108291d93;  */

undefined ** FUN_108291d88(void)

{
  return &PTR_DAT_110a35468;
}



/* Entry: 108291d94; end: 108291dbf;  */

undefined8 * FUN_108291d94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35408;
  FUN_108291dec(param_1 + 2);
  return param_1;
}



/* Entry: 108291dc0; end: 108291deb;  */

void FUN_108291dc0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  lVar2 = param_2[1];
  *param_1 = &PTR_FUN_110a35408;
  param_1[1] = uVar5;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = param_2[2];
  param_1[2] = lVar2;
  param_1[3] = uVar5;
  return;
}



/* Entry: 108291dec; end: 108291e13;  */

undefined8 * FUN_108291dec(undefined8 *param_1)

{
  FUN_108291e14(*param_1);
  return param_1;
}



/* Entry: 108291e14; end: 108291e3f;  */

void FUN_108291e14(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108291e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108291e40; end: 108291e63;  */

undefined8 FUN_108291e40(undefined8 param_1)

{
  FUN_108291e64(param_1,0);
  return param_1;
}



/* Entry: 108291e64; end: 108291e7b;  */

void FUN_108291e64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108291e98(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108291e7c; end: 108291e97;  */

void FUN_108291e7c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108291e98(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108291e98; end: 108291f07;  */

long FUN_108291e98(long param_1)

{
  long lVar1;
  
  lVar1 = 0x170;
  do {
    FUN_108292110(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x110);
  lVar1 = 0x118;
  do {
    FUN_1082764bc(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0xd8);
  func_0x000108292194(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x98);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x0001082923d0();
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  return param_1;
}



/* Entry: 108291f08; end: 108291fb3;  */

long FUN_108291f08(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_108291fb4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_108292080();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_108291ff4(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_1082920c0(&plStack_58);
  return lVar3;
}



/* Entry: 108291fb4; end: 108291ff3;  */

undefined8 * FUN_108291fb4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_10829206c();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 108291ff4; end: 10829206b;  */

void FUN_108291ff4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10829206c; end: 10829207f;  */

void FUN_10829206c(void)

{
  func_0x000104bd47e8(&UNK_10f48214d);
  FUN_1082920a4();
  return;
}



/* Entry: 108292080; end: 1082920a3;  */

void FUN_108292080(void)

{
  FUN_1082920a4();
  return;
}



/* Entry: 1082920a4; end: 1082920bf;  */

long * FUN_1082920a4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1082920ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1082920c0; end: 1082920eb;  */

long * FUN_1082920c0(long *param_1)

{
  FUN_1082920ec();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1082920ec; end: 10829210f;  */

void FUN_1082920ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108292110; end: 108292133;  */

undefined8 FUN_108292110(undefined8 param_1)

{
  FUN_108292134(param_1,0);
  return param_1;
}



/* Entry: 108292134; end: 108292147;  */

void FUN_108292134(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -8;
      lVar2 = lVar1 + lVar2 * 8;
      do {
        lVar2 = lVar2 + -8;
        FUN_108291dec(lVar2);
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108292148; end: 1082921c7;  */

void FUN_108292148(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -8;
      lVar1 = param_2 + lVar1 * 8;
      do {
        lVar1 = lVar1 + -8;
        FUN_108291dec(lVar1);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 1082921c8; end: 1082921df;  */

void FUN_1082921c8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082921e0; end: 1082921ff;  */

long * FUN_1082921e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082921f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 108292200; end: 10829226f;  */

long * FUN_108292200(long *param_1)

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



/* Entry: 108292270; end: 108292283;  */

void FUN_108292270(void)

{
  func_0x000108292244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108292284; end: 1082922a7;  */

void FUN_108292284(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = param_1;
  func_0x0001082923e0();
  uVar6 = param_1[1];
  lVar2 = param_1[2];
  *puVar5 = &PTR_SUB_110a35488;
  puVar5[1] = uVar6;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = param_1[3];
  puVar5[2] = lVar2;
  puVar5[3] = uVar6;
  return;
}



/* Entry: 1082922a8; end: 1082922cf;  */

void FUN_1082922a8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_SUB_110a35488;
  param_2[1] = uVar5;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = lVar2;
  param_2[3] = uVar5;
  return;
}



/* Entry: 1082922d0; end: 108292307;  */

long FUN_1082922d0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a354e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108292308; end: 10829233f;  */

undefined ** FUN_108292308(void)

{
  return &PTR_DAT_110a354e8;
}



/* Entry: 108292340; end: 10829236b;  */

undefined8 * FUN_108292340(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10829236c; end: 10829247f;  */

void FUN_10829236c(void)

{
  return;
}



/* Entry: 108292480; end: 1082924e3;  */

long FUN_108292480(long param_1)

{
  FUN_1082924e4();
  func_0x000108292528(param_1);
  func_0x000108293e6c(param_1 + 0x88);
  FUN_10829443c(param_1 + 0x70);
  FUN_1082943f0(param_1 + 0x50);
  func_0x0001082942e4(param_1 + 0x48);
  func_0x000107c27a18(param_1 + 0x20);
  FUN_10828e998(param_1 + 0x10);
  FUN_108289ea0(param_1 + 8);
  return param_1;
}



/* Entry: 1082924e4; end: 1082925c7;  */

void FUN_1082924e4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  for (lVar2 = (long)*(int *)(param_1 + 0x18) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    if (*plVar1 != 0) {
      func_0x000108294f78();
    }
    plVar1 = plVar1 + 1;
  }
  return;
}



/* Entry: 1082925c8; end: 1082926af;  */

void FUN_1082925c8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iStack_54;
  
  uVar8 = 0;
  lVar7 = 0;
  do {
    uVar9 = (ulong)*(int *)(param_1 + 0x18);
    if (uVar9 <= uVar8) {
      return;
    }
    if (lVar7 != *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2) {
      uVar9 = (ulong)*(int *)(*(long *)(param_1 + 0x20) + lVar7 * 4);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + uVar8 * 8);
    uVar10 = uVar9 - uVar8;
    plVar3 = plVar1;
    iStack_54 = (int)uVar8;
    for (uVar11 = uVar10; uVar11 != 0; uVar11 = uVar11 - 1) {
      if ((*(byte *)(*plVar3 + 0x4c) >> 5 & 1) == 0) {
        FUN_1082944fc(*plVar3,&iStack_54);
      }
      plVar3 = plVar3 + 1;
    }
    for (uVar5 = 0; uVar5 != (uint)uVar10; uVar5 = uVar5 + 1) {
      if (uVar10 <= uVar5) {
LAB_1082926ac:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1082926b0);
        (*pcVar4)();
      }
      while( true ) {
        lVar6 = plVar1[uVar5];
        uVar2 = (*(uint *)(lVar6 + 0x4c) >> 7) - (int)uVar8;
        if (uVar2 == uVar5) break;
        if (uVar10 <= uVar2) goto LAB_1082926ac;
        plVar1[uVar5] = plVar1[uVar2];
        plVar1[uVar2] = lVar6;
      }
    }
    lVar7 = lVar7 + 1;
    uVar8 = uVar9 + 1;
  } while( true );
}



/* Entry: 1082926b0; end: 1082926cf;  */

void FUN_1082926b0(long param_1)

{
  FUN_10828e9cc();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


