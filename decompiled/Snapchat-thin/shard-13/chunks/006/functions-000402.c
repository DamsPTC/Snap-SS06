/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a90fc98; end: 10a90fd5b;  */

void FUN_10a90fc98(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 uStack_81;
  undefined4 *puStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined4 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)param_1[2]) {
    puVar10 = puVar5 + 1;
    *puVar5 = *param_2;
  }
  else {
    lVar9 = (long)puVar5 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      puVar5 = param_2;
      FUN_10a90fd5c();
      pcStack_38 = FUN_10a90fd5c;
      plVar4 = (long *)&DAT_10f62a4d8;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_48 = FUN_10a90fd70;
      puStack_60 = param_2;
      plStack_58 = param_1;
      if ((ulong)puVar5 >> 0x3e == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        __Znwm((long)puVar5 << 2);
        return;
      }
      puStack_50 = (undefined1 *)&puStack_40;
      func_0x000109ffded8();
      uVar3 = puVar5[4];
      if ((int)plVar4[2] != -1 || uVar3 != 0xffffffff) {
        ppuStack_70 = &puStack_50;
        if (uVar3 == 0xffffffff) {
          pcStack_68 = FUN_10a90fda4;
          if (*(uint *)(plVar4 + 2) != 0xffffffff) {
            puStack_80 = param_2;
            plStack_78 = param_1;
            (*(code *)(&PTR_FUN_110bd2808)[*(uint *)(plVar4 + 2)])(&uStack_81,plVar4,puVar5);
          }
          *(undefined4 *)(plVar4 + 2) = 0xffffffff;
          return;
        }
        pcStack_68 = FUN_10a90fda4;
        plStack_78 = plVar4;
        (*(code *)(&PTR_FUN_110c2dce0)[uVar3])(&plStack_78);
      }
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10a90fd70();
    lVar2 = *param_1;
    puVar5 = (undefined4 *)((long)plVar4 + lVar9);
    lVar8 = (long)puVar5 - (param_1[1] - lVar2);
    puVar10 = puVar5 + 1;
    *puVar5 = *param_2;
    _memcpy(lVar8,lVar2);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)plVar4 + uVar7 * 4;
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a90fd5c; end: 10a90fd6f;  */

void FUN_10a90fd5c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uStack_51;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(puVar2 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(puVar2 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bd2808)[*(uint *)(puVar2 + 0x10)])(&uStack_51,puVar2,param_2);
      }
      *(undefined4 *)(puVar2 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110c2dce0)[uVar1])(&stack0xffffffffffffffb8);
  }
  return;
}



/* Entry: 10a90fd70; end: 10a90fda3;  */

void FUN_10a90fd70(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 uStack_41;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bd2808)[*(uint *)(param_1 + 0x10)])(&uStack_41,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110c2dce0)[uVar1])(&stack0xffffffffffffffc8);
  }
  return;
}



/* Entry: 10a90fda4; end: 10a90fdff;  */

void FUN_10a90fda4(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bd2808)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110c2dce0)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10a90fe00; end: 10a90fe47;  */

void FUN_10a90fe00(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[4] == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_10a3f9220(puVar1);
    *puVar1 = *param_3;
    puVar1[4] = 0;
  }
  return;
}



/* Entry: 10a90fe48; end: 10a90fe4f;  */

void FUN_10a90fe48(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)*param_1;
  if (*(int *)(puVar4 + 2) == 1) {
    uVar7 = param_3[1];
    uVar6 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = param_2[1];
    param_2[1] = uVar7;
    *param_2 = uVar6;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
      return;
    }
  }
  else {
    FUN_10a3f9220();
    lVar5 = param_3[1];
    uVar6 = *param_3;
    puVar4[1] = param_3[1];
    *puVar4 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)(puVar4 + 2) = 1;
  }
  return;
}



/* Entry: 10a90fe50; end: 10a90fee3;  */

void FUN_10a90fe50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 2) == 1) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = param_2[1];
    param_2[1] = uVar6;
    *param_2 = uVar5;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
      return;
    }
  }
  else {
    FUN_10a3f9220();
    lVar4 = param_3[1];
    uVar5 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10a90fee4; end: 10a90ff0b;  */

void FUN_10a90fee4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        *puVar1 = 0;
        puVar1[1] = 0;
        param_4[1] = uVar3;
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        puVar1[2] = 0;
        puVar1[3] = 0;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        FUN_10a8ff960();
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a90ff0c; end: 10a91000b;  */

void FUN_10a90ff0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        *puVar1 = 0;
        puVar1[1] = 0;
        param_4[1] = uVar3;
        *param_4 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        puVar1[2] = 0;
        puVar1[3] = 0;
        param_4[3] = uVar3;
        param_4[2] = uVar2;
        uVar2 = puVar1[4];
        param_4[5] = puVar1[5];
        param_4[4] = uVar2;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        FUN_10a8ff960();
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a91000c; end: 10a9100ab;  */

void FUN_10a91000c(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar6 = (ulong)param_2 & 0x3fff;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) * -0x3333333333333333;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    uVar2 = (ushort)param_2 & 0x3fff;
    puVar7 = (undefined1 *)(lVar1 + uVar6 * 0x28);
    uVar3 = *(uint *)(puVar7 + 4) >> 0xe & 0x7fff;
    iVar8 = 1;
    if (uVar3 != 0x7fff) {
      iVar8 = uVar3 + 1;
    }
    *(uint *)(puVar7 + 4) = param_2 & 0xe0003fff | iVar8 << 0xe;
    *(undefined2 *)(puVar7 + 2) = 0x3fff;
    *puVar7 = 2;
    if ((short)param_1[3] == 0x3fff) {
      *(ushort *)(param_1 + 3) = uVar2;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)param_1 + 0x1a);
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_10a9100a8;
      *(ushort *)(lVar1 + uVar6 * 0x28 + 2) = uVar2;
    }
    *(ushort *)((long)param_1 + 0x1a) = uVar2;
    return;
  }
LAB_10a9100a8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9100ac);
  (*pcVar4)();
}



/* Entry: 10a9100ac; end: 10a910247;  */

long * FUN_10a9100ac(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = (long *)*param_1;
  if ((ulong)(param_1[2] - (long)plVar8 >> 4) < param_4) {
    plVar8 = param_1;
    plVar5 = param_2;
    FUN_10a438e74();
    if (param_4 >> 0x3c != 0) {
      FUN_10a438bb0();
      lVar9 = plVar5[1];
      lVar7 = *plVar5;
      if (plVar5[1] != 0) {
        plVar5 = (long *)(plVar5[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = (long *)plVar8[1];
      plVar8[1] = lVar9;
      *plVar8 = lVar7;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return plVar8;
    }
    uVar6 = param_1[2] - *param_1 >> 3;
    if (uVar6 <= param_4) {
      uVar6 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10a5e7214(param_1,uVar6);
    plVar5 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar7 = param_2[1];
      lVar9 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = lVar9;
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = plVar5 + 2;
    }
  }
  else {
    plVar5 = (long *)param_1[1];
    lVar7 = (long)plVar5 - (long)plVar8;
    if (param_4 <= (ulong)(lVar7 >> 4)) {
      if (param_2 != param_3) {
        do {
          FUN_10a910248(plVar8,param_2);
          param_2 = param_2 + 2;
          plVar8 = plVar8 + 2;
        } while (param_2 != param_3);
        plVar5 = (long *)param_1[1];
      }
      while (plVar5 != plVar8) {
        plVar5 = plVar5 + -2;
        FUN_10a3f90e8();
      }
      param_1[1] = (long)plVar8;
      return plVar5;
    }
    plVar1 = (long *)((long)param_2 + lVar7);
    plVar4 = plVar5;
    if (plVar5 != plVar8) {
      do {
        FUN_10a910248(plVar8,param_2);
        param_2 = param_2 + 2;
        plVar8 = plVar8 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      plVar5 = (long *)param_1[1];
      plVar4 = plVar5;
    }
    for (; plVar1 != param_3; plVar1 = plVar1 + 2) {
      lVar7 = plVar1[1];
      lVar9 = *plVar1;
      plVar5[1] = plVar1[1];
      *plVar5 = lVar9;
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = plVar5 + 2;
    }
  }
  param_1[1] = (long)plVar5;
  return plVar4;
}



/* Entry: 10a910248; end: 10a910343;  */

undefined8 * FUN_10a910248(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a910344; end: 10a910357;  */

/* WARNING: Removing unreachable block (ram,0x00010a9103e0) */

void FUN_10a910344(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uStack_64;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar3 >> 0x3e == 0) {
    __Znwm((long)plVar3 << 2);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar3;
  lVar1 = plVar3[1];
  uStack_64 = param_2;
  while( true ) {
    if (lVar5 == lVar1) {
      return;
    }
    uVar4 = *(ulong *)(lVar5 + 8);
    FUN_10a910414(uVar4,*(undefined8 *)(lVar5 + 0x10),&uStack_64);
    if (*(ulong *)(lVar5 + 0x10) < uVar4) break;
    if (uVar4 != *(ulong *)(lVar5 + 0x10)) {
      *(ulong *)(lVar5 + 0x10) = uVar4;
    }
    lVar5 = lVar5 + 0x28;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a910414);
  (*pcVar2)();
}



/* Entry: 10a910358; end: 10a91038b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9103e0) */

void FUN_10a910358(long *param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uStack_54;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    __Znwm((long)param_1 << 2);
    return;
  }
  uStack_54 = param_2;
  func_0x000109ffded8();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  while( true ) {
    if (lVar4 == lVar1) {
      return;
    }
    uVar3 = *(ulong *)(lVar4 + 8);
    FUN_10a910414(uVar3,*(undefined8 *)(lVar4 + 0x10),&uStack_54);
    if (*(ulong *)(lVar4 + 0x10) < uVar3) break;
    if (uVar3 != *(ulong *)(lVar4 + 0x10)) {
      *(ulong *)(lVar4 + 0x10) = uVar3;
    }
    lVar4 = lVar4 + 0x28;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a910414);
  (*pcVar2)();
}



/* Entry: 10a91038c; end: 10a910413;  */

/* WARNING: Removing unreachable block (ram,0x00010a9103e0) */

void FUN_10a91038c(long *param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uStack_34;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  uStack_34 = param_2;
  while( true ) {
    if (lVar4 == lVar1) {
      return;
    }
    uVar3 = *(ulong *)(lVar4 + 8);
    FUN_10a910414(uVar3,*(undefined8 *)(lVar4 + 0x10),&uStack_34);
    if (*(ulong *)(lVar4 + 0x10) < uVar3) break;
    if (uVar3 != *(ulong *)(lVar4 + 0x10)) {
      *(ulong *)(lVar4 + 0x10) = uVar3;
    }
    lVar4 = lVar4 + 0x28;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a910414);
  (*pcVar2)();
}



/* Entry: 10a910414; end: 10a91047b;  */

int * FUN_10a910414(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_2;
  if (param_1 != param_2) {
    do {
      piVar1 = param_1;
      if (*param_3 == *param_1) break;
      param_1 = param_1 + 1;
      piVar1 = param_2;
    } while (param_1 != param_2);
    piVar2 = piVar1;
    if (param_2 != piVar1) {
      while (piVar2 = piVar2 + 1, piVar2 != param_2) {
        if (*param_3 != *piVar2) {
          *piVar1 = *piVar2;
          piVar1 = piVar1 + 1;
        }
      }
    }
  }
  return piVar1;
}



/* Entry: 10a91047c; end: 10a91048f;  */

void FUN_10a91047c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -8;
        FUN_10a91a918(lVar3,0);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a910490; end: 10a910503;  */

void FUN_10a910490(long *param_1)

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
        lVar2 = lVar2 + -8;
        FUN_10a91a918(lVar2,0);
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



/* Entry: 10a910504; end: 10a910517;  */

void FUN_10a910504(void)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110c2cc50;
  puVar1[2] = &PTR_FUN_110c2ccf0;
  puVar1[7] = &PTR_FUN_110c2cd48;
  func_0x00010a084504(puVar1 + 0x22);
  FUN_10a917314(puVar1 + 0x1f,puVar1[0x20]);
  puStack_38 = puVar1 + 0x1c;
  FUN_10a0cffec(&puStack_38);
  func_0x00010aa71c88(puVar1);
  return;
}



/* Entry: 10a910518; end: 10a9105bb;  */

void FUN_10a910518(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c2cc50;
  param_1[2] = &PTR_FUN_110c2ccf0;
  param_1[7] = &PTR_FUN_110c2cd48;
  func_0x00010a084504(param_1 + 0x22);
  FUN_10a917314(param_1 + 0x1f,param_1[0x20]);
  puStack_28 = param_1 + 0x1c;
  FUN_10a0cffec(&puStack_28);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a9105bc; end: 10a9106b3;  */

void FUN_10a9105bc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = param_1[2];
  uVar1 = uVar2 + param_2;
  if (param_1[3] < (long)uVar1) {
    lVar4 = uVar1 * 4;
    if (uVar1 >> 0x3e != 0) {
      lVar4 = -1;
    }
    lVar3 = lVar4;
    __Znam();
    __Znam();
    if ((long)uVar1 <= (long)uVar2) {
      uVar2 = uVar1;
    }
    lVar5 = *param_1;
    if ((long)uVar2 < 1) {
      lVar6 = param_1[1];
    }
    else {
      _memcpy(lVar3,lVar5,uVar2 << 2);
      lVar6 = param_1[1];
      _memcpy(lVar4,lVar6,uVar2 << 2);
    }
    *param_1 = lVar3;
    param_1[1] = lVar4;
    param_1[3] = uVar1;
    if (lVar6 != 0) {
      __ZdaPv(lVar6);
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdaPv_110352250)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a9106b4; end: 10a9107e3;  */

long * FUN_10a9106b4(double param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  int *piVar18;
  int *piVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined4 *puVar25;
  int *piVar26;
  undefined4 *puVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar34 [16];
  
  plVar6 = param_2;
  if (param_2[3] < param_3) {
    uVar12 = param_3 + (long)(param_1 * (double)param_3);
    if (0x7ffffffe < (long)uVar12) {
      uVar12 = 0x7fffffff;
    }
    if ((long)uVar12 < param_3) {
      lVar7 = 8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      puVar14 = PTR___ZTISt9bad_alloc_110346a68;
      puVar16 = PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      iVar31 = (int)puVar14;
      __ZdaPv();
      __Unwind_Resume();
      piVar19 = *(int **)(lVar7 + 0x18);
      piVar26 = *(int **)(lVar7 + 0x20);
      iVar30 = piVar19[(long)puVar16];
      iVar29 = piVar26[(long)puVar16];
      if ((piVar19 + (long)puVar16)[1] - iVar30 <= iVar29) {
        if (iVar29 < 3) {
          iVar29 = 2;
        }
        lVar28 = *(long *)(lVar7 + 8);
        piVar8 = (int *)(lVar28 * 4 + 4);
        _malloc();
        if (piVar8 == (int *)0x0) {
          puVar9 = (uint *)0x8;
          ___cxa_allocate_exception();
          __ZNSt9bad_allocC1Ev();
          puVar10 = PTR___ZTISt9bad_alloc_110346a68;
          puVar16 = PTR___ZNSt9bad_allocD1Ev_110346998;
          ___cxa_throw();
          puVar14 = (undefined *)((ulong)-((uint)puVar10 >> 2) & 3);
          if ((long)puVar16 <= (long)puVar14) {
            puVar14 = puVar16;
          }
          puVar17 = puVar16;
          if (((ulong)puVar10 & 3) == 0) {
            puVar17 = puVar14;
          }
          uVar13 = (long)puVar16 - (long)puVar17;
          uVar12 = uVar13 + 3;
          uVar20 = uVar13 + 7;
          if ((long)puVar17 <= (long)puVar16) {
            uVar12 = uVar13;
            uVar20 = uVar13;
          }
          if (uVar13 + 3 < 7) {
            puVar11 = (undefined4 *)(ulong)*puVar9;
            if (1 < (long)puVar16) {
              puVar16 = puVar16 + -1;
              do {
                puVar9 = puVar9 + 1;
                puVar11 = (undefined4 *)(ulong)(*puVar9 + (int)puVar11);
                puVar16 = puVar16 + -1;
              } while (puVar16 != (undefined *)0x0);
            }
          }
          else {
            puVar21 = puVar9 + (long)puVar17;
            iVar31 = (int)*(undefined8 *)(puVar21 + 2);
            iVar32 = (int)((ulong)*(undefined8 *)(puVar21 + 2) >> 0x20);
            iVar29 = (int)*(undefined8 *)puVar21;
            iVar30 = (int)((ulong)*(undefined8 *)puVar21 >> 0x20);
            if (7 < (long)uVar13) {
              uVar33 = puVar21[4];
              uVar35 = puVar21[5];
              uVar36 = puVar21[6];
              uVar37 = puVar21[7];
              if (0xf < uVar13) {
                puVar14 = puVar17 + 8;
                puVar21 = puVar21 + 0xc;
                do {
                  iVar29 = (int)*(undefined8 *)(puVar21 + -4) + iVar29;
                  iVar30 = (int)((ulong)*(undefined8 *)(puVar21 + -4) >> 0x20) + iVar30;
                  iVar31 = (int)*(undefined8 *)(puVar21 + -2) + iVar31;
                  iVar32 = (int)((ulong)*(undefined8 *)(puVar21 + -2) >> 0x20) + iVar32;
                  uVar33 = (int)*(undefined8 *)puVar21 + uVar33;
                  uVar35 = (int)((ulong)*(undefined8 *)puVar21 >> 0x20) + uVar35;
                  uVar36 = (int)*(undefined8 *)(puVar21 + 2) + uVar36;
                  uVar37 = (int)((ulong)*(undefined8 *)(puVar21 + 2) >> 0x20) + uVar37;
                  puVar14 = puVar14 + 8;
                  puVar21 = puVar21 + 8;
                } while ((long)puVar14 < (long)(puVar17 + (uVar20 & 0xfffffffffffffff8)));
              }
              iVar29 = iVar29 + uVar33;
              iVar30 = iVar30 + uVar35;
              iVar31 = iVar31 + uVar36;
              iVar32 = iVar32 + uVar37;
              if ((long)(uVar20 & 0xfffffffffffffff8) < (long)(uVar12 & 0xfffffffffffffffc)) {
                puVar21 = puVar9 + (long)(puVar17 + (uVar20 & 0xfffffffffffffff8));
                iVar29 = *puVar21 + iVar29;
                iVar30 = puVar21[1] + iVar30;
                iVar31 = puVar21[2] + iVar31;
                iVar32 = puVar21[3] + iVar32;
              }
            }
            puVar14 = puVar17 + (uVar12 & 0xfffffffffffffffc);
            auVar34._4_4_ = iVar30;
            auVar34._0_4_ = iVar29;
            auVar34._8_4_ = iVar31;
            auVar34._12_4_ = iVar32;
            auVar4._4_4_ = iVar30;
            auVar4._0_4_ = iVar29;
            auVar4._8_4_ = iVar31;
            auVar4._12_4_ = iVar32;
            auVar34 = NEON_ext(auVar34,auVar4,8,1);
            puVar11 = (undefined4 *)(ulong)(uint)(iVar29 + auVar34._0_4_ + iVar30 + auVar34._4_4_);
            puVar21 = puVar9;
            if (0 < (long)puVar17) {
              do {
                puVar11 = (undefined4 *)(ulong)(*puVar21 + (int)puVar11);
                puVar17 = puVar17 + -1;
                puVar21 = puVar21 + 1;
              } while (puVar17 != (undefined *)0x0);
            }
            for (; (long)puVar14 < (long)puVar16; puVar14 = puVar14 + 1) {
              puVar11 = (undefined4 *)(ulong)(puVar9[(long)puVar14] + (int)puVar11);
            }
          }
          return (long *)puVar11;
        }
        if (lVar28 < 1) {
          iVar30 = 0;
        }
        else {
          iVar30 = 0;
          lVar15 = (long)(int)puVar16;
          iVar32 = *piVar19;
          piVar18 = piVar8;
          lVar23 = lVar28;
          do {
            piVar19 = piVar19 + 1;
            *piVar18 = iVar30;
            iVar2 = iVar32 + *piVar26;
            iVar32 = *piVar19;
            iVar2 = iVar32 - iVar2;
            iVar3 = iVar29;
            if (lVar15 != 0) {
              iVar3 = 0;
            }
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
            iVar30 = *piVar26 + iVar30 + iVar3;
            lVar15 = lVar15 + -1;
            lVar23 = lVar23 + -1;
            piVar18 = piVar18 + 1;
            piVar26 = piVar26 + 1;
          } while (lVar23 != 0);
        }
        piVar8[lVar28] = iVar30;
        FUN_10a9106b4(0,lVar7 + 0x28,(long)iVar30);
        lVar28 = *(long *)(lVar7 + 0x18);
        uVar12 = *(ulong *)(lVar7 + 8);
        if (0 < (long)*(ulong *)(lVar7 + 8)) {
          do {
            uVar13 = uVar12 - 1;
            iVar29 = piVar8[uVar13];
            uVar33 = *(uint *)(lVar28 + uVar13 * 4);
            uVar20 = (ulong)uVar33;
            if (((int)uVar33 < iVar29) &&
               (iVar30 = *(int *)(*(long *)(lVar7 + 0x20) + uVar13 * 4),
               uVar24 = (ulong)(iVar30 - 1), 0 < iVar30)) {
              lVar22 = uVar24 + 1;
              lVar23 = *(long *)(lVar7 + 0x28) + uVar24 * 4;
              lVar15 = *(long *)(lVar7 + 0x30) + uVar24 * 4;
              do {
                *(undefined4 *)(lVar15 + (long)iVar29 * 4) =
                     *(undefined4 *)(lVar15 + (long)(int)uVar20 * 4);
                uVar20 = (ulong)*(int *)(lVar28 + uVar13 * 4);
                *(undefined4 *)(lVar23 + (long)iVar29 * 4) = *(undefined4 *)(lVar23 + uVar20 * 4);
                lVar23 = lVar23 + -4;
                lVar15 = lVar15 + -4;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            bVar1 = 1 < uVar12;
            uVar12 = uVar13;
          } while (bVar1);
        }
        *(int **)(lVar7 + 0x18) = piVar8;
        _free();
        piVar26 = *(int **)(lVar7 + 0x20);
        iVar30 = *(int *)(*(long *)(lVar7 + 0x18) + (long)puVar16 * 4);
        iVar29 = piVar26[(long)puVar16];
      }
      lVar28 = (long)iVar30 + (long)iVar29;
      lVar23 = *(long *)(lVar7 + 0x30);
      if (0 < iVar29) {
        lVar15 = lVar28;
        piVar19 = (int *)(lVar23 + lVar28 * 4);
        do {
          iVar29 = piVar19[-1];
          lVar28 = lVar15;
          if (iVar29 <= iVar31) break;
          lVar28 = lVar15 + -1;
          *piVar19 = iVar29;
          puVar11 = (undefined4 *)(*(long *)(lVar7 + 0x28) + lVar15 * 4);
          *puVar11 = puVar11[-1];
          lVar15 = lVar28;
          piVar19 = piVar19 + -1;
        } while (iVar30 < lVar28);
        iVar29 = piVar26[(long)puVar16];
      }
      piVar26[(long)puVar16] = iVar29 + 1;
      *(int *)(lVar23 + lVar28 * 4) = iVar31;
      puVar11 = (undefined4 *)(*(long *)(lVar7 + 0x28) + lVar28 * 4);
      *puVar11 = 0;
      return (long *)puVar11;
    }
    puVar11 = (undefined4 *)(uVar12 << 2);
    if (uVar12 >> 0x3e != 0) {
      puVar11 = (undefined4 *)0xffffffffffffffff;
    }
    puVar5 = puVar11;
    __Znam();
    __Znam();
    uVar13 = param_2[2];
    if ((long)uVar12 <= param_2[2]) {
      uVar13 = uVar12;
    }
    puVar25 = (undefined4 *)*param_2;
    plVar6 = (long *)puVar11;
    if ((long)uVar13 < 1) {
      puVar27 = (undefined4 *)param_2[1];
    }
    else {
      _memcpy(puVar5,puVar25,uVar13 << 2);
      puVar27 = (undefined4 *)param_2[1];
      _memcpy(puVar11,puVar27,uVar13 << 2);
    }
    *param_2 = (long)puVar5;
    param_2[1] = (long)puVar11;
    param_2[3] = uVar12;
    if (puVar27 != (undefined4 *)0x0) {
      __ZdaPv(puVar27);
      plVar6 = (long *)puVar27;
    }
    if (puVar25 != (undefined4 *)0x0) {
      __ZdaPv(puVar25);
      plVar6 = (long *)puVar25;
    }
  }
  param_2[2] = param_3;
  return plVar6;
}



/* Entry: 10a9107e4; end: 10a9109f3;  */

undefined4 * FUN_10a9107e4(long param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  uint *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  int *piVar14;
  int *piVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar28 [16];
  
  piVar15 = *(int **)(param_1 + 0x18);
  piVar21 = *(int **)(param_1 + 0x20);
  iVar24 = piVar15[param_3];
  iVar23 = piVar21[param_3];
  if ((piVar15 + param_3)[1] - iVar24 <= iVar23) {
    if (iVar23 < 3) {
      iVar23 = 2;
    }
    lVar22 = *(long *)(param_1 + 8);
    piVar4 = (int *)(lVar22 * 4 + 4);
    _malloc();
    if (piVar4 == (int *)0x0) {
      puVar5 = (uint *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      puVar6 = PTR___ZTISt9bad_alloc_110346a68;
      puVar12 = PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      puVar9 = (undefined *)((ulong)-((uint)puVar6 >> 2) & 3);
      if ((long)puVar12 <= (long)puVar9) {
        puVar9 = puVar12;
      }
      puVar13 = puVar12;
      if (((ulong)puVar6 & 3) == 0) {
        puVar13 = puVar9;
      }
      uVar8 = (long)puVar12 - (long)puVar13;
      uVar7 = uVar8 + 3;
      uVar16 = uVar8 + 7;
      if ((long)puVar13 <= (long)puVar12) {
        uVar7 = uVar8;
        uVar16 = uVar8;
      }
      if (uVar8 + 3 < 7) {
        puVar10 = (undefined4 *)(ulong)*puVar5;
        if (1 < (long)puVar12) {
          puVar12 = puVar12 + -1;
          do {
            puVar5 = puVar5 + 1;
            puVar10 = (undefined4 *)(ulong)(*puVar5 + (int)puVar10);
            puVar12 = puVar12 + -1;
          } while (puVar12 != (undefined *)0x0);
        }
      }
      else {
        puVar17 = puVar5 + (long)puVar13;
        iVar25 = (int)*(undefined8 *)(puVar17 + 2);
        iVar26 = (int)((ulong)*(undefined8 *)(puVar17 + 2) >> 0x20);
        iVar23 = (int)*(undefined8 *)puVar17;
        iVar24 = (int)((ulong)*(undefined8 *)puVar17 >> 0x20);
        if (7 < (long)uVar8) {
          uVar27 = puVar17[4];
          uVar29 = puVar17[5];
          uVar30 = puVar17[6];
          uVar31 = puVar17[7];
          if (0xf < uVar8) {
            puVar9 = puVar13 + 8;
            puVar17 = puVar17 + 0xc;
            do {
              iVar23 = (int)*(undefined8 *)(puVar17 + -4) + iVar23;
              iVar24 = (int)((ulong)*(undefined8 *)(puVar17 + -4) >> 0x20) + iVar24;
              iVar25 = (int)*(undefined8 *)(puVar17 + -2) + iVar25;
              iVar26 = (int)((ulong)*(undefined8 *)(puVar17 + -2) >> 0x20) + iVar26;
              uVar27 = (int)*(undefined8 *)puVar17 + uVar27;
              uVar29 = (int)((ulong)*(undefined8 *)puVar17 >> 0x20) + uVar29;
              uVar30 = (int)*(undefined8 *)(puVar17 + 2) + uVar30;
              uVar31 = (int)((ulong)*(undefined8 *)(puVar17 + 2) >> 0x20) + uVar31;
              puVar9 = puVar9 + 8;
              puVar17 = puVar17 + 8;
            } while ((long)puVar9 < (long)(puVar13 + (uVar16 & 0xfffffffffffffff8)));
          }
          iVar23 = iVar23 + uVar27;
          iVar24 = iVar24 + uVar29;
          iVar25 = iVar25 + uVar30;
          iVar26 = iVar26 + uVar31;
          if ((long)(uVar16 & 0xfffffffffffffff8) < (long)(uVar7 & 0xfffffffffffffffc)) {
            puVar17 = puVar5 + (long)(puVar13 + (uVar16 & 0xfffffffffffffff8));
            iVar23 = *puVar17 + iVar23;
            iVar24 = puVar17[1] + iVar24;
            iVar25 = puVar17[2] + iVar25;
            iVar26 = puVar17[3] + iVar26;
          }
        }
        puVar9 = puVar13 + (uVar7 & 0xfffffffffffffffc);
        auVar28._4_4_ = iVar24;
        auVar28._0_4_ = iVar23;
        auVar28._8_4_ = iVar25;
        auVar28._12_4_ = iVar26;
        auVar3._4_4_ = iVar24;
        auVar3._0_4_ = iVar23;
        auVar3._8_4_ = iVar25;
        auVar3._12_4_ = iVar26;
        auVar28 = NEON_ext(auVar28,auVar3,8,1);
        puVar10 = (undefined4 *)(ulong)(uint)(iVar23 + auVar28._0_4_ + iVar24 + auVar28._4_4_);
        puVar17 = puVar5;
        if (0 < (long)puVar13) {
          do {
            puVar10 = (undefined4 *)(ulong)(*puVar17 + (int)puVar10);
            puVar13 = puVar13 + -1;
            puVar17 = puVar17 + 1;
          } while (puVar13 != (undefined *)0x0);
        }
        for (; (long)puVar9 < (long)puVar12; puVar9 = puVar9 + 1) {
          puVar10 = (undefined4 *)(ulong)(puVar5[(long)puVar9] + (int)puVar10);
        }
      }
      return puVar10;
    }
    if (lVar22 < 1) {
      iVar24 = 0;
    }
    else {
      iVar24 = 0;
      lVar11 = (long)(int)param_3;
      iVar25 = *piVar15;
      piVar14 = piVar4;
      lVar19 = lVar22;
      do {
        piVar15 = piVar15 + 1;
        *piVar14 = iVar24;
        iVar26 = iVar25 + *piVar21;
        iVar25 = *piVar15;
        iVar26 = iVar25 - iVar26;
        iVar2 = iVar23;
        if (lVar11 != 0) {
          iVar2 = 0;
        }
        if (iVar2 <= iVar26) {
          iVar2 = iVar26;
        }
        iVar24 = *piVar21 + iVar24 + iVar2;
        lVar11 = lVar11 + -1;
        lVar19 = lVar19 + -1;
        piVar14 = piVar14 + 1;
        piVar21 = piVar21 + 1;
      } while (lVar19 != 0);
    }
    piVar4[lVar22] = iVar24;
    FUN_10a9106b4(0,param_1 + 0x28,(long)iVar24);
    lVar22 = *(long *)(param_1 + 0x18);
    uVar7 = *(ulong *)(param_1 + 8);
    if (0 < (long)*(ulong *)(param_1 + 8)) {
      do {
        uVar8 = uVar7 - 1;
        iVar23 = piVar4[uVar8];
        uVar27 = *(uint *)(lVar22 + uVar8 * 4);
        uVar16 = (ulong)uVar27;
        if (((int)uVar27 < iVar23) &&
           (iVar24 = *(int *)(*(long *)(param_1 + 0x20) + uVar8 * 4), uVar20 = (ulong)(iVar24 - 1),
           0 < iVar24)) {
          lVar18 = uVar20 + 1;
          lVar19 = *(long *)(param_1 + 0x28) + uVar20 * 4;
          lVar11 = *(long *)(param_1 + 0x30) + uVar20 * 4;
          do {
            *(undefined4 *)(lVar11 + (long)iVar23 * 4) =
                 *(undefined4 *)(lVar11 + (long)(int)uVar16 * 4);
            uVar16 = (ulong)*(int *)(lVar22 + uVar8 * 4);
            *(undefined4 *)(lVar19 + (long)iVar23 * 4) = *(undefined4 *)(lVar19 + uVar16 * 4);
            lVar19 = lVar19 + -4;
            lVar11 = lVar11 + -4;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        bVar1 = 1 < uVar7;
        uVar7 = uVar8;
      } while (bVar1);
    }
    *(int **)(param_1 + 0x18) = piVar4;
    _free();
    piVar21 = *(int **)(param_1 + 0x20);
    iVar24 = *(int *)(*(long *)(param_1 + 0x18) + param_3 * 4);
    iVar23 = piVar21[param_3];
  }
  lVar22 = (long)iVar24 + (long)iVar23;
  lVar19 = *(long *)(param_1 + 0x30);
  if (0 < iVar23) {
    lVar11 = lVar22;
    piVar15 = (int *)(lVar19 + lVar22 * 4);
    do {
      iVar23 = piVar15[-1];
      lVar22 = lVar11;
      if (iVar23 <= param_2) break;
      lVar22 = lVar11 + -1;
      *piVar15 = iVar23;
      puVar10 = (undefined4 *)(*(long *)(param_1 + 0x28) + lVar11 * 4);
      *puVar10 = puVar10[-1];
      lVar11 = lVar22;
      piVar15 = piVar15 + -1;
    } while (iVar24 < lVar22);
    iVar23 = piVar21[param_3];
  }
  piVar21[param_3] = iVar23 + 1;
  *(int *)(lVar19 + lVar22 * 4) = param_2;
  puVar10 = (undefined4 *)(*(long *)(param_1 + 0x28) + lVar22 * 4);
  *puVar10 = 0;
  return puVar10;
}



/* Entry: 10a9109f4; end: 10a910b03;  */

int FUN_10a9109f4(int *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar14 [16];
  
  uVar4 = (ulong)-(param_2 >> 2) & 3;
  if ((long)param_3 <= (long)uVar4) {
    uVar4 = param_3;
  }
  uVar6 = param_3;
  if ((param_2 & 3) == 0) {
    uVar6 = uVar4;
  }
  uVar1 = param_3 - uVar6;
  uVar4 = uVar1 + 3;
  uVar3 = uVar1 + 7;
  if ((long)uVar6 <= (long)param_3) {
    uVar4 = uVar1;
    uVar3 = uVar1;
  }
  if (uVar1 + 3 < 7) {
    iVar9 = *param_1;
    if (1 < (long)param_3) {
      lVar5 = param_3 - 1;
      do {
        param_1 = param_1 + 1;
        iVar9 = *param_1 + iVar9;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    piVar7 = param_1 + uVar6;
    iVar11 = (int)*(undefined8 *)(piVar7 + 2);
    iVar12 = (int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20);
    iVar9 = (int)*(undefined8 *)piVar7;
    iVar10 = (int)((ulong)*(undefined8 *)piVar7 >> 0x20);
    if (7 < (long)uVar1) {
      lVar5 = (uVar3 & 0xfffffffffffffff8) + uVar6;
      iVar13 = piVar7[4];
      iVar15 = piVar7[5];
      iVar16 = piVar7[6];
      iVar17 = piVar7[7];
      if (0xf < uVar1) {
        lVar8 = uVar6 + 8;
        piVar7 = piVar7 + 0xc;
        do {
          iVar9 = (int)*(undefined8 *)(piVar7 + -4) + iVar9;
          iVar10 = (int)((ulong)*(undefined8 *)(piVar7 + -4) >> 0x20) + iVar10;
          iVar11 = (int)*(undefined8 *)(piVar7 + -2) + iVar11;
          iVar12 = (int)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20) + iVar12;
          iVar13 = (int)*(undefined8 *)piVar7 + iVar13;
          iVar15 = (int)((ulong)*(undefined8 *)piVar7 >> 0x20) + iVar15;
          iVar16 = (int)*(undefined8 *)(piVar7 + 2) + iVar16;
          iVar17 = (int)((ulong)*(undefined8 *)(piVar7 + 2) >> 0x20) + iVar17;
          lVar8 = lVar8 + 8;
          piVar7 = piVar7 + 8;
        } while (lVar8 < lVar5);
      }
      iVar9 = iVar9 + iVar13;
      iVar10 = iVar10 + iVar15;
      iVar11 = iVar11 + iVar16;
      iVar12 = iVar12 + iVar17;
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar4 & 0xfffffffffffffffc)) {
        piVar7 = param_1 + lVar5;
        iVar9 = *piVar7 + iVar9;
        iVar10 = piVar7[1] + iVar10;
        iVar11 = piVar7[2] + iVar11;
        iVar12 = piVar7[3] + iVar12;
      }
    }
    lVar5 = (uVar4 & 0xfffffffffffffffc) + uVar6;
    auVar14._4_4_ = iVar10;
    auVar14._0_4_ = iVar9;
    auVar14._8_4_ = iVar11;
    auVar14._12_4_ = iVar12;
    auVar2._4_4_ = iVar10;
    auVar2._0_4_ = iVar9;
    auVar2._8_4_ = iVar11;
    auVar2._12_4_ = iVar12;
    auVar14 = NEON_ext(auVar14,auVar2,8,1);
    iVar9 = iVar9 + auVar14._0_4_ + iVar10 + auVar14._4_4_;
    piVar7 = param_1;
    if (0 < (long)uVar6) {
      do {
        iVar9 = *piVar7 + iVar9;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar6 != 0);
    }
    for (; lVar5 < (long)param_3; lVar5 = lVar5 + 1) {
      iVar9 = param_1[lVar5] + iVar9;
    }
  }
  return iVar9;
}



/* Entry: 10a910b04; end: 10a910d3f;  */

void FUN_10a910b04(undefined1 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  undefined1 *unaff_x20;
  undefined *puVar27;
  undefined1 *unaff_x22;
  ulong uVar28;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar6 = auStack_50;
  puVar7 = auStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *(ulong *)(param_2 + 0x10);
  puVar27 = (undefined *)(long)(int)uVar28;
  puVar11 = puVar27;
  FUN_10a8f4b10(param_1 + 0x10,puVar27);
  func_0x0001093c3f50(param_1 + 0x68,puVar27);
  func_0x0001093c3f50(param_1 + 0x78,puVar27);
  if ((ulong)puVar27 >> 0x3e == 0) {
    unaff_x20 = (undefined1 *)((long)(uVar28 << 0x20) >> 0x1e);
    if (unaff_x20 < (undefined1 *)0x20001) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar6 = auStack_50 + -((ulong)(unaff_x20 + 0x1e) & 0xfffffffffffffff0);
      unaff_x22 = auStack_50 + -((ulong)(unaff_x20 + 0x1e) & 0xfffffffffffffff0);
    }
    else {
      unaff_x22 = unaff_x20;
      _malloc();
      if (unaff_x22 == (undefined1 *)0x0) goto LAB_10a910d00;
    }
    if ((int)uVar28 < 1) {
      piVar17 = *(int **)(param_1 + 0x28);
      *piVar17 = 0;
    }
    else {
      puVar16 = (undefined *)0x0;
      lVar19 = *(long *)(param_1 + 0x68);
      piVar12 = *(int **)(param_1 + 0x78);
      lVar21 = *(long *)(param_2 + 0x30);
      puVar14 = (undefined *)(uVar28 & 0x7fffffff);
      lVar2 = *(long *)(param_2 + 0x18);
      lVar3 = *(long *)(param_2 + 0x20);
      do {
        *(undefined4 *)(lVar19 + (long)puVar16 * 4) = 0xffffffff;
        uVar15 = (uint)puVar16;
        *(uint *)(unaff_x22 + (long)puVar16 * 4) = uVar15;
        piVar12[(long)puVar16] = 0;
        piVar17 = (int *)(lVar2 + (long)puVar16 * 4);
        lVar25 = (long)*piVar17;
        if (lVar3 == 0) {
          lVar24 = (long)piVar17[1];
        }
        else {
          lVar24 = *(int *)(lVar3 + (long)puVar16 * 4) + lVar25;
        }
        if (lVar25 < lVar24) {
          do {
            lVar8 = (long)*(int *)(lVar21 + lVar25 * 4);
            if (lVar8 < (long)puVar16) {
              while( true ) {
                puVar11 = (undefined *)(ulong)*(uint *)(unaff_x22 + lVar8 * 4);
                if (puVar16 == puVar11) break;
                if (*(int *)(lVar19 + lVar8 * 4) == -1) {
                  *(uint *)(lVar19 + lVar8 * 4) = uVar15;
                }
                piVar12[lVar8] = piVar12[lVar8] + 1;
                *(uint *)(unaff_x22 + lVar8 * 4) = uVar15;
                lVar8 = (long)*(int *)(lVar19 + lVar8 * 4);
              }
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 != lVar24);
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar14);
      iVar18 = 0;
      piVar17 = *(int **)(param_1 + 0x28);
      *piVar17 = 0;
      piVar22 = piVar17;
      do {
        piVar22 = piVar22 + 1;
        iVar18 = *piVar12 + iVar18;
        *piVar22 = iVar18;
        puVar14 = puVar14 + -1;
        piVar12 = piVar12 + 1;
      } while (puVar14 != (undefined *)0x0);
    }
    puVar16 = (undefined *)(long)piVar17[(long)puVar27];
    puVar9 = param_1 + 0x38;
    FUN_10a9106b4(0);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0x100;
    if ((undefined1 *)0x20000 < unaff_x20) {
      puVar9 = unaff_x22;
      _free();
    }
    puVar7 = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
LAB_10a910d00:
    puVar9 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar16 = PTR___ZTISt9bad_alloc_110346a68;
    puVar11 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((undefined1 *)0x20000 < unaff_x20) {
    _free(unaff_x22);
  }
  puVar6 = puVar9;
  __Unwind_Resume();
  *(ulong *)(puVar7 + -0x40) = uVar28;
  *(long *)(puVar7 + -0x38) = param_2;
  *(undefined1 **)(puVar7 + -0x30) = unaff_x22;
  *(undefined **)(puVar7 + -0x28) = puVar27;
  *(undefined1 **)(puVar7 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar7 + -0x18) = puVar9;
  *(undefined1 **)(puVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar7 + -8) = FUN_10a910d40;
  uVar28 = *(ulong *)(puVar6 + 0x10);
  if (0 < (long)uVar28) {
    if (uVar28 >> 0x3e == 0) {
      piVar17 = (int *)0x1;
      _calloc(1,uVar28 << 2);
      if (piVar17 != (int *)0x0) goto LAB_10a910db0;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  piVar17 = (int *)0x0;
LAB_10a910db0:
  FUN_10a8f4b10(puVar16,uVar28,uVar28);
  if ((long)uVar28 < 1) {
    piVar12 = *(int **)(puVar16 + 0x18);
    *piVar12 = 0;
  }
  else {
    uVar13 = 0;
    lVar19 = *(long *)(puVar6 + 0x30);
    lVar2 = *(long *)(puVar6 + 0x18);
    lVar3 = *(long *)(puVar6 + 0x20);
    do {
      uVar23 = uVar13;
      if (puVar11 != (undefined *)0x0) {
        uVar23 = (ulong)*(uint *)(puVar11 + uVar13 * 4);
      }
      piVar12 = (int *)(lVar2 + uVar13 * 4);
      lVar21 = (long)*piVar12;
      if (lVar3 == 0) {
        lVar25 = (long)piVar12[1];
      }
      else {
        lVar25 = *(int *)(lVar3 + uVar13 * 4) + lVar21;
      }
      lVar24 = lVar25 - lVar21;
      if (lVar24 != 0 && lVar21 <= lVar25) {
        piVar12 = (int *)(lVar19 + lVar21 * 4);
        do {
          iVar18 = *piVar12;
          if ((long)uVar13 <= (long)iVar18) {
            if (puVar11 != (undefined *)0x0) {
              iVar18 = *(int *)(puVar11 + (long)iVar18 * 4);
            }
            if (iVar18 <= (int)uVar23) {
              iVar18 = (int)uVar23;
            }
            piVar17[iVar18] = piVar17[iVar18] + 1;
          }
          lVar24 = lVar24 + -1;
          piVar12 = piVar12 + 1;
        } while (lVar24 != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar28);
    iVar18 = 0;
    piVar12 = *(int **)(puVar16 + 0x18);
    *piVar12 = 0;
    piVar20 = piVar17;
    uVar13 = uVar28;
    piVar22 = piVar12;
    do {
      piVar22 = piVar22 + 1;
      iVar18 = *piVar20 + iVar18;
      *piVar22 = iVar18;
      uVar13 = uVar13 - 1;
      piVar20 = piVar20 + 1;
    } while (uVar13 != 0);
  }
  FUN_10a9106b4(0,puVar16 + 0x28,(long)piVar12[uVar28]);
  if (0 < (long)uVar28) {
    _memcpy(piVar17,*(undefined8 *)(puVar16 + 0x18),uVar28 << 2);
    uVar13 = 0;
    lVar2 = *(long *)(puVar6 + 0x28);
    lVar19 = *(long *)(puVar6 + 0x30);
    lVar3 = *(long *)(puVar6 + 0x18);
    lVar21 = *(long *)(puVar6 + 0x20);
    do {
      piVar12 = (int *)(lVar3 + uVar13 * 4);
      lVar25 = (long)*piVar12;
      if (lVar21 == 0) {
        lVar24 = (long)piVar12[1];
      }
      else {
        lVar24 = *(int *)(lVar21 + uVar13 * 4) + lVar25;
      }
      lVar8 = lVar24 - lVar25;
      if (lVar8 != 0 && lVar25 <= lVar24) {
        lVar24 = *(long *)(puVar16 + 0x28);
        lVar4 = *(long *)(puVar16 + 0x30);
        puVar26 = (undefined4 *)(lVar2 + lVar25 * 4);
        piVar12 = (int *)(lVar19 + lVar25 * 4);
        do {
          iVar18 = *piVar12;
          if ((long)uVar13 <= (long)iVar18) {
            if (puVar11 == (undefined *)0x0) {
              iVar10 = (int)uVar13;
            }
            else {
              iVar10 = *(int *)(puVar11 + uVar13 * 4);
              iVar18 = *(int *)(puVar11 + (long)iVar18 * 4);
            }
            iVar1 = iVar18;
            if (iVar18 <= iVar10) {
              iVar1 = iVar10;
            }
            iVar5 = piVar17[iVar1];
            piVar17[iVar1] = iVar5 + 1;
            if (iVar18 <= iVar10) {
              iVar10 = iVar18;
            }
            *(int *)(lVar4 + (long)iVar5 * 4) = iVar10;
            *(undefined4 *)(lVar24 + (long)iVar5 * 4) = *puVar26;
          }
          puVar26 = puVar26 + 1;
          lVar8 = lVar8 + -1;
          piVar12 = piVar12 + 1;
        } while (lVar8 != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(piVar17);
  return;
}



/* Entry: 10a910d40; end: 10a910f6f;  */

void FUN_10a910d40(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined4 *puVar18;
  long lVar19;
  ulong uVar20;
  
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (0 < (long)uVar20) {
    if (uVar20 >> 0x3e == 0) {
      piVar6 = (int *)0x1;
      _calloc(1,uVar20 << 2);
      if (piVar6 != (int *)0x0) goto LAB_10a910db0;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  piVar6 = (int *)0x0;
LAB_10a910db0:
  FUN_10a8f4b10(param_2,uVar20,uVar20);
  if ((long)uVar20 < 1) {
    piVar9 = *(int **)(param_2 + 0x18);
    *piVar9 = 0;
  }
  else {
    uVar8 = 0;
    lVar10 = *(long *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    do {
      uVar13 = uVar8;
      if (param_3 != 0) {
        uVar13 = (ulong)*(uint *)(param_3 + uVar8 * 4);
      }
      piVar9 = (int *)(lVar2 + uVar8 * 4);
      lVar16 = (long)*piVar9;
      if (lVar3 == 0) {
        lVar19 = (long)piVar9[1];
      }
      else {
        lVar19 = *(int *)(lVar3 + uVar8 * 4) + lVar16;
      }
      lVar14 = lVar19 - lVar16;
      if (lVar14 != 0 && lVar16 <= lVar19) {
        piVar9 = (int *)(lVar10 + lVar16 * 4);
        do {
          iVar17 = *piVar9;
          if ((long)uVar8 <= (long)iVar17) {
            if (param_3 != 0) {
              iVar17 = *(int *)(param_3 + (long)iVar17 * 4);
            }
            if (iVar17 <= (int)uVar13) {
              iVar17 = (int)uVar13;
            }
            piVar6[iVar17] = piVar6[iVar17] + 1;
          }
          lVar14 = lVar14 + -1;
          piVar9 = piVar9 + 1;
        } while (lVar14 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar20);
    iVar17 = 0;
    piVar9 = *(int **)(param_2 + 0x18);
    *piVar9 = 0;
    piVar12 = piVar6;
    uVar8 = uVar20;
    piVar11 = piVar9;
    do {
      piVar11 = piVar11 + 1;
      iVar17 = *piVar12 + iVar17;
      *piVar11 = iVar17;
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar8 != 0);
  }
  FUN_10a9106b4(0,param_2 + 0x28,(long)piVar9[uVar20]);
  if (0 < (long)uVar20) {
    _memcpy(piVar6,*(undefined8 *)(param_2 + 0x18),uVar20 << 2);
    uVar8 = 0;
    lVar2 = *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar16 = *(long *)(param_1 + 0x20);
    do {
      piVar9 = (int *)(lVar3 + uVar8 * 4);
      lVar19 = (long)*piVar9;
      if (lVar16 == 0) {
        lVar14 = (long)piVar9[1];
      }
      else {
        lVar14 = *(int *)(lVar16 + uVar8 * 4) + lVar19;
      }
      lVar15 = lVar14 - lVar19;
      if (lVar15 != 0 && lVar19 <= lVar14) {
        lVar14 = *(long *)(param_2 + 0x28);
        lVar4 = *(long *)(param_2 + 0x30);
        puVar18 = (undefined4 *)(lVar2 + lVar19 * 4);
        piVar9 = (int *)(lVar10 + lVar19 * 4);
        do {
          iVar17 = *piVar9;
          if ((long)uVar8 <= (long)iVar17) {
            if (param_3 == 0) {
              iVar7 = (int)uVar8;
            }
            else {
              iVar7 = *(int *)(param_3 + uVar8 * 4);
              iVar17 = *(int *)(param_3 + (long)iVar17 * 4);
            }
            iVar1 = iVar17;
            if (iVar17 <= iVar7) {
              iVar1 = iVar7;
            }
            iVar5 = piVar6[iVar1];
            piVar6[iVar1] = iVar5 + 1;
            if (iVar17 <= iVar7) {
              iVar7 = iVar17;
            }
            *(int *)(lVar4 + (long)iVar5 * 4) = iVar7;
            *(undefined4 *)(lVar14 + (long)iVar5 * 4) = *puVar18;
          }
          puVar18 = puVar18 + 1;
          lVar15 = lVar15 + -1;
          piVar9 = piVar9 + 1;
        } while (lVar15 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(piVar6);
  return;
}



/* Entry: 10a910f70; end: 10a91135b;  */

void FUN_10a910f70(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *(ulong *)(param_2 + 0x10);
  iVar28 = (int)uVar29;
  if ((ulong)(long)iVar28 >> 0x3e == 0) {
    lVar30 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 0x40);
    puVar26 = (undefined4 *)((long)(uVar29 << 0x20) >> 0x1e);
    uStack_78 = puVar26;
    if (puVar26 < (undefined4 *)0x20001) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar3 = -((long)puVar26 + 0x1eU & 0xfffffffffffffff0);
      puVar9 = (undefined4 *)((long)auStack_80 + lVar3);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar3 = (lVar3 + -0x80) - extraout_x12;
      puVar25 = (undefined4 *)((long)&uStack_78 + lVar3 + 0x87 & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar26 = (undefined4 *)
                ((long)&uStack_78 + (lVar3 - extraout_x12_00) + 0x87 & 0xfffffffffffffff0);
LAB_10a91107c:
      func_0x0001093c3de4(param_1 + 0x58,(long)iVar28);
      if (iVar28 < 1) {
        uVar23 = 0;
      }
      else {
        uVar20 = 0;
        lVar21 = *(long *)(param_1 + 0x78);
        lVar3 = *(long *)(param_2 + 0x28);
        lVar5 = *(long *)(param_2 + 0x30);
        lStack_70 = *(long *)(param_2 + 0x18);
        lVar6 = *(long *)(param_2 + 0x20);
        uVar22 = uVar29 & 0x7fffffff;
        uVar23 = 1;
        lVar24 = *(long *)(param_1 + 0x58);
        do {
          puVar9[uVar20] = 0;
          uVar19 = (undefined4)uVar20;
          puVar26[uVar20] = uVar19;
          *(undefined4 *)(lVar21 + uVar20 * 4) = 0;
          piVar1 = (int *)(lStack_70 + uVar20 * 4);
          lVar10 = (long)*piVar1;
          if (lVar6 == 0) {
            lVar11 = (long)piVar1[1];
          }
          else {
            lVar11 = *(int *)(lVar6 + uVar20 * 4) + lVar10;
          }
          uVar12 = uVar29;
          if (lVar10 < lVar11) {
            do {
              iVar27 = *(int *)(lVar5 + lVar10 * 4);
              if ((long)iVar27 <= (long)uVar20) {
                lVar15 = (long)iVar27;
                puVar9[lVar15] = *(float *)(lVar3 + lVar10 * 4) + (float)puVar9[lVar15];
                if (uVar20 != (uint)puVar26[lVar15]) {
                  lVar17 = 0;
                  lVar18 = *(long *)(param_1 + 0x68);
                  puVar16 = puVar25;
                  lVar7 = 2;
                  do {
                    lVar13 = lVar7;
                    puVar14 = puVar16;
                    puVar25[lVar17] = iVar27;
                    puVar26[lVar15] = uVar19;
                    lVar17 = lVar17 + 1;
                    iVar27 = *(int *)(lVar18 + lVar15 * 4);
                    lVar15 = (long)iVar27;
                    puVar16 = puVar14 + 1;
                    lVar7 = lVar13 + 1;
                  } while (uVar20 != (uint)puVar26[iVar27]);
                  puVar16 = puVar25 + (long)(int)uVar12 + -1;
                  do {
                    *puVar16 = *puVar14;
                    uVar12 = (ulong)((int)uVar12 - 1);
                    lVar13 = lVar13 + -1;
                    puVar14 = puVar14 + -1;
                    puVar16 = puVar16 + -1;
                  } while (1 < lVar13);
                }
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 != lVar11);
            fVar31 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac) * (float)puVar9[uVar20]
            ;
            puVar9[uVar20] = 0;
            if ((int)uVar12 < iVar28) {
              uVar12 = (ulong)(int)uVar12;
              do {
                lVar11 = (long)(int)puVar25[uVar12];
                fVar32 = (float)puVar9[lVar11];
                puVar9[lVar11] = 0;
                fVar33 = *(float *)(lVar24 + lVar11 * 4);
                lVar10 = (long)*(int *)(lVar30 + lVar11 * 4);
                iVar27 = *(int *)(lVar21 + lVar11 * 4);
                if (0 < iVar27) {
                  lVar15 = iVar27 + lVar10;
                  do {
                    iVar27 = *(int *)(lVar4 + lVar10 * 4);
                    puVar9[iVar27] = (float)puVar9[iVar27] - fVar32 * *(float *)(lVar2 + lVar10 * 4)
                    ;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < lVar15);
                }
                fVar33 = fVar32 / fVar33;
                *(undefined4 *)(lVar4 + lVar10 * 4) = uVar19;
                *(float *)(lVar2 + lVar10 * 4) = fVar33;
                fVar31 = fVar31 - fVar32 * fVar33;
                *(int *)(lVar21 + lVar11 * 4) = *(int *)(lVar21 + lVar11 * 4) + 1;
                uVar12 = uVar12 + 1;
              } while (uVar12 != uVar22);
            }
          }
          else {
            fVar31 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac) * 0.0;
            puVar9[uVar20] = 0;
          }
          *(float *)(lVar24 + uVar20 * 4) = fVar31;
          if (fVar31 == 0.0) break;
          uVar20 = uVar20 + 1;
          uVar23 = (uint)(uVar20 < uVar22);
        } while (uVar20 != uVar22);
      }
      *(uint *)(param_1 + 4) = uVar23;
      *(undefined1 *)(param_1 + 8) = 1;
      if ((undefined4 *)0x20000 < uStack_78) {
        _free(puVar26);
        _free(puVar25);
        _free(puVar9);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10a9112d0;
    }
    puVar9 = puVar26;
    _malloc();
    if (puVar9 == (undefined4 *)0x0) goto LAB_10a9112b0;
    puVar25 = puVar26;
    _malloc();
    if (puVar25 != (undefined4 *)0x0) {
      _malloc();
      if (puVar26 == (undefined4 *)0x0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10a911318;
      }
      goto LAB_10a91107c;
    }
  }
  else {
LAB_10a9112b0:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_10a9112d0:
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10a911318:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a91131c);
  (*pcVar8)();
}



/* Entry: 10a91135c; end: 10a9113d7;  */

undefined8 * FUN_10a91135c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a9113d8; end: 10a9114cf;  */

void FUN_10a9113d8(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9114d0);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[4];
  if (plVar11 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar11 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar11;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110c2df10;
  *(undefined8 *)((long)plVar11 + 0xc) = 0;
  *(undefined4 *)((long)plVar11 + 0x13) = 0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a9114d0; end: 10a9114fb;  */

undefined8 FUN_10a9114d0(void)

{
  return 0;
}



/* Entry: 10a9114fc; end: 10a9115b7;  */

void FUN_10a9114fc(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  byte *pbStack_68;
  
  pbVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pbVar5 + 0x2c8) < 8) {
    *(long *)(pbVar5 + *(ulong *)(pbVar5 + 0x2c8) * 8 + 0x270) = *(long *)(pbVar5 + 0x2d0);
    *(long *)(pbVar5 + 0x2c8) = *(long *)(pbVar5 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pbVar5 + 600);
  }
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*param_2);
  *(undefined8 *)(param_1 + 2) = uVar14;
  pbVar1 = pbVar5 + 600;
  uVar6 = *(long *)(pbVar5 + 0x2c8) - 1;
  *(ulong *)(pbVar5 + 0x2c8) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pbVar1 + uVar6 * 8 + 0x18);
    if (*(ulong *)(pbVar5 + 0x2d0) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pbVar5 + 0x2b8) + -8);
    *(ulong **)(pbVar5 + 0x2b8) = (ulong *)(*(long *)(pbVar5 + 0x2b8) + -8);
    if (*(ulong *)(pbVar5 + 0x2d0) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pbVar1;
  lVar10 = *(long *)(pbVar5 + 0x260);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pbVar5 + 0x268);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pbStack_68 = pbVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pbVar1 = lVar9;
          *(ulong *)(pbVar5 + 0x260) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pbVar5 + 0x268) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pbVar5 + 0x260) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pbVar5 + 0x260) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pbVar5 + 0x2d0) = uVar6;
  return;
}



/* Entry: 10a9115b8; end: 10a911677;  */

void FUN_10a9115b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9116bc(param_2,param_3);
  func_0x00010a911700(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)plVar4 = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a911678; end: 10a911723;  */

long * FUN_10a911678(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c2df10) {
    return param_1 + 1;
  }
  puVar5 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  func_0x000109898688();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar5 == &PTR_FUN_110c2df10) {
    return puVar5 + 1;
  }
  plVar6 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  if ((int)plVar6 == 1) {
    return plVar6;
  }
  plVar7 = (long *)0x1;
  uVar8 = 0;
  FUN_10a052ee0(1,0,plVar6);
  plVar6 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a911678(plVar7,uVar8);
  FUN_10a052e3c(param_4);
  fVar18 = *(float *)((long)plVar7 + 4);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar18;
  plVar7 = plVar6 + 0x4b;
  lVar9 = plVar6[0x59];
  uVar10 = lVar9 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar9 + 2];
    if (plVar6[0x5a] == uVar10) {
      return plVar7;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return plVar7;
    }
  }
  lVar9 = *plVar7;
  plVar14 = (long *)plVar6[0x4c];
  lVar12 = (long)plVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - (long)plVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_98 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar12;
          _bzero(lVar1,uVar17 * 0x10);
          lVar13 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar1 + uVar17 * 0x10;
          plVar6[0x4d] = lVar4 + uVar11 * 0x10;
          plVar7 = &lStack_b8;
          lStack_b8 = lVar9;
          lStack_b0 = lVar9;
          lStack_a8 = lVar9;
          lStack_a0 = lVar15;
          func_0x00010988c1b8(plVar7);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    plVar7 = plVar14;
    _bzero(plVar14,uVar17 * 0x10);
    plVar6[0x4c] = (long)(plVar14 + uVar17 * 2);
  }
  else if (uVar10 < uVar16) {
    plVar2 = (long *)(lVar9 + uVar10 * 0x10);
    while (plVar14 != plVar2) {
      plVar14 = plVar14 + -2;
      plVar7 = plVar14;
      func_0x00010988c204(plVar14);
    }
    plVar6[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return plVar7;
}



/* Entry: 10a911724; end: 10a9117df;  */

void FUN_10a911724(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a9117e0; end: 10a9118cf;  */

void FUN_10a9117e0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a9116bc(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9118bc);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9118d0; end: 10a91198b;  */

void FUN_10a9118d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 1);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a91198c; end: 10a911a7b;  */

void FUN_10a91198c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a9116bc(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a911a68);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 1) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a911a7c; end: 10a911b33;  */

void FUN_10a911a7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0xc);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a911b34; end: 10a911bf3;  */

void FUN_10a911b34(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9116bc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0xc) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a911bf4; end: 10a911cab;  */

void FUN_10a911bf4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0xd);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a911cac; end: 10a911d6b;  */

void FUN_10a911cac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9116bc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0xd) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a911d6c; end: 10a911e23;  */

void FUN_10a911d6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a911678(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0xe);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a911e24; end: 10a911ee3;  */

void FUN_10a911e24(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9116bc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0xe) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a911ee4; end: 10a911ff3;  */

void FUN_10a911ee4(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a911ff4);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[9];
  if (plVar11 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plVar11 = (long *)plVar3[9];
  }
  plVar3[9] = *plVar11;
  plVar11[2] = 0;
  plVar11[1] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  *plVar11 = (long)&PTR_FUN_110c2df48;
  *(undefined2 *)((long)plVar11 + 9) = 0x301;
  plVar11[2] = -1;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a911ff4; end: 10a91201f;  */

undefined8 FUN_10a911ff4(void)

{
  return 0;
}



/* Entry: 10a912020; end: 10a9120d7;  */

void FUN_10a912020(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *param_2;
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10a9120d8; end: 10a912197;  */

void FUN_10a9120d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)plVar4 = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912198; end: 10a91221f;  */

long * FUN_10a912198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c2df48) {
    return param_1 + 1;
  }
  puVar5 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  func_0x000109898688();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar5 == &PTR_FUN_110c2df48) {
    return puVar5 + 1;
  }
  plVar6 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a912198(plVar6,param_2);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar17 = NEON_ucvtf((ulong)*(byte *)((long)plVar6 + 1));
  *(undefined8 *)(extraout_x8 + 2) = uVar17;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return plVar6;
    }
  }
  lVar8 = *plVar6;
  plVar13 = (long *)plVar7[0x4c];
  lVar11 = (long)plVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)plVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar11;
          _bzero(lVar1,uVar16 * 0x10);
          lVar12 = lVar1 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar1 + uVar16 * 0x10;
          plVar7[0x4d] = lVar4 + uVar10 * 0x10;
          plVar6 = &lStack_a8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(plVar6);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    plVar6 = plVar13;
    _bzero(plVar13,uVar16 * 0x10);
    plVar7[0x4c] = (long)(plVar13 + uVar16 * 2);
  }
  else if (uVar9 < uVar15) {
    plVar2 = (long *)(lVar8 + uVar9 * 0x10);
    while (plVar13 != plVar2) {
      plVar13 = plVar13 + -2;
      plVar6 = plVar13;
      func_0x00010988c204(plVar13);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return plVar6;
}



/* Entry: 10a912220; end: 10a9122db;  */

void FUN_10a912220(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 1));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a9122dc; end: 10a91239b;  */

void FUN_10a9122dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a91239c(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 1) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a91239c; end: 10a9123bf;  */

void FUN_10a91239c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a912198(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar5 = NEON_ucvtf((ulong)*(byte *)((long)plVar3 + 2));
  *(undefined8 *)(extraout_x8 + 2) = uVar5;
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
        plStack_78 = plVar3;
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
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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



/* Entry: 10a9123c0; end: 10a91247b;  */

void FUN_10a9123c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 2));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a91247c; end: 10a91253b;  */

void FUN_10a91247c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a91253c(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 2) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a91253c; end: 10a91255f;  */

void FUN_10a91253c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a912198(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar5 = NEON_ucvtf((ulong)*(byte *)((long)plVar3 + 3));
  *(undefined8 *)(extraout_x8 + 2) = uVar5;
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
        plStack_78 = plVar3;
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
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
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



/* Entry: 10a912560; end: 10a91261b;  */

void FUN_10a912560(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 3));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a91261c; end: 10a9126db;  */

void FUN_10a91261c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a9126dc(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 3) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a9126dc; end: 10a9126ff;  */

void FUN_10a9126dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long lStack_60;
  long lStack_58;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar1 = (long *)0x1;
  uVar4 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = plVar1;
  FUN_10a912198(plVar1,uVar4);
  FUN_10a052e3c(param_4);
  lStack_58 = plVar3[2];
  lStack_60 = plVar3[1];
  FUN_10a2e87d8(extraout_x8,plVar1,&lStack_60);
  func_0x00010988c170(plVar2 + 0x4b);
  return;
}



/* Entry: 10a912700; end: 10a9127cb;  */

void FUN_10a912700(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[2];
  lStack_50 = plVar2[1];
  FUN_10a2e87d8(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a9127cc; end: 10a91288f;  */

void FUN_10a9127cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a2e8890(param_5);
  func_0x00010a27178c(param_2,param_4);
  lVar5 = *param_2;
  plVar4[2] = param_2[1];
  plVar4[1] = lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912890; end: 10a912947;  */

void FUN_10a912890(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a912198(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
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



/* Entry: 10a912948; end: 10a912a07;  */

void FUN_10a912948(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a9121dc(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 3) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912a08; end: 10a912b1f;  */

void FUN_10a912a08(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a912b20);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[9];
  if (plVar11 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plVar11 = (long *)plVar3[9];
  }
  plVar3[9] = *plVar11;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  *plVar11 = (long)&PTR_FUN_110c2df80;
  plVar11[2] = 0;
  plVar11[1] = 0x4120000041200000;
  plVar11[4] = 0x4170000040400000;
  plVar11[3] = 0x4188000000000000;
  *(undefined1 *)(plVar11 + 5) = 1;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912b20; end: 10a912b4b;  */

undefined8 FUN_10a912b20(void)

{
  return 0;
}



/* Entry: 10a912b4c; end: 10a912c17;  */

void FUN_10a912b4c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = *plVar2;
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a912c18; end: 10a912cdb;  */

void FUN_10a912c18(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a912d20(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  *plVar4 = *param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912cdc; end: 10a912d63;  */

long * FUN_10a912cdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_70;
  undefined4 uStack_68;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110c2df80) {
    return param_1 + 1;
  }
  puVar1 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  func_0x000109898688();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*puVar1 == &PTR_FUN_110c2df80) {
    return puVar1 + 1;
  }
  plVar2 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10a912cdc(plVar2,param_2);
  FUN_10a052e3c(param_4);
  uStack_68 = (undefined4)plVar4[2];
  lStack_70 = plVar4[1];
  FUN_10a065390(extraout_x8,plVar2,&lStack_70);
  plVar3 = plVar3 + 0x4b;
  func_0x00010988c170(plVar3);
  return plVar3;
}



/* Entry: 10a912d64; end: 10a912e37;  */

void FUN_10a912d64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[2];
  lStack_50 = plVar2[1];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a912e38; end: 10a912f03;  */

void FUN_10a912e38(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a912d20(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[1] = *param_2;
  *(int *)(plVar4 + 2) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a912f04; end: 10a912fbf;  */

void FUN_10a912f04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x14);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a912fc0; end: 10a9130af;  */

void FUN_10a912fc0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a912d20(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a91309c);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x14) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9130b0; end: 10a91316b;  */

void FUN_10a9130b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a91316c; end: 10a91325b;  */

void FUN_10a91316c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a912d20(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a913248);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 3) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a91325c; end: 10a913317;  */

void FUN_10a91325c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a913318; end: 10a913407;  */

void FUN_10a913318(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a912d20(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9133f4);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x1c) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a913408; end: 10a9134c3;  */

void FUN_10a913408(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a912cdc(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 4));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a9134c4; end: 10a913583;  */

void FUN_10a9134c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a912d20(param_2,param_3);
  FUN_10a91239c(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)(plVar4 + 4) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a913584; end: 10a91367f;  */

undefined1  [16] FUN_10a913584(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2d418;
  puVar1 = &UNK_10f6821fc;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c2d418;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a913680; end: 10a9136cf;  */

ulong FUN_10a913680(ulong param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x20),
                *(undefined4 *)(param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a9136d0,0,0);
  }
  return param_1;
}



/* Entry: 10a9136d0; end: 10a91380f;  */

void FUN_10a9136d0(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9137fc);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c2dfb8;
  puVar4[3] = &PTR_FUN_110c2d3d0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[4] = 0;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
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
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a913810; end: 10a91381f;  */

void FUN_10a913810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2dfb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a913820; end: 10a91383f;  */

void FUN_10a913820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2dfb8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a913840; end: 10a913857;  */

long FUN_10a913840(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
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



/* Entry: 10a913858; end: 10a9138af;  */

ulong FUN_10a913858(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a9138b0,FUN_10a9139b4);
  }
  return param_1;
}



/* Entry: 10a9138b0; end: 10a9139b3;  */

void FUN_10a9138b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[3];
      *param_1 = 2;
      *(char *)(param_1 + 2) = (char)lVar6;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
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
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9139a0);
  (*pcVar1)();
}



/* Entry: 10a9139b4; end: 10a913abf;  */

void FUN_10a9139b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a065020(param_5);
      func_0x00010989847c(param_2,param_4);
      *(char *)(plVar5 + 3) = (char)param_2;
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
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
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a913aac);
  (*pcVar1)();
}



/* Entry: 10a913ac0; end: 10a913b7b;  */

void FUN_10a913ac0(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6827dc,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a913b7c);
  (*pcVar4)();
}



/* Entry: 10a913b7c; end: 10a913c63;  */

void FUN_10a913b7c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a913bf0);
  (*pcVar1)();
}



/* Entry: 10a913c64; end: 10a913ce7;  */

void FUN_10a913c64(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a052f68(param_1,&uStack_30);
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



/* Entry: 10a913ce8; end: 10a913dc7;  */

void FUN_10a913ce8(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puStack_40 = param_3;
  plStack_38 = param_2;
  FUN_10a913dc8(&puStack_28,param_2,2,&puStack_40);
  aiStack_30[0] = 7;
  (**(code **)(*param_2 + 0x30))(&puStack_48,param_2);
  func_0x0001098843c0(&puStack_40,&puStack_48,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,&puStack_40,aiStack_30,1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a913dc8; end: 10a913ee3;  */

void FUN_10a913dc8(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  code **ppcVar5;
  undefined4 *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined8 *puStack_100;
  int aiStack_f8 [2];
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  ppuVar4 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_90,param_2,0,0);
  pcStack_88 = FUN_10a913ee4;
  ppuStack_80 = &PTR_FUN_110c2e718;
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  ppcVar5 = &pcStack_88;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_90,param_3,ppcVar5);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
    puVar2 = puStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 == 0) {
    __Unwind_Resume(puVar2);
  }
  else {
    (*(code *)*ppuStack_80)(&ppuStack_80);
  }
  func_0x000104bd46a0(puVar2);
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar3 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar3 + 0x58))(plVar3,puVar2,ppuVar4,param_3,ppcVar5);
  lVar6 = plVar3[0x47];
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_f8,uVar8,param_3);
  iStack_e0 = aiStack_f8[0];
  if (aiStack_f8[0] == 3) {
    puStack_d8 = puStack_f0;
  }
  else if (aiStack_f8[0] == 2) {
    puStack_d8 = (undefined8 *)CONCAT71(puStack_d8._1_7_,puStack_f0._0_1_);
  }
  else if (3 < aiStack_f8[0]) {
    puStack_d8 = puStack_f0;
    puStack_f0 = (undefined8 *)0x0;
  }
  aiStack_f8[0] = 0;
  uVar7 = *(undefined8 *)(param_6 + 0x18);
  uStack_e8 = uVar8;
  func_0x0001098849a4(aiStack_120,uVar7,param_3 + 0x10);
  iStack_108 = aiStack_120[0];
  if (aiStack_120[0] == 3) {
    puStack_100 = puStack_118;
  }
  else if (aiStack_120[0] == 2) {
    puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,puStack_118._0_1_);
  }
  else if (3 < aiStack_120[0]) {
    puStack_100 = puStack_118;
    puStack_118 = (undefined8 *)0x0;
  }
  aiStack_120[0] = 0;
  uStack_110 = uVar7;
  FUN_10a914134(uVar1,lVar6,&uStack_e8,&uStack_110);
  if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
    (**(code **)*puStack_100)();
  }
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < iStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d8)();
  }
  if ((3 < aiStack_f8[0]) && (puStack_f0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f0)();
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 10a913ee4; end: 10a913eff;  */

void FUN_10a913ee4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar2 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4,param_5);
  lVar3 = plVar2[0x47];
  uVar5 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_68,uVar5,param_4);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = *(undefined8 *)(param_6 + 0x18);
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_4 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a914134(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a913f00; end: 10a914133;  */

void FUN_10a913f00(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = plVar2[0x47];
  uVar5 = param_2[1];
  func_0x0001098849a4(aiStack_68,uVar5,param_5);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = param_2[1];
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_5 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a914134(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a914134; end: 10a9142f7;  */

void FUN_10a914134(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 *puStack_d8;
  long *plStack_d0;
  int iStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  int iStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 uStack_61;
  long lStack_60;
  int iStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  long lStack_48;
  int iStack_40;
  long *plStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0) {
    plVar2 = (long *)&UNK_10f634760;
    plVar3 = (long *)0x34;
    FUN_10a9142f8(&lStack_60,&uStack_61,*param_4);
    param_2 = &lStack_60;
    FUN_10a05589c();
    if ((int)lStack_60 < 4) goto LAB_10a914288;
    plVar1 = (long *)CONCAT44(uStack_54,iStack_58);
  }
  else {
    lStack_60 = *param_3;
    iStack_58 = (int)param_3[1];
    if (iStack_58 == 3) {
      plStack_50 = (long *)param_3[2];
    }
    else if (iStack_58 == 2) {
      plStack_50 = (long *)CONCAT71(plStack_50._1_7_,(char)param_3[2]);
    }
    else if (3 < iStack_58) {
      plStack_50 = (long *)param_3[2];
      param_3[2] = 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    lStack_48 = *param_4;
    iStack_40 = (int)param_4[1];
    if (iStack_40 == 3) {
      plStack_38 = (long *)param_4[2];
    }
    else if (iStack_40 == 2) {
      plStack_38 = (long *)CONCAT71(plStack_38._1_7_,(char)param_4[2]);
    }
    else if (3 < iStack_40) {
      plStack_38 = (long *)param_4[2];
      param_4[2] = 0;
    }
    *(undefined4 *)(param_4 + 1) = 0;
    plVar2 = &lStack_60;
    FUN_10a91442c();
    plVar3 = param_4;
    if ((3 < iStack_40) && (param_1 = plStack_38, plStack_38 != (long *)0x0)) {
      (**(code **)*plStack_38)();
      plVar3 = param_4;
    }
    param_4 = param_1;
    plVar1 = plStack_50;
    if (iStack_58 < 4) goto LAB_10a914288;
  }
  param_4 = plVar1;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)();
  }
LAB_10a914288:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((3 < (int)lStack_60) && ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
    }
    __Unwind_Resume(param_4);
    plStack_a0 = plVar2;
    plStack_98 = plVar3;
    (**(code **)(*param_2 + 0x30))(&puStack_d8,param_2);
    puStack_c0 = puStack_d8;
    puStack_d8 = (undefined8 *)0x0;
    iStack_c8 = 7;
    plStack_d0 = param_2;
    FUN_10a055e1c(auStack_b8,&plStack_d0,&DAT_10f685520);
    FUN_10a055f9c(extraout_x8,auStack_b8,&plStack_a0);
    if ((3 < iStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    if ((3 < iStack_c8) && (puStack_c0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c0)();
    }
    if (puStack_d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_d8)();
    }
    return;
  }
  return;
}



/* Entry: 10a9142f8; end: 10a91442b;  */

void FUN_10a9142f8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_3 + 0x30))(&puStack_68,param_3);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_3;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a91442c; end: 10a914647;  */

void FUN_10a91442c(long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plStack_40;
  undefined1 auStack_38 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_10a9149f0(&plStack_40,param_2,auStack_38,param_1,param_3);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    puVar1 = (ulong *)(plStack_40 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plStack_40 + 8);
    plVar7 = plStack_40;
  }
  else {
    plVar7 = (long *)*param_1;
    *param_1 = 0;
    if (((uint)plVar7[2] >> 5 & 1) == 0) {
      if ((((uint)plVar7[2] >> 1 & 1) == 0) || (((uint)plVar7[2] >> 5 & 1) != 0)) {
        if (((uint)plVar7[2] >> 5 & 1) == 0) {
          puVar4 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar4 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar4,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
          func_0x0001092af97c(auStack_38);
        }
LAB_10a9145d0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9145d4);
        (*pcVar5)();
      }
      if ((*(byte *)(plVar7 + 0x16) & 1) == 0) goto LAB_10a9145d0;
      FUN_10a9146a8(param_3,plVar7 + 0x13);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
      FUN_10a914794(param_3 + 0x18,auStack_38);
      __ZNSt13exception_ptrD1Ev(auStack_38);
    }
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plVar7 + 8);
  }
  (*pcVar5)(plVar7);
  return;
}



/* Entry: 10a914648; end: 10a9146a7;  */

long FUN_10a914648(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a9146a8; end: 10a914793;  */

void FUN_10a9146a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a9148ec(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a914794; end: 10a9148eb;  */

void FUN_10a914794(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9147bc);
  (*pcVar1)();
}



/* Entry: 10a9148ec; end: 10a9149ef;  */

void FUN_10a9148ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_1 + 0x128))(&puStack_68,param_1,puVar2,uVar1);
  aiStack_70[0] = 6;
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a9149f0; end: 10a914f9b;  */

void FUN_10a9149f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  *puVar6 = FUN_10a91b380;
  puVar6[1] = FUN_10a91b7e4;
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  uVar10 = *param_4;
  *param_4 = 0;
  uVar11 = *param_5;
  puVar6[9] = uVar10;
  puVar6[10] = uVar11;
  iVar2 = *(int *)(param_5 + 1);
  *(int *)(puVar6 + 0xb) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xc] = param_5[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(param_5 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xc] = param_5[2];
    param_5[2] = 0;
  }
  *(undefined4 *)(param_5 + 1) = 0;
  puVar6[0xd] = param_5[3];
  iVar2 = *(int *)(param_5 + 4);
  *(int *)(puVar6 + 0xe) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xf] = param_5[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xf) = *(undefined1 *)(param_5 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xf] = param_5[5];
    param_5[5] = 0;
  }
  *(undefined4 *)(param_5 + 4) = 0;
  puVar6[0x18] = param_2;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  *(undefined1 *)(puVar6 + 0x1c) = 0;
  puVar7 = puVar6 + 0x18;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x1b] = puVar6[9];
    puVar6[9] = 0;
    puVar6[0x11] = puVar6[10];
    iVar2 = *(int *)(puVar6 + 0xb);
    *(int *)(puVar6 + 0x12) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x13] = puVar6[0xc];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x13) = *(undefined1 *)(puVar6 + 0xc);
    }
    else if (3 < iVar2) {
      puVar6[0x13] = puVar6[0xc];
      puVar6[0xc] = 0;
    }
    *(undefined4 *)(puVar6 + 0xb) = 0;
    puVar6[0x14] = puVar6[0xd];
    iVar2 = *(int *)(puVar6 + 0xe);
    *(int *)(puVar6 + 0x15) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x16] = puVar6[0xf];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x16) = *(undefined1 *)(puVar6 + 0xf);
    }
    else if (3 < iVar2) {
      puVar6[0x16] = puVar6[0xf];
      puVar6[0xf] = 0;
    }
    *(undefined4 *)(puVar6 + 0xe) = 0;
    FUN_10a914f9c(puVar6 + 0x1a,(long)puVar6 + 0xe1,puVar6 + 0x1b,puVar6 + 0x11);
    puVar6[0x18] = puVar6[0x1a];
    plVar8 = (long *)(puVar6[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x1c) = 1;
      lVar9 = puVar6[0x18];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_58);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x18];
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x1a];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      if ((3 < *(int *)(puVar6 + 0x15)) && ((undefined8 *)puVar6[0x16] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x16])();
      }
      if ((3 < *(int *)(puVar6 + 0x12)) && ((undefined8 *)puVar6[0x13] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x13])();
      }
      plVar8 = (long *)puVar6[0x1b];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      if ((3 < *(int *)(puVar6 + 0xe)) && ((undefined8 *)puVar6[0xf] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xf])();
      }
      if ((3 < *(int *)(puVar6 + 0xb)) && ((undefined8 *)puVar6[0xc] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xc])();
      }
      plVar8 = (long *)puVar6[9];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a914e64);
    (*pcVar5)();
  }
  return;
}


