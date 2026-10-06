/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0cb2b8; end: 10a0cb2bb;  */

void FUN_10a0cb2b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cb2bc; end: 10a0cb3e3;  */

undefined8 * FUN_10a0cb2bc(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((ulong)((long)(uVar6 - (long)puVar9) >> 3) < param_4) {
    puVar10 = param_1;
    uVar5 = param_2;
    if (puVar9 != (undefined8 *)0x0) {
      param_1[1] = puVar9;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar10 = puVar9;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a0caba8();
      if (uVar5 >> 0x3d == 0) {
        puVar4 = puVar10;
        FUN_10a0cabbc();
        *puVar10 = puVar4;
        puVar10[1] = puVar4;
        puVar10[2] = puVar4 + uVar5;
        return puVar4;
      }
      FUN_10a0caba8();
      plVar8 = (long *)puVar10[1];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return puVar10;
    }
    uVar5 = (long)uVar6 >> 2;
    if ((ulong)((long)uVar6 >> 2) <= param_4) {
      uVar5 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a0cb3e4(param_1,uVar5);
    puVar9 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar4 = puVar9;
      _memmove(puVar9,param_2,param_3);
    }
    param_3 = (long)puVar9 + param_3;
  }
  else {
    puVar10 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar10 - (long)puVar9 >> 3) < param_4) {
      lVar7 = param_2 + ((long)puVar10 - (long)puVar9);
      if (puVar10 != puVar9) {
        _memmove(puVar9,param_2);
        puVar10 = (undefined8 *)param_1[1];
        puVar4 = puVar9;
      }
      param_3 = param_3 - lVar7;
      if (param_3 != 0) {
        puVar4 = puVar10;
        _memmove(puVar10,lVar7,param_3);
      }
      param_3 = (long)puVar10 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar4 = puVar9;
        _memmove(puVar9,param_2,param_3);
      }
      param_3 = (long)puVar9 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar4;
}



/* Entry: 10a0cb3e4; end: 10a0cb473;  */

long * FUN_10a0cb3e4(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 >> 0x3d == 0) {
    plVar5 = param_1;
    FUN_10a0cabbc();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_2);
    return plVar5;
  }
  FUN_10a0caba8();
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



/* Entry: 10a0cb474; end: 10a0cb98b;  */

void FUN_10a0cb474(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 **ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puStack_d8;
  undefined4 **ppuStack_d0;
  undefined4 **ppuStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  
  puStack_d8 = (undefined4 *)0x0;
  ppuStack_d0 = (undefined4 **)0x0;
  ppuStack_c8 = (undefined4 **)0x0;
  puVar8 = param_2;
  ppuVar13 = ppuStack_d0;
  for (; ppuStack_d0 = ppuVar13, param_2 != param_3; param_2 = param_2 + 8) {
    puVar9 = *(undefined4 **)(param_2 + 2);
    uVar16 = *puVar9;
    uVar15 = puVar9[1];
    uVar14 = puVar9[2];
    if (ppuVar13 < ppuStack_c8) {
      *(undefined4 *)ppuVar13 = *param_2;
      *(undefined4 *)((long)ppuVar13 + 4) = uVar16;
      *(undefined4 *)(ppuVar13 + 1) = uVar15;
      *(undefined4 *)((long)ppuVar13 + 0xc) = uVar14;
      ppuVar13 = ppuVar13 + 2;
    }
    else {
      lVar12 = (long)ppuVar13 - (long)puStack_d8;
      uVar1 = (lVar12 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_10a0cb9f8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0cb918);
        (*pcVar4)();
      }
      uVar10 = (long)ppuStack_c8 - (long)puStack_d8 >> 3;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)ppuStack_c8 - (long)puStack_d8)) {
        uVar10 = 0xfffffffffffffff;
      }
      ppuVar5 = &puStack_d8;
      FUN_10a0cba0c();
      puVar9 = (undefined4 *)((long)ppuVar5 + lVar12);
      *puVar9 = *param_2;
      puVar9[1] = uVar16;
      puVar9[2] = uVar15;
      puVar9[3] = uVar14;
      ppuVar13 = (undefined4 **)(puVar9 + 4);
      puVar9 = (undefined4 *)((long)puVar9 - ((long)ppuStack_d0 - (long)puStack_d8));
      puVar8 = puStack_d8;
      _memcpy(puVar9);
      bVar3 = puStack_d8 != (undefined4 *)0x0;
      puStack_d8 = puVar9;
      ppuStack_c8 = ppuVar5 + uVar10 * 2;
      if (bVar3) {
        ppuStack_d0 = ppuVar13;
        __ZdlPv();
      }
    }
  }
  if (param_4 == 0) {
    plVar6 = (long *)0x138;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110ba1438;
    plVar11 = plVar6 + 3;
    plVar7 = plVar6;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar11,0,plVar7,puVar8);
    plVar6[0x26] = 0;
    plVar6[0x23] = 0;
    plVar6[0x22] = 0;
    plVar6[0x25] = 0;
    plVar6[0x24] = 0;
    plVar6[0x21] = 0;
    plVar6[0x20] = 0;
    plVar6[3] = (long)&PTR_DAT_110c42050;
    plVar6[5] = (long)&PTR_FUN_110c42100;
    plVar6[10] = (long)&PTR_DAT_110c42158;
    plVar6[0x1f] = (long)&PTR_FUN_110c42178;
    plStack_90 = plVar11;
    plStack_88 = plVar6;
    FUN_10a0cbbac(&plStack_90,plVar6 + 8,plVar11);
    FUN_10a0cba40(param_1,&plStack_90);
    if (plStack_88 == (long *)0x0) goto LAB_10a0cb864;
    plVar11 = plStack_88 + 1;
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_88;
    } while (cVar2 != '\0');
  }
  else {
    lVar12 = *(long *)(param_4 + 0x858);
    plVar11 = *(long **)(param_4 + 0x860);
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)0x120;
    lStack_c0 = lVar12;
    plStack_b8 = plVar11;
    __Znwm();
    plVar7 = plVar6;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar6,param_4,plVar7,puVar8);
    plVar6[0x23] = 0;
    plVar6[0x20] = 0;
    plVar6[0x1f] = 0;
    plVar6[0x1e] = 0;
    plVar6[0x1d] = 0;
    plVar6[0x22] = 0;
    plVar6[0x21] = 0;
    *plVar6 = (long)&PTR_DAT_110c42050;
    plVar6[2] = (long)&PTR_FUN_110c42100;
    plVar6[7] = (long)&PTR_DAT_110c42158;
    plVar6[0x1c] = (long)&PTR_FUN_110c42178;
    lStack_b0 = lVar12;
    plStack_a8 = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar11 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
    plVar7 = (long *)0x30;
    lStack_a0 = lVar12;
    plStack_98 = plVar11;
    plStack_90 = plVar6;
    __Znwm();
    lStack_a0 = 0;
    plStack_98 = (long *)0x0;
    *plVar7 = (long)&PTR_DAT_110ba13d8;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)plVar6;
    plVar7[4] = lVar12;
    plVar7[5] = (long)plVar11;
    plStack_88 = plVar7;
    FUN_10a0cbbac(&plStack_90,plVar6 + 5,plVar6);
    FUN_10a0cba40(param_1,&plStack_90);
    plVar11 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (plStack_98 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar11 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if ((lStack_c0 != 0) && (plVar11 = (long *)*param_1, plVar11 != (long *)0x0)) {
      plStack_88 = (long *)param_1[1];
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_90 = plVar11;
      FUN_10aa88c30(lStack_c0,&plStack_90);
      plVar11 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
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
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    if (plStack_b8 == (long *)0x0) goto LAB_10a0cb864;
    plVar11 = plStack_b8 + 1;
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_b8;
    } while (cVar2 != '\0');
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a0cb864:
  FUN_10a0cb98c(*param_1 + 0xe0,&puStack_d8);
  if (puStack_d8 != (undefined4 *)0x0) {
    ppuStack_d0 = (undefined4 **)puStack_d8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a0cb98c; end: 10a0cb9f7;  */

void FUN_10a0cb98c(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  if ((long *)(param_1 + 8) != param_2) {
    FUN_10a0cbdbc((long *)(param_1 + 8),*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  }
  if (*(undefined4 **)(param_1 + 8) == *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-4];
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10a0cb9f8; end: 10a0cba0b;  */

void FUN_10a0cb9f8(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    plVar4 = (long *)0x90;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110b9fe30;
    lStack_70 = *param_2;
    plStack_60 = plVar4 + 3;
    plVar4[4] = param_2[1];
    *plStack_60 = lStack_70;
    plVar4[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0x32aaaba7;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    *plVar3 = lStack_70;
    plVar3[1] = (long)plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_68 = plVar4;
    plStack_58 = plVar4;
    func_0x00010a053e8c(plStack_60,&lStack_70);
    plVar3 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_60 != 0) {
      func_0x00010a053ee8(*plStack_60,&plStack_60);
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 10a0cba0c; end: 10a0cba3f;  */

void FUN_10a0cba0c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    plVar3 = (long *)0x90;
    __Znwm();
    plVar4 = plVar3 + 1;
    *plVar4 = 0;
    *plVar3 = (long)&PTR_FUN_110b9fe30;
    lStack_60 = *param_2;
    plStack_50 = plVar3 + 3;
    plVar3[4] = param_2[1];
    *plStack_50 = lStack_60;
    plVar3[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0x32aaaba7;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[0xd] = 0;
    plVar3[0xc] = 0;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    *param_1 = lStack_60;
    param_1[1] = (long)plVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_58 = plVar3;
    plStack_48 = plVar3;
    func_0x00010a053e8c(plStack_50,&lStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_50 != 0) {
      func_0x00010a053ee8(*plStack_50,&plStack_50);
    }
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 10a0cba40; end: 10a0cbba3;  */

void FUN_10a0cba40(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a0cbba4; end: 10a0cbbab;  */

void FUN_10a0cbba4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0cbba8);
  (*pcVar1)();
}



/* Entry: 10a0cbbac; end: 10a0cbccb;  */

void FUN_10a0cbbac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10a0cbccc; end: 10a0cbd0b;  */

void FUN_10a0cbccc(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0cbd0c; end: 10a0cbd47;  */

long FUN_10a0cbd0c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba1418);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0cbd48; end: 10a0cbd5b;  */

void FUN_10a0cbd48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cbd5c; end: 10a0cbd7b;  */

void FUN_10a0cbd5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba1438;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cbd7c; end: 10a0cbdb7;  */

undefined8 * FUN_10a0cbd7c(long param_1)

{
  *(undefined ***)(param_1 + 0xf8) = &PTR____cxa_pure_virtual_110ba1b68;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a0cbdb8; end: 10a0cbdbb;  */

void FUN_10a0cbdb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cbdbc; end: 10a0cbee3;  */

undefined8 * FUN_10a0cbdbc(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((ulong)((long)(uVar6 - (long)puVar9) >> 4) < param_4) {
    puVar10 = param_1;
    uVar5 = param_2;
    if (puVar9 != (undefined8 *)0x0) {
      param_1[1] = puVar9;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar10 = puVar9;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a0cb9f8();
      if (uVar5 >> 0x3c == 0) {
        puVar4 = puVar10;
        FUN_10a0cba0c();
        *puVar10 = puVar4;
        puVar10[1] = puVar4;
        puVar10[2] = puVar4 + uVar5 * 2;
        return puVar4;
      }
      FUN_10a0cb9f8();
      plVar8 = (long *)puVar10[1];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return puVar10;
    }
    uVar5 = (long)uVar6 >> 3;
    if ((ulong)((long)uVar6 >> 3) <= param_4) {
      uVar5 = param_4;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar5 = 0xfffffffffffffff;
    }
    FUN_10a0cbee4(param_1,uVar5);
    puVar9 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar4 = puVar9;
      _memmove(puVar9,param_2,param_3);
    }
    param_3 = (long)puVar9 + param_3;
  }
  else {
    puVar10 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar10 - (long)puVar9 >> 4) < param_4) {
      lVar7 = param_2 + ((long)puVar10 - (long)puVar9);
      if (puVar10 != puVar9) {
        _memmove(puVar9,param_2);
        puVar10 = (undefined8 *)param_1[1];
        puVar4 = puVar9;
      }
      param_3 = param_3 - lVar7;
      if (param_3 != 0) {
        puVar4 = puVar10;
        _memmove(puVar10,lVar7,param_3);
      }
      param_3 = (long)puVar10 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar4 = puVar9;
        _memmove(puVar9,param_2,param_3);
      }
      param_3 = (long)puVar9 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar4;
}



/* Entry: 10a0cbee4; end: 10a0cc117;  */

long * FUN_10a0cbee4(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 >> 0x3c == 0) {
    plVar5 = param_1;
    FUN_10a0cba0c();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_2 * 2);
    return plVar5;
  }
  FUN_10a0cb9f8();
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



/* Entry: 10a0cc118; end: 10a0cc12b;  */

void FUN_10a0cc118(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((long *)0xccccccccccccccc < param_2) {
    func_0x000109ffded8();
    plVar4 = (long *)0x90;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110b9fe30;
    lStack_70 = *param_2;
    plStack_60 = plVar4 + 3;
    plVar4[4] = param_2[1];
    *plStack_60 = lStack_70;
    plVar4[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0x32aaaba7;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    *plVar3 = lStack_70;
    plVar3[1] = (long)plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_68 = plVar4;
    plStack_58 = plVar4;
    func_0x00010a053e8c(plStack_60,&lStack_70);
    plVar3 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_60 != 0) {
      func_0x00010a053ee8(*plStack_60,&plStack_60);
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 * 0x14);
  return;
}



/* Entry: 10a0cc12c; end: 10a0cc16b;  */

void FUN_10a0cc12c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((long *)0xccccccccccccccc < param_2) {
    func_0x000109ffded8();
    plVar3 = (long *)0x90;
    __Znwm();
    plVar4 = plVar3 + 1;
    *plVar4 = 0;
    *plVar3 = (long)&PTR_FUN_110b9fe30;
    lStack_60 = *param_2;
    plStack_50 = plVar3 + 3;
    plVar3[4] = param_2[1];
    *plStack_50 = lStack_60;
    plVar3[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0x32aaaba7;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[0xd] = 0;
    plVar3[0xc] = 0;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    *param_1 = lStack_60;
    param_1[1] = (long)plVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_58 = plVar3;
    plStack_48 = plVar3;
    func_0x00010a053e8c(plStack_50,&lStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_50 != 0) {
      func_0x00010a053ee8(*plStack_50,&plStack_50);
    }
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 * 0x14);
  return;
}



/* Entry: 10a0cc16c; end: 10a0cc2cf;  */

void FUN_10a0cc16c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a0cc2d0; end: 10a0cc2d7;  */

void FUN_10a0cc2d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0cc2d4);
  (*pcVar1)();
}



/* Entry: 10a0cc2d8; end: 10a0cc3f7;  */

void FUN_10a0cc2d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10a0cc3f8; end: 10a0cc437;  */

void FUN_10a0cc3f8(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0cc438; end: 10a0cc473;  */

long FUN_10a0cc438(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba14c8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0cc474; end: 10a0cc487;  */

void FUN_10a0cc474(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cc488; end: 10a0cc4a7;  */

void FUN_10a0cc488(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba14e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cc4a8; end: 10a0cc4e3;  */

undefined8 * FUN_10a0cc4a8(long param_1)

{
  *(undefined ***)(param_1 + 0xf8) = &PTR____cxa_pure_virtual_110ba1b98;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a0cc4e4; end: 10a0cc4e7;  */

void FUN_10a0cc4e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cc4e8; end: 10a0cc63f;  */

undefined8 * FUN_10a0cc4e8(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar5 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((ulong)((lVar5 - (long)puVar8 >> 2) * -0x3333333333333333) < param_4) {
    puVar9 = param_1;
    uVar6 = param_2;
    if (puVar8 != (undefined8 *)0x0) {
      param_1[1] = puVar8;
      __ZdlPv();
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar9 = puVar8;
    }
    if (0xccccccccccccccc < param_4) {
      FUN_10a0cc118();
      if (uVar6 < 0xccccccccccccccd) {
        puVar4 = puVar9;
        FUN_10a0cc12c();
        *puVar9 = puVar4;
        puVar9[1] = puVar4;
        puVar9[2] = (long)puVar4 + uVar6 * 0x14;
        return puVar4;
      }
      FUN_10a0cc118();
      plVar7 = (long *)puVar9[1];
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return puVar9;
    }
    uVar6 = (lVar5 >> 2) * -0x6666666666666666;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar5 >> 2) * -0x3333333333333333)) {
      uVar6 = 0xccccccccccccccc;
    }
    FUN_10a0cc640(param_1,uVar6);
    puVar8 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar4 = puVar8;
      _memmove(puVar8,param_2,param_3);
    }
    param_3 = (long)puVar8 + param_3;
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar9 - (long)puVar8 >> 2) * -0x3333333333333333) < param_4) {
      lVar5 = param_2 + ((long)puVar9 - (long)puVar8);
      if (puVar9 != puVar8) {
        _memmove(puVar8,param_2);
        puVar9 = (undefined8 *)param_1[1];
        puVar4 = puVar8;
      }
      param_3 = param_3 - lVar5;
      if (param_3 != 0) {
        puVar4 = puVar9;
        _memmove(puVar9,lVar5,param_3);
      }
      param_3 = (long)puVar9 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar4 = puVar8;
        _memmove(puVar8,param_2,param_3);
      }
      param_3 = (long)puVar8 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar4;
}



/* Entry: 10a0cc640; end: 10a0cc733;  */

long * FUN_10a0cc640(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 < 0xccccccccccccccd) {
    plVar5 = param_1;
    FUN_10a0cc12c();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)plVar5 + param_2 * 0x14;
    return plVar5;
  }
  FUN_10a0cc118();
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



/* Entry: 10a0cc734; end: 10a0cc7a3;  */

void FUN_10a0cc734(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
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
  return;
}



/* Entry: 10a0cc7a4; end: 10a0cc81b;  */

void FUN_10a0cc7a4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cb3e4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0cc81c; end: 10a0cc893;  */

void FUN_10a0cc81c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cbee4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0cc894; end: 10a0cc90b;  */

void FUN_10a0cc894(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cc640(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0cc90c; end: 10a0cca3f;  */

undefined8 * FUN_10a0cc90c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (param_3 == (long *)0x0) {
    uVar9 = *param_4;
    uVar8 = param_4[1];
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar9 = *param_4;
    uVar8 = param_4[1];
    *param_1 = param_2;
    param_1[1] = param_3;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (0x7ffffffffffffff7 < uVar8) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0cca24);
    (*pcVar5)();
  }
  if (uVar8 < 0x17) {
    puVar6 = param_1 + 2;
    *(char *)((long)param_1 + 0x27) = (char)uVar8;
    if (uVar8 == 0) goto LAB_10a0cc9c4;
  }
  else {
    puVar2 = (undefined8 *)0x19;
    if ((uVar8 | 7) != 0x17) {
      puVar2 = (undefined8 *)((uVar8 | 7) + 1);
    }
    puVar6 = puVar2;
    __Znwm();
    param_1[3] = uVar8;
    param_1[4] = (ulong)puVar2 | 0x8000000000000000;
    param_1[2] = puVar6;
  }
  _memmove(puVar6,uVar9,uVar8);
LAB_10a0cc9c4:
  *(undefined1 *)((long)puVar6 + uVar8) = 0;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  return param_1;
}



/* Entry: 10a0cca40; end: 10a0cca53;  */

undefined1  [16] FUN_10a0cca40(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f63805b;
  FUN_109ffde64();
  if (puVar4 < (undefined *)0x666666666666667) {
    lVar5 = (long)puVar4 * 0x28;
    __Znwm(lVar5);
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  if ((char)puVar4[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar4 + 0x10));
  }
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a0cca54; end: 10a0ccb13;  */

undefined1  [16] FUN_10a0cca54(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0x666666666666667) {
    lVar4 = param_1 * 0x28;
    __Znwm(lVar4);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a0ccb14; end: 10a0ccb23;  */

void FUN_10a0ccb14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1e48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0ccb24; end: 10a0ccb43;  */

void FUN_10a0ccb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1e48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0ccb44; end: 10a0ccb4f;  */

void FUN_10a0ccb44(long param_1)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_110ba1bc8;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0ccb50; end: 10a0ccbfb;  */

void FUN_10a0ccb50(undefined8 *param_1)

{
  param_1[9] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 10);
  *param_1 = &PTR____cxa_pure_virtual_110ba1bc8;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0ccbfc; end: 10a0ccdc7;  */

void FUN_10a0ccbfc(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  
  lStack_88 = 0;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plVar10 = plStack_80;
  do {
    plStack_80 = plVar10;
    if (param_2 == param_3) {
      puVar5 = (undefined8 *)0x80;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110ba1da8;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      *(undefined1 *)(puVar5 + 0xc) = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar7 = puVar5 + 3;
      *puVar7 = &PTR_FUN_110c3e500;
      puVar5[10] = 0;
      puVar5[0xb] = &PTR_FUN_110c3e568;
      puVar5[0xd] = &PTR_FUN_110c3e5d8;
      *param_1 = puVar7;
      param_1[1] = puVar5;
      FUN_10a0cb98c(puVar7,&lStack_88);
      if (lStack_88 != 0) {
        plStack_80 = (long *)lStack_88;
        __ZdlPv();
      }
      return;
    }
    puVar6 = *(undefined4 **)(param_2 + 2);
    uVar13 = *puVar6;
    uVar12 = puVar6[1];
    uVar11 = puVar6[2];
    if (plVar10 < plStack_78) {
      *(undefined4 *)plVar10 = *param_2;
      *(undefined4 *)((long)plVar10 + 4) = uVar13;
      *(undefined4 *)(plVar10 + 1) = uVar12;
      *(undefined4 *)((long)plVar10 + 0xc) = uVar11;
      plVar10 = plVar10 + 2;
    }
    else {
      lVar9 = (long)plVar10 - lStack_88;
      uVar1 = (lVar9 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_10a0cb9f8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0ccd94);
        (*pcVar3)();
      }
      uVar8 = (long)plStack_78 - lStack_88 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)plStack_78 - lStack_88)) {
        uVar8 = 0xfffffffffffffff;
      }
      plVar4 = &lStack_88;
      FUN_10a0cba0c();
      puVar6 = (undefined4 *)((long)plVar4 + lVar9);
      *puVar6 = *param_2;
      puVar6[1] = uVar13;
      puVar6[2] = uVar12;
      puVar6[3] = uVar11;
      plVar10 = (long *)(puVar6 + 4);
      lVar9 = (long)puVar6 - ((long)plStack_80 - lStack_88);
      _memcpy(lVar9);
      bVar2 = lStack_88 != 0;
      lStack_88 = lVar9;
      plStack_78 = plVar4 + uVar8 * 2;
      if (bVar2) {
        plStack_80 = plVar10;
        __ZdlPv();
      }
    }
    param_2 = param_2 + 8;
  } while( true );
}



/* Entry: 10a0ccdc8; end: 10a0ccdd7;  */

void FUN_10a0ccdc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1da8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0ccdd8; end: 10a0ccdf7;  */

void FUN_10a0ccdd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1da8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0ccdf8; end: 10a0cce03;  */

void FUN_10a0ccdf8(long param_1)

{
  *(undefined ***)(param_1 + 0x68) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_110ba1b68;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0cce04; end: 10a0cceaf;  */

void FUN_10a0cce04(undefined8 *param_1)

{
  param_1[10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xb);
  *param_1 = &PTR____cxa_pure_virtual_110ba1b68;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0cceb0; end: 10a0ccebf;  */

void FUN_10a0cceb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1df8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0ccec0; end: 10a0ccedf;  */

void FUN_10a0ccec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba1df8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0ccee0; end: 10a0cceeb;  */

void FUN_10a0ccee0(long param_1)

{
  *(undefined ***)(param_1 + 0x70) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x78);
  *(undefined ***)(param_1 + 0x18) = &PTR____cxa_pure_virtual_110ba1b98;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0cceec; end: 10a0ccf97;  */

void FUN_10a0cceec(undefined8 *param_1)

{
  param_1[0xb] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xc);
  *param_1 = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0ccf98; end: 10a0cd0cb;  */

undefined8 * FUN_10a0ccf98(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (param_3 == (long *)0x0) {
    uVar9 = *param_4;
    uVar8 = param_4[1];
    *param_1 = param_2;
    param_1[1] = 0;
  }
  else {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar9 = *param_4;
    uVar8 = param_4[1];
    *param_1 = param_2;
    param_1[1] = param_3;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (0x7ffffffffffffff7 < uVar8) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0cd0b0);
    (*pcVar5)();
  }
  if (uVar8 < 0x17) {
    puVar6 = param_1 + 2;
    *(char *)((long)param_1 + 0x27) = (char)uVar8;
    if (uVar8 == 0) goto LAB_10a0cd050;
  }
  else {
    puVar2 = (undefined8 *)0x19;
    if ((uVar8 | 7) != 0x17) {
      puVar2 = (undefined8 *)((uVar8 | 7) + 1);
    }
    puVar6 = puVar2;
    __Znwm();
    param_1[3] = uVar8;
    param_1[4] = (ulong)puVar2 | 0x8000000000000000;
    param_1[2] = puVar6;
  }
  _memmove(puVar6,uVar9,uVar8);
LAB_10a0cd050:
  *(undefined1 *)((long)puVar6 + uVar8) = 0;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  return param_1;
}



/* Entry: 10a0cd0cc; end: 10a0cd0df;  */

undefined1  [16] FUN_10a0cd0cc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f63805b;
  FUN_109ffde64();
  if (puVar4 < (undefined *)0x666666666666667) {
    lVar5 = (long)puVar4 * 0x28;
    __Znwm(lVar5);
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  if ((char)puVar4[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar4 + 0x10));
  }
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a0cd0e0; end: 10a0cd1df;  */

undefined1  [16] FUN_10a0cd0e0(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0x666666666666667) {
    lVar4 = param_1 * 0x28;
    __Znwm(lVar4);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a0cd1e0; end: 10a0cd247;  */

void FUN_10a0cd1e0(long *param_1)

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
        lVar2 = lVar2 + -0x28;
        func_0x00010a0cd124(lVar2);
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



/* Entry: 10a0cd248; end: 10a0cd2f7;  */

long * FUN_10a0cd248(long *param_1)

{
  long lVar1;
  
  func_0x00010a0cd280(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0cd2f8; end: 10a0cd367;  */

bool FUN_10a0cd2f8(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    _memcmp(plVar6,plVar3,uVar1);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10a0cd368; end: 10a0cd3e3;  */

long * FUN_10a0cd368(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a0cd3e4; end: 10a0cd3f7;  */

ulong * FUN_10a0cd3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  byte *extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  ulong auStack_148 [3];
  ulong *puStack_130;
  long alStack_128 [3];
  long *plStack_110;
  undefined1 auStack_100 [152];
  long lStack_68;
  
  puVar2 = &UNK_10f63805b;
  FUN_109ffdddc();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  pbVar10 = extraout_x8 + 8;
  pbVar10[0] = 0;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar10[4] = 0;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 0;
  FUN_10a0cd658(auStack_148,param_3);
  func_0x000109888f90(alStack_128,puVar2,param_2,auStack_148,param_4,param_5);
  func_0x000109889078(alStack_128,1,extraout_x8);
  func_0x00010988a49c(auStack_100);
  if (plStack_110 == alStack_128) {
    lVar7 = 0x20;
LAB_10a0cd4a4:
    (**(code **)(*plStack_110 + lVar7))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_10a0cd4a4;
  }
  puVar3 = puStack_130;
  if (puStack_130 == auStack_148) {
    lVar7 = 0x20;
LAB_10a0cd4d0:
    (**(code **)(*puStack_130 + lVar7))();
  }
  else if (puStack_130 != (ulong *)0x0) {
    lVar7 = 0x28;
    goto LAB_10a0cd4d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000109889518(alStack_128);
  if (puStack_130 == auStack_148) {
    lVar7 = 0x20;
  }
  else {
    if (puStack_130 == (ulong *)0x0) goto LAB_10a0cd55c;
    lVar7 = 0x28;
  }
  (**(code **)(*puStack_130 + lVar7))();
LAB_10a0cd55c:
  plVar6 = (long *)(ulong)*extraout_x8;
  func_0x000109380ffc(pbVar10);
  __Unwind_Resume();
  puVar1 = (undefined1 *)puVar3[1];
  if (puVar1 < (undefined1 *)puVar3[2]) {
    puVar13 = puVar1 + 1;
    *puVar1 = (char)*plVar6;
    puVar4 = puVar3;
  }
  else {
    puVar11 = (ulong *)*puVar3;
    lVar7 = (long)puVar1 - (long)puVar11;
    puVar12 = (ulong *)(lVar7 + 1);
    if ((long)puVar12 < 0) {
      FUN_10a0cd644();
      puVar3 = (ulong *)&UNK_10f63805b;
      FUN_109ffde64();
      plVar5 = (long *)plVar6[3];
      if (plVar5 == (long *)0x0) {
        puVar3[3] = 0;
      }
      else if (plVar5 == plVar6) {
        puVar3[3] = (ulong)puVar3;
        (**(code **)(*(long *)plVar6[3] + 0x18))((long *)plVar6[3],puVar3);
      }
      else {
        (**(code **)(*plVar5 + 0x10))();
        puVar3[3] = (ulong)plVar5;
      }
      return puVar3;
    }
    uVar8 = (long)puVar3[2] - (long)puVar11;
    puVar9 = (ulong *)(uVar8 * 2);
    if (puVar9 < puVar12 || (long)puVar9 - (long)puVar12 == 0) {
      puVar9 = puVar12;
    }
    if (0x3ffffffffffffffe < uVar8) {
      puVar9 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar9 == (ulong *)0x0) {
      puVar12 = (ulong *)0x0;
    }
    else {
      puVar12 = puVar9;
      __Znwm();
    }
    puVar13 = (undefined1 *)((long)puVar12 + lVar7) + 1;
    *(undefined1 *)((long)puVar12 + lVar7) = (char)*plVar6;
    puVar4 = puVar12;
    _memcpy(puVar12,puVar11,lVar7);
    *puVar3 = (ulong)puVar12;
    puVar3[1] = (ulong)puVar13;
    puVar3[2] = (long)puVar12 + (long)puVar9;
    if (puVar11 != (ulong *)0x0) {
      __ZdlPv(puVar11);
      puVar4 = puVar11;
    }
  }
  puVar3[1] = (ulong)puVar13;
  return puVar4;
}



/* Entry: 10a0cd3f8; end: 10a0cd56f;  */

ulong * FUN_10a0cd3f8(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  ulong auStack_138 [3];
  ulong *puStack_120;
  long alStack_118 [3];
  long *plStack_100;
  undefined1 auStack_f0 [152];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  pbVar9 = param_1 + 8;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  FUN_10a0cd658(auStack_138,param_4);
  func_0x000109888f90(alStack_118,param_2,param_3,auStack_138,param_5,param_6);
  func_0x000109889078(alStack_118,1,param_1);
  func_0x00010988a49c(auStack_f0);
  if (plStack_100 == alStack_118) {
    lVar6 = 0x20;
LAB_10a0cd4a4:
    (**(code **)(*plStack_100 + lVar6))();
  }
  else if (plStack_100 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_10a0cd4a4;
  }
  puVar2 = puStack_120;
  if (puStack_120 == auStack_138) {
    lVar6 = 0x20;
LAB_10a0cd4d0:
    (**(code **)(*puStack_120 + lVar6))();
  }
  else if (puStack_120 != (ulong *)0x0) {
    lVar6 = 0x28;
    goto LAB_10a0cd4d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000109889518(alStack_118);
  if (puStack_120 == auStack_138) {
    lVar6 = 0x20;
  }
  else {
    if (puStack_120 == (ulong *)0x0) goto LAB_10a0cd55c;
    lVar6 = 0x28;
  }
  (**(code **)(*puStack_120 + lVar6))();
LAB_10a0cd55c:
  plVar5 = (long *)(ulong)*param_1;
  func_0x000109380ffc(pbVar9);
  __Unwind_Resume();
  puVar1 = (undefined1 *)puVar2[1];
  if (puVar1 < (undefined1 *)puVar2[2]) {
    puVar12 = puVar1 + 1;
    *puVar1 = (char)*plVar5;
    puVar3 = puVar2;
  }
  else {
    puVar10 = (ulong *)*puVar2;
    lVar6 = (long)puVar1 - (long)puVar10;
    puVar11 = (ulong *)(lVar6 + 1);
    if ((long)puVar11 < 0) {
      FUN_10a0cd644();
      puVar2 = (ulong *)&UNK_10f63805b;
      FUN_109ffde64();
      plVar4 = (long *)plVar5[3];
      if (plVar4 == (long *)0x0) {
        puVar2[3] = 0;
      }
      else if (plVar4 == plVar5) {
        puVar2[3] = (ulong)puVar2;
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],puVar2);
      }
      else {
        (**(code **)(*plVar4 + 0x10))();
        puVar2[3] = (ulong)plVar4;
      }
      return puVar2;
    }
    uVar7 = (long)puVar2[2] - (long)puVar10;
    puVar8 = (ulong *)(uVar7 * 2);
    if (puVar8 < puVar11 || (long)puVar8 - (long)puVar11 == 0) {
      puVar8 = puVar11;
    }
    if (0x3ffffffffffffffe < uVar7) {
      puVar8 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar8 == (ulong *)0x0) {
      puVar11 = (ulong *)0x0;
    }
    else {
      puVar11 = puVar8;
      __Znwm();
    }
    puVar12 = (undefined1 *)((long)puVar11 + lVar6) + 1;
    *(undefined1 *)((long)puVar11 + lVar6) = (char)*plVar5;
    puVar3 = puVar11;
    _memcpy(puVar11,puVar10,lVar6);
    *puVar2 = (ulong)puVar11;
    puVar2[1] = (ulong)puVar12;
    puVar2[2] = (long)puVar11 + (long)puVar8;
    if (puVar10 != (ulong *)0x0) {
      __ZdlPv(puVar10);
      puVar3 = puVar10;
    }
  }
  puVar2[1] = (ulong)puVar12;
  return puVar3;
}



/* Entry: 10a0cd570; end: 10a0cd643;  */

ulong * FUN_10a0cd570(ulong *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar9 = puVar1 + 1;
    *puVar1 = (char)*param_2;
    puVar2 = param_1;
  }
  else {
    puVar6 = (ulong *)*param_1;
    lVar7 = (long)puVar1 - (long)puVar6;
    puVar8 = (ulong *)(lVar7 + 1);
    if ((long)puVar8 < 0) {
      FUN_10a0cd644();
      puVar8 = (ulong *)&UNK_10f63805b;
      FUN_109ffde64();
      plVar3 = (long *)param_2[3];
      if (plVar3 == (long *)0x0) {
        puVar8[3] = 0;
      }
      else if (plVar3 == param_2) {
        puVar8[3] = (ulong)puVar8;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],puVar8);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        puVar8[3] = (ulong)plVar3;
      }
      return puVar8;
    }
    uVar4 = (long)param_1[2] - (long)puVar6;
    puVar5 = (ulong *)(uVar4 * 2);
    if (puVar5 < puVar8 || (long)puVar5 - (long)puVar8 == 0) {
      puVar5 = puVar8;
    }
    if (0x3ffffffffffffffe < uVar4) {
      puVar5 = (ulong *)0x7fffffffffffffff;
    }
    if (puVar5 == (ulong *)0x0) {
      puVar8 = (ulong *)0x0;
    }
    else {
      puVar8 = puVar5;
      __Znwm();
    }
    puVar9 = (undefined1 *)((long)puVar8 + lVar7) + 1;
    *(undefined1 *)((long)puVar8 + lVar7) = (char)*param_2;
    puVar2 = puVar8;
    _memcpy(puVar8,puVar6,lVar7);
    *param_1 = (ulong)puVar8;
    param_1[1] = (ulong)puVar9;
    param_1[2] = (long)puVar8 + (long)puVar5;
    if (puVar6 != (ulong *)0x0) {
      __ZdlPv(puVar6);
      puVar2 = puVar6;
    }
  }
  param_1[1] = (ulong)puVar9;
  return puVar2;
}



/* Entry: 10a0cd644; end: 10a0cd657;  */

undefined * FUN_10a0cd644(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(puVar1 + 0x18) = 0;
  }
  else if (plVar2 == param_2) {
    *(undefined **)(puVar1 + 0x18) = puVar1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],puVar1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    *(long **)(puVar1 + 0x18) = plVar2;
  }
  return puVar1;
}



/* Entry: 10a0cd658; end: 10a0cd8c3;  */

long FUN_10a0cd658(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10a0cd8c4; end: 10a0cd967;  */

long FUN_10a0cd8c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xff) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe8));
  }
  if (*(char *)(param_1 + 0xe7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
  }
  func_0x00010a0c9b7c(param_1 + 0x58);
  func_0x00010a0c9b2c(*(undefined8 *)(param_1 + 0x48));
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x30) != lVar3) {
      do {
        lVar2 = lVar1 + -0x18;
        func_0x00010951ec08(lVar2,*(undefined8 *)(lVar1 + -0x10));
        lVar1 = lVar2;
      } while (lVar2 != lVar3);
      lVar2 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x30) = lVar3;
    __ZdlPv(lVar2);
  }
  func_0x00010951ec08(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10a0cd968; end: 10a0cdaf7;  */

undefined8 * FUN_10a0cd968(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  if (*(char *)((long)param_1 + 0x297) < '\0') {
    __ZdlPv(param_1[0x50]);
  }
  func_0x00010a0c9b7c(param_1 + 0x41);
  func_0x00010a0c9b2c(param_1[0x3f]);
  if (*(char *)((long)param_1 + 0x1ef) < '\0') {
    __ZdlPv(param_1[0x3b]);
  }
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    __ZdlPv(param_1[0x38]);
  }
  func_0x00010a0c9b7c(param_1 + 0x29);
  func_0x00010a0c9b2c(param_1[0x27]);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  func_0x00010a0c9b7c(param_1 + 0xd);
  func_0x00010a0c9b2c(param_1[0xb]);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a0cdaf8; end: 10a0cde2b;  */

undefined8 *
FUN_10a0cdaf8(ulong *param_1,long param_2,ulong param_3,long *param_4,int param_5,long param_6)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long alStack_b8 [2];
  char cStack_a1;
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  plVar4 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar4 = param_4;
  }
  FUN_10a0a87b8(param_3,plVar4,&uStack_60);
  if ((param_3 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
    if ((param_2 != 0) && (param_5 != 0)) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_a0,&DAT_10f638984,param_4);
      pppuVar3 = &ppuStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar3,&UNK_10f6389a3,0x15);
      puStack_78 = pppuVar3[1];
      ppuStack_80 = *pppuVar3;
      puStack_70 = pppuVar3[2];
      pppuVar3[1] = (undefined8 **)0x0;
      pppuVar3[2] = (undefined8 **)0x0;
      *pppuVar3 = (undefined8 **)0x0;
      ppuVar2 = (undefined8 **)puStack_78;
      pppuVar3 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)puStack_70) {
        ppuVar2 = (undefined8 **)((ulong)puStack_70 >> 0x38);
        pppuVar3 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppuVar3,ppuVar2);
      if ((long)puStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
      if ((long)uStack_90 < 0) {
        __ZdlPv(ppuStack_a0);
      }
      uVar1 = *(ulong *)(param_6 + 8);
      if (-1 < (char)*(byte *)(param_6 + 0x17)) {
        uVar1 = (ulong)*(byte *)(param_6 + 0x17);
      }
      if (uVar1 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,&UNK_10f58b966,2);
      }
      else {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&ppuStack_a0,&UNK_10f6389bc,param_6);
        pppuVar3 = &ppuStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar3,&UNK_10f6389c2,3);
        puStack_78 = pppuVar3[1];
        ppuStack_80 = *pppuVar3;
        puStack_70 = pppuVar3[2];
        pppuVar3[1] = (undefined8 **)0x0;
        pppuVar3[2] = (undefined8 **)0x0;
        *pppuVar3 = (undefined8 **)0x0;
        ppuVar2 = (undefined8 **)puStack_78;
        pppuVar3 = (undefined8 ***)ppuStack_80;
        if (-1 < (long)puStack_70) {
          ppuVar2 = (undefined8 **)((ulong)puStack_70 >> 0x38);
          pppuVar3 = &ppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppuVar3,ppuVar2);
        if ((long)puStack_70 < 0) {
          __ZdlPv(ppuStack_80);
        }
        if (uStack_90._7_1_ < '\0') {
          __ZdlPv(ppuStack_a0);
        }
      }
      puVar5 = (undefined8 *)0x0;
    }
  }
  else {
    ppuStack_80 = (undefined8 **)0x0;
    puStack_78 = (undefined8 *)0x0;
    puStack_70 = (undefined8 *)0x0;
    puVar5 = &uStack_60;
    func_0x00010937c560();
    func_0x00010a0a8894();
    if (((ulong)puVar5 & 1) == 0) {
      if ((param_2 != 0) && (param_5 != 0)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_b8,&DAT_10f638984,param_4);
        plVar4 = alStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar4,&UNK_10f6389c6,0x21);
        uStack_98 = plVar4[1];
        ppuStack_a0 = (undefined8 **)*plVar4;
        uStack_90 = plVar4[2];
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        uVar1 = uStack_98;
        pppuVar3 = (undefined8 ***)ppuStack_a0;
        if (-1 < (long)uStack_90) {
          uVar1 = uStack_90 >> 0x38;
          pppuVar3 = &ppuStack_a0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppuVar3,uVar1);
        if ((long)uStack_90 < 0) {
          __ZdlPv(ppuStack_a0);
        }
        if (cStack_a1 < '\0') {
          __ZdlPv(alStack_b8[0]);
        }
      }
    }
    else if (param_1 != (ulong *)0x0) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      param_1[1] = (ulong)puStack_78;
      *param_1 = (ulong)ppuStack_80;
      param_1[2] = (ulong)puStack_70;
      puStack_70 = (undefined8 *)((ulong)puStack_70 & 0xffffffffffffff);
      ppuStack_80 = (undefined8 **)((ulong)ppuStack_80 & 0xffffffffffffff00);
    }
    if ((long)puStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
  }
  return puVar5;
}



/* Entry: 10a0cde2c; end: 10a0ce5e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0cdf14) */
/* WARNING: Removing unreachable block (ram,0x00010a0cdf20) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_10a0cde2c(long param_1,byte *******param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  byte *******pppppppbStack_1d0;
  byte *******pppppppbStack_1c8;
  byte *****pppppbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  undefined1 uStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
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
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  byte ******ppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  
  iVar4 = uStack_1b0._4_4_;
  uVar2 = (undefined4)uStack_1b0;
  puStack_c8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_b0 = 0;
  bVar1 = *(byte *)param_2;
  uVar11 = (uint)bVar1;
  if (bVar1 < 4) {
    uStack_1b0._0_4_ = SUB84(param_2,0);
    uVar3 = (undefined4)uStack_1b0;
    uStack_1b0._4_4_ = (int)((ulong)param_2 >> 0x20);
    uVar5 = uStack_1b0._4_4_;
    if (bVar1 == 1) {
      pppppppbStack_130 = (byte *******)0x0;
      pppppppbStack_128 = (byte *******)0x0;
      pppppppbStack_80 = (byte *******)0x8000000000000000;
      pppppppbStack_88 = (byte *******)0x0;
      pppppppbStack_90 = (byte *******)*param_2[1];
      pppppppbStack_138 = (byte *******)&pppppppbStack_130;
      pppppppbStack_98 = param_2;
      while( true ) {
        uStack_1a8 = (byte ******)0x0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_194 = 0x80000000;
        if (*(byte *)param_2 == 2) {
          uStack_1a0 = SUB84(param_2[1][1],0);
          uStack_19c = (undefined4)((ulong)param_2[1][1] >> 0x20);
        }
        else if (*(byte *)param_2 == 1) {
          uStack_1a8 = param_2[1] + 1;
        }
        else {
          uStack_198 = 1;
          uStack_194 = 0;
          uStack_1a8 = (byte ******)0x0;
        }
        pppppppbVar10 = (byte *******)&pppppppbStack_98;
        uStack_1b0._0_4_ = uVar3;
        uStack_1b0._4_4_ = uVar5;
        func_0x00010937c708(pppppppbVar10,&uStack_1b0);
        if ((int)pppppppbVar10 != 0) break;
        pppppppbStack_150 = (byte *******)0x0;
        pppppppbStack_148 = (byte *******)0x0;
        uStack_1a8._0_4_ = 0;
        uStack_1a8._4_4_ = 0;
        uStack_1b0._0_4_ = 0;
        uStack_1b0._4_4_ = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190._0_4_ = 0;
        uStack_190._4_4_ = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_160 = 0;
        uStack_15c = 0;
        uStack_140 = 0;
        pppppppbVar10 = (byte *******)&pppppppbStack_98;
        pppppppbStack_158 = (byte *******)&pppppppbStack_150;
        func_0x00010937c560(pppppppbVar10);
        FUN_10a0cde2c(&uStack_1b0,pppppppbVar10);
        if ((char)uStack_1b0 != '\0') {
          pppppppbVar8 = (byte *******)&pppppppbStack_98;
          func_0x0001095a27d4();
          pppppppbVar10 = (byte *******)&pppppppbStack_138;
          FUN_10a0c9a50(pppppppbVar10,&ppppppbStack_a0,pppppppbVar8);
          if (*pppppppbVar10 == (byte ******)0x0) {
            pppppppbVar9 = (byte *******)0xb0;
            __Znwm();
            pppppbStack_1c0 = (byte *****)0x0;
            pppppppbStack_1d0 = pppppppbVar9;
            pppppppbStack_1c8 = (byte *******)&pppppppbStack_138;
            if (*(char *)((long)pppppppbVar8 + 0x17) < '\0') {
              func_0x000107c3192c(pppppppbVar9 + 4,*pppppppbVar8,pppppppbVar8[1]);
            }
            else {
              ppppppbVar17 = pppppppbVar8[1];
              ppppppbVar16 = *pppppppbVar8;
              pppppppbVar9[6] = pppppppbVar8[2];
              pppppppbVar9[5] = ppppppbVar17;
              pppppppbVar9[4] = ppppppbVar16;
            }
            FUN_10a0c9da0(pppppppbVar9 + 7,&uStack_1b0);
            *pppppppbVar9 = (byte ******)0x0;
            pppppppbVar9[1] = (byte ******)0x0;
            pppppppbVar9[2] = ppppppbStack_a0;
            *pppppppbVar10 = (byte ******)pppppppbVar9;
            if ((byte *******)*pppppppbStack_138 != (byte *******)0x0) {
              pppppppbVar9 = (byte *******)*pppppppbVar10;
              pppppppbStack_138 = (byte *******)*pppppppbStack_138;
            }
            func_0x000107c2b058(pppppppbStack_130,pppppppbVar9);
            pppppppbStack_128 = (byte *******)((long)pppppppbStack_128 + 1);
          }
        }
        func_0x00010a0c9b7c(&uStack_1b0);
        func_0x00010937c698(&pppppppbStack_98);
      }
      if (pppppppbStack_128 != (byte *******)0x0) {
        uStack_1b0._0_4_ = 7;
        uStack_1a8._4_4_ = 0;
        uStack_1a0 = 0;
        uStack_1b0._4_4_ = 0;
        uStack_1a8._0_4_ = 0;
        uStack_194 = 0;
        uStack_190._0_4_ = 0;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_184 = 0;
        uStack_180 = 0;
        uStack_190._4_4_ = 0;
        uStack_188 = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_17c = 0;
        uStack_178 = 0;
        uStack_164 = 0;
        uStack_160 = 0;
        uStack_16c = 0;
        uStack_168 = 0;
        uStack_15c = 0;
        pppppppbStack_158 = pppppppbStack_138;
        pppppppbStack_150 = pppppppbStack_130;
        pppppppbStack_148 = pppppppbStack_128;
        pppppppbStack_130[2] = (byte ******)&pppppppbStack_150;
        pppppppbStack_130 = (byte *******)0x0;
        pppppppbStack_128 = (byte *******)0x0;
        uStack_140 = 0;
        pppppppbStack_138 = (byte *******)&pppppppbStack_130;
        FUN_10a0ce5e4(&uStack_120,&uStack_1b0);
        func_0x00010a0c9b7c(&uStack_1b0);
      }
      func_0x00010a0c9b2c(pppppppbStack_130);
      goto joined_r0x00010a0ce2d8;
    }
    if (uVar11 == 2) {
      pppppppbStack_130 = (byte *******)0x0;
      pppppppbStack_128 = (byte *******)0x0;
      pppppppbStack_138 = (byte *******)0x0;
      lVar15 = (long)param_2[1][1] - (long)*param_2[1];
      if (lVar15 == 0) {
LAB_10a0ce32c:
        uStack_1b8 = 0x8000000000000000;
        pppppppbStack_1c8 = (byte *******)0x0;
        pppppbStack_1c0 = *param_2[1];
      }
      else {
        pppppppbVar10 = (byte *******)(lVar15 >> 4);
        if ((byte *******)0x222222222222222 < pppppppbVar10) {
          uStack_1b0._0_4_ = uVar2;
          uStack_1b0._4_4_ = iVar4;
          FUN_10a0c9770();
LAB_10a0ce558:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0ce55c);
          (*pcVar6)();
        }
        uStack_190 = (byte *******)&pppppppbStack_138;
        pppppppbVar9 = param_2;
        FUN_10a0c9784();
        pppppppbVar8 = (byte *******)
                       ((long)pppppppbVar10 + ((long)pppppppbStack_138 - (long)pppppppbStack_130));
        func_0x00010a0ce6e8(pppppppbStack_138,pppppppbStack_130,pppppppbVar8);
        uStack_1a0 = SUB84(pppppppbStack_138,0);
        uStack_19c = (undefined4)((ulong)pppppppbStack_138 >> 0x20);
        uStack_198 = SUB84(pppppppbStack_128,0);
        uStack_194 = (undefined4)((ulong)pppppppbStack_128 >> 0x20);
        uStack_1b0._0_4_ = uStack_1a0;
        uStack_1b0._4_4_ = uStack_19c;
        uStack_1a8._0_4_ = uStack_1a0;
        uStack_1a8._4_4_ = uStack_19c;
        pppppppbStack_138 = pppppppbVar8;
        pppppppbStack_130 = pppppppbVar10;
        pppppppbStack_128 = pppppppbVar10 + (long)pppppppbVar9 * 0xf;
        FUN_10a0ce750(&uStack_1b0);
        bVar1 = *(byte *)param_2;
        pppppppbStack_1c8 = (byte *******)0x0;
        pppppbStack_1c0 = (byte *****)0x0;
        uStack_1b8 = 0x8000000000000000;
        if (bVar1 == 0) {
          uStack_1b8 = 1;
        }
        else {
          if (bVar1 == 2) goto LAB_10a0ce32c;
          if (bVar1 == 1) {
            pppppppbStack_1c8 = (byte *******)*param_2[1];
          }
          else {
            uStack_1b8 = 0;
          }
        }
      }
      pppppppbStack_1d0 = param_2;
      while( true ) {
        uStack_1a8 = (byte ******)0x0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_194 = 0x80000000;
        if (*(byte *)param_2 == 2) {
          uStack_1a0 = SUB84(param_2[1][1],0);
          uStack_19c = (undefined4)((ulong)param_2[1][1] >> 0x20);
        }
        else if (*(byte *)param_2 == 1) {
          uStack_1a8 = param_2[1] + 1;
        }
        else {
          uStack_198 = 1;
          uStack_194 = 0;
          uStack_1a8 = (byte ******)0x0;
        }
        pppppppbVar10 = (byte *******)&pppppppbStack_1d0;
        uStack_1b0._0_4_ = uVar3;
        uStack_1b0._4_4_ = uVar5;
        func_0x00010937c708(pppppppbVar10,&uStack_1b0);
        pppppppbVar8 = pppppppbStack_128;
        if ((int)pppppppbVar10 != 0) break;
        pppppppbStack_150 = (byte *******)0x0;
        pppppppbStack_148 = (byte *******)0x0;
        uStack_1a8._0_4_ = 0;
        uStack_1a8._4_4_ = 0;
        uStack_1b0._0_4_ = 0;
        uStack_1b0._4_4_ = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190._0_4_ = 0;
        uStack_190._4_4_ = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        uStack_160 = 0;
        uStack_15c = 0;
        uStack_140 = 0;
        pppppppbVar10 = (byte *******)&pppppppbStack_1d0;
        pppppppbStack_158 = (byte *******)&pppppppbStack_150;
        func_0x00010937c560();
        FUN_10a0cde2c(&uStack_1b0);
        if ((char)uStack_1b0 != '\0') {
          if (pppppppbStack_130 < pppppppbStack_128) {
            FUN_10a0c9da0(pppppppbStack_130,&uStack_1b0);
            pppppppbStack_130 = pppppppbStack_130 + 0xf;
          }
          else {
            lVar15 = (long)pppppppbStack_130 - (long)pppppppbStack_138;
            uVar13 = (lVar15 >> 3) * -0x1111111111111111 + 1;
            if (0x222222222222222 < uVar13) {
              FUN_10a0c9770();
              goto LAB_10a0ce558;
            }
            lVar12 = (long)pppppppbStack_128 - (long)pppppppbStack_138 >> 3;
            uVar14 = lVar12 * -0x2222222222222222;
            if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
              uVar14 = uVar13;
            }
            if (0x111111111111110 < (ulong)(lVar12 * -0x1111111111111111)) {
              uVar14 = 0x222222222222222;
            }
            pppppppbStack_78 = (byte *******)&pppppppbStack_138;
            if (uVar14 == 0) {
              pppppppbVar10 = (byte *******)0x0;
            }
            else {
              FUN_10a0c9784();
            }
            lVar15 = uVar14 + lVar15;
            FUN_10a0c9da0(lVar15,&uStack_1b0);
            pppppppbVar8 = (byte *******)
                           ((long)pppppppbStack_138 + (lVar15 - (long)pppppppbStack_130));
            func_0x00010a0ce6e8(pppppppbStack_138,pppppppbStack_130,pppppppbVar8);
            pppppppbStack_88 = pppppppbStack_138;
            pppppppbStack_80 = pppppppbStack_128;
            pppppppbStack_98 = pppppppbStack_138;
            pppppppbStack_90 = pppppppbStack_138;
            pppppppbStack_138 = pppppppbVar8;
            pppppppbStack_130 = (byte *******)(lVar15 + 0x78);
            pppppppbStack_128 = (byte *******)(uVar14 + (long)pppppppbVar10 * 0x78);
            FUN_10a0ce750(&pppppppbStack_98);
            pppppppbStack_130 = (byte *******)(lVar15 + 0x78);
          }
        }
        func_0x00010a0c9b7c(&uStack_1b0);
        func_0x00010937c698(&pppppppbStack_1d0);
      }
      if (pppppppbStack_130 != pppppppbStack_138) {
        uStack_1b0._0_4_ = 5;
        uStack_1a8._4_4_ = 0;
        uStack_1a0 = 0;
        uStack_1b0._4_4_ = 0;
        uStack_1a8._0_4_ = 0;
        uStack_194 = 0;
        uStack_190._0_4_ = 0;
        uStack_19c = 0;
        uStack_198 = 0;
        uStack_184 = 0;
        uStack_190._4_4_ = 0;
        uStack_188 = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_170 = SUB84(pppppppbStack_138,0);
        uStack_16c = (undefined4)((ulong)pppppppbStack_138 >> 0x20);
        uStack_168 = SUB84(pppppppbStack_130,0);
        uStack_164 = (undefined4)((ulong)pppppppbStack_130 >> 0x20);
        pppppppbStack_130 = (byte *******)0x0;
        pppppppbStack_128 = (byte *******)0x0;
        pppppppbStack_138 = (byte *******)0x0;
        pppppppbStack_158 = (byte *******)&pppppppbStack_150;
        pppppppbStack_150 = (byte *******)0x0;
        pppppppbStack_148 = (byte *******)0x0;
        uStack_160 = SUB84(pppppppbVar8,0);
        uStack_15c = (undefined4)((ulong)pppppppbVar8 >> 0x20);
        uStack_140 = 0;
        FUN_10a0ce5e4(&uStack_120,&uStack_1b0);
        func_0x00010a0c9b7c(&uStack_1b0);
      }
      uStack_1b0 = (byte *******)&pppppppbStack_138;
      FUN_10a0c97c8(&uStack_1b0);
      goto joined_r0x00010a0ce2d8;
    }
    uStack_1b0._0_4_ = uVar2;
    uStack_1b0._4_4_ = iVar4;
    if (uVar11 == 3) {
      func_0x00010937c804(&pppppppbStack_98,param_2);
      uStack_1b0._0_4_ = 4;
      uStack_1b0._4_4_ = 0;
      uStack_1a8._0_4_ = 0;
      uStack_1a8._4_4_ = 0;
      uStack_198 = SUB84(pppppppbStack_90,0);
      uStack_194 = (undefined4)((ulong)pppppppbStack_90 >> 0x20);
      uStack_1a0 = SUB84(pppppppbStack_98,0);
      uStack_19c = (undefined4)((ulong)pppppppbStack_98 >> 0x20);
      uStack_190._0_4_ = SUB84(pppppppbStack_88,0);
      uStack_190._4_4_ = (undefined4)((ulong)pppppppbStack_88 >> 0x20);
      pppppppbStack_98 = (byte *******)0x0;
      pppppppbStack_90 = (byte *******)0x0;
      pppppppbStack_88 = (byte *******)0x0;
      pppppppbStack_158 = (byte *******)&pppppppbStack_150;
      pppppppbStack_150 = (byte *******)0x0;
      pppppppbStack_148 = (byte *******)0x0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_140 = 0;
      FUN_10a0ce5e4(&uStack_120,&uStack_1b0);
      func_0x00010a0c9b7c(&uStack_1b0);
    }
  }
  else {
    if (uVar11 - 5 < 2) {
      func_0x00010950694c(param_2,&pppppppbStack_98);
      uStack_1b0._0_4_ = 2;
      uStack_1b0._4_4_ = (int)pppppppbStack_98;
      pppppppbVar10 = (byte *******)(double)(int)pppppppbStack_98;
LAB_10a0cdfc8:
      uStack_140 = 0;
      uStack_1a8._0_4_ = SUB84(pppppppbVar10,0);
      uStack_1a8._4_4_ = (undefined4)((ulong)pppppppbVar10 >> 0x20);
    }
    else {
      if (uVar11 != 4) {
        uStack_1b0._0_4_ = uVar2;
        uStack_1b0._4_4_ = iVar4;
        if (bVar1 != 7) goto LAB_10a0ce2d8;
        func_0x00010949aadc(param_2,&pppppppbStack_98);
        uStack_1b0._0_4_ = 1;
        uStack_1b0._4_4_ = 0;
        pppppppbVar10 = pppppppbStack_98;
        goto LAB_10a0cdfc8;
      }
      func_0x00010938d198(param_2,&pppppppbStack_98);
      uStack_1b0._0_4_ = 3;
      uStack_1a8._4_4_ = 0;
      uStack_1b0._4_4_ = 0;
      uStack_1a8._0_4_ = 0;
      uStack_140 = pppppppbStack_98._0_1_;
    }
    pppppppbStack_158 = (byte *******)&pppppppbStack_150;
    uStack_15c = 0;
    uStack_160 = 0;
    uStack_164 = 0;
    uStack_168 = 0;
    uStack_16c = 0;
    uStack_170 = 0;
    uStack_174 = 0;
    uStack_178 = 0;
    uStack_17c = 0;
    uStack_180 = 0;
    uStack_184 = 0;
    uStack_188 = 0;
    uStack_190._4_4_ = 0;
    uStack_190._0_4_ = 0;
    uStack_194 = 0;
    uStack_198 = 0;
    uStack_19c = 0;
    uStack_1a0 = 0;
    pppppppbStack_148 = (byte *******)0x0;
    pppppppbStack_150 = (byte *******)0x0;
    FUN_10a0ce5e4(&uStack_120,&uStack_1b0);
    func_0x00010a0c9b7c(&uStack_1b0);
  }
LAB_10a0ce2d8:
joined_r0x00010a0ce2d8:
  if (param_1 != 0) {
    FUN_10a0ce5e4(param_1,&uStack_120);
  }
  bVar7 = (char)uStack_120 != '\0';
  func_0x00010a0c9b7c(&uStack_120);
  return bVar7;
}



/* Entry: 10a0ce5e4; end: 10a0ce74f;  */

undefined8 * FUN_10a0ce5e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(undefined1 *)((long)param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  func_0x000107c3194c(param_1 + 5,param_2 + 5);
  plVar3 = param_1 + 8;
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    lVar1 = param_1[9];
    lVar2 = lVar5;
    if (lVar1 != lVar5) {
      do {
        lVar1 = lVar1 + -0x78;
        func_0x00010a0c9b7c();
      } while (lVar1 != lVar5);
      lVar2 = *plVar3;
    }
    param_1[9] = lVar5;
    __ZdlPv(lVar2);
    *plVar3 = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  uVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  param_1[10] = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  plVar4 = param_1 + 0xc;
  func_0x00010a0c9b2c(*plVar4);
  param_1[0xb] = param_2[0xb];
  plVar3 = param_2 + 0xc;
  lVar5 = *plVar3;
  lVar2 = param_2[0xd];
  *plVar4 = lVar5;
  param_1[0xd] = lVar2;
  if (lVar2 == 0) {
    param_1[0xb] = plVar4;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar4;
    param_2[0xb] = plVar3;
    *plVar3 = 0;
    param_2[0xd] = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 10a0ce750; end: 10a0ce79b;  */

long * FUN_10a0ce750(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x78;
    func_0x00010a0c9b7c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0ce79c; end: 10a0ce877;  */

long FUN_10a0ce79c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a0c9a50(param_1,&uStack_38,param_2);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0xb0;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    }
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 **)(lVar2 + 0x90) = (undefined8 *)(lVar2 + 0x98);
    *(undefined1 *)(lVar2 + 0xa8) = 0;
    FUN_10a0c99fc(param_1,uStack_38,plVar1,lVar2);
  }
  return lVar2;
}



/* Entry: 10a0ce878; end: 10a0ce9ef;  */

void FUN_10a0ce878(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char acStack_48 [32];
  undefined8 uStack_28;
  
  acStack_48[0] = '\0';
  acStack_48[1] = '\0';
  acStack_48[2] = '\0';
  acStack_48[3] = '\0';
  acStack_48[4] = '\0';
  acStack_48[5] = '\0';
  acStack_48[6] = '\0';
  acStack_48[7] = '\0';
  acStack_48[8] = '\0';
  acStack_48[9] = '\0';
  acStack_48[10] = '\0';
  acStack_48[0xb] = '\0';
  acStack_48[0xc] = '\0';
  acStack_48[0xd] = '\0';
  acStack_48[0xe] = '\0';
  acStack_48[0xf] = '\0';
  acStack_48[0x10] = '\0';
  acStack_48[0x11] = '\0';
  acStack_48[0x12] = '\0';
  acStack_48[0x13] = '\0';
  acStack_48[0x14] = '\0';
  acStack_48[0x15] = '\0';
  acStack_48[0x16] = '\0';
  acStack_48[0x17] = '\0';
  acStack_48[0x18] = '\0';
  acStack_48[0x19] = '\0';
  acStack_48[0x1a] = '\0';
  acStack_48[0x1b] = '\0';
  acStack_48[0x1c] = '\0';
  acStack_48[0x1d] = '\0';
  acStack_48[0x1e] = '\0';
  acStack_48[0x1f] = -0x80;
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_10a0a87b8(param_2,plVar1,acStack_48);
  if ((int)param_2 != 0) {
    pcVar3 = acStack_48;
    func_0x00010937c560();
    if (*pcVar3 == '\x02') {
      param_1[1] = *param_1;
      pcVar3 = acStack_48;
      func_0x00010937c560();
      lStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0x8000000000000000;
      if (*pcVar3 == '\x02') {
        uStack_58 = *(undefined8 *)(*(long *)(pcVar3 + 8) + 8);
      }
      else if (*pcVar3 == '\x01') {
        lStack_60 = *(long *)(pcVar3 + 8) + 8;
      }
      else {
        uStack_50 = 1;
      }
      pcVar4 = acStack_48;
      pcStack_68 = pcVar3;
      func_0x00010937c560();
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0x8000000000000000;
      cVar2 = *pcVar4;
      pcStack_88 = pcVar4;
      if (cVar2 == '\0') {
        uStack_70 = 1;
      }
      else if (cVar2 == '\x02') {
        uStack_78 = **(undefined8 **)(pcVar4 + 8);
      }
      else if (cVar2 == '\x01') {
        uStack_80 = **(undefined8 **)(pcVar4 + 8);
      }
      else {
        uStack_70 = 0;
      }
      while( true ) {
        ppcVar5 = &pcStack_88;
        func_0x00010937c708(ppcVar5,&pcStack_68);
        if (((ulong)ppcVar5 & 1) != 0) break;
        ppcVar5 = &pcStack_88;
        func_0x00010937c560();
        if (2 < *(byte *)ppcVar5 - 5) {
          return;
        }
        func_0x00010949aadc();
        uStack_90 = uStack_28;
        FUN_10a0cec80(param_1,&uStack_90);
        func_0x00010937c698(&pcStack_88);
      }
    }
  }
  return;
}



/* Entry: 10a0ce9f0; end: 10a0cec7f;  */

undefined8
FUN_10a0ce9f0(undefined8 *param_1,long param_2,ulong param_3,long *param_4,int param_5,long param_6)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  byte *pbVar3;
  long *plVar4;
  long alStack_98 [2];
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  byte abStack_60 [32];
  
  abStack_60[0] = 0;
  abStack_60[1] = 0;
  abStack_60[2] = 0;
  abStack_60[3] = 0;
  abStack_60[4] = 0;
  abStack_60[5] = 0;
  abStack_60[6] = 0;
  abStack_60[7] = 0;
  abStack_60[8] = 0;
  abStack_60[9] = 0;
  abStack_60[10] = 0;
  abStack_60[0xb] = 0;
  abStack_60[0xc] = 0;
  abStack_60[0xd] = 0;
  abStack_60[0xe] = 0;
  abStack_60[0xf] = 0;
  abStack_60[0x10] = 0;
  abStack_60[0x11] = 0;
  abStack_60[0x12] = 0;
  abStack_60[0x13] = 0;
  abStack_60[0x14] = 0;
  abStack_60[0x15] = 0;
  abStack_60[0x16] = 0;
  abStack_60[0x17] = 0;
  abStack_60[0x18] = 0;
  abStack_60[0x19] = 0;
  abStack_60[0x1a] = 0;
  abStack_60[0x1b] = 0;
  abStack_60[0x1c] = 0;
  abStack_60[0x1d] = 0;
  abStack_60[0x1e] = 0;
  abStack_60[0x1f] = 0x80;
  plVar4 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar4 = param_4;
  }
  FUN_10a0a87b8(param_3,plVar4,abStack_60);
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f6389a3,0x15);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
    uVar1 = *(ulong *)(param_6 + 8);
    if (-1 < (char)*(byte *)(param_6 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_6 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_80,&UNK_10f5822ff,param_6);
      uVar1 = uStack_78;
      pppuVar2 = (undefined8 ***)ppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar1 = uStack_70 >> 0x38;
        pppuVar2 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppuVar2,uVar1);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppuStack_80);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&UNK_10f58b966,2);
  }
  else {
    pbVar3 = abStack_60;
    func_0x00010937c560();
    if (*pbVar3 - 5 < 3) {
      func_0x00010949aadc();
      *param_1 = ppuStack_80;
      return 1;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_98,&DAT_10f638984,param_4);
    plVar4 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&UNK_10f638a4c,0x21);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar1 = uStack_78;
    pppuVar2 = (undefined8 ***)ppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppuVar2 = &ppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppuVar2,uVar1);
    if ((long)uStack_70 < 0) {
      __ZdlPv(ppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  }
  return 0;
}



/* Entry: 10a0cec80; end: 10a0ced43;  */

undefined1  [16] FUN_10a0cec80(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
    plVar3 = param_1;
    puVar5 = param_2;
  }
  else {
    lVar9 = (long)puVar4 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a0ced44();
      puVar4 = (undefined8 *)&UNK_10f63805b;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        lVar9 = (long)param_2 << 3;
        __Znwm(lVar9);
        auVar14._8_8_ = param_2;
        auVar14._0_8_ = lVar9;
        return auVar14;
      }
      func_0x000109ffded8();
      uVar12 = param_2[1];
      uVar11 = *param_2;
      puVar4[2] = param_2[2];
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      uVar11 = param_2[3];
      puVar4[4] = param_2[4];
      puVar4[3] = uVar11;
      puVar4[5] = param_2[5];
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      puVar4[6] = param_2[6];
      uVar12 = param_2[8];
      uVar11 = param_2[7];
      puVar4[9] = param_2[9];
      puVar4[8] = uVar12;
      puVar4[7] = uVar11;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[7] = 0;
      puVar4[10] = param_2[10];
      uVar11 = param_2[0xb];
      puVar4[0xc] = param_2[0xc];
      puVar4[0xb] = uVar11;
      puVar4[0xd] = param_2[0xd];
      plVar2 = param_2 + 0xe;
      lVar9 = *plVar2;
      plVar3 = puVar4 + 0xe;
      *plVar3 = lVar9;
      lVar8 = param_2[0xf];
      puVar4[0xf] = lVar8;
      if (lVar8 == 0) {
        puVar4[0xd] = plVar3;
      }
      else {
        *(long **)(lVar9 + 0x10) = plVar3;
        param_2[0xd] = plVar2;
        *plVar2 = 0;
        param_2[0xf] = 0;
      }
      FUN_10a0c9da0(puVar4 + 0x10,param_2 + 0x10);
      uVar12 = param_2[0x20];
      uVar11 = param_2[0x1f];
      puVar4[0x21] = param_2[0x21];
      puVar4[0x20] = uVar12;
      puVar4[0x1f] = uVar11;
      param_2[0x1f] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      uVar12 = param_2[0x23];
      uVar11 = param_2[0x22];
      puVar4[0x24] = param_2[0x24];
      puVar4[0x23] = uVar12;
      puVar4[0x22] = uVar11;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      param_2[0x22] = 0;
      puVar4[0x25] = param_2[0x25];
      lVar9 = param_2[0x26];
      lVar8 = param_2[0x27];
      puVar4[0x26] = lVar9;
      puVar4[0x27] = lVar8;
      if (lVar8 == 0) {
        puVar4[0x25] = puVar4 + 0x26;
      }
      else {
        *(undefined8 **)(lVar9 + 0x10) = puVar4 + 0x26;
        param_2[0x25] = param_2 + 0x26;
        param_2[0x26] = 0;
        param_2[0x27] = 0;
      }
      puVar5 = param_2 + 0x28;
      FUN_10a0c9da0(puVar4 + 0x28,puVar5);
      uVar12 = param_2[0x38];
      uVar11 = param_2[0x37];
      puVar4[0x39] = param_2[0x39];
      puVar4[0x38] = uVar12;
      puVar4[0x37] = uVar11;
      param_2[0x37] = 0;
      param_2[0x38] = 0;
      param_2[0x39] = 0;
      uVar12 = param_2[0x3b];
      uVar11 = param_2[0x3a];
      puVar4[0x3c] = param_2[0x3c];
      puVar4[0x3b] = uVar12;
      puVar4[0x3a] = uVar11;
      param_2[0x3b] = 0;
      param_2[0x3c] = 0;
      param_2[0x3a] = 0;
      auVar15._8_8_ = puVar5;
      auVar15._0_8_ = puVar4;
      return auVar15;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_10a0ced58();
    puVar5 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)((long)plVar2 + lVar9);
    lVar9 = (long)puVar4 - (param_1[1] - (long)puVar5);
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
    _memcpy(lVar9,puVar5);
    plVar3 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar2 + uVar7);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  auVar13._8_8_ = puVar5;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 10a0ced44; end: 10a0ced57;  */

undefined1  [16] FUN_10a0ced44(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000109ffded8();
  uVar8 = param_2[1];
  uVar7 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar7 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar7;
  puVar1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar1[6] = param_2[6];
  uVar8 = param_2[8];
  uVar7 = param_2[7];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar8;
  puVar1[7] = uVar7;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  puVar1[10] = param_2[10];
  uVar7 = param_2[0xb];
  puVar1[0xc] = param_2[0xc];
  puVar1[0xb] = uVar7;
  puVar1[0xd] = param_2[0xd];
  plVar4 = param_2 + 0xe;
  lVar2 = *plVar4;
  plVar5 = puVar1 + 0xe;
  *plVar5 = lVar2;
  lVar6 = param_2[0xf];
  puVar1[0xf] = lVar6;
  if (lVar6 == 0) {
    puVar1[0xd] = plVar5;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar5;
    param_2[0xd] = plVar4;
    *plVar4 = 0;
    param_2[0xf] = 0;
  }
  FUN_10a0c9da0(puVar1 + 0x10,param_2 + 0x10);
  uVar8 = param_2[0x20];
  uVar7 = param_2[0x1f];
  puVar1[0x21] = param_2[0x21];
  puVar1[0x20] = uVar8;
  puVar1[0x1f] = uVar7;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  uVar8 = param_2[0x23];
  uVar7 = param_2[0x22];
  puVar1[0x24] = param_2[0x24];
  puVar1[0x23] = uVar8;
  puVar1[0x22] = uVar7;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  puVar1[0x25] = param_2[0x25];
  lVar2 = param_2[0x26];
  lVar6 = param_2[0x27];
  puVar1[0x26] = lVar2;
  puVar1[0x27] = lVar6;
  if (lVar6 == 0) {
    puVar1[0x25] = puVar1 + 0x26;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = puVar1 + 0x26;
    param_2[0x25] = param_2 + 0x26;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
  }
  puVar3 = param_2 + 0x28;
  FUN_10a0c9da0(puVar1 + 0x28,puVar3);
  uVar8 = param_2[0x38];
  uVar7 = param_2[0x37];
  puVar1[0x39] = param_2[0x39];
  puVar1[0x38] = uVar8;
  puVar1[0x37] = uVar7;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  uVar8 = param_2[0x3b];
  uVar7 = param_2[0x3a];
  puVar1[0x3c] = param_2[0x3c];
  puVar1[0x3b] = uVar8;
  puVar1[0x3a] = uVar7;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3a] = 0;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = puVar1;
  return auVar10;
}



/* Entry: 10a0ced58; end: 10a0ceeff;  */

undefined1  [16] FUN_10a0ced58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000109ffded8();
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = param_2[6];
  uVar7 = param_2[8];
  uVar6 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  param_1[10] = param_2[10];
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  param_1[0xd] = param_2[0xd];
  plVar3 = param_2 + 0xe;
  lVar1 = *plVar3;
  plVar4 = param_1 + 0xe;
  *plVar4 = lVar1;
  lVar5 = param_2[0xf];
  param_1[0xf] = lVar5;
  if (lVar5 == 0) {
    param_1[0xd] = plVar4;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar4;
    param_2[0xd] = plVar3;
    *plVar3 = 0;
    param_2[0xf] = 0;
  }
  FUN_10a0c9da0(param_1 + 0x10,param_2 + 0x10);
  uVar7 = param_2[0x20];
  uVar6 = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar7;
  param_1[0x1f] = uVar6;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  uVar7 = param_2[0x23];
  uVar6 = param_2[0x22];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar7;
  param_1[0x22] = uVar6;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  param_1[0x25] = param_2[0x25];
  lVar1 = param_2[0x26];
  lVar5 = param_2[0x27];
  param_1[0x26] = lVar1;
  param_1[0x27] = lVar5;
  if (lVar5 == 0) {
    param_1[0x25] = param_1 + 0x26;
  }
  else {
    *(undefined8 **)(lVar1 + 0x10) = param_1 + 0x26;
    param_2[0x25] = param_2 + 0x26;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
  }
  puVar2 = param_2 + 0x28;
  FUN_10a0c9da0(param_1 + 0x28,puVar2);
  uVar7 = param_2[0x38];
  uVar6 = param_2[0x37];
  param_1[0x39] = param_2[0x39];
  param_1[0x38] = uVar7;
  param_1[0x37] = uVar6;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  uVar7 = param_2[0x3b];
  uVar6 = param_2[0x3a];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3b] = uVar7;
  param_1[0x3a] = uVar6;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3a] = 0;
  auVar9._8_8_ = puVar2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10a0cef00; end: 10a0cef13;  */

undefined8 * FUN_10a0cef00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  if (*(char *)((long)puVar1 + 0x1e7) < '\0') {
    __ZdlPv(puVar1[0x3a]);
  }
  if (*(char *)((long)puVar1 + 0x1cf) < '\0') {
    __ZdlPv(puVar1[0x37]);
  }
  func_0x00010a0c9b7c(puVar1 + 0x28);
  func_0x00010a0c9b2c(puVar1[0x26]);
  if (*(char *)((long)puVar1 + 0x127) < '\0') {
    __ZdlPv(puVar1[0x22]);
  }
  if (*(char *)((long)puVar1 + 0x10f) < '\0') {
    __ZdlPv(puVar1[0x1f]);
  }
  func_0x00010a0c9b7c(puVar1 + 0x10);
  func_0x00010a0c9b2c(puVar1[0xe]);
  if (*(char *)((long)puVar1 + 0x4f) < '\0') {
    __ZdlPv(puVar1[7]);
  }
  if (puVar1[3] != 0) {
    puVar1[4] = puVar1[3];
    __ZdlPv();
  }
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  return puVar1;
}



/* Entry: 10a0cef14; end: 10a0cf023;  */

undefined8 * FUN_10a0cef14(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x1e7) < '\0') {
    __ZdlPv(param_1[0x3a]);
  }
  if (*(char *)((long)param_1 + 0x1cf) < '\0') {
    __ZdlPv(param_1[0x37]);
  }
  func_0x00010a0c9b7c(param_1 + 0x28);
  func_0x00010a0c9b2c(param_1[0x26]);
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  func_0x00010a0c9b7c(param_1 + 0x10);
  func_0x00010a0c9b2c(param_1[0xe]);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a0cf024; end: 10a0cf093;  */

void FUN_10a0cf024(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf094(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a0cf094; end: 10a0cf0cb;  */

void FUN_10a0cf094(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10a0ced58();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_10a0ced44();
  if (param_4 != 0) {
    FUN_10a0cf150();
    plVar1 = param_1;
    FUN_10a0cf198(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10a0cf0cc; end: 10a0cf14f;  */

void FUN_10a0cf0cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf150(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0cf198(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0cf150; end: 10a0cf197;  */

long * FUN_10a0cf150(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a05a0d4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    return plVar1;
  }
  FUN_10a05a0c0();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    param_4 = plStack_58 + 3;
  }
  uStack_68 = 1;
  FUN_10a0cf254(&plStack_80);
  return param_4;
}



/* Entry: 10a0cf198; end: 10a0cf253;  */

undefined8 *
FUN_10a0cf198(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a0cf254(&uStack_60);
  return param_4;
}



/* Entry: 10a0cf254; end: 10a0cf287;  */

long FUN_10a0cf254(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0cf288(param_1);
  }
  return param_1;
}



/* Entry: 10a0cf288; end: 10a0cf2cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0cf2b4) */

void FUN_10a0cf288(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}



/* Entry: 10a0cf2cc; end: 10a0cf3ef;  */

undefined8 * FUN_10a0cf2cc(undefined8 *param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar4 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  puVar1 = param_1;
  if (uVar4 - (long)puVar7 < param_4) {
    puVar8 = param_1;
    lVar2 = param_2;
    puVar3 = param_3;
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar8 = puVar7;
    }
    if ((long)param_4 < 0) {
      FUN_109ffdf98();
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      if (lVar2 != 0) {
        func_0x000107c2b04c(puVar8);
        lVar6 = puVar8[1];
        _memset(lVar6,*puVar3,lVar2);
        puVar8[1] = lVar6 + lVar2;
      }
      return puVar8;
    }
    uVar5 = uVar4 * 2;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    func_0x000107c2b04c(param_1,uVar5);
    puVar7 = (undefined8 *)param_1[1];
    lVar2 = (long)param_3 - param_2;
    if (lVar2 != 0) {
      puVar1 = puVar7;
      _memmove(puVar7,param_2,lVar2);
    }
    lVar2 = (long)puVar7 + lVar2;
  }
  else {
    puVar8 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar8 - (long)puVar7) < param_4) {
      lVar6 = param_2 + ((long)puVar8 - (long)puVar7);
      if (puVar8 != puVar7) {
        _memmove(puVar7,param_2);
        puVar8 = (undefined8 *)param_1[1];
        puVar1 = puVar7;
      }
      lVar2 = (long)param_3 - lVar6;
      if (lVar2 != 0) {
        puVar1 = puVar8;
        _memmove(puVar8,lVar6,lVar2);
      }
      lVar2 = (long)puVar8 + lVar2;
    }
    else {
      lVar2 = (long)param_3 - param_2;
      if (lVar2 != 0) {
        puVar1 = puVar7;
        _memmove(puVar7,param_2,lVar2);
      }
      lVar2 = (long)puVar7 + lVar2;
    }
  }
  param_1[1] = lVar2;
  return puVar1;
}



/* Entry: 10a0cf3f0; end: 10a0cf46b;  */

undefined8 * FUN_10a0cf3f0(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000107c2b04c(param_1);
    lVar1 = param_1[1];
    _memset(lVar1,*param_3,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a0cf46c; end: 10a0cf4c7;  */

void FUN_10a0cf46c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10a0cf4c8; end: 10a0cf4db;  */

void FUN_10a0cf4c8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined *puStack_58;
  
  puVar5 = &UNK_10f63805b;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  puStack_58 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    uStack_70 = 0;
    FUN_10a0cf7c4(&uStack_70,param_2);
  }
  else {
    uStack_68 = *(undefined8 *)(puVar5 + 0x858);
    plStack_60 = *(long **)(puVar5 + 0x860);
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0cf5dc(&uStack_68,&puStack_58);
    plVar1 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar2 = plStack_60 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0cf4dc; end: 10a0cf51f;  */

void FUN_10a0cf4dc(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  lStack_48 = param_1;
  if (param_1 == 0) {
    uStack_60 = 0;
    FUN_10a0cf7c4(&uStack_60,param_2);
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x858);
    plStack_50 = *(long **)(param_1 + 0x860);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0cf5dc(&uStack_58,&lStack_48);
    plVar1 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar2 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0cf520; end: 10a0cf5db;  */

void FUN_10a0cf520(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a0cf7c4(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0cf5dc(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0cf5dc; end: 10a0cf7c3;  */

void FUN_10a0cf5dc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a0cf9bc(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a0cfac4(auStack_50,param_3,&lStack_60);
  FUN_10a0cf858(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0cf7c4; end: 10a0cf857;  */

void FUN_10a0cf7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a0cfd08(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a0cf858; end: 10a0cf9bb;  */

void FUN_10a0cf858(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a0cf9bc; end: 10a0cfa2b;  */

undefined8 FUN_10a0cf9bc(void)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0xf0;
  __Znwm(0xf0);
  FUN_10a347c5c();
  uStack_38 = 0;
  FUN_10a0cfa2c(&uStack_38,0);
  return uVar1;
}



/* Entry: 10a0cfa2c; end: 10a0cfac3;  */

void FUN_10a0cfa2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a0cfa6c(lVar1 + 0xe0);
    func_0x00010aa71c88(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0cfac4; end: 10a0cfb63;  */

long * FUN_10a0cfac4(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110ba1a38;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0cfb64(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0cfb64; end: 10a0cfc87;  */

void FUN_10a0cfb64(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0cfc88; end: 10a0cfcc7;  */

void FUN_10a0cfc88(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0cfcc8; end: 10a0cfd03;  */

long FUN_10a0cfcc8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba1a78);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0cfd04; end: 10a0cfd07;  */

void FUN_10a0cfd04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


