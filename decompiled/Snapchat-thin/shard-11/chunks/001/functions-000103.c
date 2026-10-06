/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081983cc; end: 10819841f;  */

undefined8 FUN_1081983cc(ulong param_1)

{
  long unaff_x19;
  undefined4 uStack_38;
  char cStack_34;
  
  func_0x000108198834();
  if ((param_1 & 1) == 0) {
    func_0x0001081986fc(&uStack_38,&UNK_10f47df69);
    if (cStack_34 != '\x01') {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x360) = uStack_38;
  }
  return 1;
}



/* Entry: 108198420; end: 10819847b;  */

void FUN_108198420(void)

{
  undefined8 in_x3;
  
  func_0x0001081986d4();
  FUN_108197bcc(in_x3);
  func_0x00010819884c();
  func_0x0001081986b0();
  func_0x0001081987cc();
  func_0x00010819866c();
  func_0x0001081986c4();
  func_0x0001081986e8();
  func_0x000108198690();
  FUN_1083b2410();
  func_0x00010819874c();
  return;
}



/* Entry: 10819847c; end: 1081984cf;  */

void FUN_10819847c(void)

{
  func_0x0001081986d4();
  func_0x0001081987dc();
  func_0x0001081986b0();
  func_0x0001081987cc();
  func_0x00010819866c();
  func_0x0001081986c4();
  func_0x0001081986e8();
  func_0x000108198690();
  FUN_1083b2678();
  func_0x00010819874c();
  return;
}



/* Entry: 1081984d0; end: 108198583;  */

void FUN_1081984d0(void)

{
  long unaff_x23;
  
  func_0x0001081987f4();
  func_0x000108198714();
  func_0x000108198714(*(undefined4 *)(unaff_x23 + 0x314),*(undefined4 *)(unaff_x23 + 0x318),
                      *(undefined4 *)(unaff_x23 + 0x31c));
  func_0x0001081987b4();
  func_0x000108198720();
  func_0x000108198814();
  func_0x000108198858();
  func_0x000108198770();
  FUN_1083b26d0();
  func_0x000108198844();
  return;
}



/* Entry: 108198584; end: 10819858b;  */

void FUN_108198584(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108198588);
  (*pcVar1)();
}



/* Entry: 10819858c; end: 10819863b;  */

undefined8 * FUN_10819858c(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 auStack_38 [2];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_38[0] = *(undefined4 *)(param_2 + 0x308);
  puStack_30 = *(undefined8 **)(param_2 + 0x310);
  if (puStack_30 != (undefined8 *)0x0 && puStack_30 != (undefined8 *)0x1138270b0) {
    piVar1 = (int *)((long)puStack_30 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,auStack_38,1);
  puVar5 = puStack_30;
  FUN_1083a3ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = puStack_30;
  FUN_1083a3ca0();
  func_0x000108198744();
  puVar4 = puVar5;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar4 + 99);
  FUN_1083a3c7c(puVar5 + 0x62);
  *puVar5 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar5 + 0x5f);
  *puVar5 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar5 + 2);
  return puVar5;
}



/* Entry: 10819863c; end: 10819863f;  */

undefined8 * FUN_10819863c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108198640; end: 108198653;  */

void FUN_108198640(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108198654; end: 108198657;  */

undefined8 * FUN_108198654(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108198658; end: 10819866b;  */

void FUN_108198658(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819866c; end: 10819886b;  */

void FUN_10819866c(void)

{
  uint uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  long lStack_58;
  uint uStack_50;
  undefined1 uStack_44;
  undefined1 uStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar1 = *(uint *)(*(long *)(unaff_x22 + 0x38) + 0x148);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  FUN_10819a090(&lStack_58);
  if (uStack_50 == uVar1) {
    lStack_58 = 0;
  }
  else {
    if (uVar1 == 2 && uStack_50 == 1) {
      FUN_1083ada84(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    else {
      FUN_1083ad9c4(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    func_0x00010819aac0();
    FUN_108115b2c(auStack_28);
  }
  func_0x00010819ab18();
  return;
}



/* Entry: 10819886c; end: 1081988ff;  */

char FUN_10819886c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 auStack_48 [2];
  long lStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_108194b38(auStack_48,&DAT_10f416776,param_2,param_3);
    if (cStack_38 == '\x01') {
      *(undefined4 *)(param_1 + 0x308) = auStack_48[0];
      lVar2 = *(long *)(param_1 + 0x310);
      if (lVar2 != lStack_40) {
        *(long *)(param_1 + 0x310) = lStack_40;
        lStack_40 = lVar2;
      }
    }
    FUN_108194e20(auStack_48);
  }
  else {
    cStack_38 = '\x01';
  }
  return cStack_38;
}



/* Entry: 108198900; end: 108198a8f;  */

void FUN_108198900(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  long lVar8;
  long *extraout_x8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 auStack_138 [16];
  long lStack_128;
  ulong uStack_110;
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined1 *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [64];
  undefined1 *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x68))();
  uVar15 = 0;
  uStack_60 = 0x1000000000;
  uVar7 = (ulong)*(uint *)(param_6 + 0x60);
  puStack_68 = auStack_a8;
  if (8 < (int)*(uint *)(param_6 + 0x60)) {
    ppuVar5 = &puStack_68;
    uVar15 = 0;
    FUN_108198d78(ppuVar5);
    FUN_108198d04(&puStack_68,ppuVar5,uVar7);
    uVar7 = (ulong)*(uint *)(param_6 + 0x60);
  }
  uVar14 = (undefined4)uVar15;
  plVar11 = (long *)param_6[0x5f];
  puVar2 = puStack_68;
  for (uVar7 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3; puStack_68 = puVar2, uVar7 != 0;
      uVar7 = uVar7 - 8) {
    if (*(int *)(*plVar11 + 0xc) == 0x13) {
      FUN_10819a590(&uStack_c0,param_8,param_7,*plVar11 + 0x308,plVar4);
      FUN_108198d9c(&puStack_68,&uStack_c0);
      FUN_10811e834(&uStack_c0);
    }
    uVar14 = (undefined4)uVar15;
    plVar11 = plVar11 + 1;
    puVar2 = puStack_68;
  }
  uVar12 = uStack_60 & 0xffffffff;
  FUN_10819480c(param_6,param_7,param_8);
  uStack_b0 = 1;
  uStack_c0 = uVar14;
  uStack_bc = param_3;
  uStack_b8 = param_4;
  uStack_b4 = param_5;
  FUN_1083b4534(param_1,puVar2,uVar12,&uStack_c0);
  ppuVar5 = &puStack_68;
  FUN_108198c34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_108198c34(&puStack_68);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_108198a90;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  plVar4 = extraout_x8 + 2;
  *plVar4 = 0;
  iVar1 = *(int *)(ppuVar6 + 0x60);
  uStack_110 = uVar7;
  puStack_108 = auStack_a8;
  uStack_100 = uVar12;
  puStack_f8 = puVar2;
  plStack_f0 = param_6;
  uStack_e8 = param_7;
  uStack_e0 = param_8;
  ppuStack_d8 = ppuVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (iVar1 == 0) {
    lVar9 = 0;
  }
  else {
    if (iVar1 < 0) {
      FUN_1081956f4();
LAB_108198bc8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108198bcc);
      (*pcVar3)();
    }
    FUN_108198f40(auStack_138,(long)iVar1,0,plVar4);
    FUN_108198fd4();
    func_0x000108198fe8();
    lVar9 = (long)*(int *)(ppuVar6 + 0x60);
  }
  plVar11 = (long *)ppuVar6[0x5f];
  lVar9 = lVar9 << 3;
  do {
    if (lVar9 == 0) {
      return;
    }
    lVar13 = *plVar11;
    if (*(int *)(lVar13 + 0xc) == 0x13) {
      uVar7 = extraout_x8[1];
      if (uVar7 < (ulong)extraout_x8[2]) {
        FUN_10819559c(uVar7,lVar13 + 0x308);
        lVar13 = uVar7 + 0x10;
      }
      else {
        lVar8 = (long)(uVar7 - *extraout_x8) >> 4;
        uVar7 = lVar8 + 1;
        if (uVar7 >> 0x3c != 0) {
          FUN_1081956f4();
          goto LAB_108198bc8;
        }
        uVar10 = extraout_x8[2] - *extraout_x8;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar7) {
          uVar12 = uVar7;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        FUN_108198f40(auStack_138,uVar12,lVar8,plVar4);
        FUN_10819559c(lStack_128,lVar13 + 0x308);
        lStack_128 = lStack_128 + 0x10;
        FUN_108198fd4();
        lVar13 = extraout_x8[1];
        func_0x000108198fe8();
      }
      extraout_x8[1] = lVar13;
    }
    plVar11 = plVar11 + 1;
    lVar9 = lVar9 + -8;
  } while( true );
}



/* Entry: 108198a90; end: 108198c03;  */

void FUN_108198a90(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  iVar2 = *(int *)(param_2 + 0x300);
  if (iVar2 == 0) {
    lVar5 = 0;
  }
  else {
    if (iVar2 < 0) {
      FUN_1081956f4();
LAB_108198bc8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108198bcc);
      (*pcVar3)();
    }
    FUN_108198f40(auStack_78,(long)iVar2,0,plVar8);
    FUN_108198fd4();
    func_0x000108198fe8();
    lVar5 = (long)*(int *)(param_2 + 0x300);
  }
  plVar9 = *(long **)(param_2 + 0x2f8);
  lVar5 = lVar5 << 3;
  do {
    if (lVar5 == 0) {
      return;
    }
    lVar10 = *plVar9;
    if (*(int *)(lVar10 + 0xc) == 0x13) {
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10819559c(uVar1,lVar10 + 0x308);
        lVar10 = uVar1 + 0x10;
      }
      else {
        lVar4 = (long)(uVar1 - *param_1) >> 4;
        uVar1 = lVar4 + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_1081956f4();
          goto LAB_108198bc8;
        }
        uVar6 = param_1[2] - *param_1;
        uVar7 = (long)uVar6 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar7 = 0xfffffffffffffff;
        }
        FUN_108198f40(auStack_78,uVar7,lVar4,plVar8);
        FUN_10819559c(lStack_68,lVar10 + 0x308);
        lStack_68 = lStack_68 + 0x10;
        FUN_108198fd4();
        lVar10 = param_1[1];
        func_0x000108198fe8();
      }
      param_1[1] = lVar10;
    }
    plVar9 = plVar9 + 1;
    lVar5 = lVar5 + -8;
  } while( true );
}



/* Entry: 108198c04; end: 108198c07;  */

undefined8 * FUN_108198c04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2da78;
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108198c08; end: 108198c1b;  */

void FUN_108198c08(void)

{
  func_0x000108198ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108198c1c; end: 108198c1f;  */

undefined8 * FUN_108198c1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108198c20; end: 108198c33;  */

void FUN_108198c20(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108198c34; end: 108198c67;  */

undefined8 * FUN_108198c34(undefined8 *param_1)

{
  FUN_108198c68();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108198c68; end: 108198cd3;  */

void FUN_108198c68(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_10811e834();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 108198cd4; end: 108198d03;  */

void FUN_108198cd4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 108198d04; end: 108198d77;  */

void FUN_108198d04(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108198d78; end: 108198d9b;  */

undefined1 ** FUN_108198d78(long *param_1,long *param_2)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    ppuVar1 = &puStack_20;
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return ppuVar1;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108198d9c;
  iVar4 = (int)param_1[1];
  if (iVar4 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar5 = *param_2;
    plVar6 = (long *)(*param_1 + (long)iVar4 * 8);
    *param_2 = 0;
    *plVar6 = lVar5;
  }
  else {
    uVar3 = 1;
    plVar2 = param_1;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_108198d78(0x3ff8000000000000,param_1,1);
    lVar5 = *param_2;
    plVar6 = plVar2 + (int)param_1[1];
    *param_2 = 0;
    *plVar6 = lVar5;
    FUN_108198d04(param_1,plVar2,uVar3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + 1;
  return (undefined1 **)plVar6;
}



/* Entry: 108198d9c; end: 108198e33;  */

long * FUN_108198d9c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar4 = *param_2;
    plVar5 = (long *)(*param_1 + (long)iVar3 * 8);
    *param_2 = 0;
    *plVar5 = lVar4;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_108198d78(0x3ff8000000000000,param_1,1);
    lVar4 = *param_2;
    plVar5 = plVar1 + (int)param_1[1];
    *param_2 = 0;
    *plVar5 = lVar4;
    FUN_108198d04(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar5;
}



/* Entry: 108198e34; end: 108198f3f;  */

void FUN_108198e34(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_2[1] + (lVar4 - lVar2);
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_48 = lVar1;
  lStack_50 = lVar1;
  for (lVar3 = lVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
    FUN_10819559c(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x10;
  }
  uStack_58 = 1;
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
    FUN_1083a3c7c(lVar4 + 8);
  }
  FUN_1081957f4(&plStack_70);
  param_2[1] = lVar1;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108198f40; end: 108198fd3;  */

long * FUN_108198f40(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_108195708();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108198fd4; end: 108198fef;  */

void FUN_108198fd4(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long lVar3;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *unaff_x19;
  lVar1 = unaff_x19[1];
  in_stack_00000010 = in_stack_00000010 + (lVar3 - lVar1);
  plStack_70 = unaff_x19 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_48 = in_stack_00000010;
  lStack_50 = in_stack_00000010;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_10819559c(lStack_48,lVar2);
    lStack_48 = lStack_48 + 0x10;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    FUN_1083a3c7c(lVar3 + 8);
  }
  FUN_1081957f4(&plStack_70);
  unaff_x19[1] = *unaff_x19;
  *unaff_x19 = in_stack_00000010;
  unaff_x19[1] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000020;
  return;
}



/* Entry: 108198ff0; end: 108199147;  */

undefined8 FUN_108198ff0(ulong param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  uint **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  uint *puStack_68;
  long lStack_60;
  uint *puStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = param_1;
  FUN_1081949a0();
  if ((uVar4 & 1) == 0) {
    uVar1 = param_2;
    _strcmp(param_2,"operator");
    if ((int)uVar1 == 0) {
      puVar2 = param_3;
      puStack_58 = param_3;
      _strlen();
      puStack_50 = (uint *)((long)param_3 + (long)puVar2);
      puVar6 = (undefined4 *)&UNK_110a2dba8;
      lVar7 = 2;
      do {
        ppuVar3 = &puStack_58;
        func_0x00010818efe8(ppuVar3,*(undefined8 *)(puVar6 + -2));
        if (((ulong)ppuVar3 & 1) != 0) {
          if (puStack_58 == puStack_50) {
            *(undefined4 *)(param_1 + 0x350) = *puVar6;
            goto LAB_10819901c;
          }
          break;
        }
        puVar6 = puVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    _strcmp(param_2,"radius");
    if ((int)param_2 == 0) {
      puVar2 = param_3;
      puStack_68 = param_3;
      _strlen();
      lStack_60 = (long)param_3 + (long)puVar2;
      puStack_58 = (uint *)0x0;
      puStack_50 = (uint *)0x0;
      uStack_48 = 0;
      ppuVar3 = &puStack_68;
      func_0x000108190e6c(ppuVar3,&puStack_58);
      if (((ulong)ppuVar3 & 1) == 0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*puStack_58;
        lVar7 = 4;
        if ((ulong)((long)puStack_50 - (long)puStack_58) < 5) {
          lVar7 = 0;
        }
        uVar5 = (ulong)*(uint *)((long)puStack_58 + lVar7) << 0x20;
      }
      func_0x0001056d1ce4(&puStack_58);
      if ((int)ppuVar3 != 0) {
        *(ulong *)(param_1 + 0x354) = uVar4 | uVar5;
        goto LAB_10819901c;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_10819901c:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108199148; end: 1081992a7;  */

void FUN_108199148(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_90;
  undefined1 auStack_84 [20];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar3 = &uStack_90;
  FUN_10819480c();
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x68))(param_2,param_3,param_4);
  FUN_10819a590(&lStack_68,param_4,param_3,param_2 + 0x61,plVar2);
  func_0x0001081a0c84(param_3,*(undefined4 *)(param_4 + 0x10));
  if ((int)param_2[0x6a] == 0) {
    uStack_70 = 0;
    if (lStack_68 != 0) {
      do {
        FUN_108199368();
        uStack_70 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    func_0x000108199380();
    FUN_1083b4b44(param_1,&uStack_70,auStack_84);
    puVar3 = &uStack_70;
  }
  else {
    if ((int)param_2[0x6a] != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10819927c);
      (*pcVar1)();
    }
    uStack_90 = 0;
    if (lStack_68 != 0) {
      do {
        FUN_108199368();
        uStack_90 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000108199380();
    FUN_1083b499c(param_1,&uStack_90,auStack_84);
  }
  FUN_10811e834(puVar3);
  FUN_10811e834(&lStack_68);
  return;
}



/* Entry: 1081992a8; end: 1081992ab;  */

undefined8 * FUN_1081992a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081992ac; end: 1081992bf;  */

void FUN_1081992ac(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081992c0; end: 108199367;  */

void FUN_1081992c0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  int *extraout_x9;
  int extraout_w11;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x310);
  if (lVar3 != 0 && lVar3 != 0x1138270b0) {
    do {
      FUN_108199368();
      lVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1081955d8();
  FUN_1083a3ca0(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(lVar3);
  func_0x000108199378();
  bVar1 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
  if (bVar1) {
    *extraout_x9 = *extraout_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108199368; end: 108199393;  */

void FUN_108199368(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108199394; end: 108199427;  */

undefined8 FUN_108199394(ulong param_1)

{
  ulong uVar1;
  undefined4 uStack_40;
  char cStack_3c;
  undefined4 uStack_38;
  char cStack_34;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) == 0) {
    FUN_1081995fc(&uStack_38,"dx");
    if (cStack_34 == '\x01') {
      *(undefined4 *)(param_1 + 0x350) = uStack_38;
    }
    else {
      FUN_1081995fc(&uStack_40,"dy");
      if (cStack_3c != '\x01') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x354) = uStack_40;
    }
  }
  return 1;
}



/* Entry: 108199428; end: 10819952f;  */

void FUN_108199428(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,long *param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fVar4 = *(float *)(param_6 + 0x6a);
  fVar5 = *(float *)((long)param_6 + 0x354);
  func_0x0001081a0c84(param_7,*(undefined4 *)(param_8 + 0x10));
  plVar1 = param_6;
  fVar2 = param_4;
  fVar3 = param_5;
  (**(code **)(*param_6 + 0x68))(param_6,param_7,param_8);
  FUN_10819a590(&uStack_58,param_8,param_7,param_6 + 0x61,plVar1);
  uStack_60 = uStack_58;
  uStack_58 = 0;
  FUN_10819480c(param_6,param_7,param_8);
  uStack_64 = 1;
  uStack_74 = param_2;
  uStack_70 = param_3;
  fStack_6c = fVar2;
  fStack_68 = fVar3;
  FUN_1083b40a0(param_1,fVar4 * param_4,fVar5 * param_5,&uStack_60,&uStack_74);
  FUN_10811e834(&uStack_60);
  FUN_10811e834(&uStack_58);
  return;
}



/* Entry: 108199530; end: 108199533;  */

undefined8 * FUN_108199530(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108199534; end: 108199547;  */

void FUN_108199534(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108199548; end: 1081995fb;  */

void FUN_108199548(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *extraout_x8;
  int unaff_w21;
  undefined1 auStack_64 [4];
  undefined4 auStack_38 [2];
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_38[0] = *(undefined4 *)(param_2 + 0x308);
  lStack_30 = *(long *)(param_2 + 0x310);
  if (lStack_30 != 0 && lStack_30 != 0x1138270b0) {
    piVar1 = (int *)(lStack_30 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,auStack_38,1);
  lVar5 = lStack_30;
  FUN_1083a3ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(lStack_30);
  __Unwind_Resume(lVar5);
  _strcmp();
  if (unaff_w21 != 0) {
    *extraout_x8 = 0;
    return;
  }
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)((long)extraout_x8 + 4) = 0;
  _strlen();
  puVar4 = &stack0xffffffffffffff88;
  FUN_10818fdd8(puVar4,auStack_64);
  if ((int)puVar4 != 0) {
    FUN_1081968a4(extraout_x8,auStack_64);
  }
  return;
}



/* Entry: 1081995fc; end: 108199607;  */

void FUN_1081995fc(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined1 auStack_24 [4];
  
  _strcmp();
  if (unaff_w21 != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fdd8(puVar1,auStack_24);
  if ((int)puVar1 != 0) {
    FUN_1081968a4(param_1,auStack_24);
  }
  return;
}



/* Entry: 108199608; end: 10819977b;  */

undefined8 FUN_108199608(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  char cStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) == 0) {
    func_0x000108199918();
    if ((int)uVar1 == 0) {
      func_0x00010819990c();
      puStack_38 = (undefined *)(param_3 + uVar1);
      ppuVar2 = &puStack_40;
      func_0x00010818fe14(ppuVar2,&uStack_50);
      if (((ulong)ppuVar2 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x358) = uStack_50;
        return 1;
      }
    }
    ppuVar2 = (undefined **)&DAT_10f395b98;
    FUN_108196708(&uStack_50,&DAT_10f395b98,param_2,param_3);
    if (cStack_4c != '\x01') {
      func_0x000108199918();
      if ((int)ppuVar2 == 0) {
        func_0x00010819990c();
        puStack_38 = (undefined *)(param_3 + (long)ppuVar2);
        ppuVar2 = &puStack_40;
        func_0x00010818fdd8(ppuVar2,&uStack_44);
        if (((ulong)ppuVar2 & 1) != 0) {
          FUN_10818efac(&puStack_40);
          ppuVar2 = &puStack_40;
          func_0x00010818fdd8(ppuVar2,&uStack_48);
          if (puStack_40 == puStack_38) {
            if ((int)ppuVar2 == 0) {
              uStack_48 = uStack_44;
            }
            *(ulong *)(param_1 + 0x350) = CONCAT44(uStack_48,uStack_44);
            return 1;
          }
        }
      }
      func_0x000108199918();
      if ((int)ppuVar2 == 0) {
        func_0x00010819990c();
        puStack_38 = (undefined *)(param_3 + (long)ppuVar2);
        ppuVar2 = &puStack_40;
        func_0x00010818efe8(ppuVar2,&UNK_10f47df9f);
        if (((ulong)ppuVar2 & 1) == 0) {
          ppuVar2 = &puStack_40;
          func_0x00010818efe8(ppuVar2,&UNK_10f47dfac);
          if (((ulong)ppuVar2 & 1) == 0) {
            return 0;
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        if (puStack_40 == puStack_38) {
          *(undefined4 *)(param_1 + 0x360) = uVar3;
          return 1;
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x35c) = uStack_50;
  }
  return 1;
}



/* Entry: 10819977c; end: 1081998a3;  */

void FUN_10819977c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  if (*(int *)(param_6 + 0x360) == 0) {
    func_0x000108199934();
    FUN_1083bcd20(&uStack_58);
    func_0x000108199920();
    func_0x0001081998c8();
  }
  else {
    if (*(int *)(param_6 + 0x360) != 1) goto LAB_108199814;
    func_0x000108199934();
    FUN_1083bcdb0(&uStack_58);
    func_0x000108199920();
    func_0x0001081998c8();
  }
  func_0x000106f47224(&uStack_58);
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_108199814:
  lStack_40 = lStack_38;
  FUN_10819480c(param_6,param_7,param_8);
  uStack_48 = 1;
  uStack_58 = param_2;
  uStack_54 = param_3;
  uStack_50 = param_4;
  uStack_4c = param_5;
  FUN_10818d314(param_1,&lStack_40,&uStack_58);
  func_0x000106f47224(&lStack_40);
  func_0x000106f47224(&lStack_38);
  return;
}



/* Entry: 1081998a4; end: 1081998a7;  */

undefined8 * FUN_1081998a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081998a8; end: 1081998bb;  */

void FUN_1081998a8(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081998bc; end: 1081998f3;  */

void FUN_1081998bc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1081998f4; end: 10819990b;  */

void FUN_1081998f4(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)();
  return;
}



/* Entry: 10819990c; end: 108199947;  */

void FUN_10819990c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)();
  return;
}



/* Entry: 108199948; end: 108199a7b;  */

undefined8 FUN_108199948(ulong param_1)

{
  ulong uVar1;
  undefined4 uStack_80;
  char cStack_7c;
  undefined4 uStack_78;
  char cStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_108199e68(&uStack_40,&DAT_10f62b0e2);
    if (cStack_38 == '\x01') {
      *(undefined8 *)(param_1 + 0x308) = uStack_40;
    }
    else {
      FUN_108199e68(&uStack_50,"y");
      if (cStack_48 == '\x01') {
        *(undefined8 *)(param_1 + 0x310) = uStack_50;
      }
      else {
        FUN_108199e68(&uStack_60,"width");
        if (cStack_58 == '\x01') {
          *(undefined8 *)(param_1 + 0x318) = uStack_60;
        }
        else {
          FUN_108199e68(&uStack_70,"height");
          if (cStack_68 == '\x01') {
            *(undefined8 *)(param_1 + 800) = uStack_70;
          }
          else {
            func_0x000108199e84(&uStack_78,&DAT_10f47dd95);
            if (cStack_74 == '\x01') {
              *(undefined4 *)(param_1 + 0x328) = uStack_78;
            }
            else {
              func_0x000108199e84(&uStack_80,&UNK_10f47dfb7);
              if (cStack_7c != '\x01') {
                return 0;
              }
              *(undefined4 *)(param_1 + 0x32c) = uStack_80;
            }
          }
        }
      }
    }
  }
  return 1;
}



/* Entry: 108199a7c; end: 108199d2b;  */

void FUN_108199a7c(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *extraout_x8;
  code *extraout_x9;
  int iVar5;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lStack_750;
  undefined1 auStack_748 [8];
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined1 auStack_728 [16];
  undefined1 uStack_718;
  undefined1 auStack_3e0 [840];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  long *plVar6;
  
  *param_1 = 0;
  FUN_1081a0cd0(param_7,param_6 + 0x308,param_6 + 0x310,param_6 + 0x318,param_6 + 800,
                *(undefined4 *)(param_6 + 0x328));
  uStack_88 = *(undefined4 *)(param_6 + 0x32c);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_58 = 1;
  uStack_98 = param_2;
  uStack_94 = param_3;
  uStack_90 = param_4;
  uStack_8c = param_5;
  uStack_68 = param_2;
  uStack_64 = param_3;
  uStack_60 = param_4;
  uStack_5c = param_5;
  FUN_10819fa68(auStack_3e0,param_7);
  FUN_1081a4354(param_6,auStack_3e0);
  puVar8 = *(undefined8 **)(param_6 + 0x2f8);
  plVar6 = (long *)0x1;
  iVar5 = 1;
  for (lVar9 = (long)*(int *)(param_6 + 0x300) << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
    plVar7 = (long *)*puVar8;
    if (*(uint *)((long)plVar7 + 0xc) < 0x1a &&
        (1 << (ulong)(*(uint *)((long)plVar7 + 0xc) & 0x1f) & 0x2b70bf0U) != 0) {
      FUN_10819fa68(auStack_728,auStack_3e0);
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7,auStack_728);
      func_0x000108199e74();
      FUN_10819480c();
      uStack_738 = CONCAT44(param_3,param_2);
      uStack_730 = param_4;
      uStack_72c = param_5;
      func_0x000108199e74(*(undefined8 *)(*plVar7 + 0x68));
      (*extraout_x8)();
      func_0x000108199e74(&uStack_740);
      (*extraout_x9)();
      uVar4 = uStack_740;
      uStack_740 = 0;
      FUN_108167c3c(param_1,uVar4);
      FUN_10811e834(&uStack_740);
      if (*(int *)plVar7[99] != 0) {
        FUN_108199ef8(&uStack_98,plVar7 + 99,param_1,&uStack_738,plVar6);
      }
      FUN_10819a034(&uStack_98,param_1,&uStack_738,plVar6);
      FUN_10819fae8(auStack_728);
    }
    iVar5 = (int)plVar6;
    puVar8 = puVar8 + 1;
  }
  if (iVar5 != 1) {
    FUN_1083ad9c4(auStack_748);
    lStack_750 = *param_1;
    if (lStack_750 != 0) {
      piVar1 = (int *)(lStack_750 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auStack_728[0] = 0;
    uStack_718 = 0;
    FUN_1083b07f0(&uStack_738,auStack_748,&lStack_750,auStack_728);
    uVar4 = uStack_738;
    uStack_738 = 0;
    FUN_108167c3c(param_1,uVar4);
    FUN_10811e834(&uStack_738);
    FUN_10811e834(&lStack_750);
    FUN_108115b2c(auStack_748);
  }
  FUN_10819fae8(auStack_3e0);
  func_0x000108199e38(&uStack_98);
  return;
}



/* Entry: 108199d2c; end: 108199d2f;  */

undefined8 * FUN_108199d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108199d30; end: 108199d43;  */

void FUN_108199d30(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108199d44; end: 108199d6b;  */

undefined8 FUN_108199d44(undefined8 param_1)

{
  FUN_108199d6c(param_1,0);
  return param_1;
}



/* Entry: 108199d6c; end: 108199d7f;  */

void FUN_108199d6c(long *param_1)

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
      lVar3 = lVar2 * -0x30;
      lVar2 = lVar1 + lVar2 * 0x30;
      do {
        lVar2 = lVar2 + -0x30;
        FUN_108199de0(lVar2);
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108199d80; end: 108199ddf;  */

void FUN_108199d80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x30;
      lVar1 = param_2 + lVar1 * 0x30;
      do {
        lVar1 = lVar1 + -0x30;
        FUN_108199de0(lVar1);
        lVar2 = lVar2 + 0x30;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108199de0; end: 108199e67;  */

void FUN_108199de0(int *param_1)

{
  if (*param_1 != 0) {
    func_0x000108199e10(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 108199e68; end: 108199e8f;  */

void FUN_108199e68(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 108199e90; end: 108199eaf;  */

long FUN_108199e90(long param_1)

{
  long lVar1;
  
  FUN_10819a6d4();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108199eb0; end: 108199ef7;  */

long FUN_108199eb0(long param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 == 6) {
    lVar1 = param_1 + 0x18;
    FUN_108199e90(lVar1,param_2 + 2);
  }
  else {
    lVar1 = param_1 + 0x28;
    if (*param_2 != 7) {
      lVar1 = 0;
    }
  }
  if (lVar1 != 0) {
    param_1 = lVar1 + 8;
  }
  return param_1;
}



/* Entry: 108199ef8; end: 108199f57;  */

void FUN_108199ef8(long param_1,undefined8 param_2,long *param_3)

{
  int extraout_w11;
  
  if (*param_3 != 0) {
    do {
      FUN_10819aab0();
    } while (extraout_w11 != 0);
  }
  FUN_108199f58(param_1 + 0x18);
  FUN_10819a000();
  func_0x00010819aae4();
  return;
}



/* Entry: 108199f58; end: 108199fff;  */

long FUN_108199f58(long param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  FUN_108199e90();
  if (lVar1 == 0) {
    lStack_38 = *param_2;
    if (lStack_38 != 0 && lStack_38 != 0x1138270b0) {
      do {
        FUN_10819aab0();
        lStack_38 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    FUN_10819a7bc(param_1,&lStack_38,&uStack_58);
    func_0x00010819ab18();
    FUN_1083a3ca0(lStack_38);
    lVar1 = param_1;
  }
  return lVar1;
}



/* Entry: 10819a000; end: 10819a033;  */

long FUN_10819a000(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_108167c10();
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return param_1;
}



/* Entry: 10819a034; end: 10819a08f;  */

void FUN_10819a034(long param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_40 = 0;
  if (*param_2 != 0) {
    do {
      FUN_10819aab0();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_30 = param_3[1];
  uStack_38 = *param_3;
  uStack_28 = param_4;
  FUN_10819a000(param_1 + 0x28,&uStack_40);
  func_0x00010819aae4();
  return;
}



/* Entry: 10819a090; end: 10819a34f;  */

void FUN_10819a090(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  char cStack_60;
  undefined1 auStack_54 [16];
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  long lStack_28;
  
  puVar6 = auStack_c0;
  lStack_28 = 0;
  uVar7 = 1;
  switch(*param_4) {
  case 1:
    uStack_b0 = 0x3f800000;
    uStack_a4 = 0;
    uStack_ac = 0;
    uStack_9c = 0x3f80000000000000;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_84 = 0x3f80000000000000;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_6c = 0;
    uStack_68 = 0x3f800000;
    FUN_1083ac230(0,0,0,0x3f800000,&uStack_b0);
    FUN_1083ae1cc(auStack_38,&uStack_b0,1);
    uStack_40 = 0;
    auStack_54[0] = 0;
    uStack_44 = 0;
    FUN_1083b07f0(&lStack_30,auStack_38,&uStack_40,auStack_54);
    lVar5 = lStack_28;
    lStack_28 = lStack_30;
    lStack_30 = 0;
    FUN_10819a6a8(lVar5);
    func_0x00010819aac0();
    FUN_10811e834(&uStack_40);
    FUN_108115b2c(auStack_38);
    goto code_r0x00010819a244;
  default:
    goto LAB_10819a2a0;
  case 4:
    FUN_1081a099c(&uStack_b0,param_3);
    if (cStack_60 == '\x01') {
      uVar4 = (uint)uStack_68;
      FUN_10819a350(auStack_b8,&uStack_b0);
      auStack_54[0] = 0;
      uStack_44 = 0;
      FUN_1083b5684(&lStack_30,auStack_b8,uVar4 >> 1 & 1,auStack_54);
      lVar5 = lStack_28;
      lStack_28 = lStack_30;
      lStack_30 = 0;
      FUN_10819a6a8(lVar5);
      func_0x00010819aac0();
      puVar6 = auStack_b8;
code_r0x00010819a238:
      func_0x000106f47224(puVar6);
    }
    goto code_r0x00010819a23c;
  case 5:
    FUN_1081a09f4(&uStack_b0,param_3);
    if (cStack_60 == '\x01') {
      uVar4 = (uint)uStack_68;
      FUN_10819a350(auStack_c0,&uStack_b0);
      auStack_54[0] = 0;
      uStack_44 = 0;
      FUN_1083b5684(&lStack_30,auStack_c0,uVar4 >> 1 & 1,auStack_54);
      lVar5 = lStack_28;
      lStack_28 = lStack_30;
      lStack_30 = 0;
      FUN_10819a6a8(lVar5);
      func_0x00010819aac0();
      goto code_r0x00010819a238;
    }
code_r0x00010819a23c:
    FUN_10819a688(&uStack_b0);
code_r0x00010819a244:
    uVar7 = 1;
    break;
  case 6:
    param_2 = param_2 + 0x18;
    FUN_108199e90(param_2,param_4 + 2);
    if (param_2 == 0) goto code_r0x00010819a244;
    FUN_10819a4d8(&lStack_28,param_2);
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    break;
  case 7:
    FUN_10819a4d8(&lStack_28,param_2 + 0x28);
    uVar7 = *(undefined4 *)(param_2 + 0x40);
  }
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_10819a2a0:
  *param_1 = lStack_28;
  *(undefined4 *)(param_1 + 1) = uVar7;
  FUN_10811e834(&lStack_28);
  return;
}



/* Entry: 10819a350; end: 10819a4d7;  */

void FUN_10819a350(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  long *param_5,long param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int extraout_w11;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  lVar5 = *(long *)(param_6 + 8);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_5 = lVar5;
  FUN_10819a67c(param_6);
  bVar3 = false;
  if ((lVar5 != 0) && (bVar3 = false, !NAN(param_4))) {
    bVar3 = param_4 < 1.0;
  }
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  fStack_34 = param_4;
  if (bVar3) {
    uStack_58 = 0;
    FUN_1083ad49c(auStack_50,&uStack_40,&uStack_58,6);
    FUN_1083be218(&uStack_48,lVar5,auStack_50);
    uStack_48 = 0;
    func_0x00010819ab2c();
    func_0x00010819aadc();
    FUN_108115b2c(auStack_50);
    puVar4 = &uStack_58;
  }
  else {
    if (lVar5 != 0) goto LAB_10819a424;
    uStack_60 = 0;
    FUN_1083bae78(&uStack_48,&uStack_40,&uStack_60);
    uStack_48 = 0;
    func_0x00010819ab2c();
    func_0x00010819aadc();
    puVar4 = &uStack_60;
  }
  FUN_10810a400(puVar4);
LAB_10819a424:
  if (*(long *)(param_6 + 0x18) != 0) {
    do {
      func_0x00010819aab0();
    } while (extraout_w11 != 0);
    FUN_1083be218(&uStack_48);
    uStack_48 = 0;
    func_0x00010819ab2c();
    func_0x00010819aadc();
    FUN_108115b2c(auStack_68);
  }
  return;
}



/* Entry: 10819a4d8; end: 10819a58f;  */

long * FUN_10819a4d8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108167c3c(param_1);
  }
  return param_1;
}



/* Entry: 10819a590; end: 10819a67b;  */

void FUN_10819a590(long *param_1)

{
  long lVar1;
  int in_w3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_58;
  int iStack_50;
  undefined1 uStack_44;
  undefined1 uStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  FUN_10819a090(&lStack_58);
  lVar1 = lStack_58;
  if (iStack_50 == in_w3) {
    lStack_58 = 0;
    *param_1 = lVar1;
  }
  else {
    if (in_w3 == 2 && iStack_50 == 1) {
      FUN_1083ada84(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    else {
      FUN_1083ad9c4(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    func_0x00010819aac0();
    FUN_108115b2c(auStack_28);
  }
  func_0x00010819ab18();
  return;
}



/* Entry: 10819a67c; end: 10819a687;  */

undefined4 FUN_10819a67c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Entry: 10819a688; end: 10819a6a7;  */

void FUN_10819a688(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108375e94();
  }
  return;
}



/* Entry: 10819a6a8; end: 10819a6d3;  */

void FUN_10819a6a8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010819a6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10819a6d4; end: 10819a77b;  */

uint * FUN_10819a6d4(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar5 = param_2;
  FUN_10819a77c();
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = uVar3 - 1 & (uint)uVar5;
  uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 0x30);
    uVar4 = *puVar7;
    if (uVar4 == 0) break;
    if ((uint)uVar5 == uVar4) {
      puVar7 = puVar7 + 2;
      uVar6 = param_2;
      FUN_1083a3440(param_2,puVar7);
      if ((uVar6 & 1) != 0) {
        return puVar7;
      }
    }
    uVar4 = 0;
    if ((int)uVar1 < 1) {
      uVar4 = uVar3;
    }
    uVar1 = (uVar1 + uVar4) - 1;
    uVar2 = uVar2 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 10819a77c; end: 10819a7bb;  */

uint FUN_10819a77c(uint param_1)

{
  func_0x00010819a798();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10819a7bc; end: 10819a807;  */

long FUN_10819a7bc(void)

{
  long unaff_x19;
  
  func_0x00010819ab20();
  FUN_10819aa78();
  FUN_10819a808();
  func_0x00010819ab20();
  func_0x000108199e10();
  return unaff_x19 + 8;
}



/* Entry: 10819a808; end: 10819a857;  */

uint * FUN_10819a808(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar4 = param_1[1];
  if (iVar4 * 3 <= *param_1 * 4) {
    iVar6 = iVar4 << 1;
    if (iVar4 < 1) {
      iVar6 = 4;
    }
    FUN_10819a858(param_1,iVar6);
  }
  uVar7 = param_2;
  FUN_10819a77c();
  uVar5 = param_1[1];
  uVar1 = uVar5 - 1 & (uint)uVar7;
  uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar9 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x30);
    if (*puVar9 == 0) break;
    if ((uint)uVar7 == *puVar9) {
      uVar8 = param_2;
      FUN_1083a3440(param_2,puVar9 + 2);
      if ((int)uVar8 != 0) {
        func_0x00010819ab00();
        return puVar9 + 2;
      }
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar5;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  func_0x00010819ab00();
  *param_1 = *param_1 + 1;
  return puVar9 + 2;
}



/* Entry: 10819a858; end: 10819a947;  */

void FUN_10819a858(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lStack_38;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  lStack_38 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar5 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 0x10;
  puVar3 = (undefined8 *)(uVar5 + 0x10);
  if (0xffffffffffffffef < uVar5 || SUB168(auVar2 * ZEXT816(0x30),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x30;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar6 = uVar8 * 0x30;
    puVar7 = puVar3 + 2;
    do {
      *(undefined4 *)puVar7 = 0;
      lVar6 = lVar6 + -0x30;
      puVar7 = puVar7 + 6;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar3 + 2;
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x30 - lVar6 != 0;
      lVar6 = lVar6 + 0x30) {
    if (*(int *)(lStack_38 + lVar6) != 0) {
      FUN_10819a948(param_1,lStack_38 + lVar6 + 8);
    }
  }
  FUN_108199d44(&lStack_38);
  return;
}



/* Entry: 10819a948; end: 10819aa17;  */

uint * FUN_10819a948(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  
  uVar5 = param_2;
  FUN_10819a77c();
  uVar4 = param_1[1];
  uVar1 = uVar4 - 1 & (uint)uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x30);
    if (*puVar7 == 0) break;
    if ((uint)uVar5 == *puVar7) {
      uVar6 = param_2;
      FUN_1083a3440(param_2,puVar7 + 2);
      if ((int)uVar6 != 0) {
        func_0x00010819ab00();
        return puVar7 + 2;
      }
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  func_0x00010819ab00();
  *param_1 = *param_1 + 1;
  return puVar7 + 2;
}



/* Entry: 10819aa18; end: 10819aa77;  */

undefined4 * FUN_10819aa18(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_108199de0();
  FUN_1083a33c4(param_1 + 2,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[10] = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10819aa78; end: 10819aaaf;  */

void FUN_10819aa78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1083a33c4();
  uVar1 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar2 = param_3[2];
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10819aab0; end: 10819ab3b;  */

void FUN_10819aab0(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10819ab3c; end: 10819ac7b;  */

undefined8 FUN_10819ab3c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_88;
  char cStack_84;
  undefined4 uStack_80;
  char cStack_7c;
  undefined4 auStack_78 [2];
  long lStack_70;
  char cStack_68;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  char cStack_34;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  FUN_10819b3b8(&uStack_5c,&UNK_10f47dfc6);
  FUN_10819ac7c();
  if (cStack_34 == '\x01') {
    *(undefined8 *)(param_1 + 0x338) = uStack_3c;
    *(undefined8 *)(param_1 + 800) = uStack_54;
    *(undefined8 *)(param_1 + 0x318) = uStack_5c;
    *(undefined8 *)(param_1 + 0x330) = uStack_44;
    *(undefined8 *)(param_1 + 0x328) = uStack_4c;
    return 1;
  }
  FUN_10819b3b8(auStack_78,&UNK_10f47dfd8);
  FUN_10819790c();
  if (cStack_68 == '\x01') {
    *(undefined4 *)(param_1 + 0x308) = auStack_78[0];
    lVar2 = *(long *)(param_1 + 0x310);
    if (lVar2 != lStack_70) {
      *(long *)(param_1 + 0x310) = lStack_70;
      lStack_70 = lVar2;
    }
  }
  else {
    FUN_10819b3b8(&uStack_80,&UNK_10f47dfe3);
    func_0x00010819acc8();
    if (cStack_7c == '\x01') {
      *(undefined4 *)(param_1 + 0x340) = uStack_80;
    }
    else {
      FUN_10819b3b8(&uStack_88,&UNK_10f47dff0);
      FUN_108191a64();
      if (cStack_84 != '\x01') {
        uVar3 = 0;
        goto LAB_10819ac40;
      }
      *(undefined4 *)(param_1 + 0x344) = uStack_88;
    }
  }
  uVar3 = 1;
LAB_10819ac40:
  FUN_1081940c8(auStack_78);
  return uVar3;
}



/* Entry: 10819ac7c; end: 10819ad0b;  */

void FUN_10819ac7c(undefined8 *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010819b3d8();
  if (param_2 != 0) {
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  iVar1 = (int)&lStack_60;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_38 = 0;
  uStack_40 = 0x3f800000;
  uStack_30 = 0x103f800000;
  lVar2 = param_4;
  lStack_60 = param_4;
  _strlen();
  lStack_58 = param_4 + lVar2;
  FUN_10819034c(&lStack_60,&uStack_50);
  if (iVar1 != 0) {
    FUN_108193f58(param_1,&uStack_50);
  }
  return;
}



/* Entry: 10819ad0c; end: 10819ae9f;  */

void FUN_10819ad0c(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  
  uVar7 = NEON_fmov(0x3f800000,4);
  uStack_90 = 0x42b40000;
  plVar5 = *(long **)(param_5 + 0x2f8);
  uStack_98 = uVar7;
  for (lVar6 = (long)*(int *)(param_5 + 0x300) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xc) == 0x26) {
      if (*(int *)(lVar4 + 0x248) == 2 && *(int *)(lVar4 + 0x268) == 2) {
        FUN_1081a08fc(param_6,lVar4 + 0x250);
        FUN_108343500();
        param_4 = *(float *)(lVar4 + 0x26c) * param_4;
      }
      else {
        param_4 = 1.0;
        uVar7 = 0;
        param_2 = 0;
        param_3 = 0;
      }
      fStack_80 = (float)uVar7;
      uStack_7c = param_2;
      uStack_78 = param_3;
      fStack_74 = param_4;
      FUN_10819b1ec(param_8 + 0x20,&fStack_80);
      func_0x00010819f85c(&uStack_98,lVar4 + 0x308,2);
      fStack_80 = (float)uVar7;
      fStack_88 = 1.0;
      fStack_84 = 0.0;
      pfVar1 = &fStack_80;
      if (fStack_80 <= 0.0) {
        pfVar1 = &fStack_84;
      }
      pfVar2 = &fStack_88;
      if (fStack_80 <= 1.0) {
        pfVar2 = pfVar1;
      }
      func_0x00010819b270(param_7 + 8,pfVar2);
    }
    plVar5 = plVar5 + 1;
  }
  if ((*(int *)(param_7 + 0x10) == 0) && (**(int **)(param_5 + 0x310) != 0)) {
    FUN_10819fb24(&fStack_80,param_6,param_5 + 0x308);
    if ((CONCAT44(fStack_74,uStack_78) != 0) &&
       (iVar3 = *(int *)(CONCAT44(fStack_74,uStack_78) + 0xc), iVar3 == 0x24 || iVar3 == 0x1e)) {
      FUN_10819b3b8();
      FUN_10819ad0c();
    }
    FUN_10819b08c(&fStack_80);
  }
  return;
}



/* Entry: 10819aea0; end: 10819b013;  */

bool FUN_10819aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined4 *param_6,long param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uStack_158;
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = auStack_98;
  uStack_70 = 0x400000000;
  puStack_a8 = auStack_b0;
  uStack_a0 = 0x400000000;
  FUN_10819ad0c(param_5,param_6,auStack_b0,auStack_98);
  lVar6 = param_5[0x68];
  func_0x0001081a0c84(param_6,*(undefined4 *)((long)param_5 + 0x344));
  FUN_10814bdfc(auStack_128);
  func_0x00010815f6c0(auStack_150,param_3,param_4);
  FUN_1081600e0(auStack_100,auStack_128,auStack_150);
  FUN_1081600e0(auStack_d8,auStack_100,param_5 + 99);
  (**(code **)(*param_5 + 0x68))
            (&uStack_158,param_5,param_6,puStack_78,puStack_a8,uStack_70 & 0xffffffff,(int)lVar6,
             auStack_d8);
  uVar2 = uStack_158;
  uStack_158 = 0;
  func_0x000108114f18(param_7 + 8,uVar2);
  func_0x000106f47224(&uStack_158);
  FUN_1081842d4(&puStack_a8);
  ppuVar3 = &puStack_78;
  FUN_10819b12c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return true;
  }
  ___stack_chk_fail();
  FUN_1081842d4(&puStack_a8);
  FUN_10819b12c(&puStack_78);
  func_0x00010819b3e4();
  func_0x00010819b3ec();
  lVar6 = 4;
  ppuVar5 = &PTR_DAT_110a2de38;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      return false;
    }
    ppuVar1 = ppuVar5 + 2;
    ppuVar4 = ppuVar3;
    func_0x00010818efe8(ppuVar3,ppuVar5[3]);
    ppuVar5 = ppuVar1;
  } while ((int)ppuVar4 == 0);
  *param_6 = *(undefined4 *)ppuVar1;
  return *ppuVar3 == ppuVar3[1];
}



/* Entry: 10819b014; end: 10819b083;  */

bool FUN_10819b014(void)

{
  long *plVar1;
  undefined **ppuVar2;
  long *unaff_x19;
  undefined4 *unaff_x20;
  long lVar3;
  
  func_0x00010819b3ec();
  ppuVar2 = &PTR_DAT_110a2de38;
  lVar3 = 4;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      return false;
    }
    ppuVar2 = ppuVar2 + 2;
    plVar1 = unaff_x19;
    func_0x00010818efe8();
  } while ((int)plVar1 == 0);
  *unaff_x20 = *(undefined4 *)ppuVar2;
  return *unaff_x19 == unaff_x19[1];
}



/* Entry: 10819b084; end: 10819b08b;  */

void FUN_10819b084(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10819b088);
  (*pcVar1)();
}



/* Entry: 10819b08c; end: 10819b0c3;  */

long * FUN_10819b08c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10819b0c4(*param_1,param_1 + 1);
  }
  FUN_108191c38(param_1 + 1);
  return param_1;
}



/* Entry: 10819b0c4; end: 10819b0ef;  */

undefined8 FUN_10819b0c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_10819b0f0(param_1,uVar1);
  return param_1;
}



/* Entry: 10819b0f0; end: 10819b12b;  */

void FUN_10819b0f0(long *param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010819b124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10819b12c; end: 10819b1b7;  */

undefined8 * FUN_10819b12c(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10819b1b8; end: 10819b1d3;  */

long * FUN_10819b1b8(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  uVar1 = *param_2;
  if ((*param_1 & 0x100000000) == 0) {
    *(undefined1 *)((long)param_1 + 4) = 1;
  }
  *(undefined4 *)param_1 = uVar1;
  if ((*param_1 & 0x100000000) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010819b3ec();
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar2 = (long *)(*unaff_x19 + (long)(int)param_1[1] * 0x10);
    lVar3 = *unaff_x20;
    plVar2[1] = unaff_x20[1];
    *plVar2 = lVar3;
  }
  else {
    plVar2 = unaff_x19;
    FUN_10819b2f4(0x3ff8000000000000);
    plVar2 = plVar2 + (long)(int)unaff_x19[1] * 2;
    lVar3 = *unaff_x20;
    plVar2[1] = unaff_x20[1];
    *plVar2 = lVar3;
    FUN_10819b318();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar2;
}



/* Entry: 10819b1d4; end: 10819b1eb;  */

long * FUN_10819b1d4(long *param_1)

{
  long *plVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  if ((*param_1 & 0x100000000) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010819b3ec();
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar1 = (long *)(*unaff_x19 + (long)(int)param_1[1] * 0x10);
    lVar2 = *unaff_x20;
    plVar1[1] = unaff_x20[1];
    *plVar1 = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_10819b2f4(0x3ff8000000000000);
    plVar1 = plVar1 + (long)(int)unaff_x19[1] * 2;
    lVar2 = *unaff_x20;
    plVar1[1] = unaff_x20[1];
    *plVar1 = lVar2;
    FUN_10819b318();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar1;
}



/* Entry: 10819b1ec; end: 10819b2f3;  */

long * FUN_10819b1ec(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010819b3ec();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar1 = (long *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 0x10);
    lVar2 = *unaff_x20;
    plVar1[1] = unaff_x20[1];
    *plVar1 = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_10819b2f4(0x3ff8000000000000);
    plVar1 = plVar1 + (long)(int)unaff_x19[1] * 2;
    lVar2 = *unaff_x20;
    plVar1[1] = unaff_x20[1];
    *plVar1 = lVar2;
    FUN_10819b318();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar1;
}



/* Entry: 10819b2f4; end: 10819b317;  */

void FUN_10819b2f4(long param_1,int param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x10;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10819b318;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010819b3ec();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10819b318; end: 10819b387;  */

void FUN_10819b318(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010819b3ec();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10819b388; end: 10819b3b7;  */

void FUN_10819b388(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10819b3b8; end: 10819b3f7;  */

void FUN_10819b3b8(void)

{
  return;
}



/* Entry: 10819b3f8; end: 10819b56b;  */

undefined8 FUN_10819b3f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_88;
  char cStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  char cStack_68;
  undefined8 uStack_60;
  byte bStack_58;
  undefined8 uStack_54;
  byte bStack_4c;
  undefined8 uStack_48;
  byte bStack_40;
  undefined8 uStack_3c;
  byte bStack_34;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    puVar4 = &uStack_3c;
    FUN_10819b918(&uStack_3c,&DAT_10f62b0e2);
    if ((bStack_34 & 1) == 0) {
      puVar4 = &uStack_48;
      FUN_10819b918(&uStack_48,"y");
      if ((bStack_40 & 1) == 0) {
        puVar4 = &uStack_54;
        FUN_10819b918(&uStack_54,"width");
        if ((bStack_4c & 1) == 0) {
          puVar4 = &uStack_60;
          FUN_10819b918(&uStack_60,"height");
          if ((bStack_58 & 1) == 0) {
            FUN_10819790c(auStack_78,"xlink:href",param_2,param_3);
            if (cStack_68 == '\x01') {
              *(undefined4 *)(param_1 + 0x310) = auStack_78[0];
              lVar2 = *(long *)(param_1 + 0x318);
              if (lVar2 != lStack_70) {
                *(long *)(param_1 + 0x318) = lStack_70;
                lStack_70 = lVar2;
              }
            }
            else {
              func_0x000108197948(&uStack_88,&DAT_10f47dda1,param_2,param_3);
              if (cStack_80 != '\x01') {
                uVar3 = 0;
                goto LAB_10819b550;
              }
              *(undefined8 *)(param_1 + 800) = uStack_88;
            }
            uVar3 = 1;
LAB_10819b550:
            FUN_1081940c8(auStack_78);
            return uVar3;
          }
          lVar2 = 0x308;
        }
        else {
          lVar2 = 0x300;
        }
      }
      else {
        lVar2 = 0x2f8;
      }
    }
    else {
      lVar2 = 0x2f0;
    }
    *(undefined8 *)(param_1 + lVar2) = *puVar4;
  }
  return 1;
}



/* Entry: 10819b56c; end: 10819b59b;  */

bool FUN_10819b56c(long *param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  
  if (((*(int *)param_1[99] != 0) && (0.0 < *(float *)(param_1 + 0x60))) &&
     (0.0 < *(float *)(param_1 + 0x61))) {
    plVar3 = param_1 + 0x59;
    func_0x0001081420b8();
    if (((ulong)plVar3 & 1) == 0) {
      func_0x0001081a0698(param_2);
      FUN_10833e2b0(*(undefined8 *)(param_2 + 0x308),param_1 + 0x59);
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x50))();
    FUN_10819fb68(param_2,param_1 + 2,(uint)plVar3 ^ 1);
    piVar2 = (int *)(*(long *)(param_2 + 0x38) + 0x124);
    FUN_10819df08();
    if (*piVar2 == 1) {
      bVar1 = false;
    }
    else {
      bVar1 = (int)param_1[0x3d] != 2 || *(int *)((long)param_1 + 0x1ec) != 1;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 10819b59c; end: 10819b7d3;  */

void FUN_10819b59c(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 *param_6,int *param_7,float *param_8,undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_50;
  long lStack_48;
  
  uStack_b8 = (long *)0x0;
  if (*param_7 == 1) {
    func_0x00010840669c(&plStack_a0,*(long *)(param_7 + 2) + 8);
    func_0x000108406658(&lStack_48,*(long *)(param_7 + 2) + 8);
    (**(code **)(*(long *)*param_6 + 0x20))
              (&plStack_50,(long *)*param_6,plStack_a0 + 1,lStack_48 + 8,lStack_48 + 8);
    plVar1 = plStack_50;
    plVar2 = uStack_b8;
    plStack_50 = (long *)0x0;
    uStack_b8 = plVar1;
    func_0x00010819b8c4(plVar2);
    FUN_10815b8bc(&plStack_50);
    FUN_1083a3ca0(lStack_48);
    FUN_1083a3ca0(plStack_a0);
LAB_10819b69c:
    if (uStack_b8 != (long *)0x0) {
      param_2 = 0.0;
      (**(code **)(*uStack_b8 + 0x28))(&plStack_a0);
      plVar2 = plStack_a0;
      plStack_a8 = plStack_a0;
      plStack_a0 = (long *)0x0;
      func_0x000106f47184(&plStack_a0);
      goto LAB_10819b6d4;
    }
  }
  else if (*param_7 == 2) {
    (**(code **)(*(long *)*param_6 + 0x20))
              (&plStack_a0,(long *)*param_6,"",*(long *)(param_7 + 2) + 8,"");
    plVar1 = plStack_a0;
    plVar2 = uStack_b8;
    plStack_a0 = (long *)0x0;
    uStack_b8 = plVar1;
    FUN_10819b8c0(plVar2);
    FUN_10815b8bc(&plStack_a0);
    goto LAB_10819b69c;
  }
  plVar2 = (long *)0x0;
  plStack_a8 = (long *)0x0;
LAB_10819b6d4:
  FUN_10815b8bc(&uStack_b8);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lStack_98 = plVar2[4];
    plStack_a0 = (long *)0x0;
    FUN_10817500c(&plStack_a0);
    uStack_b8 = (long *)CONCAT44(param_3,param_2);
    fStack_b0 = param_4;
    fStack_ac = param_5;
    FUN_10819da88(&plStack_a0,&uStack_b8,param_8,param_9);
    func_0x000108142084(&plStack_a0,&uStack_b8,1);
    plVar2 = plStack_a8;
    fVar3 = *param_8;
    fVar4 = param_8[1];
    plStack_a8 = (long *)0x0;
    *param_1 = plVar2;
    *(float *)(param_1 + 1) = param_2 + fVar3;
    *(float *)((long)param_1 + 0xc) = param_3 + fVar4;
    *(float *)(param_1 + 2) = param_4 + fVar3;
    *(float *)((long)param_1 + 0x14) = param_5 + fVar4;
  }
  func_0x00010819b924();
  return;
}



/* Entry: 10819b7d4; end: 10819b883;  */

void FUN_10819b7d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = param_1;
  FUN_10819f95c(*(undefined8 *)(param_6 + 0x20),param_5 + 0x2f0,param_5 + 0x2f8,param_5 + 0x300,
                param_5 + 0x308);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_10819b59c(&lStack_58,*(undefined8 *)(param_6 + 0x10),param_5 + 0x310,&uStack_40,
                *(undefined8 *)(param_5 + 800));
  if (lStack_58 != 0) {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_60 = 1;
    FUN_1083400a4(*(undefined8 *)(param_6 + 0x308),lStack_58,auStack_50,&uStack_70,0);
  }
  func_0x00010819b924();
  return;
}



/* Entry: 10819b884; end: 10819b8ab;  */

undefined8 * FUN_10819b884(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte extraout_w8;
  
  puVar1 = param_1;
  FUN_10837e150();
  *param_1 = puVar1;
  func_0x00010837cd40();
  *(undefined1 *)((long)param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0xd) = 2;
  *(byte *)((long)param_1 + 0xe) = extraout_w8 & 0xf8;
  return param_1;
}



/* Entry: 10819b8ac; end: 10819b8bf;  */

void FUN_10819b8ac(void)

{
  FUN_10819b8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


