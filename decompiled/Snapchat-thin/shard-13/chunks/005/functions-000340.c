/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a719398; end: 10a719607;  */

undefined8 * FUN_10a719398(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110c14910;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c14960;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_38 = param_1 + 0x13;
    FUN_10a7172a8(&puStack_38);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a719608; end: 10a719677;  */

void FUN_10a719608(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a719678; end: 10a719b0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7199ec) */
/* WARNING: Removing unreachable block (ram,0x00010a7199fc) */

void FUN_10a719678(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar9;
  long lVar10;
  undefined8 **ppuStack_3f0;
  ulong uStack_3e8;
  byte bStack_3d9;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  long lStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_348;
  long alStack_340 [34];
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **appuStack_220 [34];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_100 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_f0 = param_1[4];
  ppuStack_f8 = (undefined8 **)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_e8 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_e0 = *(undefined4 *)(param_1 + 6);
  uStack_d8 = param_1[7];
  uStack_d0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_c8,param_1 + 9);
  uStack_90 = param_1[0x10];
  uStack_88 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_80,param_1 + 0x12);
  plVar6 = *(long **)(param_2 + 0x38);
  if ((plVar6 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_358 = plVar6, plVar6 != (long *)0x0)) {
    lStack_360 = *(long *)(param_2 + 0x30);
    if (lStack_360 != 0) {
      uVar9 = 0;
      FUN_10a0f0eb8();
      if ((uVar9 & 1) == 0) {
        __ZNSt3__19to_stringEi(auStack_3d8,uStack_e0);
        puVar7 = auStack_3d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar7,0,&UNK_10f671a47,0x30);
        uStack_3b8 = puVar7[1];
        uStack_3c0 = *puVar7;
        lStack_3b0 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = &uStack_3c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&UNK_10f579baa,3);
        uStack_398 = puVar7[1];
        uStack_3a0 = *puVar7;
        lStack_390 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        uVar9 = uStack_f0;
        pppuVar3 = (undefined8 ***)ppuStack_f8;
        if (-1 < (long)uStack_e8) {
          uVar9 = uStack_e8 >> 0x38;
          pppuVar3 = &ppuStack_f8;
        }
        puVar7 = &uStack_3a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,pppuVar3,uVar9);
        uStack_348 = puVar7[1];
        ppuStack_350 = (undefined **)*puVar7;
        alStack_340[0] = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        pppuVar8 = &ppuStack_350;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar8,"; ",2);
        ppuStack_228 = pppuVar8[1];
        ppuStack_230 = *pppuVar8;
        appuStack_220[0] = pppuVar8[2];
        pppuVar8[1] = (undefined **)0x0;
        pppuVar8[2] = (undefined **)0x0;
        *pppuVar8 = (undefined **)0x0;
        FUN_10a0f0e08(&ppuStack_3f0,&uStack_110);
        pppuVar3 = (undefined8 ***)ppuStack_3f0;
        if (-1 < (char)bStack_3d9) {
          uStack_3e8 = (ulong)bStack_3d9;
          pppuVar3 = &ppuStack_3f0;
        }
        pppuVar8 = &ppuStack_230;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar8,pppuVar3,uStack_3e8);
        ppuStack_378 = pppuVar8[1];
        ppuStack_380 = (undefined8 **)*pppuVar8;
        ppuStack_370 = pppuVar8[2];
        pppuVar8[1] = (undefined **)0x0;
        pppuVar8[2] = (undefined **)0x0;
        *pppuVar8 = (undefined **)0x0;
        if ((char)bStack_3d9 < '\0') {
          __ZdlPv(ppuStack_3f0);
        }
        if ((long)appuStack_220[0] < 0) {
          __ZdlPv(ppuStack_230);
        }
        if (alStack_340[0] < 0) {
          __ZdlPv(ppuStack_350);
        }
        if (lStack_390 < 0) {
          __ZdlPv(uStack_3a0);
        }
        if (lStack_3b0 < 0) {
          __ZdlPv(uStack_3c0);
        }
        if (cStack_3c1 < '\0') {
          __ZdlPv(auStack_3d8[0]);
        }
        if ((bRam000000011330a9e8 & 1) != 0) {
          pppuVar3 = (undefined8 ***)ppuStack_380;
          if (-1 < (long)ppuStack_370) {
            pppuVar3 = &ppuStack_380;
          }
          func_0x00010ae06f08(0,1,&UNK_10f66e891,&UNK_10f671a78,800,"%s",in_x6,in_x7,pppuVar3);
        }
        FUN_10a002a94(&ppuStack_350,&ppuStack_380);
        ppuStack_350 = &PTR_FUN_110b99e70;
        __ZNSt13runtime_errorC2ERKS_(&ppuStack_230,&ppuStack_350);
        _memcpy(appuStack_220,alStack_340,0x110);
        ppuStack_230 = &PTR_FUN_110b99e70;
        FUN_10a05bde0(&uStack_3a0,&ppuStack_230);
        __ZNSt13runtime_errorD2Ev(&ppuStack_230);
        func_0x000109d1b350(*(undefined8 *)(param_2 + 0x10),&uStack_3a0);
        __ZNSt13exception_ptrD1Ev(&uStack_3a0);
        __ZNSt13runtime_errorD2Ev(&ppuStack_350);
        if ((long)ppuStack_370 < 0) {
          __ZdlPv(ppuStack_380);
        }
      }
      else {
        FUN_10a4f447c(*(undefined8 *)(param_2 + 0x10),param_2 + 0x18);
      }
    }
    plVar2 = plVar6 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000104c4f944(auStack_80);
  puVar7 = &uStack_d8;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((long)ppuStack_370 < 0) {
      __ZdlPv(ppuStack_380);
    }
    func_0x00010a3f61b0(&lStack_360);
    FUN_10a05bd10(&uStack_110);
    __Unwind_Resume();
    if (puVar7[6] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar7 + 0x27) < '\0') {
      __ZdlPv(puVar7[2]);
    }
    plVar6 = (long *)puVar7[1];
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar9 - 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar9 >> 0x21 == 1) {
      FUN_109d1b3c4(plVar6,1,puVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar9 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar6 != (long *)0x0) && (uVar9 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 8))(plVar6);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 10a719b10; end: 10a719b5f;  */

void FUN_10a719b10(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
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
      FUN_109d1b3c4(plVar4,1,param_1 + 8);
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
  return;
}



/* Entry: 10a719b60; end: 10a719b9b;  */

void FUN_10a719b60(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_110c13de8;
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 10a719b9c; end: 10a719bff;  */

long * FUN_10a719b9c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a719c00; end: 10a71a00f;  */

undefined1  [16]
FUN_10a719c00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c2b05c();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = param_1;
          func_0x000107c2b068(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10a719f80;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)*param_4;
  plVar14 = (long *)0x38;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*plVar7,plVar7[1]);
  }
  else {
    lVar4 = plVar7[1];
    lVar3 = *plVar7;
    plVar14[4] = plVar7[2];
    plVar14[3] = lVar4;
    plVar14[2] = lVar3;
  }
  *(undefined1 *)(plVar14 + 5) = 0;
  *(undefined1 *)(plVar14 + 6) = 0;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10a719f08;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_10a719d90:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a719fe8);
      (*pcVar2)();
    }
    lVar3 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar7;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
            **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_10a719d90;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_10a719f08:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a719f80:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10a71a010; end: 10a71a043;  */

void FUN_10a71a010(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a71a044; end: 10a71a13f;  */

undefined1  [16] FUN_10a71a044(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c147b0;
  puVar1 = &UNK_10f66de00;
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
    ppuStack_40 = &PTR_DAT_110c147b0;
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



/* Entry: 10a71a140; end: 10a71a1a3;  */

ulong FUN_10a71a140(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a71a1a4);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a71a1a4,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a71a1a4; end: 10a71a71f;  */

/* WARNING: Possible PIC construction at 0x00010a71a714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a71a718) */
/* WARNING: Removing unreachable block (ram,0x00010a71a738) */
/* WARNING: Removing unreachable block (ram,0x00010a71a748) */
/* WARNING: Removing unreachable block (ram,0x00010a71a770) */
/* WARNING: Removing unreachable block (ram,0x00010a71a77c) */
/* WARNING: Removing unreachable block (ram,0x00010a71a794) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a71a790) */
/* WARNING: Removing unreachable block (ram,0x00010a71a764) */

void FUN_10a71a1a4(undefined4 *param_1,undefined ******param_2,undefined8 param_3,
                  undefined ******param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ******ppppppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******ppppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  undefined ******unaff_x19;
  undefined ******unaff_x20;
  undefined ******unaff_x21;
  long lVar16;
  undefined ******unaff_x22;
  undefined ******unaff_x23;
  undefined *****pppppuVar17;
  undefined ******unaff_x24;
  undefined *****pppppuVar18;
  undefined ******unaff_x25;
  ulong uVar19;
  undefined ******unaff_x26;
  undefined ******ppppppuVar20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *****pppppuStack_140;
  undefined *****pppppuStack_138;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  long lStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined **ppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_b0;
  undefined ****ppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppppuVar8[0x59] < (undefined *****)0x8) {
    ppppppuVar8[(long)ppppppuVar8[0x59] + 0x4e] = ppppppuVar8[0x5a];
    ppppppuVar8[0x59] = (undefined *****)((long)ppppppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppppuVar8 + 0x4b);
  }
  ppppppuVar9 = param_2;
  FUN_10a71a720(param_2,param_3);
  FUN_10a71a788(param_5);
  FUN_10a079938(&lStack_120,param_2,param_4);
  if (*(int *)(param_4 + 2) == 7) {
    ppppppuVar12 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,param_4[3]);
    ppppppuVar10 = param_2;
    pppppuStack_100 = (undefined *****)ppppppuVar12;
    (*(code *)(*param_2)[0x45])(param_2,&pppppuStack_100);
    if ((int)ppppppuVar10 != 0) {
      ppppppuVar12 = param_2;
      (*(code *)(*param_2)[0xb])();
      pppppuVar11 = ppppppuVar12[0x48];
      if ((pppppuVar11 == (undefined *****)0x0) ||
         (___dynamic_cast(pppppuVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         pppppuVar15 = pppppuStack_100, pppppuVar11 == (undefined *****)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a71a658;
      }
      pppppuStack_100 = (undefined *****)0x0;
      ppuStack_e8 = (undefined **)CONCAT44(ppuStack_e8._4_4_,7);
      pppppuStack_e0 = pppppuVar15;
      pppppuStack_f0 = (undefined *****)param_2;
      FUN_10a688ac0(&pppppuStack_b0,&pppppuStack_f0,pppppuVar11[1]);
      if ((3 < (int)ppuStack_e8) && ((undefined ******)pppppuStack_e0 != (undefined ******)0x0)) {
        (*(code *)**pppppuStack_e0)();
      }
    }
    if ((undefined ******)pppppuStack_100 != (undefined ******)0x0) {
      (*(code *)**pppppuStack_100)();
    }
    if (((ulong)ppppppuVar10 & 1) != 0) {
      ppppppuVar12 = (undefined ******)0x60;
      __Znwm();
      ppppppuVar10 = ppppppuVar12 + 1;
      *ppppppuVar10 = (undefined *****)0x0;
      ppppppuVar12[2] = (undefined *****)0x0;
      *ppppppuVar12 = (undefined *****)&PTR_FUN_110c13e10;
      ppppppuVar20 = ppppppuVar12 + 3;
      ppppppuVar12[4] = (undefined *****)ppppuStack_a8;
      *ppppppuVar20 = pppppuStack_b0;
      if ((undefined *****)ppppuStack_a8 != (undefined *****)0x0) {
        pppppuVar11 = (undefined *****)(ppppuStack_a8 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar5) {
            *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppuVar12[6] = pppppuStack_98;
      ppppppuVar12[5] = pppppuStack_a0;
      if ((undefined ******)pppppuStack_98 != (undefined ******)0x0) {
        ppppppuVar13 = (undefined ******)(pppppuStack_98 + 2);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
          if (bVar5) {
            *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(ppppppuVar12 + 0xb) = 2;
      pppppuStack_130 = (undefined *****)ppppppuVar20;
      pppppuStack_128 = (undefined *****)ppppppuVar12;
      FUN_10a688c1c(&pppppuStack_b0);
      ppppppuVar13 = param_2;
      FUN_10a059354(&pppppuStack_140,param_2,param_4 + 4);
      pppppuVar11 = pppppuStack_138;
      if (lStack_120 == 0) {
        if ((undefined ******)pppppuStack_140 != (undefined ******)0x0) {
          ppppppuVar13 = &pppppuStack_b0;
          func_0x000107c2b054(ppppppuVar13,&UNK_10f66f373);
          if (*(char *)(pppppuStack_140 + 8) == '\x01') {
            ppppppuVar13 = &pppppuStack_b0;
            (*(code *)*pppppuStack_140)(ppppppuVar13,pppppuStack_140);
          }
          else if (*(char *)(pppppuStack_140 + 8) == '\x02') {
            FUN_10a05aad0(pppppuStack_140,&pppppuStack_b0);
            ppppppuVar13 = (undefined ******)pppppuStack_140;
          }
          if ((long)pppppuStack_a0 < 0) {
            ppppppuVar13 = (undefined ******)pppppuStack_b0;
            __ZdlPv();
          }
        }
      }
      else {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar5) {
            *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuStack_110 = pppppuStack_140;
        pppppuStack_108 = pppppuStack_138;
        if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
          ppppppuVar13 = (undefined ******)(pppppuStack_138 + 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
            if (bVar5) {
              *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppuStack_b0 = (undefined *****)FUN_10a71c2fc;
        ppppuStack_a8 = (undefined ****)&PTR_DAT_110c14048;
        param_2 = &pppppuStack_b0;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar5) {
            *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuStack_f0 = (undefined *****)0x10a71c828;
        ppuStack_e8 = &PTR_DAT_110c14068;
        pppppuStack_e0 = pppppuStack_140;
        pppppuStack_d8 = pppppuStack_138;
        if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
          ppppppuVar13 = (undefined ******)(pppppuStack_138 + 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
            if (bVar5) {
              *ppppppuVar13 = (undefined *****)((long)*ppppppuVar13 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppuStack_100 = (undefined *****)ppppppuVar20;
        pppppuStack_f8 = (undefined *****)ppppppuVar12;
        pppppuStack_a0 = (undefined *****)ppppppuVar20;
        pppppuStack_98 = (undefined *****)ppppppuVar12;
        FUN_10a6ec4d8(ppppppuVar9,&lStack_120,&pppppuStack_b0,&pppppuStack_f0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        ppppppuVar13 = (undefined ******)&ppppuStack_a8;
        (*(code *)*ppppuStack_a8)();
        if ((undefined ******)pppppuVar11 != (undefined ******)0x0) {
          ppppppuVar9 = (undefined ******)(pppppuVar11 + 1);
          do {
            pppppuVar15 = *ppppppuVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
            if (bVar5) {
              *ppppppuVar9 = (undefined *****)((long)pppppuVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppuVar15 == (undefined *****)0x0) {
            (*(code *)(*pppppuVar11)[2])(pppppuVar11);
            ppppppuVar13 = (undefined ******)pppppuVar11;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        ppppppuVar9 = (undefined ******)pppppuStack_f8;
        param_4 = (undefined ******)pppppuVar11;
        ppppppuVar12 = &pppppuStack_f0;
        if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
          ppppppuVar2 = (undefined ******)(pppppuStack_f8 + 1);
          do {
            pppppuVar11 = *ppppppuVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
            if (bVar5) {
              *ppppppuVar2 = (undefined *****)((long)pppppuVar11 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppuVar11 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppppuVar13 = ppppppuVar9;
          }
        }
      }
      if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
        ppppppuVar9 = (undefined ******)(pppppuStack_138 + 1);
        do {
          pppppuVar11 = *ppppppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
          if (bVar5) {
            *ppppppuVar9 = (undefined *****)((long)pppppuVar11 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar11 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_138)[2])(pppppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar13 = (undefined ******)pppppuStack_138;
        }
      }
      ppppppuVar9 = (undefined ******)pppppuStack_128;
      if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
        ppppppuVar2 = (undefined ******)(pppppuStack_128 + 1);
        do {
          pppppuVar11 = *ppppppuVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
          if (bVar5) {
            *ppppppuVar2 = (undefined *****)((long)pppppuVar11 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar11 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_128)[2])(pppppuStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar13 = ppppppuVar9;
        }
      }
      if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
        ppppppuVar9 = (undefined ******)(pppppuStack_118 + 1);
        do {
          pppppuVar11 = *ppppppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
          if (bVar5) {
            *ppppppuVar9 = (undefined *****)((long)pppppuVar11 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar11 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_118)[2])(pppppuStack_118);
          ppppppuVar13 = (undefined ******)pppppuStack_118;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        if ((long)pppppuStack_a0 < 0) {
          __ZdlPv(pppppuStack_b0);
        }
        func_0x00010a07a8a8(&pppppuStack_140);
        func_0x00010a7020c0(&pppppuStack_130);
        FUN_10a0772f0(&lStack_120);
        unaff_x30 = 0x10a71a718;
        register0x00000008 = (BADSPACEBASE *)&pppppuStack_140;
        unaff_x19 = ppppppuVar8;
        unaff_x20 = ppppppuVar13;
        unaff_x21 = (undefined ******)pppppuStack_118;
        unaff_x22 = param_4;
        unaff_x23 = param_2;
        unaff_x24 = ppppppuVar12;
        unaff_x25 = ppppppuVar10;
        unaff_x26 = ppppppuVar20;
        unaff_x29 = puVar1;
      }
      ppppppuVar9 = ppppppuVar8 + 0x4b;
      pppppuVar11 = ppppppuVar8[0x59];
      pppppuVar15 = (undefined *****)((long)pppppuVar11 + -1);
      ppppppuVar8[0x59] = pppppuVar15;
      if (pppppuVar15 < (undefined *****)0x8) {
        pppppuVar11 = ppppppuVar9[(long)pppppuVar11 + 2];
        if (ppppppuVar8[0x5a] == pppppuVar11) {
          return;
        }
      }
      else {
        pppppuVar11 = (undefined *****)ppppppuVar8[0x57][-1];
        ppppppuVar8[0x57] = ppppppuVar8[0x57] + -1;
        if (ppppppuVar8[0x5a] == pppppuVar11) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined *******)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined *******)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined *******)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined *******)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined *******)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined *******)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined *******)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined *******)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      pppppuVar15 = *ppppppuVar9;
      pppppuVar14 = ppppppuVar8[0x4c];
      lVar16 = (long)pppppuVar14 - (long)pppppuVar15;
      pppppuVar18 = (undefined *****)(lVar16 >> 4);
      if (pppppuVar18 < pppppuVar11) {
        uVar19 = (long)pppppuVar11 - (long)pppppuVar18;
        pppppuVar17 = ppppppuVar8[0x4d];
        if ((ulong)((long)pppppuVar17 - (long)pppppuVar14 >> 4) < uVar19) {
          if ((ulong)pppppuVar11 >> 0x3c == 0) {
            pppppuVar14 = (undefined *****)((long)pppppuVar17 - (long)pppppuVar15 >> 3);
            if (pppppuVar14 <= pppppuVar11) {
              pppppuVar14 = pppppuVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppppuVar17 - (long)pppppuVar15)) {
              pppppuVar14 = (undefined *****)0xfffffffffffffff;
            }
            *(undefined *******)((long)register0x00000008 + -0x68) = ppppppuVar9;
            if ((ulong)pppppuVar14 >> 0x3c == 0) {
              lVar7 = (long)pppppuVar14 << 4;
              __Znwm();
              lVar3 = lVar7 + lVar16;
              _bzero(lVar3,uVar19 * 0x10);
              pppppuVar18 = (undefined *****)(lVar3 + (long)pppppuVar18 * -0x10);
              _memcpy(pppppuVar18,pppppuVar15,lVar16);
              *ppppppuVar9 = pppppuVar18;
              ppppppuVar8[0x4c] = (undefined *****)(lVar3 + uVar19 * 0x10);
              ppppppuVar8[0x4d] = (undefined *****)(lVar7 + (long)pppppuVar14 * 0x10);
              *(undefined ******)((long)register0x00000008 + -0x78) = pppppuVar15;
              *(undefined ******)((long)register0x00000008 + -0x70) = pppppuVar17;
              *(undefined ******)((long)register0x00000008 + -0x88) = pppppuVar15;
              *(undefined ******)((long)register0x00000008 + -0x80) = pppppuVar15;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(pppppuVar14,uVar19 * 0x10);
        ppppppuVar8[0x4c] = pppppuVar14 + uVar19 * 2;
      }
      else if (pppppuVar11 < pppppuVar18) {
        while (pppppuVar14 != pppppuVar15 + (long)pppppuVar11 * 2) {
          pppppuVar14 = pppppuVar14 + -2;
          func_0x00010988c204(pppppuVar14);
        }
        ppppppuVar8[0x4c] = pppppuVar15 + (long)pppppuVar11 * 2;
      }
code_r0x00010988c138:
      ppppppuVar8[0x5a] = pppppuVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a71a658:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a71a65c);
  (*pcVar6)();
}



/* Entry: 10a71a720; end: 10a71a787;  */

void FUN_10a71a720(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a053854(param_1,lVar1);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 3) {
    return;
  }
  puVar3 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,puVar2);
  *puVar3 = &PTR_FUN_110c13e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71a788; end: 10a71a7ab;  */

void FUN_10a71a788(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c13e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71a7ac; end: 10a71a7bb;  */

void FUN_10a71a7ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71a7bc; end: 10a71a7db;  */

void FUN_10a71a7bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13e10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71a7dc; end: 10a71a803;  */

undefined1  [16] FUN_10a71a7dc(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a71a800);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a71a804; end: 10a71a867;  */

ulong FUN_10a71a804(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a71a868);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a71a868,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a71a868; end: 10a71aea7;  */

/* WARNING: Removing unreachable block (ram,0x00010a71ac64) */

void FUN_10a71a868(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 in_x7;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_4c8;
  long *plStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  long lStack_498;
  ulong uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined4 uStack_478;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  char cStack_459;
  char cStack_458;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  char cStack_259;
  char cStack_258;
  long lStack_250;
  long *plStack_248;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
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
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a71a720(param_2,param_3);
  FUN_10a71aea8(param_5);
  FUN_10a079938(&lStack_4a8,param_2,param_4);
  FUN_10a053980(&lStack_4b8,param_2,param_4 + 0x10);
  FUN_10a3ab74c(&lStack_4c8,param_2,param_4 + 0x20);
  uStack_78 = 0;
  lStack_80 = 0;
  plStack_68 = (long *)0x0;
  lStack_70 = 0;
  _uStack_60 = CONCAT44(uStack_5c,0x3f800000);
  if (lStack_4a8 == 0) {
    puVar9 = &UNK_10f66eeea;
  }
  else if (*(char *)(lStack_4a8 + 0xe0) == '\x01') {
    if (lStack_4b8 != 0) {
      FUN_10aaea134(auStack_98);
      FUN_10a71b424(auStack_a8,&lStack_250,auStack_98);
      FUN_10a6eb8d4(&lStack_c0,plVar7[0xe],auStack_a8);
      plStack_248 = plStack_b8;
      lStack_250 = lStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar8 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_390 = (ulong)uStack_390._4_4_ << 0x20;
      plVar8 = &lStack_80;
      FUN_10a7126b0(plVar8,0,&uStack_390);
      FUN_10a2c8f88(plVar8 + 3,&lStack_250);
      plVar8 = plStack_248;
      if (plStack_248 != (long *)0x0) {
        plVar1 = plStack_248 + 1;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_248 + 0x10))(plStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_4c8 != 0) {
        lStack_250 = lStack_4c8;
        plStack_248 = plStack_4c0;
        if (plStack_4c0 != (long *)0x0) {
          plVar8 = plStack_4c0 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_390 = CONCAT44(uStack_390._4_4_,1);
        plVar8 = &lStack_80;
        FUN_10a7126b0(plVar8,1,&uStack_390);
        FUN_10a2c8f88(plVar8 + 3,&lStack_250);
        plVar8 = plStack_248;
        if (plStack_248 != (long *)0x0) {
          plVar1 = plStack_248 + 1;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_248 + 0x10))(plStack_248);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (*(char *)(lStack_4a8 + 0xff) < '\0') {
        func_0x000107c3192c(&uStack_130,*(undefined8 *)(lStack_4a8 + 0xe8),
                            *(undefined8 *)(lStack_4a8 + 0xf0));
      }
      else {
        uStack_128 = *(undefined8 *)(lStack_4a8 + 0xf0);
        uStack_130 = *(undefined8 *)(lStack_4a8 + 0xe8);
        lStack_120 = *(long *)(lStack_4a8 + 0xf8);
      }
      uStack_470 = 0;
      cStack_458 = '\0';
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_370 = 0x3f800000;
      uStack_270 = 0;
      cStack_258 = '\0';
      FUN_10a6e53f0(&lStack_250,&uStack_110,&uStack_470,&uStack_390,&uStack_270,1,0,in_x7,0,0);
      if ((cStack_258 == '\x01') && (cStack_259 < '\0')) {
        __ZdlPv(CONCAT71(uStack_26f,uStack_270));
      }
      func_0x00010a71245c(&uStack_390);
      if ((cStack_458 == '\x01') && (cStack_459 < '\0')) {
        __ZdlPv(CONCAT71(uStack_46f,uStack_470));
      }
      FUN_10a6dee68(&uStack_470,&uStack_130,&lStack_250);
      uStack_490 = uStack_78;
      lStack_498 = lStack_80;
      lStack_80 = 0;
      uStack_78 = 0;
      lStack_488 = lStack_70;
      plStack_480 = plStack_68;
      uStack_478 = uStack_60;
      if (plStack_68 != (long *)0x0) {
        uVar12 = *(ulong *)(lStack_70 + 8);
        if ((uStack_490 & uStack_490 - 1) == 0) {
          uVar12 = uVar12 & uStack_490 - 1;
        }
        else if (uStack_490 <= uVar12) {
          uVar17 = 0;
          if (uStack_490 != 0) {
            uVar17 = uVar12 / uStack_490;
          }
          uVar12 = uVar12 - uVar17 * uStack_490;
        }
        *(long **)(lStack_498 + uVar12 * 8) = &lStack_488;
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
      }
      FUN_10a6e5564(&uStack_390,&uStack_470,&lStack_498);
      func_0x00010a71259c(&lStack_498);
      FUN_10ae0e238(&uStack_470);
      FUN_10a6ded90(plVar7,&lStack_4a8,&uStack_390);
      FUN_10a6fd048(&uStack_390);
      FUN_10a6fd048(&lStack_250);
      if (lStack_120 < 0) {
        __ZdlPv(uStack_130);
      }
      if (plStack_b8 != (long *)0x0) {
        plVar7 = plStack_b8 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (plStack_a0 != (long *)0x0) {
        plVar7 = plStack_a0 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      func_0x00010a71259c(&lStack_80);
      if (plStack_4c0 != (long *)0x0) {
        plVar7 = plStack_4c0 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4c0);
        }
      }
      if (plStack_4b0 != (long *)0x0) {
        plVar7 = plStack_4b0 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_4b0 + 0x10))(plStack_4b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4b0);
        }
      }
      if (plStack_4a0 != (long *)0x0) {
        plVar7 = plStack_4a0 + 1;
        do {
          lVar11 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4a0);
        }
      }
      *param_1 = 0;
      plVar7 = plVar6 + 0x4b;
      lVar11 = plVar6[0x59];
      uVar12 = lVar11 - 1;
      plVar6[0x59] = uVar12;
      if (uVar12 < 8) {
        uVar12 = plVar7[lVar11 + 2];
        if (plVar6[0x5a] == uVar12) {
          return;
        }
      }
      else {
        uVar12 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar12) {
          return;
        }
      }
      lVar11 = *plVar7;
      lVar15 = plVar6[0x4c];
      lVar13 = lVar15 - lVar11;
      uVar17 = lVar13 >> 4;
      if (uVar17 < uVar12) {
        uVar18 = uVar12 - uVar17;
        lVar16 = plVar6[0x4d];
        if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
          if (uVar12 >> 0x3c == 0) {
            uVar10 = lVar16 - lVar11 >> 3;
            if (uVar10 <= uVar12) {
              uVar10 = uVar12;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar10 >> 0x3c == 0) {
              lVar5 = uVar10 << 4;
              __Znwm();
              lVar15 = lVar5 + lVar13;
              _bzero(lVar15,uVar18 * 0x10);
              lVar14 = lVar15 + uVar17 * -0x10;
              _memcpy(lVar14,lVar11,lVar13);
              *plVar7 = lVar14;
              plVar6[0x4c] = lVar15 + uVar18 * 0x10;
              plVar6[0x4d] = lVar5 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              uStack_78 = lVar11;
              lStack_70 = lVar16;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar4)();
        }
        _bzero(lVar15,uVar18 * 0x10);
        plVar6[0x4c] = lVar15 + uVar18 * 0x10;
      }
      else if (uVar12 < uVar17) {
        lVar11 = lVar11 + uVar12 * 0x10;
        while (lVar15 != lVar11) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar6[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar12;
      return;
    }
    puVar9 = &UNK_10f66ef17;
  }
  else {
    puVar9 = &UNK_10f66ef01;
  }
  FUN_10a00946c(puVar9);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a71ad74);
  (*pcVar4)();
}



/* Entry: 10a71aea8; end: 10a71aecb;  */

ulong FUN_10a71aea8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  uVar1 = 3;
  puVar3 = (undefined8 *)0x0;
  FUN_10a052ee0(3,0,param_1);
  uVar2 = uVar1;
  FUN_10a0051e8();
  if ((uVar2 & 1) == 0) {
    FUN_10a052828(uVar1,*puVar3,FUN_10a71af24,FUN_10a71b028);
  }
  return uVar1;
}



/* Entry: 10a71aecc; end: 10a71af23;  */

ulong FUN_10a71aecc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a71af24,FUN_10a71b028);
  }
  return param_1;
}



/* Entry: 10a71af24; end: 10a71b027;  */

void FUN_10a71af24(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      lVar6 = param_2[0x82];
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a71b014);
  (*pcVar1)();
}



/* Entry: 10a71b028; end: 10a71b0e7;  */

void FUN_10a71b028(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71a720(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x82) = (char)param_2;
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



/* Entry: 10a71b0e8; end: 10a71b2f3;  */

void FUN_10a71b0e8(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f671199,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a71b1a4);
  (*pcVar4)();
}



/* Entry: 10a71b2f4; end: 10a71b34f;  */

long * FUN_10a71b2f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a71b350(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a71b350; end: 10a71b38b;  */

void FUN_10a71b350(undefined8 *param_1)

{
  func_0x00010a703078(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a71b38c; end: 10a71b39b;  */

void FUN_10a71b38c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13e60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71b39c; end: 10a71b3bb;  */

void FUN_10a71b39c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13e60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71b3bc; end: 10a71b3cb;  */

void FUN_10a71b3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71b3cc; end: 10a71b423;  */

long FUN_10a71b3cc(long param_1)

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



/* Entry: 10a71b424; end: 10a71b47b;  */

void FUN_10a71b424(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a71b47c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a71b47c; end: 10a71b4ef;  */

undefined8 * FUN_10a71b47c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110995158;
  param_1[1] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a71b4f0; end: 10a71b6d7;  */

void FUN_10a71b4f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  
  FUN_10a71b8d0(param_3,param_4);
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
  FUN_10a71b994(auStack_50,param_3,&lStack_60);
  FUN_10a71b76c(param_1,auStack_50);
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



/* Entry: 10a71b6d8; end: 10a71b76b;  */

void FUN_10a71b6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a71bbd8(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a71b76c(param_1,auStack_38);
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



/* Entry: 10a71b76c; end: 10a71b8cf;  */

void FUN_10a71b76c(long *param_1,long *param_2)

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



/* Entry: 10a71b8d0; end: 10a71b993;  */

undefined8 FUN_10a71b8d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0xf0;
  __Znwm(0xf0);
  uVar5 = *param_1;
  plVar7 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10aaee3c4(uVar4,uVar5,&uStack_40);
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
  return uVar4;
}



/* Entry: 10a71b994; end: 10a71ba33;  */

long * FUN_10a71b994(long *param_1,long param_2,undefined8 *param_3)

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
  *puVar2 = &PTR_DAT_110c14c30;
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
  FUN_10a71ba34(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a71ba34; end: 10a71bb57;  */

void FUN_10a71ba34(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a71bb58; end: 10a71bb97;  */

void FUN_10a71bb58(long param_1)

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



/* Entry: 10a71bb98; end: 10a71bbd3;  */

long FUN_10a71bb98(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c14c70);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a71bbd4; end: 10a71bbd7;  */

void FUN_10a71bbd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71bbd8; end: 10a71bc4f;  */

void FUN_10a71bbd8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a71bc50();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
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
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a71bc50; end: 10a71bc97;  */

undefined8 * FUN_10a71bc50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c14c90;
  FUN_10a71bcd8(param_1 + 3);
  return param_1;
}



/* Entry: 10a71bc98; end: 10a71bca7;  */

void FUN_10a71bc98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14c90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71bca8; end: 10a71bcc7;  */

void FUN_10a71bca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14c90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71bcc8; end: 10a71bcd7;  */

void FUN_10a71bcc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71bcd8; end: 10a71bd7b;  */

undefined8
FUN_10a71bcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
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
  }
  FUN_10aaee3c4(param_1,0,&uStack_30);
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



/* Entry: 10a71bd7c; end: 10a71bd8b;  */

void FUN_10a71bd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71bd8c; end: 10a71bdab;  */

void FUN_10a71bd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13eb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71bdac; end: 10a71bdbb;  */

void FUN_10a71bdac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71bdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71bdbc; end: 10a71be13;  */

long FUN_10a71bdbc(long param_1)

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



/* Entry: 10a71be14; end: 10a71be23;  */

void FUN_10a71be14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13f00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71be24; end: 10a71be43;  */

void FUN_10a71be24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13f00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71be44; end: 10a71be53;  */

void FUN_10a71be44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71be4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71be54; end: 10a71beab;  */

long FUN_10a71be54(long param_1)

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



/* Entry: 10a71beac; end: 10a71bf83;  */

void FUN_10a71beac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c13f50;
  puVar1[3] = &PTR____cxa_pure_virtual_110c23130;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = &PTR_FUN_110c383b8;
  puVar1[0x14] = 0;
  *(undefined2 *)(puVar1 + 0x16) = 0x100;
  *(undefined1 *)(puVar1 + 4) = 1;
  FUN_10a0040d0(puVar1 + 5,&PTR_PTR_110c11e48);
  puVar1[3] = &PTR_DAT_110c11d40;
  puVar1[5] = &PTR_DAT_110c11d90;
  puVar1[0x13] = &PTR_DAT_110c11e08;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a71bf84; end: 10a71bf93;  */

void FUN_10a71bf84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13f50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71bf94; end: 10a71bfb3;  */

void FUN_10a71bf94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13f50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71bfb4; end: 10a71bfc3;  */

void FUN_10a71bfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71bfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71bfc4; end: 10a71c01b;  */

long FUN_10a71bfc4(long param_1)

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



/* Entry: 10a71c01c; end: 10a71c0f3;  */

void FUN_10a71c01c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c13fa0;
  puVar1[3] = &PTR____cxa_pure_virtual_110c23130;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = &PTR_FUN_110c383b8;
  puVar1[0x14] = 0;
  *(undefined2 *)(puVar1 + 0x16) = 0x100;
  *(undefined1 *)(puVar1 + 4) = 1;
  FUN_10a0040d0(puVar1 + 5,&PTR_PTR_110c11f88);
  puVar1[3] = &PTR_FUN_110c11e80;
  puVar1[5] = &PTR_DAT_110c11ed0;
  puVar1[0x13] = &PTR_DAT_110c11f48;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a71c0f4; end: 10a71c103;  */

void FUN_10a71c0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13fa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71c104; end: 10a71c123;  */

void FUN_10a71c104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13fa0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71c124; end: 10a71c133;  */

void FUN_10a71c124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71c12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71c134; end: 10a71c18b;  */

long FUN_10a71c134(long param_1)

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



/* Entry: 10a71c18c; end: 10a71c263;  */

void FUN_10a71c18c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c13ff0;
  puVar1[3] = &PTR____cxa_pure_virtual_110c23130;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = &PTR_FUN_110c383b8;
  puVar1[0x14] = 0;
  *(undefined2 *)(puVar1 + 0x16) = 0x100;
  *(undefined1 *)(puVar1 + 4) = 1;
  FUN_10a0040d0(puVar1 + 5,&PTR_PTR_110c232e0);
  puVar1[3] = &PTR_FUN_110c231d8;
  puVar1[5] = &PTR_DAT_110c23228;
  puVar1[0x13] = &PTR_DAT_110c232a0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a71c264; end: 10a71c273;  */

void FUN_10a71c264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13ff0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71c274; end: 10a71c293;  */

void FUN_10a71c274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c13ff0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71c294; end: 10a71c2a3;  */

void FUN_10a71c294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71c29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71c2a4; end: 10a71c2fb;  */

long FUN_10a71c2a4(long param_1)

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



/* Entry: 10a71c2fc; end: 10a71c5af;  */

void FUN_10a71c2fc(undefined *******param_1,undefined ******param_2)

{
  undefined ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *******pppppppuVar5;
  undefined *******pppppppuVar6;
  undefined ******ppppppuVar7;
  undefined *****pppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******unaff_x21;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  int aiStack_130 [2];
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined8 **ppuStack_110;
  undefined *****pppppuStack_108;
  undefined1 *puStack_100;
  int **ppiStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined *****pppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined ******ppppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *****pppppuStack_a8;
  undefined ******ppppppuStack_a0;
  undefined ****ppppuStack_98;
  undefined ******ppppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ******ppppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ******ppppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  undefined ******ppppppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar1 = *param_1;
  pppppppuVar6 = (undefined *******)param_1[1];
  *param_1 = (undefined ******)0x0;
  param_1[1] = (undefined ******)0x0;
  ppppppuVar10 = (undefined ******)param_2[2];
  ppppppuVar7 = param_2;
  pppppuStack_a8 = (undefined *****)ppppppuVar1;
  ppppppuStack_a0 = (undefined ******)pppppppuVar6;
  if (ppppppuVar10 == (undefined ******)0x0) goto LAB_10a71c4ec;
  if (*(char *)(ppppppuVar10 + 8) == '\x01') {
    pppppuVar8 = *ppppppuVar10;
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = (undefined *******)&pppppuStack_78;
    ppppppuVar7 = ppppppuVar10;
    pppppuStack_78 = (undefined *****)ppppppuVar1;
    ppppppuStack_70 = (undefined ******)pppppppuVar6;
    (*(code *)pppppuVar8)(param_1,ppppppuVar10);
    if ((undefined *******)ppppppuStack_70 == (undefined *******)0x0) goto LAB_10a71c4ec;
    pppppppuVar6 = (undefined *******)(ppppppuStack_70 + 1);
    do {
      ppppppuVar9 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar5 = (undefined *******)ppppppuStack_70;
    } while (cVar2 != '\0');
  }
  else {
    if (*(char *)(ppppppuVar10 + 8) != '\x02') goto LAB_10a71c4ec;
    unaff_x21 = ppppppuVar10;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      param_1 = (undefined *******)*ppppppuVar10;
      ppppppuVar7 = &pppppuStack_a8;
      FUN_10a71c5b0(param_1,ppppppuVar7);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a71c4ec;
    }
    ppppppuVar7 = (undefined ******)0x0;
    param_1 = (undefined *******)0x0;
    if (param_2 == (undefined ******)0x0) goto LAB_10a71c4ec;
    ppppuStack_60 = (undefined ****)ppppppuVar10[1];
    ppppuStack_68 = (undefined ****)*ppppppuVar10;
    if (ppppppuVar10[1] != (undefined *****)0x0) {
      pppppuVar8 = ppppppuVar10[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar8,0x10);
        if (bVar3) {
          *pppppuVar8 = (undefined ****)((long)*pppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppppppuVar6 = (undefined *******)ppppppuStack_a0;
      } while (cVar2 != '\0');
    }
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_78 = (undefined *****)FUN_10a71c740;
    ppppppuStack_70 = (undefined ******)&PTR_FUN_110c14030;
    ppppuStack_98 = (undefined ****)0x0;
    ppppppuStack_90 = (undefined ******)0x0;
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar10 = (undefined ******)&ppppuStack_98;
    unaff_x21 = &pppppuStack_78;
    ppppppuVar7 = &pppppuStack_78;
    pppppuStack_88 = (undefined *****)ppppppuVar1;
    ppppppuStack_80 = (undefined ******)pppppppuVar6;
    pppppuStack_58 = (undefined *****)ppppppuVar1;
    ppppppuStack_50 = (undefined ******)pppppppuVar6;
    FUN_10a4634ec(param_2,ppppppuVar7);
    param_1 = &ppppppuStack_70;
    (*(code *)*ppppppuStack_70)();
    if (pppppppuVar6 != (undefined *******)0x0) {
      pppppppuVar5 = pppppppuVar6 + 1;
      do {
        ppppppuVar9 = *pppppppuVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
        if (bVar3) {
          *pppppppuVar5 = (undefined ******)((long)ppppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppppuVar9 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar6)[2])(pppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = pppppppuVar6;
      }
    }
    if ((undefined *******)ppppppuStack_90 == (undefined *******)0x0) goto LAB_10a71c4ec;
    pppppppuVar6 = (undefined *******)(ppppppuStack_90 + 1);
    do {
      ppppppuVar9 = *pppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar3) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppppppuVar5 = (undefined *******)ppppppuStack_90;
    } while (cVar2 != '\0');
  }
  if (ppppppuVar9 == (undefined ******)0x0) {
    (*(code *)(*pppppppuVar5)[2])(pppppppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_1 = pppppppuVar5;
  }
LAB_10a71c4ec:
  pppppppuVar6 = (undefined *******)ppppppuStack_a0;
  ppppppuStack_c8 = (undefined ******)param_1;
  if ((undefined *******)ppppppuStack_a0 != (undefined *******)0x0) {
    pppppppuVar5 = (undefined *******)(ppppppuStack_a0 + 1);
    do {
      ppppppuVar9 = *pppppppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
      if (bVar3) {
        *pppppppuVar5 = (undefined ******)((long)ppppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppppuVar9 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_a0)[2])(ppppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuStack_c8 = (undefined ******)pppppppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_70)(unaff_x21 + 1);
    FUN_10a711cf8(ppppppuVar10 + 2);
    func_0x00010a004dac(&ppppuStack_98);
    FUN_10a711cf8(&pppppuStack_a8);
    pppppppuVar6 = (undefined *******)ppppppuStack_c8;
    __Unwind_Resume();
    pcStack_b8 = FUN_10a71c5b0;
    pppppuStack_e0 = (undefined *****)ppppppuVar1;
    pppppuStack_d8 = (undefined *****)unaff_x21;
    pppppuStack_d0 = (undefined *****)ppppppuVar10;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&ppuStack_110,pppppppuVar6 + 1,*pppppppuVar6);
    func_0x000109884820(&puStack_138,&ppuStack_110,*pppppppuVar6);
    if (ppuStack_110 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_110)();
    }
    (*(code *)(**pppppppuVar6)[6])(&puStack_140);
    ppppppuVar10 = *pppppppuVar6;
    func_0x00010a71044c(aiStack_120,ppppppuVar10,ppppppuVar7);
    uStack_e8 = 1;
    piStack_f0 = aiStack_120;
    (*(code *)(*ppppppuVar10)[0xb])(ppppppuVar10);
    ppuStack_110 = &puStack_138;
    ppiStack_f8 = &piStack_f0;
    pppppuStack_108 = (undefined *****)ppppppuVar10;
    puStack_100 = (undefined1 *)&puStack_140;
    func_0x0001098960c0(aiStack_130);
    if ((3 < aiStack_130[0]) && (puStack_128 != (undefined8 *)0x0)) {
      (**(code **)*puStack_128)();
    }
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if (puStack_140 != (undefined8 *)0x0) {
      (**(code **)*puStack_140)();
    }
    if (puStack_138 != (undefined8 *)0x0) {
      (**(code **)*puStack_138)();
    }
    return;
  }
  return;
}



/* Entry: 10a71c5b0; end: 10a71c73f;  */

void FUN_10a71c5b0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  func_0x00010a71044c(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a71c740; end: 10a71c74f;  */

void FUN_10a71c740(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  func_0x00010a71044c(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a71c750; end: 10a71c777;  */

long FUN_10a71c750(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a711cf8(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a71c778; end: 10a71c8d7;  */

void FUN_10a71c778(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c14030;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
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
  return;
}



/* Entry: 10a71c8d8; end: 10a71ccef;  */

undefined1  [16]
FUN_10a71c8d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar9 = param_1;
  func_0x000107c2b05c();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar15 <= plVar9) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = param_1;
          func_0x000107c2b068(param_1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10a71cc6c;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)*param_4;
  plVar14 = (long *)0xd8;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*plVar7,plVar7[1]);
  }
  else {
    lVar4 = plVar7[1];
    lVar3 = *plVar7;
    plVar14[4] = plVar7[2];
    plVar14[3] = lVar4;
    plVar14[2] = lVar3;
  }
  *(undefined1 *)(plVar14 + 5) = 0;
  *(undefined1 *)(plVar14 + 0x1a) = 0;
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10a71cbf4;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar7) {
LAB_10a71ca7c:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a71ccd8);
      (*pcVar2)();
    }
    lVar3 = (long)plVar7 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    param_1[1] = (long)plVar7;
    do {
      *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = (long *)param_1[2];
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
            **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_10a71ca7c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x25 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_10a71cbf4:
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10a71cc6c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10a71ccf0; end: 10a71ce77;  */

void FUN_10a71ccf0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a71b350(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a71ce78; end: 10a71ce9f;  */

void FUN_10a71ce78(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
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
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
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



/* Entry: 10a71cea0; end: 10a71cfdf;  */

undefined8 * FUN_10a71cea0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a71cfe0; end: 10a71d007;  */

void FUN_10a71cfe0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
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
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
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



/* Entry: 10a71d008; end: 10a71d067;  */

void FUN_10a71d008(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x128;
  __Znwm();
  FUN_10a71d068();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a71d068; end: 10a71d0b7;  */

undefined8 * FUN_10a71d068(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c14138;
  FUN_10a6e93a8(param_1 + 3,*param_2,*param_3);
  return param_1;
}



/* Entry: 10a71d0b8; end: 10a71d0c7;  */

void FUN_10a71d0b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a71d0c8; end: 10a71d0e7;  */

void FUN_10a71d0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14138;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71d0e8; end: 10a71d0f3;  */

long * FUN_10a71d0e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0xe0);
  plVar2 = (long *)*(long *)(param_1 + 0xf0);
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (*(char *)((long)plVar2 + 0x27) < '\0') {
      __ZdlPv(plVar2[2]);
    }
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a71d0f4; end: 10a71d397;  */

/* WARNING: Removing unreachable block (ram,0x00010a71d288) */
/* WARNING: Removing unreachable block (ram,0x00010a71d298) */
/* WARNING: Removing unreachable block (ram,0x00010a71d2b4) */
/* WARNING: Removing unreachable block (ram,0x00010a71d2b8) */
/* WARNING: Removing unreachable block (ram,0x00010a71d2cc) */

void FUN_10a71d0f4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    lVar11 = *param_1;
    if (lVar11 != 0) {
      __ZNSt3__15mutex4lockEv(lVar11 + 0x3d0);
      plVar13 = *(long **)(lVar11 + 0x3c0);
      plVar12 = *(long **)(lVar11 + 0x3b8);
      plVar7 = plVar12;
      for (; plVar12 != plVar13; plVar12 = plVar12 + 2) {
        plVar7 = (long *)plVar12[1];
        if ((plVar7 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
LAB_10a71d1c4:
          plVar7 = plVar12;
          if (plVar12 != plVar13) {
            while (plVar1 = plVar12 + 2, plVar1 != plVar13) {
              plVar8 = (long *)plVar12[3];
              plVar12 = plVar1;
              if ((plVar8 != (long *)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
                plVar9 = (long *)*plVar1;
                plVar2 = plVar8 + 1;
                do {
                  lVar10 = *plVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *plVar2 = lVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
                if (plVar9 != (long *)0x0 && plVar9 != param_2) {
                  lVar15 = plVar1[1];
                  lVar14 = *plVar1;
                  *plVar1 = 0;
                  plVar1[1] = 0;
                  lVar10 = plVar7[1];
                  plVar7[1] = lVar15;
                  *plVar7 = lVar14;
                  if (lVar10 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  plVar7 = plVar7 + 2;
                }
              }
            }
          }
          break;
        }
        plVar8 = (long *)*plVar12;
        plVar1 = plVar7 + 1;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        if (plVar8 == (long *)0x0 || plVar8 == param_2) goto LAB_10a71d1c4;
        plVar7 = plVar13;
      }
      plVar12 = *(long **)(lVar11 + 0x3c0);
      if (plVar12 < plVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a71d384);
        (*pcVar5)();
      }
      if (plVar7 != plVar12) {
        for (; plVar12 != plVar7; plVar12 = plVar12 + -2) {
          if (plVar12[-1] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        *(long **)(lVar11 + 0x3c0) = plVar7;
      }
      __ZNSt3__15mutex6unlockEv(lVar11 + 0x3d0);
      if (plVar6 == (long *)0x0) goto joined_r0x00010a71d360;
    }
    plVar12 = plVar6 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
joined_r0x00010a71d360:
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a71d344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 10a71d398; end: 10a71d40b;  */

void FUN_10a71d398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c14188;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a71d40c; end: 10a71d44b;  */

void FUN_10a71d40c(long param_1)

{
  FUN_10a71d0f4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a71d44c; end: 10a71d487;  */

long FUN_10a71d44c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c141c8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a71d488; end: 10a71d49b;  */

void FUN_10a71d488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71d49c; end: 10a71d4bb;  */

void FUN_10a71d49c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c141e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a71d4bc; end: 10a71d4cb;  */

void FUN_10a71d4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a71d4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a71d4cc; end: 10a71d523;  */

long FUN_10a71d4cc(long param_1)

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



/* Entry: 10a71d524; end: 10a71d623;  */

long * FUN_10a71d524(long param_1,undefined8 param_2)

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



/* Entry: 10a71d624; end: 10a71d693;  */

void FUN_10a71d624(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010a702f14(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a71d694; end: 10a71d743;  */

void FUN_10a71d694(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,0x10a6f087c,0,param_3,param_5);
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



/* Entry: 10a71d744; end: 10a71d7ff;  */

void FUN_10a71d744(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a71d800(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar4 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_50);
  FUN_10a07d9d4(param_1,param_2,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a71d800; end: 10a71d867;  */

void FUN_10a71d800(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
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
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a71d744(extraout_x8,plVar4,FUN_10a6ef7b8,0,param_2,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
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
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
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



/* Entry: 10a71d868; end: 10a71d917;  */

void FUN_10a71d868(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,FUN_10a6ef7b8,0,param_3,param_5);
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



/* Entry: 10a71d918; end: 10a71d9c7;  */

void FUN_10a71d918(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,FUN_10a6ef70c,0,param_3,param_5);
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



/* Entry: 10a71d9c8; end: 10a71da77;  */

void FUN_10a71d9c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a71d744(param_1,param_2,0x10a6ef734,0,param_3,param_5);
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


