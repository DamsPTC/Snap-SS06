/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1f3a6c; end: 10a1f3bb7;  */

long * FUN_10a1f3a6c(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10a1f3bb8; end: 10a1f3bf7;  */

undefined4 FUN_10a1f3bb8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a1f3bf8; end: 10a1f3d3b;  */

void FUN_10a1f3bf8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10a1f3d3c; end: 10a1f3e1b;  */

void FUN_10a1f3d3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f3d40);
  (*pcVar1)();
}



/* Entry: 10a1f3e1c; end: 10a1f3e93;  */

undefined8 * FUN_10a1f3e1c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_10a1f3f34(param_1 + 0x13,param_1[0x14]);
    if (*(char *)((long)param_1 + 0x87) < '\0') {
      __ZdlPv(param_1[0xe]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a1f3e94; end: 10a1f3f33;  */

undefined8 * FUN_10a1f3e94(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar7 = puVar8;
  if (puVar8 != puVar4) {
    bVar5 = *(byte *)((long)param_2 + 0x17);
    uVar1 = param_2[1];
    if (-1 < (char)bVar5) {
      uVar1 = (ulong)bVar5;
    }
    do {
      bVar6 = *(byte *)((long)puVar8 + 0x17);
      uVar2 = puVar8[1];
      if (-1 < (char)bVar6) {
        uVar2 = (ulong)bVar6;
      }
      if (uVar2 == uVar1) {
        puVar7 = (undefined8 *)*puVar8;
        if (-1 < (char)bVar6) {
          puVar7 = puVar8;
        }
        plVar3 = (long *)*param_2;
        if (-1 < (char)bVar5) {
          plVar3 = param_2;
        }
        _memcmp(puVar7,plVar3,uVar1);
        if ((int)puVar7 == 0) {
          return puVar8;
        }
      }
      puVar8 = puVar8 + 3;
      puVar7 = puVar4;
    } while (puVar8 != puVar4);
  }
  return puVar7;
}



/* Entry: 10a1f3f34; end: 10a1f3f83;  */

void FUN_10a1f3f34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a1f3f34(param_1,*param_2);
    FUN_10a1f3f34(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a1f3f84; end: 10a1f403f;  */

long * FUN_10a1f3f84(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  uStack_48 = 0;
  plStack_40 = param_4;
  uStack_60 = param_1;
  for (; plStack_38 = param_4, param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      func_0x000107c3192c(param_4,param_2[2],param_2[3]);
    }
    else {
      lVar2 = param_2[3];
      lVar1 = param_2[2];
      param_4[2] = param_2[4];
      param_4[1] = lVar2;
      *param_4 = lVar1;
    }
    param_4 = plStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a0cf254(&uStack_60);
  return param_4;
}



/* Entry: 10a1f4040; end: 10a1f41e7;  */

void FUN_10a1f4040(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x28);
    do {
      if (*(char *)((long)puVar1 + -0x11) < '\0') {
        __ZdlPv(puVar1[-5]);
      }
      param_2 = param_2 + -1;
      puVar1 = puVar1 + -5;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 10a1f41e8; end: 10a1f4273;  */

bool FUN_10a1f41e8(int *param_1,int *param_2)

{
  if ((((*(long *)(param_1 + 4) == *(long *)(param_2 + 4)) && (*param_1 == *param_2)) &&
      ((short)param_1[1] == (short)param_2[1])) &&
     (((*(char *)((long)param_1 + 6) == *(char *)((long)param_2 + 6) &&
       (*(char *)((long)param_1 + 7) == *(char *)((long)param_2 + 7))) &&
      (((char)param_1[2] == (char)param_2[2] && ((char)param_1[6] == (char)param_2[6])))))) {
    return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  return false;
}



/* Entry: 10a1f4274; end: 10a1f42f7;  */

void FUN_10a1f4274(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uStack_21;
  
  iVar1 = (int)&uStack_21;
  func_0x00010a1f42b4();
  if (iVar1 != 0) {
    FUN_10a1f42f8(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
  }
  return;
}



/* Entry: 10a1f42f8; end: 10a1f43f7;  */

bool FUN_10a1f42f8(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  if (((((*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0xe)) && (*param_1 == *param_2)) &&
       ((char)param_1[1] == (char)param_2[1])) &&
      ((((param_1[2] == param_2[2] && ((char)param_1[3] == (char)param_2[3])) &&
        ((*(char *)((long)param_1 + 0xd) == *(char *)((long)param_2 + 0xd) &&
         ((param_1[4] == param_2[4] && (param_1[5] == param_2[5])))))) && (param_1[6] == param_2[6])
       ))) && (((param_1[7] == param_2[7] && (param_1[8] == param_2[8])) &&
               (lVar4 = *(long *)(param_1 + 10), lVar4 == *(long *)(param_2 + 10))))) {
    if (lVar4 != 0) {
      piVar2 = param_2 + 0xc;
      piVar3 = param_1 + 0xc;
      do {
        lVar4 = lVar4 + -1;
        bVar1 = (char)*piVar3 == (char)*piVar2;
        piVar2 = (int *)((long)piVar2 + 1);
        piVar3 = (int *)((long)piVar3 + 1);
      } while (bVar1 && lVar4 != 0);
      return bVar1;
    }
    return true;
  }
  return false;
}



/* Entry: 10a1f43f8; end: 10a1f449b;  */

bool FUN_10a1f43f8(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    if ((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) {
      bVar4 = *(byte *)((long)param_1 + 0x1f);
      uVar1 = *(ulong *)(param_1 + 4);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)param_2 + 0x1f);
      uVar2 = *(ulong *)(param_2 + 4);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        piVar6 = *(int **)(param_1 + 2);
        if (-1 < (char)bVar4) {
          piVar6 = param_1 + 2;
        }
        piVar3 = *(int **)(param_2 + 2);
        if (-1 < (char)bVar5) {
          piVar3 = param_2 + 2;
        }
        _memcmp(piVar6,piVar3);
        return (int)piVar6 == 0;
      }
    }
  }
  return false;
}



/* Entry: 10a1f449c; end: 10a1f44f7;  */

undefined8 * FUN_10a1f449c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10a1f44f8; end: 10a1f4507;  */

void FUN_10a1f44f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f44fc);
  (*pcVar1)();
}



/* Entry: 10a1f4508; end: 10a1f455f;  */

long FUN_10a1f4508(long param_1)

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



/* Entry: 10a1f4560; end: 10a1f45cf;  */

void FUN_10a1f4560(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x48;
        FUN_10a1f45d0(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1f45d0; end: 10a1f4653;  */

void FUN_10a1f45d0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a1f4654; end: 10a1f469f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1f4680) */

void FUN_10a1f4654(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a1f46a0; end: 10a1f486b;  */

long * FUN_10a1f46a0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puStack_140;
  long *plStack_138;
  undefined8 *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a1f486c;
  ppuStack_90 = &PTR_FUN_110bb3720;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar4 + 1,apuStack_e8);
  puVar4[9] = uStack_a8;
  puVar4[8] = uStack_b0;
  puVar4[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar4;
  func_0x000107c2b054(auStack_108,&UNK_10f643dac);
  puVar4 = param_2;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar5 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (lStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*apuStack_e8[0])(apuStack_e8);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    pcStack_118 = FUN_10a1f486c;
    plVar7 = (long *)puVar4[2];
    puStack_140 = *ppuVar6;
    plVar9 = ppuVar6[1];
    puStack_130 = param_2;
    ppuStack_128 = ppuVar5;
    puStack_120 = &stack0xfffffffffffffff0;
    *ppuVar6 = (undefined8 *)0x0;
    ppuVar6[1] = (undefined8 *)0x0;
    if (puStack_140 == (undefined8 *)0x0) {
      puStack_140 = (undefined8 *)0x0;
      plStack_138 = (long *)0x0;
    }
    else {
      plStack_138 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    FUN_10a1f495c(plVar7,&puStack_140);
    plVar8 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar1 = plStack_138 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar7 = plVar8;
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar8 = plVar9 + 1;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        plVar7 = plVar9;
      }
    }
    return plVar7;
  }
  return param_1;
}



/* Entry: 10a1f486c; end: 10a1f495b;  */

void FUN_10a1f486c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_30;
  long *plStack_28;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lStack_30 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lStack_30 == 0) {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  FUN_10a1f495c(uVar6,&lStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a1f495c; end: 10a1f49e7;  */

void FUN_10a1f495c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30,param_1);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a1f49e8; end: 10a1f4a37;  */

void FUN_10a1f49e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1f4a38; end: 10a1f4a4f;  */

void FUN_10a1f4a38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a1f4a50; end: 10a1f4af7;  */

void FUN_10a1f4a50(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
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



/* Entry: 10a1f4af8; end: 10a1f4c33;  */

long FUN_10a1f4af8(long param_1)

{
  long lStack_28;
  
  func_0x000107c2826c(param_1 + 0x108);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xc0;
  func_0x00010a1f4bf4(&lStack_28);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a1f4c88(param_1 + 0x80);
  func_0x00010a1f4cfc(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a1f4dc4(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010a1f4ebc(&lStack_28);
  return param_1;
}



/* Entry: 10a1f4c34; end: 10a1f4c87;  */

void FUN_10a1f4c34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a1f4c88; end: 10a1f4efb;  */

long * FUN_10a1f4c88(long *param_1)

{
  long lVar1;
  
  func_0x00010a1f4cc0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1f4efc; end: 10a1f4f47;  */

void FUN_10a1f4efc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x20) != 0) {
      *(long *)(lVar2 + -0x18) = *(long *)(lVar2 + -0x20);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1f4f48; end: 10a1f502f;  */

uint FUN_10a1f4f48(float *param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte abStack_3 [3];
  
  iVar1 = 0;
  fVar7 = param_1[3];
  fVar9 = param_2[3];
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  if (fVar4 < 0.0) {
    fVar4 = -fVar4;
  }
  if (fVar5 < 0.0) {
    fVar5 = -fVar5;
  }
  if (fVar6 < 0.0) {
    fVar6 = -fVar6;
  }
  abStack_3[2] = 1;
  abStack_3[1] = 1;
  abStack_3[0] = 1;
  do {
    if (iVar1 == 1) {
      pbVar3 = abStack_3 + 1;
      fVar8 = fVar5;
    }
    else if (iVar1 == 2) {
      pbVar3 = abStack_3;
      fVar8 = fVar6;
    }
    else {
      if (iVar1 == 3) {
        uVar2 = 0x1000000;
        if (1e-06 <= ABS(fVar7 - fVar9)) {
          uVar2 = 0;
        }
        goto LAB_10a1f5010;
      }
      pbVar3 = abStack_3 + 2;
      fVar8 = fVar4;
    }
    *pbVar3 = fVar8 < 1e-06;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  uVar2 = 0x1000000;
LAB_10a1f5010:
  return uVar2 | abStack_3[2] | (uint)abStack_3[1] << 8 | (uint)abStack_3[0] << 0x10;
}



/* Entry: 10a1f5030; end: 10a1f503b;  */

void FUN_10a1f5030(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000105277f8c();
  if (param_1[2] != 0) {
    lVar2 = *param_1;
    plVar3 = param_1 + 1;
    *param_1 = (long)plVar3;
    *(undefined8 *)(*plVar3 + 0x10) = 0;
    *plVar3 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar2 + 8);
    if (lVar4 != 0) {
      lVar2 = lVar4;
    }
    plStack_68 = param_1;
    lStack_60 = lVar2;
    lStack_58 = lVar2;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      FUN_10a1f5214();
      lStack_60 = lVar4;
      do {
        if (param_2 == param_3) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar2 + 0x20,param_2 + 4);
        *(long *)(lVar2 + 0x38) = param_2[7];
        FUN_10a1f51a8(param_1,lStack_58);
        lVar2 = lStack_60;
        lStack_58 = lStack_60;
        if (lStack_60 != 0) {
          FUN_10a1f5214();
        }
        plVar3 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (lVar2 != 0);
    }
    FUN_10a1f5268(&plStack_68);
  }
  while (param_2 != param_3) {
    func_0x00010a1f52bc(param_1,param_2 + 4);
    plVar3 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar3;
        plVar3 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a1f503c; end: 10a1f51a7;  */

void FUN_10a1f503c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1[2] != 0) {
    lVar2 = *param_1;
    plVar3 = param_1 + 1;
    *param_1 = (long)plVar3;
    *(undefined8 *)(*plVar3 + 0x10) = 0;
    *plVar3 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar2 + 8);
    if (lVar4 != 0) {
      lVar2 = lVar4;
    }
    plStack_58 = param_1;
    lStack_50 = lVar2;
    lStack_48 = lVar2;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      FUN_10a1f5214();
      lStack_50 = lVar4;
      do {
        if (param_2 == param_3) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar2 + 0x20,param_2 + 4);
        *(long *)(lVar2 + 0x38) = param_2[7];
        FUN_10a1f51a8(param_1,lStack_48);
        lVar2 = lStack_50;
        lStack_48 = lStack_50;
        if (lStack_50 != 0) {
          FUN_10a1f5214();
        }
        plVar3 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar3;
            plVar3 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (lVar2 != 0);
    }
    FUN_10a1f5268(&plStack_58);
  }
  while (param_2 != param_3) {
    func_0x00010a1f52bc(param_1,param_2 + 4);
    plVar3 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar3;
        plVar3 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a1f51a8; end: 10a1f5213;  */

long FUN_10a1f51a8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, (ulong)plVar2[7] <= *(ulong *)(param_2 + 0x38)) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_10a1f51fc;
        }
      }
      plVar3 = plVar2;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_10a1f51fc:
  FUN_10a0479ec(param_1,plVar2,plVar3,param_2);
  return param_2;
}



/* Entry: 10a1f5214; end: 10a1f5267;  */

void FUN_10a1f5214(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a1f5268; end: 10a1f533b;  */

undefined8 * FUN_10a1f5268(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a0da1b8(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_10a0da1b8(*param_1);
  }
  return param_1;
}



/* Entry: 10a1f533c; end: 10a1f534b;  */

void FUN_10a1f533c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f5340);
  (*pcVar1)();
}



/* Entry: 10a1f534c; end: 10a1f53a3;  */

long FUN_10a1f534c(long param_1)

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



/* Entry: 10a1f53a4; end: 10a1f54bf;  */

undefined *** FUN_10a1f53a4(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_3;
  FUN_109ffe064(&pppuStack_90,*param_2,param_2[1]);
  pcStack_78 = FUN_10a1f54c0;
  ppuStack_70 = &PTR_FUN_110bb2d00;
  uStack_68 = uStack_98;
  uStack_58 = uStack_88;
  pppuStack_60 = pppuStack_90;
  uStack_50 = lStack_80;
  pppuStack_90 = (undefined ***)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  pppuVar5 = param_1;
  FUN_10a1f46a0(param_1,param_2,&pcStack_78,0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (lStack_80 < 0) {
    pppuVar4 = pppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    pppuVar5 = pppuVar4;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a1f54c0;
    ppuStack_d0 = *pppuVar5;
    pppuStack_c8 = (undefined ***)pppuVar5[1];
    *pppuVar5 = (undefined **)0x0;
    pppuVar5[1] = (undefined **)0x0;
    pppuStack_c0 = param_1;
    pppuStack_b8 = pppuVar4;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (ppuStack_d0 != (undefined **)0x0) {
      lVar8 = param_2[2];
      if (*(int *)(lVar8 + 0x10) != 0) {
        FUN_10a1f57fc(lVar8);
        *(undefined4 *)(lVar8 + 0x10) = 0;
        lVar8 = param_2[2];
      }
      FUN_10a1f55d4(lVar8,&ppuStack_d0);
      FUN_10a1f568c(param_2[2],&ppuStack_d0);
      pppuVar5 = (undefined ***)param_2[2];
      FUN_10a1f5744(pppuVar5,&ppuStack_d0);
      if ((*(int *)(param_2[2] + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        plVar6 = param_2 + 3;
        if (*(char *)((long)param_2 + 0x2f) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        pppuVar5 = (undefined ***)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f645ad5,0x30,&UNK_10f645c14,in_x6,in_x7,plVar6
                           );
      }
    }
    pppuVar4 = pppuStack_c8;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
        pppuVar5 = pppuVar4;
      }
    }
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 10a1f54c0; end: 10a1f55d3;  */

void FUN_10a1f54c0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_1;
  plStack_28 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lStack_30 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    if (*(int *)(lVar5 + 0x10) != 0) {
      FUN_10a1f57fc(lVar5);
      *(undefined4 *)(lVar5 + 0x10) = 0;
      lVar5 = *(long *)(param_2 + 0x10);
    }
    FUN_10a1f55d4(lVar5,&lStack_30);
    FUN_10a1f568c(*(undefined8 *)(param_2 + 0x10),&lStack_30);
    FUN_10a1f5744(*(undefined8 *)(param_2 + 0x10),&lStack_30);
    if ((*(int *)(*(long *)(param_2 + 0x10) + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0))
    {
      plVar4 = (long *)(param_2 + 0x18);
      if (*(char *)(param_2 + 0x2f) < '\0') {
        plVar4 = (long *)*plVar4;
      }
      func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f645ad5,0x30,&UNK_10f645c14,in_x6,in_x7,plVar4);
    }
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a1f55d4; end: 10a1f568b;  */

void FUN_10a1f55d4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c48e80,0), lVar5 != 0))
  {
    plStack_28 = (long *)param_2[1];
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
    lStack_30 = lVar5;
    func_0x00010a1f591c(param_1,param_1,&lStack_30);
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
  }
  return;
}



/* Entry: 10a1f568c; end: 10a1f5743;  */

void FUN_10a1f568c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c47f08,0), lVar5 != 0))
  {
    plStack_28 = (long *)param_2[1];
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
    lStack_30 = lVar5;
    func_0x00010a1f5974(param_1,param_1,&lStack_30);
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
  }
  return;
}



/* Entry: 10a1f5744; end: 10a1f57fb;  */

void FUN_10a1f5744(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c47f58,0), lVar5 != 0))
  {
    plStack_28 = (long *)param_2[1];
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
    lStack_30 = lVar5;
    func_0x00010a1f5a30(param_1,param_1,&lStack_30);
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
  }
  return;
}



/* Entry: 10a1f57fc; end: 10a1f584f;  */

void FUN_10a1f57fc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bb2070)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a1f5850; end: 10a1f586b;  */

void FUN_10a1f5850(void)

{
  return;
}



/* Entry: 10a1f586c; end: 10a1f5aeb;  */

long FUN_10a1f586c(long param_1)

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



/* Entry: 10a1f5aec; end: 10a1f5b2b;  */

void FUN_10a1f5aec(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a1f5b2c; end: 10a1f5b9b;  */

undefined8 * FUN_10a1f5b2c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  _strlen();
  uVar1 = (undefined4)uVar3;
  uVar3 = param_2;
  func_0x00010a107b84();
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar3 = param_2;
  _strlen();
  iVar2 = (int)uVar3;
  FUN_10a107c14();
  *(int *)((long)param_1 + 0xc) = (int)param_2 * -0x29aff4bf + iVar2 * 0xc0eb86b;
  return param_1;
}



/* Entry: 10a1f5b9c; end: 10a1f5bcf;  */

undefined1 * FUN_10a1f5b9c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10a1f5bd0();
  return param_1;
}



/* Entry: 10a1f5bd0; end: 10a1f5c2f;  */

void FUN_10a1f5bd0(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a1f57fc();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110bb2090)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10a1f5c30; end: 10a1f5c6f;  */

void FUN_10a1f5c30(void)

{
  return;
}



/* Entry: 10a1f5c70; end: 10a1f5cbb;  */

void FUN_10a1f5c70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  
  uStack_28 = param_1;
  uStack_20 = param_2;
  if (*(uint *)(param_3 + 0x10) != 0xffffffff) {
    puStack_18 = &uStack_28;
    (*(code *)(&PTR_FUN_110bb20b0)[*(uint *)(param_3 + 0x10)])(&puStack_18,param_3);
    return;
  }
  FUN_10a0d459c();
  return;
}



/* Entry: 10a1f5cbc; end: 10a1f5d13;  */

void FUN_10a1f5cbc(void)

{
  return;
}



/* Entry: 10a1f5d14; end: 10a1f5dbb;  */

void FUN_10a1f5d14(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
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



/* Entry: 10a1f5dbc; end: 10a1f5e63;  */

void FUN_10a1f5dbc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
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



/* Entry: 10a1f5e64; end: 10a1f5e93;  */

void FUN_10a1f5e64(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a1f5e94();
                    /* WARNING: Could not recover jumptable at 0x00010a1f5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a1f5e94; end: 10a1f609f;  */

void FUN_10a1f5e94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
LAB_10a1f5fc8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1f5fcc);
    (*pcVar4)();
  }
  lStack_2b0 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_2a0 = plVar5, plVar5 != (long *)0x0)) {
    lStack_2a8 = *(long *)(param_1 + 8);
    if (lStack_2a8 != 0) {
      FUN_10a00946c(&UNK_10f644f60);
      goto LAB_10a1f5fc8;
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar6 = lStack_2b0;
  plVar5 = (long *)(lStack_2b0 + 0x10);
  do {
    lVar7 = *plVar5;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lStack_2b0 + 0x18);
        goto LAB_10a1f5f60;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a1f5f60:
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_10a1eedbc(param_1);
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      lStack_2b0 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_2b0,lVar6), lStack_2b0 != 0)) {
        func_0x0001092b4274(&lStack_2b0);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a1f60a0; end: 10a1f6247;  */

undefined8 * FUN_10a1f60a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb20e0;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10a1eedbc(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a1f6248; end: 10a1f6273;  */

void FUN_10a1f6248(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 0x10));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a1f6274; end: 10a1f62b7;  */

undefined1 * FUN_10a1f6274(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10a1f62b8();
  return param_1;
}



/* Entry: 10a1f62b8; end: 10a1f6317;  */

void FUN_10a1f62b8(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a1f57fc();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110bb2158)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10a1f6318; end: 10a1f639f;  */

void FUN_10a1f6318(void)

{
  return;
}



/* Entry: 10a1f63a0; end: 10a1f6427;  */

void FUN_10a1f63a0(long param_1)

{
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(char *)(param_1 + 0xb7) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0xa0));
  }
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x78) != 0)) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(long *)(param_1 + 0x48) != 0)) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1f6428; end: 10a1f648f;  */

void FUN_10a1f6428(long *param_1)

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
        lVar2 = lVar2 + -0xe8;
        FUN_10a1f63a0(lVar2);
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



/* Entry: 10a1f6490; end: 10a1f65ff;  */

void FUN_10a1f6490(undefined8 *param_1,undefined1 *param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if ((ulong)((lVar6 - (long)puVar9 >> 2) * 0x6db6db6db6db6db7) < param_4) {
    puVar10 = param_1;
    puVar3 = param_2;
    if (puVar9 != (undefined8 *)0x0) {
      param_1[1] = puVar9;
      __ZdlPv();
      lVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar10 = puVar9;
    }
    if (0x924924924924924 < param_4) {
      FUN_10a1f6650();
      if (puVar3 < (undefined1 *)0x924924924924925) {
        puVar5 = puVar3;
        FUN_10a1f6664();
        *puVar10 = puVar3;
        puVar10[1] = puVar3;
        puVar10[2] = puVar3 + (long)puVar5 * 0x1c;
        return;
      }
      FUN_10a1f6650();
      puVar4 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if (puVar4 < (undefined *)0x924924924924925) {
        __Znwm((long)puVar4 * 0x1c);
        return;
      }
      func_0x000109ffded8();
      *puVar4 = *puVar3;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      uVar7 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 *)(puVar4 + 8) = uVar7;
      *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar3 + 0x18);
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      uVar2 = puVar3[0x24];
      uVar1 = *(undefined4 *)(puVar3 + 0x20);
      puVar4[0x28] = 0;
      *(undefined4 *)(puVar4 + 0x20) = uVar1;
      puVar4[0x24] = uVar2;
      puVar4[0x60] = 0;
      if (puVar3[0x60] == '\x01') {
        uVar11 = *(undefined8 *)(puVar3 + 0x30);
        uVar7 = *(undefined8 *)(puVar3 + 0x28);
        uVar12 = *(undefined8 *)(puVar3 + 0x34);
        *(undefined8 *)(puVar4 + 0x3c) = *(undefined8 *)(puVar3 + 0x3c);
        *(undefined8 *)(puVar4 + 0x34) = uVar12;
        *(undefined8 *)(puVar4 + 0x30) = uVar11;
        *(undefined8 *)(puVar4 + 0x28) = uVar7;
        *(undefined8 *)(puVar4 + 0x50) = 0;
        *(undefined8 *)(puVar4 + 0x58) = 0;
        *(undefined8 *)(puVar4 + 0x48) = 0;
        uVar7 = *(undefined8 *)(puVar3 + 0x48);
        *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(puVar3 + 0x50);
        *(undefined8 *)(puVar4 + 0x48) = uVar7;
        *(undefined8 *)(puVar4 + 0x58) = *(undefined8 *)(puVar3 + 0x58);
        *(undefined8 *)(puVar3 + 0x48) = 0;
        *(undefined8 *)(puVar3 + 0x50) = 0;
        *(undefined8 *)(puVar3 + 0x58) = 0;
        puVar4[0x60] = 1;
      }
      puVar4[0x68] = 0;
      puVar4[0x98] = 0;
      if (puVar3[0x98] == '\x01') {
        uVar7 = *(undefined8 *)(puVar3 + 0x68);
        *(undefined4 *)(puVar4 + 0x70) = *(undefined4 *)(puVar3 + 0x70);
        *(undefined8 *)(puVar4 + 0x68) = uVar7;
        *(undefined8 *)(puVar4 + 0x80) = 0;
        *(undefined8 *)(puVar4 + 0x88) = 0;
        *(undefined8 *)(puVar4 + 0x78) = 0;
        uVar7 = *(undefined8 *)(puVar3 + 0x78);
        *(undefined8 *)(puVar4 + 0x80) = *(undefined8 *)(puVar3 + 0x80);
        *(undefined8 *)(puVar4 + 0x78) = uVar7;
        *(undefined8 *)(puVar4 + 0x88) = *(undefined8 *)(puVar3 + 0x88);
        *(undefined8 *)(puVar3 + 0x80) = 0;
        *(undefined8 *)(puVar3 + 0x88) = 0;
        *(undefined8 *)(puVar3 + 0x78) = 0;
        *(undefined4 *)(puVar4 + 0x90) = *(undefined4 *)(puVar3 + 0x90);
        puVar4[0x98] = 1;
      }
      puVar4[0xa0] = 0;
      puVar4[0xd0] = 0;
      if (puVar3[0xd0] == '\x01') {
        uVar11 = *(undefined8 *)(puVar3 + 0xa8);
        uVar7 = *(undefined8 *)(puVar3 + 0xa0);
        *(undefined8 *)(puVar4 + 0xb0) = *(undefined8 *)(puVar3 + 0xb0);
        *(undefined8 *)(puVar4 + 0xa8) = uVar11;
        *(undefined8 *)(puVar4 + 0xa0) = uVar7;
        *(undefined8 *)(puVar3 + 0xa8) = 0;
        *(undefined8 *)(puVar3 + 0xb0) = 0;
        *(undefined8 *)(puVar3 + 0xa0) = 0;
        uVar11 = *(undefined8 *)(puVar3 + 0xc0);
        uVar7 = *(undefined8 *)(puVar3 + 0xb8);
        puVar4[200] = puVar3[200];
        *(undefined8 *)(puVar4 + 0xc0) = uVar11;
        *(undefined8 *)(puVar4 + 0xb8) = uVar7;
        puVar4[0xd0] = 1;
      }
      uVar7 = *(undefined8 *)(puVar3 + 0xd8);
      *(undefined4 *)(puVar4 + 0xe0) = *(undefined4 *)(puVar3 + 0xe0);
      *(undefined8 *)(puVar4 + 0xd8) = uVar7;
      return;
    }
    uVar8 = (lVar6 >> 2) * -0x2492492492492492;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x492492492492491 < (ulong)((lVar6 >> 2) * 0x6db6db6db6db6db7)) {
      uVar8 = 0x924924924924924;
    }
    FUN_10a1f6600(param_1,uVar8);
    lVar6 = param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      _memmove(lVar6,param_2,param_3);
    }
    lVar6 = lVar6 + param_3;
  }
  else {
    puVar10 = (undefined8 *)param_1[1];
    lVar6 = (long)puVar10 - (long)puVar9;
    if ((ulong)((lVar6 >> 2) * 0x6db6db6db6db6db7) < param_4) {
      if (puVar10 != puVar9) {
        _memmove(puVar9,param_2);
        puVar10 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - (long)(param_2 + lVar6);
      if (param_3 != 0) {
        _memmove(puVar10,param_2 + lVar6,param_3);
      }
      lVar6 = (long)puVar10 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      if (param_3 != 0) {
        _memmove(puVar9,param_2,param_3);
      }
      lVar6 = (long)puVar9 + param_3;
    }
  }
  param_1[1] = lVar6;
  return;
}



/* Entry: 10a1f6600; end: 10a1f664f;  */

void FUN_10a1f6600(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < (undefined1 *)0x924924924924925) {
    puVar4 = param_2;
    FUN_10a1f6664();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (long)puVar4 * 0x1c;
    return;
  }
  FUN_10a1f6650();
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar3 < (undefined *)0x924924924924925) {
    __Znwm((long)puVar3 * 0x1c);
    return;
  }
  func_0x000109ffded8();
  *puVar3 = *param_2;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar3 + 8) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = param_2[0x24];
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  puVar3[0x28] = 0;
  *(undefined4 *)(puVar3 + 0x20) = uVar1;
  puVar3[0x24] = uVar2;
  puVar3[0x60] = 0;
  if (param_2[0x60] == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar7 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(puVar3 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(puVar3 + 0x34) = uVar7;
    *(undefined8 *)(puVar3 + 0x30) = uVar6;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(puVar3 + 0x48) = uVar5;
    *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    puVar3[0x60] = 1;
  }
  puVar3[0x68] = 0;
  puVar3[0x98] = 0;
  if (param_2[0x98] == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(puVar3 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(puVar3 + 0x68) = uVar5;
    *(undefined8 *)(puVar3 + 0x80) = 0;
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(puVar3 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(puVar3 + 0x78) = uVar5;
    *(undefined8 *)(puVar3 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    puVar3[0x98] = 1;
  }
  puVar3[0xa0] = 0;
  puVar3[0xd0] = 0;
  if (param_2[0xd0] == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0xa8);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(puVar3 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(puVar3 + 0xa8) = uVar6;
    *(undefined8 *)(puVar3 + 0xa0) = uVar5;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    uVar6 = *(undefined8 *)(param_2 + 0xc0);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    puVar3[200] = param_2[200];
    *(undefined8 *)(puVar3 + 0xc0) = uVar6;
    *(undefined8 *)(puVar3 + 0xb8) = uVar5;
    puVar3[0xd0] = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(puVar3 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(puVar3 + 0xd8) = uVar5;
  return;
}



/* Entry: 10a1f6650; end: 10a1f6663;  */

void FUN_10a1f6650(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar3 < (undefined *)0x924924924924925) {
    __Znwm((long)puVar3 * 0x1c);
    return;
  }
  func_0x000109ffded8();
  *puVar3 = *param_2;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar3 + 8) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = param_2[0x24];
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  puVar3[0x28] = 0;
  *(undefined4 *)(puVar3 + 0x20) = uVar1;
  puVar3[0x24] = uVar2;
  puVar3[0x60] = 0;
  if (param_2[0x60] == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(puVar3 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(puVar3 + 0x34) = uVar6;
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    *(undefined8 *)(puVar3 + 0x28) = uVar4;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(puVar3 + 0x48) = uVar4;
    *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    puVar3[0x60] = 1;
  }
  puVar3[0x68] = 0;
  puVar3[0x98] = 0;
  if (param_2[0x98] == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(puVar3 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(puVar3 + 0x68) = uVar4;
    *(undefined8 *)(puVar3 + 0x80) = 0;
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(puVar3 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(puVar3 + 0x78) = uVar4;
    *(undefined8 *)(puVar3 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    puVar3[0x98] = 1;
  }
  puVar3[0xa0] = 0;
  puVar3[0xd0] = 0;
  if (param_2[0xd0] == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(puVar3 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(puVar3 + 0xa8) = uVar5;
    *(undefined8 *)(puVar3 + 0xa0) = uVar4;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
    puVar3[200] = param_2[200];
    *(undefined8 *)(puVar3 + 0xc0) = uVar5;
    *(undefined8 *)(puVar3 + 0xb8) = uVar4;
    puVar3[0xd0] = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(puVar3 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(puVar3 + 0xd8) = uVar4;
  return;
}



/* Entry: 10a1f6664; end: 10a1f66ab;  */

void FUN_10a1f6664(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 < (undefined1 *)0x924924924924925) {
    __Znwm((long)param_1 * 0x1c);
    return;
  }
  func_0x000109ffded8();
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = param_2[0x24];
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  param_1[0x24] = uVar2;
  param_1[0x60] = 0;
  if (param_2[0x60] == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x34) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    param_1[0x60] = 1;
  }
  param_1[0x68] = 0;
  param_1[0x98] = 0;
  if (param_2[0x98] == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    param_1[0x98] = 1;
  }
  param_1[0xa0] = 0;
  param_1[0xd0] = 0;
  if (param_2[0xd0] == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    param_1[200] = param_2[200];
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    param_1[0xd0] = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  return;
}



/* Entry: 10a1f66ac; end: 10a1f67e7;  */

void FUN_10a1f66ac(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = param_2[0x24];
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  param_1[0x24] = uVar2;
  param_1[0x60] = 0;
  if (param_2[0x60] == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x34) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    param_1[0x60] = 1;
  }
  param_1[0x68] = 0;
  param_1[0x98] = 0;
  if (param_2[0x98] == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    param_1[0x98] = 1;
  }
  param_1[0xa0] = 0;
  param_1[0xd0] = 0;
  if (param_2[0xd0] == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    param_1[200] = param_2[200];
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    param_1[0xd0] = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  return;
}



/* Entry: 10a1f67e8; end: 10a1f67fb;  */

void FUN_10a1f67e8(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uStack_51;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar2 < (undefined *)0x11a7b9611a7b962) {
    __Znwm((long)puVar2 * 0xe8);
    return;
  }
  func_0x000109ffded8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(puVar2 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(puVar2 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bb2070)[*(uint *)(puVar2 + 0x10)])(&uStack_51,puVar2,param_2);
      }
      *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110bb2178)[uVar1])(&stack0xffffffffffffffb8);
  }
  return;
}



/* Entry: 10a1f67fc; end: 10a1f6843;  */

void FUN_10a1f67fc(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_41;
  
  if (param_1 < 0x11a7b9611a7b962) {
    __Znwm(param_1 * 0xe8);
    return;
  }
  func_0x000109ffded8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bb2070)[*(uint *)(param_1 + 0x10)])(&uStack_41,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110bb2178)[uVar1])(&stack0xffffffffffffffc8);
  }
  return;
}



/* Entry: 10a1f6844; end: 10a1f689f;  */

void FUN_10a1f6844(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bb2070)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110bb2178)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10a1f68a0; end: 10a1f68cf;  */

void FUN_10a1f68a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    FUN_10a1f57fc(lVar1);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10a1f68d0; end: 10a1f68e7;  */

undefined8 * FUN_10a1f68d0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)*param_1;
  if (*(int *)(puVar5 + 2) == 1) {
    uVar9 = param_3[1];
    uVar8 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    plVar7 = (long *)param_2[1];
    param_2[1] = uVar9;
    *param_2 = uVar8;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return param_2;
  }
  puVar4 = puVar5;
  FUN_10a1f57fc();
  uVar8 = *param_3;
  puVar5[1] = param_3[1];
  *puVar5 = uVar8;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 1;
  return puVar4;
}



/* Entry: 10a1f68e8; end: 10a1f695f;  */

void FUN_10a1f68e8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1f6600(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a1f6960; end: 10a1f69d7;  */

void FUN_10a1f6960(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a1f69d8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a1f69d8; end: 10a1f6a13;  */

undefined1  [16] FUN_10a1f69d8(ulong *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [272];
  undefined1 auStack_218 [8];
  undefined **appuStack_210 [2];
  undefined1 auStack_200 [272];
  
  if (param_2 >> 0x3d == 0) {
    uVar3 = param_2;
    FUN_10a1f6a28();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar3 * 8;
    auVar10._8_8_ = uVar3;
    auVar10._0_8_ = param_2;
    return auVar10;
  }
  FUN_10a1f6a14();
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar6 >> 0x3d == 0) {
    lVar1 = (long)puVar6 << 3;
    __Znwm(lVar1);
    auVar11._8_8_ = puVar6;
    auVar11._0_8_ = lVar1;
    return auVar11;
  }
  func_0x000109ffded8();
  uVar3 = puVar6[2];
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 3) < param_4) {
    puVar9 = puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      puVar6[1] = puVar7;
      __ZdlPv();
      uVar3 = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar9 = puVar7;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a1f6a14();
      *puVar9 = &PTR_DAT_110bae008;
      puVar9[2] = &PTR_FUN_110bae138;
      puVar9[5] = &PTR_FUN_110bae168;
      puVar9[0x58] = &PTR_FUN_110bae210;
      puVar9[0x15] = &PTR_FUN_110bae1c0;
      if (puVar9[0x55] != 0) {
        puVar9[0x56] = puVar9[0x55];
        __ZdlPv();
      }
      FUN_10a0d92c8(puVar9 + 0x53);
      func_0x00010a0523dc(puVar9 + 0x51);
      *puVar9 = &PTR_FUN_110baff90;
      puVar9[2] = &PTR_FUN_110bb3968;
      puVar9[5] = &PTR_DAT_110bb3998;
      puVar9[0x58] = &PTR_DAT_110bb00f0;
      puVar9[0x15] = &PTR_DAT_110bb39f0;
      FUN_10a042c0c(puVar9 + 0x4d);
      func_0x00010a042c64(puVar9 + 0x48);
      func_0x00010a0523dc(puVar9 + 0x45);
      if (*(char *)(puVar9 + 0x3c) == '\x01') {
        func_0x00010a042d30(puVar9 + 0x3a);
      }
      puVar9[0x15] = &PTR_FUN_110b9f768;
      FUN_10a1c00f4(puVar9 + 0x15);
      *puVar9 = &PTR_DAT_110bb0140;
      puVar9[2] = &PTR_FUN_110b9f848;
      puVar9[5] = &PTR_DAT_110b9f878;
      puVar9[0x58] = &PTR_DAT_110bb0210;
      FUN_10a042dcc(puVar9 + 0x13);
      *puVar9 = &PTR_DAT_110c60a00;
      puVar9[2] = &PTR_DAT_110c60a88;
      puVar9[5] = &PTR_DAT_110c60ab8;
      ppuVar4 = (undefined **)(puVar9 + 0xb);
      puVar8 = (undefined8 *)puVar9[0xc];
      for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        FUN_10a009538(auStack_338,&UNK_10f69ea0f);
        __ZNSt13runtime_errorC2ERKS_(appuStack_210,auStack_338);
        _memcpy(auStack_200,auStack_328,0x110);
        appuStack_210[0] = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_218,appuStack_210);
        __ZNSt13runtime_errorD2Ev(appuStack_210);
        func_0x000109d1b350(*puVar6,auStack_218);
        __ZNSt13exception_ptrD1Ev(auStack_218);
        __ZNSt13runtime_errorD2Ev(auStack_338);
      }
      FUN_10ac634b8(ppuVar4);
      plVar5 = puVar9 + 10;
      if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988))
      {
        FUN_10a5ae930();
      }
      FUN_10a3a743c(puVar9 + 3);
      if ((puVar9[0x12] != 0) && (lVar1 = *(long *)(puVar9[0x12] + 0x828), lVar1 != 0)) {
        FUN_10a1dfb2c(lVar1,puVar9);
      }
      if (*(char *)((long)puVar9 + 0x8f) < '\0') {
        __ZdlPv(puVar9[0xf]);
      }
      appuStack_210[0] = ppuVar4;
      FUN_10ac78cf4(appuStack_210);
      lVar1 = *plVar5;
      *plVar5 = 0;
      if (lVar1 != 0) {
        FUN_10ac7d690(plVar5);
      }
      if (puVar9[9] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar9[5] = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar9 + 6);
      puVar9[2] = &PTR____cxa_pure_virtual_110bcfb60;
      func_0x00010a004e5c(puVar9 + 3);
      auVar13._8_8_ = lVar1;
      auVar13._0_8_ = puVar9;
      return auVar13;
    }
    uVar2 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar2 = 0x1fffffffffffffff;
    }
    FUN_10a1f69d8(puVar6,uVar2);
    puVar7 = (undefined8 *)puVar6[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar8 = puVar7;
      _memmove(puVar7,param_2,param_3);
      uVar2 = param_2;
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    puVar9 = (undefined8 *)puVar6[1];
    if ((ulong)((long)puVar9 - (long)puVar7 >> 3) < param_4) {
      uVar3 = param_2 + ((long)puVar9 - (long)puVar7);
      if (puVar9 != puVar7) {
        _memmove(puVar7,param_2);
        puVar9 = (undefined8 *)puVar6[1];
        puVar8 = puVar7;
      }
      param_3 = param_3 - uVar3;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar8 = puVar9;
        _memmove(puVar9,uVar3,param_3);
        uVar2 = uVar3;
      }
      param_3 = (long)puVar9 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar8 = puVar7;
        _memmove(puVar7,param_2,param_3);
        uVar2 = param_2;
      }
      param_3 = (long)puVar7 + param_3;
    }
  }
  puVar6[1] = param_3;
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = puVar8;
  return auVar12;
}



/* Entry: 10a1f6a14; end: 10a1f6a27;  */

undefined1  [16] FUN_10a1f6a14(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [272];
  undefined1 auStack_1f8 [8];
  undefined **appuStack_1f0 [2];
  undefined1 auStack_1e0 [272];
  
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar6 >> 0x3d == 0) {
    lVar1 = (long)puVar6 << 3;
    __Znwm(lVar1);
    auVar10._8_8_ = puVar6;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000109ffded8();
  uVar3 = puVar6[2];
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 3) < param_4) {
    puVar9 = puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      puVar6[1] = puVar7;
      __ZdlPv();
      uVar3 = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar9 = puVar7;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a1f6a14();
      *puVar9 = &PTR_DAT_110bae008;
      puVar9[2] = &PTR_FUN_110bae138;
      puVar9[5] = &PTR_FUN_110bae168;
      puVar9[0x58] = &PTR_FUN_110bae210;
      puVar9[0x15] = &PTR_FUN_110bae1c0;
      if (puVar9[0x55] != 0) {
        puVar9[0x56] = puVar9[0x55];
        __ZdlPv();
      }
      FUN_10a0d92c8(puVar9 + 0x53);
      func_0x00010a0523dc(puVar9 + 0x51);
      *puVar9 = &PTR_FUN_110baff90;
      puVar9[2] = &PTR_FUN_110bb3968;
      puVar9[5] = &PTR_DAT_110bb3998;
      puVar9[0x58] = &PTR_DAT_110bb00f0;
      puVar9[0x15] = &PTR_DAT_110bb39f0;
      FUN_10a042c0c(puVar9 + 0x4d);
      func_0x00010a042c64(puVar9 + 0x48);
      func_0x00010a0523dc(puVar9 + 0x45);
      if (*(char *)(puVar9 + 0x3c) == '\x01') {
        func_0x00010a042d30(puVar9 + 0x3a);
      }
      puVar9[0x15] = &PTR_FUN_110b9f768;
      FUN_10a1c00f4(puVar9 + 0x15);
      *puVar9 = &PTR_DAT_110bb0140;
      puVar9[2] = &PTR_FUN_110b9f848;
      puVar9[5] = &PTR_DAT_110b9f878;
      puVar9[0x58] = &PTR_DAT_110bb0210;
      FUN_10a042dcc(puVar9 + 0x13);
      *puVar9 = &PTR_DAT_110c60a00;
      puVar9[2] = &PTR_DAT_110c60a88;
      puVar9[5] = &PTR_DAT_110c60ab8;
      ppuVar4 = (undefined **)(puVar9 + 0xb);
      puVar8 = (undefined8 *)puVar9[0xc];
      for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        FUN_10a009538(auStack_318,&UNK_10f69ea0f);
        __ZNSt13runtime_errorC2ERKS_(appuStack_1f0,auStack_318);
        _memcpy(auStack_1e0,auStack_308,0x110);
        appuStack_1f0[0] = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_1f8,appuStack_1f0);
        __ZNSt13runtime_errorD2Ev(appuStack_1f0);
        func_0x000109d1b350(*puVar6,auStack_1f8);
        __ZNSt13exception_ptrD1Ev(auStack_1f8);
        __ZNSt13runtime_errorD2Ev(auStack_318);
      }
      FUN_10ac634b8(ppuVar4);
      plVar5 = puVar9 + 10;
      if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988))
      {
        FUN_10a5ae930();
      }
      FUN_10a3a743c(puVar9 + 3);
      if ((puVar9[0x12] != 0) && (lVar1 = *(long *)(puVar9[0x12] + 0x828), lVar1 != 0)) {
        FUN_10a1dfb2c(lVar1,puVar9);
      }
      if (*(char *)((long)puVar9 + 0x8f) < '\0') {
        __ZdlPv(puVar9[0xf]);
      }
      appuStack_1f0[0] = ppuVar4;
      FUN_10ac78cf4(appuStack_1f0);
      lVar1 = *plVar5;
      *plVar5 = 0;
      if (lVar1 != 0) {
        FUN_10ac7d690(plVar5);
      }
      if (puVar9[9] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar9[5] = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar9 + 6);
      puVar9[2] = &PTR____cxa_pure_virtual_110bcfb60;
      func_0x00010a004e5c(puVar9 + 3);
      auVar12._8_8_ = lVar1;
      auVar12._0_8_ = puVar9;
      return auVar12;
    }
    uVar2 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar2 = 0x1fffffffffffffff;
    }
    FUN_10a1f69d8(puVar6,uVar2);
    puVar7 = (undefined8 *)puVar6[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar8 = puVar7;
      _memmove(puVar7,param_2,param_3);
      uVar2 = param_2;
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    puVar9 = (undefined8 *)puVar6[1];
    if ((ulong)((long)puVar9 - (long)puVar7 >> 3) < param_4) {
      uVar3 = param_2 + ((long)puVar9 - (long)puVar7);
      if (puVar9 != puVar7) {
        _memmove(puVar7,param_2);
        puVar9 = (undefined8 *)puVar6[1];
        puVar8 = puVar7;
      }
      param_3 = param_3 - uVar3;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar8 = puVar9;
        _memmove(puVar9,uVar3,param_3);
        uVar2 = uVar3;
      }
      param_3 = (long)puVar9 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar8 = puVar7;
        _memmove(puVar7,param_2,param_3);
        uVar2 = param_2;
      }
      param_3 = (long)puVar7 + param_3;
    }
  }
  puVar6[1] = param_3;
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = puVar8;
  return auVar11;
}



/* Entry: 10a1f6a28; end: 10a1f6a5b;  */

undefined1  [16] FUN_10a1f6a28(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [272];
  undefined1 auStack_1e8 [8];
  undefined **appuStack_1e0 [2];
  undefined1 auStack_1d0 [272];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = lVar1;
    return auVar9;
  }
  func_0x000109ffded8();
  uVar3 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  puVar6 = param_1;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 3) < param_4) {
    puVar8 = param_1;
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar8 = puVar7;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a1f6a14();
      *puVar8 = &PTR_DAT_110bae008;
      puVar8[2] = &PTR_FUN_110bae138;
      puVar8[5] = &PTR_FUN_110bae168;
      puVar8[0x58] = &PTR_FUN_110bae210;
      puVar8[0x15] = &PTR_FUN_110bae1c0;
      if (puVar8[0x55] != 0) {
        puVar8[0x56] = puVar8[0x55];
        __ZdlPv();
      }
      FUN_10a0d92c8(puVar8 + 0x53);
      func_0x00010a0523dc(puVar8 + 0x51);
      *puVar8 = &PTR_FUN_110baff90;
      puVar8[2] = &PTR_FUN_110bb3968;
      puVar8[5] = &PTR_DAT_110bb3998;
      puVar8[0x58] = &PTR_DAT_110bb00f0;
      puVar8[0x15] = &PTR_DAT_110bb39f0;
      FUN_10a042c0c(puVar8 + 0x4d);
      func_0x00010a042c64(puVar8 + 0x48);
      func_0x00010a0523dc(puVar8 + 0x45);
      if (*(char *)(puVar8 + 0x3c) == '\x01') {
        func_0x00010a042d30(puVar8 + 0x3a);
      }
      puVar8[0x15] = &PTR_FUN_110b9f768;
      FUN_10a1c00f4(puVar8 + 0x15);
      *puVar8 = &PTR_DAT_110bb0140;
      puVar8[2] = &PTR_FUN_110b9f848;
      puVar8[5] = &PTR_DAT_110b9f878;
      puVar8[0x58] = &PTR_DAT_110bb0210;
      FUN_10a042dcc(puVar8 + 0x13);
      *puVar8 = &PTR_DAT_110c60a00;
      puVar8[2] = &PTR_DAT_110c60a88;
      puVar8[5] = &PTR_DAT_110c60ab8;
      ppuVar4 = (undefined **)(puVar8 + 0xb);
      puVar7 = (undefined8 *)puVar8[0xc];
      for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar7; puVar6 = puVar6 + 1) {
        FUN_10a009538(auStack_308,&UNK_10f69ea0f);
        __ZNSt13runtime_errorC2ERKS_(appuStack_1e0,auStack_308);
        _memcpy(auStack_1d0,auStack_2f8,0x110);
        appuStack_1e0[0] = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_1e8,appuStack_1e0);
        __ZNSt13runtime_errorD2Ev(appuStack_1e0);
        func_0x000109d1b350(*puVar6,auStack_1e8);
        __ZNSt13exception_ptrD1Ev(auStack_1e8);
        __ZNSt13runtime_errorD2Ev(auStack_308);
      }
      FUN_10ac634b8(ppuVar4);
      plVar5 = puVar8 + 10;
      if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988))
      {
        FUN_10a5ae930();
      }
      FUN_10a3a743c(puVar8 + 3);
      if ((puVar8[0x12] != 0) && (lVar1 = *(long *)(puVar8[0x12] + 0x828), lVar1 != 0)) {
        FUN_10a1dfb2c(lVar1,puVar8);
      }
      if (*(char *)((long)puVar8 + 0x8f) < '\0') {
        __ZdlPv(puVar8[0xf]);
      }
      appuStack_1e0[0] = ppuVar4;
      FUN_10ac78cf4(appuStack_1e0);
      lVar1 = *plVar5;
      *plVar5 = 0;
      if (lVar1 != 0) {
        FUN_10ac7d690(plVar5);
      }
      if (puVar8[9] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar8[5] = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar8 + 6);
      puVar8[2] = &PTR____cxa_pure_virtual_110bcfb60;
      func_0x00010a004e5c(puVar8 + 3);
      auVar11._8_8_ = lVar1;
      auVar11._0_8_ = puVar8;
      return auVar11;
    }
    uVar2 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar2 = 0x1fffffffffffffff;
    }
    FUN_10a1f69d8(param_1,uVar2);
    puVar7 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar6 = puVar7;
      _memmove(puVar7,param_2,param_3);
      uVar2 = param_2;
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    puVar8 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar8 - (long)puVar7 >> 3) < param_4) {
      uVar3 = param_2 + ((long)puVar8 - (long)puVar7);
      if (puVar8 != puVar7) {
        _memmove(puVar7,param_2);
        puVar8 = (undefined8 *)param_1[1];
        puVar6 = puVar7;
      }
      param_3 = param_3 - uVar3;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar6 = puVar8;
        _memmove(puVar8,uVar3,param_3);
        uVar2 = uVar3;
      }
      param_3 = (long)puVar8 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar2 = param_2;
      if (param_3 != 0) {
        puVar6 = puVar7;
        _memmove(puVar7,param_2,param_3);
        uVar2 = param_2;
      }
      param_3 = (long)puVar7 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = puVar6;
  return auVar10;
}



/* Entry: 10a1f6a5c; end: 10a1f6b83;  */

undefined8 * FUN_10a1f6a5c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [272];
  undefined1 auStack_1c8 [8];
  undefined **appuStack_1c0 [2];
  undefined1 auStack_1b0 [272];
  
  uVar3 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  puVar6 = param_1;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 3) < param_4) {
    puVar8 = param_1;
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar8 = puVar7;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a1f6a14();
      *puVar8 = &PTR_DAT_110bae008;
      puVar8[2] = &PTR_FUN_110bae138;
      puVar8[5] = &PTR_FUN_110bae168;
      puVar8[0x58] = &PTR_FUN_110bae210;
      puVar8[0x15] = &PTR_FUN_110bae1c0;
      if (puVar8[0x55] != 0) {
        puVar8[0x56] = puVar8[0x55];
        __ZdlPv();
      }
      FUN_10a0d92c8(puVar8 + 0x53);
      func_0x00010a0523dc(puVar8 + 0x51);
      *puVar8 = &PTR_FUN_110baff90;
      puVar8[2] = &PTR_FUN_110bb3968;
      puVar8[5] = &PTR_DAT_110bb3998;
      puVar8[0x58] = &PTR_DAT_110bb00f0;
      puVar8[0x15] = &PTR_DAT_110bb39f0;
      FUN_10a042c0c(puVar8 + 0x4d);
      func_0x00010a042c64(puVar8 + 0x48);
      func_0x00010a0523dc(puVar8 + 0x45);
      if (*(char *)(puVar8 + 0x3c) == '\x01') {
        func_0x00010a042d30(puVar8 + 0x3a);
      }
      puVar8[0x15] = &PTR_FUN_110b9f768;
      FUN_10a1c00f4(puVar8 + 0x15);
      *puVar8 = &PTR_DAT_110bb0140;
      puVar8[2] = &PTR_FUN_110b9f848;
      puVar8[5] = &PTR_DAT_110b9f878;
      puVar8[0x58] = &PTR_DAT_110bb0210;
      FUN_10a042dcc(puVar8 + 0x13);
      *puVar8 = &PTR_DAT_110c60a00;
      puVar8[2] = &PTR_DAT_110c60a88;
      puVar8[5] = &PTR_DAT_110c60ab8;
      ppuVar4 = (undefined **)(puVar8 + 0xb);
      puVar7 = (undefined8 *)puVar8[0xc];
      for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar7; puVar6 = puVar6 + 1) {
        FUN_10a009538(auStack_2e8,&UNK_10f69ea0f);
        __ZNSt13runtime_errorC2ERKS_(appuStack_1c0,auStack_2e8);
        _memcpy(auStack_1b0,auStack_2d8,0x110);
        appuStack_1c0[0] = &PTR_FUN_110b99e70;
        FUN_10a05bde0(auStack_1c8,appuStack_1c0);
        __ZNSt13runtime_errorD2Ev(appuStack_1c0);
        func_0x000109d1b350(*puVar6,auStack_1c8);
        __ZNSt13exception_ptrD1Ev(auStack_1c8);
        __ZNSt13runtime_errorD2Ev(auStack_2e8);
      }
      FUN_10ac634b8(ppuVar4);
      plVar5 = puVar8 + 10;
      if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988))
      {
        FUN_10a5ae930();
      }
      FUN_10a3a743c(puVar8 + 3);
      if ((puVar8[0x12] != 0) && (lVar2 = *(long *)(puVar8[0x12] + 0x828), lVar2 != 0)) {
        FUN_10a1dfb2c(lVar2,puVar8);
      }
      if (*(char *)((long)puVar8 + 0x8f) < '\0') {
        __ZdlPv(puVar8[0xf]);
      }
      appuStack_1c0[0] = ppuVar4;
      FUN_10ac78cf4(appuStack_1c0);
      lVar2 = *plVar5;
      *plVar5 = 0;
      if (lVar2 != 0) {
        FUN_10ac7d690(plVar5);
      }
      if (puVar8[9] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar8[5] = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar8 + 6);
      puVar8[2] = &PTR____cxa_pure_virtual_110bcfb60;
      func_0x00010a004e5c(puVar8 + 3);
      return puVar8;
    }
    uVar1 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_10a1f69d8(param_1,uVar1);
    puVar7 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar6 = puVar7;
      _memmove(puVar7,param_2,param_3);
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    puVar8 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar8 - (long)puVar7 >> 3) < param_4) {
      lVar2 = param_2 + ((long)puVar8 - (long)puVar7);
      if (puVar8 != puVar7) {
        _memmove(puVar7,param_2);
        puVar8 = (undefined8 *)param_1[1];
        puVar6 = puVar7;
      }
      param_3 = param_3 - lVar2;
      if (param_3 != 0) {
        puVar6 = puVar8;
        _memmove(puVar8,lVar2,param_3);
      }
      param_3 = (long)puVar8 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar6 = puVar7;
        _memmove(puVar7,param_2,param_3);
      }
      param_3 = (long)puVar7 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar6;
}



/* Entry: 10a1f6b84; end: 10a1f6c93;  */

undefined8 * FUN_10a1f6b84(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_DAT_110bae008;
  param_1[2] = &PTR_FUN_110bae138;
  param_1[5] = &PTR_FUN_110bae168;
  param_1[0x58] = &PTR_FUN_110bae210;
  param_1[0x15] = &PTR_FUN_110bae1c0;
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    __ZdlPv();
  }
  FUN_10a0d92c8(param_1 + 0x53);
  func_0x00010a0523dc(param_1 + 0x51);
  *param_1 = &PTR_FUN_110baff90;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x58] = &PTR_DAT_110bb00f0;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb0140;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x58] = &PTR_DAT_110bb0210;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f6c94; end: 10a1f6d9b;  */

long * FUN_10a1f6c94(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3570;
  param_1[5] = (long)&PTR_FUN_110bb35a0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  plVar3 = param_1 + 0x15;
  *plVar3 = (long)&PTR_FUN_110bb35f8;
  func_0x00010a0523dc(param_1 + 0x51);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  *plVar3 = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(plVar3);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f6d9c; end: 10a1f6dab;  */

void FUN_10a1f6d9c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f6da0);
  (*pcVar1)();
}



/* Entry: 10a1f6dac; end: 10a1f732f;  */

undefined8 * FUN_10a1f6dac(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_DAT_110bae460;
  param_1[2] = &PTR_FUN_110bae5a0;
  param_1[5] = &PTR_FUN_110bae5d0;
  param_1[0x76] = &PTR_FUN_110bae6f0;
  param_1[0x15] = &PTR_FUN_110bae628;
  param_1[0x51] = &PTR_FUN_110bae648;
  param_1[0x52] = &PTR_FUN_110bae678;
  func_0x00010a004e5c(param_1 + 0x74);
  if (param_1[0x73] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(param_1 + 0x70);
  func_0x00010a05248c(param_1 + 0x6d);
  func_0x00010a05248c(param_1 + 0x6b);
  func_0x00010a05248c(param_1 + 0x69);
  param_1[0x52] = &PTR_DAT_110bb0818;
  param_1[0x76] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(param_1 + 0x55);
  func_0x00010a004e04(param_1 + 0x53);
  *param_1 = &PTR_FUN_110bb0548;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x76] = &PTR_DAT_110bb06a8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb06f8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x76] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f7330; end: 10a1f7333;  */

long * FUN_10a1f7330(long *param_1)

{
  long lVar1;
  
  func_0x00010a1f736c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1f7334; end: 10a1f750f;  */

long * FUN_10a1f7334(long *param_1)

{
  long lVar1;
  
  func_0x00010a1f736c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1f7510; end: 10a1f75cb;  */

long * FUN_10a1f7510(long *param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                    undefined8 *param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar2 = param_1;
  puVar4 = param_2;
  (**(code **)(*param_1 + 0xe8))();
  if ((int)plVar2 - 1U < 2 || (int)plVar2 == 4) {
    if ((!SCARRY4((int)param_2,param_4)) && (!SCARRY4(param_3,param_5))) {
      uStack_50 = (ulong)param_2 & 0xffffffff | (ulong)param_3 << 0x20;
      uStack_48 = uStack_50 + ((ulong)param_5 << 0x20) & 0xffffffff00000000 |
                  (ulong)(uint)(param_4 + (int)param_2);
      FUN_10a1da8f8(param_1,&uStack_50,*(undefined8 *)*param_6,((undefined8 *)*param_6)[1]);
      return param_1;
    }
    FUN_10a00946c(&UNK_10f645d0f);
  }
  plVar2 = (long *)&UNK_10f645cdc;
  FUN_10a00946c();
  plVar3 = plVar2;
  FUN_10a0051e8();
  if (((ulong)plVar3 & 1) == 0) {
    if ((*(byte *)(plVar2 + 0xf) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f7630);
      (*pcVar1)();
    }
    FUN_10a054dac(plVar2,*puVar4,FUN_10a1f7630,6,plVar2[8]);
  }
  return plVar2;
}



/* Entry: 10a1f75cc; end: 10a1f762f;  */

ulong FUN_10a1f75cc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f7630);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a1f7630,6,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a1f7630; end: 10a1f76e7;  */

void FUN_10a1f7630(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1f76e8(param_1,param_2,FUN_10a1f7510,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1f76e8; end: 10a1f781f;  */

void FUN_10a1f76e8(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  lVar8 = param_2;
  FUN_10a1f7820(param_2,param_5);
  FUN_10a1f7888(param_7);
  lVar4 = param_2;
  func_0x000109898518(param_2,param_6);
  lVar5 = param_2;
  func_0x000109898518(param_2,param_6 + 0x10);
  lVar6 = param_2;
  func_0x000109898518(param_2,param_6 + 0x20);
  lVar7 = param_2;
  func_0x000109898518(param_2,param_6 + 0x30);
  FUN_10a13a07c(auStack_70,param_2,param_6 + 0x40);
  plVar1 = (long *)(lVar8 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,lVar4,lVar5,lVar6,lVar7,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a1f7820; end: 10a1f7887;  */

long * FUN_10a1f7820(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                    undefined8 *param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar2 = param_1;
  func_0x000109898688();
  if (plVar2 != (long *)0x0) {
    FUN_10a053854(param_1,plVar2);
    if (param_1 != (long *)0x0) {
      param_4 = 0x28;
      ___dynamic_cast();
      if (param_1 != (long *)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar2 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)plVar2 == 5) {
    return plVar2;
  }
  plVar3 = (long *)0x5;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0();
  plVar4 = plVar3;
  puVar6 = puVar5;
  (**(code **)(*plVar3 + 0xe8))();
  if ((int)plVar4 - 1U < 2 || (int)plVar4 == 4) {
    if ((!SCARRY4((int)puVar5,param_4)) && (!SCARRY4((int)plVar2,(int)param_5))) {
      uStack_80 = (ulong)puVar5 & 0xffffffff | (long)plVar2 << 0x20;
      uStack_78 = uStack_80 + (param_5 << 0x20) & 0xffffffff00000000 |
                  (ulong)(uint)(param_4 + (int)puVar5);
      FUN_10a1dabac(plVar3,&uStack_80,*(undefined8 *)*param_6,((undefined8 *)*param_6)[1]);
      return plVar3;
    }
    FUN_10a00946c(&UNK_10f645d0f);
  }
  plVar2 = (long *)&UNK_10f645cdc;
  FUN_10a00946c();
  plVar4 = plVar2;
  FUN_10a0051e8();
  if (((ulong)plVar4 & 1) == 0) {
    if ((*(byte *)(plVar2 + 0xf) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f79cc);
      (*pcVar1)();
    }
    FUN_10a054dac(plVar2,*puVar6,FUN_10a1f79cc,6,plVar2[8]);
  }
  return plVar2;
}



/* Entry: 10a1f7888; end: 10a1f78ab;  */

long * FUN_10a1f7888(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                    undefined8 *param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((int)param_1 == 5) {
    return param_1;
  }
  plVar2 = (long *)0x5;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0();
  plVar3 = plVar2;
  puVar5 = puVar4;
  (**(code **)(*plVar2 + 0xe8))();
  if ((int)plVar3 - 1U < 2 || (int)plVar3 == 4) {
    if ((!SCARRY4((int)puVar4,param_4)) && (!SCARRY4((int)param_1,(int)param_5))) {
      uStack_60 = (ulong)puVar4 & 0xffffffff | (long)param_1 << 0x20;
      uStack_58 = uStack_60 + (param_5 << 0x20) & 0xffffffff00000000 |
                  (ulong)(uint)(param_4 + (int)puVar4);
      FUN_10a1dabac(plVar2,&uStack_60,*(undefined8 *)*param_6,((undefined8 *)*param_6)[1]);
      return plVar2;
    }
    FUN_10a00946c(&UNK_10f645d0f);
  }
  plVar3 = (long *)&UNK_10f645cdc;
  FUN_10a00946c();
  plVar2 = plVar3;
  FUN_10a0051e8();
  if (((ulong)plVar2 & 1) == 0) {
    if ((*(byte *)(plVar3 + 0xf) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f79cc);
      (*pcVar1)();
    }
    FUN_10a054dac(plVar3,*puVar5,FUN_10a1f79cc,6,plVar3[8]);
  }
  return plVar3;
}



/* Entry: 10a1f78ac; end: 10a1f7967;  */

long * FUN_10a1f78ac(long *param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                    undefined8 *param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar2 = param_1;
  puVar4 = param_2;
  (**(code **)(*param_1 + 0xe8))();
  if ((int)plVar2 - 1U < 2 || (int)plVar2 == 4) {
    if ((!SCARRY4((int)param_2,param_4)) && (!SCARRY4(param_3,param_5))) {
      uStack_50 = (ulong)param_2 & 0xffffffff | (ulong)param_3 << 0x20;
      uStack_48 = uStack_50 + ((ulong)param_5 << 0x20) & 0xffffffff00000000 |
                  (ulong)(uint)(param_4 + (int)param_2);
      FUN_10a1dabac(param_1,&uStack_50,*(undefined8 *)*param_6,((undefined8 *)*param_6)[1]);
      return param_1;
    }
    FUN_10a00946c(&UNK_10f645d0f);
  }
  plVar2 = (long *)&UNK_10f645cdc;
  FUN_10a00946c();
  plVar3 = plVar2;
  FUN_10a0051e8();
  if (((ulong)plVar3 & 1) == 0) {
    if ((*(byte *)(plVar2 + 0xf) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f79cc);
      (*pcVar1)();
    }
    FUN_10a054dac(plVar2,*puVar4,FUN_10a1f79cc,6,plVar2[8]);
  }
  return plVar2;
}



/* Entry: 10a1f7968; end: 10a1f79cb;  */

ulong FUN_10a1f7968(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f79cc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a1f79cc,6,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a1f79cc; end: 10a1f7a83;  */

void FUN_10a1f79cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1f76e8(param_1,param_2,FUN_10a1f78ac,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1f7a84; end: 10a1f7b3f;  */

void FUN_10a1f7a84(long *param_1,ulong param_2,long param_3,undefined8 param_4,uint param_5,
                  undefined8 *param_6)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar3 = param_1;
  uVar7 = param_2;
  lVar6 = param_3;
  uVar5 = param_4;
  (**(code **)(*param_1 + 0xe8))();
  if ((int)plVar3 - 0x20U < 6) {
    if ((!SCARRY4((int)param_2,(int)param_4)) && (!SCARRY4((int)param_3,param_5))) {
      uStack_50 = param_2 & 0xffffffff | param_3 << 0x20;
      uStack_48 = uStack_50 + ((ulong)param_5 << 0x20) & 0xffffffff00000000 |
                  (ulong)(uint)((int)param_4 + (int)param_2);
      FUN_10a1dabac(param_1,&uStack_50,*(undefined8 *)*param_6,((undefined8 *)*param_6)[1] << 2);
      return;
    }
    FUN_10a00946c(&UNK_10f645d0f);
  }
  plVar3 = (long *)&UNK_10f645cdc;
  FUN_10a00946c();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1f7bf8(extraout_x8,plVar3,FUN_10a1f7a84,0,uVar7,lVar6,uVar5);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_d8 = lVar6;
          lStack_d0 = lVar6;
          lStack_c8 = lVar6;
          lStack_c0 = lVar12;
          func_0x00010988c1b8(&lStack_d8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a1f7b40; end: 10a1f7bf7;  */

void FUN_10a1f7b40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a1f7bf8(param_1,param_2,FUN_10a1f7a84,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a1f7bf8; end: 10a1f7d2f;  */

void FUN_10a1f7bf8(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  lVar8 = param_2;
  FUN_10a1f7820(param_2,param_5);
  FUN_10a1f7d30(param_7);
  lVar4 = param_2;
  func_0x000109898518(param_2,param_6);
  lVar5 = param_2;
  func_0x000109898518(param_2,param_6 + 0x10);
  lVar6 = param_2;
  func_0x000109898518(param_2,param_6 + 0x20);
  lVar7 = param_2;
  func_0x000109898518(param_2,param_6 + 0x30);
  FUN_10a1f7d54(auStack_70,param_2,param_6 + 0x40);
  plVar1 = (long *)(lVar8 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,lVar4,lVar5,lVar6,lVar7,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a1f7d30; end: 10a1f7d53;  */

void FUN_10a1f7d30(undefined8 param_1)

{
  undefined8 *puVar1;
  long *extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((int)param_1 == 5) {
    return;
  }
  FUN_10a052ee0(5,0,param_1);
  FUN_10a1f7dc4(&uStack_50);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ba7a48;
  puVar1[4] = uStack_48;
  puVar1[3] = uStack_50;
  puVar1[6] = uStack_38;
  puVar1[5] = uStack_40;
  *extraout_x8 = (long)(puVar1 + 3);
  extraout_x8[1] = (long)puVar1;
  return;
}



/* Entry: 10a1f7d54; end: 10a1f7dc3;  */

void FUN_10a1f7d54(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a1f7dc4(&uStack_40);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ba7a48;
  puVar1[4] = uStack_38;
  puVar1[3] = uStack_40;
  puVar1[6] = uStack_28;
  puVar1[5] = uStack_30;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a1f7dc4; end: 10a1f7e57;  */

void FUN_10a1f7dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x0001098849a4(aiStack_30,param_2,param_3);
  FUN_10a1f7e58(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}


