/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8d677c; end: 10b8d6807;  */

void FUN_10b8d677c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b8d7104();
  uStack_28 = extraout_x8;
  FUN_10b8d6824(auStack_40,1);
  puVar3 = puStack_30;
  *puStack_30 = &PTR_FUN_110d72278;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d72360;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[10] = 0;
  puStack_30 = (undefined8 *)0x0;
  FUN_10b8d6808(param_1,puVar3 + 3);
  FUN_10b8d6904();
  func_0x00010b8d70d8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar2;
  extraout_x8_00[1] = puVar3;
  puVar1 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined1 *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b8d6808;
    lStack_58 = extraout_x8_00[1];
    puStack_60 = puVar2;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b8d6808; end: 10b8d6823;  */

void FUN_10b8d6808(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d6824; end: 10b8d684b;  */

long FUN_10b8d6824(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8d684c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8d684c; end: 10b8d687b;  */

void FUN_10b8d684c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_FUN_110d72278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8d687c; end: 10b8d687f;  */

void FUN_10b8d687c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8d6880; end: 10b8d6893;  */

void FUN_10b8d6880(void)

{
  func_0x00010b8d689c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8d6894; end: 10b8d68ab;  */

void FUN_10b8d6894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8d7718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8d68ac; end: 10b8d6903;  */

void FUN_10b8d68ac(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8d7258();
      } while (extraout_w11 != 0);
    }
    func_0x00010b8d76d8();
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d6904; end: 10b8d6923;  */

void FUN_10b8d6904(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8d6924; end: 10b8d69d3;  */

void FUN_10b8d6924(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fce50 & 1) == 0) {
    iVar5 = 0x137fce50;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fce48,&UNK_10f378231);
      ___cxa_guard_release(0x1137fce50);
    }
  }
  lVar4 = lRam00000001137fce48;
  if (lRam00000001137fce48 != 0) {
    piVar1 = (int *)(lRam00000001137fce48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8d69d4; end: 10b8d6c9b;  */

void FUN_10b8d69d4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if ((ulong)param_1[4] < 0x22) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    plVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*plVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0xff0;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          plStack_70 = plVar13;
          FUN_10b8d6dd4();
          func_0x00010b8d7630(lVar11 * 2 + 6);
          FUN_10b8d6dac(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (long)puStack_88;
          *param_1 = (long)puStack_90;
          param_1[3] = (long)puStack_78;
          param_1[2] = (long)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b8d771c();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (long)puVar12;
        func_0x00010b8d7770();
        FUN_10b8d6cc0();
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (long)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      plStack_98 = plVar13;
      FUN_10b8d6dd4();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0xff0;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          plStack_70 = plVar13;
          FUN_10b8d6dd4();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_10b8d6dac(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b8d771c();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            plStack_70 = plVar13;
            FUN_10b8d6dd4();
            func_0x00010b8d7630(lVar11 * 2 + 6);
            FUN_10b8d6dac(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x00010b8d771c();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar12;
      param_1[3] = (long)puVar15;
      puStack_b0 = puVar10;
      func_0x00010b8d6e08(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x22;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  func_0x00010b8d74b0(param_1,uVar7);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *unaff_x19;
    uVar8 = unaff_x19[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      plVar13 = (long *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        plVar13 = (long *)0x1;
      }
      plVar6 = plVar13;
      FUN_10b8d6dd4();
      plStack_70 = plVar6;
      plStack_68 = plVar6 + ((ulong)plVar13 >> 2);
      FUN_10b8d6dac(&plStack_70,unaff_x19[1],unaff_x19[2]);
      uVar17 = unaff_x19[1];
      plVar18 = (long *)*unaff_x19;
      unaff_x19[1] = (ulong)plStack_68;
      *unaff_x19 = (ulong)plStack_70;
      unaff_x19[3] = (ulong)(plVar6 + uVar8);
      unaff_x19[2] = (ulong)(plVar6 + ((ulong)plVar13 >> 2));
      plStack_70 = plVar18;
      plStack_68 = (long *)uVar17;
      func_0x00010b8d6e08(&plStack_70);
      puVar12 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = unaff_x19[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      unaff_x19[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 10b8d6c9c; end: 10b8d6cbf;  */

long FUN_10b8d6c9c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x22 + -1;
  }
  return lVar1;
}



/* Entry: 10b8d6cc0; end: 10b8d6dab;  */

void FUN_10b8d6cc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010b8d74b0();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b8d6dd4();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b8d6dac(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b8d6e08(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b8d6dac; end: 10b8d6dd3;  */

void FUN_10b8d6dac(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b8d6dd4; end: 10b8d6e97;  */

undefined1  [16] FUN_10b8d6dd4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b8d6e98; end: 10b8d6f07;  */

undefined8 *
FUN_10b8d6e98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  param_1[6] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 7,param_3 + 1);
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[0xe] = param_4[2];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return param_1;
}



/* Entry: 10b8d6f08; end: 10b8d6f13;  */

void FUN_10b8d6f08(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8d6f14; end: 10b8d704b;  */

long * FUN_10b8d6f14(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong uVar7;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  
  plVar6 = param_3;
  if ((ulong)((*(long *)(param_2 + 8) + 1) - *(long *)(param_2 + 0x10)) <=
      0x2aaaaaaaaaaaaaaU - *(long *)(param_2 + 0x10)) {
    func_0x00010b8d74b0();
    if (extraout_x10 >> 0x3d == 0) {
      uVar7 = (extraout_x10 << 3) / 5;
    }
    else {
      uVar7 = extraout_x10 << 3;
      if (4 < extraout_x10 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0x2aaaaaaaaaaaaa9 < uVar7) {
      uVar7 = 0x2aaaaaaaaaaaaaa;
    }
    uVar1 = extraout_x9;
    if (extraout_x9 <= uVar7) {
      uVar1 = uVar7;
    }
    if (extraout_x9 <= extraout_x8) {
      lVar8 = *unaff_x20;
      lVar4 = uVar1 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)*unaff_x20;
      lVar3 = unaff_x20[1];
      puVar5 = puVar2;
      FUN_10b8d704c(puVar2,param_3,lVar4);
      *puVar5 = *param_4;
      (**(code **)(param_4[1] + 0x10))(puVar5 + 1,param_4 + 1);
      plVar6 = param_3;
      FUN_10b8d704c(param_3,puVar2 + lVar3 * 6,puVar5 + 6);
      if (puVar2 != (undefined8 *)0x0) {
        func_0x00010b8d52dc(puVar2,unaff_x20[1]);
        plVar6 = (long *)*unaff_x20;
        if (unaff_x20 + 3 != plVar6) {
          __ZdlPv();
        }
      }
      *unaff_x20 = lVar4;
      unaff_x20[1] = unaff_x20[1] + 1;
      unaff_x20[2] = uVar1;
      *unaff_x19 = (long)param_3 + (lVar4 - lVar8);
      return plVar6;
    }
  }
  _abort();
  func_0x00010b8d72e0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *plVar6 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(plVar6 + 1,unaff_x20 + 1);
    plVar6 = plVar6 + 6;
  }
  return plVar6;
}



/* Entry: 10b8d704c; end: 10b8d709f;  */

undefined8 * FUN_10b8d704c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8d72e0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
    *param_3 = *unaff_x20;
    (**(code **)(unaff_x20[1] + 0x10))(param_3 + 1,unaff_x20 + 1);
    param_3 = param_3 + 6;
  }
  return param_3;
}



/* Entry: 10b8d70a0; end: 10b8d70d7;  */

void FUN_10b8d70a0(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010b8d7200();
    func_0x00010b8d7360();
    pcVar1 = extraout_x8;
  }
  return;
}



/* Entry: 10b8d70d8; end: 10b8d77b7;  */

void FUN_10b8d70d8(void)

{
  return;
}



/* Entry: 10b8d77b8; end: 10b8da69b;  */

void FUN_10b8d77b8(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long lStack_38;
  undefined1 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  func_0x00010b8d8ae4();
  lStack_38 = param_1 + 0x20;
  uStack_30 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x20 + 0x60;
  puVar1 = &uStack_24;
  func_0x00010b8d783c();
  if (*(long *)(unaff_x20 + 0x60) + *(long *)(unaff_x20 + 0x78) == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(puVar1 + 2);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
      do {
        func_0x00010b8d8ad4();
        lVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  *unaff_x19 = lVar2;
  func_0x0001090eb46c(&lStack_38);
  return;
}



/* Entry: 10b8da69c; end: 10b8da6e7;  */

undefined8 * FUN_10b8da69c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    func_0x0001080c5c8c(param_1);
    *param_1 = *param_2;
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10b8da6e8; end: 10b8da727;  */

ulong FUN_10b8da6e8(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_10b8da7a4();
  func_0x00010b8da984();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 10b8da728; end: 10b8da7a3;  */

void FUN_10b8da728(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b8da984();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b8da7a4; end: 10b8da7af;  */

long * FUN_10b8da7a4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8da7f8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8da7b0; end: 10b8da81b;  */

long * FUN_10b8da7b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8da7f8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8da81c; end: 10b8da837;  */

long * FUN_10b8da81c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_10b8da864();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8da838; end: 10b8da863;  */

long * FUN_10b8da838(long *param_1)

{
  FUN_10b8da864();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8da864; end: 10b8da86b;  */

void FUN_10b8da864(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8da984(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b8da944();
  }
  return;
}



/* Entry: 10b8da86c; end: 10b8da907;  */

void FUN_10b8da86c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8da984();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b8da944();
  }
  return;
}



/* Entry: 10b8da908; end: 10b8da90f;  */

void FUN_10b8da908(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8da984(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b8da944();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8da910; end: 10b8da967;  */

void FUN_10b8da910(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8da984();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b8da944();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8da968; end: 10b8da99b;  */

void FUN_10b8da968(void)

{
  return;
}



/* Entry: 10b8da99c; end: 10b8db21b;  */

undefined8 * FUN_10b8da99c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c278fc(uVar1);
  }
  return param_1;
}



/* Entry: 10b8db21c; end: 10b8db2f7;  */

undefined8 * FUN_10b8db21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b8db2f8(uVar1);
  }
  return param_1;
}



/* Entry: 10b8db2f8; end: 10b8db36f;  */

void FUN_10b8db2f8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8db31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8db370; end: 10b8db52b;  */

undefined8 * FUN_10b8db370(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d72430;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = &UNK_10dd5b8b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = &UNK_10dd5b8b0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  func_0x0001080e0180(param_1 + 0x18);
  func_0x0001080e0180(param_1 + 0x1c);
  func_0x0001080e0180(param_1 + 0x20);
  func_0x0001080e0180(param_1 + 0x24);
  func_0x0001080e0180(param_1 + 0x28);
  func_0x0001080e0180(param_1 + 0x2c);
  func_0x0001080e0180(param_1 + 0x30);
  func_0x0001080e0180(param_1 + 0x34);
  func_0x0001080e0180(param_1 + 0x38);
  func_0x0001080e3e30(param_1 + 0x3c);
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return param_1;
}



/* Entry: 10b8db52c; end: 10b8db547;  */

long * FUN_10b8db52c(long *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long lVar4;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar1 = (char)param_3[3] == '\x01';
  if ((bool)uVar1) {
    plVar3 = param_1;
    plVar2 = param_3;
    func_0x0001080e0d20();
    *plVar3 = *plVar2;
    lVar4 = plVar2[1];
    plVar3[2] = plVar2[2];
    plVar3[1] = lVar4;
    *(char *)(plVar3 + 3) = (char)plVar2[3];
    *plVar2 = 0;
    lStack_38 = 0;
    lStack_30 = 0;
    plVar3 = &lStack_38;
    uStack_28 = extraout_x8;
    func_0x0001080e01a8();
    param_3[2] = lStack_30;
    param_3[1] = lStack_38;
    *(undefined1 *)(param_3 + 3) = 0;
    func_0x0001080e0ce0(uStack_28);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001080e0df8();
    while (plVar3 != (long *)param_1[1]) {
      func_0x0001080e0bc0();
      plVar3 = (long *)(*param_1 + 0x20);
      *param_1 = (long)plVar3;
    }
    return param_1;
  }
  *param_1 = param_2;
  lVar4 = param_3[1];
  param_1[2] = param_3[2];
  param_1[1] = lVar4;
  *(undefined1 *)(param_1 + 3) = 0;
  if (((*(byte *)(param_1 + 3) & 1) == 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
    *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001080e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1b8))(plVar3,param_1 + 1);
    return plVar3;
  }
  return param_1;
}



/* Entry: 10b8db548; end: 10b8db7b3;  */

void FUN_10b8db548(long *param_1,undefined1 *param_2,long param_3)

{
  int *piVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 unaff_x22;
  ulong uVar9;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  long lStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  long alStack_148 [4];
  long alStack_128 [4];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  long alStack_68 [4];
  undefined8 uStack_48;
  
  plVar3 = param_1;
  func_0x00010b8dddd0();
  uStack_48 = extraout_x8;
  (**(code **)(*plVar3 + 0x250))();
  uVar2 = 0;
  if (*(char *)(param_3 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f) = *param_2;
    (**(code **)(*param_1 + 0x248))(auStack_88,param_1);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x28);
    func_0x00010b8ddea8();
    func_0x0001080e0bc0(auStack_88);
    (**(code **)(*param_1 + 0x240))(auStack_a8,param_1);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x24);
    func_0x00010b8ddea8();
    func_0x0001080e0bc0(auStack_a8);
    (**(code **)(*param_1 + 0x228))(auStack_c8,param_1,1);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x18);
    func_0x00010b8ddea8();
    func_0x0001080e0bc0(auStack_c8);
    func_0x00010b8de1b0(auStack_e8);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x1c);
    func_0x00010b8ddea8();
    func_0x0001080e0bc0(auStack_e8);
    func_0x00010b8de1b0(auStack_108);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x20);
    func_0x00010b8ddea8();
    func_0x0001080e0bc0(auStack_108);
    func_0x00010b8de0a0(alStack_128);
    func_0x00010b8ddea0(alStack_68);
    func_0x00010b8ddefc(param_1 + 0x38);
    func_0x00010b8ddea8();
    plVar3 = alStack_128;
    func_0x0001080e0bc0();
    uVar2 = 0;
    if (*(char *)(param_3 + 8) == '\x01') {
      func_0x00010b8de0a0(alStack_148);
      func_0x00010b8ddea0(alStack_68);
      func_0x00010b8ddefc(param_1 + 0x34);
      func_0x00010b8ddea8();
      plVar3 = alStack_148;
      func_0x0001080e0bc0();
      uVar2 = *(char *)(param_3 + 8) == '\x01';
      if ((bool)uVar2) {
        puStack_158 = &UNK_10f7cb808;
        uStack_150 = 0xe;
        (**(code **)(*param_1 + 0x58))(alStack_68,param_1,&puStack_158);
        func_0x0001080e1410(param_1 + 0x3c,alStack_68);
        plVar3 = alStack_68;
        func_0x0001080e4278();
        if ((param_2[1] & 1) == 0) {
          param_2 = (undefined1 *)(ulong)(byte)param_2[2];
          unaff_x22 = 0x130;
          __Znwm();
          FUN_10b906d88();
          alStack_68[0] = 0;
          FUN_10b8dd1dc(param_1 + 0x40,unaff_x22);
          plVar3 = alStack_68;
          FUN_10b8dd1b8();
        }
      }
    }
  }
  func_0x00010b8ddd90(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  iVar5 = (int)&uStack_1d0;
  pcStack_168 = FUN_10b8db7b4;
  plVar4 = plVar3;
  uStack_190 = unaff_x22;
  puStack_188 = param_2;
  lStack_180 = param_3;
  plStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010b8dddd0();
  *(undefined1 *)((long)plVar4 + 0x1fb) = 1;
  uStack_198 = extraout_x8_00;
  FUN_10b8dd1dc(plVar4 + 0x40,0);
  if (plVar3[0xd] != 0) {
    uVar6 = plVar3[0xe];
    if (uVar6 < 0x80) {
      if (uVar6 != 0) {
        lVar8 = 0;
        for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
          if (-1 < *(char *)(plVar3[0xb] + uVar9)) {
            FUN_10b8dce48(plVar3[0xc] + lVar8);
            uVar6 = plVar3[0xe];
          }
          lVar8 = lVar8 + 0x28;
        }
        plVar3[0xd] = 0;
        func_0x00010b8de194(plVar3[0xb]);
        *(undefined1 *)(plVar3[0xb] + uVar6) = 0xff;
        uVar6 = plVar3[0xe];
        lVar8 = 6;
        if (uVar6 != 7) {
          lVar8 = uVar6 - (uVar6 >> 3);
        }
        plVar3[0x10] = lVar8 - plVar3[0xd];
      }
    }
    else {
      FUN_10b8dcddc(plVar3 + 0xb);
    }
  }
  if (plVar3[7] != 0) {
    uVar6 = plVar3[8];
    if (uVar6 < 0x80) {
      if (uVar6 != 0) {
        lVar8 = 0;
        for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
          if (-1 < *(char *)(plVar3[5] + uVar9)) {
            func_0x00010b8dcedc(plVar3[6] + lVar8);
            uVar6 = plVar3[8];
          }
          lVar8 = lVar8 + 0x20;
        }
        plVar3[7] = 0;
        func_0x00010b8de194(plVar3[5]);
        *(undefined1 *)(plVar3[5] + uVar6) = 0xff;
        uVar6 = plVar3[8];
        lVar8 = 6;
        if (uVar6 != 7) {
          lVar8 = uVar6 - (uVar6 >> 3);
        }
        plVar3[10] = lVar8 - plVar3[7];
      }
    }
    else {
      FUN_10b8dce70(plVar3 + 5);
    }
  }
  piVar1 = (int *)plVar3[0x12];
  for (piVar7 = (int *)plVar3[0x11]; uVar2 = piVar7 == piVar1, !(bool)uVar2; piVar7 = piVar7 + 5) {
    if (*piVar7 != 0) {
      uStack_1a8 = *(undefined8 *)(piVar7 + 3);
      uStack_1b0 = *(undefined8 *)(piVar7 + 1);
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      func_0x00010b8dcf04(&uStack_1d0);
      func_0x00010b8ddf04(uStack_1c0 & 0xffffffff,uStack_1d0);
    }
  }
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x38);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x34);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x28);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x24);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x18);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x1c);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x20);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x2c);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(plVar3 + 0x30);
  func_0x00010b8dde50();
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  func_0x0001080e3e30(&uStack_1d0);
  plVar3 = plVar3 + 0x3c;
  func_0x0001080e1410();
  func_0x00010b8de018();
  func_0x00010b8ddd90(uStack_198);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x230))();
    return;
  }
  *extraout_x8_01 = plVar3[0x20];
  lVar8 = plVar3[0x21];
  extraout_x8_01[2] = plVar3[0x22];
  extraout_x8_01[1] = lVar8;
  *(undefined1 *)(extraout_x8_01 + 3) = 0;
  return;
}



/* Entry: 10b8db7b4; end: 10b8dba17;  */

void FUN_10b8db7b4(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  long *plVar3;
  int iVar4;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  iVar4 = (int)&uStack_70;
  lVar7 = param_1;
  func_0x00010b8dddd0();
  *(undefined1 *)(lVar7 + 0x1fb) = 1;
  uStack_38 = extraout_x8;
  FUN_10b8dd1dc(lVar7 + 0x200,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x70);
    if (uVar5 < 0x80) {
      if (uVar5 != 0) {
        lVar7 = 0;
        for (uVar8 = 0; uVar8 != uVar5; uVar8 = uVar8 + 1) {
          if (-1 < *(char *)(*(long *)(param_1 + 0x58) + uVar8)) {
            FUN_10b8dce48(*(long *)(param_1 + 0x60) + lVar7);
            uVar5 = *(ulong *)(param_1 + 0x70);
          }
          lVar7 = lVar7 + 0x28;
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
        func_0x00010b8de194(*(undefined8 *)(param_1 + 0x58));
        *(undefined1 *)(*(long *)(param_1 + 0x58) + uVar5) = 0xff;
        uVar5 = *(ulong *)(param_1 + 0x70);
        lVar7 = 6;
        if (uVar5 != 7) {
          lVar7 = uVar5 - (uVar5 >> 3);
        }
        *(long *)(param_1 + 0x80) = lVar7 - *(long *)(param_1 + 0x68);
      }
    }
    else {
      FUN_10b8dcddc(param_1 + 0x58);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    if (uVar5 < 0x80) {
      if (uVar5 != 0) {
        lVar7 = 0;
        for (uVar8 = 0; uVar8 != uVar5; uVar8 = uVar8 + 1) {
          if (-1 < *(char *)(*(long *)(param_1 + 0x28) + uVar8)) {
            func_0x00010b8dcedc(*(long *)(param_1 + 0x30) + lVar7);
            uVar5 = *(ulong *)(param_1 + 0x40);
          }
          lVar7 = lVar7 + 0x20;
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        func_0x00010b8de194(*(undefined8 *)(param_1 + 0x28));
        *(undefined1 *)(*(long *)(param_1 + 0x28) + uVar5) = 0xff;
        uVar5 = *(ulong *)(param_1 + 0x40);
        lVar7 = 6;
        if (uVar5 != 7) {
          lVar7 = uVar5 - (uVar5 >> 3);
        }
        *(long *)(param_1 + 0x50) = lVar7 - *(long *)(param_1 + 0x38);
      }
    }
    else {
      FUN_10b8dce70(param_1 + 0x28);
    }
  }
  piVar1 = *(int **)(param_1 + 0x90);
  for (piVar6 = *(int **)(param_1 + 0x88); uVar2 = piVar6 == piVar1, !(bool)uVar2;
      piVar6 = piVar6 + 5) {
    if (*piVar6 != 0) {
      uStack_48 = *(undefined8 *)(piVar6 + 3);
      uStack_50 = *(undefined8 *)(piVar6 + 1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      func_0x00010b8dcf04(&uStack_70);
      func_0x00010b8ddf04(uStack_60 & 0xffffffff,uStack_70);
    }
  }
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x1c0);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x1a0);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x140);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x120);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0xc0);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0xe0);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x100);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x160);
  func_0x00010b8dde50();
  func_0x00010b8dddc0();
  func_0x00010b8dde58(param_1 + 0x180);
  func_0x00010b8dde50();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0001080e3e30(&uStack_70);
  plVar3 = (long *)(param_1 + 0x1e0);
  func_0x0001080e1410();
  func_0x00010b8de018();
  func_0x00010b8ddd90(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x230))();
    return;
  }
  *extraout_x8_00 = plVar3[0x20];
  lVar7 = plVar3[0x21];
  extraout_x8_00[2] = plVar3[0x22];
  extraout_x8_00[1] = lVar7;
  *(undefined1 *)(extraout_x8_00 + 3) = 0;
  return;
}



/* Entry: 10b8dba18; end: 10b8dba53;  */

void FUN_10b8dba18(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x230))();
    return;
  }
  *param_1 = param_2[0x20];
  lVar1 = param_2[0x21];
  param_1[2] = param_2[0x22];
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b8dba54; end: 10b8dbaeb;  */

void FUN_10b8dba54(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_40;
  long lStack_38;
  
  if (*(int *)(param_3 + 0x18) == 2) {
    lVar1 = param_3;
    FUN_10b9a5b88();
    lStack_40 = param_3;
    lStack_38 = lVar1;
  }
  else {
    if (*(int *)(param_3 + 0x18) == 1) {
      lStack_40 = param_3 + 0x20;
      lStack_38 = *(long *)(param_3 + 0x10);
      pcVar2 = *(code **)(*param_2 + 0x80);
      goto LAB_10b8dbac4;
    }
    lStack_40 = param_3 + 0x20;
    lStack_38 = *(long *)(param_3 + 0x10);
  }
  pcVar2 = *(code **)(*param_2 + 0x78);
LAB_10b8dbac4:
  (*pcVar2)(param_1,param_2,&lStack_40,param_4);
  return;
}



/* Entry: 10b8dbaec; end: 10b8dbbeb;  */

/* WARNING: Possible PIC construction at 0x00010b8dbe54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8dc148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8dc300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8dc14c) */
/* WARNING: Removing unreachable block (ram,0x00010b8dc168) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbe58) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf0c) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbe60) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbea0) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbeac) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf14) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbec8) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf18) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf20) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf28) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf30) */
/* WARNING: Removing unreachable block (ram,0x00010b8dc304) */

long ** FUN_10b8dbaec(long **param_1,undefined8 *param_2,long *param_3,long **param_4,long **param_5
                     ,long **param_6)

{
  long ***ppplVar1;
  long **pplVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  undefined1 *puVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar17;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long **extraout_x8_05;
  undefined8 extraout_x8_06;
  long **extraout_x8_07;
  undefined8 extraout_x8_08;
  long **extraout_x8_09;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long lVar18;
  long **unaff_x20;
  long *unaff_x24;
  undefined8 ****ppppuVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  long **pplStack_3e0;
  long *aplStack_3d8 [8];
  undefined8 uStack_398;
  undefined1 *puStack_390;
  long **pplStack_388;
  long **pplStack_380;
  long **pplStack_378;
  long **pplStack_370;
  long **pplStack_368;
  undefined8 ***pppuStack_360;
  undefined8 uStack_358;
  long *plStack_338;
  undefined1 *puStack_330;
  long *aplStack_2b8 [4];
  undefined1 auStack_298 [32];
  undefined8 uStack_278;
  undefined1 *puStack_270;
  long **pplStack_268;
  long *plStack_260;
  long **pplStack_258;
  long **pplStack_250;
  long **pplStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  long *plStack_210;
  undefined1 *puStack_208;
  long **pplStack_1f8;
  long **pplStack_1f0;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined1 *puStack_1a8;
  long **pplStack_198;
  long **pplStack_190;
  undefined1 ***pppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_158;
  long *plStack_150;
  undefined1 *puStack_148;
  long *plStack_140;
  long **pplStack_138;
  long **pplStack_130;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [8];
  long alStack_100 [3];
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long **pplStack_c8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  plVar23 = param_3;
  pplVar8 = param_4;
  func_0x00010b8de08c();
  func_0x00010b8dddd0();
  uStack_58 = extraout_x8;
  (*(code *)(*param_1)[0x11])(&lStack_78);
  func_0x00010b8de12c();
  if ((bool)in_ZR) {
    for (unaff_x24 = (long *)0x0; in_ZR = param_3 == unaff_x24, !(bool)in_ZR;
        unaff_x24 = (long *)((long)unaff_x24 + 1)) {
      uStack_88 = param_2[1];
      plStack_90 = (long *)*param_2;
      uStack_80 = 0;
      func_0x00010b8de12c();
      if (!(bool)in_ZR) {
LAB_10b8dbba8:
        func_0x00010b8ddda4();
        func_0x00010b8dde48();
        param_2 = param_2 + 2;
        goto LAB_10b8dbbbc;
      }
      plVar23 = alStack_70;
      pplVar8 = &plStack_90;
      param_1 = unaff_x20;
      param_5 = param_4;
      (*(code *)(*unaff_x20)[0x21])();
      func_0x00010b8de12c();
      if (!(bool)in_ZR) goto LAB_10b8dbba8;
      func_0x00010b8dde48();
      param_2 = param_2 + 2;
    }
    plVar23 = &lStack_78;
    func_0x00010b8de098();
  }
  else {
    func_0x00010b8ddda4();
  }
LAB_10b8dbbbc:
  func_0x00010b8ddfa8();
  func_0x00010b8ddd90(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b8dbbec;
  pplVar5 = param_1;
  plVar21 = plVar23;
  pplVar16 = pplVar8;
  plStack_e0 = unaff_x24;
  puStack_d8 = param_2;
  plStack_d0 = param_3;
  pplStack_c8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b8dddd0();
  uStack_e8 = extraout_x8_01;
  pplVar16 = (long **)pplVar16[3];
  (*(code *)(*pplVar5)[0x1b])(auStack_108);
  if ((*(byte *)(pplVar8[3] + 1) & 1) == 0) {
    plVar17 = *pplVar8;
    *extraout_x8_00 = plVar17[0x28];
    lVar18 = plVar17[0x29];
    extraout_x8_00[2] = plVar17[0x2a];
    extraout_x8_00[1] = lVar18;
    *(undefined1 *)(extraout_x8_00 + 3) = 0;
  }
  else {
    plVar21 = (long *)*plVar23;
    pplVar8[5] = (long *)plVar23[1];
    pplVar8[4] = plVar21;
    plVar21 = alStack_100;
    pplVar5 = param_1;
    (*(code *)(*param_1)[0x22])(extraout_x8_00,param_1,plVar21,pplVar8);
  }
  func_0x00010b8dde48();
  func_0x00010b8ddd90(uStack_e8);
  if ((bool)in_ZR) {
    return pplVar5;
  }
  ___stack_chk_fail();
  uStack_118 = 0x10b8dbcac;
  plStack_150 = unaff_x24;
  puStack_148 = auStack_108;
  plStack_140 = plVar23;
  pplStack_138 = param_1;
  pplStack_130 = pplVar8;
  ppuStack_120 = &puStack_b0;
  func_0x00010b8de0d4();
  func_0x00010b8dddd0();
  func_0x00010b8ddee0();
  func_0x00010b8de15c();
  FUN_10b8dbbec();
  func_0x00010b8de018();
  func_0x00010b8ddd90(uStack_158);
  pplVar6 = pplVar5;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_178 = 0x10b8dbcf8;
    plStack_1b0 = unaff_x24;
    puStack_1a8 = auStack_108;
    pplStack_198 = param_1;
    pplStack_190 = pplVar8;
    pppuStack_180 = &ppuStack_120;
    func_0x00010b8de0d4();
    func_0x00010b8dddd0();
    func_0x00010b8ddee0();
    func_0x00010b8de15c();
    (*extraout_x9)();
    func_0x00010b8de018();
    func_0x00010b8ddd90(uStack_1b8);
    pplVar6 = pplVar5;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_1d8 = 0x10b8dbd4c;
      pplVar6 = pplVar5;
      plStack_210 = unaff_x24;
      puStack_208 = auStack_108;
      pplStack_1f8 = param_1;
      pplStack_1f0 = pplVar8;
      pppuStack_1e0 = &pppuStack_180;
      func_0x00010b8dddd0();
      uStack_218 = extraout_x8_02;
      (*(code *)(*pplVar6)[0xb])(&plStack_230);
      puVar13 = auStack_228;
      pplVar6 = pplVar5;
      plVar23 = plVar21;
      pplVar8 = pplVar16;
      pplVar12 = param_5;
      (*(code *)(*pplVar5)[0x1f])(pplVar5);
      func_0x00010b8de018();
      func_0x00010b8ddd90(uStack_218);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_238 = 0x10b8dbdd8;
        pplVar6 = pplVar8;
        pplVar15 = pplVar12;
        puStack_270 = (undefined1 *)&plStack_230;
        pplStack_268 = pplVar5;
        plStack_260 = plVar21;
        pplStack_258 = pplVar16;
        pplStack_250 = param_5;
        pplStack_248 = param_6;
        pppuStack_240 = &pppuStack_1e0;
        func_0x00010b8de08c();
        func_0x00010b8dddd0();
        plStack_338 = plVar23;
        puStack_330 = puVar13;
        uStack_278 = extraout_x8_03;
        if ((bRam00000001137fce60 & 1) == 0) {
          iVar4 = 0x137fce60;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            pplVar5 = (long **)0x1137fce58;
            func_0x000107c31088(0x1137fce58,&DAT_10f685520);
            ___cxa_guard_release(0x1137fce60);
          }
        }
        pplVar16 = &plStack_338;
        pplVar7 = param_5;
        pplVar11 = pplVar12;
        (*(code *)(*param_5)[0xf])(auStack_298);
        if (((ulong)pplVar12[1] & 1) == 0) {
          func_0x00010b8ddda4();
          func_0x00010b8ddea8();
          func_0x00010b8ddd90(uStack_278);
          if ((bool)in_ZR) {
            return pplVar7;
          }
          uVar20 = 0x10b8dbf98;
          ___stack_chk_fail();
        }
        else {
          pplVar16 = (long **)0x1137fce58;
          pplVar5 = aplStack_2b8;
          uVar20 = 0x10b8dbe58;
          pplVar7 = param_5;
          pplVar11 = pplVar12;
        }
        ppplVar1 = &pplStack_3e0;
        ppppuVar19 = &pppuStack_360;
        pplVar9 = pplVar16;
        pplVar14 = pplVar11;
        puStack_390 = (undefined1 *)&plStack_230;
        pplStack_388 = pplVar5;
        pplStack_380 = pplVar8;
        pplStack_378 = pplVar12;
        pplStack_370 = param_5;
        pplStack_368 = param_6;
        pppuStack_360 = &pppuStack_240;
        uStack_358 = uVar20;
        func_0x00010b8de08c();
        func_0x00010b8dddd0();
        pplVar7 = pplVar7 + 0xb;
        uStack_398 = extraout_x8_04;
        FUN_10b8dc9c4();
        uVar3 = (long **)((long)param_5[0xb] + (long)param_5[0xe]) == pplVar7;
        if ((bool)uVar3) {
          func_0x00010b8de1ec();
          (*extraout_x9_00)();
          if (((ulong)pplVar11[1] & 1) == 0) {
            func_0x00010b8ddda4();
          }
          else {
            pplVar8 = param_5;
            func_0x00010b8dc614(param_5,pplVar16);
            pplStack_3e0 = pplVar8;
            func_0x00010b8de150();
            pplVar9 = pplVar5 + 1;
            pplVar7 = param_5;
            pplVar6 = pplVar11;
            (*extraout_x9_01)(aplStack_3d8);
            if (((ulong)pplVar11[1] & 1) == 0) {
              func_0x00010b8ddda4();
              pplVar14 = (long **)ppplVar1;
            }
            else {
              pplVar7 = param_5 + 0xb;
              FUN_10b8dc9f0(pplVar7,pplVar16);
              FUN_10b8dca14();
              pplVar9 = aplStack_3d8;
              func_0x00010b8de098();
              pplVar14 = (long **)ppplVar1;
            }
            func_0x00010b8dde48();
          }
          func_0x00010b8ddfa8();
          func_0x00010b8ddd90(uStack_398);
          if ((bool)uVar3) {
            return pplVar7;
          }
        }
        else {
          func_0x00010b8ddd90(uStack_398);
          if ((bool)uVar3) {
            *param_6 = pplVar9[1];
            plVar23 = pplVar9[2];
            param_6[2] = pplVar9[3];
            param_6[1] = plVar23;
            *(undefined1 *)(param_6 + 3) = 0;
            if (*(char *)(pplVar9 + 4) == '\x01') {
              func_0x0001080e0ad0(param_6);
            }
            return param_6;
          }
        }
        uVar3 = 0;
        uVar20 = 0x10b8dc0b4;
        ___stack_chk_fail();
        ppplVar1 = &pplStack_3e0;
        pplVar8 = extraout_x8_05;
        pplVar12 = &plStack_230;
        do {
          pplVar10 = pplVar9;
          *(long ***)((long)ppplVar1 + -0x40) = pplVar12;
          *(long ***)((long)ppplVar1 + -0x38) = pplVar5;
          *(long ***)((long)ppplVar1 + -0x30) = pplVar11;
          *(long ***)((long)ppplVar1 + -0x28) = pplVar16;
          *(long ***)((long)ppplVar1 + -0x20) = param_5;
          *(long ***)((long)ppplVar1 + -0x18) = param_6;
          *(undefined8 *****)((long)ppplVar1 + -0x10) = ppppuVar19;
          *(undefined8 *)((long)ppplVar1 + -8) = uVar20;
          param_5 = pplVar7;
          pplVar11 = pplVar14;
          pplVar16 = pplVar6;
          func_0x00010b8dddd0();
          *(undefined8 *)((long)ppplVar1 + -0x48) = extraout_x8_06;
          pplVar11 = pplVar11 + 1;
          (*(code *)(*param_5)[0x1c])(pplVar8);
          func_0x00010b8ddf64();
          if ((bool)uVar3) {
            pplVar11 = pplVar8 + 1;
            param_5 = pplVar7;
            (*(code *)(*pplVar7)[0x30])();
            if ((int)param_5 == 0) goto LAB_10b8dc188;
            *(long **)((long)ppplVar1 + -0x78) = *pplVar10;
            *(undefined1 *)((long)ppplVar1 + -0x70) = *(undefined1 *)(pplVar10 + 1);
            param_6 = (long **)((long)ppplVar1 + -0x68);
            pplVar11 = (long **)((long)ppplVar1 + -0x78);
            uVar20 = 0x10b8dc14c;
            param_5 = pplVar7;
            pplVar16 = pplVar15;
          }
          else {
LAB_10b8dc188:
            func_0x00010b8ddd90(*(undefined8 *)((long)ppplVar1 + -0x48));
            if ((bool)uVar3) {
              return param_5;
            }
            uVar20 = 0x10b8dc1b0;
            ___stack_chk_fail();
            param_6 = extraout_x8_07;
          }
          *(long ***)((long)ppplVar1 + -0xc0) = pplVar10;
          *(long ***)((long)ppplVar1 + -0xb8) = pplVar8;
          *(long ***)((long)ppplVar1 + -0xb0) = pplVar14;
          *(long ***)((long)ppplVar1 + -0xa8) = pplVar7;
          *(long ***)((long)ppplVar1 + -0xa0) = pplVar6;
          *(long ***)((long)ppplVar1 + -0x98) = pplVar15;
          *(undefined1 **)((long)ppplVar1 + -0x90) = (undefined1 *)((long)ppplVar1 + -0x10);
          *(undefined8 *)((long)ppplVar1 + -0x88) = uVar20;
          pplVar15 = pplVar16;
          func_0x00010b8dddd0();
          *(undefined8 *)((long)ppplVar1 + -200) = extraout_x8_08;
          if (param_5[0x2c] == (long *)0x0) {
            FUN_10b99f5f8((undefined1 *)((long)ppplVar1 + -0x128),&UNK_10f7cb817);
            pplVar12 = (long **)((long)ppplVar1 + -0x128);
            FUN_10b99ff08(pplVar16);
            func_0x000104bda960(*(undefined8 *)((long)ppplVar1 + -0x128));
            param_6[1] = (long *)0x0;
            *param_6 = (long *)0x0;
            param_6[3] = (long *)0x0;
            param_6[2] = (long *)0x0;
            pplVar7 = param_6;
            func_0x0001080e0180();
            param_5 = pplVar6;
            pplVar11 = pplVar14;
            pplVar5 = pplVar8;
          }
          else {
            pplVar5 = (long **)((long)ppplVar1 + -0x128);
            FUN_10b8dba18((undefined1 *)((long)ppplVar1 + -0x128));
            FUN_10b8dba18((undefined1 *)((long)ppplVar1 + -0x108),param_5,
                          *(undefined4 *)((long)pplVar11 + 4));
            lVar18 = 0xc0;
            if (*(char *)(pplVar11 + 1) == '\0') {
              lVar18 = 0xe0;
            }
            uVar20 = *(undefined8 *)((long)param_5 + lVar18);
            lVar18 = 200;
            if (*(char *)(pplVar11 + 1) == '\0') {
              lVar18 = 0xe8;
            }
            uVar22 = *(undefined8 *)((long)param_5 + lVar18);
            *(undefined8 *)((long)ppplVar1 + -0xd8) = ((undefined8 *)((long)param_5 + lVar18))[1];
            *(undefined8 *)((long)ppplVar1 + -0xe0) = uVar22;
            *(undefined8 *)((long)ppplVar1 + -0xe8) = uVar20;
            *(undefined1 *)((long)ppplVar1 + -0xd0) = 0;
            *(long ***)((long)ppplVar1 + -0x158) = param_5;
            *(long ***)((long)ppplVar1 + -0x150) = pplVar5;
            func_0x00010b8de06c(3);
            pplVar12 = param_5 + 0x2d;
            func_0x00010b8de05c();
            lVar18 = 0x40;
            do {
              pplVar7 = (long **)((long)pplVar5 + lVar18);
              func_0x0001080e0bc0();
              lVar18 = lVar18 + -0x20;
            } while (lVar18 != -0x20);
            param_6 = (long **)0xffffffffffffffe0;
            uVar3 = 1;
          }
          func_0x00010b8ddd90(*(undefined8 *)((long)ppplVar1 + -200));
          if ((bool)uVar3) {
            return pplVar7;
          }
          ___stack_chk_fail();
          pplVar2 = (long **)((long)ppplVar1 + -0x180);
          *(undefined1 **)((long)ppplVar1 + -0x170) = (undefined1 *)((long)ppplVar1 + -0x90);
          *(code **)((long)ppplVar1 + -0x168) = FUN_10b8dc2d0;
          ppppuVar19 = (undefined8 ****)((long)ppplVar1 + -0x170);
          uVar3 = pplVar12 == (long **)(long)(char)pplVar12;
          if (!(bool)uVar3) {
            *(long ***)((long)ppplVar1 + -0x180) = pplVar12;
            *(undefined1 *)((long)ppplVar1 + -0x178) = 0;
            func_0x00010b8de1cc();
            return pplVar7;
          }
          *(long ***)((long)ppplVar1 + -0x180) = pplVar12;
          *(undefined1 *)((long)ppplVar1 + -0x178) = 0;
          pplVar14 = pplVar7 + 0x38;
          pplVar6 = pplVar12 + 0x10;
          uVar20 = 0x10b8dc304;
          ppplVar1 = (long ***)((long)ppplVar1 + -0x180);
          pplVar9 = pplVar2;
          pplVar8 = extraout_x8_09;
          pplVar12 = pplVar10;
        } while( true );
      }
    }
  }
  return pplVar6;
}



/* Entry: 10b8dbbec; end: 10b8dc2cf;  */

/* WARNING: Possible PIC construction at 0x00010b8dbe54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8dc148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8dc300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8dc14c) */
/* WARNING: Removing unreachable block (ram,0x00010b8dc168) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbe58) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf0c) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbe60) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbea0) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbeac) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf14) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbec8) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf18) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf20) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf28) */
/* WARNING: Removing unreachable block (ram,0x00010b8dbf30) */
/* WARNING: Removing unreachable block (ram,0x00010b8dc304) */

long ** FUN_10b8dbbec(undefined8 *param_1,long **param_2,long *param_3,undefined8 param_4,
                     long *param_5,long **param_6,long **param_7)

{
  long ***ppplVar1;
  long **pplVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  undefined1 *puVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long **extraout_x8_03;
  undefined8 extraout_x8_04;
  long **extraout_x8_05;
  undefined8 extraout_x8_06;
  long **extraout_x8_07;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  long **pplStack_340;
  long *aplStack_338 [8];
  undefined8 uStack_2f8;
  undefined1 *puStack_2f0;
  long **pplStack_2e8;
  long **pplStack_2e0;
  long **pplStack_2d8;
  long **pplStack_2d0;
  long **pplStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_298;
  undefined1 *puStack_290;
  long *aplStack_218 [4];
  undefined1 auStack_1f8 [32];
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  long **pplStack_1c8;
  long *plStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  long **pplStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined1 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_118;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  pplVar5 = param_2;
  plVar22 = param_3;
  plVar8 = param_5;
  func_0x00010b8dddd0();
  pplVar16 = (long **)plVar8[3];
  uStack_48 = extraout_x8;
  (*(code *)(*pplVar5)[0x1b])(auStack_68);
  if ((*(byte *)(param_5[3] + 8) & 1) == 0) {
    lVar18 = *param_5;
    *param_1 = *(undefined8 *)(lVar18 + 0x140);
    uVar20 = *(undefined8 *)(lVar18 + 0x148);
    param_1[2] = *(undefined8 *)(lVar18 + 0x150);
    param_1[1] = uVar20;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar18 = *param_3;
    param_5[5] = param_3[1];
    param_5[4] = lVar18;
    plVar22 = alStack_60;
    (*(code *)(*param_2)[0x22])(param_1,param_2,plVar22,param_5);
    pplVar5 = param_2;
  }
  func_0x00010b8dde48();
  func_0x00010b8ddd90(uStack_48);
  if ((bool)in_ZR) {
    return pplVar5;
  }
  ___stack_chk_fail();
  uStack_78 = 0x10b8dbcac;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b8de0d4();
  func_0x00010b8dddd0();
  func_0x00010b8ddee0();
  func_0x00010b8de15c();
  FUN_10b8dbbec();
  func_0x00010b8de018();
  func_0x00010b8ddd90(uStack_b8);
  pplVar6 = pplVar5;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_d8 = 0x10b8dbcf8;
    ppuStack_e0 = &puStack_80;
    func_0x00010b8de0d4();
    func_0x00010b8dddd0();
    func_0x00010b8ddee0();
    func_0x00010b8de15c();
    (*extraout_x9)();
    func_0x00010b8de018();
    func_0x00010b8ddd90(uStack_118);
    pplVar6 = pplVar5;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_138 = 0x10b8dbd4c;
      pplVar6 = pplVar5;
      pppuStack_140 = &ppuStack_e0;
      func_0x00010b8dddd0();
      uStack_178 = extraout_x8_00;
      (*(code *)(*pplVar6)[0xb])(&plStack_190);
      puVar13 = auStack_188;
      pplVar6 = pplVar5;
      plVar8 = plVar22;
      pplVar17 = pplVar16;
      pplVar12 = param_6;
      (*(code *)(*pplVar5)[0x1f])(pplVar5);
      func_0x00010b8de018();
      func_0x00010b8ddd90(uStack_178);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_198 = 0x10b8dbdd8;
        pplVar6 = pplVar17;
        pplVar15 = pplVar12;
        puStack_1d0 = (undefined1 *)&plStack_190;
        pplStack_1c8 = pplVar5;
        plStack_1c0 = plVar22;
        pplStack_1b8 = pplVar16;
        pplStack_1b0 = param_6;
        pplStack_1a8 = param_7;
        pppuStack_1a0 = &pppuStack_140;
        func_0x00010b8de08c();
        func_0x00010b8dddd0();
        plStack_298 = plVar8;
        puStack_290 = puVar13;
        uStack_1d8 = extraout_x8_01;
        if ((bRam00000001137fce60 & 1) == 0) {
          iVar4 = 0x137fce60;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            pplVar5 = (long **)0x1137fce58;
            func_0x000107c31088(0x1137fce58,&DAT_10f685520);
            ___cxa_guard_release(0x1137fce60);
          }
        }
        pplVar16 = &plStack_298;
        pplVar7 = param_6;
        pplVar11 = pplVar12;
        (*(code *)(*param_6)[0xf])(auStack_1f8);
        if (((ulong)pplVar12[1] & 1) == 0) {
          func_0x00010b8ddda4();
          func_0x00010b8ddea8();
          func_0x00010b8ddd90(uStack_1d8);
          if ((bool)in_ZR) {
            return pplVar7;
          }
          uVar20 = 0x10b8dbf98;
          ___stack_chk_fail();
        }
        else {
          pplVar16 = (long **)0x1137fce58;
          pplVar5 = aplStack_218;
          uVar20 = 0x10b8dbe58;
          pplVar7 = param_6;
          pplVar11 = pplVar12;
        }
        ppplVar1 = &pplStack_340;
        ppppuVar19 = &pppuStack_2c0;
        pplVar9 = pplVar16;
        pplVar14 = pplVar11;
        puStack_2f0 = (undefined1 *)&plStack_190;
        pplStack_2e8 = pplVar5;
        pplStack_2e0 = pplVar17;
        pplStack_2d8 = pplVar12;
        pplStack_2d0 = param_6;
        pplStack_2c8 = param_7;
        pppuStack_2c0 = &pppuStack_1a0;
        uStack_2b8 = uVar20;
        func_0x00010b8de08c();
        func_0x00010b8dddd0();
        pplVar7 = pplVar7 + 0xb;
        uStack_2f8 = extraout_x8_02;
        FUN_10b8dc9c4();
        uVar3 = (long **)((long)param_6[0xb] + (long)param_6[0xe]) == pplVar7;
        if ((bool)uVar3) {
          func_0x00010b8de1ec();
          (*extraout_x9_00)();
          if (((ulong)pplVar11[1] & 1) == 0) {
            func_0x00010b8ddda4();
          }
          else {
            pplVar6 = param_6;
            func_0x00010b8dc614(param_6,pplVar16);
            pplStack_340 = pplVar6;
            func_0x00010b8de150();
            pplVar9 = pplVar5 + 1;
            pplVar7 = param_6;
            pplVar6 = pplVar11;
            (*extraout_x9_01)(aplStack_338);
            if (((ulong)pplVar11[1] & 1) == 0) {
              func_0x00010b8ddda4();
              pplVar14 = (long **)ppplVar1;
            }
            else {
              pplVar7 = param_6 + 0xb;
              FUN_10b8dc9f0(pplVar7,pplVar16);
              FUN_10b8dca14();
              pplVar9 = aplStack_338;
              func_0x00010b8de098();
              pplVar14 = (long **)ppplVar1;
            }
            func_0x00010b8dde48();
          }
          func_0x00010b8ddfa8();
          func_0x00010b8ddd90(uStack_2f8);
          if ((bool)uVar3) {
            return pplVar7;
          }
        }
        else {
          func_0x00010b8ddd90(uStack_2f8);
          if ((bool)uVar3) {
            *param_7 = pplVar9[1];
            plVar22 = pplVar9[2];
            param_7[2] = pplVar9[3];
            param_7[1] = plVar22;
            *(undefined1 *)(param_7 + 3) = 0;
            if (*(char *)(pplVar9 + 4) == '\x01') {
              func_0x0001080e0ad0(param_7);
            }
            return param_7;
          }
        }
        uVar3 = 0;
        uVar20 = 0x10b8dc0b4;
        ___stack_chk_fail();
        ppplVar1 = &pplStack_340;
        pplVar17 = extraout_x8_03;
        pplVar12 = &plStack_190;
        do {
          pplVar10 = pplVar9;
          *(long ***)((long)ppplVar1 + -0x40) = pplVar12;
          *(long ***)((long)ppplVar1 + -0x38) = pplVar5;
          *(long ***)((long)ppplVar1 + -0x30) = pplVar11;
          *(long ***)((long)ppplVar1 + -0x28) = pplVar16;
          *(long ***)((long)ppplVar1 + -0x20) = param_6;
          *(long ***)((long)ppplVar1 + -0x18) = param_7;
          *(undefined8 *****)((long)ppplVar1 + -0x10) = ppppuVar19;
          *(undefined8 *)((long)ppplVar1 + -8) = uVar20;
          param_6 = pplVar7;
          pplVar11 = pplVar14;
          pplVar16 = pplVar6;
          func_0x00010b8dddd0();
          *(undefined8 *)((long)ppplVar1 + -0x48) = extraout_x8_04;
          pplVar11 = pplVar11 + 1;
          (*(code *)(*param_6)[0x1c])(pplVar17);
          func_0x00010b8ddf64();
          if ((bool)uVar3) {
            pplVar11 = pplVar17 + 1;
            param_6 = pplVar7;
            (*(code *)(*pplVar7)[0x30])();
            if ((int)param_6 == 0) goto LAB_10b8dc188;
            *(long **)((long)ppplVar1 + -0x78) = *pplVar10;
            *(undefined1 *)((long)ppplVar1 + -0x70) = *(undefined1 *)(pplVar10 + 1);
            param_7 = (long **)((long)ppplVar1 + -0x68);
            pplVar11 = (long **)((long)ppplVar1 + -0x78);
            uVar20 = 0x10b8dc14c;
            param_6 = pplVar7;
            pplVar16 = pplVar15;
          }
          else {
LAB_10b8dc188:
            func_0x00010b8ddd90(*(undefined8 *)((long)ppplVar1 + -0x48));
            if ((bool)uVar3) {
              return param_6;
            }
            uVar20 = 0x10b8dc1b0;
            ___stack_chk_fail();
            param_7 = extraout_x8_05;
          }
          *(long ***)((long)ppplVar1 + -0xc0) = pplVar10;
          *(long ***)((long)ppplVar1 + -0xb8) = pplVar17;
          *(long ***)((long)ppplVar1 + -0xb0) = pplVar14;
          *(long ***)((long)ppplVar1 + -0xa8) = pplVar7;
          *(long ***)((long)ppplVar1 + -0xa0) = pplVar6;
          *(long ***)((long)ppplVar1 + -0x98) = pplVar15;
          *(undefined1 **)((long)ppplVar1 + -0x90) = (undefined1 *)((long)ppplVar1 + -0x10);
          *(undefined8 *)((long)ppplVar1 + -0x88) = uVar20;
          pplVar15 = pplVar16;
          func_0x00010b8dddd0();
          *(undefined8 *)((long)ppplVar1 + -200) = extraout_x8_06;
          if (param_6[0x2c] == (long *)0x0) {
            FUN_10b99f5f8((undefined1 *)((long)ppplVar1 + -0x128),&UNK_10f7cb817);
            pplVar12 = (long **)((long)ppplVar1 + -0x128);
            FUN_10b99ff08(pplVar16);
            func_0x000104bda960(*(undefined8 *)((long)ppplVar1 + -0x128));
            param_7[1] = (long *)0x0;
            *param_7 = (long *)0x0;
            param_7[3] = (long *)0x0;
            param_7[2] = (long *)0x0;
            pplVar7 = param_7;
            func_0x0001080e0180();
            param_6 = pplVar6;
            pplVar11 = pplVar14;
            pplVar5 = pplVar17;
          }
          else {
            pplVar5 = (long **)((long)ppplVar1 + -0x128);
            FUN_10b8dba18((undefined1 *)((long)ppplVar1 + -0x128));
            FUN_10b8dba18((undefined1 *)((long)ppplVar1 + -0x108),param_6,
                          *(undefined4 *)((long)pplVar11 + 4));
            lVar18 = 0xc0;
            if (*(char *)(pplVar11 + 1) == '\0') {
              lVar18 = 0xe0;
            }
            uVar20 = *(undefined8 *)((long)param_6 + lVar18);
            lVar18 = 200;
            if (*(char *)(pplVar11 + 1) == '\0') {
              lVar18 = 0xe8;
            }
            uVar21 = *(undefined8 *)((long)param_6 + lVar18);
            *(undefined8 *)((long)ppplVar1 + -0xd8) = ((undefined8 *)((long)param_6 + lVar18))[1];
            *(undefined8 *)((long)ppplVar1 + -0xe0) = uVar21;
            *(undefined8 *)((long)ppplVar1 + -0xe8) = uVar20;
            *(undefined1 *)((long)ppplVar1 + -0xd0) = 0;
            *(long ***)((long)ppplVar1 + -0x158) = param_6;
            *(long ***)((long)ppplVar1 + -0x150) = pplVar5;
            func_0x00010b8de06c(3);
            pplVar12 = param_6 + 0x2d;
            func_0x00010b8de05c();
            lVar18 = 0x40;
            do {
              pplVar7 = (long **)((long)pplVar5 + lVar18);
              func_0x0001080e0bc0();
              lVar18 = lVar18 + -0x20;
            } while (lVar18 != -0x20);
            param_7 = (long **)0xffffffffffffffe0;
            uVar3 = 1;
          }
          func_0x00010b8ddd90(*(undefined8 *)((long)ppplVar1 + -200));
          if ((bool)uVar3) {
            return pplVar7;
          }
          ___stack_chk_fail();
          pplVar2 = (long **)((long)ppplVar1 + -0x180);
          *(undefined1 **)((long)ppplVar1 + -0x170) = (undefined1 *)((long)ppplVar1 + -0x90);
          *(code **)((long)ppplVar1 + -0x168) = FUN_10b8dc2d0;
          ppppuVar19 = (undefined8 ****)((long)ppplVar1 + -0x170);
          uVar3 = pplVar12 == (long **)(long)(char)pplVar12;
          if (!(bool)uVar3) {
            *(long ***)((long)ppplVar1 + -0x180) = pplVar12;
            *(undefined1 *)((long)ppplVar1 + -0x178) = 0;
            func_0x00010b8de1cc();
            return pplVar7;
          }
          *(long ***)((long)ppplVar1 + -0x180) = pplVar12;
          *(undefined1 *)((long)ppplVar1 + -0x178) = 0;
          pplVar14 = pplVar7 + 0x38;
          pplVar6 = pplVar12 + 0x10;
          uVar20 = 0x10b8dc304;
          ppplVar1 = (long ***)((long)ppplVar1 + -0x180);
          pplVar9 = pplVar2;
          pplVar17 = extraout_x8_07;
          pplVar12 = pplVar10;
        } while( true );
      }
    }
  }
  return pplVar6;
}



/* Entry: 10b8dc2d0; end: 10b8dc373;  */

void FUN_10b8dc2d0(long param_1,long param_2)

{
  long lStack_20;
  undefined1 uStack_18;
  
  lStack_20 = param_2;
  if (param_2 == (char)param_2) {
    uStack_18 = 0;
    func_0x00010b8dc0b4(param_1,&lStack_20,param_1 + 0x1c0,param_2 + 0x80);
  }
  else {
    uStack_18 = 0;
    func_0x00010b8de1cc();
  }
  return;
}



/* Entry: 10b8dc374; end: 10b8dc3ff;  */

void FUN_10b8dc374(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long *aplStack_58 [3];
  
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_10b99d8d0();
  FUN_10b99daa0(aplStack_58);
  (**(code **)(*param_2 + 0x98))(param_1,param_2,aplStack_58,param_5);
  if (aplStack_58[0] != (long *)0x0) {
    (**(code **)(*aplStack_58[0] + 0x18))();
  }
  func_0x000104bdb368(uVar1);
  return;
}



/* Entry: 10b8dc400; end: 10b8dc6d7;  */

undefined1  [16] FUN_10b8dc400(undefined *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  undefined8 *extraout_x8_01;
  long *plVar9;
  long *plVar10;
  undefined *unaff_x22;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *apuStack_98 [4];
  undefined *apuStack_78 [4];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  ppuVar7 = &puStack_a0;
  func_0x00010b8dddd0();
  uStack_38 = extraout_x8;
  if ((bRam00000001137fce70 & 1) == 0) {
    param_1 = (undefined *)0x1137fce70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      unaff_x22 = (undefined *)0x1137fce68;
      param_1 = &DAT_10f2c120a;
      func_0x00010b8de1c4();
      func_0x00010b8de1bc();
    }
  }
  if ((bRam00000001137fce80 & 1) == 0) {
    param_1 = (undefined *)0x1137fce80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      unaff_x22 = (undefined *)0x1137fce78;
      param_1 = &DAT_10f2c1205;
      func_0x00010b8de1c4();
      func_0x00010b8de1bc();
    }
  }
  if ((bRam00000001137fce90 & 1) == 0) {
    param_1 = (undefined *)0x1137fce90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      unaff_x22 = (undefined *)0x1137fce88;
      param_1 = &UNK_10f7cb83a;
      func_0x00010b8de1c4();
      func_0x00010b8de1bc();
    }
  }
  puVar5 = (undefined1 *)0x1137fce68;
  func_0x00010b8de1a8();
  apuStack_78[0] = param_1;
  func_0x00010b8de150();
  ppuVar6 = apuStack_78;
  func_0x00010b8dde08(auStack_58);
  func_0x00010b8ddf64();
  if (!(bool)in_ZR) {
    plVar9 = (long *)0x0;
    plVar10 = (long *)0x0;
    goto LAB_10b8dc55c;
  }
  puVar5 = (undefined1 *)0x1137fce78;
  func_0x00010b8de1a8();
  apuStack_98[0] = param_1;
  func_0x00010b8de150();
  ppuVar6 = apuStack_98;
  func_0x00010b8dde08(apuStack_78);
  func_0x00010b8ddf64();
  if ((bool)in_ZR) {
    puVar5 = (undefined1 *)0x1137fce88;
    func_0x00010b8de1a8();
    puStack_a0 = param_1;
    func_0x00010b8de150();
    func_0x00010b8dde08(apuStack_98);
    func_0x00010b8ddf64();
    if ((bool)in_ZR) {
      func_0x00010b8dde30(auStack_58);
      func_0x00010b8ddf64();
      if (!(bool)in_ZR) goto LAB_10b8dc54c;
      puVar2 = param_1;
      func_0x00010b8dde30(apuStack_78);
      func_0x00010b8ddf64();
      param_2 = param_1;
      if (!(bool)in_ZR) goto LAB_10b8dc54c;
      puVar3 = puVar2;
      func_0x00010b8dde30(apuStack_98);
      func_0x00010b8ddf64();
      plVar9 = (long *)0x0;
      if ((bool)in_ZR) {
        plVar9 = (long *)((ulong)puVar3 & 0xffffffff);
      }
      plVar10 = (long *)0x0;
      if ((bool)in_ZR) {
        plVar10 = (long *)((ulong)param_1 & 0xffffffff | (long)puVar2 << 0x20);
      }
    }
    else {
LAB_10b8dc54c:
      plVar9 = (long *)0x0;
      plVar10 = (long *)0x0;
      param_1 = param_2;
      puVar2 = unaff_x22;
    }
    func_0x00010b8dde48();
    ppuVar6 = ppuVar7;
    param_2 = param_1;
    unaff_x22 = puVar2;
  }
  else {
    plVar9 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  func_0x00010b8ddfa8();
LAB_10b8dc55c:
  puVar4 = auStack_58;
  func_0x0001080e0bc0();
  func_0x00010b8ddd90(uStack_38);
  if ((bool)in_ZR) {
    auVar12._8_8_ = plVar9;
    auVar12._0_8_ = plVar10;
    return auVar12;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x10b8dc614;
  puStack_d0 = unaff_x22;
  puStack_c8 = param_2;
  plStack_c0 = plVar10;
  plStack_b8 = plVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b8de214();
  func_0x00010b8dddd0();
  puVar4 = puVar4 + 0x28;
  uStack_d8 = extraout_x8_00;
  FUN_10b8dc974();
  uVar1 = (undefined1 *)(plVar10[5] + plVar10[8]) == puVar4;
  if ((bool)uVar1) {
    lVar8 = *plVar9;
    if (lVar8 == 0) {
      puStack_100 = &UNK_10f7d0ef0;
      uStack_f8 = 0;
    }
    else {
      puStack_100 = (undefined *)(lVar8 + 0x18);
      uStack_f8 = (ulong)*(uint *)(lVar8 + 0xc);
    }
    (**(code **)(*plVar10 + 0x58))(auStack_f0,plVar10,&puStack_100);
    FUN_10b8dc9a0(plVar10 + 5,plVar9);
    puVar5 = auStack_f0;
    func_0x0001080e1410();
    func_0x0001080e4278(auStack_f0);
  }
  else {
    uStack_e8 = *(undefined8 *)(puVar5 + 0x10);
  }
  func_0x00010b8ddd90(uStack_d8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar2 = &UNK_10f7cb843;
    FUN_10b9a0050(ppuVar6,&UNK_10f7cb843);
    extraout_x8_01[1] = 0;
    *extraout_x8_01 = 0;
    extraout_x8_01[3] = 0;
    extraout_x8_01[2] = 0;
    *extraout_x8_01 = 0;
    func_0x0001080e01a8(extraout_x8_01 + 1);
    *(undefined1 *)(extraout_x8_01 + 3) = 0;
    auVar11._8_8_ = puVar2;
    auVar11._0_8_ = extraout_x8_01;
    return auVar11;
  }
  auVar13._8_8_ = puVar5;
  auVar13._0_8_ = uStack_e8;
  return auVar13;
}



/* Entry: 10b8dc6d8; end: 10b8dc70f;  */

undefined8 *
FUN_10b8dc6d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10b9a0050(param_4,&UNK_10f7cb843);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001080e01a8(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b8dc710; end: 10b8dc71b;  */

void FUN_10b8dc710(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 10b8dc71c; end: 10b8dc833;  */

undefined1 ** FUN_10b8dc71c(undefined1 **param_1,undefined1 *param_2,undefined **param_3)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined **ppuVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 **unaff_x19;
  undefined1 **ppuVar4;
  undefined1 **unaff_x20;
  long lStack_188;
  undefined1 **ppuStack_180;
  undefined1 **ppuStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  undefined1 **ppuStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 *apuStack_90 [5];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  
  ppuVar3 = param_3;
  func_0x00010b8de08c();
  func_0x00010b8dddd0();
  uStack_48 = extraout_x8;
  if (param_1[0x30] == (undefined1 *)0x0) {
    param_1 = unaff_x20;
    (**(code **)(*unaff_x20 + 0x20))(&stack0xffffffffffffff68);
    if (((ulong)param_3[1] & 1) == 0) {
      ppuVar1 = (undefined1 **)&stack0xffffffffffffff68;
      func_0x00010b8de098();
    }
    else {
      puStack_68 = &UNK_10f7cb880;
      uStack_60 = 7;
      ppuVar1 = apuStack_90;
      ppuVar3 = &puStack_68;
      param_1 = unaff_x20;
      (**(code **)(*unaff_x20 + 0xd0))();
      func_0x00010b8de12c();
      if ((bool)in_ZR) {
        func_0x0001080e07a8(&puStack_68);
        func_0x0001080df8d0(unaff_x20 + 0x30,&puStack_68);
        func_0x0001080e0bc0(&puStack_68);
        func_0x0001080e0bc0();
        func_0x00010b8dde48();
        param_1 = unaff_x19;
        goto LAB_10b8dc750;
      }
    }
    func_0x00010b8dde48();
  }
  else {
LAB_10b8dc750:
    apuStack_90[0] = param_2;
    func_0x00010b8de06c(1);
    ppuVar1 = unaff_x20 + 0x31;
    func_0x00010b8de05c();
  }
  func_0x00010b8ddd90(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b8dc834;
  ppuVar4 = param_1;
  puStack_d0 = param_2;
  ppuStack_c8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b8dddd0();
  uStack_d8 = extraout_x8_00;
  (**(code **)(*ppuVar4 + 0x180))();
  if (((ulong)ppuVar4 & 1) == 0) {
    func_0x00010b8de150();
    param_2 = auStack_f8;
    func_0x00010b8dde08(auStack_f8);
    func_0x00010b8ddf64();
    if (((bool)in_ZR) &&
       (ppuVar4 = param_1, (**(code **)(*param_1 + 0x180))(param_1,auStack_f0),
       ((ulong)ppuVar4 & 1) == 0)) {
      ppuVar4 = param_1;
      (**(code **)(*param_1 + 0x150))(param_1,auStack_f0,ppuVar3);
    }
    else {
      ppuVar4 = (undefined1 **)0x0;
    }
    func_0x00010b8dde48();
  }
  else {
    ppuVar4 = (undefined1 **)0x0;
  }
  func_0x00010b8ddd90(uStack_d8);
  if ((bool)in_ZR) {
    return (undefined1 **)(ulong)((uint)ppuVar4 & 0xff);
  }
  ___stack_chk_fail();
  uStack_108 = 0x10b8dc8f8;
  puStack_130 = param_2;
  ppuStack_128 = ppuVar1;
  ppuStack_120 = param_1;
  ppuStack_118 = ppuVar4;
  ppuStack_110 = &puStack_b0;
  func_0x00010b8de0d4();
  func_0x00010b8dddd0();
  uStack_138 = extraout_x8_01;
  FUN_10b8dba18(auStack_158);
  (**(code **)(*ppuVar1 + 0xf8))(ppuVar1,param_1,ppuVar1 + 0x3d,auStack_150,1,ppuVar4);
  func_0x00010b8dde48();
  func_0x00010b8ddd90(uStack_138);
  if ((bool)in_ZR) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10b8dc974;
  ppuStack_180 = param_1;
  ppuStack_178 = ppuVar4;
  pppuStack_170 = &ppuStack_110;
  func_0x00010b8de214();
  FUN_10b8dd29c();
  ppuVar2 = param_1;
  FUN_10b8dd2c0(param_1,ppuVar4,ppuVar1,&lStack_188);
  if ((int)ppuVar2 == 0) {
    ppuVar1 = (undefined1 **)(*param_1 + (long)param_1[3]);
  }
  else {
    ppuVar1 = (undefined1 **)(*param_1 + lStack_188);
  }
  return ppuVar1;
}



/* Entry: 10b8dc834; end: 10b8dc973;  */

long * FUN_10b8dc834(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar2;
  undefined1 *unaff_x22;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010b8dddd0();
  uStack_38 = extraout_x8;
  (**(code **)(*plVar2 + 0x180))();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x00010b8de150();
    unaff_x22 = auStack_58;
    func_0x00010b8dde08(auStack_58);
    func_0x00010b8ddf64();
    if (((bool)in_ZR) &&
       (plVar2 = param_1, (**(code **)(*param_1 + 0x180))(param_1,auStack_50),
       ((ulong)plVar2 & 1) == 0)) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x150))(param_1,auStack_50,param_3);
    }
    else {
      plVar2 = (long *)0x0;
    }
    func_0x00010b8dde48();
  }
  else {
    plVar2 = (long *)0x0;
  }
  func_0x00010b8ddd90(uStack_38);
  if ((bool)in_ZR) {
    return (long *)(ulong)((uint)plVar2 & 0xff);
  }
  ___stack_chk_fail();
  uStack_68 = 0x10b8dc8f8;
  puStack_90 = unaff_x22;
  plStack_88 = param_2;
  plStack_80 = param_1;
  plStack_78 = plVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010b8de0d4();
  func_0x00010b8dddd0();
  uStack_98 = extraout_x8_00;
  FUN_10b8dba18(auStack_b8);
  (**(code **)(*param_2 + 0xf8))(param_2,param_1,param_2 + 0x3d,auStack_b0,1,plVar2);
  func_0x00010b8dde48();
  func_0x00010b8ddd90(uStack_98);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b8dc974;
  plStack_e0 = param_1;
  plStack_d8 = plVar2;
  ppuStack_d0 = &puStack_70;
  func_0x00010b8de214();
  FUN_10b8dd29c();
  plVar1 = param_1;
  FUN_10b8dd2c0(param_1,plVar2,param_2,&lStack_e8);
  if ((int)plVar1 == 0) {
    plVar2 = (long *)(*param_1 + param_1[3]);
  }
  else {
    plVar2 = (long *)(*param_1 + lStack_e8);
  }
  return plVar2;
}



/* Entry: 10b8dc974; end: 10b8dc99f;  */

long FUN_10b8dc974(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x00010b8de214();
  FUN_10b8dd29c();
  plVar1 = unaff_x20;
  FUN_10b8dd2c0();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8dc9a0; end: 10b8dc9c3;  */

long FUN_10b8dc9a0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8dd37c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8dc9c4; end: 10b8dc9ef;  */

long FUN_10b8dc9c4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x00010b8de214();
  FUN_10b8dd84c();
  plVar1 = unaff_x20;
  FUN_10b8dd870();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8dc9f0; end: 10b8dca13;  */

long FUN_10b8dc9f0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8dd930(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8dca14; end: 10b8dca67;  */

undefined8 * FUN_10b8dca14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    func_0x0001080e0c10(param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    if (*(char *)(param_2 + 3) == '\x01') {
      func_0x0001080e0ad0(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b8dca68; end: 10b8dca73;  */

void FUN_10b8dca68(long param_1)

{
  *(undefined1 *)(param_1 + 0x1fa) = 1;
  return;
}



/* Entry: 10b8dca74; end: 10b8dcb1b;  */

undefined1 FUN_10b8dca74(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x1f9) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f9) = 0;
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    }
  }
  return *(undefined1 *)(param_1 + 0x1fa);
}



/* Entry: 10b8dcb1c; end: 10b8dcbcb;  */

ulong FUN_10b8dcb1c(long *param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)((long)param_1 + 0x1fb) & 1) == 0) {
    plVar2 = param_1 + 0x14;
    FUN_10b9a5798();
    uVar3 = (ulong)plVar2 >> 0x20;
    while ((ulong)((param_1[0x12] - param_1[0x11]) / 0x14) <= uVar3) {
      FUN_10b8dcc40(param_1 + 0x11);
    }
    puVar1 = (undefined4 *)(param_1[0x11] + uVar3 * 0x14);
    *puVar1 = (int)plVar2;
    uVar4 = *param_2;
    *(undefined8 *)(puVar1 + 3) = param_2[1];
    *(undefined8 *)(puVar1 + 1) = uVar4;
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x1b8))(param_1,param_2);
    }
  }
  else {
    uVar3 = 0;
    plVar2 = (long *)0x0;
  }
  return (ulong)plVar2 & 0xffffffff | uVar3 << 0x20;
}



/* Entry: 10b8dcbcc; end: 10b8dcc37;  */

undefined1  [16] FUN_10b8dcbcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 extraout_x8;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x00010b8dddd0();
  auVar7 = *(undefined1 (*) [16])(puVar1 + 1);
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  plVar2 = &lStack_48;
  uStack_38 = extraout_x8;
  func_0x0001080e01a8();
  param_1[2] = uStack_40;
  param_1[1] = lStack_48;
  func_0x00010b8ddd90(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((*(byte *)((long)plVar2 + 0x1fb) & 1) == 0) {
      plVar4 = plVar2 + 0x14;
      FUN_10b9a5798();
      uVar5 = (ulong)plVar4 >> 0x20;
      while ((ulong)((plVar2[0x12] - plVar2[0x11]) / 0x14) <= uVar5) {
        FUN_10b8dcc40(plVar2 + 0x11);
      }
      puVar3 = (undefined4 *)(plVar2[0x11] + uVar5 * 0x14);
      *puVar3 = (int)plVar4;
      uVar6 = *param_2;
      *(undefined8 *)(puVar3 + 3) = param_2[1];
      *(undefined8 *)(puVar3 + 1) = uVar6;
      (**(code **)(*plVar2 + 0x1b8))(plVar2,param_2);
    }
    else {
      uVar5 = 0;
      plVar4 = (long *)0x0;
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = (ulong)plVar4 & 0xffffffff | uVar5 << 0x20;
    return auVar7;
  }
  return auVar7;
}



/* Entry: 10b8dcc38; end: 10b8dcc3f;  */

ulong FUN_10b8dcc38(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)((long)param_1 + 0x1fb) & 1) == 0) {
    plVar2 = param_1 + 0x14;
    FUN_10b9a5798();
    uVar3 = (ulong)plVar2 >> 0x20;
    while ((ulong)((param_1[0x12] - param_1[0x11]) / 0x14) <= uVar3) {
      FUN_10b8dcc40(param_1 + 0x11);
    }
    puVar1 = (undefined4 *)(param_1[0x11] + uVar3 * 0x14);
    *puVar1 = (int)plVar2;
    uVar4 = *param_2;
    *(undefined8 *)(puVar1 + 3) = param_2[1];
    *(undefined8 *)(puVar1 + 1) = uVar4;
    (**(code **)(*param_1 + 0x1b8))(param_1,param_2);
  }
  else {
    uVar3 = 0;
    plVar2 = (long *)0x0;
  }
  return (ulong)plVar2 & 0xffffffff | uVar3 << 0x20;
}



/* Entry: 10b8dcc40; end: 10b8dcc7b;  */

long FUN_10b8dcc40(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b8dcf28();
    lVar2 = uVar1 + 0x14;
  }
  else {
    lVar2 = param_1;
    func_0x00010b8dcf58();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x14;
}



/* Entry: 10b8dcc7c; end: 10b8dcd07;  */

int * FUN_10b8dcc7c(long param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  undefined8 extraout_x8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  piVar4 = param_2;
  func_0x00010b8dddd0();
  uStack_38 = extraout_x8;
  FUN_10b8dcd08();
  if (lVar2 != 0) {
    piVar4 = *(int **)param_2;
    FUN_10b9a57c8(param_1 + 0xa0);
    uStack_48 = *(undefined8 *)(lVar2 + 0xc);
    uStack_50 = *(undefined8 *)(lVar2 + 4);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b8dcf04(&uStack_68);
    func_0x00010b8ddf04(uStack_58,uStack_68);
  }
  bVar1 = lVar2 == 0;
  piVar3 = (int *)(ulong)!bVar1;
  func_0x00010b8ddd90(uStack_38);
  if (!bVar1) {
    ___stack_chk_fail();
    if ((ulong)((*(long *)(piVar3 + 0x24) - *(long *)(piVar3 + 0x22)) / 0x14) <=
        (ulong)(uint)piVar4[1]) {
      return (int *)0x0;
    }
    piVar3 = (int *)(*(long *)(piVar3 + 0x22) + (ulong)(uint)piVar4[1] * 0x14);
    if (*piVar3 != *piVar4) {
      piVar3 = (int *)0x0;
    }
    return piVar3;
  }
  return piVar3;
}



/* Entry: 10b8dcd08; end: 10b8dcd47;  */

int * FUN_10b8dcd08(long param_1,int *param_2)

{
  int *piVar1;
  
  if ((ulong)((*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) / 0x14) <=
      (ulong)(uint)param_2[1]) {
    return (int *)0x0;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x88) + (ulong)(uint)param_2[1] * 0x14);
  if (*piVar1 != *param_2) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



/* Entry: 10b8dcd48; end: 10b8dcd87;  */

void FUN_10b8dcd48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10b8dcd08();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 0xc);
    *param_1 = uVar1;
  }
  *(bool *)(param_1 + 2) = param_2 != 0;
  return;
}



/* Entry: 10b8dcd88; end: 10b8dcd93;  */

void FUN_10b8dcd88(void)

{
  return;
}



/* Entry: 10b8dcd94; end: 10b8dcdc3;  */

undefined8 FUN_10b8dcd94(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b8dcdc4(&uStack_28);
  return param_1;
}



/* Entry: 10b8dcdc4; end: 10b8dcddb;  */

void FUN_10b8dcdc4(undefined8 *param_1)

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



/* Entry: 10b8dcddc; end: 10b8dce47;  */

void FUN_10b8dcddc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8dce48(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x28;
    }
    __ZdlPv();
    func_0x00010b8de0e4();
  }
  return;
}



/* Entry: 10b8dce48; end: 10b8dce6f;  */

undefined8 FUN_10b8dce48(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001080e0bc0(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8dce70; end: 10b8dcedb;  */

void FUN_10b8dce70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8dcedc(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    func_0x00010b8de0e4();
  }
  return;
}



/* Entry: 10b8dcedc; end: 10b8dcfdf;  */

undefined8 FUN_10b8dcedc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001080e4278(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8dcfe0; end: 10b8dcfeb;  */

undefined8 * FUN_10b8dcfe0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)param_1 = 0;
  func_0x0001080e01a8((undefined4 *)((long)param_1 + 4));
  return param_1;
}



/* Entry: 10b8dcfec; end: 10b8dd03b;  */

ulong FUN_10b8dcfec(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 < 0xccccccccccccccd) {
    uVar3 = (param_1[2] - *param_1) / 0x14;
    uVar2 = uVar3 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x666666666666665 < uVar3) {
      uVar2 = 0xccccccccccccccc;
    }
    return uVar2;
  }
  FUN_10b8dd0c4();
  func_0x00010b8de214();
  uVar3 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x14) * 0x14;
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 10b8dd03c; end: 10b8dd0c3;  */

void FUN_10b8dd03c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b8de214();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x14) * 0x14;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b8dd0c4; end: 10b8dd0cf;  */

long * FUN_10b8dd0c4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8dd11c();
  }
  lVar1 = param_4 + param_3 * 0x14;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x14;
  return param_1;
}



/* Entry: 10b8dd0d0; end: 10b8dd13f;  */

long * FUN_10b8dd0d0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8dd11c();
  }
  lVar1 = param_4 + param_3 * 0x14;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x14;
  return param_1;
}



/* Entry: 10b8dd140; end: 10b8dd167;  */

long * FUN_10b8dd140(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xccccccccccccccd) {
    plVar1 = (long *)(param_2 * 0x14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_10b8dd194();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8dd168; end: 10b8dd193;  */

long * FUN_10b8dd168(long *param_1)

{
  FUN_10b8dd194();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8dd194; end: 10b8dd1b7;  */

void FUN_10b8dd194(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x14;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b8dd1b8; end: 10b8dd1db;  */

undefined8 FUN_10b8dd1b8(undefined8 param_1)

{
  FUN_10b8dd1dc(param_1,0);
  return param_1;
}



/* Entry: 10b8dd1dc; end: 10b8dd1f3;  */

void FUN_10b8dd1dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b906e74(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8dd1f4; end: 10b8dd20f;  */

void FUN_10b8dd1f4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b906e74(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8dd210; end: 10b8dd29b;  */

undefined8 * FUN_10b8dd210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    func_0x0001080e0ad0(param_1);
  }
  return param_1;
}



/* Entry: 10b8dd29c; end: 10b8dd2bf;  */

void FUN_10b8dd29c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b8dd360(&lStack_18);
  return;
}



/* Entry: 10b8dd2c0; end: 10b8dd35f;  */

bool FUN_10b8dd2c0(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x20) == lVar7) goto LAB_10b8dd354;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b8dd354:
  return uVar5 != 0;
}



/* Entry: 10b8dd360; end: 10b8dd37b;  */

void FUN_10b8dd360(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b8de0cc(param_1,*param_2);
  return;
}



/* Entry: 10b8dd37c; end: 10b8dd3f7;  */

void FUN_10b8dd37c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  long *unaff_x20;
  byte unaff_w24;
  
  uVar2 = param_2;
  func_0x00010b8de08c();
  FUN_10b8dd29c();
  func_0x00010b8de220();
  FUN_10b8dd3f8();
  if ((uVar2 & 1) != 0) {
    FUN_10b8dd78c(unaff_x20[1] + param_1 * 0x20,param_2);
    *(byte *)(*unaff_x20 + param_1) = unaff_w24 & 0x7f;
    func_0x00010b8dde18();
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_1;
  unaff_x19[1] = lVar1 + param_1 * 0x20;
  *(char *)(unaff_x19 + 2) = (char)uVar2;
  return;
}



/* Entry: 10b8dd3f8; end: 10b8dd48f;  */

undefined1  [16] FUN_10b8dd3f8(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010b8ddf20();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x12 + uVar4);
    for (uVar6 = (uVar5 ^ extraout_x11) + extraout_x14 & (uVar5 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar2 * 0x20) == extraout_x13) {
        uVar1 = 0;
        goto LAB_10b8dd470;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b8dd490();
  uVar1 = 1;
  uVar2 = param_1;
LAB_10b8dd470:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 10b8dd490; end: 10b8dd517;  */

void FUN_10b8dd490(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8ddff8();
  FUN_10b8dd518();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8dd548();
      }
      else {
        func_0x00010b8dd5e0();
      }
      func_0x00010b8de200();
      FUN_10b8dd518();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8ddf70(lVar1);
  return;
}



/* Entry: 10b8dd518; end: 10b8dd547;  */

ulong FUN_10b8dd518(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8dd548; end: 10b8dd6f7;  */

void FUN_10b8dd548(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b8de0fc();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x20;
  __Znwm(lVar3);
  func_0x00010b8de04c(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b8de114();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8de1d8(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b8dd6f8(unaff_x21);
      func_0x00010b8de138();
      FUN_10b8dd518();
      func_0x00010b8ddeb0();
      FUN_10b8dd714(extraout_x8_01 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8dd6f8; end: 10b8dd713;  */

void FUN_10b8dd6f8(undefined8 *param_1)

{
  func_0x00010b8de0cc(param_1,*param_1);
  return;
}



/* Entry: 10b8dd714; end: 10b8dd78b;  */

undefined1 * FUN_10b8dd714(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  puVar2 = param_2;
  func_0x00010b8dddd0();
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  *puVar2 = 0;
  param_1[2] = puVar2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(puVar2 + 3);
  puVar2[1] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001080e3e58(&uStack_30);
  param_2[2] = uStack_30;
  *(undefined1 *)(param_2 + 3) = 0;
  func_0x00010b8ddd90(uStack_28);
  if ((bool)in_ZR) {
    func_0x0001080e4278(param_2 + 1);
    func_0x00010007e5d0(param_2);
    func_0x0001003a8cb8();
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_10b8dd7b0();
  return (undefined1 *)puVar1;
}



/* Entry: 10b8dd78c; end: 10b8dd7af;  */

void FUN_10b8dd78c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b8dd7b0(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10b8dd7b0; end: 10b8dd84b;  */

long * FUN_10b8dd7b0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)*param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  func_0x0001080e3e30();
  return param_1;
}



/* Entry: 10b8dd84c; end: 10b8dd86f;  */

void FUN_10b8dd84c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b8dd914(&lStack_18);
  return;
}



/* Entry: 10b8dd870; end: 10b8dd913;  */

bool FUN_10b8dd870(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar8 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3;
      *param_4 = uVar1;
      if (*(long *)(param_1[1] + uVar1 * 0x28) == lVar8) goto LAB_10b8dd908;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b8dd908:
  return uVar6 != 0;
}



/* Entry: 10b8dd914; end: 10b8dd92f;  */

void FUN_10b8dd914(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b8de0cc(param_1,*param_2);
  return;
}


