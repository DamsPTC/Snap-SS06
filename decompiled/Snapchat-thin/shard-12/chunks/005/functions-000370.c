/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10922e244; end: 10922e253;  */

undefined8 FUN_10922e244(void)

{
  return 0;
}



/* Entry: 10922e254; end: 10922e303;  */

undefined8 * FUN_10922e254(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000109fc90e4();
  *puVar1 = &PTR_DAT_110ae29d0;
  puVar1[0x1a] = puVar1 + 0x12;
  puVar1[0x1c] = 0x40;
  puVar1[0x1b] = 0;
  puVar1[0x3d] = puVar1 + 0x1d;
  puVar1[0x3f] = 0x40;
  puVar1[0x3e] = 0;
  puVar1[0x40] = 0;
  *(undefined2 *)(puVar1 + 0x41) = 0;
  func_0x000109fca750();
  return param_1;
}



/* Entry: 10922e304; end: 10922e307;  */

undefined8 * FUN_10922e304(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae29d0;
  param_1[0x3e] = 0;
  if ((undefined8 *)param_1[0x3d] != param_1 + 0x1d) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x3d],4);
  }
  param_1[0x1b] = 0;
  if ((undefined8 *)param_1[0x1a] != param_1 + 0x12) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x1a],1);
  }
  *param_1 = &PTR_FUN_110ae2a10;
  param_1[0x10] = 0;
  if ((undefined8 *)param_1[0xf] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0xf],4);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922e308; end: 10922e31b;  */

void FUN_10922e308(void)

{
  FUN_10922e46c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922e31c; end: 10922e333;  */

long FUN_10922e31c(long param_1)

{
  return *(long *)(param_1 + 0x80) * 0x14;
}



/* Entry: 10922e334; end: 10922e453;  */

undefined8 * FUN_10922e334(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2a10;
  param_1[0x10] = 0;
  if ((undefined8 *)param_1[0xf] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0xf],4);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922e454; end: 10922e457;  */

undefined8 * FUN_10922e454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2a10;
  param_1[0x10] = 0;
  if ((undefined8 *)param_1[0xf] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0xf],4);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922e458; end: 10922e46b;  */

void FUN_10922e458(void)

{
  FUN_10922e334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922e46c; end: 10922e4cf;  */

undefined8 * FUN_10922e46c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae29d0;
  param_1[0x3e] = 0;
  if ((undefined8 *)param_1[0x3d] != param_1 + 0x1d) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x3d],4);
  }
  param_1[0x1b] = 0;
  if ((undefined8 *)param_1[0x1a] != param_1 + 0x12) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0x1a],1);
  }
  *param_1 = &PTR_FUN_110ae2a10;
  param_1[0x10] = 0;
  if ((undefined8 *)param_1[0xf] != param_1 + 5) {
    __ZdlPvSt11align_val_t((undefined8 *)param_1[0xf],4);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10922e4d0; end: 10922e60b;  */

undefined8 * FUN_10922e4d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  FUN_10922e60c();
  lVar3 = 0;
  *(undefined8 *)((long)puVar2 + 0x734) = 5;
  *(undefined8 *)((long)puVar2 + 0x154) = 0x400000004;
  *puVar2 = &PTR_FUN_110ae2a68;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11e] = puVar2;
  *(undefined4 *)(puVar2 + 0x11f) = 4;
  puVar2[0x11b] = &PTR_FUN_110ae2648;
  *(undefined1 *)((long)puVar2 + 0x4c) = 1;
  *(undefined2 *)(puVar2 + 0xfa) = 0x101;
  puVar2[0x23] = 0x2000000020;
  do {
    lVar1 = lVar3;
    FUN_10922e6d8();
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | (uint)lVar1;
    *(undefined4 *)((long)param_1 + lVar3 * 4 + 0x7d4) = 0x7f;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 9);
  lVar3 = 0x194;
  do {
    ((undefined8 *)((long)param_1 + lVar3))[1] = 0x100000001;
    *(undefined8 *)((long)param_1 + lVar3) = 0x100000000;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x704);
  puVar2 = (undefined8 *)0x14;
  __Znwm();
  lVar3 = 0;
  *(undefined4 *)(puVar2 + 2) = 0x20;
  puVar2[1] = 0x2700000004;
  *puVar2 = 0x200000001;
  do {
    *(undefined4 *)((long)param_1 + (ulong)*(byte *)((long)puVar2 + lVar3) * 0x10 + 0x194) = 0x3ef;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x14);
  __ZdlPv();
  return param_1;
}



/* Entry: 10922e60c; end: 10922e6d7;  */

undefined8 * FUN_10922e60c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b97ba0;
  _bzero(param_1 + 3,0x7e0);
  FUN_109264810(param_1 + 6);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[0x101] = param_2[2];
  param_1[0x100] = uVar3;
  param_1[0xff] = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  param_1[0x102] = param_2[1];
  *(undefined4 *)(param_1 + 0x103) = uVar1;
  param_1[0x104] = 0x32aaaba7;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0xffffffff;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  *param_1 = &PTR_FUN_110ae2bc0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x119] = param_1;
  *(undefined4 *)(param_1 + 0x11a) = 0x12;
  param_1[0x116] = &PTR_FUN_110ae2ce8;
  return param_1;
}



/* Entry: 10922e6d8; end: 10922e6fb;  */

undefined4 FUN_10922e6d8(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined4 *)(&UNK_10dfbcd38 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10922e6fc; end: 10922e733;  */

void FUN_10922e6fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae2bc0;
  if (param_1[0x118] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b97fe0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x104);
  lVar1 = param_1[0x110];
  __ZNSt3__15mutex6unlockEv(param_1 + 0x104);
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x102) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x103) < 6)) {
    func_0x000109fd19d0(param_1 + 0x102,5,2,&UNK_10f62e8ff,0x8f);
  }
  puStack_28 = param_1 + 0x113;
  func_0x000109fcb970(&puStack_28);
  func_0x00010924c278(param_1 + 0x112,0);
  func_0x00010924c250(param_1 + 0x111,0);
  func_0x000109fcb9e0(param_1 + 0x104);
  func_0x000109fc913c(param_1);
  return;
}



/* Entry: 10922e734; end: 10922e73b;  */

long FUN_10922e734(long param_1)

{
  return param_1 + 0x8d8;
}



/* Entry: 10922e73c; end: 10922e9d3;  */

/* WARNING: Removing unreachable block (ram,0x00010922e8d4) */
/* WARNING: Removing unreachable block (ram,0x00010922e8d8) */
/* WARNING: Removing unreachable block (ram,0x00010922e8e0) */
/* WARNING: Removing unreachable block (ram,0x00010922e8e8) */
/* WARNING: Removing unreachable block (ram,0x00010922e8ec) */

void FUN_10922e73c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_60;
  long *plStack_58;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0x18) != param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_10922d97c(&lStack_60,param_2);
  if (lStack_60 == 0) {
LAB_10922e928:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_10922e944;
  }
  lVar7 = *param_3;
  lVar6 = lVar7 + 0x48;
  plVar4 = param_3;
  FUN_109231a20();
  uVar5 = SUB84(plVar4,0);
  if (lVar6 == 0) {
    func_0x000109fcd53c(*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x888));
    lVar6 = lVar7 + 0x48;
    FUN_109231a20();
    uVar5 = SUB84(param_3,0);
    if (lVar6 == 0) goto LAB_10922e928;
  }
  plVar4 = plStack_58;
  lVar7 = lStack_60;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *param_1 = lVar6;
  plVar3 = (long *)0x38;
  __Znwm();
  plVar8 = plVar3 + 1;
  *plVar8 = 0;
  *plVar3 = (long)&PTR_FUN_110ae2dc0;
  plVar3[2] = 0;
  plVar3[3] = lVar6;
  plVar3[4] = lVar7;
  plVar3[5] = (long)plVar4;
  plVar3[6] = CONCAT44(0xffffffff,uVar5);
  param_1[1] = (long)plVar3;
  if (*(long *)(lVar6 + 0x10) == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
LAB_10922e8a0:
    do {
      lVar6 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  else if (*(long *)(*(long *)(lVar6 + 0x10) + 8) == -1) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long *)(lVar6 + 8) = lVar6;
    *(long **)(lVar6 + 0x10) = plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10922e8a0;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4,&PTR_DAT_110ae2e00);
  }
  param_2 = param_2 + 0x820;
  func_0x000109fcbf14(param_2,*param_1);
  *(int *)((long)plVar4 + 0x14) = (int)param_2;
LAB_10922e944:
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10922e9d4; end: 10922efbb;  */

void FUN_10922e9d4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *extraout_x8;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  uint *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lStack_140;
  long *plStack_138;
  undefined4 uStack_130;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 != 0) {
    uVar4 = *(uint *)(param_3 + 1);
    puVar20 = (uint *)(ulong)uVar4;
    unaff_x20 = param_2;
    unaff_x22 = param_3;
    if ((*(long **)(*param_3 + 0x18) == param_2 && uVar4 != 0) && *(uint *)(param_3 + 2) < 8) {
      puVar8 = (undefined8 *)0xd8;
      plVar10 = param_3;
      plStack_e0 = param_1;
      __Znwm();
      ppuStack_88 = &PTR_FUN_110ae2e20;
      pppuStack_70 = &ppuStack_88;
      puVar8[2] = 0;
      puVar8[3] = param_2;
      *(undefined4 *)(puVar8 + 4) = 0x18;
      lVar17 = *param_3;
      puVar8[6] = param_3[1];
      puVar8[5] = lVar17;
      lVar17 = param_3[2];
      *puVar8 = &PTR_FUN_110ae2eb0;
      puVar8[1] = 0;
      puVar8[7] = lVar17;
      puVar8[8] = param_2;
      puVar8[9] = param_2 + 0x102;
      puStack_e8 = puVar8 + 10;
      *puStack_e8 = 0x32aaaba7;
      plVar1 = puVar8 + 0x12;
      puVar16 = puVar8 + 0x15;
      puVar8[0x16] = 0;
      *puVar16 = 0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xe] = 0;
      puVar8[0xd] = 0;
      puVar8[0x10] = 0;
      puVar8[0xf] = 0;
      puVar8[0x12] = 0;
      puVar8[0x11] = 0;
      puVar8[0x14] = 0;
      puVar8[0x13] = 0;
      puVar8[0x18] = 0;
      puVar8[0x17] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x19] = 0;
      puVar9 = puVar20;
      plStack_d8 = param_2;
      puStack_d0 = puVar16;
      plStack_90 = plVar1;
      plStack_80 = param_2;
      FUN_109232098();
      puStack_b0 = (undefined8 *)puVar8[0x12];
      puVar3 = (undefined8 *)puVar8[0x13];
      puVar21 = (undefined8 *)((long)puVar9 + ((long)puStack_b0 - (long)puVar3));
      puVar11 = puStack_b0;
      puVar14 = puVar21;
      if (puVar3 != puStack_b0) {
        do {
          uVar18 = *puVar11;
          *puVar11 = 0;
          *puVar14 = uVar18;
          puVar14[1] = puVar11[1];
          puVar11 = puVar11 + 2;
          puVar14 = puVar14 + 2;
        } while (puVar11 != puVar3);
        do {
          FUN_109232118(puStack_b0);
          puStack_b0 = puStack_b0 + 2;
        } while (puStack_b0 != puVar3);
        puStack_b0 = (undefined8 *)*plVar1;
      }
      puVar8[0x12] = puVar21;
      puVar8[0x13] = puVar9;
      uStack_98 = puVar8[0x14];
      puVar8[0x14] = puVar9 + (long)plVar10 * 4;
      plStack_a8 = puStack_b0;
      puStack_a0 = puStack_b0;
      func_0x0001092320cc(&puStack_b0);
      func_0x0001056c5718(puVar16,puVar20);
      func_0x0001056c5718(puVar8 + 0x18);
      uStack_b4 = 0;
      do {
        if (pppuStack_70 == (undefined ***)0x0) {
          func_0x000104c501e4();
LAB_10922eecc:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10922eed0);
          (*pcVar7)();
        }
        (*(code *)(*pppuStack_70)[6])(&lStack_c8);
        lVar17 = lStack_c8;
        lStack_c0 = -1;
        plVar10 = (long *)puVar8[0x13];
        if (plVar10 < (long *)puVar8[0x14]) {
          lStack_c8 = 0;
          *plVar10 = lVar17;
          plVar10[1] = -1;
          plVar10 = plVar10 + 2;
        }
        else {
          lVar17 = (long)plVar10 - *plVar1;
          uVar2 = (lVar17 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_109232084();
            goto LAB_10922eecc;
          }
          uVar15 = (long)puVar8[0x14] - *plVar1;
          uVar19 = (long)uVar15 >> 3;
          if (uVar19 <= uVar2) {
            uVar19 = uVar2;
          }
          if (0x7fffffffffffffef < uVar15) {
            uVar19 = 0xfffffffffffffff;
          }
          plStack_90 = plVar1;
          FUN_109232098();
          lVar22 = lStack_c8;
          puVar21 = (undefined8 *)puVar8[0x12];
          puVar14 = (undefined8 *)puVar8[0x13];
          plVar10 = (long *)(uVar19 + lVar17);
          lStack_c8 = 0;
          *plVar10 = lVar22;
          plVar10[1] = lStack_c0;
          puVar3 = (undefined8 *)((long)plVar10 + ((long)puVar21 - (long)puVar14));
          puVar11 = puVar21;
          puVar16 = puVar3;
          if ((long)puVar21 - (long)puVar14 != 0) {
            do {
              uVar18 = *puVar11;
              *puVar11 = 0;
              *puVar16 = uVar18;
              puVar16[1] = puVar11[1];
              puVar11 = puVar11 + 2;
              puVar16 = puVar16 + 2;
            } while (puVar11 != puVar14);
            do {
              FUN_109232118(puVar21);
              puVar21 = puVar21 + 2;
            } while (puVar21 != puVar14);
            puVar21 = (undefined8 *)*plVar1;
          }
          plVar10 = plVar10 + 2;
          puVar8[0x12] = puVar3;
          puVar8[0x13] = plVar10;
          uStack_98 = puVar8[0x14];
          puVar8[0x14] = uVar19 + (long)puVar20 * 0x10;
          puStack_b0 = puVar21;
          plStack_a8 = puVar21;
          puStack_a0 = puVar21;
          func_0x0001092320cc(&puStack_b0);
          puVar16 = puStack_d0;
        }
        lVar17 = lStack_c8;
        puVar8[0x13] = plVar10;
        lStack_c8 = 0;
        if (lVar17 != 0) {
          func_0x00010922d820();
          __ZdlPv();
        }
        puVar20 = &uStack_b4;
        FUN_109231afc(puVar16);
        uStack_b4 = uStack_b4 + 1;
      } while (uStack_b4 < uVar4);
      FUN_1092315a8(&puStack_b0,plStack_d8 + 1);
      unaff_x23 = plStack_e0;
      puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,0xffffffff);
      *plStack_e0 = (long)puVar8;
      unaff_x22 = (long *)0x38;
      __Znwm();
      plVar1 = plStack_a8;
      puVar11 = puStack_b0;
      unaff_x20 = unaff_x22 + 1;
      unaff_x22[2] = 0;
      *unaff_x20 = 0;
      puStack_b0 = (undefined8 *)0x0;
      plStack_a8 = (long *)0x0;
      *unaff_x22 = (long)&PTR_FUN_110ae2f10;
      unaff_x22[3] = (long)puVar8;
      unaff_x22[5] = (long)plVar1;
      unaff_x22[4] = (long)puVar11;
      unaff_x22[6] = 0xffffffff;
      unaff_x23[1] = (long)unaff_x22;
      if (puVar8[2] == 0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
          if (bVar6) {
            *unaff_x20 = *unaff_x20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar1 = unaff_x22 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar8[1] = puVar8;
        puVar8[2] = unaff_x22;
LAB_10922ed9c:
        do {
          lVar17 = *unaff_x20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
          if (bVar6) {
            *unaff_x20 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
        }
      }
      else if (*(long *)(puVar8[2] + 8) == -1) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
          if (bVar6) {
            *unaff_x20 = *unaff_x20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plVar1 = unaff_x22 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar8[1] = puVar8;
        puVar8[2] = unaff_x22;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10922ed9c;
      }
      unaff_x19 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar17 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
        }
      }
      if (pppuStack_70 == &ppuStack_88) {
        lVar17 = 0x20;
LAB_10922ee20:
        (**(code **)((long)*pppuStack_70 + lVar17))();
      }
      else if (pppuStack_70 != (undefined ***)0x0) {
        lVar17 = 0x28;
        goto LAB_10922ee20;
      }
      param_2 = plStack_d8;
      param_3 = unaff_x23;
      FUN_109231df0();
      goto LAB_10922ee38;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10922ee38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092323ec(unaff_x23);
  plVar10 = param_2;
  __Unwind_Resume();
  pcStack_f8 = FUN_10922efbc;
  puVar11 = (undefined8 *)0x60;
  plStack_120 = unaff_x22;
  plStack_118 = param_2;
  plStack_110 = unaff_x20;
  plStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  __Znwm();
  lVar17 = *param_3;
  lVar23 = param_3[3];
  lVar22 = param_3[2];
  *(long *)((long)puVar11 + 0x2c) = param_3[1];
  *(long *)((long)puVar11 + 0x24) = lVar17;
  puVar11[2] = 0;
  puVar11[3] = plVar10;
  *(undefined4 *)(puVar11 + 4) = 0xb;
  *(long *)((long)puVar11 + 0x3c) = lVar23;
  *(long *)((long)puVar11 + 0x34) = lVar22;
  lVar17 = param_3[4];
  *(long *)((long)puVar11 + 0x4c) = param_3[5];
  *(long *)((long)puVar11 + 0x44) = lVar17;
  *(long *)((long)puVar11 + 0x54) = param_3[6];
  *puVar11 = &PTR_FUN_110ae3950;
  puVar11[1] = 0;
  FUN_1092315a8(&lStack_140,plVar10 + 1);
  uStack_130 = 0xffffffff;
  *extraout_x8 = puVar11;
  plVar12 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_138;
  lVar17 = lStack_140;
  plVar13 = plVar12 + 1;
  plVar12[2] = 0;
  *plVar13 = 0;
  lStack_140 = 0;
  plStack_138 = (long *)0x0;
  *plVar12 = (long)&PTR_FUN_110ae2f70;
  plVar12[3] = (long)puVar11;
  plVar12[5] = (long)plVar1;
  plVar12[4] = lVar17;
  plVar12[6] = 0xffffffff;
  extraout_x8[1] = plVar12;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = *plVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar1 = plVar12 + 2;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar11[1] = puVar11;
  puVar11[2] = plVar12;
  do {
    lVar17 = *plVar13;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar17 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar17 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
  plVar1 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar12 = plStack_138 + 1;
    do {
      lVar17 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109232444(plVar10,extraout_x8);
  return;
}



/* Entry: 10922efbc; end: 10922f17f;  */

void FUN_10922efbc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  uVar8 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined8 *)((long)puVar4 + 0x2c) = param_3[1];
  *(undefined8 *)((long)puVar4 + 0x24) = uVar8;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 0xb;
  *(undefined8 *)((long)puVar4 + 0x3c) = uVar10;
  *(undefined8 *)((long)puVar4 + 0x34) = uVar9;
  uVar8 = param_3[4];
  *(undefined8 *)((long)puVar4 + 0x4c) = param_3[5];
  *(undefined8 *)((long)puVar4 + 0x44) = uVar8;
  *(undefined8 *)((long)puVar4 + 0x54) = param_3[6];
  *puVar4 = &PTR_FUN_110ae3950;
  puVar4[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae2f70;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109232444(param_2,param_1);
  return;
}



/* Entry: 10922f180; end: 10922f323;  */

void FUN_10922f180(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 6;
  *puVar4 = &PTR_FUN_110ae39c0;
  puVar4[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae2fd0;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_1092325ec(param_2,param_1);
  return;
}



/* Entry: 10922f324; end: 10922f4df;  */

void FUN_10922f324(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 5;
  puVar4[5] = 0x32aaaba7;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  *puVar4 = &PTR_DAT_110ae3600;
  puVar4[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3030;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109232794(param_2,param_1);
  return;
}



/* Entry: 10922f4e0; end: 10922f693;  */

void FUN_10922f4e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 2;
  uVar8 = *param_3;
  puVar4[6] = param_3[1];
  puVar4[5] = uVar8;
  *puVar4 = &PTR_DAT_110ae24a8;
  puVar4[1] = 0;
  puVar4[7] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3090;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10923293c(param_2,param_1);
  return;
}



/* Entry: 10922f694; end: 10922f7e3;  */

void FUN_10922f694(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  undefined1 auVar15 [16];
  
  puVar10 = (undefined8 *)0xa0;
  __Znwm();
  puVar10[2] = 0;
  puVar10[3] = param_2;
  *(undefined4 *)(puVar10 + 4) = 1;
  uVar6 = *param_3;
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(undefined8 *)((long)puVar10 + 0x2c) = param_3[1];
  *(undefined8 *)((long)puVar10 + 0x24) = uVar6;
  *(undefined8 *)((long)puVar10 + 0x3c) = uVar9;
  *(undefined8 *)((long)puVar10 + 0x34) = uVar8;
  uVar6 = param_3[4];
  *(undefined8 *)((long)puVar10 + 0x4c) = param_3[5];
  *(undefined8 *)((long)puVar10 + 0x44) = uVar6;
  uVar2 = *(undefined4 *)((long)param_3 + 0x1c);
  *(undefined4 *)((long)puVar10 + 0x54) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(puVar10 + 0xb) = uVar2;
  uVar12 = *(ulong *)((long)param_3 + 0xc);
  iVar3 = *(int *)(param_3 + 2);
  auVar7[8] = (char)(uVar12 >> 0x20);
  auVar7._0_8_ = uVar12;
  auVar7[9] = (char)(uVar12 >> 0x28);
  auVar7[10] = (char)(uVar12 >> 0x30);
  auVar7[0xb] = (char)(uVar12 >> 0x38);
  auVar13._8_4_ = (int)uVar12;
  auVar13._0_8_ = uVar12 >> 0x20;
  auVar13._12_4_ = auVar7._8_4_;
  auVar13 = NEON_rev64(auVar13,4);
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = auVar13._4_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._8_4_ = auVar13._12_4_;
  auVar15._12_4_ = auVar13._12_4_;
  *(ulong *)((long)puVar10 + 100) = auVar15._8_8_ & 0xffffffff;
  *(ulong *)((long)puVar10 + 0x5c) = (ulong)auVar13._4_4_;
  uVar2 = *(undefined4 *)(param_3 + 1);
  if (iVar3 != 2) {
    uVar2 = 1;
  }
  *(undefined4 *)((long)puVar10 + 0x6c) = uVar2;
  puVar10[0xf] = 0x500000004;
  puVar10[0xe] = 0x300000002;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x10] = 0;
  *puVar10 = &PTR_DAT_110ae3b40;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 0x13) = 1;
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109232b44(param_1,puVar10,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109232ae4(param_2,param_1);
  return;
}



/* Entry: 10922f7e4; end: 10922f91f;  */

void FUN_10922f7e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  puVar4[5] = 0;
  puVar4[4] = 1;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0x500000004;
  *(undefined8 *)((long)puVar4 + 0x44) = 0x300000002;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 6) = 1;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 1;
  *(undefined4 *)((long)puVar4 + 0x6c) = 1;
  puVar4[0xf] = 0x500000004;
  puVar4[0xe] = 0x300000002;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110ae3b40;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 0x13) = 1;
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109232b44(param_1,puVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109232ae4(param_2,param_1);
  return;
}



/* Entry: 10922f920; end: 10922fa7b;  */

void FUN_10922f920(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  undefined1 auVar16 [16];
  
  lVar12 = *(long *)(param_3 + 0x28);
  puVar11 = (undefined8 *)0xa0;
  __Znwm();
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = param_2;
  *(undefined4 *)(puVar11 + 4) = 1;
  uVar9 = *(undefined8 *)(lVar12 + 0x24);
  uVar10 = *(undefined8 *)(lVar12 + 0x2c);
  uVar7 = *(undefined8 *)(lVar12 + 0x3c);
  uVar6 = *(undefined8 *)(lVar12 + 0x34);
  uVar18 = *(undefined8 *)(lVar12 + 0x4c);
  uVar17 = *(undefined8 *)(lVar12 + 0x44);
  *(undefined4 *)((long)puVar11 + 0x54) = *(undefined4 *)(lVar12 + 0x54);
  *(undefined8 *)((long)puVar11 + 0x4c) = uVar18;
  *(undefined8 *)((long)puVar11 + 0x44) = uVar17;
  *(undefined8 *)((long)puVar11 + 0x3c) = uVar7;
  *(undefined8 *)((long)puVar11 + 0x34) = uVar6;
  *(undefined8 *)((long)puVar11 + 0x2c) = uVar10;
  *(undefined8 *)((long)puVar11 + 0x24) = uVar9;
  *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(lVar12 + 0x40);
  uVar13 = *(ulong *)(lVar12 + 0x30);
  iVar2 = *(int *)(lVar12 + 0x34);
  auVar8[8] = (char)(uVar13 >> 0x20);
  auVar8._0_8_ = uVar13;
  auVar8[9] = (char)(uVar13 >> 0x28);
  auVar8[10] = (char)(uVar13 >> 0x30);
  auVar8[0xb] = (char)(uVar13 >> 0x38);
  auVar14._8_4_ = (int)uVar13;
  auVar14._0_8_ = uVar13 >> 0x20;
  auVar14._12_4_ = auVar8._8_4_;
  auVar14 = NEON_rev64(auVar14,4);
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = auVar14._4_4_;
  auVar16._0_8_ = auVar15._0_8_;
  auVar16._8_4_ = auVar14._12_4_;
  auVar16._12_4_ = auVar14._12_4_;
  *(ulong *)((long)puVar11 + 100) = auVar16._8_8_ & 0xffffffff;
  *(ulong *)((long)puVar11 + 0x5c) = (ulong)auVar14._4_4_;
  uVar3 = *(undefined4 *)(lVar12 + 0x2c);
  if (iVar2 != 2) {
    uVar3 = 1;
  }
  *(undefined4 *)((long)puVar11 + 0x6c) = uVar3;
  puVar11[0xf] = 0x500000004;
  puVar11[0xe] = 0x300000002;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0x10] = 0;
  *puVar11 = &PTR_DAT_110ae3b40;
  *(undefined1 *)(puVar11 + 0x13) = 0;
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109232b44(param_1,puVar11,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109232ae4(param_2,param_1);
  return;
}



/* Entry: 10922fa7c; end: 10922fb63;  */

void FUN_10922fa7c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0x868;
  __Znwm(0x868);
  func_0x000109fc97ec();
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109232e8c(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109232e2c(param_2,param_1);
  return;
}



/* Entry: 10922fb64; end: 10922fd67;  */

void FUN_10922fb64(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar4 = (undefined8 *)0x298;
  __Znwm();
  func_0x000109fc919c();
  *puVar4 = &PTR_DAT_110ae3680;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae31b0;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  if (puVar4[2] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
  }
  else {
    if (*(long *)(puVar4[2] + 8) != -1) goto LAB_10922fca0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10922fca0:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109233178(param_2,param_1);
  return;
}



/* Entry: 10922fd68; end: 10922ff13;  */

void FUN_10922fd68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 0xc;
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined1 *)(puVar4 + 8) = 0;
  *puVar4 = &PTR_DAT_110ae3a30;
  puVar4[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3210;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109233320(param_2,param_1);
  return;
}



/* Entry: 10922ff14; end: 10923010b;  */

void FUN_10922ff14(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  lVar4 = 0x108;
  __Znwm();
  FUN_109234dec();
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = lVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3270;
  plVar5[3] = lVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = (long)plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  else {
    if (*(long *)(*(long *)(lVar4 + 0x10) + 8) != -1) goto LAB_109230044;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    *(long *)(lVar4 + 8) = lVar4;
    *(long **)(lVar4 + 0x10) = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109230044:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_1092334c8(param_2,param_1);
  return;
}



/* Entry: 10923010c; end: 10923030f;  */

void FUN_10923010c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar4 = (undefined8 *)0x210;
  __Znwm();
  FUN_10922e254();
  *puVar4 = &PTR_FUN_110ae2960;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae32d0;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  if (puVar4[2] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
  }
  else {
    if (*(long *)(puVar4[2] + 8) != -1) goto LAB_109230248;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109230248:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109233670(param_2,param_1);
  return;
}



/* Entry: 109230310; end: 1092304cb;  */

void FUN_109230310(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 0x10;
  uVar8 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined8 *)((long)puVar4 + 0x2c) = param_3[1];
  *(undefined8 *)((long)puVar4 + 0x24) = uVar8;
  *(undefined8 *)((long)puVar4 + 0x3c) = uVar10;
  *(undefined8 *)((long)puVar4 + 0x34) = uVar9;
  uVar8 = *(undefined8 *)((long)param_3 + 0x1c);
  puVar4[9] = *(undefined8 *)((long)param_3 + 0x24);
  puVar4[8] = uVar8;
  *puVar4 = &PTR_FUN_110ae2840;
  puVar4[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar7 = lStack_50;
  plVar6 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar6 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3330;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar7;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
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
  puVar4[1] = puVar4;
  puVar4[2] = plVar5;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109233818(param_2,param_1);
  return;
}



/* Entry: 1092304cc; end: 1092306d7;  */

void FUN_1092304cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  func_0x000109fc901c();
  *puVar4 = &PTR_FUN_110ae28b0;
  puVar4[8] = param_2 + 0x810;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3390;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  if (puVar4[2] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
  }
  else {
    if (*(long *)(puVar4[2] + 8) != -1) goto LAB_109230610;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109230610:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_1092339c0(param_2,param_1);
  return;
}



/* Entry: 1092306d8; end: 1092307bf;  */

void FUN_1092306d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  uVar4 = 0x98;
  __Znwm(0x98);
  func_0x000109fcc6bc();
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_109233bc8(param_1,uVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109233b68(param_2,param_1);
  return;
}



/* Entry: 1092307c0; end: 109230967;  */

void FUN_1092307c0(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  
  uVar2 = *param_3;
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[2] = 0;
  puVar5[3] = param_2;
  *(undefined4 *)(puVar5 + 4) = 0x11;
  *(undefined4 *)((long)puVar5 + 0x24) = uVar2;
  *puVar5 = &PTR_FUN_110ae36f0;
  puVar5[1] = 0;
  FUN_1092315a8(&lStack_50,param_2 + 8);
  uStack_40 = 0xffffffff;
  *param_1 = puVar5;
  plVar6 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_48;
  lVar8 = lStack_50;
  plVar7 = plVar6 + 1;
  plVar6[2] = 0;
  *plVar7 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  *plVar6 = (long)&PTR_FUN_110ae3450;
  plVar6[3] = (long)puVar5;
  plVar6[5] = (long)plVar1;
  plVar6[4] = lVar8;
  plVar6[6] = 0xffffffff;
  param_1[1] = plVar6;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar1 = plVar6 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar5[1] = puVar5;
  puVar5[2] = plVar6;
  do {
    lVar8 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109233eb4(param_2,param_1);
  return;
}



/* Entry: 109230968; end: 109230cdb;  */

void FUN_109230968(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  if ((((*(long *)(param_3 + 0x428) != 0) &&
       (uStack_60 = *(ulong *)(*(long *)(param_3 + 0x428) + 0x6d0),
       uStack_60 <= *(uint *)(param_3 + 0x430))) && ((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0)) &&
     (*(uint *)(param_2 + 0x818) < 6)) {
    FUN_109231264(param_2 + 0x810,5,0x400,&UNK_10f55e1af,0x59,param_3 + 0x430,&uStack_60);
  }
  uVar2 = *(uint *)(param_3 + 0x2d4);
  uVar3 = *(uint *)(param_3 + 0x2d8);
  if (uVar3 - 1 < 0x40 && (uVar3 & uVar3 - 1) == 0) {
    uVar4 = *(uint *)(param_2 + 0x48);
    uVar7 = (ulong)uVar2;
    FUN_10922e6d8();
    if (8 < uVar2) goto LAB_109230a2c;
    if (uVar2 != 0) {
      if (((uint)uVar7 & (uVar4 ^ 0xffffffff)) != 0) goto LAB_109230a2c;
      if (uVar3 == 1) {
        bVar6 = true;
      }
      else {
        bVar6 = (*(uint *)(param_2 + (ulong)uVar2 * 4 + 0x7d4) & uVar3) != 0;
      }
      goto LAB_109230a30;
    }
    bVar6 = true;
LAB_109230a5c:
    uVar11 = 1;
  }
  else {
LAB_109230a2c:
    bVar6 = false;
LAB_109230a30:
    if (uVar2 - 3 < 3) {
      uVar11 = 2;
    }
    else {
      if (2 < uVar2 - 6) goto LAB_109230a5c;
      uVar11 = 4;
    }
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar11);
  if (uVar2 - 1 < 8) {
    uStack_64 = *(undefined4 *)(&UNK_10dfbcd58 + (ulong)(uVar2 - 1) * 4);
  }
  else {
    uStack_64 = 1;
  }
  uStack_6c = *(undefined4 *)(param_2 + 0x48);
  uStack_70 = *(undefined4 *)(param_3 + 0x2d8);
  uStack_68 = uVar2;
  if (!bVar6) {
    if (((*(byte *)(param_2 + 0x811) >> 2 & 1) != 0) && (*(uint *)(param_2 + 0x818) < 6)) {
      FUN_1092313a4(param_2 + 0x810,5,0x400,&UNK_10f55e209,0x9c,&uStack_60,&uStack_64,&uStack_68,
                    &uStack_6c,&uStack_70);
    }
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar8 = (undefined8 *)0x590;
  __Znwm();
  func_0x000109fc9df8();
  *puVar8 = &PTR_DAT_110ae38f0;
  FUN_1092315a8(&uStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar8;
  plVar9 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  uVar7 = uStack_60;
  plVar12 = plVar9 + 1;
  plVar9[2] = 0;
  *plVar12 = 0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar9 = (long)&PTR_FUN_110ae34b0;
  plVar9[3] = (long)puVar8;
  plVar9[5] = (long)plVar1;
  plVar9[4] = uVar7;
  plVar9[6] = 0xffffffff;
  param_1[1] = plVar9;
  if (puVar8[2] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar8[1] = puVar8;
    puVar8[2] = plVar9;
  }
  else {
    if (*(long *)(puVar8[2] + 8) != -1) goto LAB_109230bb0;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar8[1] = puVar8;
    puVar8[2] = plVar9;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar10 = *plVar12;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar6) {
      *plVar12 = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_109230bb0:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10923405c(param_2,param_1);
  return;
}



/* Entry: 109230cdc; end: 109230edf;  */

void FUN_109230cdc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  
  puVar4 = (undefined8 *)0xb8;
  __Znwm();
  func_0x000109fc8ec0();
  *puVar4 = &PTR_DAT_110ae27e0;
  FUN_1092315a8(&lStack_60,param_2 + 8);
  uStack_50 = 0xffffffff;
  *param_1 = puVar4;
  plVar5 = (long *)0x38;
  __Znwm();
  plVar1 = plStack_58;
  lVar6 = lStack_60;
  plVar7 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar7 = 0;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  *plVar5 = (long)&PTR_FUN_110ae3510;
  plVar5[3] = (long)puVar4;
  plVar5[5] = (long)plVar1;
  plVar5[4] = lVar6;
  plVar5[6] = 0xffffffff;
  param_1[1] = plVar5;
  if (puVar4[2] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
  }
  else {
    if (*(long *)(puVar4[2] + 8) != -1) goto LAB_109230e18;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
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
    puVar4[1] = puVar4;
    puVar4[2] = plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_109230e18:
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_109234204(param_2,param_1);
  return;
}



/* Entry: 109230ee0; end: 109230efb;  */

void FUN_109230ee0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109230efc; end: 109230f57;  */

void FUN_109230efc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  if (param_1[0x11d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110ae2bc0;
  if (param_1[0x118] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b97fe0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x104);
  lVar1 = param_1[0x110];
  __ZNSt3__15mutex6unlockEv(param_1 + 0x104);
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x102) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x103) < 6)) {
    func_0x000109fd19d0(param_1 + 0x102,5,2,&UNK_10f62e8ff,0x8f);
  }
  puStack_28 = param_1 + 0x113;
  func_0x000109fcb970(&puStack_28);
  func_0x00010924c278(param_1 + 0x112,0);
  func_0x00010924c250(param_1 + 0x111,0);
  func_0x000109fcb9e0(param_1 + 0x104);
  func_0x000109fc913c(param_1);
  return;
}



/* Entry: 109230f58; end: 109230f5f;  */

long FUN_109230f58(long param_1)

{
  return param_1 + 0x8b0;
}



/* Entry: 109230f60; end: 109230fdf;  */

void FUN_109230f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_109231460(param_1,&uStack_18,param_2);
  return;
}



/* Entry: 109230fe0; end: 109230fe7;  */

undefined8 FUN_109230fe0(void)

{
  return 1;
}



/* Entry: 109230fe8; end: 1092310e3;  */

long FUN_109230fe8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long **pplStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  func_0x000109fcc138(&plStack_58,param_1 + 0x820);
  if (plStack_58 == plStack_50) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    plVar8 = plStack_58;
    do {
      plVar4 = (long *)plVar8[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar4, plVar4 != (long *)0x0)) {
        pplVar5 = (long **)*plVar8;
        pplStack_68 = pplVar5;
        if (pplVar5 != (long **)0x0) {
          (*(code *)(*pplVar5)[4])();
          lVar7 = (long)pplVar5 + lVar7;
        }
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plStack_50);
  }
  pplStack_68 = &plStack_58;
  FUN_109231998(&pplStack_68);
  return lVar7;
}



/* Entry: 1092310e4; end: 1092311df;  */

long FUN_1092310e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long **pplStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  func_0x000109fcc138(&plStack_58,param_1 + 0x820);
  if (plStack_58 == plStack_50) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    plVar8 = plStack_58;
    do {
      plVar4 = (long *)plVar8[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar4, plVar4 != (long *)0x0)) {
        pplVar5 = (long **)*plVar8;
        pplStack_68 = pplVar5;
        if (pplVar5 != (long **)0x0) {
          (*(code *)(*pplVar5)[5])();
          lVar7 = (long)pplVar5 + lVar7;
        }
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plStack_50);
  }
  pplStack_68 = &plStack_58;
  FUN_109231998(&pplStack_68);
  return lVar7;
}



/* Entry: 1092311e0; end: 1092311e7;  */

void FUN_1092311e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092311e4);
  (*pcVar1)();
}



/* Entry: 1092311e8; end: 10923123f;  */

long FUN_1092311e8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109231240; end: 109231263;  */

undefined8 FUN_109231240(void)

{
  return 0;
}



/* Entry: 109231264; end: 109231307;  */

void FUN_109231264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  func_0x000109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109231308; end: 1092313a3;  */

void FUN_109231308(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = 0;
  _vsnprintf(0,0,param_2,&stack0x00000000);
  if ((int)uVar2 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000104c59120(param_1,uVar2 & 0xffffffff,0);
    puVar1 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar1 = param_1;
    }
    _vsnprintf(puVar1,(uVar2 & 0xffffffff) + 1,param_2,&stack0x00000000);
  }
  return;
}



/* Entry: 1092313a4; end: 10923145f;  */

void FUN_1092313a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  func_0x000109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109231460; end: 109231547;  */

void FUN_109231460(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  uVar5 = *param_3;
  puVar4[2] = 0;
  puVar4[3] = uVar5;
  *(undefined4 *)(puVar4 + 4) = 0x12;
  *puVar4 = &PTR_FUN_110ae2ce8;
  puVar4[1] = 0;
  FUN_1092315a8(auStack_48,param_2 + 8);
  uStack_38 = 0xffffffff;
  FUN_10923161c(param_1,puVar4,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  FUN_109231548(param_2,param_1);
  return;
}



/* Entry: 109231548; end: 1092315a7;  */

void FUN_109231548(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3560);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092315a8; end: 1092315e7;  */

long * FUN_1092315a8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = param_2[1];
  *param_1 = *param_2;
  if (lVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      return param_1;
    }
  }
  FUN_1092315e8();
  plVar4 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar4 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  puVar6 = PTR___ZTINSt3__112bad_weak_ptrE_1103469f8;
  puVar7 = (undefined8 *)PTR___ZNSt3__112bad_weak_ptrD1Ev_110346260;
  ___cxa_throw();
  *plVar4 = (long)puVar6;
  puVar5 = (undefined8 *)0x38;
  __Znwm();
  uVar9 = puVar7[1];
  uVar8 = *puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  uVar2 = *(undefined4 *)(puVar7 + 2);
  *puVar5 = &PTR_DAT_110ae2d58;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = puVar6;
  puVar5[5] = uVar9;
  puVar5[4] = uVar8;
  *(undefined4 *)(puVar5 + 6) = uVar2;
  *(undefined4 *)((long)puVar5 + 0x34) = 0;
  puVar1 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6 + 8;
  }
  plVar4[1] = (long)puVar5;
  FUN_1092316c4(plVar4,puVar1,puVar6);
  return plVar4;
}



/* Entry: 1092315e8; end: 10923161b;  */

long * FUN_1092315e8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar3 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar3 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  puVar5 = PTR___ZTINSt3__112bad_weak_ptrE_1103469f8;
  puVar6 = (undefined8 *)PTR___ZNSt3__112bad_weak_ptrD1Ev_110346260;
  ___cxa_throw();
  *plVar3 = (long)puVar5;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  uVar8 = puVar6[1];
  uVar7 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  uVar2 = *(undefined4 *)(puVar6 + 2);
  *puVar4 = &PTR_DAT_110ae2d58;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = puVar5;
  puVar4[5] = uVar8;
  puVar4[4] = uVar7;
  *(undefined4 *)(puVar4 + 6) = uVar2;
  *(undefined4 *)((long)puVar4 + 0x34) = 0;
  puVar1 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5 + 8;
  }
  plVar3[1] = (long)puVar4;
  FUN_1092316c4(plVar3,puVar1,puVar5);
  return plVar3;
}



/* Entry: 10923161c; end: 1092316c3;  */

long * FUN_10923161c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_DAT_110ae2d58;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_1092316c4(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 1092316c4; end: 1092318ab;  */

void FUN_1092316c4(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 1092318ac; end: 1092318af;  */

void FUN_1092318ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092318b0; end: 10923195f;  */

long FUN_1092318b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 109231960; end: 10923196f;  */

void FUN_109231960(void)

{
  return;
}



/* Entry: 109231970; end: 109231997;  */

void FUN_109231970(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340d678;
  (*(code *)PTR___tlv_bootstrap_11340d678)(*param_1);
  *ppuVar1 = extraout_x8;
  return;
}



/* Entry: 109231998; end: 1092319d7;  */

void FUN_109231998(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1092319d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092319d8; end: 109231a1f;  */

void FUN_1092319d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109231a20; end: 109231afb;  */

undefined1  [16] FUN_109231a20(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  uint uStack_34;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    lVar3 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = (uint *)(*(long *)(param_1 + 0x68) + -4);
    uStack_34 = *puVar1;
    *(uint **)(param_1 + 0x68) = puVar1;
    *(long *)(*(long *)(param_1 + 0x48) + (ulong)uStack_34 * 0x10 + 8) =
         *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2;
    FUN_109231afc((long *)(param_1 + 0x78),&uStack_34);
    uVar2 = (ulong)uStack_34;
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + uVar2 * 0x10);
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    uVar5 = param_2[1];
    uVar4 = *param_2;
    *(undefined8 *)(lVar3 + 0x38) = param_2[2];
    *(undefined8 *)(lVar3 + 0x30) = uVar5;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    FUN_10922d864(lVar3,param_2 + 1);
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 109231afc; end: 109231bbf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109231afc(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong auStack_88 [3];
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar12 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar11 = (long)puVar2 - *param_1;
    uVar1 = (lVar11 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_109231bc0();
      plVar5 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      lVar13 = *plVar5;
      func_0x000109fcc0a8(*(long *)(lVar13 + 0x18) + 0x820,*(undefined4 *)((long)plVar5 + 0x14),
                          param_2);
      uVar3 = *(uint *)(plVar5 + 2);
      auStack_88[0] = (ulong)uVar3;
      __ZNSt3__15mutex4lockEv(lVar13 + 0x50);
      lVar7 = *(long *)(lVar13 + 0x90);
      lVar11 = lVar7 + (ulong)uVar3 * 0x10;
      lVar10 = *(long *)(lVar11 + 8);
      puVar9 = (uint *)(*(long *)(lVar13 + 200) + -4);
      uVar4 = *puVar9;
      *(uint *)(*(long *)(lVar13 + 0xc0) + lVar10 * 4) = uVar4;
      *(uint **)(lVar13 + 200) = puVar9;
      *(undefined8 *)(lVar11 + 8) = 0xffffffffffffffff;
      if (uVar4 != uVar3) {
        *(long *)(lVar7 + (ulong)uVar4 * 0x10 + 8) = lVar10;
      }
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x50);
      *(undefined8 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 0xe) = 0xffffffffffffffff;
      auStack_88[1] = 0;
      auStack_88[2] = 0xffffffffffffffff;
      FUN_10922d864(param_2,auStack_88 + 1);
      __ZNSt3__15mutex4lockEv(lVar13 + 0x50);
      FUN_109231afc(lVar13 + 0xa8,auStack_88);
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x50);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar8 = 0x3fffffffffffffff;
    }
    plVar5 = param_1;
    func_0x000107c2ab8c();
    lVar7 = *param_1;
    puVar2 = (undefined4 *)((long)plVar5 + lVar11);
    lVar10 = (long)puVar2 - (param_1[1] - lVar7);
    puVar12 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar10,lVar7);
    lVar11 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)plVar5 + uVar8 * 4;
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return;
}



/* Entry: 109231bc0; end: 109231bd3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109231bc0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong auStack_58 [3];
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar8 = *plVar4;
  func_0x000109fcc0a8(*(long *)(lVar8 + 0x18) + 0x820,*(undefined4 *)((long)plVar4 + 0x14),param_2);
  uVar2 = *(uint *)(plVar4 + 2);
  auStack_58[0] = (ulong)uVar2;
  __ZNSt3__15mutex4lockEv(lVar8 + 0x50);
  lVar5 = *(long *)(lVar8 + 0x90);
  lVar1 = lVar5 + (ulong)uVar2 * 0x10;
  lVar6 = *(long *)(lVar1 + 8);
  puVar7 = (uint *)(*(long *)(lVar8 + 200) + -4);
  uVar3 = *puVar7;
  *(uint *)(*(long *)(lVar8 + 0xc0) + lVar6 * 4) = uVar3;
  *(uint **)(lVar8 + 200) = puVar7;
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  if (uVar3 != uVar2) {
    *(long *)(lVar5 + (ulong)uVar3 * 0x10 + 8) = lVar6;
  }
  __ZNSt3__15mutex6unlockEv(lVar8 + 0x50);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
  auStack_58[1] = 0;
  auStack_58[2] = 0xffffffffffffffff;
  FUN_10922d864(param_2,auStack_58 + 1);
  __ZNSt3__15mutex4lockEv(lVar8 + 0x50);
  FUN_109231afc(lVar8 + 0xa8,auStack_58);
  __ZNSt3__15mutex6unlockEv(lVar8 + 0x50);
  return;
}



/* Entry: 109231bd4; end: 109231cc3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109231bd4(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong auStack_48 [3];
  
  lVar7 = *param_1;
  func_0x000109fcc0a8(*(long *)(lVar7 + 0x18) + 0x820,*(undefined4 *)((long)param_1 + 0x14),param_2)
  ;
  uVar2 = *(uint *)(param_1 + 2);
  auStack_48[0] = (ulong)uVar2;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x50);
  lVar4 = *(long *)(lVar7 + 0x90);
  lVar1 = lVar4 + (ulong)uVar2 * 0x10;
  lVar5 = *(long *)(lVar1 + 8);
  puVar6 = (uint *)(*(long *)(lVar7 + 200) + -4);
  uVar3 = *puVar6;
  *(uint *)(*(long *)(lVar7 + 0xc0) + lVar5 * 4) = uVar3;
  *(uint **)(lVar7 + 200) = puVar6;
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  if (uVar3 != uVar2) {
    *(long *)(lVar4 + (ulong)uVar3 * 0x10 + 8) = lVar5;
  }
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x50);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
  auStack_48[1] = 0;
  auStack_48[2] = 0xffffffffffffffff;
  FUN_10922d864(param_2,auStack_48 + 1);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x50);
  FUN_109231afc(lVar7 + 0xa8,auStack_48);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x50);
  return;
}



/* Entry: 109231cc4; end: 109231d27;  */

void FUN_109231cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2dc0;
  FUN_10922d7c8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109231d28; end: 109231d57;  */

long FUN_109231d28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109231bd4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 109231d58; end: 109231d93;  */

long FUN_109231d58(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae2e00);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109231d94; end: 109231d97;  */

void FUN_109231d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109231d98; end: 109231def;  */

long FUN_109231d98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 109231df0; end: 109231e4f;  */

void FUN_109231df0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae2f50);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109231e50; end: 109231e57;  */

void FUN_109231e50(void)

{
  return;
}



/* Entry: 109231e58; end: 109231e8b;  */

void FUN_109231e58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ae2e20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109231e8c; end: 109231ea7;  */

void FUN_109231e8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ae2e20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109231ea8; end: 109231f1b;  */

void FUN_109231ea8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a0;
  __Znwm();
  func_0x00010922d3c4();
  *param_1 = uVar1;
  return;
}



/* Entry: 109231f1c; end: 109231f57;  */

long FUN_109231f1c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae2e90);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109231f58; end: 109231f63;  */

undefined ** FUN_109231f58(void)

{
  return &PTR_DAT_110ae2e90;
}



/* Entry: 109231f64; end: 10923200b;  */

undefined8 * FUN_109231f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2eb0;
  FUN_1092321a8(param_1 + 9);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10923200c; end: 109232013;  */

undefined8 FUN_10923200c(void)

{
  return 0;
}



/* Entry: 109232014; end: 109232083;  */

void FUN_109232014(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x50);
  puVar1 = *(uint **)(param_1 + 200);
  for (puVar2 = *(uint **)(param_1 + 0xc0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    uStack_40 = 0;
    uStack_38 = 0xffffffffffffffff;
    FUN_10922d864(*(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)*puVar2 * 0x10),&uStack_40);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x50);
  return;
}



/* Entry: 109232084; end: 109232097;  */

undefined1  [16] FUN_109232084(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109232118();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109232098; end: 109232117;  */

undefined1  [16] FUN_109232098(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109232118();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109232118; end: 10923213f;  */

void FUN_109232118(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010922d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109232140; end: 1092321a7;  */

void FUN_109232140(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109232118(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1092321a8; end: 10923225b;  */

undefined8 * FUN_1092321a8(undefined8 *param_1)

{
  byte *pbVar1;
  long lStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  pbVar1 = (byte *)*param_1;
  lStack_28 = (long)(param_1[0x10] - param_1[0xf]) >> 2;
  if (((param_1[0x10] - param_1[0xf] != 0) && ((*pbVar1 >> 1 & 1) != 0)) &&
     (*(uint *)(pbVar1 + 8) < 6)) {
    FUN_10923225c(pbVar1,5,2,&UNK_10f55e2a6,0x4a,&lStack_28);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 1);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  FUN_109232140(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10923225c; end: 1092322fb;  */

void FUN_10923225c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  func_0x000109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 1092322fc; end: 1092323e7;  */

void FUN_1092322fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2f10;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092323e8; end: 1092323eb;  */

void FUN_1092323e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092323ec; end: 109232443;  */

long FUN_1092323ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 109232444; end: 1092324a3;  */

void FUN_109232444(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae2fb0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092324a4; end: 10923258f;  */

void FUN_1092324a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2f70;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109232590; end: 109232593;  */

void FUN_109232590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109232594; end: 1092325eb;  */

long FUN_109232594(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 1092325ec; end: 10923264b;  */

void FUN_1092325ec(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3010);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 10923264c; end: 109232737;  */

void FUN_10923264c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae2fd0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109232738; end: 10923273b;  */

void FUN_109232738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10923273c; end: 109232793;  */

long FUN_10923273c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 109232794; end: 1092327f3;  */

void FUN_109232794(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3070);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092327f4; end: 1092328df;  */

void FUN_1092327f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3030;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092328e0; end: 1092328e3;  */

void FUN_1092328e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092328e4; end: 10923293b;  */

long FUN_1092328e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10923293c; end: 10923299b;  */

void FUN_10923293c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae30d0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}


