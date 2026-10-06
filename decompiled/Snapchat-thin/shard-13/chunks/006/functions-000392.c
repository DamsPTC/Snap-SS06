/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8c87d0; end: 10a8c89d7;  */

void FUN_10a8c87d0(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  FUN_10a8cc8cc(&uStack_54,param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x90) = uStack_4c;
  *(undefined8 *)(param_3 + 0x88) = uStack_54;
  *(undefined8 *)(param_3 + 0xa0) = uStack_3c;
  *(undefined8 *)(param_3 + 0x98) = uStack_44;
  *(undefined4 *)(param_3 + 0xa8) = uStack_34;
  fVar4 = *(float *)(param_3 + 0xa4);
  fVar1 = *(float *)(param_3 + 0xa8);
  fVar2 = *(float *)(param_3 + 0x98);
  fVar3 = *(float *)(param_3 + 0x9c);
  fVar5 = *(float *)(param_3 + 0xa0);
  fVar6 = -(fVar4 * fVar3) + fVar1 * fVar2;
  fVar7 = *(float *)(param_3 + 0x88);
  fVar8 = *(float *)(param_3 + 0x8c);
  fVar10 = *(float *)(param_3 + 0x90);
  fVar9 = *(float *)(param_3 + 0x94);
  fVar11 = -(fVar2 * fVar10) + fVar3 * fVar8;
  fVar12 = 1.0 / (-(fVar9 * (-(fVar4 * fVar10) + fVar1 * fVar8)) + fVar6 * fVar7 + fVar11 * fVar5);
  *(ulong *)(param_3 + 0xb4) =
       CONCAT44((-(fVar9 * fVar1) - -(fVar5 * fVar3)) * fVar12,fVar11 * fVar12);
  *(undefined8 *)(param_3 + 0xac) =
       CONCAT44((-(fVar8 * fVar1) - -(fVar4 * fVar10)) * fVar12,fVar6 * fVar12);
  *(ulong *)(param_3 + 0xc4) =
       CONCAT44((-(fVar7 * fVar4) - -(fVar5 * fVar8)) * fVar12,
                (-(fVar5 * fVar2) + fVar4 * fVar9) * fVar12);
  *(ulong *)(param_3 + 0xbc) =
       CONCAT44((-(fVar7 * fVar3) - -(fVar9 * fVar10)) * fVar12,
                (-(fVar5 * fVar10) + fVar1 * fVar7) * fVar12);
  *(float *)(param_3 + 0xcc) = (-(fVar9 * fVar8) + fVar2 * fVar7) * fVar12;
  if (*(char *)(param_3 + 99) == '\x01') {
    *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(param_3 + 0x90);
    *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_3 + 0x88);
    *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_3 + 0x98);
    *(undefined4 *)(param_3 + 0xf0) = *(undefined4 *)(param_3 + 0xa8);
  }
  else {
    *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_3 + 0xc4);
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_3 + 0xbc);
    *(undefined4 *)(param_3 + 0xf0) = *(undefined4 *)(param_3 + 0xcc);
    *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(param_3 + 0xb4);
    *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_3 + 0xac);
    fVar3 = *(float *)(param_3 + 0xe8) * 0.5;
    fVar2 = *(float *)(param_3 + 0xec) * 0.5;
    fVar4 = *(float *)(param_3 + 0xf0);
    fVar5 = *(float *)(param_3 + 0xe0);
    fVar6 = *(float *)(param_3 + 0xe4);
    fVar7 = -(fVar2 * fVar6) + fVar4 * fVar5;
    fVar8 = *(float *)(param_3 + 0xd0);
    fVar9 = *(float *)(param_3 + 0xd4);
    fVar11 = *(float *)(param_3 + 0xd8);
    fVar10 = *(float *)(param_3 + 0xdc);
    fVar12 = -(fVar5 * fVar11) + fVar6 * fVar9;
    fVar1 = 1.0 / (-(fVar10 * (-(fVar2 * fVar11) + fVar4 * fVar9)) + fVar7 * fVar8 + fVar12 * fVar3)
    ;
    *(ulong *)(param_3 + 0xd8) =
         CONCAT44((-(fVar10 * fVar4) - -(fVar3 * fVar6)) * fVar1,fVar12 * fVar1);
    *(ulong *)(param_3 + 0xd0) =
         CONCAT44((-(fVar9 * fVar4) - -(fVar2 * fVar11)) * fVar1,fVar7 * fVar1);
    *(ulong *)(param_3 + 0xe8) =
         CONCAT44((-(fVar8 * fVar2) - -(fVar3 * fVar9)) * fVar1,
                  (-(fVar3 * fVar5) + fVar2 * fVar10) * fVar1);
    *(ulong *)(param_3 + 0xe0) =
         CONCAT44((-(fVar8 * fVar6) - -(fVar10 * fVar11)) * fVar1,
                  (-(fVar3 * fVar11) + fVar4 * fVar8) * fVar1);
    *(float *)(param_3 + 0xf0) = (-(fVar10 * fVar9) + fVar5 * fVar8) * fVar1;
    *(bool *)(param_3 + 0xf4) = param_1 - param_2 < -1.1920929e-07;
    *(bool *)(param_3 + 0xf5) = 1.1920929e-07 < param_1 - param_2;
  }
  return;
}



/* Entry: 10a8c89d8; end: 10a8c8ceb;  */

void FUN_10a8c89d8(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long *plStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  plVar11 = *(long **)(param_1 + 0xe8);
  if (plVar11 == (long *)0x0) {
    uVar15 = (ulong)(uint)(*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x54) *
                           *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x48));
  }
  else {
    uVar15 = (ulong)(uint)(*(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x54) *
                           *(int *)(param_1 + 0x4c) * *(int *)(param_1 + 0x48));
    if (uVar15 == plVar11[1] - *plVar11 >> 2) {
      return;
    }
  }
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar9 = puVar8 + 3;
  *puVar8 = &PTR_DAT_110c2bc28;
  FUN_10a132380(puVar9,uVar15);
  plVar11 = *(long **)(param_1 + 0xf0);
  *(undefined8 **)(param_1 + 0xe8) = puVar9;
  *(undefined8 **)(param_1 + 0xf0) = puVar8;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 1;
    do {
      lVar12 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  iStack_a4 = *(int *)(param_1 + 0x48);
  iStack_a8 = *(int *)(param_1 + 0x4c);
  uVar6 = *(int *)(param_1 + 0x50) * 8 - 3;
  lStack_a0 = **(long **)(param_1 + 0xe8);
  uVar2 = uVar6 & 0xfff;
  uStack_b0 = uVar2 | 0x42ff0000;
  iStack_ac = 2;
  uStack_70 = (ulong)&uStack_b0 | 8;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  lStack_98 = lStack_a0;
  plStack_68 = &lStack_60;
  if (((long)iStack_a4 * (long)iStack_a8 != 0) && (lStack_a0 == 0)) {
    puVar10 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_50 = puVar10 + 1;
    uStack_48 = 0x1c;
    *(undefined1 *)(puVar10 + 8) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar10 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar10 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar10 + 4) = 0x61746164207c7c20;
    func_0x000109ac3188(0xffffff29,&puStack_50,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8c8c9c);
    (*pcVar7)();
  }
  uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
  uStack_58 = (ulong)uVar6;
  lStack_60 = (long)(int)uVar6 * (long)iStack_a4;
  uStack_b0 = uVar2 | 0x42ff4000;
  lStack_90 = lStack_a0 + lStack_60 * iStack_a8;
  lStack_88 = lStack_90;
  if (*(long *)(param_1 + 0xb0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb0) + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x78);
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    lVar12 = 0;
    lVar13 = *(long *)(param_1 + 0xb8);
    do {
      *(undefined4 *)(lVar13 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x7c));
  }
  *(ulong *)(param_1 + 0x80) = CONCAT44(iStack_a4,iStack_a8);
  *(ulong *)(param_1 + 0x78) = CONCAT44(iStack_ac,uStack_b0);
  *(long *)(param_1 + 0x90) = lStack_98;
  *(long *)(param_1 + 0x88) = lStack_a0;
  *(long *)(param_1 + 0xa0) = lStack_88;
  *(long *)(param_1 + 0x98) = lStack_90;
  *(undefined8 *)(param_1 + 0xb0) = uStack_78;
  *(undefined8 *)(param_1 + 0xa8) = uStack_80;
  plVar14 = *(long **)(param_1 + 0xc0);
  plVar11 = (long *)(param_1 + 200);
  if (plVar14 != plVar11) {
    if (plVar14 != (long *)0x0) {
      _free(plVar14[-1]);
    }
    *(long *)(param_1 + 0xb8) = param_1 + 0x80;
    *(long **)(param_1 + 0xc0) = plVar11;
    plVar14 = plVar11;
  }
  if (iStack_ac < 3) {
    puVar8 = (undefined8 *)((ulong)&uStack_b0 | 4);
    *plVar14 = *plStack_68;
    plVar14[1] = plStack_68[1];
    uStack_b0 = 0x42ff0000;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    *(undefined8 *)((long)puVar8 + 0x34) = 0;
    *(undefined8 *)((long)puVar8 + 0x2c) = 0;
    if (plStack_68 != &lStack_60) {
      _free(plStack_68[-1]);
    }
  }
  else {
    *(ulong *)(param_1 + 0xb8) = uStack_70;
    *(long **)(param_1 + 0xc0) = plStack_68;
  }
  return;
}



/* Entry: 10a8c8cec; end: 10a8c8e43;  */

void FUN_10a8c8cec(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                  long param_5,long *param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  code *pcStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  long lStack_108;
  code **ppcStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_5 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_5 + 0x70);
  lVar12 = *(long *)(lVar12 + 0xb8);
  if ((*(byte *)(lVar12 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8c8e00);
    (*pcVar4)();
  }
  uVar5 = *(undefined8 *)(lVar12 + 0x50);
  uStack_70 = param_8[1];
  uStack_78 = *param_8;
  *param_8 = 0;
  param_8[1] = 0;
  pcStack_88 = FUN_10a8dc950;
  ppuStack_80 = &PTR_DAT_110c2b028;
  uStack_b8 = 0;
  uStack_b0 = 0;
  plVar10 = param_6;
  FUN_10a12d658(&uStack_a8,uVar5,param_6,param_7,&pcStack_88);
  puVar6 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = uStack_98;
  puVar6[4] = uStack_a0;
  puVar6[3] = uStack_a8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110ba7a48;
  puVar6[6] = uStack_90;
  puVar6[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_4 = (long)(puVar6 + 3);
  param_4[1] = (long)puVar6;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  uVar13 = (undefined4)uVar5;
  plVar7 = (long *)(param_5 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_98);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x00010a6d1ba8(&uStack_b8);
  __ZNSt3__115recursive_mutex6unlockEv(param_5 + 0x70);
  plVar8 = plVar7;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a8c8e44;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_100 = &pcStack_88;
  puStack_f8 = param_8;
  plStack_f0 = param_6;
  uStack_e8 = param_7;
  plStack_e0 = plVar7;
  lStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a8c9354();
  pcStack_148 = FUN_10a8eeee4;
  ppuStack_140 = &PTR_DAT_110c2bc00;
  plStack_138 = plVar8;
  FUN_10a02d928(plVar10,&PTR_DAT_110c26818,&pcStack_148,0);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  plVar7 = plVar10;
  (**(code **)(*plVar10 + 0x200))(plVar10,&PTR_DAT_110c26838);
  if ((int)plVar7 != 0) {
    (**(code **)(*plVar10 + 0x210))(plVar10,&PTR_DAT_110c26838);
    (**(code **)(*plVar10 + 600))(&ppuStack_160,plVar10,0);
    if ((ppuStack_160 == (undefined **)0x0) ||
       (ppuVar9 = ppuStack_160,
       ___dynamic_cast(ppuStack_160,&PTR_DAT_110b9fe10,&PTR_DAT_110c275a0,0),
       ppuVar9 == (undefined **)0x0)) {
      pppuVar11 = &ppuStack_170;
    }
    else {
      plStack_168 = plStack_158;
      pppuVar11 = &ppuStack_160;
      ppuStack_170 = ppuVar9;
    }
    *pppuVar11 = (undefined **)0x0;
    pppuVar11[1] = (undefined **)0x0;
    plVar7 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar1 = plStack_158 + 1;
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
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    (**(code **)(*ppuStack_170 + 0x50))(&ppuStack_160);
    plVar7 = plStack_158;
    plStack_178 = plStack_158;
    ppuStack_180 = ppuStack_160;
    if (plStack_158 != (long *)0x0) {
      plVar1 = plStack_158 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_158 != (long *)0x0) {
        plVar1 = plStack_158 + 1;
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
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    func_0x00010a6c8b40(plVar8 + 0xb,&ppuStack_180);
    plVar7 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar1 = plStack_178 + 1;
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
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    (**(code **)(*plVar10 + 0x220))(plVar10);
    plVar7 = plStack_168;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  ppuVar9 = &PTR_DAT_110c26858;
  plVar7 = plVar10;
  (**(code **)(*plVar10 + 0x200))();
  if ((int)plVar7 != 0) {
    (**(code **)(*plVar10 + 0x210))(plVar10,&PTR_DAT_110c26858);
    (**(code **)(*plVar10 + 600))(&ppuStack_160,plVar10,0);
    if ((ppuStack_160 == (undefined **)0x0) ||
       (ppuVar9 = ppuStack_160,
       ___dynamic_cast(ppuStack_160,&PTR_DAT_110b9fe10,&PTR_DAT_110c27600,0),
       ppuVar9 == (undefined **)0x0)) {
      pppuVar11 = &ppuStack_170;
    }
    else {
      plStack_168 = plStack_158;
      pppuVar11 = &ppuStack_160;
      ppuStack_170 = ppuVar9;
    }
    *pppuVar11 = (undefined **)0x0;
    pppuVar11[1] = (undefined **)0x0;
    plVar7 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar1 = plStack_158 + 1;
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
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    (**(code **)(*ppuStack_170 + 0x50))(&ppuStack_160);
    if (plStack_158 == (long *)0x0) {
      func_0x00010a8c5e68(plVar8 + 0x23,ppuStack_160,0);
      ppuVar9 = ppuStack_160;
    }
    else {
      plVar7 = plStack_158 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_158 != (long *)0x0) {
        plVar1 = plStack_158 + 1;
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
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        }
      }
      func_0x00010a8c5e68(plVar8 + 0x23,ppuStack_160,plStack_158);
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppuVar9 = ppuStack_160;
      if (lVar12 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
        ppuVar9 = ppuStack_160;
      }
    }
    (**(code **)(*plVar10 + 0x220))(plVar10);
    plVar10 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar7 = plStack_168 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  FUN_10a8c89d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a6d1af8(&ppuStack_170);
  plVar7 = plVar8;
  __Unwind_Resume();
  pcStack_188 = FUN_10a8c9354;
  plStack_1a0 = plVar10;
  plStack_198 = plVar8;
  ppuStack_190 = &puStack_d0;
  (**(code **)(*ppuVar9 + 0xa0))(&uStack_1b8,ppuVar9,&PTR_DAT_110c2b040);
  if (*(char *)((long)plVar7 + 0x47) < '\0') {
    __ZdlPv(plVar7[6]);
  }
  lVar12 = CONCAT44(uStack_1b4,uStack_1b8);
  plVar7[7] = CONCAT44(uStack_1ac,uStack_1b0);
  plVar7[6] = lVar12;
  plVar7[8] = lStack_1a8;
  (**(code **)(*ppuVar9 + 0xe8))(ppuVar9,&PTR_DAT_110c2b060);
  uStack_1b8 = (undefined4)lVar12;
  uStack_1b4 = uVar13;
  uStack_1b0 = param_3;
  (**(code **)(*plVar7 + 0x40))(plVar7,&uStack_1b8);
  return;
}



/* Entry: 10a8c8e44; end: 10a8c9353;  */

void FUN_10a8c8e44(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a8c9354();
  pcStack_88 = FUN_10a8eeee4;
  ppuStack_80 = &PTR_DAT_110c2bc00;
  plStack_78 = param_4;
  FUN_10a02d928(param_5,&PTR_DAT_110c26818,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c26838);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c26838);
    (**(code **)(*param_5 + 600))(&ppuStack_a0,param_5,0);
    if ((ppuStack_a0 == (undefined **)0x0) ||
       (ppuVar5 = ppuStack_a0, ___dynamic_cast(ppuStack_a0,&PTR_DAT_110b9fe10,&PTR_DAT_110c275a0,0),
       ppuVar5 == (undefined **)0x0)) {
      pppuVar6 = &ppuStack_b0;
    }
    else {
      plStack_a8 = plStack_98;
      pppuVar6 = &ppuStack_a0;
      ppuStack_b0 = ppuVar5;
    }
    *pppuVar6 = (undefined **)0x0;
    pppuVar6[1] = (undefined **)0x0;
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (**(code **)(*ppuStack_b0 + 0x50))(&ppuStack_a0);
    plVar4 = plStack_98;
    plStack_b8 = plStack_98;
    ppuStack_c0 = ppuStack_a0;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    func_0x00010a6c8b40(param_4 + 0xb,&ppuStack_c0);
    plVar4 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (**(code **)(*param_5 + 0x220))(param_5);
    plVar4 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  ppuVar5 = &PTR_DAT_110c26858;
  plVar4 = param_5;
  (**(code **)(*param_5 + 0x200))();
  if ((int)plVar4 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c26858);
    (**(code **)(*param_5 + 600))(&ppuStack_a0,param_5,0);
    if ((ppuStack_a0 == (undefined **)0x0) ||
       (ppuVar5 = ppuStack_a0, ___dynamic_cast(ppuStack_a0,&PTR_DAT_110b9fe10,&PTR_DAT_110c27600,0),
       ppuVar5 == (undefined **)0x0)) {
      pppuVar6 = &ppuStack_b0;
    }
    else {
      plStack_a8 = plStack_98;
      pppuVar6 = &ppuStack_a0;
      ppuStack_b0 = ppuVar5;
    }
    *pppuVar6 = (undefined **)0x0;
    pppuVar6[1] = (undefined **)0x0;
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (**(code **)(*ppuStack_b0 + 0x50))(&ppuStack_a0);
    if (plStack_98 == (long *)0x0) {
      func_0x00010a8c5e68(param_4 + 0x23,ppuStack_a0,0);
      ppuVar5 = ppuStack_a0;
    }
    else {
      plVar4 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
      func_0x00010a8c5e68(param_4 + 0x23,ppuStack_a0,plStack_98);
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppuVar5 = ppuStack_a0;
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        ppuVar5 = ppuStack_a0;
      }
    }
    (**(code **)(*param_5 + 0x220))(param_5);
    param_5 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar4 = plStack_a8 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_5);
      }
    }
  }
  FUN_10a8c89d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a6d1af8(&ppuStack_b0);
  plVar4 = param_4;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a8c9354;
  plStack_e0 = param_5;
  plStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar5 + 0xa0))(&uStack_f8,ppuVar5,&PTR_DAT_110c2b040);
  if (*(char *)((long)plVar4 + 0x47) < '\0') {
    __ZdlPv(plVar4[6]);
  }
  lVar7 = CONCAT44(uStack_f4,uStack_f8);
  plVar4[7] = CONCAT44(uStack_ec,uStack_f0);
  plVar4[6] = lVar7;
  plVar4[8] = lStack_e8;
  (**(code **)(*ppuVar5 + 0xe8))(ppuVar5,&PTR_DAT_110c2b060);
  uStack_f8 = (undefined4)lVar7;
  uStack_f4 = param_2;
  uStack_f0 = param_3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&uStack_f8);
  return;
}



/* Entry: 10a8c9354; end: 10a8c9553;  */

void FUN_10a8c9354(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  long *param_5)

{
  long lVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  (**(code **)(*param_5 + 0xa0))(&uStack_38,param_5,&PTR_DAT_110c2b040);
  if (*(char *)((long)param_4 + 0x47) < '\0') {
    __ZdlPv(param_4[6]);
  }
  lVar1 = CONCAT44(uStack_34,uStack_38);
  param_4[7] = CONCAT44(uStack_2c,uStack_30);
  param_4[6] = lVar1;
  param_4[8] = lStack_28;
  (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c2b060);
  uStack_38 = (undefined4)lVar1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  (**(code **)(*param_4 + 0x40))(param_4,&uStack_38);
  return;
}



/* Entry: 10a8c9554; end: 10a8c96bb;  */

void FUN_10a8c9554(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  ppuVar3 = &puStack_20;
  uVar1 = *param_1;
  puStack_20 = &UNK_10f680f19;
  lStack_18 = 0x15;
  if ((uVar1 & 7) == 5) {
    puStack_20 = &UNK_10f680f2f;
    lStack_18 = 0x15;
    if ((*param_2 & 7) == 0) {
      puStack_20 = &UNK_10f680f45;
      lStack_18 = 0x1b;
      if ((uVar1 >> 0xe & 1) != 0) {
        puStack_20 = &UNK_10f680f61;
        lStack_18 = 0x1b;
        if ((*param_2 >> 0xe & 1) != 0) {
          uVar2 = param_1[1];
          if ((int)uVar2 < 3) {
            lVar9 = (long)(int)param_1[3] * (long)(int)param_1[2];
            if (0 < (int)uVar2) goto LAB_10a8c9604;
            lVar8 = 0;
          }
          else {
            lVar9 = 1;
            piVar11 = *(int **)(param_1 + 0x10);
            uVar13 = (ulong)uVar2;
            do {
              lVar9 = lVar9 * *piVar11;
              uVar13 = uVar13 - 1;
              piVar11 = piVar11 + 1;
            } while (uVar13 != 0);
LAB_10a8c9604:
            lVar8 = *(long *)(*(long *)(param_1 + 0x12) + (ulong)uVar2 * 8 + -8);
          }
          uVar2 = param_2[1];
          if ((int)uVar2 < 3) {
            lVar12 = (long)(int)param_2[3] * (long)(int)param_2[2];
            if (0 < (int)uVar2) goto LAB_10a8c9654;
            lVar10 = 0;
          }
          else {
            lVar12 = 1;
            piVar11 = *(int **)(param_2 + 0x10);
            uVar13 = (ulong)uVar2;
            do {
              lVar12 = lVar12 * *piVar11;
              uVar13 = uVar13 - 1;
              piVar11 = piVar11 + 1;
            } while (uVar13 != 0);
LAB_10a8c9654:
            lVar10 = *(long *)(*(long *)(param_2 + 0x12) + (ulong)uVar2 * 8 + -8);
          }
          puStack_20 = &UNK_10f681902;
          lStack_18 = 0x1c;
          if ((ulong)(lVar12 * lVar10 * 4) <= (ulong)(lVar8 * lVar9)) {
            puStack_30 = *(undefined1 **)(param_1 + 4);
            pcStack_28 = (code *)(long)(int)param_1[2];
            puStack_20 = (undefined *)
                         ((long)(int)param_1[3] +
                         (long)(int)param_1[3] * (long)(int)(uVar1 >> 3 & 0x1ff));
            lStack_18 = (long)puStack_20 * 4;
            _vImageConvert_PlanarFtoPlanar8(0x437f0000,0,&puStack_30,&stack0xffffffffffffffb0,0);
            return;
          }
        }
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_90;
  pcStack_28 = FUN_10a8c96bc;
  puStack_90 = &UNK_10f68191f;
  uStack_88 = 0x42;
  puStack_30 = &stack0xfffffffffffffff0;
  if (ppuVar3 == (undefined **)0x0) {
    FUN_10a0edfc4();
    if ((*(uint *)((long)ppuVar5 + 0x50) == 3) ||
       (((*(uint *)((long)ppuVar5 + 0x50) < 3 &&
         (puVar6 = (undefined1 *)ppuVar5, FUN_10ad4ae18(), (puVar6[0x17] & 1) == 0)) &&
        (FUN_10ad4bd78(), (int)puVar6 < 3000)))) {
      uVar7 = 4;
    }
    else {
      uVar7 = *(undefined4 *)((long)ppuVar5 + 0x50);
    }
    *(undefined4 *)((long)ppuVar5 + 0x14c) = uVar7;
    return;
  }
  fVar15 = *(float *)(param_6 + 0xd0);
  fVar16 = *(float *)(param_6 + 0xd8);
  fVar18 = *(float *)(param_6 + 0xdc);
  fVar19 = *(float *)(param_6 + 0xe4);
  fVar14 = *(float *)(param_6 + 0xe8);
  fVar17 = *(float *)(param_6 + 0xf0);
  fVar21 = *(float *)(param_6 + 0xd4) * 0.0;
  fVar22 = *(float *)(param_6 + 0xe0) * 0.0;
  fVar20 = *(float *)(param_6 + 0xec) * 0.0;
  fVar25 = fVar15 + fVar21 + fVar16 * 0.5;
  fVar26 = *(float *)(param_6 + 0xd4) + fVar15 * 0.0 + fVar16 * 0.5;
  fVar27 = fVar18 + fVar22 + fVar19 * 0.5;
  fVar29 = *(float *)(param_6 + 0xe0) + fVar18 * 0.0 + fVar19 * 0.5;
  fVar31 = fVar14 + fVar20 + fVar17 * 0.5;
  fVar33 = *(float *)(param_6 + 0xec) + fVar14 * 0.0 + fVar17 * 0.5;
  fVar23 = fVar25 + fVar27 * 0.0 + fVar31 * 0.0;
  fVar24 = fVar26 + fVar29 * 0.0 + fVar33 * 0.0;
  fVar28 = fVar27 + fVar25 * 0.0 + fVar31 * 0.0;
  fVar30 = fVar29 + fVar26 * 0.0 + fVar33 * 0.0;
  fVar31 = fVar27 * -0.5 + fVar25 * -0.5 + fVar31;
  fVar33 = fVar29 * -0.5 + fVar26 * -0.5 + fVar33;
  fVar25 = fVar28 * 0.0;
  fVar26 = fVar30 * 0.0;
  if ((*(byte *)(param_6 + 99) & 1) == 0) {
    fVar29 = fVar23 + fVar25 + fVar31 * 0.0;
    fVar34 = fVar24 + fVar26 + fVar33 * 0.0;
    fVar36 = fVar28 + fVar23 * 0.0 + fVar31 * 0.0;
    fVar37 = fVar30 + fVar24 * 0.0 + fVar33 * 0.0;
    fVar32 = ABS(fVar29);
    fVar35 = ABS(fVar34);
    fVar27 = ABS(fVar36);
    if (ABS(fVar36) <= ABS(fVar29)) {
      fVar27 = fVar32;
    }
    fVar29 = ABS(fVar37);
    if (ABS(fVar37) <= ABS(fVar34)) {
      fVar29 = fVar35;
    }
    fVar34 = fVar27;
    uVar1 = (uint)param_2;
    uVar2 = (uint)param_3;
    if (fVar35 <= fVar32) {
      fVar34 = fVar29;
      uVar1 = (uint)param_3;
      fVar29 = fVar27;
      uVar2 = (uint)param_2;
    }
    param_3 = (ulong)(uint)(int)(fVar34 * (float)uVar1);
    param_2 = (uint *)(ulong)(uint)(int)(fVar29 * (float)uVar2);
    fVar27 = 0.0;
    fVar29 = 1.0;
    if (*(char *)(param_6 + 0xf4) == '\x01') {
      fVar27 = (float)(long)param_2;
      fVar29 = (fVar27 + -1.0) / fVar27;
      fVar27 = 0.5 / fVar27;
    }
    if (*(char *)(param_6 + 0xf5) == '\x01') {
      fVar36 = (float)NEON_ucvtf((int)(float)(int)(fVar34 * (float)uVar1));
      fVar35 = (fVar36 + -1.0) / fVar36;
      fVar36 = 0.5 / fVar36;
      fVar32 = fVar28 * fVar36;
      fVar34 = fVar30 * fVar36;
      goto LAB_10a8c9874;
    }
  }
  else {
    fVar27 = 0.0;
    fVar29 = 1.0;
  }
  fVar36 = 0.0;
  fVar35 = 1.0;
  fVar32 = fVar25;
  fVar34 = fVar26;
LAB_10a8c9874:
  fVar16 = fVar16 + fVar21 + fVar15 * 0.0;
  fVar19 = fVar19 + fVar22 + fVar18 * 0.0;
  fVar17 = fVar17 + fVar20 + fVar14 * 0.0;
  fStack_70 = fVar19 * -0.5 + fVar16 * -0.5 + fVar17;
  fVar15 = fVar19 + fVar16 * 0.0 + fVar17 * 0.0;
  fVar16 = fVar16 + fVar19 * 0.0 + fVar17 * 0.0;
  fVar14 = fVar15 * 0.0 + fVar29 * fVar16 + fStack_70 * 0.0;
  fVar18 = fVar15 * fVar35 + fVar16 * 0.0 + fStack_70 * 0.0;
  fStack_70 = fStack_70 + fVar15 * fVar36 + fVar27 * fVar16;
  fVar16 = fVar18 * 0.0 + fVar14;
  fVar25 = fVar25 + fVar23 * fVar29 + fVar31 * 0.0;
  fVar26 = fVar26 + fVar24 * fVar29 + fVar33 * 0.0;
  fVar17 = fVar28 * fVar35 + fVar23 * 0.0 + fVar31 * 0.0;
  fVar15 = fVar30 * fVar35 + fVar24 * 0.0 + fVar33 * 0.0;
  fVar31 = fVar31 + fVar32 + fVar23 * fVar27;
  fVar33 = fVar33 + fVar34 + fVar24 * fVar27;
  fVar19 = fVar25 * 0.0 - fVar17;
  uStack_88 = CONCAT44((float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                        CONCAT16((char)((uint)fVar19 >> 0x10),
                                                 CONCAT15((char)((uint)fVar19 >> 8),
                                                          CONCAT14(SUB41(fVar19,0),fVar16)))) >>
                              0x20) + fVar31 * 0.0,fVar16 + fStack_70 * 0.0);
  puStack_90 = (undefined *)
               CONCAT44(fVar15 * 0.0 + fVar26 + fVar33 * 0.0,fVar17 * 0.0 + fVar25 + fVar31 * 0.0);
  fVar16 = -fVar18 + fVar14 * 0.0 + fStack_70 * 0.0;
  uStack_78 = CONCAT44(fVar33 + fVar15 + fVar26 * 0.0,fVar31 + fVar17 + fVar25 * 0.0);
  uStack_80 = CONCAT17((char)((uint)fVar16 >> 0x18),
                       CONCAT16((char)((uint)fVar16 >> 0x10),
                                CONCAT15((char)((uint)fVar16 >> 8),
                                         CONCAT14(SUB41(fVar16,0),
                                                  -fVar15 + fVar26 * 0.0 + fVar33 * 0.0))));
  fStack_70 = fStack_70 + fVar18 + fVar14 * 0.0;
  (**(code **)((long)*ppuVar3 + 0x98))(ppuVar3,&puStack_90);
  plVar4 = (long *)ppuVar3;
  (**(code **)((long)*ppuVar3 + 0xd0))(ppuVar3);
  FUN_10a1da3a4(ppuVar3,param_2,param_3,0,param_4,param_5,plVar4,0);
  return;
}



/* Entry: 10a8c96bc; end: 10a8c99c7;  */

void FUN_10a8c96bc(long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float fStack_50;
  
  ppuVar4 = &puStack_70;
  puStack_70 = &UNK_10f68191f;
  uStack_68 = 0x42;
  if (param_1 == (long *)0x0) {
    FUN_10a0edfc4();
    if ((*(uint *)((long)ppuVar4 + 0x50) == 3) ||
       (((*(uint *)((long)ppuVar4 + 0x50) < 3 &&
         (puVar5 = (undefined1 *)ppuVar4, FUN_10ad4ae18(), (puVar5[0x17] & 1) == 0)) &&
        (FUN_10ad4bd78(), (int)puVar5 < 3000)))) {
      uVar6 = 4;
    }
    else {
      uVar6 = *(undefined4 *)((long)ppuVar4 + 0x50);
    }
    *(undefined4 *)((long)ppuVar4 + 0x14c) = uVar6;
    return;
  }
  fVar8 = *(float *)(param_6 + 0xd0);
  fVar9 = *(float *)(param_6 + 0xd8);
  fVar11 = *(float *)(param_6 + 0xdc);
  fVar12 = *(float *)(param_6 + 0xe4);
  fVar7 = *(float *)(param_6 + 0xe8);
  fVar10 = *(float *)(param_6 + 0xf0);
  fVar14 = *(float *)(param_6 + 0xd4) * 0.0;
  fVar15 = *(float *)(param_6 + 0xe0) * 0.0;
  fVar13 = *(float *)(param_6 + 0xec) * 0.0;
  fVar18 = fVar8 + fVar14 + fVar9 * 0.5;
  fVar19 = *(float *)(param_6 + 0xd4) + fVar8 * 0.0 + fVar9 * 0.5;
  fVar20 = fVar11 + fVar15 + fVar12 * 0.5;
  fVar22 = *(float *)(param_6 + 0xe0) + fVar11 * 0.0 + fVar12 * 0.5;
  fVar24 = fVar7 + fVar13 + fVar10 * 0.5;
  fVar26 = *(float *)(param_6 + 0xec) + fVar7 * 0.0 + fVar10 * 0.5;
  fVar16 = fVar18 + fVar20 * 0.0 + fVar24 * 0.0;
  fVar17 = fVar19 + fVar22 * 0.0 + fVar26 * 0.0;
  fVar21 = fVar20 + fVar18 * 0.0 + fVar24 * 0.0;
  fVar23 = fVar22 + fVar19 * 0.0 + fVar26 * 0.0;
  fVar24 = fVar20 * -0.5 + fVar18 * -0.5 + fVar24;
  fVar26 = fVar22 * -0.5 + fVar19 * -0.5 + fVar26;
  fVar18 = fVar21 * 0.0;
  fVar19 = fVar23 * 0.0;
  if ((*(byte *)(param_6 + 99) & 1) == 0) {
    fVar22 = fVar16 + fVar18 + fVar24 * 0.0;
    fVar27 = fVar17 + fVar19 + fVar26 * 0.0;
    fVar29 = fVar21 + fVar16 * 0.0 + fVar24 * 0.0;
    fVar30 = fVar23 + fVar17 * 0.0 + fVar26 * 0.0;
    fVar25 = ABS(fVar22);
    fVar28 = ABS(fVar27);
    fVar20 = ABS(fVar29);
    if (ABS(fVar29) <= ABS(fVar22)) {
      fVar20 = fVar25;
    }
    fVar22 = ABS(fVar30);
    if (ABS(fVar30) <= ABS(fVar27)) {
      fVar22 = fVar28;
    }
    fVar27 = fVar20;
    uVar1 = (uint)param_2;
    uVar2 = (uint)param_3;
    if (fVar28 <= fVar25) {
      fVar27 = fVar22;
      uVar1 = (uint)param_3;
      fVar22 = fVar20;
      uVar2 = (uint)param_2;
    }
    param_3 = (ulong)(uint)(int)(fVar27 * (float)uVar1);
    param_2 = (ulong)(uint)(int)(fVar22 * (float)uVar2);
    fVar20 = 0.0;
    fVar22 = 1.0;
    if (*(char *)(param_6 + 0xf4) == '\x01') {
      fVar20 = (float)param_2;
      fVar22 = (fVar20 + -1.0) / fVar20;
      fVar20 = 0.5 / fVar20;
    }
    if (*(char *)(param_6 + 0xf5) == '\x01') {
      fVar29 = (float)NEON_ucvtf((int)(float)(int)(fVar27 * (float)uVar1));
      fVar28 = (fVar29 + -1.0) / fVar29;
      fVar29 = 0.5 / fVar29;
      fVar25 = fVar21 * fVar29;
      fVar27 = fVar23 * fVar29;
      goto LAB_10a8c9874;
    }
  }
  else {
    fVar20 = 0.0;
    fVar22 = 1.0;
  }
  fVar29 = 0.0;
  fVar28 = 1.0;
  fVar25 = fVar18;
  fVar27 = fVar19;
LAB_10a8c9874:
  fVar9 = fVar9 + fVar14 + fVar8 * 0.0;
  fVar12 = fVar12 + fVar15 + fVar11 * 0.0;
  fVar10 = fVar10 + fVar13 + fVar7 * 0.0;
  fStack_50 = fVar12 * -0.5 + fVar9 * -0.5 + fVar10;
  fVar8 = fVar12 + fVar9 * 0.0 + fVar10 * 0.0;
  fVar9 = fVar9 + fVar12 * 0.0 + fVar10 * 0.0;
  fVar7 = fVar8 * 0.0 + fVar22 * fVar9 + fStack_50 * 0.0;
  fVar11 = fVar8 * fVar28 + fVar9 * 0.0 + fStack_50 * 0.0;
  fStack_50 = fStack_50 + fVar8 * fVar29 + fVar20 * fVar9;
  fVar9 = fVar11 * 0.0 + fVar7;
  fVar18 = fVar18 + fVar16 * fVar22 + fVar24 * 0.0;
  fVar19 = fVar19 + fVar17 * fVar22 + fVar26 * 0.0;
  fVar10 = fVar21 * fVar28 + fVar16 * 0.0 + fVar24 * 0.0;
  fVar8 = fVar23 * fVar28 + fVar17 * 0.0 + fVar26 * 0.0;
  fVar24 = fVar24 + fVar25 + fVar16 * fVar20;
  fVar26 = fVar26 + fVar27 + fVar17 * fVar20;
  fVar12 = fVar18 * 0.0 - fVar10;
  uStack_68 = CONCAT44((float)(CONCAT17((char)((uint)fVar12 >> 0x18),
                                        CONCAT16((char)((uint)fVar12 >> 0x10),
                                                 CONCAT15((char)((uint)fVar12 >> 8),
                                                          CONCAT14(SUB41(fVar12,0),fVar9)))) >> 0x20
                              ) + fVar24 * 0.0,fVar9 + fStack_50 * 0.0);
  puStack_70 = (undefined *)
               CONCAT44(fVar8 * 0.0 + fVar19 + fVar26 * 0.0,fVar10 * 0.0 + fVar18 + fVar24 * 0.0);
  fVar9 = -fVar11 + fVar7 * 0.0 + fStack_50 * 0.0;
  uStack_58 = CONCAT44(fVar26 + fVar8 + fVar19 * 0.0,fVar24 + fVar10 + fVar18 * 0.0);
  uStack_60 = CONCAT17((char)((uint)fVar9 >> 0x18),
                       CONCAT16((char)((uint)fVar9 >> 0x10),
                                CONCAT15((char)((uint)fVar9 >> 8),
                                         CONCAT14(SUB41(fVar9,0),
                                                  -fVar8 + fVar19 * 0.0 + fVar26 * 0.0))));
  fStack_50 = fStack_50 + fVar11 + fVar7 * 0.0;
  (**(code **)(*param_1 + 0x98))(param_1,&puStack_70);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xd0))(param_1);
  FUN_10a1da3a4(param_1,param_2,param_3,0,param_4,param_5,plVar3,0);
  return;
}



/* Entry: 10a8c99c8; end: 10a8c9a1f;  */

void FUN_10a8c99c8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  if (*(uint *)(param_1 + 0x50) == 3) {
LAB_10a8c99e4:
    uVar2 = 4;
  }
  else {
    if (*(uint *)(param_1 + 0x50) < 3) {
      FUN_10ad4ae18();
      if (((*(byte *)(CONCAT44(uVar2,iVar1) + 0x17) & 1) == 0) && (FUN_10ad4bd78(), iVar1 < 3000))
      goto LAB_10a8c99e4;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  return;
}



/* Entry: 10a8c9a20; end: 10a8c9a2b;  */

void FUN_10a8c9a20(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (*(uint *)(param_1 + 0x50) == 3) {
LAB_10a8c99e4:
    uVar2 = 4;
  }
  else {
    if (*(uint *)(param_1 + 0x50) < 3) {
      FUN_10ad4ae18();
      if (((*(byte *)(CONCAT44(uVar2,iVar1) + 0x17) & 1) == 0) && (FUN_10ad4bd78(), iVar1 < 3000))
      goto LAB_10a8c99e4;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  return;
}



/* Entry: 10a8c9a2c; end: 10a8c9a4f;  */

void FUN_10a8c9a2c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010a8c94d4();
  if (*(uint *)(param_1 + 0x50) == 3) {
LAB_10a8c99e4:
    uVar2 = 4;
  }
  else {
    if (*(uint *)(param_1 + 0x50) < 3) {
      lVar1 = param_1;
      FUN_10ad4ae18();
      if (((*(byte *)(lVar1 + 0x17) & 1) == 0) && (FUN_10ad4bd78(), (int)lVar1 < 3000))
      goto LAB_10a8c99e4;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  return;
}



/* Entry: 10a8c9a50; end: 10a8c9cdf;  */

void FUN_10a8c9a50(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined8 *unaff_x22;
  code **unaff_x23;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a8c9354();
  pppuVar9 = &ppuStack_128;
  uStack_130 = 0x10a8eef5c;
  ppuStack_128 = &PTR_DAT_110c2bc68;
  lStack_120 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c26818,&uStack_130,0);
  (*(code *)*ppuStack_128)(pppuVar9);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c26838);
  if ((int)plVar4 != 0) {
    pppuVar9 = &ppuStack_168;
    uStack_170 = 0x10a8ef1cc;
    ppuStack_168 = &PTR_DAT_110c2bc98;
    unaff_x22 = &uStack_f0;
    uStack_f0 = 0x10a8ef1cc;
    ppuStack_e8 = &PTR_DAT_110c2bc98;
    uStack_a0 = CONCAT17(0xc,(undefined7)uStack_a0);
    uStack_b0 = 0x726f66736e617274;
    uStack_a8 = CONCAT35(uStack_a8._5_3_,0x3072656d);
    pcStack_98 = FUN_10a8eef8c;
    ppuStack_90 = &PTR_FUN_110c2bc80;
    puVar5 = (undefined8 *)0x58;
    lStack_160 = param_1;
    lStack_e0 = param_1;
    __Znwm();
    unaff_x23 = &pcStack_98;
    *puVar5 = 0x10a8ef1cc;
    puVar5[1] = &PTR_DAT_110c2bc98;
    puVar5[2] = param_1;
    puVar5[9] = uStack_a8;
    puVar5[8] = uStack_b0;
    puVar5[10] = uStack_a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_88 = puVar5;
    func_0x000107c2b054(auStack_188,&UNK_10f67fb58);
    (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c26838,&pcStack_98,0,auStack_188);
    if (cStack_171 < '\0') {
      __ZdlPv(auStack_188[0]);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (uStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    (*(code *)*ppuStack_168)(pppuVar9);
  }
  ppuVar7 = &PTR_DAT_110c26878;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))();
  *(int *)(param_1 + 0x148) = (int)plVar4;
  FUN_10a8c89d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  (*(code *)*ppuStack_90)(unaff_x23 + 1);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(unaff_x22 + 1);
  (*(code *)**pppuVar9)(pppuVar9);
  lVar6 = param_1;
  __Unwind_Resume();
  pcStack_198 = FUN_10a8c9ce0;
  puStack_1c0 = unaff_x22;
  plStack_1b8 = param_2;
  lStack_1b0 = param_1;
  pppuStack_1a8 = pppuVar9;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00010a8c9464();
  FUN_10a02e188(ppuVar7,&PTR_DAT_110c26818,lVar6 + 0x138,&UNK_10f680c3f,0xd);
  puStack_1d0 = &UNK_10f68197b;
  uStack_1c8 = 0xb;
  plStack_1d8 = *(long **)(lVar6 + 0x60);
  uStack_1e0 = *(undefined8 *)(lVar6 + 0x58);
  if (*(long *)(lVar6 + 0x60) != 0) {
    plVar4 = (long *)(*(long *)(lVar6 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar7 + 0x108))(ppuVar7,&PTR_DAT_110c26838,&uStack_1e0,&puStack_1d0);
  plVar4 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar1 = plStack_1d8 + 1;
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
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8c9dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar7 + 0x40))(ppuVar7,&PTR_DAT_110c26878,*(undefined4 *)(lVar6 + 0x148));
  return;
}



/* Entry: 10a8c9ce0; end: 10a8c9deb;  */

void FUN_10a8c9ce0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010a8c9464();
  FUN_10a02e188(param_2,&PTR_DAT_110c26818,param_1 + 0x138,&UNK_10f680c3f,0xd);
  puStack_40 = &UNK_10f68197b;
  uStack_38 = 0xb;
  plStack_48 = *(long **)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c26838,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8c9dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c26878,*(undefined4 *)(param_1 + 0x148));
  return;
}



/* Entry: 10a8c9dec; end: 10a8c9e73;  */

undefined1  [16] FUN_10a8c9dec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &UNK_10f681987;
  return auVar1;
}



/* Entry: 10a8c9e74; end: 10a8c9ec7;  */

void FUN_10a8c9e74(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xdd;
  uStack_18 = 0xffffffff;
  FUN_10a8c9ec8(param_1,&uStack_58);
  FUN_10a8ef2f8();
  return;
}



/* Entry: 10a8c9ec8; end: 10a8c9f9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8c9f60) */

undefined1  [16] FUN_10a8c9ec8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f681987,7);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ef1fc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8c9fa0; end: 10a8c9fa7;  */

void FUN_10a8c9fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b080,0);
  *(char *)(param_5 + 0x60) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0a0,1);
  *(char *)(param_5 + 0x61) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0c0,0);
  *(char *)(param_5 + 0x62) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0e0,0);
  *(char *)(param_5 + 99) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b100,0);
  *(char *)(param_5 + 100) = (char)plVar1;
  (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c2b120);
  *(undefined4 *)(param_5 + 0x50) = param_1;
  *(undefined4 *)(param_5 + 0x54) = param_2;
  *(undefined4 *)(param_5 + 0x58) = param_3;
  *(undefined4 *)(param_5 + 0x5c) = param_4;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c2b140,1);
  *(char *)(param_5 + 0x65) = (char)plVar1;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b160,0);
  *(int *)(param_5 + 0x68) = (int)param_6;
  return;
}



/* Entry: 10a8c9fa8; end: 10a8ca0c7;  */

void FUN_10a8c9fa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,long *param_6)

{
  long *plVar1;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b080,0);
  *(char *)(param_5 + 4) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0a0,1);
  *(char *)((long)param_5 + 0x11) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0c0,0);
  *(char *)((long)param_5 + 0x12) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b0e0,0);
  *(char *)((long)param_5 + 0x13) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b100,0);
  *(char *)(param_5 + 5) = (char)plVar1;
  (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c2b120);
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c2b140,1);
  *(char *)((long)param_5 + 0x15) = (char)plVar1;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c2b160,0);
  param_5[6] = (int)param_6;
  return;
}



/* Entry: 10a8ca0c8; end: 10a8ca0cf;  */

void FUN_10a8ca0c8(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b080,*(undefined1 *)(param_1 + 0x60));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0a0,*(undefined1 *)(param_1 + 0x61));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0c0,*(undefined1 *)(param_1 + 0x62));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0e0,*(undefined1 *)(param_1 + 99));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b100,*(undefined1 *)(param_1 + 100));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c2b120,param_1 + 0x50);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2b140,*(undefined1 *)(param_1 + 0x65));
                    /* WARNING: Could not recover jumptable at 0x00010a8ca1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b160,*(undefined4 *)(param_1 + 0x68));
  return;
}



/* Entry: 10a8ca0d0; end: 10a8ca313;  */

void FUN_10a8ca0d0(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b080,*(undefined1 *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0a0,*(undefined1 *)(param_1 + 0x11));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0c0,*(undefined1 *)(param_1 + 0x12));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b0e0,*(undefined1 *)(param_1 + 0x13));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b100,*(undefined1 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c2b120,param_1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2b140,*(undefined1 *)(param_1 + 0x15));
                    /* WARNING: Could not recover jumptable at 0x00010a8ca1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2b160,*(undefined4 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a8ca314; end: 10a8ca36b;  */

ulong FUN_10a8ca314(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a8ef420(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a8ca36c; end: 10a8ca46f;  */

ulong FUN_10a8ca36c(undefined8 param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x9e3779b9;
  uVar3 = uVar2;
  if (*param_2 != 0.0) {
    uVar3 = (ulong)(uint)*param_2 + 0x9e3779b9;
  }
  uVar1 = uVar2;
  if (param_2[1] != 0.0) {
    uVar1 = (ulong)(uint)param_2[1] + 0x9e3779b9;
  }
  uVar3 = uVar1 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  uVar1 = uVar2;
  if (param_2[2] != 0.0) {
    uVar1 = (ulong)(uint)param_2[2] + 0x9e3779b9;
  }
  uVar3 = uVar1 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  if (param_2[3] != 0.0) {
    uVar2 = (ulong)(uint)param_2[3] + 0x9e3779b9;
  }
  uVar3 = uVar2 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  uVar3 = (ulong)*(byte *)(param_2 + 4) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x11) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x12) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x13) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)(param_2 + 5) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = ((ulong)*(byte *)((long)param_2 + 0x15) | uVar3 << 6) + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  return (long)(int)param_2[6] + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
}



/* Entry: 10a8ca470; end: 10a8cabff;  */

void FUN_10a8ca470(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  code *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  char cStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 0xa0);
  uVar15 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
  uVar15 = ((ulong)param_2 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
  puVar26 = (undefined8 *)((uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297);
  puVar14 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = (long)puVar14 - 1;
    if (((ulong)puVar14 & uVar15) == 0) {
      puVar18 = (undefined8 *)(uVar15 & (ulong)puVar26);
    }
    else {
      puVar18 = puVar26;
      if (puVar14 <= puVar26) {
        uVar5 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar5 = (ulong)puVar26 / (ulong)puVar14;
        }
        puVar18 = (undefined8 *)((long)puVar26 - uVar5 * (long)puVar14);
      }
    }
    puVar20 = *(undefined8 **)(*plVar1 + (long)puVar18 * 8);
    if (puVar20 != (undefined8 *)0x0) {
      for (plVar23 = (long *)*puVar20; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        puVar20 = (undefined8 *)plVar23[1];
        if (puVar20 == puVar26) {
          if ((ulong *)plVar23[2] == param_2) goto LAB_10a8caac8;
        }
        else {
          if (((ulong)puVar14 & uVar15) == 0) {
            puVar20 = (undefined8 *)((ulong)puVar20 & uVar15);
          }
          else if (puVar14 <= puVar20) {
            uVar5 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar5 = (ulong)puVar20 / (ulong)puVar14;
            }
            puVar20 = (undefined8 *)((long)puVar20 - uVar5 * (long)puVar14);
          }
          if (puVar20 != puVar18) break;
        }
      }
    }
  }
  puVar18 = (undefined8 *)0x8;
  __Znwm();
  *puVar18 = 0;
  puVar11 = param_2;
  func_0x00010a08f140();
  puVar12 = param_2;
  func_0x00010a08f1bc();
  puVar14 = (undefined8 *)*puVar11;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  cStack_81 = '\0';
  uVar25 = *puVar14;
  func_0x000107c2b054(&uStack_80,&UNK_10f6802bb);
  FUN_10a156298(&plStack_c0,uVar25,&uStack_80,&uStack_98);
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT17(uStack_79,uStack_80));
  }
  if ((*(byte *)(*puVar12 + 0x440) & 1) == 0) goto LAB_10a8cab60;
  puVar20 = (undefined8 *)(*puVar12 + 0x3f8);
  func_0x00010a1557e8();
  if ((*(byte *)(*puVar12 + 0x440) & 1) == 0) goto LAB_10a8cab60;
  uVar25 = *puVar20;
  puVar20 = (undefined8 *)(*puVar12 + 0x1b8);
  func_0x00010a15579c();
  if ((*(byte *)(*puVar12 + 0x440) & 1) == 0) goto LAB_10a8cab60;
  uVar24 = *puVar20;
  puVar20 = (undefined8 *)(*puVar12 + 0x98);
  FUN_10a1559cc();
  uVar27 = *puVar20;
  puVar20 = (undefined8 *)0x100;
  __Znwm();
  cVar3 = cStack_81;
  uVar9 = uStack_88;
  uVar8 = uStack_89;
  uVar7 = uStack_90;
  uVar6 = uStack_98;
  plVar21 = plStack_a8;
  uVar29 = uStack_b0;
  plVar17 = plStack_b8;
  plVar23 = plStack_c0;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_80 = uStack_90;
  uStack_79 = uStack_89;
  uStack_78 = uStack_88;
  uStack_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  cStack_81 = '\0';
  uStack_98 = 0;
  puVar20[1] = 0;
  *puVar20 = 0;
  puVar20[3] = 0;
  puVar20[2] = 0;
  *(undefined4 *)(puVar20 + 4) = 0x3f800000;
  puVar20[8] = 0;
  puVar20[7] = 0;
  puVar20[6] = 0;
  puVar20[5] = 0;
  *(undefined4 *)(puVar20 + 9) = 0x3f800000;
  puVar20[0xb] = 0;
  puVar20[10] = 0;
  puVar20[0xd] = 0;
  puVar20[0xc] = 0;
  *(undefined4 *)(puVar20 + 0xe) = 0x3f800000;
  lVar19 = puVar14[1];
  uVar30 = *puVar14;
  puVar20[0x10] = puVar14[1];
  puVar20[0xf] = uVar30;
  if (lVar19 != 0) {
    plVar22 = (long *)(lVar19 + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar20[0x12] = plVar17;
  puVar20[0x11] = plVar23;
  puVar20[0x14] = plVar21;
  puVar20[0x13] = uVar29;
  puVar20[0x15] = uVar6;
  puVar20[0x16] = CONCAT17(uVar8,uVar7);
  *(ulong *)((long)puVar20 + 0xb7) = CONCAT71(uVar9,uVar8);
  *(char *)((long)puVar20 + 0xbf) = cVar3;
  uVar29 = puVar14[2];
  puVar20[0x19] = puVar14[3];
  puVar20[0x18] = uVar29;
  lVar19 = puVar14[4];
  puVar20[0x1a] = lVar19;
  if (lVar19 != 0) {
    plVar23 = (long *)(lVar19 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = *plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar20[0x1b] = uVar25;
  puVar20[0x1c] = uVar24;
  puVar20[0x1d] = uVar27;
  puVar20[0x1e] = 0xffffffffffffffff;
  *(undefined4 *)(puVar20 + 0x1f) = 0xffffffff;
  *(undefined1 *)((long)puVar20 + 0xfc) = 1;
  FUN_10a8e49d8(puVar18);
  plVar23 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar17 = plStack_a8 + 1;
    do {
      lVar19 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plVar23 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar17 = plStack_b8 + 1;
    do {
      lVar19 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  puVar20 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar20 != (undefined8 *)0x0) {
    uVar15 = (long)puVar20 - 1;
    if (((ulong)puVar20 & uVar15) == 0) {
      puVar14 = (undefined8 *)(uVar15 & (ulong)puVar26);
    }
    else {
      puVar14 = puVar26;
      if (puVar20 <= puVar26) {
        uVar5 = 0;
        if (puVar20 != (undefined8 *)0x0) {
          uVar5 = (ulong)puVar26 / (ulong)puVar20;
        }
        puVar14 = (undefined8 *)((long)puVar26 - uVar5 * (long)puVar20);
      }
    }
    puVar16 = *(undefined8 **)(*plVar1 + (long)puVar14 * 8);
    if (puVar16 != (undefined8 *)0x0) {
      for (plVar23 = (long *)*puVar16; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        puVar16 = (undefined8 *)plVar23[1];
        if (puVar16 == puVar26) {
          if ((ulong *)plVar23[2] == param_2) {
            FUN_10a8e49d8(puVar18,0);
            __ZdlPv(puVar18);
            goto LAB_10a8caac8;
          }
        }
        else {
          if (((ulong)puVar20 & uVar15) == 0) {
            puVar16 = (undefined8 *)((ulong)puVar16 & uVar15);
          }
          else if (puVar20 <= puVar16) {
            uVar5 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar5 = (ulong)puVar16 / (ulong)puVar20;
            }
            puVar16 = (undefined8 *)((long)puVar16 - uVar5 * (long)puVar20);
          }
          if (puVar16 != puVar14) break;
        }
      }
    }
  }
  plVar23 = (long *)0x20;
  __Znwm();
  uStack_b0 = 1;
  *plVar23 = 0;
  plVar23[1] = (long)puVar26;
  plVar23[2] = (long)param_2;
  plVar23[3] = (long)puVar18;
  fVar28 = (float)(*(long *)(param_1 + 0xb8) + 1);
  plStack_b8 = plVar1;
  if ((puVar20 == (undefined8 *)0x0) || (*(float *)(param_1 + 0xc0) * (float)puVar20 < fVar28)) {
    uVar15 = 1;
    if ((undefined8 *)0x2 < puVar20) {
      uVar15 = (ulong)(((ulong)puVar20 & (long)puVar20 - 1U) != 0);
    }
    puVar14 = (undefined8 *)(uVar15 | (long)puVar20 << 1);
    puVar18 = (undefined8 *)(long)(fVar28 / *(float *)(param_1 + 0xc0));
    if (puVar14 <= puVar18) {
      puVar14 = puVar18;
    }
    plStack_c0 = plVar23;
    if ((long)puVar14 - 1U == 0) {
      puVar14 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar14 & (long)puVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      puVar20 = *(undefined8 **)(param_1 + 0xa8);
    }
    if (puVar14 <= puVar20) {
      if (puVar14 < puVar20) {
        puVar18 = (undefined8 *)
                  (long)((float)*(ulong *)(param_1 + 0xb8) / *(float *)(param_1 + 0xc0));
        if ((puVar20 < (undefined8 *)0x3) || (((ulong)puVar20 & (long)puVar20 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 *)0x1 < puVar18) {
          puVar18 = (undefined8 *)(1L << (-LZCOUNT((long)puVar18 - 1) & 0x3fU));
        }
        if (puVar14 <= puVar18) {
          puVar14 = puVar18;
        }
        if (puVar14 < puVar20) {
          if (puVar14 != (undefined8 *)0x0) goto LAB_10a8ca8d0;
          lVar19 = *plVar1;
          *plVar1 = 0;
          if (lVar19 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_1 + 0xa8) = 0;
          puVar20 = (undefined8 *)0x0;
        }
        else {
          puVar20 = *(undefined8 **)(param_1 + 0xa8);
        }
      }
LAB_10a8caa1c:
      if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
        puVar14 = (undefined8 *)((long)puVar20 - 1U & (ulong)puVar26);
      }
      else {
        puVar14 = puVar26;
        if (puVar20 <= puVar26) {
          uVar15 = 0;
          if (puVar20 != (undefined8 *)0x0) {
            uVar15 = (ulong)puVar26 / (ulong)puVar20;
          }
          puVar14 = (undefined8 *)((long)puVar26 - uVar15 * (long)puVar20);
        }
      }
      goto LAB_10a8caa48;
    }
LAB_10a8ca8d0:
    if ((ulong)puVar14 >> 0x3d == 0) {
      lVar19 = (long)puVar14 << 3;
      __Znwm();
      lVar13 = *plVar1;
      *plVar1 = lVar19;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      puVar18 = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0xa8) = puVar14;
      do {
        *(undefined8 *)(*plVar1 + (long)puVar18 * 8) = 0;
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (puVar14 != puVar18);
      plVar17 = *(long **)(param_1 + 0xb0);
      puVar20 = puVar14;
      if (plVar17 != (long *)0x0) {
        puVar18 = (undefined8 *)plVar17[1];
        uVar15 = (long)puVar14 - 1;
        if (((ulong)puVar14 & uVar15) == 0) {
          puVar18 = (undefined8 *)((ulong)puVar18 & uVar15);
        }
        else if (puVar14 <= puVar18) {
          uVar5 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar5 = (ulong)puVar18 / (ulong)puVar14;
          }
          puVar18 = (undefined8 *)((long)puVar18 - uVar5 * (long)puVar14);
        }
        *(undefined8 **)(*plVar1 + (long)puVar18 * 8) = (undefined8 *)(param_1 + 0xb0);
        plVar21 = (long *)*plVar17;
        while (plVar21 != (long *)0x0) {
          puVar16 = (undefined8 *)plVar21[1];
          if (((ulong)puVar14 & uVar15) == 0) {
            puVar16 = (undefined8 *)((ulong)puVar16 & uVar15);
          }
          else if (puVar14 <= puVar16) {
            uVar5 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar5 = (ulong)puVar16 / (ulong)puVar14;
            }
            puVar16 = (undefined8 *)((long)puVar16 - uVar5 * (long)puVar14);
          }
          plVar22 = plVar21;
          if (puVar16 != puVar18) {
            lVar19 = *plVar1;
            if (*(long *)(lVar19 + (long)puVar16 * 8) == 0) {
              *(long **)(lVar19 + (long)puVar16 * 8) = plVar17;
              puVar18 = puVar16;
            }
            else {
              *plVar17 = *plVar21;
              *plVar21 = **(undefined8 **)(lVar19 + (long)puVar16 * 8);
              **(long **)(lVar19 + (long)puVar16 * 8) = (long)plVar21;
              plVar22 = plVar17;
            }
          }
          plVar17 = plVar22;
          plVar21 = (long *)*plVar22;
        }
      }
      goto LAB_10a8caa1c;
    }
  }
  else {
LAB_10a8caa48:
    lVar19 = *plVar1;
    plVar17 = *(long **)(lVar19 + (long)puVar14 * 8);
    if (plVar17 == (long *)0x0) {
      plVar17 = (long *)(param_1 + 0xb0);
      *plVar23 = *plVar17;
      *plVar17 = (long)plVar23;
      *(long **)(lVar19 + (long)puVar14 * 8) = plVar17;
      if (*plVar23 != 0) {
        puVar14 = *(undefined8 **)(*plVar23 + 8);
        if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
          puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar20 - 1U);
        }
        else if (puVar20 <= puVar14) {
          uVar15 = 0;
          if (puVar20 != (undefined8 *)0x0) {
            uVar15 = (ulong)puVar14 / (ulong)puVar20;
          }
          puVar14 = (undefined8 *)((long)puVar14 - uVar15 * (long)puVar20);
        }
        *(long **)(*plVar1 + (long)puVar14 * 8) = plVar23;
      }
    }
    else {
      *plVar23 = *plVar17;
      *plVar17 = (long)plVar23;
    }
    plStack_c0 = (long *)0x0;
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    FUN_10a8ef710(&plStack_c0);
LAB_10a8caac8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail(plVar23[3]);
  }
  func_0x000109ffded8();
LAB_10a8cab60:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8cab64);
  (*pcVar10)();
}



/* Entry: 10a8cac00; end: 10a8cc19f;  */

void FUN_10a8cac00(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uStack_268;
  float fStack_250;
  float fStack_24c;
  undefined8 uStack_240;
  undefined8 uStack_230;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  long *plStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  undefined4 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = *param_2;
  if ((lVar32 == 0) || (plVar25 = *(long **)(lVar32 + 0x108), plVar25 == (long *)0x0))
  goto LAB_10a8cbfdc;
  if (((*(byte *)(param_3 + 4) & 1) == 0) && (*(int *)((long)param_3 + 0x24) == 0)) {
    fStack_f4 = 0.0;
    uStack_f0 = 0;
    uStack_ef = 0;
    uStack_ee = 0;
    fStack_100 = (float)((uint)fStack_100 & 0xffffff);
    fStack_fc = 0.0;
    fStack_f8 = 0.0;
    uStack_e5 = 0;
    fStack_e4 = 0.0;
    uStack_ed = 0;
    uStack_ec = 0;
    uStack_eb = 0;
    uStack_ea = 0;
    uStack_e8 = 0;
    uStack_e7 = 0;
    param_3[8] = 0x17d;
    *(undefined8 *)((long)param_3 + 0x55) = 0;
    *(ulong *)((long)param_3 + 0x4d) = (ulong)(uint)fStack_100;
    fStack_e0 = 0.0;
    *(undefined2 *)((long)param_3 + 0x4a) = 0;
    *(undefined1 *)((long)param_3 + 0x4c) = 0;
    *(undefined8 *)((long)param_3 + 0x65) = 0;
    *(undefined8 *)((long)param_3 + 0x5d) = 0;
    *(undefined4 *)((long)param_3 + 0x6d) = 0;
    lVar32 = *param_2;
    plVar25 = *(long **)(lVar32 + 0x108);
  }
  *(int *)((long)param_3 + 0x24) = *(int *)((long)param_3 + 0x24) + 1;
  lVar13 = plVar25[0x4d];
  if ((lVar13 == 0) ||
     (___dynamic_cast(lVar13,&PTR_DAT_110bb3788,&PTR_DAT_110c2c758,0), lVar13 == 0)) {
    lStack_110 = 0;
    plStack_108 = (long *)0x0;
  }
  else {
    plStack_108 = (long *)plVar25[0x4e];
    lStack_110 = lVar13;
    if (plStack_108 != (long *)0x0) {
      plVar25 = plStack_108 + 1;
      do {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *plVar25 = *plVar25 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar25 = *(long **)(lVar32 + 0x108);
    }
  }
  lVar13 = lStack_110;
  plStack_118 = *(long **)(lVar32 + 0x110);
  if (plStack_118 != (long *)0x0) {
    plVar14 = plStack_118 + 1;
    do {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_138 = 0xbf800000bf800000;
  uStack_140 = 0x3f800000bf800000;
  uStack_128 = 0xbf8000003f800000;
  uStack_130 = 0x3f8000003f800000;
  uStack_148 = NEON_rev64(*(undefined8 *)(param_4 + 8),4);
  fVar48 = 1.0;
  fVar46 = 1.0;
  plStack_120 = plVar25;
  if (lStack_110 == 0) {
LAB_10a8cae1c:
    uStack_160 = uStack_160 & 0xffffffffffffff00;
    uStack_150 = 0;
    lVar26 = *param_2;
    lVar22 = *(long *)(lVar26 + 0x58);
    if (lVar22 == 0) {
      fStack_250 = 0.0;
      fStack_24c = 1.0;
      uStack_240 = 0x3f800000;
      uStack_230 = 0;
      fVar34 = 0.0;
      fVar46 = 0.0;
    }
    else {
      plVar25 = (long *)plStack_120[0x4d];
      if (plVar25 == (long *)0x0) {
        fVar48 = 0.0;
        plVar14 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar25 + 0xb0))();
        plVar14 = (long *)plStack_120[0x4d];
        fVar48 = (float)((ulong)plVar25 & 0xffffffff);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0xb8))();
        }
      }
      fVar34 = (float)NEON_ucvtf(*(undefined4 *)(*param_2 + 0x48));
      fVar40 = (float)NEON_ucvtf(*(undefined4 *)(*param_2 + 0x4c));
      puVar2 = &UNK_10e482b24;
      if (lVar13 != 0) {
        puVar2 = (undefined *)(lVar13 + 0x2ac);
      }
      FUN_10a8c87d0(fVar46 * (fVar48 / (float)((ulong)plVar14 & 0xffffffff)),fVar34 / fVar40,
                    *(undefined8 *)(lVar26 + 0x58),puVar2);
      lVar13 = *(long *)(lVar26 + 0x58);
      fVar46 = *(float *)(lVar13 + 0x90);
      fVar34 = *(float *)(lVar13 + 0x9c);
      uStack_240 = *(undefined8 *)(lVar13 + 0x88);
      fStack_250 = (float)*(undefined8 *)(lVar13 + 0x94);
      fStack_24c = (float)((ulong)*(undefined8 *)(lVar13 + 0x94) >> 0x20);
      uStack_230 = *(undefined8 *)(lVar13 + 0xa0);
      fVar48 = *(float *)(lVar13 + 0xa8);
      uStack_158 = *(undefined8 *)(lVar13 + 0x58);
      uStack_160 = *(ulong *)(lVar13 + 0x50);
      uStack_150 = 1;
      lVar26 = *param_2;
    }
    uVar9 = uStack_148;
    uVar39 = (ulong)(uint)fVar46;
    lVar13 = *(long *)(lVar26 + 0x118);
    if (lVar13 == 0) {
      cVar4 = '\0';
      uStack_268 = 0;
      bVar29 = 1;
    }
    else {
      uStack_268 = *(undefined4 *)(lVar13 + 0x68);
      cVar4 = *(char *)(lVar13 + 0x60);
      bVar29 = *(byte *)(lVar13 + 0x65);
    }
    plStack_170 = (long *)0x0;
    plStack_168 = (long *)0x0;
    lVar13 = *(long *)(lVar32 + 0x108);
    plVar25 = *(long **)(lVar13 + 0x268);
    fVar40 = 0.0;
    if (plVar25 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      (**(code **)(*plVar25 + 0xb0))();
      iVar12 = (int)plVar25;
      plVar25 = *(long **)(lVar13 + 0x268);
      fVar40 = 0.0;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0xb8))();
        fVar40 = (float)(int)plVar25;
      }
    }
    uVar27 = (uint)(uVar9 >> 0x1f) & 0xfffffffe;
    uVar24 = (int)uVar9 << 1;
    lVar32 = *(long *)(lVar32 + 0x108);
    plVar25 = *(long **)(lVar32 + 0x268);
    if (plVar25 != (long *)0x0) {
      ___dynamic_cast(plVar25,&PTR_DAT_110bb3788,&PTR_DAT_110c2c758,0);
      fVar38 = (float)uVar39;
      if (plVar25 != (long *)0x0) {
        plVar14 = *(long **)(lVar32 + 0x270);
        fStack_100 = SUB84(plVar25,0);
        fStack_fc = (float)((ulong)plVar25 >> 0x20);
        fStack_f8 = SUB84(plVar14,0);
        fStack_f4 = (float)((ulong)plVar14 >> 0x20);
        if (plVar14 != (long *)0x0) {
          plVar15 = plVar14 + 1;
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar11) {
              *plVar15 = *plVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (plVar25[0x51] == 0) {
          iVar21 = 1;
          iVar23 = 1;
        }
        else {
          fVar35 = *(float *)(plVar25 + 0x55);
          ___sincosf_stret();
          plVar15 = plVar25;
          (**(code **)(*plVar25 + 0xb0))();
          plVar16 = plVar25;
          (**(code **)(*plVar25 + 0xb8))();
          fVar36 = ABS(fVar38);
          fVar38 = ABS(fVar35) * (float)((ulong)plVar15 & 0xffffffff);
          iVar21 = (int)(ABS(fVar35) * (float)((ulong)plVar16 & 0xffffffff) +
                        fVar36 * (float)((ulong)plVar15 & 0xffffffff));
          iVar23 = (int)(fVar38 + fVar36 * (float)((ulong)plVar16 & 0xffffffff));
        }
        fVar35 = *(float *)(plVar25 + 0x55);
        ___sincosf_stret();
        fVar36 = (float)(int)uVar24;
        uVar24 = (uint)(((float)iVar12 *
                        (float)(int)(float)(int)(ABS(fVar35) * (float)(int)uVar27 +
                                                ABS(fVar38) * fVar36)) / (float)iVar21);
        uVar39 = (ulong)(uint)(float)iVar23;
        uVar27 = (uint)((fVar40 * (float)(int)(float)(int)(ABS(fVar35) * fVar36 +
                                                          ABS(fVar38) * (float)(int)uVar27)) /
                       (float)iVar23);
        if (plVar14 != (long *)0x0) {
          plVar25 = plVar14 + 1;
          do {
            lVar32 = *plVar25;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar11) {
              *plVar25 = lVar32 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar32 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
    }
    puVar20 = (ulong *)0x1;
    FUN_10a088744(plStack_120[0x4d]);
    if (puVar20 == (ulong *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      plVar25 = (long *)*puVar20;
    }
    plVar14 = param_3;
    (**(code **)(*param_3 + 0xe0))();
    plVar15 = plVar14;
    FUN_10a8bb1fc();
    pbVar17 = (byte *)(*plVar15 + 0x2c0);
    FUN_10a08fec0();
    if ((*pbVar17 & 1) == 0) {
      if (((plVar14 == (long *)0x0) || (plVar25 == (long *)0x0)) ||
         (plVar14 = plVar25, (**(code **)(*plVar25 + 0x78))(), (int)plVar14 == 0)) {
        if (cVar4 == '\x01') {
          if ((*(byte *)((long)param_1 + 0xc9) & 1) == 0) {
            *(undefined1 *)((long)param_1 + 0xc9) = 1;
          }
          puVar19 = param_1 + 3;
          if (((*(byte *)(param_1 + 0x13) & 1) != 0) ||
             (FUN_10a8cc484(), (*(byte *)(param_1 + 0x13) & 1) != 0)) {
            plVar25 = plStack_120;
            fStack_100 = 1.3766103e-32;
            fStack_fc = 1.4013e-45;
            fStack_f8 = 7.681095e-29;
            fStack_f4 = 1.4013e-45;
            uStack_f0 = SUB81(puVar19,0);
            uStack_ef = (undefined1)((ulong)puVar19 >> 8);
            uStack_ee = (undefined1)((ulong)puVar19 >> 0x10);
            uStack_ed = (undefined1)((ulong)puVar19 >> 0x18);
            uStack_ec = (undefined1)((ulong)puVar19 >> 0x20);
            uStack_eb = (undefined1)((ulong)puVar19 >> 0x28);
            uStack_ea = (undefined2)((ulong)puVar19 >> 0x30);
            uStack_e8 = SUB81(param_3,0);
            uStack_e7 = (undefined2)((ulong)param_3 >> 8);
            uStack_e5 = (undefined1)((ulong)param_3 >> 0x18);
            fStack_e4 = (float)((ulong)param_3 >> 0x20);
            fStack_e0 = 2.5400157e-30;
            uStack_dc = 1;
            plStack_1b0 = plStack_120;
            fStack_1a8 = SUB84(plStack_118,0);
            fStack_1a4 = (float)((ulong)plStack_118 >> 0x20);
            if (plStack_118 != (long *)0x0) {
              plVar14 = plStack_118 + 1;
              do {
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar11) {
                  *plVar14 = *plVar14 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar14 = (long *)plStack_120[0x4d];
            if (plVar14 == (long *)0x0) {
              plVar14 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar14 + 0xb0))();
              plVar25 = (long *)plVar25[0x4d];
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0xb8))();
                goto LAB_10a8cb5f8;
              }
            }
            plVar25 = (long *)0x0;
LAB_10a8cb5f8:
            uVar31 = (uint)plVar25;
            if ((int)uVar24 < (int)plVar14) {
              uVar30 = (int)plVar14 / 2;
              if ((int)uVar30 <= (int)uVar24) {
                uVar30 = uVar24;
              }
              plVar14 = (long *)(ulong)uVar30;
            }
            else if ((int)uVar31 <= (int)uVar27) goto code_r0x00010a8cb61c;
            uVar30 = (int)uVar31 / 2;
            if ((int)uVar31 / 2 <= (int)uVar27) {
              uVar30 = uVar27;
            }
            if ((int)uVar27 < (int)uVar31) {
              uVar31 = uVar30;
            }
            plVar25 = (long *)(ulong)uVar31;
            (*(code *)CONCAT44(fStack_fc,fStack_100))
                      (&fStack_1e0,&plStack_1b0,(ulong)plVar14 & 0xffffffff | (long)plVar25 << 0x20,
                       &fStack_100);
            fVar38 = fStack_1d4;
            fVar40 = fStack_1d8;
            plStack_1b0 = (long *)CONCAT44(fStack_1dc,fStack_1e0);
            fStack_1e0 = 0.0;
            fStack_1dc = 0.0;
            fStack_1d8 = 0.0;
            fStack_1d4 = 0.0;
            plVar15 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
            fStack_1a8 = fVar40;
            fStack_1a4 = fVar38;
            if (plVar15 != (long *)0x0) {
              plVar16 = plVar15 + 1;
              do {
                lVar32 = *plVar16;
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar11) {
                  *plVar16 = lVar32 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar32 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            plVar15 = (long *)CONCAT44(fStack_1d4,fStack_1d8);
            if (plVar15 != (long *)0x0) {
              plVar16 = plVar15 + 1;
              do {
                lVar32 = *plVar16;
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar11) {
                  *plVar16 = lVar32 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar32 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
            goto LAB_10a8cb5f8;
          }
          goto LAB_10a8cc034;
        }
        fStack_1a8 = SUB84(plStack_118,0);
        fStack_1a4 = (float)((ulong)plStack_118 >> 0x20);
        if (plStack_118 != (long *)0x0) {
          plVar25 = plStack_118 + 1;
          do {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar11) {
              *plVar25 = *plVar25 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a8cb634;
        }
        plStack_1b0 = (long *)0x0;
        fStack_1a8 = 0.0;
        fStack_1a4 = 0.0;
        plVar25 = plStack_118;
        goto LAB_10a8cb678;
      }
LAB_10a8cb248:
      plVar14 = plVar25;
      ___dynamic_cast(plVar25,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0);
      if ((plVar14 != (long *)0x0) && (plVar15 = plVar14, FUN_10ad6ff4c(), *plVar15 != 0)) {
        FUN_10ad709cc(plVar14);
      }
      plVar14 = plVar25;
      ___dynamic_cast(plVar25,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
      fVar40 = (float)uVar39;
      if (plVar14 == (long *)0x0) goto LAB_10a8cb2c4;
      plVar15 = (long *)plVar14[0x15];
      plVar14 = (long *)plVar14[0x16];
      fStack_1a8 = SUB84(plVar14,0);
      fStack_1a4 = (float)((ulong)plVar14 >> 0x20);
      if (plVar14 == (long *)0x0) {
        plStack_1b0 = plVar15;
        if (cVar4 == '\x01') {
          plVar14 = (long *)0x0;
          goto LAB_10a8cb338;
        }
        plStack_178 = (long *)0x0;
        plStack_180 = plVar15;
        goto LAB_10a8cb9f4;
      }
      plVar16 = plVar14 + 1;
      do {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = *plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (plVar25 != (long *)0x0) goto LAB_10a8cb248;
LAB_10a8cb2c4:
      plVar16 = plVar25;
      (**(code **)(*plVar25 + 0x50))(plVar25);
      FUN_10ad4c0a4();
      plVar18 = plVar25;
      (**(code **)(*plVar25 + 0xc0))(plVar25);
      plVar14 = (long *)0x78;
      __Znwm();
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&PTR_FUN_110ba0f28;
      plVar15 = plVar14 + 3;
      FUN_10a316684(plVar15,plVar18,plVar16,(ulong)plVar16 >> 0x20,0);
      fStack_1a8 = SUB84(plVar14,0);
      fStack_1a4 = (float)((ulong)plVar14 >> 0x20);
    }
    fVar40 = (float)uVar39;
    plStack_1b0 = plVar15;
    if (cVar4 == '\x01') {
LAB_10a8cb338:
      plVar15 = plStack_1b0;
      if ((*(byte *)((long)param_1 + 0xc9) & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0xc9) = 1;
      }
      plVar16 = plStack_1b0;
      (**(code **)(*plStack_1b0 + 0x30))();
      puVar19 = param_1;
      FUN_10a8ca470(param_1,plVar16[3]);
      fStack_100 = 1.3766685e-32;
      fStack_fc = 1.4013e-45;
      fStack_f8 = 7.6811094e-29;
      fStack_f4 = 1.4013e-45;
      uStack_f0 = SUB81(puVar19,0);
      uStack_ef = (undefined1)((ulong)puVar19 >> 8);
      uStack_ee = (undefined1)((ulong)puVar19 >> 0x10);
      uStack_ed = (undefined1)((ulong)puVar19 >> 0x18);
      uStack_ec = (undefined1)((ulong)puVar19 >> 0x20);
      uStack_eb = (undefined1)((ulong)puVar19 >> 0x28);
      uStack_ea = (undefined2)((ulong)puVar19 >> 0x30);
      uStack_e8 = 0x10;
      uStack_e7 = 0x4e12;
      uStack_e5 = 0xe;
      fStack_e4 = 1.4013e-45;
      if (plVar14 != (long *)0x0) {
        plVar16 = plVar14 + 1;
        do {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar11) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar31 = *(uint *)(plVar15 + 3);
      uVar30 = *(uint *)((long)plVar15 + 0x1c);
      plStack_180 = plVar15;
      plStack_178 = plVar14;
LAB_10a8cb3a8:
      fVar40 = (float)uVar39;
      if ((int)uVar24 < (int)uVar31) {
        uVar31 = (int)uVar31 / 2;
        if ((int)uVar31 <= (int)uVar24) {
          uVar31 = uVar24;
        }
      }
      else if ((int)uVar30 <= (int)uVar27) goto LAB_10a8cb480;
      uVar1 = (int)uVar30 / 2;
      if ((int)uVar30 / 2 <= (int)uVar27) {
        uVar1 = uVar27;
      }
      if ((int)uVar27 < (int)uVar30) {
        uVar30 = uVar1;
      }
      (*(code *)CONCAT44(fStack_fc,fStack_100))
                (&fStack_1e0,&plStack_180,CONCAT44(uVar30,uVar31),&fStack_100);
      plVar15 = plStack_178;
      plVar14 = (long *)CONCAT44(fStack_1d4,fStack_1d8);
      plStack_180 = (long *)CONCAT44(fStack_1dc,fStack_1e0);
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      if (plStack_178 != (long *)0x0) {
        plVar16 = plStack_178 + 1;
        do {
          lVar32 = *plVar16;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar11) {
            *plVar16 = lVar32 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar32 == 0) {
          lVar32 = *plStack_178;
          plStack_178 = plVar14;
          (**(code **)(lVar32 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          plVar14 = plStack_178;
        }
      }
      plStack_178 = plVar14;
      plVar14 = (long *)CONCAT44(fStack_1d4,fStack_1d8);
      if (plVar14 != (long *)0x0) {
        plVar15 = plVar14 + 1;
        do {
          lVar32 = *plVar15;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar11) {
            *plVar15 = lVar32 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      goto LAB_10a8cb3a8;
    }
    plVar16 = plVar14 + 1;
    do {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plStack_180 = plVar15;
      plStack_178 = plVar14;
    } while (cVar5 != '\0');
    goto LAB_10a8cb4bc;
  }
  if (*(long *)(lStack_110 + 0x288) != 0) {
    plVar25 = (long *)(lStack_110 + 0x288);
    plVar14 = *(long **)(*(long *)(lStack_110 + 0x288) + 0x268);
    if (plVar14 == (long *)0x0) {
      fVar46 = 0.0;
      plVar15 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar14 + 0xb0))();
      plVar15 = *(long **)(*plVar25 + 0x268);
      fVar46 = (float)((ulong)plVar14 & 0xffffffff);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0xb8))();
      }
    }
    fVar46 = fVar46 / (float)((ulong)plVar15 & 0xffffffff);
    FUN_10a8cc1a0(*(undefined4 *)(lVar13 + 0x2a8),fVar46,0,&fStack_100,
                  *(undefined8 *)(lVar13 + 0x298));
    lVar22 = 0;
    uStack_138 = CONCAT44(fStack_f4,fStack_f8);
    uStack_140 = CONCAT44(fStack_fc,fStack_100);
    uStack_128 = CONCAT44(fStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8)));
    uVar28 = CONCAT26(uStack_ea,
                      CONCAT15(uStack_eb,
                               CONCAT14(uStack_ec,
                                        CONCAT13(uStack_ed,
                                                 CONCAT12(uStack_ee,CONCAT11(uStack_ef,uStack_f0))))
                              ));
    do {
      fVar34 = fVar46 * *(float *)(((ulong)&uStack_140 | 4) + lVar22);
      *(float *)(((ulong)&uStack_140 | 4) + lVar22) = fVar34;
      lVar22 = lVar22 + 8;
    } while (lVar22 != 0x20);
    uStack_130 = uVar28;
    func_0x00010acae698(*(undefined8 *)(lVar13 + 0x298));
    fVar46 = (fVar34 * 0.5) / ((float)uVar28 * 0.5);
    func_0x00010a04a704(&plStack_120,plVar25);
    goto LAB_10a8cae1c;
  }
  goto LAB_10a8cc028;
code_r0x00010a8cb61c:
  (**(code **)CONCAT44(fStack_f4,fStack_f8))(&fStack_f8);
  plStack_120 = plStack_1b0;
LAB_10a8cb634:
  plVar14 = plStack_118;
  plVar25 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
  plStack_1b0 = (long *)0x0;
  fStack_1a8 = 0.0;
  fStack_1a4 = 0.0;
  if (plStack_118 != (long *)0x0) {
    plVar15 = plStack_118 + 1;
    do {
      lVar32 = *plVar15;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      lVar32 = *plStack_118;
      plStack_118 = plVar25;
      (**(code **)(lVar32 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      plVar25 = plStack_118;
    }
  }
LAB_10a8cb678:
  plStack_118 = plVar25;
  plVar25 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
  if (plVar25 != (long *)0x0) {
    plVar14 = plVar25 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  fStack_1e0 = (float)uStack_240;
  fStack_1dc = uStack_240._4_4_;
  fStack_1d4 = fStack_250;
  fStack_1d0 = fStack_24c;
  fStack_1c8 = (float)uStack_230;
  fStack_1c4 = uStack_230._4_4_;
  if (lStack_110 == 0) {
    fStack_1c0 = fVar48 + fVar34 * 0.0 + fVar46 * 0.0;
    fStack_1d0 = -fStack_24c + uStack_240._4_4_ * 0.0 + uStack_230._4_4_ * 0.0;
    fStack_1cc = -fVar34 + fVar46 * 0.0 + fVar48 * 0.0;
    fStack_1e0 = fStack_250 * 0.0 + (float)uStack_240 + (float)uStack_230 * 0.0;
    fStack_1dc = fStack_24c * 0.0 + uStack_240._4_4_ + uStack_230._4_4_ * 0.0;
    fStack_1d8 = fVar34 * 0.0 + fVar46 + fVar48 * 0.0;
    fStack_1d4 = ((float)uStack_240 * 0.0 - fStack_250) + (float)uStack_230 * 0.0;
    fStack_1c8 = (float)uStack_230 + fStack_250 * 0.0 + (float)uStack_240 * 0.0;
    fStack_1c4 = uStack_230._4_4_ + fStack_24c * 0.0 + uStack_240._4_4_ * 0.0;
  }
  else {
    fStack_1d8 = fVar46;
    fStack_1cc = fVar34;
    fStack_1c0 = fVar48;
    FUN_10a8cc3f8(&fStack_100);
    auVar53._4_4_ = fStack_1dc;
    auVar53._0_4_ = fStack_1e0;
    auVar53._8_4_ = fStack_1d8;
    auVar8._4_4_ = fStack_1cc;
    auVar8._0_4_ = fStack_1d0;
    auVar8._8_4_ = fStack_1c8;
    auVar8._12_4_ = fStack_1c4;
    auVar54._4_4_ = fStack_1cc;
    auVar54._0_4_ = fStack_1d0;
    auVar54._8_4_ = fStack_1c8;
    auVar54._12_4_ = fStack_1c4;
    auVar53._12_4_ = fStack_1d4;
    auVar53 = NEON_ext(auVar53,auVar54,0xc,1);
    fVar34 = (float)CONCAT13(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,uStack_f0)));
    uVar9 = CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT14(uStack_ec,fVar34)));
    auVar55._4_4_ = fStack_fc;
    auVar55._0_4_ = fStack_fc;
    auVar55._8_4_ = fStack_fc;
    auVar55._12_4_ = fStack_fc;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar9;
    auVar55 = NEON_ext(auVar55,auVar44,4,1);
    fVar33 = fStack_f4 * fStack_1e0;
    auVar54 = NEON_rev64(auVar8,4);
    fVar35 = fStack_f8 * fStack_1c8;
    fVar36 = fStack_f8 * fStack_1c0;
    fVar48 = fStack_f4 * fStack_1dc;
    fVar40 = (float)CONCAT22(uStack_ea,CONCAT11(uStack_eb,uStack_ec));
    auVar7[1] = uStack_eb;
    auVar7[0] = uStack_ec;
    auVar7._2_2_ = uStack_ea;
    auVar7[4] = uStack_e8;
    auVar7._5_2_ = uStack_e7;
    auVar7[7] = uStack_e5;
    auVar7._8_4_ = fStack_e4;
    auVar6[1] = uStack_eb;
    auVar6[0] = uStack_ec;
    auVar6._2_2_ = uStack_ea;
    auVar6[4] = uStack_e8;
    auVar6._5_2_ = uStack_e7;
    auVar6[7] = uStack_e5;
    auVar6._8_4_ = fStack_e4;
    fVar38 = (float)CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8));
    fVar60 = fStack_e4 * fStack_1cc;
    fVar46 = fVar40 * fStack_1c4;
    auVar6._12_4_ = fStack_e0;
    auVar7._12_4_ = fStack_e0;
    auVar44 = NEON_ext(auVar6,auVar7,8,1);
    fStack_1cc = fStack_1cc * fVar34 + fStack_f4 * fStack_1d8 + fVar40 * fStack_1c0;
    fStack_1c8 = fStack_1d4 * fStack_e4 +
                 (float)(CONCAT17(uStack_e5,CONCAT25(uStack_e7,CONCAT14(uStack_e8,fVar40))) >> 0x20)
                 * fStack_1e0 + auVar44._4_4_ * fStack_1c8;
    fStack_1c4 = fStack_e4 * fStack_1d0 + fVar38 * fStack_1dc + fStack_e0 * fStack_1c4;
    fStack_1c0 = fVar60 + fVar38 * fStack_1d8 + fStack_e0 * fStack_1c0;
    fStack_1e0 = auVar53._0_4_ * auVar55._0_4_ + fStack_100 * fStack_1e0 + fVar35;
    fStack_1dc = auVar53._4_4_ * auVar55._4_4_ + fStack_100 * fStack_1dc + fStack_f8 * auVar54._8_4_
    ;
    fStack_1d8 = auVar53._8_4_ * auVar55._8_4_ + fStack_100 * fStack_1d8 + fVar36;
    fStack_1d4 = fStack_1d4 * auVar55._12_4_ + fVar33 + (float)(uVar9 >> 0x20) * auVar54._12_4_;
    fStack_1d0 = fStack_1d0 * fVar34 + fVar48 + fVar46;
  }
  uVar9 = uStack_148;
  lVar32 = 0;
  FUN_10a2421c8();
  fStack_e4 = 0.0;
  fStack_e0 = 1.4013e-45;
  fStack_100 = (float)uVar9;
  fStack_fc = (float)(uVar9 >> 0x20);
  uStack_f0 = 0x10;
  uStack_ef = 0;
  uStack_ee = 0;
  uStack_ed = 0;
  uStack_ec = 1;
  uStack_eb = 0;
  uStack_ea = 0;
  fStack_f8 = 1.4013e-45;
  fStack_f4 = 5.60519e-45;
  uStack_e8 = 0;
  FUN_10a048f04(&plStack_1b0,*(undefined8 *)(lVar32 + 0x1e0),&fStack_100);
  *(undefined1 *)((long)plStack_1b0 + 0x19) = 1;
  if (((*(byte *)(param_1 + 0x13) & 1) == 0) &&
     (FUN_10a8cc484(param_1 + 3), (*(byte *)(param_1 + 0x13) & 1) == 0)) goto LAB_10a8cc034;
  lVar32 = *(long *)(lVar26 + 0x118);
  if (lVar32 == 0) {
    fStack_f8 = 0.0;
    uStack_f0 = 0;
    uStack_ee = 0;
    uStack_ed = 0;
    uStack_ec = 0;
    uStack_ea = 0;
    fStack_100 = 0.0;
    fStack_fc = 0.0;
    fStack_f4 = 1.0;
    uStack_ef = 1;
    uStack_eb = 1;
    uStack_e8 = 0;
    uStack_e7 = 0;
    uStack_e5 = 0;
  }
  else {
    fStack_f8 = (float)*(undefined8 *)(lVar32 + 0x58);
    fStack_100 = (float)*(undefined8 *)(lVar32 + 0x50);
    fStack_fc = (float)((ulong)*(undefined8 *)(lVar32 + 0x50) >> 0x20);
    uVar37 = *(undefined8 *)(lVar32 + 100);
    uVar28 = *(undefined8 *)(lVar32 + 0x5c);
    uStack_ec = (undefined1)uVar37;
    uStack_eb = (undefined1)((ulong)uVar37 >> 8);
    uStack_ea = (undefined2)((ulong)uVar37 >> 0x10);
    uStack_e8 = (undefined1)((ulong)uVar37 >> 0x20);
    uStack_e7 = (undefined2)((ulong)uVar37 >> 0x28);
    uStack_e5 = (undefined1)((ulong)uVar37 >> 0x38);
    fStack_f4 = (float)uVar28;
    uStack_f0 = (undefined1)((ulong)uVar28 >> 0x20);
    uStack_ef = (undefined1)((ulong)uVar28 >> 0x28);
    uStack_ee = (undefined1)((ulong)uVar28 >> 0x30);
    uStack_ed = (undefined1)((ulong)uVar28 >> 0x38);
  }
  puVar19 = param_1 + 3;
  FUN_10ab13458(puVar19,&fStack_100);
  FUN_10ab1306c(param_1 + 3,param_3,puVar19,&plStack_120,&plStack_1b0,&uStack_140,&fStack_1e0,6,
                &uStack_160,lVar22 == 0,uStack_268);
  (**(code **)(*param_3 + 0x90))(param_3,0,3,3);
  plVar14 = plStack_1b0;
  ___dynamic_cast(plStack_1b0,&PTR_DAT_110ba0e18,&PTR_DAT_110baa0e8,0xfffffffffffffffe);
  plVar25 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
  if (plVar25 != (long *)0x0) {
    plVar15 = plVar25 + 1;
    do {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_180 = plVar14;
  plStack_178 = plVar25;
  (**(code **)*plVar14)();
  if (plVar25 != (long *)0x0) {
    plVar14 = plVar25 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
  if (plVar25 != (long *)0x0) {
    plVar14 = plVar25 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_10a8cbf00;
  }
  goto LAB_10a8cbf1c;
LAB_10a8cb480:
  (**(code **)CONCAT44(fStack_f4,fStack_f8))(&fStack_f8);
  plVar14 = (long *)CONCAT44(fStack_1a4,fStack_1a8);
  if (plVar14 != (long *)0x0) {
LAB_10a8cb4bc:
    plVar15 = plVar14 + 1;
    do {
      lVar32 = *plVar15;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = lVar32 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
LAB_10a8cb9f4:
  (**(code **)(*(long *)plStack_120[0x4d] + 0x90))(&fStack_100);
  lVar32 = lStack_110;
  if (lStack_110 != 0) {
    fVar38 = 1.0;
    if (*(long *)(lStack_110 + 0x288) != 0) {
      plVar14 = *(long **)(*(long *)(lStack_110 + 0x288) + 0x268);
      fVar35 = 0.0;
      if (plVar14 == (long *)0x0) {
        fVar38 = 0.0;
      }
      else {
        (**(code **)(*plVar14 + 0xb0))();
        fVar38 = (float)((ulong)plVar14 & 0xffffffff);
        plVar14 = *(long **)(*(long *)(lVar32 + 0x288) + 0x268);
        fVar35 = 0.0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0xb8))();
          fVar35 = (float)((ulong)plVar14 & 0xffffffff);
        }
      }
      fVar38 = fVar38 / fVar35;
    }
    uVar28 = *(undefined8 *)(lVar32 + 0x298);
    fVar36 = *(float *)(lVar32 + 0x2a8);
    fVar35 = fVar36;
    func_0x00010acae6ac(uVar28);
    fVar35 = fVar35 * 0.5;
    fVar40 = fVar40 * 0.5;
    fVar50 = fVar35 + 0.5;
    fVar51 = fVar40 + 0.5;
    func_0x00010acae698(uVar28);
    fVar35 = fVar35 * 0.5;
    fVar52 = fVar40 * 0.5;
    fVar49 = fVar35 * 0.0;
    fVar47 = fVar52 * 0.0;
    ___sincosf_stret();
    fVar33 = fVar36 / fVar38;
    fVar60 = -(fVar36 * fVar38) * 0.0;
    fVar41 = fVar40 + fVar60 + fVar50 * 0.0;
    fVar36 = -(fVar36 * fVar38) + fVar40 * 0.0 + fVar51 * 0.0;
    fVar60 = fVar60 + fVar40 * 0.0 + 0.0;
    fVar42 = fVar33 + fVar40 * 0.0 + fVar50 * 0.0;
    fVar38 = fVar40 + fVar33 * 0.0 + fVar51 * 0.0;
    fVar40 = fVar40 * 0.0 + fVar33 * 0.0 + 0.0;
    fVar33 = fVar49 * fVar42 + fVar35 * fVar41 + fVar49 * fVar50;
    fVar45 = fVar49 * fVar38 + fVar35 * fVar36 + fVar49 * fVar51;
    fVar49 = fVar49 + fVar40 * fVar49 + fVar35 * fVar60;
    fVar35 = fVar52 * fVar42 + fVar47 * fVar41 + fVar47 * fVar50;
    fVar56 = fVar52 * fVar38 + fVar47 * fVar36 + fVar47 * fVar51;
    fVar47 = fVar47 + fVar40 * fVar52 + fVar47 * fVar60;
    fVar50 = fVar50 + fVar42 * 0.0 + fVar41 * 0.0;
    fVar51 = fVar51 + fVar38 * 0.0 + fVar36 * 0.0;
    fVar41 = fVar40 * 0.0 + fVar60 * 0.0 + 1.0;
    fVar42 = fVar33 + fVar35 * 0.0 + fVar50 * 0.0;
    fVar52 = fVar45 + fVar56 * 0.0 + fVar51 * 0.0;
    fVar43 = fVar49 + fVar47 * 0.0 + fVar41 * 0.0;
    fVar57 = fVar35 + fVar33 * 0.0 + fVar50 * 0.0;
    fVar58 = fVar56 + fVar45 * 0.0 + fVar51 * 0.0;
    fVar59 = fVar47 + fVar49 * 0.0 + fVar41 * 0.0;
    fVar50 = fVar50 + fVar35 * -0.5 + fVar33 * -0.5;
    fVar51 = fVar51 + fVar56 * -0.5 + fVar45 * -0.5;
    fVar41 = fVar41 + fVar47 * -0.5 + fVar49 * -0.5;
    fVar36 = (float)CONCAT13(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,uStack_f0)));
    fVar33 = (float)CONCAT22(uStack_ea,CONCAT11(uStack_eb,uStack_ec));
    fVar60 = (float)CONCAT13(uStack_e5,CONCAT21(uStack_e7,uStack_e8));
    fVar40 = fVar43 * fStack_e4;
    fVar38 = fVar43 * fStack_e0;
    fVar35 = fVar57 * fStack_100;
    fVar47 = fVar36 * fVar58 + fVar57 * fStack_fc + fVar59 * fStack_e4;
    fVar49 = fVar33 * fVar58 + fVar57 * fStack_f8 + fVar59 * fStack_e0;
    fVar45 = fStack_f4 * fVar51 + fVar50 * fStack_100 + fVar41 * fVar60;
    fStack_e4 = fVar36 * fVar51 + fVar50 * fStack_fc + fVar41 * fStack_e4;
    uStack_f0 = SUB41(fVar47,0);
    uStack_ef = (undefined1)((uint)fVar47 >> 8);
    uStack_ee = (undefined1)((uint)fVar47 >> 0x10);
    uStack_ed = (undefined1)((uint)fVar47 >> 0x18);
    uStack_ec = SUB41(fVar49,0);
    uStack_eb = (undefined1)((uint)fVar49 >> 8);
    uStack_ea = (undefined2)((uint)fVar49 >> 0x10);
    fStack_e0 = fVar33 * fVar51 + fVar50 * fStack_f8 + fVar41 * fStack_e0;
    uStack_e8 = SUB41(fVar45,0);
    uStack_e7 = (undefined2)((uint)fVar45 >> 8);
    uStack_e5 = (undefined1)((uint)fVar45 >> 0x18);
    fStack_100 = fStack_f4 * fVar52 + fVar42 * fStack_100 + fVar43 * fVar60;
    fStack_fc = fVar36 * fVar52 + fVar42 * fStack_fc + fVar40;
    fStack_f8 = fVar33 * fVar52 + fVar42 * fStack_f8 + fVar38;
    fStack_f4 = fStack_f4 * fVar58 + fVar35 + fVar59 * fVar60;
  }
  if ((bVar29 & cVar4 == '\0') == 1) {
    plVar14 = plVar25;
    (**(code **)(*plVar25 + 0x68))();
    uStack_19b = (int)plVar14 != 1;
  }
  else {
    uStack_19b = false;
  }
  plVar14 = plStack_180;
  (**(code **)(*plStack_180 + 0x30))();
  lVar32 = plVar14[3];
  FUN_10a30f97c();
  FUN_10a30fb38(&plStack_190);
  plVar15 = plStack_190;
  (**(code **)(*plStack_190 + 0x30))();
  puVar19 = param_1;
  FUN_10a8ca470(param_1,lVar32);
  lVar32 = *(long *)(lVar26 + 0x118);
  if (lVar32 == 0) {
    fStack_1a8 = 0.0;
    uStack_1a0 = 0;
    uStack_19e = 0;
    uStack_19c = 0;
    uStack_19a = 0;
    plStack_1b0 = (long *)0x0;
    fStack_1a4 = 1.0;
    uStack_19f = 1;
    uStack_198 = 0;
  }
  else {
    plStack_1b0 = *(long **)(lVar32 + 0x50);
    fStack_1a8 = (float)*(undefined8 *)(lVar32 + 0x58);
    uVar37 = *(undefined8 *)(lVar32 + 100);
    uVar28 = *(undefined8 *)(lVar32 + 0x5c);
    uStack_19c = (undefined1)uVar37;
    uStack_19a = (undefined2)((ulong)uVar37 >> 0x10);
    uStack_198 = (undefined4)((ulong)uVar37 >> 0x20);
    fStack_1a4 = (float)uVar28;
    uStack_1a0 = (undefined1)((ulong)uVar28 >> 0x20);
    uStack_19f = (undefined1)((ulong)uVar28 >> 0x28);
    uStack_19e = (undefined2)((ulong)uVar28 >> 0x30);
  }
  if ((bool)uStack_19b) {
    (**(code **)(*plVar25 + 0x68))();
    bVar11 = (int)plVar25 == 0;
  }
  else {
    bVar11 = false;
  }
  fStack_1e0 = fStack_250 * 0.0 + (float)uStack_240 + (float)uStack_230 * 0.0;
  fStack_1dc = fStack_24c * 0.0 + uStack_240._4_4_ + uStack_230._4_4_ * 0.0;
  fStack_1d8 = fVar34 * 0.0 + fVar46 + fVar48 * 0.0;
  fStack_1d4 = -fStack_250 + (float)uStack_240 * 0.0 + (float)uStack_230 * 0.0;
  fStack_1d0 = -fStack_24c + uStack_240._4_4_ * 0.0 + uStack_230._4_4_ * 0.0;
  fStack_1cc = (fVar46 * 0.0 - fVar34) + fVar48 * 0.0;
  fStack_1c8 = (float)uStack_230 + fStack_250 * 0.0 + (float)uStack_240 * 0.0;
  fStack_1c4 = uStack_230._4_4_ + fStack_24c * 0.0 + uStack_240._4_4_ * 0.0;
  fStack_1c0 = fVar48 + fVar34 * 0.0 + fVar46 * 0.0;
  FUN_10a8be204(*puVar19,plVar14,&plStack_1b0,&fStack_100,&fStack_1e0,&uStack_160,lVar22 == 0,
                plVar15,bVar11);
  uVar9 = uStack_148;
  uVar3 = *(undefined4 *)((long)plStack_190 + 0x4c);
  plVar14 = (long *)0xa8;
  __Znwm();
  plVar14[1] = 0;
  plVar14[2] = 0;
  plVar15 = plVar14 + 3;
  *plVar14 = (long)&PTR_FUN_110baa4d8;
  FUN_10a1b2a84(plVar15,uVar9,uVar3,0);
  plVar25 = plStack_168;
  plStack_170 = plVar15;
  if (plStack_168 != (long *)0x0) {
    plVar15 = plStack_168 + 1;
    do {
      lVar32 = *plVar15;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      lVar32 = *plStack_168;
      plStack_168 = plVar14;
      (**(code **)(lVar32 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      plVar14 = plStack_168;
    }
  }
  plStack_168 = plVar14;
  (**(code **)(*plStack_190 + 0x10))(plStack_190,plStack_170[5],plStack_170[3],0,uStack_148._4_4_);
  lVar32 = 0;
  FUN_10a303694();
  if (lVar32 != 0) {
    FUN_10a5bbc70();
  }
  if (plStack_188 != (long *)0x0) {
    plVar25 = plStack_188 + 1;
    do {
      lVar32 = *plVar25;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *plVar25 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  if (plStack_178 != (long *)0x0) {
    plVar14 = plStack_178 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar25 = plStack_178;
    } while (cVar4 != '\0');
LAB_10a8cbf00:
    if (lVar32 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
LAB_10a8cbf1c:
  FUN_10a8bd864(param_1,plStack_170,param_4);
  plVar25 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar14 = plStack_168 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar14 = plStack_118 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar14 = plStack_108 + 1;
    do {
      lVar32 = *plVar14;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar32 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  func_0x00010a5dfd48(param_3 + 4);
LAB_10a8cbfdc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a8cc028:
  FUN_10a00946c(&UNK_10f680892);
LAB_10a8cc034:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a8cc038);
  (*pcVar10)();
}



/* Entry: 10a8cc1a0; end: 10a8cc3f7;  */

void FUN_10a8cc1a0(float param_1,float param_2,float param_3,float *param_4,long param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = param_1;
  fVar5 = param_2;
  func_0x00010acae6ac(param_5);
  fVar2 = *(float *)(param_5 + 0x24);
  fVar4 = *(float *)(param_5 + 0x30);
  *param_4 = fVar2;
  param_4[1] = fVar4;
  param_4[2] = fVar2;
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  param_4[7] = (float)uVar1;
  *(ulong *)(param_4 + 5) = CONCAT44((int)((ulong)uVar1 >> 0x20),fVar4);
  *(undefined8 *)(param_4 + 3) = uVar1;
  fVar8 = fVar5 / param_2;
  ___sincosf_stret();
  fVar2 = 1.0 - fVar4;
  fVar9 = param_1 * 0.0 + fVar2 * -0.0;
  fVar10 = fVar9 * 0.0;
  fVar7 = param_1 * -0.0 + fVar2 * -0.0;
  fVar13 = fVar7 * 0.0;
  fVar15 = fVar4 + fVar2 + fVar10 + fVar13;
  fVar6 = (fVar4 + fVar2) * 0.0;
  fVar13 = fVar6 + fVar9 + fVar13;
  fVar6 = fVar6 + fVar7 + fVar10;
  fVar10 = fVar6 + fVar13 * 0.0 + fVar15 * fVar8;
  fVar2 = fVar2 * 0.0;
  fVar11 = param_1 * -0.0 - fVar2;
  fVar4 = fVar4 + fVar2 * 0.0;
  fVar12 = fVar4 * 0.0;
  fVar7 = fVar2 * 0.0 - param_1;
  fVar9 = fVar7 * 0.0;
  fVar17 = fVar11 + fVar12 + fVar9;
  fVar11 = fVar11 * 0.0;
  fVar16 = fVar11 + fVar4 + fVar9;
  fVar11 = fVar11 + fVar7 + fVar12;
  fVar14 = fVar11 + fVar16 * 0.0 + fVar17 * fVar8;
  fVar7 = param_1 * 0.0 - fVar2;
  param_1 = param_1 + fVar2 * 0.0;
  fVar9 = param_1 * 0.0;
  fVar18 = fVar7 + fVar9 + fVar12;
  fVar7 = fVar7 * 0.0;
  fVar2 = fVar7 + param_1 + fVar12;
  fVar7 = fVar7 + fVar4 + fVar9;
  fVar4 = fVar7 + fVar2 * 0.0 + fVar18 * fVar8;
  fVar9 = fVar4 * 0.0;
  fVar12 = fVar10 + fVar9 + fVar14 * 0.0;
  fVar9 = fVar14 + fVar9 + fVar10 * 0.0;
  fVar4 = fVar4 + param_3 * fVar14 + fVar10 * 0.0;
  fVar10 = fVar4 * 0.0;
  fVar14 = fVar12 + fVar10 + fVar9 * 0.0;
  fVar8 = fVar9 + fVar10 + fVar12 * 0.0;
  fVar9 = (1.0 / param_2) * fVar4 + fVar9 * 0.0 + fVar12 * 0.0;
  fVar10 = fVar14 + (-(fVar5 * fVar9) - fVar3 * fVar8);
  fVar6 = fVar13 + fVar6 * 0.0 + fVar15 * fVar3;
  fVar13 = fVar16 + fVar11 * 0.0 + fVar17 * fVar3;
  fVar2 = fVar2 + fVar7 * 0.0 + fVar18 * fVar3;
  fVar4 = fVar2 * 0.0;
  fVar11 = fVar6 + fVar4 + fVar13 * 0.0;
  fVar4 = fVar13 + fVar4 + fVar6 * 0.0;
  fVar2 = fVar2 + param_3 * fVar13 + fVar6 * 0.0;
  fVar7 = fVar2 * 0.0;
  fVar13 = fVar11 + fVar7 + fVar4 * 0.0;
  fVar6 = fVar4 + fVar7 + fVar11 * 0.0;
  fVar2 = (1.0 / param_2) * fVar2 + fVar4 * 0.0 + fVar11 * 0.0;
  fVar5 = fVar13 + (-(fVar5 * fVar2) - fVar3 * fVar6);
  fVar4 = fVar9 + fVar8 * 0.0 + fVar14 * 0.0;
  fVar11 = fVar2 + fVar6 * 0.0 + fVar13 * 0.0;
  fVar7 = fVar8 + fVar9 * 0.0 + fVar14 * 0.0;
  fVar3 = fVar6 + fVar2 * 0.0 + fVar13 * 0.0;
  *(ulong *)(param_4 + 2) =
       CONCAT44(fVar10 + param_4[3] * fVar4 + param_4[2] * fVar7,
                fVar5 + param_4[3] * fVar11 + param_4[2] * fVar3);
  *(ulong *)param_4 =
       CONCAT44(fVar10 + param_4[1] * fVar4 + *param_4 * fVar7,
                fVar5 + param_4[1] * fVar11 + *param_4 * fVar3);
  *(ulong *)(param_4 + 6) =
       CONCAT44(fVar10 + param_4[7] * fVar4 + param_4[6] * fVar7,
                fVar5 + param_4[7] * fVar11 + param_4[6] * fVar3);
  *(ulong *)(param_4 + 4) =
       CONCAT44(fVar10 + param_4[5] * fVar4 + param_4[4] * fVar7,
                fVar5 + param_4[5] * fVar11 + param_4[4] * fVar3);
  return;
}



/* Entry: 10a8cc3f8; end: 10a8cc483;  */

void FUN_10a8cc3f8(float *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  if (*(long *)(param_2 + 0x288) == 0) {
    fVar12 = 1.0;
  }
  else {
    plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268);
    fVar11 = 0.0;
    if (plVar1 == (long *)0x0) {
      fVar12 = 0.0;
    }
    else {
      (**(code **)(*plVar1 + 0xb0))();
      fVar12 = (float)((ulong)plVar1 & 0xffffffff);
      plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268);
      fVar11 = 0.0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xb8))();
        fVar11 = (float)((ulong)plVar1 & 0xffffffff);
      }
    }
    fVar12 = fVar12 / fVar11;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x298);
  fVar3 = *(float *)(param_2 + 0x2a8);
  FUN_10a8cc1a0(&fStack_90);
  fVar11 = 0.25;
  fVar15 = (fStack_8c + 0.0 + fStack_84 + fStack_7c + fStack_74) * 0.25;
  func_0x00010acae698(uVar2);
  fVar4 = (fStack_8c * 0.5) / fVar12;
  fVar14 = 1.0 / (fVar11 * 0.5);
  fVar13 = (fStack_90 + 0.0 + fStack_88 + fStack_80 + fStack_78) * -0.25;
  fVar16 = 1.0 / fVar4;
  ___sincosf_stret();
  fVar5 = 1.0 - fVar4;
  fVar6 = fVar5 * 0.0;
  fVar7 = fVar4 + fVar6 * 0.0;
  fVar8 = fVar6 * 0.0 - fVar3;
  fVar10 = fVar3 * 0.0 + fVar6;
  fVar17 = fVar3 + fVar6 * 0.0;
  fVar6 = fVar3 * -0.0 + fVar6;
  fVar11 = fVar3 * -0.0 + fVar5 * 0.0;
  fVar9 = fVar3 * 0.0 + fVar5 * 0.0;
  fVar3 = fVar7 * 0.0;
  fVar18 = fVar8 * 0.0;
  fVar20 = fVar10 * 0.0;
  fVar19 = fVar20 + fVar7 + fVar18;
  fVar20 = fVar20 + fVar8 + fVar3;
  fVar10 = fVar10 + fVar3 + fVar18;
  fVar18 = fVar17 * 0.0;
  fVar8 = fVar6 * 0.0;
  fVar17 = fVar8 + fVar17 + fVar3;
  fVar8 = fVar8 + fVar7 + fVar18;
  fVar6 = fVar6 + fVar18 + fVar3;
  fVar3 = fVar11 * 0.0;
  fVar18 = fVar9 * 0.0;
  fVar7 = (fVar4 + fVar5) * 0.0;
  fVar11 = fVar7 + fVar11 + fVar18;
  fVar7 = fVar7 + fVar9 + fVar3;
  fVar3 = fVar4 + fVar5 + fVar3 + fVar18;
  fVar5 = fVar19 + fVar17 * 0.0 + fVar11 * 0.0;
  fVar9 = fVar20 + fVar8 * 0.0 + fVar7 * 0.0;
  fVar18 = fVar10 + fVar6 * 0.0 + fVar3 * 0.0;
  fVar21 = (fVar19 * 0.0 - fVar17) + fVar11 * 0.0;
  fVar22 = (fVar20 * 0.0 - fVar8) + fVar7 * 0.0;
  fVar23 = (fVar10 * 0.0 - fVar6) + fVar3 * 0.0;
  fVar11 = fVar11 + fVar17 * fVar15 + fVar13 * fVar19;
  fVar7 = fVar7 + fVar8 * fVar15 + fVar13 * fVar20;
  fVar3 = fVar3 + fVar6 * fVar15 + fVar13 * fVar10;
  fVar4 = fVar14 * 0.0;
  fVar6 = fVar16 * 0.0;
  fVar12 = 1.0 / fVar12;
  fVar8 = fVar12 * 0.0;
  fVar20 = fVar6 * 0.0;
  fVar10 = fVar14 + fVar20 + 0.0;
  fVar15 = fVar4 + fVar6 + 0.0;
  fVar17 = fVar4 + fVar20 + 0.0;
  fVar19 = (fVar6 - fVar14 * 0.0) + 0.0;
  fVar16 = (fVar16 - fVar4 * 0.0) + 0.0;
  fVar24 = (fVar6 - fVar4 * 0.0) + 0.0;
  fVar25 = fVar20 + fVar14 * 0.0 + 0.0;
  fVar6 = fVar6 + fVar4 * 0.0 + 0.0;
  fVar4 = fVar20 + fVar4 * 0.0 + 1.0;
  fVar20 = fVar9 * fVar19 + fVar5 * fVar10 + fVar18 * fVar25;
  fVar26 = fVar9 * fVar16 + fVar5 * fVar15 + fVar18 * fVar6;
  fVar5 = fVar9 * fVar24 + fVar5 * fVar17 + fVar18 * fVar4;
  fVar9 = fVar22 * fVar19 + fVar21 * fVar10 + fVar23 * fVar25;
  fVar13 = fVar22 * fVar16 + fVar21 * fVar15 + fVar23 * fVar6;
  fVar14 = fVar22 * fVar24 + fVar21 * fVar17 + fVar23 * fVar4;
  fVar10 = fVar7 * fVar19 + fVar11 * fVar10 + fVar3 * fVar25;
  fVar6 = fVar7 * fVar16 + fVar11 * fVar15 + fVar3 * fVar6;
  fVar11 = fVar7 * fVar24 + fVar11 * fVar17 + fVar3 * fVar4;
  fVar3 = fVar9 * 0.0;
  fVar4 = fVar13 * 0.0;
  fVar7 = fVar14 * 0.0;
  *param_1 = fVar20 + fVar3 + fVar10 * 0.0;
  param_1[1] = fVar26 + fVar4 + fVar6 * 0.0;
  param_1[2] = fVar5 + fVar7 + fVar11 * 0.0;
  param_1[3] = fVar12 * fVar9 + fVar8 * fVar20 + fVar8 * fVar10;
  param_1[4] = fVar12 * fVar13 + fVar8 * fVar26 + fVar8 * fVar6;
  param_1[5] = fVar12 * fVar14 + fVar8 * fVar5 + fVar8 * fVar11;
  param_1[6] = fVar10 + fVar3 + fVar20 * 0.0;
  param_1[7] = fVar6 + fVar4 + fVar26 * 0.0;
  param_1[8] = fVar11 + fVar7 + fVar5 * 0.0;
  return;
}



/* Entry: 10a8cc484; end: 10a8cc4b3;  */

void FUN_10a8cc484(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_10ab12f0c();
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  FUN_10ab12b08();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10a8cc4b4; end: 10a8cc6f7;  */

void FUN_10a8cc4b4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6808dd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f67fb58;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f67fcaf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8cc650(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6808f1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8cc650();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6808fa;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8cc650();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680904;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f67fb58;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8cc650();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8cc6f8; end: 10a8cc8cb;  */

void FUN_10a8cc6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,long *param_6)

{
  long *plVar1;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c2b180);
  *(char *)(param_5 + 5) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c2b1a0);
  *(char *)((long)param_5 + 0x15) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c26898);
  *(char *)((long)param_5 + 0x13) = (char)plVar1;
  (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c268b8);
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c268d8,0);
  *(char *)(param_5 + 4) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c268f8,0);
  *(char *)((long)param_5 + 0x11) = (char)plVar1;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c26918,0);
  *(char *)((long)param_5 + 0x12) = (char)param_6;
  return;
}



/* Entry: 10a8cc8cc; end: 10a8ccc9b;  */

void FUN_10a8cc8cc(float *param_1,float param_2,float param_3,long param_4,float *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar4 = 1.0;
  fVar14 = -1.0;
  if (*(char *)(param_4 + 0x14) == '\0') {
    fVar14 = 1.0;
  }
  fVar2 = 0.0;
  if (*(char *)(param_4 + 0x15) == '\x01') {
    fVar6 = (float)((uint)fVar14 ^ (uint)ABS(fVar14)) + 0.0;
    fVar15 = fVar14 * 0.0 + 0.0 + 0.0;
    uVar19 = NEON_fmov(0xbf800000,4);
    fVar11 = (float)((ulong)uVar19 >> 0x20);
  }
  else {
    fVar6 = 0.0;
    fVar11 = 1.0;
    fVar15 = 0.0;
  }
  fVar16 = 0.0;
  bVar1 = *(byte *)(param_4 + 0x10);
  fVar7 = 0.0;
  fVar3 = 1.0;
  fVar9 = 0.0;
  fVar12 = 0.0;
  fVar8 = 0.0;
  fVar5 = 1.0;
  if (bVar1 - 1 < 3) {
    fVar4 = (float)___sincosf_stret();
    fVar5 = 1.0 - fVar3;
    fVar9 = fVar5 * 0.0;
    fVar8 = fVar3 + fVar9 * 0.0;
    fVar7 = fVar4 + fVar9 * 0.0;
    fVar13 = (float)((uint)-fVar4 ^ (uint)ABS(-fVar4));
    fVar16 = fVar13 + fVar9;
    fVar17 = fVar9 * 0.0 - fVar4;
    fVar9 = (float)((uint)fVar4 ^ (uint)ABS(fVar4)) + fVar9;
    fVar20 = (float)((uint)fVar4 ^ (uint)ABS(fVar4)) + fVar5 * 0.0;
    fVar13 = fVar13 + fVar5 * 0.0;
    fVar5 = fVar3 + fVar5;
    fVar12 = fVar8 * 0.0;
    fVar3 = fVar7 * 0.0;
    fVar2 = fVar16 * 0.0;
    fVar4 = fVar2 + fVar8 + fVar3;
    fVar2 = fVar2 + fVar7 + fVar12;
    fVar16 = fVar16 + fVar12 + fVar3;
    fVar10 = fVar17 * 0.0;
    fVar3 = fVar9 * 0.0;
    fVar7 = fVar3 + fVar17 + fVar12;
    fVar3 = fVar3 + fVar8 + fVar10;
    fVar9 = fVar9 + fVar10 + fVar12;
    fVar10 = fVar20 * 0.0;
    fVar17 = fVar13 * 0.0;
    fVar8 = fVar5 * 0.0;
    fVar12 = fVar8 + fVar20 + fVar17;
    fVar8 = fVar8 + fVar13 + fVar10;
    fVar5 = fVar5 + fVar10 + fVar17;
  }
  fVar17 = fVar16 + fVar2 * 0.0 + fVar4 * 0.0;
  fVar18 = fVar9 + fVar3 * 0.0 + fVar7 * 0.0;
  fVar21 = fVar5 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar22 = *param_5;
  fVar23 = param_5[1];
  fVar24 = param_5[2];
  fVar25 = param_5[3];
  fVar26 = param_5[4];
  fVar27 = param_5[5];
  fVar28 = param_5[6];
  fVar29 = param_5[7];
  fVar30 = param_5[8];
  fVar10 = fVar18 * fVar23 + fVar22 * fVar17 + fVar24 * fVar21;
  fVar13 = fVar18 * fVar26 + fVar25 * fVar17 + fVar27 * fVar21;
  fVar20 = fVar6 * fVar2 + fVar14 * fVar4 + fVar15 * fVar16;
  fVar4 = fVar11 * fVar2 + fVar4 * 0.0 + fVar16 * 0.0;
  fVar16 = fVar6 * fVar3 + fVar14 * fVar7 + fVar15 * fVar9;
  fVar9 = fVar11 * fVar3 + fVar7 * 0.0 + fVar9 * 0.0;
  fVar14 = fVar6 * fVar8 + fVar14 * fVar12 + fVar15 * fVar5;
  fVar15 = fVar11 * fVar8 + fVar12 * 0.0 + fVar5 * 0.0;
  fVar2 = fVar16 * fVar23 + fVar20 * fVar22 + fVar14 * fVar24;
  fVar6 = fVar9 * fVar23 + fVar4 * fVar22 + fVar15 * fVar24;
  fVar11 = fVar16 * fVar26 + fVar20 * fVar25 + fVar14 * fVar27;
  fVar3 = fVar9 * fVar26 + fVar4 * fVar25 + fVar15 * fVar27;
  fVar14 = fVar16 * fVar29 + fVar20 * fVar28 + fVar14 * fVar30;
  fVar4 = fVar9 * fVar29 + fVar4 * fVar28 + fVar15 * fVar30;
  fVar15 = fVar18 * fVar29 + fVar28 * fVar17 + fVar30 * fVar21;
  *(ulong *)param_1 = CONCAT44(fVar6,fVar2);
  param_1[2] = fVar10;
  *(ulong *)(param_1 + 3) = CONCAT44(fVar3,fVar11);
  param_1[5] = fVar13;
  *(ulong *)(param_1 + 6) = CONCAT44(fVar4,fVar14);
  param_1[8] = fVar15;
  if (((*(byte *)(param_4 + 0x13) & 1) == 0) && (1.1920929e-07 <= ABS(param_2 - param_3))) {
    fVar5 = 1.0 / param_3;
    if ((bVar1 | 2) != 3) {
      fVar5 = param_3;
    }
    fVar16 = fVar11 * 0.0;
    fVar7 = fVar3 * 0.0;
    fVar9 = fVar13 * 0.0;
    if (fVar5 <= param_2) {
      fVar12 = 1.0;
      if (*(char *)(param_4 + 0x11) != '\x02') {
        fVar12 = 0.0;
      }
      fVar8 = -1.0;
      if (*(char *)(param_4 + 0x11) != '\0') {
        fVar8 = fVar12;
      }
      fVar20 = 1.0 / (param_2 / fVar5);
      fVar8 = (1.0 - fVar20) * fVar8;
      fVar5 = fVar2 + fVar16 + fVar14 * 0.0;
      fVar12 = fVar6 + fVar7 + fVar4 * 0.0;
      fVar17 = fVar10 + fVar9 + fVar15 * 0.0;
      uVar19 = CONCAT44(fVar3 * fVar20 + fVar6 * 0.0 + fVar4 * 0.0,
                        fVar11 * fVar20 + fVar2 * 0.0 + fVar14 * 0.0);
      fVar20 = fVar13 * fVar20 + fVar10 * 0.0 + fVar15 * 0.0;
      fVar16 = fVar11 * fVar8 + fVar2 * 0.0;
      fVar7 = fVar3 * fVar8 + fVar6 * 0.0;
      fVar9 = fVar13 * fVar8 + fVar10 * 0.0;
    }
    else {
      fVar12 = 1.0;
      if (*(char *)(param_4 + 0x12) != '\x02') {
        fVar12 = 0.0;
      }
      fVar8 = -1.0;
      if (*(char *)(param_4 + 0x12) != '\0') {
        fVar8 = fVar12;
      }
      fVar17 = 1.0 / (fVar5 / param_2);
      fVar8 = (1.0 - fVar17) * fVar8;
      fVar5 = fVar16 + fVar17 * fVar2 + fVar14 * 0.0;
      fVar12 = fVar7 + fVar17 * fVar6 + fVar4 * 0.0;
      fVar17 = fVar9 + fVar17 * fVar10 + fVar15 * 0.0;
      uVar19 = CONCAT44(fVar3 + fVar6 * 0.0 + fVar4 * 0.0,fVar11 + fVar2 * 0.0 + fVar14 * 0.0);
      fVar20 = fVar13 + fVar10 * 0.0 + fVar15 * 0.0;
      fVar16 = fVar16 + fVar2 * fVar8;
      fVar7 = fVar7 + fVar6 * fVar8;
      fVar9 = fVar9 + fVar8 * fVar10;
    }
    *param_1 = fVar5;
    *(undefined8 *)(param_1 + 3) = uVar19;
    *(ulong *)(param_1 + 1) = CONCAT44(fVar17,fVar12);
    param_1[5] = fVar20;
    *(ulong *)(param_1 + 6) = CONCAT44(fVar4 + fVar7,fVar14 + fVar16);
    param_1[8] = fVar15 + fVar9;
  }
  return;
}



/* Entry: 10a8ccc9c; end: 10a8cce73;  */

ulong FUN_10a8ccc9c(long param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  ulong uVar11;
  
  bVar5 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(char *)(param_1 + 0x15) == '\0') {
      uVar7 = 8;
      goto LAB_10a8ccde0;
    }
    pbVar8 = &UNK_10e4e24b8;
    uVar11 = 0;
    do {
      for (; pbVar9 = &UNK_10e4e2498 + uVar11 * 8, bVar5 <= *pbVar9; uVar11 = uVar11 << 1 | 1) {
        if (1 < uVar11) goto LAB_10a8ccd28;
        pbVar8 = pbVar9;
      }
      bVar2 = uVar11 == 0;
      pbVar9 = pbVar8;
      uVar11 = 2;
    } while (bVar2);
LAB_10a8ccd28:
    if ((pbVar9 != &UNK_10e4e24b8) && (*pbVar9 <= bVar5 && pbVar9 != &UNK_10e4e24b8)) {
      iVar4 = (*(int *)(pbVar9 + 4) + 0xb4) % 0x168;
      piVar10 = (int *)&UNK_10e4e24dc;
      uVar11 = 0;
      do {
        for (; piVar1 = (int *)(&UNK_10e4e24bc + uVar11 * 8), iVar4 <= *piVar1;
            uVar11 = uVar11 << 1 | 1) {
          piVar10 = piVar1;
          if (1 < uVar11) goto LAB_10a8ccdc0;
        }
        bVar2 = uVar11 == 0;
        uVar11 = 2;
      } while (bVar2);
LAB_10a8ccdc0:
      if ((piVar10 == (int *)&UNK_10e4e24dc) ||
         (iVar4 < *piVar10 || piVar10 == (int *)&UNK_10e4e24dc)) goto LAB_10a8cce68;
      uVar7 = 0;
      bVar5 = *(byte *)(piVar10 + 1);
      goto LAB_10a8ccde0;
    }
  }
  else {
    uVar7 = 4;
    if (*(char *)(param_1 + 0x15) == '\0') {
      uVar7 = 0;
    }
LAB_10a8ccde0:
    pbVar8 = &UNK_10e4e2500;
    uVar11 = 0;
    do {
      for (; pbVar9 = &UNK_10e4e24e0 + uVar11 * 8, bVar5 <= *pbVar9; uVar11 = uVar11 << 1 | 1) {
        if (1 < uVar11) goto LAB_10a8cce34;
        pbVar8 = pbVar9;
      }
      bVar2 = uVar11 == 0;
      pbVar9 = pbVar8;
      uVar11 = 2;
    } while (bVar2);
LAB_10a8cce34:
    if ((pbVar9 != &UNK_10e4e2500) && (*pbVar9 <= bVar5 && pbVar9 != &UNK_10e4e2500)) {
      return (ulong)(*(uint *)(pbVar9 + 4) | uVar7);
    }
  }
  FUN_10a00946c(&UNK_10f68090e);
LAB_10a8cce68:
  FUN_10a00946c(&UNK_10f680932);
  uVar6 = 0x9e3779b9;
  uVar11 = uVar6;
  if (*param_2 != 0.0) {
    uVar11 = (ulong)(uint)*param_2 + 0x9e3779b9;
  }
  uVar3 = uVar6;
  if (param_2[1] != 0.0) {
    uVar3 = (ulong)(uint)param_2[1] + 0x9e3779b9;
  }
  uVar11 = uVar3 + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11;
  uVar3 = uVar6;
  if (param_2[2] != 0.0) {
    uVar3 = (ulong)(uint)param_2[2] + 0x9e3779b9;
  }
  uVar11 = uVar3 + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11;
  if (param_2[3] != 0.0) {
    uVar6 = (ulong)(uint)param_2[3] + 0x9e3779b9;
  }
  uVar11 = uVar6 + uVar11 * 0x40 + (uVar11 >> 2) ^ uVar11;
  uVar11 = (ulong)*(byte *)(param_2 + 4) + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar11 = (ulong)*(byte *)((long)param_2 + 0x11) + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^
           uVar11;
  uVar11 = (ulong)*(byte *)((long)param_2 + 0x12) + uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b9 ^
           uVar11;
  uVar11 = ((ulong)*(byte *)((long)param_2 + 0x13) | uVar11 << 6) + (uVar11 >> 2) + 0x9e3779b9 ^
           uVar11;
  uVar11 = ((ulong)*(byte *)(param_2 + 5) | uVar11 << 6) + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  return ((ulong)*(byte *)((long)param_2 + 0x15) | uVar11 << 6) + (uVar11 >> 2) + 0x9e3779b9 ^
         uVar11;
}



/* Entry: 10a8cce74; end: 10a8ccffb;  */

ulong FUN_10a8cce74(undefined8 param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x9e3779b9;
  uVar3 = uVar2;
  if (*param_2 != 0.0) {
    uVar3 = (ulong)(uint)*param_2 + 0x9e3779b9;
  }
  uVar1 = uVar2;
  if (param_2[1] != 0.0) {
    uVar1 = (ulong)(uint)param_2[1] + 0x9e3779b9;
  }
  uVar3 = uVar1 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  uVar1 = uVar2;
  if (param_2[2] != 0.0) {
    uVar1 = (ulong)(uint)param_2[2] + 0x9e3779b9;
  }
  uVar3 = uVar1 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  if (param_2[3] != 0.0) {
    uVar2 = (ulong)(uint)param_2[3] + 0x9e3779b9;
  }
  uVar3 = uVar2 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  uVar3 = (ulong)*(byte *)(param_2 + 4) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x11) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = (ulong)*(byte *)((long)param_2 + 0x12) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = ((ulong)*(byte *)((long)param_2 + 0x13) | uVar3 << 6) + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar3 = ((ulong)*(byte *)(param_2 + 5) | uVar3 << 6) + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  return ((ulong)*(byte *)((long)param_2 + 0x15) | uVar3 << 6) + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
}



/* Entry: 10a8ccffc; end: 10a8cd0e3;  */

void FUN_10a8ccffc(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8cd0e4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f680946;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a8ef858();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68094d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a8ef9cc(param_1,&puStack_98);
  FUN_10a8efad8(param_1);
  return;
}



/* Entry: 10a8cd0e4; end: 10a8cd1bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a8cd17c) */

undefined1  [16] FUN_10a8cd0e4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68197b,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8ef75c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8cd1bc; end: 10a8cd29f;  */

undefined8 * FUN_10a8cd1bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110bf2dc0;
  param_1[2] = &PTR_DAT_110bf2e30;
  param_1[7] = &PTR_DAT_110bf2e88;
  puVar1 = param_1;
  func_0x00010a0fda30();
  param_1[8] = puVar1;
  param_1[9] = param_2;
  param_1[2] = &PTR_DAT_110c2c608;
  *param_1 = &PTR_FUN_110c2c598;
  param_1[7] = &PTR_DAT_110c2c660;
  param_1[0xb] = 0x3f80000000000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x1010100;
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0x3f8000003f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0x3f80000000000000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  return param_1;
}



/* Entry: 10a8cd2a0; end: 10a8cd2b3;  */

long FUN_10a8cd2a0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a8cd2b4; end: 10a8cd2f7;  */

void FUN_10a8cd2b4(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8cd2f8; end: 10a8cd2ff;  */

void FUN_10a8cd2f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c2b180);
  *(char *)(param_5 + 100) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c2b1a0);
  *(char *)(param_5 + 0x65) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c26898);
  *(char *)(param_5 + 99) = (char)plVar1;
  (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c268b8);
  *(undefined4 *)(param_5 + 0x50) = param_1;
  *(undefined4 *)(param_5 + 0x54) = param_2;
  *(undefined4 *)(param_5 + 0x58) = param_3;
  *(undefined4 *)(param_5 + 0x5c) = param_4;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c268d8,0);
  *(char *)(param_5 + 0x60) = (char)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c268f8,0);
  *(char *)(param_5 + 0x61) = (char)plVar1;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c26918,0);
  *(char *)(param_5 + 0x62) = (char)param_6;
  return;
}



/* Entry: 10a8cd300; end: 10a8cd37b;  */

void FUN_10a8cd300(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0x140))
            (param_2,&PTR_DAT_110c2b1c0,*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  puStack_30 = &UNK_10f68197b;
  uStack_28 = 0xb;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c2b1e0,&puStack_30);
  func_0x00010a8cc7ec(param_1 + 0x50,param_2);
  return;
}



/* Entry: 10a8cd37c; end: 10a8cd40f;  */

undefined1  [16] FUN_10a8cd37c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f681a23;
  return auVar1;
}



/* Entry: 10a8cd410; end: 10a8cd4b7;  */

void FUN_10a8cd410(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f67fb58;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f67fb58;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a8cd4b8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68095b;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f67fb58;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f67fb58;
  uStack_38 = 0;
  FUN_10a8efc90();
  FUN_10a8eff54(param_1);
  return;
}



/* Entry: 10a8cd4b8; end: 10a8cd58f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8cd550) */

undefined1  [16] FUN_10a8cd4b8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f681a23,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8efb94(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8cd590; end: 10a8cd693;  */

long * FUN_10a8cd590(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10a1da04c(param_1,param_2 + 1);
  lVar3 = *param_2;
  *plVar1 = lVar3;
  plVar1[2] = (long)&PTR_FUN_110c2c8c8;
  plVar1[5] = (long)&PTR_FUN_110c2c8f8;
  *(long *)((long)plVar1 + *(long *)(lVar3 + -0x18)) = param_2[5];
  plVar1[0x15] = (long)&PTR_FUN_110c2c950;
  plVar1[0x52] = 0;
  plVar1[0x51] = 0;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bcfba8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110c6a8d8;
  puVar2[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar2 + 0x44) = 0x3f8000003f800000;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0xbf800000bf800000;
  param_1[0x53] = (long)(puVar2 + 3);
  param_1[0x54] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  return param_1;
}



/* Entry: 10a8cd694; end: 10a8cd93f;  */

void FUN_10a8cd694(float *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  
  if ((*(long *)(param_2 + 0x288) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x90))(&fStack_88);
    fVar4 = fStack_74 * 0.0 + fStack_80 * 0.5 + fStack_68 * 0.0;
    fVar10 = fStack_74 * 0.5 + fStack_80 * 0.0 + fStack_68 * 0.0;
    fVar11 = fStack_74 * 0.5 + fStack_80 * 0.5 + fStack_68;
    fVar16 = (float)uStack_70;
    fVar17 = (float)((ulong)uStack_70 >> 0x20);
    fVar12 = fStack_7c * 0.0 + fStack_88 * 0.5 + fVar16 * 0.0;
    fVar13 = fStack_78 * 0.0 + fStack_84 * 0.5 + fVar17 * 0.0;
    fVar14 = fStack_7c * 0.5 + fStack_88 * 0.0 + fVar16 * 0.0;
    fVar15 = fStack_78 * 0.5 + fStack_84 * 0.0 + fVar17 * 0.0;
    fVar16 = fStack_7c * 0.5 + fStack_88 * 0.5 + fVar16;
    fVar17 = fStack_78 * 0.5 + fStack_84 * 0.5 + fVar17;
    FUN_10a8cc3f8(&fStack_ac,param_2);
    fVar21 = fStack_a8 * 0.0 + fStack_ac * 0.5 + fStack_a4 * 0.5;
    fVar3 = fStack_a8 * 0.5 + fStack_ac * 0.0 + fStack_a4 * 0.5;
    fStack_a4 = fStack_a4 + fStack_a8 * 0.0 + fStack_ac * 0.0;
    fVar20 = fStack_9c * 0.0 + fStack_a0 * 0.5 + fStack_98 * 0.5;
    fVar5 = fStack_9c * 0.5 + fStack_a0 * 0.0 + fStack_98 * 0.5;
    fStack_98 = fStack_98 + fStack_9c * 0.0 + fStack_a0 * 0.0;
    fVar6 = fStack_90 * 0.0 + fStack_94 * 0.5 + fStack_8c * 0.5;
    fVar9 = fStack_90 * 0.5 + fStack_94 * 0.0 + fStack_8c * 0.5;
    fStack_8c = fStack_8c + fStack_90 * 0.0 + fStack_94 * 0.0;
    fVar8 = -(fVar9 * fStack_98) + fStack_8c * fVar5;
    fVar18 = -(fVar9 * fStack_a4) + fStack_8c * fVar3;
    fVar23 = -(fVar5 * fStack_a4) + fStack_98 * fVar3;
    fVar22 = 1.0 / (-(fVar20 * fVar18) + fVar8 * fVar21 + fVar23 * fVar6);
    fVar8 = fVar8 * fVar22;
    fVar24 = -((-(fVar6 * fStack_98) + fStack_8c * fVar20) * fVar22);
    fVar25 = (-(fVar6 * fVar5) + fVar9 * fVar20) * fVar22;
    fVar19 = -(fVar18 * fVar22);
    fVar18 = (-(fVar6 * fStack_a4) + fStack_8c * fVar21) * fVar22;
    fVar7 = -((-(fVar6 * fVar3) + fVar9 * fVar21) * fVar22);
    fVar23 = fVar23 * fVar22;
    fVar6 = -((-(fVar20 * fStack_a4) + fStack_98 * fVar21) * fVar22);
    fVar22 = (-(fVar20 * fVar3) + fVar5 * fVar21) * fVar22;
    fVar5 = fVar14 * fVar19 + fVar12 * fVar8 + fVar16 * fVar23;
    fVar9 = fVar15 * fVar19 + fVar13 * fVar8 + fVar17 * fVar23;
    fVar8 = fVar10 * fVar19 + fVar8 * fVar4 + fVar23 * fVar11;
    fVar23 = fVar14 * fVar18 + fVar12 * fVar24 + fVar16 * fVar6;
    fVar19 = fVar15 * fVar18 + fVar13 * fVar24 + fVar17 * fVar6;
    fVar6 = fVar10 * fVar18 + fVar24 * fVar4 + fVar6 * fVar11;
    fVar16 = fVar14 * fVar7 + fVar12 * fVar25 + fVar16 * fVar22;
    fVar17 = fVar15 * fVar7 + fVar13 * fVar25 + fVar17 * fVar22;
    fVar3 = fVar10 * fVar7 + fVar25 * fVar4 + fVar22 * fVar11;
    *(ulong *)param_1 =
         CONCAT44(fVar9 + fVar19 * 0.0 + fVar17 * 0.0,fVar5 + fVar23 * 0.0 + fVar16 * 0.0);
    param_1[2] = fVar8 + fVar6 * 0.0 + fVar3 * 0.0;
    *(ulong *)(param_1 + 3) =
         CONCAT44(-fVar19 + fVar9 * 0.0 + fVar17 * 0.0,-fVar23 + fVar5 * 0.0 + fVar16 * 0.0);
    param_1[5] = (fVar8 * 0.0 - fVar6) + fVar3 * 0.0;
    param_1[6] = fVar16 + fVar23 + fVar5 * 0.0;
    param_1[7] = fVar17 + fVar19 + fVar9 * 0.0;
    param_1[8] = fVar3 + fVar6 + fVar8 * 0.0;
    return;
  }
  if (*(long *)(param_2 + 0x288) == 0) {
    fVar6 = 1.0;
  }
  else {
    plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268);
    fVar3 = 0.0;
    if (plVar1 == (long *)0x0) {
      fVar6 = 0.0;
    }
    else {
      (**(code **)(*plVar1 + 0xb0))();
      fVar6 = (float)((ulong)plVar1 & 0xffffffff);
      plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268);
      fVar3 = 0.0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xb8))();
        fVar3 = (float)((ulong)plVar1 & 0xffffffff);
      }
    }
    fVar6 = fVar6 / fVar3;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x298);
  fVar22 = *(float *)(param_2 + 0x2a8);
  fStack_94 = fVar6;
  FUN_10a8cc1a0(&fStack_90);
  fVar3 = 0.25;
  fVar19 = (fStack_8c + 0.0 + fStack_84 + fStack_7c + fStack_74) * 0.25;
  func_0x00010acae698(uVar2);
  fVar6 = (fStack_8c * 0.5) / fVar6;
  fVar23 = 1.0 / (fVar3 * 0.5);
  fVar7 = (fStack_90 + 0.0 + fStack_88 + fStack_80 + fStack_78) * -0.25;
  fVar10 = 1.0 / fVar6;
  ___sincosf_stret();
  fVar16 = 1.0 - fVar6;
  fVar5 = fVar16 * 0.0;
  fVar17 = fVar6 + fVar5 * 0.0;
  fVar9 = fVar5 * 0.0 - fVar22;
  fVar8 = fVar22 * 0.0 + fVar5;
  fVar11 = fVar22 + fVar5 * 0.0;
  fVar5 = fVar22 * -0.0 + fVar5;
  fVar3 = fVar22 * -0.0 + fVar16 * 0.0;
  fVar18 = fVar22 * 0.0 + fVar16 * 0.0;
  fVar22 = fVar17 * 0.0;
  fVar12 = fVar9 * 0.0;
  fVar4 = fVar8 * 0.0;
  fVar13 = fVar4 + fVar17 + fVar12;
  fVar4 = fVar4 + fVar9 + fVar22;
  fVar8 = fVar8 + fVar22 + fVar12;
  fVar12 = fVar11 * 0.0;
  fVar9 = fVar5 * 0.0;
  fVar11 = fVar9 + fVar11 + fVar22;
  fVar9 = fVar9 + fVar17 + fVar12;
  fVar5 = fVar5 + fVar12 + fVar22;
  fVar22 = fVar3 * 0.0;
  fVar12 = fVar18 * 0.0;
  fVar17 = (fVar6 + fVar16) * 0.0;
  fVar3 = fVar17 + fVar3 + fVar12;
  fVar17 = fVar17 + fVar18 + fVar22;
  fVar6 = fVar6 + fVar16 + fVar22 + fVar12;
  fVar16 = fVar13 + fVar11 * 0.0 + fVar3 * 0.0;
  fVar18 = fVar4 + fVar9 * 0.0 + fVar17 * 0.0;
  fVar12 = fVar8 + fVar5 * 0.0 + fVar6 * 0.0;
  fVar14 = (fVar13 * 0.0 - fVar11) + fVar3 * 0.0;
  fVar15 = (fVar4 * 0.0 - fVar9) + fVar17 * 0.0;
  fVar20 = (fVar8 * 0.0 - fVar5) + fVar6 * 0.0;
  fVar3 = fVar3 + fVar11 * fVar19 + fVar7 * fVar13;
  fVar17 = fVar17 + fVar9 * fVar19 + fVar7 * fVar4;
  fVar6 = fVar6 + fVar5 * fVar19 + fVar7 * fVar8;
  fVar22 = fVar23 * 0.0;
  fVar5 = fVar10 * 0.0;
  fStack_94 = 1.0 / fStack_94;
  fVar9 = fStack_94 * 0.0;
  fVar4 = fVar5 * 0.0;
  fVar8 = fVar23 + fVar4 + 0.0;
  fVar19 = fVar22 + fVar5 + 0.0;
  fVar11 = fVar22 + fVar4 + 0.0;
  fVar13 = (fVar5 - fVar23 * 0.0) + 0.0;
  fVar10 = (fVar10 - fVar22 * 0.0) + 0.0;
  fVar21 = (fVar5 - fVar22 * 0.0) + 0.0;
  fVar24 = fVar4 + fVar23 * 0.0 + 0.0;
  fVar5 = fVar5 + fVar22 * 0.0 + 0.0;
  fVar22 = fVar4 + fVar22 * 0.0 + 1.0;
  fVar4 = fVar18 * fVar13 + fVar16 * fVar8 + fVar12 * fVar24;
  fVar25 = fVar18 * fVar10 + fVar16 * fVar19 + fVar12 * fVar5;
  fVar16 = fVar18 * fVar21 + fVar16 * fVar11 + fVar12 * fVar22;
  fVar18 = fVar15 * fVar13 + fVar14 * fVar8 + fVar20 * fVar24;
  fVar7 = fVar15 * fVar10 + fVar14 * fVar19 + fVar20 * fVar5;
  fVar23 = fVar15 * fVar21 + fVar14 * fVar11 + fVar20 * fVar22;
  fVar8 = fVar17 * fVar13 + fVar3 * fVar8 + fVar6 * fVar24;
  fVar5 = fVar17 * fVar10 + fVar3 * fVar19 + fVar6 * fVar5;
  fVar6 = fVar17 * fVar21 + fVar3 * fVar11 + fVar6 * fVar22;
  fVar3 = fVar18 * 0.0;
  fVar22 = fVar7 * 0.0;
  fVar17 = fVar23 * 0.0;
  *param_1 = fVar4 + fVar3 + fVar8 * 0.0;
  param_1[1] = fVar25 + fVar22 + fVar5 * 0.0;
  param_1[2] = fVar16 + fVar17 + fVar6 * 0.0;
  param_1[3] = fStack_94 * fVar18 + fVar9 * fVar4 + fVar9 * fVar8;
  param_1[4] = fStack_94 * fVar7 + fVar9 * fVar25 + fVar9 * fVar5;
  param_1[5] = fStack_94 * fVar23 + fVar9 * fVar16 + fVar9 * fVar6;
  param_1[6] = fVar8 + fVar3 + fVar4 * 0.0;
  param_1[7] = fVar5 + fVar22 + fVar25 * 0.0;
  param_1[8] = fVar6 + fVar17 + fVar16 * 0.0;
  return;
}



/* Entry: 10a8cd940; end: 10a8cd953;  */

int FUN_10a8cd940(float param_1)

{
  undefined *puVar1;
  long *plVar2;
  float fVar3;
  
  puVar1 = &UNK_10f680968;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x288) != 0) {
    plVar2 = *(long **)(*(long *)(puVar1 + 0x288) + 0x268);
    if (plVar2 == (long *)0x0) {
      fVar3 = 0.0;
    }
    else {
      (**(code **)(*plVar2 + 0xb0))();
      fVar3 = (float)((ulong)plVar2 & 0xffffffff);
    }
    func_0x00010acae698(*(undefined8 *)(puVar1 + 0x298));
    return (int)(fVar3 * param_1 * 0.5);
  }
  return 1;
}



/* Entry: 10a8cd954; end: 10a8cda2b;  */

int FUN_10a8cd954(float param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  
  if (*(long *)(param_2 + 0x288) != 0) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x288) + 0x268);
    if (plVar1 == (long *)0x0) {
      fVar2 = 0.0;
    }
    else {
      (**(code **)(*plVar1 + 0xb0))();
      fVar2 = (float)((ulong)plVar1 & 0xffffffff);
    }
    func_0x00010acae698(*(undefined8 *)(param_2 + 0x298));
    return (int)(fVar2 * param_1 * 0.5);
  }
  return 1;
}



/* Entry: 10a8cda2c; end: 10a8cdb3f;  */

void FUN_10a8cda2c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined ***pppuStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((*param_2 != 0) && (*(long **)(*param_2 + 0x268) == param_1)) {
    pppuVar3 = (undefined ***)&UNK_10f6809b6;
    FUN_10a00946c();
    FUN_10a042dcc(&uStack_30);
    __Unwind_Resume();
    pcStack_38 = FUN_10a8cdb40;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = param_2;
    puStack_40 = &stack0xfffffffffffffff0;
    (**(code **)(*param_2 + 0x248))(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pppuVar3 + 0xf,plVar4);
    uStack_a8 = 0x10a8f0010;
    ppuStack_a0 = &PTR_FUN_110c2bd58;
    ppuVar6 = &PTR_DAT_110c26938;
    pppuStack_98 = pppuVar3;
    FUN_10a02d928(param_2,&PTR_DAT_110c26938,&uStack_a8,0);
    pppuVar5 = &ppuStack_a0;
    (*(code *)*ppuStack_a0)();
    pppuStack_d8 = pppuVar5;
    if (((ulong)param_2 & 1) == 0) {
      puStack_b8 = (undefined *)0x0;
      pppuStack_b0 = (undefined ***)0x0;
      ppuVar6 = &puStack_b8;
      FUN_10a8cda2c();
      pppuVar5 = pppuStack_b0;
      pppuStack_d8 = pppuVar3;
      if (pppuStack_b0 != (undefined ***)0x0) {
        pppuVar3 = pppuStack_b0 + 1;
        do {
          ppuVar9 = *pppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
          if (bVar2) {
            *pppuVar3 = (undefined **)((long)ppuVar9 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppuVar9 == (undefined **)0x0) {
          (*(code *)(*pppuStack_b0)[2])(pppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuStack_d8 = pppuVar5;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      func_0x00010a05248c(&puStack_b8);
      pppuVar3 = pppuStack_d8;
      __Unwind_Resume();
      pcStack_c8 = FUN_10a8cdc78;
      puStack_f0 = &UNK_10f680c3f;
      uStack_e8 = 0xd;
      ppuStack_f8 = pppuVar3[0x52];
      ppuStack_100 = pppuVar3[0x51];
      if (pppuVar3[0x52] != (undefined **)0x0) {
        ppuVar9 = pppuVar3[0x52] + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar2) {
            *ppuVar9 = *ppuVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_e0 = param_2;
      ppuStack_d0 = &puStack_40;
      (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c26938,&ppuStack_100,&puStack_f0);
      ppuVar6 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        ppuVar9 = ppuStack_f8 + 1;
        do {
          puVar8 = *ppuVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar2) {
            *ppuVar9 = puVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar8 == (undefined *)0x0) {
          (**(code **)(*ppuStack_f8 + 0x10))(ppuStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      return;
    }
    return;
  }
  func_0x00010a04a704(param_1 + 0x51);
  lVar7 = param_1[0x51];
  if (lVar7 == 0) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_10a1e3a04(param_1,&uStack_30);
    if (plStack_28 == (long *)0x0) goto LAB_10a8cdafc;
    plVar4 = plStack_28 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uStack_30 = *(undefined8 *)(lVar7 + 0x268);
    plStack_28 = *(long **)(lVar7 + 0x270);
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a1e3a04(param_1,&uStack_30);
    if (plStack_28 == (long *)0x0) goto LAB_10a8cdafc;
    plVar4 = plStack_28 + 1;
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar4 = plStack_28;
  if (lVar7 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a8cdafc:
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}



/* Entry: 10a8cdb40; end: 10a8cdc77;  */

void FUN_10a8cdb40(undefined ***param_1,long *param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar4);
  uStack_78 = 0x10a8f0010;
  ppuStack_70 = &PTR_FUN_110c2bd58;
  ppuVar6 = &PTR_DAT_110c26938;
  pppuStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c26938,&uStack_78,0);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  pppuStack_a8 = pppuVar5;
  if (((ulong)param_2 & 1) == 0) {
    puStack_88 = (undefined *)0x0;
    pppuStack_80 = (undefined ***)0x0;
    ppuVar6 = &puStack_88;
    FUN_10a8cda2c();
    pppuVar5 = pppuStack_80;
    pppuStack_a8 = param_1;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_80 + 1;
      do {
        ppuVar8 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar8 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuStack_a8 = pppuVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_88);
  pppuVar5 = pppuStack_a8;
  __Unwind_Resume();
  pcStack_98 = FUN_10a8cdc78;
  puStack_c0 = &UNK_10f680c3f;
  uStack_b8 = 0xd;
  ppuStack_c8 = pppuVar5[0x52];
  ppuStack_d0 = pppuVar5[0x51];
  if (pppuVar5[0x52] != (undefined **)0x0) {
    ppuVar8 = pppuVar5[0x52] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c26938,&ppuStack_d0,&puStack_c0);
  ppuVar6 = ppuStack_c8;
  if (ppuStack_c8 != (undefined **)0x0) {
    ppuVar8 = ppuStack_c8 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return;
}



/* Entry: 10a8cdc78; end: 10a8cdd23;  */

void FUN_10a8cdc78(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f680c3f;
  uStack_28 = 0xd;
  plStack_38 = *(long **)(param_1 + 0x290);
  uStack_40 = *(undefined8 *)(param_1 + 0x288);
  if (*(long *)(param_1 + 0x290) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x290) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c26938,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a8cdd24; end: 10a8ce16f;  */

void FUN_10a8cdd24(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6627dd,0x20);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c297c8;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c297c8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c2c758;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8ce150;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10a8f0074,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6809ff,FUN_10a8f0248,FUN_10a8f0304);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f56ed83,FUN_10a8f0508,FUN_10a8f0618);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f56e9c3,FUN_10a8f0704,FUN_10a8f07bc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10a8f0888,FUN_10a8f0944);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f680a15,FUN_10a8f0a0c,FUN_10a8f0b1c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f680a26,FUN_10a8f0bd4,FUN_10a8f0ce4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f680a2f,FUN_10a8f0d9c,FUN_10a8f0eac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a8f0f64,FUN_10a8f101c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a8f111c,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6627dd,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a8ce150:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8ce154);
  (*pcVar6)();
}



/* Entry: 10a8ce170; end: 10a8ce283;  */

void FUN_10a8ce170(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_30;
  long *plStack_28;
  
  iVar4 = *(int *)(param_1 + 0x300);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  bVar6 = iVar4 != 5;
  ppuVar2 = &PTR_FUN_110c2b250;
  if (bVar6) {
    ppuVar2 = &PTR_DAT_110c2b2a0;
  }
  ppuVar3 = &PTR_FUN_110c27558;
  if (bVar6) {
    ppuVar3 = &PTR_FUN_110c275c8;
  }
  *plVar7 = (long)ppuVar2;
  lVar8 = *(long *)(param_1 + 0x300);
  lVar10 = *(long *)(param_1 + 0x318);
  lVar9 = *(long *)(param_1 + 0x310);
  plVar7[5] = *(long *)(param_1 + 0x308);
  plVar7[4] = lVar8;
  plVar7[7] = lVar10;
  plVar7[6] = lVar9;
  *(undefined4 *)(plVar7 + 8) = *(undefined4 *)(param_1 + 800);
  plStack_30 = plVar7 + 3;
  *plStack_30 = (long)ppuVar3;
  plStack_28 = plVar7;
  FUN_10a8ce700(param_1 + 0x350,&plStack_30);
  plVar7 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8ce284; end: 10a8ce40b;  */

undefined8 * FUN_10a8ce284(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  param_1[0x6f] = &PTR_FUN_110c383b8;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x100;
  puVar1 = param_1;
  FUN_10a8cd590(param_1,&PTR_PTR_110c26c40,param_2);
  FUN_10a0040d0(puVar1 + 0x5b,&PTR_PTR_110c26c78);
  *param_1 = &PTR_FUN_110c26970;
  param_1[2] = &PTR_FUN_110c26ac8;
  param_1[5] = &PTR_DAT_110c26af8;
  param_1[0x6f] = &PTR_FUN_110c26bf8;
  param_1[0x15] = &PTR_DAT_110c26b50;
  param_1[0x5b] = &PTR_DAT_110c26b78;
  param_1[0x60] = 2;
  param_1[0x62] = 0;
  param_1[0x61] = 0x3f8000003f800000;
  param_1[99] = 0x3dcccccd00000000;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6b] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x72) = 1;
    param_1[0x71] = param_2;
    if (param_2 != 0) {
      param_1[0x70] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x5e],&PTR_DAT_110b99f08,param_2,param_1 + 0x5b);
  FUN_10a8ce170(param_1);
  return param_1;
}



/* Entry: 10a8ce40c; end: 10a8ce6c3;  */

undefined *** FUN_10a8ce40c(float param_1,undefined4 param_2,long param_3,undefined ***param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  FUN_10a8cdb40();
  pppuVar5 = param_4;
  (*(code *)(*param_4)[7])(param_4,&PTR_DAT_110c26cb0,0);
  *(int *)(param_3 + 0x300) = (int)pppuVar5;
  if ((int)pppuVar5 == 5) {
    pppuVar5 = param_4;
    (*(code *)(*param_4)[7])(param_4,&PTR_DAT_110c26cd0,0xffffffff);
    *(int *)(param_3 + 800) = (int)pppuVar5;
  }
  (*(code *)(*param_4)[8])(param_4,&PTR_DAT_110c26cf0);
  *(float *)(param_3 + 0x31c) = param_1;
  (*(code *)(*param_4)[0x1b])(param_4,&PTR_DAT_110c26d10);
  *(float *)(param_3 + 0x308) = param_1;
  *(undefined4 *)(param_3 + 0x30c) = param_2;
  (*(code *)(*param_4)[8])(param_4,&PTR_DAT_110c26d30);
  *(int *)(param_3 + 0x304) = (int)param_1;
  uVar9 = 0;
  (*(code *)(*param_4)[9])(param_4,&PTR_DAT_110c26d50);
  *(undefined4 *)(param_3 + 0x310) = uVar9;
  uVar9 = 0;
  (*(code *)(*param_4)[9])(param_4,&PTR_DAT_110c26d70);
  *(undefined4 *)(param_3 + 0x314) = uVar9;
  uVar9 = 0;
  (*(code *)(*param_4)[9])(param_4,&PTR_DAT_110c26d90);
  *(undefined4 *)(param_3 + 0x318) = uVar9;
  FUN_10a8ce170(param_3);
  ppuVar7 = &PTR_DAT_110bb3700;
  lStack_98 = param_3 + 0x360;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109ffe064(&pppuStack_90,&DAT_10f644824,0xd);
  pcStack_78 = FUN_10a4c3464;
  ppuStack_70 = &PTR_FUN_110be74d8;
  lStack_68 = lStack_98;
  uStack_58 = uStack_88;
  pppuStack_60 = pppuStack_90;
  uStack_50 = lStack_80;
  pppuStack_90 = (undefined ***)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  pppuVar4 = param_4;
  FUN_10a1f46a0(param_4,&PTR_DAT_110bb3700,&pcStack_78,0);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (lStack_80 < 0) {
    pppuVar5 = pppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    pppuVar4 = pppuVar5;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a4c3464;
    ppuStack_d0 = *pppuVar4;
    pppuStack_c8 = (undefined ***)pppuVar4[1];
    *pppuVar4 = (undefined **)0x0;
    pppuVar4[1] = (undefined **)0x0;
    pppuStack_c0 = param_4;
    pppuStack_b8 = pppuVar5;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (ppuStack_d0 != (undefined **)0x0) {
      puVar8 = ppuVar7[2];
      if (*(int *)(puVar8 + 0x10) != 0) {
        FUN_10a3a75a8(puVar8);
        *(undefined4 *)(puVar8 + 0x10) = 0;
        puVar8 = ppuVar7[2];
      }
      FUN_10a4c3578(puVar8,&ppuStack_d0);
      FUN_10a4c3630(ppuVar7[2],&ppuStack_d0);
      pppuVar4 = (undefined ***)ppuVar7[2];
      FUN_10a4c36e8(pppuVar4,&ppuStack_d0);
      if ((*(int *)(ppuVar7[2] + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        ppuVar6 = ppuVar7 + 3;
        if (*(char *)((long)ppuVar7 + 0x2f) < '\0') {
          ppuVar6 = (undefined **)*ppuVar6;
        }
        pppuVar4 = (undefined ***)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f65cca5,0x30,&UNK_10f645c14,in_x6,in_x7,
                            ppuVar6);
      }
    }
    pppuVar5 = pppuStack_c8;
    if (pppuStack_c8 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_c8 + 1;
      do {
        ppuVar7 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
        pppuVar4 = pppuVar5;
      }
    }
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 10a8ce6c4; end: 10a8ce6ff;  */

undefined4 FUN_10a8ce6c4(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x288) != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 10a8ce700; end: 10a8ce763;  */

undefined8 * FUN_10a8ce700(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a8ce764; end: 10a8ce79b;  */

void FUN_10a8ce764(long param_1)

{
  if (*(long *)(param_1 + 0x340) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8ce77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x350))();
  return;
}



/* Entry: 10a8ce79c; end: 10a8ce8bb;  */

long * FUN_10a8ce79c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(param_1 + 0x340);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x350);
    (**(code **)(*plVar4 + 8))(plVar4,param_2,param_1 + 0x298,param_1 + 0x328);
  }
  else {
    (**(code **)(*plVar4 + 0x10))();
    if (((*plVar4 == plVar4[1]) || (plVar4 = *(long **)(param_1 + 0x350), plVar4 == (long *)0x0)) ||
       (___dynamic_cast(plVar4,&PTR_DAT_110c27578,&PTR_DAT_110c275e8,0), plVar4 == (long *)0x0)) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x358);
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
      }
      FUN_10a8b4554();
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
    }
  }
  *(char *)(param_1 + 0x2d0) = (char)plVar4;
  return plVar4;
}



/* Entry: 10a8ce8bc; end: 10a8ce8c3;  */

long * FUN_10a8ce8bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar4 + 8))(plVar4,param_2,param_1 + -0x40,param_1 + 0x50);
  }
  else {
    (**(code **)(*plVar4 + 0x10))();
    if (((*plVar4 == plVar4[1]) || (plVar4 = *(long **)(param_1 + 0x78), plVar4 == (long *)0x0)) ||
       (___dynamic_cast(plVar4,&PTR_DAT_110c27578,&PTR_DAT_110c275e8,0), plVar4 == (long *)0x0)) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x80);
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
      }
      FUN_10a8b4554();
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
    }
  }
  *(char *)(param_1 + -8) = (char)plVar4;
  return plVar4;
}



/* Entry: 10a8ce8c4; end: 10a8ce94f;  */

void FUN_10a8ce8c4(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_2 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f680a3a);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined4 *)(param_2 + 0x310) = param_1;
  FUN_10a8ce170(param_2);
  return;
}



/* Entry: 10a8ce950; end: 10a8ce9db;  */

void FUN_10a8ce950(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_2 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f680a94);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined4 *)(param_2 + 0x314) = param_1;
  FUN_10a8ce170(param_2);
  return;
}



/* Entry: 10a8ce9dc; end: 10a8cea67;  */

void FUN_10a8ce9dc(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_2 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f680ade);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined4 *)(param_2 + 0x318) = param_1;
  FUN_10a8ce170(param_2);
  return;
}



/* Entry: 10a8cea68; end: 10a8ceb03;  */

void FUN_10a8cea68(long param_1,int param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f680b2c);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(int *)(param_1 + 0x300) = param_2;
  if (param_2 == 5) {
    *(undefined4 *)(param_1 + 800) = 3;
  }
  FUN_10a8ce170(param_1);
  return;
}



/* Entry: 10a8ceb04; end: 10a8cebb7;  */

void FUN_10a8ceb04(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x98);
  if ((lVar5 == 0) ||
     (___dynamic_cast(lVar5,&PTR_DAT_110b9f6e8,&PTR_DAT_110bab2b8,0xfffffffffffffffe), lVar5 == 0))
  {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = *(long **)(param_1 + 0xa0);
    lStack_30 = lVar5;
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
  }
  FUN_10a5fb164(param_1 + 0x340,&lStack_30);
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



/* Entry: 10a8cebb8; end: 10a8cec7f;  */

undefined8 * FUN_10a8cebb8(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(param_2 + 0x90);
  puVar5 = (undefined8 *)0x3b0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c17498;
  puVar2 = puVar5 + 3;
  FUN_10a8ce284(puVar2,uVar9);
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar5;
  FUN_10a762354(param_1,puVar5 + 0xb,puVar2);
  lVar6 = *param_1;
  uVar10 = *(undefined8 *)(param_2 + 0x308);
  uVar9 = *(undefined8 *)(param_2 + 0x300);
  uVar12 = *(undefined8 *)(param_2 + 0x318);
  uVar11 = *(undefined8 *)(param_2 + 0x310);
  *(undefined4 *)(lVar6 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined8 *)(lVar6 + 0x308) = uVar10;
  *(undefined8 *)(lVar6 + 0x300) = uVar9;
  *(undefined8 *)(lVar6 + 0x318) = uVar12;
  *(undefined8 *)(lVar6 + 0x310) = uVar11;
  FUN_10a3a754c(lVar6 + 0x360,param_2 + 0x360);
  lVar6 = *param_1;
  uVar10 = *(undefined8 *)(param_2 + 0x290);
  uVar9 = *(undefined8 *)(param_2 + 0x288);
  if (*(long *)(param_2 + 0x290) != 0) {
    plVar8 = (long *)(*(long *)(param_2 + 0x290) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(lVar6 + 0x290);
  *(undefined8 *)(lVar6 + 0x290) = uVar10;
  *(undefined8 *)(lVar6 + 0x288) = uVar9;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return (undefined8 *)(lVar6 + 0x288);
}



/* Entry: 10a8cec80; end: 10a8cec9f;  */

undefined1  [16] FUN_10a8cec80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2c;
  auVar1._0_8_ = &UNK_10f662339;
  return auVar1;
}



/* Entry: 10a8ceca0; end: 10a8ced07;  */

bool FUN_10a8ceca0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8ced08; end: 10a8ced0f;  */

bool FUN_10a8ced08(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8ced10; end: 10a8cefdf;  */

void FUN_10a8ced10(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662339,0x2c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c29d38;
  pppuVar2 = (undefined8 ***)&UNK_10f67fb58;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xc9;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c29d38;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c2c758;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c013,FUN_10a8f122c,FUN_10a8f12e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64c02b,FUN_10a8f1480,FUN_10a8f1564);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10a8f1660,FUN_10a8f1718);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f680b80,FUN_10a8f1844,FUN_10a8f198c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662339,0x2c);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8cefc4);
  (*pcVar6)();
}



/* Entry: 10a8cefe0; end: 10a8cf1fb;  */

long * FUN_10a8cefe0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined2 uStack_42;
  
  plVar2 = param_1;
  FUN_10a8cd590(param_1,param_2 + 1);
  plVar2 = plVar2 + 0x5b;
  FUN_10a0040d0(plVar2,param_2 + 7);
  uStack_42 = 1;
  FUN_10a00db68(param_1 + 0x60,param_3,&uStack_42);
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[2] = (long)&PTR_FUN_110c2c2e8;
  param_1[5] = (long)&PTR_FUN_110c2c318;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[9];
  param_1[0x15] = (long)&PTR_FUN_110c2c370;
  param_1[0x5b] = param_2[10];
  param_1[0x60] = (long)&PTR_FUN_110c2c3e0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  func_0x000107c2b054(param_1 + 0x68,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0x6b,&UNK_10f67fb58);
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = (long)(param_1 + 0x82);
  param_1[0x8a] = (long)(param_1 + 0x8b);
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  plVar1 = (long *)((long)plVar2 + *(long *)(param_1[0x5b] + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x5e],&PTR_DAT_110b99f08,param_3,plVar2);
  return param_1;
}



/* Entry: 10a8cf1fc; end: 10a8cf43f;  */

undefined8 * FUN_10a8cf1fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined2 uStack_42;
  
  param_1[0x8d] = &PTR_FUN_110c383b8;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *(undefined2 *)(param_1 + 0x90) = 0x100;
  puVar2 = param_1;
  FUN_10a8cd590(param_1,&PTR_PTR_110c26db8,param_2);
  puVar2 = puVar2 + 0x5b;
  FUN_10a0040d0(puVar2,&PTR_PTR_110c26de8);
  uStack_42 = 1;
  FUN_10a00db68(param_1 + 0x60,param_2,&uStack_42);
  *param_1 = &PTR_FUN_110c2c190;
  param_1[2] = &PTR_FUN_110c2c2e8;
  param_1[5] = &PTR_FUN_110c2c318;
  param_1[0x8d] = &PTR_DAT_110c2c438;
  param_1[0x15] = &PTR_FUN_110c2c370;
  param_1[0x5b] = &PTR_FUN_110c2c398;
  param_1[0x60] = &PTR_FUN_110c2c3e0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  func_0x000107c2b054(param_1 + 0x68,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0x6b,&UNK_10f67fb58);
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = param_1 + 0x82;
  param_1[0x8a] = param_1 + 0x8b;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  plVar1 = (long *)((long)puVar2 + *(long *)(param_1[0x5b] + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x5e],&PTR_DAT_110b99f08,param_2,puVar2);
  return param_1;
}



/* Entry: 10a8cf440; end: 10a8cf5e7;  */

void FUN_10a8cf440(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  long *aplStack_90 [2];
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  pcStack_78 = FUN_10a8f1af8;
  ppuStack_70 = &PTR_FUN_110c2bd70;
  lStack_68 = param_1;
  FUN_10a2d7b10(param_2,&PTR_DAT_110c2b200,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c26e08);
  if ((uint)plVar1 < 0x80) {
    *(uint *)(param_1 + 0x3a8) = (uint)plVar1;
  }
  (**(code **)(*param_2 + 0xa0))(aplStack_90,param_2,&PTR_DAT_110c26e28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x3b0,aplStack_90);
  ppuVar4 = &PTR_DAT_110c26e48;
  (**(code **)(*param_2 + 0xa8))(&uStack_a8,param_2,&PTR_DAT_110c26e48,&UNK_10f67fb58,0);
  plVar1 = (long *)(param_1 + 0x3f0);
  if (*(char *)(param_1 + 0x407) < '\0') {
    param_2 = (long *)*plVar1;
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x3f8) = uStack_a0;
  *plVar1 = CONCAT71(uStack_a7,uStack_a8);
  *(ulong *)(param_1 + 0x400) = CONCAT17(uStack_91,uStack_98);
  uStack_91 = 0;
  uStack_a8 = 0;
  plStack_c8 = param_2;
  if (cStack_79 < '\0') {
    __ZdlPv();
    plStack_c8 = aplStack_90[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar2 = plStack_c8;
  __Unwind_Resume();
  pcStack_b8 = FUN_10a8cf5e8;
  plVar3 = plVar2;
  ppuVar5 = ppuVar4;
  plStack_d0 = plVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x38))();
  plStack_e0 = plVar3;
  ppuStack_d8 = ppuVar5;
  (**(code **)(*ppuVar4 + 0x30))(ppuVar4,&PTR_DAT_110c2b1e0,&plStack_e0);
  FUN_10a2d7cdc(ppuVar4,&PTR_DAT_110c2b200,plVar2 + 0x65,&UNK_10f64c852,0x19);
  (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c26e08,(int)plVar2[0x75]);
  FUN_10a00d760(ppuVar4,&PTR_DAT_110c26e28,plVar2 + 0x76);
  FUN_10a00d760(ppuVar4,&PTR_DAT_110c26e48,plVar2 + 0x7e);
  return;
}



/* Entry: 10a8cf5e8; end: 10a8cf69f;  */

void FUN_10a8cf5e8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = plVar1;
  plStack_28 = plVar2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c2b1e0,&plStack_30);
  FUN_10a2d7cdc(param_2,&PTR_DAT_110c2b200,param_1 + 0x65,&UNK_10f64c852,0x19);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c26e08,(int)param_1[0x75]);
  FUN_10a00d760(param_2,&PTR_DAT_110c26e28,param_1 + 0x76);
  FUN_10a00d760(param_2,&PTR_DAT_110c26e48,param_1 + 0x7e);
  return;
}



/* Entry: 10a8cf6a0; end: 10a8cf6ab;  */

void FUN_10a8cf6a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  lVar2 = *(long *)(param_1 + 0x328);
  if ((lVar2 == 0) || (lVar1 = lVar2, func_0x00010aae9fd8(), lVar1 == 0)) {
    if (*(char *)(param_1 + 0x36f) < '\0') {
      **(undefined1 **)(param_1 + 0x358) = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x358) = 0;
      *(undefined1 *)(param_1 + 0x36f) = 0;
    }
    if (*(char *)(param_1 + 0x357) < '\0') {
      **(undefined1 **)(param_1 + 0x340) = 0;
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x340) = 0;
      *(undefined1 *)(param_1 + 0x357) = 0;
    }
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x3a0) = 0;
  }
  else {
    FUN_10a08d2e0(&uStack_50,lVar1 + 0x10);
    if (*(char *)(param_1 + 0x357) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x340));
    }
    *(long *)(param_1 + 0x350) = lStack_40;
    *(undefined8 *)(param_1 + 0x348) = uStack_48;
    *(undefined8 *)(param_1 + 0x340) = uStack_50;
    func_0x00010a32c8a0(lVar2);
    if (*(int *)(lVar2 + 0x110) == 0) {
      if (*(char *)(lVar1 + 0x27) < '\0') {
        func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      }
      else {
        uStack_48 = *(undefined8 *)(lVar1 + 0x18);
        uStack_50 = *(undefined8 *)(lVar1 + 0x10);
        lStack_40 = *(long *)(lVar1 + 0x20);
      }
    }
    else {
      __ZNSt3__19to_stringEj(&uStack_50);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x358,&uStack_50);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    func_0x00010a32c8a0(lVar2);
    *(undefined1 *)(param_1 + 0x3a0) = *(undefined1 *)(lVar2 + 0x1c8);
    func_0x00010a32c8a0(lVar2);
    uVar3 = *(undefined1 *)(lVar2 + 0x1c9);
  }
  *(undefined1 *)(param_1 + 0x3a1) = uVar3;
  return;
}



/* Entry: 10a8cf6ac; end: 10a8cf72b;  */

int FUN_10a8cf6ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x407) < '\0') {
    if (*(long *)(param_1 + 0x3f8) == 0) {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x407) == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x328);
  func_0x00010a32c8a0(lVar2);
  lVar1 = *(long *)(lVar2 + 0x178);
  if (lVar1 == *(long *)(lVar2 + 0x180)) {
    return 0;
  }
  FUN_10a187ebc(lVar1,*(long *)(lVar2 + 0x180),param_1 + 0x3f0,&uStack_21);
  return (int)((ulong)(lVar1 - *(long *)(lVar2 + 0x178)) >> 3) * -0x55555555;
}



/* Entry: 10a8cf72c; end: 10a8cf747;  */

void FUN_10a8cf72c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0x3f80000000000000;
  param_1[2] = 0xbf800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 10a8cf748; end: 10a8cf8bb;  */

void FUN_10a8cf748(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x24);
    FUN_10ab79c98();
    plVar4 = (long *)*param_2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
      lVar6 = *param_3;
      if ((int)plVar4 == *(int *)(lVar6 + 0x10)) {
        plVar4 = (long *)*param_2;
        (**(code **)(*plVar4 + 0x30))();
        lVar6 = *param_3;
        if ((int)plVar4 == *(int *)(lVar6 + 0x14)) {
          plVar4 = (long *)*param_2;
          (**(code **)(*plVar4 + 0x50))();
          lVar6 = *param_3;
          if ((int)plVar4 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010a8cf814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)*param_2 + 0x98))
                      ((long *)*param_2,*(undefined8 *)(lVar6 + 0x28),0,0);
            return;
          }
        }
      }
    }
    uVar1 = *(undefined4 *)(lVar6 + 0x10);
    uVar2 = *(undefined4 *)(lVar6 + 0x14);
    uVar5 = (ulong)*(uint *)(lVar6 + 0x24);
    FUN_10ab79c98(uVar5);
    FUN_10a1da3a4(param_1,uVar1,uVar2,0,0,uVar5,0,0);
    lVar6 = *(long *)(param_1 + 0x90);
    FUN_10a2421c8();
    plVar4 = *(long **)(lVar6 + 0x228);
    uStack_58 = *(undefined8 *)(*param_3 + 0x28);
    uStack_88 = 0;
    uStack_84 = *(undefined8 *)(*param_3 + 0x10);
    uStack_7c = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 1;
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = iVar3;
    (**(code **)(*plVar4 + 0x20))(plVar4,&uStack_88);
    FUN_10a099d88(param_2,plVar4);
  }
  return;
}



/* Entry: 10a8cf8bc; end: 10a8cf947;  */

void FUN_10a8cf8bc(long *param_1,long param_2)

{
  undefined1 uStack_29;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x130))();
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    if (param_1[0x69] == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x357) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  plStack_28 = param_1 + 0x67;
  param_2 = param_2 + 0x210;
  FUN_10a507b84(param_2,plStack_28,&UNK_10dd5b8f9,&plStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,param_1 + 0x75,param_1 + 0x75);
  return;
}



/* Entry: 10a8cf948; end: 10a8cf96f;  */

void FUN_10a8cf948(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  (**(code **)(*(long *)(param_1 + -0x2d8) + 0x130))();
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  lStack_28 = param_1 + 0x60;
  param_2 = param_2 + 0x210;
  FUN_10a507b84(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,param_1 + 0xd0,param_1 + 0xd0);
  return;
}



/* Entry: 10a8cf970; end: 10a8cf9d7;  */

bool FUN_10a8cf970(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2d) {
    iVar2 = 0xf681a55;
    _memcmp(&UNK_10f681a55,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8cf9d8; end: 10a8cf9df;  */

bool FUN_10a8cf9d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2d) {
    iVar2 = 0xf681a55;
    _memcmp(&UNK_10f681a55,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8cf9e0; end: 10a8cfa33;  */

void FUN_10a8cf9e0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xc9;
  uStack_18 = 0xffffffff;
  FUN_10a8cfa34(param_1,&uStack_58);
  FUN_10a8f1c48();
  return;
}



/* Entry: 10a8cfa34; end: 10a8cfb0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a8cfacc) */

undefined1  [16] FUN_10a8cfa34(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f681a55,0x2d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8f1b4c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8cfb0c; end: 10a8cfb77;  */

void FUN_10a8cfb0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x90);
  FUN_10a3dedfc();
  plVar1 = (long *)*plVar1;
  while ((plVar1 != (long *)0x0 &&
         (plVar2 = plVar1, (**(code **)(*plVar1 + 0x80))(), (int)plVar2 == 2))) {
    plVar1 = (long *)plVar1[0x13];
  }
  return;
}



/* Entry: 10a8cfb78; end: 10a8d02c3;  */

void FUN_10a8cfb78(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *puVar14;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar15;
  long lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  float fVar20;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (param_2[0x21] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
LAB_10a8cfcd8:
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
      unaff_x19 = param_1 + 0x96;
      param_2 = (long *)((long)register0x00000008 + -0x158);
      FUN_10a16b1ec();
      unaff_x20 = *(long **)((long)register0x00000008 + -0x150);
      if (unaff_x20 != (long *)0x0) {
        plVar5 = unaff_x20 + 1;
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
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          unaff_x19 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(undefined4 *)(param_1 + 0x55) = 0;
      *(undefined4 *)(param_1[0x53] + 0x24) = 0;
      *(undefined4 *)(param_1[0x53] + 0x2c) = 0;
      *(undefined4 *)(param_1[0x53] + 0x30) = 0;
      *(undefined4 *)(param_1[0x53] + 0x28) = 0;
    }
    else {
      FUN_10a4d5e30((undefined1 *)((long)register0x00000008 + -0xf8),param_2[0x21],param_1 + 0x67);
      lVar7 = *(long *)((long)register0x00000008 + -0xf8);
      if (lVar7 == 0) goto LAB_10a8cfcd8;
      unaff_x21 = param_1 + 0x83;
      if ((*(long *)(lVar7 + 0x130) == 0) || (*(long *)(lVar7 + 0x120) == 0)) {
        FUN_10a31a260(param_1 + 0x96,lVar7 + 0x120);
      }
      else {
        FUN_10a0f3910((undefined1 *)((long)register0x00000008 + -0x158),
                      *(long *)(lVar7 + 0x130) + 0x10,0);
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x158);
        if (1 < *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x130) + 0x20)) {
          *(undefined4 *)((long)register0x00000008 + -0x1c0) = 0x1010000;
          *(undefined1 **)((long)register0x00000008 + -0x1b8) =
               (undefined1 *)((long)register0x00000008 + -0x158);
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          plVar5 = param_1 + 0x81;
          *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x2010000;
          *(long **)((long)register0x00000008 + -200) = plVar5;
          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
          plVar4 = param_1;
          FUN_10a8cf6ac(param_1);
          func_0x000109a3f338((undefined1 *)((long)register0x00000008 + -0x1c0),
                              (undefined1 *)((long)register0x00000008 + -0xd0),plVar4);
          if ((long *)((long)register0x00000008 + -0x158) != plVar5) {
            if (param_1[0x88] != 0) {
              piVar1 = (int *)(param_1[0x88] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(long *)((long)register0x00000008 + -0x120) != 0) {
              piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x120) + 0x14);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 + -1 == 0) {
                func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x158));
              }
            }
            *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
            if (*(int *)((long)register0x00000008 + -0x154) < 1) {
              *(int *)((long)register0x00000008 + -0x158) = (int)*plVar5;
LAB_10a8cfd60:
              if (2 < *(int *)((long)param_1 + 0x40c)) goto LAB_10a8cfd94;
              *(int *)((long)register0x00000008 + -0x154) = *(int *)((long)param_1 + 0x40c);
              *(long *)((long)register0x00000008 + -0x150) = param_1[0x82];
              puVar11 = (undefined8 *)param_1[0x8a];
              puVar12 = *(undefined8 **)((long)register0x00000008 + -0x110);
              *puVar12 = *puVar11;
              puVar12[1] = puVar11[1];
            }
            else {
              lVar7 = 0;
              lVar10 = *(long *)((long)register0x00000008 + -0x118);
              do {
                *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar7 < *(int *)((long)register0x00000008 + -0x154));
              *(int *)((long)register0x00000008 + -0x158) = (int)*plVar5;
              if (*(int *)((long)register0x00000008 + -0x154) < 3) goto LAB_10a8cfd60;
LAB_10a8cfd94:
              func_0x000109a84868((undefined1 *)((long)register0x00000008 + -0x158),plVar5);
            }
            lVar16 = *unaff_x21;
            lVar7 = param_1[0x85];
            lVar10 = param_1[0x86];
            *(long *)((long)register0x00000008 + -0x140) = param_1[0x84];
            *(long *)((long)register0x00000008 + -0x148) = lVar16;
            *(long *)((long)register0x00000008 + -0x130) = lVar10;
            *(long *)((long)register0x00000008 + -0x138) = lVar7;
            lVar7 = param_1[0x87];
            *(long *)((long)register0x00000008 + -0x120) = param_1[0x88];
            *(long *)((long)register0x00000008 + -0x128) = lVar7;
          }
        }
        lVar7 = 0;
        if (*(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x120) != 0) {
          lVar7 = *(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x120) + 0x10;
        }
        FUN_10a0f3910((undefined1 *)((long)register0x00000008 + -0x1c0),lVar7,0);
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x42ff0000;
        puVar14 = (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xc4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xcc) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbc) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xac) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(ulong *)((long)register0x00000008 + -0x90) = (ulong)puVar14 | 8;
        *(undefined8 **)((long)register0x00000008 + -0x88) =
             (undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xe8) = 0x2010000;
        *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar14;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        func_0x000109a479a0((undefined1 *)((long)register0x00000008 + -0x1c0),
                            (undefined1 *)((long)register0x00000008 + -0xe8));
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x1c0));
          }
        }
        unaff_x20 = (long *)((long)register0x00000008 + -0x1c0);
        if (0 < *(int *)((long)register0x00000008 + -0x1bc)) {
          lVar7 = 0;
          lVar10 = *(long *)((long)register0x00000008 + -0x180);
          do {
            *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)register0x00000008 + -0x1bc));
        }
        iVar6 = *(int *)((long)register0x00000008 + -0xcc);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -200);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0x198) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0x188) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -400) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        puVar11 = *(undefined8 **)((long)register0x00000008 + -0x178);
        unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x170);
        if (puVar11 != unaff_x23) {
          unaff_x26 = (ulong)unaff_x20 | 8;
          if (puVar11 != (undefined8 *)0x0) {
            _free(puVar11[-1]);
            iVar6 = *(int *)((long)register0x00000008 + -0xcc);
          }
          *(ulong *)((long)register0x00000008 + -0x180) = unaff_x26;
          *(undefined8 **)((long)register0x00000008 + -0x178) = unaff_x23;
          puVar11 = unaff_x23;
        }
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0x88);
        if (iVar6 < 3) {
          puVar8 = (undefined8 *)((ulong)puVar14 | 4);
          *puVar11 = *puVar12;
          puVar11[1] = puVar12[1];
          *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x42ff0000;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          *(undefined8 *)((long)puVar8 + 0x34) = 0;
          *(undefined8 *)((long)puVar8 + 0x2c) = 0;
          if (puVar12 != (undefined8 *)((long)register0x00000008 + -0x80)) {
            _free(puVar12[-1]);
          }
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined8 **)((long)register0x00000008 + -0x178) = puVar12;
        }
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x300000000;
        func_0x000109a3e710((undefined1 *)((long)register0x00000008 + -0x158),1,
                            (undefined1 *)((long)register0x00000008 + -0x1c0),1,
                            (undefined1 *)((long)register0x00000008 + -0xd0),1);
        iVar6 = *(int *)((long)register0x00000008 + -0x1bc);
        *(undefined8 *)((long)register0x00000008 + -0x218) =
             *(undefined8 *)((long)register0x00000008 + -0x1b8);
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x208) =
             *(undefined8 *)((long)register0x00000008 + -0x1a8);
        *(undefined8 *)((long)register0x00000008 + -0x210) =
             *(undefined8 *)((long)register0x00000008 + -0x1b0);
        *(undefined8 *)((long)register0x00000008 + -0x1f8) =
             *(undefined8 *)((long)register0x00000008 + -0x198);
        *(undefined8 *)((long)register0x00000008 + -0x200) =
             *(undefined8 *)((long)register0x00000008 + -0x1a0);
        *(undefined8 *)((long)register0x00000008 + -0x1e8) =
             *(undefined8 *)((long)register0x00000008 + -0x188);
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -400);
        unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x1d0);
        *(ulong *)((long)register0x00000008 + -0x1e0) =
             (ulong)((long)register0x00000008 + -0x220) | 8;
        *(undefined1 **)((long)register0x00000008 + -0x1d8) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          iVar6 = *(int *)((long)register0x00000008 + -0x1bc);
        }
        if (iVar6 < 3) {
          puVar11 = *(undefined8 **)((long)register0x00000008 + -0x178);
          puVar12 = *(undefined8 **)((long)register0x00000008 + -0x1d8);
          *puVar12 = *puVar11;
          puVar12[1] = puVar11[1];
        }
        else {
          *(undefined4 *)((long)register0x00000008 + -0x21c) = 0;
          func_0x000109a84868((undefined1 *)((long)register0x00000008 + -0x220),
                              (undefined1 *)((long)register0x00000008 + -0x1c0));
        }
        FUN_10a0f3c50((undefined1 *)((long)register0x00000008 + -0xe8),
                      (undefined1 *)((long)register0x00000008 + -0x220),0,0xffffffff);
        FUN_10a4d0020(param_1 + 0x96,(undefined1 *)((long)register0x00000008 + -0xe8));
        plVar5 = *(long **)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x14);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x220));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x21c)) {
          lVar7 = 0;
          lVar10 = *(long *)((long)register0x00000008 + -0x1e0);
          do {
            *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)register0x00000008 + -0x21c));
        }
        puVar14 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
        if (puVar14 != unaff_x24 && puVar14 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puVar14 + -8));
        }
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x1c0));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x1bc)) {
          lVar7 = 0;
          lVar10 = *(long *)((long)register0x00000008 + -0x180);
          do {
            *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)register0x00000008 + -0x1bc));
        }
        puVar11 = *(undefined8 **)((long)register0x00000008 + -0x178);
        if (puVar11 != unaff_x23 && puVar11 != (undefined8 *)0x0) {
          _free(puVar11[-1]);
        }
        if (*(long *)((long)register0x00000008 + -0x120) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x120) + 0x14);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x158));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x154)) {
          lVar7 = 0;
          lVar10 = *(long *)((long)register0x00000008 + -0x118);
          do {
            *(undefined4 *)(lVar10 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((long)register0x00000008 + -0x154));
        }
        puVar14 = *(undefined1 **)((long)register0x00000008 + -0x110);
        unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x220);
        if (puVar14 != (undefined1 *)((long)register0x00000008 + -0x108) &&
            puVar14 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puVar14 + -8));
          unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x220);
        }
      }
      lVar7 = *(long *)((long)register0x00000008 + -0xf8);
      lVar10 = param_1[0x53];
      uVar13 = *(undefined8 *)(lVar7 + 0x10c);
      *(undefined8 *)((long)param_1 + 0x49c) = uVar13;
      uVar9 = *(undefined8 *)(lVar7 + 0x114);
      *(undefined8 *)((long)param_1 + 0x4a4) = uVar9;
      uVar19 = NEON_fmov(0x3f800000,4);
      fVar15 = (float)uVar19 - (float)((ulong)uVar9 >> 0x20);
      fVar17 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
      uVar19 = NEON_fmov(0xbf800000,4);
      auVar18._0_4_ = (float)uVar9 + (float)uVar9 + (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      fVar15 = fVar15 + fVar15 + (float)uVar19;
      fVar17 = fVar17 + fVar17 + fVar20;
      *(undefined4 *)(param_1 + 0x55) = 0;
      auVar18._4_4_ = 0;
      auVar18._8_4_ = (float)uVar13 + (float)uVar13 + fVar20;
      auVar18._12_4_ = 0;
      auVar18 = NEON_ext(auVar18,auVar18,8,1);
      *(ulong *)(lVar10 + 0x2c) =
           CONCAT17((byte)((uint)fVar17 >> 0x18) | auVar18[0xf],
                    CONCAT16((byte)((uint)fVar17 >> 0x10) | auVar18[0xe],
                             CONCAT15((byte)((uint)fVar17 >> 8) | auVar18[0xd],
                                      CONCAT14(SUB41(fVar17,0) | auVar18[0xc],auVar18._8_4_))));
      *(ulong *)(lVar10 + 0x24) =
           CONCAT17((byte)((uint)fVar15 >> 0x18) | auVar18[7],
                    CONCAT16((byte)((uint)fVar15 >> 0x10) | auVar18[6],
                             CONCAT15((byte)((uint)fVar15 >> 8) | auVar18[5],
                                      CONCAT14(SUB41(fVar15,0) | auVar18[4],auVar18._0_4_))));
      param_2 = param_1 + 0x9a;
      FUN_10a8cf748(param_1,param_2,param_1 + 0x96);
      unaff_x19 = param_1;
    }
    plVar5 = *(long **)((long)register0x00000008 + -0xf0);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar5;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010567aa40((undefined1 *)((long)register0x00000008 + -0x158));
    FUN_10a2f2568((undefined1 *)((long)register0x00000008 + -0xf8));
    unaff_x30 = FUN_10a8d02c4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x5b;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x220);
  } while( true );
}



/* Entry: 10a8d02c4; end: 10a8d02eb;  */

void FUN_10a8d02c4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puVar15;
  undefined1 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar16;
  long lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  float fVar21;
  
  do {
    plVar5 = param_1 + -0x5b;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (param_2[0x21] == 0) {
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
LAB_10a8cfcd8:
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
      plVar5 = param_1 + 0x3b;
      param_2 = (long *)((long)register0x00000008 + -0x158);
      FUN_10a16b1ec();
      unaff_x20 = *(long **)((long)register0x00000008 + -0x150);
      if (unaff_x20 != (long *)0x0) {
        plVar6 = unaff_x20 + 1;
        do {
          lVar8 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          plVar5 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *(undefined4 *)(param_1 + -6) = 0;
      *(undefined4 *)(param_1[-8] + 0x24) = 0;
      *(undefined4 *)(param_1[-8] + 0x2c) = 0;
      *(undefined4 *)(param_1[-8] + 0x30) = 0;
      *(undefined4 *)(param_1[-8] + 0x28) = 0;
    }
    else {
      FUN_10a4d5e30((undefined1 *)((long)register0x00000008 + -0xf8),param_2[0x21],param_1 + 0xc);
      lVar8 = *(long *)((long)register0x00000008 + -0xf8);
      if (lVar8 == 0) goto LAB_10a8cfcd8;
      unaff_x21 = param_1 + 0x28;
      if ((*(long *)(lVar8 + 0x130) == 0) || (*(long *)(lVar8 + 0x120) == 0)) {
        FUN_10a31a260(param_1 + 0x3b,lVar8 + 0x120);
      }
      else {
        FUN_10a0f3910((undefined1 *)((long)register0x00000008 + -0x158),
                      *(long *)(lVar8 + 0x130) + 0x10,0);
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x158);
        if (1 < *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x130) + 0x20)) {
          *(undefined4 *)((long)register0x00000008 + -0x1c0) = 0x1010000;
          *(undefined1 **)((long)register0x00000008 + -0x1b8) =
               (undefined1 *)((long)register0x00000008 + -0x158);
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          plVar6 = param_1 + 0x26;
          *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x2010000;
          *(long **)((long)register0x00000008 + -200) = plVar6;
          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
          plVar4 = plVar5;
          FUN_10a8cf6ac(plVar5);
          func_0x000109a3f338((undefined1 *)((long)register0x00000008 + -0x1c0),
                              (undefined1 *)((long)register0x00000008 + -0xd0),plVar4);
          if ((long *)((long)register0x00000008 + -0x158) != plVar6) {
            if (param_1[0x2d] != 0) {
              piVar1 = (int *)(param_1[0x2d] + 0x14);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(long *)((long)register0x00000008 + -0x120) != 0) {
              piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x120) + 0x14);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x158));
              }
            }
            *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
            if (*(int *)((long)register0x00000008 + -0x154) < 1) {
              *(int *)((long)register0x00000008 + -0x158) = (int)*plVar6;
LAB_10a8cfd60:
              if (2 < *(int *)((long)param_1 + 0x134)) goto LAB_10a8cfd94;
              *(int *)((long)register0x00000008 + -0x154) = *(int *)((long)param_1 + 0x134);
              *(long *)((long)register0x00000008 + -0x150) = param_1[0x27];
              puVar12 = (undefined8 *)param_1[0x2f];
              puVar13 = *(undefined8 **)((long)register0x00000008 + -0x110);
              *puVar13 = *puVar12;
              puVar13[1] = puVar12[1];
            }
            else {
              lVar8 = 0;
              lVar11 = *(long *)((long)register0x00000008 + -0x118);
              do {
                *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)((long)register0x00000008 + -0x154));
              *(int *)((long)register0x00000008 + -0x158) = (int)*plVar6;
              if (*(int *)((long)register0x00000008 + -0x154) < 3) goto LAB_10a8cfd60;
LAB_10a8cfd94:
              func_0x000109a84868((undefined1 *)((long)register0x00000008 + -0x158),plVar6);
            }
            lVar17 = *unaff_x21;
            lVar8 = param_1[0x2a];
            lVar11 = param_1[0x2b];
            *(long *)((long)register0x00000008 + -0x140) = param_1[0x29];
            *(long *)((long)register0x00000008 + -0x148) = lVar17;
            *(long *)((long)register0x00000008 + -0x130) = lVar11;
            *(long *)((long)register0x00000008 + -0x138) = lVar8;
            lVar8 = param_1[0x2c];
            *(long *)((long)register0x00000008 + -0x120) = param_1[0x2d];
            *(long *)((long)register0x00000008 + -0x128) = lVar8;
          }
        }
        lVar8 = 0;
        if (*(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x120) != 0) {
          lVar8 = *(long *)(*(long *)((long)register0x00000008 + -0xf8) + 0x120) + 0x10;
        }
        FUN_10a0f3910((undefined1 *)((long)register0x00000008 + -0x1c0),lVar8,0);
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x42ff0000;
        puVar15 = (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xc4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xcc) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xbc) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa4) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xac) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(ulong *)((long)register0x00000008 + -0x90) = (ulong)puVar15 | 8;
        *(undefined8 **)((long)register0x00000008 + -0x88) =
             (undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined4 *)((long)register0x00000008 + -0xe8) = 0x2010000;
        *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar15;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        func_0x000109a479a0((undefined1 *)((long)register0x00000008 + -0x1c0),
                            (undefined1 *)((long)register0x00000008 + -0xe8));
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x1c0));
          }
        }
        unaff_x20 = (long *)((long)register0x00000008 + -0x1c0);
        if (0 < *(int *)((long)register0x00000008 + -0x1bc)) {
          lVar8 = 0;
          lVar11 = *(long *)((long)register0x00000008 + -0x180);
          do {
            *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)register0x00000008 + -0x1bc));
        }
        iVar7 = *(int *)((long)register0x00000008 + -0xcc);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -200);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0x198) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0x188) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -400) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0x178);
        unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x170);
        if (puVar12 != unaff_x23) {
          unaff_x26 = (ulong)unaff_x20 | 8;
          if (puVar12 != (undefined8 *)0x0) {
            _free(puVar12[-1]);
            iVar7 = *(int *)((long)register0x00000008 + -0xcc);
          }
          *(ulong *)((long)register0x00000008 + -0x180) = unaff_x26;
          *(undefined8 **)((long)register0x00000008 + -0x178) = unaff_x23;
          puVar12 = unaff_x23;
        }
        puVar13 = *(undefined8 **)((long)register0x00000008 + -0x88);
        if (iVar7 < 3) {
          puVar9 = (undefined8 *)((ulong)puVar15 | 4);
          *puVar12 = *puVar13;
          puVar12[1] = puVar13[1];
          *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x42ff0000;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          *(undefined8 *)((long)puVar9 + 0x34) = 0;
          *(undefined8 *)((long)puVar9 + 0x2c) = 0;
          if (puVar13 != (undefined8 *)((long)register0x00000008 + -0x80)) {
            _free(puVar13[-1]);
          }
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x90);
          *(undefined8 **)((long)register0x00000008 + -0x178) = puVar13;
        }
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x300000000;
        func_0x000109a3e710((undefined1 *)((long)register0x00000008 + -0x158),1,
                            (undefined1 *)((long)register0x00000008 + -0x1c0),1,
                            (undefined1 *)((long)register0x00000008 + -0xd0),1);
        iVar7 = *(int *)((long)register0x00000008 + -0x1bc);
        *(undefined8 *)((long)register0x00000008 + -0x218) =
             *(undefined8 *)((long)register0x00000008 + -0x1b8);
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x208) =
             *(undefined8 *)((long)register0x00000008 + -0x1a8);
        *(undefined8 *)((long)register0x00000008 + -0x210) =
             *(undefined8 *)((long)register0x00000008 + -0x1b0);
        *(undefined8 *)((long)register0x00000008 + -0x1f8) =
             *(undefined8 *)((long)register0x00000008 + -0x198);
        *(undefined8 *)((long)register0x00000008 + -0x200) =
             *(undefined8 *)((long)register0x00000008 + -0x1a0);
        *(undefined8 *)((long)register0x00000008 + -0x1e8) =
             *(undefined8 *)((long)register0x00000008 + -0x188);
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -400);
        unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x1d0);
        *(ulong *)((long)register0x00000008 + -0x1e0) =
             (ulong)((long)register0x00000008 + -0x220) | 8;
        *(undefined1 **)((long)register0x00000008 + -0x1d8) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          iVar7 = *(int *)((long)register0x00000008 + -0x1bc);
        }
        if (iVar7 < 3) {
          puVar12 = *(undefined8 **)((long)register0x00000008 + -0x178);
          puVar13 = *(undefined8 **)((long)register0x00000008 + -0x1d8);
          *puVar13 = *puVar12;
          puVar13[1] = puVar12[1];
        }
        else {
          *(undefined4 *)((long)register0x00000008 + -0x21c) = 0;
          func_0x000109a84868((undefined1 *)((long)register0x00000008 + -0x220),
                              (undefined1 *)((long)register0x00000008 + -0x1c0));
        }
        FUN_10a0f3c50((undefined1 *)((long)register0x00000008 + -0xe8),
                      (undefined1 *)((long)register0x00000008 + -0x220),0,0xffffffff);
        FUN_10a4d0020(param_1 + 0x3b,(undefined1 *)((long)register0x00000008 + -0xe8));
        plVar6 = *(long **)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
        if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x220));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x21c)) {
          lVar8 = 0;
          lVar11 = *(long *)((long)register0x00000008 + -0x1e0);
          do {
            *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)register0x00000008 + -0x21c));
        }
        puVar15 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
        if (puVar15 != unaff_x24 && puVar15 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puVar15 + -8));
        }
        if (*(long *)((long)register0x00000008 + -0x188) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x188) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x1c0));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x1bc)) {
          lVar8 = 0;
          lVar11 = *(long *)((long)register0x00000008 + -0x180);
          do {
            *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)register0x00000008 + -0x1bc));
        }
        puVar12 = *(undefined8 **)((long)register0x00000008 + -0x178);
        if (puVar12 != unaff_x23 && puVar12 != (undefined8 *)0x0) {
          _free(puVar12[-1]);
        }
        if (*(long *)((long)register0x00000008 + -0x120) != 0) {
          piVar1 = (int *)(*(long *)((long)register0x00000008 + -0x120) + 0x14);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            func_0x000109a848d4((undefined1 *)((long)register0x00000008 + -0x158));
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        if (0 < *(int *)((long)register0x00000008 + -0x154)) {
          lVar8 = 0;
          lVar11 = *(long *)((long)register0x00000008 + -0x118);
          do {
            *(undefined4 *)(lVar11 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)register0x00000008 + -0x154));
        }
        puVar15 = *(undefined1 **)((long)register0x00000008 + -0x110);
        unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x220);
        if (puVar15 != (undefined1 *)((long)register0x00000008 + -0x108) &&
            puVar15 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puVar15 + -8));
          unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x220);
        }
      }
      lVar8 = *(long *)((long)register0x00000008 + -0xf8);
      lVar11 = param_1[-8];
      uVar14 = *(undefined8 *)(lVar8 + 0x10c);
      *(undefined8 *)((long)param_1 + 0x1c4) = uVar14;
      uVar10 = *(undefined8 *)(lVar8 + 0x114);
      *(undefined8 *)((long)param_1 + 0x1cc) = uVar10;
      uVar20 = NEON_fmov(0x3f800000,4);
      fVar16 = (float)uVar20 - (float)((ulong)uVar10 >> 0x20);
      fVar18 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
      uVar20 = NEON_fmov(0xbf800000,4);
      auVar19._0_4_ = (float)uVar10 + (float)uVar10 + (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar16 = fVar16 + fVar16 + (float)uVar20;
      fVar18 = fVar18 + fVar18 + fVar21;
      *(undefined4 *)(param_1 + -6) = 0;
      auVar19._4_4_ = 0;
      auVar19._8_4_ = (float)uVar14 + (float)uVar14 + fVar21;
      auVar19._12_4_ = 0;
      auVar19 = NEON_ext(auVar19,auVar19,8,1);
      *(ulong *)(lVar11 + 0x2c) =
           CONCAT17((byte)((uint)fVar18 >> 0x18) | auVar19[0xf],
                    CONCAT16((byte)((uint)fVar18 >> 0x10) | auVar19[0xe],
                             CONCAT15((byte)((uint)fVar18 >> 8) | auVar19[0xd],
                                      CONCAT14(SUB41(fVar18,0) | auVar19[0xc],auVar19._8_4_))));
      *(ulong *)(lVar11 + 0x24) =
           CONCAT17((byte)((uint)fVar16 >> 0x18) | auVar19[7],
                    CONCAT16((byte)((uint)fVar16 >> 0x10) | auVar19[6],
                             CONCAT15((byte)((uint)fVar16 >> 8) | auVar19[5],
                                      CONCAT14(SUB41(fVar16,0) | auVar19[4],auVar19._0_4_))));
      param_2 = param_1 + 0x3f;
      FUN_10a8cf748(plVar5,param_2,param_1 + 0x3b);
    }
    plVar6 = *(long **)((long)register0x00000008 + -0xf0);
    unaff_x19 = plVar5;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar6;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010567aa40((undefined1 *)((long)register0x00000008 + -0x158));
    FUN_10a2f2568((undefined1 *)((long)register0x00000008 + -0xf8));
    unaff_x30 = FUN_10a8d02c4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x220);
  } while( true );
}



/* Entry: 10a8d02ec; end: 10a8d0353;  */

bool FUN_10a8d02ec(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf681a83;
    _memcmp(&UNK_10f681a83,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8d0354; end: 10a8d035b;  */

bool FUN_10a8d0354(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf681a83;
    _memcmp(&UNK_10f681a83,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x2c) {
    iVar2 = 0xf662339;
    _memcmp(&UNK_10f662339,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1c) &&
     (((*param_2 == 0x72656469766f7250 && param_2[1] == 0x786554706f72432e) &&
      param_2[2] == 0x766f725065727574) && (int)param_2[3] == 0x72656469)) {
    return true;
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a8d035c; end: 10a8d03af;  */

void FUN_10a8d035c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f67fb58;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f67fb58;
  uStack_18 = 0xffffffff;
  FUN_10a8d03b0(param_1,&uStack_58);
  FUN_10a8f1e00();
  return;
}



/* Entry: 10a8d03b0; end: 10a8d0487;  */

/* WARNING: Removing unreachable block (ram,0x00010a8d0448) */

undefined1  [16] FUN_10a8d03b0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f681a83,0x26);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8f1d04(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8d0488; end: 10a8d0613;  */

undefined8 * FUN_10a8d0488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  param_1[0xa5] = &PTR_FUN_110c383b8;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0x100;
  puVar1 = param_1;
  FUN_10a8cefe0(param_1,&PTR_PTR_110c274e0,param_2);
  *puVar1 = &PTR_FUN_110c271f0;
  puVar1[2] = &PTR_FUN_110c27350;
  puVar1[5] = &PTR_FUN_110c27380;
  puVar1[0xa5] = &PTR_FUN_110c274a0;
  puVar1[0x15] = &PTR_FUN_110c273d8;
  puVar1[0x5b] = &PTR_FUN_110c27400;
  puVar1[0x60] = &PTR_FUN_110c27448;
  *(undefined1 *)(puVar1 + 0x8e) = 0;
  puVar1[0x8d] = &PTR_FUN_110bef4e0;
  puVar1[0x91] = 0;
  puVar1[0x90] = 0;
  *(undefined1 *)(puVar1 + 0x93) = 0;
  puVar1[0x8f] = &PTR_FUN_110c6a8d8;
  puVar1[0x92] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar1 + 0x4a4) = 0;
  *(undefined8 *)((long)puVar1 + 0x49c) = 0;
  puVar1[0x97] = 0;
  puVar1[0x96] = 0;
  puVar1[0x99] = 0;
  puVar1[0x98] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9d] = 0;
  puVar1[0x9c] = 0;
  puVar1[0x9f] = 0;
  puVar1[0x9e] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa0] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa2] = 0;
  puVar1[0xa4] = 0;
  uVar2 = 0x80;
  __Znwm();
  FUN_10ab0e794();
  plVar3 = (long *)param_1[0x9c];
  param_1[0x9c] = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10a8d0614; end: 10a8d06b3;  */

long FUN_10a8d0614(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x4e8);
  if ((((pcVar1 != (char *)0x0) && (*pcVar1 == '\x01')) &&
      (*(int *)(pcVar1 + 0x24) <= iRam00000001132ffd98)) && (*(long *)(param_1 + 0x4d0) != 0)) {
    return param_1 + 0x4d0;
  }
  return param_1 + 0x4c0;
}



/* Entry: 10a8d06b4; end: 10a8d071f;  */

void FUN_10a8d06b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x90);
  FUN_10a3dedfc();
  plVar1 = (long *)*plVar1;
  while ((plVar1 != (long *)0x0 &&
         (plVar2 = plVar1, (**(code **)(*plVar1 + 0x80))(), (int)plVar2 == 2))) {
    plVar1 = (long *)plVar1[0x13];
  }
  return;
}



/* Entry: 10a8d0720; end: 10a8d07c7;  */

void FUN_10a8d0720(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  FUN_10a32df84(param_1 + 0x338,*(undefined8 *)(param_1 + 0x328));
  lVar5 = *(long *)(param_1 + 0x328);
  if ((lVar5 != 0) && (func_0x00010aae9fd8(), lVar5 != 0)) {
    lVar5 = *(long *)(param_1 + 0x328);
    func_0x00010a32c8a0(lVar5);
    uVar2 = *(undefined8 *)(lVar5 + 0x1b8);
    lVar5 = *(long *)(lVar5 + 0x1c0);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_1 + 0x4e8) = uVar2;
    plVar6 = *(long **)(param_1 + 0x4f0);
    *(long *)(param_1 + 0x4f0) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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



/* Entry: 10a8d07c8; end: 10a8d1227;  */

void FUN_10a8d07c8(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *plVar15;
  ulong unaff_x23;
  undefined1 *puVar16;
  long *unaff_x24;
  long *plVar17;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = (char *)param_1[0x9d];
    plVar15 = param_1;
    puVar16 = param_2;
    if ((((pcVar12 != (char *)0x0) && (*pcVar12 == '\x01')) &&
        (*(int *)(pcVar12 + 0x24) <= iRam00000001132ffd98)) &&
       (unaff_x20 = param_1, param_1[0x96] != 0)) {
      lVar13 = param_1[0x9c];
      lVar14 = param_1[0x9d];
      *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(lVar14 + 0x18);
      *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar14 + 0x14);
      *(undefined8 *)(lVar13 + 0x68) = *(undefined8 *)(lVar14 + 4);
      *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)(lVar14 + 0x1c);
      lVar13 = param_1[0xa1];
      if (lVar13 == 0) {
        puVar16 = (undefined1 *)param_1[0x12];
        plVar7 = (long *)0x310;
        __Znwm();
        plVar17 = plVar7 + 1;
        *plVar17 = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c2bd98;
        plVar15 = plVar7 + 3;
        FUN_10a91bc24(plVar15,puVar16);
        if (plVar7[0xc] == 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar15;
          plVar7[0xc] = (long)plVar7;
LAB_10a8d0904:
          do {
            lVar13 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        else if (*(long *)(plVar7[0xc] + 8) == -1) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar15;
          plVar7[0xc] = (long)plVar7;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          goto LAB_10a8d0904;
        }
        param_1[0xa1] = (long)plVar15;
        plVar15 = (long *)param_1[0xa2];
        param_1[0xa2] = (long)plVar7;
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = (long *)param_1[0x12];
        FUN_10a3dedfc();
        lVar13 = *plVar15;
        lVar14 = plVar15[1];
        *(long *)((long)register0x00000008 + -0x120) = lVar13;
        *(long *)((long)register0x00000008 + -0x118) = lVar14;
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = *plVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x24 = param_1 + 0xa1;
        if (lVar13 != 0) {
          FUN_10a8d1228((undefined1 *)((long)register0x00000008 + -0xf0),param_1[0x12],
                        (undefined1 *)((long)register0x00000008 + -0x120));
          puVar16 = (undefined1 *)((long)register0x00000008 + -0xf0);
          FUN_10a8cda2c(*unaff_x24,puVar16);
          plVar15 = *(long **)((long)register0x00000008 + -0xe8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
        }
        lVar13 = param_1[0x12];
        if (lVar13 == 0) {
          plVar15 = (long *)param_1[0xa2];
          lVar13 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x138) = param_1[0xa2];
          *(long *)((long)register0x00000008 + -0x140) = lVar13;
          puVar10 = (undefined8 *)0x2c0;
          __Znwm();
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_DAT_110b9fda0;
          puVar2 = puVar10 + 3;
          *(undefined8 *)((long)register0x00000008 + -0xe8) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar11 = puVar10;
          func_0x00010a0fda30();
          FUN_10ab6a888(puVar2,0,(undefined1 *)((long)register0x00000008 + -0xf0),puVar11,puVar16);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined8 **)((long)register0x00000008 + -0x98) = puVar2;
          *(undefined8 **)((long)register0x00000008 + -0x90) = puVar10;
          FUN_10a05b2a8((undefined1 *)((long)register0x00000008 + -0x98),puVar10 + 8,puVar2);
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x100),
                        (undefined1 *)((long)register0x00000008 + -0x98));
          plVar15 = *(long **)((long)register0x00000008 + -0x90);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x100);
          lVar13 = *(long *)((long)register0x00000008 + -0xf8);
          if (lVar13 == 0) {
            *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar8;
            *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          }
          else {
            plVar15 = (long *)(lVar13 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar14 = *(long *)((long)register0x00000008 + -0xf8);
            *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar8;
            *(long *)((long)register0x00000008 + -0xe8) = lVar14;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = *plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x10a8f25a0;
          *(undefined ***)((long)register0x00000008 + -0xd8) = &PTR_DAT_110c2bdd8;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
          *(long *)((long)register0x00000008 + -200) = lVar13;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined **)((long)register0x00000008 + -0x98) = &UNK_1053a6a3c;
          plVar15 = *(long **)((long)register0x00000008 + -0x80);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110ae9180;
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x98));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))
                    ((undefined1 *)((long)register0x00000008 + -0x90));
          plVar15 = *(long **)((long)register0x00000008 + -0xf8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0xe8);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            plVar15 = (long *)(*(long *)((long)register0x00000008 + -0xe8) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))
                    ((undefined1 *)((long)register0x00000008 + -0xd8));
          plVar15 = *(long **)((long)register0x00000008 + -0xe8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a8d0e8c;
          }
        }
        else {
          lVar14 = *(long *)(lVar13 + 0x860);
          *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar13 + 0x858);
          *(long *)((long)register0x00000008 + -0x108) = lVar14;
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar15 = (long *)param_1[0xa2];
          lVar14 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x138) = param_1[0xa2];
          *(long *)((long)register0x00000008 + -0x140) = lVar14;
          uVar8 = 0x2a8;
          __Znwm(0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0xe8) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar9 = uVar8;
          func_0x00010a0fda30();
          FUN_10ab6a888(uVar8,lVar13,(undefined1 *)((long)register0x00000008 + -0xf0),uVar9,puVar16)
          ;
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x110);
          lVar13 = *(long *)((long)register0x00000008 + -0x108);
          *(undefined8 *)((long)register0x00000008 + -0x100) = uVar9;
          *(long *)((long)register0x00000008 + -0xf8) = lVar13;
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar15 = (long *)(lVar13 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
          }
          *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar9;
          *(long *)((long)register0x00000008 + -0xe8) = lVar13;
          FUN_10a05b208((undefined1 *)((long)register0x00000008 + -0x98),uVar8,
                        (undefined1 *)((long)register0x00000008 + -0xf0));
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x130));
          plVar15 = *(long **)((long)register0x00000008 + -0x90);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar15 = *(long **)((long)register0x00000008 + -0xf8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          lVar13 = *(long *)((long)register0x00000008 + -0x110);
          if ((lVar13 != 0) && (*(long *)((long)register0x00000008 + -0x130) != 0)) {
            lVar14 = *(long *)((long)register0x00000008 + -0x128);
            *(long *)((long)register0x00000008 + -0x98) =
                 *(long *)((long)register0x00000008 + -0x130);
            *(long *)((long)register0x00000008 + -0x90) = lVar14;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = *plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10aa88c30(lVar13,(undefined1 *)((long)register0x00000008 + -0x98));
            plVar15 = *(long **)((long)register0x00000008 + -0x90);
            if (plVar15 != (long *)0x0) {
              plVar7 = plVar15 + 1;
              do {
                lVar13 = *plVar7;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar6) {
                  *plVar7 = lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
          }
          plVar15 = *(long **)((long)register0x00000008 + -0x108);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_10a8d0e8c:
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
        }
        FUN_10a015bec(param_1 + 0x9f,(undefined1 *)((long)register0x00000008 + -0x130));
        plVar15 = *(long **)((long)register0x00000008 + -0x128);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = *(long **)((long)register0x00000008 + -0x118);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        lVar13 = *unaff_x24;
        if (lVar13 != 0) goto LAB_10a8d0f2c;
      }
      else {
LAB_10a8d0f2c:
        *(int *)(lVar13 + 0x2a8) = (int)param_1[0x55];
        FUN_10a91bc00(lVar13,param_1 + 0x53);
      }
      if (param_1[0xa3] == 0) {
        *(long *)((long)register0x00000008 + -0xf0) = param_1[0x12];
        FUN_10a0dbc78((undefined1 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x100),
                      (undefined1 *)((long)register0x00000008 + -0xf0),param_1 + 0x98);
        (**(code **)(**(long **)((long)register0x00000008 + -0x98) + 0x98))
                  (*(long **)((long)register0x00000008 + -0x98),&UNK_10e482b00);
        *(long *)((long)register0x00000008 + -0x100) = param_1[0x12];
        FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                      (undefined1 *)((long)register0x00000008 + -0x100),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        FUN_10a015bec(param_1 + 0xa3,(undefined1 *)((long)register0x00000008 + -0xf0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))
                  ((undefined1 *)((long)register0x00000008 + -0xd8));
        plVar15 = *(long **)((long)register0x00000008 + -0xe8);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = *(long **)((long)register0x00000008 + -0x90);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      }
      uVar3 = *(uint *)(param_1[0x9d] + 0xc);
      unaff_x22 = (ulong)uVar3;
      uVar4 = *(uint *)(param_1[0x9d] + 0x10);
      unaff_x23 = (ulong)uVar4;
      unaff_x21 = param_1 + 0x9a;
      plVar15 = (long *)param_1[0x9a];
      if ((plVar15 == (long *)0x0) || ((**(code **)(*plVar15 + 0x28))(), (uint)plVar15 != uVar3)) {
LAB_10a8d0f9c:
        lVar13 = param_1[0x12];
        FUN_10a2421c8();
        plVar15 = *(long **)(lVar13 + 0x228);
        *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
        *(uint *)((long)register0x00000008 + -0xec) = uVar3;
        *(uint *)((long)register0x00000008 + -0xe8) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0xdc) = 0x100000000;
        *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x400000001;
        *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined1 *)((long)register0x00000008 + -200) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15,(undefined1 *)((long)register0x00000008 + -0xf0));
        FUN_10a099d88(unaff_x21,plVar15);
      }
      else {
        plVar15 = (long *)*unaff_x21;
        (**(code **)(*plVar15 + 0x30))();
        if ((uint)plVar15 != uVar4) goto LAB_10a8d0f9c;
        plVar15 = (long *)*unaff_x21;
        (**(code **)(*plVar15 + 0x50))();
        if ((int)plVar15 != 4) goto LAB_10a8d0f9c;
      }
      plVar15 = (long *)param_1[0x9c];
      puVar16 = (undefined1 *)param_1[0x12];
      (**(code **)(*plVar15 + 0x18))
                (plVar15,puVar16,param_2,param_1[0x9f] + 0x268,param_1[0xa3] + 0x268,unaff_x21,1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0536d4((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x130));
    FUN_10a054c5c((undefined1 *)((long)register0x00000008 + -0x110));
    func_0x00010a3f77c4((undefined1 *)((long)register0x00000008 + -0x120));
    plVar7 = plVar15;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x160) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x158) = plVar15;
    *(undefined1 **)((long)register0x00000008 + -0x150) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x148) = FUN_10a8d1228;
    *(undefined8 *)((long)register0x00000008 + -0x168) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long **)((long)register0x00000008 + -0x1c8) = plVar7;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
      FUN_10a8f213c((undefined1 *)((long)register0x00000008 + -0x1c0),
                    (undefined1 *)((long)register0x00000008 + -0x1e0),puVar16);
      lVar13 = *(long *)((long)register0x00000008 + -0x1b8);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x1b8);
      *extraout_x8 = uVar8;
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x1b0));
      plVar15 = (long *)((long)register0x00000008 + -0x1a8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1a8))();
      plVar7 = *(long **)((long)register0x00000008 + -0x1b8);
      if (plVar7 != (long *)0x0) {
        plVar17 = plVar7 + 1;
        do {
          lVar13 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a8d131c;
      }
    }
    else {
      lVar13 = plVar7[0x10c];
      *(long *)((long)register0x00000008 + -0x1d8) = plVar7[0x10b];
      *(long *)((long)register0x00000008 + -0x1d0) = lVar13;
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)((long)register0x00000008 + -0x1d8);
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x1c8);
      FUN_10a8f1f54(extraout_x8,plVar15,puVar16);
      plVar7 = *(long **)((long)register0x00000008 + -0x1d0);
      if (plVar7 != (long *)0x0) {
        plVar17 = plVar7 + 1;
        do {
          lVar13 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a8d131c:
        if (lVar13 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar15 = plVar7;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x168)) {
      return;
    }
    ___stack_chk_fail();
    plVar7 = plVar15;
    __Unwind_Resume(plVar15);
    *(long **)((long)register0x00000008 + -0x200) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x1f8) = plVar15;
    *(undefined1 **)((long)register0x00000008 + -0x1f0) =
         (undefined1 *)((long)register0x00000008 + -0x150);
    *(code **)((long)register0x00000008 + -0x1e8) = FUN_10a8d1380;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x208) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x261);
    FUN_10a8f25d8((undefined1 *)((long)register0x00000008 + -0x248),
                  (undefined1 *)((long)register0x00000008 + -0x249),param_2,plVar7,puVar16);
    FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x260),
                  (undefined1 *)((long)register0x00000008 + -0x248));
    plVar15 = *(long **)((long)register0x00000008 + -0x240);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x260);
    lVar13 = *(long *)((long)register0x00000008 + -600);
    if (lVar13 == 0) {
      *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = 0;
    }
    else {
      plVar15 = (long *)(lVar13 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar14 = *(long *)((long)register0x00000008 + -600);
      *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = lVar14;
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    unaff_x20 = (long *)((long)register0x00000008 + -0x240);
    extraout_x8_00[2] = FUN_10a8f2754;
    extraout_x8_00[3] = &PTR_DAT_110c2ca20;
    extraout_x8_00[4] = uVar8;
    extraout_x8_00[5] = lVar13;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined **)((long)register0x00000008 + -0x248) = &UNK_1053a6a3c;
    plVar15 = *(long **)((long)register0x00000008 + -0x230);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110ae9180;
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x248));
    unaff_x19 = unaff_x20;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x240))();
    plVar15 = *(long **)((long)register0x00000008 + -600);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar15;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x208)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x248));
    unaff_x30 = FUN_10a8d1568;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x60;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x270);
  } while( true );
}



/* Entry: 10a8d1228; end: 10a8d137f;  */

void FUN_10a8d1228(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined8 *extraout_x8;
  long lVar14;
  undefined8 *extraout_x8_00;
  long lVar15;
  long *unaff_x19;
  long *plVar16;
  long *unaff_x20;
  long *plVar17;
  long *unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar18;
  ulong unaff_x23;
  long *plVar19;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long **)((long)register0x00000008 + -0x88) = param_2;
    if (param_2 == (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      FUN_10a8f213c((undefined1 *)((long)register0x00000008 + -0x80),
                    (undefined1 *)((long)register0x00000008 + -0xa0),param_3);
      lVar14 = *(long *)((long)register0x00000008 + -0x78);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x80);
      param_1[1] = *(undefined8 *)((long)register0x00000008 + -0x78);
      *param_1 = uVar8;
      if (lVar14 != 0) {
        plVar17 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x70));
      plVar17 = (long *)((long)register0x00000008 + -0x68);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x68))();
      plVar16 = *(long **)((long)register0x00000008 + -0x78);
      if (plVar16 != (long *)0x0) {
        plVar7 = plVar16 + 1;
        do {
          lVar14 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a8d131c;
      }
    }
    else {
      lVar14 = param_2[0x10c];
      *(long *)((long)register0x00000008 + -0x98) = param_2[0x10b];
      *(long *)((long)register0x00000008 + -0x90) = lVar14;
      if (lVar14 != 0) {
        plVar17 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar17 = (long *)((long)register0x00000008 + -0x98);
      param_3 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10a8f1f54(param_1,plVar17,param_3);
      plVar16 = *(long **)((long)register0x00000008 + -0x90);
      if (plVar16 != (long *)0x0) {
        plVar7 = plVar16 + 1;
        do {
          lVar14 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a8d131c:
        if (lVar14 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar17 = plVar16;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
      return;
    }
    ___stack_chk_fail();
    plVar16 = plVar17;
    __Unwind_Resume(plVar17);
    *(long **)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(long **)((long)register0x00000008 + -0xb8) = plVar17;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10a8d1380;
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x121);
    FUN_10a8f25d8((undefined1 *)((long)register0x00000008 + -0x108),
                  (undefined1 *)((long)register0x00000008 + -0x109),puVar12,plVar16,param_3);
    FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x120),
                  (undefined1 *)((long)register0x00000008 + -0x108));
    plVar17 = *(long **)((long)register0x00000008 + -0x100);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x120);
    lVar14 = *(long *)((long)register0x00000008 + -0x118);
    if (lVar14 == 0) {
      *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = 0;
    }
    else {
      plVar17 = (long *)(lVar14 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar15 = *(long *)((long)register0x00000008 + -0x118);
      *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = lVar15;
      if (lVar15 != 0) {
        plVar17 = (long *)(lVar15 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    unaff_x20 = (long *)((long)register0x00000008 + -0x100);
    extraout_x8_00[2] = FUN_10a8f2754;
    extraout_x8_00[3] = &PTR_DAT_110c2ca20;
    extraout_x8_00[4] = uVar8;
    extraout_x8_00[5] = lVar14;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined **)((long)register0x00000008 + -0x108) = &UNK_1053a6a3c;
    plVar17 = *(long **)((long)register0x00000008 + -0xf0);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_DAT_110ae9180;
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x108));
    plVar17 = unaff_x20;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x100))();
    plVar16 = *(long **)((long)register0x00000008 + -0x118);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar14 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar17 = plVar16;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -200)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x108));
    plVar16 = plVar17;
    __Unwind_Resume();
    plVar7 = plVar16 + -0x60;
    *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x178) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x170) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x168) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x160) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x158) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x150) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x148) = plVar17;
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(code **)((long)register0x00000008 + -0x138) = FUN_10a8d1568;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x140);
    *(undefined8 *)((long)register0x00000008 + -0x188) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pcVar13 = (char *)plVar16[0x3d];
    unaff_x19 = plVar7;
    param_3 = puVar12;
    if ((((pcVar13 != (char *)0x0) && (*pcVar13 == '\x01')) &&
        (*(int *)(pcVar13 + 0x24) <= iRam00000001132ffd98)) &&
       (unaff_x20 = plVar7, plVar16[0x36] != 0)) {
      lVar14 = plVar16[0x3c];
      lVar15 = plVar16[0x3d];
      *(undefined4 *)(lVar14 + 100) = *(undefined4 *)(lVar15 + 0x18);
      *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar15 + 0x14);
      *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)(lVar15 + 4);
      *(undefined4 *)(lVar14 + 0x70) = *(undefined4 *)(lVar15 + 0x1c);
      lVar14 = plVar16[0x41];
      if (lVar14 == 0) {
        puVar18 = (undefined1 *)plVar16[-0x4e];
        plVar7 = (long *)0x310;
        __Znwm();
        plVar19 = plVar7 + 1;
        *plVar19 = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c2bd98;
        plVar17 = plVar7 + 3;
        FUN_10a91bc24(plVar17,puVar18);
        if (plVar7[0xc] == 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = *plVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar17;
          plVar7[0xc] = (long)plVar7;
LAB_10a8d0904:
          do {
            lVar14 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        else if (*(long *)(plVar7[0xc] + 8) == -1) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = *plVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar17;
          plVar7[0xc] = (long)plVar7;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          goto LAB_10a8d0904;
        }
        plVar16[0x41] = (long)plVar17;
        plVar17 = (long *)plVar16[0x42];
        plVar16[0x42] = (long)plVar7;
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = (long *)plVar16[-0x4e];
        FUN_10a3dedfc();
        lVar14 = *plVar17;
        lVar15 = plVar17[1];
        *(long *)((long)register0x00000008 + -0x250) = lVar14;
        *(long *)((long)register0x00000008 + -0x248) = lVar15;
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x24 = plVar16 + 0x41;
        if (lVar14 != 0) {
          FUN_10a8d1228((undefined1 *)((long)register0x00000008 + -0x220),plVar16[-0x4e],
                        (undefined1 *)((long)register0x00000008 + -0x250));
          puVar18 = (undefined1 *)((long)register0x00000008 + -0x220);
          FUN_10a8cda2c(*unaff_x24,puVar18);
          plVar17 = *(long **)((long)register0x00000008 + -0x218);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        lVar14 = plVar16[-0x4e];
        if (lVar14 == 0) {
          plVar17 = (long *)plVar16[0x42];
          lVar14 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x268) = plVar16[0x42];
          *(long *)((long)register0x00000008 + -0x270) = lVar14;
          puVar10 = (undefined8 *)0x2c0;
          __Znwm();
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_DAT_110b9fda0;
          puVar2 = puVar10 + 3;
          *(undefined8 *)((long)register0x00000008 + -0x218) =
               *(undefined8 *)((long)register0x00000008 + -0x268);
          *(undefined8 *)((long)register0x00000008 + -0x220) =
               *(undefined8 *)((long)register0x00000008 + -0x270);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar11 = puVar10;
          func_0x00010a0fda30();
          FUN_10ab6a888(puVar2,0,(undefined1 *)((long)register0x00000008 + -0x220),puVar11,puVar18);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined8 **)((long)register0x00000008 + -0x1c8) = puVar2;
          *(undefined8 **)((long)register0x00000008 + -0x1c0) = puVar10;
          FUN_10a05b2a8((undefined1 *)((long)register0x00000008 + -0x1c8),puVar10 + 8,puVar2);
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x230),
                        (undefined1 *)((long)register0x00000008 + -0x1c8));
          plVar17 = *(long **)((long)register0x00000008 + -0x1c0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x230);
          lVar14 = *(long *)((long)register0x00000008 + -0x228);
          if (lVar14 == 0) {
            *(undefined ***)((long)register0x00000008 + -0x1c0) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0x220) = uVar8;
            *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
          }
          else {
            plVar17 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar15 = *(long *)((long)register0x00000008 + -0x228);
            *(undefined ***)((long)register0x00000008 + -0x1c0) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0x220) = uVar8;
            *(long *)((long)register0x00000008 + -0x218) = lVar15;
            if (lVar15 != 0) {
              plVar17 = (long *)(lVar15 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = *plVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0x10a8f25a0;
          *(undefined ***)((long)register0x00000008 + -0x208) = &PTR_DAT_110c2bdd8;
          *(undefined8 *)((long)register0x00000008 + -0x200) = uVar8;
          *(long *)((long)register0x00000008 + -0x1f8) = lVar14;
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          *(undefined **)((long)register0x00000008 + -0x1c8) = &UNK_1053a6a3c;
          plVar17 = *(long **)((long)register0x00000008 + -0x1b0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined ***)((long)register0x00000008 + -0x1c0) = &PTR_DAT_110ae9180;
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x1c8));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1c0))
                    ((undefined1 *)((long)register0x00000008 + -0x1c0));
          plVar17 = *(long **)((long)register0x00000008 + -0x228);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined8 *)((long)register0x00000008 + -600) =
               *(undefined8 *)((long)register0x00000008 + -0x218);
          *(undefined8 *)((long)register0x00000008 + -0x260) =
               *(undefined8 *)((long)register0x00000008 + -0x220);
          if (*(long *)((long)register0x00000008 + -0x218) != 0) {
            plVar17 = (long *)(*(long *)((long)register0x00000008 + -0x218) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x210));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x208))
                    ((undefined1 *)((long)register0x00000008 + -0x208));
          plVar17 = *(long **)((long)register0x00000008 + -0x218);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a8d0e8c;
          }
        }
        else {
          lVar15 = *(long *)(lVar14 + 0x860);
          *(undefined8 *)((long)register0x00000008 + -0x240) = *(undefined8 *)(lVar14 + 0x858);
          *(long *)((long)register0x00000008 + -0x238) = lVar15;
          if (lVar15 != 0) {
            plVar17 = (long *)(lVar15 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar17 = (long *)plVar16[0x42];
          lVar15 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x268) = plVar16[0x42];
          *(long *)((long)register0x00000008 + -0x270) = lVar15;
          uVar8 = 0x2a8;
          __Znwm(0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0x218) =
               *(undefined8 *)((long)register0x00000008 + -0x268);
          *(undefined8 *)((long)register0x00000008 + -0x220) =
               *(undefined8 *)((long)register0x00000008 + -0x270);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar9 = uVar8;
          func_0x00010a0fda30();
          FUN_10ab6a888(uVar8,lVar14,(undefined1 *)((long)register0x00000008 + -0x220),uVar9,puVar18
                       );
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x240);
          lVar14 = *(long *)((long)register0x00000008 + -0x238);
          *(undefined8 *)((long)register0x00000008 + -0x230) = uVar9;
          *(long *)((long)register0x00000008 + -0x228) = lVar14;
          if (lVar14 != 0) {
            plVar17 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar17 = (long *)(lVar14 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
          }
          *(undefined8 *)((long)register0x00000008 + -0x220) = uVar9;
          *(long *)((long)register0x00000008 + -0x218) = lVar14;
          FUN_10a05b208((undefined1 *)((long)register0x00000008 + -0x1c8),uVar8,
                        (undefined1 *)((long)register0x00000008 + -0x220));
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x260));
          plVar17 = *(long **)((long)register0x00000008 + -0x1c0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          if (*(long *)((long)register0x00000008 + -0x218) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar17 = *(long **)((long)register0x00000008 + -0x228);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          lVar14 = *(long *)((long)register0x00000008 + -0x240);
          if ((lVar14 != 0) && (*(long *)((long)register0x00000008 + -0x260) != 0)) {
            lVar15 = *(long *)((long)register0x00000008 + -600);
            *(long *)((long)register0x00000008 + -0x1c8) =
                 *(long *)((long)register0x00000008 + -0x260);
            *(long *)((long)register0x00000008 + -0x1c0) = lVar15;
            if (lVar15 != 0) {
              plVar17 = (long *)(lVar15 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = *plVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10aa88c30(lVar14,(undefined1 *)((long)register0x00000008 + -0x1c8));
            plVar17 = *(long **)((long)register0x00000008 + -0x1c0);
            if (plVar17 != (long *)0x0) {
              plVar7 = plVar17 + 1;
              do {
                lVar14 = *plVar7;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar6) {
                  *plVar7 = lVar14 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
          }
          plVar17 = *(long **)((long)register0x00000008 + -0x238);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_10a8d0e8c:
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        FUN_10a015bec(plVar16 + 0x3f,(undefined1 *)((long)register0x00000008 + -0x260));
        plVar17 = *(long **)((long)register0x00000008 + -600);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = *(long **)((long)register0x00000008 + -0x248);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        lVar14 = *unaff_x24;
        if (lVar14 != 0) goto LAB_10a8d0f2c;
      }
      else {
LAB_10a8d0f2c:
        *(int *)(lVar14 + 0x2a8) = (int)plVar16[-0xb];
        FUN_10a91bc00(lVar14,plVar16 + -0xd);
      }
      if (plVar16[0x43] == 0) {
        *(long *)((long)register0x00000008 + -0x220) = plVar16[-0x4e];
        FUN_10a0dbc78((undefined1 *)((long)register0x00000008 + -0x1c8),
                      (undefined1 *)((long)register0x00000008 + -0x230),
                      (undefined1 *)((long)register0x00000008 + -0x220),plVar16 + 0x38);
        (**(code **)(**(long **)((long)register0x00000008 + -0x1c8) + 0x98))
                  (*(long **)((long)register0x00000008 + -0x1c8),&UNK_10e482b00);
        *(long *)((long)register0x00000008 + -0x230) = plVar16[-0x4e];
        FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0x220),
                      (undefined1 *)((long)register0x00000008 + -0x230),
                      (undefined1 *)((long)register0x00000008 + -0x1c8));
        FUN_10a015bec(plVar16 + 0x43,(undefined1 *)((long)register0x00000008 + -0x220));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x210));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x208))
                  ((undefined1 *)((long)register0x00000008 + -0x208));
        plVar17 = *(long **)((long)register0x00000008 + -0x218);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = *(long **)((long)register0x00000008 + -0x1c0);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      uVar3 = *(uint *)(plVar16[0x3d] + 0xc);
      unaff_x22 = (ulong)uVar3;
      uVar4 = *(uint *)(plVar16[0x3d] + 0x10);
      unaff_x23 = (ulong)uVar4;
      unaff_x21 = plVar16 + 0x3a;
      plVar17 = (long *)plVar16[0x3a];
      if ((plVar17 == (long *)0x0) || ((**(code **)(*plVar17 + 0x28))(), (uint)plVar17 != uVar3)) {
LAB_10a8d0f9c:
        lVar14 = plVar16[-0x4e];
        FUN_10a2421c8();
        plVar17 = *(long **)(lVar14 + 0x228);
        *(undefined4 *)((long)register0x00000008 + -0x220) = 0;
        *(uint *)((long)register0x00000008 + -0x21c) = uVar3;
        *(uint *)((long)register0x00000008 + -0x218) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0x20c) = 0x100000000;
        *(undefined8 *)((long)register0x00000008 + -0x214) = 0x400000001;
        *(undefined4 *)((long)register0x00000008 + -0x204) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x1f8) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17,(undefined1 *)((long)register0x00000008 + -0x220));
        FUN_10a099d88(unaff_x21,plVar17);
      }
      else {
        plVar17 = (long *)*unaff_x21;
        (**(code **)(*plVar17 + 0x30))();
        if ((uint)plVar17 != uVar4) goto LAB_10a8d0f9c;
        plVar17 = (long *)*unaff_x21;
        (**(code **)(*plVar17 + 0x50))();
        if ((int)plVar17 != 4) goto LAB_10a8d0f9c;
      }
      unaff_x19 = (long *)plVar16[0x3c];
      param_3 = (undefined1 *)plVar16[-0x4e];
      (**(code **)(*unaff_x19 + 0x18))
                (unaff_x19,param_3,puVar12,plVar16[0x3f] + 0x268,plVar16[0x43] + 0x268,unaff_x21,1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x188)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0536d4((undefined1 *)((long)register0x00000008 + -0x1c8));
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x260));
    FUN_10a054c5c((undefined1 *)((long)register0x00000008 + -0x240));
    func_0x00010a3f77c4((undefined1 *)((long)register0x00000008 + -0x250));
    unaff_x30 = FUN_10a8d1228;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x270);
    param_1 = extraout_x8;
  } while( true );
}



/* Entry: 10a8d1380; end: 10a8d1567;  */

void FUN_10a8d1380(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  long *plVar16;
  long *unaff_x20;
  long *plVar17;
  long *unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar18;
  ulong unaff_x23;
  long *plVar19;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x81);
    FUN_10a8f25d8((undefined1 *)((long)register0x00000008 + -0x68),
                  (undefined1 *)((long)register0x00000008 + -0x69),puVar12,param_2,param_3);
    FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x80),
                  (undefined1 *)((long)register0x00000008 + -0x68));
    plVar17 = *(long **)((long)register0x00000008 + -0x60);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x80);
    lVar14 = *(long *)((long)register0x00000008 + -0x78);
    if (lVar14 == 0) {
      *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110c2ca20;
      *param_1 = uVar8;
      param_1[1] = 0;
    }
    else {
      plVar17 = (long *)(lVar14 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar15 = *(long *)((long)register0x00000008 + -0x78);
      *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110c2ca20;
      *param_1 = uVar8;
      param_1[1] = lVar15;
      if (lVar15 != 0) {
        plVar17 = (long *)(lVar15 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    unaff_x20 = (long *)((long)register0x00000008 + -0x60);
    param_1[2] = FUN_10a8f2754;
    param_1[3] = &PTR_DAT_110c2ca20;
    param_1[4] = uVar8;
    param_1[5] = lVar14;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_1053a6a3c;
    plVar17 = *(long **)((long)register0x00000008 + -0x50);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110ae9180;
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    plVar17 = unaff_x20;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    plVar16 = *(long **)((long)register0x00000008 + -0x78);
    if (plVar16 != (long *)0x0) {
      plVar7 = plVar16 + 1;
      do {
        lVar14 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar17 = plVar16;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x68));
    plVar16 = plVar17;
    __Unwind_Resume();
    plVar7 = plVar16 + -0x60;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
    *(long **)((long)register0x00000008 + -0xd0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0xb8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0xb0) = unaff_x20;
    *(long **)((long)register0x00000008 + -0xa8) = plVar17;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x98) = FUN_10a8d1568;
    *(undefined8 *)((long)register0x00000008 + -0xe8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pcVar13 = (char *)plVar16[0x3d];
    param_3 = puVar12;
    if ((((pcVar13 != (char *)0x0) && (*pcVar13 == '\x01')) &&
        (*(int *)(pcVar13 + 0x24) <= iRam00000001132ffd98)) &&
       (unaff_x20 = plVar7, plVar16[0x36] != 0)) {
      lVar14 = plVar16[0x3c];
      lVar15 = plVar16[0x3d];
      *(undefined4 *)(lVar14 + 100) = *(undefined4 *)(lVar15 + 0x18);
      *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar15 + 0x14);
      *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)(lVar15 + 4);
      *(undefined4 *)(lVar14 + 0x70) = *(undefined4 *)(lVar15 + 0x1c);
      lVar14 = plVar16[0x41];
      if (lVar14 == 0) {
        puVar18 = (undefined1 *)plVar16[-0x4e];
        plVar7 = (long *)0x310;
        __Znwm();
        plVar19 = plVar7 + 1;
        *plVar19 = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c2bd98;
        plVar17 = plVar7 + 3;
        FUN_10a91bc24(plVar17,puVar18);
        if (plVar7[0xc] == 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = *plVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar17;
          plVar7[0xc] = (long)plVar7;
LAB_10a8d0904:
          do {
            lVar14 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        else if (*(long *)(plVar7[0xc] + 8) == -1) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = *plVar19 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar17;
          plVar7[0xc] = (long)plVar7;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          goto LAB_10a8d0904;
        }
        plVar16[0x41] = (long)plVar17;
        plVar17 = (long *)plVar16[0x42];
        plVar16[0x42] = (long)plVar7;
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = (long *)plVar16[-0x4e];
        FUN_10a3dedfc();
        lVar14 = *plVar17;
        lVar15 = plVar17[1];
        *(long *)((long)register0x00000008 + -0x1b0) = lVar14;
        *(long *)((long)register0x00000008 + -0x1a8) = lVar15;
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x24 = plVar16 + 0x41;
        if (lVar14 != 0) {
          FUN_10a8d1228((undefined1 *)((long)register0x00000008 + -0x180),plVar16[-0x4e],
                        (undefined1 *)((long)register0x00000008 + -0x1b0));
          puVar18 = (undefined1 *)((long)register0x00000008 + -0x180);
          FUN_10a8cda2c(*unaff_x24,puVar18);
          plVar17 = *(long **)((long)register0x00000008 + -0x178);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        lVar14 = plVar16[-0x4e];
        if (lVar14 == 0) {
          plVar17 = (long *)plVar16[0x42];
          lVar14 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x1c8) = plVar16[0x42];
          *(long *)((long)register0x00000008 + -0x1d0) = lVar14;
          puVar10 = (undefined8 *)0x2c0;
          __Znwm();
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_DAT_110b9fda0;
          puVar2 = puVar10 + 3;
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0x1c8);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar11 = puVar10;
          func_0x00010a0fda30();
          FUN_10ab6a888(puVar2,0,(undefined1 *)((long)register0x00000008 + -0x180),puVar11,puVar18);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined8 **)((long)register0x00000008 + -0x128) = puVar2;
          *(undefined8 **)((long)register0x00000008 + -0x120) = puVar10;
          FUN_10a05b2a8((undefined1 *)((long)register0x00000008 + -0x128),puVar10 + 8,puVar2);
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -400),
                        (undefined1 *)((long)register0x00000008 + -0x128));
          plVar17 = *(long **)((long)register0x00000008 + -0x120);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar8 = *(undefined8 *)((long)register0x00000008 + -400);
          lVar14 = *(long *)((long)register0x00000008 + -0x188);
          if (lVar14 == 0) {
            *(undefined ***)((long)register0x00000008 + -0x120) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0x180) = uVar8;
            *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
          }
          else {
            plVar17 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar15 = *(long *)((long)register0x00000008 + -0x188);
            *(undefined ***)((long)register0x00000008 + -0x120) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0x180) = uVar8;
            *(long *)((long)register0x00000008 + -0x178) = lVar15;
            if (lVar15 != 0) {
              plVar17 = (long *)(lVar15 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = *plVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0x10a8f25a0;
          *(undefined ***)((long)register0x00000008 + -0x168) = &PTR_DAT_110c2bdd8;
          *(undefined8 *)((long)register0x00000008 + -0x160) = uVar8;
          *(long *)((long)register0x00000008 + -0x158) = lVar14;
          *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
          *(undefined **)((long)register0x00000008 + -0x128) = &UNK_1053a6a3c;
          plVar17 = *(long **)((long)register0x00000008 + -0x110);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined ***)((long)register0x00000008 + -0x120) = &PTR_DAT_110ae9180;
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x128));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x120))
                    ((undefined1 *)((long)register0x00000008 + -0x120));
          plVar17 = *(long **)((long)register0x00000008 + -0x188);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x1b8) =
               *(undefined8 *)((long)register0x00000008 + -0x178);
          *(undefined8 *)((long)register0x00000008 + -0x1c0) =
               *(undefined8 *)((long)register0x00000008 + -0x180);
          if (*(long *)((long)register0x00000008 + -0x178) != 0) {
            plVar17 = (long *)(*(long *)((long)register0x00000008 + -0x178) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x170));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x168))
                    ((undefined1 *)((long)register0x00000008 + -0x168));
          plVar17 = *(long **)((long)register0x00000008 + -0x178);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a8d0e8c;
          }
        }
        else {
          lVar15 = *(long *)(lVar14 + 0x860);
          *(undefined8 *)((long)register0x00000008 + -0x1a0) = *(undefined8 *)(lVar14 + 0x858);
          *(long *)((long)register0x00000008 + -0x198) = lVar15;
          if (lVar15 != 0) {
            plVar17 = (long *)(lVar15 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar17 = (long *)plVar16[0x42];
          lVar15 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x1c8) = plVar16[0x42];
          *(long *)((long)register0x00000008 + -0x1d0) = lVar15;
          uVar8 = 0x2a8;
          __Znwm(0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0x1c8);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar9 = uVar8;
          func_0x00010a0fda30();
          FUN_10ab6a888(uVar8,lVar14,(undefined1 *)((long)register0x00000008 + -0x180),uVar9,puVar18
                       );
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
          lVar14 = *(long *)((long)register0x00000008 + -0x198);
          *(undefined8 *)((long)register0x00000008 + -400) = uVar9;
          *(long *)((long)register0x00000008 + -0x188) = lVar14;
          if (lVar14 != 0) {
            plVar17 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar17 = (long *)(lVar14 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
          }
          *(undefined8 *)((long)register0x00000008 + -0x180) = uVar9;
          *(long *)((long)register0x00000008 + -0x178) = lVar14;
          FUN_10a05b208((undefined1 *)((long)register0x00000008 + -0x128),uVar8,
                        (undefined1 *)((long)register0x00000008 + -0x180));
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x1c0));
          plVar17 = *(long **)((long)register0x00000008 + -0x120);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          if (*(long *)((long)register0x00000008 + -0x178) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar17 = *(long **)((long)register0x00000008 + -0x188);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          lVar14 = *(long *)((long)register0x00000008 + -0x1a0);
          if ((lVar14 != 0) && (*(long *)((long)register0x00000008 + -0x1c0) != 0)) {
            lVar15 = *(long *)((long)register0x00000008 + -0x1b8);
            *(long *)((long)register0x00000008 + -0x128) =
                 *(long *)((long)register0x00000008 + -0x1c0);
            *(long *)((long)register0x00000008 + -0x120) = lVar15;
            if (lVar15 != 0) {
              plVar17 = (long *)(lVar15 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = *plVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10aa88c30(lVar14,(undefined1 *)((long)register0x00000008 + -0x128));
            plVar17 = *(long **)((long)register0x00000008 + -0x120);
            if (plVar17 != (long *)0x0) {
              plVar7 = plVar17 + 1;
              do {
                lVar14 = *plVar7;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar6) {
                  *plVar7 = lVar14 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
          }
          plVar17 = *(long **)((long)register0x00000008 + -0x198);
          if (plVar17 != (long *)0x0) {
            plVar7 = plVar17 + 1;
            do {
              lVar14 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_10a8d0e8c:
            if (lVar14 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        FUN_10a015bec(plVar16 + 0x3f,(undefined1 *)((long)register0x00000008 + -0x1c0));
        plVar17 = *(long **)((long)register0x00000008 + -0x1b8);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = *(long **)((long)register0x00000008 + -0x1a8);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        lVar14 = *unaff_x24;
        if (lVar14 != 0) goto LAB_10a8d0f2c;
      }
      else {
LAB_10a8d0f2c:
        *(int *)(lVar14 + 0x2a8) = (int)plVar16[-0xb];
        FUN_10a91bc00(lVar14,plVar16 + -0xd);
      }
      if (plVar16[0x43] == 0) {
        *(long *)((long)register0x00000008 + -0x180) = plVar16[-0x4e];
        FUN_10a0dbc78((undefined1 *)((long)register0x00000008 + -0x128),
                      (undefined1 *)((long)register0x00000008 + -400),
                      (undefined1 *)((long)register0x00000008 + -0x180),plVar16 + 0x38);
        (**(code **)(**(long **)((long)register0x00000008 + -0x128) + 0x98))
                  (*(long **)((long)register0x00000008 + -0x128),&UNK_10e482b00);
        *(long *)((long)register0x00000008 + -400) = plVar16[-0x4e];
        FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0x180),
                      (undefined1 *)((long)register0x00000008 + -400),
                      (undefined1 *)((long)register0x00000008 + -0x128));
        FUN_10a015bec(plVar16 + 0x43,(undefined1 *)((long)register0x00000008 + -0x180));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x170));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x168))
                  ((undefined1 *)((long)register0x00000008 + -0x168));
        plVar17 = *(long **)((long)register0x00000008 + -0x178);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = *(long **)((long)register0x00000008 + -0x120);
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar14 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      uVar3 = *(uint *)(plVar16[0x3d] + 0xc);
      unaff_x22 = (ulong)uVar3;
      uVar4 = *(uint *)(plVar16[0x3d] + 0x10);
      unaff_x23 = (ulong)uVar4;
      unaff_x21 = plVar16 + 0x3a;
      plVar17 = (long *)plVar16[0x3a];
      if ((plVar17 == (long *)0x0) || ((**(code **)(*plVar17 + 0x28))(), (uint)plVar17 != uVar3)) {
LAB_10a8d0f9c:
        lVar14 = plVar16[-0x4e];
        FUN_10a2421c8();
        plVar17 = *(long **)(lVar14 + 0x228);
        *(undefined4 *)((long)register0x00000008 + -0x180) = 0;
        *(uint *)((long)register0x00000008 + -0x17c) = uVar3;
        *(uint *)((long)register0x00000008 + -0x178) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0x16c) = 0x100000000;
        *(undefined8 *)((long)register0x00000008 + -0x174) = 0x400000001;
        *(undefined4 *)((long)register0x00000008 + -0x164) = 1;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x158) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17,(undefined1 *)((long)register0x00000008 + -0x180));
        FUN_10a099d88(unaff_x21,plVar17);
      }
      else {
        plVar17 = (long *)*unaff_x21;
        (**(code **)(*plVar17 + 0x30))();
        if ((uint)plVar17 != uVar4) goto LAB_10a8d0f9c;
        plVar17 = (long *)*unaff_x21;
        (**(code **)(*plVar17 + 0x50))();
        if ((int)plVar17 != 4) goto LAB_10a8d0f9c;
      }
      plVar7 = (long *)plVar16[0x3c];
      param_3 = (undefined1 *)plVar16[-0x4e];
      (**(code **)(*plVar7 + 0x18))
                (plVar7,param_3,puVar12,plVar16[0x3f] + 0x268,plVar16[0x43] + 0x268,unaff_x21,1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe8)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0536d4((undefined1 *)((long)register0x00000008 + -0x128));
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x1c0));
    FUN_10a054c5c((undefined1 *)((long)register0x00000008 + -0x1a0));
    func_0x00010a3f77c4((undefined1 *)((long)register0x00000008 + -0x1b0));
    plVar17 = plVar7;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x1f0) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x1e8) = plVar7;
    *(undefined1 **)((long)register0x00000008 + -0x1e0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(code **)((long)register0x00000008 + -0x1d8) = FUN_10a8d1228;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1e0);
    *(undefined8 *)((long)register0x00000008 + -0x1f8) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long **)((long)register0x00000008 + -600) = plVar17;
    if (plVar17 == (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      FUN_10a8f213c((undefined1 *)((long)register0x00000008 + -0x250),
                    (undefined1 *)((long)register0x00000008 + -0x270));
      lVar14 = *(long *)((long)register0x00000008 + -0x248);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x250);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x248);
      *extraout_x8 = uVar8;
      if (lVar14 != 0) {
        plVar17 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x240));
      unaff_x19 = (long *)((long)register0x00000008 + -0x238);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x238))();
      plVar17 = *(long **)((long)register0x00000008 + -0x248);
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar14 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a8d131c;
      }
    }
    else {
      lVar14 = plVar17[0x10c];
      *(long *)((long)register0x00000008 + -0x268) = plVar17[0x10b];
      *(long *)((long)register0x00000008 + -0x260) = lVar14;
      if (lVar14 != 0) {
        plVar17 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      unaff_x19 = (long *)((long)register0x00000008 + -0x268);
      param_3 = (undefined1 *)((long)register0x00000008 + -600);
      FUN_10a8f1f54(extraout_x8);
      plVar17 = *(long **)((long)register0x00000008 + -0x260);
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar14 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a8d131c:
        if (lVar14 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          unaff_x19 = plVar17;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x1f8)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10a8d1380;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x270);
    param_1 = extraout_x8_00;
  } while( true );
}



/* Entry: 10a8d1568; end: 10a8d156f;  */

void FUN_10a8d1568(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar15;
  ulong unaff_x22;
  undefined1 *puVar16;
  ulong unaff_x23;
  long *plVar17;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar15 = param_1 + -0x60;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = (char *)param_1[0x3d];
    puVar16 = param_2;
    if ((((pcVar12 != (char *)0x0) && (*pcVar12 == '\x01')) &&
        (*(int *)(pcVar12 + 0x24) <= iRam00000001132ffd98)) &&
       (unaff_x20 = plVar15, param_1[0x36] != 0)) {
      lVar13 = param_1[0x3c];
      lVar14 = param_1[0x3d];
      *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(lVar14 + 0x18);
      *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar14 + 0x14);
      *(undefined8 *)(lVar13 + 0x68) = *(undefined8 *)(lVar14 + 4);
      *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)(lVar14 + 0x1c);
      lVar13 = param_1[0x41];
      if (lVar13 == 0) {
        puVar16 = (undefined1 *)param_1[-0x4e];
        plVar7 = (long *)0x310;
        __Znwm();
        plVar17 = plVar7 + 1;
        *plVar17 = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c2bd98;
        plVar15 = plVar7 + 3;
        FUN_10a91bc24(plVar15,puVar16);
        if (plVar7[0xc] == 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar15;
          plVar7[0xc] = (long)plVar7;
LAB_10a8d0904:
          do {
            lVar13 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        else if (*(long *)(plVar7[0xc] + 8) == -1) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar1 = plVar7 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar7[0xb] = (long)plVar15;
          plVar7[0xc] = (long)plVar7;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          goto LAB_10a8d0904;
        }
        param_1[0x41] = (long)plVar15;
        plVar15 = (long *)param_1[0x42];
        param_1[0x42] = (long)plVar7;
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = (long *)param_1[-0x4e];
        FUN_10a3dedfc();
        lVar13 = *plVar15;
        lVar14 = plVar15[1];
        *(long *)((long)register0x00000008 + -0x120) = lVar13;
        *(long *)((long)register0x00000008 + -0x118) = lVar14;
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = *plVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        unaff_x24 = param_1 + 0x41;
        if (lVar13 != 0) {
          FUN_10a8d1228((undefined1 *)((long)register0x00000008 + -0xf0),param_1[-0x4e],
                        (undefined1 *)((long)register0x00000008 + -0x120));
          puVar16 = (undefined1 *)((long)register0x00000008 + -0xf0);
          FUN_10a8cda2c(*unaff_x24,puVar16);
          plVar15 = *(long **)((long)register0x00000008 + -0xe8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
        }
        lVar13 = param_1[-0x4e];
        if (lVar13 == 0) {
          plVar15 = (long *)param_1[0x42];
          lVar13 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x138) = param_1[0x42];
          *(long *)((long)register0x00000008 + -0x140) = lVar13;
          puVar10 = (undefined8 *)0x2c0;
          __Znwm();
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_DAT_110b9fda0;
          puVar2 = puVar10 + 3;
          *(undefined8 *)((long)register0x00000008 + -0xe8) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar11 = puVar10;
          func_0x00010a0fda30();
          FUN_10ab6a888(puVar2,0,(undefined1 *)((long)register0x00000008 + -0xf0),puVar11,puVar16);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined8 **)((long)register0x00000008 + -0x98) = puVar2;
          *(undefined8 **)((long)register0x00000008 + -0x90) = puVar10;
          FUN_10a05b2a8((undefined1 *)((long)register0x00000008 + -0x98),puVar10 + 8,puVar2);
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x100),
                        (undefined1 *)((long)register0x00000008 + -0x98));
          plVar15 = *(long **)((long)register0x00000008 + -0x90);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x100);
          lVar13 = *(long *)((long)register0x00000008 + -0xf8);
          if (lVar13 == 0) {
            *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar8;
            *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          }
          else {
            plVar15 = (long *)(lVar13 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar14 = *(long *)((long)register0x00000008 + -0xf8);
            *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110c2bdd8;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar8;
            *(long *)((long)register0x00000008 + -0xe8) = lVar14;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = *plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x10a8f25a0;
          *(undefined ***)((long)register0x00000008 + -0xd8) = &PTR_DAT_110c2bdd8;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar8;
          *(long *)((long)register0x00000008 + -200) = lVar13;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined **)((long)register0x00000008 + -0x98) = &UNK_1053a6a3c;
          plVar15 = *(long **)((long)register0x00000008 + -0x80);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110ae9180;
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x98));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))
                    ((undefined1 *)((long)register0x00000008 + -0x90));
          plVar15 = *(long **)((long)register0x00000008 + -0xf8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0xe8);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            plVar15 = (long *)(*(long *)((long)register0x00000008 + -0xe8) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))
                    ((undefined1 *)((long)register0x00000008 + -0xd8));
          plVar15 = *(long **)((long)register0x00000008 + -0xe8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_10a8d0e8c;
          }
        }
        else {
          lVar14 = *(long *)(lVar13 + 0x860);
          *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar13 + 0x858);
          *(long *)((long)register0x00000008 + -0x108) = lVar14;
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar15 = (long *)param_1[0x42];
          lVar14 = *unaff_x24;
          *(long *)((long)register0x00000008 + -0x138) = param_1[0x42];
          *(long *)((long)register0x00000008 + -0x140) = lVar14;
          uVar8 = 0x2a8;
          __Znwm(0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0xe8) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = *plVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar9 = uVar8;
          func_0x00010a0fda30();
          FUN_10ab6a888(uVar8,lVar13,(undefined1 *)((long)register0x00000008 + -0xf0),uVar9,puVar16)
          ;
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x110);
          lVar13 = *(long *)((long)register0x00000008 + -0x108);
          *(undefined8 *)((long)register0x00000008 + -0x100) = uVar9;
          *(long *)((long)register0x00000008 + -0xf8) = lVar13;
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar15 = (long *)(lVar13 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            __ZNSt3__119__shared_weak_count14__release_weakEv(lVar13);
          }
          *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar9;
          *(long *)((long)register0x00000008 + -0xe8) = lVar13;
          FUN_10a05b208((undefined1 *)((long)register0x00000008 + -0x98),uVar8,
                        (undefined1 *)((long)register0x00000008 + -0xf0));
          FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x130));
          plVar15 = *(long **)((long)register0x00000008 + -0x90);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          if (*(long *)((long)register0x00000008 + -0xe8) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar15 = *(long **)((long)register0x00000008 + -0xf8);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          lVar13 = *(long *)((long)register0x00000008 + -0x110);
          if ((lVar13 != 0) && (*(long *)((long)register0x00000008 + -0x130) != 0)) {
            lVar14 = *(long *)((long)register0x00000008 + -0x128);
            *(long *)((long)register0x00000008 + -0x98) =
                 *(long *)((long)register0x00000008 + -0x130);
            *(long *)((long)register0x00000008 + -0x90) = lVar14;
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = *plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10aa88c30(lVar13,(undefined1 *)((long)register0x00000008 + -0x98));
            plVar15 = *(long **)((long)register0x00000008 + -0x90);
            if (plVar15 != (long *)0x0) {
              plVar7 = plVar15 + 1;
              do {
                lVar13 = *plVar7;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar6) {
                  *plVar7 = lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
              }
            }
          }
          plVar15 = *(long **)((long)register0x00000008 + -0x108);
          if (plVar15 != (long *)0x0) {
            plVar7 = plVar15 + 1;
            do {
              lVar13 = *plVar7;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar6) {
                *plVar7 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_10a8d0e8c:
            if (lVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
        }
        FUN_10a015bec(param_1 + 0x3f,(undefined1 *)((long)register0x00000008 + -0x130));
        plVar15 = *(long **)((long)register0x00000008 + -0x128);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = *(long **)((long)register0x00000008 + -0x118);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        lVar13 = *unaff_x24;
        if (lVar13 != 0) goto LAB_10a8d0f2c;
      }
      else {
LAB_10a8d0f2c:
        *(int *)(lVar13 + 0x2a8) = (int)param_1[-0xb];
        FUN_10a91bc00(lVar13,param_1 + -0xd);
      }
      if (param_1[0x43] == 0) {
        *(long *)((long)register0x00000008 + -0xf0) = param_1[-0x4e];
        FUN_10a0dbc78((undefined1 *)((long)register0x00000008 + -0x98),
                      (undefined1 *)((long)register0x00000008 + -0x100),
                      (undefined1 *)((long)register0x00000008 + -0xf0),param_1 + 0x38);
        (**(code **)(**(long **)((long)register0x00000008 + -0x98) + 0x98))
                  (*(long **)((long)register0x00000008 + -0x98),&UNK_10e482b00);
        *(long *)((long)register0x00000008 + -0x100) = param_1[-0x4e];
        FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                      (undefined1 *)((long)register0x00000008 + -0x100),
                      (undefined1 *)((long)register0x00000008 + -0x98));
        FUN_10a015bec(param_1 + 0x43,(undefined1 *)((long)register0x00000008 + -0xf0));
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))
                  ((undefined1 *)((long)register0x00000008 + -0xd8));
        plVar15 = *(long **)((long)register0x00000008 + -0xe8);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        plVar15 = *(long **)((long)register0x00000008 + -0x90);
        if (plVar15 != (long *)0x0) {
          plVar7 = plVar15 + 1;
          do {
            lVar13 = *plVar7;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *plVar7 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      }
      uVar3 = *(uint *)(param_1[0x3d] + 0xc);
      unaff_x22 = (ulong)uVar3;
      uVar4 = *(uint *)(param_1[0x3d] + 0x10);
      unaff_x23 = (ulong)uVar4;
      unaff_x21 = param_1 + 0x3a;
      plVar15 = (long *)param_1[0x3a];
      if ((plVar15 == (long *)0x0) || ((**(code **)(*plVar15 + 0x28))(), (uint)plVar15 != uVar3)) {
LAB_10a8d0f9c:
        lVar13 = param_1[-0x4e];
        FUN_10a2421c8();
        plVar15 = *(long **)(lVar13 + 0x228);
        *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
        *(uint *)((long)register0x00000008 + -0xec) = uVar3;
        *(uint *)((long)register0x00000008 + -0xe8) = uVar4;
        *(undefined8 *)((long)register0x00000008 + -0xdc) = 0x100000000;
        *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x400000001;
        *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined1 *)((long)register0x00000008 + -200) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15,(undefined1 *)((long)register0x00000008 + -0xf0));
        FUN_10a099d88(unaff_x21,plVar15);
      }
      else {
        plVar15 = (long *)*unaff_x21;
        (**(code **)(*plVar15 + 0x30))();
        if ((uint)plVar15 != uVar4) goto LAB_10a8d0f9c;
        plVar15 = (long *)*unaff_x21;
        (**(code **)(*plVar15 + 0x50))();
        if ((int)plVar15 != 4) goto LAB_10a8d0f9c;
      }
      plVar15 = (long *)param_1[0x3c];
      puVar16 = (undefined1 *)param_1[-0x4e];
      (**(code **)(*plVar15 + 0x18))
                (plVar15,puVar16,param_2,param_1[0x3f] + 0x268,param_1[0x43] + 0x268,unaff_x21,1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a0536d4((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x130));
    FUN_10a054c5c((undefined1 *)((long)register0x00000008 + -0x110));
    func_0x00010a3f77c4((undefined1 *)((long)register0x00000008 + -0x120));
    plVar7 = plVar15;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x160) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x158) = plVar15;
    *(undefined1 **)((long)register0x00000008 + -0x150) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x148) = FUN_10a8d1228;
    *(undefined8 *)((long)register0x00000008 + -0x168) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long **)((long)register0x00000008 + -0x1c8) = plVar7;
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
      FUN_10a8f213c((undefined1 *)((long)register0x00000008 + -0x1c0),
                    (undefined1 *)((long)register0x00000008 + -0x1e0),puVar16);
      lVar13 = *(long *)((long)register0x00000008 + -0x1b8);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x1b8);
      *extraout_x8 = uVar8;
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x1b0));
      plVar15 = (long *)((long)register0x00000008 + -0x1a8);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x1a8))();
      plVar7 = *(long **)((long)register0x00000008 + -0x1b8);
      if (plVar7 != (long *)0x0) {
        plVar17 = plVar7 + 1;
        do {
          lVar13 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a8d131c;
      }
    }
    else {
      lVar13 = plVar7[0x10c];
      *(long *)((long)register0x00000008 + -0x1d8) = plVar7[0x10b];
      *(long *)((long)register0x00000008 + -0x1d0) = lVar13;
      if (lVar13 != 0) {
        plVar15 = (long *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar15 = (long *)((long)register0x00000008 + -0x1d8);
      puVar16 = (undefined1 *)((long)register0x00000008 + -0x1c8);
      FUN_10a8f1f54(extraout_x8,plVar15,puVar16);
      plVar7 = *(long **)((long)register0x00000008 + -0x1d0);
      if (plVar7 != (long *)0x0) {
        plVar17 = plVar7 + 1;
        do {
          lVar13 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_10a8d131c:
        if (lVar13 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar15 = plVar7;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x168)) {
      return;
    }
    ___stack_chk_fail();
    plVar7 = plVar15;
    __Unwind_Resume(plVar15);
    *(long **)((long)register0x00000008 + -0x200) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x1f8) = plVar15;
    *(undefined1 **)((long)register0x00000008 + -0x1f0) =
         (undefined1 *)((long)register0x00000008 + -0x150);
    *(code **)((long)register0x00000008 + -0x1e8) = FUN_10a8d1380;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1f0);
    *(undefined8 *)((long)register0x00000008 + -0x208) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x261);
    FUN_10a8f25d8((undefined1 *)((long)register0x00000008 + -0x248),
                  (undefined1 *)((long)register0x00000008 + -0x249),param_2,plVar7,puVar16);
    FUN_10a05b04c((undefined1 *)((long)register0x00000008 + -0x260),
                  (undefined1 *)((long)register0x00000008 + -0x248));
    plVar15 = *(long **)((long)register0x00000008 + -0x240);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x260);
    lVar13 = *(long *)((long)register0x00000008 + -600);
    if (lVar13 == 0) {
      *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = 0;
    }
    else {
      plVar15 = (long *)(lVar13 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar14 = *(long *)((long)register0x00000008 + -600);
      *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110c2ca20;
      *extraout_x8_00 = uVar8;
      extraout_x8_00[1] = lVar14;
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    unaff_x20 = (long *)((long)register0x00000008 + -0x240);
    extraout_x8_00[2] = FUN_10a8f2754;
    extraout_x8_00[3] = &PTR_DAT_110c2ca20;
    extraout_x8_00[4] = uVar8;
    extraout_x8_00[5] = lVar13;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined **)((long)register0x00000008 + -0x248) = &UNK_1053a6a3c;
    plVar15 = *(long **)((long)register0x00000008 + -0x230);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_DAT_110ae9180;
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x248));
    unaff_x19 = unaff_x20;
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x240))();
    plVar15 = *(long **)((long)register0x00000008 + -600);
    if (plVar15 != (long *)0x0) {
      plVar7 = plVar15 + 1;
      do {
        lVar13 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        unaff_x19 = plVar15;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x208)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x248));
    unaff_x30 = FUN_10a8d1568;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x270);
  } while( true );
}



/* Entry: 10a8d1570; end: 10a8d194f;  */

void FUN_10a8d1570(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  float fVar15;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  ulong *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  long *plStack_48;
  
  if (*(long *)(param_2 + 0x108) == 0) {
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    FUN_10a4d5e30(&lStack_50,*(long *)(param_2 + 0x108),param_1 + 0x338);
    if (lStack_50 != 0) {
      puVar1 = (ulong *)(param_1 + 0x408);
      lVar9 = *(long *)(lStack_50 + 200);
      if ((lVar9 == 0) || (*(int *)(lVar9 + 0x20) == 1)) {
        FUN_10a31a260(param_1 + 0x4b0);
      }
      else {
        FUN_10a0f3910(&uStack_b0,lVar9 + 0x10,0);
        uStack_b8 = 0;
        plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,0x1010000);
        auStack_e0[0] = 0x2010000;
        uStack_d0 = 0;
        lVar9 = param_1;
        puStack_d8 = puVar1;
        puStack_c0 = &uStack_b0;
        FUN_10a8cf6ac(param_1);
        func_0x000109a3f338(&plStack_c8,auStack_e0,lVar9);
        iVar4 = *(int *)(param_1 + 0x40c);
        uStack_100 = (ulong)&uStack_140 | 8;
        uStack_138 = *(undefined8 *)(param_1 + 0x410);
        uStack_140 = *puVar1;
        uStack_130 = *(undefined8 *)(param_1 + 0x418);
        uStack_128 = *(undefined8 *)(param_1 + 0x420);
        uStack_118 = *(undefined8 *)(param_1 + 0x430);
        uStack_120 = *(undefined8 *)(param_1 + 0x428);
        uStack_110 = *(undefined8 *)(param_1 + 0x438);
        lStack_108 = *(long *)(param_1 + 0x440);
        uStack_f0 = 0;
        uStack_e8 = 0;
        if (lStack_108 != 0) {
          piVar3 = (int *)(lStack_108 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar4 = *(int *)(param_1 + 0x40c);
        }
        puStack_f8 = &uStack_f0;
        if (iVar4 < 3) {
          uStack_f0 = **(undefined8 **)(param_1 + 0x450);
          uStack_e8 = (*(undefined8 **)(param_1 + 0x450))[1];
        }
        else {
          uStack_140 = uStack_140 & 0xffffffff;
          func_0x000109a84868(&uStack_140,puVar1);
        }
        FUN_10a0f3c50(&plStack_c8,&uStack_140,0,0xffffffff);
        FUN_10a4d0020(param_1 + 0x4b0,&plStack_c8);
        plVar7 = plStack_c8;
        plStack_c8 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        if (lStack_108 != 0) {
          piVar3 = (int *)(lStack_108 + 0x14);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_140);
          }
        }
        lStack_108 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        if (0 < uStack_140._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)(uStack_100 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_140._4_4_);
        }
        if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
          _free(puStack_f8[-1]);
        }
        if (lStack_78 != 0) {
          piVar3 = (int *)(lStack_78 + 0x14);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_b0);
          }
        }
        lStack_78 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        if (0 < uStack_b0._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lStack_70 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_b0._4_4_);
        }
        if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_68 + -8));
        }
      }
      lVar9 = *(long *)(param_1 + 0x298);
      uVar10 = *(undefined8 *)(lStack_50 + 0xb4);
      *(undefined8 *)(param_1 + 0x49c) = uVar10;
      uVar8 = *(undefined8 *)(lStack_50 + 0xbc);
      *(undefined8 *)(param_1 + 0x4a4) = uVar8;
      uVar14 = NEON_fmov(0x3f800000,4);
      fVar11 = (float)uVar14 - (float)((ulong)uVar8 >> 0x20);
      fVar12 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
      uVar14 = NEON_fmov(0xbf800000,4);
      auVar13._0_4_ = (float)uVar8 + (float)uVar8 + (float)uVar14;
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar11 = fVar11 + fVar11 + (float)uVar14;
      fVar12 = fVar12 + fVar12 + fVar15;
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      auVar13._4_4_ = 0;
      auVar13._8_4_ = (float)uVar10 + (float)uVar10 + fVar15;
      auVar13._12_4_ = 0;
      auVar13 = NEON_ext(auVar13,auVar13,8,1);
      *(ulong *)(lVar9 + 0x2c) =
           CONCAT17((byte)((uint)fVar12 >> 0x18) | auVar13[0xf],
                    CONCAT16((byte)((uint)fVar12 >> 0x10) | auVar13[0xe],
                             CONCAT15((byte)((uint)fVar12 >> 8) | auVar13[0xd],
                                      CONCAT14(SUB41(fVar12,0) | auVar13[0xc],auVar13._8_4_))));
      *(ulong *)(lVar9 + 0x24) =
           CONCAT17((byte)((uint)fVar11 >> 0x18) | auVar13[7],
                    CONCAT16((byte)((uint)fVar11 >> 0x10) | auVar13[6],
                             CONCAT15((byte)((uint)fVar11 >> 8) | auVar13[5],
                                      CONCAT14(SUB41(fVar11,0) | auVar13[4],auVar13._0_4_))));
      FUN_10a8cf748(param_1,param_1 + 0x4c0,param_1 + 0x4b0);
      goto LAB_10a8d16a8;
    }
  }
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  FUN_10a16b1ec(param_1 + 0x4b0,&uStack_b0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x298) + 0x24) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x298) + 0x2c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x298) + 0x30) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x298) + 0x28) = 0;
LAB_10a8d16a8:
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8d1950; end: 10a8d1963;  */

void FUN_10a8d1950(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  ulong *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  long *plStack_48;
  
  lVar8 = param_1 + -0x2d8;
  if (*(long *)(param_2 + 0x108) == 0) {
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
  }
  else {
    FUN_10a4d5e30(&lStack_50,*(long *)(param_2 + 0x108),param_1 + 0x60);
    if (lStack_50 != 0) {
      puVar1 = (ulong *)(param_1 + 0x130);
      lVar10 = *(long *)(lStack_50 + 200);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x20) == 1)) {
        FUN_10a31a260(param_1 + 0x1d8);
      }
      else {
        FUN_10a0f3910(&uStack_b0,lVar10 + 0x10,0);
        uStack_b8 = 0;
        plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,0x1010000);
        auStack_e0[0] = 0x2010000;
        uStack_d0 = 0;
        lVar10 = lVar8;
        puStack_d8 = puVar1;
        puStack_c0 = &uStack_b0;
        FUN_10a8cf6ac(lVar8);
        func_0x000109a3f338(&plStack_c8,auStack_e0,lVar10);
        iVar4 = *(int *)(param_1 + 0x134);
        uStack_100 = (ulong)&uStack_140 | 8;
        uStack_138 = *(undefined8 *)(param_1 + 0x138);
        uStack_140 = *puVar1;
        uStack_130 = *(undefined8 *)(param_1 + 0x140);
        uStack_128 = *(undefined8 *)(param_1 + 0x148);
        uStack_118 = *(undefined8 *)(param_1 + 0x158);
        uStack_120 = *(undefined8 *)(param_1 + 0x150);
        uStack_110 = *(undefined8 *)(param_1 + 0x160);
        lStack_108 = *(long *)(param_1 + 0x168);
        uStack_f0 = 0;
        uStack_e8 = 0;
        if (lStack_108 != 0) {
          piVar3 = (int *)(lStack_108 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar4 = *(int *)(param_1 + 0x134);
        }
        puStack_f8 = &uStack_f0;
        if (iVar4 < 3) {
          uStack_f0 = **(undefined8 **)(param_1 + 0x178);
          uStack_e8 = (*(undefined8 **)(param_1 + 0x178))[1];
        }
        else {
          uStack_140 = uStack_140 & 0xffffffff;
          func_0x000109a84868(&uStack_140,puVar1);
        }
        FUN_10a0f3c50(&plStack_c8,&uStack_140,0,0xffffffff);
        FUN_10a4d0020(param_1 + 0x1d8,&plStack_c8);
        plVar7 = plStack_c8;
        plStack_c8 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        if (lStack_108 != 0) {
          piVar3 = (int *)(lStack_108 + 0x14);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_140);
          }
        }
        lStack_108 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        if (0 < uStack_140._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)(uStack_100 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_140._4_4_);
        }
        if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
          _free(puStack_f8[-1]);
        }
        if (lStack_78 != 0) {
          piVar3 = (int *)(lStack_78 + 0x14);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_b0);
          }
        }
        lStack_78 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        if (0 < uStack_b0._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)(lStack_70 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_b0._4_4_);
        }
        if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_68 + -8));
        }
      }
      lVar10 = *(long *)(param_1 + -0x40);
      uVar11 = *(undefined8 *)(lStack_50 + 0xb4);
      *(undefined8 *)(param_1 + 0x1c4) = uVar11;
      uVar9 = *(undefined8 *)(lStack_50 + 0xbc);
      *(undefined8 *)(param_1 + 0x1cc) = uVar9;
      uVar15 = NEON_fmov(0x3f800000,4);
      fVar12 = (float)uVar15 - (float)((ulong)uVar9 >> 0x20);
      fVar13 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      uVar15 = NEON_fmov(0xbf800000,4);
      auVar14._0_4_ = (float)uVar9 + (float)uVar9 + (float)uVar15;
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar12 = fVar12 + fVar12 + (float)uVar15;
      fVar13 = fVar13 + fVar13 + fVar16;
      *(undefined4 *)(param_1 + -0x30) = 0;
      auVar14._4_4_ = 0;
      auVar14._8_4_ = (float)uVar11 + (float)uVar11 + fVar16;
      auVar14._12_4_ = 0;
      auVar14 = NEON_ext(auVar14,auVar14,8,1);
      *(ulong *)(lVar10 + 0x2c) =
           CONCAT17((byte)((uint)fVar13 >> 0x18) | auVar14[0xf],
                    CONCAT16((byte)((uint)fVar13 >> 0x10) | auVar14[0xe],
                             CONCAT15((byte)((uint)fVar13 >> 8) | auVar14[0xd],
                                      CONCAT14(SUB41(fVar13,0) | auVar14[0xc],auVar14._8_4_))));
      *(ulong *)(lVar10 + 0x24) =
           CONCAT17((byte)((uint)fVar12 >> 0x18) | auVar14[7],
                    CONCAT16((byte)((uint)fVar12 >> 0x10) | auVar14[6],
                             CONCAT15((byte)((uint)fVar12 >> 8) | auVar14[5],
                                      CONCAT14(SUB41(fVar12,0) | auVar14[4],auVar14._0_4_))));
      FUN_10a8cf748(lVar8,param_1 + 0x1e8,param_1 + 0x1d8);
      goto LAB_10a8d16a8;
    }
  }
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  FUN_10a16b1ec(param_1 + 0x1d8,&uStack_b0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *(undefined4 *)(param_1 + -0x30) = 0;
  *(undefined4 *)(*(long *)(param_1 + -0x40) + 0x24) = 0;
  *(undefined4 *)(*(long *)(param_1 + -0x40) + 0x2c) = 0;
  *(undefined4 *)(*(long *)(param_1 + -0x40) + 0x30) = 0;
  *(undefined4 *)(*(long *)(param_1 + -0x40) + 0x28) = 0;
LAB_10a8d16a8:
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a8d1964; end: 10a8d1977;  */

void FUN_10a8d1964(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1978; end: 10a8d197f;  */

undefined8 * FUN_10a8d1978(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}


