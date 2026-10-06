/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10061db8c; end: 10061dbab;  */

void FUN_10061db8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}



/* Entry: 10061dbac; end: 10061dc6b;  */

void FUN_10061dbac(long param_1)

{
  func_0x000100601d10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061dc6c; end: 10061dc87;  */

void FUN_10061dc6c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  FUN_100450bd8();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061dc88; end: 10061dcab;  */

void FUN_10061dc88(long param_1)

{
  func_0x00010061dc7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061dcac; end: 10061dccf;  */

void FUN_10061dcac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000058);
  return;
}



/* Entry: 10061dcd0; end: 10061dcf3;  */

void FUN_10061dcd0(long param_1)

{
  func_0x000100561e7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061dcf4; end: 10061dd0f;  */

void FUN_10061dcf4(void)

{
  char in_stack_000000d8;
  
  if (in_stack_000000d8 == '\x01') {
    FUN_100627b64();
  }
  return;
}



/* Entry: 10061dd10; end: 10061dd37;  */

long FUN_10061dd10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10061dd38; end: 10061dd3f;  */

void FUN_10061dd38(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 10061dd40; end: 10061dd6b;  */

undefined8 FUN_10061dd40(undefined8 param_1)

{
  FUN_10061dd38();
  FUN_10061dd6c(param_1);
  return param_1;
}



/* Entry: 10061dd6c; end: 10061dd87;  */

void FUN_10061dd6c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10061dd88; end: 10061ddab;  */

void FUN_10061dd88(long param_1)

{
  func_0x000100563fa8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061ddac; end: 10061ddc7;  */

void FUN_10061ddac(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10061ddc8; end: 10061dde3;  */

void FUN_10061ddc8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010061ddbc();
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



/* Entry: 10061dde4; end: 10061dedf;  */

undefined8 * FUN_10061dde4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
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
  return param_1;
}



/* Entry: 10061dee0; end: 10061dfc7;  */

void FUN_10061dee0(long *param_1)

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
    FUN_10061dfc8();
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



/* Entry: 10061dfc8; end: 10061e0c3;  */

void FUN_10061dfc8(long *param_1)

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
  FUN_1005f8e48(&UNK_108735a14);
  func_0x0001005f8e50();
  func_0x0001005f8e5c();
  FUN_10061e0c4();
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



/* Entry: 10061e0c4; end: 10061e2db;  */

void FUN_10061e0c4(ulong *param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  long lVar11;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *param_1;
  puVar8 = (ulong *)0x40;
  func_0x000107c60e20();
  *puVar8 = (ulong)&UNK_108735810;
  puVar8[1] = (ulong)&UNK_1087359e0;
  puVar8[6] = uVar12;
  puVar9 = puVar8;
  FUN_10061e2dc();
  func_0x0001005fdc90();
  func_0x00010061de64();
  while( true ) {
    *(undefined1 *)((long)puVar8 + 0x39) = 1;
    func_0x00010061e2e4();
    if (extraout_x8 != 0) {
      do {
        func_0x0001005f0280();
      } while (extraout_w10 != 0);
    }
    puVar10 = puVar8 + 4;
    func_0x00010061e2f8();
    if (((ulong)puVar10 & 1) == 0) {
      *(undefined1 *)(puVar8 + 7) = 0;
      if (*puVar9 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061e330();
      if (((ulong)puVar10 & 1) != 0) {
        return;
      }
    }
    pbVar1 = (byte *)(puVar8[5] + 0xa8);
    do {
      bVar4 = *pbVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar4 & 1) != 0));
    if ((*(long *)(puVar8[5] + 0xe8) == 0) && ((*(byte *)(puVar8[5] + 0xb8) & 1) != 0)) break;
    func_0x000107c33174();
    puVar10 = (ulong *)(extraout_x8_00 + 0x10);
    FUN_1006716e8();
    *pbVar1 = 0;
    func_0x000107c33180();
    func_0x000107c3327c();
    do {
      func_0x0001005f0280();
    } while (extraout_w10_00 != 0);
    func_0x0001005f9600();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar12 = puVar8[4];
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        FUN_10054ef74();
        uVar13 = *puVar10;
      }
      plVar2 = (long *)(uVar12 + 0x10);
      do {
        lVar11 = *plVar2;
        if (lVar11 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar5 == '\0';
          uVar6 = 1;
          if (bVar7) {
            func_0x000107c33030();
            if (bVar7) {
              func_0x000107c33028();
              uVar3 = extraout_w8;
              if ((bool)uVar6) {
                uVar3 = extraout_w9;
              }
              func_0x000107c330b0();
              func_0x000107c3325c();
              *(undefined1 *)puVar10 = uVar3;
              func_0x000107c33014(0);
            }
            func_0x000107c3304c();
            *(ulong *)(extraout_x8_01 + 0x20) = uVar13;
            func_0x000107c33000();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    FUN_1005fbc94();
    uVar12 = *puVar10;
    FUN_1005f9654();
    if ((uVar12 >> 0x20 & 1) == 0) goto LAB_1005f96a8;
    FUN_1005f9ba0(puVar8 + 4,puVar8[6]);
    uVar12 = *(ulong *)(puVar8[6] + 0x130);
    *(ulong *)(puVar8[6] + 0x130) = puVar8[4];
    puVar8[4] = uVar12;
    FUN_1005f9654();
  }
  func_0x000107c3323c();
  *pbVar1 = 0;
  func_0x000107c33180();
LAB_1005f96a8:
  FUN_1005f9698();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar8);
  return;
}



/* Entry: 10061e2dc; end: 10061e33f;  */

undefined8 * FUN_10061e2dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  *(undefined8 *)(param_1 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 10061e340; end: 10061e437;  */

bool FUN_10061e340(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  do {
    bVar2 = *param_1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < 1) {
    lVar6 = *(long *)(param_1 + 0x20);
    uVar1 = 0;
    if (*(long *)(param_1 + 0x28) != lVar6) {
      uVar1 = (*(long *)(param_1 + 0x28) - lVar6 >> 3) * 0xaa - 1;
    }
    lVar8 = *(long *)(param_1 + 0x40);
    uVar9 = lVar8 + *(long *)(param_1 + 0x38);
    if (uVar1 == uVar9) {
      FUN_10061e438(param_1 + 0x18);
      lVar6 = *(long *)(param_1 + 0x20);
      lVar8 = *(long *)(param_1 + 0x40);
      uVar9 = lVar8 + *(long *)(param_1 + 0x38);
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
    *puVar7 = param_2;
    puVar7[1] = param_3;
    puVar7[2] = param_4;
    *(long *)(param_1 + 0x40) = lVar8 + 1;
  }
  else {
    *(int *)(param_1 + 0x10) = iVar3 + -1;
  }
  *param_1 = 0;
  return iVar3 < 1;
}



/* Entry: 10061e438; end: 10061e857;  */

/* WARNING: Possible PIC construction at 0x00010061e7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061e5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061e6ac) */
/* WARNING: Removing unreachable block (ram,0x00010061e850) */
/* WARNING: Removing unreachable block (ram,0x00010061e83c) */
/* WARNING: Removing unreachable block (ram,0x00010061e828) */
/* WARNING: Removing unreachable block (ram,0x00010061e80c) */
/* WARNING: Removing unreachable block (ram,0x00010061e7dc) */
/* WARNING: Removing unreachable block (ram,0x00010061e5ac) */
/* WARNING: Removing unreachable block (ram,0x00010061e5c4) */

void FUN_10061e438(ulong *param_1)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_1[4] < 0xaa) {
    puVar17 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)param_1[3];
    puVar5 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    puVar18 = (undefined8 *)((long)puVar17 - (long)puVar14);
    if ((undefined8 *)((long)puVar15 - (long)puVar5) <= puVar18) {
      uVar9 = (long)puVar15 - (long)puVar5 >> 2;
      if (puVar15 == puVar5) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d == 0) {
        puVar4 = (undefined8 *)(uVar9 * 8);
        func_0x000107c60e20();
        uVar7 = 0xff0;
        func_0x000107c60e20();
        puVar15 = (undefined8 *)((long)puVar4 + (long)puVar18);
        puVar10 = puVar4 + uVar9;
        puVar5 = puVar4;
        if (puVar18 == (undefined8 *)(uVar9 * 8)) {
          if (puVar17 == puVar14) {
            func_0x000107c60e20(8);
            goto code_r0x000107c60e14;
          }
          lVar2 = ((long)puVar18 >> 3) + 1;
          puVar15 = puVar15 + -((ulong)(lVar2 - (lVar2 >> 0x3f)) >> 1);
        }
        puVar18 = puVar15 + 1;
        *puVar15 = uVar7;
        if (puVar17 != puVar14) {
LAB_10061e5e4:
          puVar14 = puVar15;
          if (puVar15 == puVar4) {
            if (puVar10 <= puVar18) {
              uVar9 = (long)puVar10 - (long)puVar4 >> 2;
              if ((long)puVar10 - (long)puVar4 == 0) {
                uVar9 = 1;
              }
              if (uVar9 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10061e7fc);
                (*pcVar3)();
              }
              lVar8 = uVar9 << 3;
              func_0x000107c60e20();
              uVar9 = uVar9 + 3 >> 2;
              puVar17 = (undefined8 *)(lVar8 + uVar9 * 8);
              lVar2 = (long)puVar18 - (long)puVar4;
              if (lVar2 == 0) goto code_r0x000107c60e14;
              puVar14 = (undefined8 *)((long)puVar17 + lVar2);
              if ((lVar2 - 8U < 0x18) ||
                 (lVar12 = uVar9 * 8, (ulong)((lVar12 + lVar8) - (long)puVar15) < 0x20))
              goto LAB_10061e690;
              uVar9 = (lVar2 - 8U >> 3) + 1;
              uVar16 = uVar9 & 0x3ffffffffffffffc;
              puVar17 = puVar17 + uVar16;
              puVar18 = puVar15 + 2;
              puVar10 = (undefined8 *)(lVar8 + lVar12 + 0x10);
              uVar6 = uVar16;
              do {
                uVar7 = puVar18[-2];
                uVar20 = puVar18[1];
                uVar19 = *puVar18;
                puVar10[-1] = puVar18[-1];
                puVar10[-2] = uVar7;
                puVar10[1] = uVar20;
                *puVar10 = uVar19;
                puVar18 = puVar18 + 4;
                puVar10 = puVar10 + 4;
                uVar6 = uVar6 - 4;
              } while (uVar6 != 0);
              puVar15 = puVar15 + uVar16;
              if (uVar9 != uVar16) {
LAB_10061e690:
                do {
                  puVar18 = puVar17 + 1;
                  *puVar17 = *puVar15;
                  puVar17 = puVar18;
                  puVar15 = puVar15 + 1;
                } while (puVar18 != puVar14);
              }
              goto code_r0x000107c60e14;
            }
            lVar2 = ((long)puVar10 - (long)puVar18 >> 3) + 1;
            lVar8 = (long)puVar18 - (long)puVar4;
            lVar12 = (long)puVar18 - (long)puVar4;
            puVar18 = puVar18 + ((ulong)(lVar2 - (lVar2 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar18 - lVar8);
            if (lVar12 != 0) {
              func_0x000107c610b8(puVar14,puVar15,lVar12);
            }
          }
          puVar17 = puVar17 + -1;
          puVar15 = puVar14 + -1;
          *puVar15 = *puVar17;
          if (puVar17 == (undefined8 *)param_1[1]) goto LAB_10061e53c;
          goto LAB_10061e5e4;
        }
LAB_10061e53c:
        puVar5 = (undefined8 *)*param_1;
        *param_1 = (ulong)puVar4;
        param_1[1] = (ulong)puVar15;
        param_1[2] = (ulong)puVar18;
        param_1[3] = (ulong)puVar10;
        if (puVar5 == (undefined8 *)0x0) {
          return;
        }
        goto code_r0x000107c60e14;
      }
LAB_10061e7fc:
      func_0x000104bd35f4();
      puVar5 = puVar15;
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    uVar7 = 0xff0;
    func_0x000107c60e20();
    if (puVar15 != puVar17) {
      *puVar17 = uVar7;
      param_1[2] = (ulong)(puVar17 + 1);
      return;
    }
    if (puVar14 == puVar5) {
      uVar9 = (long)puVar15 - (long)puVar14 >> 2;
      if (puVar17 == puVar14) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d != 0) goto LAB_10061e7fc;
      uVar16 = uVar9 + 3 >> 2;
      uVar6 = uVar9 * 8;
      func_0x000107c60e20();
      puVar15 = (undefined8 *)(uVar6 + uVar16 * 8);
      puVar10 = puVar15;
      if ((long)puVar17 - (long)puVar14 != 0) {
        puVar10 = (undefined8 *)((long)puVar15 + (long)puVar18);
        uVar13 = ((long)puVar17 - (long)puVar14) - 8;
        puVar17 = puVar15;
        puVar18 = puVar14;
        if ((0x37 < uVar13) && (lVar2 = uVar16 * 8 + uVar6, 0x1f < (ulong)(lVar2 - (long)puVar14)))
        {
          uVar16 = (uVar13 >> 3) + 1;
          uVar11 = uVar16 & 0x3ffffffffffffffc;
          puVar17 = puVar14 + 2;
          puVar18 = (undefined8 *)(lVar2 + 0x10);
          uVar13 = uVar11;
          do {
            uVar19 = puVar17[-2];
            uVar21 = puVar17[1];
            uVar20 = *puVar17;
            puVar18[-1] = puVar17[-1];
            puVar18[-2] = uVar19;
            puVar18[1] = uVar21;
            *puVar18 = uVar20;
            puVar17 = puVar17 + 4;
            puVar18 = puVar18 + 4;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
          puVar17 = puVar15 + uVar11;
          puVar18 = puVar14 + uVar11;
          if (uVar16 == uVar11) goto LAB_10061e7c8;
        }
        do {
          puVar4 = puVar17 + 1;
          *puVar17 = *puVar18;
          puVar17 = puVar4;
          puVar18 = puVar18 + 1;
        } while (puVar4 != puVar10);
      }
LAB_10061e7c8:
      *param_1 = uVar6;
      param_1[1] = (ulong)puVar15;
      param_1[2] = (ulong)puVar10;
      param_1[3] = uVar6 + uVar9 * 8;
      bVar1 = puVar14 != (undefined8 *)0x0;
      puVar14 = puVar15;
      if (bVar1) goto code_r0x000107c60e14;
    }
    puVar14[-1] = uVar7;
    param_1[1] = (ulong)puVar14;
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    uVar7 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  }
  puVar17 = (undefined8 *)param_1[2];
  if (puVar17 != (undefined8 *)param_1[3]) goto code_r0x00010bcd32c4;
  puVar5 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  if (puVar5 <= puVar15 && (long)puVar15 - (long)puVar5 != 0) {
    lVar8 = (((long)puVar15 - (long)puVar5 >> 3) + 1) / 2;
    puVar5 = puVar15 + -lVar8;
    lVar2 = (long)puVar17 - (long)puVar15;
    if (lVar2 != 0) {
      _memmove(puVar5,puVar15,lVar2);
      puVar15 = (undefined8 *)param_1[1];
    }
    puVar17 = (undefined8 *)((long)puVar5 + lVar2);
    param_1[1] = (ulong)(puVar15 + -lVar8);
    goto code_r0x00010bcd32c4;
  }
  uVar9 = (long)puVar17 - (long)puVar5 >> 2;
  if ((long)puVar17 - (long)puVar5 == 0) {
    uVar9 = 1;
  }
  if (uVar9 >> 0x3d != 0) {
    func_0x000104bd35f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt13exception_ptrC1ERKS__110346190)(extraout_x8,*param_1 + 0x18);
    return;
  }
  uVar6 = uVar9 * 8;
  __Znwm();
  puVar14 = (undefined8 *)(uVar6 + (uVar9 >> 2) * 8);
  lVar2 = (long)puVar17 - (long)puVar15;
  puVar17 = puVar14;
  if (lVar2 != 0) {
    puVar17 = (undefined8 *)((long)puVar14 + lVar2);
    puVar18 = puVar14;
    if ((0x37 < lVar2 - 8U) &&
       (lVar8 = (uVar9 >> 2) * 8 + uVar6, 0x1f < (ulong)(lVar8 - (long)puVar15))) {
      uVar16 = (lVar2 - 8U >> 3) + 1;
      uVar11 = uVar16 & 0x3ffffffffffffffc;
      puVar18 = puVar15 + 2;
      puVar10 = (undefined8 *)(lVar8 + 0x10);
      uVar13 = uVar11;
      do {
        uVar19 = puVar18[-2];
        uVar21 = puVar18[1];
        uVar20 = *puVar18;
        puVar10[-1] = puVar18[-1];
        puVar10[-2] = uVar19;
        puVar10[1] = uVar21;
        *puVar10 = uVar20;
        puVar18 = puVar18 + 4;
        puVar10 = puVar10 + 4;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
      puVar18 = puVar14 + uVar11;
      puVar15 = puVar15 + uVar11;
      if (uVar16 == uVar11) goto code_r0x00010bcd32ac;
    }
    do {
      puVar10 = puVar18 + 1;
      *puVar18 = *puVar15;
      puVar18 = puVar10;
      puVar15 = puVar15 + 1;
    } while (puVar10 != puVar17);
  }
code_r0x00010bcd32ac:
  *param_1 = uVar6;
  param_1[1] = (ulong)puVar14;
  param_1[2] = (ulong)puVar17;
  param_1[3] = uVar6 + uVar9 * 8;
  if (puVar5 != (undefined8 *)0x0) {
    __ZdlPv(puVar5);
    puVar17 = (undefined8 *)param_1[2];
  }
code_r0x00010bcd32c4:
  *puVar17 = uVar7;
  param_1[2] = (ulong)(puVar17 + 1);
  return;
}



/* Entry: 10061e858; end: 10061e873;  */

void FUN_10061e858(void)

{
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  return;
}



/* Entry: 10061e874; end: 10061e97f;  */

void FUN_10061e874(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  func_0x00010061e864();
  FUN_10061e980(&UNK_108701d9c);
  func_0x00010061e988();
  FUN_10061e994(param_1 + 0x28);
  func_0x0001006215a8();
  do {
    func_0x0001006215b8();
  } while (extraout_w10 != 0);
  func_0x0001006215c8();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x000107c32bb0();
    if (*unaff_x20 == 0) {
      FUN_10054ef74();
    }
    func_0x000107c32c84();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c32be0();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c32c68();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c32bc0();
        if ((bool)in_ZR) {
          func_0x000107c32bdc();
          func_0x000107c32bb8();
          func_0x000107c32ba4();
        }
        func_0x000107c32b98();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001006215d8();
  func_0x0001006215e0();
  func_0x0001006215e8();
  func_0x0001006215f0();
  func_0x0001006215f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10061e980; end: 10061e993;  */

undefined8 * FUN_10061e980(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 10061e994; end: 10061ea5b;  */

void FUN_10061e994(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [96];
  
  FUN_10054f3f8(auStack_a8);
  FUN_10054f4ac(param_1,auStack_a8);
  iVar2 = *(int *)(param_2 + 2);
  if (*(char *)((long)param_2 + 0x14) == '\x01') {
    iVar1 = iVar2;
    if (2 < iVar2 - 1U) {
      iVar1 = 0;
    }
    FUN_10061ea5c(auStack_90,*param_2,iVar1);
    FUN_10061fd34(auStack_90);
  }
  if ((iVar2 == 0) && ((*(byte *)((long)param_2 + 0x15) & 1) != 0)) {
    FUN_100620460(*param_2);
  }
  FUN_1005f94f0(auStack_a8);
  FUN_1005f95d0(auStack_a8);
  return;
}



/* Entry: 10061ea5c; end: 10061ec33;  */

void FUN_10061ea5c(undefined4 *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [28];
  int iStack_44;
  
  FUN_1005f3d5c();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c34214(auStack_60);
      func_0x000107c34370(auStack_78);
      FUN_10054f908();
      func_0x000107c34324();
      func_0x000107c345b4();
      func_0x000107c345f0();
      func_0x000107c34394();
      func_0x000107c344e4();
      func_0x000107c344c4();
      func_0x000107c34514();
    }
  }
  FUN_10061ec34();
  if ((int)param_1 == 0) {
    func_0x00010061ec3c();
    func_0x0001005f5a7c();
    FUN_10061fbe8();
    func_0x00010061fd5c();
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x88);
    if ((uVar2 != 0) && (*(long *)(unaff_x20 + 0x98) != 0)) {
      uVar3 = (ulong)iStack_44;
      uVar4 = uVar2 - 1;
      if ((uVar2 & uVar4) == 0) {
        uVar5 = uVar4 & uVar3;
      }
      else {
        uVar5 = uVar3;
        if (uVar2 <= uVar3) {
          uVar5 = 0;
          if (uVar2 != 0) {
            uVar5 = uVar3 / uVar2;
          }
          uVar5 = uVar3 - uVar5 * uVar2;
        }
      }
      plVar6 = *(long **)(*(long *)(unaff_x20 + 0x80) + uVar5 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_10061eb78;
            uVar7 = plVar6[1];
            if (uVar7 != uVar3) break;
            if (*(int *)(plVar6 + 2) == iStack_44) {
              FUN_10061fe30();
              *unaff_x19 = *param_1;
              FUN_10054f8dc(unaff_x19 + 2,param_1 + 2);
              uVar8 = *(undefined8 *)(param_1 + 8);
              *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(param_1 + 10);
              *(undefined8 *)(unaff_x19 + 8) = uVar8;
              FUN_100606fd8(unaff_x19 + 0xc,param_1 + 0xc);
              *(undefined8 *)(unaff_x19 + 0x14) = *(undefined8 *)(param_1 + 0x14);
              *(undefined1 *)(unaff_x19 + 0x16) = 1;
              return;
            }
          }
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
        } while (uVar7 == uVar5);
      }
    }
LAB_10061eb78:
    func_0x00010061ec3c();
    func_0x0001005f5a7c();
    FUN_10061fbe8();
    func_0x00010061fd5c();
    if (*(char *)(unaff_x19 + 0x16) == '\x01') {
      FUN_10061fe30();
      FUN_100620260();
    }
  }
  return;
}



/* Entry: 10061ec34; end: 10061ec5f;  */

undefined1 * FUN_10061ec34(void)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long unaff_x20;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x16;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10061ec60; end: 10061eeaf;  */

void FUN_10061ec60(long *param_1,undefined ***param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *extraout_x9;
  long extraout_x10;
  long *unaff_x21;
  long unaff_x22;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [24];
  long *plStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [32];
  long *plStack_88;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010061ec54();
  FUN_1005edb70();
  FUN_10061eeb0();
  lVar7 = unaff_x22 + 0x60;
  plVar4 = (long *)(unaff_x22 + 0x68);
  do {
    uVar2 = *plVar4 == lVar7;
    if ((bool)uVar2) {
      func_0x0001005ec6c0();
      FUN_1005ecd30();
      ppuStack_d8 = &PTR_DAT_110a7dda8;
      lStack_50 = 0;
      func_0x0001005ec700();
      func_0x0001005ec708();
      plVar4 = param_1 + 2;
      param_2 = &ppuStack_d8;
      func_0x00010054c274();
      param_1[1] = lVar7;
      param_1[2] = (long)&PTR_DAT_110a7dda8;
      param_1[0x13] = lStack_50;
      lVar7 = *(long *)(unaff_x22 + 0x60);
      *param_1 = lVar7;
      *(long **)(lVar7 + 8) = param_1;
      *(long **)(unaff_x22 + 0x60) = param_1;
      *(long *)(unaff_x22 + 0x70) = *(long *)(unaff_x22 + 0x70) + 1;
      func_0x0001005edc3c();
      goto LAB_10061ed30;
    }
    func_0x0001005ed218();
    plVar4 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar2 = lVar7 == *extraout_x9;
  plVar4 = param_1;
  if (!(bool)uVar2) {
    func_0x000107c34250();
    func_0x000107c3452c();
    plVar4 = param_1;
  }
LAB_10061ed30:
  iVar3 = (int)plVar4;
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x60) + 0x10);
  *(long *)(*(long *)(unaff_x22 + 0x60) + 0x98) = unaff_x22;
  func_0x00010061eec8();
  func_0x00010061eed0();
  FUN_1005ef160();
  *unaff_x21 = (long)plVar4;
  unaff_x21[1] = (long)plVar4;
  plVar6 = unaff_x21 + 2;
  *(undefined1 *)plVar6 = 0;
  *(undefined1 *)(unaff_x21 + 0xd) = 0;
  FUN_10061f190();
  if (iVar3 == 0) {
    func_0x0001005ed474(uStack_48);
    if ((bool)uVar2) {
      if ((char)unaff_x21[0xd] == '\x01') {
        FUN_10061fba0();
        *(undefined1 *)(plVar6 + 0xb) = 0;
      }
      return;
    }
  }
  else {
    FUN_10054c7ec();
    plVar5 = plVar4;
    FUN_1005ede54();
    ppuStack_d8 = (undefined **)CONCAT44(ppuStack_d8._4_4_,(int)plVar5);
    func_0x0001005ecf6c(auStack_d0);
    FUN_10061f5a8();
    uStack_b0 = 2;
    plVar5 = plVar4;
    FUN_1005f9230();
    plStack_b8 = plVar5;
    FUN_10061f61c(auStack_a8,plVar4,3);
    plVar5 = plVar4;
    FUN_10054c8f4(plVar4,4);
    param_2 = &ppuStack_d8;
    plStack_88 = plVar5;
    FUN_10061fa70(plVar6);
    FUN_10061fba0(&ppuStack_d8);
    func_0x0001005ed474(uStack_48);
    unaff_x21 = plVar4;
    if ((bool)uVar2) {
      return;
    }
  }
  func_0x000107c60e78();
  func_0x00010061ec54();
  FUN_10061fba0(&ppuStack_d8);
  FUN_10061fd34(plVar6);
  if ((int)unaff_x22 == 1) {
    func_0x000107c34728();
    func_0x000107c343a0();
    func_0x000107c60e50();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061ee90);
    (*pcVar1)();
  }
  func_0x000107c3472c();
  func_0x000104bd46a0(unaff_x21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_2);
  return;
}



/* Entry: 10061eeb0; end: 10061eee7;  */

void FUN_10061eeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined1 uStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  uStack0000000000000010 = 1;
  uStack0000000000000008 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_3);
  return;
}



/* Entry: 10061eee8; end: 10061efb7;  */

undefined1  [16] FUN_10061eee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x20;
  func_0x00010061eedc(0,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90),
                      *(undefined8 *)(lVar3 + 0x98));
  lVar3 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar4 = unaff_x20[4];
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(lVar4);
  FUN_1000b693c(param_2,param_3);
  lVar2 = lVar3;
  FUN_10061f198(lVar3,lVar1,lVar4,param_2);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(param_2);
  auVar5._8_8_ = &PTR_DAT_1107a7bc0;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10061efb8; end: 10061efc7;  */

void FUN_10061efb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10061efc8; end: 10061f06b;  */

void FUN_10061efc8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_10dd3ad08;
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  puStack_58 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0x13f;
  FUN_10061efb8();
  if (puVar2 < (undefined1 *)0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c61524(param_1,0,5,&puStack_48,param_1 + 0x68);
  }
  return;
}



/* Entry: 10061f06c; end: 10061f073;  */

void FUN_10061f06c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10061f074; end: 10061f18f;  */

void FUN_10061f074(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c60188();
  if (uVar2 < 0x40) {
    func_0x000107c61504(auStack_60,*(long *)(lVar1 + -8) + 0x40,&UNK_10dd3af18);
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    puStack_40 = auStack_60;
    func_0x000107c60188();
    if (uVar2 < 0x40) {
      func_0x000107c61504(auStack_80,*(long *)(lVar1 + -8) + 0x40,&UNK_10dd3af18);
      uVar2 = *(ulong *)(param_1 + 0x20);
      lVar1 = 0x13f;
      puStack_38 = auStack_80;
      func_0x000107c60188();
      if (uVar2 < 0x40) {
        func_0x000107c61504(auStack_a0,*(long *)(lVar1 + -8) + 0x40,&UNK_10dd3af18);
        uVar2 = *(ulong *)(param_1 + 0x28);
        lVar1 = 0x13f;
        puStack_30 = auStack_a0;
        func_0x000107c60188();
        if (uVar2 < 0x40) {
          func_0x000107c61504(auStack_c0,*(long *)(lVar1 + -8) + 0x40,&UNK_10dd3af18);
          puStack_28 = auStack_c0;
          func_0x000107c6153c(param_1,0,4,&puStack_40,param_1 + 0x30);
        }
      }
    }
  }
  return;
}



/* Entry: 10061f190; end: 10061f197;  */

undefined8 FUN_10061f190(void)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *unaff_x19;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  uint *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  uint *puStack_48;
  
  puVar4 = auStack_160;
  if ((unaff_x19[0x1c] & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  FUN_1004c3ea4(*(undefined8 *)(unaff_x19 + 2),2);
  puVar2 = unaff_x19;
  FUN_10054c7ec();
  puVar6 = (uint *)0x0;
  puStack_130 = (uint *)0x1e;
  for (iVar8 = -5; iVar8 != 0; iVar8 = iVar8 + 1) {
    puVar6 = puVar2;
    func_0x000107c613a8();
    if ((int)puVar6 != 5) {
      if ((int)puVar6 == 0x1b0a) {
        func_0x000107c6136c();
        func_0x000107c61368();
        uStack_128 = 0;
        puStack_130 = puVar2;
        FUN_1003a91d4(&UNK_10f82f6ae);
        FUN_1003a9204(auStack_98);
        func_0x000107c613b8(puVar2,&puStack_130);
        puVar6 = puVar2;
        func_0x000107c60e5c();
        uVar5 = *puVar6;
        puVar3 = auStack_98;
        func_0x000107c613b8(puVar3,&puStack_130);
        if ((int)puVar2 != 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 2);
          puVar2 = unaff_x19 + 0x16;
          func_0x000107c60c94();
          func_0x000107c3a50c();
          uStack_60 = (ulong)((int)puVar3 == 0);
          uStack_78 = 0;
          uStack_68 = 0;
          uStack_58 = 0;
          uStack_70 = (ulong)uVar5;
          puStack_50 = puVar4;
          puStack_48 = puVar2;
          FUN_1003a91d4(&UNK_10f82fad6);
          FUN_1003a9204(auStack_148);
          func_0x000107c313a4(uVar7,0x1b0a,auStack_148);
          func_0x000107c3a4fc();
          func_0x000107c3a504();
        }
        func_0x000107c60ca0(auStack_98);
        bVar1 = false;
        puVar6 = (uint *)0x1b0a;
        goto LAB_10054c548;
      }
      break;
    }
    func_0x000107c310bc(&puStack_130);
    puStack_130 = (uint *)((long)puStack_130 << 1);
  }
  uVar5 = (uint)puVar6;
  bVar1 = uVar5 == 100;
  if ((uVar5 & 0xfffffffe) == 100) {
    if (uVar5 != 100) {
LAB_10054c538:
      FUN_10054cb48();
      return 0;
    }
  }
  else {
LAB_10054c548:
    uVar7 = *(undefined8 *)(unaff_x19 + 2);
    func_0x000107c60c94(auStack_80,unaff_x19 + 0x16);
    FUN_1004c3cd0(&puStack_130,&UNK_10f82fb25,auStack_80);
    func_0x000107c313a4(uVar7,puVar6,&puStack_130);
    func_0x000107c60ca0(&puStack_130);
    func_0x000107c60ca0(auStack_80);
    if (!bVar1) goto LAB_10054c538;
  }
  return 1;
}



/* Entry: 10061f198; end: 10061f1f7;  */

void FUN_10061f198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c613fc();
  func_0x00010061f3ac(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10061f1f8; end: 10061f5a7;  */

void FUN_10061f1f8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar3 = 0xff;
  func_0x000107c60188(0xff,param_2);
  puVar2 = PTR___sSbN_11034dd40;
  lVar4 = 0;
  func_0x000107c61510(0,uVar3,PTR___sSbN_11034dd40,"value completed ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
  *(undefined1 *)(param_1 + iVar1) = 0;
  lVar5 = 0;
  lStack_80 = param_2;
  lStack_78 = param_3;
  lStack_70 = param_4;
  lStack_68 = param_5;
  FUN_10061efb8(0,&lStack_80);
  lVar4 = param_1 + *(int *)(lVar5 + 0x34);
  uVar3 = 0xff;
  func_0x000107c60188(0xff,param_3);
  lVar6 = 0;
  func_0x000107c61510(0,uVar3,puVar2,"value completed ",0);
  iVar1 = *(int *)(lVar6 + 0x30);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(lVar4,1,1,param_3);
  *(undefined1 *)(lVar4 + iVar1) = 0;
  lVar4 = param_1 + *(int *)(lVar5 + 0x38);
  uVar3 = 0xff;
  func_0x000107c60188(0xff,param_4);
  lVar6 = 0;
  func_0x000107c61510(0,uVar3,puVar2,"value completed ",0);
  iVar1 = *(int *)(lVar6 + 0x30);
  (**(code **)(*(long *)(param_4 + -8) + 0x38))(lVar4,1,1,param_4);
  *(undefined1 *)(lVar4 + iVar1) = 0;
  param_1 = param_1 + *(int *)(lVar5 + 0x3c);
  uVar3 = 0xff;
  func_0x000107c60188(0xff,param_5);
  lVar4 = 0;
  func_0x000107c61510(0,uVar3,puVar2,"value completed ",0);
  iVar1 = *(int *)(lVar4 + 0x30);
  (**(code **)(*(long *)(param_5 + -8) + 0x38))(param_1,1,1,param_5);
  *(undefined1 *)(param_1 + iVar1) = 0;
  return;
}



/* Entry: 10061f5a8; end: 10061f60b;  */

void FUN_10061f5a8(int param_1)

{
  undefined8 *unaff_x19;
  
  FUN_1005ecf5c();
  if (param_1 == 4) {
    func_0x000107c61350();
    func_0x000107c6134c();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_10029a7f4();
    return;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10061f60c; end: 10061f61b;  */

void FUN_10061f60c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_11034d010)();
  return;
}



/* Entry: 10061f61c; end: 10061f667;  */

void FUN_10061f61c(int param_1)

{
  undefined1 *unaff_x19;
  
  FUN_10061f60c();
  if (param_1 != 5) {
    FUN_10061f668();
    FUN_10061f678();
    func_0x00010061fa40();
    FUN_100100fec();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x18] = param_1 != 5;
  return;
}



/* Entry: 10061f668; end: 10061f677;  */

void FUN_10061f668(void)

{
  return;
}



/* Entry: 10061f678; end: 10061f6bb;  */

void FUN_10061f678(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1005ecf0c(auStack_38);
  FUN_10061f6bc(param_1,auStack_38);
  func_0x00010061fa30();
  return;
}



/* Entry: 10061f6bc; end: 10061f6cf;  */

long * FUN_10061f6bc(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  undefined1 ***pppuVar14;
  undefined1 **ppuVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 **ppuVar16;
  char cVar17;
  uint uVar18;
  long lVar19;
  undefined1 **ppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(char *)((long)param_2 + 0x17) == '\0';
  plVar10 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar10 = param_2;
  }
  plVar8 = &lStack_60;
  func_0x0001005ed230();
  puVar7 = &uStack_39;
  uStack_28 = extraout_x8;
  FUN_10061f754();
  ppuVar16 = &puStack_38;
  puStack_38 = puVar7;
  lStack_30 = (long)plVar10;
  FUN_1005542b8(&lStack_60,ppuVar16,&uStack_28);
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  FUN_100100fec();
  func_0x0001005ed2b0(uStack_28);
  if ((bool)uVar3) {
    return plVar8;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  ppuVar9 = ppuVar16;
  func_0x000107c613d0();
  ppuVar9 = (undefined1 **)((long)ppuVar16 + (long)ppuVar9);
  pppuVar14 = &ppuStack_e0;
  plVar10 = plVar8;
  ppuVar15 = ppuVar9;
  func_0x0001005ed230();
  ppuStack_e0 = ppuVar16;
  uStack_c8 = extraout_x8_00;
  FUN_10061f8f0();
  iVar5 = (int)plVar10;
  if (iVar5 == 0x7b) {
    func_0x00010061fa20();
  }
  bVar2 = 0;
  lVar19 = 0;
  plVar12 = plVar10;
  do {
    cVar17 = (char)plVar12;
    uVar18 = (uint)lVar19;
    if (uVar18 == 4) {
      if (((uint)plVar12 & 0xff) == 0x2d) {
LAB_10061f84c:
        cVar17 = (char)plVar10;
        func_0x00010061fa20();
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar4 = (uVar18 & 0x7ffffffd) != 8;
      bVar1 = (uVar18 != 6 && bVar4) & bVar2;
      if ((uVar18 == 6 || !bVar4) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar12 & 0xff) == 0x2d) goto LAB_10061f84c;
        goto LAB_10061f8e4;
      }
    }
    bVar2 = bVar1;
    plVar11 = plVar8;
    FUN_10061f918(plVar8,(int)cVar17);
    plVar12 = plVar11;
    func_0x00010061fa20();
    plVar10 = plVar8;
    pppuVar14 = (undefined1 ***)plVar12;
    FUN_10061f918();
    iVar6 = (int)plVar10;
    *(byte *)((long)&plStack_d8 + lVar19) = (byte)plVar10 | (byte)((int)plVar11 << 4);
    lVar19 = lVar19 + 1;
    if (lVar19 != 0) {
      if (lVar19 == 0x10) {
        if (((iVar5 == 0x7b) && (func_0x00010061fa20(), iVar6 != 0x7d)) ||
           (bVar4 = ppuStack_e0 == ppuVar9, !bVar4)) {
LAB_10061f8e4:
          func_0x000107c29df8();
        }
        else {
          func_0x0001005ed2b0(uStack_c8);
          plVar8 = plStack_d8;
          pppuVar14 = (undefined1 ***)plStack_d0;
          if (bVar4) {
            return plStack_d8;
          }
        }
        func_0x000107c60e78();
        ppuVar16 = *pppuVar14;
        if (ppuVar16 != ppuVar15) {
          *pppuVar14 = (undefined1 **)((long)ppuVar16 + 1);
          return (long *)(long)*(char *)ppuVar16;
        }
        func_0x000107c29df8();
        puVar13 = &UNK_10df6190e;
        if ((bRam000000011326a6a0 & 1) == 0) {
          iVar5 = 0x1326a6a0;
          func_0x000107c60e48();
          if (iVar5 != 0) {
            plRam000000011326a698 = (long *)(&UNK_10df6190e + (long)puRam000000011326a690);
            func_0x000107c60e4c(0x11326a6a0);
          }
        }
        plVar10 = plRam000000011326a698;
        FUN_10061f9f8(&UNK_10df6190e,plRam000000011326a698);
        if (puRam000000011326a690 <= puVar13 + -0x10df6190e) {
          func_0x000107c29df8();
          FUN_1003b0798();
          if (plVar8 != (long *)0x0) {
            plVar10 = plVar8;
          }
          return plVar10;
        }
        return (long *)(ulong)(byte)puVar13[0x17];
      }
      func_0x00010061fa20();
      plVar12 = plVar10;
    }
  } while( true );
}



/* Entry: 10061f6d0; end: 10061f753;  */

long * FUN_10061f6d0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 in_ZR;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined1 ***pppuVar13;
  undefined1 **ppuVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 **ppuVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  undefined1 **ppuStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar7 = &lStack_60;
  func_0x0001005ed230();
  puVar6 = &uStack_39;
  uStack_28 = extraout_x8;
  FUN_10061f754();
  ppuVar15 = &puStack_38;
  puStack_38 = puVar6;
  uStack_30 = param_2;
  FUN_1005542b8(&lStack_60,ppuVar15,&uStack_28);
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  FUN_100100fec();
  func_0x0001005ed2b0(uStack_28);
  if ((bool)in_ZR) {
    return plVar7;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  ppuVar8 = ppuVar15;
  func_0x000107c613d0();
  ppuVar8 = (undefined1 **)((long)ppuVar15 + (long)ppuVar8);
  pppuVar13 = &ppuStack_e0;
  plVar9 = plVar7;
  ppuVar14 = ppuVar8;
  func_0x0001005ed230();
  ppuStack_e0 = ppuVar15;
  uStack_c8 = extraout_x8_00;
  FUN_10061f8f0();
  iVar4 = (int)plVar9;
  if (iVar4 == 0x7b) {
    func_0x00010061fa20();
  }
  bVar2 = 0;
  lVar18 = 0;
  plVar11 = plVar9;
  do {
    cVar16 = (char)plVar11;
    uVar17 = (uint)lVar18;
    if (uVar17 == 4) {
      if (((uint)plVar11 & 0xff) == 0x2d) {
LAB_10061f84c:
        cVar16 = (char)plVar9;
        func_0x00010061fa20();
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar3 = (uVar17 & 0x7ffffffd) != 8;
      bVar1 = (uVar17 != 6 && bVar3) & bVar2;
      if ((uVar17 == 6 || !bVar3) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar11 & 0xff) == 0x2d) goto LAB_10061f84c;
        goto LAB_10061f8e4;
      }
    }
    bVar2 = bVar1;
    plVar10 = plVar7;
    FUN_10061f918(plVar7,(int)cVar16);
    plVar11 = plVar10;
    func_0x00010061fa20();
    plVar9 = plVar7;
    pppuVar13 = (undefined1 ***)plVar11;
    FUN_10061f918();
    iVar5 = (int)plVar9;
    *(byte *)((long)&plStack_d8 + lVar18) = (byte)plVar9 | (byte)((int)plVar10 << 4);
    lVar18 = lVar18 + 1;
    if (lVar18 != 0) {
      if (lVar18 == 0x10) {
        if (((iVar4 == 0x7b) && (func_0x00010061fa20(), iVar5 != 0x7d)) ||
           (bVar3 = ppuStack_e0 == ppuVar8, !bVar3)) {
LAB_10061f8e4:
          func_0x000107c29df8();
        }
        else {
          func_0x0001005ed2b0(uStack_c8);
          plVar7 = plStack_d8;
          pppuVar13 = (undefined1 ***)plStack_d0;
          if (bVar3) {
            return plStack_d8;
          }
        }
        func_0x000107c60e78();
        ppuVar15 = *pppuVar13;
        if (ppuVar15 != ppuVar14) {
          *pppuVar13 = (undefined1 **)((long)ppuVar15 + 1);
          return (long *)(long)*(char *)ppuVar15;
        }
        func_0x000107c29df8();
        puVar12 = &UNK_10df6190e;
        if ((bRam000000011326a6a0 & 1) == 0) {
          iVar4 = 0x1326a6a0;
          func_0x000107c60e48();
          if (iVar4 != 0) {
            plRam000000011326a698 = (long *)(&UNK_10df6190e + (long)puRam000000011326a690);
            func_0x000107c60e4c(0x11326a6a0);
          }
        }
        plVar9 = plRam000000011326a698;
        FUN_10061f9f8(&UNK_10df6190e,plRam000000011326a698);
        if (puRam000000011326a690 <= puVar12 + -0x10df6190e) {
          func_0x000107c29df8();
          FUN_1003b0798();
          if (plVar7 != (long *)0x0) {
            plVar9 = plVar7;
          }
          return plVar9;
        }
        return (long *)(ulong)(byte)puVar12[0x17];
      }
      func_0x00010061fa20();
      plVar11 = plVar9;
    }
  } while( true );
}



/* Entry: 10061f754; end: 10061f787;  */

long * FUN_10061f754(long *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  char **ppcVar10;
  char *pcVar11;
  undefined8 extraout_x8;
  char *pcVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  char *pcStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  pcVar12 = param_2;
  func_0x000107c613d0();
  pcVar12 = param_2 + (long)pcVar12;
  ppcVar10 = &pcStack_80;
  plVar6 = param_1;
  pcVar11 = pcVar12;
  func_0x0001005ed230();
  pcStack_80 = param_2;
  uStack_68 = extraout_x8;
  FUN_10061f8f0();
  iVar4 = (int)plVar6;
  if (iVar4 == 0x7b) {
    func_0x00010061fa20();
  }
  bVar2 = 0;
  lVar15 = 0;
  plVar8 = plVar6;
  do {
    cVar13 = (char)plVar8;
    uVar14 = (uint)lVar15;
    if (uVar14 == 4) {
      if (((uint)plVar8 & 0xff) == 0x2d) {
LAB_10061f84c:
        cVar13 = (char)plVar6;
        func_0x00010061fa20();
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar3 = (uVar14 & 0x7ffffffd) != 8;
      bVar1 = (uVar14 != 6 && bVar3) & bVar2;
      if ((uVar14 == 6 || !bVar3) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar8 & 0xff) == 0x2d) goto LAB_10061f84c;
        goto LAB_10061f8e4;
      }
    }
    bVar2 = bVar1;
    plVar7 = param_1;
    FUN_10061f918(param_1,(int)cVar13);
    plVar8 = plVar7;
    func_0x00010061fa20();
    plVar6 = param_1;
    ppcVar10 = (char **)plVar8;
    FUN_10061f918();
    iVar5 = (int)plVar6;
    *(byte *)((long)&plStack_78 + lVar15) = (byte)plVar6 | (byte)((int)plVar7 << 4);
    lVar15 = lVar15 + 1;
    if (lVar15 != 0) {
      if (lVar15 == 0x10) {
        if (((iVar4 == 0x7b) && (func_0x00010061fa20(), iVar5 != 0x7d)) ||
           (bVar3 = pcStack_80 == pcVar12, !bVar3)) {
LAB_10061f8e4:
          func_0x000107c29df8();
        }
        else {
          func_0x0001005ed2b0(uStack_68);
          param_1 = plStack_78;
          ppcVar10 = (char **)plStack_70;
          if (bVar3) {
            return plStack_78;
          }
        }
        func_0x000107c60e78();
        pcVar12 = *ppcVar10;
        if (pcVar12 != pcVar11) {
          *ppcVar10 = pcVar12 + 1;
          return (long *)(long)*pcVar12;
        }
        func_0x000107c29df8();
        puVar9 = &UNK_10df6190e;
        if ((bRam000000011326a6a0 & 1) == 0) {
          iVar4 = 0x1326a6a0;
          func_0x000107c60e48();
          if (iVar4 != 0) {
            plRam000000011326a698 = (long *)(&UNK_10df6190e + (long)puRam000000011326a690);
            func_0x000107c60e4c(0x11326a6a0);
          }
        }
        plVar6 = plRam000000011326a698;
        FUN_10061f9f8(&UNK_10df6190e,plRam000000011326a698);
        if (puRam000000011326a690 <= puVar9 + -0x10df6190e) {
          func_0x000107c29df8();
          FUN_1003b0798();
          if (param_1 != (long *)0x0) {
            plVar6 = param_1;
          }
          return plVar6;
        }
        return (long *)(ulong)(byte)puVar9[0x17];
      }
      func_0x00010061fa20();
      plVar8 = plVar6;
    }
  } while( true );
}



/* Entry: 10061f788; end: 10061f8ef;  */

long * FUN_10061f788(long *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  char **ppcVar10;
  char *pcVar11;
  undefined8 extraout_x8;
  char *pcVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  char *pcStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  ppcVar10 = &pcStack_80;
  plVar6 = param_1;
  pcVar11 = param_3;
  func_0x0001005ed230();
  pcStack_80 = param_2;
  uStack_68 = extraout_x8;
  FUN_10061f8f0();
  iVar4 = (int)plVar6;
  if (iVar4 == 0x7b) {
    func_0x00010061fa20();
  }
  bVar2 = 0;
  lVar15 = 0;
  plVar8 = plVar6;
  do {
    cVar13 = (char)plVar8;
    uVar14 = (uint)lVar15;
    if (uVar14 == 4) {
      if (((uint)plVar8 & 0xff) == 0x2d) {
LAB_10061f84c:
        cVar13 = (char)plVar6;
        func_0x00010061fa20();
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar3 = (uVar14 & 0x7ffffffd) != 8;
      bVar1 = (uVar14 != 6 && bVar3) & bVar2;
      if ((uVar14 == 6 || !bVar3) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar8 & 0xff) == 0x2d) goto LAB_10061f84c;
        goto LAB_10061f8e4;
      }
    }
    bVar2 = bVar1;
    plVar7 = param_1;
    FUN_10061f918(param_1,(int)cVar13);
    plVar8 = plVar7;
    func_0x00010061fa20();
    plVar6 = param_1;
    ppcVar10 = (char **)plVar8;
    FUN_10061f918();
    iVar5 = (int)plVar6;
    *(byte *)((long)&plStack_78 + lVar15) = (byte)plVar6 | (byte)((int)plVar7 << 4);
    lVar15 = lVar15 + 1;
    if (lVar15 != 0) {
      if (lVar15 == 0x10) {
        if (((iVar4 == 0x7b) && (func_0x00010061fa20(), iVar5 != 0x7d)) ||
           (bVar3 = pcStack_80 == param_3, !bVar3)) {
LAB_10061f8e4:
          func_0x000107c29df8();
        }
        else {
          func_0x0001005ed2b0(uStack_68);
          param_1 = plStack_78;
          ppcVar10 = (char **)plStack_70;
          if (bVar3) {
            return plStack_78;
          }
        }
        func_0x000107c60e78();
        pcVar12 = *ppcVar10;
        if (pcVar12 != pcVar11) {
          *ppcVar10 = pcVar12 + 1;
          return (long *)(long)*pcVar12;
        }
        func_0x000107c29df8();
        puVar9 = &UNK_10df6190e;
        if ((bRam000000011326a6a0 & 1) == 0) {
          iVar4 = 0x1326a6a0;
          func_0x000107c60e48();
          if (iVar4 != 0) {
            plRam000000011326a698 = (long *)(&UNK_10df6190e + (long)puRam000000011326a690);
            func_0x000107c60e4c(0x11326a6a0);
          }
        }
        plVar6 = plRam000000011326a698;
        FUN_10061f9f8(&UNK_10df6190e,plRam000000011326a698);
        if (puRam000000011326a690 <= puVar9 + -0x10df6190e) {
          func_0x000107c29df8();
          FUN_1003b0798();
          if (param_1 != (long *)0x0) {
            plVar6 = param_1;
          }
          return plVar6;
        }
        return (long *)(ulong)(byte)puVar9[0x17];
      }
      func_0x00010061fa20();
      plVar8 = plVar6;
    }
  } while( true );
}



/* Entry: 10061f8f0; end: 10061f917;  */

undefined * FUN_10061f8f0(undefined *param_1,long *param_2,char *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  if (pcVar4 != param_3) {
    *param_2 = (long)(pcVar4 + 1);
    return (undefined *)(long)*pcVar4;
  }
  func_0x000107c29df8();
  puVar2 = &UNK_10df6190e;
  if ((bRam000000011326a6a0 & 1) == 0) {
    iVar1 = 0x1326a6a0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puRam000000011326a698 = &UNK_10df6190e + (long)puRam000000011326a690;
      func_0x000107c60e4c(0x11326a6a0);
    }
  }
  puVar3 = puRam000000011326a698;
  FUN_10061f9f8(&UNK_10df6190e,puRam000000011326a698);
  if (puVar2 + -0x10df6190e < puRam000000011326a690) {
    return (undefined *)(ulong)(byte)puVar2[0x17];
  }
  func_0x000107c29df8();
  FUN_1003b0798();
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
  }
  return puVar3;
}



/* Entry: 10061f918; end: 10061f9cb;  */

undefined * FUN_10061f918(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &UNK_10df6190e;
  if ((bRam000000011326a6a0 & 1) == 0) {
    iVar1 = 0x1326a6a0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puRam000000011326a698 = &UNK_10df6190e + (long)puRam000000011326a690;
      func_0x000107c60e4c(0x11326a6a0);
    }
  }
  puVar3 = puRam000000011326a698;
  FUN_10061f9f8(&UNK_10df6190e,puRam000000011326a698);
  if (puVar2 + -0x10df6190e < puRam000000011326a690) {
    return (undefined *)(ulong)(byte)puVar2[0x17];
  }
  func_0x000107c29df8();
  FUN_1003b0798();
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
  }
  return puVar3;
}



/* Entry: 10061f9cc; end: 10061f9f7;  */

long FUN_10061f9cc(long param_1,long param_2,char *param_3)

{
  FUN_1003b0798(param_1,(long)*param_3,param_2 - param_1);
  if (param_1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 10061f9f8; end: 10061fa17;  */

void FUN_10061f9f8(void)

{
  FUN_10061f9cc();
  return;
}



/* Entry: 10061fa18; end: 10061fa6f;  */

void FUN_10061fa18(void)

{
  return;
}



/* Entry: 10061fa70; end: 10061fb03;  */

long FUN_10061fa70(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000107c29570();
  }
  else {
    FUN_10061fb04();
  }
  return param_1;
}



/* Entry: 10061fb04; end: 10061fb1f;  */

void FUN_10061fb04(long param_1)

{
  func_0x00010061faa4();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10061fb20; end: 10061fb2b;  */

void FUN_10061fb20(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10061fb2c; end: 10061fb53;  */

void FUN_10061fb2c(long param_1)

{
  FUN_10061fb20();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10061fb54();
  return;
}



/* Entry: 10061fb54; end: 10061fb9f;  */

void FUN_10061fb54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 10061fba0; end: 10061fbcb;  */

long FUN_10061fba0(long param_1)

{
  FUN_1005fce88(param_1 + 0x30);
  FUN_100100fec(param_1 + 8);
  return param_1;
}



/* Entry: 10061fbcc; end: 10061fbe7;  */

void FUN_10061fbcc(void)

{
  return;
}



/* Entry: 10061fbe8; end: 10061fcff;  */

void FUN_10061fbe8(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_b8 [88];
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  FUN_1005e7a1c();
  auStack_b8[0] = 0;
  bStack_60 = 0;
  if (*(char *)(param_2 + 0x68) != '\0') {
    FUN_10061fb04(auStack_b8,unaff_x20 + 0x10);
    FUN_10061fd00(unaff_x20 + 0x10);
  }
  lVar2 = *(long *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  FUN_10061fd24(bStack_60);
  if ((extraout_x8 & 1) == 0) {
    func_0x0001005ed13c();
    FUN_10061fd34();
  }
  else {
    func_0x0001005ed13c();
    FUN_10061fd34();
    if (lVar2 != 0) {
      if ((bStack_60 & 1) == 0) {
        func_0x000107c344bc(auStack_58);
        func_0x000107c34438();
        func_0x000107c342b4();
        FUN_100678270();
        func_0x000107c34460();
      }
      func_0x00010061faa4();
      uVar1 = 1;
      goto LAB_10061fcb4;
    }
  }
  func_0x000107c34608();
  uVar1 = extraout_w8;
LAB_10061fcb4:
  *(undefined1 *)(unaff_x19 + 0x58) = uVar1;
  FUN_10061fd34(auStack_b8);
  return;
}



/* Entry: 10061fd00; end: 10061fd23;  */

void FUN_10061fd00(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10061fba0();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10061fd24; end: 10061fd33;  */

void FUN_10061fd24(void)

{
  return;
}



/* Entry: 10061fd34; end: 10061fd53;  */

void FUN_10061fd34(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10061fba0();
  }
  return;
}



/* Entry: 10061fd54; end: 10061fd63;  */

void FUN_10061fd54(void)

{
  return;
}



/* Entry: 10061fd64; end: 10061fdc7;  */

long FUN_10061fd64(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  lVar1 = param_2;
  FUN_10061fd24();
  *(undefined8 *)(lVar1 + 8) = 0;
  auStack_90[0] = param_1;
  uStack_80 = param_1;
  FUN_10061fdf0(lVar1 + 0x10,(ulong)auStack_90 | 8);
  FUN_10061fd34((ulong)auStack_90 | 8);
  FUN_1005ed1e8();
  FUN_10054cac4();
  FUN_10061fd34(param_2 + 0x10);
  return param_2;
}



/* Entry: 10061fdc8; end: 10061fdef;  */

void FUN_10061fdc8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x16);
  if (cVar1 != *(char *)(param_2 + 0x16)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x16) == '\x01') {
        FUN_10061fba0();
        *(undefined1 *)(param_1 + 0x16) = 0;
      }
      return;
    }
    func_0x00010061faa4();
    *(undefined1 *)(param_1 + 0x16) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32c24();
    *param_1 = *param_2;
    func_0x000107c3194c(param_1 + 2,param_2 + 2);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
    func_0x000107c28908(unaff_x20 + 0x30,unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
    return;
  }
  return;
}



/* Entry: 10061fdf0; end: 10061fe13;  */

undefined8 FUN_10061fdf0(undefined8 param_1)

{
  FUN_10061fdc8();
  return param_1;
}



/* Entry: 10061fe14; end: 10061fe2f;  */

void FUN_10061fe14(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10061fe30; end: 10061fe53;  */

long FUN_10061fe30(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x29;
  
  lVar1 = unaff_x20 + 0x80;
  func_0x00010061fe3c(lVar1,unaff_x29 + -0x34);
  FUN_10061fe74();
  return lVar1 + 0x18;
}



/* Entry: 10061fe54; end: 10061fe73;  */

long FUN_10061fe54(long param_1)

{
  func_0x00010061fe3c();
  FUN_10061fe74();
  return param_1 + 0x18;
}



/* Entry: 10061fe74; end: 10062014f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010061ff54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10061fe74(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong uVar12;
  ulong extraout_x11_00;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  long lStack_58;
  
  iVar1 = *param_4;
  uVar15 = (ulong)iVar1;
  uVar16 = param_3[1];
  if (uVar16 != 0) {
    func_0x0001006201d0();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar15;
    }
    else {
      in_NG = (long)(uVar16 - uVar15) < 0;
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar7 * uVar16;
      }
    }
    plVar14 = *(long **)(*param_3 + unaff_x24 * 8);
    uVar7 = extraout_x8;
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10061ff18;
          uVar10 = plVar14[1];
          if (uVar10 != uVar15) break;
          in_NG = *(int *)(plVar14 + 2) - iVar1 < 0;
          if (*(int *)(plVar14 + 2) == iVar1) {
            uVar9 = 0;
            lStack_58 = (long)plVar14;
            goto LAB_100620130;
          }
        }
        if ((uVar16 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar16 <= uVar10) {
          func_0x000107c3477c();
          uVar7 = extraout_x8_00;
          uVar10 = extraout_x9;
        }
        in_NG = (long)(uVar10 - unaff_x24) < 0;
      } while (uVar10 == unaff_x24);
    }
  }
LAB_10061ff18:
  uVar7 = 0x70;
  func_0x000107c60e20();
  func_0x000100620150();
  *(undefined8 *)(uVar7 + 0x68) = 0;
  *(undefined8 *)(uVar7 + 0x60) = 0;
  *(undefined8 *)(uVar7 + 0x58) = 0;
  *(undefined8 *)(uVar7 + 0x50) = 0;
  *(undefined8 *)(uVar7 + 0x48) = 0;
  *(undefined8 *)(uVar7 + 0x40) = 0;
  *(undefined8 *)(uVar7 + 0x38) = 0;
  *(undefined8 *)(uVar7 + 0x30) = 0;
  *(undefined8 *)(uVar7 + 0x28) = 0;
  *(undefined8 *)(uVar7 + 0x20) = 0;
  *(undefined8 *)(uVar7 + 0x18) = 0;
  func_0x00010062016c();
  if ((uVar16 != 0) && (FUN_1006912bc(param_1,param_2,(float)uVar16), !(bool)in_NG))
  goto LAB_1006200dc;
  func_0x000100620180();
  bVar4 = 2 < uVar16;
  bVar5 = uVar16 == 3;
  func_0x000100620198();
  uVar10 = extraout_x8_01;
  if (!bVar4 || bVar5) {
    uVar10 = extraout_x9_00;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    func_0x000107c60c44();
    uVar16 = param_3[1];
    uVar7 = uVar10;
  }
  uVar6 = uVar10 == uVar16;
  if (uVar16 < uVar10) {
LAB_10061ffa0:
    if (uVar10 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100620144);
      (*pcVar3)();
    }
    lVar8 = uVar10 << 3;
    func_0x000107c60e20(lVar8);
    func_0x0001006201ac(param_3,lVar8);
    uVar16 = 0;
    param_3[1] = uVar10;
    while (uVar6 = uVar10 == uVar16, !(bool)uVar6) {
      func_0x0001006201c4();
      uVar16 = extraout_x9_01;
    }
    uVar16 = uVar10;
    if (param_3[2] != 0) {
      func_0x000107c3474c();
      func_0x000107c34748();
      lVar8 = extraout_x8_02;
      uVar7 = extraout_x9_02;
      plVar14 = extraout_x10;
      uVar12 = extraout_x11;
      while (plVar11 = plVar14, plVar14 = (long *)*plVar11, plVar14 != (long *)0x0) {
        uVar13 = plVar14[1];
        if ((uVar10 & uVar7) == 0) {
          uVar13 = uVar13 & uVar7;
        }
        else if (uVar10 <= uVar13) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar13 / uVar10;
          }
          uVar13 = uVar13 - uVar2 * uVar10;
        }
        uVar6 = uVar13 == uVar12;
        if (!(bool)uVar6) {
          if (*(long *)(lVar8 + uVar13 * 8) == 0) {
            *(long **)(lVar8 + uVar13 * 8) = plVar11;
            uVar12 = uVar13;
          }
          else {
            *plVar11 = *plVar14;
            func_0x000107c3432c();
            lVar8 = extraout_x8_03;
            uVar7 = extraout_x9_03;
            plVar14 = extraout_x10_00;
            uVar12 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar10 < uVar16) {
    func_0x000107c34524();
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c342e0();
    }
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    uVar6 = uVar10 == uVar16;
    if (uVar10 < uVar16) {
      if (uVar10 != 0) goto LAB_10061ffa0;
      func_0x0001006201ac(param_3,0);
      param_3[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_3[1];
    }
  }
  func_0x0001006201d0();
  if ((bool)uVar6) {
    unaff_x24 = extraout_x8_04 & uVar15;
  }
  else {
    unaff_x24 = uVar15;
    if (uVar16 <= uVar15) {
      uVar7 = 0;
      if (uVar16 != 0) {
        uVar7 = uVar15 / uVar16;
      }
      unaff_x24 = uVar15 - uVar7 * uVar16;
    }
  }
LAB_1006200dc:
  if (*(long *)(*param_3 + unaff_x24 * 8) == 0) {
    func_0x0001006201dc();
    if (extraout_x9_04 != 0) {
      uVar15 = *(ulong *)(extraout_x9_04 + 8);
      lVar8 = extraout_x8_05;
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        func_0x000107c3477c();
        lVar8 = extraout_x8_06;
        uVar15 = extraout_x9_05;
      }
      *(long *)(lVar8 + uVar15 * 8) = lStack_58;
    }
  }
  else {
    func_0x000107c34510();
  }
  func_0x0001006201f4();
  FUN_10062020c();
  uVar9 = 1;
LAB_100620130:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = lStack_58;
  return auVar17;
}



/* Entry: 100620150; end: 10062020b;  */

void FUN_100620150(undefined8 *param_1)

{
  undefined4 *unaff_x20;
  undefined8 unaff_x21;
  
  *param_1 = 0;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = *unaff_x20;
  return;
}



/* Entry: 10062020c; end: 10062022b;  */

void FUN_10062020c(void)

{
  func_0x0001005ec580();
  FUN_10062022c();
  return;
}



/* Entry: 10062022c; end: 10062025f;  */

void FUN_10062022c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c293b4(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 100620260; end: 1006202ab;  */

void FUN_100620260(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1005f591c();
  *param_1 = *param_2;
  FUN_1006202b4(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x28) = uVar1;
  func_0x000100620418(unaff_x20 + 0x30,unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  return;
}



/* Entry: 1006202ac; end: 1006202b3;  */

void FUN_1006202ac(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_3 - param_2;
  FUN_1006202e8();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3) < uVar2) {
    FUN_1006203d4();
    FUN_1001e7ae4();
    FUN_10002b958();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3) < (ulong)(param_3 - param_2)) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        func_0x000107c610b8(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        func_0x000107c610b8(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_1006203b0;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x000100620408();
    func_0x000107c610b8();
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_1006203b0:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1006202b4; end: 1006202e7;  */

undefined8 * FUN_1006202b4(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_1006202ac(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1006202e8; end: 1006202f3;  */

void FUN_1006202e8(void)

{
  return;
}



/* Entry: 1006202f4; end: 1006203c7;  */

void FUN_1006202f4(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  FUN_1006202e8();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3) < uVar2) {
    FUN_1006203d4();
    FUN_1001e7ae4();
    FUN_10002b958();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        func_0x000107c610b8(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        func_0x000107c610b8(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_1006203b0;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x000100620408();
    func_0x000107c610b8();
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_1006203b0:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1006203c8; end: 1006203d3;  */

undefined8 FUN_1006203c8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1006203d4; end: 1006203ff;  */

void FUN_1006203d4(long param_1)

{
  undefined8 *unaff_x19;
  
  FUN_1006203c8();
  if (param_1 != 0) {
    unaff_x19[1] = param_1;
    func_0x000107c60e14();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 100620400; end: 10062045f;  */

void FUN_100620400(void)

{
  return;
}



/* Entry: 100620460; end: 1006204d7;  */

void FUN_100620460(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000100620450();
  if ((bool)in_ZR) {
    FUN_1005ef0c4();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c341a0();
      func_0x000107c3427c();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c34314();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1006204d8(*(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 1006204d8; end: 1006204df;  */

void FUN_1006204d8(long param_1)

{
  long in_x9;
  
  func_0x000107c60d88(param_1 + in_x9 + 0x18);
  FUN_10054c3a4(param_1 + in_x9);
  FUN_10062154c();
  func_0x000100621554();
  return;
}



/* Entry: 1006204e0; end: 10062052f;  */

void FUN_1006204e0(long param_1)

{
  func_0x000107c60d88(param_1 + 0x18);
  FUN_10054c3a4(param_1);
  FUN_10062154c();
  func_0x000100621554();
  return;
}



/* Entry: 100620530; end: 1006206b7;  */

/* WARNING: Possible PIC construction at 0x00010062063c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062064c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100620640) */
/* WARNING: Removing unreachable block (ram,0x000100620650) */

void FUN_100620530(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *param_1;
  puVar3 = &UNK_1107a79a8;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_1107a79a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1107a79d0;
  func_0x000107c613fc(&UNK_1107a79d0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  func_0x000107c613fc(&UNK_1107a79a8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1107a79f8;
  func_0x000107c613fc(&UNK_1107a79f8,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  func_0x000107c61580(param_2,2);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar3);
  FUN_1000d4d28(FUN_10062298c,puVar2,&UNK_100c868f8,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1006206b8; end: 1006206c3;  */

void FUN_1006206b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8211cc);
  return;
}



/* Entry: 1006206c4; end: 100620783;  */

undefined1  [16] FUN_1006206c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1006206b8(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  FUN_100620814();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_10dd3bec8;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3bec8,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  func_0x000107c61574(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 100620784; end: 100620787;  */

void FUN_100620784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100620788; end: 100620813;  */

void FUN_100620788(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = puStack_40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 100620814; end: 10062085f;  */

undefined8 FUN_100620814(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_100620860(param_1,param_2);
  return unaff_x20;
}



/* Entry: 100620860; end: 1006208f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100620860(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c5eec4(unaff_x20 + _DAT_1138154b8);
  *(undefined8 *)(unaff_x20 + _DAT_113095990) = 0;
  lVar1 = _DAT_1130959a0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_1130959a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113095998) = param_2;
  return;
}



/* Entry: 1006208f4; end: 10062093f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006208f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154b8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x00010062093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100620940; end: 1006213b3;  */

bool FUN_100620940(long param_1)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0')) {
    return *(long *)(param_1 + 0x38) != 0;
  }
  return false;
}



/* Entry: 1006213b4; end: 1006213c3;  */

void FUN_1006213b4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  return;
}



/* Entry: 1006213c4; end: 10062154b;  */

void FUN_1006213c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd0;
  func_0x000107c60e20();
  func_0x0001006214cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10062154c; end: 10062155b;  */

void FUN_10062154c(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10062155c; end: 10062157f;  */

void FUN_10062155c(void)

{
  func_0x00010045db50();
  FUN_10054cac4();
  return;
}



/* Entry: 100621580; end: 10062161f;  */

void FUN_100621580(void)

{
  return;
}



/* Entry: 100621620; end: 10062162f;  */

undefined8 FUN_100621620(long param_1)

{
  code *pcVar1;
  long unaff_x19;
  
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 200);
  if (*(int *)(param_1 + 0x568) == 9) {
    *(undefined4 *)(param_1 + 0x568) = 0;
    func_0x0001001b2b20(param_1,0);
    return 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1001b43ac);
  (*pcVar1)();
}



/* Entry: 100621630; end: 10062163f;  */

void FUN_100621630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


