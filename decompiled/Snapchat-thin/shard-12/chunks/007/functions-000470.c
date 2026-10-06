/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1095ff4c0; end: 1095ff55f;  */

void FUN_1095ff4c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_1095ff560(param_4,lVar1);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + 0xb0;
    } while (lVar1 != param_3);
    do {
      FUN_1095ff688(param_2);
      param_2 = param_2 + 0xb0;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 1095ff560; end: 1095ff687;  */

undefined8 * FUN_1095ff560(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  uVar9 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  lVar4 = param_2[0xb];
  uVar10 = param_2[0xb];
  uVar9 = param_2[10];
  param_1[0xe] = 0;
  param_1[0xb] = uVar10;
  param_1[10] = uVar9;
  param_1[0xc] = param_1 + 5;
  param_1[0xd] = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x24) < 3) {
    puVar5 = (undefined8 *)param_2[0xd];
    puVar6 = (undefined8 *)param_1[0xd];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    func_0x000109a84868(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_1095ff3ac(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



/* Entry: 1095ff688; end: 1095ff753;  */

void FUN_1095ff688(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((*(char *)(param_1 + 0x15) == '\x01') && (*(char *)((long)param_1 + 0xa7) < '\0')) {
    __ZdlPv(param_1[0x12]);
  }
  if (param_1[0xb] != 0) {
    piVar1 = (int *)(param_1[0xb] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 4);
    }
  }
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  if (0 < *(int *)((long)param_1 + 0x24)) {
    lVar5 = 0;
    lVar7 = param_1[0xc];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x24));
  }
  puVar6 = (undefined8 *)param_1[0xd];
  if (puVar6 != param_1 + 0xe && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1095ff754; end: 1095ff79f;  */

long * FUN_1095ff754(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xb0;
    FUN_1095ff688();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095ff7a0; end: 1095ff8f7;  */

/* WARNING: Removing unreachable block (ram,0x0001095ff92c) */
/* WARNING: Removing unreachable block (ram,0x0001095ff934) */

long * FUN_1095ff7a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x1745d1745d1745d < uVar3) {
    FUN_1095ff464();
    FUN_1095ff754(&plStack_68);
    __Unwind_Resume(param_1);
    FUN_1095ff24c();
    return param_1;
  }
  lVar2 = param_1[2] - *param_1 >> 4;
  uVar4 = lVar2 * 0x5d1745d1745d1746;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = uVar3;
  }
  if (0xba2e8ba2e8ba2d < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
    uVar4 = 0x1745d1745d1745d;
  }
  plStack_48 = param_1;
  if (uVar4 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    FUN_1095ff478();
  }
  lVar5 = (long)plVar1 + lVar5;
  plStack_50 = plVar1 + uVar4 * 0x16;
  plStack_68 = plVar1;
  plStack_60 = (long *)lVar5;
  plStack_58 = (long *)lVar5;
  FUN_1095ff8f8(lVar5,param_2,param_3,param_4);
  plStack_58 = (long *)(lVar5 + 0xb0);
  lVar5 = lVar5 + (*param_1 - param_1[1]);
  FUN_1095ff4c0(param_1,*param_1,param_1[1],lVar5);
  plVar1 = plStack_58;
  plStack_68 = (long *)*param_1;
  *param_1 = lVar5;
  lVar5 = param_1[2];
  param_1[2] = (long)plStack_50;
  param_1[1] = (long)plStack_58;
  plStack_60 = plStack_68;
  plStack_58 = plStack_68;
  plStack_50 = (long *)lVar5;
  FUN_1095ff754(&plStack_68);
  return plVar1;
}



/* Entry: 1095ff8f8; end: 1095ff977;  */

/* WARNING: Removing unreachable block (ram,0x0001095ff92c) */
/* WARNING: Removing unreachable block (ram,0x0001095ff934) */

undefined8 FUN_1095ff8f8(undefined8 param_1)

{
  FUN_1095ff24c();
  return param_1;
}



/* Entry: 1095ff978; end: 1095ffbef;  */

undefined1  [16]
FUN_1095ff978(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar4 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar4) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1095ffbb0;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x88;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar4;
  plVar3 = (long *)*param_4;
  lVar10 = plVar3[1];
  lVar6 = *plVar3;
  plVar7[4] = plVar3[2];
  plVar7[3] = lVar10;
  plVar7[2] = lVar6;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  *(undefined4 *)(plVar7 + 5) = 0x42ff0000;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  *(undefined8 *)((long)plVar7 + 0x54) = 0;
  *(undefined8 *)((long)plVar7 + 0x4c) = 0;
  *(undefined8 *)((long)plVar7 + 0x44) = 0;
  *(undefined8 *)((long)plVar7 + 0x3c) = 0;
  *(undefined8 *)((long)plVar7 + 0x34) = 0;
  *(undefined8 *)((long)plVar7 + 0x2c) = 0;
  plVar7[0xf] = 0;
  plVar7[0xd] = (long)(plVar7 + 6);
  plVar7[0xe] = (long)(plVar7 + 0xf);
  plVar7[0x10] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1095b3f90(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_1095ffba0;
    plVar4 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar4) {
      uVar9 = 0;
      if (plVar8 != (long *)0x0) {
        uVar9 = (ulong)plVar4 / (ulong)plVar8;
      }
      plVar4 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_1095ffba0:
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_1095ffbb0:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1095ffbf0; end: 1095ffc23;  */

undefined8 * FUN_1095ffbf0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110aff7d8;
  FUN_1095d6f88();
  *param_1 = &PTR_FUN_110afeda0;
  FUN_1095d6f88();
  __ZNSt3__15mutexD1Ev(param_1 + 0x15);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xc;
  FUN_1095d7d80(&puStack_28);
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  FUN_1095d7e10(param_1 + 7);
  if (param_1[4] != 0) {
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095ffc24; end: 1095ffc27;  */

undefined8 * FUN_1095ffc24(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110aff7d8;
  FUN_1095d6f88();
  *param_1 = &PTR_FUN_110afeda0;
  FUN_1095d6f88();
  __ZNSt3__15mutexD1Ev(param_1 + 0x15);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xc;
  FUN_1095d7d80(&puStack_28);
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  FUN_1095d7e10(param_1 + 7);
  if (param_1[4] != 0) {
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095ffc28; end: 1095ffc3b;  */

void FUN_1095ffc28(void)

{
  FUN_1095ffbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095ffc3c; end: 1095ffdbf;  */

undefined8 FUN_1095ffc3c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [3];
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)*param_1;
  FUN_1095fa86c(uVar5,param_2,&uStack_38,&uStack_3c,&uStack_40,&iStack_44,&uStack_48);
  if ((int)uVar5 != 0) {
    FUN_10936ff7c(&uStack_b0,uStack_40,uStack_3c,uStack_48,uStack_38,(long)iStack_44);
    if (param_3[7] != 0) {
      piVar1 = (int *)(param_3[7] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_3);
      }
    }
    param_3[7] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    if (0 < *(int *)((long)param_3 + 4)) {
      lVar6 = 0;
      lVar8 = param_3[8];
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_3 + 4));
    }
    param_3[1] = uStack_a8;
    *param_3 = CONCAT44(iStack_ac,uStack_b0);
    param_3[3] = uStack_98;
    param_3[2] = uStack_a0;
    param_3[5] = uStack_88;
    param_3[4] = uStack_90;
    param_3[7] = uStack_78;
    param_3[6] = uStack_80;
    puVar9 = (undefined8 *)param_3[9];
    puVar7 = param_3 + 10;
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      param_3[8] = param_3 + 1;
      param_3[9] = puVar7;
      puVar9 = puVar7;
    }
    if (iStack_ac < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_b0 | 4);
      *puVar9 = *puStack_68;
      puVar9[1] = puStack_68[1];
      uStack_b0 = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_68 != auStack_60) {
        _free(puStack_68[-1]);
      }
    }
    else {
      param_3[8] = uStack_70;
      param_3[9] = puStack_68;
    }
  }
  return uVar5;
}



/* Entry: 1095ffdc0; end: 1095ffe37;  */

undefined8 *
FUN_1095ffdc0(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined4 uStack_118;
  uint uStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  int *piStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  if (param_2 < 3) {
    return (undefined8 *)(ulong)(0x20001U >> (ulong)((param_2 & 3) << 3) & 3);
  }
  uVar4 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  uVar13 = uVar4;
  puVar8 = PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  uVar7 = (uint)puVar8;
  ___cxa_free_exception(uVar4);
  __Unwind_Resume(uVar13);
  if (uVar7 < 5) {
    return (undefined8 *)(ulong)*(uint *)(&UNK_10dfd85a0 + (ulong)uVar7 * 4);
  }
  puVar5 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar6 = puVar5;
  puVar8 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw(puVar5,PTR___ZTISt13runtime_error_110346a40);
  uVar9 = SUB84(puVar8,0);
  ___cxa_free_exception(puVar5);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 3) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x1c) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x24) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x2c) = 0x3f800000;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  *(undefined4 *)(extraout_x8 + 8) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x44) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x4c) = 0;
  uVar13 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)extraout_x8 + 0x54) = uVar13;
  *(undefined8 *)((long)extraout_x8 + 0x5c) = 0;
  *(undefined8 *)((long)extraout_x8 + 100) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x6c) = 0x3f800000;
  extraout_x8[0xe] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
  extraout_x8[0xf] = 0;
  *(undefined4 *)(extraout_x8 + 0x10) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x94) = 0x3f800000;
  uStack_118 = 0x42ff0000;
  piStack_d8 = &iStack_110;
  iStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  iStack_110 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  puVar5 = puVar6;
  puStack_d0 = &uStack_c8;
  FUN_1095ffc3c();
  iVar3 = 0;
  if (CONCAT44(uStack_104,uStack_108) != 0) {
    iVar3 = (int)puVar5;
  }
  if (iVar3 == 1) {
    uVar10 = (ulong)uStack_114;
    if ((int)uStack_114 < 3) {
      lVar11 = (long)iStack_10c * (long)iStack_110;
    }
    else {
      lVar11 = 1;
      piVar12 = piStack_d8;
      do {
        lVar11 = lVar11 * *piVar12;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar10 != 0);
    }
    if (lVar11 != 0) {
      uVar4 = NEON_rev64(CONCAT44(iStack_10c,iStack_110),4);
      *extraout_x8 = uVar4;
      dStack_128 = 0.0;
      dStack_120 = 0.0;
      uVar4 = *(undefined8 *)*puVar6;
      FUN_1095fafb4(uVar4,uVar9,&dStack_120);
      if ((int)uVar4 != 0) {
        uVar4 = *(undefined8 *)*puVar6;
        FUN_1095fafb4(uVar4,param_4,&dStack_128);
        if ((int)uVar4 != 0) {
          *(float *)(extraout_x8 + 2) = (float)dStack_120;
          *(float *)((long)extraout_x8 + 0x14) = (float)dStack_128;
        }
      }
      FUN_1095fafb4(*(undefined8 *)*puVar6,param_5,extraout_x8 + 1);
      dStack_130 = 0.0;
      puVar5 = *(undefined8 **)*puVar6;
      FUN_1095fafb4(puVar5,0x3fc,&dStack_130);
      *(undefined8 *)((long)extraout_x8 + 0x1c) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x24) = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      *(undefined8 *)((long)extraout_x8 + 0x44) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x4c) = 0;
      *(undefined4 *)(extraout_x8 + 3) = 0x3f800000;
      *(undefined4 *)((long)extraout_x8 + 0x2c) = 0x3f800000;
      *(undefined4 *)(extraout_x8 + 8) = 0x3f800000;
      *(undefined8 *)((long)extraout_x8 + 0x5c) = 0;
      *(undefined8 *)((long)extraout_x8 + 100) = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0xf] = 0;
      *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x54) = uVar13;
      *(undefined4 *)((long)extraout_x8 + 0x6c) = 0x3f800000;
      *(undefined4 *)(extraout_x8 + 0x10) = 0x3f800000;
      *(undefined4 *)((long)extraout_x8 + 0x94) = 0x3f800000;
      *(float *)((long)extraout_x8 + 100) = (float)dStack_130;
    }
  }
  if (lStack_e0 != 0) {
    piVar12 = (int *)(lStack_e0 + 0x14);
    do {
      iVar3 = *piVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar2) {
        *piVar12 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      puVar5 = (undefined8 *)&uStack_118;
      func_0x000109a848d4(puVar5);
    }
  }
  lStack_e0 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if (0 < (int)uStack_114) {
    lVar11 = 0;
    do {
      piStack_d8[lVar11] = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_114);
  }
  if (puStack_d0 != &uStack_c8 && puStack_d0 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puStack_d0[-1];
    _free(puVar5);
  }
  return puVar5;
}



/* Entry: 1095ffe38; end: 1095ffea7;  */

undefined8 *
FUN_1095ffe38(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  int *piStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if (param_2 < 5) {
    return (undefined8 *)(ulong)*(uint *)(&UNK_10dfd85a0 + (ulong)param_2 * 4);
  }
  puVar4 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar5 = puVar4;
  puVar7 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw(puVar4,PTR___ZTISt13runtime_error_110346a40);
  uVar6 = SUB84(puVar7,0);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 3) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x1c) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x24) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x2c) = 0x3f800000;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  *(undefined4 *)(extraout_x8 + 8) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x44) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x4c) = 0;
  uVar12 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)extraout_x8 + 0x54) = uVar12;
  *(undefined8 *)((long)extraout_x8 + 0x5c) = 0;
  *(undefined8 *)((long)extraout_x8 + 100) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x6c) = 0x3f800000;
  extraout_x8[0xe] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
  extraout_x8[0xf] = 0;
  *(undefined4 *)(extraout_x8 + 0x10) = 0x3f800000;
  *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x94) = 0x3f800000;
  uStack_f8 = 0x42ff0000;
  piStack_b8 = &iStack_f0;
  iStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  iStack_f0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  lStack_c0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar4 = puVar5;
  puStack_b0 = &uStack_a8;
  FUN_1095ffc3c();
  iVar3 = 0;
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    iVar3 = (int)puVar4;
  }
  if (iVar3 == 1) {
    uVar8 = (ulong)uStack_f4;
    if ((int)uStack_f4 < 3) {
      lVar9 = (long)iStack_ec * (long)iStack_f0;
    }
    else {
      lVar9 = 1;
      piVar10 = piStack_b8;
      do {
        lVar9 = lVar9 * *piVar10;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar8 != 0);
    }
    if (lVar9 != 0) {
      uVar11 = NEON_rev64(CONCAT44(iStack_ec,iStack_f0),4);
      *extraout_x8 = uVar11;
      dStack_108 = 0.0;
      dStack_100 = 0.0;
      uVar11 = *(undefined8 *)*puVar5;
      FUN_1095fafb4(uVar11,uVar6,&dStack_100);
      if ((int)uVar11 != 0) {
        uVar11 = *(undefined8 *)*puVar5;
        FUN_1095fafb4(uVar11,param_4,&dStack_108);
        if ((int)uVar11 != 0) {
          *(float *)(extraout_x8 + 2) = (float)dStack_100;
          *(float *)((long)extraout_x8 + 0x14) = (float)dStack_108;
        }
      }
      FUN_1095fafb4(*(undefined8 *)*puVar5,param_5,extraout_x8 + 1);
      dStack_110 = 0.0;
      puVar4 = *(undefined8 **)*puVar5;
      FUN_1095fafb4(puVar4,0x3fc,&dStack_110);
      *(undefined8 *)((long)extraout_x8 + 0x1c) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x24) = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      *(undefined8 *)((long)extraout_x8 + 0x44) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x4c) = 0;
      *(undefined4 *)(extraout_x8 + 3) = 0x3f800000;
      *(undefined4 *)((long)extraout_x8 + 0x2c) = 0x3f800000;
      *(undefined4 *)(extraout_x8 + 8) = 0x3f800000;
      *(undefined8 *)((long)extraout_x8 + 0x5c) = 0;
      *(undefined8 *)((long)extraout_x8 + 100) = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0xf] = 0;
      *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
      *(undefined8 *)((long)extraout_x8 + 0x54) = uVar12;
      *(undefined4 *)((long)extraout_x8 + 0x6c) = 0x3f800000;
      *(undefined4 *)(extraout_x8 + 0x10) = 0x3f800000;
      *(undefined4 *)((long)extraout_x8 + 0x94) = 0x3f800000;
      *(float *)((long)extraout_x8 + 100) = (float)dStack_110;
    }
  }
  if (lStack_c0 != 0) {
    piVar10 = (int *)(lStack_c0 + 0x14);
    do {
      iVar3 = *piVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      puVar4 = (undefined8 *)&uStack_f8;
      func_0x000109a848d4(puVar4);
    }
  }
  lStack_c0 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  if (0 < (int)uStack_f4) {
    lVar9 = 0;
    do {
      piStack_b8[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_f4);
  }
  if (puStack_b0 != &uStack_a8 && puStack_b0 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puStack_b0[-1];
    _free(puVar4);
  }
  return puVar4;
}



/* Entry: 1095ffea8; end: 109600147;  */

void FUN_1095ffea8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  int *piStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_1 + 0x54) = uVar9;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3f800000;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x3f800000;
  uStack_d8 = 0x42ff0000;
  piStack_98 = &iStack_d0;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  iStack_d0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_a0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puVar4 = param_2;
  puStack_90 = &uStack_88;
  FUN_1095ffc3c(param_2,param_3,&uStack_d8);
  iVar3 = 0;
  if (CONCAT44(uStack_c4,uStack_c8) != 0) {
    iVar3 = (int)puVar4;
  }
  if (iVar3 == 1) {
    uVar5 = (ulong)uStack_d4;
    if ((int)uStack_d4 < 3) {
      lVar6 = (long)iStack_cc * (long)iStack_d0;
    }
    else {
      lVar6 = 1;
      piVar7 = piStack_98;
      do {
        lVar6 = lVar6 * *piVar7;
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar5 != 0);
    }
    if (lVar6 != 0) {
      uVar8 = NEON_rev64(CONCAT44(iStack_cc,iStack_d0),4);
      *param_1 = uVar8;
      dStack_e8 = 0.0;
      dStack_e0 = 0.0;
      uVar8 = *(undefined8 *)*param_2;
      FUN_1095fafb4(uVar8,param_4,&dStack_e0);
      if ((int)uVar8 != 0) {
        uVar8 = *(undefined8 *)*param_2;
        FUN_1095fafb4(uVar8,param_5,&dStack_e8);
        if ((int)uVar8 != 0) {
          *(float *)(param_1 + 2) = (float)dStack_e0;
          *(float *)((long)param_1 + 0x14) = (float)dStack_e8;
        }
      }
      FUN_1095fafb4(*(undefined8 *)*param_2,param_6,param_1 + 1);
      dStack_f0 = 0.0;
      FUN_1095fafb4(*(undefined8 *)*param_2,0x3fc,&dStack_f0);
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined8 *)((long)param_1 + 0x44) = 0;
      *(undefined8 *)((long)param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 3) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x2c) = 0x3f800000;
      *(undefined4 *)(param_1 + 8) = 0x3f800000;
      *(undefined8 *)((long)param_1 + 0x5c) = 0;
      *(undefined8 *)((long)param_1 + 100) = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = 0;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      *(undefined8 *)((long)param_1 + 0x54) = uVar9;
      *(undefined4 *)((long)param_1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x94) = 0x3f800000;
      *(float *)((long)param_1 + 100) = (float)dStack_f0;
    }
  }
  if (lStack_a0 != 0) {
    piVar7 = (int *)(lStack_a0 + 0x14);
    do {
      iVar3 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar6 = 0;
    do {
      piStack_98[lVar6] = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_d4);
  }
  if (puStack_90 != &uStack_88 && puStack_90 != (undefined8 *)0x0) {
    _free(puStack_90[-1]);
  }
  return;
}



/* Entry: 109600148; end: 10960025b;  */

float FUN_109600148(float *param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar5 = param_1[3];
  fVar3 = -(fVar6 * fVar5) + fVar8 * fVar7;
  fVar3 = fVar3 + fVar3;
  fVar4 = ABS(fVar3);
  bVar1 = false;
  bVar2 = true;
  if (ABS(((-(fVar6 * fVar6) + fVar5 * fVar5) - fVar7 * fVar7) + fVar8 * fVar8) <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar4;
    }
  }
  if (!bVar2 || bVar1) {
    fVar3 = -fVar6;
    _atan2f(fVar3,fVar5);
    fVar3 = fVar3 + fVar3;
  }
  else {
    _atan2f();
  }
  fVar4 = fVar5 * -fVar8 + fVar7 * fVar6;
  fVar4 = ABS(fVar4 + fVar4);
  bVar1 = false;
  bVar2 = true;
  if (ABS(fVar6 * fVar6 + fVar5 * fVar5 + -fVar7 * fVar7 + -fVar8 * fVar8) <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar4;
    }
  }
  if (bVar2 && !bVar1) {
    _atan2f();
  }
  fVar5 = (fVar5 * fVar7 + fVar8 * fVar6) * -2.0;
  fVar4 = -1.0;
  if (-1.0 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  _asinf(fVar5);
  return -fVar3;
}



/* Entry: 10960025c; end: 109600347;  */

undefined8 * FUN_10960025c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x219) = 0;
  *(undefined8 *)((long)param_1 + 0x211) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_110aff810;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = param_3;
  param_1[5] = 0x3f80000000000000;
  param_1[4] = 0x459c400000000000;
  param_1[6] = 0x3f800000;
  return param_1;
}



/* Entry: 109600348; end: 1096008fb;  */

undefined8 FUN_109600348(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x20) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5776c4);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x37);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      if (param_2 != 2) {
        return 0;
      }
      *(float *)(param_1 + 0x2c) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5776c4);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x42);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else if (param_2 == 3) {
    *(float *)(param_1 + 0x30) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5776c4);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x47);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x30));
  }
  else if (param_2 == 5) {
    *(float *)(param_1 + 0x34) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5776c4);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x4c);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x34));
  }
  else {
    if (param_2 != 0x14) {
      return 0;
    }
    *(float *)(param_1 + 0x28) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5776c4);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x3d);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x28));
  }
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  FUN_109671170(&uStack_170);
  return 1;
}



/* Entry: 1096008fc; end: 109600903;  */

undefined8 FUN_1096008fc(void)

{
  return 1;
}



/* Entry: 109600904; end: 109600beb;  */

undefined8 FUN_109600904(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(long *)(param_1 + 0x228) = param_2;
  if (*(float *)(param_1 + 0x34) != 0.0) {
    FUN_1095d2fe0(5,param_2 + 0x30,0,param_2 + 0x1a08,
                  param_2 + (long)*(int *)(param_1 + 0x230) * 0x60 + 0x3cf0,param_2 + 0x3f30,5);
    lVar5 = *(long *)(param_1 + 0x228);
    FUN_1095d2fe0(5,lVar5 + 0x30,0,lVar5 + 0x1a68,
                  lVar5 + (long)*(int *)(param_1 + 0x230) * 0x60 + 0x3e10,lVar5 + 0x3f90,5);
    return 1;
  }
  lVar5 = (long)*(int *)(param_1 + 0x230) * 0x60 + 0x3cf0;
  if (lVar5 == 0x3f30) {
    puVar9 = (undefined4 *)(param_2 + (long)*(int *)(param_1 + 0x230) * 0x60 + 0x3e10);
  }
  else {
    puVar9 = (undefined4 *)(param_2 + lVar5);
    if (*(long *)(puVar9 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(puVar9 + 0xe) + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(long *)(param_2 + 0x3f68) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x3f68) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x3f30);
      }
    }
    *(undefined8 *)(param_2 + 0x3f68) = 0;
    *(undefined8 *)(param_2 + 0x3f48) = 0;
    *(undefined8 *)(param_2 + 0x3f40) = 0;
    *(undefined8 *)(param_2 + 0x3f58) = 0;
    *(undefined8 *)(param_2 + 0x3f50) = 0;
    if (*(int *)(param_2 + 0x3f34) < 1) {
      *(undefined4 *)(param_2 + 0x3f30) = *puVar9;
LAB_109600a6c:
      if (2 < (int)puVar9[1]) goto LAB_109600aa0;
      *(undefined4 *)(param_2 + 0x3f34) = puVar9[1];
      *(undefined8 *)(param_2 + 0x3f38) = *(undefined8 *)(puVar9 + 2);
      puVar6 = *(undefined8 **)(puVar9 + 0x12);
      puVar8 = *(undefined8 **)(param_2 + 0x3f78);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
    }
    else {
      lVar5 = 0;
      lVar7 = *(long *)(param_2 + 0x3f70);
      do {
        *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_2 + 0x3f34));
      *(undefined4 *)(param_2 + 0x3f30) = *puVar9;
      if (*(int *)(param_2 + 0x3f34) < 3) goto LAB_109600a6c;
LAB_109600aa0:
      func_0x000109a84868(param_2 + 0x3f30,puVar9);
    }
    uVar10 = *(undefined8 *)(puVar9 + 4);
    uVar12 = *(undefined8 *)(puVar9 + 10);
    uVar11 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)(param_2 + 0x3f48) = *(undefined8 *)(puVar9 + 6);
    *(undefined8 *)(param_2 + 0x3f40) = uVar10;
    *(undefined8 *)(param_2 + 0x3f58) = uVar12;
    *(undefined8 *)(param_2 + 0x3f50) = uVar11;
    uVar10 = *(undefined8 *)(puVar9 + 0xc);
    *(undefined8 *)(param_2 + 0x3f68) = *(undefined8 *)(puVar9 + 0xe);
    *(undefined8 *)(param_2 + 0x3f60) = uVar10;
    lVar5 = (long)*(int *)(param_1 + 0x230) * 0x60 + 0x3e10;
    if (lVar5 == 0x3f90) {
      return 1;
    }
    param_2 = *(long *)(param_1 + 0x228);
    puVar9 = (undefined4 *)(param_2 + lVar5);
  }
  if (*(long *)(puVar9 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(puVar9 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_2 + 0x3fc8) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x3fc8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2 + 0x3f90);
    }
  }
  *(undefined8 *)(param_2 + 0x3fc8) = 0;
  *(undefined8 *)(param_2 + 0x3fa8) = 0;
  *(undefined8 *)(param_2 + 0x3fa0) = 0;
  *(undefined8 *)(param_2 + 0x3fb8) = 0;
  *(undefined8 *)(param_2 + 0x3fb0) = 0;
  if (*(int *)(param_2 + 0x3f94) < 1) {
    *(undefined4 *)(param_2 + 0x3f90) = *puVar9;
LAB_109600b80:
    if ((int)puVar9[1] < 3) {
      *(undefined4 *)(param_2 + 0x3f94) = puVar9[1];
      *(undefined8 *)(param_2 + 0x3f98) = *(undefined8 *)(puVar9 + 2);
      puVar6 = *(undefined8 **)(puVar9 + 0x12);
      puVar8 = *(undefined8 **)(param_2 + 0x3fd8);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_109600bc0;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_2 + 0x3fd0);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0x3f94));
    *(undefined4 *)(param_2 + 0x3f90) = *puVar9;
    if (*(int *)(param_2 + 0x3f94) < 3) goto LAB_109600b80;
  }
  func_0x000109a84868(param_2 + 0x3f90,puVar9);
LAB_109600bc0:
  uVar10 = *(undefined8 *)(puVar9 + 4);
  *(undefined8 *)(param_2 + 0x3fa8) = *(undefined8 *)(puVar9 + 6);
  *(undefined8 *)(param_2 + 0x3fa0) = uVar10;
  uVar10 = *(undefined8 *)(puVar9 + 8);
  *(undefined8 *)(param_2 + 0x3fb8) = *(undefined8 *)(puVar9 + 10);
  *(undefined8 *)(param_2 + 0x3fb0) = uVar10;
  uVar10 = *(undefined8 *)(puVar9 + 0xc);
  *(undefined8 *)(param_2 + 0x3fc8) = *(undefined8 *)(puVar9 + 0xe);
  *(undefined8 *)(param_2 + 0x3fc0) = uVar10;
  return 1;
}



/* Entry: 109600bec; end: 1096016cb;  */

void FUN_109600bec(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar7 = uStack_104;
  uVar5 = uStack_108;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = SUB84(param_2,0);
  uVar6 = uStack_108;
  uStack_104 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = uStack_104;
  uStack_108 = uVar5;
  uStack_104 = uVar7;
  if (*(float *)(param_1 + 0x2c) <= 0.5) {
LAB_1096010e4:
    if (0.5 < *(float *)(param_1 + 0x30)) {
      uStack_1a0 = 0x42ff0000;
      lStack_160 = (long)&uStack_19c + 4;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3f98);
      uStack_c8 = (undefined4)uVar16;
      iStack_c4 = (int)((ulong)uVar16 >> 0x20);
      puStack_158 = &uStack_150;
      FUN_109a83fd0(&uStack_1a0,2,&uStack_c8,0);
      uStack_c8 = 0x2010000;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_c0 = &uStack_1a0;
      FUN_109a41858(255.0 / (double)*(float *)(param_1 + 0x24),0,*(long *)(param_1 + 0x228) + 0x3f90
                    ,&uStack_c8,0);
      uStack_128 = 0;
      uVar15 = param_2[1];
      if (uVar15 < (ulong)param_2[2]) {
        FUN_10960385c(uVar15,&uStack_1a0,&uStack_128);
        lVar13 = uVar15 + 0xb0;
        param_2[1] = lVar13;
      }
      else {
        lVar10 = uVar15 - *param_2;
        uVar15 = (lVar10 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x1745d1745d1745d < uVar15) {
          FUN_1095ff464();
          goto LAB_1096015e4;
        }
        lVar13 = param_2[2] - *param_2 >> 4;
        uVar14 = lVar13 * 0x5d1745d1745d1746;
        if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
          uVar14 = uVar15;
        }
        if (0xba2e8ba2e8ba2d < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
          uVar14 = 0x1745d1745d1745d;
        }
        uStack_a8 = uVar6;
        uStack_a4 = uVar8;
        if (uVar14 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = param_2;
          FUN_1095ff478();
        }
        lVar10 = (long)plVar11 + lVar10;
        uStack_c8 = SUB84(plVar11,0);
        iStack_c4 = (int)((ulong)plVar11 >> 0x20);
        uStack_b0 = plVar11 + uVar14 * 0x16;
        uStack_c0 = (undefined4 *)lVar10;
        uStack_b8 = lVar10;
        FUN_10960385c(lVar10,&uStack_1a0,&uStack_128);
        uStack_b8 = lVar10 + 0xb0;
        lVar10 = lVar10 + (*param_2 - param_2[1]);
        FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar10);
        lVar13 = uStack_b8;
        lVar12 = *param_2;
        *param_2 = lVar10;
        lVar10 = param_2[2];
        param_2[2] = (long)uStack_b0;
        param_2[1] = uStack_b8;
        uStack_b8._0_4_ = (undefined4)lVar12;
        uStack_b8._4_4_ = (undefined4)((ulong)lVar12 >> 0x20);
        uStack_b0._0_4_ = (undefined4)lVar10;
        uStack_b0._4_4_ = (undefined4)((ulong)lVar10 >> 0x20);
        uStack_c8 = (undefined4)uStack_b8;
        iStack_c4 = uStack_b8._4_4_;
        uStack_c0._0_4_ = (undefined4)uStack_b8;
        uStack_c0._4_4_ = uStack_b8._4_4_;
        FUN_1095ff754(&uStack_c8);
      }
      param_2[1] = lVar13;
      uStack_c8 = 0x42ff0000;
      puStack_88 = &uStack_c0;
      uStack_c0._4_4_ = 0;
      uStack_b8._0_4_ = 0;
      iStack_c4 = 0;
      uStack_c0._0_4_ = 0;
      uStack_b0._4_4_ = 0;
      uStack_a8 = 0;
      uStack_b8._4_4_ = 0;
      uStack_b0._0_4_ = 0;
      uStack_9c = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      lStack_90 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3bd8);
      uStack_128 = (undefined4)uVar16;
      iStack_124 = (int)((ulong)uVar16 >> 0x20);
      puStack_80 = &uStack_78;
      FUN_109a83fd0(&uStack_c8,2,&uStack_128,0);
      uStack_128 = 0x2010000;
      uStack_118._0_4_ = 0;
      uStack_118._4_4_ = 0;
      uStack_120 = &uStack_c8;
      FUN_109a41858(0x406fe00000000000,0,*(long *)(param_1 + 0x228) + 0x3bd0,&uStack_128,0);
      uStack_128 = 0;
      uVar15 = param_2[1];
      if (uVar15 < (ulong)param_2[2]) {
        FUN_109603480(uVar15,&UNK_10f577813,&uStack_c8,&uStack_128);
        plVar11 = (long *)(uVar15 + 0xb0);
        param_2[1] = (long)plVar11;
      }
      else {
        plVar11 = param_2;
        FUN_109603328(param_2,&UNK_10f577813,&uStack_c8,&uStack_128);
      }
      param_2[1] = (long)plVar11;
      uStack_128 = 0x42ff0000;
      puStack_e8 = &uStack_120;
      uStack_120._4_4_ = 0;
      uStack_118._0_4_ = 0;
      iStack_124 = 0;
      uStack_120._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uStack_108 = 0;
      uStack_118._4_4_ = 0;
      uStack_110._0_4_ = 0;
      uStack_fc = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      lStack_f0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_140 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3998);
      puStack_e0 = &uStack_d8;
      FUN_109a83fd0(&uStack_128,2,&uStack_140,0);
      uStack_140._0_4_ = 0x2010000;
      uStack_130 = 0;
      puStack_138 = &uStack_128;
      FUN_109a41858(0x4010000000000000,0,*(long *)(param_1 + 0x228) + 0x3990,&uStack_140,0);
      uStack_140 = (ulong)uStack_140._4_4_ << 0x20;
      uVar15 = param_2[1];
      if (uVar15 < (ulong)param_2[2]) {
        FUN_109603a90(uVar15,&UNK_10f57781e,&uStack_128,&uStack_140);
        plVar11 = (long *)(uVar15 + 0xb0);
        param_2[1] = (long)plVar11;
      }
      else {
        plVar11 = param_2;
        FUN_109603938(param_2,&UNK_10f57781e,&uStack_128,&uStack_140);
      }
      param_2[1] = (long)plVar11;
      if (lStack_f0 != 0) {
        piVar1 = (int *)(lStack_f0 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_128);
        }
      }
      lStack_f0 = 0;
      uStack_110._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uStack_118._0_4_ = 0;
      uStack_118._4_4_ = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      if (0 < iStack_124) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puStack_e8 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_124);
      }
      if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
        _free(puStack_e0[-1]);
      }
      if (lStack_90 != 0) {
        piVar1 = (int *)(lStack_90 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_c8);
        }
      }
      lStack_90 = 0;
      uStack_b0._0_4_ = 0;
      uStack_b0._4_4_ = 0;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (0 < iStack_c4) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puStack_88 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_c4);
      }
      if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
        _free(puStack_80[-1]);
      }
      if (lStack_168 != 0) {
        piVar1 = (int *)(lStack_168 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      if (0 < (int)uStack_19c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_160 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_19c);
      }
      if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
        _free(puStack_158[-1]);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_1a0 = 0x42ff0000;
    lStack_160 = (long)&uStack_19c + 4;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_19c = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_174 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3f38);
    uStack_c8 = (undefined4)uVar16;
    iStack_c4 = (int)((ulong)uVar16 >> 0x20);
    puStack_158 = &uStack_150;
    FUN_109a83fd0(&uStack_1a0,2,&uStack_c8,0);
    uStack_c8 = 0x2010000;
    uStack_b8._0_4_ = 0;
    uStack_b8._4_4_ = 0;
    uStack_c0 = &uStack_1a0;
    FUN_109a41858(255.0 / (double)*(float *)(param_1 + 0x24),0,*(long *)(param_1 + 0x228) + 0x3f30,
                  &uStack_c8,0);
    uStack_c8 = 0;
    uVar15 = param_2[1];
    if (uVar15 < (ulong)param_2[2]) {
      FUN_109603480(uVar15,&UNK_10f5777e3,&uStack_1a0,&uStack_c8);
      plVar11 = (long *)(uVar15 + 0xb0);
      param_2[1] = (long)plVar11;
    }
    else {
      plVar11 = param_2;
      FUN_109603328(param_2,&UNK_10f5777e3,&uStack_1a0,&uStack_c8);
    }
    param_2[1] = (long)plVar11;
    uStack_c8 = 0x42ff0000;
    puStack_88 = &uStack_c0;
    uStack_c0._4_4_ = 0;
    uStack_b8._0_4_ = 0;
    iStack_c4 = 0;
    uStack_c0._0_4_ = 0;
    uStack_b0._4_4_ = 0;
    uStack_a8 = 0;
    uStack_b8._4_4_ = 0;
    uStack_b0._0_4_ = 0;
    uStack_9c = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    lStack_90 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3ab8);
    uStack_128 = (undefined4)uVar16;
    iStack_124 = (int)((ulong)uVar16 >> 0x20);
    puStack_80 = &uStack_78;
    FUN_109a83fd0(&uStack_c8,2,&uStack_128,0);
    uStack_128 = 0x2010000;
    uStack_118._0_4_ = 0;
    uStack_118._4_4_ = 0;
    uStack_120 = &uStack_c8;
    FUN_109a41858(0x406fe00000000000,0,*(long *)(param_1 + 0x228) + 0x3ab0,&uStack_128,0);
    uStack_140 = (ulong)uStack_140._4_4_ << 0x20;
    uVar15 = param_2[1];
    if (uVar15 < (ulong)param_2[2]) {
      FUN_109603554(uVar15,&uStack_c8,&uStack_140);
      lVar10 = uVar15 + 0xb0;
      param_2[1] = lVar10;
LAB_109600eb8:
      param_2[1] = lVar10;
      uStack_128 = 0x42ff0000;
      puStack_e8 = &uStack_120;
      uStack_120._4_4_ = 0;
      uStack_118._0_4_ = 0;
      iStack_124 = 0;
      uStack_120._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uStack_108 = 0;
      uStack_118._4_4_ = 0;
      uStack_110._0_4_ = 0;
      uStack_fc = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      lStack_f0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_140 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x3878);
      puStack_e0 = &uStack_d8;
      FUN_109a83fd0(&uStack_128,2,&uStack_140,0);
      uStack_140._0_4_ = 0x2010000;
      uStack_130 = 0;
      puStack_138 = &uStack_128;
      FUN_109a41858(0xc010000000000000,0,*(long *)(param_1 + 0x228) + 0x3870,&uStack_140,0);
      uStack_140 = (ulong)uStack_140._4_4_ << 0x20;
      uVar15 = param_2[1];
      if (uVar15 < (ulong)param_2[2]) {
        FUN_109603788(uVar15,&UNK_10f5777f8,&uStack_128,&uStack_140);
        plVar11 = (long *)(uVar15 + 0xb0);
        param_2[1] = (long)plVar11;
      }
      else {
        plVar11 = param_2;
        FUN_109603630(param_2,&UNK_10f5777f8,&uStack_128,&uStack_140);
      }
      param_2[1] = (long)plVar11;
      if (lStack_f0 != 0) {
        piVar1 = (int *)(lStack_f0 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_128);
        }
      }
      lStack_f0 = 0;
      uStack_110._0_4_ = 0;
      uStack_110._4_4_ = 0;
      uStack_118._0_4_ = 0;
      uStack_118._4_4_ = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      if (0 < iStack_124) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puStack_e8 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_124);
      }
      if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
        _free(puStack_e0[-1]);
      }
      if (lStack_90 != 0) {
        piVar1 = (int *)(lStack_90 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_c8);
        }
      }
      lStack_90 = 0;
      uStack_b0._0_4_ = 0;
      uStack_b0._4_4_ = 0;
      uStack_b8._0_4_ = 0;
      uStack_b8._4_4_ = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (0 < iStack_c4) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)puStack_88 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_c4);
      }
      if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
        _free(puStack_80[-1]);
      }
      if (lStack_168 != 0) {
        piVar1 = (int *)(lStack_168 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      if (0 < (int)uStack_19c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_160 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_19c);
      }
      if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
        _free(puStack_158[-1]);
      }
      goto LAB_1096010e4;
    }
    lVar13 = uVar15 - *param_2;
    uVar15 = (lVar13 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar15 < 0x1745d1745d1745e) {
      lVar10 = param_2[2] - *param_2 >> 4;
      uVar14 = lVar10 * 0x5d1745d1745d1746;
      if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
        uVar14 = uVar15;
      }
      if (0xba2e8ba2e8ba2d < (ulong)(lVar10 * 0x2e8ba2e8ba2e8ba3)) {
        uVar14 = 0x1745d1745d1745d;
      }
      uStack_108 = uVar6;
      uStack_104 = uVar8;
      if (uVar14 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = param_2;
        FUN_1095ff478();
      }
      lVar13 = (long)plVar11 + lVar13;
      uStack_128 = SUB84(plVar11,0);
      iStack_124 = (int)((ulong)plVar11 >> 0x20);
      uStack_110 = plVar11 + uVar14 * 0x16;
      uStack_120 = (undefined4 *)lVar13;
      uStack_118 = lVar13;
      FUN_109603554(lVar13,&uStack_c8,&uStack_140);
      uStack_118 = lVar13 + 0xb0;
      lVar13 = lVar13 + (*param_2 - param_2[1]);
      FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar13);
      lVar10 = uStack_118;
      lVar12 = *param_2;
      *param_2 = lVar13;
      lVar13 = param_2[2];
      param_2[2] = (long)uStack_110;
      param_2[1] = uStack_118;
      uStack_118._0_4_ = (undefined4)lVar12;
      uStack_118._4_4_ = (undefined4)((ulong)lVar12 >> 0x20);
      uStack_110._0_4_ = (undefined4)lVar13;
      uStack_110._4_4_ = (undefined4)((ulong)lVar13 >> 0x20);
      uStack_128 = (undefined4)uStack_118;
      iStack_124 = uStack_118._4_4_;
      uStack_120._0_4_ = (undefined4)uStack_118;
      uStack_120._4_4_ = uStack_118._4_4_;
      FUN_1095ff754(&uStack_128);
      goto LAB_109600eb8;
    }
  }
  FUN_1095ff464();
LAB_1096015e4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1096015e8);
  (*pcVar9)();
}



/* Entry: 1096016cc; end: 109602d23;  */

undefined8 * FUN_1096016cc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  long lStack_368;
  ulong uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1b9;
  undefined8 *puStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  ulong uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  puVar13 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
  uStack_1a8 = &uStack_238;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  puVar8 = param_2;
  if (0.5 < *(float *)((long)param_1 + 0x2c)) {
    uStack_238._0_4_ = 0x42ff0000;
    puStack_1f8 = &uStack_230;
    uStack_230._4_4_ = 0;
    uStack_228 = 0;
    uStack_238._4_4_ = 0;
    uStack_230._0_4_ = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    iStack_224 = 0;
    uStack_220 = 0;
    uStack_20c = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    lStack_200 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1b0 = 0x2010000;
    uStack_1a0 = 0;
    iStack_19c = 0;
    puStack_1f0 = &uStack_1e8;
    FUN_109a41858(0x3ff0000000000000,0,param_1[0x45] + 0x3f30,&uStack_1b0,2);
    uStack_1b0 = 0x42ff0000;
    uVar17 = (ulong)&uStack_1b0 | 8;
    uStack_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    iStack_1ac = 0;
    uStack_1a8._0_4_ = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    iStack_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_2c0 = 0x2010000;
    uStack_2b0 = 0;
    iStack_2ac = 0;
    uStack_170 = uVar17;
    puStack_168 = &uStack_160;
    uStack_2b8 = (undefined8 *)&uStack_1b0;
    FUN_109a479a0(&uStack_238,&uStack_2c0);
    uVar2 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_2c0,uVar2 + 0xd,&uStack_340);
    puVar8 = param_1 + 1;
    puVar3 = (undefined4 *)CONCAT44(iStack_2bc,uStack_2c0);
    if (-1 < iStack_2ac) {
      puVar3 = &uStack_2c0;
    }
    if (uVar2 != 0) {
      puVar7 = (undefined8 *)param_1[1];
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        puVar7 = puVar8;
      }
      _memmove(puVar3,puVar7,uVar2);
    }
    puVar7 = (undefined8 *)((long)puVar3 + uVar2);
    *puVar7 = 0x654c68747065645f;
    *(undefined8 *)((long)puVar7 + 5) = 0x74754f7466654c68;
    *(undefined1 *)((long)puVar7 + 0xd) = 0;
    uStack_340 = &uStack_2c0;
    puVar7 = param_2;
    FUN_1095ff978(param_2,&uStack_2c0,&UNK_10dd5b8f9,&uStack_340,&uStack_3a0);
    if (puVar7[0xc] != 0) {
      piVar1 = (int *)(puVar7[0xc] + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(puVar7 + 5);
      }
    }
    puVar7[0xc] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    if (0 < *(int *)((long)puVar7 + 0x2c)) {
      lVar9 = 0;
      lVar11 = puVar7[0xd];
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)puVar7 + 0x2c));
    }
    puVar7[6] = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    puVar7[5] = CONCAT44(iStack_1ac,uStack_1b0);
    puVar7[8] = CONCAT44(uStack_194,uStack_198);
    puVar7[7] = CONCAT44(iStack_19c,uStack_1a0);
    puVar7[10] = CONCAT44(uStack_184,uStack_188);
    puVar7[9] = CONCAT44(uStack_18c,uStack_190);
    puVar7[0xc] = lStack_178;
    puVar7[0xb] = CONCAT44(uStack_17c,uStack_180);
    puVar12 = (undefined8 *)puVar7[0xe];
    puVar13 = puVar7 + 0xf;
    if (puVar12 != puVar13) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      puVar7[0xd] = puVar7 + 6;
      puVar7[0xe] = puVar13;
      puVar12 = puVar13;
    }
    puVar13 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    if (iStack_1ac < 3) {
      *puVar12 = *puStack_168;
      puVar12[1] = puStack_168[1];
    }
    else {
      puVar7[0xd] = uStack_170;
      puVar7[0xe] = puStack_168;
      uStack_170 = uVar17;
      puStack_168 = &uStack_160;
    }
    uStack_1b0 = 0x42ff0000;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    if (iStack_2ac < 0) {
      __ZdlPv(CONCAT44(iStack_2bc,uStack_2c0));
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_1b0);
        }
      }
      if (0 < iStack_1ac) {
        lVar9 = 0;
        do {
          *(undefined4 *)(uStack_170 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_1ac);
      }
    }
    lStack_178 = 0;
    uStack_184 = 0;
    uStack_188 = 0;
    uStack_18c = 0;
    uStack_190 = 0;
    uStack_194 = 0;
    uStack_198 = 0;
    iStack_19c = 0;
    uStack_1a0 = 0;
    if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
      _free(puStack_168[-1]);
    }
    if (0.5 < *(float *)(param_1 + 5)) {
      uStack_1b0 = 0x42ff0000;
      uVar17 = (ulong)&uStack_1b0 | 8;
      uStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      iStack_1ac = 0;
      uStack_1a8._0_4_ = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      iStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_2c0 = 0x2010000;
      uStack_2b0 = 0;
      iStack_2ac = 0;
      uStack_170 = uVar17;
      puStack_168 = &uStack_160;
      uStack_2b8 = (undefined8 *)&uStack_1b0;
      FUN_109a479a0(param_1[0x45] + 0x3ab0,&uStack_2c0);
      uVar2 = param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
      }
      func_0x000104c4f768(&uStack_2c0,uVar2 + 0xc,&uStack_340);
      puVar3 = (undefined4 *)CONCAT44(iStack_2bc,uStack_2c0);
      if (-1 < iStack_2ac) {
        puVar3 = &uStack_2c0;
      }
      if (uVar2 != 0) {
        puVar7 = (undefined8 *)param_1[1];
        if (-1 < *(char *)((long)param_1 + 0x1f)) {
          puVar7 = puVar8;
        }
        _memmove(puVar3,puVar7,uVar2);
      }
      puVar7 = (undefined8 *)((long)puVar3 + uVar2);
      *puVar7 = 0x6e6f437466656c5f;
      *(undefined4 *)(puVar7 + 1) = 0x46323366;
      *(undefined1 *)((long)puVar7 + 0xc) = 0;
      uStack_340 = &uStack_2c0;
      puVar7 = param_2;
      FUN_1095ff978(param_2,&uStack_2c0,&UNK_10dd5b8f9,&uStack_340,&uStack_3a0);
      if (puVar7[0xc] != 0) {
        piVar1 = (int *)(puVar7[0xc] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(puVar7 + 5);
        }
      }
      puVar7[0xc] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      if (0 < *(int *)((long)puVar7 + 0x2c)) {
        lVar9 = 0;
        lVar11 = puVar7[0xd];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)puVar7 + 0x2c));
      }
      puVar7[6] = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      puVar7[5] = CONCAT44(iStack_1ac,uStack_1b0);
      puVar7[8] = CONCAT44(uStack_194,uStack_198);
      puVar7[7] = CONCAT44(iStack_19c,uStack_1a0);
      puVar7[10] = CONCAT44(uStack_184,uStack_188);
      puVar7[9] = CONCAT44(uStack_18c,uStack_190);
      puVar7[0xc] = lStack_178;
      puVar7[0xb] = CONCAT44(uStack_17c,uStack_180);
      puVar12 = (undefined8 *)puVar7[0xe];
      puVar13 = puVar7 + 0xf;
      if (puVar12 != puVar13) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        puVar7[0xd] = puVar7 + 6;
        puVar7[0xe] = puVar13;
        puVar12 = puVar13;
      }
      puVar13 = (undefined8 *)((ulong)&uStack_1b0 | 4);
      if (iStack_1ac < 3) {
        *puVar12 = *puStack_168;
        puVar12[1] = puStack_168[1];
      }
      else {
        puVar7[0xd] = uStack_170;
        puVar7[0xe] = puStack_168;
        uStack_170 = uVar17;
        puStack_168 = &uStack_160;
      }
      uStack_1b0 = 0x42ff0000;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      *(undefined8 *)((long)puVar13 + 0x34) = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      if (iStack_2ac < 0) {
        __ZdlPv(CONCAT44(iStack_2bc,uStack_2c0));
        if (lStack_178 != 0) {
          piVar1 = (int *)(lStack_178 + 0x14);
          do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_1b0);
          }
        }
        if (0 < iStack_1ac) {
          lVar9 = 0;
          do {
            *(undefined4 *)(uStack_170 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iStack_1ac);
        }
      }
      lStack_178 = 0;
      uStack_184 = 0;
      uStack_188 = 0;
      uStack_18c = 0;
      uStack_190 = 0;
      uStack_194 = 0;
      uStack_198 = 0;
      iStack_19c = 0;
      uStack_1a0 = 0;
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        _free(puStack_168[-1]);
      }
    }
    lVar9 = param_1[0x45];
    FUN_1095e1cb0(&uStack_2c0,lVar9 + 0x30,*(undefined4 *)(lVar9 + 0x3f38),
                  *(undefined4 *)(lVar9 + 0x3f3c),0);
    uStack_1b0 = 0x2010000;
    uStack_1a0 = 0;
    iStack_19c = 0;
    uStack_1a8 = (undefined8 *)&uStack_2c0;
    FUN_109a41858(255.0 / (double)*(float *)((long)param_1 + 0x24),0,param_1[0x45] + 0x3f30,
                  &uStack_1b0,0);
    lVar9 = param_1[0x45];
    FUN_1095e1cb0(&uStack_340,lVar9 + 0x30,*(undefined4 *)(lVar9 + 0x3f38),
                  *(undefined4 *)(lVar9 + 0x3f3c),0x10);
    uStack_170 = (ulong)&uStack_1b0 | 8;
    uStack_1b0 = uStack_2c0;
    iStack_1ac = iStack_2bc;
    uStack_198 = uStack_2a8;
    uStack_194 = uStack_2a4;
    uStack_1a0 = uStack_2b0;
    iStack_19c = iStack_2ac;
    uStack_188 = uStack_298;
    uStack_184 = uStack_294;
    uStack_190 = uStack_2a0;
    uStack_18c = uStack_29c;
    lStack_178 = lStack_288;
    uStack_180 = uStack_290;
    uStack_17c = uStack_28c;
    puStack_168 = &uStack_160;
    uStack_158 = 0;
    uStack_160 = 0;
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_1a8 = uStack_2b8;
    if (iStack_2bc < 3) {
      uStack_160 = *puStack_278;
      uStack_158 = puStack_278[1];
      puStack_148 = uStack_2b8;
    }
    else {
      iStack_1ac = 0;
      func_0x000109a84868(&uStack_1b0,&uStack_2c0);
      puStack_148 = uStack_2b8;
    }
    uStack_150 = uStack_2c0;
    ppuStack_110 = &puStack_148;
    uStack_140 = CONCAT44(iStack_2ac,uStack_2b0);
    lStack_118 = lStack_288;
    puStack_108 = &uStack_100;
    uStack_f8 = 0;
    uStack_100 = 0;
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iStack_2bc < 3) {
      uStack_100 = *puStack_278;
      uStack_f8 = puStack_278[1];
      iStack_14c = iStack_2bc;
      puStack_e8 = puStack_148;
    }
    else {
      iStack_14c = 0;
      uStack_2b8 = puStack_148;
      func_0x000109a84868(&uStack_150,&uStack_2c0);
      puStack_e8 = uStack_2b8;
    }
    uStack_f0 = uStack_2c0;
    ppuStack_b0 = &puStack_e8;
    uStack_e0 = CONCAT44(iStack_2ac,uStack_2b0);
    lStack_b8 = lStack_288;
    puStack_a8 = &uStack_a0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_2b8 = puStack_e8;
    if (iStack_2bc < 3) {
      uStack_a0 = *puStack_278;
      uStack_98 = puStack_278[1];
      iStack_ec = iStack_2bc;
    }
    else {
      iStack_ec = 0;
      func_0x000109a84868(&uStack_f0,&uStack_2c0);
    }
    uStack_3a0._0_4_ = 0x2010000;
    uStack_398 = &uStack_340;
    uStack_390 = 0;
    uStack_38c = 0;
    FUN_109a3e010(&uStack_1b0,3,&uStack_3a0);
    uStack_3a0._0_4_ = 0x42ff0000;
    uVar17 = (ulong)&uStack_3a0 | 8;
    uStack_398._4_4_ = 0;
    uStack_390 = 0;
    uStack_3a0._4_4_ = 0;
    uStack_398._0_4_ = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_374 = 0;
    uStack_37c = 0;
    uStack_378 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_1d8 = 0x2010000;
    lStack_1c8 = 0;
    uStack_360 = uVar17;
    puStack_358 = &uStack_350;
    puStack_1d0 = &uStack_3a0;
    FUN_109a479a0(&uStack_340,&uStack_1d8);
    uVar2 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_1d8,uVar2 + 0x13,&puStack_1b8);
    puVar3 = (undefined4 *)CONCAT44(uStack_1d4,uStack_1d8);
    if (-1 < lStack_1c8) {
      puVar3 = &uStack_1d8;
    }
    if (uVar2 != 0) {
      puVar7 = (undefined8 *)param_1[1];
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        puVar7 = puVar8;
      }
      _memmove(puVar3,puVar7,uVar2);
    }
    puVar8 = (undefined8 *)((long)puVar3 + uVar2);
    puVar8[1] = 0x5f553874754f7466;
    *puVar8 = 0x654c68747065645f;
    *(undefined4 *)((long)puVar8 + 0xf) = 0x6863335f;
    *(undefined1 *)((long)puVar8 + 0x13) = 0;
    puStack_1b8 = (undefined8 *)&uStack_1d8;
    puVar8 = (undefined8 *)&uStack_1d8;
    puVar7 = param_2;
    FUN_1095ff978(param_2,puVar8,&UNK_10dd5b8f9,&puStack_1b8,&uStack_1b9);
    if (puVar7[0xc] != 0) {
      piVar1 = (int *)(puVar7[0xc] + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(puVar7 + 5);
      }
    }
    puVar7[0xc] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    if (0 < *(int *)((long)puVar7 + 0x2c)) {
      lVar9 = 0;
      lVar11 = puVar7[0xd];
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)puVar7 + 0x2c));
    }
    puVar7[6] = CONCAT44(uStack_398._4_4_,(undefined4)uStack_398);
    puVar7[5] = CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0);
    puVar7[8] = CONCAT44(uStack_384,uStack_388);
    puVar7[7] = CONCAT44(uStack_38c,uStack_390);
    puVar7[10] = CONCAT44(uStack_374,uStack_378);
    puVar7[9] = CONCAT44(uStack_37c,uStack_380);
    puVar7[0xc] = lStack_368;
    puVar7[0xb] = CONCAT44(uStack_36c,uStack_370);
    puVar12 = (undefined8 *)puVar7[0xe];
    puVar13 = puVar7 + 0xf;
    if (puVar12 != puVar13) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      puVar7[0xd] = puVar7 + 6;
      puVar7[0xe] = puVar13;
      puVar12 = puVar13;
    }
    puVar13 = (undefined8 *)((ulong)&uStack_3a0 | 4);
    if (uStack_3a0._4_4_ < 3) {
      *puVar12 = *puStack_358;
      puVar12[1] = puStack_358[1];
    }
    else {
      puVar7[0xd] = uStack_360;
      puVar7[0xe] = puStack_358;
      puStack_358 = &uStack_350;
      uStack_360 = uVar17;
    }
    uStack_3a0._0_4_ = 0x42ff0000;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    if (lStack_1c8 < 0) {
      __ZdlPv(CONCAT44(uStack_1d4,uStack_1d8));
      if (lStack_368 != 0) {
        piVar1 = (int *)(lStack_368 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_3a0);
        }
      }
      if (0 < uStack_3a0._4_4_) {
        lVar9 = 0;
        do {
          *(undefined4 *)(uStack_360 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_3a0._4_4_);
      }
    }
    lStack_368 = 0;
    uStack_374 = 0;
    uStack_378 = 0;
    uStack_37c = 0;
    uStack_380 = 0;
    uStack_384 = 0;
    uStack_388 = 0;
    uStack_38c = 0;
    uStack_390 = 0;
    if (puStack_358 != &uStack_350 && puStack_358 != (undefined8 *)0x0) {
      _free(puStack_358[-1]);
    }
    puVar7 = &uStack_90;
    do {
      puVar13 = puVar7 + -0xc;
      if (puVar7[-5] != 0) {
        piVar1 = (int *)(puVar7[-5] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(puVar13);
        }
      }
      puVar7[-5] = 0;
      puVar7[-9] = 0;
      puVar7[-10] = 0;
      puVar7[-7] = 0;
      puVar7[-8] = 0;
      if (0 < *(int *)((long)puVar7 + -0x5c)) {
        lVar9 = 0;
        lVar11 = puVar7[-4];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)puVar7 + -0x5c));
      }
      puVar12 = (undefined8 *)puVar7[-3];
      if (puVar12 != puVar7 + -2 && puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      puVar7 = puVar13;
    } while (puVar13 != (undefined8 *)&uStack_1b0);
    FUN_1095d3858(&uStack_340);
    puVar7 = (undefined8 *)&uStack_2c0;
    FUN_1095d3858();
    puVar13 = uStack_1a8;
    if (lStack_200 != 0) {
      piVar1 = (int *)(lStack_200 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        puVar7 = &uStack_238;
        func_0x000109a848d4();
        puVar13 = uStack_1a8;
      }
    }
    lStack_200 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_228 = 0;
    iStack_224 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    if (0 < uStack_238._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_1f8 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_238._4_4_);
    }
    if (puStack_1f0 != &uStack_1e8 && puStack_1f0 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puStack_1f0[-1];
      uStack_1a8 = puVar13;
      _free();
      puVar13 = uStack_1a8;
    }
  }
  puVar12 = uStack_2b8;
  if (0.5 < *(float *)(param_1 + 6)) {
    uStack_2c0 = 0x42ff0000;
    uStack_2b8._4_4_ = 0;
    uStack_2b0 = 0;
    iStack_2bc = 0;
    uStack_2b8._0_4_ = 0;
    uStack_1a8 = (undefined8 *)&uStack_2c0;
    puStack_280 = &uStack_2b8;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    iStack_2ac = 0;
    uStack_2a8 = 0;
    uStack_294 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_1a0 = 0;
    iStack_19c = 0;
    uStack_1b0 = 0x2010000;
    puStack_278 = &uStack_270;
    FUN_109a41858(0x3ff0000000000000,0,param_1[0x45] + 0x3f90,&uStack_1b0,2);
    uStack_1b0 = 0x42ff0000;
    uVar17 = (ulong)&uStack_1b0 | 8;
    uStack_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    iStack_1ac = 0;
    uStack_1a8._0_4_ = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    iStack_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_340._0_4_ = 0x2010000;
    uStack_330 = 0;
    iStack_32c = 0;
    uStack_170 = uVar17;
    puStack_168 = &uStack_160;
    uStack_338 = &uStack_1b0;
    FUN_109a479a0(&uStack_2c0,&uStack_340);
    uVar2 = param_1[2];
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    func_0x000104c4f768(&uStack_340,uVar2 + 0xe,&uStack_238);
    puVar13 = param_1 + 1;
    puVar8 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
    if (-1 < iStack_32c) {
      puVar8 = &uStack_340;
    }
    if (uVar2 != 0) {
      puVar7 = (undefined8 *)param_1[1];
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        puVar7 = puVar13;
      }
      _memmove(puVar8,puVar7,uVar2);
    }
    puVar8 = (undefined8 *)((long)puVar8 + uVar2);
    *puVar8 = 0x695268747065645f;
    *(undefined8 *)((long)puVar8 + 6) = 0x74754f7468676952;
    *(undefined1 *)((long)puVar8 + 0xe) = 0;
    uStack_238 = &uStack_340;
    puVar8 = &uStack_340;
    puVar12 = param_2;
    FUN_1095ff978(param_2,puVar8,&UNK_10dd5b8f9,&uStack_238,&uStack_3a0);
    puVar7 = puVar12;
    if (puVar12[0xc] != 0) {
      piVar1 = (int *)(puVar12[0xc] + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        puVar7 = puVar12 + 5;
        func_0x000109a848d4();
      }
    }
    puVar12[0xc] = 0;
    puVar12[8] = 0;
    puVar12[7] = 0;
    puVar12[10] = 0;
    puVar12[9] = 0;
    if (0 < *(int *)((long)puVar12 + 0x2c)) {
      lVar9 = 0;
      lVar11 = puVar12[0xd];
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)puVar12 + 0x2c));
    }
    puVar12[6] = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    puVar12[5] = CONCAT44(iStack_1ac,uStack_1b0);
    puVar12[8] = CONCAT44(uStack_194,uStack_198);
    puVar12[7] = CONCAT44(iStack_19c,uStack_1a0);
    puVar12[10] = CONCAT44(uStack_184,uStack_188);
    puVar12[9] = CONCAT44(uStack_18c,uStack_190);
    puVar12[0xc] = lStack_178;
    puVar12[0xb] = CONCAT44(uStack_17c,uStack_180);
    puVar14 = (undefined8 *)puVar12[0xe];
    puVar15 = puVar12 + 0xf;
    if (puVar14 != puVar15) {
      if (puVar14 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)puVar14[-1];
        _free();
      }
      puVar12[0xd] = puVar12 + 6;
      puVar12[0xe] = puVar15;
      puVar14 = puVar15;
    }
    puVar15 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    if (iStack_1ac < 3) {
      *puVar14 = *puStack_168;
      puVar14[1] = puStack_168[1];
    }
    else {
      puVar12[0xd] = uStack_170;
      puVar12[0xe] = puStack_168;
      uStack_170 = uVar17;
      puStack_168 = &uStack_160;
    }
    uStack_1b0 = 0x42ff0000;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    if (iStack_32c < 0) {
      puVar7 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
      __ZdlPv();
      if (lStack_178 != 0) {
        piVar1 = (int *)(lStack_178 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          puVar7 = (undefined8 *)&uStack_1b0;
          func_0x000109a848d4();
        }
      }
      if (0 < iStack_1ac) {
        lVar9 = 0;
        do {
          *(undefined4 *)(uStack_170 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_1ac);
      }
    }
    lStack_178 = 0;
    uStack_184 = 0;
    uStack_188 = 0;
    uStack_18c = 0;
    uStack_190 = 0;
    uStack_194 = 0;
    uStack_198 = 0;
    iStack_19c = 0;
    uStack_1a0 = 0;
    if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puStack_168[-1];
      _free();
    }
    if (0.5 < *(float *)(param_1 + 5)) {
      uStack_1b0 = 0x42ff0000;
      uVar17 = (ulong)&uStack_1b0 | 8;
      uStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      iStack_1ac = 0;
      uStack_1a8._0_4_ = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      iStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_340._0_4_ = 0x2010000;
      uStack_330 = 0;
      iStack_32c = 0;
      uStack_170 = uVar17;
      puStack_168 = &uStack_160;
      uStack_338 = &uStack_1b0;
      FUN_109a479a0(param_1[0x45] + 0x3bd0,&uStack_340);
      uVar2 = param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
      }
      func_0x000104c4f768(&uStack_340,uVar2 + 0xd,&uStack_238);
      puVar8 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
      if (-1 < iStack_32c) {
        puVar8 = &uStack_340;
      }
      if (uVar2 != 0) {
        puVar7 = (undefined8 *)param_1[1];
        if (-1 < *(char *)((long)param_1 + 0x1f)) {
          puVar7 = puVar13;
        }
        _memmove(puVar8,puVar7,uVar2);
      }
      puVar8 = (undefined8 *)((long)puVar8 + uVar2);
      *puVar8 = 0x6f4374686769725f;
      *(undefined8 *)((long)puVar8 + 5) = 0x463233666e6f4374;
      *(undefined1 *)((long)puVar8 + 0xd) = 0;
      uStack_238 = &uStack_340;
      puVar8 = &uStack_340;
      puVar12 = param_2;
      FUN_1095ff978(param_2,puVar8,&UNK_10dd5b8f9,&uStack_238,&uStack_3a0);
      puVar7 = puVar12;
      if (puVar12[0xc] != 0) {
        piVar1 = (int *)(puVar12[0xc] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          puVar7 = puVar12 + 5;
          func_0x000109a848d4();
        }
      }
      puVar12[0xc] = 0;
      puVar12[8] = 0;
      puVar12[7] = 0;
      puVar12[10] = 0;
      puVar12[9] = 0;
      if (0 < *(int *)((long)puVar12 + 0x2c)) {
        lVar9 = 0;
        lVar11 = puVar12[0xd];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)puVar12 + 0x2c));
      }
      puVar12[6] = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      puVar12[5] = CONCAT44(iStack_1ac,uStack_1b0);
      puVar12[8] = CONCAT44(uStack_194,uStack_198);
      puVar12[7] = CONCAT44(iStack_19c,uStack_1a0);
      puVar12[10] = CONCAT44(uStack_184,uStack_188);
      puVar12[9] = CONCAT44(uStack_18c,uStack_190);
      puVar12[0xc] = lStack_178;
      puVar12[0xb] = CONCAT44(uStack_17c,uStack_180);
      puVar14 = (undefined8 *)puVar12[0xe];
      puVar15 = puVar12 + 0xf;
      if (puVar14 != puVar15) {
        if (puVar14 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)puVar14[-1];
          _free();
        }
        puVar12[0xd] = puVar12 + 6;
        puVar12[0xe] = puVar15;
        puVar14 = puVar15;
      }
      puVar15 = (undefined8 *)((ulong)&uStack_1b0 | 4);
      if (iStack_1ac < 3) {
        *puVar14 = *puStack_168;
        puVar14[1] = puStack_168[1];
      }
      else {
        puVar12[0xd] = uStack_170;
        puVar12[0xe] = puStack_168;
        uStack_170 = uVar17;
        puStack_168 = &uStack_160;
      }
      uStack_1b0 = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (iStack_32c < 0) {
        puVar7 = (undefined8 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
        __ZdlPv();
        if (lStack_178 != 0) {
          piVar1 = (int *)(lStack_178 + 0x14);
          do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            puVar7 = (undefined8 *)&uStack_1b0;
            func_0x000109a848d4();
          }
        }
        if (0 < iStack_1ac) {
          lVar9 = 0;
          do {
            *(undefined4 *)(uStack_170 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iStack_1ac);
        }
      }
      lStack_178 = 0;
      uStack_184 = 0;
      uStack_188 = 0;
      uStack_18c = 0;
      uStack_190 = 0;
      uStack_194 = 0;
      uStack_198 = 0;
      iStack_19c = 0;
      uStack_1a0 = 0;
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)puStack_168[-1];
        _free();
      }
    }
    if (0.5 < *(float *)(param_1 + 4)) {
      lVar9 = param_1[0x45];
      FUN_1095e1cb0(&uStack_1b0,lVar9 + 0x30,*(undefined4 *)(lVar9 + 0x3f98),
                    *(undefined4 *)(lVar9 + 0x3f9c),0);
      uStack_340._0_4_ = 0x2010000;
      uStack_330 = 0;
      iStack_32c = 0;
      uStack_338 = &uStack_1b0;
      FUN_109a41858(255.0 / (double)*(float *)((long)param_1 + 0x24),0,param_1[0x45] + 0x3f90,
                    &uStack_340,0);
      uStack_340._0_4_ = 0x42ff0000;
      uVar17 = (ulong)&uStack_340 | 8;
      uStack_338._4_4_ = 0;
      uStack_330 = 0;
      uStack_340._4_4_ = 0;
      uStack_338._0_4_ = 0;
      uStack_324 = 0;
      uStack_320 = 0;
      iStack_32c = 0;
      uStack_328 = 0;
      uStack_314 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_238._0_4_ = 0x2010000;
      uStack_228 = 0;
      iStack_224 = 0;
      uStack_300 = uVar17;
      puStack_2f8 = &uStack_2f0;
      uStack_230 = &uStack_340;
      FUN_109a479a0(&uStack_1b0,&uStack_238);
      uVar2 = param_1[2];
      if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x1f);
      }
      func_0x000104c4f768(&uStack_238,uVar2 + 0x10,&uStack_3a0);
      puVar8 = (undefined8 *)CONCAT44(uStack_238._4_4_,(undefined4)uStack_238);
      if (-1 < iStack_224) {
        puVar8 = &uStack_238;
      }
      if (uVar2 != 0) {
        puVar7 = (undefined8 *)param_1[1];
        if (-1 < *(char *)((long)param_1 + 0x1f)) {
          puVar7 = puVar13;
        }
        _memmove(puVar8,puVar7,uVar2);
      }
      puVar8 = (undefined8 *)((long)puVar8 + uVar2);
      puVar8[1] = 0x553874754f746867;
      *puVar8 = 0x695268747065645f;
      *(undefined1 *)(puVar8 + 2) = 0;
      uStack_3a0 = &uStack_238;
      puVar8 = &uStack_238;
      FUN_1095ff978(param_2,puVar8,&UNK_10dd5b8f9,&uStack_3a0,&uStack_1d8);
      if (param_2[0xc] != 0) {
        piVar1 = (int *)(param_2[0xc] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_2 + 5);
        }
      }
      param_2[0xc] = 0;
      param_2[8] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      if (0 < *(int *)((long)param_2 + 0x2c)) {
        lVar9 = 0;
        lVar11 = param_2[0xd];
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 0x2c));
      }
      param_2[6] = CONCAT44(uStack_338._4_4_,(undefined4)uStack_338);
      param_2[5] = CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
      param_2[8] = CONCAT44(uStack_324,uStack_328);
      param_2[7] = CONCAT44(iStack_32c,uStack_330);
      param_2[10] = CONCAT44(uStack_314,uStack_318);
      param_2[9] = CONCAT44(uStack_31c,uStack_320);
      param_2[0xc] = lStack_308;
      param_2[0xb] = CONCAT44(uStack_30c,uStack_310);
      puVar13 = (undefined8 *)param_2[0xe];
      puVar7 = param_2 + 0xf;
      if (puVar13 != puVar7) {
        if (puVar13 != (undefined8 *)0x0) {
          _free(puVar13[-1]);
        }
        param_2[0xd] = param_2 + 6;
        param_2[0xe] = puVar7;
        puVar13 = puVar7;
      }
      puVar7 = (undefined8 *)((ulong)&uStack_340 | 4);
      if (uStack_340._4_4_ < 3) {
        *puVar13 = *puStack_2f8;
        puVar13[1] = puStack_2f8[1];
      }
      else {
        param_2[0xd] = uStack_300;
        param_2[0xe] = puStack_2f8;
        uStack_300 = uVar17;
        puStack_2f8 = &uStack_2f0;
      }
      uStack_340._0_4_ = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (iStack_224 < 0) {
        __ZdlPv(CONCAT44(uStack_238._4_4_,(undefined4)uStack_238));
        if (lStack_308 != 0) {
          piVar1 = (int *)(lStack_308 + 0x14);
          do {
            iVar4 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_340);
          }
        }
        if (0 < uStack_340._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)(uStack_300 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_340._4_4_);
        }
      }
      lStack_308 = 0;
      uStack_314 = 0;
      uStack_318 = 0;
      uStack_31c = 0;
      uStack_320 = 0;
      uStack_324 = 0;
      uStack_328 = 0;
      iStack_32c = 0;
      uStack_330 = 0;
      if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
        _free(puStack_2f8[-1]);
      }
      puVar7 = (undefined8 *)&uStack_1b0;
      FUN_1095d3858();
    }
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        puVar7 = (undefined8 *)&uStack_2c0;
        func_0x000109a848d4();
      }
    }
    puVar13 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    puVar12 = (undefined8 *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
    lStack_288 = 0;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2b0 = 0;
    iStack_2ac = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    if (0 < iStack_2bc) {
      lVar9 = 0;
      do {
        *(undefined4 *)((long)puStack_280 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack_2bc);
    }
    if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puStack_278[-1];
      _free();
      puVar13 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      puVar12 = (undefined8 *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar7;
  }
  uStack_2b8 = puVar12;
  uStack_1a8 = puVar13;
  ___stack_chk_fail();
  while ((int)puVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar9 = 0;
  do {
    lVar11 = puVar7[0x45] + lVar9 * 0x60;
    if (*(long *)(lVar11 + 0x24f0) != 0) {
      piVar1 = (int *)(*(long *)(lVar11 + 0x24f0) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar11 + 0x24b8);
      }
    }
    *(undefined8 *)(lVar11 + 0x24f0) = 0;
    *(undefined8 *)(lVar11 + 0x24d0) = 0;
    *(undefined8 *)(lVar11 + 0x24c8) = 0;
    *(undefined8 *)(lVar11 + 0x24e0) = 0;
    *(undefined8 *)(lVar11 + 0x24d8) = 0;
    if (0 < *(int *)(lVar11 + 0x24bc)) {
      lVar10 = 0;
      lVar16 = *(long *)(lVar11 + 0x24f8);
      do {
        *(undefined4 *)(lVar16 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 0x24bc));
    }
    lVar11 = puVar7[0x45] + lVar9 * 0x60;
    if (*(long *)(lVar11 + 0x2610) != 0) {
      piVar1 = (int *)(*(long *)(lVar11 + 0x2610) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar11 + 0x25d8);
      }
    }
    *(undefined8 *)(lVar11 + 0x2610) = 0;
    *(undefined8 *)(lVar11 + 0x25f0) = 0;
    *(undefined8 *)(lVar11 + 0x25e8) = 0;
    *(undefined8 *)(lVar11 + 0x2600) = 0;
    *(undefined8 *)(lVar11 + 0x25f8) = 0;
    if (0 < *(int *)(lVar11 + 0x25dc)) {
      lVar10 = 0;
      lVar16 = *(long *)(lVar11 + 0x2618);
      do {
        *(undefined4 *)(lVar16 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 0x25dc));
    }
    lVar11 = puVar7[0x45] + lVar9 * 0x60;
    if (*(long *)(lVar11 + 0x2730) != 0) {
      piVar1 = (int *)(*(long *)(lVar11 + 0x2730) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar11 + 0x26f8);
      }
    }
    *(undefined8 *)(lVar11 + 0x2730) = 0;
    *(undefined8 *)(lVar11 + 10000) = 0;
    *(undefined8 *)(lVar11 + 0x2708) = 0;
    *(undefined8 *)(lVar11 + 0x2720) = 0;
    *(undefined8 *)(lVar11 + 0x2718) = 0;
    if (0 < *(int *)(lVar11 + 0x26fc)) {
      lVar10 = 0;
      lVar16 = *(long *)(lVar11 + 0x2738);
      do {
        *(undefined4 *)(lVar16 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 0x26fc));
    }
    lVar11 = puVar7[0x45] + lVar9 * 0x60;
    if (*(long *)(lVar11 + 0x2850) != 0) {
      piVar1 = (int *)(*(long *)(lVar11 + 0x2850) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar11 + 0x2818);
      }
    }
    *(undefined8 *)(lVar11 + 0x2850) = 0;
    *(undefined8 *)(lVar11 + 0x2830) = 0;
    *(undefined8 *)(lVar11 + 0x2828) = 0;
    *(undefined8 *)(lVar11 + 0x2840) = 0;
    *(undefined8 *)(lVar11 + 0x2838) = 0;
    if (0 < *(int *)(lVar11 + 0x281c)) {
      lVar10 = 0;
      lVar16 = *(long *)(lVar11 + 0x2858);
      do {
        *(undefined4 *)(lVar16 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 0x281c));
    }
    FUN_1095d276c(puVar7[0x45] + lVar9 * 8 + 0x3ff0,0);
    FUN_1095d276c(puVar7[0x45] + lVar9 * 8 + 0x4008,0);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2970) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2970) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2938);
    }
  }
  *(undefined8 *)(lVar9 + 0x2970) = 0;
  *(undefined8 *)(lVar9 + 0x2950) = 0;
  *(undefined8 *)(lVar9 + 0x2948) = 0;
  *(undefined8 *)(lVar9 + 0x2960) = 0;
  *(undefined8 *)(lVar9 + 0x2958) = 0;
  if (0 < *(int *)(lVar9 + 0x293c)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2978);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x293c));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x29d0) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x29d0) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2998);
    }
  }
  *(undefined8 *)(lVar9 + 0x29d0) = 0;
  *(undefined8 *)(lVar9 + 0x29b0) = 0;
  *(undefined8 *)(lVar9 + 0x29a8) = 0;
  *(undefined8 *)(lVar9 + 0x29c0) = 0;
  *(undefined8 *)(lVar9 + 0x29b8) = 0;
  if (0 < *(int *)(lVar9 + 0x299c)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x29d8);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x299c));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2a30) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2a30) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x29f8);
    }
  }
  *(undefined8 *)(lVar9 + 0x2a30) = 0;
  *(undefined8 *)(lVar9 + 0x2a10) = 0;
  *(undefined8 *)(lVar9 + 0x2a08) = 0;
  *(undefined8 *)(lVar9 + 0x2a20) = 0;
  *(undefined8 *)(lVar9 + 0x2a18) = 0;
  if (0 < *(int *)(lVar9 + 0x29fc)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2a38);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x29fc));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2a90) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2a90) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2a58);
    }
  }
  *(undefined8 *)(lVar9 + 0x2a90) = 0;
  *(undefined8 *)(lVar9 + 0x2a70) = 0;
  *(undefined8 *)(lVar9 + 0x2a68) = 0;
  *(undefined8 *)(lVar9 + 0x2a80) = 0;
  *(undefined8 *)(lVar9 + 0x2a78) = 0;
  if (0 < *(int *)(lVar9 + 0x2a5c)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2a98);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x2a5c));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2af0) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2af0) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2ab8);
    }
  }
  *(undefined8 *)(lVar9 + 0x2af0) = 0;
  *(undefined8 *)(lVar9 + 0x2ad0) = 0;
  *(undefined8 *)(lVar9 + 0x2ac8) = 0;
  *(undefined8 *)(lVar9 + 0x2ae0) = 0;
  *(undefined8 *)(lVar9 + 0x2ad8) = 0;
  if (0 < *(int *)(lVar9 + 0x2abc)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 11000);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x2abc));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2b50) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2b50) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2b18);
    }
  }
  *(undefined8 *)(lVar9 + 0x2b50) = 0;
  *(undefined8 *)(lVar9 + 0x2b30) = 0;
  *(undefined8 *)(lVar9 + 0x2b28) = 0;
  *(undefined8 *)(lVar9 + 0x2b40) = 0;
  *(undefined8 *)(lVar9 + 0x2b38) = 0;
  if (0 < *(int *)(lVar9 + 0x2b1c)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2b58);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x2b1c));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2df8) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2df8) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2dc0);
    }
  }
  *(undefined8 *)(lVar9 + 0x2df8) = 0;
  *(undefined8 *)(lVar9 + 0x2dd8) = 0;
  *(undefined8 *)(lVar9 + 0x2dd0) = 0;
  *(undefined8 *)(lVar9 + 0x2de8) = 0;
  *(undefined8 *)(lVar9 + 0x2de0) = 0;
  if (0 < *(int *)(lVar9 + 0x2dc4)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2e00);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x2dc4));
  }
  lVar9 = puVar7[0x45];
  if (*(long *)(lVar9 + 0x2e58) != 0) {
    piVar1 = (int *)(*(long *)(lVar9 + 0x2e58) + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(lVar9 + 0x2e20);
    }
  }
  *(undefined8 *)(lVar9 + 0x2e58) = 0;
  *(undefined8 *)(lVar9 + 0x2e38) = 0;
  *(undefined8 *)(lVar9 + 0x2e30) = 0;
  *(undefined8 *)(lVar9 + 0x2e48) = 0;
  *(undefined8 *)(lVar9 + 0x2e40) = 0;
  if (0 < *(int *)(lVar9 + 0x2e24)) {
    lVar11 = 0;
    lVar10 = *(long *)(lVar9 + 0x2e60);
    do {
      *(undefined4 *)(lVar10 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x2e24));
  }
  return (undefined8 *)0x1;
}



/* Entry: 109602d24; end: 1096032af;  */

undefined8 FUN_109602d24(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = 0;
  do {
    lVar5 = *(long *)(param_1 + 0x228) + lVar8 * 0x60;
    if (*(long *)(lVar5 + 0x24f0) != 0) {
      piVar1 = (int *)(*(long *)(lVar5 + 0x24f0) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar5 + 0x24b8);
      }
    }
    *(undefined8 *)(lVar5 + 0x24f0) = 0;
    *(undefined8 *)(lVar5 + 0x24d0) = 0;
    *(undefined8 *)(lVar5 + 0x24c8) = 0;
    *(undefined8 *)(lVar5 + 0x24e0) = 0;
    *(undefined8 *)(lVar5 + 0x24d8) = 0;
    if (0 < *(int *)(lVar5 + 0x24bc)) {
      lVar6 = 0;
      lVar7 = *(long *)(lVar5 + 0x24f8);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0x24bc));
    }
    lVar5 = *(long *)(param_1 + 0x228) + lVar8 * 0x60;
    if (*(long *)(lVar5 + 0x2610) != 0) {
      piVar1 = (int *)(*(long *)(lVar5 + 0x2610) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar5 + 0x25d8);
      }
    }
    *(undefined8 *)(lVar5 + 0x2610) = 0;
    *(undefined8 *)(lVar5 + 0x25f0) = 0;
    *(undefined8 *)(lVar5 + 0x25e8) = 0;
    *(undefined8 *)(lVar5 + 0x2600) = 0;
    *(undefined8 *)(lVar5 + 0x25f8) = 0;
    if (0 < *(int *)(lVar5 + 0x25dc)) {
      lVar6 = 0;
      lVar7 = *(long *)(lVar5 + 0x2618);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0x25dc));
    }
    lVar5 = *(long *)(param_1 + 0x228) + lVar8 * 0x60;
    if (*(long *)(lVar5 + 0x2730) != 0) {
      piVar1 = (int *)(*(long *)(lVar5 + 0x2730) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar5 + 0x26f8);
      }
    }
    *(undefined8 *)(lVar5 + 0x2730) = 0;
    *(undefined8 *)(lVar5 + 10000) = 0;
    *(undefined8 *)(lVar5 + 0x2708) = 0;
    *(undefined8 *)(lVar5 + 0x2720) = 0;
    *(undefined8 *)(lVar5 + 0x2718) = 0;
    if (0 < *(int *)(lVar5 + 0x26fc)) {
      lVar6 = 0;
      lVar7 = *(long *)(lVar5 + 0x2738);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0x26fc));
    }
    lVar5 = *(long *)(param_1 + 0x228) + lVar8 * 0x60;
    if (*(long *)(lVar5 + 0x2850) != 0) {
      piVar1 = (int *)(*(long *)(lVar5 + 0x2850) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar5 + 0x2818);
      }
    }
    *(undefined8 *)(lVar5 + 0x2850) = 0;
    *(undefined8 *)(lVar5 + 0x2830) = 0;
    *(undefined8 *)(lVar5 + 0x2828) = 0;
    *(undefined8 *)(lVar5 + 0x2840) = 0;
    *(undefined8 *)(lVar5 + 0x2838) = 0;
    if (0 < *(int *)(lVar5 + 0x281c)) {
      lVar6 = 0;
      lVar7 = *(long *)(lVar5 + 0x2858);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0x281c));
    }
    FUN_1095d276c(*(long *)(param_1 + 0x228) + lVar8 * 8 + 0x3ff0,0);
    FUN_1095d276c(*(long *)(param_1 + 0x228) + lVar8 * 8 + 0x4008,0);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2970) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2970) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2938);
    }
  }
  *(undefined8 *)(lVar8 + 0x2970) = 0;
  *(undefined8 *)(lVar8 + 0x2950) = 0;
  *(undefined8 *)(lVar8 + 0x2948) = 0;
  *(undefined8 *)(lVar8 + 0x2960) = 0;
  *(undefined8 *)(lVar8 + 0x2958) = 0;
  if (0 < *(int *)(lVar8 + 0x293c)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2978);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x293c));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x29d0) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x29d0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2998);
    }
  }
  *(undefined8 *)(lVar8 + 0x29d0) = 0;
  *(undefined8 *)(lVar8 + 0x29b0) = 0;
  *(undefined8 *)(lVar8 + 0x29a8) = 0;
  *(undefined8 *)(lVar8 + 0x29c0) = 0;
  *(undefined8 *)(lVar8 + 0x29b8) = 0;
  if (0 < *(int *)(lVar8 + 0x299c)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x29d8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x299c));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2a30) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2a30) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x29f8);
    }
  }
  *(undefined8 *)(lVar8 + 0x2a30) = 0;
  *(undefined8 *)(lVar8 + 0x2a10) = 0;
  *(undefined8 *)(lVar8 + 0x2a08) = 0;
  *(undefined8 *)(lVar8 + 0x2a20) = 0;
  *(undefined8 *)(lVar8 + 0x2a18) = 0;
  if (0 < *(int *)(lVar8 + 0x29fc)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2a38);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x29fc));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2a90) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2a90) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2a58);
    }
  }
  *(undefined8 *)(lVar8 + 0x2a90) = 0;
  *(undefined8 *)(lVar8 + 0x2a70) = 0;
  *(undefined8 *)(lVar8 + 0x2a68) = 0;
  *(undefined8 *)(lVar8 + 0x2a80) = 0;
  *(undefined8 *)(lVar8 + 0x2a78) = 0;
  if (0 < *(int *)(lVar8 + 0x2a5c)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2a98);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x2a5c));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2af0) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2af0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2ab8);
    }
  }
  *(undefined8 *)(lVar8 + 0x2af0) = 0;
  *(undefined8 *)(lVar8 + 0x2ad0) = 0;
  *(undefined8 *)(lVar8 + 0x2ac8) = 0;
  *(undefined8 *)(lVar8 + 0x2ae0) = 0;
  *(undefined8 *)(lVar8 + 0x2ad8) = 0;
  if (0 < *(int *)(lVar8 + 0x2abc)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 11000);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x2abc));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2b50) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2b50) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2b18);
    }
  }
  *(undefined8 *)(lVar8 + 0x2b50) = 0;
  *(undefined8 *)(lVar8 + 0x2b30) = 0;
  *(undefined8 *)(lVar8 + 0x2b28) = 0;
  *(undefined8 *)(lVar8 + 0x2b40) = 0;
  *(undefined8 *)(lVar8 + 0x2b38) = 0;
  if (0 < *(int *)(lVar8 + 0x2b1c)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2b58);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x2b1c));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2df8) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2df8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2dc0);
    }
  }
  *(undefined8 *)(lVar8 + 0x2df8) = 0;
  *(undefined8 *)(lVar8 + 0x2dd8) = 0;
  *(undefined8 *)(lVar8 + 0x2dd0) = 0;
  *(undefined8 *)(lVar8 + 0x2de8) = 0;
  *(undefined8 *)(lVar8 + 0x2de0) = 0;
  if (0 < *(int *)(lVar8 + 0x2dc4)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2e00);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x2dc4));
  }
  lVar8 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar8 + 0x2e58) != 0) {
    piVar1 = (int *)(*(long *)(lVar8 + 0x2e58) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar8 + 0x2e20);
    }
  }
  *(undefined8 *)(lVar8 + 0x2e58) = 0;
  *(undefined8 *)(lVar8 + 0x2e38) = 0;
  *(undefined8 *)(lVar8 + 0x2e30) = 0;
  *(undefined8 *)(lVar8 + 0x2e48) = 0;
  *(undefined8 *)(lVar8 + 0x2e40) = 0;
  if (0 < *(int *)(lVar8 + 0x2e24)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar8 + 0x2e60);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar8 + 0x2e24));
  }
  return 1;
}



/* Entry: 1096032b0; end: 109603327;  */

undefined8 * FUN_1096032b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109603328; end: 10960347f;  */

long * FUN_109603328(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  char cStack_d9;
  char cStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x1745d1745d1745e) {
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x1745d1745d1745d;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1095ff478();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_50 = plVar1 + uVar4 * 0x16;
    plStack_68 = plVar1;
    plStack_60 = (long *)lVar5;
    plStack_58 = (long *)lVar5;
    FUN_109603480(lVar5,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar5 + 0xb0);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_1095ff4c0(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar5;
    FUN_1095ff754(&plStack_68);
    return plVar1;
  }
  FUN_1095ff464();
  FUN_1095ff754(&plStack_68);
  __Unwind_Resume(param_1);
  func_0x000107c31940(auStack_d0);
  auStack_f8[0] = 0;
  cStack_d8 = '\0';
  uStack_b8 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_d0,&uStack_b8,param_3,*param_4,auStack_f8);
  if ((cStack_d8 == '\x01') && (cStack_d9 < '\0')) {
    __ZdlPv(uStack_f0);
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  return param_1;
}



/* Entry: 109603480; end: 109603553;  */

undefined8 FUN_109603480(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_3,*param_4,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109603554; end: 10960362f;  */

undefined8 FUN_109603554(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50,&UNK_10f5777ee);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_2,*param_3,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109603630; end: 109603787;  */

long * FUN_109603630(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  char cStack_d9;
  char cStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x1745d1745d1745e) {
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x1745d1745d1745d;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1095ff478();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_50 = plVar1 + uVar4 * 0x16;
    plStack_68 = plVar1;
    plStack_60 = (long *)lVar5;
    plStack_58 = (long *)lVar5;
    FUN_109603788(lVar5,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar5 + 0xb0);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_1095ff4c0(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar5;
    FUN_1095ff754(&plStack_68);
    return plVar1;
  }
  FUN_1095ff464();
  FUN_1095ff754(&plStack_68);
  __Unwind_Resume(param_1);
  func_0x000107c31940(auStack_d0);
  auStack_f8[0] = 0;
  cStack_d8 = '\0';
  uStack_b8 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_d0,&uStack_b8,param_3,*param_4,auStack_f8);
  if ((cStack_d8 == '\x01') && (cStack_d9 < '\0')) {
    __ZdlPv(uStack_f0);
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  return param_1;
}



/* Entry: 109603788; end: 10960385b;  */

undefined8 FUN_109603788(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_3,*param_4,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 10960385c; end: 109603937;  */

undefined8 FUN_10960385c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50,&UNK_10f577807);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_2,*param_3,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109603938; end: 109603a8f;  */

long * FUN_109603938(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  char cStack_d9;
  char cStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 uStack_b8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x1745d1745d1745e) {
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x1745d1745d1745d;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1095ff478();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_50 = plVar1 + uVar4 * 0x16;
    plStack_68 = plVar1;
    plStack_60 = (long *)lVar5;
    plStack_58 = (long *)lVar5;
    FUN_109603a90(lVar5,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar5 + 0xb0);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_1095ff4c0(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar5;
    FUN_1095ff754(&plStack_68);
    return plVar1;
  }
  FUN_1095ff464();
  FUN_1095ff754(&plStack_68);
  __Unwind_Resume(param_1);
  func_0x000107c31940(auStack_d0);
  auStack_f8[0] = 0;
  cStack_d8 = '\0';
  uStack_b8 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_d0,&uStack_b8,param_3,*param_4,auStack_f8);
  if ((cStack_d8 == '\x01') && (cStack_d9 < '\0')) {
    __ZdlPv(uStack_f0);
  }
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  return param_1;
}



/* Entry: 109603a90; end: 109603b63;  */

undefined8 FUN_109603a90(undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  func_0x000107c31940(auStack_50);
  auStack_78[0] = 0;
  cStack_58 = '\0';
  uStack_38 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_50,&uStack_38,param_3,*param_4,auStack_78);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return param_1;
}



/* Entry: 109603b64; end: 109603e13;  */

undefined8 *
FUN_109603b64(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,long param_5,
             undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar9;
    param_1[1] = uVar8;
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_110aff898;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  _bzero((long)param_1 + 0x234,0x856);
  *(undefined1 *)((long)param_1 + 0xa8a) = param_7;
  *(undefined4 *)((long)param_1 + 0xa3c) = 3;
  param_1[5] = 0x3f8000003f800000;
  param_1[4] = 0x3f80000000000000;
  param_1[7] = 0x4000000042fe0000;
  param_1[6] = 0x404000003f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000104bec9f0(param_1 + 0x148,3,0);
  uVar4 = 0;
  lVar5 = 0;
  puVar6 = (ulong *)param_1[0x148];
  do {
    uVar7 = 1L << (uVar4 & 0x3f);
    if (*(char *)(param_3 + lVar5) == '\x01') {
      uVar7 = *puVar6 | uVar7;
    }
    else {
      uVar7 = *puVar6 & (uVar7 ^ 0xffffffffffffffff);
    }
    *puVar6 = uVar7;
    lVar5 = lVar5 + 1;
    iVar3 = (int)uVar4;
    lVar1 = 8;
    if (iVar3 != 0x3f) {
      lVar1 = 0;
    }
    puVar6 = (ulong *)((long)puVar6 + lVar1);
    uVar2 = 0;
    if (iVar3 != 0x3f) {
      uVar2 = iVar3 + 1;
    }
    uVar4 = (ulong)uVar2;
  } while (lVar5 != 3);
  func_0x000104bec9f0(param_1 + 0x14b,3,0);
  uVar4 = 0;
  lVar5 = 0;
  puVar6 = (ulong *)param_1[0x14b];
  do {
    uVar7 = 1L << (uVar4 & 0x3f);
    if (*(char *)(param_4 + lVar5) == '\x01') {
      uVar7 = *puVar6 | uVar7;
    }
    else {
      uVar7 = *puVar6 & (uVar7 ^ 0xffffffffffffffff);
    }
    *puVar6 = uVar7;
    lVar5 = lVar5 + 1;
    iVar3 = (int)uVar4;
    lVar1 = 8;
    if (iVar3 != 0x3f) {
      lVar1 = 0;
    }
    puVar6 = (ulong *)((long)puVar6 + lVar1);
    uVar2 = 0;
    if (iVar3 != 0x3f) {
      uVar2 = iVar3 + 1;
    }
    uVar4 = (ulong)uVar2;
  } while (lVar5 != 3);
  func_0x000104bec9f0(param_1 + 0x14e,3,0);
  uVar4 = 0;
  lVar5 = 0;
  puVar6 = (ulong *)param_1[0x14e];
  do {
    uVar7 = 1L << (uVar4 & 0x3f);
    if (*(char *)(param_5 + lVar5) == '\x01') {
      uVar7 = *puVar6 | uVar7;
    }
    else {
      uVar7 = *puVar6 & (uVar7 ^ 0xffffffffffffffff);
    }
    *puVar6 = uVar7;
    lVar5 = lVar5 + 1;
    iVar3 = (int)uVar4;
    lVar1 = 8;
    if (iVar3 != 0x3f) {
      lVar1 = 0;
    }
    puVar6 = (ulong *)((long)puVar6 + lVar1);
    uVar2 = 0;
    if (iVar3 != 0x3f) {
      uVar2 = iVar3 + 1;
    }
    uVar4 = (ulong)uVar2;
  } while (lVar5 != 3);
  *(undefined1 *)(param_1 + 0x151) = param_6;
  *(undefined1 *)((long)param_1 + 0xa89) = 0;
  return param_1;
}



/* Entry: 109603e14; end: 1096045db;  */

undefined8 FUN_109603e14(long param_1,int param_2,double *param_3)

{
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (param_2 < 0x15) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x20) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f57788b);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x74);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    }
    else if (param_2 == 4) {
      *(float *)(param_1 + 0x30) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f57788b);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x79);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x30));
    }
    else {
      if (param_2 != 0x13) {
        return 1;
      }
      *(float *)(param_1 + 0x2c) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f57788b);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x7e);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  else if (param_2 < 0x22) {
    if (param_2 == 0x15) {
      *(float *)(param_1 + 0x40) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f57788b);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x83);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x40));
    }
    else {
      if (param_2 != 0x1e) {
        return 1;
      }
      *(float *)(param_1 + 0x44) = (float)*param_3;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f57788b);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x89);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x44));
    }
  }
  else if (param_2 == 0x22) {
    *(float *)(param_1 + 0x48) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f57788b);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x8e);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x48));
  }
  else {
    if (param_2 != 0x23) {
      return 1;
    }
    *(float *)(param_1 + 0x4c) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f57788b);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x93);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x4c));
  }
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  FUN_109671170(&uStack_170);
  return 1;
}



/* Entry: 1096045dc; end: 1096045e3;  */

undefined8 FUN_1096045dc(void)

{
  return 1;
}



/* Entry: 1096045e4; end: 1096076d7;  */

undefined8 *
FUN_1096045e4(uint *param_1,uint *param_2,undefined8 *param_3,uint *param_4,undefined8 *param_5,
             long param_6,uint *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  float *pfVar26;
  uint *unaff_x21;
  int iVar27;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  uint *unaff_x27;
  uint *unaff_x28;
  undefined8 uVar28;
  float fVar29;
  undefined8 auStack_6b0 [2];
  char cStack_699;
  undefined4 uStack_698;
  undefined4 uStack_694;
  uint *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_618;
  undefined4 *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  uint *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_580;
  uint *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
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
  ulong uStack_440;
  long lStack_430;
  uint *puStack_420;
  uint *puStack_418;
  uint *puStack_410;
  uint *puStack_408;
  uint *puStack_400;
  uint *puStack_3f8;
  uint *puStack_3f0;
  uint *puStack_3e8;
  float *pfStack_3e0;
  uint *puStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined1 uStack_3c0;
  uint *puStack_3b8;
  uint *puStack_3b0;
  uint *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  undefined8 uStack_368;
  uint *puStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_330;
  long lStack_328;
  undefined1 *puStack_320;
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  int iStack_300;
  int iStack_2fc;
  undefined8 uStack_2f8;
  uint *puStack_2f0;
  long lStack_2e8;
  float afStack_274 [9];
  float afStack_250 [11];
  float afStack_224 [9];
  float afStack_200 [12];
  undefined8 uStack_1d0;
  uint *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint auStack_c0 [12];
  ulong uStack_90;
  long lStack_88;
  
  pfVar16 = afStack_250;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(uint **)(param_1 + 0x8a) = param_2;
  if ((*(byte *)((long)param_2 + 0x135a) & 1) == 0) {
    puVar8 = param_1;
    if (4 < iRam00000001132dfb08) {
      uStack_90 = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_10926db08(&uStack_1d0);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_368,&UNK_10f576492);
      param_4 = (uint *)&uStack_368;
      param_5 = (undefined8 *)0xa8;
      FUN_109671348(&uStack_1d0,5,&uStack_2f8);
      param_2 = (uint *)&UNK_10f57754b;
      param_3 = (undefined8 *)0x19;
      FUN_1092b4db8();
      if (lStack_358 < 0) {
        __ZdlPv(uStack_368);
      }
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
      puVar8 = (uint *)&uStack_1d0;
      FUN_109671170();
    }
  }
  else {
    param_2[0x80c] = param_1[0x28f];
    puVar11 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    unaff_x23 = *(uint **)(param_1 + 0x8a);
    puVar8 = unaff_x23 + 0x86;
    uVar18 = unaff_x23[0x86] >> 3 & 0x1ff;
    unaff_x25 = puVar11;
    if (uVar18 == 2) {
      if (*(long *)(unaff_x23 + 0x94) != 0) {
        piVar22 = (int *)(*(long *)(unaff_x23 + 0x94) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(unaff_x23 + 0x7ea) != 0) {
        piVar22 = (int *)(*(long *)(unaff_x23 + 0x7ea) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          unaff_x25 = unaff_x23 + 0x7dc;
          func_0x000109a848d4();
        }
      }
      unaff_x23[0x7ea] = 0;
      unaff_x23[0x7eb] = 0;
      unaff_x23[0x7e2] = 0;
      unaff_x23[0x7e3] = 0;
      unaff_x23[0x7e0] = 0;
      unaff_x23[0x7e1] = 0;
      unaff_x23[0x7e6] = 0;
      unaff_x23[0x7e7] = 0;
      unaff_x23[0x7e4] = 0;
      unaff_x23[0x7e5] = 0;
      if ((int)unaff_x23[0x7dd] < 1) {
        unaff_x23[0x7dc] = *puVar8;
LAB_109604840:
        if (2 < (int)unaff_x23[0x87]) goto LAB_109604874;
        unaff_x23[0x7dd] = unaff_x23[0x87];
        *(undefined8 *)(unaff_x23 + 0x7de) = *(undefined8 *)(unaff_x23 + 0x88);
        puVar14 = *(undefined8 **)(unaff_x23 + 0x98);
        puVar15 = *(undefined8 **)(unaff_x23 + 0x7ee);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar10 = 0;
        lVar21 = *(long *)(unaff_x23 + 0x7ec);
        do {
          *(undefined4 *)(lVar21 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)unaff_x23[0x7dd]);
        unaff_x23[0x7dc] = *puVar8;
        if ((int)unaff_x23[0x7dd] < 3) goto LAB_109604840;
LAB_109604874:
        unaff_x25 = unaff_x23 + 0x7dc;
        func_0x000109a84868(unaff_x25,puVar8);
      }
      *(undefined8 *)(unaff_x23 + 0x7e2) = *(undefined8 *)(unaff_x23 + 0x8c);
      *(undefined8 *)(unaff_x23 + 0x7e0) = *(undefined8 *)(unaff_x23 + 0x8a);
      *(undefined8 *)(unaff_x23 + 0x7e6) = *(undefined8 *)(unaff_x23 + 0x90);
      *(undefined8 *)(unaff_x23 + 0x7e4) = *(undefined8 *)(unaff_x23 + 0x8e);
      *(undefined8 *)(unaff_x23 + 0x7ea) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(unaff_x23 + 0x7e8) = *(undefined8 *)(unaff_x23 + 0x92);
      lVar10 = *(long *)(param_1 + 0x8a);
      unaff_x23 = (uint *)0x1fd0;
      if (*(long *)(lVar10 + 0x2b0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x2b0) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x2008) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x2008) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          unaff_x25 = (uint *)(lVar10 + 0x1fd0);
          func_0x000109a848d4();
        }
      }
      unaff_x24 = (uint *)(lVar10 + 0x288);
      *(undefined8 *)(lVar10 + 0x2008) = 0;
      *(undefined8 *)(lVar10 + 0x1fe8) = 0;
      *(undefined8 *)(lVar10 + 0x1fe0) = 0;
      *(undefined8 *)(lVar10 + 0x1ff8) = 0;
      *(undefined8 *)(lVar10 + 0x1ff0) = 0;
      if (*(int *)(lVar10 + 0x1fd4) < 1) {
        *(undefined4 *)(lVar10 + 0x1fd0) = *(undefined4 *)(lVar10 + 0x278);
LAB_10960493c:
        if (2 < *(int *)(lVar10 + 0x27c)) goto LAB_109604970;
        *(int *)(lVar10 + 0x1fd4) = *(int *)(lVar10 + 0x27c);
        *(undefined8 *)(lVar10 + 0x1fd8) = *(undefined8 *)(lVar10 + 0x280);
        puVar14 = *(undefined8 **)(lVar10 + 0x2c0);
        puVar15 = *(undefined8 **)(lVar10 + 0x2018);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x2010);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x1fd4));
        *(undefined4 *)(lVar10 + 0x1fd0) = *(undefined4 *)(lVar10 + 0x278);
        if (*(int *)(lVar10 + 0x1fd4) < 3) goto LAB_10960493c;
LAB_109604970:
        unaff_x25 = (uint *)(lVar10 + 0x1fd0);
        func_0x000109a84868();
      }
      *(undefined8 *)(lVar10 + 0x1fe8) = *(undefined8 *)(lVar10 + 0x290);
      *(undefined8 *)(lVar10 + 0x1fe0) = *(undefined8 *)unaff_x24;
      *(undefined8 *)(lVar10 + 0x1ff8) = *(undefined8 *)(lVar10 + 0x2a0);
      *(undefined8 *)(lVar10 + 0x1ff0) = *(undefined8 *)(lVar10 + 0x298);
      *(undefined8 *)(lVar10 + 0x2008) = *(undefined8 *)(lVar10 + 0x2b0);
      *(undefined8 *)(lVar10 + 0x2000) = *(undefined8 *)(lVar10 + 0x2a8);
    }
    else if (uVar18 == 3) {
      uStack_1c0 = 0;
      unaff_x24 = (uint *)0x1010000;
      uStack_1d0._0_4_ = 0x1010000;
      puStack_2f0 = unaff_x23 + 0x7dc;
      uStack_2f8._0_4_ = 0x2010000;
      lStack_2e8 = 0;
      puStack_1c8 = puVar8;
      FUN_109ac9fc8(&uStack_1d0,&uStack_2f8,1,0);
      puStack_1c8 = (uint *)(*(long *)(param_1 + 0x8a) + 0x278);
      uStack_1c0 = 0;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x1010000);
      puStack_2f0 = (uint *)(*(long *)(param_1 + 0x8a) + 0x1fd0);
      uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x2010000);
      lStack_2e8 = 0;
      unaff_x25 = (uint *)&uStack_1d0;
      FUN_109ac9fc8(unaff_x25,&uStack_2f8,1,0);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_90 = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_10926db08(&uStack_1d0);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_368,&UNK_10f576492);
      FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368,0xae);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)unaff_x25 - (long)puVar11) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (lStack_358 < 0) {
        __ZdlPv(uStack_368);
      }
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
      unaff_x25 = (uint *)&uStack_1d0;
      FUN_109671170();
    }
    if ((*(byte *)((long)param_1 + 0xa89) & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x8a);
      *(undefined4 *)(lVar10 + 0x1f28) = 4;
      *(undefined4 *)(lVar10 + 0x1f34) = 1;
      iVar12 = (int)(float)param_1[0xc];
      if (*(char *)(lVar10 + 0x135d) == '\x01') {
        if (*(char *)(lVar10 + 0x135b) == '\x01') {
          uVar28 = *(undefined8 *)(lVar10 + 0x670);
        }
        else {
          uVar28 = *(undefined8 *)(lVar10 + 0x668);
        }
        uVar28 = CONCAT44((int)(float)((ulong)uVar28 >> 0x20),(int)(float)uVar28);
      }
      else {
        uVar28 = **(undefined8 **)(lVar10 + 0x1988);
      }
      iVar27 = 0;
      if (iVar12 != 0) {
        iVar27 = (int)uVar28 / iVar12;
      }
      iVar3 = 0;
      if (iVar12 != 0) {
        iVar3 = (int)((ulong)uVar28 >> 0x20) / iVar12;
      }
      *(int *)(lVar10 + 0x1ef8) = iVar3 + 8;
      *(int *)(lVar10 + 0x1efc) = iVar27 + 2;
      *(int *)(lVar10 + 0x1f10) = iVar3;
      *(int *)(lVar10 + 0x1f14) = iVar27;
      *(undefined8 *)(lVar10 + 8000) = 0x100000004;
      *(int *)(lVar10 + 0x1f48) = iVar3;
      *(int *)(lVar10 + 0x1f4c) = iVar27;
      if (1 < (int)param_1[0x28f]) {
        puVar14 = (undefined8 *)(lVar10 + 0x1f18);
        iVar12 = 4;
        lVar21 = 1;
        puVar15 = (undefined8 *)(lVar10 + 0x1f58);
        piVar22 = (int *)(lVar10 + 0x1f38);
        do {
          piVar22[-3] = iVar12;
          *piVar22 = iVar12;
          iVar12 = (int)puVar14[-1];
          iVar27 = (int)((ulong)puVar14[-1] >> 0x20);
          uVar28 = CONCAT44(iVar27 / 2,iVar12 / 2);
          *puVar14 = uVar28;
          puVar14[-3] = CONCAT44(*piVar22 * 2 + iVar27 / 2,piVar22[-3] * 2 + iVar12 / 2);
          iVar12 = piVar22[-3];
          iVar27 = *piVar22;
          *(int *)(puVar15 + -1) = iVar12;
          *(int *)((long)puVar15 + -4) = iVar27;
          *puVar15 = uVar28;
          lVar21 = lVar21 + 1;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 2;
          piVar22 = piVar22 + 1;
        } while (lVar21 < (int)param_1[0x28f]);
      }
      if ((char)param_1[0x2a2] == '\x01') {
        puVar9 = (undefined4 *)(lVar10 + 0x1f2c);
        lVar21 = -2;
        puVar14 = (undefined8 *)(lVar10 + 0x1f20);
        puVar15 = (undefined8 *)(lVar10 + 0x1f60);
        do {
          puVar9[1] = *puVar9;
          puVar9[4] = *puVar9;
          *puVar14 = puVar14[-1];
          puVar14[-3] = puVar14[-4];
          puVar15[1] = puVar15[-1];
          *puVar15 = puVar15[-2];
          puVar9 = puVar9 + -1;
          bVar5 = lVar21 != -1;
          lVar21 = lVar21 + 1;
          puVar14 = puVar14 + -1;
          puVar15 = puVar15 + -2;
        } while (bVar5);
        *(undefined4 *)(lVar10 + 0x1f28) = 0;
        *(undefined4 *)(lVar10 + 0x1f34) = 0;
        puVar14 = *(undefined8 **)(lVar10 + 0x1988);
        uVar1 = *(undefined4 *)puVar14;
        uVar2 = *(undefined4 *)((long)puVar14 + 4);
        *(undefined4 *)(lVar10 + 0x1f10) = uVar2;
        *(undefined4 *)(lVar10 + 0x1f14) = uVar1;
        uVar28 = NEON_rev64(*puVar14,4);
        *(undefined8 *)(lVar10 + 0x1ef8) = uVar28;
        *(undefined8 *)(lVar10 + 8000) = 0;
        *(undefined4 *)(lVar10 + 0x1f48) = uVar2;
        *(undefined4 *)(lVar10 + 0x1f4c) = uVar1;
      }
      *(undefined1 *)((long)param_1 + 0xa89) = 1;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar10 = *(long *)(param_1 + 0x8a);
    if ((*(byte *)(lVar10 + 0x135d) & 1) == 0) {
      if (*(long *)(lVar10 + 0x1980) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1980) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8 = unaff_x25;
      if (*(long *)(lVar10 + 0x1a40) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1a40) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar8 = (uint *)(lVar10 + 0x1a08);
          func_0x000109a848d4(puVar8);
        }
      }
      *(undefined8 *)(lVar10 + 0x1a40) = 0;
      *(undefined8 *)(lVar10 + 0x1a20) = 0;
      *(undefined8 *)(lVar10 + 0x1a18) = 0;
      *(undefined8 *)(lVar10 + 0x1a30) = 0;
      *(undefined8 *)(lVar10 + 0x1a28) = 0;
      if (*(int *)(lVar10 + 0x1a0c) < 1) {
        *(undefined4 *)(lVar10 + 0x1a08) = *(undefined4 *)(lVar10 + 0x1948);
LAB_1096055a4:
        if (2 < *(int *)(lVar10 + 0x194c)) goto LAB_1096055d8;
        *(int *)(lVar10 + 0x1a0c) = *(int *)(lVar10 + 0x194c);
        *(undefined8 *)(lVar10 + 0x1a10) = *(undefined8 *)(lVar10 + 0x1950);
        puVar14 = *(undefined8 **)(lVar10 + 0x1990);
        puVar15 = *(undefined8 **)(lVar10 + 0x1a50);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x1a48);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x1a0c));
        *(undefined4 *)(lVar10 + 0x1a08) = *(undefined4 *)(lVar10 + 0x1948);
        if (*(int *)(lVar10 + 0x1a0c) < 3) goto LAB_1096055a4;
LAB_1096055d8:
        puVar8 = (uint *)(lVar10 + 0x1a08);
        func_0x000109a84868(puVar8,lVar10 + 0x1948);
      }
      *(undefined8 *)(lVar10 + 0x1a18) = *(undefined8 *)(lVar10 + 0x1958);
      *(undefined8 *)(lVar10 + 0x1a28) = *(undefined8 *)(lVar10 + 0x1968);
      *(undefined8 *)(lVar10 + 0x1a20) = *(undefined8 *)(lVar10 + 0x1960);
      *(undefined8 *)(lVar10 + 0x1a38) = *(undefined8 *)(lVar10 + 0x1978);
      *(undefined8 *)(lVar10 + 0x1a30) = *(undefined8 *)(lVar10 + 0x1970);
      *(undefined8 *)(lVar10 + 0x1a40) = *(undefined8 *)(lVar10 + 0x1980);
      lVar10 = *(long *)(param_1 + 0x8a);
      if (*(long *)(lVar10 + 0x19e0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x19e0) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x1aa0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1aa0) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar8 = (uint *)(lVar10 + 0x1a68);
          func_0x000109a848d4(puVar8);
        }
      }
      *(undefined8 *)(lVar10 + 0x1aa0) = 0;
      *(undefined8 *)(lVar10 + 0x1a80) = 0;
      *(undefined8 *)(lVar10 + 0x1a78) = 0;
      *(undefined8 *)(lVar10 + 0x1a90) = 0;
      *(undefined8 *)(lVar10 + 0x1a88) = 0;
      if (*(int *)(lVar10 + 0x1a6c) < 1) {
        *(undefined4 *)(lVar10 + 0x1a68) = *(undefined4 *)(lVar10 + 0x19a8);
LAB_1096056ac:
        if (2 < *(int *)(lVar10 + 0x19ac)) goto LAB_1096056e0;
        *(int *)(lVar10 + 0x1a6c) = *(int *)(lVar10 + 0x19ac);
        *(undefined8 *)(lVar10 + 0x1a70) = *(undefined8 *)(lVar10 + 0x19b0);
        puVar14 = *(undefined8 **)(lVar10 + 0x19f0);
        puVar15 = *(undefined8 **)(lVar10 + 0x1ab0);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x1aa8);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x1a6c));
        *(undefined4 *)(lVar10 + 0x1a68) = *(undefined4 *)(lVar10 + 0x19a8);
        if (*(int *)(lVar10 + 0x1a6c) < 3) goto LAB_1096056ac;
LAB_1096056e0:
        puVar8 = (uint *)(lVar10 + 0x1a68);
        func_0x000109a84868(puVar8,lVar10 + 0x19a8);
      }
      *(undefined8 *)(lVar10 + 0x1a78) = *(undefined8 *)(lVar10 + 0x19b8);
      *(undefined8 *)(lVar10 + 0x1a88) = *(undefined8 *)(lVar10 + 0x19c8);
      *(undefined8 *)(lVar10 + 0x1a80) = *(undefined8 *)(lVar10 + 0x19c0);
      *(undefined8 *)(lVar10 + 0x1a98) = *(undefined8 *)(lVar10 + 0x19d8);
      *(undefined8 *)(lVar10 + 0x1a90) = *(undefined8 *)(lVar10 + 0x19d0);
      *(undefined8 *)(lVar10 + 0x1aa0) = *(undefined8 *)(lVar10 + 0x19e0);
    }
    else {
      lVar21 = 0;
      afStack_200[2] = 0.0;
      afStack_200[3] = 0.0;
      afStack_200[0] = 1.0;
      afStack_200[1] = 0.0;
      afStack_200[6] = 0.0;
      afStack_200[7] = 0.0;
      afStack_200[4] = 1.0;
      afStack_200[5] = 0.0;
      afStack_200[8] = 1.0;
      lVar20 = lVar10 + 0x1c48;
      do {
        lVar23 = 0;
        pfVar24 = afStack_200;
        do {
          lVar25 = 0;
          fVar29 = 0.0;
          pfVar26 = pfVar24;
          do {
            fVar29 = fVar29 + *pfVar26 * *(float *)(lVar20 + lVar25);
            lVar25 = lVar25 + 4;
            pfVar26 = pfVar26 + 3;
          } while (lVar25 != 0xc);
          afStack_224[lVar23 + lVar21 * 3] = fVar29;
          lVar23 = lVar23 + 1;
          pfVar24 = pfVar24 + 1;
        } while (lVar23 != 3);
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0xc;
      } while (lVar21 != 3);
      lVar21 = 0;
      afStack_250[2] = 0.0;
      afStack_250[3] = 0.0;
      afStack_250[0] = 1.0;
      afStack_250[1] = 0.0;
      afStack_250[6] = 0.0;
      afStack_250[7] = 0.0;
      afStack_250[4] = 1.0;
      afStack_250[5] = 0.0;
      afStack_250[8] = 1.0;
      lVar20 = lVar10 + 0x1c6c;
      do {
        lVar23 = 0;
        pfVar24 = afStack_250;
        do {
          lVar25 = 0;
          fVar29 = 0.0;
          pfVar26 = pfVar24;
          do {
            fVar29 = fVar29 + *pfVar26 * *(float *)(lVar20 + lVar25);
            lVar25 = lVar25 + 4;
            pfVar26 = pfVar26 + 3;
          } while (lVar25 != 0xc);
          afStack_274[lVar23 + lVar21 * 3] = fVar29;
          lVar23 = lVar23 + 1;
          pfVar24 = pfVar24 + 1;
        } while (lVar23 != 3);
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0xc;
      } while (lVar21 != 3);
      bVar5 = *(char *)(lVar10 + 0x135b) == '\0';
      lVar21 = 0x674;
      if (bVar5) {
        lVar21 = 0x66c;
      }
      lVar20 = 0x670;
      if (bVar5) {
        lVar20 = 0x668;
      }
      iVar12 = (int)*(float *)(lVar10 + lVar20);
      iVar27 = (int)*(float *)(lVar10 + lVar21);
      puVar11 = unaff_x25;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar10 = *(long *)(param_1 + 0x8a);
      uStack_3c0 = 1;
      puVar8 = (uint *)(lVar10 + 0x1764);
      FUN_1095ceb6c(puVar8,lVar10 + 0x1d58,lVar10 + 0x1948,lVar10 + 0x1a08,iVar27,iVar12,afStack_224
                    ,0.5 < (float)param_1[0x10]);
      __ZNSt3__16chrono12steady_clock3nowEv();
      unaff_x23 = puVar8;
      if (4 < iRam00000001132dfb08) {
        uStack_90 = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        puStack_188 = (undefined8 *)0x0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        puStack_1c8 = (uint *)0x0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        FUN_10926db08(&uStack_1d0);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
        func_0x000107c31940(&uStack_368,&UNK_10f5775fb);
        FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368,0x163);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar8 - (long)puVar11) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if (lStack_358 < 0) {
          __ZdlPv(uStack_368);
        }
        if (lStack_2e8 < 0) {
          __ZdlPv(uStack_2f8);
        }
        unaff_x23 = (uint *)&uStack_1d0;
        FUN_109671170();
        unaff_x24 = puVar8;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar10 = *(long *)(param_1 + 0x8a);
      uStack_3c0 = 0;
      puVar11 = (uint *)(lVar10 + 0x1764);
      FUN_1095ceb6c(puVar11,lVar10 + 0x1db8,lVar10 + 0x19a8,lVar10 + 0x1a68,iVar27,iVar12,
                    afStack_274,0.5 < (float)param_1[0x10]);
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar8 = puVar11;
      if (4 < iRam00000001132dfb08) {
        uStack_90 = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        puStack_188 = (undefined8 *)0x0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        puStack_1c8 = (uint *)0x0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        FUN_10926db08(&uStack_1d0);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
        auStack_c0[2] = 0;
        auStack_c0[3] = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        auStack_c0[6] = 0;
        auStack_c0[7] = 0;
        auStack_c0[4] = 0;
        auStack_c0[5] = 0;
        auStack_c0[10] = 0;
        auStack_c0[0xb] = 0;
        auStack_c0[8] = 0;
        auStack_c0[9] = 0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
        func_0x000107c31940(&uStack_368,&UNK_10f5775fb);
        FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368,0x16d);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar11 - (long)unaff_x23) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if (lStack_358 < 0) {
          __ZdlPv(uStack_368);
        }
        if (lStack_2e8 < 0) {
          __ZdlPv(uStack_2f8);
        }
        puVar8 = (uint *)&uStack_1d0;
        FUN_109671170(puVar8);
        unaff_x24 = puVar11;
      }
      if ((0.5 < (float)param_1[0x11]) && ((float)param_1[0x12] <= 0.5)) {
        FUN_1095e1cb0(&uStack_2f8,*(long *)(param_1 + 0x8a) + 0x30,iVar12,iVar27 + 0x10,
                      *(uint *)(*(long *)(param_1 + 0x8a) + 0x1b88) & 0xfff);
        uStack_308 = 0;
        puVar14 = &uStack_368;
        iStack_300 = iVar27;
        iStack_2fc = iVar12;
        FUN_109a852c8(puVar14,&uStack_2f8,&uStack_308);
        __ZNSt3__16chrono12steady_clock3nowEv();
        lVar10 = *(long *)(param_1 + 0x8a);
        uStack_3c0 = 1;
        puVar8 = (uint *)(lVar10 + 0x1764);
        FUN_1095ceb6c(puVar8,lVar10 + 0x1d58,lVar10 + 0x1b88,&uStack_368,iVar27,iVar12,afStack_224,0
                     );
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (4 < iRam00000001132dfb08) {
          uStack_90 = 0;
          auStack_c0[6] = 0;
          auStack_c0[7] = 0;
          auStack_c0[4] = 0;
          auStack_c0[5] = 0;
          auStack_c0[10] = 0;
          auStack_c0[0xb] = 0;
          auStack_c0[8] = 0;
          auStack_c0[9] = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          auStack_c0[2] = 0;
          auStack_c0[3] = 0;
          auStack_c0[0] = 0;
          auStack_c0[1] = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          puStack_188 = (undefined8 *)0x0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          puStack_1c8 = (uint *)0x0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          FUN_10926db08(&uStack_1d0);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
          auStack_c0[2] = 0;
          auStack_c0[3] = 0;
          auStack_c0[0] = 0;
          auStack_c0[1] = 0;
          auStack_c0[6] = 0;
          auStack_c0[7] = 0;
          auStack_c0[4] = 0;
          auStack_c0[5] = 0;
          auStack_c0[10] = 0;
          auStack_c0[0xb] = 0;
          auStack_c0[8] = 0;
          auStack_c0[9] = 0;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          func_0x000107c31940(auStack_380,&UNK_10f57788b);
          func_0x000107c31940(auStack_398,&UNK_10f5775fb);
          FUN_109671348(&uStack_1d0,5,auStack_380,auStack_398,0x182);
          FUN_1092b4db8();
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                    ((float)(int)((float)(((long)puVar8 - (long)puVar14) / 1000) / 10.0) / 100.0);
          FUN_1092b4db8();
          if (cStack_381 < '\0') {
            __ZdlPv(auStack_398[0]);
          }
          if (cStack_369 < '\0') {
            __ZdlPv(auStack_380[0]);
          }
          FUN_109671170(&uStack_1d0);
          unaff_x24 = puVar8;
        }
        puStack_1c8 = (uint *)(*(long *)(param_1 + 0x8a) + 0x1b88);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x2010000);
        uStack_1c0 = 0;
        unaff_x23 = (uint *)&uStack_368;
        FUN_109a479a0(unaff_x23,&uStack_1d0);
        __ZNSt3__16chrono12steady_clock3nowEv();
        lVar21 = *(long *)(param_1 + 0x8a);
        uStack_3c0 = 0;
        lVar10 = lVar21 + 0x1764;
        FUN_1095ceb6c(lVar10,lVar21 + 0x1db8,lVar21 + 0x1be8,&uStack_368,iVar27,iVar12,afStack_274,0
                     );
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (4 < iRam00000001132dfb08) {
          uStack_90 = 0;
          auStack_c0[6] = 0;
          auStack_c0[7] = 0;
          auStack_c0[4] = 0;
          auStack_c0[5] = 0;
          auStack_c0[10] = 0;
          auStack_c0[0xb] = 0;
          auStack_c0[8] = 0;
          auStack_c0[9] = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          auStack_c0[2] = 0;
          auStack_c0[3] = 0;
          auStack_c0[0] = 0;
          auStack_c0[1] = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          puStack_188 = (undefined8 *)0x0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          puStack_1c8 = (uint *)0x0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          FUN_10926db08(&uStack_1d0);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
          auStack_c0[2] = 0;
          auStack_c0[3] = 0;
          auStack_c0[0] = 0;
          auStack_c0[1] = 0;
          auStack_c0[6] = 0;
          auStack_c0[7] = 0;
          auStack_c0[4] = 0;
          auStack_c0[5] = 0;
          auStack_c0[10] = 0;
          auStack_c0[0xb] = 0;
          auStack_c0[8] = 0;
          auStack_c0[9] = 0;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          func_0x000107c31940(auStack_380,&UNK_10f57788b);
          func_0x000107c31940(auStack_398,&UNK_10f5775fb);
          FUN_109671348(&uStack_1d0,5,auStack_380,auStack_398,0x18e);
          FUN_1092b4db8();
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                    ((float)(int)((float)((lVar10 - (long)unaff_x23) / 1000) / 10.0) / 100.0);
          FUN_1092b4db8();
          if (cStack_381 < '\0') {
            __ZdlPv(auStack_398[0]);
          }
          if (cStack_369 < '\0') {
            __ZdlPv(auStack_380[0]);
          }
          FUN_109671170(&uStack_1d0);
        }
        puStack_1c8 = (uint *)(*(long *)(param_1 + 0x8a) + 0x1be8);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x2010000);
        uStack_1c0 = 0;
        FUN_109a479a0(&uStack_368,&uStack_1d0);
        if (lStack_330 != 0) {
          piVar22 = (int *)(lStack_330 + 0x14);
          do {
            iVar12 = *piVar22;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar5) {
              *piVar22 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(&uStack_368);
          }
        }
        lStack_330 = 0;
        uStack_350 = 0;
        lStack_358 = 0;
        uStack_340 = 0;
        uStack_348 = 0;
        if (0 < uStack_368._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)(lStack_328 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_368._4_4_);
        }
        if (puStack_320 != auStack_318 && puStack_320 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_320 + -8));
        }
        puVar8 = (uint *)&uStack_2f8;
        FUN_1095d3858(puVar8);
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_90 = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_10926db08(&uStack_1d0);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_368,&UNK_10f576492);
      FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368,0xb2);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar8 - (long)unaff_x25) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (lStack_358 < 0) {
        __ZdlPv(uStack_368);
      }
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
      puVar8 = (uint *)&uStack_1d0;
      FUN_109671170(puVar8);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    unaff_x21 = (uint *)(ulong)(byte)param_1[0x2a2];
    lVar10 = *(long *)(param_1 + 0x8a);
    lVar21 = lVar10 + (long)unaff_x21 * 0x60;
    FUN_1096076d8(param_1,lVar10 + 0x1a08,lVar10 + 0x1f70,lVar21 + 0x2038,lVar21 + 0x2278,
                  lVar10 + 0x29f8,lVar10 + 0x2ab8);
    lVar10 = *(long *)(param_1 + 0x8a);
    lVar21 = lVar10 + (long)unaff_x21 * 0x60;
    param_2 = (uint *)(lVar10 + 0x1a68);
    param_3 = (undefined8 *)(lVar10 + 0x1fd0);
    param_4 = (uint *)(lVar21 + 0x2158);
    param_5 = (undefined8 *)(lVar21 + 0x2398);
    param_6 = lVar10 + 0x2a58;
    param_7 = (uint *)(lVar10 + 0x2b18);
    puVar7 = param_1;
    FUN_1096076d8();
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar11 = puVar7;
    if (4 < iRam00000001132dfb08) {
      uStack_90 = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_10926db08(&uStack_1d0);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_368,&UNK_10f576492);
      param_4 = (uint *)&uStack_368;
      param_5 = (undefined8 *)0xb4;
      FUN_109671348(&uStack_1d0,5,&uStack_2f8);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar7 - (long)puVar8) / 1000) / 10.0) / 100.0);
      param_2 = (uint *)&DAT_10f46635e;
      param_3 = (undefined8 *)0x2;
      FUN_1092b4db8();
      if (lStack_358 < 0) {
        __ZdlPv(uStack_368);
      }
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
      puVar11 = (uint *)&uStack_1d0;
      FUN_109671170();
      unaff_x21 = puVar7;
    }
    puStack_3b0 = (uint *)(ulong)(byte)param_1[0x2a2];
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((int)param_1[0x28f] < 1) {
      uVar18 = 0;
    }
    else {
      uVar19 = 0;
      uVar18 = 0;
      do {
        if ((*(ulong *)(*(long *)(param_1 + 0x290) + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0
           ) {
          uVar18 = (uint)uVar19;
        }
        uVar19 = uVar19 + 1;
      } while (param_1[0x28f] != uVar19);
    }
    fVar29 = (float)param_1[10];
    puStack_3b8 = puVar11;
    if ((param_1[0x2a2] & 1) == 0) {
      uVar13 = 1;
    }
    else {
      if (0 < (int)uVar18) {
        uVar18 = 1;
      }
      unaff_x21 = (uint *)(ulong)uVar18;
      lVar10 = *(long *)(param_1 + 0x8a);
      if (*(long *)(lVar10 + 0x1a40) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1a40) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x2070) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x2070) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar11 = (uint *)(lVar10 + 0x2038);
          func_0x000109a848d4();
        }
      }
      *(undefined8 *)(lVar10 + 0x2070) = 0;
      *(undefined8 *)(lVar10 + 0x2050) = 0;
      *(undefined8 *)(lVar10 + 0x2048) = 0;
      *(undefined8 *)(lVar10 + 0x2060) = 0;
      *(undefined8 *)(lVar10 + 0x2058) = 0;
      if (*(int *)(lVar10 + 0x203c) < 1) {
        *(undefined4 *)(lVar10 + 0x2038) = *(undefined4 *)(lVar10 + 0x1a08);
LAB_109605b30:
        if (2 < *(int *)(lVar10 + 0x1a0c)) goto LAB_109605b64;
        *(int *)(lVar10 + 0x203c) = *(int *)(lVar10 + 0x1a0c);
        *(undefined8 *)(lVar10 + 0x2040) = *(undefined8 *)(lVar10 + 0x1a10);
        puVar14 = *(undefined8 **)(lVar10 + 0x1a50);
        puVar15 = *(undefined8 **)(lVar10 + 0x2080);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x2078);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x203c));
        *(undefined4 *)(lVar10 + 0x2038) = *(undefined4 *)(lVar10 + 0x1a08);
        if (*(int *)(lVar10 + 0x203c) < 3) goto LAB_109605b30;
LAB_109605b64:
        puVar11 = (uint *)(lVar10 + 0x2038);
        param_2 = (uint *)(lVar10 + 0x1a08);
        func_0x000109a84868();
      }
      *(undefined8 *)(lVar10 + 0x2048) = *(undefined8 *)(lVar10 + 0x1a18);
      *(undefined8 *)(lVar10 + 0x2058) = *(undefined8 *)(lVar10 + 0x1a28);
      *(undefined8 *)(lVar10 + 0x2050) = *(undefined8 *)(lVar10 + 0x1a20);
      *(undefined8 *)(lVar10 + 0x2068) = *(undefined8 *)(lVar10 + 0x1a38);
      *(undefined8 *)(lVar10 + 0x2060) = *(undefined8 *)(lVar10 + 0x1a30);
      *(undefined8 *)(lVar10 + 0x2070) = *(undefined8 *)(lVar10 + 0x1a40);
      lVar10 = *(long *)(param_1 + 0x8a);
      if (*(long *)(lVar10 + 0x1aa0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1aa0) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x2190) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x2190) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar11 = (uint *)(lVar10 + 0x2158);
          func_0x000109a848d4();
        }
      }
      *(undefined8 *)(lVar10 + 0x2190) = 0;
      *(undefined8 *)(lVar10 + 0x2170) = 0;
      *(undefined8 *)(lVar10 + 0x2168) = 0;
      *(undefined8 *)(lVar10 + 0x2180) = 0;
      *(undefined8 *)(lVar10 + 0x2178) = 0;
      if (*(int *)(lVar10 + 0x215c) < 1) {
        *(undefined4 *)(lVar10 + 0x2158) = *(undefined4 *)(lVar10 + 0x1a68);
LAB_109605c38:
        if (2 < *(int *)(lVar10 + 0x1a6c)) goto LAB_109605c6c;
        *(int *)(lVar10 + 0x215c) = *(int *)(lVar10 + 0x1a6c);
        *(undefined8 *)(lVar10 + 0x2160) = *(undefined8 *)(lVar10 + 0x1a70);
        puVar14 = *(undefined8 **)(lVar10 + 0x1ab0);
        puVar15 = *(undefined8 **)(lVar10 + 0x21a0);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x2198);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x215c));
        *(undefined4 *)(lVar10 + 0x2158) = *(undefined4 *)(lVar10 + 0x1a68);
        if (*(int *)(lVar10 + 0x215c) < 3) goto LAB_109605c38;
LAB_109605c6c:
        puVar11 = (uint *)(lVar10 + 0x2158);
        param_2 = (uint *)(lVar10 + 0x1a68);
        func_0x000109a84868();
      }
      *(undefined8 *)(lVar10 + 0x2168) = *(undefined8 *)(lVar10 + 0x1a78);
      *(undefined8 *)(lVar10 + 0x2178) = *(undefined8 *)(lVar10 + 0x1a88);
      *(undefined8 *)(lVar10 + 0x2170) = *(undefined8 *)(lVar10 + 0x1a80);
      *(undefined8 *)(lVar10 + 0x2188) = *(undefined8 *)(lVar10 + 0x1a98);
      *(undefined8 *)(lVar10 + 0x2180) = *(undefined8 *)(lVar10 + 0x1a90);
      *(undefined8 *)(lVar10 + 0x2190) = *(undefined8 *)(lVar10 + 0x1aa0);
      lVar10 = *(long *)(param_1 + 0x8a);
      if (*(long *)(lVar10 + 0x1a40) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1a40) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x22b0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x22b0) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar11 = (uint *)(lVar10 + 0x2278);
          func_0x000109a848d4();
        }
      }
      *(undefined8 *)(lVar10 + 0x22b0) = 0;
      *(undefined8 *)(lVar10 + 0x2290) = 0;
      *(undefined8 *)(lVar10 + 0x2288) = 0;
      *(undefined8 *)(lVar10 + 0x22a0) = 0;
      *(undefined8 *)(lVar10 + 0x2298) = 0;
      if (*(int *)(lVar10 + 0x227c) < 1) {
        *(undefined4 *)(lVar10 + 0x2278) = *(undefined4 *)(lVar10 + 0x1a08);
LAB_109605d40:
        if (2 < *(int *)(lVar10 + 0x1a0c)) goto LAB_109605d74;
        *(int *)(lVar10 + 0x227c) = *(int *)(lVar10 + 0x1a0c);
        *(undefined8 *)(lVar10 + 0x2280) = *(undefined8 *)(lVar10 + 0x1a10);
        puVar14 = *(undefined8 **)(lVar10 + 0x1a50);
        puVar15 = *(undefined8 **)(lVar10 + 0x22c0);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x22b8);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x227c));
        *(undefined4 *)(lVar10 + 0x2278) = *(undefined4 *)(lVar10 + 0x1a08);
        if (*(int *)(lVar10 + 0x227c) < 3) goto LAB_109605d40;
LAB_109605d74:
        puVar11 = (uint *)(lVar10 + 0x2278);
        param_2 = (uint *)(lVar10 + 0x1a08);
        func_0x000109a84868();
      }
      *(undefined8 *)(lVar10 + 0x2288) = *(undefined8 *)(lVar10 + 0x1a18);
      *(undefined8 *)(lVar10 + 0x2298) = *(undefined8 *)(lVar10 + 0x1a28);
      *(undefined8 *)(lVar10 + 0x2290) = *(undefined8 *)(lVar10 + 0x1a20);
      *(undefined8 *)(lVar10 + 0x22a8) = *(undefined8 *)(lVar10 + 0x1a38);
      *(undefined8 *)(lVar10 + 0x22a0) = *(undefined8 *)(lVar10 + 0x1a30);
      *(undefined8 *)(lVar10 + 0x22b0) = *(undefined8 *)(lVar10 + 0x1a40);
      lVar10 = *(long *)(param_1 + 0x8a);
      unaff_x23 = (uint *)0x2398;
      if (*(long *)(lVar10 + 0x1aa0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x1aa0) + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = *piVar22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(lVar10 + 0x23d0) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x23d0) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          puVar11 = (uint *)(lVar10 + 0x2398);
          func_0x000109a848d4();
        }
      }
      *(undefined8 *)(lVar10 + 0x23d0) = 0;
      *(undefined8 *)(lVar10 + 0x23b0) = 0;
      *(undefined8 *)(lVar10 + 0x23a8) = 0;
      *(undefined8 *)(lVar10 + 0x23c0) = 0;
      *(undefined8 *)(lVar10 + 0x23b8) = 0;
      if (*(int *)(lVar10 + 0x239c) < 1) {
        *(undefined4 *)(lVar10 + 0x2398) = *(undefined4 *)(lVar10 + 0x1a68);
LAB_109605e48:
        if (2 < *(int *)(lVar10 + 0x1a6c)) goto LAB_109605e7c;
        *(int *)(lVar10 + 0x239c) = *(int *)(lVar10 + 0x1a6c);
        *(undefined8 *)(lVar10 + 0x23a0) = *(undefined8 *)(lVar10 + 0x1a70);
        puVar14 = *(undefined8 **)(lVar10 + 0x1ab0);
        puVar15 = *(undefined8 **)(lVar10 + 0x23e0);
        *puVar15 = *puVar14;
        puVar15[1] = puVar14[1];
      }
      else {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x23d8);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x239c));
        *(undefined4 *)(lVar10 + 0x2398) = *(undefined4 *)(lVar10 + 0x1a68);
        if (*(int *)(lVar10 + 0x239c) < 3) goto LAB_109605e48;
LAB_109605e7c:
        puVar11 = (uint *)(lVar10 + 0x2398);
        param_2 = (uint *)(lVar10 + 0x1a68);
        func_0x000109a84868();
      }
      uVar18 = uVar18 + 1;
      *(undefined8 *)(lVar10 + 0x23a8) = *(undefined8 *)(lVar10 + 0x1a78);
      *(undefined8 *)(lVar10 + 0x23b8) = *(undefined8 *)(lVar10 + 0x1a88);
      *(undefined8 *)(lVar10 + 0x23b0) = *(undefined8 *)(lVar10 + 0x1a80);
      *(undefined8 *)(lVar10 + 0x23c8) = *(undefined8 *)(lVar10 + 0x1a98);
      *(undefined8 *)(lVar10 + 0x23c0) = *(undefined8 *)(lVar10 + 0x1a90);
      *(undefined8 *)(lVar10 + 0x23d0) = *(undefined8 *)(lVar10 + 0x1aa0);
      uVar13 = 2;
    }
    if ((int)uVar13 <= (int)uVar18) {
      unaff_x24 = (uint *)((ulong)&uStack_1d0 | 4);
      puStack_3a0 = &uStack_180;
      puStack_3a8 = (uint *)(ulong)(uVar18 + 1);
      unaff_x27 = (uint *)0x60;
      unaff_x25 = (uint *)0x2398;
      unaff_x28 = (uint *)0x1010000;
      unaff_x26 = (uint *)0x2010000;
      unaff_x23 = (uint *)(ulong)uVar13;
      do {
        lVar21 = *(long *)(param_1 + 0x8a);
        lVar20 = lVar21 + (long)unaff_x23 * 0x60;
        lVar10 = lVar21 + (long)unaff_x23 * 8;
        iVar12 = *(int *)(lVar10 + 0x1ef8);
        iVar27 = *(int *)(lVar10 + 0x1efc);
        if ((((2 < *(int *)(lVar20 + 0x203c)) || (*(int *)(lVar20 + 0x2040) != iVar27)) ||
            (*(int *)(lVar20 + 0x2044) != iVar12)) ||
           (((*(uint *)(lVar20 + 0x2038) & 0xfff) != 0x10 || (*(long *)(lVar20 + 0x2048) == 0)))) {
          uStack_1d0 = CONCAT44(iVar12,iVar27);
          FUN_109a83fd0((uint *)(lVar20 + 0x2038),2,&uStack_1d0,0x10);
          lVar21 = *(long *)(param_1 + 0x8a);
          lVar10 = lVar21 + (long)unaff_x23 * 8;
          iVar12 = *(int *)(lVar10 + 0x1ef8);
          iVar27 = *(int *)(lVar10 + 0x1efc);
        }
        lVar10 = lVar21 + (long)unaff_x23 * 0x60;
        if (((2 < *(int *)(lVar10 + 0x215c)) || (*(int *)(lVar10 + 0x2160) != iVar27)) ||
           ((*(int *)(lVar10 + 0x2164) != iVar12 ||
            (((*(uint *)(lVar10 + 0x2158) & 0xfff) != 0x10 || (*(long *)(lVar10 + 0x2168) == 0))))))
        {
          uStack_1d0 = CONCAT44(iVar12,iVar27);
          FUN_109a83fd0((uint *)(lVar10 + 0x2158),2,&uStack_1d0,0x10);
          lVar21 = *(long *)(param_1 + 0x8a);
        }
        FUN_109a852c8(&uStack_1d0,lVar21 + (long)unaff_x23 * 0x60 + 0x2038,
                      lVar21 + (long)unaff_x23 * 0x10 + 8000);
        lVar10 = *(long *)(param_1 + 0x8a) + (long)unaff_x23 * 0x60;
        if (*(long *)(lVar10 + 0x22b0) != 0) {
          piVar22 = (int *)(*(long *)(lVar10 + 0x22b0) + 0x14);
          do {
            iVar12 = *piVar22;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar5) {
              *piVar22 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4((undefined8 *)(lVar10 + 0x2278));
          }
        }
        *(undefined8 *)(lVar10 + 0x22b0) = 0;
        *(undefined8 *)(lVar10 + 0x2290) = 0;
        *(undefined8 *)(lVar10 + 0x2288) = 0;
        *(undefined8 *)(lVar10 + 0x22a0) = 0;
        *(undefined8 *)(lVar10 + 0x2298) = 0;
        if (0 < *(int *)(lVar10 + 0x227c)) {
          lVar21 = 0;
          lVar20 = *(long *)(lVar10 + 0x22b8);
          do {
            *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < *(int *)(lVar10 + 0x227c));
        }
        *(uint **)(lVar10 + 0x2280) = puStack_1c8;
        *(undefined8 *)(lVar10 + 0x2278) = uStack_1d0;
        *(undefined8 *)(lVar10 + 0x2290) = uStack_1b8;
        *(undefined8 *)(lVar10 + 0x2288) = uStack_1c0;
        *(undefined8 *)(lVar10 + 0x22a0) = uStack_1a8;
        *(undefined8 *)(lVar10 + 0x2298) = uStack_1b0;
        *(undefined8 *)(lVar10 + 0x22b0) = uStack_198;
        *(undefined8 *)(lVar10 + 0x22a8) = uStack_1a0;
        puVar15 = *(undefined8 **)(lVar10 + 0x22c0);
        puVar14 = (undefined8 *)(lVar10 + 0x22c8);
        iVar12 = uStack_1d0._4_4_;
        if (puVar15 != puVar14) {
          if (puVar15 != (undefined8 *)0x0) {
            _free(puVar15[-1]);
            iVar12 = uStack_1d0._4_4_;
          }
          *(long *)(lVar10 + 0x22b8) = lVar10 + 0x2280;
          *(undefined8 **)(lVar10 + 0x22c0) = puVar14;
          puVar15 = puVar14;
        }
        if (iVar12 < 3) {
          *puVar15 = *puStack_188;
          puVar15[1] = puStack_188[1];
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x42ff0000);
          unaff_x24[2] = 0;
          unaff_x24[3] = 0;
          unaff_x24[0] = 0;
          unaff_x24[1] = 0;
          unaff_x24[6] = 0;
          unaff_x24[7] = 0;
          unaff_x24[4] = 0;
          unaff_x24[5] = 0;
          unaff_x24[10] = 0;
          unaff_x24[0xb] = 0;
          unaff_x24[8] = 0;
          unaff_x24[9] = 0;
          unaff_x24[0xd] = 0;
          unaff_x24[0xe] = 0;
          unaff_x24[0xb] = 0;
          unaff_x24[0xc] = 0;
          if (puStack_188 != puStack_3a0) {
            _free(puStack_188[-1]);
          }
        }
        else {
          *(undefined8 **)(lVar10 + 0x22c0) = puStack_188;
          *(undefined8 *)(lVar10 + 0x22b8) = uStack_190;
        }
        FUN_109a852c8(&uStack_1d0,*(long *)(param_1 + 0x8a) + (long)unaff_x23 * 0x60 + 0x2158,
                      *(long *)(param_1 + 0x8a) + (long)unaff_x23 * 0x10 + 8000);
        lVar10 = *(long *)(param_1 + 0x8a) + (long)unaff_x23 * 0x60;
        if (*(long *)(lVar10 + 0x23d0) != 0) {
          piVar22 = (int *)(*(long *)(lVar10 + 0x23d0) + 0x14);
          do {
            iVar12 = *piVar22;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar5) {
              *piVar22 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4((undefined8 *)(lVar10 + 0x2398));
          }
        }
        *(undefined8 *)(lVar10 + 0x23d0) = 0;
        *(undefined8 *)(lVar10 + 0x23b0) = 0;
        *(undefined8 *)(lVar10 + 0x23a8) = 0;
        *(undefined8 *)(lVar10 + 0x23c0) = 0;
        *(undefined8 *)(lVar10 + 0x23b8) = 0;
        if (0 < *(int *)(lVar10 + 0x239c)) {
          lVar21 = 0;
          lVar20 = *(long *)(lVar10 + 0x23d8);
          do {
            *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < *(int *)(lVar10 + 0x239c));
        }
        *(uint **)(lVar10 + 0x23a0) = puStack_1c8;
        *(undefined8 *)(lVar10 + 0x2398) = uStack_1d0;
        *(undefined8 *)(lVar10 + 0x23b0) = uStack_1b8;
        *(undefined8 *)(lVar10 + 0x23a8) = uStack_1c0;
        *(undefined8 *)(lVar10 + 0x23c0) = uStack_1a8;
        *(undefined8 *)(lVar10 + 0x23b8) = uStack_1b0;
        *(undefined8 *)(lVar10 + 0x23d0) = uStack_198;
        *(undefined8 *)(lVar10 + 0x23c8) = uStack_1a0;
        puVar15 = *(undefined8 **)(lVar10 + 0x23e0);
        puVar14 = (undefined8 *)(lVar10 + 0x23e8);
        iVar12 = uStack_1d0._4_4_;
        if (puVar15 != puVar14) {
          if (puVar15 != (undefined8 *)0x0) {
            _free(puVar15[-1]);
            iVar12 = uStack_1d0._4_4_;
          }
          *(long *)(lVar10 + 0x23d8) = lVar10 + 0x23a0;
          *(undefined8 **)(lVar10 + 0x23e0) = puVar14;
          puVar15 = puVar14;
        }
        if (iVar12 < 3) {
          *puVar15 = *puStack_188;
          puVar15[1] = puStack_188[1];
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x42ff0000);
          unaff_x24[2] = 0;
          unaff_x24[3] = 0;
          unaff_x24[0] = 0;
          unaff_x24[1] = 0;
          unaff_x24[6] = 0;
          unaff_x24[7] = 0;
          unaff_x24[4] = 0;
          unaff_x24[5] = 0;
          unaff_x24[10] = 0;
          unaff_x24[0xb] = 0;
          unaff_x24[8] = 0;
          unaff_x24[9] = 0;
          unaff_x24[0xd] = 0;
          unaff_x24[0xe] = 0;
          unaff_x24[0xb] = 0;
          unaff_x24[0xc] = 0;
          if (puStack_188 != puStack_3a0) {
            _free(puStack_188[-1]);
          }
        }
        else {
          *(undefined8 **)(lVar10 + 0x23e0) = puStack_188;
          *(undefined8 *)(lVar10 + 0x23d8) = uStack_190;
        }
        lVar10 = (long)unaff_x23 + -1;
        unaff_x21 = (uint *)((long)unaff_x23 * 0x60);
        if (fVar29 == 0.0) {
          lVar21 = *(long *)(param_1 + 0x8a) + 0x2278;
          puStack_1c8 = (uint *)(lVar21 + lVar10 * 0x60);
          uStack_1c0 = 0;
          uStack_1d0._0_4_ = 0x1010000;
          puStack_2f0 = (uint *)(lVar21 + (long)unaff_x23 * 0x60);
          uStack_2f8._0_4_ = 0x2010000;
          lStack_2e8 = 0;
          uStack_368 = NEON_rev64(**(undefined8 **)
                                    ((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x22b8),4);
          FUN_109b3a7f4(&uStack_1d0,&uStack_2f8,&uStack_368,4);
          lVar21 = *(long *)(param_1 + 0x8a) + 0x2398;
          puStack_1c8 = (uint *)(lVar21 + lVar10 * 0x60);
          uStack_1c0 = 0;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x1010000);
          puStack_2f0 = (uint *)(lVar21 + (long)unaff_x23 * 0x60);
          uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x2010000);
          lStack_2e8 = 0;
          uStack_368 = NEON_rev64(**(undefined8 **)
                                    ((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x23d8),4);
          puVar11 = (uint *)&uStack_1d0;
          param_2 = (uint *)&uStack_2f8;
          param_3 = &uStack_368;
          param_4 = (uint *)0x4;
          FUN_109b3a7f4();
        }
        else {
          lVar21 = *(long *)(param_1 + 0x8a) + 0x2278;
          puStack_1c8 = (uint *)(lVar21 + lVar10 * 0x60);
          uStack_1c0 = 0;
          uStack_1d0._0_4_ = 0x1010000;
          puStack_2f0 = (uint *)(lVar21 + (long)unaff_x23 * 0x60);
          uStack_2f8._0_4_ = 0x2010000;
          lStack_2e8 = 0;
          uStack_368 = NEON_rev64(**(undefined8 **)
                                    ((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x22b8),4);
          FUN_109b0f718(0,0,&uStack_1d0,&uStack_2f8,&uStack_368,3);
          lVar21 = *(long *)(param_1 + 0x8a) + 0x2398;
          puStack_1c8 = (uint *)(lVar21 + lVar10 * 0x60);
          uStack_1c0 = 0;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x1010000);
          puStack_2f0 = (uint *)(lVar21 + (long)unaff_x23 * 0x60);
          uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x2010000);
          lStack_2e8 = 0;
          uStack_368 = NEON_rev64(**(undefined8 **)
                                    ((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x23d8),4);
          puVar11 = (uint *)&uStack_1d0;
          param_2 = (uint *)&uStack_2f8;
          param_3 = &uStack_368;
          param_4 = (uint *)0x3;
          FUN_109b0f718(0,0);
        }
        unaff_x23 = (uint *)((long)unaff_x23 + 1);
      } while (unaff_x23 != puStack_3a8);
    }
    if (1 < (int)param_1[0x28f]) {
      uVar19 = 1;
      unaff_x23 = (uint *)0x60;
      unaff_x24 = (uint *)0x2278;
      unaff_x25 = (uint *)0x2398;
      do {
        if ((*(ulong *)(*(long *)(param_1 + 0x290) + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) == 0
           ) {
          lVar10 = *(long *)(param_1 + 0x8a) + uVar19 * 0x60;
          puVar8 = (uint *)(lVar10 + 0x2278);
          if (*(long *)(lVar10 + 0x22b0) != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0x22b0) + 0x14);
            do {
              iVar12 = *piVar22;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar5) {
                *piVar22 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4();
              puVar11 = puVar8;
            }
          }
          *(undefined8 *)(lVar10 + 0x22b0) = 0;
          *(undefined8 *)(lVar10 + 0x2290) = 0;
          *(undefined8 *)(lVar10 + 0x2288) = 0;
          *(undefined8 *)(lVar10 + 0x22a0) = 0;
          *(undefined8 *)(lVar10 + 0x2298) = 0;
          if (0 < *(int *)(lVar10 + 0x227c)) {
            lVar21 = 0;
            lVar20 = *(long *)(lVar10 + 0x22b8);
            do {
              *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < *(int *)(lVar10 + 0x227c));
          }
          lVar10 = *(long *)(param_1 + 0x8a) + uVar19 * 0x60;
          unaff_x21 = (uint *)(lVar10 + 0x2398);
          if (*(long *)(lVar10 + 0x23d0) != 0) {
            piVar22 = (int *)(*(long *)(lVar10 + 0x23d0) + 0x14);
            do {
              iVar12 = *piVar22;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar5) {
                *piVar22 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              puVar11 = unaff_x21;
              func_0x000109a848d4();
            }
          }
          *(undefined8 *)(lVar10 + 0x23d0) = 0;
          *(undefined8 *)(lVar10 + 0x23b0) = 0;
          *(undefined8 *)(lVar10 + 0x23a8) = 0;
          *(undefined8 *)(lVar10 + 0x23c0) = 0;
          *(undefined8 *)(lVar10 + 0x23b8) = 0;
          if (0 < *(int *)(lVar10 + 0x239c)) {
            lVar21 = 0;
            lVar20 = *(long *)(lVar10 + 0x23d8);
            do {
              *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < *(int *)(lVar10 + 0x239c));
          }
        }
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)param_1[0x28f]);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar8 = puVar11;
    if (4 < iRam00000001132dfb08) {
      uStack_90 = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_10926db08(&uStack_1d0);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
      auStack_c0[2] = 0;
      auStack_c0[3] = 0;
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[6] = 0;
      auStack_c0[7] = 0;
      auStack_c0[4] = 0;
      auStack_c0[5] = 0;
      auStack_c0[10] = 0;
      auStack_c0[0xb] = 0;
      auStack_c0[8] = 0;
      auStack_c0[9] = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_368,&UNK_10f576492);
      param_4 = (uint *)&uStack_368;
      param_5 = (undefined8 *)0xbb;
      FUN_109671348(&uStack_1d0,5,&uStack_2f8);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar11 - (long)puStack_3b8) / 1000) / 10.0) / 100.0);
      param_2 = (uint *)&DAT_10f46635e;
      param_3 = (undefined8 *)0x2;
      FUN_1092b4db8();
      if (lStack_358 < 0) {
        __ZdlPv(uStack_368);
      }
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
      puVar8 = (uint *)&uStack_1d0;
      FUN_109671170(puVar8);
      unaff_x21 = puVar11;
    }
    puVar11 = *(uint **)(param_1 + 0x292);
    unaff_x22 = puStack_3b0;
    if (puStack_3b0 < puVar11) {
      unaff_x23 = auStack_c0;
      unaff_x21 = (uint *)((long)puStack_3b0 << 3);
      unaff_x26 = (uint *)((long)puStack_3b0 << 5 | (long)puStack_3b0 << 6 | 0x2398);
      unaff_x24 = (uint *)0x3;
      do {
        if ((*(ulong *)(*(long *)(param_1 + 0x29c) + ((ulong)unaff_x22 >> 6) * 8) >>
             ((ulong)unaff_x22 & 0x3f) & 1) != 0) {
          if (*(long *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x3ff0) == 0) {
            uVar28 = 0x5d0;
            __Znwm(0x5d0);
            FUN_1095de838();
            FUN_1095d276c((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x3ff0,uVar28);
            uVar28 = 0x5d0;
            __Znwm(0x5d0);
            FUN_1095de838();
            puVar8 = (uint *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x4008);
            FUN_1095d276c(puVar8,uVar28);
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          lVar10 = *(long *)(param_1 + 0x8a);
          unaff_x27 = *(uint **)((long)unaff_x21 + lVar10 + 0x3ff0);
          puStack_1c8 = (uint *)((long)unaff_x26 + lVar10 + -0x120);
          uStack_1c0 = 0;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x1010000);
          puVar11 = puVar8;
          FUN_109a91d90();
          FUN_1095deb54(unaff_x27,lVar10 + 0x30,&uStack_1d0,puVar11);
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_5 = (undefined8 *)0xcb;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)unaff_x27 - (long)puVar8) / 1000) / 10.0) / 100.0
                      );
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            unaff_x27 = (uint *)&uStack_1d0;
            FUN_109671170();
          }
          lVar10 = *(long *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x3ff0);
          *(undefined8 *)(lVar10 + 0x24) = 0x3e80000042480000;
          *(undefined4 *)(lVar10 + 0x2c) = 3;
          __ZNSt3__16chrono12steady_clock3nowEv();
          unaff_x25 = *(uint **)(param_1 + 0x8a);
          unaff_x28 = *(uint **)((long)unaff_x25 + (long)unaff_x21 + 0x4008);
          puStack_1c8 = (uint *)((long)unaff_x25 + (long)unaff_x26);
          uStack_1c0 = 0;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x1010000);
          param_4 = unaff_x27;
          FUN_109a91d90();
          param_2 = unaff_x25 + 0xc;
          param_3 = &uStack_1d0;
          puVar11 = unaff_x28;
          FUN_1095deb54();
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar8 = puVar11;
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_4 = (uint *)&uStack_368;
            param_5 = (undefined8 *)0xd1;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)puVar11 - (long)unaff_x27) / 1000) / 10.0) /
                       100.0);
            param_2 = (uint *)&DAT_10f46635e;
            param_3 = (undefined8 *)0x2;
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            puVar8 = (uint *)&uStack_1d0;
            FUN_109671170();
            unaff_x28 = puVar11;
          }
          lVar10 = *(long *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + 0x4008);
          *(undefined8 *)(lVar10 + 0x24) = 0x3e80000042480000;
          *(undefined4 *)(lVar10 + 0x2c) = 3;
          puVar11 = *(uint **)(param_1 + 0x292);
        }
        unaff_x22 = (uint *)((long)unaff_x22 + 1);
        unaff_x21 = unaff_x21 + 2;
        unaff_x26 = unaff_x26 + 0x18;
      } while (unaff_x22 < puVar11);
    }
    if (puStack_3b0 < puVar11) {
      unaff_x27 = auStack_c0;
      unaff_x21 = (uint *)((long)puStack_3b0 << 5 | (long)puStack_3b0 << 6 | 0x2818);
      unaff_x23 = (uint *)&UNK_10f57628f;
      unaff_x28 = (uint *)0x42c80000;
      unaff_x24 = (uint *)&DAT_10f46635e;
      puVar11 = puStack_3b0;
      do {
        if ((*(ulong *)(*(long *)(param_1 + 0x296) + ((ulong)puVar11 >> 6) * 8) >>
             ((ulong)puVar11 & 0x3f) & 1) != 0) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar6 = (uint *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x5a0);
          FUN_1095d2ed8(puVar6,(long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x360,0,0);
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar7 = puVar6;
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_5 = (undefined8 *)0xdc;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)puVar6 - (long)puVar8) / 1000) / 10.0) / 100.0);
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            puVar7 = (uint *)&uStack_1d0;
            FUN_109671170(puVar7);
            unaff_x26 = puVar6;
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar6 = (uint *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x480);
          FUN_1095d2ed8(puVar6,(long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x240,0,0);
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar8 = puVar6;
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_5 = (undefined8 *)0xe1;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)puVar6 - (long)puVar7) / 1000) / 10.0) / 100.0);
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            puVar8 = (uint *)&uStack_1d0;
            FUN_109671170(puVar8);
            unaff_x26 = puVar6;
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar7 = (uint *)((long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x5a0);
          FUN_1095d2ed8(puVar7,(long)unaff_x21 + *(long *)(param_1 + 0x8a) + -0x120,0,1);
          __ZNSt3__16chrono12steady_clock3nowEv();
          unaff_x25 = puVar7;
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_5 = (undefined8 *)0xe7;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8,&uStack_368);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)puVar7 - (long)puVar8) / 1000) / 10.0) / 100.0);
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            unaff_x25 = (uint *)&uStack_1d0;
            FUN_109671170();
            unaff_x26 = puVar7;
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
          param_2 = (uint *)(*(long *)(param_1 + 0x8a) + (long)unaff_x21);
          puVar7 = param_2 + -0x120;
          param_3 = (undefined8 *)0x0;
          param_4 = (uint *)0x1;
          FUN_1095d2ed8();
          __ZNSt3__16chrono12steady_clock3nowEv();
          puVar8 = puVar7;
          unaff_x22 = puVar11;
          if (4 < iRam00000001132dfb08) {
            uStack_90 = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            puStack_188 = (undefined8 *)0x0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            puStack_1c8 = (uint *)0x0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            FUN_10926db08(&uStack_1d0);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
            auStack_c0[2] = 0;
            auStack_c0[3] = 0;
            auStack_c0[0] = 0;
            auStack_c0[1] = 0;
            auStack_c0[6] = 0;
            auStack_c0[7] = 0;
            auStack_c0[4] = 0;
            auStack_c0[5] = 0;
            auStack_c0[10] = 0;
            auStack_c0[0xb] = 0;
            auStack_c0[8] = 0;
            auStack_c0[9] = 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_2f8,&UNK_10f57788b);
            func_0x000107c31940(&uStack_368,&UNK_10f576492);
            param_4 = (uint *)&uStack_368;
            param_5 = (undefined8 *)0xec;
            FUN_109671348(&uStack_1d0,5,&uStack_2f8);
            FUN_1092b4db8();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                      ((float)(int)((float)(((long)puVar7 - (long)unaff_x25) / 1000) / 10.0) / 100.0
                      );
            param_3 = (undefined8 *)0x2;
            param_2 = unaff_x24;
            FUN_1092b4db8();
            if (lStack_358 < 0) {
              __ZdlPv(uStack_368);
            }
            if (lStack_2e8 < 0) {
              __ZdlPv(uStack_2f8);
            }
            puVar8 = (uint *)&uStack_1d0;
            FUN_109671170();
            unaff_x26 = puVar7;
          }
        }
        puVar11 = (uint *)((long)puVar11 + 1);
        unaff_x21 = unaff_x21 + 0x18;
      } while (puVar11 < *(uint **)(param_1 + 0x292));
    }
    puVar8 = *(uint **)(param_1 + 0x8a);
    if ((*(byte *)((long)param_1 + 0xa8a) & 1) != 0) {
      uVar18 = puVar8[0xa81] + 0x20;
      if ((((2 < (int)puVar8[0xa4f]) || (puVar8[0xa50] != puVar8[0xa80] + 0x20)) ||
          (puVar8[0xa51] != uVar18)) ||
         (((puVar8[0xa4e] & 0xfff) != 0x10 || (*(long *)(puVar8 + 0xa52) == 0)))) {
        uStack_1d0 = CONCAT44(uVar18,puVar8[0xa80] + 0x20);
        FUN_109a83fd0(puVar8 + 0xa4e,2,&uStack_1d0,0x10);
        puVar8 = *(uint **)(param_1 + 0x8a);
        uVar18 = puVar8[0xa81] + 0x20;
      }
      if (((2 < (int)puVar8[0xa67]) || (puVar8[0xa68] != puVar8[0xa98] + 0x20)) ||
         ((puVar8[0xa69] != uVar18 ||
          (((puVar8[0xa66] & 0xfff) != 0x10 || (*(long *)(puVar8 + 0xa6a) == 0)))))) {
        uStack_1d0 = CONCAT44(uVar18,puVar8[0xa98] + 0x20);
        FUN_109a83fd0(puVar8 + 0xa66,2,&uStack_1d0,0x10);
        puVar8 = *(uint **)(param_1 + 0x8a);
      }
      puStack_2f0 = puVar8 + 0xa7e;
      lStack_2e8 = 0;
      uStack_2f8._0_4_ = 0x1010000;
      puStack_360 = puVar8 + 0xa4e;
      uStack_368._0_4_ = 0x2010000;
      lStack_358 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      FUN_109a4a0a4(&uStack_2f8,&uStack_368,0x10,0x10,0x10,0x10,1,&uStack_1d0);
      puStack_2f0 = (uint *)(*(long *)(param_1 + 0x8a) + 0x2a58);
      lStack_2e8 = 0;
      uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x1010000);
      puStack_360 = (uint *)(*(long *)(param_1 + 0x8a) + 0x2998);
      uStack_368 = CONCAT44(uStack_368._4_4_,0x2010000);
      lStack_358 = 0;
      puStack_1c8 = (uint *)0x0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      param_4 = (uint *)0x10;
      param_5 = (undefined8 *)0x10;
      param_6 = 0x10;
      param_7 = (uint *)0x1;
      FUN_109a4a0a4(&uStack_2f8,&uStack_368,0x10);
      lVar10 = *(long *)(param_1 + 0x8a);
      puStack_2f0 = (uint *)NEON_rev64(*(undefined8 *)(lVar10 + 0x2a00),4);
      uStack_2f8 = 0x1000000010;
      FUN_109a852c8(&uStack_1d0,lVar10 + 0x2938,&uStack_2f8);
      lVar10 = *(long *)(param_1 + 0x8a);
      if (*(long *)(lVar10 + 0x2a30) != 0) {
        piVar22 = (int *)(*(long *)(lVar10 + 0x2a30) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(lVar10 + 0x29f8);
        }
      }
      *(undefined8 *)(lVar10 + 0x2a30) = 0;
      *(undefined8 *)(lVar10 + 0x2a10) = 0;
      *(undefined8 *)(lVar10 + 0x2a08) = 0;
      *(undefined8 *)(lVar10 + 0x2a20) = 0;
      *(undefined8 *)(lVar10 + 0x2a18) = 0;
      if (0 < *(int *)(lVar10 + 0x29fc)) {
        lVar21 = 0;
        lVar20 = *(long *)(lVar10 + 0x2a38);
        do {
          *(undefined4 *)(lVar20 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar10 + 0x29fc));
      }
      *(uint **)(lVar10 + 0x2a00) = puStack_1c8;
      *(undefined8 *)(lVar10 + 0x29f8) = uStack_1d0;
      *(undefined8 *)(lVar10 + 0x2a10) = uStack_1b8;
      *(undefined8 *)(lVar10 + 0x2a08) = uStack_1c0;
      *(undefined8 *)(lVar10 + 0x2a20) = uStack_1a8;
      *(undefined8 *)(lVar10 + 0x2a18) = uStack_1b0;
      *(undefined8 *)(lVar10 + 0x2a30) = uStack_198;
      *(undefined8 *)(lVar10 + 0x2a28) = uStack_1a0;
      puVar15 = *(undefined8 **)(lVar10 + 0x2a40);
      puVar14 = (undefined8 *)(lVar10 + 0x2a48);
      iVar12 = uStack_1d0._4_4_;
      if (puVar15 != puVar14) {
        unaff_x23 = (uint *)(lVar10 + 0x2a00);
        if (puVar15 != (undefined8 *)0x0) {
          _free(puVar15[-1]);
        }
        *(undefined8 **)(lVar10 + 0x2a40) = puVar14;
        *(uint **)(lVar10 + 0x2a38) = unaff_x23;
        puVar15 = puVar14;
        iVar12 = uStack_1d0._4_4_;
      }
      if (iVar12 < 3) {
        puVar14 = (undefined8 *)((ulong)&uStack_1d0 | 4);
        *puVar15 = *puStack_188;
        puVar15[1] = puStack_188[1];
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x42ff0000);
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (puStack_188 != &uStack_180) {
          _free(puStack_188[-1]);
        }
      }
      else {
        *(undefined8 **)(lVar10 + 0x2a40) = puStack_188;
        *(undefined8 *)(lVar10 + 0x2a38) = uStack_190;
      }
      puStack_2f0 = (uint *)NEON_rev64(*(undefined8 *)(*(long *)(param_1 + 0x8a) + 0x2a00),4);
      uStack_2f8 = 0x1000000010;
      param_2 = (uint *)(*(long *)(param_1 + 0x8a) + 0x2998);
      param_3 = &uStack_2f8;
      FUN_109a852c8(&uStack_1d0);
      unaff_x21 = *(uint **)(param_1 + 0x8a);
      unaff_x22 = (uint *)0x2a58;
      if (*(long *)(unaff_x21 + 0xaa4) != 0) {
        piVar22 = (int *)(*(long *)(unaff_x21 + 0xaa4) + 0x14);
        do {
          iVar12 = *piVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar5) {
            *piVar22 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(unaff_x21 + 0xa96);
        }
      }
      unaff_x21[0xaa4] = 0;
      unaff_x21[0xaa5] = 0;
      puVar8 = unaff_x21 + 0xa9a;
      unaff_x21[0xa9c] = 0;
      unaff_x21[0xa9d] = 0;
      puVar8[0] = 0;
      puVar8[1] = 0;
      unaff_x21[0xaa0] = 0;
      unaff_x21[0xaa1] = 0;
      unaff_x21[0xa9e] = 0;
      unaff_x21[0xa9f] = 0;
      if (0 < (int)unaff_x21[0xa97]) {
        lVar10 = 0;
        lVar21 = *(long *)(unaff_x21 + 0xaa6);
        do {
          *(undefined4 *)(lVar21 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)unaff_x21[0xa97]);
      }
      *(uint **)(unaff_x21 + 0xa98) = puStack_1c8;
      *(undefined8 *)(unaff_x21 + 0xa96) = uStack_1d0;
      *(undefined8 *)(unaff_x21 + 0xa9c) = uStack_1b8;
      *(undefined8 *)puVar8 = uStack_1c0;
      *(undefined8 *)(unaff_x21 + 0xaa0) = uStack_1a8;
      *(undefined8 *)(unaff_x21 + 0xa9e) = uStack_1b0;
      *(undefined8 *)(unaff_x21 + 0xaa4) = uStack_198;
      *(undefined8 *)(unaff_x21 + 0xaa2) = uStack_1a0;
      pfVar16 = *(float **)(unaff_x21 + 0xaa8);
      pfVar24 = (float *)(unaff_x21 + 0xaaa);
      iVar12 = uStack_1d0._4_4_;
      if (pfVar16 != pfVar24) {
        unaff_x22 = unaff_x21 + 0xa98;
        if (pfVar16 != (float *)0x0) {
          _free(*(undefined8 *)(pfVar16 + -2));
        }
        *(float **)(unaff_x21 + 0xaa8) = pfVar24;
        *(uint **)(unaff_x21 + 0xaa6) = unaff_x22;
        pfVar16 = pfVar24;
        iVar12 = uStack_1d0._4_4_;
      }
      if (iVar12 < 3) {
        puVar14 = (undefined8 *)((ulong)&uStack_1d0 | 4);
        *(undefined8 *)pfVar16 = *puStack_188;
        *(undefined8 *)(pfVar16 + 2) = puStack_188[1];
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x42ff0000);
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (puStack_188 != &uStack_180) {
          _free(puStack_188[-1]);
        }
      }
      else {
        *(undefined8 **)(unaff_x21 + 0xaa8) = puStack_188;
        *(undefined8 *)(unaff_x21 + 0xaa6) = uStack_190;
      }
      puVar8 = *(uint **)(param_1 + 0x8a);
    }
    FUN_10962439c();
    if ((float)param_1[0x13] != 0.0) {
      pfVar16 = (float *)0x0;
      unaff_x21 = (uint *)0x60;
      unaff_x22 = (uint *)0x33f0;
      unaff_x23 = (uint *)0x3;
      unaff_x24 = (uint *)0x3630;
      unaff_x25 = (uint *)0x3510;
      unaff_x26 = (uint *)0x3750;
      do {
        lVar10 = *(long *)(param_1 + 0x8a);
        lVar21 = lVar10 + (long)pfVar16 * 0x60;
        if (*(long *)(lVar21 + 0x3400) != 0) {
          param_3 = (undefined8 *)(lVar21 + 0x33f0);
          uVar19 = (ulong)*(uint *)(lVar21 + 0x33f4);
          if ((int)*(uint *)(lVar21 + 0x33f4) < 3) {
            lVar20 = (long)*(int *)(lVar21 + 0x33fc) * (long)*(int *)(lVar21 + 0x33f8);
          }
          else {
            lVar20 = 1;
            piVar22 = *(int **)(lVar21 + 0x3430);
            do {
              lVar20 = lVar20 * *piVar22;
              uVar19 = uVar19 - 1;
              piVar22 = piVar22 + 1;
            } while (uVar19 != 0);
          }
          if (lVar20 != 0) {
            lVar21 = lVar10 + (long)pfVar16 * 8;
            lVar20 = *(long *)(lVar21 + 0x3ff0);
            *(undefined8 *)(lVar20 + 0x24) = 0x3e80000041a00000;
            *(undefined4 *)(lVar20 + 0x2c) = 3;
            lVar21 = *(long *)(lVar21 + 0x4008);
            *(undefined8 *)(lVar21 + 0x24) = 0x3e80000041a00000;
            *(undefined4 *)(lVar21 + 0x2c) = 3;
            lVar10 = lVar10 + (long)pfVar16 * 0x60;
            FUN_1095e1b4c(lVar20,0,param_3,lVar10 + 0x3630,param_3,lVar10 + 0x3630);
            puVar8 = *(uint **)(*(long *)(param_1 + 0x8a) + (long)pfVar16 * 8 + 0x4008);
            param_6 = *(long *)(param_1 + 0x8a) + (long)pfVar16 * 0x60;
            param_3 = (undefined8 *)(param_6 + 0x3510);
            param_4 = (uint *)(param_6 + 0x3750);
            param_5 = (undefined8 *)(param_6 + 0x3510);
            param_6 = param_6 + 0x3750;
            param_2 = (uint *)0x0;
            FUN_1095e1b4c();
          }
        }
        pfVar16 = (float *)((long)pfVar16 + 1);
      } while (pfVar16 != (float *)0x3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
    }
    FUN_109671170(&uStack_1d0);
    func_0x00010567aa40(&uStack_368);
    FUN_1095d3858(&uStack_2f8);
  }
  puVar11 = puVar8;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1096076d8;
  lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar12 = (int)(float)puVar11[0xc];
  puStack_420 = unaff_x28;
  puStack_418 = unaff_x27;
  puStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = unaff_x22;
  puStack_3e8 = unaff_x21;
  pfStack_3e0 = pfVar16;
  puStack_3d8 = puVar8;
  puStack_3d0 = &stack0xfffffffffffffff0;
  if ((float)puVar11[9] == 0.0) {
    uStack_600 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    FUN_1095d359c(&uStack_580,*(long *)(puVar11 + 0x8a) + 0x30,&uStack_600,*param_2 & 0xfff);
    uStack_5f0 = 0;
    uStack_600._0_4_ = 0x1010000;
    uStack_698 = 0x2010000;
    uStack_688 = 0;
    uStack_618 = 0x500000005;
    puStack_690 = (uint *)&uStack_580;
    puStack_5f8 = param_2;
    FUN_109b44a6c(0x4008000000000000,0x4008000000000000,&uStack_600,&uStack_698,&uStack_618,2);
    uStack_600 = CONCAT44(uStack_600._4_4_,0x1010000);
    puStack_5f8 = (uint *)&uStack_580;
    uStack_5f0 = 0;
    uStack_698 = 0x2010000;
    uStack_688 = 0;
    iVar27 = 0;
    if (iVar12 != 0) {
      iVar27 = (*(int **)(param_2 + 0x10))[1] / iVar12;
    }
    iVar3 = 0;
    if (iVar12 != 0) {
      iVar3 = **(int **)(param_2 + 0x10) / iVar12;
    }
    uStack_618 = CONCAT44(iVar3,iVar27);
    puStack_690 = (uint *)param_3;
    FUN_109b0f718(0,0,&uStack_600,&uStack_698,&uStack_618,3);
    puVar14 = &uStack_580;
    goto LAB_10960822c;
  }
  uStack_580 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
  puVar14 = &uStack_600;
  FUN_1095d359c(puVar14,*(long *)(puVar11 + 0x8a) + 0x30,&uStack_580,*param_2 & 0xfff);
  if (iVar12 == 4) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1095f1a78(param_2,param_6,param_3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_440 = 0;
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
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      puStack_538 = (undefined8 *)0x0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puStack_578 = (uint *)0x0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      FUN_10926db08(&uStack_580);
      uStack_478 = CONCAT44(uStack_478._4_4_,3);
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_698,&UNK_10f57788b);
      func_0x000107c31940(&uStack_618,&UNK_10f577b51);
      FUN_109671348(&uStack_580,5,&uStack_698,&uStack_618,0x26f);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)param_2 - (long)puVar14) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
LAB_109607e8c:
      if (uStack_608._7_1_ < '\0') {
        __ZdlPv(uStack_618);
      }
      if (uStack_688 < 0) {
        __ZdlPv(CONCAT44(uStack_694,uStack_698));
      }
      FUN_109671170(&uStack_580);
    }
  }
  else {
    if (4 < iRam00000001132dfb08) {
      uStack_440 = 0;
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
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      puStack_538 = (undefined8 *)0x0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puStack_578 = (uint *)0x0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      FUN_10926db08(&uStack_580);
      uStack_478 = CONCAT44(uStack_478._4_4_,3);
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_698,&UNK_10f57788b);
      func_0x000107c31940(&uStack_618,&UNK_10f577b51);
      FUN_109671348(&uStack_580,5,&uStack_698,&uStack_618,0x256);
      FUN_1092b4db8();
      if (uStack_608 < 0) {
        __ZdlPv(uStack_618);
      }
      if (uStack_688._7_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_694,uStack_698));
      }
      puVar14 = &uStack_580;
      FUN_109671170(puVar14);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_570 = 0;
    uStack_580 = CONCAT44(uStack_580._4_4_,0x1010000);
    uStack_698 = 0x2010000;
    puStack_690 = (uint *)&uStack_600;
    uStack_688 = 0;
    uStack_618 = 0x500000005;
    puVar15 = &uStack_580;
    puStack_578 = param_2;
    FUN_109b44a6c(0x4008000000000000,0x4008000000000000,puVar15,&uStack_698,&uStack_618,2);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_440 = 0;
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
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      puStack_538 = (undefined8 *)0x0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puStack_578 = (uint *)0x0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      FUN_10926db08(&uStack_580);
      uStack_478 = CONCAT44(uStack_478._4_4_,3);
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_698,&UNK_10f57788b);
      func_0x000107c31940(&uStack_618,&UNK_10f577b51);
      FUN_109671348(&uStack_580,5,&uStack_698,&uStack_618,0x259);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar15 - (long)puVar14) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (uStack_608 < 0) {
        __ZdlPv(uStack_618);
      }
      if (uStack_688 < 0) {
        __ZdlPv(CONCAT44(uStack_694,uStack_698));
      }
      puVar15 = &uStack_580;
      FUN_109671170(puVar15);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_580 = CONCAT44(uStack_580._4_4_,0x1010000);
    puStack_578 = (uint *)&uStack_600;
    uStack_570 = 0;
    uStack_698 = 0x2010000;
    uStack_688 = 0;
    iVar27 = 0;
    if (iVar12 != 0) {
      iVar27 = (int)param_2[2] / iVar12;
    }
    uStack_618 = CONCAT44(iVar27,param_2[3]);
    puVar14 = &uStack_580;
    puStack_690 = (uint *)param_6;
    FUN_109b0f718(0,0,puVar14,&uStack_698,&uStack_618,3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_440 = 0;
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
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      puStack_538 = (undefined8 *)0x0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puStack_578 = (uint *)0x0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      FUN_10926db08(&uStack_580);
      uStack_478 = CONCAT44(uStack_478._4_4_,3);
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_698,&UNK_10f57788b);
      func_0x000107c31940(&uStack_618,&UNK_10f577b51);
      FUN_109671348(&uStack_580,5,&uStack_698,&uStack_618,0x262);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar14 - (long)puVar15) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (uStack_608 < 0) {
        __ZdlPv(uStack_618);
      }
      if (uStack_688 < 0) {
        __ZdlPv(CONCAT44(uStack_694,uStack_698));
      }
      puVar14 = &uStack_580;
      FUN_109671170(puVar14);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_570 = 0;
    uStack_580 = CONCAT44(uStack_580._4_4_,0x1010000);
    uStack_698 = 0x2010000;
    uStack_688 = 0;
    iVar27 = 0;
    if (iVar12 != 0) {
      iVar27 = (int)param_2[3] / iVar12;
    }
    uStack_618 = CONCAT44(*(undefined4 *)(param_6 + 8),iVar27);
    puVar15 = &uStack_580;
    puStack_690 = (uint *)param_3;
    puStack_578 = (uint *)param_6;
    FUN_109b0f718(0,0,puVar15,&uStack_698,&uStack_618,3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_440 = 0;
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
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      puStack_538 = (undefined8 *)0x0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puStack_578 = (uint *)0x0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      FUN_10926db08(&uStack_580);
      uStack_478 = CONCAT44(uStack_478._4_4_,3);
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_698,&UNK_10f57788b);
      func_0x000107c31940(&uStack_618,&UNK_10f577b51);
      FUN_109671348(&uStack_580,5,&uStack_698,&uStack_618,0x26b);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar15 - (long)puVar14) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      goto LAB_109607e8c;
    }
  }
  uStack_580 = NEON_rev64(**(undefined8 **)(param_6 + 0x40),4);
  puVar9 = &uStack_698;
  FUN_1095d359c(puVar9,*(long *)(puVar11 + 0x8a) + 0x30,&uStack_580,0x13);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_570 = 0;
  uStack_580 = CONCAT44(uStack_580._4_4_,0x1010000);
  uStack_618 = CONCAT44(uStack_618._4_4_,0x2010000);
  uStack_608 = 0;
  puVar8 = (uint *)&uStack_580;
  puStack_610 = &uStack_698;
  puStack_578 = (uint *)param_6;
  FUN_109aec0d0(0x3ff0000000000000,0,puVar8,&uStack_618,3,1,0,(int)(float)puVar11[0xd],1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_440 = 0;
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
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    puStack_538 = (undefined8 *)0x0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    puStack_578 = (uint *)0x0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    FUN_10926db08(&uStack_580);
    uStack_478 = CONCAT44(uStack_478._4_4_,3);
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_440 = uStack_440 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_618,&UNK_10f57788b);
    func_0x000107c31940(auStack_6b0,&UNK_10f577b51);
    FUN_109671348(&uStack_580,5,&uStack_618,auStack_6b0,0x27c);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)puVar8 - (long)puVar9) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if (cStack_699 < '\0') {
      __ZdlPv(auStack_6b0[0]);
    }
    if (uStack_608 < 0) {
      __ZdlPv(uStack_618);
    }
    puVar8 = (uint *)&uStack_580;
    FUN_109671170(puVar8);
  }
  puVar7 = *(uint **)(param_6 + 0x40);
  if ((((2 < (int)param_7[1]) || (param_7[2] != *puVar7)) || (param_7[3] != puVar7[1])) ||
     (((*param_7 & 0xfff) != 0x10 || (*(long *)(param_7 + 4) == 0)))) {
    puVar8 = param_7;
    uStack_580 = *(undefined8 *)puVar7;
    FUN_109a83fd0(param_7,2,&uStack_580,0x10);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar7 = puVar11 + 0x8c;
  FUN_1095ee490(puVar7,&uStack_698,param_7,(int)(float)puVar11[0xe],(int)(float)puVar11[0xf]);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_440 = 0;
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
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    puStack_538 = (undefined8 *)0x0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    puStack_578 = (uint *)0x0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    FUN_10926db08(&uStack_580);
    uStack_478 = CONCAT44(uStack_478._4_4_,3);
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_440 = uStack_440 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_618,&UNK_10f57788b);
    func_0x000107c31940(auStack_6b0,&UNK_10f577b51);
    FUN_109671348(&uStack_580,5,&uStack_618,auStack_6b0,0x284);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)puVar7 - (long)puVar8) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if (cStack_699 < '\0') {
      __ZdlPv(auStack_6b0[0]);
    }
    if (uStack_608 < 0) {
      __ZdlPv(uStack_618);
    }
    FUN_109671170(&uStack_580);
  }
  FUN_1095d3858(&uStack_698);
  puVar14 = &uStack_600;
LAB_10960822c:
  FUN_1095d3858(puVar14);
  uVar18 = puVar11[0x2a2];
  uStack_5f0 = 0;
  uStack_600 = CONCAT44(uStack_600._4_4_,0x1010000);
  uStack_698 = 0x2010000;
  uStack_688 = 0;
  lVar10 = *(long *)(puVar11 + 0x8a) + (ulong)(byte)uVar18 * 4;
  uVar1 = *(undefined4 *)(lVar10 + 0x1f34);
  uVar2 = *(undefined4 *)(lVar10 + 0x1f28);
  puStack_578 = (uint *)0x0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  puStack_690 = param_4;
  puStack_5f8 = (uint *)param_3;
  FUN_109a4a0a4(&uStack_600,&uStack_698,uVar1,uVar1,uVar2,uVar2,1,&uStack_580);
  puVar14 = &uStack_580;
  FUN_109a852c8(puVar14,param_4,*(long *)(puVar11 + 0x8a) + (ulong)(byte)uVar18 * 0x10 + 8000);
  if (param_5[7] != 0) {
    piVar22 = (int *)(param_5[7] + 0x14);
    do {
      iVar12 = *piVar22;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar5) {
        *piVar22 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      puVar14 = param_5;
      func_0x000109a848d4(param_5);
    }
  }
  param_5[7] = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  if (0 < *(int *)((long)param_5 + 4)) {
    lVar10 = 0;
    lVar21 = param_5[8];
    do {
      *(undefined4 *)(lVar21 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((long)param_5 + 4));
  }
  param_5[1] = puStack_578;
  *param_5 = uStack_580;
  param_5[3] = uStack_568;
  param_5[2] = uStack_570;
  param_5[5] = uStack_558;
  param_5[4] = uStack_560;
  param_5[7] = uStack_548;
  param_5[6] = uStack_550;
  puVar17 = (undefined8 *)param_5[9];
  puVar15 = param_5 + 10;
  iVar12 = uStack_580._4_4_;
  if (puVar17 != puVar15) {
    if (puVar17 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)puVar17[-1];
      _free(puVar14);
    }
    param_5[8] = param_5 + 1;
    param_5[9] = puVar15;
    puVar17 = puVar15;
    iVar12 = uStack_580._4_4_;
  }
  if (iVar12 < 3) {
    puVar15 = (undefined8 *)((ulong)&uStack_580 | 4);
    *puVar17 = *puStack_538;
    puVar17[1] = puStack_538[1];
    uStack_580 = CONCAT44(uStack_580._4_4_,0x42ff0000);
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    *(undefined8 *)((long)puVar15 + 0x34) = 0;
    *(undefined8 *)((long)puVar15 + 0x2c) = 0;
    if (puStack_538 != &uStack_530) {
      puVar14 = (undefined8 *)puStack_538[-1];
      _free(puVar14);
    }
  }
  else {
    param_5[8] = uStack_540;
    param_5[9] = puStack_538;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_430) {
    return puVar14;
  }
  ___stack_chk_fail();
  if (uStack_688 < 0) {
    __ZdlPv(CONCAT44(uStack_694,uStack_698));
  }
  FUN_109671170(&uStack_580);
  FUN_1095d3858(&uStack_600);
  do {
    __Unwind_Resume(puVar14);
  } while( true );
}



/* Entry: 1096076d8; end: 10960852f;  */

void FUN_1096076d8(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,uint *param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_258;
  undefined4 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  uint *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_1c0;
  uint *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar17 = (int)*(float *)(param_1 + 0x30);
  if (*(float *)(param_1 + 0x24) == 0.0) {
    uStack_240 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    FUN_1095d359c(&uStack_1c0,*(long *)(param_1 + 0x228) + 0x30,&uStack_240,*param_2 & 0xfff);
    uStack_230 = 0;
    uStack_240._0_4_ = 0x1010000;
    uStack_2d8 = 0x2010000;
    uStack_2c8 = 0;
    uStack_258 = 0x500000005;
    puStack_2d0 = &uStack_1c0;
    puStack_238 = param_2;
    FUN_109b44a6c(0x4008000000000000,0x4008000000000000,&uStack_240,&uStack_2d8,&uStack_258,2);
    uStack_240 = CONCAT44(uStack_240._4_4_,0x1010000);
    puStack_238 = (uint *)&uStack_1c0;
    uStack_230 = 0;
    uStack_2d8 = 0x2010000;
    uStack_2c8 = 0;
    iVar6 = 0;
    if (iVar17 != 0) {
      iVar6 = (*(int **)(param_2 + 0x10))[1] / iVar17;
    }
    iVar5 = 0;
    if (iVar17 != 0) {
      iVar5 = **(int **)(param_2 + 0x10) / iVar17;
    }
    uStack_258 = CONCAT44(iVar5,iVar6);
    puStack_2d0 = (undefined8 *)param_3;
    FUN_109b0f718(0,0,&uStack_240,&uStack_2d8,&uStack_258,3);
    puVar11 = &uStack_1c0;
    goto LAB_10960822c;
  }
  uStack_1c0 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
  puVar11 = &uStack_240;
  FUN_1095d359c(puVar11,*(long *)(param_1 + 0x228) + 0x30,&uStack_1c0,*param_2 & 0xfff);
  if (iVar17 == 4) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1095f1a78(param_2,param_6,param_3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_178 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2d8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_258,&UNK_10f577b51);
      FUN_109671348(&uStack_1c0,5,&uStack_2d8,&uStack_258,0x26f);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)param_2 - (long)puVar11) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
LAB_109607e8c:
      if (uStack_248._7_1_ < '\0') {
        __ZdlPv(uStack_258);
      }
      if (uStack_2c8 < 0) {
        __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
      }
      FUN_109671170(&uStack_1c0);
    }
  }
  else {
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_178 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2d8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_258,&UNK_10f577b51);
      FUN_109671348(&uStack_1c0,5,&uStack_2d8,&uStack_258,0x256);
      FUN_1092b4db8();
      if (uStack_248 < 0) {
        __ZdlPv(uStack_258);
      }
      if (uStack_2c8._7_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
      }
      puVar11 = &uStack_1c0;
      FUN_109671170(puVar11);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_1b0 = 0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0x1010000);
    uStack_2d8 = 0x2010000;
    puStack_2d0 = &uStack_240;
    uStack_2c8 = 0;
    uStack_258 = 0x500000005;
    puVar13 = &uStack_1c0;
    puStack_1b8 = param_2;
    FUN_109b44a6c(0x4008000000000000,0x4008000000000000,puVar13,&uStack_2d8,&uStack_258,2);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_178 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2d8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_258,&UNK_10f577b51);
      FUN_109671348(&uStack_1c0,5,&uStack_2d8,&uStack_258,0x259);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar13 - (long)puVar11) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (uStack_248 < 0) {
        __ZdlPv(uStack_258);
      }
      if (uStack_2c8 < 0) {
        __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
      }
      puVar13 = &uStack_1c0;
      FUN_109671170(puVar13);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0x1010000);
    puStack_1b8 = (uint *)&uStack_240;
    uStack_1b0 = 0;
    uStack_2d8 = 0x2010000;
    uStack_2c8 = 0;
    iVar6 = 0;
    if (iVar17 != 0) {
      iVar6 = (int)param_2[2] / iVar17;
    }
    uStack_258 = CONCAT44(iVar6,param_2[3]);
    puVar11 = &uStack_1c0;
    puStack_2d0 = (undefined8 *)param_6;
    FUN_109b0f718(0,0,puVar11,&uStack_2d8,&uStack_258,3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_178 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2d8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_258,&UNK_10f577b51);
      FUN_109671348(&uStack_1c0,5,&uStack_2d8,&uStack_258,0x262);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar11 - (long)puVar13) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (uStack_248 < 0) {
        __ZdlPv(uStack_258);
      }
      if (uStack_2c8 < 0) {
        __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
      }
      puVar11 = &uStack_1c0;
      FUN_109671170(puVar11);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_1b0 = 0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0x1010000);
    uStack_2d8 = 0x2010000;
    uStack_2c8 = 0;
    iVar6 = 0;
    if (iVar17 != 0) {
      iVar6 = (int)param_2[3] / iVar17;
    }
    uStack_258 = CONCAT44(*(undefined4 *)(param_6 + 8),iVar6);
    puVar13 = &uStack_1c0;
    puStack_2d0 = (undefined8 *)param_3;
    puStack_1b8 = (uint *)param_6;
    FUN_109b0f718(0,0,puVar13,&uStack_2d8,&uStack_258,3);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      puStack_178 = (undefined8 *)0x0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_2d8,&UNK_10f57788b);
      func_0x000107c31940(&uStack_258,&UNK_10f577b51);
      FUN_109671348(&uStack_1c0,5,&uStack_2d8,&uStack_258,0x26b);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar13 - (long)puVar11) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      goto LAB_109607e8c;
    }
  }
  uStack_1c0 = NEON_rev64(**(undefined8 **)(param_6 + 0x40),4);
  puVar9 = &uStack_2d8;
  FUN_1095d359c(puVar9,*(long *)(param_1 + 0x228) + 0x30,&uStack_1c0,0x13);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_1b0 = 0;
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0x1010000);
  uStack_258 = CONCAT44(uStack_258._4_4_,0x2010000);
  uStack_248 = 0;
  puVar10 = (uint *)&uStack_1c0;
  puStack_250 = &uStack_2d8;
  puStack_1b8 = (uint *)param_6;
  FUN_109aec0d0(0x3ff0000000000000,0,puVar10,&uStack_258,3,1,0,(int)*(float *)(param_1 + 0x34),1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puStack_178 = (undefined8 *)0x0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    puStack_1b8 = (uint *)0x0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    FUN_10926db08(&uStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_258,&UNK_10f57788b);
    func_0x000107c31940(auStack_2f0,&UNK_10f577b51);
    FUN_109671348(&uStack_1c0,5,&uStack_258,auStack_2f0,0x27c);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)puVar10 - (long)puVar9) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if (cStack_2d9 < '\0') {
      __ZdlPv(auStack_2f0[0]);
    }
    if (uStack_248 < 0) {
      __ZdlPv(uStack_258);
    }
    puVar10 = (uint *)&uStack_1c0;
    FUN_109671170(puVar10);
  }
  puVar14 = *(uint **)(param_6 + 0x40);
  if ((((2 < (int)param_7[1]) || (param_7[2] != *puVar14)) || (param_7[3] != puVar14[1])) ||
     (((*param_7 & 0xfff) != 0x10 || (*(long *)(param_7 + 4) == 0)))) {
    puVar10 = param_7;
    uStack_1c0 = *(undefined8 *)puVar14;
    FUN_109a83fd0(param_7,2,&uStack_1c0,0x10);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar12 = param_1 + 0x230;
  FUN_1095ee490(lVar12,&uStack_2d8,param_7,(int)*(float *)(param_1 + 0x38),
                (int)*(float *)(param_1 + 0x3c));
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puStack_178 = (undefined8 *)0x0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    puStack_1b8 = (uint *)0x0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    FUN_10926db08(&uStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_258,&UNK_10f57788b);
    func_0x000107c31940(auStack_2f0,&UNK_10f577b51);
    FUN_109671348(&uStack_1c0,5,&uStack_258,auStack_2f0,0x284);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)((lVar12 - (long)puVar10) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if (cStack_2d9 < '\0') {
      __ZdlPv(auStack_2f0[0]);
    }
    if (uStack_248 < 0) {
      __ZdlPv(uStack_258);
    }
    FUN_109671170(&uStack_1c0);
  }
  FUN_1095d3858(&uStack_2d8);
  puVar11 = &uStack_240;
LAB_10960822c:
  FUN_1095d3858(puVar11);
  bVar4 = *(byte *)(param_1 + 0xa88);
  uStack_230 = 0;
  uStack_240 = CONCAT44(uStack_240._4_4_,0x1010000);
  uStack_2d8 = 0x2010000;
  uStack_2c8 = 0;
  lVar12 = *(long *)(param_1 + 0x228) + (ulong)bVar4 * 4;
  uVar2 = *(undefined4 *)(lVar12 + 0x1f34);
  uVar3 = *(undefined4 *)(lVar12 + 0x1f28);
  puStack_1b8 = (uint *)0x0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  puStack_2d0 = (undefined8 *)param_4;
  puStack_238 = (uint *)param_3;
  FUN_109a4a0a4(&uStack_240,&uStack_2d8,uVar2,uVar2,uVar3,uVar3,1,&uStack_1c0);
  puVar11 = &uStack_1c0;
  FUN_109a852c8(puVar11,param_4,*(long *)(param_1 + 0x228) + (ulong)bVar4 * 0x10 + 8000);
  if (param_5[7] != 0) {
    piVar1 = (int *)(param_5[7] + 0x14);
    do {
      iVar17 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar17 + -1 == 0) {
      puVar11 = param_5;
      func_0x000109a848d4(param_5);
    }
  }
  param_5[7] = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  if (0 < *(int *)((long)param_5 + 4)) {
    lVar12 = 0;
    lVar15 = param_5[8];
    do {
      *(undefined4 *)(lVar15 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)param_5 + 4));
  }
  param_5[1] = puStack_1b8;
  *param_5 = uStack_1c0;
  param_5[3] = uStack_1a8;
  param_5[2] = uStack_1b0;
  param_5[5] = uStack_198;
  param_5[4] = uStack_1a0;
  param_5[7] = uStack_188;
  param_5[6] = uStack_190;
  puVar16 = (undefined8 *)param_5[9];
  puVar13 = param_5 + 10;
  iVar17 = uStack_1c0._4_4_;
  if (puVar16 != puVar13) {
    if (puVar16 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)puVar16[-1];
      _free(puVar11);
    }
    param_5[8] = param_5 + 1;
    param_5[9] = puVar13;
    puVar16 = puVar13;
    iVar17 = uStack_1c0._4_4_;
  }
  if (iVar17 < 3) {
    puVar13 = (undefined8 *)((ulong)&uStack_1c0 | 4);
    *puVar16 = *puStack_178;
    puVar16[1] = puStack_178[1];
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,0x42ff0000);
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    if (puStack_178 != &uStack_170) {
      puVar11 = (undefined8 *)puStack_178[-1];
      _free(puVar11);
    }
  }
  else {
    param_5[8] = uStack_180;
    param_5[9] = puStack_178;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_2c8 < 0) {
    __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
  }
  FUN_109671170(&uStack_1c0);
  FUN_1095d3858(&uStack_240);
  do {
    __Unwind_Resume(puVar11);
  } while( true );
}



/* Entry: 109608530; end: 109608687;  */

undefined8 FUN_109608530(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar7 + 0x1e8) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x1e8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar7 + 0x1b0);
    }
  }
  *(undefined8 *)(lVar7 + 0x1e8) = 0;
  *(undefined8 *)(lVar7 + 0x1c8) = 0;
  *(undefined8 *)(lVar7 + 0x1c0) = 0;
  *(undefined8 *)(lVar7 + 0x1d8) = 0;
  *(undefined8 *)(lVar7 + 0x1d0) = 0;
  if (0 < *(int *)(lVar7 + 0x1b4)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x1f0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x1b4));
  }
  lVar7 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar7 + 0x1980) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x1980) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar7 + 0x1948);
    }
  }
  *(undefined8 *)(lVar7 + 0x1980) = 0;
  *(undefined8 *)(lVar7 + 0x1960) = 0;
  *(undefined8 *)(lVar7 + 0x1958) = 0;
  *(undefined8 *)(lVar7 + 0x1970) = 0;
  *(undefined8 *)(lVar7 + 0x1968) = 0;
  if (0 < *(int *)(lVar7 + 0x194c)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x1988);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x194c));
  }
  lVar7 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar7 + 0x19e0) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x19e0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar7 + 0x19a8);
    }
  }
  *(undefined8 *)(lVar7 + 0x19e0) = 0;
  *(undefined8 *)(lVar7 + 0x19c0) = 0;
  *(undefined8 *)(lVar7 + 0x19b8) = 0;
  *(undefined8 *)(lVar7 + 0x19d0) = 0;
  *(undefined8 *)(lVar7 + 0x19c8) = 0;
  if (0 < *(int *)(lVar7 + 0x19ac)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x19e8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x19ac));
  }
  return 1;
}



/* Entry: 109608688; end: 109608d0f;  */

/* WARNING: Removing unreachable block (ram,0x000109608b1c) */
/* WARNING: Removing unreachable block (ram,0x000109608bd8) */

void FUN_109608688(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_1 + 0x228);
  if (*(char *)(lVar5 + 0x135a) == '\x01') {
    plVar6 = (long *)param_2[1];
    if (plVar6 < (long *)param_2[2]) {
      plVar4 = plVar6;
      FUN_109609f70(plVar6,&UNK_10f577bce,lVar5 + 0x1f70);
      param_2[1] = (long)(plVar6 + 0x16);
      plVar6 = plVar6 + 0x16;
    }
    else {
      plVar4 = param_2;
      FUN_109609e28(param_2,&UNK_10f577bce,lVar5 + 0x1f70);
      plVar6 = plVar4;
    }
    param_2[1] = (long)plVar6;
    lVar5 = *(long *)(param_1 + 0x228);
    if (plVar6 < (long *)param_2[2]) {
      FUN_10960a038(plVar6,lVar5 + 0x1fd0);
      plVar6 = plVar6 + 0x16;
      param_2[1] = (long)plVar6;
    }
    else {
      lVar11 = (long)plVar6 - *param_2;
      uVar12 = (lVar11 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
      if (0x1745d1745d1745d < uVar12) {
        FUN_1095ff464();
        func_0x00010567aa40(&uStack_130);
        func_0x00010567aa40(&uStack_d0);
        do {
          __Unwind_Resume(plVar4);
          FUN_1095ff754(&uStack_d0);
        } while( true );
      }
      lVar8 = param_2[2] - *param_2 >> 4;
      uVar10 = lVar8 * 0x5d1745d1745d1746;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0xba2e8ba2e8ba2d < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
        uVar10 = 0x1745d1745d1745d;
      }
      plStack_b0 = param_2;
      if (uVar10 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = param_2;
        FUN_1095ff478();
      }
      lVar11 = (long)plVar6 + lVar11;
      plStack_b8 = plVar6 + uVar10 * 0x16;
      uStack_d0 = plVar6;
      lStack_c8 = lVar11;
      plStack_c0 = (long *)lVar11;
      FUN_10960a038(lVar11,lVar5 + 0x1fd0);
      plStack_c0 = (long *)(lVar11 + 0xb0);
      lVar11 = lVar11 + (*param_2 - param_2[1]);
      FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar11);
      plVar6 = plStack_c0;
      uStack_d0 = (long *)*param_2;
      *param_2 = lVar11;
      lVar5 = param_2[2];
      param_2[2] = (long)plStack_b8;
      param_2[1] = (long)plStack_c0;
      lStack_c8 = (long)uStack_d0;
      plStack_c0 = uStack_d0;
      plStack_b8 = (long *)lVar5;
      FUN_1095ff754(&uStack_d0);
    }
    param_2[1] = (long)plVar6;
    lVar5 = *(long *)(param_1 + 0x228);
    uVar12 = (ulong)&uStack_d0 | 8;
    lStack_c8 = *(undefined8 *)(lVar5 + 0x1a10);
    uStack_d0 = *(long **)(lVar5 + 0x1a08);
    iVar9 = *(int *)(lVar5 + 0x1a0c);
    plStack_b8 = *(long **)(lVar5 + 0x1a20);
    plStack_c0 = *(long **)(lVar5 + 0x1a18);
    uStack_a8 = *(undefined8 *)(lVar5 + 0x1a30);
    plStack_b0 = *(long **)(lVar5 + 0x1a28);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x1a38);
    lStack_98 = *(long *)(lVar5 + 0x1a40);
    uStack_80 = 0;
    uStack_78 = 0;
    if (lStack_98 != 0) {
      piVar1 = (int *)(lStack_98 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar9 = *(int *)(lVar5 + 0x1a0c);
    }
    uStack_90 = uVar12;
    puStack_88 = &uStack_80;
    if (iVar9 < 3) {
      uStack_80 = **(undefined8 **)(lVar5 + 0x1a50);
      uStack_78 = (*(undefined8 **)(lVar5 + 0x1a50))[1];
    }
    else {
      uStack_d0 = (long *)((ulong)uStack_d0 & 0xffffffff);
      func_0x000109a84868(&uStack_d0,lVar5 + 0x1a08);
    }
    lVar5 = *(long *)(param_1 + 0x228);
    if (*(char *)(lVar5 + 0x305) == '\x01') {
      uStack_130 = 0x42ff0000;
      uStack_124 = 0;
      uStack_120 = 0;
      iStack_12c = 0;
      uStack_128 = 0;
      uStack_f0 = (ulong)&uStack_130 | 8;
      uStack_114 = 0;
      uStack_110 = 0;
      iStack_11c = 0;
      uStack_118 = 0;
      uStack_104 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      lStack_f8 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_68._0_4_ = 0x2010000;
      uStack_58 = 0;
      puStack_e8 = &uStack_e0;
      puStack_60 = (undefined8 *)&uStack_130;
      FUN_109a479a0(lVar5 + 0x1a08,&uStack_68);
      if (lStack_98 != 0) {
        piVar1 = (int *)(lStack_98 + 0x14);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          func_0x000109a848d4(&uStack_d0);
        }
      }
      if (0 < uStack_d0._4_4_) {
        lVar5 = 0;
        do {
          *(undefined4 *)(uStack_90 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < uStack_d0._4_4_);
      }
      lStack_c8 = CONCAT44(uStack_124,uStack_128);
      uStack_d0 = (long *)CONCAT44(iStack_12c,uStack_130);
      plStack_b8 = (long *)CONCAT44(uStack_114,uStack_118);
      plStack_c0 = (long *)CONCAT44(iStack_11c,uStack_120);
      uStack_a8 = CONCAT44(uStack_104,uStack_108);
      plStack_b0 = (long *)CONCAT44(uStack_10c,uStack_110);
      uStack_a0 = CONCAT44(uStack_fc,uStack_100);
      lStack_98 = lStack_f8;
      uVar10 = uStack_90;
      puVar7 = puStack_88;
      if ((puStack_88 != &uStack_80) &&
         (uVar10 = uVar12, puVar7 = &uStack_80, puStack_88 != (undefined8 *)0x0)) {
        _free(puStack_88[-1]);
      }
      puStack_88 = puVar7;
      uStack_90 = uVar10;
      if (iStack_12c < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_130 | 4);
        *puStack_88 = *puStack_e8;
        puStack_88[1] = puStack_e8[1];
        uStack_130 = 0x42ff0000;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_e8 != &uStack_e0) {
          _free(puStack_e8[-1]);
        }
      }
      else {
        uStack_90 = uStack_f0;
        puStack_88 = puStack_e8;
      }
      uStack_68._0_4_ = 0x3010000;
      puStack_60 = &uStack_d0;
      uStack_58 = 0;
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x314);
      uStack_138 = CONCAT44((int)(float)(int)(float)((ulong)uVar13 >> 0x20),
                            (int)(float)(int)(float)uVar13);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x31c);
      uStack_140 = CONCAT44((int)(float)(int)(float)((ulong)uVar13 >> 0x20),
                            (int)(float)(int)(float)uVar13);
      uStack_130 = 0;
      iStack_12c = 0x406fe000;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      iStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0x406fe000;
      FUN_109aed744(&uStack_68,&uStack_138,&uStack_140,&uStack_130,2,8,0);
      lVar5 = *(long *)(param_1 + 0x228);
    }
    __ZNSt3__19to_stringEi(&uStack_68,*(undefined4 *)(lVar5 + 0x28));
    puVar7 = &uStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f577be1,0x14);
    uStack_120 = (undefined4)puVar7[2];
    iStack_11c = (int)((ulong)puVar7[2] >> 0x20);
    uStack_128 = (undefined4)puVar7[1];
    uStack_124 = (undefined4)((ulong)puVar7[1] >> 0x20);
    uStack_130 = (undefined4)*puVar7;
    iStack_12c = (int)((ulong)*puVar7 >> 0x20);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x1a10);
    uStack_138 = NEON_rev64(CONCAT44((int)((ulong)uVar13 >> 0x20) / 2,(int)uVar13 / 2),4);
    uVar12 = param_2[1];
    if (uVar12 < (ulong)param_2[2]) {
      FUN_1095ff8f8(uVar12,&uStack_130,&uStack_138,&uStack_d0);
      plVar6 = (long *)(uVar12 + 0xb0);
      param_2[1] = (long)plVar6;
    }
    else {
      plVar6 = param_2;
      FUN_1095ff7a0(param_2,&uStack_130,&uStack_138,&uStack_d0);
    }
    param_2[1] = (long)plVar6;
    if (iStack_11c < 0) {
      __ZdlPv(CONCAT44(iStack_12c,uStack_130));
    }
    __ZNSt3__19to_stringEi(&uStack_68,*(undefined4 *)(*(long *)(param_1 + 0x228) + 0x28));
    puVar7 = &uStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f577bf6,0x15);
    uStack_120 = (undefined4)puVar7[2];
    iStack_11c = (int)((ulong)puVar7[2] >> 0x20);
    uStack_128 = (undefined4)puVar7[1];
    uStack_124 = (undefined4)((ulong)puVar7[1] >> 0x20);
    uStack_130 = (undefined4)*puVar7;
    iStack_12c = (int)((ulong)*puVar7 >> 0x20);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    lVar5 = *(long *)(param_1 + 0x228);
    uStack_138 = NEON_rev64(CONCAT44((int)((ulong)*(undefined8 *)(lVar5 + 0x1a70) >> 0x20) / 2,
                                     (int)*(undefined8 *)(lVar5 + 0x1a70) / 2),4);
    uVar12 = param_2[1];
    if (uVar12 < (ulong)param_2[2]) {
      FUN_1095ff8f8(uVar12,&uStack_130,&uStack_138,lVar5 + 0x1a68);
      plVar6 = (long *)(uVar12 + 0xb0);
      param_2[1] = (long)plVar6;
    }
    else {
      plVar6 = param_2;
      FUN_1095ff7a0(param_2,&uStack_130,&uStack_138,lVar5 + 0x1a68);
    }
    param_2[1] = (long)plVar6;
    if (iStack_11c < 0) {
      __ZdlPv(CONCAT44(iStack_12c,uStack_130));
    }
    if (lStack_98 != 0) {
      piVar1 = (int *)(lStack_98 + 0x14);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_d0);
      }
    }
    lStack_98 = 0;
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    uStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    if (0 < uStack_d0._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(uStack_90 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_d0._4_4_);
    }
    if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
      _free(puStack_88[-1]);
    }
  }
  return;
}



/* Entry: 109608d10; end: 109609e0f;  */

/* WARNING: Removing unreachable block (ram,0x0001096099b8) */
/* WARNING: Removing unreachable block (ram,0x000109609454) */
/* WARNING: Removing unreachable block (ram,0x000109609464) */
/* WARNING: Removing unreachable block (ram,0x000109609468) */
/* WARNING: Removing unreachable block (ram,0x000109609470) */
/* WARNING: Removing unreachable block (ram,0x000109609478) */
/* WARNING: Removing unreachable block (ram,0x00010960947c) */
/* WARNING: Removing unreachable block (ram,0x000109609484) */
/* WARNING: Removing unreachable block (ram,0x00010960949c) */
/* WARNING: Removing unreachable block (ram,0x0001096094a4) */
/* WARNING: Removing unreachable block (ram,0x0001096091c4) */
/* WARNING: Removing unreachable block (ram,0x0001096091d4) */
/* WARNING: Removing unreachable block (ram,0x0001096091d8) */
/* WARNING: Removing unreachable block (ram,0x0001096091e0) */
/* WARNING: Removing unreachable block (ram,0x0001096091e8) */
/* WARNING: Removing unreachable block (ram,0x0001096091ec) */
/* WARNING: Removing unreachable block (ram,0x0001096091f4) */
/* WARNING: Removing unreachable block (ram,0x00010960920c) */
/* WARNING: Removing unreachable block (ram,0x000109609214) */
/* WARNING: Removing unreachable block (ram,0x000109608f4c) */
/* WARNING: Removing unreachable block (ram,0x000109608f5c) */
/* WARNING: Removing unreachable block (ram,0x000109608f60) */
/* WARNING: Removing unreachable block (ram,0x000109608f68) */
/* WARNING: Removing unreachable block (ram,0x000109608f70) */
/* WARNING: Removing unreachable block (ram,0x000109608f74) */
/* WARNING: Removing unreachable block (ram,0x000109608f7c) */
/* WARNING: Removing unreachable block (ram,0x000109608f94) */
/* WARNING: Removing unreachable block (ram,0x000109608f9c) */
/* WARNING: Removing unreachable block (ram,0x0001096096d0) */
/* WARNING: Removing unreachable block (ram,0x0001096096e0) */
/* WARNING: Removing unreachable block (ram,0x0001096096e4) */
/* WARNING: Removing unreachable block (ram,0x0001096096ec) */
/* WARNING: Removing unreachable block (ram,0x0001096096f4) */
/* WARNING: Removing unreachable block (ram,0x0001096096f8) */
/* WARNING: Removing unreachable block (ram,0x000109609700) */
/* WARNING: Removing unreachable block (ram,0x000109609718) */
/* WARNING: Removing unreachable block (ram,0x000109609720) */
/* WARNING: Removing unreachable block (ram,0x000109609c74) */

void FUN_109608d10(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 ***apppuStack_118 [2];
  char cStack_101;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_81;
  undefined8 *apuStack_80 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x228) + 0x135a) == '\x01') {
    uStack_100 = 0x42ff0000;
    uStack_f4 = 0;
    uStack_f0 = 0;
    iStack_fc = 0;
    uStack_f8 = 0;
    uVar16 = (ulong)&uStack_100 | 8;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    auStack_a0._0_4_ = 0x2010000;
    ppuStack_90 = (undefined8 **)0x0;
    uStack_c0 = uVar16;
    puStack_b8 = &uStack_b0;
    uStack_98 = (undefined8 ***)&uStack_100;
    FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1f70,auStack_a0);
    uVar15 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar15 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(auStack_a0,uVar15 + 8,apppuStack_118);
    lVar1 = param_1 + 8;
    if (uVar15 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar10 = lVar1;
      }
      _memmove(auStack_a0,lVar10,uVar15);
    }
    *(undefined8 *)(auStack_a0 + uVar15) = 0x4247527466656c5f;
    *(undefined1 *)((long)&uStack_98 + uVar15) = 0;
    apppuStack_118[0] = (undefined8 ***)auStack_a0;
    lVar10 = param_2;
    FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apppuStack_118,&pppuStack_130);
    if (*(long *)(lVar10 + 0x60) != 0) {
      piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(lVar10 + 0x28);
      }
    }
    *(undefined8 *)(lVar10 + 0x60) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    if (0 < *(int *)(lVar10 + 0x2c)) {
      lVar9 = 0;
      lVar11 = *(long *)(lVar10 + 0x68);
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar10 + 0x2c));
    }
    *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
    *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
    *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
    *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
    *(long *)(lVar10 + 0x60) = lStack_c8;
    *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
    puVar12 = *(undefined8 **)(lVar10 + 0x70);
    puVar13 = (undefined8 *)(lVar10 + 0x78);
    if (puVar12 != puVar13) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
      *(undefined8 **)(lVar10 + 0x70) = puVar13;
      puVar12 = puVar13;
    }
    puVar13 = (undefined8 *)((ulong)&uStack_100 | 4);
    if (iStack_fc < 3) {
      *puVar12 = *puStack_b8;
      puVar12[1] = puStack_b8[1];
    }
    else {
      *(ulong *)(lVar10 + 0x68) = uStack_c0;
      *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
      uStack_c0 = uVar16;
      puStack_b8 = &uStack_b0;
    }
    uStack_100 = 0x42ff0000;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    uStack_100 = 0x42ff0000;
    uVar16 = (ulong)&uStack_100 | 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    iStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    auStack_a0._0_4_ = 0x2010000;
    ppuStack_90 = (undefined8 **)0x0;
    uStack_c0 = uVar16;
    puStack_b8 = &uStack_b0;
    uStack_98 = (undefined8 ***)&uStack_100;
    FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1fd0,auStack_a0);
    uVar15 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar15 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(auStack_a0,uVar15 + 9,apppuStack_118);
    if (uVar15 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar10 = lVar1;
      }
      _memmove(auStack_a0,lVar10,uVar15);
    }
    *(undefined8 *)(auStack_a0 + uVar15) = 0x475274686769725f;
    *(undefined2 *)((long)&uStack_98 + uVar15) = 0x42;
    apppuStack_118[0] = (undefined8 ***)auStack_a0;
    lVar10 = param_2;
    FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apppuStack_118,&pppuStack_130);
    if (*(long *)(lVar10 + 0x60) != 0) {
      piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(lVar10 + 0x28);
      }
    }
    *(undefined8 *)(lVar10 + 0x60) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    if (0 < *(int *)(lVar10 + 0x2c)) {
      lVar9 = 0;
      lVar11 = *(long *)(lVar10 + 0x68);
      do {
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar10 + 0x2c));
    }
    *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
    *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
    *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
    *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
    *(long *)(lVar10 + 0x60) = lStack_c8;
    *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
    puVar12 = *(undefined8 **)(lVar10 + 0x70);
    puVar13 = (undefined8 *)(lVar10 + 0x78);
    if (puVar12 != puVar13) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
      *(undefined8 **)(lVar10 + 0x70) = puVar13;
      puVar12 = puVar13;
    }
    puVar13 = (undefined8 *)((ulong)&uStack_100 | 4);
    if (iStack_fc < 3) {
      *puVar12 = *puStack_b8;
      puVar12[1] = puStack_b8[1];
    }
    else {
      *(ulong *)(lVar10 + 0x68) = uStack_c0;
      *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
      uStack_c0 = uVar16;
      puStack_b8 = &uStack_b0;
    }
    uStack_100 = 0x42ff0000;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0;
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    if (0.5 < *(float *)(param_1 + 0x2c)) {
      uStack_100 = 0x42ff0000;
      uVar16 = (ulong)&uStack_100 | 8;
      uStack_f4 = 0;
      uStack_f0 = 0;
      iStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      auStack_a0._0_4_ = 0x2010000;
      ppuStack_90 = (undefined8 **)0x0;
      uStack_c0 = uVar16;
      puStack_b8 = &uStack_b0;
      uStack_98 = (undefined8 ***)&uStack_100;
      FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1a08,auStack_a0);
      uVar15 = *(ulong *)(param_1 + 0x10);
      if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
        uVar15 = (ulong)*(byte *)(param_1 + 0x1f);
      }
      func_0x000104c4f768(auStack_a0,uVar15 + 0xc,apppuStack_118);
      if (uVar15 != 0) {
        lVar10 = *(long *)(param_1 + 8);
        if (-1 < *(char *)(param_1 + 0x1f)) {
          lVar10 = lVar1;
        }
        _memmove(auStack_a0,lVar10,uVar15);
      }
      *(undefined8 *)(auStack_a0 + uVar15) = 0x4247527466656c5f;
      *(undefined4 *)((long)&uStack_98 + uVar15) = 0x6c6c7546;
      *(undefined1 *)((long)&uStack_98 + uVar15 + 4) = 0;
      apppuStack_118[0] = (undefined8 ***)auStack_a0;
      lVar10 = param_2;
      FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apppuStack_118,&pppuStack_130);
      if (*(long *)(lVar10 + 0x60) != 0) {
        piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(lVar10 + 0x28);
        }
      }
      *(undefined8 *)(lVar10 + 0x60) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      if (0 < *(int *)(lVar10 + 0x2c)) {
        lVar9 = 0;
        lVar11 = *(long *)(lVar10 + 0x68);
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar10 + 0x2c));
      }
      *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
      *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
      *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
      *(long *)(lVar10 + 0x60) = lStack_c8;
      *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
      puVar12 = *(undefined8 **)(lVar10 + 0x70);
      puVar13 = (undefined8 *)(lVar10 + 0x78);
      if (puVar12 != puVar13) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
        *(undefined8 **)(lVar10 + 0x70) = puVar13;
        puVar12 = puVar13;
      }
      puVar13 = (undefined8 *)((ulong)&uStack_100 | 4);
      if (iStack_fc < 3) {
        *puVar12 = *puStack_b8;
        puVar12[1] = puStack_b8[1];
      }
      else {
        *(ulong *)(lVar10 + 0x68) = uStack_c0;
        *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
        uStack_c0 = uVar16;
        puStack_b8 = &uStack_b0;
      }
      uStack_100 = 0x42ff0000;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      *(undefined8 *)((long)puVar13 + 0x34) = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      lStack_c8 = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
        _free(puStack_b8[-1]);
      }
      uStack_100 = 0x42ff0000;
      uVar16 = (ulong)&uStack_100 | 8;
      uStack_f4 = 0;
      uStack_f0 = 0;
      iStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_d4 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      auStack_a0._0_4_ = 0x2010000;
      ppuStack_90 = (undefined8 **)0x0;
      uStack_c0 = uVar16;
      puStack_b8 = &uStack_b0;
      uStack_98 = (undefined8 ***)&uStack_100;
      FUN_109a479a0(*(long *)(param_1 + 0x228) + 0x1a68,auStack_a0);
      uVar15 = *(ulong *)(param_1 + 0x10);
      if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
        uVar15 = (ulong)*(byte *)(param_1 + 0x1f);
      }
      func_0x000104c4f768(auStack_a0,uVar15 + 0xd,apppuStack_118);
      if (uVar15 != 0) {
        lVar10 = *(long *)(param_1 + 8);
        if (-1 < *(char *)(param_1 + 0x1f)) {
          lVar10 = lVar1;
        }
        _memmove(auStack_a0,lVar10,uVar15);
      }
      *(undefined8 *)(auStack_a0 + uVar15) = 0x475274686769725f;
      *(undefined8 *)(auStack_a0 + uVar15 + 5) = 0x6c6c754642475274;
      *(undefined1 *)((long)&uStack_98 + uVar15 + 5) = 0;
      apppuStack_118[0] = (undefined8 ***)auStack_a0;
      lVar10 = param_2;
      FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apppuStack_118,&pppuStack_130);
      if (*(long *)(lVar10 + 0x60) != 0) {
        piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(lVar10 + 0x28);
        }
      }
      *(undefined8 *)(lVar10 + 0x60) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      if (0 < *(int *)(lVar10 + 0x2c)) {
        lVar9 = 0;
        lVar11 = *(long *)(lVar10 + 0x68);
        do {
          *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar10 + 0x2c));
      }
      *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
      *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
      *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
      *(long *)(lVar10 + 0x60) = lStack_c8;
      *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
      puVar12 = *(undefined8 **)(lVar10 + 0x70);
      puVar13 = (undefined8 *)(lVar10 + 0x78);
      if (puVar12 != puVar13) {
        if (puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
        *(undefined8 **)(lVar10 + 0x70) = puVar13;
        puVar12 = puVar13;
      }
      puVar13 = (undefined8 *)((ulong)&uStack_100 | 4);
      if (iStack_fc < 3) {
        *puVar12 = *puStack_b8;
        puVar12[1] = puStack_b8[1];
      }
      else {
        *(ulong *)(lVar10 + 0x68) = uStack_c0;
        *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
        uStack_c0 = uVar16;
        puStack_b8 = &uStack_b0;
      }
      uStack_100 = 0x42ff0000;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      *(undefined8 *)((long)puVar13 + 0x34) = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      lStack_c8 = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
        _free(puStack_b8[-1]);
      }
    }
    if ((0.5 < *(float *)(param_1 + 0x20)) && (iVar8 = *(int *)(param_1 + 0xa3c), 0 < iVar8)) {
      uVar15 = 0;
      puVar13 = (undefined8 *)((ulong)&uStack_100 | 4);
      uVar16 = (ulong)&uStack_100 | 8;
      do {
        if ((*(ulong *)(*(long *)(param_1 + 0xa40) + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0
           ) {
          lVar10 = *(long *)(param_1 + 0x228);
          uStack_100 = 0x42ff0000;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          auStack_a0._0_4_ = 0x2010000;
          ppuStack_90 = (undefined8 **)0x0;
          uStack_c0 = uVar16;
          puStack_b8 = &uStack_b0;
          uStack_98 = (undefined8 ***)&uStack_100;
          FUN_109a479a0(lVar10 + uVar15 * 0x60 + 0x2278,auStack_a0);
          uVar4 = *(ulong *)(param_1 + 0x10);
          if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
            uVar4 = (ulong)*(byte *)(param_1 + 0x1f);
          }
          func_0x000104c4f768(apppuStack_118,uVar4 + 0x14,&pppuStack_130);
          ppppuVar3 = (undefined8 ****)apppuStack_118[0];
          if (-1 < cStack_101) {
            ppppuVar3 = apppuStack_118;
          }
          if (uVar4 != 0) {
            lVar10 = *(long *)(param_1 + 8);
            if (-1 < *(char *)(param_1 + 0x1f)) {
              lVar10 = lVar1;
            }
            _memmove(ppppuVar3,lVar10,uVar4);
          }
          puVar12 = (undefined8 *)((long)ppppuVar3 + uVar4);
          puVar12[1] = 0x68746d7342475274;
          *puVar12 = 0x66656c5f7665645f;
          *(undefined4 *)(puVar12 + 2) = 0x4c5f6465;
          *(undefined1 *)((long)puVar12 + 0x14) = 0;
          __ZNSt3__19to_stringEi(&pppuStack_130,uVar15);
          uVar4 = uStack_128;
          ppppuVar3 = (undefined8 ****)pppuStack_130;
          if (-1 < (char)bStack_119) {
            uVar4 = (ulong)bStack_119;
            ppppuVar3 = &pppuStack_130;
          }
          ppppuVar7 = apppuStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar7,ppppuVar3,uVar4);
          uStack_98 = ppppuVar7[1];
          auStack_a0 = (undefined1  [8])*ppppuVar7;
          ppuStack_90 = ppppuVar7[2];
          ppppuVar7[1] = (undefined8 ***)0x0;
          ppppuVar7[2] = (undefined8 ***)0x0;
          *ppppuVar7 = (undefined8 ***)0x0;
          apuStack_80[0] = (undefined8 *)auStack_a0;
          lVar10 = param_2;
          FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apuStack_80,&uStack_81);
          if (*(long *)(lVar10 + 0x60) != 0) {
            piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(lVar10 + 0x28);
            }
          }
          *(undefined8 *)(lVar10 + 0x60) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x50) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          if (0 < *(int *)(lVar10 + 0x2c)) {
            lVar9 = 0;
            lVar11 = *(long *)(lVar10 + 0x68);
            do {
              *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar10 + 0x2c));
          }
          *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
          *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
          *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
          *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
          *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
          *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
          *(long *)(lVar10 + 0x60) = lStack_c8;
          *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
          puVar14 = *(undefined8 **)(lVar10 + 0x70);
          puVar12 = (undefined8 *)(lVar10 + 0x78);
          if (puVar14 != puVar12) {
            if (puVar14 != (undefined8 *)0x0) {
              _free(puVar14[-1]);
            }
            *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
            *(undefined8 **)(lVar10 + 0x70) = puVar12;
            puVar14 = puVar12;
          }
          if (iStack_fc < 3) {
            *puVar14 = *puStack_b8;
            puVar14[1] = puStack_b8[1];
          }
          else {
            *(ulong *)(lVar10 + 0x68) = uStack_c0;
            *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
            uStack_c0 = uVar16;
            puStack_b8 = &uStack_b0;
          }
          uStack_100 = 0x42ff0000;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if ((char)bStack_119 < '\0') {
            __ZdlPv(pppuStack_130);
          }
          if (cStack_101 < '\0') {
            __ZdlPv(apppuStack_118[0]);
          }
          if (lStack_c8 != 0) {
            piVar2 = (int *)(lStack_c8 + 0x14);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_100);
            }
          }
          lStack_c8 = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          if (0 < iStack_fc) {
            lVar10 = 0;
            do {
              *(undefined4 *)(uStack_c0 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < iStack_fc);
          }
          if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
            _free(puStack_b8[-1]);
          }
          lVar10 = *(long *)(param_1 + 0x228);
          uStack_100 = 0x42ff0000;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          auStack_a0._0_4_ = 0x2010000;
          ppuStack_90 = (undefined8 **)0x0;
          uStack_c0 = uVar16;
          puStack_b8 = &uStack_b0;
          uStack_98 = (undefined8 ***)&uStack_100;
          FUN_109a479a0(lVar10 + uVar15 * 0x60 + 0x2398,auStack_a0);
          uVar4 = *(ulong *)(param_1 + 0x10);
          if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
            uVar4 = (ulong)*(byte *)(param_1 + 0x1f);
          }
          func_0x000104c4f768(apppuStack_118,uVar4 + 0x15,&pppuStack_130);
          ppppuVar3 = (undefined8 ****)apppuStack_118[0];
          if (-1 < cStack_101) {
            ppppuVar3 = apppuStack_118;
          }
          if (uVar4 != 0) {
            lVar10 = *(long *)(param_1 + 8);
            if (-1 < *(char *)(param_1 + 0x1f)) {
              lVar10 = lVar1;
            }
            _memmove(ppppuVar3,lVar10,uVar4);
          }
          puVar12 = (undefined8 *)((long)ppppuVar3 + uVar4);
          puVar12[1] = 0x746d734247527468;
          *puVar12 = 0x6769725f7665645f;
          *(undefined8 *)((long)puVar12 + 0xd) = 0x4c5f646568746d73;
          *(undefined1 *)((long)puVar12 + 0x15) = 0;
          __ZNSt3__19to_stringEi(&pppuStack_130,uVar15);
          uVar4 = uStack_128;
          ppppuVar3 = (undefined8 ****)pppuStack_130;
          if (-1 < (char)bStack_119) {
            uVar4 = (ulong)bStack_119;
            ppppuVar3 = &pppuStack_130;
          }
          ppppuVar7 = apppuStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar7,ppppuVar3,uVar4);
          uStack_98 = ppppuVar7[1];
          auStack_a0 = (undefined1  [8])*ppppuVar7;
          ppuStack_90 = ppppuVar7[2];
          ppppuVar7[1] = (undefined8 ***)0x0;
          ppppuVar7[2] = (undefined8 ***)0x0;
          *ppppuVar7 = (undefined8 ***)0x0;
          apuStack_80[0] = (undefined8 *)auStack_a0;
          lVar10 = param_2;
          FUN_1095ff978(param_2,auStack_a0,&UNK_10dd5b8f9,apuStack_80,&uStack_81);
          if (*(long *)(lVar10 + 0x60) != 0) {
            piVar2 = (int *)(*(long *)(lVar10 + 0x60) + 0x14);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(lVar10 + 0x28);
            }
          }
          *(undefined8 *)(lVar10 + 0x60) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x50) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          if (0 < *(int *)(lVar10 + 0x2c)) {
            lVar9 = 0;
            lVar11 = *(long *)(lVar10 + 0x68);
            do {
              *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar10 + 0x2c));
          }
          *(ulong *)(lVar10 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
          *(ulong *)(lVar10 + 0x28) = CONCAT44(iStack_fc,uStack_100);
          *(ulong *)(lVar10 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
          *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
          *(ulong *)(lVar10 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
          *(ulong *)(lVar10 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
          *(long *)(lVar10 + 0x60) = lStack_c8;
          *(ulong *)(lVar10 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
          puVar14 = *(undefined8 **)(lVar10 + 0x70);
          puVar12 = (undefined8 *)(lVar10 + 0x78);
          if (puVar14 != puVar12) {
            if (puVar14 != (undefined8 *)0x0) {
              _free(puVar14[-1]);
            }
            *(long *)(lVar10 + 0x68) = lVar10 + 0x30;
            *(undefined8 **)(lVar10 + 0x70) = puVar12;
            puVar14 = puVar12;
          }
          if (iStack_fc < 3) {
            *puVar14 = *puStack_b8;
            puVar14[1] = puStack_b8[1];
          }
          else {
            *(ulong *)(lVar10 + 0x68) = uStack_c0;
            *(undefined8 **)(lVar10 + 0x70) = puStack_b8;
            uStack_c0 = uVar16;
            puStack_b8 = &uStack_b0;
          }
          uStack_100 = 0x42ff0000;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if ((char)bStack_119 < '\0') {
            __ZdlPv(pppuStack_130);
          }
          if (cStack_101 < '\0') {
            __ZdlPv(apppuStack_118[0]);
          }
          if (lStack_c8 != 0) {
            piVar2 = (int *)(lStack_c8 + 0x14);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_100);
            }
          }
          lStack_c8 = 0;
          uStack_e8 = 0;
          uStack_e4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          if (0 < iStack_fc) {
            lVar10 = 0;
            do {
              *(undefined4 *)(uStack_c0 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < iStack_fc);
          }
          if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
            _free(puStack_b8[-1]);
          }
          iVar8 = *(int *)(param_1 + 0xa3c);
        }
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)iVar8);
    }
  }
  return;
}



/* Entry: 109609e10; end: 109609e13;  */

undefined8 * FUN_109609e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aff898;
  if (param_1[0x14e] != 0) {
    __ZdlPv();
  }
  if (param_1[0x14b] != 0) {
    __ZdlPv();
  }
  if (param_1[0x148] != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109609e14; end: 109609e27;  */

void FUN_109609e14(void)

{
  FUN_10960a108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109609e28; end: 109609f6f;  */

long * FUN_109609e28(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  char cStack_b9;
  char cStack_b8;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined8 uStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x1745d1745d1745e) {
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x1745d1745d1745d;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1095ff478();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 0x16;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_109609f70(lVar5,param_2,param_3);
    plStack_48 = (long *)(lVar5 + 0xb0);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_1095ff4c0(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    FUN_1095ff754(&plStack_58);
    return plVar1;
  }
  FUN_1095ff464();
  FUN_1095ff754(&plStack_58);
  __Unwind_Resume(param_1);
  func_0x000107c31940(auStack_b0);
  auStack_d8[0] = 0;
  cStack_b8 = '\0';
  uStack_98 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_b0,&uStack_98,param_3,1,auStack_d8);
  if ((cStack_b8 == '\x01') && (cStack_b9 < '\0')) {
    __ZdlPv(uStack_d0);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  return param_1;
}



/* Entry: 109609f70; end: 10960a037;  */

undefined8 FUN_109609f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  char cStack_49;
  char cStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined8 uStack_28;
  
  func_0x000107c31940(auStack_40);
  auStack_68[0] = 0;
  cStack_48 = '\0';
  uStack_28 = NEON_rev64(*(undefined8 *)(param_3 + 8),4);
  FUN_1095ff24c(param_1,auStack_40,&uStack_28,param_3,1,auStack_68);
  if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
    __ZdlPv(uStack_60);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return param_1;
}



/* Entry: 10960a038; end: 10960a107;  */

undefined8 FUN_10960a038(undefined8 param_1,long param_2)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  char cStack_49;
  char cStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined8 uStack_28;
  
  func_0x000107c31940(auStack_40,&UNK_10f577bd7);
  auStack_68[0] = 0;
  cStack_48 = '\0';
  uStack_28 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_40,&uStack_28,param_2,1,auStack_68);
  if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
    __ZdlPv(uStack_60);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return param_1;
}



/* Entry: 10960a108; end: 10960a173;  */

undefined8 * FUN_10960a108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aff898;
  if (param_1[0x14e] != 0) {
    __ZdlPv();
  }
  if (param_1[0x14b] != 0) {
    __ZdlPv();
  }
  if (param_1[0x148] != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10960a174; end: 10960a29b;  */

void FUN_10960a174(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  
  uVar3 = *(int *)(param_1 + 0xc) * *param_2;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar5 + 8);
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar4 = (ulong)uVar1;
  uVar3 = param_2[1] * *(int *)(param_1 + 0xc);
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if ((int)uVar1 < (int)uVar2) {
    auVar14 = NEON_fmov(0x3f800000,4);
    do {
      pfVar6 = (float *)(*(long *)(lVar5 + 0x10) + **(long **)(lVar5 + 0x48) * uVar4);
      pfVar7 = (float *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) +
                        **(long **)(*(long *)(param_1 + 0x18) + 0x48) * uVar4);
      pfVar8 = (float *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) +
                        **(long **)(*(long *)(param_1 + 0x20) + 0x48) * uVar4);
      pfVar9 = (float *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) +
                        **(long **)(*(long *)(param_1 + 0x28) + 0x48) * uVar4);
      iVar10 = *(int *)(lVar5 + 0xc);
      if (iVar10 < 5) {
        iVar12 = 0;
      }
      else {
        lVar13 = 0;
        iVar12 = 0;
        do {
          uVar16 = ((undefined8 *)((long)pfVar6 + lVar13))[1];
          uVar15 = *(undefined8 *)((long)pfVar6 + lVar13);
          uVar18 = ((undefined8 *)((long)pfVar7 + lVar13))[1];
          uVar17 = *(undefined8 *)((long)pfVar7 + lVar13);
          uVar23 = ((undefined8 *)((long)pfVar8 + lVar13))[1];
          uVar20 = *(undefined8 *)((long)pfVar8 + lVar13);
          fVar19 = (float)uVar20;
          fVar21 = (float)((ulong)uVar20 >> 0x20);
          fVar22 = (float)uVar23;
          fVar24 = (float)((ulong)uVar23 >> 0x20);
          ((undefined8 *)((long)pfVar9 + lVar13))[1] =
               CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar24 +
                        (float)((ulong)uVar18 >> 0x20) * (auVar14._12_4_ - fVar24),
                        (float)uVar16 * fVar22 + (float)uVar18 * (auVar14._8_4_ - fVar22));
          *(undefined8 *)((long)pfVar9 + lVar13) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar21 +
                        (float)((ulong)uVar17 >> 0x20) * (auVar14._4_4_ - fVar21),
                        (float)uVar15 * fVar19 + (float)uVar17 * (auVar14._0_4_ - fVar19));
          iVar12 = iVar12 + 4;
          lVar5 = *(long *)(param_1 + 0x10);
          iVar10 = *(int *)(lVar5 + 0xc);
          lVar13 = lVar13 + 0x10;
        } while (iVar12 < iVar10 + -4);
        pfVar9 = (float *)((long)pfVar9 + lVar13);
        pfVar8 = (float *)((long)pfVar8 + lVar13);
        pfVar7 = (float *)((long)pfVar7 + lVar13);
        pfVar6 = (float *)((long)pfVar6 + lVar13);
      }
      iVar11 = iVar10 - iVar12;
      if (iVar11 != 0 && iVar12 <= iVar10) {
        do {
          *pfVar9 = *pfVar7 * (1.0 - *pfVar8) + *pfVar8 * *pfVar6;
          iVar11 = iVar11 + -1;
          pfVar6 = pfVar6 + 1;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar11 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  return;
}



/* Entry: 10960a29c; end: 10960a39b;  */

void FUN_10960a29c(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 uStack_70;
  int iStack_6c;
  undefined **ppuStack_68;
  int iStack_60;
  int iStack_5c;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(uint **)(param_1 + 0x40);
  ppuStack_68 = *(undefined ***)puVar1;
  if (((2 < (int)param_4[1] || param_4[2] != *puVar1) || param_4[3] != puVar1[1]) ||
     ((*param_4 & 0xfff) != 5 || *(long *)(param_4 + 4) == 0)) {
    FUN_109a83fd0(param_4,2,&ppuStack_68,5);
  }
  ppuStack_68 = &PTR_FUN_110aff920;
  iStack_5c = (int)((double)*(int *)(param_1 + 8) / (double)iRam00000001132dfb70);
  iStack_60 = iRam00000001132dfb70;
  uStack_70 = 0;
  iStack_6c = iRam00000001132dfb70;
  lStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  puStack_40 = param_4;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_70,&ppuStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 10960a39c; end: 10960a39f;  */

void FUN_10960a39c(void)

{
  return;
}



/* Entry: 10960a3a0; end: 10960a74f;  */

void FUN_10960a3a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  undefined4 auStack_128 [2];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  
  FUN_109a890bc(auStack_b0,param_1,1,*(int *)(param_1 + 8) * *(int *)(param_1 + 0xc));
  plVar10 = param_2 + 2;
  if (*plVar10 != 0) {
    uVar4 = (ulong)*(uint *)((long)param_2 + 4);
    if ((int)*(uint *)((long)param_2 + 4) < 3) {
      lVar6 = (long)*(int *)((long)param_2 + 0xc) * (long)*(int *)(param_2 + 1);
    }
    else {
      lVar6 = 1;
      piVar9 = (int *)param_2[8];
      do {
        lVar6 = lVar6 * *piVar9;
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar4 != 0);
    }
    if (lVar6 != 0) {
      FUN_109a890bc(&uStack_110,param_2,1,*(int *)(param_2 + 1) * *(int *)((long)param_2 + 0xc));
      if (param_2[7] != 0) {
        piVar9 = (int *)(param_2[7] + 0x14);
        do {
          iVar1 = *piVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(param_2);
        }
      }
      param_2[7] = 0;
      param_2[3] = 0;
      *plVar10 = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      if (0 < *(int *)((long)param_2 + 4)) {
        lVar6 = 0;
        lVar7 = param_2[8];
        do {
          *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)((long)param_2 + 4));
      }
      param_2[1] = puStack_108;
      *param_2 = CONCAT44(iStack_10c,uStack_110);
      param_2[3] = uStack_f8;
      param_2[2] = uStack_100;
      param_2[5] = uStack_e8;
      param_2[4] = uStack_f0;
      param_2[7] = uStack_d8;
      param_2[6] = uStack_e0;
      puVar8 = (undefined8 *)param_2[9];
      puVar5 = param_2 + 10;
      if (puVar8 != puVar5) {
        if (puVar8 != (undefined8 *)0x0) {
          _free(puVar8[-1]);
        }
        param_2[8] = param_2 + 1;
        param_2[9] = puVar5;
        puVar8 = puVar5;
      }
      if (iStack_10c < 3) {
        puVar5 = (undefined8 *)((ulong)&uStack_110 | 4);
        *puVar8 = *puStack_c8;
        puVar8[1] = puStack_c8[1];
        uStack_110 = 0x42ff0000;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        *(undefined8 *)((long)puVar5 + 0x34) = 0;
        *(undefined8 *)((long)puVar5 + 0x2c) = 0;
        if (puStack_c8 != auStack_c0) {
          _free(puStack_c8[-1]);
        }
      }
      else {
        param_2[8] = uStack_d0;
        param_2[9] = puStack_c8;
      }
    }
  }
  uStack_100 = 0;
  uStack_110 = 0x1010000;
  auStack_128[0] = 0x2010000;
  uStack_118 = 0;
  puStack_120 = param_2;
  puStack_108 = auStack_b0;
  FUN_109a93444(&uStack_110,auStack_128,1,0,param_3);
  FUN_109a890bc(&uStack_110,param_2,1,*(undefined4 *)(param_1 + 8));
  if (param_2[7] != 0) {
    piVar9 = (int *)(param_2[7] + 0x14);
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  param_2[7] = 0;
  param_2[3] = 0;
  *plVar10 = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  if (0 < *(int *)((long)param_2 + 4)) {
    lVar6 = 0;
    lVar7 = param_2[8];
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_2 + 4));
  }
  param_2[1] = puStack_108;
  *param_2 = CONCAT44(iStack_10c,uStack_110);
  param_2[3] = uStack_f8;
  param_2[2] = uStack_100;
  param_2[5] = uStack_e8;
  param_2[4] = uStack_f0;
  param_2[7] = uStack_d8;
  param_2[6] = uStack_e0;
  puVar8 = (undefined8 *)param_2[9];
  puVar5 = param_2 + 10;
  if (puVar8 != puVar5) {
    if (puVar8 != (undefined8 *)0x0) {
      _free(puVar8[-1]);
    }
    param_2[8] = param_2 + 1;
    param_2[9] = puVar5;
    puVar8 = puVar5;
  }
  if (iStack_10c < 3) {
    puVar5 = (undefined8 *)((ulong)&uStack_110 | 4);
    *puVar8 = *puStack_c8;
    puVar8[1] = puStack_c8[1];
    uStack_110 = 0x42ff0000;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 0;
    *(undefined8 *)((long)puVar5 + 0x2c) = 0;
    if (puStack_c8 != auStack_c0) {
      _free(puStack_c8[-1]);
    }
  }
  else {
    param_2[8] = uStack_d0;
    param_2[9] = puStack_c8;
  }
  if (lStack_78 != 0) {
    piVar9 = (int *)(lStack_78 + 0x14);
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < iStack_ac) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_ac);
  }
  if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_68 + -8));
  }
  return;
}



/* Entry: 10960a750; end: 10960a783;  */

void FUN_10960a750(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar9 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  puVar7 = (undefined8 *)(param_2 - uVar9);
  lVar11 = param_1[1];
  if ((undefined8 *)(param_1[2] - lVar11 >> 3) < puVar7) {
    lVar11 = lVar11 - *param_1;
    uVar9 = (long)puVar7 + (lVar11 >> 3);
    if (uVar9 >> 0x3d != 0) {
      FUN_10960a940();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar4 = (undefined4 *)*param_1;
      puVar5 = (undefined4 *)param_1[1];
      puVar3 = (undefined4 *)((long)puVar4 + (puVar7[1] - (long)puVar5));
      puVar2 = puVar3;
      for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = puVar1 + 2) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2 = puVar2 + 2;
      }
      puVar7[1] = puVar3;
      lVar11 = *param_1;
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar4;
      puVar7[1] = lVar11;
      lVar11 = param_1[1];
      param_1[1] = puVar7[2];
      puVar7[2] = lVar11;
      lVar11 = param_1[2];
      param_1[2] = puVar7[3];
      puVar7[3] = lVar11;
      *puVar7 = puVar7[1];
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10960a954();
    }
    lVar11 = (long)plVar6 + lVar11;
    plStack_40 = plVar6 + uVar10;
    plStack_58 = plVar6;
    lStack_50 = lVar11;
    _bzero(lVar11,(long)puVar7 * 8);
    lStack_48 = lVar11 + (long)puVar7 * 8;
    FUN_10960a8c4(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (puVar7 != (undefined8 *)0x0) {
      _bzero(lVar11,(long)puVar7 * 8);
      lVar11 = lVar11 + (long)puVar7 * 8;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 10960a784; end: 10960a8c3;  */

void FUN_10960a784(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1];
  if ((undefined8 *)(param_1[2] - lVar10 >> 3) < param_2) {
    lVar10 = lVar10 - *param_1;
    uVar3 = (long)param_2 + (lVar10 >> 3);
    if (uVar3 >> 0x3d != 0) {
      FUN_10960a940();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar5 = (undefined4 *)*param_1;
      puVar6 = (undefined4 *)param_1[1];
      puVar4 = (undefined4 *)((long)puVar5 + (param_2[1] - (long)puVar6));
      puVar2 = puVar4;
      for (puVar1 = puVar5; puVar6 != puVar1; puVar1 = puVar1 + 2) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2 = puVar2 + 2;
      }
      param_2[1] = puVar4;
      lVar10 = *param_1;
      *param_1 = (long)puVar4;
      param_1[1] = (long)puVar5;
      param_2[1] = lVar10;
      lVar10 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar10;
      lVar10 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar10;
      *param_2 = param_2[1];
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_10960a954();
    }
    lVar10 = (long)plVar7 + lVar10;
    plStack_40 = plVar7 + uVar9;
    plStack_58 = plVar7;
    lStack_50 = lVar10;
    _bzero(lVar10,(long)param_2 << 3);
    lStack_48 = lVar10 + (long)param_2 * 8;
    FUN_10960a8c4(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      _bzero(lVar10,(long)param_2 << 3);
      lVar10 = lVar10 + (long)param_2 * 8;
    }
    param_1[1] = lVar10;
  }
  return;
}



/* Entry: 10960a8c4; end: 10960a93f;  */

void FUN_10960a8c4(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  
  puVar4 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  puVar3 = (undefined4 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = puVar1 + 2) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2 = puVar2 + 2;
  }
  param_2[1] = puVar3;
  lVar6 = *param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10960a940; end: 10960a953;  */

undefined1  [16]
FUN_10960a940(undefined8 param_1,long *param_2,long *param_3,undefined1 param_4,undefined4 param_5,
             undefined1 param_6)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long **pplVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_13c [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_11c [4];
  long lStack_118;
  long *plStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar6 = (long)param_2 << 3;
    __Znwm(lVar6);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar6;
    return auVar18;
  }
  func_0x000104c4f740();
  lVar6 = plVar5[1] - *plVar5;
  uVar1 = (lVar6 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar10 = plVar5[2] - *plVar5;
    uVar14 = (long)uVar10 >> 2;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar14 = 0x1fffffffffffffff;
    }
    plStack_68 = plVar5;
    if (uVar14 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = plVar5;
      FUN_10960a954();
    }
    puStack_80 = (undefined4 *)((long)plVar7 + lVar6);
    plStack_70 = plVar7 + uVar14;
    *puStack_80 = (int)*param_2;
    puStack_80[1] = *(undefined4 *)((long)param_2 + 4);
    puStack_78 = puStack_80 + 2;
    pplVar9 = &plStack_88;
    plStack_88 = plVar7;
    FUN_10960a8c4(plVar5,pplVar9);
    lVar6 = plVar5[1];
    if (puStack_78 != puStack_80) {
      puStack_78 = (undefined4 *)
                   ((long)puStack_78 +
                   ((ulong)((long)puStack_80 + (7 - (long)puStack_78)) & 0xfffffffffffffff8));
    }
    if (plStack_88 != (long *)0x0) {
      __ZdlPv();
    }
    auVar19._8_8_ = pplVar9;
    auVar19._0_8_ = lVar6;
    return auVar19;
  }
  FUN_10960a940();
  if (puStack_78 != puStack_80) {
    puStack_78 = (undefined4 *)
                 ((long)puStack_78 +
                 (((long)puStack_80 - (long)puStack_78) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_88 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar5 + 1;
  *plVar5 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7,*param_2,param_2[1]);
  }
  else {
    lVar12 = param_2[1];
    lVar6 = *param_2;
    plVar5[3] = param_2[2];
    plVar5[2] = lVar12;
    *plVar7 = lVar6;
  }
  _bzero(plVar5 + 4,0x201);
  *plVar5 = (long)&PTR_DAT_110aff960;
  plVar5[0x45] = 0;
  *(undefined1 *)(plVar5 + 0x46) = 1;
  *(undefined1 *)((long)plVar5 + 0x231) = param_6;
  *(undefined8 *)((long)plVar5 + 0x23c) = 0;
  *(undefined8 *)((long)plVar5 + 0x234) = 0;
  *(undefined8 *)((long)plVar5 + 0x24c) = 0;
  *(undefined8 *)((long)plVar5 + 0x244) = 0;
  *(undefined8 *)((long)plVar5 + 0x25c) = 0;
  *(undefined8 *)((long)plVar5 + 0x254) = 0;
  *(undefined8 *)((long)plVar5 + 0x261) = 0;
  *(undefined1 *)((long)plVar5 + 0x269) = param_4;
  *(undefined4 *)((long)plVar5 + 0x26c) = param_5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 0x4e,*param_3,param_3[1]);
  }
  else {
    lVar12 = param_3[1];
    lVar6 = *param_3;
    plVar5[0x50] = param_3[2];
    plVar5[0x4f] = lVar12;
    plVar5[0x4e] = lVar6;
  }
  uStack_128 = 0xb00000009;
  uStack_130 = 0x700000005;
  uStack_120 = 0x15;
  lStack_160 = 0;
  uStack_158 = 0;
  lStack_168 = 0;
  FUN_1092d1c20(&lStack_168,&uStack_130,auStack_11c,5);
  uStack_148 = 0xb00000009;
  uStack_150 = 0x500000005;
  uStack_140 = 0x2d;
  lStack_178 = 0;
  uStack_170 = 0;
  lStack_180 = 0;
  FUN_1092d1c20(&lStack_180,&uStack_150,auStack_13c,5);
  FUN_1095d9034(plVar5 + 0x51,&lStack_168,&lStack_180,3);
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  *(undefined4 *)(plVar5 + 0x54) = 0x42ff0000;
  *(undefined8 *)((long)plVar5 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar5 + 0x2a4) = 0;
  *(undefined8 *)((long)plVar5 + 700) = 0;
  *(undefined8 *)((long)plVar5 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar5 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2c4) = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x5c] = (long)(plVar5 + 0x55);
  plVar5[0x5d] = (long)(plVar5 + 0x5e);
  plVar5[0x5f] = 0;
  plVar5[0x5e] = 0;
  plVar5[0x61] = 0;
  plVar5[0x60] = 0;
  plVar5[99] = 0;
  plVar5[0x62] = 0;
  plVar5[0x65] = 0;
  plVar5[100] = 0;
  plVar5[0x67] = 0;
  plVar5[0x66] = 0;
  plVar5[0x69] = 0;
  plVar5[0x68] = 0;
  plVar5[0x6b] = 0;
  plVar5[0x6a] = 0;
  plVar5[0x6d] = 0;
  plVar5[0x6c] = 0;
  plVar5[0x6e] = 0;
  *(undefined4 *)(plVar5 + 0x6f) = 0x42ff0000;
  *(undefined8 *)((long)plVar5 + 900) = 0;
  *(undefined8 *)((long)plVar5 + 0x37c) = 0;
  *(undefined8 *)((long)plVar5 + 0x394) = 0;
  *(undefined8 *)((long)plVar5 + 0x38c) = 0;
  *(undefined8 *)((long)plVar5 + 0x3a4) = 0;
  *(undefined8 *)((long)plVar5 + 0x39c) = 0;
  plVar5[0x76] = 0;
  plVar5[0x75] = 0;
  plVar5[0x77] = (long)(plVar5 + 0x70);
  plVar5[0x78] = (long)(plVar5 + 0x79);
  *(undefined4 *)(plVar5 + 4) = 0;
  plVar5[0x7b] = 0;
  plVar5[0x7a] = 0;
  plVar5[0x79] = 0;
  plVar5[6] = 0x3a83126f40400000;
  plVar5[5] = 0x47c3500042c80000;
  plVar5[7] = 0x3d4ccccd38d1b717;
  fVar15 = 0.07;
  _tanf();
  *(float *)(plVar5 + 8) = fVar15 / 10.0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0x447a000040600000;
  *(undefined8 *)((long)plVar5 + 0x44) = 0x4040000040400000;
  *(undefined8 *)((long)plVar5 + 0x5c) = 0x41a0000040000000;
  *(undefined8 *)((long)plVar5 + 0x54) = 0x41300000;
  *(float *)((long)plVar5 + 100) =
       (float)(ulong)((plVar5[0x52] - plVar5[0x51] >> 4) * 0x4fcace213f2b3885) * 300.0;
  plVar5[0xe] = 0x430c0000;
  plVar5[0xd] = 0x41a0000041000000;
  plVar5[0x10] = 0x3f80000000000000;
  plVar5[0xf] = 0x47435000;
  plVar5[0x12] = 0x40000000410ccccd;
  plVar5[0x11] = 0x3f00000041200000;
  FUN_1093f458c(plVar5 + 0x66,50000);
  FUN_1093f458c(plVar5 + 0x69,(long)(int)*(float *)(plVar5 + 0xf));
  lVar6 = (long)(int)*(float *)(plVar5 + 0xf);
  func_0x000107c31950(plVar5 + 0x6c,lVar6);
  fVar15 = *(float *)((long)plVar5 + 0x54);
  fVar16 = *(float *)((long)plVar5 + 0x5c);
  fVar17 = *(float *)(plVar5 + 0xc);
  piVar8 = (int *)0x30;
  __Znwm();
  *piVar8 = (int)fVar15;
  piVar8[1] = (int)fVar15;
  piVar8[2] = (int)fVar16;
  *(ulong *)(piVar8 + 4) = (ulong)(uint)(int)fVar17 << 0x20 | 3;
  piVar8[6] = -0x66666666;
  piVar8[7] = 0x3fb99999;
  piVar8[8] = 4;
  piVar8[10] = -0x14e3bcd3;
  piVar8[0xb] = 0x3f1a36e2;
  piVar11 = (int *)plVar5[0x7b];
  plVar5[0x7b] = (long)piVar8;
  if (piVar11 != (int *)0x0) {
    __ZdlPv();
    piVar8 = piVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    auVar20._8_8_ = lVar6;
    auVar20._0_8_ = plVar5;
    return auVar20;
  }
  ___stack_chk_fail();
  FUN_1096162b4(plVar5 + 0x4a);
  FUN_1096162b4(plVar5 + 0x47);
  *plVar5 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)plVar5 + 0x1f) < '\0') {
    __ZdlPv(*plVar7);
  }
  __Unwind_Resume();
  if (*(long *)(piVar8 + 0xe) != 0) {
    piVar11 = (int *)(*(long *)(piVar8 + 0xe) + 0x14);
    do {
      iVar2 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(piVar8);
    }
  }
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[8] = 0;
  piVar8[9] = 0;
  if (0 < piVar8[1]) {
    lVar12 = 0;
    lVar13 = *(long *)(piVar8 + 0x10);
    do {
      *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < piVar8[1]);
  }
  piVar11 = *(int **)(piVar8 + 0x12);
  if (piVar11 != piVar8 + 0x14 && piVar11 != (int *)0x0) {
    _free(*(undefined8 *)(piVar11 + -2));
  }
  auVar21._8_8_ = lVar6;
  auVar21._0_8_ = piVar8;
  return auVar21;
}



/* Entry: 10960a954; end: 10960a987;  */

undefined1  [16]
FUN_10960a954(long *param_1,long *param_2,long *param_3,undefined1 param_4,undefined4 param_5,
             undefined1 param_6)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long **pplVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 auStack_12c [12];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_10c [4];
  long lStack_108;
  long *plStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar5;
    return auVar17;
  }
  func_0x000104c4f740();
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar13 = (long)uVar9 >> 2;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar13 = 0x1fffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar13 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10960a954();
    }
    puStack_70 = (undefined4 *)((long)plVar6 + lVar5);
    plStack_60 = plVar6 + uVar13;
    *puStack_70 = (int)*param_2;
    puStack_70[1] = *(undefined4 *)((long)param_2 + 4);
    puStack_68 = puStack_70 + 2;
    pplVar8 = &plStack_78;
    plStack_78 = plVar6;
    FUN_10960a8c4(param_1,pplVar8);
    lVar5 = param_1[1];
    if (puStack_68 != puStack_70) {
      puStack_68 = (undefined4 *)
                   ((long)puStack_68 +
                   ((long)puStack_70 + (7 - (long)puStack_68) & 0xfffffffffffffff8U));
    }
    if (plStack_78 != (long *)0x0) {
      __ZdlPv();
    }
    auVar18._8_8_ = pplVar8;
    auVar18._0_8_ = lVar5;
    return auVar18;
  }
  FUN_10960a940();
  if (puStack_68 != puStack_70) {
    puStack_68 = (undefined4 *)
                 ((long)puStack_68 +
                 (((long)puStack_70 - (long)puStack_68) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_78 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1 + 1;
  *param_1 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar6,*param_2,param_2[1]);
  }
  else {
    lVar11 = param_2[1];
    lVar5 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar11;
    *plVar6 = lVar5;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = (long)&PTR_DAT_110aff960;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((long)param_1 + 0x231) = param_6;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x261) = 0;
  *(undefined1 *)((long)param_1 + 0x269) = param_4;
  *(undefined4 *)((long)param_1 + 0x26c) = param_5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x4e,*param_3,param_3[1]);
  }
  else {
    lVar11 = param_3[1];
    lVar5 = *param_3;
    param_1[0x50] = param_3[2];
    param_1[0x4f] = lVar11;
    param_1[0x4e] = lVar5;
  }
  uStack_118 = 0xb00000009;
  uStack_120 = 0x700000005;
  uStack_110 = 0x15;
  lStack_150 = 0;
  uStack_148 = 0;
  lStack_158 = 0;
  FUN_1092d1c20(&lStack_158,&uStack_120,auStack_10c,5);
  uStack_138 = 0xb00000009;
  uStack_140 = 0x500000005;
  uStack_130 = 0x2d;
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_170 = 0;
  FUN_1092d1c20(&lStack_170,&uStack_140,auStack_12c,5);
  FUN_1095d9034(param_1 + 0x51,&lStack_158,&lStack_170,3);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  *(undefined4 *)(param_1 + 0x54) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = (long)(param_1 + 0x55);
  param_1[0x5d] = (long)(param_1 + 0x5e);
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = (long)(param_1 + 0x70);
  param_1[0x78] = (long)(param_1 + 0x79);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[6] = 0x3a83126f40400000;
  param_1[5] = 0x47c3500042c80000;
  param_1[7] = 0x3d4ccccd38d1b717;
  fVar14 = 0.07;
  _tanf();
  *(float *)(param_1 + 8) = fVar14 / 10.0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x447a000040600000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x4040000040400000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x41a0000040000000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x41300000;
  *(float *)((long)param_1 + 100) =
       (float)(ulong)((param_1[0x52] - param_1[0x51] >> 4) * 0x4fcace213f2b3885) * 300.0;
  param_1[0xe] = 0x430c0000;
  param_1[0xd] = 0x41a0000041000000;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0x47435000;
  param_1[0x12] = 0x40000000410ccccd;
  param_1[0x11] = 0x3f00000041200000;
  FUN_1093f458c(param_1 + 0x66,50000);
  FUN_1093f458c(param_1 + 0x69,(long)(int)*(float *)(param_1 + 0xf));
  lVar5 = (long)(int)*(float *)(param_1 + 0xf);
  func_0x000107c31950(param_1 + 0x6c,lVar5);
  fVar14 = *(float *)((long)param_1 + 0x54);
  fVar15 = *(float *)((long)param_1 + 0x5c);
  fVar16 = *(float *)(param_1 + 0xc);
  piVar7 = (int *)0x30;
  __Znwm();
  *piVar7 = (int)fVar14;
  piVar7[1] = (int)fVar14;
  piVar7[2] = (int)fVar15;
  *(ulong *)(piVar7 + 4) = (ulong)(uint)(int)fVar16 << 0x20 | 3;
  piVar7[6] = -0x66666666;
  piVar7[7] = 0x3fb99999;
  piVar7[8] = 4;
  piVar7[10] = -0x14e3bcd3;
  piVar7[0xb] = 0x3f1a36e2;
  piVar10 = (int *)param_1[0x7b];
  param_1[0x7b] = (long)piVar7;
  if (piVar10 != (int *)0x0) {
    __ZdlPv();
    piVar7 = piVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    auVar19._8_8_ = lVar5;
    auVar19._0_8_ = param_1;
    return auVar19;
  }
  ___stack_chk_fail();
  FUN_1096162b4(param_1 + 0x4a);
  FUN_1096162b4(param_1 + 0x47);
  *param_1 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*plVar6);
  }
  __Unwind_Resume();
  if (*(long *)(piVar7 + 0xe) != 0) {
    piVar10 = (int *)(*(long *)(piVar7 + 0xe) + 0x14);
    do {
      iVar2 = *piVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(piVar7);
    }
  }
  piVar7[0xe] = 0;
  piVar7[0xf] = 0;
  piVar7[6] = 0;
  piVar7[7] = 0;
  piVar7[4] = 0;
  piVar7[5] = 0;
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[8] = 0;
  piVar7[9] = 0;
  if (0 < piVar7[1]) {
    lVar11 = 0;
    lVar12 = *(long *)(piVar7 + 0x10);
    do {
      *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < piVar7[1]);
  }
  piVar10 = *(int **)(piVar7 + 0x12);
  if (piVar10 != piVar7 + 0x14 && piVar10 != (int *)0x0) {
    _free(*(undefined8 *)(piVar10 + -2));
  }
  auVar20._8_8_ = lVar5;
  auVar20._0_8_ = piVar7;
  return auVar20;
}



/* Entry: 10960a988; end: 10960aaab;  */

long * FUN_10960a988(long *param_1,long *param_2,long *param_3,undefined1 param_4,undefined4 param_5
                    ,undefined1 param_6)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_10c [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_ec [4];
  long lStack_e8;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar12 = param_1[1] - *param_1;
  uVar1 = (lVar12 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar10 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = param_1;
      FUN_10960a954();
    }
    puStack_50 = (undefined4 *)((long)plVar11 + lVar12);
    plStack_40 = plVar11 + uVar10;
    *puStack_50 = (int)*param_2;
    puStack_50[1] = *(undefined4 *)((long)param_2 + 4);
    puStack_48 = puStack_50 + 2;
    plStack_58 = plVar11;
    FUN_10960a8c4(param_1,&plStack_58);
    plVar11 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar11;
  }
  FUN_10960a940();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_1 + 1;
  *param_1 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar11,*param_2,param_2[1]);
  }
  else {
    lVar9 = param_2[1];
    lVar12 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = lVar9;
    *plVar11 = lVar12;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = (long)&PTR_DAT_110aff960;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((long)param_1 + 0x231) = param_6;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x261) = 0;
  *(undefined1 *)((long)param_1 + 0x269) = param_4;
  *(undefined4 *)((long)param_1 + 0x26c) = param_5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x4e,*param_3,param_3[1]);
  }
  else {
    lVar9 = param_3[1];
    lVar12 = *param_3;
    param_1[0x50] = param_3[2];
    param_1[0x4f] = lVar9;
    param_1[0x4e] = lVar12;
  }
  uStack_f8 = 0xb00000009;
  uStack_100 = 0x700000005;
  uStack_f0 = 0x15;
  lStack_130 = 0;
  uStack_128 = 0;
  lStack_138 = 0;
  FUN_1092d1c20(&lStack_138,&uStack_100,auStack_ec,5);
  uStack_118 = 0xb00000009;
  uStack_120 = 0x500000005;
  uStack_110 = 0x2d;
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  FUN_1092d1c20(&lStack_150,&uStack_120,auStack_10c,5);
  FUN_1095d9034(param_1 + 0x51,&lStack_138,&lStack_150,3);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  *(undefined4 *)(param_1 + 0x54) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = (long)(param_1 + 0x55);
  param_1[0x5d] = (long)(param_1 + 0x5e);
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = (long)(param_1 + 0x70);
  param_1[0x78] = (long)(param_1 + 0x79);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[6] = 0x3a83126f40400000;
  param_1[5] = 0x47c3500042c80000;
  param_1[7] = 0x3d4ccccd38d1b717;
  fVar13 = 0.07;
  _tanf();
  *(float *)(param_1 + 8) = fVar13 / 10.0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x447a000040600000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x4040000040400000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x41a0000040000000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x41300000;
  *(float *)((long)param_1 + 100) =
       (float)(ulong)((param_1[0x52] - param_1[0x51] >> 4) * 0x4fcace213f2b3885) * 300.0;
  param_1[0xe] = 0x430c0000;
  param_1[0xd] = 0x41a0000041000000;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0x47435000;
  param_1[0x12] = 0x40000000410ccccd;
  param_1[0x11] = 0x3f00000041200000;
  FUN_1093f458c(param_1 + 0x66,50000);
  FUN_1093f458c(param_1 + 0x69,(long)(int)*(float *)(param_1 + 0xf));
  func_0x000107c31950(param_1 + 0x6c,(long)(int)*(float *)(param_1 + 0xf));
  fVar13 = *(float *)((long)param_1 + 0x54);
  fVar14 = *(float *)((long)param_1 + 0x5c);
  fVar15 = *(float *)(param_1 + 0xc);
  plVar6 = (long *)0x30;
  __Znwm();
  *(int *)plVar6 = (int)fVar13;
  *(int *)((long)plVar6 + 4) = (int)fVar13;
  *(int *)(plVar6 + 1) = (int)fVar14;
  plVar6[2] = (ulong)(uint)(int)fVar15 << 0x20 | 3;
  plVar6[3] = 0x3fb999999999999a;
  *(int *)(plVar6 + 4) = 4;
  plVar6[5] = 0x3f1a36e2eb1c432d;
  plVar8 = (long *)param_1[0x7b];
  param_1[0x7b] = (long)plVar6;
  if (plVar8 != (long *)0x0) {
    __ZdlPv();
    plVar6 = plVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1096162b4(param_1 + 0x4a);
  FUN_1096162b4(param_1 + 0x47);
  *param_1 = (long)&PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*plVar11);
  }
  __Unwind_Resume();
  if (plVar6[7] != 0) {
    piVar2 = (int *)(plVar6[7] + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(plVar6);
    }
  }
  plVar6[7] = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  if (0 < *(int *)((long)plVar6 + 4)) {
    lVar12 = 0;
    lVar9 = plVar6[8];
    do {
      *(undefined4 *)(lVar9 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)plVar6 + 4));
  }
  plVar11 = (long *)plVar6[9];
  if (plVar11 != plVar6 + 10 && plVar11 != (long *)0x0) {
    _free(plVar11[-1]);
  }
  return plVar6;
}



/* Entry: 10960aaac; end: 10960af53;  */

int * FUN_10960aaac(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                   int param_5,undefined1 param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_ac [12];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar7 = param_1 + 2;
  *(undefined ***)param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(piVar7,*param_2,param_2[1]);
  }
  else {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    *(undefined8 *)(param_1 + 6) = param_2[2];
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)piVar7 = uVar9;
  }
  _bzero(param_1 + 8,0x201);
  *(undefined ***)param_1 = &PTR_DAT_110aff960;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined1 *)((long)param_1 + 0x231) = param_6;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((long)param_1 + 0x261) = 0;
  *(undefined1 *)((long)param_1 + 0x269) = param_4;
  param_1[0x9b] = param_5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x9c,*param_3,param_3[1]);
  }
  else {
    uVar10 = param_3[1];
    uVar9 = *param_3;
    *(undefined8 *)(param_1 + 0xa0) = param_3[2];
    *(undefined8 *)(param_1 + 0x9e) = uVar10;
    *(undefined8 *)(param_1 + 0x9c) = uVar9;
  }
  uStack_98 = 0xb00000009;
  uStack_a0 = 0x700000005;
  uStack_90 = 0x15;
  lStack_d0 = 0;
  uStack_c8 = 0;
  lStack_d8 = 0;
  FUN_1092d1c20(&lStack_d8,&uStack_a0,auStack_8c,5);
  uStack_b8 = 0xb00000009;
  uStack_c0 = 0x500000005;
  uStack_b0 = 0x2d;
  lStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f0 = 0;
  FUN_1092d1c20(&lStack_f0,&uStack_c0,auStack_ac,5);
  FUN_1095d9034(param_1 + 0xa2,&lStack_d8,&lStack_f0,3);
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  param_1[0xa8] = 0x42ff0000;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(int **)(param_1 + 0xb8) = param_1 + 0xaa;
  *(int **)(param_1 + 0xba) = param_1 + 0xbc;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0x42ff0000;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(int **)(param_1 + 0xee) = param_1 + 0xe0;
  piVar4 = param_1 + 0xf2;
  *(int **)(param_1 + 0xf0) = piVar4;
  param_1[8] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[0xc] = 0x40400000;
  param_1[0xd] = 0x3a83126f;
  param_1[10] = 0x42c80000;
  param_1[0xb] = 0x47c35000;
  param_1[0xe] = 0x38d1b717;
  param_1[0xf] = 0x3d4ccccd;
  fVar11 = 0.07;
  _tanf();
  param_1[0x10] = (int)(fVar11 / 10.0);
  param_1[0x13] = 0x40600000;
  param_1[0x14] = 0x447a0000;
  param_1[0x11] = 0x40400000;
  param_1[0x12] = 0x40400000;
  param_1[0x17] = 0x40000000;
  param_1[0x18] = 0x41a00000;
  param_1[0x15] = 0x41300000;
  param_1[0x16] = 0;
  param_1[0x19] =
       (int)((float)(ulong)((*(long *)(param_1 + 0xa4) - *(long *)(param_1 + 0xa2) >> 4) *
                           0x4fcace213f2b3885) * 300.0);
  param_1[0x1c] = 0x430c0000;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0x41000000;
  param_1[0x1b] = 0x41a00000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x1e] = 0x47435000;
  param_1[0x1f] = 0;
  param_1[0x24] = 0x410ccccd;
  param_1[0x25] = 0x40000000;
  param_1[0x22] = 0x41200000;
  param_1[0x23] = 0x3f000000;
  FUN_1093f458c(param_1 + 0xcc,50000);
  FUN_1093f458c(param_1 + 0xd2,(long)(int)(float)param_1[0x1e]);
  func_0x000107c31950(param_1 + 0xd8,(long)(int)(float)param_1[0x1e]);
  fVar11 = (float)param_1[0x15];
  fVar12 = (float)param_1[0x17];
  fVar13 = (float)param_1[0x18];
  piVar4 = (int *)0x30;
  __Znwm();
  *piVar4 = (int)fVar11;
  piVar4[1] = (int)fVar11;
  piVar4[2] = (int)fVar12;
  *(ulong *)(piVar4 + 4) = (ulong)(uint)(int)fVar13 << 0x20 | 3;
  piVar4[6] = -0x66666666;
  piVar4[7] = 0x3fb99999;
  piVar4[8] = 4;
  piVar4[10] = -0x14e3bcd3;
  piVar4[0xb] = 0x3f1a36e2;
  piVar5 = *(int **)(param_1 + 0xf6);
  *(int **)(param_1 + 0xf6) = piVar4;
  if (piVar5 != (int *)0x0) {
    __ZdlPv();
    piVar4 = piVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1096162b4(param_1 + 0x94);
  FUN_1096162b4(param_1 + 0x8e);
  *(undefined ***)param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)piVar7);
  }
  __Unwind_Resume();
  if (*(long *)(piVar4 + 0xe) != 0) {
    piVar7 = (int *)(*(long *)(piVar4 + 0xe) + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(piVar4);
    }
  }
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  if (0 < piVar4[1]) {
    lVar6 = 0;
    lVar8 = *(long *)(piVar4 + 0x10);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < piVar4[1]);
  }
  piVar7 = *(int **)(piVar4 + 0x12);
  if (piVar7 != piVar4 + 0x14 && piVar7 != (int *)0x0) {
    _free(*(undefined8 *)(piVar7 + -2));
  }
  return piVar4;
}



/* Entry: 10960af54; end: 10960afef;  */

long FUN_10960af54(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10960aff0; end: 10960b893;  */

undefined8 FUN_10960aff0(long param_1,int param_2,double *param_3)

{
  float fVar1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  fVar1 = (float)*param_3;
  if (param_2 < 0x1c) {
    if (param_2 < 0x1a) {
      if (param_2 == 0) {
        *(float *)(param_1 + 0x20) = fVar1;
        if (iRam00000001132dfb08 < 5) {
          return 1;
        }
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        FUN_10926db08(&uStack_170);
        uStack_68 = CONCAT44(uStack_68._4_4_,3);
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        func_0x000107c31940(auStack_188,&UNK_10f577c37);
        func_0x000107c31940(auStack_1a0,&UNK_10f577495);
        FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xc5);
        FUN_1092b4db8();
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
      }
      else {
        if (param_2 != 0x19) {
          return 0;
        }
        *(float *)(param_1 + 0x94) = fVar1;
        if (iRam00000001132dfb08 < 5) {
          return 1;
        }
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        FUN_10926db08(&uStack_170);
        uStack_68 = CONCAT44(uStack_68._4_4_,3);
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        func_0x000107c31940(auStack_188,&UNK_10f577c37);
        func_0x000107c31940(auStack_1a0,&UNK_10f577495);
        FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xd5);
        FUN_1092b4db8();
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x94));
      }
    }
    else if (param_2 == 0x1a) {
      *(float *)(param_1 + 0x88) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f577c37);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xea);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x88));
    }
    else {
      if (param_2 != 0x1b) {
        return 0;
      }
      *(float *)(param_1 + 0x44) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f577c37);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xdb);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x44));
    }
  }
  else if (param_2 < 0x22) {
    if (param_2 == 0x1c) {
      *(float *)(param_1 + 0x48) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f577c37);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xe0);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x48));
    }
    else {
      if (param_2 != 0x1d) {
        return 0;
      }
      *(float *)(param_1 + 0x4c) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f577c37);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xe5);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x4c));
    }
  }
  else if (param_2 == 0x22) {
    *(float *)(param_1 + 0x80) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f577c37);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xca);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x80));
  }
  else {
    if (param_2 != 0x28) {
      return 0;
    }
    *(float *)(param_1 + 0x84) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f577c37);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xcf);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x84));
  }
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  FUN_109671170(&uStack_170);
  return 1;
}



/* Entry: 10960b894; end: 10960b8b3;  */

undefined8 FUN_10960b894(long param_1)

{
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x360);
  return 1;
}



/* Entry: 10960b8b4; end: 10960bc1f;  */

void FUN_10960b8b4(long param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  short sVar28;
  float fVar29;
  short sVar31;
  short sVar32;
  float fVar33;
  short sVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar30 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar65;
  float fVar66;
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  int iVar69;
  float fVar72;
  int iVar73;
  float fVar74;
  int iVar75;
  undefined1 auVar70 [12];
  float fVar76;
  int iVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar81 [12];
  float fVar86;
  undefined1 auVar82 [16];
  float fVar80;
  float fVar87;
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar89;
  float fVar91;
  undefined1 auVar90 [16];
  undefined1 auVar71 [16];
  undefined1 auVar85 [16];
  
  uVar4 = *(int *)(param_1 + 0x4c) * *param_2;
  lVar1 = **(long **)(param_1 + 8);
  uVar10 = (uint)((ulong)((*(long **)(param_1 + 8))[1] - lVar1) >> 3);
  if ((int)uVar10 <= (int)uVar4) {
    uVar4 = uVar10;
  }
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar6 = (ulong)uVar4;
  uVar5 = param_2[1] * *(int *)(param_1 + 0x4c);
  if ((int)uVar10 <= (int)uVar5) {
    uVar5 = uVar10;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar11 = *(undefined8 **)(param_1 + 0x28);
  fVar55 = *(float *)(puVar2 + 1);
  fVar13 = *(float *)(puVar2 + 0x16) / fVar55;
  fVar14 = *(float *)((long)puVar2 + 0xb4) / fVar55;
  fVar61 = *(float *)(puVar11 + 1);
  fVar58 = (float)*puVar2;
  fVar78 = (*(float *)(puVar2 + 0x17) - (*(float *)(puVar2 + 0x16) * fVar58) / fVar55) -
           (*(float *)((long)puVar2 + 4) * *(float *)((long)puVar2 + 0xb4)) / fVar55;
  fVar59 = (float)*puVar11;
  fVar79 = (*(float *)(puVar11 + 0x17) - (*(float *)(puVar11 + 0x16) * fVar59) / fVar61) -
           (*(float *)((long)puVar11 + 4) * *(float *)((long)puVar11 + 0xb4)) / fVar61;
  fVar15 = *(float *)(puVar11 + 0x16) / fVar61;
  fVar18 = (float)*(undefined8 *)((long)puVar2 + 0xbc);
  fVar19 = (float)*(undefined8 *)((long)puVar11 + 0xbc);
  fVar16 = (float)((ulong)*puVar2 >> 0x20);
  fVar17 = (float)((ulong)*puVar11 >> 0x20);
  fVar51 = (float)((ulong)*(undefined8 *)((long)puVar2 + 0xbc) >> 0x20);
  fVar52 = (float)((ulong)*(undefined8 *)((long)puVar11 + 0xbc) >> 0x20);
  fVar89 = ((float)*(undefined8 *)((long)puVar2 + 0xc4) - (fVar58 * fVar18) / fVar55) -
           (fVar16 * fVar51) / fVar55;
  fVar91 = ((float)*(undefined8 *)((long)puVar11 + 0xc4) - (fVar59 * fVar19) / fVar61) -
           (fVar17 * fVar52) / fVar61;
  fVar53 = (float)((ulong)*(undefined8 *)((long)puVar2 + 0xc4) >> 0x20);
  fVar54 = (float)((ulong)*(undefined8 *)((long)puVar11 + 0xc4) >> 0x20);
  fVar56 = (float)*(undefined8 *)((long)puVar2 + 0xcc);
  fVar57 = (float)*(undefined8 *)((long)puVar11 + 0xcc);
  fVar16 = ((float)((ulong)*(undefined8 *)((long)puVar2 + 0xcc) >> 0x20) -
           (fVar58 * fVar53) / fVar55) - (fVar16 * fVar56) / fVar55;
  fVar17 = ((float)((ulong)*(undefined8 *)((long)puVar11 + 0xcc) >> 0x20) -
           (fVar59 * fVar54) / fVar61) - (fVar17 * fVar57) / fVar61;
  fVar18 = fVar18 / fVar55;
  fVar19 = fVar19 / fVar61;
  fVar51 = fVar51 / fVar55;
  fVar52 = fVar52 / fVar61;
  fVar53 = fVar53 / fVar55;
  fVar54 = fVar54 / fVar61;
  fVar56 = fVar56 / fVar55;
  fVar57 = fVar57 / fVar61;
  fVar58 = *(float *)(param_1 + 0x38);
  fVar59 = *(float *)(param_1 + 0x3c);
  fVar55 = *(float *)(param_1 + 0x30);
  fVar60 = *(float *)(param_1 + 0x34);
  fVar61 = *(float *)((long)puVar11 + 0xb4) / fVar61;
  if ((int)uVar4 < (int)(uVar5 - 3)) {
    auVar90._4_4_ = fVar55;
    auVar90._0_4_ = fVar55;
    auVar90._8_4_ = fVar55;
    auVar90._12_4_ = fVar55;
    pfVar8 = (float *)(**(long **)(param_1 + 0x10) + uVar6 * 8);
    pfVar7 = (float *)(lVar1 + (ulong)uVar4 * 8);
    fVar62 = 0.0;
    do {
      uVar3 = *(undefined4 *)(**(long **)(param_1 + 0x18) + uVar6);
      fVar24 = *pfVar7;
      fVar29 = pfVar7[1];
      fVar25 = pfVar7[2];
      fVar33 = pfVar7[3];
      fVar26 = pfVar7[4];
      fVar35 = pfVar7[5];
      fVar27 = pfVar7[6];
      fVar36 = pfVar7[7];
      pfVar7 = pfVar7 + 8;
      fVar37 = *pfVar8;
      fVar42 = pfVar8[1];
      fVar39 = pfVar8[2];
      fVar45 = pfVar8[3];
      fVar40 = pfVar8[4];
      fVar47 = pfVar8[5];
      fVar41 = pfVar8[6];
      fVar49 = pfVar8[7];
      pfVar8 = pfVar8 + 8;
      auVar64._0_4_ = fVar16 + fVar29 * fVar56 + fVar24 * fVar53;
      auVar64._4_4_ = fVar16 + fVar33 * fVar56 + fVar25 * fVar53;
      auVar64._8_4_ = fVar16 + fVar35 * fVar56 + fVar26 * fVar53;
      auVar64._12_4_ = fVar16 + fVar36 * fVar56 + fVar27 * fVar53;
      auVar30 = NEON_frecpe(auVar64,4);
      auVar82._0_4_ = fVar17 + fVar42 * fVar57 + fVar37 * fVar54;
      auVar82._4_4_ = fVar17 + fVar45 * fVar57 + fVar39 * fVar54;
      auVar82._8_4_ = fVar17 + fVar47 * fVar57 + fVar40 * fVar54;
      auVar82._12_4_ = fVar17 + fVar49 * fVar57 + fVar41 * fVar54;
      auVar38 = NEON_frecps(auVar64,auVar30,4);
      auVar44 = NEON_frecpe(auVar82,4);
      auVar84._0_4_ = auVar30._0_4_ * auVar38._0_4_;
      auVar84._4_4_ = auVar30._4_4_ * auVar38._4_4_;
      auVar84._8_4_ = auVar30._8_4_ * auVar38._8_4_;
      auVar84._12_4_ = auVar30._12_4_ * auVar38._12_4_;
      auVar30 = NEON_frecps(auVar82,auVar44,4);
      auVar38._0_4_ = auVar44._0_4_ * auVar30._0_4_;
      auVar38._4_4_ = auVar44._4_4_ * auVar30._4_4_;
      auVar38._8_4_ = auVar44._8_4_ * auVar30._8_4_;
      auVar38._12_4_ = auVar44._12_4_ * auVar30._12_4_;
      auVar30 = NEON_frecps(auVar64,auVar84,4);
      fVar63 = auVar30._0_4_ * auVar84._0_4_;
      fVar65 = auVar30._4_4_ * auVar84._4_4_;
      fVar66 = auVar30._8_4_ * auVar84._8_4_;
      fVar67 = auVar30._12_4_ * auVar84._12_4_;
      sVar28 = -(ushort)((char)uVar3 == '\0');
      sVar31 = -(ushort)((char)((uint)uVar3 >> 8) == '\0');
      sVar32 = -(ushort)((char)((uint)uVar3 >> 0x10) == '\0');
      sVar34 = -(ushort)((char)((uint)uVar3 >> 0x18) == '\0');
      fVar43 = (fVar78 + fVar29 * fVar14 + fVar24 * fVar13) * fVar63;
      fVar46 = (fVar78 + fVar33 * fVar14 + fVar25 * fVar13) * fVar65;
      fVar48 = (fVar78 + fVar35 * fVar14 + fVar26 * fVar13) * fVar66;
      fVar50 = (fVar78 + fVar36 * fVar14 + fVar27 * fVar13) * fVar67;
      auVar30 = NEON_frecps(auVar82,auVar38,4);
      fVar80 = auVar30._0_4_ * auVar38._0_4_;
      fVar86 = auVar30._4_4_ * auVar38._4_4_;
      fVar87 = auVar30._8_4_ * auVar38._8_4_;
      fVar88 = auVar30._12_4_ * auVar38._12_4_;
      fVar68 = (fVar79 + fVar42 * fVar61 + fVar37 * fVar15) * fVar80;
      fVar72 = (fVar79 + fVar45 * fVar61 + fVar39 * fVar15) * fVar86;
      fVar74 = (fVar79 + fVar47 * fVar61 + fVar40 * fVar15) * fVar87;
      fVar76 = (fVar79 + fVar49 * fVar61 + fVar41 * fVar15) * fVar88;
      auVar30._0_4_ =
           ABS((fVar89 + fVar29 * fVar51 + fVar24 * fVar18) * fVar63 -
               (fVar91 + fVar42 * fVar52 + fVar37 * fVar19) * fVar80);
      auVar30._4_4_ =
           ABS((fVar89 + fVar33 * fVar51 + fVar25 * fVar18) * fVar65 -
               (fVar91 + fVar45 * fVar52 + fVar39 * fVar19) * fVar86);
      auVar30._8_4_ =
           ABS((fVar89 + fVar35 * fVar51 + fVar26 * fVar18) * fVar66 -
               (fVar91 + fVar47 * fVar52 + fVar40 * fVar19) * fVar87);
      auVar30._12_4_ =
           ABS((fVar89 + fVar36 * fVar51 + fVar27 * fVar18) * fVar67 -
               (fVar91 + fVar49 * fVar52 + fVar41 * fVar19) * fVar88);
      auVar30 = NEON_fmin(auVar30,auVar90,4);
      auVar83._0_4_ = ABS(fVar43 - fVar68) * fVar60;
      auVar83._4_4_ = ABS(fVar46 - fVar72) * fVar60;
      auVar83._8_4_ = ABS(fVar48 - fVar74) * fVar60;
      auVar83._12_4_ = ABS(fVar50 - fVar76) * fVar60;
      auVar84 = NEON_fmin(auVar83,auVar90,4);
      fVar25 = (float)CONCAT13(auVar84[3] & ~(byte)(sVar28 >> 0xf),
                               CONCAT12(auVar84[2] & ~(byte)(sVar28 >> 0xf),
                                        CONCAT11(auVar84[1] & ~(byte)((ushort)sVar28 >> 8),
                                                 auVar84[0] & ~(byte)sVar28)));
      auVar81._0_8_ =
           CONCAT17(auVar84[7] & ~(byte)(sVar31 >> 0xf),
                    CONCAT16(auVar84[6] & ~(byte)(sVar31 >> 0xf),
                             CONCAT15(auVar84[5] & ~(byte)((ushort)sVar31 >> 8),
                                      CONCAT14(auVar84[4] & ~(byte)sVar31,fVar25))));
      auVar81[8] = auVar84[8] & ~(byte)sVar32;
      auVar81[9] = auVar84[9] & ~(byte)((ushort)sVar32 >> 8);
      auVar81[10] = auVar84[10] & ~(byte)(sVar32 >> 0xf);
      auVar81[0xb] = auVar84[0xb] & ~(byte)(sVar32 >> 0xf);
      auVar85[0xc] = auVar84[0xc] & ~(byte)sVar34;
      auVar85._0_12_ = auVar81;
      auVar85[0xd] = auVar84[0xd] & ~(byte)((ushort)sVar34 >> 8);
      auVar85[0xe] = auVar84[0xe] & ~(byte)(sVar34 >> 0xf);
      auVar85[0xf] = auVar84[0xf] & ~(byte)(sVar34 >> 0xf);
      iVar69 = -(uint)(fVar58 + fVar43 < fVar68);
      iVar73 = -(uint)(fVar58 + fVar46 < fVar72);
      iVar75 = -(uint)(fVar58 + fVar48 < fVar74);
      iVar77 = -(uint)(fVar58 + fVar50 < fVar76);
      bVar20 = SUB41(fVar59,0);
      bVar21 = (byte)((uint)fVar59 >> 8);
      bVar22 = (byte)((uint)fVar59 >> 0x10);
      bVar23 = (byte)((uint)fVar59 >> 0x18);
      fVar24 = (float)CONCAT13((byte)((uint)iVar69 >> 0x18) & bVar23,
                               CONCAT12((byte)((uint)iVar69 >> 0x10) & bVar22,
                                        CONCAT11((byte)((uint)iVar69 >> 8) & bVar21,
                                                 (byte)iVar69 & bVar20)));
      auVar70._0_8_ =
           CONCAT17((byte)((uint)iVar73 >> 0x18) & bVar23,
                    CONCAT16((byte)((uint)iVar73 >> 0x10) & bVar22,
                             CONCAT15((byte)((uint)iVar73 >> 8) & bVar21,
                                      CONCAT14((byte)iVar73 & bVar20,fVar24))));
      auVar70[8] = (byte)iVar75 & bVar20;
      auVar70[9] = (byte)((uint)iVar75 >> 8) & bVar21;
      auVar70[10] = (byte)((uint)iVar75 >> 0x10) & bVar22;
      auVar70[0xb] = (byte)((uint)iVar75 >> 0x18) & bVar23;
      auVar71[0xc] = (byte)iVar77 & bVar20;
      auVar71._0_12_ = auVar70;
      auVar71[0xd] = (byte)((uint)iVar77 >> 8) & bVar21;
      auVar71[0xe] = (byte)((uint)iVar77 >> 0x10) & bVar22;
      auVar71[0xf] = (byte)((uint)iVar77 >> 0x18) & bVar23;
      auVar44._0_4_ = auVar30._0_4_ + fVar25 + fVar24;
      auVar44._4_4_ =
           auVar30._4_4_ + (float)((ulong)auVar81._0_8_ >> 0x20) +
           (float)((ulong)auVar70._0_8_ >> 0x20);
      auVar44._8_4_ = auVar30._8_4_ + auVar81._8_4_ + auVar70._8_4_;
      auVar44._12_4_ = auVar30._12_4_ + auVar85._12_4_ + auVar71._12_4_;
      auVar30 = NEON_ext(auVar44,auVar44,4,1);
      auVar84 = NEON_ext(auVar44,auVar44,8,1);
      fVar62 = fVar62 + auVar30._0_4_ + auVar44._0_4_ + auVar30._4_4_ + auVar84._4_4_;
      uVar6 = uVar6 + 4;
    } while ((int)uVar6 < (int)(uVar5 - 3));
  }
  else {
    fVar62 = 0.0;
  }
  if ((int)uVar6 < (int)uVar5) {
    uVar12 = (uVar6 & 0xffffffff) << 3 | 4;
    pfVar8 = (float *)(**(long **)(param_1 + 0x10) + uVar12);
    pfVar7 = (float *)(lVar1 + uVar12);
    pcVar9 = (char *)(**(long **)(param_1 + 0x18) + (uVar6 & 0xffffffff));
    do {
      fVar27 = (float)*(undefined8 *)(pfVar7 + -1);
      fVar25 = (float)*(undefined8 *)(pfVar8 + -1);
      fVar24 = (float)((ulong)*(undefined8 *)(pfVar7 + -1) >> 0x20);
      fVar26 = (float)((ulong)*(undefined8 *)(pfVar8 + -1) >> 0x20);
      fVar35 = fVar16 + fVar27 * fVar53 + fVar24 * fVar56;
      fVar36 = fVar17 + fVar25 * fVar54 + fVar26 * fVar57;
      fVar29 = (fVar78 + fVar27 * fVar13 + *pfVar7 * fVar14) / fVar35;
      fVar33 = (fVar79 + fVar25 * fVar15 + *pfVar8 * fVar61) / fVar36;
      fVar25 = ABS((fVar89 + fVar27 * fVar18 + fVar24 * fVar51) / fVar35 -
                   (fVar91 + fVar25 * fVar19 + fVar26 * fVar52) / fVar36);
      fVar24 = fVar55;
      if (fVar25 <= fVar55) {
        fVar24 = fVar25;
      }
      fVar24 = fVar62 + fVar24;
      if (*pcVar9 != '\0') {
        fVar25 = fVar60 * ABS(fVar29 - fVar33);
        fVar62 = fVar55;
        if (fVar25 <= fVar55) {
          fVar62 = fVar25;
        }
        fVar24 = fVar24 + fVar62;
      }
      pfVar8 = pfVar8 + 2;
      pfVar7 = pfVar7 + 2;
      fVar62 = fVar59 + fVar24;
      if (fVar33 - fVar58 <= fVar29) {
        fVar62 = fVar24;
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar4;
      pcVar9 = pcVar9 + 1;
    } while ((int)uVar4 < (int)uVar5);
  }
  *(float *)(*(long *)(param_1 + 0x40) + (long)*param_2 * 4) = fVar62;
  return;
}



/* Entry: 10960bc20; end: 10960bdcb;  */

void FUN_10960bc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,int param_11)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float *pfStack_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  float afStack_b0 [10];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095cfd0c(&ppuStack_108,param_5,param_6,param_7);
  FUN_1095cfc50(param_9,&ppuStack_108);
  fVar4 = (float)param_6;
  FUN_1095cfd0c(&ppuStack_108,-(float)param_5,-fVar4,-(float)param_7);
  FUN_1095cfc50(param_10,&ppuStack_108);
  afStack_b0[2] = 0.0;
  afStack_b0[3] = 0.0;
  afStack_b0[0] = 0.0;
  afStack_b0[1] = 0.0;
  afStack_b0[6] = 0.0;
  afStack_b0[7] = 0.0;
  afStack_b0[4] = 0.0;
  afStack_b0[5] = 0.0;
  lStack_100 = param_8 + 0x330;
  lStack_f8 = param_8 + 0x348;
  lStack_f0 = param_8 + 0x360;
  ppuStack_108 = &PTR_FUN_110aff9d0;
  pfStack_c8 = afStack_b0;
  iStack_bc = (int)((float)(ulong)(*(long *)(param_8 + 0x338) - *(long *)(param_8 + 0x330) >> 3) /
                   (float)(int)uRam00000001132dfb70);
  uStack_c0 = uRam00000001132dfb70;
  uStack_b8 = 0;
  uStack_b4 = uRam00000001132dfb70;
  uStack_e8 = param_9;
  uStack_e0 = param_10;
  uStack_d8 = param_1;
  uStack_d4 = param_2;
  uStack_d0 = param_3;
  uStack_cc = param_4;
  func_0x000109aa87cc(0xbff0000000000000,&uStack_b8,&ppuStack_108);
  fVar3 = ABS(fVar4) * 0.0;
  if (param_11 == 0) {
    fVar3 = fVar4 * 50.0;
  }
  fVar3 = fVar3 + ABS((float)param_7) * 0.0;
  uVar1 = (ulong)uRam00000001132dfb70;
  if (0 < (int)uRam00000001132dfb70) {
    pfVar2 = afStack_b0;
    do {
      fVar3 = fVar3 + *pfVar2;
      uVar1 = uVar1 - 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail(fVar3);
  __Unwind_Resume();
  return;
}



/* Entry: 10960bdcc; end: 10960bdcf;  */

void FUN_10960bdcc(void)

{
  return;
}



/* Entry: 109611518; end: 109612083;  */

undefined8 FUN_109611518(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_50;
  undefined8 *puStack_48;
  
  param_1[0x45] = param_2;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  ppuStack_50 = &puStack_48;
  puStack_48 = param_1;
  if ((*(byte *)(param_2 + 0x1360) == 1) && ((*(byte *)((long)param_1 + 0x269) & 1) == 0)) {
    if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    FUN_10926db08(&uStack_1a0);
    uStack_98 = CONCAT44(uStack_98._4_4_,3);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
    func_0x000107c31940(auStack_1d0,&UNK_10f576492);
    FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x62a);
    FUN_1092b4db8();
  }
  else if (((*(byte *)(param_2 + 0x135a) & 1) == 0) && ((*(byte *)(param_2 + 0x1359) & 1) == 0)) {
    if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    FUN_10926db08(&uStack_1a0);
    uStack_98 = CONCAT44(uStack_98._4_4_,3);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
    func_0x000107c31940(auStack_1d0,&UNK_10f576492);
    FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x62f);
    FUN_1092b4db8();
  }
  else {
    if (*(char *)((long)param_1 + 0x231) == '\x01') {
      if (*(char *)(param_2 + 0x135e) != '\x01') {
        if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        FUN_10926db08(&uStack_1a0);
        uStack_98 = CONCAT44(uStack_98._4_4_,3);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
        func_0x000107c31940(auStack_1d0,&UNK_10f576492);
        FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x635);
        FUN_1092b4db8();
        goto LAB_109611f3c;
      }
      *(undefined1 *)(param_2 + 0x135e) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x135e) = 0;
      if ((0.5 < *(float *)(param_1 + 0x10)) &&
         ((*(byte *)((long)param_1 + 0x269) & *(byte *)(param_2 + 0x1360)) == 1)) {
        iVar1 = *(int *)(param_2 + 0x340);
        iVar8 = (int)*(float *)((long)param_1 + 0x84);
        iVar5 = 0;
        if (iVar8 != 0) {
          iVar5 = iVar1 / iVar8;
        }
        if ((iVar1 != iVar5 * iVar8) && ((int)*(float *)((long)param_1 + 0x94) <= iVar1)) {
          if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          FUN_10926db08(&uStack_1a0);
          uStack_98 = CONCAT44(uStack_98._4_4_,3);
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_60 = uStack_60 & 0xffffffff00000000;
          func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
          func_0x000107c31940(auStack_1d0,&UNK_10f576492);
          FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x643);
          FUN_1092b4db8();
          goto LAB_109611f3c;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x4d) = 1;
    puVar2 = param_1;
    if (*(char *)((long)param_1 + 0x269) == '\x01') {
      iVar5 = (int)((ulong)(param_1[0x67] - param_1[0x66]) >> 3);
      iVar1 = (int)*(float *)((long)param_1 + 0x74);
      if (iVar5 <= (int)*(float *)((long)param_1 + 0x74)) {
        iVar1 = iVar5;
      }
      uVar10 = (ulong)iVar1;
      FUN_1092e3d84(param_1 + 0x66,uVar10);
      puVar2 = param_1 + 0x69;
      FUN_1092e3d84(puVar2,uVar10);
      uVar9 = param_1[0x6d] - param_1[0x6c];
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        if (uVar10 < uVar9) {
          param_1[0x6d] = param_1[0x6c] + uVar10;
        }
      }
      else {
        puVar2 = param_1 + 0x6c;
        func_0x000107c27d58(puVar2,uVar10 - uVar9);
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar3 = param_1;
    FUN_109612084(param_1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (4 < iRam00000001132dfb08) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_10926db08(&uStack_1a0);
      uStack_98 = CONCAT44(uStack_98._4_4_,3);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
      func_0x000107c31940(auStack_1d0,&UNK_10f576492);
      FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x656);
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                ((float)(int)((float)(((long)puVar3 - (long)puVar2) / 1000) / 10.0) / 100.0);
      FUN_1092b4db8();
      if (cStack_1b9 < '\0') {
        __ZdlPv(auStack_1d0[0]);
      }
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      puVar3 = &uStack_1a0;
      FUN_109671170(puVar3);
      if (4 < iRam00000001132dfb08) {
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        FUN_10926db08(&uStack_1a0);
        uStack_98 = CONCAT44(uStack_98._4_4_,3);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
        func_0x000107c31940(auStack_1d0,&UNK_10f576492);
        FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x658);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
        FUN_1092b4db8();
        if (cStack_1b9 < '\0') {
          __ZdlPv(auStack_1d0[0]);
        }
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        puVar3 = &uStack_1a0;
        FUN_109671170(puVar3);
      }
    }
    lVar6 = param_1[0x45];
    *(undefined1 *)(lVar6 + 0x1361) = 0;
    fVar11 = (float)(ulong)((long)(param_1[0x67] - param_1[0x66]) >> 3);
    if (((fVar11 <= *(float *)(param_1 + 0xf)) && ((*(byte *)(lVar6 + 0x1359) & 1) == 0)) &&
       (*(char *)((long)param_1 + 0x269) != '\x01')) goto LAB_109611f64;
    if (fVar11 <= *(float *)(param_1 + 5)) {
      if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      FUN_10926db08(&uStack_1a0);
      uStack_98 = CONCAT44(uStack_98._4_4_,3);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
      func_0x000107c31940(auStack_1d0,&UNK_10f576492);
      FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x681);
      FUN_1092b4db8();
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar2 = param_1;
      FUN_10960bdd0(param_1,param_1[0x45] + 0x1764);
      puVar4 = puVar2;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (4 < iRam00000001132dfb08) {
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        FUN_10926db08(&uStack_1a0);
        uStack_98 = CONCAT44(uStack_98._4_4_,3);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
        func_0x000107c31940(auStack_1d0,&UNK_10f576492);
        FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x663);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar4 - (long)puVar3) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if (cStack_1b9 < '\0') {
          __ZdlPv(auStack_1d0[0]);
        }
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        FUN_109671170(&uStack_1a0);
      }
      if (((ulong)puVar2 & 1) == 0) {
        if (iRam00000001132dfb08 < 5) goto LAB_109611f64;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        FUN_10926db08(&uStack_1a0);
        uStack_98 = CONCAT44(uStack_98._4_4_,3);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
        func_0x000107c31940(auStack_1d0,&UNK_10f576492);
        FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x666);
        FUN_1092b4db8();
      }
      else {
        lVar6 = param_1[0x45];
        *(undefined1 *)(lVar6 + 0x1361) = 1;
        *(undefined1 *)(lVar6 + 0x135f) = 1;
        lVar7 = (long)*(char *)((long)param_1 + 0x287);
        if (lVar7 < 0) {
          lVar7 = param_1[0x4f];
        }
        if (lVar7 != 0) {
          *(undefined4 *)(lVar6 + 0x13b0) = 0x3f800000;
          *(undefined4 *)(lVar6 + 0x13b4) = *(undefined4 *)(lVar6 + 0x1764);
          *(undefined8 *)(lVar6 + 0x13b8) = *(undefined8 *)(lVar6 + 0x1768);
          FUN_1095cb8cc(param_1 + 0x4e);
          lVar6 = param_1[0x45];
        }
        *(undefined1 *)(lVar6 + 0x1360) = 1;
        if (((*(byte *)((long)param_1 + 0x269) & 1) != 0) ||
           (*(undefined1 *)(lVar6 + 0x33d) = 1, iRam00000001132dfb08 < 5)) goto LAB_109611f64;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        FUN_10926db08(&uStack_1a0);
        uStack_98 = CONCAT44(uStack_98._4_4_,3);
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1b8,&UNK_10f577c37);
        func_0x000107c31940(auStack_1d0,&UNK_10f576492);
        FUN_109671348(&uStack_1a0,5,auStack_1b8,auStack_1d0,0x67c);
        FUN_1092b4db8();
      }
    }
  }
LAB_109611f3c:
  if (cStack_1b9 < '\0') {
    __ZdlPv(auStack_1d0[0]);
  }
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  FUN_109671170(&uStack_1a0);
LAB_109611f64:
  FUN_10961573c(&ppuStack_50);
  return 1;
}



/* Entry: 109612084; end: 10961573b;  */

/* WARNING: Removing unreachable block (ram,0x000109614d80) */
/* WARNING: Removing unreachable block (ram,0x00010961490c) */
/* WARNING: Removing unreachable block (ram,0x000109613340) */
/* WARNING: Removing unreachable block (ram,0x0001096134c4) */
/* WARNING: Removing unreachable block (ram,0x000109614a00) */
/* WARNING: Removing unreachable block (ram,0x000109614e64) */

void FUN_109612084(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  int *piVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  char *pcVar30;
  float *pfVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int iVar54;
  float fVar55;
  float fStack_7b0;
  int iStack_7ac;
  int iStack_7a8;
  uint uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  long lStack_778;
  int *piStack_770;
  undefined8 *puStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  float fStack_730;
  int iStack_72c;
  int iStack_728;
  uint uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  long lStack_6f8;
  int *piStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  float fStack_6d0;
  int iStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  int iStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  long lStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  float fStack_670;
  int iStack_66c;
  undefined8 uStack_668;
  undefined4 uStack_660;
  int iStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  long lStack_638;
  ulong *puStack_630;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_5f0;
  float *pfStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined4 auStack_4a8 [2];
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined4 auStack_490 [2];
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined4 auStack_478 [2];
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 *puStack_458;
  long lStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  float *pfStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  int iStack_424;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined4 *puStack_3f0;
  long *plStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  int iStack_3c8;
  int iStack_3c4;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  int *piStack_390;
  long *plStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  int iStack_368;
  int iStack_364;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long lStack_338;
  int *piStack_330;
  long *plStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  int iStack_304;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined4 *puStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  int iStack_2a8;
  int iStack_2a4;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  int *piStack_270;
  long *plStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int iStack_248;
  int iStack_244;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  int *piStack_210;
  long *plStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  float *pfStack_1e8;
  long lStack_1e0;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar25 = *(long *)(param_1 + 0x228) + (long)*(int *)(param_1 + 0x26c) * 0x60;
  piVar26 = *(int **)(lVar25 + 0x22b8);
  uStack_5f0._0_4_ = (float)piVar26[1];
  uStack_5f0._4_4_ = *piVar26 << 1;
  FUN_1095d359c(&iStack_1f0,*(long *)(param_1 + 0x228) + 0x30,&uStack_5f0,
                *(uint *)(lVar25 + 0x2278) & 0xfff);
  fStack_7b0 = 127.5;
  uStack_7a4 = 0;
  uStack_7a0 = 0;
  iStack_7ac = 0;
  iStack_7a8 = 0;
  piStack_770 = &iStack_7a8;
  uStack_794 = 0;
  uStack_790 = 0;
  uStack_79c = 0;
  uStack_798 = 0;
  uStack_784 = 0;
  uStack_78c = 0;
  uStack_788 = 0;
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_77c = 0;
  uStack_760 = 0;
  uStack_758 = 0;
  iStack_110 = 0x42ff0000;
  puStack_d0 = &uStack_108;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  iStack_10c = 0;
  uStack_108._0_4_ = 0;
  uStack_f4 = 0;
  uStack_f0._0_4_ = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e8._4_4_ = 0;
  uStack_f0._4_4_ = 0;
  uStack_e8._0_4_ = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  piVar26 = &iStack_1f0;
  puStack_768 = &uStack_760;
  puStack_c8 = &uStack_c0;
  FUN_109615e90(piVar26,&fStack_7b0,&iStack_110);
  __ZNSt3__16chrono12steady_clock3nowEv();
  pfStack_5e8 = (float *)(*(long *)(param_1 + 0x228) + (long)*(int *)(param_1 + 0x26c) * 0x60 +
                         0x2278);
  lStack_5e0 = 0;
  uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
  fStack_670 = 9.477423e-38;
  uStack_660 = 0;
  iStack_65c = 0;
  uStack_170 = (undefined8 *)0x300000003;
  puVar20 = &uStack_5f0;
  uStack_668 = &fStack_7b0;
  FUN_109b44a6c(0x3ff0000000000000,0x3ff0000000000000,puVar20,&fStack_670,&uStack_170,4);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    puStack_5a8 = (undefined8 *)0x0;
    puStack_5b0 = (undefined8 *)0x0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    pfStack_5e8 = (float *)0x0;
    uStack_5f0 = (undefined8 *)0x0;
    uStack_5d8 = 0;
    lStack_5e0 = 0;
    FUN_10926db08(&uStack_5f0);
    uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
    func_0x000107c31940(&fStack_670,&UNK_10f577c37);
    func_0x000107c31940(&uStack_170,&UNK_10f578168);
    FUN_109671348(&uStack_5f0,5,&fStack_670,&uStack_170,0x771);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)puVar20 - (long)piVar26) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if ((long)uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
    if (iStack_65c < 0) {
      __ZdlPv(CONCAT44(iStack_66c,fStack_670));
    }
    puVar20 = &uStack_5f0;
    FUN_109671170(puVar20);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  pfStack_5e8 = (float *)(*(long *)(param_1 + 0x228) + (long)*(int *)(param_1 + 0x26c) * 0x60 +
                         0x2398);
  lStack_5e0 = 0;
  uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
  fStack_670 = 9.477423e-38;
  uStack_668 = (float *)&iStack_110;
  uStack_660 = 0;
  iStack_65c = 0;
  uStack_170 = (undefined8 *)0x300000003;
  puVar27 = &uStack_5f0;
  FUN_109b44a6c(0x3ff0000000000000,0x3ff0000000000000,puVar27,&fStack_670,&uStack_170,4);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (4 < iRam00000001132dfb08) {
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    puStack_5a8 = (undefined8 *)0x0;
    puStack_5b0 = (undefined8 *)0x0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    pfStack_5e8 = (float *)0x0;
    uStack_5f0 = (undefined8 *)0x0;
    uStack_5d8 = 0;
    lStack_5e0 = 0;
    FUN_10926db08(&uStack_5f0);
    uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
    func_0x000107c31940(&fStack_670,&UNK_10f577c37);
    func_0x000107c31940(&uStack_170,&UNK_10f578168);
    FUN_109671348(&uStack_5f0,5,&fStack_670,&uStack_170,0x773);
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
              ((float)(int)((float)(((long)puVar27 - (long)puVar20) / 1000) / 10.0) / 100.0);
    FUN_1092b4db8();
    if ((long)uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
    if (iStack_65c < 0) {
      __ZdlPv(CONCAT44(iStack_66c,fStack_670));
    }
    FUN_109671170(&uStack_5f0);
  }
  pfVar1 = (float *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x318);
  FUN_1093f458c(pfVar1,(long)(int)*(float *)(param_1 + 0x2c));
  pfVar2 = (float *)(param_1 + 0x318);
  pfVar22 = pfVar2;
  FUN_1093f458c(pfVar2,(long)(int)*(float *)(param_1 + 0x2c));
  iVar33 = 1;
  if ((((*(char *)(*(long *)(param_1 + 0x228) + 0x1360) == '\x01') &&
       ((*(byte *)(*(long *)(param_1 + 0x228) + 0x135b) & 1) == 0)) &&
      (*(char *)(param_1 + 0x269) == '\x01')) && ((*(byte *)(param_1 + 0x230) & 1) == 0)) {
    lVar25 = 0;
    iVar54 = 0;
    if ((int)*(float *)(param_1 + 0x88) != 0) {
      iVar54 = iStack_7a8 / (int)*(float *)(param_1 + 0x88);
    }
    do {
      if (*(int *)(&UNK_10dfd86c0 + lVar25) <= *(int *)(param_1 + 0x234)) {
        iVar33 = *(int *)(&UNK_10dfd86d0 + lVar25);
        if (iVar54 <= *(int *)(&UNK_10dfd86d0 + lVar25)) {
          iVar33 = iVar54;
        }
        goto LAB_109612564;
      }
      lVar25 = lVar25 + 4;
    } while (lVar25 != 0x10);
    iVar33 = 1;
LAB_109612564:
    if (4 < iRam00000001132dfb08) {
      uStack_4b0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      puStack_5a8 = (undefined8 *)0x0;
      puStack_5b0 = (undefined8 *)0x0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      lStack_5b8 = 0;
      uStack_5c0 = 0;
      pfStack_5e8 = (float *)0x0;
      uStack_5f0 = (undefined8 *)0x0;
      uStack_5d8 = 0;
      lStack_5e0 = 0;
      FUN_10926db08(&uStack_5f0);
      uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
      func_0x000107c31940(&fStack_670,&UNK_10f577c37);
      func_0x000107c31940(&uStack_170,&UNK_10f578168);
      FUN_109671348(&uStack_5f0,5,&fStack_670,&uStack_170,0x78e);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      if ((long)uStack_160 < 0) {
        __ZdlPv(uStack_170);
      }
      if (iStack_65c < 0) {
        __ZdlPv(CONCAT44(iStack_66c,fStack_670));
      }
      pfVar22 = (float *)&uStack_5f0;
      FUN_109671170(pfVar22);
    }
  }
  iVar54 = 1;
  if (0x1f < iVar33) {
    iVar54 = 2;
  }
  if (0 < iVar33) {
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    if (iVar33 != 0) {
      iVar36 = iStack_7a8 / iVar33;
    }
    iVar6 = iVar36 << (0x1f < iVar33);
    puVar27 = (undefined8 *)((ulong)&uStack_170 | 4);
    puVar28 = (undefined8 *)((ulong)&uStack_170 | 8);
    puVar20 = (undefined8 *)((ulong)&uStack_5f0 | 4);
    do {
      iVar19 = iStack_7a8;
      if (iVar36 + 4 <= iStack_7a8) {
        iVar19 = iVar36 + 4;
      }
      iVar18 = iVar34;
      if (iVar34 < 5) {
        iVar18 = 4;
      }
      fVar37 = (float)(iVar18 + -4);
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_170 = (undefined8 *)((ulong)uStack_7a4 << 0x20);
      fStack_670 = fVar37;
      iStack_66c = iVar19;
      FUN_109a84930(&uStack_5f0,&fStack_7b0,&fStack_670,&uStack_170);
      uStack_654 = 0;
      iStack_65c = 0;
      uStack_658 = 0;
      uStack_668._4_4_ = 0;
      iStack_66c = 0;
      uStack_668._0_4_ = 0;
      fStack_670 = 1.0;
      uStack_660 = 0x3f800000;
      uStack_650 = 0x3f800000;
      puVar14 = (undefined8 *)(param_1 + 0x288);
      FUN_1095daddc(puVar14,&uStack_5f0,param_1 + 0x238,&fStack_670,1);
      if (lStack_5b8 != 0) {
        piVar26 = (int *)(lStack_5b8 + 0x14);
        do {
          iVar18 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar18 + -1 == 0) {
          puVar14 = &uStack_5f0;
          func_0x000109a848d4(puVar14);
        }
      }
      lStack_5b8 = 0;
      uStack_5d8 = 0;
      lStack_5e0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      if (0 < uStack_5f0._4_4_) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_5b0 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < uStack_5f0._4_4_);
      }
      if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)puStack_5a8[-1];
        _free(puVar14);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (5 < iRam00000001132dfb08) {
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        puStack_5a8 = (undefined8 *)0x0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        pfStack_5e8 = (float *)0x0;
        uStack_5f0 = (undefined8 *)0x0;
        uStack_5d8 = 0;
        lStack_5e0 = 0;
        FUN_10926db08(&uStack_5f0);
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        func_0x000107c31940(&fStack_670,&UNK_10f577c37);
        func_0x000107c31940(&uStack_170,&UNK_10f578168);
        FUN_109671348(&uStack_5f0,6,&fStack_670,&uStack_170,0x7a8);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar14 - (long)pfVar22) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if ((long)uStack_160 < 0) {
          __ZdlPv(uStack_170);
        }
        if (iStack_65c < 0) {
          __ZdlPv(CONCAT44(iStack_66c,fStack_670));
        }
        puVar14 = &uStack_5f0;
        FUN_109671170(puVar14);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_170 = (undefined8 *)((ulong)uStack_7a4 << 0x20);
      fStack_670 = fVar37;
      iStack_66c = iVar19;
      FUN_109a84930(&uStack_5f0,&iStack_110,&fStack_670,&uStack_170);
      uStack_654 = 0;
      iStack_65c = 0;
      uStack_658 = 0;
      uStack_668._4_4_ = 0;
      iStack_66c = 0;
      uStack_668._0_4_ = 0;
      fStack_670 = 1.0;
      uStack_660 = 0x3f800000;
      uStack_650 = 0x3f800000;
      puVar15 = (undefined8 *)(param_1 + 0x288);
      FUN_1095daddc(puVar15,&uStack_5f0,param_1 + 0x250,&fStack_670,1);
      if (lStack_5b8 != 0) {
        piVar26 = (int *)(lStack_5b8 + 0x14);
        do {
          iVar19 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar19 + -1 == 0) {
          puVar15 = &uStack_5f0;
          func_0x000109a848d4(puVar15);
        }
      }
      lStack_5b8 = 0;
      uStack_5d8 = 0;
      lStack_5e0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      if (0 < uStack_5f0._4_4_) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_5b0 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < uStack_5f0._4_4_);
      }
      if (puStack_5a8 != &uStack_5a0 && puStack_5a8 != (undefined8 *)0x0) {
        puVar15 = (undefined8 *)puStack_5a8[-1];
        _free(puVar15);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (5 < iRam00000001132dfb08) {
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        puStack_5a8 = (undefined8 *)0x0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        pfStack_5e8 = (float *)0x0;
        uStack_5f0 = (undefined8 *)0x0;
        uStack_5d8 = 0;
        lStack_5e0 = 0;
        FUN_10926db08(&uStack_5f0);
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        func_0x000107c31940(&fStack_670,&UNK_10f577c37);
        func_0x000107c31940(&uStack_170,&UNK_10f578168);
        FUN_109671348(&uStack_5f0,6,&fStack_670,&uStack_170,0x7ac);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar15 - (long)puVar14) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if ((long)uStack_160 < 0) {
          __ZdlPv(uStack_170);
        }
        if (iStack_65c < 0) {
          __ZdlPv(CONCAT44(iStack_66c,fStack_670));
        }
        FUN_109671170(&uStack_5f0);
      }
      uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x42ff0000);
      puVar27[1] = 0;
      *puVar27 = 0;
      puVar27[3] = 0;
      puVar27[2] = 0;
      puVar27[5] = 0;
      puVar27[4] = 0;
      *(undefined8 *)((long)puVar27 + 0x34) = 0;
      *(undefined8 *)((long)puVar27 + 0x2c) = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      pfVar22 = &fStack_670;
      puStack_130 = puVar28;
      puStack_128 = &uStack_120;
      FUN_1095e1cb0(pfVar22,*(long *)(param_1 + 0x228) + 0x30,(int)*(float *)(param_1 + 0x2c),1,0x1c
                   );
      __ZNSt3__16chrono12steady_clock3nowEv();
      puVar14 = (undefined8 *)(param_1 + 0x2a0);
      FUN_1095d8258(&uStack_5f0,puVar14,param_1 + 0x238,param_1 + 0x250,
                    (int)*(float *)(param_1 + 100),&fStack_670);
      if (lStack_138 != 0) {
        piVar26 = (int *)(lStack_138 + 0x14);
        do {
          iVar19 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar19 + -1 == 0) {
          puVar14 = &uStack_170;
          func_0x000109a848d4(puVar14);
        }
      }
      if (0 < uStack_170._4_4_) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_130 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < uStack_170._4_4_);
      }
      uStack_168 = pfStack_5e8;
      uStack_170 = uStack_5f0;
      uStack_158 = uStack_5d8;
      uStack_160 = lStack_5e0;
      lStack_148 = uStack_5c8;
      lStack_150 = uStack_5d0;
      lStack_138 = lStack_5b8;
      uStack_140 = uStack_5c0;
      puVar15 = puStack_130;
      puVar9 = puStack_128;
      if ((puStack_128 != &uStack_120) &&
         (puVar15 = puVar28, puVar9 = &uStack_120, puStack_128 != (undefined8 *)0x0)) {
        puVar14 = (undefined8 *)puStack_128[-1];
        _free(puVar14);
      }
      puStack_128 = puVar9;
      puStack_130 = puVar15;
      if (uStack_5f0._4_4_ < 3) {
        *puStack_128 = *puStack_5a8;
        puStack_128[1] = puStack_5a8[1];
        uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x42ff0000);
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
        puVar20[2] = 0;
        puVar20[5] = 0;
        puVar20[4] = 0;
        *(undefined8 *)((long)puVar20 + 0x34) = 0;
        *(undefined8 *)((long)puVar20 + 0x2c) = 0;
        if (puStack_5a8 != &uStack_5a0) {
          puVar14 = (undefined8 *)puStack_5a8[-1];
          _free(puVar14);
        }
      }
      else {
        puStack_128 = puStack_5a8;
        puStack_130 = puStack_5b0;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (5 < iRam00000001132dfb08) {
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        puStack_5a8 = (undefined8 *)0x0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        pfStack_5e8 = (float *)0x0;
        uStack_5f0 = (undefined8 *)0x0;
        uStack_5d8 = 0;
        lStack_5e0 = 0;
        FUN_10926db08(&uStack_5f0);
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_250,&UNK_10f577c37);
        func_0x000107c31940(&uStack_2b0,&UNK_10f578168);
        FUN_109671348(&uStack_5f0,6,&uStack_250,&uStack_2b0,0x7b5);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar14 - (long)pfVar22) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if (lStack_2a0 < 0) {
          __ZdlPv(uStack_2b0);
        }
        if (lStack_240 < 0) {
          __ZdlPv(uStack_250);
        }
        FUN_109671170(&uStack_5f0);
      }
      if (0 < (int)uStack_168) {
        iVar19 = 0;
        piVar26 = (int *)(uStack_160 + 0xc);
        do {
          piVar26[-2] = piVar26[-2] + (int)fVar37;
          *piVar26 = *piVar26 + (int)fVar37;
          iVar19 = iVar19 + 1;
          piVar26 = piVar26 + 4;
        } while (iVar19 < (int)uStack_168);
      }
      uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x2010000);
      lStack_5e0 = 0;
      pfStack_5e8 = (float *)&uStack_170;
      FUN_109a41858(0x4000000000000000,0,&uStack_170,&uStack_5f0,0xffffffff);
      uVar21 = (ulong)uStack_168 & 0xffffffff;
      if (0 < (int)uStack_168) {
        iVar19 = 0;
        fVar37 = *(float *)(param_1 + 0x70);
        piVar26 = (int *)(uStack_160 + 0xc);
        do {
          iVar24 = *piVar26;
          iVar8 = piVar26[-2] - iVar24;
          iVar18 = -iVar8;
          if (-1 < iVar8) {
            iVar18 = iVar8;
          }
          if (iVar18 <= (int)fVar37) {
            fVar39 = (float)piVar26[-2];
            pfVar22 = *(float **)(param_1 + 0x308);
            if (pfVar22 < *(float **)(param_1 + 0x310)) {
              *pfVar22 = (float)piVar26[-3];
              pfVar22[1] = fVar39;
              pfVar22 = pfVar22 + 2;
            }
            else {
              pfVar22 = pfVar1;
              uStack_5f0._0_4_ = (float)piVar26[-3];
              uStack_250._0_4_ = fVar39;
              FUN_1094c6060(pfVar1,&uStack_5f0,&uStack_250);
              iVar24 = *piVar26;
            }
            *(float **)(param_1 + 0x308) = pfVar22;
            uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,(float)piVar26[-1]);
            uStack_250 = CONCAT44(uStack_250._4_4_,(float)iVar24);
            pfVar22 = *(float **)(param_1 + 800);
            if (pfVar22 < *(float **)(param_1 + 0x328)) {
              *pfVar22 = (float)piVar26[-1];
              pfVar22[1] = (float)iVar24;
              pfVar22 = pfVar22 + 2;
            }
            else {
              pfVar22 = pfVar2;
              FUN_1094c6060(pfVar2,&uStack_5f0,&uStack_250);
            }
            *(float **)(param_1 + 800) = pfVar22;
            uVar21 = (ulong)uStack_168 & 0xffffffff;
          }
          iVar19 = iVar19 + 1;
          piVar26 = piVar26 + 4;
        } while (iVar19 < (int)uVar21);
      }
      pfVar22 = &fStack_670;
      FUN_1095d3858();
      if (lStack_138 != 0) {
        piVar26 = (int *)(lStack_138 + 0x14);
        do {
          iVar19 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar19 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar19 + -1 == 0) {
          pfVar22 = (float *)&uStack_170;
          func_0x000109a848d4();
        }
      }
      lStack_138 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lStack_148 = 0;
      lStack_150 = 0;
      if (0 < uStack_170._4_4_) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_130 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < uStack_170._4_4_);
      }
      if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
        pfVar22 = (float *)puStack_128[-1];
        _free();
      }
      iVar35 = iVar35 + iVar54;
      iVar34 = iVar34 + iVar6;
      iVar36 = iVar36 + iVar6;
    } while (iVar35 < iVar33);
  }
  if (lStack_d8 != 0) {
    piVar26 = (int *)(lStack_d8 + 0x14);
    do {
      iVar33 = *piVar26;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar11) {
        *piVar26 = iVar33 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&iStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8._0_4_ = 0;
  uStack_e8._4_4_ = 0;
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0;
  if (0 < iStack_10c) {
    lVar25 = 0;
    do {
      *(undefined4 *)((long)puStack_d0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_10c);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (lStack_778 != 0) {
    piVar26 = (int *)(lStack_778 + 0x14);
    do {
      iVar33 = *piVar26;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar11) {
        *piVar26 = iVar33 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&fStack_7b0);
    }
  }
  lStack_778 = 0;
  uStack_798 = 0;
  uStack_794 = 0;
  uStack_7a0 = 0;
  uStack_79c = 0;
  uStack_788 = 0;
  uStack_784 = 0;
  uStack_790 = 0;
  uStack_78c = 0;
  if (0 < iStack_7ac) {
    lVar25 = 0;
    do {
      piStack_770[lVar25] = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_7ac);
  }
  if (puStack_768 != &uStack_760 && puStack_768 != (undefined8 *)0x0) {
    _free(puStack_768[-1]);
  }
  FUN_1095d3858(&iStack_1f0);
  fStack_6d0 = 127.5;
  uStack_6c4 = 0;
  uStack_6c0 = 0;
  iStack_6cc = 0;
  uStack_6c8 = 0;
  puStack_690 = (undefined8 *)&uStack_6c8;
  uStack_6b4 = 0;
  uStack_6b0 = 0;
  iStack_6bc = 0;
  uStack_6b8 = 0;
  uStack_6a4 = 0;
  uStack_6ac = 0;
  uStack_6a8 = 0;
  lStack_698 = 0;
  uStack_6a0 = 0;
  uStack_69c = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  fStack_730 = 127.5;
  piStack_6f0 = &iStack_728;
  uStack_724 = 0;
  uStack_720 = 0;
  iStack_72c = 0;
  iStack_728 = 0;
  uStack_714 = 0;
  uStack_710 = 0;
  uStack_71c = 0;
  uStack_718 = 0;
  uStack_704 = 0;
  uStack_70c = 0;
  uStack_708 = 0;
  lStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  lVar25 = *(long *)(param_1 + 0x228);
  puStack_6e8 = &uStack_6e0;
  puStack_688 = &uStack_680;
  if (*(long *)(lVar25 + 0x1a18) != 0) {
    uVar21 = (ulong)*(uint *)(lVar25 + 0x1a0c);
    if ((int)*(uint *)(lVar25 + 0x1a0c) < 3) {
      lVar29 = (long)*(int *)(lVar25 + 0x1a14) * (long)*(int *)(lVar25 + 0x1a10);
    }
    else {
      lVar29 = 1;
      piVar26 = *(int **)(lVar25 + 0x1a48);
      do {
        lVar29 = lVar29 * *piVar26;
        uVar21 = uVar21 - 1;
        piVar26 = piVar26 + 1;
      } while (uVar21 != 0);
    }
    if (lVar29 != 0) {
      uStack_5f0._0_4_ = (float)(*(int **)(lVar25 + 0x1a48))[1];
      uStack_5f0._4_4_ = **(int **)(lVar25 + 0x1a48) << 1;
      FUN_1095d359c(&iStack_1f0,lVar25 + 0x30,&uStack_5f0,0);
      fStack_670 = 127.5;
      uStack_668._4_4_ = 0;
      uStack_660 = 0;
      iStack_66c = 0;
      uStack_668._0_4_ = 0;
      puStack_630 = &uStack_668;
      uStack_654 = 0;
      uStack_650 = 0;
      iStack_65c = 0;
      uStack_658 = 0;
      uStack_644 = 0;
      uStack_64c = 0;
      uStack_648 = 0;
      lStack_638 = 0;
      uStack_640 = 0;
      uStack_63c = 0;
      uStack_620 = 0;
      uStack_618 = 0;
      fStack_7b0 = 127.5;
      piStack_770 = &iStack_7a8;
      uStack_7a4 = 0;
      uStack_7a0 = 0;
      iStack_7ac = 0;
      iStack_7a8 = 0;
      uStack_794 = 0;
      uStack_790 = 0;
      uStack_79c = 0;
      uStack_798 = 0;
      uStack_784 = 0;
      uStack_78c = 0;
      uStack_788 = 0;
      lStack_778 = 0;
      uStack_780 = 0;
      uStack_77c = 0;
      uStack_760 = 0;
      uStack_758 = 0;
      piVar26 = &iStack_1f0;
      puStack_768 = &uStack_760;
      puStack_628 = &uStack_620;
      FUN_109615e90(piVar26,&fStack_670,&fStack_7b0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      pfStack_5e8 = (float *)(*(long *)(param_1 + 0x228) + 0x1a08);
      lStack_5e0 = 0;
      uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
      iStack_110 = 0x2010000;
      uStack_100 = 0;
      uStack_fc = 0;
      puVar20 = &uStack_5f0;
      uStack_108 = &fStack_670;
      FUN_109ac9fc8(puVar20,&iStack_110,7,0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (4 < iRam00000001132dfb08) {
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        puStack_5a8 = (undefined8 *)0x0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        pfStack_5e8 = (float *)0x0;
        uStack_5f0 = (undefined8 *)0x0;
        uStack_5d8 = 0;
        lStack_5e0 = 0;
        FUN_10926db08(&uStack_5f0);
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        func_0x000107c31940(&iStack_110,&UNK_10f577c37);
        func_0x000107c31940(&uStack_170,&UNK_10f57821d);
        FUN_109671348(&uStack_5f0,5,&iStack_110,&uStack_170,0x7f4);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar20 - (long)piVar26) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if ((long)uStack_160 < 0) {
          __ZdlPv(uStack_170);
        }
        puVar20 = &uStack_5f0;
        FUN_109671170(puVar20);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      pfStack_5e8 = (float *)(*(long *)(param_1 + 0x228) + 0x1a68);
      lStack_5e0 = 0;
      uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
      iStack_110 = 0x2010000;
      uStack_108 = &fStack_7b0;
      uStack_100 = 0;
      uStack_fc = 0;
      puVar27 = &uStack_5f0;
      FUN_109ac9fc8(puVar27,&iStack_110,7,0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (4 < iRam00000001132dfb08) {
        uStack_4b0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        puStack_5a8 = (undefined8 *)0x0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        pfStack_5e8 = (float *)0x0;
        uStack_5f0 = (undefined8 *)0x0;
        uStack_5d8 = 0;
        lStack_5e0 = 0;
        FUN_10926db08(&uStack_5f0);
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
        func_0x000107c31940(&iStack_110,&UNK_10f577c37);
        func_0x000107c31940(&uStack_170,&UNK_10f57821d);
        FUN_109671348(&uStack_5f0,5,&iStack_110,&uStack_170,0x7f7);
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  ((float)(int)((float)(((long)puVar27 - (long)puVar20) / 1000) / 10.0) / 100.0);
        FUN_1092b4db8();
        if ((long)uStack_160 < 0) {
          __ZdlPv(uStack_170);
        }
        FUN_109671170(&uStack_5f0);
      }
      lVar29 = *(long *)(param_1 + 0x228);
      lVar25 = 0x674;
      if (*(char *)(lVar29 + 0x135b) == '\0') {
        lVar25 = 0x66c;
      }
      iVar33 = (int)(*(float *)(lVar29 + lVar25) / (float)*(int *)(lVar29 + 0x1a14));
      if (iVar33 == 2) {
        if (lStack_638 != 0) {
          piVar26 = (int *)(lStack_638 + 0x14);
          do {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = *piVar26 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (lStack_698 != 0) {
          piVar26 = (int *)(lStack_698 + 0x14);
          do {
            iVar33 = *piVar26;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = iVar33 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar33 + -1 == 0) {
            func_0x000109a848d4(&fStack_6d0);
          }
        }
        puVar20 = puStack_628;
        lStack_698 = 0;
        uStack_6b8 = 0;
        uStack_6b4 = 0;
        uStack_6c0 = 0;
        iStack_6bc = 0;
        uStack_6a8 = 0;
        uStack_6a4 = 0;
        uStack_6b0 = 0;
        uStack_6ac = 0;
        if (iStack_6cc < 1) {
LAB_10961367c:
          fStack_6d0 = fStack_670;
          if (2 < iStack_66c) goto LAB_1096136b0;
          iStack_6cc = iStack_66c;
          uStack_6c8 = (undefined4)uStack_668;
          uStack_6c4 = uStack_668._4_4_;
          *puStack_688 = *puStack_628;
          puStack_688[1] = puVar20[1];
        }
        else {
          lVar25 = 0;
          do {
            *(undefined4 *)((long)puStack_690 + lVar25 * 4) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < iStack_6cc);
          if (iStack_6cc < 3) goto LAB_10961367c;
LAB_1096136b0:
          fStack_6d0 = fStack_670;
          func_0x000109a84868(&fStack_6d0,&fStack_670);
        }
        uStack_6b8 = uStack_658;
        uStack_6b4 = uStack_654;
        uStack_6c0 = uStack_660;
        iStack_6bc = iStack_65c;
        uStack_6a8 = uStack_648;
        uStack_6a4 = uStack_644;
        uStack_6b0 = uStack_650;
        uStack_6ac = uStack_64c;
        lStack_698 = lStack_638;
        uStack_6a0 = uStack_640;
        uStack_69c = uStack_63c;
        if (lStack_778 != 0) {
          piVar26 = (int *)(lStack_778 + 0x14);
          do {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = *piVar26 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (lStack_6f8 != 0) {
          piVar26 = (int *)(lStack_6f8 + 0x14);
          do {
            iVar33 = *piVar26;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = iVar33 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar33 + -1 == 0) {
            func_0x000109a848d4(&fStack_730);
          }
        }
        lStack_6f8 = 0;
        uStack_718 = 0;
        uStack_714 = 0;
        uStack_720 = 0;
        uStack_71c = 0;
        uStack_708 = 0;
        uStack_704 = 0;
        uStack_710 = 0;
        uStack_70c = 0;
        if (iStack_72c < 1) {
LAB_109613760:
          if (iStack_7ac < 3) {
            *puStack_6e8 = *puStack_768;
            puStack_6e8[1] = puStack_768[1];
            lStack_6f8 = lStack_778;
            fStack_730 = fStack_7b0;
            uStack_720 = uStack_7a0;
            uStack_71c = uStack_79c;
            uStack_718 = uStack_798;
            uStack_714 = uStack_794;
            uStack_710 = uStack_790;
            uStack_70c = uStack_78c;
            uStack_708 = uStack_788;
            uStack_704 = uStack_784;
            uStack_700 = uStack_780;
            uStack_6fc = uStack_77c;
            iStack_72c = iStack_7ac;
            iStack_728 = iStack_7a8;
            uStack_724 = uStack_7a4;
            goto joined_r0x0001096137b4;
          }
        }
        else {
          lVar25 = 0;
          do {
            piStack_6f0[lVar25] = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < iStack_72c);
          if (iStack_72c < 3) goto LAB_109613760;
        }
        fStack_730 = fStack_7b0;
        func_0x000109a84868(&fStack_730,&fStack_7b0);
        lStack_6f8 = lStack_778;
        uStack_720 = uStack_7a0;
        uStack_71c = uStack_79c;
        uStack_718 = uStack_798;
        uStack_714 = uStack_794;
        uStack_710 = uStack_790;
        uStack_70c = uStack_78c;
        uStack_708 = uStack_788;
        uStack_704 = uStack_784;
        uStack_700 = uStack_780;
        uStack_6fc = uStack_77c;
      }
      else {
        if (iVar33 != 1) {
          uVar41 = 0x10;
          ___cxa_allocate_exception(0x10);
          func_0x000107c31940(&iStack_110,&UNK_10f578259);
          __ZNSt3__19to_stringEi(&uStack_170,iVar33);
          pfVar1 = uStack_168;
          puVar20 = uStack_170;
          if (-1 < (long)uStack_160) {
            pfVar1 = (float *)(uStack_160 >> 0x38);
            puVar20 = &uStack_170;
          }
          piVar26 = &iStack_110;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (piVar26,puVar20,pfVar1);
          pfStack_5e8 = *(float **)(piVar26 + 2);
          uStack_5f0 = *(undefined8 **)piVar26;
          lStack_5e0 = *(long *)(piVar26 + 4);
          piVar26[2] = 0;
          piVar26[3] = 0;
          piVar26[4] = 0;
          piVar26[5] = 0;
          piVar26[0] = 0;
          piVar26[1] = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar41,&uStack_5f0);
          ___cxa_throw(uVar41,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10961521c;
        }
        uVar21 = *puStack_630;
        iStack_10c = (int)((int)uVar21 + ((uint)(uVar21 >> 0x1f) & 1)) >> 1;
        iStack_110 = (int)(uVar21 >> 0x20) / 2;
        uStack_250 = NEON_rev64(CONCAT44(iStack_110,iStack_10c),4);
        iStack_10c = iStack_10c << 1;
        FUN_1095d359c(&uStack_5f0,lVar29 + 0x30,&iStack_110,0);
        FUN_109615e90(&uStack_5f0,&fStack_6d0,&fStack_730);
        iStack_110 = 0x1010000;
        uStack_108 = &fStack_670;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_170._0_4_ = 9.477423e-38;
        uStack_160 = 0;
        uStack_168 = &fStack_6d0;
        FUN_109b3a7f4(&iStack_110,&uStack_170,&uStack_250,4);
        iStack_110 = 0x1010000;
        uStack_108 = &fStack_7b0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x2010000);
        uStack_168 = &fStack_730;
        uStack_160 = 0;
        FUN_109b3a7f4(&iStack_110,&uStack_170,&uStack_250,4);
        FUN_1095d38fc(&iStack_1f0);
        FUN_1095d3858(&uStack_5f0);
      }
joined_r0x0001096137b4:
      if (lStack_778 != 0) {
        piVar26 = (int *)(lStack_778 + 0x14);
        do {
          iVar33 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar33 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&fStack_7b0);
        }
      }
      lStack_778 = 0;
      uStack_798 = 0;
      uStack_794 = 0;
      uStack_7a0 = 0;
      uStack_79c = 0;
      uStack_788 = 0;
      uStack_784 = 0;
      uStack_790 = 0;
      uStack_78c = 0;
      if (0 < iStack_7ac) {
        lVar25 = 0;
        do {
          piStack_770[lVar25] = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < iStack_7ac);
      }
      if (puStack_768 != &uStack_760 && puStack_768 != (undefined8 *)0x0) {
        _free(puStack_768[-1]);
      }
      if (lStack_638 != 0) {
        piVar26 = (int *)(lStack_638 + 0x14);
        do {
          iVar33 = *piVar26;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar11) {
            *piVar26 = iVar33 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&fStack_670);
        }
      }
      lStack_638 = 0;
      uStack_658 = 0;
      uStack_654 = 0;
      uStack_660 = 0;
      iStack_65c = 0;
      uStack_648 = 0;
      uStack_644 = 0;
      uStack_650 = 0;
      uStack_64c = 0;
      if (0 < iStack_66c) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_630 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < iStack_66c);
      }
      if (puStack_628 != &uStack_620 && puStack_628 != (undefined8 *)0x0) {
        _free(puStack_628[-1]);
      }
      FUN_1095d3858(&iStack_1f0);
      uStack_5f0 = (undefined8 *)NEON_rev64(*puStack_690,4);
      FUN_1095d359c(&fStack_670,*(long *)(param_1 + 0x228) + 0x30,&uStack_5f0,0);
      uStack_5f0 = (undefined8 *)NEON_rev64(*(undefined8 *)piStack_6f0,4);
      FUN_1095d359c(&fStack_7b0,*(long *)(param_1 + 0x228) + 0x30,&uStack_5f0,0);
      lStack_5e0 = 0;
      uStack_5f0._0_4_ = 2.3693558e-38;
      pfStack_5e8 = &fStack_6d0;
      iStack_1f0 = 0x2010000;
      pfStack_1e8 = &fStack_670;
      lStack_1e0 = 0;
      FUN_109aec0d0(0x3ff0000000000000,0x4049000000000000,&uStack_5f0,&iStack_1f0,0xffffffff,1,1,3,
                    0x10);
      lStack_5e0 = 0;
      uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
      pfStack_5e8 = &fStack_730;
      iStack_1f0 = 0x2010000;
      pfStack_1e8 = &fStack_7b0;
      lStack_1e0 = 0;
      piVar26 = (int *)&uStack_5f0;
      FUN_109aec0d0(0x3ff0000000000000,0x4049000000000000,piVar26,&iStack_1f0,0xffffffff,1,1,3,0x10)
      ;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar25 = *(long *)(param_1 + 0x300);
      piVar16 = piVar26;
      pfVar22 = uStack_108;
      if (lVar25 == *(long *)(param_1 + 0x308)) {
LAB_1096147f0:
        uStack_108 = pfVar22;
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (4 < iRam00000001132dfb08) {
          uStack_4b0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          uStack_518 = 0;
          uStack_520 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_568 = 0;
          uStack_570 = 0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          puStack_5a8 = (undefined8 *)0x0;
          puStack_5b0 = (undefined8 *)0x0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          lStack_5b8 = 0;
          uStack_5c0 = 0;
          pfStack_5e8 = (float *)0x0;
          uStack_5f0 = (undefined8 *)0x0;
          uStack_5d8 = 0;
          lStack_5e0 = 0;
          FUN_10926db08(&uStack_5f0);
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
          func_0x000107c31940(&iStack_1f0,&UNK_10f577c37);
          func_0x000107c31940(&iStack_110,&UNK_10f578277);
          FUN_109671348(&uStack_5f0,5,&iStack_1f0,&iStack_110,0x83f);
          FUN_1092b4db8();
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                    ((float)(int)((float)(((long)piVar16 - (long)piVar26) / 1000) / 10.0) / 100.0);
          FUN_1092b4db8();
          if (lStack_1e0 < 0) {
            __ZdlPv(CONCAT44(uStack_1ec,iStack_1f0));
          }
          FUN_109671170(&uStack_5f0);
          if (4 < iRam00000001132dfb08) {
            uStack_4b0 = 0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4e8 = 0;
            uStack_4f0 = 0;
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_508 = 0;
            uStack_510 = 0;
            uStack_4f8 = 0;
            uStack_500 = 0;
            uStack_528 = 0;
            uStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            uStack_548 = 0;
            uStack_550 = 0;
            uStack_538 = 0;
            uStack_540 = 0;
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_558 = 0;
            uStack_560 = 0;
            uStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            uStack_580 = 0;
            puStack_5a8 = (undefined8 *)0x0;
            puStack_5b0 = (undefined8 *)0x0;
            uStack_598 = 0;
            uStack_5a0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            lStack_5b8 = 0;
            uStack_5c0 = 0;
            pfStack_5e8 = (float *)0x0;
            uStack_5f0 = (undefined8 *)0x0;
            uStack_5d8 = 0;
            lStack_5e0 = 0;
            FUN_10926db08(&uStack_5f0);
            uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
            func_0x000107c31940(&iStack_1f0,&UNK_10f577c37);
            func_0x000107c31940(&iStack_110,&UNK_10f578277);
            FUN_109671348(&uStack_5f0,5,&iStack_1f0,&iStack_110,0x841);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
            FUN_1092b4db8();
            if (lStack_1e0 < 0) {
              __ZdlPv(CONCAT44(uStack_1ec,iStack_1f0));
            }
            FUN_109671170(&uStack_5f0);
          }
        }
        lVar29 = *(long *)(param_1 + 0x228);
        iVar33 = *(int *)(lVar29 + (long)*(int *)(param_1 + 0x26c) * 0x60 + 0x2b8c);
        iVar54 = *(int *)(lVar29 + 0x1a14);
        lVar25 = 0x6e8;
        if (*(char *)(lVar29 + 0x135b) == '\0') {
          lVar25 = 0x6dc;
        }
        fVar53 = *(float *)(lVar29 + lVar25);
        fVar37 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x8c) * 0.017453292;
        _tanf();
        fVar39 = *(float *)(param_1 + 0x90) * 0.017453292;
        _tanf();
        lVar25 = *(long *)(param_1 + 0x300);
        if (*(long *)(param_1 + 0x308) != lVar25) {
          uVar21 = 0;
          fVar37 = fVar53 * fVar37;
          fVar42 = (float)iVar33 / (float)iVar54;
          do {
            puVar20 = (undefined8 *)(lVar25 + uVar21 * 8);
            fVar49 = (float)*puVar20;
            fVar51 = (float)((ulong)*puVar20 >> 0x20);
            *puVar20 = CONCAT44(fVar51 + fVar51,fVar49 + fVar49);
            lVar25 = *(long *)(param_1 + 0x318);
            uVar41 = *(undefined8 *)(lVar25 + uVar21 * 8);
            fVar49 = (float)uVar41;
            fVar51 = (float)((ulong)uVar41 >> 0x20);
            *(ulong *)(lVar25 + uVar21 * 8) = CONCAT44(fVar51 + fVar51,fVar49 + fVar49);
            puVar27 = *(undefined8 **)(param_1 + 0x338);
            if (puVar27 < *(undefined8 **)(param_1 + 0x340)) {
              puVar28 = puVar27 + 1;
              *puVar27 = *puVar20;
            }
            else {
              puVar28 = (undefined8 *)(param_1 + 0x330);
              FUN_1092cbf20();
              lVar25 = *(long *)pfVar2;
            }
            *(undefined8 **)(param_1 + 0x338) = puVar28;
            puVar20 = *(undefined8 **)(param_1 + 0x350);
            if (puVar20 < *(undefined8 **)(param_1 + 0x358)) {
              puVar27 = puVar20 + 1;
              *puVar20 = *(undefined8 *)(lVar25 + uVar21 * 8);
            }
            else {
              puVar27 = (undefined8 *)(param_1 + 0x348);
              FUN_1092cbf20();
            }
            *(undefined8 **)(param_1 + 0x350) = puVar27;
            lVar25 = *(long *)(param_1 + 0x228);
            if (*(char *)(lVar25 + 0x2b78) == '\x01') {
              pfVar1 = (float *)(*(long *)(param_1 + 0x300) + uVar21 * 8);
              fVar49 = *pfVar1;
              fVar55 = pfVar1[1];
              iVar33 = (int)lVar25 + *(int *)(param_1 + 0x26c) * 0x60;
              uVar12 = iVar33 + 0x2b80;
              FUN_109616120(fVar42 * fVar49,fVar42 * fVar55);
              pfVar1 = (float *)(*(long *)(param_1 + 0x318) + uVar21 * 8);
              fVar51 = *pfVar1;
              uVar13 = iVar33 + 0x2ca0;
              FUN_109616120(fVar42 * fVar51,fVar42 * pfVar1[1]);
              bVar11 = (uVar12 >= 0x81 && 0x7f < (uVar13 & 0xff)) &&
                       (uVar12 < 0x81 || (uVar13 & 0xff) != 0x80);
              if ((*(char *)(lVar25 + 0x2d8) == '\x01') && (*(char *)(lVar25 + 0x305) == '\x01')) {
                if (*(char *)(lVar25 + 0x304) == '\0') {
                  fVar43 = *(float *)(lVar25 + 0x314);
                  fVar47 = *(float *)(lVar25 + 0x31c) - fVar43;
                  fVar45 = *(float *)(lVar25 + 0x318);
                  fVar50 = *(float *)(lVar25 + 800) - fVar45;
                  fVar52 = fVar47 * fVar47 + 0.0 + fVar50 * fVar50;
                  fVar38 = fVar43;
                  fVar40 = fVar45;
                  if (((fVar52 != 0.0) &&
                      (fVar52 = (-((fVar45 - fVar55) * fVar50) - (fVar47 * (fVar43 - fVar49) + 0.0))
                                / fVar52, 0.0 <= fVar52)) &&
                     (fVar38 = *(float *)(lVar25 + 0x31c), fVar40 = *(float *)(lVar25 + 800),
                     fVar52 <= 1.0)) {
                    fVar38 = fVar43 + fVar47 * fVar52;
                    fVar40 = fVar45 + fVar50 * fVar52;
                  }
                  bVar11 = SQRT((fVar38 - fVar49) * (fVar38 - fVar49) + 0.0 +
                                (fVar40 - fVar55) * (fVar40 - fVar55)) < fVar53 * fVar39;
                }
                else {
                  bVar11 = false;
                }
              }
              bVar5 = false;
              if (ABS(fVar49 - fVar51) < fVar37 + fVar37) {
                bVar5 = bVar11;
              }
              uStack_5f0 = (undefined8 *)CONCAT71(uStack_5f0._1_7_,bVar5);
              FUN_1093aa574(param_1 + 0x360,&uStack_5f0);
            }
            else {
              uStack_5f0 = (undefined8 *)((ulong)uStack_5f0 & 0xffffffffffffff00);
              FUN_1093aa574(param_1 + 0x360,&uStack_5f0);
            }
            uVar21 = uVar21 + 1;
            lVar25 = *(long *)(param_1 + 0x300);
          } while (uVar21 < (ulong)(*(long *)(param_1 + 0x308) - lVar25 >> 3));
        }
        if (4 < iRam00000001132dfb08) {
          uStack_4b0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          uStack_518 = 0;
          uStack_520 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_568 = 0;
          uStack_570 = 0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          puStack_5a8 = (undefined8 *)0x0;
          puStack_5b0 = (undefined8 *)0x0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          lStack_5b8 = 0;
          uStack_5c0 = 0;
          pfStack_5e8 = (float *)0x0;
          uStack_5f0 = (undefined8 *)0x0;
          uStack_5d8 = 0;
          lStack_5e0 = 0;
          FUN_10926db08(&uStack_5f0);
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4c8 = 0;
          uStack_4d0 = 0;
          uStack_4b8 = 0;
          uStack_4c0 = 0;
          uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
          func_0x000107c31940(&iStack_1f0,&UNK_10f577c37);
          func_0x000107c31940(&iStack_110,&UNK_10f578277);
          FUN_109671348(&uStack_5f0,5,&iStack_1f0,&iStack_110,0x872);
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
          FUN_1092b4db8();
          if (lStack_1e0 < 0) {
            __ZdlPv(CONCAT44(uStack_1ec,iStack_1f0));
          }
          FUN_109671170(&uStack_5f0);
          if (4 < iRam00000001132dfb08) {
            uStack_4b0 = 0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4e8 = 0;
            uStack_4f0 = 0;
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_508 = 0;
            uStack_510 = 0;
            uStack_4f8 = 0;
            uStack_500 = 0;
            uStack_528 = 0;
            uStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            uStack_548 = 0;
            uStack_550 = 0;
            uStack_538 = 0;
            uStack_540 = 0;
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_558 = 0;
            uStack_560 = 0;
            uStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            uStack_580 = 0;
            puStack_5a8 = (undefined8 *)0x0;
            puStack_5b0 = (undefined8 *)0x0;
            uStack_598 = 0;
            uStack_5a0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            lStack_5b8 = 0;
            uStack_5c0 = 0;
            pfStack_5e8 = (float *)0x0;
            uStack_5f0 = (undefined8 *)0x0;
            uStack_5d8 = 0;
            lStack_5e0 = 0;
            FUN_10926db08(&uStack_5f0);
            uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
            func_0x000107c31940(&iStack_1f0,&UNK_10f577c37);
            func_0x000107c31940(&iStack_110,&UNK_10f578277);
            FUN_109671348(&uStack_5f0,5,&iStack_1f0,&iStack_110,0x873);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
            if (lStack_1e0 < 0) {
              __ZdlPv(CONCAT44(uStack_1ec,iStack_1f0));
            }
            FUN_109671170(&uStack_5f0);
          }
        }
        *(int *)(param_1 + 0x234) =
             (int)((ulong)(*(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x300)) >> 3);
        FUN_1095d3858(&fStack_7b0);
        FUN_1095d3858(&fStack_670);
        pfVar1 = uStack_108;
        if (lStack_6f8 != 0) {
          piVar26 = (int *)(lStack_6f8 + 0x14);
          do {
            iVar33 = *piVar26;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = iVar33 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar33 + -1 == 0) {
            func_0x000109a848d4(&fStack_730);
            pfVar1 = uStack_108;
          }
        }
        lStack_6f8 = 0;
        uStack_718 = 0;
        uStack_714 = 0;
        uStack_720 = 0;
        uStack_71c = 0;
        uStack_708 = 0;
        uStack_704 = 0;
        uStack_710 = 0;
        uStack_70c = 0;
        if (0 < iStack_72c) {
          lVar25 = 0;
          do {
            piStack_6f0[lVar25] = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < iStack_72c);
        }
        uStack_108 = pfVar1;
        if (puStack_6e8 != &uStack_6e0 && puStack_6e8 != (undefined8 *)0x0) {
          _free(puStack_6e8[-1]);
        }
        if (lStack_698 != 0) {
          piVar26 = (int *)(lStack_698 + 0x14);
          do {
            iVar33 = *piVar26;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar11) {
              *piVar26 = iVar33 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar33 + -1 == 0) {
            func_0x000109a848d4(&fStack_6d0);
          }
        }
        lStack_698 = 0;
        uStack_6b8 = 0;
        uStack_6b4 = 0;
        uStack_6c0 = 0;
        iStack_6bc = 0;
        uStack_6a8 = 0;
        uStack_6a4 = 0;
        uStack_6b0 = 0;
        uStack_6ac = 0;
        if (0 < iStack_6cc) {
          lVar25 = 0;
          do {
            *(undefined4 *)((long)puStack_690 + lVar25 * 4) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < iStack_6cc);
        }
        if (puStack_688 != &uStack_680 && puStack_688 != (undefined8 *)0x0) {
          _free(puStack_688[-1]);
        }
        return;
      }
      fVar53 = *(float *)(param_1 + 0x58);
      fVar37 = *(float *)(param_1 + 0x68);
      fVar39 = *(float *)(param_1 + 0x6c);
      uVar21 = *(long *)(param_1 + 0x308) - lVar25;
      iStack_110 = 0x42ff000d;
      iStack_10c = 2;
      puStack_d0 = &uStack_108;
      uStack_108._0_4_ = (int)(uVar21 >> 3);
      uStack_108._4_4_ = 1;
      uStack_100 = (undefined4)lVar25;
      uStack_fc = (undefined4)((ulong)lVar25 >> 0x20);
      uStack_e8._0_4_ = 0;
      uStack_e8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      uStack_f0._4_4_ = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_f8 = uStack_100;
      uStack_f4 = uStack_fc;
      puStack_c8 = &uStack_c0;
      if ((lVar25 == 0) && ((uVar21 & 0x7fffffff8) != 0)) {
        puVar17 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar17 = 1;
        uStack_5f0 = (undefined8 *)(puVar17 + 1);
        pfStack_5e8 = (float *)0x1c;
        *(undefined1 *)(puVar17 + 8) = 0;
        *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
      }
      else {
        iStack_110 = 0x42ff400d;
        uStack_b8 = 8;
        uStack_c0 = 8;
        uStack_f0 = lVar25 + ((long)(uVar21 * 0x20000000) >> 0x20) * 8;
        uStack_160 = *(ulong *)(param_1 + 0x318);
        uVar21 = *(long *)(param_1 + 800) - uStack_160;
        uStack_170 = (undefined8 *)0x242ff000d;
        puStack_130 = &uStack_168;
        uStack_168 = (float *)CONCAT44(1,(int)(uVar21 >> 3));
        lStack_148 = 0;
        lStack_150 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_158 = uStack_160;
        puStack_128 = &uStack_120;
        uStack_e8 = uStack_f0;
        if ((uStack_160 == 0) && ((uVar21 & 0x7fffffff8) != 0)) {
          puVar17 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar17 = 1;
          uStack_5f0 = (undefined8 *)(puVar17 + 1);
          pfStack_5e8 = (float *)0x1c;
          *(undefined1 *)(puVar17 + 8) = 0;
          *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        }
        else {
          uStack_170 = (undefined8 *)0x242ff400d;
          uStack_118 = 8;
          uStack_120 = 8;
          lStack_150 = uStack_160 + ((long)(uVar21 * 0x20000000) >> 0x20) * 8;
          iVar33 = (int)*(float *)(param_1 + 0x2c);
          lStack_148 = lStack_150;
          FUN_1095e1cb0(&iStack_1f0,*(long *)(param_1 + 0x228) + 0x30,iVar33 * 0x1a,1,0);
          uStack_250 = 0x242ff0000;
          piStack_210 = &iStack_248;
          iStack_248 = 1;
          iStack_244 = (int)uStack_168;
          lStack_240 = lStack_1e0;
          lStack_238 = lStack_1e0;
          lStack_228 = 0;
          lStack_230 = 0;
          lStack_218 = 0;
          uStack_220 = 0;
          uStack_1f8 = 0;
          lStack_200 = 0;
          plStack_208 = &lStack_200;
          if (((int)uStack_168 == 0) || (lStack_1e0 != 0)) {
            uStack_250 = 0x242ff4000;
            lStack_2c0 = (long)(int)uStack_168;
            uStack_1f8 = 1;
            lStack_230 = lStack_1e0 + lStack_2c0;
            lStack_2a0 = lStack_1e0 + iVar33;
            piStack_270 = &iStack_2a8;
            iStack_2a8 = 1;
            iStack_2a4 = (int)uStack_168;
            lStack_278 = 0;
            uStack_280 = 0;
            lStack_320 = lStack_2c0 << 2;
            uStack_2b0 = 0x242ff4005;
            uStack_258 = 4;
            lStack_290 = lStack_2a0 + lStack_2c0 * 4;
            lStack_300 = lStack_1e0 + iVar33 * 5;
            puStack_2d0 = &uStack_308;
            uStack_308 = 1;
            iStack_304 = (int)uStack_168;
            lStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_310 = 0x242ff4000;
            uStack_2b8 = 1;
            lStack_2f0 = lStack_300 + lStack_2c0;
            lStack_360 = lStack_1e0 + iVar33 * 6;
            piStack_330 = &iStack_368;
            iStack_368 = 1;
            iStack_364 = (int)uStack_168;
            lStack_338 = 0;
            uStack_340 = 0;
            uStack_370 = 0x242ff4005;
            uStack_318 = 4;
            lStack_350 = lStack_360 + lStack_2c0 * 4;
            lStack_3c0 = lStack_1e0 + iVar33 * 10;
            uStack_3d0 = 0x242ff000d;
            piStack_390 = &iStack_3c8;
            iStack_3c8 = 1;
            iStack_3c4 = (int)uStack_108;
            lStack_3a8 = 0;
            lStack_3b0 = 0;
            lStack_398 = 0;
            uStack_3a0 = 0;
            uStack_378 = 0;
            lStack_380 = 0;
            lStack_3b8 = lStack_3c0;
            plStack_388 = &lStack_380;
            lStack_358 = lStack_360;
            lStack_348 = lStack_350;
            plStack_328 = &lStack_320;
            lStack_2f8 = lStack_300;
            lStack_2e8 = lStack_2f0;
            plStack_2c8 = &lStack_2c0;
            lStack_298 = lStack_2a0;
            lStack_288 = lStack_290;
            plStack_268 = &lStack_260;
            lStack_260 = lStack_320;
            lStack_228 = lStack_230;
            lStack_200 = lStack_2c0;
            if ((lStack_1e0 != 0) || ((int)uStack_108 == 0)) {
              uStack_3d0 = 0x242ff400d;
              lStack_380 = (long)(int)uStack_108 << 3;
              uStack_378 = 8;
              lStack_3b0 = lStack_3c0 + (long)(int)uStack_108 * 8;
              uStack_428 = 1;
              iStack_424 = (int)uStack_168;
              lStack_420 = lStack_1e0 + iVar33 * 0x12;
              puStack_3f0 = &uStack_428;
              lStack_3f8 = 0;
              uStack_400 = 0;
              lStack_3e0 = lStack_2c0 << 3;
              uStack_430 = 0x242ff400d;
              uStack_3d8 = 8;
              lStack_410 = lStack_420 + lStack_2c0 * 8;
              uStack_5f0._0_4_ = 9.477423e-38;
              lStack_5e0 = 0;
              pfStack_5e8 = (float *)&uStack_3d0;
              lStack_418 = lStack_420;
              lStack_408 = lStack_410;
              plStack_3e8 = &lStack_3e0;
              lStack_3a8 = lStack_3b0;
              FUN_109a479a0(&iStack_110,&uStack_5f0);
              uStack_5f0._0_4_ = 9.477423e-38;
              lStack_5e0 = 0;
              puVar20 = &uStack_170;
              pfStack_5e8 = (float *)&uStack_430;
              FUN_109a479a0(puVar20,&uStack_5f0);
              __ZNSt3__16chrono12steady_clock3nowEv();
              puVar27 = *(undefined8 **)(param_1 + 0x3d8);
              lStack_5e0 = 0;
              uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
              pfStack_5e8 = &fStack_7b0;
              lStack_438 = 0;
              uStack_448 = 0x1010000;
              pfStack_440 = &fStack_670;
              lStack_450 = 0;
              uStack_460 = 0x1010000;
              puStack_458 = &uStack_430;
              auStack_478[0] = 0x3010000;
              puStack_470 = &uStack_3d0;
              uStack_468 = 0;
              auStack_490[0] = 0x2010000;
              puStack_488 = &uStack_250;
              uStack_480 = 0;
              auStack_4a8[0] = 0x2010000;
              puStack_4a0 = &uStack_2b0;
              uStack_498 = 0;
              FUN_109657bdc(puVar27,*(long *)(param_1 + 0x228) + 0x30,&uStack_5f0,&uStack_448,
                            &uStack_460,auStack_478,auStack_490,auStack_4a8);
              __ZNSt3__16chrono12steady_clock3nowEv();
              if (4 < iRam00000001132dfb08) {
                uStack_4b0 = 0;
                uStack_4c8 = 0;
                uStack_4d0 = 0;
                uStack_4b8 = 0;
                uStack_4c0 = 0;
                uStack_4e8 = 0;
                uStack_4f0 = 0;
                uStack_4d8 = 0;
                uStack_4e0 = 0;
                uStack_508 = 0;
                uStack_510 = 0;
                uStack_4f8 = 0;
                uStack_500 = 0;
                uStack_528 = 0;
                uStack_530 = 0;
                uStack_518 = 0;
                uStack_520 = 0;
                uStack_548 = 0;
                uStack_550 = 0;
                uStack_538 = 0;
                uStack_540 = 0;
                uStack_568 = 0;
                uStack_570 = 0;
                uStack_558 = 0;
                uStack_560 = 0;
                uStack_588 = 0;
                uStack_590 = 0;
                uStack_578 = 0;
                uStack_580 = 0;
                puStack_5a8 = (undefined8 *)0x0;
                puStack_5b0 = (undefined8 *)0x0;
                uStack_598 = 0;
                uStack_5a0 = 0;
                uStack_5c8 = 0;
                uStack_5d0 = 0;
                lStack_5b8 = 0;
                uStack_5c0 = 0;
                pfStack_5e8 = (float *)0x0;
                uStack_5f0 = (undefined8 *)0x0;
                uStack_5d8 = 0;
                lStack_5e0 = 0;
                FUN_10926db08(&uStack_5f0);
                uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
                uStack_4d8 = 0;
                uStack_4e0 = 0;
                uStack_4c8 = 0;
                uStack_4d0 = 0;
                uStack_4b8 = 0;
                uStack_4c0 = 0;
                uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
                func_0x000107c31940(&uStack_448,&UNK_10f577c37);
                func_0x000107c31940(&uStack_460,&UNK_10f578130);
                FUN_109671348(&uStack_5f0,5,&uStack_448,&uStack_460,0x718);
                FUN_1092b4db8();
                FUN_1092b4db8();
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                          ((float)(int)((float)(((long)puVar27 - (long)puVar20) / 1000) / 10.0) /
                           100.0);
                FUN_1092b4db8();
                if (lStack_450 < 0) {
                  __ZdlPv(CONCAT44(uStack_45c,uStack_460));
                }
                if (lStack_438 < 0) {
                  __ZdlPv(CONCAT44(uStack_444,uStack_448));
                }
                puVar27 = &uStack_5f0;
                FUN_109671170(puVar27);
              }
              if (fVar53 <= 0.5) {
                uStack_5f0._0_4_ = 9.477423e-38;
                pfStack_5e8 = (float *)&uStack_310;
                lStack_5e0 = 0;
                FUN_109a479a0(&uStack_250,&uStack_5f0);
                uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x2010000);
                pfStack_5e8 = (float *)&uStack_370;
                lStack_5e0 = 0;
                FUN_109a479a0(&uStack_2b0,&uStack_5f0);
              }
              else {
                __ZNSt3__16chrono12steady_clock3nowEv();
                lVar25 = *(long *)(param_1 + 0x3d8);
                lStack_5e0 = 0;
                uStack_5f0 = (undefined8 *)CONCAT44(uStack_5f0._4_4_,0x1010000);
                pfStack_5e8 = &fStack_670;
                lStack_438 = 0;
                uStack_448 = 0x1010000;
                pfStack_440 = &fStack_7b0;
                lStack_450 = 0;
                uStack_460 = 0x1010000;
                puStack_458 = &uStack_3d0;
                auStack_478[0] = 0x3010000;
                puStack_470 = &uStack_430;
                uStack_468 = 0;
                auStack_490[0] = 0x2010000;
                puStack_488 = &uStack_310;
                uStack_480 = 0;
                auStack_4a8[0] = 0x2010000;
                puStack_4a0 = &uStack_370;
                uStack_498 = 0;
                FUN_109657bdc(lVar25,*(long *)(param_1 + 0x228) + 0x30,&uStack_5f0,&uStack_448,
                              &uStack_460,auStack_478,auStack_490,auStack_4a8);
                __ZNSt3__16chrono12steady_clock3nowEv();
                if (4 < iRam00000001132dfb08) {
                  uStack_4b0 = 0;
                  uStack_4c8 = 0;
                  uStack_4d0 = 0;
                  uStack_4b8 = 0;
                  uStack_4c0 = 0;
                  uStack_4e8 = 0;
                  uStack_4f0 = 0;
                  uStack_4d8 = 0;
                  uStack_4e0 = 0;
                  uStack_508 = 0;
                  uStack_510 = 0;
                  uStack_4f8 = 0;
                  uStack_500 = 0;
                  uStack_528 = 0;
                  uStack_530 = 0;
                  uStack_518 = 0;
                  uStack_520 = 0;
                  uStack_548 = 0;
                  uStack_550 = 0;
                  uStack_538 = 0;
                  uStack_540 = 0;
                  uStack_568 = 0;
                  uStack_570 = 0;
                  uStack_558 = 0;
                  uStack_560 = 0;
                  uStack_588 = 0;
                  uStack_590 = 0;
                  uStack_578 = 0;
                  uStack_580 = 0;
                  puStack_5a8 = (undefined8 *)0x0;
                  puStack_5b0 = (undefined8 *)0x0;
                  uStack_598 = 0;
                  uStack_5a0 = 0;
                  uStack_5c8 = 0;
                  uStack_5d0 = 0;
                  lStack_5b8 = 0;
                  uStack_5c0 = 0;
                  pfStack_5e8 = (float *)0x0;
                  uStack_5f0 = (undefined8 *)0x0;
                  uStack_5d8 = 0;
                  lStack_5e0 = 0;
                  FUN_10926db08(&uStack_5f0);
                  uStack_4e8 = CONCAT44(uStack_4e8._4_4_,3);
                  uStack_4d8 = 0;
                  uStack_4e0 = 0;
                  uStack_4c8 = 0;
                  uStack_4d0 = 0;
                  uStack_4b8 = 0;
                  uStack_4c0 = 0;
                  uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
                  func_0x000107c31940(&uStack_448,&UNK_10f577c37);
                  func_0x000107c31940(&uStack_460,&UNK_10f578130);
                  FUN_109671348(&uStack_5f0,5,&uStack_448,&uStack_460,0x72e);
                  FUN_1092b4db8();
                  FUN_1092b4db8();
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                            ((float)(int)((float)((lVar25 - (long)puVar27) / 1000) / 10.0) / 100.0);
                  FUN_1092b4db8();
                  if (lStack_450 < 0) {
                    __ZdlPv(CONCAT44(uStack_45c,uStack_460));
                  }
                  if (lStack_438 < 0) {
                    __ZdlPv(CONCAT44(uStack_444,uStack_448));
                  }
                  FUN_109671170(&uStack_5f0);
                }
              }
              if (iStack_3c8 < 1) {
                lVar25 = 0;
              }
              else {
                lVar29 = 0;
                lVar25 = 0;
                iVar33 = 0;
                fVar37 = fVar37 * fVar37;
                puVar20 = *(undefined8 **)pfVar2;
                puVar27 = *(undefined8 **)pfVar1;
                do {
                  iVar54 = (int)lVar25;
                  if (((uStack_2b0._1_1_ >> 6 & 1) == 0) && (*piStack_270 != 1)) {
                    if (piStack_270[1] == 1) {
                      pfVar22 = (float *)(lStack_2a0 + *plStack_268 * lVar25);
                    }
                    else {
                      iVar35 = 0;
                      if (iStack_2a4 != 0) {
                        iVar35 = iVar54 / iStack_2a4;
                      }
                      pfVar22 = (float *)(lStack_2a0 + lVar29 +
                                         *plStack_268 * (long)iVar35 +
                                         (long)(iVar35 * iStack_2a4) * -4);
                    }
                  }
                  else {
                    pfVar22 = (float *)(lStack_2a0 + lVar25 * 4);
                  }
                  if (((uStack_370._1_1_ >> 6 & 1) == 0) && (*piStack_330 != 1)) {
                    if (piStack_330[1] == 1) {
                      pfVar31 = (float *)(lStack_360 + *plStack_328 * lVar25);
                    }
                    else {
                      iVar35 = 0;
                      if (iStack_364 != 0) {
                        iVar35 = iVar54 / iStack_364;
                      }
                      pfVar31 = (float *)(lStack_360 + lVar29 +
                                         *plStack_328 * (long)iVar35 +
                                         (long)(iVar35 * iStack_364) * -4);
                    }
                  }
                  else {
                    pfVar31 = (float *)(lStack_360 + lVar25 * 4);
                  }
                  uVar41 = *(undefined8 *)(*(long *)pfVar1 + lVar25 * 8);
                  uVar44 = *(undefined8 *)(lStack_3c0 + lVar25 * 8);
                  uVar46 = *(undefined8 *)(*(long *)pfVar2 + lVar25 * 8);
                  uVar48 = *(undefined8 *)(lStack_420 + lVar25 * 8);
                  fVar49 = (float)uVar41 - (float)uVar44;
                  fVar51 = (float)uVar46 - (float)uVar48;
                  fVar53 = (float)((ulong)uVar41 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
                  fVar42 = (float)((ulong)uVar46 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
                  bVar4 = 0;
                  if (*pfVar31 < fVar39) {
                    bVar4 = -(fVar42 * fVar42 + fVar51 * fVar51 < fVar37 &&
                             fVar53 * fVar53 + fVar49 * fVar49 < fVar37) & *pfVar22 < fVar39;
                  }
                  if (((uStack_250._1_1_ >> 6 & 1) == 0) && (*piStack_210 != 1)) {
                    if (piStack_210[1] == 1) {
                      pbVar32 = (byte *)(lStack_240 + *plStack_208 * lVar25);
                    }
                    else {
                      iVar35 = 0;
                      if (iStack_244 != 0) {
                        iVar35 = iVar54 / iStack_244;
                      }
                      pbVar32 = (byte *)(lStack_240 + lVar25 +
                                        (*plStack_208 * (long)iVar35 - (long)(iVar35 * iStack_244)))
                      ;
                    }
                  }
                  else {
                    pbVar32 = (byte *)(lStack_240 + lVar25);
                  }
                  *pbVar32 = bVar4 & *pbVar32;
                  if (((uStack_250._1_1_ >> 6 & 1) == 0) && (*piStack_210 != 1)) {
                    if (piStack_210[1] == 1) {
                      pcVar30 = (char *)(lStack_240 + *plStack_208 * lVar25);
                    }
                    else {
                      iVar35 = 0;
                      if (iStack_244 != 0) {
                        iVar35 = iVar54 / iStack_244;
                      }
                      pcVar30 = (char *)(lStack_240 + lVar25 +
                                        (*plStack_208 * (long)iVar35 - (long)(iVar35 * iStack_244)))
                      ;
                    }
                  }
                  else {
                    pcVar30 = (char *)(lStack_240 + lVar25);
                  }
                  puVar28 = puVar20;
                  puVar14 = puVar27;
                  if (*pcVar30 != '\0') {
                    puVar14 = puVar27 + 1;
                    *puVar27 = *(undefined8 *)(lStack_3c0 + lVar25 * 8);
                    puVar28 = puVar20 + 1;
                    *puVar20 = *(undefined8 *)(lStack_420 + lVar25 * 8);
                    iVar33 = iVar33 + 1;
                  }
                  lVar25 = lVar25 + 1;
                  lVar29 = lVar29 + 4;
                  puVar20 = puVar28;
                  puVar27 = puVar14;
                } while (lVar25 < iStack_3c8);
                lVar25 = (long)iVar33;
              }
              FUN_1092e3d84(pfVar1,lVar25);
              FUN_1092e3d84(pfVar2,lVar25);
              lVar25 = uStack_f0;
              lVar29 = uStack_e8;
              if (lStack_3f8 != 0) {
                piVar16 = (int *)(lStack_3f8 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_430);
                  lVar25 = uStack_f0;
                  lVar29 = uStack_e8;
                }
              }
              lStack_3f8 = 0;
              lStack_418 = 0;
              lStack_420 = 0;
              lStack_408 = 0;
              lStack_410 = 0;
              if (0 < uStack_430._4_4_) {
                lVar23 = 0;
                do {
                  puStack_3f0[lVar23] = 0;
                  lVar23 = lVar23 + 1;
                } while (lVar23 < uStack_430._4_4_);
              }
              uStack_f0 = lVar25;
              uStack_e8 = lVar29;
              if (plStack_3e8 != &lStack_3e0 && plStack_3e8 != (long *)0x0) {
                _free(plStack_3e8[-1]);
              }
              if (lStack_398 != 0) {
                piVar16 = (int *)(lStack_398 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_3d0);
                }
              }
              lStack_398 = 0;
              lStack_3b8 = 0;
              lStack_3c0 = 0;
              lStack_3a8 = 0;
              lStack_3b0 = 0;
              if (0 < uStack_3d0._4_4_) {
                lVar25 = 0;
                do {
                  piStack_390[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_3d0._4_4_);
              }
              if (plStack_388 != &lStack_380 && plStack_388 != (long *)0x0) {
                _free(plStack_388[-1]);
              }
              if (lStack_338 != 0) {
                piVar16 = (int *)(lStack_338 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_370);
                }
              }
              lStack_338 = 0;
              lStack_358 = 0;
              lStack_360 = 0;
              lStack_348 = 0;
              lStack_350 = 0;
              if (0 < uStack_370._4_4_) {
                lVar25 = 0;
                do {
                  piStack_330[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_370._4_4_);
              }
              if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
                _free(plStack_328[-1]);
              }
              if (lStack_2d8 != 0) {
                piVar16 = (int *)(lStack_2d8 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_310);
                }
              }
              lStack_2d8 = 0;
              lStack_2f8 = 0;
              lStack_300 = 0;
              lStack_2e8 = 0;
              lStack_2f0 = 0;
              if (0 < uStack_310._4_4_) {
                lVar25 = 0;
                do {
                  puStack_2d0[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_310._4_4_);
              }
              if (plStack_2c8 != &lStack_2c0 && plStack_2c8 != (long *)0x0) {
                _free(plStack_2c8[-1]);
              }
              if (lStack_278 != 0) {
                piVar16 = (int *)(lStack_278 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_2b0);
                }
              }
              lStack_278 = 0;
              lStack_298 = 0;
              lStack_2a0 = 0;
              lStack_288 = 0;
              lStack_290 = 0;
              if (0 < uStack_2b0._4_4_) {
                lVar25 = 0;
                do {
                  piStack_270[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_2b0._4_4_);
              }
              if (plStack_268 != &lStack_260 && plStack_268 != (long *)0x0) {
                _free(plStack_268[-1]);
              }
              if (lStack_218 != 0) {
                piVar16 = (int *)(lStack_218 + 0x14);
                do {
                  iVar33 = *piVar16;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar11) {
                    *piVar16 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  func_0x000109a848d4(&uStack_250);
                }
              }
              lStack_218 = 0;
              lStack_238 = 0;
              lStack_240 = 0;
              lStack_228 = 0;
              lStack_230 = 0;
              if (0 < uStack_250._4_4_) {
                lVar25 = 0;
                do {
                  piStack_210[lVar25] = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < uStack_250._4_4_);
              }
              if (plStack_208 != &lStack_200 && plStack_208 != (long *)0x0) {
                _free(plStack_208[-1]);
              }
              piVar16 = &iStack_1f0;
              FUN_1095d3858(piVar16);
              lVar25 = uStack_f0;
              lVar29 = uStack_e8;
              if (lStack_138 != 0) {
                piVar3 = (int *)(lStack_138 + 0x14);
                do {
                  iVar33 = *piVar3;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar11) {
                    *piVar3 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  piVar16 = (int *)&uStack_170;
                  func_0x000109a848d4(piVar16);
                  lVar25 = uStack_f0;
                  lVar29 = uStack_e8;
                }
              }
              lStack_138 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              lStack_148 = 0;
              lStack_150 = 0;
              if (0 < uStack_170._4_4_) {
                lVar23 = 0;
                do {
                  *(undefined4 *)((long)puStack_130 + lVar23 * 4) = 0;
                  lVar23 = lVar23 + 1;
                } while (lVar23 < uStack_170._4_4_);
              }
              uStack_f0 = lVar25;
              uStack_e8 = lVar29;
              if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
                piVar16 = (int *)puStack_128[-1];
                _free(piVar16);
              }
              if (lStack_d8 != 0) {
                piVar3 = (int *)(lStack_d8 + 0x14);
                do {
                  iVar33 = *piVar3;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar11) {
                    *piVar3 = iVar33 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar33 + -1 == 0) {
                  piVar16 = &iStack_110;
                  func_0x000109a848d4(piVar16);
                }
              }
              pfVar22 = (float *)CONCAT44(uStack_108._4_4_,(int)uStack_108);
              lStack_d8 = 0;
              uStack_f8 = 0;
              uStack_f4 = 0;
              uStack_100 = 0;
              uStack_fc = 0;
              uStack_e8._0_4_ = 0;
              uStack_e8._4_4_ = 0;
              uStack_f0._0_4_ = 0;
              uStack_f0._4_4_ = 0;
              if (0 < iStack_10c) {
                lVar25 = 0;
                do {
                  *(undefined4 *)((long)puStack_d0 + lVar25 * 4) = 0;
                  lVar25 = lVar25 + 1;
                } while (lVar25 < iStack_10c);
              }
              if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
                piVar16 = (int *)puStack_c8[-1];
                _free(piVar16);
                pfVar22 = (float *)CONCAT44(uStack_108._4_4_,(int)uStack_108);
              }
              goto LAB_1096147f0;
            }
            puVar17 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar17 = 1;
            uStack_5f0 = (undefined8 *)(puVar17 + 1);
            pfStack_5e8 = (float *)0x1c;
            *(undefined1 *)(puVar17 + 8) = 0;
            *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          }
          else {
            puVar17 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar17 = 1;
            uStack_5f0 = (undefined8 *)(puVar17 + 1);
            pfStack_5e8 = (float *)0x1c;
            *(undefined1 *)(puVar17 + 8) = 0;
            *(undefined8 *)(puVar17 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar17 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar17 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar17 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&uStack_5f0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
          }
        }
      }
      goto LAB_10961521c;
    }
  }
  uVar41 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  ___cxa_throw(uVar41,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10961521c:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109615220);
  (*pcVar10)();
}



/* Entry: 10961573c; end: 1096158e7;  */

undefined8 FUN_10961573c(undefined8 param_1)

{
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  
  if (2 < iRam00000001132dfb08) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    FUN_10926db08(&uStack_190);
    uStack_88 = CONCAT44(uStack_88._4_4_,3);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1a8,&UNK_10f577c37);
    func_0x000107c31940(auStack_1c0,&UNK_10f55aaab);
    FUN_109671348(&uStack_190,3,auStack_1a8,auStack_1c0,0x624);
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    FUN_109671170(&uStack_190);
  }
  return param_1;
}



/* Entry: 1096158e8; end: 109615a9b;  */

void FUN_1096158e8(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x268) == '\x01') {
    lVar1 = param_1 + 0x378;
    if (*(long *)(param_1 + 0x3b0) != 0) {
      piVar2 = (int *)(*(long *)(param_1 + 0x3b0) + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(lVar1);
      }
    }
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (0 < *(int *)(param_1 + 0x37c)) {
      lVar6 = 0;
      lVar7 = *(long *)(param_1 + 0x3b8);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x37c));
    }
    lVar7 = *(long *)(param_1 + 0x228);
    lVar6 = 0x674;
    if (*(char *)(lVar7 + 0x135b) == '\0') {
      lVar6 = 0x66c;
    }
    fVar10 = *(float *)(lVar7 + lVar6);
    iVar3 = *(int *)(lVar7 + 0x1a14);
    uStack_70 = CONCAT44(uStack_70._4_4_,0x2010000);
    uStack_60 = 0;
    lStack_68 = lVar1;
    FUN_109a479a0(lVar7 + 0x1a08,&uStack_70);
    lVar6 = *(long *)(param_1 + 0x330);
    if (*(long *)(param_1 + 0x338) != lVar6) {
      uVar8 = 0;
      fVar10 = (float)(int)(fVar10 / (float)iVar3);
      do {
        uStack_70 = 0;
        uStack_60 = 0x406fe00000000000;
        if (*(char *)(*(long *)(param_1 + 0x360) + uVar8) != '\0') {
          uStack_60 = 0;
          uStack_70 = 0x406fe00000000000;
        }
        uStack_58 = 0x406fe00000000000;
        lStack_68 = 0;
        auStack_88[0] = 0x3010000;
        uStack_78 = 0;
        uVar9 = *(undefined8 *)(lVar6 + uVar8 * 8);
        uStack_90 = CONCAT44((int)((float)((ulong)uVar9 >> 0x20) / fVar10),
                             (int)((float)uVar9 / fVar10));
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x348) + uVar8 * 8);
        uStack_98 = CONCAT44((int)((float)((ulong)uVar9 >> 0x20) / fVar10),
                             (int)((float)uVar9 / fVar10));
        lStack_80 = lVar1;
        FUN_109aed744(auStack_88,&uStack_90,&uStack_98,&uStack_70,1,8,0);
        uVar8 = uVar8 + 1;
        lVar6 = *(long *)(param_1 + 0x330);
      } while (uVar8 < (ulong)(*(long *)(param_1 + 0x338) - lVar6 >> 3));
    }
  }
  return;
}



/* Entry: 109615a9c; end: 109615c4b;  */

void FUN_109615a9c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *****apppppuStack_d8 [2];
  char cStack_c1;
  undefined1 uStack_b9;
  undefined8 *****pppppuStack_b8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x388) == 0) {
    return;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x37c);
  if ((int)*(uint *)(param_1 + 0x37c) < 3) {
    lVar10 = (long)*(int *)(param_1 + 900) * (long)*(int *)(param_1 + 0x380);
  }
  else {
    lVar10 = 1;
    piVar13 = *(int **)(param_1 + 0x3b8);
    do {
      lVar10 = lVar10 * *piVar13;
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 1;
    } while (uVar7 != 0);
  }
  if (lVar10 == 0) {
    return;
  }
  uVar7 = param_2[1];
  if (uVar7 < (ulong)param_2[2]) {
    FUN_109616310(uVar7,param_1 + 0x378);
    plVar8 = (long *)(uVar7 + 0xb0);
    param_2[1] = (long)plVar8;
LAB_109615c10:
    param_2[1] = (long)plVar8;
    return;
  }
  lVar10 = uVar7 - *param_2;
  uVar7 = (lVar10 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar7 < 0x1745d1745d1745e) {
    lVar11 = param_2[2] - *param_2 >> 4;
    uVar12 = lVar11 * 0x5d1745d1745d1746;
    if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
      uVar12 = uVar7;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar11 * 0x2e8ba2e8ba2e8ba3)) {
      uVar12 = 0x1745d1745d1745d;
    }
    plStack_38 = param_2;
    if (uVar12 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_2;
      FUN_1095ff478();
    }
    lVar10 = (long)plVar8 + lVar10;
    plStack_40 = plVar8 + uVar12 * 0x16;
    plStack_58 = plVar8;
    plStack_50 = (long *)lVar10;
    plStack_48 = (long *)lVar10;
    FUN_109616310(lVar10,param_1 + 0x378);
    plStack_48 = (long *)(lVar10 + 0xb0);
    lVar10 = lVar10 + (*param_2 - param_2[1]);
    FUN_1095ff4c0(param_2,*param_2,param_2[1],lVar10);
    plVar8 = plStack_48;
    plStack_58 = (long *)*param_2;
    *param_2 = lVar10;
    lVar10 = param_2[2];
    param_2[2] = (long)plStack_40;
    param_2[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar10;
    FUN_1095ff754(&plStack_58);
    goto LAB_109615c10;
  }
  plVar8 = param_2;
  FUN_1095ff464();
  param_2[1] = lVar10;
  __Unwind_Resume();
  if (*(long *)(param_1 + 0x388) == 0) {
    return;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x37c);
  if ((int)*(uint *)(param_1 + 0x37c) < 3) {
    lVar10 = (long)*(int *)(param_1 + 900) * (long)*(int *)(param_1 + 0x380);
  }
  else {
    lVar10 = 1;
    piVar13 = *(int **)(param_1 + 0x3b8);
    do {
      lVar10 = lVar10 * *piVar13;
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 1;
    } while (uVar7 != 0);
  }
  if (lVar10 == 0) {
    return;
  }
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar7 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  func_0x000104c4f768(apppppuStack_d8,uVar7 + 8,&pppppuStack_b8);
  ppppppuVar3 = (undefined8 ******)apppppuStack_d8[0];
  if (-1 < cStack_c1) {
    ppppppuVar3 = apppppuStack_d8;
  }
  if (uVar7 != 0) {
    plVar1 = (long *)*(long *)(param_1 + 8);
    if (-1 < *(char *)(param_1 + 0x1f)) {
      plVar1 = (long *)(param_1 + 8);
    }
    _memmove(ppppppuVar3,plVar1,uVar7);
  }
  *(undefined8 *)((long)ppppppuVar3 + uVar7) = 0x7365686374616d5f;
  *(undefined1 *)((undefined8 *)((long)ppppppuVar3 + uVar7) + 1) = 0;
  pppppuStack_b8 = apppppuStack_d8;
  FUN_1095ff978(plVar8,apppppuStack_d8,&UNK_10dd5b8f9,&pppppuStack_b8,&uStack_b9);
  plVar1 = (long *)(param_1 + 0x378);
  plVar2 = plVar8 + 5;
  if (plVar2 == plVar1) goto LAB_109615e4c;
  if (*(long *)(param_1 + 0x3b0) != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0x3b0) + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar8[0xc] != 0) {
    piVar13 = (int *)(plVar8[0xc] + 0x14);
    do {
      iVar4 = *piVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(plVar2);
    }
  }
  plVar8[0xc] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  if (*(int *)((long)plVar8 + 0x2c) < 1) {
    *(undefined4 *)plVar2 = *(undefined4 *)plVar1;
LAB_109615df0:
    if (2 < *(int *)(param_1 + 0x37c)) goto LAB_109615e24;
    *(int *)((long)plVar8 + 0x2c) = *(int *)(param_1 + 0x37c);
    plVar8[6] = *(long *)(param_1 + 0x380);
    puVar9 = *(undefined8 **)(param_1 + 0x3c0);
    puVar14 = (undefined8 *)plVar8[0xe];
    *puVar14 = *puVar9;
    puVar14[1] = puVar9[1];
  }
  else {
    lVar10 = 0;
    lVar11 = plVar8[0xd];
    do {
      *(undefined4 *)(lVar11 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((long)plVar8 + 0x2c));
    *(undefined4 *)plVar2 = *(undefined4 *)plVar1;
    if (*(int *)((long)plVar8 + 0x2c) < 3) goto LAB_109615df0;
LAB_109615e24:
    func_0x000109a84868(plVar2,plVar1);
  }
  lVar10 = *(long *)(param_1 + 0x388);
  plVar8[8] = *(long *)(param_1 + 0x390);
  plVar8[7] = lVar10;
  lVar10 = *(long *)(param_1 + 0x398);
  plVar8[10] = *(long *)(param_1 + 0x3a0);
  plVar8[9] = lVar10;
  lVar10 = *(long *)(param_1 + 0x3a8);
  plVar8[0xc] = *(long *)(param_1 + 0x3b0);
  plVar8[0xb] = lVar10;
LAB_109615e4c:
  if (cStack_c1 < '\0') {
    __ZdlPv(apppppuStack_d8[0]);
  }
  return;
}



/* Entry: 109615c4c; end: 109615e8f;  */

void FUN_109615c4c(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 ******ppppppuVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *****apppppuStack_68 [2];
  char cStack_51;
  undefined1 uStack_49;
  undefined8 *****pppppuStack_48;
  
  if (*(long *)(param_1 + 0x388) == 0) {
    return;
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x37c);
  if ((int)*(uint *)(param_1 + 0x37c) < 3) {
    lVar10 = (long)*(int *)(param_1 + 900) * (long)*(int *)(param_1 + 0x380);
  }
  else {
    lVar10 = 1;
    piVar12 = *(int **)(param_1 + 0x3b8);
    do {
      lVar10 = lVar10 * *piVar12;
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar8 != 0);
  }
  if (lVar10 == 0) {
    return;
  }
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    uVar8 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  func_0x000104c4f768(apppppuStack_68,uVar8 + 8,&pppppuStack_48);
  ppppppuVar3 = (undefined8 ******)apppppuStack_68[0];
  if (-1 < cStack_51) {
    ppppppuVar3 = apppppuStack_68;
  }
  if (uVar8 != 0) {
    plVar4 = (long *)*(long *)(param_1 + 8);
    if (-1 < *(char *)(param_1 + 0x1f)) {
      plVar4 = (long *)(param_1 + 8);
    }
    _memmove(ppppppuVar3,plVar4,uVar8);
  }
  *(undefined8 *)((long)ppppppuVar3 + uVar8) = 0x7365686374616d5f;
  *(undefined1 *)((undefined8 *)((long)ppppppuVar3 + uVar8) + 1) = 0;
  pppppuStack_48 = apppppuStack_68;
  FUN_1095ff978(param_2,apppppuStack_68,&UNK_10dd5b8f9,&pppppuStack_48,&uStack_49);
  puVar1 = (undefined4 *)(param_1 + 0x378);
  puVar2 = (undefined4 *)(param_2 + 0x28);
  if (puVar2 == puVar1) goto LAB_109615e4c;
  if (*(long *)(param_1 + 0x3b0) != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0x3b0) + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = *piVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    piVar12 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
    do {
      iVar5 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x2c) < 1) {
    *puVar2 = *puVar1;
LAB_109615df0:
    if (2 < *(int *)(param_1 + 0x37c)) goto LAB_109615e24;
    *(int *)(param_2 + 0x2c) = *(int *)(param_1 + 0x37c);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x380);
    puVar9 = *(undefined8 **)(param_1 + 0x3c0);
    puVar13 = *(undefined8 **)(param_2 + 0x70);
    *puVar13 = *puVar9;
    puVar13[1] = puVar9[1];
  }
  else {
    lVar10 = 0;
    lVar11 = *(long *)(param_2 + 0x68);
    do {
      *(undefined4 *)(lVar11 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x2c));
    *puVar2 = *puVar1;
    if (*(int *)(param_2 + 0x2c) < 3) goto LAB_109615df0;
LAB_109615e24:
    func_0x000109a84868(puVar2,puVar1);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x388);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(param_2 + 0x38) = uVar14;
  uVar14 = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined8 *)(param_2 + 0x48) = uVar14;
  uVar14 = *(undefined8 *)(param_1 + 0x3a8);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined8 *)(param_2 + 0x58) = uVar14;
LAB_109615e4c:
  if (cStack_51 < '\0') {
    __ZdlPv(apppppuStack_68[0]);
  }
  return;
}



/* Entry: 109615e90; end: 10961611f;  */

void FUN_109615e90(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_44;
  
  uStack_58 = *(undefined4 *)(param_1 + 0xc);
  iStack_5c = *(int *)(param_1 + 8) / 2;
  uStack_50 = 0;
  uStack_60 = 0;
  iStack_54 = iStack_5c;
  uStack_48 = uStack_58;
  iStack_44 = iStack_5c;
  FUN_109a852c8(&uStack_c0,param_1,&uStack_50);
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  param_2[7] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  if (0 < *(int *)((long)param_2 + 4)) {
    lVar5 = 0;
    lVar7 = param_2[8];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_2 + 4));
  }
  param_2[1] = uStack_b8;
  *param_2 = CONCAT44(iStack_bc,uStack_c0);
  param_2[3] = uStack_a8;
  param_2[2] = uStack_b0;
  param_2[5] = uStack_98;
  param_2[4] = uStack_a0;
  param_2[7] = uStack_88;
  param_2[6] = uStack_90;
  puVar8 = (undefined8 *)param_2[9];
  puVar6 = param_2 + 10;
  if (puVar8 != puVar6) {
    if (puVar8 != (undefined8 *)0x0) {
      _free(puVar8[-1]);
    }
    param_2[8] = param_2 + 1;
    param_2[9] = puVar6;
    puVar8 = puVar6;
  }
  if (iStack_bc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_c0 | 4);
    *puVar8 = *puStack_78;
    puVar8[1] = puStack_78[1];
    uStack_c0 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_78 != auStack_70) {
      _free(puStack_78[-1]);
    }
  }
  else {
    param_2[8] = uStack_80;
    param_2[9] = puStack_78;
  }
  FUN_109a852c8(&uStack_c0,param_1,&uStack_60);
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_3);
    }
  }
  param_3[7] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  if (0 < *(int *)((long)param_3 + 4)) {
    lVar5 = 0;
    lVar7 = param_3[8];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_3 + 4));
  }
  param_3[1] = uStack_b8;
  *param_3 = CONCAT44(iStack_bc,uStack_c0);
  param_3[3] = uStack_a8;
  param_3[2] = uStack_b0;
  param_3[5] = uStack_98;
  param_3[4] = uStack_a0;
  param_3[7] = uStack_88;
  param_3[6] = uStack_90;
  puVar8 = (undefined8 *)param_3[9];
  puVar6 = param_3 + 10;
  if (puVar8 != puVar6) {
    if (puVar8 != (undefined8 *)0x0) {
      _free(puVar8[-1]);
    }
    param_3[8] = param_3 + 1;
    param_3[9] = puVar6;
    puVar8 = puVar6;
  }
  if (iStack_bc < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_c0 | 4);
    *puVar8 = *puStack_78;
    puVar8[1] = puStack_78[1];
    uStack_c0 = 0x42ff0000;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_78 != auStack_70) {
      _free(puStack_78[-1]);
    }
  }
  else {
    param_3[8] = uStack_80;
    param_3[9] = puStack_78;
  }
  return;
}



/* Entry: 109616120; end: 10961629b;  */

int FUN_109616120(float param_1,float param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = (uint)param_1;
  uVar5 = (uint)param_2;
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar3 = uVar4;
  if (uVar4 < uVar2) {
LAB_10961616c:
    uVar6 = uVar4 + 1;
    if (uVar2 <= uVar6) {
      if (uVar2 == 1) goto LAB_109616180;
      do {
        iVar1 = 0;
        if (-1 < (int)uVar6) {
          iVar1 = uVar2 * 2 + -2;
        }
        uVar6 = iVar1 - uVar6;
      } while (uVar2 <= uVar6);
    }
  }
  else {
    if (uVar2 != 1) {
      do {
        iVar1 = 0;
        if (-1 < (int)uVar3) {
          iVar1 = uVar2 * 2 + -2;
        }
        uVar3 = iVar1 - uVar3;
      } while (uVar2 <= uVar3);
      goto LAB_10961616c;
    }
    uVar3 = 0;
LAB_109616180:
    uVar6 = 0;
  }
  uVar2 = *(uint *)(param_3 + 8);
  uVar7 = uVar5;
  if (uVar5 < uVar2) {
LAB_1096161e8:
    uVar9 = uVar5 + 1;
    if (uVar9 < uVar2) goto LAB_109616220;
    if (uVar2 != 1) {
      do {
        iVar1 = 0;
        if (-1 < (int)uVar9) {
          iVar1 = uVar2 * 2 + -2;
        }
        uVar9 = iVar1 - uVar9;
      } while (uVar2 <= uVar9);
      goto LAB_109616220;
    }
  }
  else {
    if (uVar2 != 1) {
      do {
        iVar1 = 0;
        if (-1 < (int)uVar7) {
          iVar1 = uVar2 * 2 + -2;
        }
        uVar7 = iVar1 - uVar7;
      } while (uVar2 <= uVar7);
      goto LAB_1096161e8;
    }
    uVar7 = 0;
  }
  uVar9 = 0;
LAB_109616220:
  param_1 = param_1 - (float)(int)uVar4;
  lVar8 = *(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)(int)uVar7;
  fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uVar3));
  fVar11 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uVar6));
  lVar8 = *(long *)(param_3 + 0x10) + **(long **)(param_3 + 0x48) * (long)(int)uVar9;
  fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uVar3));
  fVar13 = (float)NEON_ucvtf((uint)*(byte *)(lVar8 + (int)uVar6));
  return (int)((param_2 - (float)(int)uVar5) * (param_1 * fVar13 + (1.0 - param_1) * fVar12) +
              (1.0 - (param_2 - (float)(int)uVar5)) * (param_1 * fVar11 + (1.0 - param_1) * fVar10))
  ;
}



/* Entry: 10961629c; end: 1096162af;  */

void FUN_10961629c(void)

{
  FUN_1096163e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096162b0; end: 1096162b3;  */

void FUN_1096162b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096162b4; end: 10961630f;  */

void FUN_1096162b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x150;
        FUN_1095de654();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109616310; end: 1096163df;  */

undefined8 FUN_109616310(undefined8 param_1,long param_2)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  char cStack_49;
  char cStack_48;
  undefined8 auStack_40 [2];
  char cStack_29;
  undefined8 uStack_28;
  
  func_0x000107c31940(auStack_40,&UNK_10f578122);
  auStack_68[0] = 0;
  cStack_48 = '\0';
  uStack_28 = NEON_rev64(*(undefined8 *)(param_2 + 8),4);
  FUN_1095ff24c(param_1,auStack_40,&uStack_28,param_2,1,auStack_68);
  if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
    __ZdlPv(uStack_60);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return param_1;
}



/* Entry: 1096163e0; end: 1096165b3;  */

undefined8 * FUN_1096163e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_DAT_110aff960;
  lVar5 = param_1[0x7b];
  param_1[0x7b] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  if (param_1[0x76] != 0) {
    piVar1 = (int *)(param_1[0x76] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x6f);
    }
  }
  param_1[0x76] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  if (0 < *(int *)((long)param_1 + 0x37c)) {
    lVar5 = 0;
    lVar7 = param_1[0x77];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x37c));
  }
  puVar6 = (undefined8 *)param_1[0x78];
  if (puVar6 != param_1 + 0x79 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6c] != 0) {
    param_1[0x6d] = param_1[0x6c];
    __ZdlPv();
  }
  if (param_1[0x69] != 0) {
    param_1[0x6a] = param_1[0x69];
    __ZdlPv();
  }
  if (param_1[0x66] != 0) {
    param_1[0x67] = param_1[0x66];
    __ZdlPv();
  }
  if (param_1[99] != 0) {
    param_1[100] = param_1[99];
    __ZdlPv();
  }
  if (param_1[0x60] != 0) {
    param_1[0x61] = param_1[0x60];
    __ZdlPv();
  }
  if (param_1[0x5b] != 0) {
    piVar1 = (int *)(param_1[0x5b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x54);
    }
  }
  param_1[0x5b] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  if (0 < *(int *)((long)param_1 + 0x2a4)) {
    lVar5 = 0;
    lVar7 = param_1[0x5c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2a4));
  }
  puVar6 = (undefined8 *)param_1[0x5d];
  if (puVar6 != param_1 + 0x5e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x51] != 0) {
    param_1[0x52] = param_1[0x51];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x287) < '\0') {
    __ZdlPv(param_1[0x4e]);
  }
  FUN_1096162b4(param_1 + 0x4a);
  FUN_1096162b4(param_1 + 0x47);
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1096165b4; end: 1096167bb;  */

void FUN_1096165b4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar7;
  ulong uVar6;
  undefined8 uVar8;
  undefined4 auStack_150 [2];
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [2];
  undefined4 *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [4];
  int iStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar5 = (int)*(undefined8 *)*param_1 + -1;
  iVar7 = (int)((ulong)*(undefined8 *)*param_1 >> 0x20) + -1;
  uStack_60 = CONCAT44(iVar7 / 2,iVar5 / 2);
  uVar8 = NEON_rev64(*(undefined8 *)(param_1[1] + 8),4);
  uVar6 = CONCAT44(iVar7 - (iVar7 >> 0x1f),iVar5 - (iVar5 >> 0x1f)) & 0xfffffffefffffffe;
  uStack_58 = CONCAT44((int)((ulong)uVar8 >> 0x20) - (int)(uVar6 >> 0x20),(int)uVar8 - (int)uVar6);
  uStack_b8 = param_1[2];
  uStack_c0 = 0x2010000;
  uStack_b0 = 0;
  FUN_109a479a0(param_1[1],&uStack_c0);
  FUN_109a852c8(&uStack_c0,param_1[1],&uStack_60);
  FUN_109a852c8(auStack_120,param_1[2],&uStack_60);
  uStack_128 = 0;
  auStack_138[0] = 0x1010000;
  auStack_150[0] = 0x2010000;
  uStack_140 = 0;
  uStack_48 = *(undefined8 *)*param_1;
  uStack_50 = 0xffffffffffffffff;
  puStack_148 = auStack_120;
  puStack_130 = &uStack_c0;
  FUN_109b437c0(auStack_138,auStack_150,0xffffffff,&uStack_48,&uStack_50,1,2);
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(auStack_120);
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < iStack_11c) {
    lVar4 = 0;
    do {
      *(undefined4 *)(lStack_e0 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iStack_11c);
  }
  if (puStack_d8 != auStack_d0 && puStack_d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_d8 + -8));
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0 < iStack_bc) {
    lVar4 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iStack_bc);
  }
  if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_78 + -8));
  }
  return;
}



/* Entry: 1096167bc; end: 1096168a7;  */

undefined8 *
FUN_1096167bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = &PTR_FUN_110affa28;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x46,param_3);
  *(undefined1 *)((long)param_1 + 0x249) = param_4;
  param_1[4] = 0x3f80000000000000;
  return param_1;
}



/* Entry: 1096168a8; end: 109616b5b;  */

undefined8 FUN_1096168a8(long param_1,int param_2,double *param_3)

{
  undefined4 uVar1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (param_2 == 6) {
    uVar1 = 0x3f800000;
    if ((float)*param_3 != 0.0) {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f57833f);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x37);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(1.0 - (double)*(float *)(param_1 + 0x24));
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *(float *)(param_1 + 0x20) = (float)*param_3;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f57833f);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0x2d);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
  }
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  FUN_109671170(&uStack_170);
  return 1;
}



/* Entry: 109616b5c; end: 109616bb3;  */

undefined8 * FUN_109616b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110affa28;
  if (*(char *)((long)param_1 + 0x247) < '\0') {
    __ZdlPv(param_1[0x46]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109616bb4; end: 109616bb7;  */

undefined8 * FUN_109616bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110affa28;
  if (*(char *)((long)param_1 + 0x247) < '\0') {
    __ZdlPv(param_1[0x46]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109616bb8; end: 109616bcb;  */

void FUN_109616bb8(void)

{
  FUN_109616b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109616bcc; end: 109617553;  */

void FUN_109616bcc(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined7 uStack_1f0;
  char cStack_1e9;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  lVar5 = *(long *)(param_1 + 0x228);
  fVar10 = *(float *)(lVar5 + 0x1764);
  fVar9 = *(float *)(lVar5 + 0x1768);
  fVar8 = *(float *)(lVar5 + 0x176c);
  if (4 < iRam00000001132dfb08) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    puStack_158 = (undefined8 *)0x0;
    lStack_160 = 0;
    uStack_148 = 0;
    puStack_150 = (undefined8 *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    FUN_10926db08(&uStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_200,&UNK_10f57833f);
    func_0x000107c31940(auStack_1d8,&UNK_10f578489);
    FUN_109671348(&uStack_1c0,5,&uStack_200,auStack_1d8,0x72);
    FUN_1092b4db8();
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
    if (cStack_1e9 < '\0') {
      __ZdlPv(uStack_200);
    }
    FUN_109671170(&uStack_1c0);
    if (4 < iRam00000001132dfb08) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      puStack_158 = (undefined8 *)0x0;
      lStack_160 = 0;
      uStack_148 = 0;
      puStack_150 = (undefined8 *)0x0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_200,&UNK_10f57833f);
      func_0x000107c31940(auStack_1d8,&UNK_10f578489);
      FUN_109671348(&uStack_1c0,5,&uStack_200,auStack_1d8,0x73);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(fVar10 * 57.29578);
      FUN_1092b4db8();
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      if (cStack_1e9 < '\0') {
        __ZdlPv(uStack_200);
      }
      FUN_109671170(&uStack_1c0);
      if (4 < iRam00000001132dfb08) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        puStack_158 = (undefined8 *)0x0;
        lStack_160 = 0;
        uStack_148 = 0;
        puStack_150 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_10926db08(&uStack_1c0);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_200,&UNK_10f57833f);
        func_0x000107c31940(auStack_1d8,&UNK_10f578489);
        FUN_109671348(&uStack_1c0,5,&uStack_200,auStack_1d8,0x74);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(fVar9 * 57.29578);
        FUN_1092b4db8();
        if (cStack_1c1 < '\0') {
          __ZdlPv(auStack_1d8[0]);
        }
        if (cStack_1e9 < '\0') {
          __ZdlPv(uStack_200);
        }
        FUN_109671170(&uStack_1c0);
        if (4 < iRam00000001132dfb08) {
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          puStack_158 = (undefined8 *)0x0;
          lStack_160 = 0;
          uStack_148 = 0;
          puStack_150 = (undefined8 *)0x0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          FUN_10926db08(&uStack_1c0);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_80 = uStack_80 & 0xffffffff00000000;
          func_0x000107c31940(&uStack_200,&UNK_10f57833f);
          func_0x000107c31940(auStack_1d8,&UNK_10f578489);
          FUN_109671348(&uStack_1c0,5,&uStack_200,auStack_1d8,0x75);
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(fVar8 * 57.29578);
          FUN_1092b4db8();
          if (cStack_1c1 < '\0') {
            __ZdlPv(auStack_1d8[0]);
          }
          if (cStack_1e9 < '\0') {
            __ZdlPv(uStack_200);
          }
          FUN_109671170(&uStack_1c0);
          if (4 < iRam00000001132dfb08) {
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_f8 = 0;
            uStack_f4 = 0;
            uStack_100 = 0;
            uStack_fc = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_ec = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_108 = 0;
            uStack_104 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
            puStack_158 = (undefined8 *)0x0;
            lStack_160 = 0;
            uStack_148 = 0;
            puStack_150 = (undefined8 *)0x0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            uStack_1a8 = 0;
            uStack_1a4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            FUN_10926db08(&uStack_1c0);
            uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_80 = uStack_80 & 0xffffffff00000000;
            func_0x000107c31940(&uStack_200,&UNK_10f57833f);
            func_0x000107c31940(auStack_1d8,&UNK_10f578489);
            FUN_109671348(&uStack_1c0,5,&uStack_200,auStack_1d8,0x77);
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
            if (cStack_1c1 < '\0') {
              __ZdlPv(auStack_1d8[0]);
            }
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            FUN_109671170(&uStack_1c0);
          }
        }
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x228);
  if (param_2 == 0) {
    FUN_1095cfd0c(&uStack_1c0,-fVar10,-fVar9,-fVar8);
    FUN_1095cfc50(lVar5 + 0x2e80,&uStack_1c0);
    uStack_1b0 = *(undefined4 *)(lVar5 + 0x2e90);
    uStack_1b8 = *(undefined8 *)(lVar5 + 0x2e88);
    uStack_1c0 = *(undefined8 *)(lVar5 + 0x2e80);
    uStack_1a4 = (undefined4)*(undefined8 *)(lVar5 + 0x2e9c);
    uStack_1a0 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2e9c) >> 0x20);
    uStack_1ac = (undefined4)*(undefined8 *)(lVar5 + 0x2e94);
    uStack_1a8 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2e94) >> 0x20);
    uStack_190 = *(undefined8 *)(lVar5 + 0x2eb0);
    uStack_198 = *(ulong *)(lVar5 + 0x2ea8);
    puStack_158 = &uStack_190;
    iVar2 = *(int *)(lVar5 + 0x2eac);
    uStack_180 = *(undefined8 *)(lVar5 + 0x2ec0);
    uStack_188 = *(undefined8 *)(lVar5 + 0x2eb8);
    uStack_170 = *(undefined8 *)(lVar5 + 0x2ed0);
    uStack_178 = *(undefined8 *)(lVar5 + 0x2ec8);
    uStack_168 = *(undefined8 *)(lVar5 + 0x2ed8);
    lStack_160 = *(long *)(lVar5 + 12000);
    puStack_150 = &uStack_148;
    uStack_148 = 0;
    uStack_140 = 0;
    if (lStack_160 != 0) {
      piVar1 = (int *)(lStack_160 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar2 = *(int *)(lVar5 + 0x2eac);
    }
    if (iVar2 < 3) {
      uStack_148 = **(undefined8 **)(lVar5 + 0x2ef0);
      uStack_140 = (*(undefined8 **)(lVar5 + 0x2ef0))[1];
    }
    else {
      uStack_198 = uStack_198 & 0xffffffff;
      func_0x000109a84868(&uStack_198);
    }
    lVar7 = 0;
    uStack_11c = (undefined4)*(undefined8 *)(lVar5 + 0x2f24);
    uStack_118 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f24) >> 0x20);
    uStack_124 = (undefined4)*(undefined8 *)(lVar5 + 0x2f1c);
    uStack_120 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f1c) >> 0x20);
    uStack_10c = (undefined4)*(undefined8 *)(lVar5 + 0x2f34);
    uStack_108 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f34) >> 0x20);
    uStack_114 = (undefined4)*(undefined8 *)(lVar5 + 0x2f2c);
    uStack_110 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f2c) >> 0x20);
    uStack_fc = (undefined4)*(undefined8 *)(lVar5 + 0x2f44);
    uStack_f8 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f44) >> 0x20);
    uStack_104 = (undefined4)*(undefined8 *)(lVar5 + 0x2f3c);
    uStack_100 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f3c) >> 0x20);
    uStack_138 = CONCAT31(uStack_138._1_3_,*(undefined1 *)(lVar5 + 0x2f08));
    uStack_f4 = (undefined4)*(undefined8 *)(lVar5 + 0x2f4c);
    uStack_f0 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f4c) >> 0x20);
    uStack_12c = (undefined4)*(undefined8 *)(lVar5 + 0x2f14);
    uStack_128 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f14) >> 0x20);
    uStack_134 = (undefined4)*(undefined8 *)(lVar5 + 0x2f0c);
    uStack_130 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x2f0c) >> 0x20);
    do {
      *(undefined4 *)((long)&uStack_ec + lVar7) = *(undefined4 *)(lVar5 + 0x2f54 + lVar7);
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xc);
    FUN_1095c1e10(&uStack_200,*(long *)(param_1 + 0x228) + 0x344,0);
    uStack_1c0 = uStack_200;
    lVar7 = *(long *)(param_1 + 0x228);
    fVar8 = *(float *)(lVar7 + 0x1154);
    bVar4 = true;
    if ((!NAN(fVar8)) && (bVar4 = false, !NAN(fVar8) && !NAN(*(float *)(lVar7 + 0x1340)))) {
      bVar4 = fVar8 == *(float *)(lVar7 + 0x1340);
    }
    if (bVar4) {
      fVar8 = (*(float *)(lVar7 + 0x46c) * *(float *)(lVar7 + 0x730)) / *(float *)(lVar7 + 0x734);
    }
    else {
      fVar8 = *(float *)(lVar7 + 0x1160);
    }
    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,fVar8);
    FUN_1095cf6d4(&uStack_200,lVar7 + 0x1764,lVar5 + 0x2e80,&uStack_1c0);
    lVar5 = *(long *)(param_1 + 0x228);
    *(undefined4 *)(lVar5 + 0x1c8c) = uStack_1e0;
    *(undefined8 *)(lVar5 + 0x1c74) = uStack_1f8;
    *(undefined8 *)(lVar5 + 0x1c6c) = uStack_200;
    *(undefined8 *)(lVar5 + 0x1c84) = uStack_1e8;
    *(ulong *)(lVar5 + 0x1c7c) = CONCAT17(cStack_1e9,uStack_1f0);
    if (lStack_160 != 0) {
      piVar1 = (int *)(lStack_160 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_198);
      }
    }
    if (0 < uStack_198._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)puStack_158 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_198._4_4_);
    }
  }
  else {
    FUN_1095cfd0c(&uStack_1c0,fVar10,fVar9,fVar8);
    FUN_1095cfc50(lVar5 + 0xd0,&uStack_1c0);
    uStack_1b8 = *(undefined8 *)(lVar5 + 0xd8);
    uStack_1c0 = *(undefined8 *)(lVar5 + 0xd0);
    uStack_190 = *(undefined8 *)(lVar5 + 0x100);
    uStack_198 = *(ulong *)(lVar5 + 0xf8);
    uStack_1b0 = *(undefined4 *)(lVar5 + 0xe0);
    uStack_1a4 = (undefined4)*(undefined8 *)(lVar5 + 0xec);
    uStack_1a0 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0xec) >> 0x20);
    uStack_1ac = (undefined4)*(undefined8 *)(lVar5 + 0xe4);
    uStack_1a8 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0xe4) >> 0x20);
    puStack_158 = &uStack_190;
    iVar2 = *(int *)(lVar5 + 0xfc);
    uStack_180 = *(undefined8 *)(lVar5 + 0x110);
    uStack_188 = *(undefined8 *)(lVar5 + 0x108);
    uStack_170 = *(undefined8 *)(lVar5 + 0x120);
    uStack_178 = *(undefined8 *)(lVar5 + 0x118);
    uStack_168 = *(undefined8 *)(lVar5 + 0x128);
    lStack_160 = *(long *)(lVar5 + 0x130);
    puStack_150 = &uStack_148;
    uStack_148 = 0;
    uStack_140 = 0;
    if (lStack_160 != 0) {
      piVar1 = (int *)(lStack_160 + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      iVar2 = *(int *)(lVar5 + 0xfc);
    }
    if (iVar2 < 3) {
      uStack_148 = **(undefined8 **)(lVar5 + 0x140);
      uStack_140 = (*(undefined8 **)(lVar5 + 0x140))[1];
    }
    else {
      uStack_198 = uStack_198 & 0xffffffff;
      func_0x000109a84868(&uStack_198);
    }
    uStack_11c = (undefined4)*(undefined8 *)(lVar5 + 0x174);
    uStack_118 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x174) >> 0x20);
    uStack_124 = (undefined4)*(undefined8 *)(lVar5 + 0x16c);
    uStack_120 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x16c) >> 0x20);
    uStack_10c = (undefined4)*(undefined8 *)(lVar5 + 0x184);
    uStack_108 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x184) >> 0x20);
    uStack_114 = (undefined4)*(undefined8 *)(lVar5 + 0x17c);
    uStack_110 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x17c) >> 0x20);
    uStack_fc = (undefined4)*(undefined8 *)(lVar5 + 0x194);
    uStack_f8 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x194) >> 0x20);
    uStack_104 = (undefined4)*(undefined8 *)(lVar5 + 0x18c);
    uStack_100 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x18c) >> 0x20);
    uStack_138 = CONCAT31(uStack_138._1_3_,*(undefined1 *)(lVar5 + 0x158));
    uStack_f4 = (undefined4)*(undefined8 *)(lVar5 + 0x19c);
    uStack_f0 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x19c) >> 0x20);
    uStack_12c = (undefined4)*(undefined8 *)(lVar5 + 0x164);
    uStack_128 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x164) >> 0x20);
    uStack_134 = (undefined4)*(undefined8 *)(lVar5 + 0x15c);
    uStack_130 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x15c) >> 0x20);
    lVar7 = 0x35;
    puVar6 = (undefined4 *)(lVar5 + 0x1a4);
    do {
      *(undefined4 *)((long)&uStack_1c0 + lVar7 * 4) = *puVar6;
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0x38);
    FUN_1095c1e10(&uStack_200,*(long *)(param_1 + 0x228) + 0x344,1);
    uStack_1c0 = uStack_200;
    lVar7 = *(long *)(param_1 + 0x228);
    fVar8 = *(float *)(lVar7 + 0x1154);
    bVar4 = true;
    if ((!NAN(fVar8)) && (bVar4 = false, !NAN(fVar8) && !NAN(*(float *)(lVar7 + 0x1340)))) {
      bVar4 = fVar8 == *(float *)(lVar7 + 0x1340);
    }
    if (bVar4) {
      fVar8 = (*(float *)(lVar7 + 0x46c) * *(float *)(lVar7 + 0x730)) / *(float *)(lVar7 + 0x734);
    }
    else {
      fVar8 = *(float *)(lVar7 + 0x1160);
    }
    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,fVar8);
    FUN_1095cf6d4(&uStack_200,lVar7 + 0x1764,lVar5 + 0xd0,&uStack_1c0);
    lVar5 = *(long *)(param_1 + 0x228);
    *(undefined4 *)(lVar5 + 0x1c68) = uStack_1e0;
    *(undefined8 *)(lVar5 + 0x1c50) = uStack_1f8;
    *(undefined8 *)(lVar5 + 0x1c48) = uStack_200;
    *(undefined8 *)(lVar5 + 0x1c60) = uStack_1e8;
    *(ulong *)(lVar5 + 0x1c58) = CONCAT17(cStack_1e9,uStack_1f0);
    if (lStack_160 != 0) {
      piVar1 = (int *)(lStack_160 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_198);
      }
    }
    if (0 < uStack_198._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)((long)puStack_158 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_198._4_4_);
    }
  }
  lStack_160 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  if (puStack_150 != &uStack_148 && puStack_150 != (undefined8 *)0x0) {
    _free(puStack_150[-1]);
  }
  return;
}



/* Entry: 109617554; end: 10961755b;  */

undefined8 FUN_109617554(void)

{
  return 1;
}



/* Entry: 10961755c; end: 109617e83;  */

undefined8 FUN_10961755c(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  float afStack_224 [9];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  *(long *)(param_1 + 0x228) = param_2;
  if ((*(char *)(param_2 + 0x33d) == '\x01') && (*(char *)(param_1 + 0x220) == '\x01')) {
    if (4 < iRam00000001132dfb08) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      lStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1d8,&UNK_10f57833f);
      func_0x000107c31940(auStack_200,&UNK_10f576492);
      FUN_109671348(&uStack_1b0,5,auStack_1d8,auStack_200,0xbc);
      FUN_1092b4db8();
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      FUN_109671170(&uStack_1b0);
    }
    return 0;
  }
  if ((*(char *)(param_2 + 0x2d8) == '\x01') && (*(char *)(param_2 + 0x1360) == '\x01')) {
    FUN_1095cfd0c(auStack_1d8,*(undefined4 *)(param_2 + 0x2dc),*(undefined4 *)(param_2 + 0x2e0),
                  *(undefined4 *)(param_2 + 0x2e4));
    lVar4 = *(long *)(param_1 + 0x228);
    FUN_1095cfd0c(auStack_200,*(undefined4 *)(lVar4 + 0x1764),*(undefined4 *)(lVar4 + 0x1768),
                  *(undefined4 *)(lVar4 + 0x176c));
    uStack_190 = (ulong)uStack_190._4_4_ << 0x20;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    lStack_1a0 = 0;
    puVar3 = &uStack_250;
    func_0x0001095cf8ac(puVar3,auStack_200,&uStack_1b0,0);
    if ((int)puVar3 == 0) {
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      lStack_240 = 0;
    }
    else {
      uStack_248 = uStack_1a8;
      uStack_250 = uStack_1b0;
      uStack_238 = uStack_198;
      lStack_240 = lStack_1a0;
      uStack_230 = (undefined4)uStack_190;
    }
    lVar4 = 0;
    puVar3 = &uStack_250;
    do {
      lVar6 = 0;
      pfVar7 = (float *)auStack_1d8;
      do {
        lVar8 = 0;
        fVar10 = 0.0;
        pfVar9 = pfVar7;
        do {
          fVar10 = fVar10 + *pfVar9 * *(float *)((long)puVar3 + lVar8);
          lVar8 = lVar8 + 4;
          pfVar9 = pfVar9 + 3;
        } while (lVar8 != 0xc);
        afStack_224[lVar6 + lVar4 * 3] = fVar10;
        lVar6 = lVar6 + 1;
        pfVar7 = pfVar7 + 1;
      } while (lVar6 != 3);
      lVar4 = lVar4 + 1;
      puVar3 = (undefined8 *)((long)puVar3 + 0xc);
    } while (lVar4 != 3);
    lVar4 = *(long *)(param_1 + 0x228);
    _atan2f(afStack_224[5],afStack_224[8]);
    *(float *)(lVar4 + 0x2e8) = afStack_224[5];
    _asinf();
    *(float *)(lVar4 + 0x2ec) = -afStack_224[2];
    _atan2f(afStack_224[1],afStack_224[0]);
    *(float *)(lVar4 + 0x2f0) = afStack_224[1];
    if (4 < iRam00000001132dfb08) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      lStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_250,&UNK_10f57833f);
      func_0x000107c31940(auStack_268,&UNK_10f5784d3);
      puVar3 = &uStack_1b0;
      FUN_109671348(puVar3,5,&uStack_250,auStack_268,0xb0);
      FUN_1092b4db8();
      lVar6 = *(long *)(param_1 + 0x228);
      FUN_1092b4db8();
      lVar4 = 0;
      bVar1 = true;
      do {
        bVar5 = bVar1;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                  (*(undefined4 *)(lVar6 + 0x2dc + lVar4 * 4),puVar3);
        FUN_1092b4db8();
        lVar4 = 1;
        bVar1 = false;
      } while (bVar5);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(lVar6 + 0x2e4),puVar3);
      FUN_1092b4db8();
      if (cStack_251 < '\0') {
        __ZdlPv(auStack_268[0]);
      }
      if (lStack_240 < 0) {
        __ZdlPv(uStack_250);
      }
      FUN_109671170(&uStack_1b0);
      if (4 < iRam00000001132dfb08) {
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        lStack_1a0 = 0;
        FUN_10926db08(&uStack_1b0);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_250,&UNK_10f57833f);
        func_0x000107c31940(auStack_268,&UNK_10f5784d3);
        puVar3 = &uStack_1b0;
        FUN_109671348(puVar3,5,&uStack_250,auStack_268,0xb1);
        FUN_1092b4db8();
        lVar6 = *(long *)(param_1 + 0x228);
        FUN_1092b4db8();
        lVar4 = 0;
        bVar1 = true;
        do {
          bVar5 = bVar1;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                    (*(undefined4 *)(lVar6 + 0x2e8 + lVar4 * 4),puVar3);
          FUN_1092b4db8();
          lVar4 = 1;
          bVar1 = false;
        } while (bVar5);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(lVar6 + 0x2f0),puVar3);
        FUN_1092b4db8();
        if (cStack_251 < '\0') {
          __ZdlPv(auStack_268[0]);
        }
        if (lStack_240 < 0) {
          __ZdlPv(uStack_250);
        }
        FUN_109671170(&uStack_1b0);
      }
    }
  }
  if ((*(char *)(param_1 + 0x248) == '\x01') && ((*(byte *)(param_1 + 0x249) & 1) == 0)) {
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    lStack_1a0 = 0;
    FUN_10926db08(&uStack_1b0);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1d8,&UNK_10f57833f);
    func_0x000107c31940(auStack_200,&UNK_10f576492);
    FUN_109671348(&uStack_1b0,5,auStack_1d8,auStack_200,199);
    FUN_1092b4db8();
  }
  else {
    *(undefined1 *)(param_1 + 0x248) = 1;
    lVar4 = (long)*(char *)(param_1 + 0x247);
    if (lVar4 < 0) {
      lVar4 = *(long *)(param_1 + 0x238);
    }
    lVar6 = *(long *)(param_1 + 0x228);
    if (lVar4 != 0) {
      iVar2 = (int)param_1 + 0x230;
      FUN_1095cbb98();
      lVar6 = *(long *)(param_1 + 0x228);
      if (iVar2 == 0) {
        *(undefined1 *)(lVar6 + 0x1360) = 0;
        if (iRam00000001132dfb08 < 5) {
          return 1;
        }
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        lStack_1a0 = 0;
        FUN_10926db08(&uStack_1b0);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1d8,&UNK_10f57833f);
        func_0x000107c31940(auStack_200,&UNK_10f5783f4);
        FUN_109671348(&uStack_1b0,5,auStack_1d8,auStack_200,0x53);
        FUN_1092b4db8();
        goto LAB_109617d7c;
      }
      *(undefined2 *)(lVar6 + 0x135f) = 0x101;
      if (4 < iRam00000001132dfb08) {
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        lStack_1a0 = 0;
        FUN_10926db08(&uStack_1b0);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        func_0x000107c31940(auStack_1d8,&UNK_10f57833f);
        func_0x000107c31940(auStack_200,&UNK_10f5783f4);
        FUN_109671348(&uStack_1b0,5,auStack_1d8,auStack_200,0x4f);
        FUN_1092b4db8();
        if (cStack_1e9 < '\0') {
          __ZdlPv(auStack_200[0]);
        }
        if (cStack_1c1 < '\0') {
          __ZdlPv(auStack_1d8[0]);
        }
        FUN_109671170(&uStack_1b0);
        lVar6 = *(long *)(param_1 + 0x228);
      }
    }
    if (*(char *)(lVar6 + 0x135f) == '\x01') {
      FUN_109616bcc(param_1,1);
      FUN_109616bcc(param_1,0);
      lVar4 = *(long *)(param_1 + 0x228);
      *(undefined1 *)(lVar4 + 0x1d50) = 0;
      *(undefined1 *)(lVar4 + 0x135f) = 0;
      return 1;
    }
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    lStack_1a0 = 0;
    FUN_10926db08(&uStack_1b0);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1d8,&UNK_10f57833f);
    func_0x000107c31940(auStack_200,&UNK_10f5783f4);
    FUN_109671348(&uStack_1b0,5,auStack_1d8,auStack_200,0x65);
    FUN_1092b4db8();
  }
LAB_109617d7c:
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  FUN_109671170(&uStack_1b0);
  return 1;
}



/* Entry: 109617e84; end: 1096182e3;  */

undefined8 *
FUN_109617e84(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8,long param_9,
             int param_10,undefined1 param_11,undefined8 *param_12)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar6;
    param_1[1] = uVar5;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = &PTR_FUN_110affab0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = param_8;
  *(undefined1 *)((long)param_1 + 0x2a1) = param_11;
  _bzero((long)param_1 + 0x2a2,0x1002);
  if (*(char *)((long)param_12 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x255,*param_12,param_12[1]);
  }
  else {
    uVar6 = param_12[1];
    uVar5 = *param_12;
    param_1[599] = param_12[2];
    param_1[0x256] = uVar6;
    param_1[0x255] = uVar5;
  }
  if (param_6 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x48,param_3)
    ;
  }
  if (param_9 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x51,param_5)
    ;
    puVar2 = (undefined8 *)param_1[0x51];
    if (-1 < *(char *)((long)param_1 + 0x29f)) {
      puVar2 = param_1 + 0x51;
    }
    _stat(puVar2,&uStack_1b0);
    if (((int)puVar2 != -1) && (uStack_1b0._4_2_ < 0)) {
      *(undefined1 *)((long)param_1 + 0x2a2) = 1;
      goto LAB_1096181bc;
    }
    if (iRam00000001132dfb08 < 5) goto LAB_1096181bc;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    FUN_10926db08(&uStack_1b0);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1c8,&UNK_10f578541);
    func_0x000107c31940(auStack_1e0,&UNK_10f5785c8);
    FUN_109671348(&uStack_1b0,5,auStack_1c8,auStack_1e0,99);
    FUN_1092b4db8();
  }
  else {
    uVar4 = (ulong)param_10;
    lVar1 = param_1[0x4e];
    uVar3 = param_1[0x4f] - lVar1;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      if (uVar4 < uVar3) {
        param_1[0x4f] = lVar1 + uVar4;
      }
    }
    else {
      func_0x000107c27d58(param_1 + 0x4e,uVar4 - uVar3);
      lVar1 = param_1[0x4e];
    }
    _memcpy(lVar1,param_9,uVar4);
    if (iRam00000001132dfb08 < 5) goto LAB_1096181bc;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    FUN_10926db08(&uStack_1b0);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1c8,&UNK_10f578541);
    func_0x000107c31940(auStack_1e0,&UNK_10f5785c8);
    FUN_109671348(&uStack_1b0,5,auStack_1c8,auStack_1e0,0x47);
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  if (cStack_1c9 < '\0') {
    __ZdlPv(auStack_1e0[0]);
  }
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  FUN_109671170(&uStack_1b0);
LAB_1096181bc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x4b,param_4);
  param_1[5] = 0xbf800000bf800000;
  param_1[4] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  return param_1;
}



/* Entry: 1096182e4; end: 1096189a3;  */

undefined8 FUN_1096182e4(long param_1,int param_2,double *param_3)

{
  float fVar1;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  fVar1 = (float)*param_3;
  if (param_2 < 0x17) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x20) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_10926db08(&uStack_180);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      func_0x000107c31940(auStack_198,&UNK_10f578541);
      func_0x000107c31940(auStack_1b0,&UNK_10f577495);
      FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x99);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      if (param_2 != 0x16) {
        return 0;
      }
      *(float *)(param_1 + 0x24) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_10926db08(&uStack_180);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      func_0x000107c31940(auStack_198,&UNK_10f578541);
      func_0x000107c31940(auStack_1b0,&UNK_10f577495);
      FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0x9f);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x24));
    }
  }
  else if (param_2 == 0x17) {
    *(float *)(param_1 + 0x28) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f578541);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0xa4);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x28));
  }
  else if (param_2 == 0x18) {
    *(float *)(param_1 + 0x2c) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f578541);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0xa9);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x2c));
  }
  else {
    if (param_2 != 0x21) {
      return 0;
    }
    if (fVar1 <= 0.0) {
      if (0 < iRam00000001132dfb08) {
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        FUN_10926db08(&uStack_180);
        uStack_78 = CONCAT44(uStack_78._4_4_,3);
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        func_0x000107c31940(auStack_198,&UNK_10f578541);
        func_0x000107c31940(auStack_1b0,&UNK_10f577495);
        FUN_109671348(&uStack_180,1,auStack_198,auStack_1b0,0xaf);
        FUN_1092b4db8();
        FUN_1092b4db8();
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(fVar1);
        if (cStack_199 < '\0') {
          __ZdlPv(auStack_1b0[0]);
        }
        if (cStack_181 < '\0') {
          __ZdlPv(auStack_198[0]);
        }
        FUN_109671170(&uStack_180);
      }
      return 0;
    }
    *(float *)(param_1 + 0x30) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    FUN_10926db08(&uStack_180);
    uStack_78 = CONCAT44(uStack_78._4_4_,3);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    func_0x000107c31940(auStack_198,&UNK_10f578541);
    func_0x000107c31940(auStack_1b0,&UNK_10f577495);
    FUN_109671348(&uStack_180,5,auStack_198,auStack_1b0,0xb5);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x30));
  }
  if (cStack_199 < '\0') {
    __ZdlPv(auStack_1b0[0]);
  }
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  FUN_109671170(&uStack_180);
  return 1;
}



/* Entry: 1096189a4; end: 109618a3f;  */

undefined8 * FUN_1096189a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110affab0;
  if (*(char *)((long)param_1 + 0x12bf) < '\0') {
    __ZdlPv(param_1[0x255]);
  }
  if (*(char *)((long)param_1 + 0x29f) < '\0') {
    __ZdlPv(param_1[0x51]);
  }
  if (param_1[0x4e] != 0) {
    param_1[0x4f] = param_1[0x4e];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x26f) < '\0') {
    __ZdlPv(param_1[0x4b]);
  }
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109618a40; end: 109618a43;  */

undefined8 * FUN_109618a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110affab0;
  if (*(char *)((long)param_1 + 0x12bf) < '\0') {
    __ZdlPv(param_1[0x255]);
  }
  if (*(char *)((long)param_1 + 0x29f) < '\0') {
    __ZdlPv(param_1[0x51]);
  }
  if (param_1[0x4e] != 0) {
    param_1[0x4f] = param_1[0x4e];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x26f) < '\0') {
    __ZdlPv(param_1[0x4b]);
  }
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 109618a44; end: 109618a57;  */

void FUN_109618a44(void)

{
  FUN_1096189a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109618a58; end: 109618c83;  */

void FUN_109618a58(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  uStack_128 = param_3[1];
  uStack_130 = *param_3;
  uStack_120 = *(undefined4 *)(param_3 + 2);
  uStack_114 = *(undefined8 *)((long)param_3 + 0x1c);
  uStack_11c = *(undefined8 *)((long)param_3 + 0x14);
  uStack_100 = param_3[6];
  uStack_108 = param_3[5];
  puStack_c8 = &uStack_100;
  iVar2 = *(int *)((long)param_3 + 0x2c);
  uStack_f0 = param_3[8];
  uStack_f8 = param_3[7];
  uStack_e0 = param_3[10];
  uStack_e8 = param_3[9];
  lStack_d0 = param_3[0xc];
  uStack_d8 = param_3[0xb];
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (param_3[0xc] != 0) {
    piVar1 = (int *)(param_3[0xc] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)((long)param_3 + 0x2c);
  }
  puStack_c0 = &uStack_b8;
  if (iVar2 < 3) {
    uStack_b8 = *(undefined8 *)param_3[0xe];
    uStack_b0 = ((undefined8 *)param_3[0xe])[1];
  }
  else {
    uStack_108 = uStack_108 & 0xffffffff;
    func_0x000109a84868(&uStack_108);
  }
  uStack_a8 = *(undefined1 *)(param_3 + 0x11);
  uStack_8c = *(undefined8 *)((long)param_3 + 0xa4);
  uStack_94 = *(undefined8 *)((long)param_3 + 0x9c);
  uStack_7c = *(undefined8 *)((long)param_3 + 0xb4);
  uStack_84 = *(undefined8 *)((long)param_3 + 0xac);
  uStack_6c = *(undefined8 *)((long)param_3 + 0xc4);
  uStack_74 = *(undefined8 *)((long)param_3 + 0xbc);
  uStack_64 = *(undefined8 *)((long)param_3 + 0xcc);
  uStack_9c = *(undefined8 *)((long)param_3 + 0x94);
  uStack_a4 = *(undefined8 *)((long)param_3 + 0x8c);
  uStack_5c = *(undefined8 *)((long)param_3 + 0xd4);
  uStack_54 = *(undefined4 *)((long)param_3 + 0xdc);
  FUN_1095c1e10(&uStack_138,*(long *)(param_2 + 0x238) + 0x344,param_4);
  uStack_130 = uStack_138;
  lVar5 = *(long *)(param_2 + 0x238);
  if (*(float *)(lVar5 + 0x1154) == *(float *)(lVar5 + 0x1340)) {
    fVar6 = (*(float *)(lVar5 + 0x46c) * *(float *)(lVar5 + 0x730)) / *(float *)(lVar5 + 0x734);
  }
  else {
    fVar6 = *(float *)(lVar5 + 0x1160);
  }
  uStack_128 = CONCAT44(uStack_128._4_4_,fVar6);
  FUN_1095cf6d4(param_1,lVar5 + 0x1764,param_3,&uStack_130);
  if (lStack_d0 != 0) {
    piVar1 = (int *)(lStack_d0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_108);
    }
  }
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  if (0 < uStack_108._4_4_) {
    lVar5 = 0;
    do {
      *(undefined4 *)((long)puStack_c8 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < uStack_108._4_4_);
  }
  if (puStack_c0 != &uStack_b8 && puStack_c0 != (undefined8 *)0x0) {
    _free(puStack_c0[-1]);
  }
  return;
}



/* Entry: 109618c84; end: 10961a50b;  */

undefined8 FUN_109618c84(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_36d0;
  undefined8 uStack_36c8;
  undefined4 uStack_36c0;
  int iStack_36bc;
  undefined4 uStack_36b8;
  undefined4 uStack_36b4;
  undefined4 uStack_36b0;
  undefined4 uStack_36ac;
  undefined8 uStack_36a8;
  undefined8 uStack_36a0;
  undefined8 uStack_3698;
  undefined8 uStack_3690;
  undefined8 uStack_3688;
  undefined8 uStack_3680;
  undefined8 uStack_3678;
  long lStack_3670;
  undefined8 *puStack_3668;
  undefined8 *puStack_3660;
  undefined8 uStack_3658;
  undefined8 uStack_3650;
  undefined4 uStack_3648;
  undefined4 uStack_3644;
  undefined4 uStack_3640;
  undefined4 uStack_363c;
  undefined4 uStack_3638;
  undefined4 uStack_3634;
  undefined4 uStack_3630;
  undefined4 uStack_362c;
  undefined4 uStack_3628;
  undefined4 uStack_3624;
  undefined4 uStack_3620;
  undefined4 uStack_361c;
  undefined4 uStack_3618;
  undefined4 uStack_3614;
  undefined4 uStack_3610;
  undefined4 uStack_360c;
  undefined4 uStack_3608;
  undefined4 uStack_3604;
  undefined4 uStack_3600;
  undefined4 uStack_35fc;
  undefined8 uStack_35f8;
  undefined8 uStack_35f0;
  undefined8 uStack_35e8;
  undefined8 uStack_35e0;
  undefined8 uStack_35d8;
  undefined8 uStack_35d0;
  undefined8 uStack_35c8;
  undefined8 uStack_35c0;
  undefined8 uStack_35b8;
  undefined8 uStack_35b0;
  undefined8 uStack_35a8;
  undefined8 uStack_35a0;
  undefined8 uStack_3598;
  ulong uStack_3590;
  undefined8 uStack_3580;
  undefined8 uStack_3578;
  undefined8 uStack_3570;
  undefined8 uStack_3568;
  undefined8 uStack_3560;
  undefined8 uStack_3558;
  undefined8 uStack_3550;
  undefined8 uStack_3548;
  undefined8 uStack_3540;
  undefined8 uStack_3538;
  undefined8 uStack_3530;
  undefined8 uStack_3528;
  undefined8 uStack_3520;
  undefined8 uStack_3518;
  undefined8 uStack_3510;
  undefined8 uStack_3508;
  undefined8 uStack_3500;
  undefined8 uStack_34f8;
  undefined8 uStack_34f0;
  undefined8 uStack_34e8;
  undefined8 uStack_34e0;
  undefined8 uStack_34d8;
  undefined8 uStack_34d0;
  undefined8 uStack_34c8;
  undefined8 uStack_34c0;
  undefined8 uStack_34b8;
  undefined8 uStack_34b0;
  undefined8 uStack_34a8;
  undefined8 uStack_34a0;
  undefined8 uStack_3498;
  undefined8 uStack_3490;
  undefined8 uStack_3488;
  undefined8 uStack_3480;
  undefined8 uStack_3478;
  undefined8 uStack_3470;
  undefined8 uStack_3468;
  undefined8 uStack_3460;
  undefined8 uStack_3458;
  undefined8 uStack_3450;
  undefined8 uStack_3448;
  ulong uStack_3440;
  undefined8 uStack_2578;
  undefined8 uStack_2570;
  undefined8 uStack_2568;
  undefined8 uStack_2560;
  undefined8 uStack_2558;
  undefined8 uStack_2550;
  undefined8 uStack_2548;
  undefined8 uStack_2540;
  undefined8 uStack_2538;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  undefined8 uStack_2520;
  undefined4 uStack_2518;
  int iStack_2514;
  undefined4 uStack_2510;
  undefined4 uStack_250c;
  undefined4 uStack_2508;
  undefined4 uStack_2504;
  undefined4 uStack_2500;
  undefined4 uStack_24fc;
  undefined4 uStack_24f8;
  undefined4 uStack_24f4;
  undefined4 uStack_24f0;
  undefined4 uStack_24ec;
  undefined4 uStack_24e8;
  undefined4 uStack_24e4;
  long lStack_24e0;
  undefined4 *puStack_24d8;
  undefined8 *puStack_24d0;
  undefined8 uStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined8 uStack_24b0;
  undefined8 uStack_24a8;
  undefined8 uStack_24a0;
  undefined4 uStack_2498;
  undefined4 uStack_2490;
  undefined8 uStack_248c;
  undefined8 uStack_2484;
  undefined8 uStack_247c;
  undefined8 uStack_2474;
  undefined8 uStack_246c;
  undefined4 uStack_2464;
  undefined4 uStack_2460;
  undefined4 uStack_245c;
  undefined8 uStack_2458;
  long lStack_2450;
  undefined8 *puStack_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined4 uStack_2430;
  undefined8 uStack_242c;
  undefined8 uStack_2424;
  undefined8 uStack_241c;
  undefined8 uStack_2414;
  undefined8 uStack_240c;
  undefined4 uStack_2404;
  undefined4 uStack_2400;
  undefined4 uStack_23fc;
  undefined8 uStack_23f8;
  long lStack_23f0;
  undefined8 *puStack_23e8;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined4 uStack_23d0;
  int iStack_23cc;
  undefined4 uStack_23c8;
  undefined4 uStack_23c4;
  undefined4 uStack_23c0;
  undefined4 uStack_23bc;
  undefined4 uStack_23b8;
  undefined4 uStack_23b4;
  undefined4 uStack_23b0;
  undefined4 uStack_23ac;
  undefined4 uStack_23a8;
  undefined4 uStack_23a4;
  undefined4 uStack_23a0;
  undefined4 uStack_239c;
  long lStack_2398;
  undefined4 *puStack_2390;
  undefined8 *puStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined8 uStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined4 uStack_2350;
  undefined4 uStack_2348;
  undefined8 uStack_2344;
  undefined8 uStack_233c;
  undefined8 uStack_2334;
  undefined8 uStack_232c;
  undefined8 uStack_2324;
  undefined4 uStack_231c;
  undefined4 uStack_2318;
  undefined4 uStack_2314;
  undefined8 uStack_2310;
  long lStack_2308;
  undefined8 *puStack_2300;
  undefined8 uStack_22f8;
  undefined8 uStack_22f0;
  undefined4 uStack_22e8;
  undefined8 uStack_22e4;
  undefined8 uStack_22dc;
  undefined8 uStack_22d4;
  undefined8 uStack_22cc;
  undefined8 uStack_22c4;
  undefined4 uStack_22bc;
  undefined4 uStack_22b8;
  undefined4 uStack_22b4;
  undefined8 uStack_22b0;
  long lStack_22a8;
  undefined8 *puStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined4 uStack_2288;
  int iStack_2284;
  undefined4 uStack_2280;
  undefined4 uStack_227c;
  undefined4 uStack_2278;
  undefined4 uStack_2274;
  undefined4 uStack_2270;
  undefined4 uStack_226c;
  undefined4 uStack_2268;
  undefined4 uStack_2264;
  undefined4 uStack_2260;
  undefined4 uStack_225c;
  undefined4 uStack_2258;
  undefined4 uStack_2254;
  long lStack_2250;
  undefined4 *puStack_2248;
  undefined8 *puStack_2240;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined4 uStack_2220;
  undefined8 uStack_221c;
  undefined8 uStack_2214;
  undefined8 uStack_220c;
  undefined8 uStack_2204;
  undefined8 uStack_21fc;
  undefined4 uStack_21f4;
  undefined4 uStack_21f0;
  undefined4 uStack_21ec;
  undefined8 uStack_21e8;
  long lStack_21e0;
  undefined8 *puStack_21d8;
  undefined8 uStack_21d0;
  undefined8 uStack_21c8;
  undefined4 uStack_21c0;
  int iStack_21bc;
  undefined4 uStack_21b8;
  undefined4 uStack_21b4;
  undefined4 uStack_21b0;
  undefined4 uStack_21ac;
  undefined4 uStack_21a8;
  undefined4 uStack_21a4;
  undefined4 uStack_21a0;
  undefined4 uStack_219c;
  undefined4 uStack_2198;
  undefined4 uStack_2194;
  undefined4 uStack_2190;
  undefined4 uStack_218c;
  long lStack_2188;
  undefined4 *puStack_2180;
  undefined8 *puStack_2178;
  undefined8 uStack_2170;
  undefined8 uStack_2168;
  undefined8 uStack_2160;
  undefined4 uStack_2158;
  undefined8 uStack_2154;
  undefined8 uStack_214c;
  undefined8 uStack_2144;
  undefined8 uStack_213c;
  undefined8 uStack_2134;
  undefined4 uStack_212c;
  undefined4 uStack_2128;
  undefined4 uStack_2124;
  undefined8 uStack_2120;
  long lStack_2118;
  undefined8 *puStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined1 uStack_20f8;
  undefined1 auStack_20f4 [4100];
  undefined1 auStack_10f0 [4096];
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  char cStack_89;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = &uStack_36d0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
LAB_10961a2e4:
    uVar12 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar12,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
LAB_10961a314:
    ___stack_chk_fail();
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110afeb40,&PTR_DAT_110afeb50,0);
    *(long *)(param_1 + 0x238) = param_2;
    if (param_2 == 0) goto LAB_10961a2e4;
    if ((*(char *)(param_2 + 0x33d) == '\x01') && (*(char *)(param_1 + 0x220) == '\x01')) {
      if (4 < iRam00000001132dfb08) {
        uStack_3440 = 0;
        uStack_3458 = 0;
        uStack_3460 = 0;
        uStack_3448 = 0;
        uStack_3450 = 0;
        uStack_3478 = 0;
        uStack_3480 = 0;
        uStack_3468 = 0;
        uStack_3470 = 0;
        uStack_3498 = 0;
        uStack_34a0 = 0;
        uStack_3488 = 0;
        uStack_3490 = 0;
        uStack_34b8 = 0;
        uStack_34c0 = 0;
        uStack_34a8 = 0;
        uStack_34b0 = 0;
        uStack_34d8 = 0;
        uStack_34e0 = 0;
        uStack_34c8 = 0;
        uStack_34d0 = 0;
        uStack_34f8 = 0;
        uStack_3500 = 0;
        uStack_34e8 = 0;
        uStack_34f0 = 0;
        uStack_3518 = 0;
        uStack_3520 = 0;
        uStack_3508 = 0;
        uStack_3510 = 0;
        uStack_3538 = 0;
        uStack_3540 = 0;
        uStack_3528 = 0;
        uStack_3530 = 0;
        uStack_3558 = 0;
        uStack_3560 = 0;
        uStack_3548 = 0;
        uStack_3550 = 0;
        uStack_3578 = 0;
        uStack_3580 = 0;
        uStack_3568 = 0;
        uStack_3570 = 0;
        FUN_10926db08(&uStack_3580);
        uStack_3478 = CONCAT44(uStack_3478._4_4_,3);
        uStack_3468 = 0;
        uStack_3470 = 0;
        uStack_3458 = 0;
        uStack_3460 = 0;
        uStack_3448 = 0;
        uStack_3450 = 0;
        uStack_3440 = uStack_3440 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_36d0,&UNK_10f578541);
        func_0x000107c31940(&uStack_c8,&UNK_10f576492);
        FUN_109671348(&uStack_3580,5,&uStack_36d0,&uStack_c8,0x22c);
        FUN_1092b4db8();
LAB_10961a270:
        if (cStack_b1 < '\0') {
          __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
        }
        if (iStack_36bc < 0) {
          __ZdlPv(uStack_36d0);
        }
        FUN_109671170(&uStack_3580);
      }
LAB_10961a298:
      uVar12 = 0;
LAB_10961a29c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return uVar12;
      }
      goto LAB_10961a314;
    }
    if ((*(byte *)(param_1 + 0x2a3) & 1) != 0) {
LAB_10961a194:
      uVar12 = 1;
      goto LAB_10961a29c;
    }
    if (*(char *)(param_1 + 0x29f) < '\0') {
      func_0x000107c3192c(&uStack_f0,*(undefined8 *)(param_1 + 0x288),
                          *(undefined8 *)(param_1 + 0x290));
    }
    else {
      uStack_f0 = *(undefined8 *)(param_1 + 0x288);
      uStack_e8 = (undefined7)*(undefined8 *)(param_1 + 0x290);
      uStack_e1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x290) >> 0x38);
      uStack_e0 = (undefined7)*(undefined8 *)(param_1 + 0x298);
      cStack_d9 = (char)((ulong)*(undefined8 *)(param_1 + 0x298) >> 0x38);
    }
    _bzero(&uStack_3580,0x1002);
    uStack_2530 = 0;
    uStack_2538 = 0;
    uStack_2520 = 0;
    uStack_2528 = 0;
    uStack_2550 = 0;
    uStack_2558 = 0;
    uStack_2540 = 0;
    uStack_2548 = 0;
    uStack_2570 = 0;
    uStack_2578 = 0;
    uStack_2560 = 0;
    uStack_2568 = 0;
    uStack_2518 = 0x42ff0000;
    puStack_24d8 = &uStack_2510;
    uStack_250c = 0;
    uStack_2508 = 0;
    iStack_2514 = 0;
    uStack_2510 = 0;
    uStack_24fc = 0;
    uStack_24f8 = 0;
    uStack_2504 = 0;
    uStack_2500 = 0;
    uStack_24ec = 0;
    uStack_24f4 = 0;
    uStack_24f0 = 0;
    lStack_24e0 = 0;
    uStack_24e8 = 0;
    uStack_24e4 = 0;
    puStack_24d0 = &uStack_24c8;
    uStack_24c0 = 0;
    uStack_24c8 = 0;
    uStack_24b0 = 0;
    uStack_24b8 = 0;
    uStack_24a0 = 0;
    uStack_24a8 = 0;
    uStack_2498 = 0;
    uStack_2490 = 0x42ff0000;
    lStack_2450 = (long)&uStack_248c + 4;
    uStack_2474 = 0;
    uStack_247c = 0;
    uStack_2464 = 0;
    uStack_246c = 0;
    uStack_2484 = 0;
    uStack_248c = 0;
    uStack_2458 = 0;
    uStack_2460 = 0;
    uStack_245c = 0;
    puStack_2448 = &uStack_2440;
    uStack_2438 = 0;
    uStack_2440 = 0;
    uStack_2430 = 0x42ff0000;
    lStack_23f0 = (long)&uStack_242c + 4;
    uStack_2424 = 0;
    uStack_242c = 0;
    uStack_2414 = 0;
    uStack_241c = 0;
    uStack_2404 = 0;
    uStack_240c = 0;
    uStack_23f8 = 0;
    uStack_2400 = 0;
    uStack_23fc = 0;
    puStack_23e8 = &uStack_23e0;
    uStack_23d8 = 0;
    uStack_23e0 = 0;
    uStack_23d0 = 0x42ff0000;
    puStack_2390 = &uStack_23c8;
    uStack_23b4 = 0;
    uStack_23b0 = 0;
    uStack_23bc = 0;
    uStack_23b8 = 0;
    uStack_23a4 = 0;
    uStack_23ac = 0;
    uStack_23a8 = 0;
    uStack_23c4 = 0;
    uStack_23c0 = 0;
    iStack_23cc = 0;
    uStack_23c8 = 0;
    lStack_2398 = 0;
    uStack_23a0 = 0;
    uStack_239c = 0;
    puStack_2388 = &uStack_2380;
    uStack_2378 = 0;
    uStack_2380 = 0;
    uStack_2368 = 0;
    uStack_2370 = 0;
    uStack_2358 = 0;
    uStack_2360 = 0;
    uStack_2350 = 0;
    uStack_2348 = 0x42ff0000;
    lStack_2308 = (long)&uStack_2344 + 4;
    uStack_2310 = 0;
    uStack_2314 = 0;
    uStack_232c = 0;
    uStack_2334 = 0;
    uStack_231c = 0;
    uStack_2318 = 0;
    uStack_2324 = 0;
    uStack_233c = 0;
    uStack_2344 = 0;
    puStack_2300 = &uStack_22f8;
    uStack_22f0 = 0;
    uStack_22f8 = 0;
    uStack_22e8 = 0x42ff0000;
    lStack_22a8 = (long)&uStack_22e4 + 4;
    uStack_22b0 = 0;
    uStack_22b4 = 0;
    uStack_22cc = 0;
    uStack_22d4 = 0;
    uStack_22bc = 0;
    uStack_22b8 = 0;
    uStack_22c4 = 0;
    uStack_22dc = 0;
    uStack_22e4 = 0;
    puStack_22a0 = &uStack_2298;
    uStack_2290 = 0;
    uStack_2298 = 0;
    uStack_2288 = 0x42ff0000;
    puStack_2248 = &uStack_2280;
    lStack_2250 = 0;
    uStack_2254 = 0;
    uStack_226c = 0;
    uStack_2268 = 0;
    uStack_2274 = 0;
    uStack_2270 = 0;
    uStack_225c = 0;
    uStack_2258 = 0;
    uStack_2264 = 0;
    uStack_2260 = 0;
    uStack_227c = 0;
    uStack_2278 = 0;
    iStack_2284 = 0;
    uStack_2280 = 0;
    puStack_2240 = &uStack_2238;
    uStack_2230 = 0;
    uStack_2238 = 0;
    uStack_2228 = 0;
    uStack_2220 = 0x42ff0000;
    lStack_21e0 = (long)&uStack_221c + 4;
    uStack_2204 = 0;
    uStack_220c = 0;
    uStack_21f4 = 0;
    uStack_21fc = 0;
    uStack_2214 = 0;
    uStack_221c = 0;
    uStack_21e8 = 0;
    uStack_21f0 = 0;
    uStack_21ec = 0;
    puStack_21d8 = &uStack_21d0;
    uStack_21c8 = 0;
    uStack_21d0 = 0;
    uStack_21c0 = 0x42ff0000;
    puStack_2180 = &uStack_21b8;
    uStack_21a4 = 0;
    uStack_21a0 = 0;
    uStack_21ac = 0;
    uStack_21a8 = 0;
    uStack_2194 = 0;
    uStack_219c = 0;
    uStack_2198 = 0;
    uStack_21b4 = 0;
    uStack_21b0 = 0;
    iStack_21bc = 0;
    uStack_21b8 = 0;
    lStack_2188 = 0;
    uStack_2190 = 0;
    uStack_218c = 0;
    puStack_2178 = &uStack_2170;
    uStack_2160 = 0;
    uStack_2168 = 0;
    uStack_2170 = 0;
    uStack_2158 = 0x42ff0000;
    lStack_2118 = (long)&uStack_2154 + 4;
    uStack_2120 = 0;
    uStack_2124 = 0;
    uStack_213c = 0;
    uStack_2144 = 0;
    uStack_212c = 0;
    uStack_2128 = 0;
    uStack_2134 = 0;
    uStack_214c = 0;
    uStack_2154 = 0;
    puStack_2110 = &uStack_2108;
    uStack_20f8 = 0;
    uStack_2100 = 0;
    uStack_2108 = 0;
    _bzero(auStack_20f4,0x1001);
    _bzero(auStack_10f0,0x1000);
    if (*(long *)(param_1 + 0x270) == *(long *)(param_1 + 0x278)) {
      if ((*(byte *)(param_1 + 0x2a2) & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x290);
        if (-1 < (char)*(byte *)(param_1 + 0x29f)) {
          uVar3 = (ulong)*(byte *)(param_1 + 0x29f);
        }
        func_0x000104c4f768(&uStack_c8,uVar3 + 9,&uStack_c9);
        puVar11 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
        if (-1 < cStack_b1) {
          puVar11 = &uStack_c8;
        }
        if (uVar3 != 0) {
          puVar2 = *(undefined8 **)(param_1 + 0x288);
          if (-1 < *(char *)(param_1 + 0x29f)) {
            puVar2 = (undefined8 *)(param_1 + 0x288);
          }
          _memmove(puVar11,puVar2,uVar3);
        }
        *(undefined8 *)((long)puVar11 + uVar3) = 0x74726f7077654e2f;
        *(undefined2 *)((undefined8 *)((long)puVar11 + uVar3) + 1) = 0x5f;
        uVar3 = *(ulong *)(param_1 + 0x248);
        lVar19 = *(long *)(param_1 + 0x240);
        if (-1 < (char)*(byte *)(param_1 + 599)) {
          uVar3 = (ulong)*(byte *)(param_1 + 599);
          lVar19 = param_1 + 0x240;
        }
        puVar11 = &uStack_c8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar11,lVar19,uVar3);
        uStack_36c8 = puVar11[1];
        uStack_36d0 = *puVar11;
        uStack_36c0 = (undefined4)puVar11[2];
        iStack_36bc = (int)((ulong)puVar11[2] >> 0x20);
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_36d0,&UNK_10f57872f,0xc);
        uVar12 = *puVar17;
        uStack_a0 = (undefined7)puVar17[1];
        uStack_99 = (undefined1)*(undefined8 *)((long)puVar17 + 0xf);
        uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)puVar17 + 0xf) >> 8);
        cVar8 = *(char *)((long)puVar17 + 0x17);
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        if (cStack_d9 < '\0') {
          __ZdlPv(uStack_f0);
        }
        uStack_e8 = uStack_a0;
        uStack_e1 = uStack_99;
        uStack_e0 = uStack_98;
        uStack_f0 = uVar12;
        cStack_d9 = cVar8;
        if (iStack_36bc < 0) {
          __ZdlPv(uStack_36d0);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
        }
        if (4 < iRam00000001132dfb08) {
          uStack_3590 = 0;
          uStack_35a8 = 0;
          uStack_35b0 = 0;
          uStack_3598 = 0;
          uStack_35a0 = 0;
          uStack_35c8 = 0;
          uStack_35d0 = 0;
          uStack_35b8 = 0;
          uStack_35c0 = 0;
          uStack_35e8 = 0;
          uStack_35f0 = 0;
          uStack_35d8 = 0;
          uStack_35e0 = 0;
          uStack_3608 = 0;
          uStack_3604 = 0;
          uStack_3610 = 0;
          uStack_360c = 0;
          uStack_35f8 = 0;
          uStack_3600 = 0;
          uStack_35fc = 0;
          uStack_3628 = 0;
          uStack_3624 = 0;
          uStack_3630 = 0;
          uStack_362c = 0;
          uStack_3618 = 0;
          uStack_3614 = 0;
          uStack_3620 = 0;
          uStack_361c = 0;
          uStack_3648 = 0;
          uStack_3644 = 0;
          uStack_3650 = 0;
          uStack_3638 = 0;
          uStack_3634 = 0;
          uStack_3640 = 0;
          uStack_363c = 0;
          puStack_3668 = (undefined8 *)0x0;
          lStack_3670 = 0;
          uStack_3658 = 0;
          puStack_3660 = (undefined8 *)0x0;
          uStack_3688 = 0;
          uStack_3690 = 0;
          uStack_3678 = 0;
          uStack_3680 = 0;
          uStack_36a8 = 0;
          uStack_36b0 = 0;
          uStack_36ac = 0;
          uStack_3698 = 0;
          uStack_36a0 = 0;
          uStack_36c8 = 0;
          uStack_36d0 = 0;
          uStack_36b8 = 0;
          uStack_36b4 = 0;
          uStack_36c0 = 0;
          iStack_36bc = 0;
          FUN_10926db08(&uStack_36d0);
          uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
          uStack_35b8 = 0;
          uStack_35c0 = 0;
          uStack_35a8 = 0;
          uStack_35b0 = 0;
          uStack_3598 = 0;
          uStack_35a0 = 0;
          uStack_3590 = uStack_3590 & 0xffffffff00000000;
          func_0x000107c31940(&uStack_c8,&UNK_10f578541);
          func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
          FUN_109671348(&uStack_36d0,5,&uStack_c8,&uStack_a0,0xcd);
          FUN_1092b4db8();
          FUN_1092b4db8();
          if (cStack_89 < '\0') {
            __ZdlPv(CONCAT17(uStack_99,uStack_a0));
          }
          if (cStack_b1 < '\0') {
            __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
          }
          FUN_109671170(&uStack_36d0);
        }
      }
      puVar17 = &uStack_3580;
      FUN_1095c1708(puVar17,&uStack_f0,*(undefined1 *)(param_1 + 0x2a0),
                    *(undefined1 *)(param_1 + 0x2a1),param_1 + 0x12a8);
      if (((ulong)puVar17 & 1) != 0) goto LAB_109619458;
      if (4 < iRam00000001132dfb08) {
        uStack_3590 = 0;
        uStack_35a8 = 0;
        uStack_35b0 = 0;
        uStack_3598 = 0;
        uStack_35a0 = 0;
        uStack_35c8 = 0;
        uStack_35d0 = 0;
        uStack_35b8 = 0;
        uStack_35c0 = 0;
        uStack_35e8 = 0;
        uStack_35f0 = 0;
        uStack_35d8 = 0;
        uStack_35e0 = 0;
        uStack_3608 = 0;
        uStack_3604 = 0;
        uStack_3610 = 0;
        uStack_360c = 0;
        uStack_35f8 = 0;
        uStack_3600 = 0;
        uStack_35fc = 0;
        uStack_3628 = 0;
        uStack_3624 = 0;
        uStack_3630 = 0;
        uStack_362c = 0;
        uStack_3618 = 0;
        uStack_3614 = 0;
        uStack_3620 = 0;
        uStack_361c = 0;
        uStack_3648 = 0;
        uStack_3644 = 0;
        uStack_3650 = 0;
        uStack_3638 = 0;
        uStack_3634 = 0;
        uStack_3640 = 0;
        uStack_363c = 0;
        puStack_3668 = (undefined8 *)0x0;
        lStack_3670 = 0;
        uStack_3658 = 0;
        puStack_3660 = (undefined8 *)0x0;
        uStack_3688 = 0;
        uStack_3690 = 0;
        uStack_3678 = 0;
        uStack_3680 = 0;
        uStack_36a8 = 0;
        uStack_36b0 = 0;
        uStack_36ac = 0;
        uStack_3698 = 0;
        uStack_36a0 = 0;
        uStack_36c8 = 0;
        uStack_36d0 = 0;
        uStack_36b8 = 0;
        uStack_36b4 = 0;
        uStack_36c0 = 0;
        iStack_36bc = 0;
        FUN_10926db08(&uStack_36d0);
        uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
        uStack_35b8 = 0;
        uStack_35c0 = 0;
        uStack_35a8 = 0;
        uStack_35b0 = 0;
        uStack_3598 = 0;
        uStack_35a0 = 0;
        uStack_3590 = uStack_3590 & 0xffffffff00000000;
        func_0x000107c31940(&uStack_c8,&UNK_10f578541);
        func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
        FUN_109671348(&uStack_36d0,5,&uStack_c8,&uStack_a0,0xd1);
        FUN_1092b4db8();
        goto LAB_109619b3c;
      }
LAB_109619b64:
      bVar10 = false;
LAB_10961a180:
      FUN_1095c6cec(&uStack_3580);
      if (cStack_d9 < '\0') {
        __ZdlPv(uStack_f0);
      }
      if (!bVar10) {
        if (4 < iRam00000001132dfb08) {
          uStack_3440 = 0;
          uStack_3458 = 0;
          uStack_3460 = 0;
          uStack_3448 = 0;
          uStack_3450 = 0;
          uStack_3478 = 0;
          uStack_3480 = 0;
          uStack_3468 = 0;
          uStack_3470 = 0;
          uStack_3498 = 0;
          uStack_34a0 = 0;
          uStack_3488 = 0;
          uStack_3490 = 0;
          uStack_34b8 = 0;
          uStack_34c0 = 0;
          uStack_34a8 = 0;
          uStack_34b0 = 0;
          uStack_34d8 = 0;
          uStack_34e0 = 0;
          uStack_34c8 = 0;
          uStack_34d0 = 0;
          uStack_34f8 = 0;
          uStack_3500 = 0;
          uStack_34e8 = 0;
          uStack_34f0 = 0;
          uStack_3518 = 0;
          uStack_3520 = 0;
          uStack_3508 = 0;
          uStack_3510 = 0;
          uStack_3538 = 0;
          uStack_3540 = 0;
          uStack_3528 = 0;
          uStack_3530 = 0;
          uStack_3558 = 0;
          uStack_3560 = 0;
          uStack_3548 = 0;
          uStack_3550 = 0;
          uStack_3578 = 0;
          uStack_3580 = 0;
          uStack_3568 = 0;
          uStack_3570 = 0;
          FUN_10926db08(&uStack_3580);
          uStack_3478 = CONCAT44(uStack_3478._4_4_,3);
          uStack_3468 = 0;
          uStack_3470 = 0;
          uStack_3458 = 0;
          uStack_3460 = 0;
          uStack_3448 = 0;
          uStack_3450 = 0;
          uStack_3440 = uStack_3440 & 0xffffffff00000000;
          func_0x000107c31940(&uStack_36d0,&UNK_10f578541);
          func_0x000107c31940(&uStack_c8,&UNK_10f576492);
          FUN_109671348(&uStack_3580,5,&uStack_36d0,&uStack_c8,0x237);
          FUN_1092b4db8();
          FUN_1092b4db8();
          goto LAB_10961a270;
        }
        goto LAB_10961a298;
      }
      goto LAB_10961a194;
    }
    if (4 < iRam00000001132dfb08) {
      uStack_3590 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_35c8 = 0;
      uStack_35d0 = 0;
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35e8 = 0;
      uStack_35f0 = 0;
      uStack_35d8 = 0;
      uStack_35e0 = 0;
      uStack_3608 = 0;
      uStack_3604 = 0;
      uStack_3610 = 0;
      uStack_360c = 0;
      uStack_35f8 = 0;
      uStack_3600 = 0;
      uStack_35fc = 0;
      uStack_3628 = 0;
      uStack_3624 = 0;
      uStack_3630 = 0;
      uStack_362c = 0;
      uStack_3618 = 0;
      uStack_3614 = 0;
      uStack_3620 = 0;
      uStack_361c = 0;
      uStack_3648 = 0;
      uStack_3644 = 0;
      uStack_3650 = 0;
      uStack_3638 = 0;
      uStack_3634 = 0;
      uStack_3640 = 0;
      uStack_363c = 0;
      puStack_3668 = (undefined8 *)0x0;
      lStack_3670 = 0;
      uStack_3658 = 0;
      puStack_3660 = (undefined8 *)0x0;
      uStack_3688 = 0;
      uStack_3690 = 0;
      uStack_3678 = 0;
      uStack_3680 = 0;
      uStack_36a8 = 0;
      uStack_36b0 = 0;
      uStack_36ac = 0;
      uStack_3698 = 0;
      uStack_36a0 = 0;
      uStack_36c8 = 0;
      uStack_36d0 = 0;
      uStack_36b8 = 0;
      uStack_36b4 = 0;
      uStack_36c0 = 0;
      iStack_36bc = 0;
      FUN_10926db08(&uStack_36d0);
      uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_3590 = uStack_3590 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_c8,&UNK_10f578541);
      func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
      FUN_109671348(&uStack_36d0,5,&uStack_c8,&uStack_a0,0xd5);
      FUN_1092b4db8();
      if (cStack_89 < '\0') {
        __ZdlPv(CONCAT17(uStack_99,uStack_a0));
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
      }
      FUN_109671170(&uStack_36d0);
    }
    puVar17 = &uStack_3580;
    FUN_1095c0ae0(puVar17,param_1 + 0x270,*(undefined1 *)(param_1 + 0x2a0),
                  *(undefined1 *)(param_1 + 0x2a1),param_1 + 0x12a8);
    if (((ulong)puVar17 & 1) == 0) {
      if (iRam00000001132dfb08 < 5) goto LAB_109619b64;
      uStack_3590 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_35c8 = 0;
      uStack_35d0 = 0;
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35e8 = 0;
      uStack_35f0 = 0;
      uStack_35d8 = 0;
      uStack_35e0 = 0;
      uStack_3608 = 0;
      uStack_3604 = 0;
      uStack_3610 = 0;
      uStack_360c = 0;
      uStack_35f8 = 0;
      uStack_3600 = 0;
      uStack_35fc = 0;
      uStack_3628 = 0;
      uStack_3624 = 0;
      uStack_3630 = 0;
      uStack_362c = 0;
      uStack_3618 = 0;
      uStack_3614 = 0;
      uStack_3620 = 0;
      uStack_361c = 0;
      uStack_3648 = 0;
      uStack_3644 = 0;
      uStack_3650 = 0;
      uStack_3638 = 0;
      uStack_3634 = 0;
      uStack_3640 = 0;
      uStack_363c = 0;
      puStack_3668 = (undefined8 *)0x0;
      lStack_3670 = 0;
      uStack_3658 = 0;
      puStack_3660 = (undefined8 *)0x0;
      uStack_3688 = 0;
      uStack_3690 = 0;
      uStack_3678 = 0;
      uStack_3680 = 0;
      uStack_36a8 = 0;
      uStack_36b0 = 0;
      uStack_36ac = 0;
      uStack_3698 = 0;
      uStack_36a0 = 0;
      uStack_36c8 = 0;
      uStack_36d0 = 0;
      uStack_36b8 = 0;
      uStack_36b4 = 0;
      uStack_36c0 = 0;
      iStack_36bc = 0;
      FUN_10926db08(&uStack_36d0);
      uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_3590 = uStack_3590 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_c8,&UNK_10f578541);
      func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
      FUN_109671348(&uStack_36d0,5,&uStack_c8,&uStack_a0,0xd9);
      FUN_1092b4db8();
LAB_109619b3c:
      if (cStack_89 < '\0') {
        __ZdlPv(CONCAT17(uStack_99,uStack_a0));
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
      }
      FUN_109671170(&uStack_36d0);
      goto LAB_109619b64;
    }
LAB_109619458:
    lVar19 = *(long *)(param_1 + 0x238);
    puVar14 = (undefined4 *)(lVar19 + 0x1d58);
    if (puVar14 != &uStack_2518) {
      if (lStack_24e0 != 0) {
        piVar1 = (int *)(lStack_24e0 + 0x14);
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (*(long *)(lVar19 + 0x1d90) != 0) {
        piVar1 = (int *)(*(long *)(lVar19 + 0x1d90) + 0x14);
        do {
          iVar7 = *piVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar7 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar7 + -1 == 0) {
          func_0x000109a848d4(puVar14);
        }
      }
      *(undefined8 *)(lVar19 + 0x1d90) = 0;
      *(undefined8 *)(lVar19 + 0x1d70) = 0;
      *(undefined8 *)(lVar19 + 0x1d68) = 0;
      *(undefined8 *)(lVar19 + 0x1d80) = 0;
      *(undefined8 *)(lVar19 + 0x1d78) = 0;
      if (*(int *)(lVar19 + 0x1d5c) < 1) {
        *puVar14 = uStack_2518;
LAB_1096195b8:
        if (2 < iStack_2514) goto LAB_1096195ec;
        *(int *)(lVar19 + 0x1d5c) = iStack_2514;
        *(ulong *)(lVar19 + 0x1d60) = CONCAT44(uStack_250c,uStack_2510);
        puVar17 = *(undefined8 **)(lVar19 + 0x1da0);
        *puVar17 = *puStack_24d0;
        puVar17[1] = puStack_24d0[1];
      }
      else {
        lVar13 = 0;
        lVar15 = *(long *)(lVar19 + 0x1d98);
        do {
          *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar19 + 0x1d5c));
        *puVar14 = uStack_2518;
        if (*(int *)(lVar19 + 0x1d5c) < 3) goto LAB_1096195b8;
LAB_1096195ec:
        func_0x000109a84868(puVar14,&uStack_2518);
      }
      *(ulong *)(lVar19 + 0x1d68) = CONCAT44(uStack_2504,uStack_2508);
      *(ulong *)(lVar19 + 0x1d78) = CONCAT44(uStack_24f4,uStack_24f8);
      *(ulong *)(lVar19 + 0x1d70) = CONCAT44(uStack_24fc,uStack_2500);
      *(ulong *)(lVar19 + 0x1d88) = CONCAT44(uStack_24e4,uStack_24e8);
      *(ulong *)(lVar19 + 0x1d80) = CONCAT44(uStack_24ec,uStack_24f0);
      *(long *)(lVar19 + 0x1d90) = lStack_24e0;
      lVar19 = *(long *)(param_1 + 0x238);
    }
    puVar14 = (undefined4 *)(lVar19 + 0x1db8);
    if (puVar14 != &uStack_23d0) {
      if (lStack_2398 != 0) {
        piVar1 = (int *)(lStack_2398 + 0x14);
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (*(long *)(lVar19 + 0x1df0) != 0) {
        piVar1 = (int *)(*(long *)(lVar19 + 0x1df0) + 0x14);
        do {
          iVar7 = *piVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar7 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar7 + -1 == 0) {
          func_0x000109a848d4(puVar14);
        }
      }
      *(undefined8 *)(lVar19 + 0x1df0) = 0;
      *(undefined8 *)(lVar19 + 0x1dd0) = 0;
      *(undefined8 *)(lVar19 + 0x1dc8) = 0;
      *(undefined8 *)(lVar19 + 0x1de0) = 0;
      *(undefined8 *)(lVar19 + 0x1dd8) = 0;
      if (*(int *)(lVar19 + 0x1dbc) < 1) {
        *puVar14 = uStack_23d0;
LAB_1096196d0:
        if (2 < iStack_23cc) goto LAB_109619704;
        *(int *)(lVar19 + 0x1dbc) = iStack_23cc;
        *(ulong *)(lVar19 + 0x1dc0) = CONCAT44(uStack_23c4,uStack_23c8);
        puVar17 = *(undefined8 **)(lVar19 + 0x1e00);
        *puVar17 = *puStack_2388;
        puVar17[1] = puStack_2388[1];
      }
      else {
        lVar13 = 0;
        lVar15 = *(long *)(lVar19 + 0x1df8);
        do {
          *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar19 + 0x1dbc));
        *puVar14 = uStack_23d0;
        if (*(int *)(lVar19 + 0x1dbc) < 3) goto LAB_1096196d0;
LAB_109619704:
        func_0x000109a84868(puVar14,&uStack_23d0);
      }
      *(ulong *)(lVar19 + 0x1dd0) = CONCAT44(uStack_23b4,uStack_23b8);
      *(undefined8 *)(lVar19 + 0x1dc8) = CONCAT44(uStack_23bc,uStack_23c0);
      *(ulong *)(lVar19 + 0x1de0) = CONCAT44(uStack_23a4,uStack_23a8);
      *(ulong *)(lVar19 + 0x1dd8) = CONCAT44(uStack_23ac,uStack_23b0);
      *(long *)(lVar19 + 0x1df0) = lStack_2398;
      *(ulong *)(lVar19 + 0x1de8) = CONCAT44(uStack_239c,uStack_23a0);
      lVar19 = *(long *)(param_1 + 0x238);
    }
    *(undefined8 *)(lVar19 + 0x1e18) = uStack_24b8;
    *(undefined8 *)(*(long *)(param_1 + 0x238) + 0x1e20) = uStack_2370;
    if (*(char *)(param_1 + 0x2a1) == '\x01') {
      lVar19 = *(long *)(param_1 + 0x238);
      puVar14 = (undefined4 *)(lVar19 + 0x1e28);
      if (puVar14 != &uStack_2288) {
        if (lStack_2250 != 0) {
          piVar1 = (int *)(lStack_2250 + 0x14);
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (*(long *)(lVar19 + 0x1e60) != 0) {
          piVar1 = (int *)(*(long *)(lVar19 + 0x1e60) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar7 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4(puVar14);
          }
        }
        *(undefined8 *)(lVar19 + 0x1e60) = 0;
        *(undefined8 *)(lVar19 + 0x1e40) = 0;
        *(undefined8 *)(lVar19 + 0x1e38) = 0;
        *(undefined8 *)(lVar19 + 0x1e50) = 0;
        *(undefined8 *)(lVar19 + 0x1e48) = 0;
        if (*(int *)(lVar19 + 0x1e2c) < 1) {
          *puVar14 = uStack_2288;
LAB_10961980c:
          if (2 < iStack_2284) goto LAB_109619840;
          *(int *)(lVar19 + 0x1e2c) = iStack_2284;
          *(ulong *)(lVar19 + 0x1e30) = CONCAT44(uStack_227c,uStack_2280);
          puVar17 = *(undefined8 **)(lVar19 + 0x1e70);
          *puVar17 = *puStack_2240;
          puVar17[1] = puStack_2240[1];
        }
        else {
          lVar13 = 0;
          lVar15 = *(long *)(lVar19 + 0x1e68);
          do {
            *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(lVar19 + 0x1e2c));
          *puVar14 = uStack_2288;
          if (*(int *)(lVar19 + 0x1e2c) < 3) goto LAB_10961980c;
LAB_109619840:
          func_0x000109a84868(puVar14,&uStack_2288);
        }
        *(ulong *)(lVar19 + 0x1e38) = CONCAT44(uStack_2274,uStack_2278);
        *(ulong *)(lVar19 + 0x1e48) = CONCAT44(uStack_2264,uStack_2268);
        *(ulong *)(lVar19 + 0x1e40) = CONCAT44(uStack_226c,uStack_2270);
        *(ulong *)(lVar19 + 0x1e58) = CONCAT44(uStack_2254,uStack_2258);
        *(ulong *)(lVar19 + 0x1e50) = CONCAT44(uStack_225c,uStack_2260);
        *(long *)(lVar19 + 0x1e60) = lStack_2250;
        lVar19 = *(long *)(param_1 + 0x238);
      }
      puVar14 = (undefined4 *)(lVar19 + 0x1e88);
      if (puVar14 != &uStack_21c0) {
        if (lStack_2188 != 0) {
          piVar1 = (int *)(lStack_2188 + 0x14);
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (*(long *)(lVar19 + 0x1ec0) != 0) {
          piVar1 = (int *)(*(long *)(lVar19 + 0x1ec0) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar7 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4(puVar14);
          }
        }
        *(undefined8 *)(lVar19 + 0x1ec0) = 0;
        *(undefined8 *)(lVar19 + 0x1ea0) = 0;
        *(undefined8 *)(lVar19 + 0x1e98) = 0;
        *(undefined8 *)(lVar19 + 0x1eb0) = 0;
        *(undefined8 *)(lVar19 + 0x1ea8) = 0;
        if (*(int *)(lVar19 + 0x1e8c) < 1) {
          *puVar14 = uStack_21c0;
LAB_109619924:
          if (2 < iStack_21bc) goto LAB_109619958;
          *(int *)(lVar19 + 0x1e8c) = iStack_21bc;
          *(ulong *)(lVar19 + 0x1e90) = CONCAT44(uStack_21b4,uStack_21b8);
          puVar17 = *(undefined8 **)(lVar19 + 0x1ed0);
          *puVar17 = *puStack_2178;
          puVar17[1] = puStack_2178[1];
        }
        else {
          lVar13 = 0;
          lVar15 = *(long *)(lVar19 + 0x1ec8);
          do {
            *(undefined4 *)(lVar15 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(lVar19 + 0x1e8c));
          *puVar14 = uStack_21c0;
          if (*(int *)(lVar19 + 0x1e8c) < 3) goto LAB_109619924;
LAB_109619958:
          func_0x000109a84868(puVar14,&uStack_21c0);
        }
        *(ulong *)(lVar19 + 0x1ea0) = CONCAT44(uStack_21a4,uStack_21a8);
        *(undefined8 *)(lVar19 + 0x1e98) = CONCAT44(uStack_21ac,uStack_21b0);
        *(ulong *)(lVar19 + 0x1eb0) = CONCAT44(uStack_2194,uStack_2198);
        *(ulong *)(lVar19 + 0x1ea8) = CONCAT44(uStack_219c,uStack_21a0);
        *(long *)(lVar19 + 0x1ec0) = lStack_2188;
        *(ulong *)(lVar19 + 0x1eb8) = CONCAT44(uStack_218c,uStack_2190);
        lVar19 = *(long *)(param_1 + 0x238);
      }
      *(undefined8 *)(lVar19 + 0x1ee8) = uStack_2228;
      *(undefined8 *)(*(long *)(param_1 + 0x238) + 0x1ef0) = uStack_2160;
    }
    _memcpy(param_1 + 0x2a4,&uStack_3580,0x1000);
    if (4 < iRam00000001132dfb08) {
      uStack_3590 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_35c8 = 0;
      uStack_35d0 = 0;
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35e8 = 0;
      uStack_35f0 = 0;
      uStack_35d8 = 0;
      uStack_35e0 = 0;
      uStack_3608 = 0;
      uStack_3604 = 0;
      uStack_3610 = 0;
      uStack_360c = 0;
      uStack_35f8 = 0;
      uStack_3600 = 0;
      uStack_35fc = 0;
      uStack_3628 = 0;
      uStack_3624 = 0;
      uStack_3630 = 0;
      uStack_362c = 0;
      uStack_3618 = 0;
      uStack_3614 = 0;
      uStack_3620 = 0;
      uStack_361c = 0;
      uStack_3648 = 0;
      uStack_3644 = 0;
      uStack_3650 = 0;
      uStack_3638 = 0;
      uStack_3634 = 0;
      uStack_3640 = 0;
      uStack_363c = 0;
      puStack_3668 = (undefined8 *)0x0;
      lStack_3670 = 0;
      uStack_3658 = 0;
      puStack_3660 = (undefined8 *)0x0;
      uStack_3688 = 0;
      uStack_3690 = 0;
      uStack_3678 = 0;
      uStack_3680 = 0;
      uStack_36a8 = 0;
      uStack_36b0 = 0;
      uStack_36ac = 0;
      uStack_3698 = 0;
      uStack_36a0 = 0;
      uStack_36c8 = 0;
      uStack_36d0 = 0;
      uStack_36b8 = 0;
      uStack_36b4 = 0;
      uStack_36c0 = 0;
      iStack_36bc = 0;
      FUN_10926db08(&uStack_36d0);
      uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_3590 = uStack_3590 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_c8,&UNK_10f578541);
      func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
      FUN_109671348(&uStack_36d0,5,&uStack_c8,&uStack_a0,0xed);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x2b4));
      if (cStack_89 < '\0') {
        __ZdlPv(CONCAT17(uStack_99,uStack_a0));
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8));
      }
      FUN_109671170(&uStack_36d0);
    }
    if (*(float *)(param_1 + 0x2b4) < 1.9999) {
      if (iRam00000001132dfb08 < 1) goto LAB_109619b64;
      uStack_3590 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_35c8 = 0;
      uStack_35d0 = 0;
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35e8 = 0;
      uStack_35f0 = 0;
      uStack_35d8 = 0;
      uStack_35e0 = 0;
      uStack_3608 = 0;
      uStack_3604 = 0;
      uStack_3610 = 0;
      uStack_360c = 0;
      uStack_35f8 = 0;
      uStack_3600 = 0;
      uStack_35fc = 0;
      uStack_3628 = 0;
      uStack_3624 = 0;
      uStack_3630 = 0;
      uStack_362c = 0;
      uStack_3618 = 0;
      uStack_3614 = 0;
      uStack_3620 = 0;
      uStack_361c = 0;
      uStack_3648 = 0;
      uStack_3644 = 0;
      uStack_3650 = 0;
      uStack_3638 = 0;
      uStack_3634 = 0;
      uStack_3640 = 0;
      uStack_363c = 0;
      puStack_3668 = (undefined8 *)0x0;
      lStack_3670 = 0;
      uStack_3658 = 0;
      puStack_3660 = (undefined8 *)0x0;
      uStack_3688 = 0;
      uStack_3690 = 0;
      uStack_3678 = 0;
      uStack_3680 = 0;
      uStack_36a8 = 0;
      uStack_36b0 = 0;
      uStack_36ac = 0;
      uStack_3698 = 0;
      uStack_36a0 = 0;
      uStack_36c8 = 0;
      uStack_36d0 = 0;
      uStack_36b8 = 0;
      uStack_36b4 = 0;
      uStack_36c0 = 0;
      iStack_36bc = 0;
      FUN_10926db08(&uStack_36d0);
      uStack_35c8 = CONCAT44(uStack_35c8._4_4_,3);
      uStack_35b8 = 0;
      uStack_35c0 = 0;
      uStack_35a8 = 0;
      uStack_35b0 = 0;
      uStack_3598 = 0;
      uStack_35a0 = 0;
      uStack_3590 = uStack_3590 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_c8,&UNK_10f578541);
      func_0x000107c31940(&uStack_a0,&UNK_10f57873c);
      FUN_109671348(&uStack_36d0,1,&uStack_c8,&uStack_a0,0xf0);
      FUN_1092b4db8();
      goto LAB_109619b3c;
    }
    lVar19 = *(long *)(param_1 + 0x238);
    *(undefined1 *)(lVar19 + 0x135b) = *(undefined1 *)(param_1 + 0x2a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar19 + 0xb0,param_1 + 600);
    lVar19 = *(long *)(param_1 + 0x238);
    *(int *)(lVar19 + 0xcc) = (int)*(float *)(param_1 + 0x2a8);
    *(undefined1 *)(lVar19 + 0x135d) = 1;
    _memmove(lVar19 + 0x344,param_1 + 0x2a4,0x1000);
    fVar20 = *(float *)(param_1 + 0x28);
    if (fVar20 <= -1.0) {
LAB_109619c60:
      fVar20 = *(float *)(param_1 + 0x2c);
      if (-1.0 < fVar20) {
        if (fVar20 < 1.0) {
          uVar12 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
          goto LAB_10961a368;
        }
        lVar13 = *(long *)(param_1 + 0x238);
        bVar10 = *(char *)(lVar13 + 0x135b) == '\0';
        lVar19 = 0x39c;
        if (bVar10) {
          lVar19 = 0x394;
        }
        uVar23 = *(undefined4 *)(lVar13 + lVar19);
        lVar15 = 0x3a0;
        if (bVar10) {
          lVar15 = 0x398;
        }
        uVar24 = *(undefined4 *)(lVar13 + lVar15);
        *(float *)(lVar13 + lVar19) = fVar20;
        uStack_36d0 = CONCAT44(uVar23,uVar24);
        uStack_c8._4_4_ = *(undefined4 *)(param_1 + 0x2c);
        uStack_c8._0_4_ = uVar24;
        FUN_1095c2ea0(*(undefined4 *)(lVar13 + 0x354),lVar13 + 0x1d58,&uStack_36d0,&uStack_c8,
                      lVar13 + 0x1d58,0);
        lVar19 = *(long *)(param_1 + 0x238);
        uStack_36d0 = CONCAT44(uVar23,uVar24);
        uStack_c8._4_4_ = *(undefined4 *)(param_1 + 0x2c);
        uStack_c8._0_4_ = uVar24;
        FUN_1095c2ea0(*(undefined4 *)(lVar19 + 0x354),lVar19 + 0x1db8,&uStack_36d0,&uStack_c8,
                      lVar19 + 0x1db8,0);
      }
      fVar20 = *(float *)(param_1 + 0x24);
      if (fVar20 <= -1.0) {
        lVar13 = *(long *)(param_1 + 0x238);
        bVar10 = *(char *)(lVar13 + 0x135b) == '\0';
        lVar19 = 0x6e8;
        if (bVar10) {
          lVar19 = 0x6dc;
        }
        lVar15 = 0x674;
        if (bVar10) {
          lVar15 = 0x66c;
        }
        lVar4 = 0x670;
        if (bVar10) {
          lVar4 = 0x668;
        }
        lVar16 = 0x6ec;
        if (bVar10) {
          lVar16 = 0x6e0;
        }
        lVar18 = 0x6f0;
        if (bVar10) {
          lVar18 = 0x6e4;
        }
        fVar21 = *(float *)(lVar13 + lVar4);
      }
      else {
        if (fVar20 < 1.0) {
          uVar12 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
          goto LAB_10961a368;
        }
        lVar13 = *(long *)(param_1 + 0x238);
        bVar10 = *(char *)(lVar13 + 0x135b) == '\0';
        lVar15 = 0x674;
        if (bVar10) {
          lVar15 = 0x66c;
        }
        lVar19 = 0x670;
        if (bVar10) {
          lVar19 = 0x668;
        }
        lVar16 = 0x6ec;
        if (bVar10) {
          lVar16 = 0x6e0;
        }
        lVar4 = 0x6fc;
        if (bVar10) {
          lVar4 = 0x6f4;
        }
        lVar18 = 0x6f0;
        if (bVar10) {
          lVar18 = 0x6e4;
        }
        lVar5 = 0x700;
        if (bVar10) {
          lVar5 = 0x6f8;
        }
        fVar21 = *(float *)(lVar13 + lVar15);
        *(float *)(lVar13 + lVar15) = fVar20;
        fVar20 = fVar20 / fVar21;
        fVar21 = fVar20 * *(float *)(lVar13 + lVar19);
        *(float *)(lVar13 + lVar19) = fVar21;
        fVar22 = fVar20 * (*(float *)(lVar13 + lVar16) + 0.5) + -0.5;
        *(float *)(lVar13 + lVar4) = fVar22;
        *(float *)(lVar13 + lVar16) = fVar22;
        fVar22 = fVar20 * (*(float *)(lVar13 + lVar18) + 0.5) + -0.5;
        *(float *)(lVar13 + lVar5) = fVar22;
        *(float *)(lVar13 + lVar18) = fVar22;
        lVar19 = 0x6e8;
        if (bVar10) {
          lVar19 = 0x6dc;
        }
        *(float *)(lVar13 + lVar19) = fVar20 * *(float *)(lVar13 + lVar19);
      }
      *(float *)(lVar13 + 0x6dc) = *(float *)(param_1 + 0x30) * *(float *)(lVar13 + 0x6dc);
      *(float *)(lVar13 + 0x6e8) = *(float *)(param_1 + 0x30) * *(float *)(lVar13 + 0x6e8);
      *(undefined4 *)(lVar13 + 0x1764) = 0;
      *(undefined8 *)(lVar13 + 0x1768) = 0;
      FUN_1095cf9e0(*(undefined4 *)(lVar13 + lVar16),*(undefined4 *)(lVar13 + lVar18),
                    *(undefined4 *)(lVar13 + lVar19),lVar13 + 0xd0,(int)*(float *)(lVar13 + lVar15),
                    (int)fVar21,0);
      *(float *)(lVar13 + 0x1a4) = *(float *)(*(long *)(param_1 + 0x238) + 0x3ac) * -0.5;
      *(undefined8 *)(lVar13 + 0x1a8) = 0;
      FUN_1095cfd0c(&uStack_36d0,0,0,0);
      FUN_1095cfc50(lVar13 + 0xd0,&uStack_36d0);
      uStack_36c0 = *(undefined4 *)(lVar13 + 0xe0);
      uStack_36c8 = *(undefined8 *)(lVar13 + 0xd8);
      uStack_36d0 = *(undefined8 *)(lVar13 + 0xd0);
      uStack_36a0 = *(undefined8 *)(lVar13 + 0x100);
      uStack_36a8 = *(ulong *)(lVar13 + 0xf8);
      uStack_36b4 = (undefined4)*(undefined8 *)(lVar13 + 0xec);
      uStack_36b0 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0xec) >> 0x20);
      iStack_36bc = (int)*(undefined8 *)(lVar13 + 0xe4);
      uStack_36b8 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0xe4) >> 0x20);
      puStack_3668 = &uStack_36a0;
      iVar7 = *(int *)(lVar13 + 0xfc);
      uStack_3690 = *(undefined8 *)(lVar13 + 0x110);
      uStack_3698 = *(undefined8 *)(lVar13 + 0x108);
      uStack_3680 = *(undefined8 *)(lVar13 + 0x120);
      uStack_3688 = *(undefined8 *)(lVar13 + 0x118);
      uStack_3678 = *(undefined8 *)(lVar13 + 0x128);
      lStack_3670 = *(long *)(lVar13 + 0x130);
      uStack_3658 = 0;
      uStack_3650 = 0;
      if (lStack_3670 != 0) {
        piVar1 = (int *)(lStack_3670 + 0x14);
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        iVar7 = *(int *)(lVar13 + 0xfc);
      }
      puStack_3660 = &uStack_3658;
      if (iVar7 < 3) {
        uStack_3658 = **(undefined8 **)(lVar13 + 0x140);
        uStack_3650 = (*(undefined8 **)(lVar13 + 0x140))[1];
      }
      else {
        uStack_36a8 = uStack_36a8 & 0xffffffff;
        func_0x000109a84868(&uStack_36a8);
      }
      uStack_362c = (undefined4)*(undefined8 *)(lVar13 + 0x174);
      uStack_3628 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x174) >> 0x20);
      uStack_3634 = (undefined4)*(undefined8 *)(lVar13 + 0x16c);
      uStack_3630 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x16c) >> 0x20);
      uStack_361c = (undefined4)*(undefined8 *)(lVar13 + 0x184);
      uStack_3618 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x184) >> 0x20);
      uStack_3624 = (undefined4)*(undefined8 *)(lVar13 + 0x17c);
      uStack_3620 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x17c) >> 0x20);
      uStack_360c = (undefined4)*(undefined8 *)(lVar13 + 0x194);
      uStack_3608 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x194) >> 0x20);
      uStack_3614 = (undefined4)*(undefined8 *)(lVar13 + 0x18c);
      uStack_3610 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x18c) >> 0x20);
      uStack_3648 = CONCAT31(uStack_3648._1_3_,*(undefined1 *)(lVar13 + 0x158));
      uStack_3604 = (undefined4)*(undefined8 *)(lVar13 + 0x19c);
      uStack_3600 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x19c) >> 0x20);
      uStack_363c = (undefined4)*(undefined8 *)(lVar13 + 0x164);
      uStack_3638 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x164) >> 0x20);
      uStack_3644 = (undefined4)*(undefined8 *)(lVar13 + 0x15c);
      uStack_3640 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x15c) >> 0x20);
      lVar19 = 0x35;
      puVar14 = (undefined4 *)(lVar13 + 0x1a4);
      do {
        *(undefined4 *)((long)&uStack_36d0 + lVar19 * 4) = *puVar14;
        lVar19 = lVar19 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar19 != 0x38);
      FUN_109618a58(&uStack_c8,param_1,lVar13 + 0xd0,1);
      lVar19 = *(long *)(param_1 + 0x238);
      *(undefined4 *)(lVar19 + 0x1c68) = uStack_a8;
      *(undefined8 *)(lVar19 + 0x1c50) = uStack_c0;
      *(ulong *)(lVar19 + 0x1c48) = CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
      *(undefined8 *)(lVar19 + 0x1c60) = uStack_b0;
      *(ulong *)(lVar19 + 0x1c58) = CONCAT17(cStack_b1,uStack_b8);
      if (lStack_3670 != 0) {
        piVar1 = (int *)(lStack_3670 + 0x14);
        do {
          iVar7 = *piVar1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar7 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar7 + -1 == 0) {
          func_0x000109a848d4(&uStack_36a8);
        }
      }
      lStack_3670 = 0;
      uStack_3690 = 0;
      uStack_3698 = 0;
      uStack_3680 = 0;
      uStack_3688 = 0;
      if (0 < uStack_36a8._4_4_) {
        lVar19 = 0;
        do {
          *(undefined4 *)((long)puStack_3668 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < uStack_36a8._4_4_);
      }
      if (puStack_3660 != &uStack_3658 && puStack_3660 != (undefined8 *)0x0) {
        _free(puStack_3660[-1]);
      }
      lVar13 = *(long *)(param_1 + 0x238);
      bVar10 = *(char *)(lVar13 + 0x135b) == '\0';
      lVar19 = 0x6e8;
      if (bVar10) {
        lVar19 = 0x6dc;
      }
      lVar15 = 0x674;
      if (bVar10) {
        lVar15 = 0x66c;
      }
      lVar4 = 0x670;
      if (bVar10) {
        lVar4 = 0x668;
      }
      lVar16 = 0x6fc;
      if (bVar10) {
        lVar16 = 0x6f4;
      }
      lVar18 = 0x6ec;
      if (bVar10) {
        lVar18 = 0x6e0;
      }
      lVar5 = 0x700;
      if (bVar10) {
        lVar5 = 0x6f8;
      }
      lVar6 = 0x6f0;
      if (bVar10) {
        lVar6 = 0x6e4;
      }
      bVar10 = true;
      if ((*(float *)(lVar13 + lVar16) != *(float *)(lVar13 + 0x1340)) &&
         (bVar10 = true, !NAN(*(float *)(lVar13 + lVar16)))) {
        bVar10 = false;
      }
      if (bVar10) {
        lVar16 = lVar18;
      }
      bVar10 = true;
      if ((*(float *)(lVar13 + lVar5) != *(float *)(lVar13 + 0x1340)) &&
         (bVar10 = true, !NAN(*(float *)(lVar13 + lVar5)))) {
        bVar10 = false;
      }
      if (bVar10) {
        lVar5 = lVar6;
      }
      FUN_1095cf9e0(*(undefined4 *)(lVar13 + lVar16),*(undefined4 *)(lVar13 + lVar5),
                    *(undefined4 *)(lVar13 + lVar19),lVar13 + 0x2e80,
                    (int)*(float *)(lVar13 + lVar15),(int)*(float *)(lVar13 + lVar4),0);
      *(float *)(lVar13 + 0x2f54) = *(float *)(*(long *)(param_1 + 0x238) + 0x3ac) * 0.5;
      *(undefined8 *)(lVar13 + 0x2f58) = 0;
      FUN_1095cfd0c(&uStack_36d0,0,0,0);
      FUN_1095cfc50(lVar13 + 0x2e80,&uStack_36d0);
      FUN_109618a58(&uStack_36d0,param_1,lVar13 + 0x2e80,0);
      lVar19 = *(long *)(param_1 + 0x238);
      *(undefined4 *)(lVar19 + 0x1c8c) = uStack_36b0;
      *(undefined8 *)(lVar19 + 0x1c74) = uStack_36c8;
      *(undefined8 *)(lVar19 + 0x1c6c) = uStack_36d0;
      *(ulong *)(lVar19 + 0x1c84) = CONCAT44(uStack_36b4,uStack_36b8);
      *(ulong *)(lVar19 + 0x1c7c) = CONCAT44(iStack_36bc,uStack_36c0);
      bVar10 = true;
      *(undefined1 *)(param_1 + 0x2a3) = 1;
      goto LAB_10961a180;
    }
    if (1.0 <= fVar20) {
      lVar13 = *(long *)(param_1 + 0x238);
      bVar10 = *(char *)(lVar13 + 0x135b) == '\0';
      lVar19 = 0x39c;
      if (bVar10) {
        lVar19 = 0x394;
      }
      uVar23 = *(undefined4 *)(lVar13 + lVar19);
      lVar19 = 0x3a0;
      if (bVar10) {
        lVar19 = 0x398;
      }
      uVar24 = *(undefined4 *)(lVar13 + lVar19);
      *(float *)(lVar13 + lVar19) = fVar20;
      uStack_36d0 = CONCAT44(uVar23,uVar24);
      uStack_c8._0_4_ = *(undefined4 *)(param_1 + 0x28);
      uStack_c8._4_4_ = uVar23;
      FUN_1095c2ea0(*(undefined4 *)(lVar13 + 0x354),lVar13 + 0x1d58,&uStack_36d0,&uStack_c8,
                    lVar13 + 0x1d58,0);
      lVar19 = *(long *)(param_1 + 0x238);
      uStack_36d0 = CONCAT44(uVar23,uVar24);
      uStack_c8._0_4_ = *(undefined4 *)(param_1 + 0x28);
      uStack_c8._4_4_ = uVar23;
      FUN_1095c2ea0(*(undefined4 *)(lVar19 + 0x354),lVar19 + 0x1db8,&uStack_36d0,&uStack_c8,
                    lVar19 + 0x1db8,0);
      goto LAB_109619c60;
    }
  }
  uVar12 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
LAB_10961a368:
  ___cxa_throw(uVar12,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10961a384);
  (*pcVar9)();
}



/* Entry: 10961a50c; end: 10961a55f;  */

void FUN_10961a50c(long param_1)

{
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  *(undefined1 *)(param_1 + 0x230) = 0;
  if (*(long *)(param_1 + 0x228) != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x228),&ppuStack_20,FUN_10961ada8);
  }
  return;
}



/* Entry: 10961a560; end: 10961ada7;  */

/* WARNING: Removing unreachable block (ram,0x00010961a86c) */
/* WARNING: Removing unreachable block (ram,0x00010961abe8) */

void FUN_10961a560(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 ***pppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 ***pppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 ***apppuStack_158 [2];
  char cStack_141;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_79;
  undefined8 *apuStack_78 [3];
  
  if ((0.5 < *(float *)(param_1 + 0x20)) && (*(char *)(param_1 + 0x230) == '\x01')) {
    puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x238) + 0x1d98);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    uStack_100 = 0x42ff0000;
    uVar18 = (ulong)&uStack_100 | 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    iStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,0x2010000);
    uStack_90 = (undefined8 *)0x0;
    uStack_c0 = uVar18;
    puStack_b8 = &uStack_b0;
    puStack_98 = &uStack_100;
    FUN_109a479a0(*(long *)(param_1 + 0x238) + 0x1d58,&uStack_a0);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(apppuStack_158,uVar2 + 9,&pppuStack_170);
    ppppuVar3 = (undefined8 ****)apppuStack_158[0];
    if (-1 < cStack_141) {
      ppppuVar3 = apppuStack_158;
    }
    if (uVar2 != 0) {
      lVar13 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar13 = param_1 + 8;
      }
      _memmove(ppppuVar3,lVar13,uVar2);
    }
    *(undefined8 *)((long)ppppuVar3 + uVar2) = 0x54554c7466656c5f;
    *(undefined2 *)((undefined8 *)((long)ppppuVar3 + uVar2) + 1) = 0x5f;
    __ZNSt3__19to_stringEi(&pppuStack_170,uVar6);
    uVar2 = uStack_168;
    ppppuVar3 = (undefined8 ****)pppuStack_170;
    if (-1 < (char)bStack_159) {
      uVar2 = (ulong)bStack_159;
      ppppuVar3 = &pppuStack_170;
    }
    ppppuVar9 = apppuStack_158;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar9,ppppuVar3,uVar2);
    ppuStack_138 = ppppuVar9[1];
    ppuStack_140 = *ppppuVar9;
    ppuStack_130 = ppppuVar9[2];
    ppppuVar9[1] = (undefined8 ***)0x0;
    ppppuVar9[2] = (undefined8 ***)0x0;
    *ppppuVar9 = (undefined8 ***)0x0;
    pppuVar10 = &ppuStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar10,"_",1);
    puStack_118 = pppuVar10[1];
    puStack_120 = *pppuVar10;
    puStack_110 = pppuVar10[2];
    pppuVar10[1] = (undefined8 **)0x0;
    pppuVar10[2] = (undefined8 **)0x0;
    *pppuVar10 = (undefined8 **)0x0;
    __ZNSt3__19to_stringEi(&pppuStack_188,uVar5);
    uVar2 = uStack_180;
    ppppuVar3 = (undefined8 ****)pppuStack_188;
    if (-1 < (char)bStack_171) {
      uVar2 = (ulong)bStack_171;
      ppppuVar3 = &pppuStack_188;
    }
    ppuVar11 = &puStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar11,ppppuVar3,uVar2);
    puStack_98 = (undefined4 *)ppuVar11[1];
    uStack_a0 = *ppuVar11;
    uStack_90 = ppuVar11[2];
    ppuVar11[1] = (undefined8 *)0x0;
    ppuVar11[2] = (undefined8 *)0x0;
    *ppuVar11 = (undefined8 *)0x0;
    apuStack_78[0] = &uStack_a0;
    lVar13 = param_2;
    FUN_1095ff978(param_2,&uStack_a0,&UNK_10dd5b8f9,apuStack_78,&uStack_79);
    if (*(long *)(lVar13 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(lVar13 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(lVar13 + 0x28);
      }
    }
    *(undefined8 *)(lVar13 + 0x60) = 0;
    *(undefined8 *)(lVar13 + 0x40) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined8 *)(lVar13 + 0x50) = 0;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    if (0 < *(int *)(lVar13 + 0x2c)) {
      lVar12 = 0;
      lVar15 = *(long *)(lVar13 + 0x68);
      do {
        *(undefined4 *)(lVar15 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(lVar13 + 0x2c));
    }
    *(ulong *)(lVar13 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
    *(ulong *)(lVar13 + 0x28) = CONCAT44(iStack_fc,uStack_100);
    *(ulong *)(lVar13 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(lVar13 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
    *(ulong *)(lVar13 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(lVar13 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
    *(long *)(lVar13 + 0x60) = lStack_c8;
    *(ulong *)(lVar13 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
    puVar16 = *(undefined8 **)(lVar13 + 0x70);
    puVar17 = (undefined8 *)(lVar13 + 0x78);
    if (puVar16 != puVar17) {
      if (puVar16 != (undefined8 *)0x0) {
        _free(puVar16[-1]);
      }
      *(long *)(lVar13 + 0x68) = lVar13 + 0x30;
      *(undefined8 **)(lVar13 + 0x70) = puVar17;
      puVar16 = puVar17;
    }
    puVar17 = (undefined8 *)((ulong)&uStack_100 | 4);
    if (iStack_fc < 3) {
      *puVar16 = *puStack_b8;
      puVar16[1] = puStack_b8[1];
    }
    else {
      *(ulong *)(lVar13 + 0x68) = uStack_c0;
      *(undefined8 **)(lVar13 + 0x70) = puStack_b8;
      uStack_c0 = uVar18;
      puStack_b8 = &uStack_b0;
    }
    uStack_100 = 0x42ff0000;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if ((char)bStack_171 < '\0') {
      __ZdlPv(pppuStack_188);
    }
    if ((long)puStack_110 < 0) {
      __ZdlPv(puStack_120);
    }
    if ((long)ppuStack_130 < 0) {
      __ZdlPv(ppuStack_140);
    }
    if ((char)bStack_159 < '\0') {
      __ZdlPv(pppuStack_170);
    }
    if (cStack_141 < '\0') {
      __ZdlPv(apppuStack_158[0]);
    }
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    if (0 < iStack_fc) {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_fc);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    uStack_100 = 0x42ff0000;
    uVar18 = (ulong)&uStack_100 | 8;
    uStack_f4 = 0;
    uStack_f0 = 0;
    iStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = (undefined8 *)CONCAT44(uStack_a0._4_4_,0x2010000);
    uStack_90 = (undefined8 *)0x0;
    uStack_c0 = uVar18;
    puStack_b8 = &uStack_b0;
    puStack_98 = &uStack_100;
    FUN_109a479a0(*(long *)(param_1 + 0x238) + 0x1db8,&uStack_a0);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
    }
    func_0x000104c4f768(apppuStack_158,uVar2 + 10,&pppuStack_170);
    ppppuVar3 = (undefined8 ****)apppuStack_158[0];
    if (-1 < cStack_141) {
      ppppuVar3 = apppuStack_158;
    }
    if (uVar2 != 0) {
      lVar13 = *(long *)(param_1 + 8);
      if (-1 < *(char *)(param_1 + 0x1f)) {
        lVar13 = param_1 + 8;
      }
      _memmove(ppppuVar3,lVar13,uVar2);
    }
    puVar17 = (undefined8 *)((long)ppppuVar3 + uVar2);
    *puVar17 = 0x554c74686769725f;
    *(undefined2 *)(puVar17 + 1) = 0x5f54;
    *(undefined1 *)((long)puVar17 + 10) = 0;
    __ZNSt3__19to_stringEi(&pppuStack_170,uVar6);
    ppppuVar3 = (undefined8 ****)pppuStack_170;
    if (-1 < (char)bStack_159) {
      uStack_168 = (ulong)bStack_159;
      ppppuVar3 = &pppuStack_170;
    }
    ppppuVar9 = apppuStack_158;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar9,ppppuVar3,uStack_168);
    ppuStack_138 = ppppuVar9[1];
    ppuStack_140 = *ppppuVar9;
    ppuStack_130 = ppppuVar9[2];
    ppppuVar9[1] = (undefined8 ***)0x0;
    ppppuVar9[2] = (undefined8 ***)0x0;
    *ppppuVar9 = (undefined8 ***)0x0;
    pppuVar10 = &ppuStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar10,"_",1);
    puStack_118 = pppuVar10[1];
    puStack_120 = *pppuVar10;
    puStack_110 = pppuVar10[2];
    pppuVar10[1] = (undefined8 **)0x0;
    pppuVar10[2] = (undefined8 **)0x0;
    *pppuVar10 = (undefined8 **)0x0;
    __ZNSt3__19to_stringEi(&pppuStack_188,uVar5);
    ppppuVar3 = (undefined8 ****)pppuStack_188;
    if (-1 < (char)bStack_171) {
      uStack_180 = (ulong)bStack_171;
      ppppuVar3 = &pppuStack_188;
    }
    ppuVar11 = &puStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar11,ppppuVar3,uStack_180);
    puStack_98 = (undefined4 *)ppuVar11[1];
    uStack_a0 = *ppuVar11;
    uStack_90 = ppuVar11[2];
    ppuVar11[1] = (undefined8 *)0x0;
    ppuVar11[2] = (undefined8 *)0x0;
    *ppuVar11 = (undefined8 *)0x0;
    apuStack_78[0] = &uStack_a0;
    FUN_1095ff978(param_2,&uStack_a0,&UNK_10dd5b8f9,apuStack_78,&uStack_79);
    if (*(long *)(param_2 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x60) + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x28);
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar13 = 0;
      lVar12 = *(long *)(param_2 + 0x68);
      do {
        *(undefined4 *)(lVar12 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_2 + 0x2c));
    }
    *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_f4,uStack_f8);
    *(ulong *)(param_2 + 0x28) = CONCAT44(iStack_fc,uStack_100);
    *(ulong *)(param_2 + 0x40) = CONCAT44(uStack_e4,uStack_e8);
    *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
    *(ulong *)(param_2 + 0x50) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(param_2 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
    *(long *)(param_2 + 0x60) = lStack_c8;
    *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_cc,uStack_d0);
    puVar16 = *(undefined8 **)(param_2 + 0x70);
    puVar17 = (undefined8 *)(param_2 + 0x78);
    if (puVar16 != puVar17) {
      if (puVar16 != (undefined8 *)0x0) {
        _free(puVar16[-1]);
      }
      *(long *)(param_2 + 0x68) = param_2 + 0x30;
      *(undefined8 **)(param_2 + 0x70) = puVar17;
      puVar16 = puVar17;
    }
    puVar17 = (undefined8 *)((ulong)&uStack_100 | 4);
    if (iStack_fc < 3) {
      *puVar16 = *puStack_b8;
      puVar16[1] = puStack_b8[1];
    }
    else {
      *(ulong *)(param_2 + 0x68) = uStack_c0;
      *(undefined8 **)(param_2 + 0x70) = puStack_b8;
      uStack_c0 = uVar18;
      puStack_b8 = &uStack_b0;
    }
    uStack_100 = 0x42ff0000;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if ((char)bStack_171 < '\0') {
      __ZdlPv(pppuStack_188);
    }
    if ((long)puStack_110 < 0) {
      __ZdlPv(puStack_120);
    }
    if ((long)ppuStack_130 < 0) {
      __ZdlPv(ppuStack_140);
    }
    if ((char)bStack_159 < '\0') {
      __ZdlPv(pppuStack_170);
    }
    if (cStack_141 < '\0') {
      __ZdlPv(apppuStack_158[0]);
    }
    if (lStack_c8 != 0) {
      piVar1 = (int *)(lStack_c8 + 0x14);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    lStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    if (0 < iStack_fc) {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iStack_fc);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
  }
  return;
}



/* Entry: 10961ada8; end: 10961adbf;  */

void FUN_10961ada8(undefined8 *param_1)

{
  *(undefined1 *)(**(long **)*param_1 + 0x230) = 1;
  return;
}



/* Entry: 10961adc0; end: 10961b10f;  */

undefined8 *
FUN_10961adc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined1 param_7,undefined8 param_8,
             undefined8 *param_9,uint param_10)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar3 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar6;
    param_1[1] = uVar3;
  }
  _bzero(param_1 + 4,0x201);
  *param_1 = &PTR_FUN_110affb38;
  param_1[0x45] = 0;
  param_1[0x46] = 0xffffffff;
  *(char *)(param_1 + 0x47) = (char)param_6;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x251) = 0;
  *(undefined1 *)((long)param_1 + 0x259) = param_7;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  if (param_6 != 3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x48,param_3)
    ;
    *(undefined1 *)(param_1 + 0x4b) = 0;
    uVar3 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10961b06c);
    (*pcVar1)();
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  if ((param_9 == (undefined8 *)0x0) || (uVar5 = (ulong)param_10, (int)param_10 < 1)) {
    if (4 < iRam00000001132dfb08) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      FUN_10926db08(&uStack_1b0);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,3);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1c8,&UNK_10f5788f2);
      func_0x000107c31940(auStack_1e0,&UNK_10f578975);
      FUN_109671348(&uStack_1b0,5,auStack_1c8,auStack_1e0,0xb7);
      FUN_1092b4db8();
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
      if (cStack_1b1 < '\0') {
        __ZdlPv(auStack_1c8[0]);
      }
      FUN_109671170(&uStack_1b0);
    }
  }
  else {
    puVar2 = (undefined8 *)(uVar5 * 0x18);
    __Znwm();
    _bzero();
    param_1[0x4f] = puVar2;
    lVar4 = uVar5 * 0x18;
    param_1[0x50] = puVar2 + ((ulong)((undefined8 *)(uVar5 * 0x18) + -3) / 0x18) * 3 + 3;
    param_1[0x51] = puVar2 + uVar5 * 3;
    do {
      uVar3 = *param_9;
      puVar2[1] = param_9[1];
      *puVar2 = uVar3;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_9 + 2);
      param_9 = param_9 + 3;
      puVar2 = puVar2 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  param_1[5] = 0xbf800000;
  param_1[4] = 0;
  param_1[6] = 0x41a0000042700000;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  return param_1;
}



/* Entry: 10961b110; end: 10961b8ab;  */

undefined8 FUN_10961b110(long param_1,int param_2,double *param_3)

{
  float fVar1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  
  fVar1 = (float)*param_3;
  if (param_2 < 0x1f) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x20) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5788f2);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xcb);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x20));
    }
    else if (param_2 == 0x11) {
      *(float *)(param_1 + 0x2c) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5788f2);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xdb);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      if (param_2 != 0x12) {
        return 0;
      }
      *(float *)(param_1 + 0x24) = fVar1;
      if (iRam00000001132dfb08 < 5) {
        return 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      FUN_10926db08(&uStack_170);
      uStack_68 = CONCAT44(uStack_68._4_4_,3);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      func_0x000107c31940(auStack_188,&UNK_10f5788f2);
      func_0x000107c31940(auStack_1a0,&UNK_10f577495);
      FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xea);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x24));
    }
  }
  else if (param_2 == 0x1f) {
    *(float *)(param_1 + 0x30) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5788f2);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xe0);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x30));
  }
  else if (param_2 == 0x20) {
    *(float *)(param_1 + 0x34) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5788f2);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xe5);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x34));
  }
  else {
    if (param_2 != 0x2b) {
      return 0;
    }
    if (*(char *)(param_1 + 0x238) != '\x02') {
      if (0 < iRam00000001132dfb08) {
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        FUN_10926db08(&uStack_170);
        uStack_68 = CONCAT44(uStack_68._4_4_,3);
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_30 = uStack_30 & 0xffffffff00000000;
        func_0x000107c31940(auStack_188,&UNK_10f5788f2);
        func_0x000107c31940(auStack_1a0,&UNK_10f577495);
        FUN_109671348(&uStack_170,1,auStack_188,auStack_1a0,0xd0);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        FUN_1092b4db8();
        if (cStack_189 < '\0') {
          __ZdlPv(auStack_1a0[0]);
        }
        if (cStack_171 < '\0') {
          __ZdlPv(auStack_188[0]);
        }
        FUN_109671170(&uStack_170);
      }
      return 0;
    }
    *(float *)(param_1 + 0x28) = fVar1;
    if (iRam00000001132dfb08 < 5) {
      return 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f5788f2);
    func_0x000107c31940(auStack_1a0,&UNK_10f577495);
    FUN_109671348(&uStack_170,5,auStack_188,auStack_1a0,0xd6);
    FUN_1092b4db8();
    FUN_1092b4db8();
    FUN_1092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x28));
  }
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  FUN_109671170(&uStack_170);
  return 1;
}



/* Entry: 10961b8ac; end: 10961b92b;  */

undefined8 * FUN_10961b8ac(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110affb38;
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x4c;
  FUN_1093702c4(&puStack_28);
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10961b92c; end: 10961b92f;  */

undefined8 * FUN_10961b92c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110affb38;
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x4c;
  FUN_1093702c4(&puStack_28);
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  *param_1 = &PTR_DAT_110aff768;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10961b930; end: 10961b943;  */

void FUN_10961b930(void)

{
  FUN_10961b8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10961b944; end: 10961b94b;  */

undefined8 FUN_10961b944(void)

{
  return 1;
}


