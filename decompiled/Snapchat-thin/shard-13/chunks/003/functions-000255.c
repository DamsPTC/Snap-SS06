/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4f616c; end: 10a4f617f;  */

void FUN_10a4f616c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar7 = (long *)*puVar4;
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)puVar4[1];
    plVar5 = plVar7;
    if (plVar8 != plVar7) {
      do {
        plVar8 = plVar8 + -1;
        plVar5 = (long *)*plVar8;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
          do {
            uVar6 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar6 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar6 & 0x1fffffffc) == 4) {
            do {
              uVar6 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar6 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar6 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
      } while (plVar8 != plVar7);
      plVar5 = (long *)*puVar4;
    }
    puVar4[1] = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10a4f6180; end: 10a4f6223;  */

void FUN_10a4f6180(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar5 & 0x1fffffffc) == 4) {
            do {
              uVar5 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar5 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar5 - 1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
      } while (plVar7 != plVar6);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10a4f6224; end: 10a4f6253;  */

void FUN_10a4f6224(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  FUN_10a4f6254();
                    /* WARNING: Could not recover jumptable at 0x00010a4f6250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a4f6254; end: 10a4f63c3;  */

void FUN_10a4f6254(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4f6398);
    (*pcVar4)();
  }
  lVar6 = param_1[0x15];
  param_1[0x15] = 0;
  lStack_28 = lVar6;
  (*(code *)*param_1)(&lStack_30,param_1 + 1);
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if ((*(char *)(lVar6 + 0xa0) == '\x01') &&
           (lVar5 = *(long *)(lVar6 + 0x98), *(undefined8 *)(lVar6 + 0x98) = 0, lVar5 != 0)) {
          FUN_10a5098d8();
        }
        lVar5 = lStack_30;
        lStack_30 = 0;
        *(long *)(lVar6 + 0x98) = lVar5;
        *(undefined1 *)(lVar6 + 0xa0) = 1;
        *(undefined8 *)(lVar6 + 0x10) = 2;
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a4f6304;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a4f6304:
      lVar5 = lStack_30;
      lStack_30 = 0;
      if (lVar5 != 0) {
        FUN_10a5098d8();
      }
      if (*(char *)(param_1 + 0x14) == '\x01') {
        FUN_10a1f3f34(param_1 + 0x11,param_1[0x12]);
        if (*(char *)((long)param_1 + 0x77) < '\0') {
          __ZdlPv(param_1[0xc]);
        }
        if (*(char *)((long)param_1 + 0x3f) < '\0') {
          __ZdlPv(param_1[5]);
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(param_1[1]);
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a4f63c4; end: 10a4f6763;  */

undefined8 * FUN_10a4f63c4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110be90c8;
  if (param_1[0x2a] != 0) {
    func_0x0001092b4274(param_1 + 0x2a);
  }
  func_0x00010a4f6594(param_1 + 0x15);
  *param_1 = &PTR_DAT_110be9118;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    lVar1 = param_1[0x13];
    param_1[0x13] = 0;
    if (lVar1 != 0) {
      FUN_10a5098d8();
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a4f6764; end: 10a4f685f;  */

undefined8 ** FUN_10a4f6764(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be9160,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4f6860; end: 10a4f686f;  */

void FUN_10a4f6860(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f6870; end: 10a4f68d7;  */

undefined8 FUN_10a4f6870(undefined8 param_1)

{
  func_0x00010a4f6898(param_1,0);
  return param_1;
}



/* Entry: 10a4f68d8; end: 10a4f6b73;  */

void FUN_10a4f68d8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  ulong param_5,long param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [20];
  undefined1 auStack_8c [44];
  
  plVar7 = &lStack_160;
  lStack_160 = param_1;
  uStack_158 = param_2;
  if (param_5 != 0) {
    plVar12 = &uStack_f0;
    uStack_f0 = param_1;
    uStack_e8 = param_2;
    func_0x00010a289568(plVar12,*param_4);
    if (param_5 != 1) {
      plVar11 = &uStack_f0;
      uStack_f0 = param_1;
      uStack_e8 = param_2;
      func_0x00010a289568(plVar11,param_4[1]);
      if (2 < param_5) {
        puVar6 = &uStack_f0;
        uStack_f0 = param_1;
        uStack_e8 = param_2;
        FUN_10a4efbc8(puVar6,param_4[2]);
        if (*plVar12 != 0 && *plVar11 != 0) {
          FUN_10a4f6b74(&lStack_160,param_3);
          uVar8 = 0x18;
          __Znwm(0x18);
          plVar12 = (long *)*plVar12;
          plVar11 = (long *)*plVar11;
          FUN_10a4de53c(auStack_8c,plVar12 + 2,*puVar6);
          lVar9 = *plVar12;
          lVar10 = 0;
          if (lVar9 != 0) {
            lVar10 = lVar9 + 0x10;
          }
          FUN_10a0f3910(&uStack_f0,lVar10,0);
          lVar10 = 0;
          if (*plVar11 != 0) {
            lVar10 = *plVar11 + 0x10;
          }
          FUN_10a0f3910(auStack_150,lVar10,0);
          FUN_10a4de77c(uVar8,*(long *)(param_6 + 0x10) + 0x98,*(long *)(param_6 + 0x10),&uStack_f0,
                        auStack_150,auStack_8c);
          if (lStack_118 != 0) {
            piVar1 = (int *)(lStack_118 + 0x14);
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
              func_0x000109a848d4(auStack_150);
            }
          }
          lStack_118 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          if (0 < iStack_14c) {
            lVar10 = 0;
            do {
              *(undefined4 *)(lStack_110 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < iStack_14c);
          }
          if (puStack_108 != auStack_100 && puStack_108 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_108 + -8));
          }
          if (lStack_b8 != 0) {
            piVar1 = (int *)(lStack_b8 + 0x14);
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
              func_0x000109a848d4(&uStack_f0);
            }
          }
          lStack_b8 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          if (0 < uStack_f0._4_4_) {
            lVar10 = 0;
            do {
              *(undefined4 *)(lStack_b0 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < uStack_f0._4_4_);
          }
          if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_a8 + -8));
          }
          uStack_f0 = 0;
          func_0x00010a4f6898(plVar7,uVar8);
          func_0x00010a4f6898(&uStack_f0,0);
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4f6b38);
  (*pcVar5)();
}



/* Entry: 10a4f6b74; end: 10a4f6c17;  */

long FUN_10a4f6b74(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb2b0 & 1) == 0) {
    iVar1 = 0x137eb2b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10a4f6870,0x1137eb2a8,0x100000000);
      ___cxa_guard_release(0x1137eb2b0);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb2a8;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4f6c18; end: 10a4f6c33;  */

void FUN_10a4f6c18(void)

{
  return;
}



/* Entry: 10a4f6c34; end: 10a4f6d77;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f6db8) */

long * FUN_10a4f6c34(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar6 = *param_1;
  lVar8 = param_1[1] - lVar6;
  lVar10 = lVar8 >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b == 0) {
    lVar9 = param_1[2];
    uVar7 = lVar9 - lVar6 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < (ulong)(lVar9 - lVar6)) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_68 = param_1;
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3b != 0) goto LAB_10a4f6d60;
      lVar4 = uVar7 << 5;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar8);
    lVar3 = lVar4 + uVar7 * 0x20;
    lStack_88 = lVar4;
    puStack_80 = puVar2;
    puStack_78 = puVar2;
    lStack_70 = lVar3;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar2,*param_2,param_2[1]);
      lVar6 = *param_1;
      lVar9 = param_1[2];
      lVar8 = param_1[1] - lVar6;
      lVar10 = lVar8 >> 5;
    }
    else {
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar2[2] = param_2[2];
    }
    *(undefined4 *)(puVar2 + 3) = param_3;
    _memcpy(puVar2 + lVar10 * -4,lVar6,lVar8);
    *param_1 = (long)(puVar2 + lVar10 * -4);
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = lVar3;
    lStack_88 = lVar6;
    puStack_80 = (undefined8 *)lVar6;
    puStack_78 = (undefined8 *)lVar6;
    lStack_70 = lVar9;
    FUN_10a4f6d8c(&lStack_88);
    return puVar2 + 4;
  }
  FUN_10a4f6d78();
LAB_10a4f6d60:
  func_0x000109ffded8();
  FUN_10a4f6d8c(&lStack_88);
  __Unwind_Resume(param_1);
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar6 = plVar5[2];
  while (lVar6 != plVar5[1]) {
    lVar6 = lVar6 + -0x20;
    plVar5[2] = lVar6;
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 10a4f6d78; end: 10a4f6d8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f6db8) */

long * FUN_10a4f6d78(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x20;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a4f6d8c; end: 10a4f6deb;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f6db8) */

long * FUN_10a4f6d8c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4f6dec; end: 10a4f6e5f;  */

void FUN_10a4f6dec(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a26d390(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      *puVar1 = *(undefined4 *)(param_2 + 0x18);
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a4f6e60; end: 10a4f6f5b;  */

undefined8 ** FUN_10a4f6e60(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be9198,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4f6f5c; end: 10a4f6f6b;  */

void FUN_10a4f6f5c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f6f6c; end: 10a4f70a7;  */

void FUN_10a4f6f6c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  uStack_70 = param_2;
  func_0x00010a2935a4(puVar2,param_3);
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = puVar3 + 1;
  lVar1 = *(long *)(param_6 + 0x18);
  uStack_68 = param_1;
  uStack_60 = param_2;
  for (lVar8 = *(long *)(param_6 + 0x10); lVar8 != lVar1; lVar8 = lVar8 + 0x20) {
    puVar4 = &uStack_68;
    FUN_10a4f6b74(puVar4,*(undefined4 *)(lVar8 + 0x18));
    puVar10 = (undefined8 *)*puVar4;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4 = puVar3;
      lStack_58 = lVar8;
      FUN_10a509ab0(puVar3,lVar8,&lStack_58);
      plVar9 = puVar4 + 8;
      func_0x00010a29373c(puVar4 + 7,*plVar9);
      puVar4[7] = *puVar10;
      plVar5 = puVar10 + 1;
      lVar6 = *plVar5;
      *plVar9 = lVar6;
      lVar7 = puVar10[2];
      puVar4[9] = lVar7;
      if (lVar7 == 0) {
        puVar4[7] = plVar9;
      }
      else {
        *(long **)(lVar6 + 0x10) = plVar9;
        *puVar10 = plVar5;
        *plVar5 = 0;
        puVar10[2] = 0;
      }
    }
  }
  uStack_68 = 0;
  func_0x00010a293674(puVar2,puVar3);
  func_0x00010a293674(&uStack_68,0);
  return;
}



/* Entry: 10a4f70a8; end: 10a4f70db;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f7114) */

void FUN_10a4f70a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != lVar2);
    lVar1 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a4f70dc; end: 10a4f714b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f7114) */

void FUN_10a4f70dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a4f714c; end: 10a4f71c3;  */

undefined8 * FUN_10a4f714c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
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
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



/* Entry: 10a4f71c4; end: 10a4f731b;  */

long * FUN_10a4f71c4(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 auStack_60 [3];
  long *plStack_48;
  
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar5;
  plVar6 = (long *)*param_2;
  do {
    if (plVar6 == param_2 + 1) {
      return param_1;
    }
    plVar2 = (long *)param_1[1];
    plVar4 = plVar5;
    if ((long *)*param_1 == plVar5) {
joined_r0x00010a4f7264:
      plStack_48 = plVar4;
      plVar4 = plVar5;
      plVar3 = plVar5;
      if (plVar2 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        goto LAB_10a4f7270;
      }
LAB_10a4f728c:
      plStack_48 = plVar3;
      FUN_10a4f731c(auStack_60,param_1,plVar6 + 4);
      FUN_10a4f7384(param_1,plStack_48,plVar4,auStack_60[0]);
    }
    else {
      plVar3 = plVar5;
      if (plVar2 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar3[2];
          bVar1 = (long *)*plVar4 == plVar3;
          plVar3 = plVar4;
        } while (bVar1);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)plVar4[1];
        } while ((long *)plVar4[1] != (long *)0x0);
      }
      plVar2 = plVar4 + 4;
      FUN_10a003e3c(plVar2,plVar6 + 4);
      if (((uint)plVar2 >> 7 & 1) != 0) {
        plVar2 = (long *)*plVar5;
        goto joined_r0x00010a4f7264;
      }
      plVar4 = param_1;
      FUN_10a4f73d8(param_1,&plStack_48,plVar6 + 4);
LAB_10a4f7270:
      plVar3 = plStack_48;
      if (*plVar4 == 0) goto LAB_10a4f728c;
    }
    plVar2 = (long *)plVar6[1];
    plVar4 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar4[2];
        bVar1 = (long *)*plVar6 != plVar4;
        plVar4 = plVar6;
      } while (bVar1);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a4f731c; end: 10a4f7383;  */

void FUN_10a4f731c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a4f714c(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a4f7384; end: 10a4f73d7;  */

void FUN_10a4f7384(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a4f73d8; end: 10a4f745b;  */

long * FUN_10a4f73d8(long param_1,undefined8 *param_2,undefined8 param_3)

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
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a4f7444;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a4f7444:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a4f745c; end: 10a4f754b;  */

void FUN_10a4f745c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a293784(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a4f754c; end: 10a4f77a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f7738) */
/* WARNING: Removing unreachable block (ram,0x00010a4f773c) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7744) */
/* WARNING: Removing unreachable block (ram,0x00010a4f774c) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7750) */

void FUN_10a4f754c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 in_x7;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar6 = (undefined8 *)0x1d8;
  __Znwm();
  lVar8 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar8 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar6 = &PTR_DAT_110bb9d48;
  func_0x0001098bae4c(puVar6,&UNK_10e4a6801,0x1a,param_3,lVar8,puVar6 + 0x19,puVar6 + 0x31,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  puVar2 = (undefined8 *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  *puVar6 = &PTR_DAT_110bb9d48;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  puVar6[0x19] = &PTR_FUN_110bb9d98;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x27) = 0x40000000;
  puVar6[0x24] = &PTR_DAT_110bb9e50;
  puVar6[0x25] = &UNK_110bb9e20;
  *(undefined1 *)((long)puVar6 + 0x13c) = 0;
  *(undefined1 *)((long)puVar6 + 0x144) = 0;
  puVar6[0x2b] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x2c) = 0x40000000;
  puVar6[0x29] = &PTR_DAT_110bb9e50;
  puVar6[0x2a] = &UNK_110bb9e20;
  *(undefined1 *)((long)puVar6 + 0x164) = 0;
  *(undefined1 *)((long)puVar6 + 0x16c) = 0;
  *(undefined1 *)(puVar6 + 0x2e) = 0;
  *(undefined1 *)(puVar6 + 0x30) = 0;
  lVar8 = puVar6[0xc];
  if (lVar8 == 0) {
    bVar5 = false;
    puVar9 = puVar2;
  }
  else {
    bVar5 = lVar8 != puVar6[0xb];
    puVar9 = (undefined8 *)0x0;
    if (!bVar5) {
      puVar9 = puVar2;
    }
  }
  *(undefined2 *)(puVar6 + 0x32) = 0;
  puVar6[0x35] = 0x10a26d640;
  puVar6[0x36] = &UNK_110bb9eb0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  puVar6[0x39] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x31] = &PTR_FUN_110bb9e90;
  if ((!bVar5) && (*(char *)(puVar9[3] + 8) == '\x01')) {
    puVar6[0x3a] = puVar9 + 2;
  }
  if ((lVar8 == 0) || (lVar8 == puVar6[0xb])) {
    uVar7 = *puVar2;
    *(undefined1 *)(puVar6 + 0x30) = 1;
    puVar6[0x2e] = param_3;
    puVar6[0x2f] = uVar7;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a4f77a4; end: 10a4f784b;  */

undefined8 * FUN_10a4f77a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9220;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a4f784c; end: 10a4f7af3;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f7a88) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7a8c) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7a94) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7a9c) */
/* WARNING: Removing unreachable block (ram,0x00010a4f7aa0) */

void FUN_10a4f784c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  long lVar5;
  long *plVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar3 = (undefined8 *)0x1e8;
  __Znwm();
  uVar4 = *(undefined8 *)(param_2 + 8);
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar3 = &PTR_FUN_110be9260;
  func_0x0001098bae4c(puVar3,&UNK_10e4bab4c,0x1d,param_3,uVar4,puVar3 + 0x19,puVar3 + 0x33,in_x7,
                      FUN_10a4f7e74,&UNK_110bef678,&uStack_50);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar3[0x1c] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x20] = 0;
  puVar3[0x1f] = 0;
  *puVar3 = &PTR_FUN_110be9260;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  puVar3[0x19] = &PTR_FUN_110be92c8;
  puVar3[0x21] = 0;
  puVar3[0x23] = 0;
  puVar3[0x22] = 0;
  puVar3[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar3 + 0x27) = 0x40000000;
  puVar3[0x24] = &PTR_DAT_110be9380;
  puVar3[0x25] = &UNK_110be9350;
  *(undefined2 *)((long)puVar3 + 0x13c) = 0;
  puVar3[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar3 + 0x2b) = 0x40000000;
  puVar3[0x28] = &PTR_DAT_110be9380;
  puVar3[0x29] = &UNK_110be9350;
  *(undefined2 *)((long)puVar3 + 0x15c) = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 0;
  *(undefined1 *)(puVar3 + 0x32) = 0;
  lVar5 = puVar3[0xc];
  if ((lVar5 == 0) || (lVar5 == puVar3[0xb])) {
    bVar7 = false;
    lVar9 = param_2 + 0x30;
    pcVar8 = FUN_10a4f8770;
    puVar10 = &UNK_110be9418;
    plVar6 = (long *)(param_2 + 0x28);
  }
  else {
    puVar10 = (undefined *)0x0;
    lVar9 = 0;
    pcVar8 = (code *)0x0;
    bVar7 = true;
    plVar6 = (long *)0x0;
  }
  *(undefined2 *)(puVar3 + 0x34) = 0;
  puVar3[0x37] = 0x10a4f84e0;
  puVar3[0x38] = &UNK_110be93e0;
  puVar3[0x39] = puVar10;
  puVar3[0x3a] = lVar9;
  puVar3[0x33] = &PTR_DAT_110be93c0;
  puVar3[0x3b] = pcVar8;
  puVar3[0x3c] = 0;
  if ((!bVar7) && (*(char *)(plVar6[3] + 8) == '\x01')) {
    puVar3[0x3c] = plVar6 + 2;
  }
  if ((lVar5 == 0) || (lVar5 == puVar3[0xb])) {
    lVar9 = *(long *)(*(long *)(param_2 + 0x28) + 0x490);
    lVar5 = *(long *)(lVar9 + 0x48);
    if ((lVar5 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar9 + 0x40);
    }
    puVar3[0x2d] = uVar4;
    puVar3[0x2e] = lVar5;
    *(undefined1 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0;
    *(undefined1 *)(puVar3 + 0x32) = 1;
    puVar3[0x2c] = param_3;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4f7af4; end: 10a4f7bc7;  */

undefined8 * FUN_10a4f7af4(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be9260;
  if (*(char *)(param_1 + 0x32) == '\x01') {
    FUN_10ace966c(param_1 + 0x2c);
  }
  param_1[0x19] = &PTR_FUN_110be92c8;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a4f7bc8; end: 10a4f7c4b;  */

void FUN_10a4f7bc8(void)

{
  return;
}



/* Entry: 10a4f7c4c; end: 10a4f7e73;  */

void FUN_10a4f7c4c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_2 + 0x70);
  if (((*(byte *)(lVar7 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 400) & 1) != 0)) {
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    puStack_c8 = &UNK_1098b7058;
    ppuStack_c0 = &PTR_DAT_110ae9180;
    puStack_88 = &UNK_1098b7058;
    appuStack_80[0] = &PTR_DAT_110ae9180;
    lStack_d8 = 0;
    uStack_d0 = 0;
    lStack_e0 = 0;
    func_0x0001098aeecc(param_2 + 0x18,&puStack_88,&UNK_110be9450,&lStack_e0);
    if (lStack_e0 != 0) {
      lStack_d8 = lStack_e0;
      __ZdlPv();
    }
    (*(code *)*appuStack_80[0])(appuStack_80);
    (*(code *)*ppuStack_c0)(&ppuStack_c0);
    if ((*(byte *)(param_2 + 400) & 1) != 0) {
      uVar2 = *(undefined1 *)(lVar7 + 0x1c);
      func_0x0001098acf34(&plStack_f0,param_2);
      FUN_10ace9758(param_1,param_2 + 0x160,param_2,lVar7 + 0x10,uVar2,&plStack_f0);
      if (plStack_e8 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_e8 + 1);
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          do {
            uVar6 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_e8 + 8))(plStack_e8);
          }
        }
      }
      if (plStack_f0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_f0 + 1);
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar6 & 0x1fffffffc) == 4) {
          do {
            uVar6 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar6 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar6 - 1 == 0) {
            (**(code **)(*plStack_f0 + 8))();
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      FUN_10a28faec(&plStack_f0);
      __Unwind_Resume();
      *extraout_x8 = FUN_10a4f7e90;
      extraout_x8[1] = &PTR_FUN_110be92a0;
      extraout_x8[2] = plStack_f0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4f7e1c);
  (*pcVar5)();
}



/* Entry: 10a4f7e74; end: 10a4f7e8f;  */

void FUN_10a4f7e74(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a4f7e90;
  param_1[1] = &PTR_FUN_110be92a0;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a4f7e90; end: 10a4f7fb3;  */

void FUN_10a4f7e90(long param_1,long param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar3 = &lStack_90;
  lStack_90 = param_1;
  lStack_88 = param_2;
  if (param_5 != 0) {
    plVar5 = &lStack_80;
    lStack_80 = param_1;
    lStack_78 = param_2;
    func_0x0001098af634(plVar5,*param_4);
    if (param_5 != 1) {
      plVar2 = &lStack_80;
      lStack_80 = param_1;
      lStack_78 = param_2;
      func_0x0001098b9090(plVar2,param_4[1]);
      if ((char)plVar5[3] != '\x01' || *plVar2 == 0) {
        return;
      }
      FUN_10a4efbc8(&lStack_90,param_3);
      if ((*(byte *)(plVar5 + 3) & 1) != 0) {
        if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar5[1] - *plVar5 >> 3)) {
          lVar4 = *(long *)(*plVar5 + *(ulong *)(param_6 + 0x10) * 8);
          plVar5 = (long *)0x0;
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x28) == '\x01') {
              FUN_10ace9230(&lStack_80,lVar4,*(undefined8 *)*plVar2);
              plVar5 = (long *)0x30;
              __Znwm();
              plVar5[1] = lStack_78;
              *plVar5 = lStack_80;
              plVar5[3] = lStack_68;
              plVar5[2] = lStack_70;
              plVar5[5] = lStack_58;
              plVar5[4] = lStack_60;
            }
            else {
              plVar5 = (long *)0x0;
            }
          }
          lVar4 = *plVar3;
          *plVar3 = (long)plVar5;
          if (lVar4 == 0) {
            return;
          }
          __ZdlPv(lVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f7fb4);
  (*pcVar1)();
}



/* Entry: 10a4f7fb4; end: 10a4f7feb;  */

void FUN_10a4f7fb4(void)

{
  return;
}



/* Entry: 10a4f7fec; end: 10a4f80a3;  */

void FUN_10a4f7fec(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9308;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4f83a0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f8080);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4f80a4; end: 10a4f8177;  */

void FUN_10a4f80a4(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 0x48);
  if (puVar1 < *(undefined1 **)(param_1 + 0x50)) {
    puVar8 = puVar1 + 1;
    *puVar1 = *param_2;
LAB_10a4f8158:
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = (long)puVar1 - lVar5;
  uVar7 = lVar6 + 1;
  if (-1 < (long)uVar7) {
    uVar3 = (long)*(undefined1 **)(param_1 + 0x50) - lVar5;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar4 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4;
      __Znwm();
    }
    puVar8 = (undefined1 *)(uVar7 + lVar6) + 1;
    *(undefined1 *)(uVar7 + lVar6) = *param_2;
    _memcpy(uVar7,lVar5,lVar6);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar4;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
    goto LAB_10a4f8158;
  }
  FUN_10a4f83a0();
  uVar7 = (ulong)(int)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  if (uVar7 + 1 != lVar6 - lVar5) {
    if ((lVar5 == lVar6) || ((ulong)(lVar6 - lVar5) <= uVar7)) goto LAB_10a4f81bc;
    *(undefined1 *)(lVar5 + uVar7) = *(undefined1 *)(lVar6 + -1);
  }
  if (lVar5 != lVar6) {
    *(long *)(param_1 + 0x48) = lVar6 + -1;
    return;
  }
LAB_10a4f81bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f81c0);
  (*pcVar2)();
}



/* Entry: 10a4f8178; end: 10a4f81bf;  */

void FUN_10a4f8178(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if (uVar4 + 1 != lVar2 - lVar1) {
    if ((lVar1 == lVar2) || ((ulong)(lVar2 - lVar1) <= uVar4)) goto LAB_10a4f81bc;
    *(undefined1 *)(lVar1 + uVar4) = *(undefined1 *)(lVar2 + -1);
  }
  if (lVar1 != lVar2) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
LAB_10a4f81bc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4f81c0);
  (*pcVar3)();
}



/* Entry: 10a4f81c0; end: 10a4f8237;  */

undefined8 * FUN_10a4f81c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9308;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4f8238; end: 10a4f839f;  */

void FUN_10a4f8238(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a4f835c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f8360);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8f08,0x24,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a4f835c;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a4f83b4;
  appuStack_80[0] = &PTR_DAT_110be9338;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4f83a0; end: 10a4f83b3;  */

void FUN_10a4f83a0(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4f83b4; end: 10a4f8403;  */

void FUN_10a4f83b4(void)

{
  return;
}



/* Entry: 10a4f8404; end: 10a4f847f;  */

void FUN_10a4f8404(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    if ((*(byte *)(param_3 + 0x1c) & (*(byte *)(param_2 + 0x1c) ^ 0xff) & 1) == 0) {
      lVar1 = 0x10;
      if (param_4 != 0) {
        lVar1 = 0x18;
      }
      uStack_14 = *(undefined4 *)(param_2 + lVar1);
    }
    else {
      uStack_14 = 0x40000000;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f8480);
  (*pcVar2)();
}



/* Entry: 10a4f8480; end: 10a4f84fb;  */

void FUN_10a4f8480(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110be9380;
  param_1[1] = &UNK_110be9350;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a4f84fc; end: 10a4f85b3;  */

void FUN_10a4f84fc(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb1f0;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f85b4);
  (*pcVar2)();
}



/* Entry: 10a4f85b4; end: 10a4f85fb;  */

void FUN_10a4f85b4(void)

{
  return;
}



/* Entry: 10a4f85fc; end: 10a4f862f;  */

long FUN_10a4f85fc(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10a4f8630(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10a4f8630; end: 10a4f8663;  */

long * FUN_10a4f8630(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    FUN_10a4f8664(*param_1,param_1[2],param_1[3]);
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10a4f8664; end: 10a4f8717;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f86ec) */

void FUN_10a4f8664(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar4 = *(long **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar4 == plVar1) goto LAB_10a4f8700;
    if (*plVar4 == param_2) break;
    plVar4 = plVar4 + 1;
  }
  plVar3 = plVar4;
  if (plVar4 != plVar1) {
    while (plVar3 = plVar3 + 1, plVar3 != plVar1) {
      if (*plVar3 != param_2) {
        *plVar4 = *plVar3;
        plVar4 = plVar4 + 1;
      }
    }
  }
  if (plVar1 < plVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4f8718);
    (*pcVar2)();
  }
  if (plVar4 != plVar1) {
    *(long **)(param_1 + 0x20) = plVar4;
  }
LAB_10a4f8700:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a4f8718; end: 10a4f876f;  */

long FUN_10a4f8718(long param_1)

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



/* Entry: 10a4f8770; end: 10a4f878b;  */

void FUN_10a4f8770(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = FUN_10a4f878c;
  param_1[1] = &PTR_FUN_110be9438;
  param_1[2] = param_3;
  return;
}



/* Entry: 10a4f878c; end: 10a4f8a4f;  */

void FUN_10a4f878c(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,ulong param_5,
                  long param_6)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_88;
  long lStack_80;
  undefined1 auStack_78 [39];
  undefined1 uStack_51;
  
  plVar5 = &lStack_b0;
  plVar6 = &lStack_b0;
  plVar7 = &lStack_b0;
  if (((param_5 == 0) ||
      (lStack_b0 = param_1, plStack_a8 = param_2, func_0x0001098af634(&lStack_b0,*param_4),
      param_5 == 1)) ||
     (lStack_b0 = param_1, plStack_a8 = param_2, func_0x0001098b9090(&lStack_b0,param_4[1]),
     param_5 < 3)) {
LAB_10a4f8a00:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4f8a04);
    (*pcVar3)();
  }
  lStack_b0 = param_1;
  plStack_a8 = param_2;
  FUN_10a4efbc8(&lStack_b0,param_4[2]);
  if (*plVar6 == 0 || *plVar7 == 0) {
    return;
  }
  if ((bRam00000001137eb2b8 & 1) == 0) {
    iVar4 = 0x137eb2b8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      ___cxa_atexit(FUN_10a4f85fc,0x1137eb360,0x100000000);
      ___cxa_guard_release(0x1137eb2b8);
    }
  }
  FUN_10a26d738(param_2,param_3);
  plVar1 = (long *)0x1137eb360;
  if (*param_2 != -1) {
    plVar1 = (long *)(param_1 + *param_2);
  }
  uVar9 = *(undefined8 *)*plVar6;
  lVar10 = *plVar7;
  if ((char)plVar5[3] == '\x01') {
    if ((ulong)(plVar5[1] - *plVar5 >> 3) <= *(ulong *)(param_6 + 0x10)) goto LAB_10a4f8a00;
    lVar8 = *(long *)(*plVar5 + *(ulong *)(param_6 + 0x10) * 8);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x28) == '\x01')) {
      FUN_10ace9124(&lStack_80,lVar8,uVar9,lVar10);
      lStack_b0 = lStack_80;
      uStack_a0 = 0;
      plStack_a8 = (long *)0x0;
      uStack_90 = 0;
      uStack_98 = 0;
      FUN_10a4f8a50(&plStack_a8,auStack_78);
      goto LAB_10a4f8958;
    }
  }
  lStack_b0 = 1000;
  lStack_80 = 2000;
  FUN_10acefb68(&plStack_a8,&uStack_51,&lStack_80);
  uStack_98 = 0;
  uStack_90 = 0;
  FUN_10ace9124(&lStack_80,&lStack_b0,uVar9,lVar10);
  FUN_10a4f8630(&plStack_a8);
  lStack_b0 = lStack_80;
  uStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_90 = 0;
  uStack_98 = 0;
  FUN_10a4f8a50(&plStack_a8,auStack_78);
LAB_10a4f8958:
  cStack_88 = '\x01';
  FUN_10a4f8630(auStack_78);
  cVar2 = (char)plVar1[5];
  if (cVar2 == cStack_88) {
    if (cVar2 != '\0') {
      *plVar1 = lStack_b0;
      FUN_10a4f8a50(plVar1 + 1,&plStack_a8);
    }
  }
  else if (cVar2 == '\0') {
    *plVar1 = lStack_b0;
    plVar1[4] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    FUN_10a4f8a50(plVar1 + 1,&plStack_a8);
    *(undefined1 *)(plVar1 + 5) = 1;
  }
  else {
    FUN_10a4f8630(plVar1 + 1);
    *(undefined1 *)(plVar1 + 5) = 0;
  }
  if (cStack_88 == '\x01') {
    FUN_10a4f8630(&plStack_a8);
  }
  return;
}



/* Entry: 10a4f8a50; end: 10a4f8aa3;  */

long * FUN_10a4f8a50(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_10a4f8664(*param_1,param_1[2],param_1[3]);
  }
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[2] = lVar1;
  FUN_10a4f8aa4(param_1,param_2);
  func_0x00010a4f8b08(param_2);
  return param_1;
}



/* Entry: 10a4f8aa4; end: 10a4f8b63;  */

undefined8 * FUN_10a4f8aa4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a4f8b64; end: 10a4f8b7b;  */

void FUN_10a4f8b64(void)

{
  return;
}



/* Entry: 10a4f8b7c; end: 10a4f8bd3;  */

long FUN_10a4f8b7c(long param_1)

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



/* Entry: 10a4f8bd4; end: 10a4f8bf3;  */

void FUN_10a4f8bd4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f8bf4; end: 10a4f8d23;  */

undefined8 **
FUN_10a4f8bf4(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 **param_4)

{
  undefined8 **ppuVar1;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *apuStack_1a0 [7];
  long lStack_168;
  
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_4);
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_1a0);
  lStack_1b8 = param_3[1];
  lStack_1c0 = *param_3;
  lStack_1b0 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_4,&uStack_1a8,&UNK_110be9470,&lStack_1c0);
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  ppuVar1 = apuStack_1a0;
  (*(code *)*apuStack_1a0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return param_4;
  }
  ___stack_chk_fail();
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  (*(code *)*apuStack_1a0[0])(apuStack_1a0);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4f8d24; end: 10a4f8e1f;  */

undefined8 ** FUN_10a4f8d24(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110be9470,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4f8e20; end: 10a4f8e3f;  */

void FUN_10a4f8e20(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4f8e40; end: 10a4f8f33;  */

void FUN_10a4f8e40(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  uStack_68 = param_2;
  if (param_5 != 0) {
    plVar2 = &lStack_60;
    lStack_60 = param_1;
    uStack_58 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (param_5 != 1) {
      plVar3 = &lStack_60;
      lStack_60 = param_1;
      uStack_58 = param_2;
      func_0x00010a289568(plVar3,param_4[1]);
      if (*plVar2 != 0 && *plVar3 != 0) {
        FUN_10a4f8f34(&lStack_70,param_3);
        uVar7 = *(undefined8 *)*plVar2;
        lVar6 = *plVar3;
        lVar5 = **(long **)(param_6 + 0x10);
        *(bool *)(lVar5 + 0x1f0) = *(int *)((*(long **)(param_6 + 0x10))[2] + 4) == 0;
        FUN_10a4e7ff0(&lStack_60,lVar5,lVar6,uVar7);
        lVar5 = *plVar4;
        *plVar4 = lStack_60;
        if (lVar5 != 0) {
          func_0x00010a5026e4();
        }
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4f8f34);
  (*pcVar1)();
}



/* Entry: 10a4f8f34; end: 10a4f8fd7;  */

long FUN_10a4f8f34(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb2c8 & 1) == 0) {
    iVar1 = 0x137eb2c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c5f84,0x1137eb2c0,0x100000000);
      ___cxa_guard_release(0x1137eb2c8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb2c0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4f8fd8; end: 10a4f8ff3;  */

void FUN_10a4f8fd8(void)

{
  return;
}



/* Entry: 10a4f8ff4; end: 10a4f9413;  */

void FUN_10a4f8ff4(uint *param_1,long param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x27;
  
  uRam00000001137eb340 = 0;
  lRam00000001137eb338 = 0;
  uRam00000001137eb350 = 0;
  plRam00000001137eb348 = (long *)0x0;
  fRam00000001137eb358 = 1.0;
  if (param_2 != 0) {
    uVar15 = 0;
    uVar18 = 0;
    puVar1 = param_1 + param_2 * 4;
    do {
      uVar3 = *param_1;
      uVar16 = (ulong)uVar3;
      if (uVar18 != 0) {
        uVar8 = uVar18 - 1;
        uVar17 = (uint)uVar18;
        if ((uVar18 & uVar8) == 0) {
          unaff_x27 = (ulong)(uVar17 - 1 & uVar3);
        }
        else {
          unaff_x27 = uVar16;
          if (uVar18 <= uVar16) {
            uVar4 = 0;
            if (uVar17 != 0) {
              uVar4 = uVar3 / uVar17;
            }
            unaff_x27 = (ulong)(uVar3 - uVar4 * uVar17);
          }
        }
        plVar10 = *(long **)(lRam00000001137eb338 + unaff_x27 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_10a4f90d8;
              uVar11 = plVar10[1];
              if (uVar11 != uVar16) break;
              if (*(uint *)(plVar10 + 2) == uVar3) goto LAB_10a4f9378;
            }
            if ((uVar18 & uVar8) == 0) {
              uVar11 = uVar11 & uVar8;
            }
            else if (uVar18 <= uVar11) {
              uVar14 = 0;
              if (uVar18 != 0) {
                uVar14 = uVar11 / uVar18;
              }
              uVar11 = uVar11 - uVar14 * uVar18;
            }
          } while (uVar11 == unaff_x27);
        }
      }
LAB_10a4f90d8:
      plVar10 = (long *)0x20;
      __Znwm();
      *plVar10 = 0;
      plVar10[1] = uVar16;
      lVar7 = *(long *)param_1;
      plVar10[3] = *(long *)(param_1 + 2);
      plVar10[2] = lVar7;
      if ((uVar18 == 0) || (fRam00000001137eb358 * (float)uVar18 < (float)(uVar15 + 1))) {
        uVar8 = 1;
        if (2 < uVar18) {
          uVar8 = (ulong)((uVar18 & uVar18 - 1) != 0);
        }
        uVar8 = uVar8 | uVar18 << 1;
        uVar15 = (ulong)((float)(uVar15 + 1) / fRam00000001137eb358);
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        uVar15 = uVar18;
        if (uVar8 - 1 == 0) {
          uVar8 = 2;
        }
        else if ((uVar8 & uVar8 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar15 = uRam00000001137eb340;
        }
        if (uVar15 < uVar8) {
LAB_10a4f9178:
          if (uVar8 >> 0x3d != 0) {
            func_0x000109ffded8();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4f93f0);
            (*pcVar6)();
          }
          lVar7 = uVar8 << 3;
          __Znwm();
          bVar2 = lRam00000001137eb338 != 0;
          lRam00000001137eb338 = lVar7;
          if (bVar2) {
            __ZdlPv();
          }
          uVar15 = 0;
          uRam00000001137eb340 = uVar8;
          do {
            *(undefined8 *)(lRam00000001137eb338 + uVar15 * 8) = 0;
            plVar9 = plRam00000001137eb348;
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
          uVar18 = uVar8;
          if (plRam00000001137eb348 != (long *)0x0) {
            uVar15 = plRam00000001137eb348[1];
            uVar11 = uVar8 - 1;
            if ((uVar8 & uVar11) == 0) {
              uVar15 = uVar15 & uVar11;
            }
            else if (uVar8 <= uVar15) {
              uVar14 = 0;
              if (uVar8 != 0) {
                uVar14 = uVar15 / uVar8;
              }
              uVar15 = uVar15 - uVar14 * uVar8;
            }
            *(undefined8 *)(lRam00000001137eb338 + uVar15 * 8) = 0x1137eb348;
            plVar12 = (long *)*plVar9;
            lVar7 = lRam00000001137eb338;
            while (lRam00000001137eb338 = lVar7, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar8 & uVar11) == 0) {
                uVar14 = uVar14 & uVar11;
              }
              else if (uVar8 <= uVar14) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar14 / uVar8;
                }
                uVar14 = uVar14 - uVar5 * uVar8;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar15) {
                if (*(long *)(lVar7 + uVar14 * 8) == 0) {
                  *(long **)(lVar7 + uVar14 * 8) = plVar9;
                  uVar15 = uVar14;
                }
                else {
                  *plVar9 = *plVar12;
                  *plVar12 = **(long **)(lVar7 + uVar14 * 8);
                  **(undefined8 **)(lVar7 + uVar14 * 8) = plVar12;
                  plVar13 = plVar9;
                }
              }
              lVar7 = lRam00000001137eb338;
              plVar9 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar18 = uVar15;
          if (uVar8 < uVar15) {
            uVar18 = (ulong)((float)uRam00000001137eb350 / fRam00000001137eb358);
            if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar18) {
              uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
            }
            lVar7 = lRam00000001137eb338;
            if (uVar8 <= uVar18) {
              uVar8 = uVar18;
            }
            uVar18 = uRam00000001137eb340;
            if (uVar8 < uVar15) {
              if (uVar8 != 0) goto LAB_10a4f9178;
              lRam00000001137eb338 = 0;
              if (lVar7 != 0) {
                __ZdlPv();
              }
              uRam00000001137eb340 = 0;
              uVar18 = 0;
            }
          }
        }
        if ((uVar18 & uVar18 - 1) == 0) {
          unaff_x27 = (ulong)((int)uVar18 - 1U & uVar3);
        }
        else {
          unaff_x27 = uVar16;
          if (uVar18 <= uVar16) {
            uVar15 = 0;
            if (uVar18 != 0) {
              uVar15 = uVar16 / uVar18;
            }
            unaff_x27 = uVar16 - uVar15 * uVar18;
          }
        }
      }
      lVar7 = lRam00000001137eb338;
      plVar9 = *(long **)(lRam00000001137eb338 + unaff_x27 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar10 = (long)plRam00000001137eb348;
        plRam00000001137eb348 = plVar10;
        *(undefined8 *)(lVar7 + unaff_x27 * 8) = 0x1137eb348;
        if (*plVar10 != 0) {
          uVar15 = *(ulong *)(*plVar10 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar15 = uVar15 & uVar18 - 1;
          }
          else if (uVar18 <= uVar15) {
            uVar16 = 0;
            if (uVar18 != 0) {
              uVar16 = uVar15 / uVar18;
            }
            uVar15 = uVar15 - uVar16 * uVar18;
          }
          plVar9 = (long *)(lRam00000001137eb338 + uVar15 * 8);
          goto LAB_10a4f9368;
        }
      }
      else {
        *plVar10 = *plVar9;
LAB_10a4f9368:
        *plVar9 = (long)plVar10;
      }
      uVar15 = uRam00000001137eb350 + 1;
      uRam00000001137eb350 = uVar15;
LAB_10a4f9378:
      param_1 = param_1 + 4;
    } while (param_1 != puVar1);
  }
  return;
}



/* Entry: 10a4f9414; end: 10a4f9463;  */

void FUN_10a4f9414(void)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)lRam00000001137eb348;
  lVar1 = lRam00000001137eb338;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    lRam00000001137eb338 = lVar1;
    __ZdlPv();
    lVar1 = lRam00000001137eb338;
  }
  lRam00000001137eb338 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4f9464; end: 10a4f94d3;  */

void FUN_10a4f9464(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a4f94d4(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a4f94d4; end: 10a4f950b;  */

undefined1  [16] FUN_10a4f94d4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10a4f9520();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a4f950c();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  if (puVar2[0x60] == '\x01') {
    if (*(long *)(puVar2 + 0x40) != 0) {
      *(long *)(puVar2 + 0x48) = *(long *)(puVar2 + 0x40);
      __ZdlPv();
    }
    if (*(long *)(puVar2 + 0x28) != 0) {
      *(long *)(puVar2 + 0x30) = *(long *)(puVar2 + 0x28);
      __ZdlPv();
    }
    if ((char)puVar2[0x27] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar2 + 0x10));
    }
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10a4f950c; end: 10a4f951f;  */

undefined1  [16] FUN_10a4f950c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if (puVar1[0x60] == '\x01') {
    if (*(long *)(puVar1 + 0x40) != 0) {
      *(long *)(puVar1 + 0x48) = *(long *)(puVar1 + 0x40);
      __ZdlPv();
    }
    if (*(long *)(puVar1 + 0x28) != 0) {
      *(long *)(puVar1 + 0x30) = *(long *)(puVar1 + 0x28);
      __ZdlPv();
    }
    if ((char)puVar1[0x27] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar1 + 0x10));
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a4f9520; end: 10a4f95af;  */

undefined1  [16] FUN_10a4f9520(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(long *)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a4f95b0; end: 10a4f9663;  */

void FUN_10a4f95b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x78;
  __Znwm();
  lRam00000001137eb330 = lVar1 + 0x78;
  lRam00000001137eb320 = lVar1;
  if (param_1 != param_2) {
    lVar2 = (((param_2 - param_1) - 0x18U) / 0x18) * 0x18 + 0x18;
    lRam00000001137eb328 = lVar1;
    _memcpy(lVar1,param_1,lVar2);
    lVar1 = lVar1 + lVar2;
  }
  lRam00000001137eb328 = lVar1;
  return;
}



/* Entry: 10a4f9664; end: 10a4f9677;  */

undefined * FUN_10a4f9664(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1[0x40] == '\x01') {
    if (*(long *)(puVar1 + 0x28) != 0) {
      *(long *)(puVar1 + 0x30) = *(long *)(puVar1 + 0x28);
      __ZdlPv();
    }
    if ((char)puVar1[0x27] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar1 + 0x10));
    }
  }
  return puVar1;
}



/* Entry: 10a4f9678; end: 10a4f96c3;  */

long FUN_10a4f9678(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
      __ZdlPv();
    }
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return param_1;
}



/* Entry: 10a4f96c4; end: 10a4f96d7;  */

undefined * FUN_10a4f96c4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x00010a136de4(puVar5 + 0x158);
  if (*(long *)(puVar5 + 0x130) != 0) {
    piVar1 = (int *)(*(long *)(puVar5 + 0x130) + 0x14);
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
      func_0x000109a848d4(puVar5 + 0xf8);
    }
  }
  *(undefined8 *)(puVar5 + 0x130) = 0;
  *(undefined8 *)(puVar5 + 0x110) = 0;
  *(undefined8 *)(puVar5 + 0x108) = 0;
  *(undefined8 *)(puVar5 + 0x120) = 0;
  *(undefined8 *)(puVar5 + 0x118) = 0;
  if (0 < *(int *)(puVar5 + 0xfc)) {
    lVar6 = 0;
    lVar8 = *(long *)(puVar5 + 0x138);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 0xfc));
  }
  puVar7 = *(undefined **)(puVar5 + 0x140);
  if (puVar7 != puVar5 + 0x148 && puVar7 != (undefined *)0x0) {
    _free(*(undefined8 *)(puVar7 + -8));
  }
  func_0x00010a042d30(puVar5 + 0xe0);
  func_0x00010a136de4(puVar5 + 0x60);
  if (*(long *)(puVar5 + 0x40) != 0) {
    *(long *)(puVar5 + 0x48) = *(long *)(puVar5 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(puVar5 + 0x28) != 0) {
    *(long *)(puVar5 + 0x30) = *(long *)(puVar5 + 0x28);
    __ZdlPv();
  }
  if ((char)puVar5[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 0x10));
  }
  return puVar5;
}



/* Entry: 10a4f96d8; end: 10a4f97bf;  */

long FUN_10a4f96d8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010a136de4(param_1 + 0x158);
  if (*(long *)(param_1 + 0x130) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x130) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xf8);
    }
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (0 < *(int *)(param_1 + 0xfc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x138);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xfc));
  }
  lVar5 = *(long *)(param_1 + 0x140);
  if (lVar5 != param_1 + 0x148 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  func_0x00010a042d30(param_1 + 0xe0);
  func_0x00010a136de4(param_1 + 0x60);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10a4f97c0; end: 10a4f9817;  */

void FUN_10a4f97c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110be94d8;
  FUN_10aacf170();
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4f9818; end: 10a4f986f;  */

void FUN_10a4f9818(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110be9548;
  FUN_10aacea70();
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4f9870; end: 10a4f9a9f;  */

long * FUN_10a4f9870(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar6 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x58;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  lVar3 = *param_3;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[4] = (long)&PTR_DAT_110950c70;
  plVar5[2] = lVar3;
  plVar5[3] = (long)FUN_10a4f9aa0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_10a4f9aac(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar7 <= param_2) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = param_2 / uVar7;
        }
        unaff_x24 = param_2 - uVar2 * uVar7;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_10a4f9a58;
    uVar2 = *(ulong *)(*plVar5 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar2 = uVar2 & uVar7 - 1;
    }
    else if (uVar7 <= uVar2) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar2 / uVar7;
      }
      uVar2 = uVar2 - uVar6 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar2 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_10a4f9a58:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a4f9aa0; end: 10a4f9aab;  */

void FUN_10a4f9aa0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  func_0x000105277f8c();
  pcStack_18 = FUN_10a4f9aac;
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  else {
    puStack_20 = &stack0xfffffffffffffff0;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      __ZNSt3__112__next_primeEm();
      plVar4 = param_2;
    }
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  pcStack_48 = FUN_10a4f9c7c;
  plStack_60 = param_2;
  plStack_58 = param_1;
  ppuStack_50 = &puStack_20;
  (*(code *)plVar4[2])(&uStack_70);
  extraout_x8[1] = uStack_68;
  *extraout_x8 = uStack_70;
  return;
}



/* Entry: 10a4f9aac; end: 10a4f9c7b;  */

void FUN_10a4f9aac(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  pcStack_38 = FUN_10a4f9c7c;
  plStack_50 = param_2;
  plStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  (*(code *)plVar4[2])(&uStack_60);
  extraout_x8[1] = uStack_58;
  *extraout_x8 = uStack_60;
  return;
}



/* Entry: 10a4f9c7c; end: 10a4f9cb3;  */

void FUN_10a4f9c7c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4f9cb4; end: 10a4f9cf7;  */

void FUN_10a4f9cb4(void)

{
  return;
}



/* Entry: 10a4f9cf8; end: 10a4f9d17;  */

void FUN_10a4f9cf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be94d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4f9d18; end: 10a4f9d27;  */

void FUN_10a4f9d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4f9d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4f9d28; end: 10a4f9d5f;  */

void FUN_10a4f9d28(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4f9d60; end: 10a4f9da3;  */

void FUN_10a4f9d60(void)

{
  return;
}



/* Entry: 10a4f9da4; end: 10a4f9dc3;  */

void FUN_10a4f9da4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4f9dc4; end: 10a4f9dd3;  */

void FUN_10a4f9dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4f9dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4f9dd4; end: 10a4f9fbf;  */

void FUN_10a4f9dd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110be95b8;
  puVar5[3] = &PTR_FUN_110be80a8;
  plVar10 = puVar5 + 4;
  *plVar10 = 0;
  puVar9 = puVar5 + 5;
  *puVar9 = 0;
  puVar6 = (undefined8 *)0x110;
  __Znwm();
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  puVar7 = puVar6;
  FUN_109d1a80c();
  uStack_a0 = *puVar7;
  puStack_98 = &UNK_1053a6a3c;
  ppuStack_90 = &PTR_DAT_110ae9180;
  FUN_10a28c634(puVar6,&uStack_b0,&uStack_a0);
  func_0x0001092ba41c(&uStack_a0);
  plVar4 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  *(undefined4 *)(puVar6 + 0x21) = 0x3f800000;
  lVar8 = *plVar10;
  *plVar10 = (long)puVar6;
  if (lVar8 != 0) {
    FUN_10a507de8();
  }
  puVar7 = (undefined8 *)0x28;
  __Znwm();
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 4) = 0x3f800000;
  puVar7 = puVar9;
  func_0x00010a507e34();
  *param_1 = puVar5 + 3;
  param_1[1] = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a507e34(puVar9,0);
  lVar8 = *plVar10;
  *plVar10 = 0;
  if (lVar8 != 0) {
    FUN_10a507de8();
  }
  __ZNSt3__119__shared_weak_countD2Ev(puVar5);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_b8 = FUN_10a4f9fc0;
  puStack_d0 = puVar9;
  puStack_c8 = puVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  (*(code *)puVar7[2])(&uStack_e0);
  extraout_x8[1] = uStack_d8;
  *extraout_x8 = uStack_e0;
  return;
}



/* Entry: 10a4f9fc0; end: 10a4f9ff7;  */

void FUN_10a4f9fc0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4f9ff8; end: 10a4fa03b;  */

void FUN_10a4f9ff8(void)

{
  return;
}



/* Entry: 10a4fa03c; end: 10a4fa05b;  */

void FUN_10a4fa03c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be95b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa05c; end: 10a4fa06b;  */

void FUN_10a4fa05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa06c; end: 10a4fa173;  */

/* WARNING: Removing unreachable block (ram,0x00010a4fa11c) */

void FUN_10a4fa06c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be9628;
  puVar1[3] = &PTR_DAT_110be7a28;
  uVar2 = 0x60;
  __Znwm();
  FUN_10a4cb950();
  puVar1[4] = uVar2;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a4fa174; end: 10a4fa1ab;  */

void FUN_10a4fa174(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 0x10))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10a4fa1ac; end: 10a4fa1ef;  */

void FUN_10a4fa1ac(void)

{
  return;
}



/* Entry: 10a4fa1f0; end: 10a4fa20f;  */

void FUN_10a4fa1f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9628;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4fa210; end: 10a4fa21f;  */

void FUN_10a4fa210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4fa218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10a4fa220; end: 10a4fa2a3;  */

void FUN_10a4fa220(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be9698;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110be8820;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10a4fa2a4; end: 10a4fa2e7;  */

void FUN_10a4fa2a4(void)

{
  return;
}



/* Entry: 10a4fa2e8; end: 10a4fa307;  */

void FUN_10a4fa2e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110be9698;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


