/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108100694; end: 1081006df;  */

void FUN_108100694(void)

{
  return;
}



/* Entry: 1081006e0; end: 108100743;  */

undefined8 * FUN_1081006e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a23338;
  func_0x00010810071c(param_1 + 5);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 108100744; end: 108100787;  */

long * FUN_108100744(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_108100788();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_1081008c8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108100788; end: 10810084f;  */

void FUN_108100788(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_108100850();
  lVar3 = param_2;
  func_0x000108100874(param_1);
  do {
    lVar5 = param_2 + -0x1000;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x20;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x40;
        }
        param_1[4] = lVar3;
        return;
      }
      func_0x000108100d74(*(undefined8 *)(param_2 + 0x18));
      lVar5 = lVar5 + 0x40;
      param_2 = param_2 + 0x40;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 108100850; end: 10810089b;  */

void FUN_108100850(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10810089c; end: 1081008c7;  */

long * FUN_10810089c(long *param_1)

{
  FUN_1081008c8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081008c8; end: 1081008eb;  */

void FUN_1081008c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1081008ec; end: 10810094f;  */

undefined8 FUN_1081008ec(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108100918(&uStack_28);
  return param_1;
}



/* Entry: 108100950; end: 108100957;  */

void FUN_108100950(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x40) {
    func_0x000108100d74(*(undefined8 *)(lVar2 + -0x28));
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 108100958; end: 108100997;  */

void FUN_108100958(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x40) {
    func_0x000108100d74(*(undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108100998; end: 1081009a3;  */

void FUN_108100998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a232e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1081009a4; end: 108100a33;  */

undefined8 * FUN_1081009a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a232a8;
  FUN_1080ffa20();
  func_0x0001081009f8(param_1 + 10);
  if (param_1[9] != 0) {
    func_0x0001003a916c();
  }
  FUN_1081002dc(param_1 + 8);
  func_0x0001080d5ab0(param_1 + 6);
  *param_1 = &PTR_DAT_110d71ac8;
  func_0x00010b8c3cbc();
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 108100a34; end: 108100a43;  */

void FUN_108100a34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a23258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108100a44; end: 108100a57;  */

void FUN_108100a44(void)

{
  FUN_108100b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108100a58; end: 108100a63;  */

void FUN_108100a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108100c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108100a64; end: 108100a77;  */

void FUN_108100a64(void)

{
  func_0x000108100ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108100a78; end: 108100b1b;  */

undefined8 FUN_108100a78(void)

{
  int iVar1;
  
  if ((bRam0000000113729a30 & 1) == 0) {
    iVar1 = 0x13729a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113729a28,&UNK_10f47b49f);
      ___cxa_guard_release(0x113729a30);
    }
  }
  return 0x113729a28;
}



/* Entry: 108100b1c; end: 108100e4b;  */

void FUN_108100b1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a233d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108100e4c; end: 108102897;  */

undefined8 * FUN_108100e4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_DAT_110a23478;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110a234b0;
  param_1[4] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 5);
  return param_1;
}



/* Entry: 108102898; end: 108102bef;  */

undefined8 * FUN_108102898(undefined8 *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar10;
  long lVar11;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *puVar12;
  long in_stack_00000000;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  func_0x000108106788();
  *param_1 = &PTR_FUN_110a237a8;
  param_1[1] = 1;
  param_1[2] = &PTR_DAT_110a23840;
  param_1[3] = *(undefined8 *)(*param_2 + 0x48);
  *(int *)(param_1 + 4) = param_3;
  puVar8 = param_1;
  func_0x000108106748();
  puVar8[5] = extraout_x8;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar12 = puVar8 + 0xc;
  *puVar12 = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  uVar10 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001081063c0();
      uVar10 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  param_1[0xd] = uVar10;
  func_0x000108106520();
  puVar9 = puVar8;
  FUN_1080f0cbc();
  puVar4 = puVar9 + 4;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = puVar9 + 3;
  }
  in_stack_00000018 = puVar9;
  func_0x0001003a83dc(&stack0x00000010,*puVar4);
  func_0x00010090c1cc(puVar12,&stack0x00000010);
  lVar11 = in_stack_00000010;
  func_0x0001003a8cb8();
  func_0x000108106520();
  func_0x000108106610();
  FUN_1080f8d70();
  plVar1 = puVar8 + 1;
  in_stack_00000010 = lVar11;
  do {
    func_0x000108106634();
  } while (extraout_w9 != 0);
  func_0x0001081063b4();
  func_0x0001080ed580(puVar8);
  if (in_stack_00000010 != 0) {
    do {
      func_0x0001081064a8();
    } while (extraout_w10 != 0);
  }
  func_0x0001081063b4();
  func_0x000108106598();
  FUN_1080edd8c(param_1 + 0xd,&stack0x00000010);
  if (in_stack_00000000 != 0) {
    do {
      func_0x0001081064a8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001081063b4();
  func_0x000108106598();
  FUN_108105084(in_stack_00000000);
  FUN_1080ede48(param_1 + 0xd,&stack0x00000010);
  if (in_stack_00000000 != 0) {
    do {
      func_0x0001081064a8();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001081063b4();
  func_0x000108106598();
  FUN_108105084();
  func_0x000108106520();
  func_0x000108106610();
  func_0x0001080f8cd4();
  plVar2 = (long *)(in_stack_00000000 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = *plVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  func_0x0001081063b4();
  func_0x000108106598();
  do {
    lVar11 = *plVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 + -1 == 0) {
    func_0x0001081065d4();
  }
  uVar7 = param_3 == 0;
  lVar11 = 0x48;
  __Znwm();
  FUN_1080f6f50();
  puVar8 = (undefined8 *)(lVar11 + 8);
  do {
    func_0x000108106550();
  } while (extraout_w9_00 != 0);
  func_0x0001081063b4();
  func_0x000108106590();
  do {
    func_0x000108106708();
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *puVar8 = extraout_x8_01;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((bool)uVar7) {
    func_0x00010810641c();
  }
  func_0x000108106520();
  func_0x000108106610();
  func_0x0001080f88a0();
  puVar8 = (undefined8 *)(lVar11 + 8);
  do {
    func_0x000108106550();
  } while (extraout_w9_01 != 0);
  func_0x0001081063b4();
  func_0x000108106590();
  do {
    func_0x000108106708();
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *puVar8 = extraout_x8_02;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((bool)uVar7) {
    func_0x00010810641c();
  }
  func_0x000108106520();
  func_0x000108106610();
  FUN_1080fb984();
  puVar8 = (undefined8 *)(lVar11 + 8);
  do {
    func_0x000108106550();
  } while (extraout_w9_02 != 0);
  func_0x0001081063b4();
  func_0x000108106590();
  do {
    func_0x000108106708();
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *puVar8 = extraout_x8_03;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((bool)uVar7) {
    func_0x00010810641c();
  }
  func_0x000108106520();
  func_0x000108106610();
  FUN_1080f0324();
  plVar2 = (long *)(lVar11 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = *plVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  func_0x0001081063b4();
  func_0x000108106590();
  func_0x000108106520();
  func_0x000108106610();
  FUN_1080ed07c();
  plVar3 = (long *)(lVar11 + 8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = *plVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  func_0x0001081063b4();
  func_0x000108106598();
  do {
    lVar11 = *plVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 + -1 == 0) {
    func_0x0001081065d4();
  }
  do {
    lVar11 = *plVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 + -1 == 0) {
    func_0x00010810641c();
  }
  FUN_1080eefa0(in_stack_00000010);
  do {
    lVar11 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar11 + -1 == 0) {
    func_0x000108106624();
  }
  return param_1;
}



/* Entry: 108102bf0; end: 108102def;  */

void FUN_108102bf0(long param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x19;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x00010810665c();
  lVar12 = *param_2 + 0x20;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar12 = *param_2 + 0x18;
  }
  func_0x0001081066a4(lVar12);
  uVar6 = uStack_38;
  FUN_108105f90();
  lVar12 = 0;
  plVar7 = (long *)(unaff_x20 + 0x28);
  uVar9 = uVar6 >> 7;
  while( true ) {
    uVar9 = uVar9 & *(ulong *)(unaff_x20 + 0x40);
    uVar13 = *(ulong *)(*plVar7 + uVar9);
    uVar10 = uVar13 ^ (uVar6 & 0x7f) * 0x101010101010101;
    for (uVar10 = uVar10 + 0xfefefefefefefeff & (uVar10 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar8 = *(long *)(unaff_x20 + 0x30);
      plVar11 = (long *)(uVar9 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                        *(ulong *)(unaff_x20 + 0x40));
      if (*(ulong *)(lVar8 + (long)plVar11 * 0x10) == uStack_38) goto LAB_108102d14;
    }
    if ((uVar13 & ~uVar13 << 6 & 0x8080808080808080) != 0) break;
    lVar12 = lVar12 + 8;
    uVar9 = lVar12 + uVar9;
  }
  FUN_108105fac(plVar7,uVar6);
  lVar12 = *(long *)(unaff_x20 + 0x28);
  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + (long)plVar7 * 0x10);
  *puVar1 = uStack_38;
  puVar1[1] = 0;
  bVar5 = (byte)uVar6 & 0x7f;
  *(byte *)(lVar12 + (long)plVar7) = bVar5;
  *(byte *)(*(long *)(unaff_x20 + 0x28) + (*(ulong *)(unaff_x20 + 0x40) & (ulong)(plVar7 + -1)) +
            (*(ulong *)(unaff_x20 + 0x40) & 7) + 1) = bVar5;
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar11 = plVar7;
LAB_108102d14:
  plVar7 = (long *)(lVar8 + (long)plVar11 * 0x10 + 8);
  if (plVar7 != unaff_x19) {
    lVar12 = *plVar7;
    lVar8 = *unaff_x19;
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar7 = lVar8;
    func_0x0001080ed580(lVar12);
  }
  func_0x0001081066dc();
  return;
}



/* Entry: 108102df0; end: 108102dfb;  */

undefined8 * FUN_108102df0(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110a237a8;
  param_1[2] = &PTR_DAT_110a23840;
  func_0x000107475310(param_1 + 0xd);
  func_0x0001003a8c94(param_1 + 0xc);
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[5] + lVar3)) {
        FUN_108103c98(param_1[6] + lVar2);
        lVar1 = param_1[8];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[10] = 0;
    func_0x000108106748();
    param_1[5] = extraout_x8;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}



/* Entry: 108102dfc; end: 108102e0f;  */

void FUN_108102dfc(void)

{
  func_0x000108102d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108102e10; end: 108102e7f;  */

void FUN_108102e10(long param_1)

{
  func_0x000108102d58(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108102e80; end: 108103107;  */

long * FUN_108102e80(int param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  long *plStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x000108106788();
  func_0x0001081065c8();
  func_0x000108106510();
  in_stack_00000018 = extraout_x8_00;
  FUN_108103108();
  if (param_1 != 0) {
    in_stack_00000008 = (undefined8 *)0x0;
    param_2 = unaff_x21;
    (**(code **)(*(long *)unaff_x20[0xb] + 0x28))();
    FUN_1080d5cdc(in_stack_00000008);
    if (in_stack_00000000 != (long *)0x0) {
      puVar8 = (undefined8 *)unaff_x20[0xb];
      puVar9 = (undefined8 *)*param_3;
      puVar4 = (undefined8 *)0xe0;
      __Znwm();
      func_0x000108106754();
      if ((puVar9 != (undefined8 *)0x0) && (puVar9[2] != 0)) {
        do {
          func_0x0001081063e0();
        } while (extraout_w10 != 0);
      }
      in_stack_00000008 = puVar9;
      FUN_108105128(puVar4 + 3,unaff_x20 + 0xd);
      FUN_1080d5cdc(in_stack_00000008);
      param_2 = puVar4 + 3;
      FUN_1081050a8(&stack0x00000008,param_2,puVar4);
      puVar9 = in_stack_00000008;
      if ((in_stack_00000008 != (undefined8 *)0x0) && (in_stack_00000008[2] != 0)) {
        do {
          func_0x0001081063e0();
        } while (extraout_w10_00 != 0);
      }
      *extraout_x8 = (long)puVar9;
      func_0x00010810530c();
      FUN_1080d2890();
      goto LAB_1081030f0;
    }
  }
  func_0x0001081066b0();
  if (in_stack_00000000 == (long *)0x0) {
    FUN_108103274(&stack0x00000008);
    param_2 = (long *)&stack0x00000008;
    FUN_10810327c();
    func_0x0001080ed580(in_stack_00000008);
  }
  lVar10 = *unaff_x21;
  puVar4 = (undefined8 *)0xd0;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a23b80;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = puVar4 + 3;
  puVar9 = unaff_x20 + 2;
  lVar7 = *param_3;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x20 = puVar4 + 4;
  *unaff_x20 = 0;
  puVar4[5] = 0;
  puVar4[6] = lVar10;
  puVar4[7] = puVar9;
  puVar4[8] = lVar7;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0xf] = 0x32aaaba7;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  *(undefined2 *)(puVar4 + 0x18) = 0;
  puVar4[3] = &PTR_DAT_110a23bd0;
  if (in_stack_00000000 == (long *)0x0) {
    puVar4[0x19] = 0;
    *(undefined1 *)((long)puVar4 + 0xc1) = 0;
LAB_1081030a8:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = (long *)&stack0x00000008;
    in_stack_00000008 = puVar8;
    in_stack_00000010 = puVar4;
    func_0x0001003a8180(unaff_x20,param_2);
    func_0x0001081066d4();
    if (puVar4[5] != 0) goto LAB_1081030d4;
  }
  else {
    do {
      func_0x0001081064a8();
    } while (extraout_w10_01 != 0);
    puVar4[0x19] = in_stack_00000000;
    plVar5 = in_stack_00000000;
    (**(code **)(*in_stack_00000000 + 0x38))();
    *(char *)((long)puVar4 + 0xc1) = (char)plVar5;
    if ((puVar4[5] == 0) || (in_ZR = *(long *)(puVar4[5] + 8) == -1, (bool)in_ZR))
    goto LAB_1081030a8;
LAB_1081030d4:
    do {
      func_0x0001081063e0();
    } while (extraout_w10_02 != 0);
  }
  *extraout_x8 = (long)puVar8;
  func_0x0001003a916c(puVar8);
  func_0x0001080ed580();
LAB_1081030f0:
  func_0x00010810642c(in_stack_00000018);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_8 = FUN_108103108;
    puStack_30 = puVar8;
    puStack_28 = puVar4;
    puStack_20 = unaff_x20;
    puStack_10 = &stack0x00000060;
    func_0x0001081066c8(&plStack_38);
    if ((((plStack_38 == (long *)0x0) ||
         (plVar6 = plStack_38, (**(code **)(*plStack_38 + 0x30))(), (int)plVar6 != 0)) &&
        (plVar6 = (long *)in_stack_00000000[0xb], plVar6 != (long *)0x0)) &&
       ((**(code **)(*plVar6 + 0x68))(plVar6,param_2), ((ulong)plVar6 & 1) != 0)) {
      plVar6 = (long *)0x1;
    }
    else {
      plVar6 = (long *)0x0;
    }
    func_0x0001080ed580(plStack_38);
    return plVar6;
  }
  return in_stack_00000000;
}



/* Entry: 108103108; end: 108103273;  */

undefined8 FUN_108103108(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_38;
  
  func_0x0001081066c8(&plStack_38);
  if ((((plStack_38 == (long *)0x0) ||
       (plVar1 = plStack_38, (**(code **)(*plStack_38 + 0x30))(), (int)plVar1 != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x58), plVar1 != (long *)0x0)) &&
     ((**(code **)(*plVar1 + 0x68))(plVar1,param_2), ((ulong)plVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  func_0x0001080ed580(plStack_38);
  return uVar2;
}



/* Entry: 108103274; end: 10810327b;  */

void FUN_108103274(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  int extraout_w11;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  puVar2 = (ulong *)(param_2 + 0x60);
  func_0x000108106644();
  uVar1 = *puVar2;
  FUN_108105f90();
  lVar3 = 0;
  uVar6 = uVar1 >> 7;
  uVar5 = *(ulong *)(unaff_x20 + 0x40);
  while( true ) {
    uVar6 = uVar6 & uVar5;
    uVar7 = *(ulong *)(*(long *)(unaff_x20 + 0x28) + uVar6);
    uVar8 = uVar7 ^ (uVar1 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar6 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar5;
      if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar9 * 0x10) == *(ulong *)(param_2 + 0x60)) {
        if (uVar5 == uVar9) goto LAB_108103248;
        uVar4 = 0;
        if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar9 * 0x10 + 8) != 0) {
          do {
            func_0x0001081063c0();
            uVar4 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        goto LAB_10810324c;
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
LAB_108103248:
  uVar4 = 0;
LAB_10810324c:
  *unaff_x19 = uVar4;
  return;
}



/* Entry: 10810327c; end: 1081032af;  */

void FUN_10810327c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  func_0x000108106768();
  if (!(bool)in_ZR) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *unaff_x19;
    *unaff_x19 = uVar2;
    func_0x0001080ed580(uVar1);
  }
  return;
}



/* Entry: 1081032b0; end: 1081032b7;  */

long * FUN_1081032b0(int param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  long *plStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  param_1 = param_1 + -0x10;
  func_0x000108106788();
  func_0x0001081065c8();
  func_0x000108106510();
  in_stack_00000018 = extraout_x8_00;
  FUN_108103108();
  if (param_1 != 0) {
    in_stack_00000008 = (undefined8 *)0x0;
    param_2 = unaff_x21;
    (**(code **)(*(long *)unaff_x20[0xb] + 0x28))();
    FUN_1080d5cdc(in_stack_00000008);
    if (in_stack_00000000 != (long *)0x0) {
      puVar8 = (undefined8 *)unaff_x20[0xb];
      puVar9 = (undefined8 *)*param_3;
      puVar4 = (undefined8 *)0xe0;
      __Znwm();
      func_0x000108106754();
      if ((puVar9 != (undefined8 *)0x0) && (puVar9[2] != 0)) {
        do {
          func_0x0001081063e0();
        } while (extraout_w10 != 0);
      }
      in_stack_00000008 = puVar9;
      FUN_108105128(puVar4 + 3,unaff_x20 + 0xd);
      FUN_1080d5cdc(in_stack_00000008);
      param_2 = puVar4 + 3;
      FUN_1081050a8(&stack0x00000008,param_2,puVar4);
      puVar9 = in_stack_00000008;
      if ((in_stack_00000008 != (undefined8 *)0x0) && (in_stack_00000008[2] != 0)) {
        do {
          func_0x0001081063e0();
        } while (extraout_w10_00 != 0);
      }
      *extraout_x8 = (long)puVar9;
      func_0x00010810530c();
      FUN_1080d2890();
      goto LAB_1081030f0;
    }
  }
  func_0x0001081066b0();
  if (in_stack_00000000 == (long *)0x0) {
    FUN_108103274(&stack0x00000008);
    param_2 = (long *)&stack0x00000008;
    FUN_10810327c();
    func_0x0001080ed580(in_stack_00000008);
  }
  lVar10 = *unaff_x21;
  puVar4 = (undefined8 *)0xd0;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a23b80;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = puVar4 + 3;
  puVar9 = unaff_x20 + 2;
  lVar7 = *param_3;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    plVar5 = (long *)(*(long *)(lVar7 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x20 = puVar4 + 4;
  *unaff_x20 = 0;
  puVar4[5] = 0;
  puVar4[6] = lVar10;
  puVar4[7] = puVar9;
  puVar4[8] = lVar7;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0xf] = 0x32aaaba7;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  *(undefined2 *)(puVar4 + 0x18) = 0;
  puVar4[3] = &PTR_DAT_110a23bd0;
  if (in_stack_00000000 == (long *)0x0) {
    puVar4[0x19] = 0;
    *(undefined1 *)((long)puVar4 + 0xc1) = 0;
LAB_1081030a8:
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = (long *)&stack0x00000008;
    in_stack_00000008 = puVar8;
    in_stack_00000010 = puVar4;
    func_0x0001003a8180(unaff_x20,param_2);
    func_0x0001081066d4();
    if (puVar4[5] != 0) goto LAB_1081030d4;
  }
  else {
    do {
      func_0x0001081064a8();
    } while (extraout_w10_01 != 0);
    puVar4[0x19] = in_stack_00000000;
    plVar5 = in_stack_00000000;
    (**(code **)(*in_stack_00000000 + 0x38))();
    *(char *)((long)puVar4 + 0xc1) = (char)plVar5;
    if ((puVar4[5] == 0) || (in_ZR = *(long *)(puVar4[5] + 8) == -1, (bool)in_ZR))
    goto LAB_1081030a8;
LAB_1081030d4:
    do {
      func_0x0001081063e0();
    } while (extraout_w10_02 != 0);
  }
  *extraout_x8 = (long)puVar8;
  func_0x0001003a916c(puVar8);
  func_0x0001080ed580();
LAB_1081030f0:
  func_0x00010810642c(in_stack_00000018);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_8 = FUN_108103108;
    puStack_30 = puVar8;
    puStack_28 = puVar4;
    puStack_20 = unaff_x20;
    puStack_10 = &stack0x00000060;
    func_0x0001081066c8(&plStack_38);
    if ((((plStack_38 == (long *)0x0) ||
         (plVar6 = plStack_38, (**(code **)(*plStack_38 + 0x30))(), (int)plVar6 != 0)) &&
        (plVar6 = (long *)in_stack_00000000[0xb], plVar6 != (long *)0x0)) &&
       ((**(code **)(*plVar6 + 0x68))(plVar6,param_2), ((ulong)plVar6 & 1) != 0)) {
      plVar6 = (long *)0x1;
    }
    else {
      plVar6 = (long *)0x0;
    }
    func_0x0001080ed580(plStack_38);
    return plVar6;
  }
  return in_stack_00000000;
}



/* Entry: 1081032b8; end: 1081034af;  */

undefined1 * FUN_1081032b8(long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  int extraout_w11;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  long alStack_120 [19];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_3;
  func_0x000108106510();
  uStack_58 = extraout_x8;
  func_0x000108106748();
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar6 = *(long *)(*plVar3 + 0x28);
  lVar5 = lVar6 + 0x20;
  FUN_1081053cc();
  lVar4 = *(long *)(lVar6 + 0x20);
  lVar6 = *(long *)(lVar6 + 0x38);
  lStack_130 = lVar5;
  plStack_128 = plVar3;
  while (plVar3 = plStack_128, uVar1 = lStack_130 == lVar4 + lVar6, !(bool)uVar1) {
    if (*(char *)((long)plStack_128 + 0x9b) == '\x01') {
      func_0x00010810668c();
      FUN_1081034d8();
    }
    else {
      func_0x0001081064d0();
      if (lStack_140 == 0) {
        uVar7 = 0;
        lVar5 = 0;
      }
      else {
        do {
          func_0x0001081063c0();
          uVar7 = extraout_x8_00;
          lVar5 = lStack_140;
        } while (extraout_w11 != 0);
      }
      uStack_138 = uVar7;
      func_0x00010b8a2cec(alStack_120,plVar3 + 1,&uStack_138);
      func_0x00010810668c();
      FUN_1081034d8();
      func_0x00010b8a24a8(alStack_120);
      func_0x0001080ceeb8(uStack_138);
      FUN_10810503c(lVar5);
    }
    func_0x00010810544c(&lStack_130);
  }
  lVar5 = *(long *)(*param_3 + 0x28);
  func_0x00010b8a9414(&lStack_130,*param_4,*param_3 + 0x18,auStack_88,lVar5 + 0x50,lVar5 + 0x58,
                      *(undefined1 *)(lVar5 + 0x68),0);
  lVar5 = lStack_130;
  uVar7 = *(undefined8 *)(*param_3 + 0x20);
  lVar4 = 0xe0;
  __Znwm(0xe0);
  func_0x000108106754();
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x0001081063e0();
    } while (extraout_w10 != 0);
  }
  alStack_120[0] = lVar5;
  FUN_108105128(lVar4 + 0x18,param_2 + 0x68,param_3,param_2 + 0x10,uVar7,alStack_120);
  FUN_1080d5cdc(alStack_120[0]);
  FUN_1081050a8(alStack_120,lVar4 + 0x18,lVar4);
  lVar5 = alStack_120[0];
  if ((alStack_120[0] != 0) && (*(long *)(alStack_120[0] + 0x10) != 0)) {
    do {
      func_0x0001081063e0();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = lVar5;
  func_0x00010810530c();
  FUN_1080d5cdc(lStack_130);
  puVar2 = auStack_88;
  FUN_10810452c(puVar2);
  func_0x00010810642c(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1081034b0;
    puStack_150 = &stack0xfffffffffffffff0;
    FUN_108105480(auStack_168);
    return (undefined1 *)(lStack_160 + 8);
  }
  return puVar2;
}



/* Entry: 1081034b0; end: 1081034d7;  */

long FUN_1081034b0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_108105480(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1081034d8; end: 10810354b;  */

void FUN_1081034d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010810665c();
  *param_1 = *param_2;
  func_0x0001003b1eb0(param_1 + 1,param_2 + 1);
  func_0x000108103cc0(unaff_x20 + 0x10,unaff_x19 + 0x10);
  func_0x000108103dbc(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x000108103d00(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x000108103d30(unaff_x20 + 0x78,unaff_x19 + 0x78);
  func_0x000108103d70(unaff_x20 + 0x80,unaff_x19 + 0x80);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x94);
  *(undefined4 *)(unaff_x20 + 0x90) = *(undefined4 *)(unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x20 + 0x94) = uVar1;
  return;
}



/* Entry: 10810354c; end: 10810359b;  */

void FUN_10810354c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x0001081065c8();
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a23a78;
  puVar1[1] = 1;
  if (unaff_x21 != 0) {
    do {
      func_0x0001081064a8();
    } while (extraout_w10 != 0);
  }
  puVar1[2] = unaff_x21;
  puVar1[3] = param_3;
  *unaff_x20 = puVar1;
  return;
}



/* Entry: 10810359c; end: 1081035c3;  */

undefined1 * FUN_10810359c(long *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  int extraout_w11;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  long alStack_120 [19];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_3;
  func_0x000108106510();
  uStack_58 = extraout_x8;
  func_0x000108106748();
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar6 = *(long *)(*plVar3 + 0x28);
  lVar5 = lVar6 + 0x20;
  FUN_1081053cc();
  lVar4 = *(long *)(lVar6 + 0x20);
  lVar6 = *(long *)(lVar6 + 0x38);
  lStack_130 = lVar5;
  plStack_128 = plVar3;
  while (plVar3 = plStack_128, uVar1 = lStack_130 == lVar4 + lVar6, !(bool)uVar1) {
    if (*(char *)((long)plStack_128 + 0x9b) == '\x01') {
      func_0x00010810668c();
      FUN_1081034d8();
    }
    else {
      func_0x0001081064d0();
      if (lStack_140 == 0) {
        uVar7 = 0;
        lVar5 = 0;
      }
      else {
        do {
          func_0x0001081063c0();
          uVar7 = extraout_x8_00;
          lVar5 = lStack_140;
        } while (extraout_w11 != 0);
      }
      uStack_138 = uVar7;
      func_0x00010b8a2cec(alStack_120,plVar3 + 1,&uStack_138);
      func_0x00010810668c();
      FUN_1081034d8();
      func_0x00010b8a24a8(alStack_120);
      func_0x0001080ceeb8(uStack_138);
      FUN_10810503c(lVar5);
    }
    func_0x00010810544c(&lStack_130);
  }
  lVar5 = *(long *)(*param_3 + 0x28);
  func_0x00010b8a9414(&lStack_130,*param_4,*param_3 + 0x18,auStack_88,lVar5 + 0x50,lVar5 + 0x58,
                      *(undefined1 *)(lVar5 + 0x68),0);
  lVar5 = lStack_130;
  uVar7 = *(undefined8 *)(*param_3 + 0x20);
  lVar4 = 0xe0;
  __Znwm(0xe0);
  func_0x000108106754();
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x0001081063e0();
    } while (extraout_w10 != 0);
  }
  alStack_120[0] = lVar5;
  FUN_108105128(lVar4 + 0x18,param_2 + 0x58,param_3,param_2,uVar7,alStack_120);
  FUN_1080d5cdc(alStack_120[0]);
  FUN_1081050a8(alStack_120,lVar4 + 0x18,lVar4);
  lVar5 = alStack_120[0];
  if ((alStack_120[0] != 0) && (*(long *)(alStack_120[0] + 0x10) != 0)) {
    do {
      func_0x0001081063e0();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = lVar5;
  func_0x00010810530c();
  FUN_1080d5cdc(lStack_130);
  puVar2 = auStack_88;
  FUN_10810452c(puVar2);
  func_0x00010810642c(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1081034b0;
    puStack_150 = &stack0xfffffffffffffff0;
    FUN_108105480(auStack_168);
    return (undefined1 *)(lStack_160 + 8);
  }
  return puVar2;
}



/* Entry: 1081035c4; end: 1081037d7;  */

undefined ***
FUN_1081035c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined **ppuVar8;
  undefined **ppuStack_c8;
  undefined **appuStack_c0 [5];
  undefined **ppuStack_98;
  undefined **appuStack_90 [5];
  undefined8 uStack_68;
  
  func_0x000108106510();
  ppuStack_98 = (undefined **)FUN_1081045a4;
  appuStack_90[0] = &PTR_FUN_110a21c28;
  uVar4 = (int)param_6 == 3;
  uStack_68 = extraout_x8;
  switch(param_6 & 0xffffffff) {
  case 0:
    ppuStack_c8 = (undefined **)0x10810bbc8;
    appuStack_c0[0] = &PTR_DAT_110a24540;
    break;
  case 1:
    func_0x00010810ba28(&ppuStack_c8);
    break;
  case 2:
    func_0x00010810ba34(&ppuStack_c8);
    break;
  case 3:
    func_0x00010810ba1c(&ppuStack_c8);
    break;
  default:
    goto LAB_10810369c;
  }
  FUN_1081037d8(&ppuStack_98,&ppuStack_c8);
  (*(code *)*appuStack_c0[0])(appuStack_c0);
LAB_10810369c:
  ppuVar5 = (undefined **)0xc0;
  __Znwm();
  ppuVar8 = ppuVar5 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_FUN_110a23c30;
  ppuVar1 = ppuVar5 + 3;
  pppuVar7 = &ppuStack_98;
  FUN_1080e4fe8(param_2,param_3,param_4,ppuVar1,pppuVar7,param_8);
  if ((ppuVar5[6] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar5[6] + 8) == -1, (bool)uVar4)) {
    ppuStack_c8 = ppuVar5 + 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppuVar7 = &ppuStack_c8;
    appuStack_c0[0] = ppuVar5;
    func_0x0001003a8180(ppuVar5 + 5);
    func_0x0001081066d4();
  }
  ppuVar8 = ppuVar1;
  if (ppuVar5[5] == (undefined *)0x0) {
    ppuVar5 = (undefined **)ppuVar5[6];
    if (ppuVar5 != (undefined **)0x0) {
      do {
        func_0x0001081063e0();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&ppuStack_c8,ppuVar5 + 5);
    ppuVar5 = appuStack_c0[0];
    if (ppuStack_c8 == (undefined **)0x0) {
      ppuVar5 = (undefined **)0x0;
      ppuVar8 = (undefined **)0x0;
    }
    else if (appuStack_c0[0] != (undefined **)0x0) {
      do {
        func_0x0001081063e0();
      } while (extraout_w10 != 0);
    }
    func_0x0001081066d4();
  }
  *param_1 = (long)ppuVar8;
  param_1[1] = (long)ppuVar5;
  ppuStack_c8 = (undefined **)0x0;
  appuStack_c0[0] = (undefined **)0x0;
  FUN_108105f68(&ppuStack_c8);
  func_0x0001080e5ce8(ppuVar1);
  pppuVar6 = appuStack_90;
  (*(code *)*appuStack_90[0])();
  func_0x00010810642c(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    *pppuVar6 = *pppuVar7;
    func_0x0001080f3438(pppuVar6 + 1,pppuVar7 + 1);
    return pppuVar6;
  }
  return pppuVar6;
}



/* Entry: 1081037d8; end: 1081037ff;  */

undefined8 * FUN_1081037d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001080f3438(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108103800; end: 108103803;  */

undefined ***
FUN_108103800(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined **ppuVar8;
  undefined **ppuStack_c8;
  undefined **appuStack_c0 [5];
  undefined **ppuStack_98;
  undefined **appuStack_90 [5];
  undefined8 uStack_68;
  
  func_0x000108106510();
  ppuStack_98 = (undefined **)FUN_1081045a4;
  appuStack_90[0] = &PTR_FUN_110a21c28;
  uVar4 = (int)param_6 == 3;
  uStack_68 = extraout_x8;
  switch(param_6 & 0xffffffff) {
  case 0:
    ppuStack_c8 = (undefined **)0x10810bbc8;
    appuStack_c0[0] = &PTR_DAT_110a24540;
    break;
  case 1:
    func_0x00010810ba28(&ppuStack_c8);
    break;
  case 2:
    func_0x00010810ba34(&ppuStack_c8);
    break;
  case 3:
    func_0x00010810ba1c(&ppuStack_c8);
    break;
  default:
    goto LAB_10810369c;
  }
  FUN_1081037d8(&ppuStack_98,&ppuStack_c8);
  (*(code *)*appuStack_c0[0])(appuStack_c0);
LAB_10810369c:
  ppuVar5 = (undefined **)0xc0;
  __Znwm();
  ppuVar8 = ppuVar5 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_FUN_110a23c30;
  ppuVar1 = ppuVar5 + 3;
  pppuVar7 = &ppuStack_98;
  FUN_1080e4fe8(param_2,param_3,param_4,ppuVar1,pppuVar7,param_8);
  if ((ppuVar5[6] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar5[6] + 8) == -1, (bool)uVar4)) {
    ppuStack_c8 = ppuVar5 + 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppuVar7 = &ppuStack_c8;
    appuStack_c0[0] = ppuVar5;
    func_0x0001003a8180(ppuVar5 + 5);
    func_0x0001081066d4();
  }
  ppuVar8 = ppuVar1;
  if (ppuVar5[5] == (undefined *)0x0) {
    ppuVar5 = (undefined **)ppuVar5[6];
    if (ppuVar5 != (undefined **)0x0) {
      do {
        func_0x0001081063e0();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&ppuStack_c8,ppuVar5 + 5);
    ppuVar5 = appuStack_c0[0];
    if (ppuStack_c8 == (undefined **)0x0) {
      ppuVar5 = (undefined **)0x0;
      ppuVar8 = (undefined **)0x0;
    }
    else if (appuStack_c0[0] != (undefined **)0x0) {
      do {
        func_0x0001081063e0();
      } while (extraout_w10 != 0);
    }
    func_0x0001081066d4();
  }
  *param_1 = (long)ppuVar8;
  param_1[1] = (long)ppuVar5;
  ppuStack_c8 = (undefined **)0x0;
  appuStack_c0[0] = (undefined **)0x0;
  FUN_108105f68(&ppuStack_c8);
  func_0x0001080e5ce8(ppuVar1);
  pppuVar6 = appuStack_90;
  (*(code *)*appuStack_90[0])();
  func_0x00010810642c(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    *pppuVar6 = *pppuVar7;
    func_0x0001080f3438(pppuVar6 + 1,pppuVar7 + 1);
    return pppuVar6;
  }
  return pppuVar6;
}



/* Entry: 108103804; end: 10810385f;  */

void FUN_108103804(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 0x20;
  if ((int)param_1 != 0) {
    lVar1 = param_2 + 0x18;
  }
  func_0x0001081066a4(lVar1);
  func_0x000108106504();
  func_0x000104bdd2f0();
  func_0x0001081066dc();
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_108103804(param_1,*(long *)(param_2 + 0x28),param_3);
  }
  return;
}



/* Entry: 108103860; end: 108103977;  */

void FUN_108103860(int param_1)

{
  long lVar1;
  long *extraout_x8;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  func_0x0001081065c8();
  FUN_108103108();
  if (param_1 == 0) {
    func_0x0001081066b0(&lStack_48);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    if (lStack_48 != 0) {
      FUN_108103804(*(undefined4 *)(unaff_x20 + 0x20),lStack_48,extraout_x8);
    }
    func_0x000108106590();
  }
  else {
    (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x48))(extraout_x8);
    lVar3 = *extraout_x8;
    lVar2 = extraout_x8[1];
    func_0x0001081065b4();
    lVar1 = lStack_48;
    FUN_108103978(lVar3,lVar2,lStack_48);
    func_0x0001003a8cb8(lVar1);
    lVar2 = extraout_x8[1];
    if (lVar2 != lVar3) {
      func_0x000108106728();
      FUN_1081039a0();
      lVar2 = extraout_x8[1];
    }
    lVar3 = *extraout_x8;
    func_0x0001003a83dc(&lStack_48,&UNK_10f47b4ea);
    FUN_108103978(lVar3,lVar2,lStack_48);
    func_0x0001003a8cb8(lStack_48);
    if (extraout_x8[1] != lVar3) {
      FUN_1081039a0(extraout_x8,lVar3);
    }
    func_0x0001081065b4();
    func_0x000108106504();
    func_0x000104bdd2f0();
    func_0x0001081066dc();
  }
  return;
}



/* Entry: 108103978; end: 10810399f;  */

long * FUN_108103978(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  for (; (plVar1 = param_2, param_1 != param_2 && (plVar1 = param_1, *param_1 != param_3));
      param_1 = param_1 + 1) {
  }
  return plVar1;
}



/* Entry: 1081039a0; end: 1081039ff;  */

void FUN_1081039a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = *(long *)(param_1 + 8);
    for (; param_3 != lVar1; param_3 = param_3 + 8) {
      func_0x000108106650();
      func_0x00010090c1cc();
      param_2 = param_2 + 8;
    }
    lVar1 = *(long *)(param_1 + 8);
    while (lVar1 != param_2) {
      lVar1 = lVar1 + -8;
      func_0x0001003a8c94();
    }
    *(long *)(param_1 + 8) = param_2;
    return;
  }
  return;
}



/* Entry: 108103a00; end: 108103a07;  */

void FUN_108103a00(int param_1)

{
  long lVar1;
  long *extraout_x8;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  param_1 = param_1 + -0x10;
  func_0x0001081065c8();
  FUN_108103108();
  if (param_1 == 0) {
    func_0x0001081066b0(&lStack_48);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    if (lStack_48 != 0) {
      FUN_108103804(*(undefined4 *)(unaff_x20 + 0x20),lStack_48,extraout_x8);
    }
    func_0x000108106590();
  }
  else {
    (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x48))(extraout_x8);
    lVar3 = *extraout_x8;
    lVar2 = extraout_x8[1];
    func_0x0001081065b4();
    lVar1 = lStack_48;
    FUN_108103978(lVar3,lVar2,lStack_48);
    func_0x0001003a8cb8(lVar1);
    lVar2 = extraout_x8[1];
    if (lVar2 != lVar3) {
      func_0x000108106728();
      FUN_1081039a0();
      lVar2 = extraout_x8[1];
    }
    lVar3 = *extraout_x8;
    func_0x0001003a83dc(&lStack_48,&UNK_10f47b4ea);
    FUN_108103978(lVar3,lVar2,lStack_48);
    func_0x0001003a8cb8(lStack_48);
    if (extraout_x8[1] != lVar3) {
      FUN_1081039a0(extraout_x8,lVar3);
    }
    func_0x0001081065b4();
    func_0x000108106504();
    func_0x000104bdd2f0();
    func_0x0001081066dc();
  }
  return;
}



/* Entry: 108103a08; end: 108103b1f;  */

void FUN_108103a08(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long lVar4;
  long *plVar5;
  code *extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  func_0x000108106584();
  lVar4 = param_1;
  FUN_108103108();
  if ((int)lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    lStack_48 = *(long *)(param_1 + 0x68);
    ppuStack_50 = &PTR_FUN_110a23910;
    if (lStack_48 != 0) {
      plVar5 = (long *)(lStack_48 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
    }
    (**(code **)(*plVar5 + 0x50))();
    FUN_108104e44(&ppuStack_50);
    return;
  }
  func_0x0001081066c8(&ppuStack_50);
  if (ppuStack_50 == (undefined **)0x0) {
    FUN_108103274(&ppuStack_58,param_1);
    FUN_10810327c(&ppuStack_50,&ppuStack_58);
    func_0x0001080ed580(ppuStack_58);
    if (ppuStack_50 == (undefined **)0x0) goto LAB_108103b08;
  }
  ppuVar3 = ppuStack_50;
  if (*(char *)(ppuStack_50 + 6) == '\x01') {
    do {
      func_0x0001081064a8();
    } while (extraout_w10 != 0);
    ppuStack_58 = ppuVar3;
    func_0x000108106504(*(undefined8 *)(*unaff_x19 + 0x88));
    (*extraout_x8)();
    func_0x0001080cfa50(ppuStack_58);
  }
  func_0x000108106680(*(undefined8 *)(*ppuStack_50 + 0x50));
LAB_108103b08:
  func_0x0001080ed580(ppuStack_50);
  return;
}



/* Entry: 108103b20; end: 108103b7f;  */

undefined8 * FUN_108103b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23910;
  func_0x000107475310(param_1 + 1);
  return param_1;
}



/* Entry: 108103b80; end: 108103c4f;  */

void FUN_108103b80(long *param_1,undefined8 param_2,long *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_4 != 0) {
    func_0x0001081065c8();
    lVar4 = *param_3;
    if ((lVar4 != 0) && (func_0x00010b94be7c(), (int)lVar4 == 0)) {
      plVar5 = (long *)0x40;
      __Znwm();
      func_0x00010b94d87c();
      do {
        func_0x0001081064a8();
      } while (extraout_w10_00 != 0);
      *param_1 = (long)plVar5;
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
        if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080c4674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 8))();
          return;
        }
      }
      return;
    }
  }
  plVar5 = (long *)0x28;
  __Znwm();
  plVar5[1] = 1;
  *plVar5 = (long)&PTR_DAT_110a23c90;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = 0;
  do {
    func_0x0001081064a8();
  } while (extraout_w10 != 0);
  *param_1 = (long)plVar5;
  do {
    lVar4 = *extraout_x8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar3) {
      *extraout_x8 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108103c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))();
    return;
  }
  return;
}



/* Entry: 108103c50; end: 108103c57;  */

void FUN_108103c50(long *param_1,long param_2,long *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_4 != 0) {
    func_0x0001081065c8(param_2 + -0x10);
    lVar4 = *param_3;
    if ((lVar4 != 0) && (func_0x00010b94be7c(), (int)lVar4 == 0)) {
      plVar5 = (long *)0x40;
      __Znwm();
      func_0x00010b94d87c();
      do {
        func_0x0001081064a8();
      } while (extraout_w10_00 != 0);
      *param_1 = (long)plVar5;
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
        if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080c4674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 8))();
          return;
        }
      }
      return;
    }
  }
  plVar5 = (long *)0x28;
  __Znwm();
  plVar5[1] = 1;
  *plVar5 = (long)&PTR_DAT_110a23c90;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = 0;
  do {
    func_0x0001081064a8();
  } while (extraout_w10 != 0);
  *param_1 = (long)plVar5;
  do {
    lVar4 = *extraout_x8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar3) {
      *extraout_x8 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108103c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))();
    return;
  }
  return;
}



/* Entry: 108103c58; end: 108103c8f;  */

void FUN_108103c58(undefined8 *param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  plVar1 = (long *)0x1;
  func_0x00010813eda4();
  uVar2 = 0;
  if (*plVar1 != 0) {
    do {
      func_0x0001081063c0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 108103c90; end: 108103c97;  */

void FUN_108103c90(undefined8 *param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  plVar1 = (long *)0x1;
  func_0x00010813eda4();
  uVar2 = 0;
  if (*plVar1 != 0) {
    do {
      func_0x0001081063c0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 108103c98; end: 108103de7;  */

undefined8 FUN_108103c98(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001080fd160(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108103de8; end: 108103dff;  */

void FUN_108103de8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  
  lVar3 = *param_2;
  lVar4 = lVar3 + param_2[1] * 0x30;
  func_0x000108106644();
  uVar1 = (lVar4 - lVar3) / 0x30;
  if (uVar1 <= (ulong)param_1[2]) {
    func_0x000108106650();
    func_0x000108103f90();
    unaff_x19[1] = uVar1;
    return;
  }
  func_0x000108106728();
  FUN_108103f10();
  plVar5 = (long *)*unaff_x19;
  plVar2 = param_1;
  if ((plVar5 != (long *)0x0) && (plVar2 = unaff_x19, FUN_108103eb0(), unaff_x19 + 3 != plVar5)) {
    __ZdlPv();
    plVar2 = plVar5;
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = uVar1;
  *unaff_x19 = (long)param_1;
  func_0x000108106650();
  func_0x000108106774();
  func_0x000108104018();
  lVar3 = 0;
  if (unaff_x21 != 0) {
    lVar3 = ((long)plVar2 - unaff_x20) / unaff_x21;
  }
  unaff_x19[1] = lVar3 + unaff_x19[1];
  return;
}



/* Entry: 108103e00; end: 108103eaf;  */

void FUN_108103e00(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  
  func_0x000108106644();
  uVar1 = (param_3 - param_2) / 0x30;
  if (uVar1 <= (ulong)param_1[2]) {
    func_0x000108106650();
    func_0x000108103f90();
    unaff_x19[1] = uVar1;
    return;
  }
  func_0x000108106728();
  FUN_108103f10();
  plVar4 = (long *)*unaff_x19;
  plVar3 = param_1;
  if ((plVar4 != (long *)0x0) && (plVar3 = unaff_x19, FUN_108103eb0(), unaff_x19 + 3 != plVar4)) {
    __ZdlPv();
    plVar3 = plVar4;
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = uVar1;
  *unaff_x19 = (long)param_1;
  func_0x000108106650();
  func_0x000108106774();
  func_0x000108104018();
  lVar2 = 0;
  if (unaff_x21 != 0) {
    lVar2 = ((long)plVar3 - unaff_x20) / unaff_x21;
  }
  unaff_x19[1] = lVar2 + unaff_x19[1];
  return;
}



/* Entry: 108103eb0; end: 108103f0f;  */

void FUN_108103eb0(undefined8 *param_1)

{
  func_0x000108103ed4(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 108103f10; end: 108103f57;  */

void FUN_108103f10(long param_1,ulong param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x2aaaaaaaaaaaaaa < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x108103f34;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (0x2aaaaaaaaaaaaaa < param_2) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x108103f58;
    func_0x000108106774();
    func_0x000108104018();
    lVar1 = 0;
    if (unaff_x21 != 0) {
      lVar1 = (param_1 - unaff_x20) / unaff_x21;
    }
    *(long *)(unaff_x19 + 8) = lVar1 + *(long *)(unaff_x19 + 8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
  return;
}



/* Entry: 108103f58; end: 10810410f;  */

void FUN_108103f58(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108106774();
  func_0x000108104018();
  lVar1 = 0;
  if (unaff_x21 != 0) {
    lVar1 = (param_1 - unaff_x20) / unaff_x21;
  }
  *(long *)(unaff_x19 + 8) = lVar1 + *(long *)(unaff_x19 + 8);
  return;
}



/* Entry: 108104110; end: 10810415f;  */

void FUN_108104110(void)

{
  func_0x0001081064d8();
  return;
}



/* Entry: 108104160; end: 10810416f;  */

void FUN_108104160(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x30;
  if ((ulong)((param_1[2] - *param_1) / 0x30) < uVar1) {
    func_0x000108104284(param_1);
    plVar2 = param_1;
    FUN_108104304(param_1,uVar1);
    func_0x0001081042bc(param_1,plVar2);
    func_0x000108106728();
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x30)) {
      FUN_10810439c(param_2,param_3);
      func_0x00010810665c();
      for (lVar3 = param_1[1]; lVar3 != unaff_x19; lVar3 = lVar3 + -0x30) {
        (*(code *)**(undefined8 **)(lVar3 + -0x28))((undefined8 *)(lVar3 + -0x28));
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10810439c(param_2,param_2 + lVar3);
  }
  plVar2 = param_1 + 2;
  func_0x000108104354();
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 108104170; end: 10810425b;  */

void FUN_108104170(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x30) < param_4) {
    func_0x000108104284(param_1);
    plVar1 = param_1;
    FUN_108104304(param_1,param_4);
    func_0x0001081042bc(param_1,plVar1);
    func_0x000108106728();
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x30)) {
      FUN_10810439c(param_2,param_3);
      func_0x00010810665c();
      for (lVar2 = param_1[1]; lVar2 != unaff_x19; lVar2 = lVar2 + -0x30) {
        (*(code *)**(undefined8 **)(lVar2 + -0x28))((undefined8 *)(lVar2 + -0x28));
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10810439c(param_2,param_2 + lVar2);
  }
  plVar1 = param_1 + 2;
  func_0x000108104354();
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10810425c; end: 108104303;  */

void FUN_10810425c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000108104354();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108104304; end: 108104367;  */

long * FUN_108104304(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x555555555555555 < param_2) {
    FUN_10810448c();
    FUN_108104368();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 108104368; end: 10810439b;  */

void FUN_108104368(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081064f4();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x28) {
    func_0x0001081063fc();
  }
  return;
}



/* Entry: 10810439c; end: 1081043c7;  */

void FUN_10810439c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1081043c8(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1081043c8; end: 108104423;  */

undefined1  [16] FUN_1081043c8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_108104424(lVar1,param_2);
    lVar1 = lVar1 + 0x30;
    param_4 = param_4 + 0x30;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 108104424; end: 10810443f;  */

void FUN_108104424(void)

{
  func_0x0001081064d8();
  return;
}



/* Entry: 108104440; end: 108104483;  */

void FUN_108104440(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010810665c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108104484; end: 10810448b;  */

void FUN_108104484(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010810665c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10810448c; end: 108104497;  */

void FUN_10810448c(void)

{
  _abort();
  FUN_1081044bc();
  return;
}



/* Entry: 108104498; end: 1081044bb;  */

void FUN_108104498(void)

{
  FUN_1081044bc();
  return;
}



/* Entry: 1081044bc; end: 1081044df;  */

void FUN_1081044bc(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bfe188();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1081044e0; end: 108104503;  */

void FUN_1081044e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108104504; end: 10810452b;  */

long FUN_108104504(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 10810452c; end: 1081045a3;  */

void FUN_10810452c(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x00010b8a24a8(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0xa0;
    }
    __ZdlPv();
    param_1[5] = 0;
    func_0x000108106748();
    *param_1 = extraout_x8;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1081045a4; end: 1081045c3;  */

void FUN_1081045a4(void)

{
  func_0x000105277f8c();
  FUN_108104e44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081045c4; end: 1081045d3;  */

void FUN_1081045c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081045d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1081045d4; end: 108104937;  */

void FUN_1081045d4(void)

{
  long extraout_x8;
  int extraout_w11;
  long lStack_40;
  
  func_0x000108106360();
  if (lStack_40 != 0) {
    do {
      func_0x0001081063c0();
    } while (extraout_w11 != 0);
  }
  func_0x000108106544();
  func_0x000108106378(*(undefined8 *)(extraout_x8 + 0x18));
  func_0x0001081063a8();
  FUN_108106488();
  return;
}



/* Entry: 108104938; end: 10810499f;  */

long * FUN_108104938(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *extraout_x8;
  int extraout_w11;
  undefined8 uStack_30;
  
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x0001081064d0(param_1,*param_2,*(undefined8 *)(param_1 + 0x18));
  if (uStack_30 == 0) {
    uStack_30 = 0;
  }
  else {
    do {
      func_0x0001081063c0();
    } while (extraout_w11 != 0);
  }
  func_0x000108106504(*(undefined8 *)(*plVar1 + 0x68));
  (*extraout_x8)();
  func_0x0001081063a8();
  FUN_10810503c(uStack_30);
  return plVar1;
}



/* Entry: 1081049a0; end: 1081049c3;  */

void FUN_1081049a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081049ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  return;
}



/* Entry: 1081049c4; end: 108104ae7;  */

void FUN_1081049c4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puStack_58;
  
  func_0x0001081065c8();
  lVar5 = *param_2;
  if ((lVar5 == 0) || (___dynamic_cast(lVar5,&PTR_DAT_110a1edf0,&PTR_DAT_110d78e28,0), lVar5 == 0))
  {
    (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x88))();
    lVar5 = 0;
  }
  else {
    do {
      func_0x000108106634();
    } while (extraout_w9 != 0);
    plVar1 = *(long **)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar8 = *(long *)(unaff_x20 + 8);
    puVar6 = (undefined8 *)0x80;
    __Znwm();
    puVar7 = puVar6 + 1;
    puVar6[2] = 0x32aaaba7;
    *puVar7 = 1;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    *(undefined8 *)((long)puVar6 + 0x59) = 0;
    *(undefined8 *)((long)puVar6 + 0x51) = 0;
    *puVar6 = &PTR_FUN_110a239c8;
    if (lVar8 != 0) {
      do {
        func_0x0001081064a8();
      } while (extraout_w10 != 0);
    }
    puVar6[0xd] = lVar8;
    do {
      func_0x000108106634();
    } while (extraout_w9_00 != 0);
    puVar6[0xe] = lVar5;
    puVar6[0xf] = uVar2;
    do {
      func_0x000108106550();
    } while (extraout_w9_01 != 0);
    puStack_58 = puVar6;
    (**(code **)(*plVar1 + 0x88))(plVar1,&puStack_58);
    func_0x0001080cfa50(puStack_58);
    do {
      func_0x000108106708();
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = extraout_x8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bool)in_ZR) {
      func_0x000108106624();
    }
  }
  func_0x000108104e20(lVar5);
  return;
}



/* Entry: 108104ae8; end: 108104aeb;  */

undefined8 * FUN_108104ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a239c8;
  func_0x000108104e20(param_1[0xe]);
  func_0x000107475310(param_1 + 0xd);
  *param_1 = &PTR_DAT_110d78df0;
  func_0x0001080c5c5c(param_1 + 0xb);
  func_0x00010b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 108104aec; end: 108104aff;  */

void FUN_108104aec(void)

{
  func_0x000108104c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108104b00; end: 108104bbf;  */

undefined1  [16]
FUN_108104b00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lStack_50;
  long lStack_48;
  
  func_0x000108104c5c(&lStack_48);
  if (lStack_48 == 0) {
    lStack_50 = 0;
  }
  else {
    func_0x0001080ec300(&lStack_50);
  }
  func_0x0001080eca50(lStack_48);
  if (lStack_50 == 0) {
    lVar1 = 0;
    param_1 = 0;
    param_2 = 0;
  }
  else {
    (**(code **)(**(long **)(param_3 + 0x70) + 0x28))
              (param_1,param_2,*(long **)(param_3 + 0x70),&lStack_50,param_5,param_6);
    lVar1 = lStack_50;
  }
  FUN_1080c5c80(lVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108104bc0; end: 108104cd7;  */

void FUN_108104bc0(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_2 + 0x70) + 0x30))(&uStack_28);
  uStack_30 = 0;
  FUN_108104cd8(param_1,param_2 + 0x68,&uStack_28,*(undefined8 *)(param_2 + 0x78),&uStack_30);
  func_0x000104bd5718(uStack_30);
  FUN_1080c5c80(uStack_28);
  return;
}



/* Entry: 108104cd8; end: 108104df3;  */

void FUN_108104cd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int extraout_w10;
  long *plVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = (undefined8 *)0x210;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a23a28;
  puVar1 = puVar4 + 3;
  FUN_1080ebf70(puVar1,param_2);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_60 = puVar1;
    puStack_58 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_60);
    func_0x0001003a824c(&puStack_60);
  }
  (**(code **)(puVar4[3] + 0x20))(puVar1);
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  puVar6 = puVar5;
  FUN_1080e5ec0();
  puStack_60 = puVar6;
  func_0x0001080ec364(puVar1,&puStack_60);
  func_0x0001080ecc5c(puVar5);
  if (puVar4[5] != 0) {
    do {
      func_0x0001081063e0();
    } while (extraout_w10 != 0);
  }
  puStack_60 = puVar1;
  func_0x0001081066e4(&puStack_60);
  func_0x0001078bee50(puStack_60);
  func_0x0001080eca50(puVar1);
  return;
}



/* Entry: 108104df4; end: 108104df7;  */

void FUN_108104df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108104df8; end: 108104e0b;  */

void FUN_108104df8(void)

{
  func_0x000108104e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108104e0c; end: 108104e43;  */

void FUN_108104e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081064cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108104e44; end: 108104e93;  */

undefined8 * FUN_108104e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23910;
  func_0x000107475310(param_1 + 1);
  return param_1;
}



/* Entry: 108104e94; end: 108104e97;  */

undefined8 * FUN_108104e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23a78;
  func_0x000108104e70(param_1 + 2);
  return param_1;
}



/* Entry: 108104e98; end: 108104eab;  */

void FUN_108104e98(void)

{
  FUN_108105010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108104eac; end: 108104f63;  */

void FUN_108104eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *extraout_x8;
  long *plVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  func_0x000108106788();
  func_0x000108106674();
  if ((in_stack_00000018 == 0) || (plVar1 = *(long **)(param_1 + 0x10), plVar1 == (long *)0x0)) {
    *extraout_x8 = 1;
  }
  else {
    func_0x00010b951f64(param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x000108106668();
    in_stack_00000008 = 0;
    (**(code **)(*plVar1 + 0x20))
              (extraout_x8,plVar1,param_2,param_3,&stack0x00000010,param_5,param_6,&stack0x00000008)
    ;
    FUN_1080da468(in_stack_00000008);
    FUN_1080c5c80(in_stack_00000010);
    func_0x00010811f4a4(in_stack_00000018);
  }
  func_0x0001080eca50(in_stack_00000018);
  return;
}



/* Entry: 108104f64; end: 10810500f;  */

void FUN_108104f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000108106674();
  if ((lStack_48 != 0) && (plVar1 = *(long **)(param_1 + 0x10), plVar1 != (long *)0x0)) {
    func_0x00010b951f64(param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x000108106668();
    uStack_58 = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,&uStack_50,param_5,&uStack_58);
    FUN_1080da468(uStack_58);
    FUN_1080c5c80(uStack_50);
    func_0x00010811f4a4(lStack_48);
  }
  func_0x0001080eca50(lStack_48);
  return;
}



/* Entry: 108105010; end: 10810503b;  */

undefined8 * FUN_108105010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23a78;
  func_0x000108104e70(param_1 + 2);
  return param_1;
}



/* Entry: 10810503c; end: 10810505f;  */

void FUN_10810503c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108105060; end: 108105083;  */

undefined8 * FUN_108105060(undefined8 *param_1)

{
  FUN_1080d2890(*param_1);
  return param_1;
}



/* Entry: 108105084; end: 1081050a7;  */

void FUN_108105084(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1081050a8; end: 108105107;  */

void FUN_1081050a8(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    lStack_20 = param_2;
    lStack_18 = param_3;
    if (param_3 != 0) {
      do {
        func_0x0001081063e0();
      } while (extraout_w10 != 0);
    }
    func_0x0001003a8180(param_2 + 8,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 108105108; end: 10810510b;  */

void FUN_108105108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10810510c; end: 10810511f;  */

void FUN_10810510c(void)

{
  FUN_108105300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108105120; end: 108105127;  */

void FUN_108105120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081064cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108105128; end: 108105227;  */

undefined8 *
FUN_108105128(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  int extraout_w11;
  
  lVar5 = *(long *)(*param_3 + 0x18);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = *param_6;
  *param_6 = 0;
  *param_1 = &PTR_DAT_110d78f40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = lVar5;
  param_1[4] = param_4;
  param_1[5] = uVar6;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  FUN_1080d5cdc(0);
  func_0x0001003a8cb8(0);
  *param_1 = &PTR_FUN_110a23b20;
  uVar6 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001081063c0();
      uVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0x16] = uVar6;
  lVar5 = *param_3;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar2 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x17] = lVar5;
  param_1[0x18] = param_5;
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(*param_3 + 0xa8);
  return param_1;
}



/* Entry: 108105228; end: 10810522b;  */

undefined8 * FUN_108105228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23b20;
  FUN_108105060(param_1 + 0x17);
  func_0x000107475310(param_1 + 0x16);
  *param_1 = &PTR_DAT_110d78f40;
  func_0x00010b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  func_0x00010b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}


