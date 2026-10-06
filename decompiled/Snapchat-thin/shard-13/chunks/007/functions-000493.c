/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abf19fc; end: 10abf1a57;  */

void FUN_10abf19fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar5 = *param_1;
    uVar3 = *param_2;
    uVar1 = uVar5;
    if (uVar3 <= uVar5) {
      uVar1 = uVar3;
    }
    puVar2 = param_1;
    lVar4 = 0;
    if (uVar5 <= uVar3) {
      lVar4 = uVar3 - uVar5;
    }
    for (; puVar2 = puVar2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
      param_2 = param_2 + 1;
      *puVar2 = *param_2;
    }
    if (uVar5 < uVar3) {
      do {
        param_2 = param_2 + 1;
        *puVar2 = *param_2;
        lVar4 = lVar4 + -1;
        puVar2 = puVar2 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar3;
  }
  return;
}



/* Entry: 10abf1a58; end: 10abf1b03;  */

long FUN_10abf1a58(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 0x338);
  lVar3 = *(long *)(param_1 + 0x330);
  func_0x000107c2b054(auStack_48,&UNK_10f69acbe);
  if (param_2 < (uint)((ulong)(lVar2 - lVar3) >> 3)) {
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3)) {
      return *(long *)(param_1 + 0x330) + (ulong)param_2 * 8;
    }
  }
  else {
    FUN_10a109200(auStack_48);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abf1ae8);
  (*pcVar1)();
}



/* Entry: 10abf1b04; end: 10abf1b93;  */

long FUN_10abf1b04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*(long *)(param_1 + 0x290) == 0) {
    FUN_10abf7c90(auStack_38,param_1,1);
    FUN_10a00e5c4(param_1 + 0x290,auStack_38);
    *(undefined1 *)(param_1 + 0x2a0) = uStack_28;
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
  }
  return param_1 + 0x290;
}



/* Entry: 10abf1b94; end: 10abf1f43;  */

void FUN_10abf1b94(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  undefined8 ***pppuStack_2b0;
  long lStack_2a8;
  undefined1 uStack_298;
  undefined8 ***pppuStack_290;
  long lStack_288;
  char cStack_279;
  undefined8 ***pppuStack_278;
  long lStack_270;
  char cStack_261;
  undefined8 ***pppuStack_260;
  long alStack_258 [2];
  undefined1 uStack_248;
  long *plStack_b0;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  FUN_10ad055a0();
  if ((int)plVar5 == 0) {
LAB_10abf1c0c:
    FUN_10a025e68(&pppuStack_260,param_4,param_5,0,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(*param_1 + 0x88))(param_1,&pppuStack_260);
    if (plStack_88 != (long *)0x0) {
      plVar5 = plStack_88 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    if (plStack_b0 != (long *)0x0) {
      plVar5 = plStack_b0 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
      }
    }
    func_0x00010a048e34(alStack_258,pppuStack_260);
    if (param_2 != 0) {
      FUN_10abf1f44(param_1,param_2,param_5);
    }
    FUN_10a244c44(param_1[0x10b]);
    FUN_10ab11d88();
    (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar4 == (undefined *)0x0) {
      ppuVar4 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar5 = (long *)*ppuVar4;
      if ((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x18))(), plVar5 == (long *)0x0))
      goto LAB_10abf1c0c;
      plVar5 = plVar5 + 7;
    }
    else {
      plVar5 = (long *)(*ppuVar4 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 1 & 1) == 0) goto LAB_10abf1c0c;
  }
  func_0x000107c2b054(&pppuStack_278,&UNK_10f69a90c);
  func_0x000107c2b054(&pppuStack_290,"");
  pppuStack_2b0 = (undefined8 ***)0x10f29b0c6;
  pppuStack_260 = pppuStack_2b0;
  if (cStack_261 < '\0') {
    if (lStack_270 != 0) {
      pppuStack_260 = pppuStack_278;
    }
  }
  else if (cStack_261 != '\0') {
    pppuStack_260 = &pppuStack_278;
  }
  if (cStack_279 < '\0') {
    if (lStack_288 != 0) {
      pppuStack_2b0 = pppuStack_290;
    }
  }
  else if (cStack_279 != '\0') {
    pppuStack_2b0 = &pppuStack_290;
  }
  FUN_10a224324(&pppuStack_260,&pppuStack_2b0);
  if (cStack_261 < '\0') {
    if (lStack_270 == 0) goto LAB_10abf1e34;
    func_0x000107c3192c(&pppuStack_260,pppuStack_278);
LAB_10abf1e50:
    uStack_248 = 1;
  }
  else {
    if (cStack_261 != '\0') {
      alStack_258[0] = lStack_270;
      pppuStack_260 = pppuStack_278;
      goto LAB_10abf1e50;
    }
LAB_10abf1e34:
    uStack_248 = 0;
    pppuStack_260 = (undefined8 ***)((ulong)pppuStack_260 & 0xffffffffffffff00);
  }
  if (cStack_279 < '\0') {
    if (lStack_288 == 0) {
LAB_10abf1e7c:
      uStack_298 = 0;
      pppuStack_2b0 = (undefined8 ***)((ulong)pppuStack_2b0 & 0xffffffffffffff00);
      goto LAB_10abf1e9c;
    }
    func_0x000107c3192c(&pppuStack_2b0,pppuStack_290);
  }
  else {
    if (cStack_279 == '\0') goto LAB_10abf1e7c;
    lStack_2a8 = lStack_288;
    pppuStack_2b0 = pppuStack_290;
  }
  uStack_298 = 1;
LAB_10abf1e9c:
  FUN_10a234a0c(&pppuStack_260,&pppuStack_2b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf1eb0);
  (*pcVar3)();
}



/* Entry: 10abf1f44; end: 10abf1f8b;  */

void FUN_10abf1f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_10abf1a58(param_2,param_3);
  FUN_10abf1a58(param_2,param_3);
  lVar1 = **(long **)(param_1 + 0x848);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    FUN_10ad5fee8(&stack0xffffffffffffffef,&stack0xffffffffffffffe0);
  }
  return;
}



/* Entry: 10abf1f8c; end: 10abf2073;  */

void FUN_10abf1f8c(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  undefined *puStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &UNK_10f69af39;
  plStack_30 = (long *)0x43;
  if (param_2 < *(ulong *)(param_1 + 8)) {
    lVar7 = *(long *)(param_1 + param_2 * 0x10 + 0x10);
    if (*(long *)(lVar7 + 0x290) == 0) {
      FUN_10abf1b04(lVar7);
    }
    puVar6 = *(undefined **)(lVar7 + 0x2a8);
    if (puVar6 == (undefined *)0x0) {
      FUN_10abf27cc(lVar7);
      puVar6 = *(undefined **)(lVar7 + 0x2a8);
    }
    plStack_30 = *(long **)(lVar7 + 0x2b0);
    *(undefined8 *)(lVar7 + 0x2a8) = 0;
    *(undefined8 *)(lVar7 + 0x2b0) = 0;
    uStack_28 = *(undefined1 *)(lVar7 + 0x2b8);
    puStack_38 = puVar6;
    FUN_10a00e5c4((undefined8 *)(lVar7 + 0x2a8),lVar7 + 0x290);
    *(undefined1 *)(lVar7 + 0x2b8) = *(undefined1 *)(lVar7 + 0x2a0);
    FUN_10a00e5c4(lVar7 + 0x290,&puStack_38);
    plVar4 = plStack_30;
    *(undefined1 *)(lVar7 + 0x2a0) = uStack_28;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  ppuVar5 = &puStack_38;
  FUN_10a0edfc4();
  if ((int)param_2 != 2) {
    if (ppuVar5[1] != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        FUN_10abf1f8c(ppuVar5,(ulong)puVar6 & 0xffffffff);
        puVar6 = puVar6 + 1;
      } while (puVar6 < ppuVar5[1]);
    }
    if ((int)param_2 == 1) {
      return;
    }
  }
  puVar6 = ppuVar5[10];
  if (puVar6 != (undefined *)0x0) {
    if (*(long *)(puVar6 + 0x290) == 0) {
      FUN_10abf1b04(puVar6);
    }
    lStack_88 = *(long *)(puVar6 + 0x2a8);
    if (lStack_88 == 0) {
      FUN_10abf27cc(puVar6);
      lStack_88 = *(long *)(puVar6 + 0x2a8);
    }
    plStack_80 = *(long **)(puVar6 + 0x2b0);
    *(undefined8 *)(puVar6 + 0x2a8) = 0;
    *(undefined8 *)(puVar6 + 0x2b0) = 0;
    uStack_78 = puVar6[0x2b8];
    FUN_10a00e5c4(puVar6 + 0x2a8,puVar6 + 0x290);
    puVar6[0x2b8] = puVar6[0x2a0];
    FUN_10a00e5c4(puVar6 + 0x290,&lStack_88);
    plVar4 = plStack_80;
    puVar6[0x2a0] = uStack_78;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
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
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10abf2074; end: 10abf217f;  */

void FUN_10abf2074(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  if (param_2 != 2) {
    if (*(long *)(param_1 + 8) != 0) {
      uVar6 = 0;
      do {
        FUN_10abf1f8c(param_1,uVar6 & 0xffffffff);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(param_1 + 8));
    }
    if (param_2 == 1) {
      return;
    }
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x290) == 0) {
      FUN_10abf1b04(lVar5);
    }
    lStack_48 = *(long *)(lVar5 + 0x2a8);
    if (lStack_48 == 0) {
      FUN_10abf27cc(lVar5);
      lStack_48 = *(long *)(lVar5 + 0x2a8);
    }
    plStack_40 = *(long **)(lVar5 + 0x2b0);
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    uStack_38 = *(undefined1 *)(lVar5 + 0x2b8);
    FUN_10a00e5c4((undefined8 *)(lVar5 + 0x2a8),lVar5 + 0x290);
    *(undefined1 *)(lVar5 + 0x2b8) = *(undefined1 *)(lVar5 + 0x2a0);
    FUN_10a00e5c4(lVar5 + 0x290,&lStack_48);
    plVar4 = plStack_40;
    *(undefined1 *)(lVar5 + 0x2a0) = uStack_38;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10abf2180; end: 10abf2723;  */

void FUN_10abf2180(undefined4 param_1,long *param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,uint param_7,uint param_8,long *param_9,
                  long *param_10,uint param_11,undefined4 param_12,char param_13)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long *extraout_x8;
  undefined *puVar17;
  long lVar18;
  byte *pbVar19;
  undefined *puStack_2a8;
  long *plStack_2a0;
  undefined *puStack_298;
  long *plStack_290;
  long lStack_288;
  undefined1 auStack_280 [416];
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_b0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_3;
  (**(code **)(*param_3 + 0xa8))();
  uVar10 = (uint)plVar12;
  uVar15 = uVar10;
  if (3 < (int)uVar10) {
    uVar15 = 4;
  }
  if (param_2[10] == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar10;
    FUN_10ad05e64();
  }
  *(char *)(param_2 + 0xf) = (char)uVar11;
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = (uint)(1 < (int)uVar10) & (uVar11 ^ 0xffffffff);
  }
  *(int *)(param_2 + 0xe) = (int)param_4;
  *(int *)((long)param_2 + 0x74) = (int)param_5;
  uVar9 = (undefined1)uVar2;
  if (param_2[1] != 0) {
    lVar16 = param_2[1] << 4;
    plVar12 = param_2;
    do {
      plVar12 = plVar12 + 2;
      lVar18 = *plVar12;
      *(undefined1 *)(lVar18 + 0x318) = uVar9;
      *(char *)(lVar18 + 0x319) = (char)param_7;
      *(char *)(lVar18 + 0x31a) = (char)param_8;
      *(uint *)(lVar18 + 0x324) = uVar15;
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0);
  }
  lVar16 = param_2[10];
  if (lVar16 != 0) {
    *(undefined1 *)(lVar16 + 0x318) = uVar9;
    *(uint *)(lVar16 + 0x324) = uVar15;
  }
  lVar16 = param_2[0xc];
  if (lVar16 != 0) {
    *(undefined1 *)(lVar16 + 0x318) = uVar9;
    *(uint *)(lVar16 + 0x324) = uVar15;
  }
  FUN_10abf8b28(&lStack_288,param_2,uVar2,param_7 | param_8,param_4,param_5);
  lVar16 = *param_9;
  puStack_298 = &UNK_10f69ae81;
  plStack_290 = (long *)0x59;
  if (lVar16 == *param_10) {
    puStack_298 = &UNK_10f69aedb;
    plStack_290 = (long *)0x5d;
    if (lStack_288 == lVar16) {
      if (lVar16 != 0) {
        plVar12 = param_10 + 1;
        pbVar19 = (byte *)(param_9 + 1);
        puVar7 = (uint *)&lStack_288;
        do {
          lVar18 = *plVar12;
          bVar3 = *pbVar19;
          *(long *)(puVar7 + 0x18) = plVar12[1];
          *(long *)(puVar7 + 0x16) = lVar18;
          puVar7[0x1a] = bVar3 ^ 1;
          lVar16 = lVar16 + -1;
          plVar12 = plVar12 + 2;
          pbVar19 = pbVar19 + 1;
          puVar7 = puVar7 + 0x1a;
        } while (lVar16 != 0);
      }
      if ((param_7 & 1) == 0) {
        uStack_88 = 2;
      }
      else {
        uStack_88 = param_11 & 0xff ^ 1;
        uStack_90 = param_1;
      }
      if (param_8 == 0) {
        uStack_84 = 2;
      }
      else {
        uStack_8c = param_12;
        uStack_84 = param_11 >> 8 & 0xff ^ 1;
      }
      if ((param_13 == '\0') || (plStack_e0 == (long *)0x0)) {
LAB_10abf25b4:
        if ((plStack_e0 != (long *)0x0) && (*(char *)((long)plStack_e0 + 0x19) == '\x01')) {
          if (uStack_88 == 1) {
            uStack_88 = 0;
          }
          if (uStack_84 == 1) {
            uStack_84 = 0;
          }
        }
        (**(code **)(*param_3 + 0x88))(param_3,&lStack_288);
        if (plStack_b0 != (long *)0x0) {
          plVar12 = plStack_b0 + 1;
          do {
            lVar16 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
          }
        }
        if (plStack_d8 != (long *)0x0) {
          plVar12 = plStack_d8 + 1;
          do {
            lVar16 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
          }
        }
        func_0x00010a048e34(auStack_280,lStack_288);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        ___stack_chk_fail();
LAB_10abf26c8:
        puVar17 = &UNK_10f69a874;
      }
      else {
        ppuVar13 = &PTR___tlv_bootstrap_11340de10;
        (*(code *)PTR___tlv_bootstrap_11340de10)();
        puVar17 = *ppuVar13;
        plVar12 = extraout_x8;
        if ((puVar17 != (undefined *)0x0) &&
           (((plVar12 = extraout_x8, puVar17[0xc0] == '\x01' &&
             (plVar12 = extraout_x8, *(long *)(puVar17 + 0x80) != 0)) &&
            (FUN_10a08dbac(puVar17 + 0x18), plVar12 = plStack_e0, plStack_e0 == (long *)0x0))))
        goto LAB_10abf25b4;
        if ((param_3[0x137] == 0) || (param_3[0x136] == 0)) goto LAB_10abf26c8;
        (**(code **)(*plVar12 + 0x50))();
        ppuVar13 = &PTR_DAT_110ae4700 + ((ulong)plVar12 & 0xffffffff) * 4;
        if (0x56 < (uint)plVar12) {
          ppuVar13 = &PTR_DAT_110ae4700;
        }
        if ((*(byte *)((long)ppuVar13 + 0x14) & 1) != 0) {
          plVar12 = plStack_e0;
          (**(code **)(*plStack_e0 + 0x50))();
          ppuVar13 = &PTR_DAT_110ae4700 + ((ulong)plVar12 & 0xffffffff) * 4;
          if (0x56 < (uint)plVar12) {
            ppuVar13 = &PTR_DAT_110ae4700;
          }
          if ((*(byte *)((long)ppuVar13 + 0x14) >> 1 & 1) != 0) {
            lVar16 = param_3[0x137];
            if (*(long *)(lVar16 + 0xb8) == 0) {
              puStack_298 = (undefined *)0x0;
              plStack_290 = (long *)0x0;
            }
            else {
              puVar14 = (undefined8 *)0x1;
              FUN_10a088744();
              if (puVar14 == (undefined8 *)0x0) {
                plStack_290 = (long *)0x0;
                puStack_298 = (undefined *)0x0;
              }
              else {
                puStack_298 = (undefined *)*puVar14;
                plStack_290 = (long *)puVar14[1];
                if (plStack_290 != (long *)0x0) {
                  plVar12 = plStack_290 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar6) {
                      *plVar12 = *plVar12 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
              }
              lVar16 = param_3[0x137];
            }
            if (*(long *)(lVar16 + 0xc0) == 0) {
              puStack_2a8 = (undefined *)0x0;
              plStack_2a0 = (long *)0x0;
            }
            else {
              puVar14 = (undefined8 *)0x1;
              FUN_10a088744();
              if (puVar14 == (undefined8 *)0x0) {
                puStack_2a8 = (undefined *)0x0;
                plStack_2a0 = (long *)0x0;
              }
              else {
                puStack_2a8 = (undefined *)*puVar14;
                plStack_2a0 = (long *)puVar14[1];
                if (plStack_2a0 != (long *)0x0) {
                  plVar12 = plStack_2a0 + 1;
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar6) {
                      *plVar12 = *plVar12 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
              }
            }
            if (puStack_298 == puStack_2a8) {
              cVar5 = *(char *)(param_3[0x136] + 0x40);
              cVar4 = *(char *)(param_3[0x136] + 0x41);
              if (cVar5 == '\x01' || cVar4 != '\x02') {
                uVar9 = 2;
                if (cVar4 != '\x01' || cVar5 != '\x01') {
                  uVar9 = cVar4 == '\x01';
                }
                ppuVar13 = &puStack_298;
                goto LAB_10abf2528;
              }
            }
            else {
              if ((puStack_298 != (undefined *)0x0) && (*(char *)(param_3[0x136] + 0x40) == '\x01'))
              {
                (**(code **)(*param_3 + 0x188))(param_3,&puStack_298,&plStack_e0,0);
              }
              if ((puStack_2a8 != (undefined *)0x0) && (*(char *)(param_3[0x136] + 0x41) != '\x02'))
              {
                uVar9 = *(char *)(param_3[0x136] + 0x41) == '\x01';
                ppuVar13 = &puStack_2a8;
LAB_10abf2528:
                (**(code **)(*param_3 + 0x188))(param_3,ppuVar13,&plStack_e0,uVar9);
              }
            }
            plVar12 = plStack_2a0;
            *(undefined1 *)((long)plStack_e0 + 0x19) = 0;
            if (plStack_2a0 != (long *)0x0) {
              plVar1 = plStack_2a0 + 1;
              do {
                lVar16 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            plVar12 = plStack_290;
            if (plStack_290 != (long *)0x0) {
              plVar1 = plStack_290 + 1;
              do {
                lVar16 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_290 + 0x10))(plStack_290);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
            goto LAB_10abf25b4;
          }
        }
        puVar17 = &UNK_10f69a8bf;
      }
      FUN_10a00946c(puVar17);
      goto LAB_10abf26e0;
    }
  }
  FUN_10a0edfc4(&puStack_298);
LAB_10abf26e0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10abf26e4);
  (*pcVar8)();
}



/* Entry: 10abf2724; end: 10abf27cb;  */

/* WARNING: Removing unreachable block (ram,0x00010ab128ec) */

undefined8 ** FUN_10abf2724(undefined8 *param_1,ulong *param_2)

{
  undefined8 **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  ulong *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 **unaff_x19;
  undefined8 *puVar18;
  undefined8 *unaff_x20;
  undefined8 **unaff_x21;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  undefined8 **unaff_x22;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong unaff_x26;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined8 uVar22;
  byte abStack_469 [249];
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 **ppuStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined4 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 **ppuStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined4 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_25c [12];
  ulong auStack_250 [3];
  ulong *puStack_238;
  ulong uStack_230;
  undefined8 **ppuStack_228;
  undefined1 auStack_220 [8];
  long lStack_218;
  ulong uStack_210;
  undefined8 **ppuStack_208;
  undefined8 uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  ulong uStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  uint uStack_148;
  ulong uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  ulong uStack_110;
  undefined8 **ppuStack_108;
  ulong auStack_100 [3];
  ulong *puStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_bc [12];
  ulong auStack_b0 [3];
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 **ppuStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  
  puVar12 = &stack0xffffffffffffffc0;
  uVar19 = param_2[1];
  if (uVar19 == 0) {
    FUN_10a0edfc4();
    if (*(long *)(puVar12 + 0x2a8) == 0) {
      FUN_10abf7c90(&lStack_78,puVar12,1);
      FUN_10a00e5c4(puVar12 + 0x2a8,&lStack_78);
      puVar12[0x2b8] = uStack_68;
      if (plStack_70 != (long *)0x0) {
        plVar9 = plStack_70 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
    }
    return (undefined8 **)(puVar12 + 0x2a8);
  }
  ppuVar11 = (undefined **)param_1[0x10b];
  FUN_10a244c44();
  if (uVar19 == 1) {
    if (param_2[1] == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10abf27c4);
      (*pcVar5)();
    }
    uVar13 = *(undefined8 *)(param_1[0x10b] + 0x208);
    param_2 = (ulong *)*param_2;
    uVar20 = *(uint *)((long)param_2 + 0x44);
    unaff_x25 = (ulong *)(ulong)uVar20;
    puVar10 = param_2 + 4;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar19 = *param_2;
    ppuVar8 = (undefined8 **)param_2[1];
    if (ppuVar8 != (undefined8 **)0x0) {
      ppuVar6 = ppuVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x26 = 0;
    unaff_x20 = param_1;
    uStack_118 = uVar20;
    uStack_110 = uVar19;
    ppuStack_108 = ppuVar8;
    if (uVar20 == 0) {
      ppuStack_88 = (undefined8 **)param_2[1];
      uStack_90 = *param_2;
      if (param_2[1] != 0) {
        plVar9 = (long *)(param_2[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      FUN_10a756a10(&uStack_178,&uStack_90,auStack_80,1);
      uStack_190 = 0;
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      unaff_x24 = (ulong *)0x20;
      uStack_188 = uVar19;
      ppuStack_180 = ppuVar8;
      __Znwm();
      *unaff_x24 = (ulong)&PTR_FUN_110c46ed0;
      *(undefined4 *)(unaff_x24 + 1) = 0;
      unaff_x24[2] = uVar19;
      unaff_x24[3] = (ulong)ppuVar8;
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_d8 = param_2[5];
      puStack_e0 = (undefined8 *)*puVar10;
      uStack_c8 = param_2[7];
      uStack_d0 = param_2[6];
      uStack_c0 = (undefined4)param_2[8];
      lStack_1a0 = 0;
      uStack_198 = 0;
      lStack_1a8 = 0;
      puStack_e8 = unaff_x24;
      FUN_10ab14560(&lStack_1a8,&puStack_e0,auStack_bc);
      puVar15 = &uStack_178;
      unaff_x23 = auStack_100;
      FUN_10ab10a0c(ppuVar11 + 1,param_1,puVar15,unaff_x23,&lStack_1a8,uVar13);
      if (lStack_1a8 != 0) {
        lStack_1a0 = lStack_1a8;
        __ZdlPv();
      }
      (**(code **)(*unaff_x24 + 0x28))(unaff_x24);
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          puVar14 = *ppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar8)[2])(ppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      puStack_e0 = &uStack_178;
      ppuVar8 = &puStack_e0;
      FUN_10a18ba48();
      if (ppuStack_88 != (undefined8 **)0x0) {
        ppuVar6 = ppuStack_88 + 1;
        do {
          puVar14 = *ppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10ab120e0;
      }
    }
    else {
      ppuStack_88 = (undefined8 **)param_2[1];
      uStack_90 = *param_2;
      if (param_2[1] != 0) {
        plVar9 = (long *)(param_2[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      FUN_10a756a10(&uStack_130,&uStack_90,auStack_80,1);
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      unaff_x24 = (ulong *)0x20;
      uStack_148 = uVar20;
      uStack_140 = uVar19;
      ppuStack_138 = ppuVar8;
      __Znwm();
      *unaff_x24 = (ulong)&PTR_FUN_110c46ed0;
      *(uint *)(unaff_x24 + 1) = uVar20;
      unaff_x24[2] = uVar19;
      unaff_x24[3] = (ulong)ppuVar8;
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_d8 = param_2[5];
      puStack_e0 = (undefined8 *)*puVar10;
      uStack_c8 = param_2[7];
      uStack_d0 = param_2[6];
      uStack_c0 = (undefined4)param_2[8];
      lStack_158 = 0;
      uStack_150 = 0;
      lStack_160 = 0;
      puStack_98 = unaff_x24;
      FUN_10ab14560(&lStack_160,&puStack_e0,auStack_bc);
      puVar15 = &uStack_130;
      unaff_x23 = auStack_b0;
      FUN_10ab10a0c(ppuVar11 + 0x13,param_1,puVar15,unaff_x23,&lStack_160,uVar13);
      if (lStack_160 != 0) {
        lStack_158 = lStack_160;
        __ZdlPv();
      }
      (**(code **)(*unaff_x24 + 0x28))(unaff_x24);
      if (ppuVar8 != (undefined8 **)0x0) {
        ppuVar6 = ppuVar8 + 1;
        do {
          puVar14 = *ppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar8)[2])(ppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      puStack_e0 = &uStack_130;
      ppuVar8 = &puStack_e0;
      FUN_10a18ba48();
      if (ppuStack_88 != (undefined8 **)0x0) {
        ppuVar6 = ppuStack_88 + 1;
        do {
          puVar14 = *ppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10ab120e0:
        ppuVar6 = ppuStack_88;
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_88)[2])(ppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar8 = ppuVar6;
        }
      }
    }
    ppuVar6 = ppuStack_108;
    if (ppuStack_108 != (undefined8 **)0x0) {
      ppuVar1 = ppuStack_108 + 1;
      do {
        puVar14 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = (undefined8 *)((long)puVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_108)[2])(ppuStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar8 = ppuVar6;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return ppuVar8;
    }
    ___stack_chk_fail();
    if (lStack_1a8 != 0) {
      __ZdlPv();
    }
    (**(code **)(*unaff_x24 + 0x28))(unaff_x24);
    func_0x00010a0523dc(&uStack_188);
    puStack_e0 = &uStack_178;
    FUN_10a18ba48(&puStack_e0);
    func_0x00010a0523dc(&uStack_90);
    func_0x00010a0523dc(&uStack_110);
    unaff_x21 = ppuVar8;
    __Unwind_Resume();
    uStack_200 = 0;
    pcStack_1b8 = FUN_10ab12228;
    unaff_x29 = &puStack_1c0;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = 0;
    puVar18 = unaff_x20;
    puVar14 = puVar15;
    param_2 = unaff_x23;
    uStack_210 = uVar19;
    ppuStack_208 = &puStack_e0;
    puStack_1f8 = unaff_x25;
    puStack_1f0 = unaff_x24;
    puStack_1e8 = puVar10;
    ppuStack_1e0 = (undefined8 **)ppuVar11;
    puStack_1d8 = param_1;
    uStack_1d0 = uVar13;
    ppuStack_1c8 = ppuVar8;
    puStack_1c0 = &stack0xfffffffffffffff0;
    FUN_10a2421c8();
    ppuVar8 = *(undefined8 ***)(lVar7 + 0x228);
    (*(code *)(*ppuVar8)[0xd])();
    puVar10 = unaff_x23;
    if (*(char *)((long)ppuVar8 + 0x81) == '\x01') {
      unaff_x24 = unaff_x23 + 2;
      plVar9 = (long *)*unaff_x23;
      (**(code **)(*plVar9 + 0x50))();
      ppuVar11 = &PTR_DAT_110ae4700;
      ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar9 & 0xffffffff) * 4;
      if (0x56 < (uint)plVar9) {
        ppuVar2 = ppuVar11;
      }
      if ((*(byte *)((long)ppuVar2 + 0x14) & 1) == 0) {
LAB_10ab125b0:
        FUN_10a0ee06c(&UNK_10f68fa02);
        goto LAB_10ab125bc;
      }
      plVar9 = (long *)*unaff_x23;
      (**(code **)(*plVar9 + 0x50))();
      ppuVar2 = &PTR_DAT_110ae4700 + ((ulong)plVar9 & 0xffffffff) * 4;
      if (0x56 < (uint)plVar9) {
        ppuVar2 = ppuVar11;
      }
      if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) == 0) goto LAB_10ab125b0;
      lVar7 = 0;
      FUN_10a2421c8();
      plVar9 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar9 + 0x68))();
      unaff_x22 = (undefined8 **)ppuVar11;
      if (1 < *(int *)((long)plVar9 + 0x7c)) {
        unaff_x26 = *unaff_x23;
        ppuVar11 = (undefined **)unaff_x23[1];
        uStack_2e0 = unaff_x26;
        ppuStack_2d8 = (undefined8 **)ppuVar11;
        if ((undefined8 **)ppuVar11 == (undefined8 **)0x0) {
          uStack_2a8 = unaff_x23[7];
          uStack_2b0 = unaff_x23[6];
          uStack_298 = unaff_x23[9];
          uStack_2a0 = unaff_x23[8];
          uStack_290 = (int)unaff_x23[10];
          uStack_2c8 = unaff_x23[3];
          uStack_2d0 = *unaff_x24;
          uStack_2b8 = unaff_x23[5];
          uStack_2c0 = unaff_x23[4];
          ppuStack_228 = (undefined8 **)0x0;
          uStack_230 = unaff_x26;
        }
        else {
          ppuVar8 = (undefined8 **)(ppuVar11 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar4) {
              *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uStack_2a8 = unaff_x23[7];
          uStack_2b0 = unaff_x23[6];
          uStack_298 = unaff_x23[9];
          uStack_2a0 = unaff_x23[8];
          uStack_290 = (int)unaff_x23[10];
          uStack_2c8 = unaff_x23[3];
          uStack_2d0 = *unaff_x24;
          uStack_2b8 = unaff_x23[5];
          uStack_2c0 = unaff_x23[4];
          puStack_288 = unaff_x20;
          ppuStack_228 = (undefined8 **)unaff_x23[1];
          uStack_230 = *unaff_x23;
          if (unaff_x23[1] != 0) {
            plVar9 = (long *)(unaff_x23[1] + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = *plVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        unaff_x25 = &uStack_2d0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        puStack_288 = unaff_x20;
        FUN_10a756a10(&uStack_2f8,&uStack_230,auStack_220,1);
        if ((undefined8 **)ppuVar11 != (undefined8 **)0x0) {
          ppuVar8 = (undefined8 **)(ppuVar11 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar4) {
              *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_320 = uStack_2a8;
        uStack_328 = uStack_2b0;
        uStack_310 = uStack_298;
        uStack_318 = uStack_2a0;
        uStack_308 = uStack_290;
        uStack_330 = uStack_2b8;
        uStack_338 = uStack_2c0;
        uStack_340 = uStack_2c8;
        uStack_348 = uStack_2d0;
        puVar10 = (ulong *)0x68;
        uStack_358 = unaff_x26;
        ppuStack_350 = (undefined8 **)ppuVar11;
        puStack_300 = unaff_x20;
        __Znwm();
        *puVar10 = (ulong)&PTR_FUN_110c46f90;
        puVar10[1] = unaff_x26;
        puVar10[2] = (ulong)ppuVar11;
        if ((undefined8 **)ppuVar11 != (undefined8 **)0x0) {
          ppuVar8 = (undefined8 **)(ppuVar11 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar4) {
              *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar10[6] = uStack_2b8;
        puVar10[5] = uStack_2c0;
        puVar10[8] = uStack_2a8;
        puVar10[7] = uStack_2b0;
        puVar10[10] = uStack_298;
        puVar10[9] = uStack_2a0;
        *(undefined4 *)(puVar10 + 0xb) = uStack_290;
        puVar10[4] = uStack_2c8;
        puVar10[3] = uStack_2d0;
        puVar10[0xc] = (ulong)unaff_x20;
        puStack_238 = puVar10;
        uStack_278 = unaff_x23[3];
        puStack_280 = (undefined8 *)*unaff_x24;
        uStack_268 = unaff_x23[5];
        uStack_270 = unaff_x23[4];
        uStack_260 = (undefined4)unaff_x23[6];
        lStack_370 = 0;
        lStack_368 = 0;
        uStack_360 = 0;
        FUN_10ab14560(&lStack_370,&puStack_280,auStack_25c);
        puVar14 = &uStack_2f8;
        param_2 = auStack_250;
        puVar18 = unaff_x20;
        FUN_10ab10a0c(unaff_x21 + 0x25,unaff_x20,puVar14,param_2,&lStack_370,puVar15);
        if (lStack_370 != 0) {
          lStack_368 = lStack_370;
          __ZdlPv();
        }
        (**(code **)(*puVar10 + 0x28))(puVar10);
        if ((undefined8 **)ppuVar11 != (undefined8 **)0x0) {
          ppuVar8 = (undefined8 **)(ppuVar11 + 1);
          do {
            puVar15 = *ppuVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar4) {
              *ppuVar8 = (undefined8 *)((long)puVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar15 == (undefined8 *)0x0) {
            (**(code **)((long)*ppuVar11 + 0x10))(ppuVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
          }
        }
        puStack_280 = &uStack_2f8;
        ppuVar8 = &puStack_280;
        FUN_10a18ba48(ppuVar8);
        ppuVar6 = ppuStack_228;
        if (ppuStack_228 != (undefined8 **)0x0) {
          ppuVar1 = ppuStack_228 + 1;
          do {
            puVar15 = *ppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = (undefined8 *)((long)puVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar15 == (undefined8 *)0x0) {
            (*(code *)(*ppuStack_228)[2])(ppuStack_228);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            ppuVar8 = ppuVar6;
          }
        }
        ppuVar6 = ppuStack_2d8;
        if (ppuStack_2d8 != (undefined8 **)0x0) {
          ppuVar1 = ppuStack_2d8 + 1;
          do {
            puVar15 = *ppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = (undefined8 *)((long)puVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar15 == (undefined8 *)0x0) {
            (*(code *)(*ppuStack_2d8)[2])(ppuStack_2d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            ppuVar8 = ppuVar6;
          }
        }
        goto LAB_10ab12578;
      }
    }
    else {
LAB_10ab12578:
      unaff_x23 = puVar10;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
        return ppuVar8;
      }
LAB_10ab125bc:
      ___stack_chk_fail();
      unaff_x22 = (undefined8 **)ppuVar11;
    }
    unaff_x19 = (undefined8 **)&UNK_10f68fa5b;
    FUN_10a0ee06c();
    param_1 = puVar18;
    if (lStack_370 != 0) {
      __ZdlPv();
      param_1 = puVar18;
    }
    (**(code **)(*unaff_x23 + 0x28))(unaff_x23);
    func_0x00010a0523dc(&uStack_358);
    puStack_280 = &uStack_2f8;
    FUN_10a18ba48(&puStack_280);
    func_0x00010a0523dc(&uStack_230);
    func_0x00010a0523dc(&uStack_2e0);
    unaff_x30 = FUN_10ab12634;
    ppuVar11 = (undefined **)unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&lStack_370;
  }
  else {
    puVar14 = *(undefined8 **)(param_1[0x10b] + 0x208);
  }
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 ***)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 ***)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = 0;
  puVar15 = param_1;
  FUN_10a2421c8();
  plVar9 = *(long **)(lVar7 + 0x228);
  plVar21 = (long *)param_2[1];
  (**(code **)(*plVar9 + 0x68))();
  uVar20 = (uint)plVar21;
  if (uVar20 <= *(uint *)((long)plVar9 + 0x7c)) {
    if (uVar20 == 0) {
      ppuVar8 = (undefined8 **)&UNK_10f68fb1d;
      FUN_10a0ee06c();
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      if (param_2[1] != 0) {
        uVar19 = 0;
        lVar7 = 0x20;
        do {
          FUN_10ab129f0((undefined1 *)((long)register0x00000008 + -0x90),*param_2 + lVar7 + -0x20);
          if (param_2[1] <= uVar19) goto LAB_10ab128cc;
          FUN_10a36a1e4((undefined1 *)((long)register0x00000008 + -0xb0),*param_2 + lVar7);
          uVar19 = uVar19 + 1;
          lVar7 = lVar7 + 0x50;
        } while (uVar19 < param_2[1]);
      }
      *(undefined1 *)((long)register0x00000008 + -0xe0) = 0;
      uVar19 = *param_2;
      *(ulong *)((long)register0x00000008 + -0x118) = param_2[1];
      *(ulong *)((long)register0x00000008 + -0x120) = uVar19;
      if (3 < uVar20 - 1) goto LAB_10ab128cc;
      *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
      FUN_10ab14658((undefined1 *)((long)register0x00000008 + -0x138),
                    *(long *)((long)register0x00000008 + -0x90),
                    *(long *)((long)register0x00000008 + -0x88),
                    *(long *)((long)register0x00000008 + -0x88) -
                    *(long *)((long)register0x00000008 + -0x90) >> 4);
      plVar21 = (long *)0x20;
      __Znwm();
      *plVar21 = (long)&PTR_DAT_110c47040;
      lVar7 = *(long *)((long)register0x00000008 + -0x120);
      plVar21[2] = *(long *)((long)register0x00000008 + -0x118);
      plVar21[1] = lVar7;
      plVar21[3] = (long)((long)register0x00000008 + -0xe0);
      *(long **)((long)register0x00000008 + -0x60) = plVar21;
      *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
      FUN_10ab146f4((undefined1 *)((long)register0x00000008 + -0x150),
                    *(long *)((long)register0x00000008 + -0xb0),
                    *(long *)((long)register0x00000008 + -0xa8),
                    (*(long *)((long)register0x00000008 + -0xa8) -
                     *(long *)((long)register0x00000008 + -0xb0) >> 2) * -0x71c71c71c71c71c7);
      puVar15 = param_1;
      FUN_10ab10a0c(ppuVar11 + (ulong)(uVar20 - 1) * 9 + 0x2e,param_1,
                    (undefined1 *)((long)register0x00000008 + -0x138),
                    (undefined1 *)((long)register0x00000008 + -0x78),
                    (undefined1 *)((long)register0x00000008 + -0x150),puVar14);
      if (*(long *)((long)register0x00000008 + -0x150) != 0) {
        *(long *)((long)register0x00000008 + -0x148) = *(long *)((long)register0x00000008 + -0x150);
        __ZdlPv();
      }
      (**(code **)(*plVar21 + 0x28))(plVar21);
      *(undefined1 **)((long)register0x00000008 + -200) =
           (undefined1 *)((long)register0x00000008 + -0x138);
      FUN_10a18ba48((undefined1 *)((long)register0x00000008 + -200));
      if (*(long *)((long)register0x00000008 + -0xb0) != 0) {
        *(long *)((long)register0x00000008 + -0xa8) = *(long *)((long)register0x00000008 + -0xb0);
        __ZdlPv();
      }
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      ppuVar8 = (undefined8 **)((long)register0x00000008 + -0xb0);
      FUN_10a18ba48();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        return ppuVar8;
      }
    }
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x99) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xb0));
    }
    if (*(char *)((long)register0x00000008 + -0xf9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x110));
    }
    if (*(char *)((long)register0x00000008 + -0xb1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -200));
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
    }
    if (*(char *)((long)register0x00000008 + -0xe1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf8));
    }
    ppuVar6 = ppuVar8;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x180) = plVar21;
    *(undefined ***)((long)register0x00000008 + -0x178) = ppuVar11;
    *(undefined8 **)((long)register0x00000008 + -0x170) = param_1;
    *(undefined8 ***)((long)register0x00000008 + -0x168) = ppuVar8;
    *(undefined1 **)((long)register0x00000008 + -0x160) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x158) = FUN_10ab129f0;
    puVar14 = ppuVar6[1];
    if (puVar14 < ppuVar6[2]) {
      lVar7 = puVar15[1];
      uVar13 = *puVar15;
      puVar14[1] = puVar15[1];
      *puVar14 = uVar13;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar14 = puVar14 + 2;
      ppuVar8 = ppuVar6;
    }
    else {
      lVar7 = (long)puVar14 - (long)*ppuVar6;
      uVar19 = (lVar7 >> 4) + 1;
      if (uVar19 >> 0x3c != 0) {
        ppuVar8 = ppuVar6;
        FUN_10a756ae4();
        *(long **)((long)register0x00000008 + -0x1e0) = plVar21;
        *(long *)((long)register0x00000008 + -0x1d8) = lVar7;
        *(undefined8 **)((long)register0x00000008 + -0x1d0) = puVar15;
        *(undefined8 ***)((long)register0x00000008 + -0x1c8) = ppuVar6;
        *(undefined1 **)((long)register0x00000008 + -0x1c0) =
             (undefined1 *)((long)register0x00000008 + -0x160);
        *(code **)((long)register0x00000008 + -0x1b8) = FUN_10ab12b08;
        *ppuVar8 = &PTR_FUN_110c46b38;
        ppuVar8[2] = (undefined8 *)0x0;
        ppuVar8[1] = (undefined8 *)0x0;
        ppuVar8[4] = (undefined8 *)0x0;
        ppuVar8[3] = (undefined8 *)0x0;
        ppuVar8[6] = (undefined8 *)0x0;
        ppuVar8[5] = (undefined8 *)0x0;
        ppuVar8[8] = (undefined8 *)0x0;
        ppuVar8[7] = (undefined8 *)0x0;
        *(undefined4 *)(ppuVar8 + 9) = 0x3f800000;
        ppuVar8[0xb] = (undefined8 *)0x0;
        ppuVar8[10] = (undefined8 *)0x0;
        ppuVar8[0xd] = (undefined8 *)0x0;
        ppuVar8[0xc] = (undefined8 *)0x0;
        ppuVar8[0xf] = (undefined8 *)0x0;
        ppuVar8[0xe] = (undefined8 *)0x0;
        FUN_10ab12bac();
        return ppuVar8;
      }
      uVar16 = (long)ppuVar6[2] - (long)*ppuVar6;
      uVar17 = (long)uVar16 >> 3;
      if (uVar17 <= uVar19) {
        uVar17 = uVar19;
      }
      if (0x7fffffffffffffef < uVar16) {
        uVar17 = 0xfffffffffffffff;
      }
      *(undefined8 ***)((long)register0x00000008 + -0x188) = ppuVar6;
      ppuVar8 = ppuVar6;
      FUN_10a756af8();
      puVar18 = (undefined8 *)((long)ppuVar8 + lVar7);
      lVar7 = puVar15[1];
      uVar13 = *puVar15;
      puVar18[1] = puVar15[1];
      *puVar18 = uVar13;
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar14 = puVar18 + 2;
      puVar18 = (undefined8 *)((long)puVar18 - ((long)ppuVar6[1] - (long)*ppuVar6));
      _memcpy(puVar18);
      puVar15 = *ppuVar6;
      *ppuVar6 = puVar18;
      ppuVar6[1] = puVar14;
      puVar18 = ppuVar6[2];
      ppuVar6[2] = ppuVar8 + uVar17 * 2;
      *(undefined8 **)((long)register0x00000008 + -0x198) = puVar15;
      *(undefined8 **)((long)register0x00000008 + -400) = puVar18;
      *(undefined8 **)((long)register0x00000008 + -0x1a8) = puVar15;
      *(undefined8 **)((long)register0x00000008 + -0x1a0) = puVar15;
      ppuVar8 = (undefined8 **)((long)register0x00000008 + -0x1a8);
      FUN_10ab1460c(ppuVar8);
    }
    ppuVar6[1] = puVar14;
    return ppuVar8;
  }
  __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0xf8));
  FUN_109feb280((undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f68fab3,
                (undefined1 *)((long)register0x00000008 + -0xf8));
  FUN_10a012db0((undefined1 *)((long)register0x00000008 + -200),
                (undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f68fb17);
  __ZNSt3__19to_stringEj((undefined1 *)((long)register0x00000008 + -0x110),plVar21);
  uVar19 = *(ulong *)((long)register0x00000008 + -0x108);
  puVar12 = *(undefined1 **)((long)register0x00000008 + -0x110);
  if (-1 < (char)*(byte *)((long)register0x00000008 + -0xf9)) {
    uVar19 = (ulong)*(byte *)((long)register0x00000008 + -0xf9);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
  }
  puVar14 = (undefined8 *)((long)register0x00000008 + -200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar14,puVar12,uVar19);
  uVar22 = puVar14[1];
  uVar13 = *puVar14;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = puVar14[2];
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar22;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar13;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  FUN_10a012db0((undefined1 *)((long)register0x00000008 + -0x90),
                (undefined1 *)((long)register0x00000008 + -0xb0),&UNK_10f648a16);
  FUN_10a0edf4c((undefined1 *)((long)register0x00000008 + -0x90));
LAB_10ab128cc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab128d0);
  (*pcVar5)();
}



/* Entry: 10abf27cc; end: 10abf285b;  */

long FUN_10abf27cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*(long *)(param_1 + 0x2a8) == 0) {
    FUN_10abf7c90(auStack_38,param_1,1);
    FUN_10a00e5c4(param_1 + 0x2a8,auStack_38);
    *(undefined1 *)(param_1 + 0x2b8) = uStack_28;
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
  }
  return param_1 + 0x2a8;
}



/* Entry: 10abf285c; end: 10abf29ff;  */

undefined8 **
FUN_10abf285c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  undefined8 **ppuVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 ***pppuVar15;
  undefined8 **ppuVar16;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 **ppuStack_328;
  undefined8 *puStack_320;
  undefined8 **ppuStack_318;
  undefined1 uStack_301;
  undefined8 *puStack_300;
  undefined8 **ppuStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 *apuStack_2e8 [8];
  long lStack_2a8;
  undefined8 **ppuStack_250;
  undefined8 *apuStack_248 [52];
  long lStack_a8;
  long *plStack_a0;
  long *plStack_78;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  pppuVar15 = &ppuStack_250;
  pppuVar7 = &ppuStack_250;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined1 *)(lVar13 + 0x318);
  cVar4 = *(char *)(lVar13 + 0x319);
  cVar5 = *(char *)(lVar13 + 0x31a);
  *(int *)(param_1 + 0x70) = (int)param_3;
  *(int *)(param_1 + 0x74) = (int)param_4;
  FUN_10abf8b28(&ppuStack_250,param_1,uVar3,cVar4,param_3,param_4);
  if (ppuStack_250 != (undefined8 **)0x0) {
    lVar13 = (long)ppuStack_250 * 0x68;
    do {
      pppuVar7 = (undefined8 ***)((long)pppuVar7 + 0x68);
      *(undefined4 *)pppuVar7 = param_5;
      lVar13 = lVar13 + -0x68;
    } while (lVar13 != 0);
  }
  uStack_50 = 1;
  if (cVar4 == '\0') {
    uStack_50 = 2;
  }
  uStack_4c = 1;
  if (cVar5 == '\0') {
    uStack_4c = 2;
  }
  if ((lStack_a8 != 0) && (*(char *)(lStack_a8 + 0x19) == '\x01')) {
    if (cVar4 != '\0') {
      uStack_50 = 0;
    }
    if (cVar5 != '\0') {
      uStack_4c = 0;
    }
  }
  (**(code **)(*param_2 + 0x88))(param_2,&ppuStack_250);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (plStack_a0 != (long *)0x0) {
    plVar1 = plStack_a0 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  ppuVar10 = apuStack_248;
  func_0x00010a048e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  FUN_10a023a44(&ppuStack_250);
  ppuVar11 = ppuStack_250;
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = (undefined8 **)ppuVar10[0x1c];
  ppuVar8 = ppuVar10;
  ppuVar12 = ppuVar11;
  if (ppuVar16 <= ppuVar11) {
    pppuVar15 = (undefined8 ***)&puStack_330;
    do {
      ppuStack_328 = (undefined8 **)0x0;
      puStack_330 = (undefined8 *)0x0;
      ppuStack_318 = (undefined8 **)0x0;
      puStack_320 = (undefined8 *)0x0;
      uStack_338 = 0;
      FUN_10a063b58(&puStack_300,&uStack_301,&uStack_338);
      ppuVar8 = ppuStack_2f8;
      puStack_330 = puStack_300;
      ppuVar12 = ppuStack_328;
      puStack_300 = (undefined8 *)0x0;
      ppuStack_2f8 = (undefined8 **)0x0;
      ppuStack_328 = ppuVar8;
      if (ppuVar12 != (undefined8 **)0x0) {
        plVar1 = (long *)(ppuVar12 + 1);
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)((long)*ppuVar12 + 0x10))(ppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
        }
      }
      ppuVar12 = ppuStack_2f8;
      if (ppuStack_2f8 != (undefined8 **)0x0) {
        ppuVar8 = ppuStack_2f8 + 1;
        do {
          puVar14 = *ppuVar8;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar6) {
            *ppuVar8 = (undefined8 *)((long)puVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_2f8)[2])(ppuStack_2f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
        }
      }
      uStack_338 = 0;
      ppuVar12 = &puStack_330;
      FUN_10a17647c(&puStack_300,&uStack_338);
      ppuVar9 = ppuStack_2f8;
      puStack_320 = puStack_300;
      ppuVar8 = ppuStack_318;
      puStack_300 = (undefined8 *)0x0;
      ppuStack_2f8 = (undefined8 **)0x0;
      ppuStack_318 = ppuVar9;
      if (ppuVar8 != (undefined8 **)0x0) {
        plVar1 = (long *)(ppuVar8 + 1);
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)((long)*ppuVar8 + 0x10))(ppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      ppuVar8 = ppuVar10 + (long)ppuVar10[0x1c] * 4 + 0x1d;
      ppuVar8[1] = ppuStack_328;
      *ppuVar8 = puStack_330;
      if (ppuStack_328 != (undefined8 **)0x0) {
        ppuVar9 = ppuStack_328 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar6) {
            *ppuVar9 = (undefined8 *)((long)*ppuVar9 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar8[3] = ppuStack_318;
      ppuVar8[2] = puStack_320;
      if (ppuStack_318 != (undefined8 **)0x0) {
        ppuVar8 = ppuStack_318 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
          if (bVar6) {
            *ppuVar8 = (undefined8 *)((long)*ppuVar8 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuVar10[0x1c] = (undefined8 *)((long)ppuVar10[0x1c] + 1);
      FUN_10a044790(auStack_2f0);
      ppuVar8 = apuStack_2e8;
      (*(code *)*apuStack_2e8[0])();
      ppuVar9 = ppuStack_2f8;
      if (ppuStack_2f8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_2f8 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_2f8)[2])(ppuStack_2f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar8 = ppuVar9;
        }
      }
      ppuVar9 = ppuStack_318;
      if (ppuStack_318 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_318 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_318)[2])(ppuStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar8 = ppuVar9;
        }
      }
      ppuVar9 = ppuStack_328;
      if (ppuStack_328 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_328 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_328)[2])(ppuStack_328);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar8 = ppuVar9;
        }
      }
      ppuVar16 = (undefined8 **)((long)ppuVar16 + 1);
    } while (ppuVar16 <= ppuVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return ppuVar10 + (long)ppuVar11 * 4 + 0x1d;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(pppuVar15 + 2);
  func_0x00010a061678(&puStack_330);
  __Unwind_Resume();
  if (ppuVar12 != (undefined8 **)0x0) {
    ppuVar10 = (undefined8 **)ppuVar8[0x153];
    if ((ppuVar10 == (undefined8 **)0x0) || (FUN_10a1dfb90(ppuVar10,ppuVar12), (int)ppuVar10 != 0))
    {
      do {
        ppuVar8 = ppuVar12;
        ppuVar12 = (undefined8 **)ppuVar8[0x13];
      } while ((undefined8 **)ppuVar8[0x13] != (undefined8 **)0x0);
      ___dynamic_cast(ppuVar8,&PTR_DAT_110b9f6e8,&PTR_DAT_110bb2e10,0xfffffffffffffffe);
      ppuVar10 = (undefined8 **)0x0;
      if (ppuVar8 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar8)[2])();
        ppuVar10 = (undefined8 **)0x1;
      }
    }
    return ppuVar10;
  }
  return (undefined8 **)0x0;
}



/* Entry: 10abf2a00; end: 10abf2cc3;  */

undefined8 ** FUN_10abf2a00(undefined8 **param_1,undefined8 **param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 **unaff_x22;
  undefined8 **ppuVar10;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 uStack_b1;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 *apuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined8 **)param_1[0x1c];
  ppuVar6 = param_1;
  ppuVar7 = param_2;
  if (ppuVar10 <= param_2) {
    unaff_x22 = &puStack_e0;
    do {
      ppuStack_d8 = (undefined8 **)0x0;
      puStack_e0 = (undefined8 *)0x0;
      ppuStack_c8 = (undefined8 **)0x0;
      puStack_d0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      FUN_10a063b58(&puStack_b0,&uStack_b1,&uStack_e8);
      ppuVar6 = ppuStack_a8;
      puStack_e0 = puStack_b0;
      ppuVar7 = ppuStack_d8;
      puStack_b0 = (undefined8 *)0x0;
      ppuStack_a8 = (undefined8 **)0x0;
      ppuStack_d8 = ppuVar6;
      if (ppuVar7 != (undefined8 **)0x0) {
        plVar1 = (long *)(ppuVar7 + 1);
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)((long)*ppuVar7 + 0x10))(ppuVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      ppuVar7 = ppuStack_a8;
      if (ppuStack_a8 != (undefined8 **)0x0) {
        ppuVar6 = ppuStack_a8 + 1;
        do {
          puVar9 = *ppuVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)puVar9 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_a8)[2])(ppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      uStack_e8 = 0;
      ppuVar7 = &puStack_e0;
      FUN_10a17647c(&puStack_b0,&uStack_e8);
      ppuVar5 = ppuStack_a8;
      puStack_d0 = puStack_b0;
      ppuVar6 = ppuStack_c8;
      puStack_b0 = (undefined8 *)0x0;
      ppuStack_a8 = (undefined8 **)0x0;
      ppuStack_c8 = ppuVar5;
      if (ppuVar6 != (undefined8 **)0x0) {
        plVar1 = (long *)(ppuVar6 + 1);
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)((long)*ppuVar6 + 0x10))(ppuVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
        }
      }
      ppuVar6 = param_1 + (long)param_1[0x1c] * 4 + 0x1d;
      ppuVar6[1] = ppuStack_d8;
      *ppuVar6 = puStack_e0;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar5 = ppuStack_d8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar4) {
            *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar6[3] = ppuStack_c8;
      ppuVar6[2] = puStack_d0;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar6 = ppuStack_c8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar4) {
            *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1[0x1c] = (undefined8 *)((long)param_1[0x1c] + 1);
      FUN_10a044790(auStack_a0);
      ppuVar6 = apuStack_98;
      (*(code *)*apuStack_98[0])();
      ppuVar5 = ppuStack_a8;
      if (ppuStack_a8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_a8 + 1;
        do {
          puVar9 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar9 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_a8)[2])(ppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar5;
        }
      }
      ppuVar5 = ppuStack_c8;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_c8 + 1;
        do {
          puVar9 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar9 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar5;
        }
      }
      ppuVar5 = ppuStack_d8;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_d8 + 1;
        do {
          puVar9 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar9 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar5;
        }
      }
      ppuVar10 = (undefined8 **)((long)ppuVar10 + 1);
    } while (ppuVar10 <= param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1 + (long)param_2 * 4 + 0x1d;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(unaff_x22 + 2);
  func_0x00010a061678(&puStack_e0);
  __Unwind_Resume();
  if (ppuVar7 != (undefined8 **)0x0) {
    ppuVar6 = (undefined8 **)ppuVar6[0x153];
    if ((ppuVar6 == (undefined8 **)0x0) || (FUN_10a1dfb90(ppuVar6,ppuVar7), (int)ppuVar6 != 0)) {
      do {
        ppuVar10 = ppuVar7;
        ppuVar7 = (undefined8 **)ppuVar10[0x13];
      } while ((undefined8 **)ppuVar10[0x13] != (undefined8 **)0x0);
      ___dynamic_cast(ppuVar10,&PTR_DAT_110b9f6e8,&PTR_DAT_110bb2e10,0xfffffffffffffffe);
      ppuVar6 = (undefined8 **)0x0;
      if (ppuVar10 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar10)[2])();
        ppuVar6 = (undefined8 **)0x1;
      }
    }
    return ppuVar6;
  }
  return (undefined8 **)0x0;
}



/* Entry: 10abf2cc4; end: 10abf2e33;  */

long FUN_10abf2cc4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0xa98);
    if ((lVar1 == 0) || (FUN_10a1dfb90(lVar1,param_2), (int)lVar1 != 0)) {
      do {
        plVar2 = param_2;
        param_2 = (long *)plVar2[0x13];
      } while ((long *)plVar2[0x13] != (long *)0x0);
      ___dynamic_cast(plVar2,&PTR_DAT_110b9f6e8,&PTR_DAT_110bb2e10,0xfffffffffffffffe);
      lVar1 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        lVar1 = 1;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 10abf2e34; end: 10abf3823;  */

void FUN_10abf2e34(long *param_1,long *param_2,long *param_3,undefined4 param_4,ulong param_5,
                  uint param_6,uint param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulong uVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  code *pcVar27;
  ulong *puStack_478;
  long *plStack_470;
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  long *plStack_430;
  long *plStack_428;
  long lStack_420;
  long lStack_418;
  long *plStack_410;
  long *aplStack_408 [2];
  undefined5 uStack_3f8;
  undefined3 uStack_3f3;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c0;
  long alStack_3b8 [7];
  undefined1 auStack_380 [264];
  long *plStack_278;
  long alStack_270 [5];
  undefined1 auStack_248 [16];
  long alStack_238 [5];
  undefined4 auStack_210 [80];
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar26 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = (undefined4)param_8;
  plVar11 = param_2;
  if ((param_5 & 1) == 0) {
    lVar14 = param_1[2];
    if ((*(byte *)(lVar14 + 0x318) & 1) != 0) {
      bVar24 = 0;
      bVar16 = 0;
      uVar13 = 2;
      goto LAB_10abf2ee8;
    }
LAB_10abf2f6c:
    if ((param_6 != *(byte *)(lVar14 + 0x319)) || (param_7 != *(byte *)(lVar14 + 0x31a))) {
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      bVar24 = 0;
      goto LAB_10abf2fb0;
    }
    plVar17 = (long *)0x0;
  }
  else {
    lVar14 = param_1[2];
    bVar16 = *(byte *)(param_1 + 0xf) ^ 1;
    bVar3 = *(byte *)(lVar14 + 0x318);
    if ((bVar16 & 1) == bVar3) goto LAB_10abf2f6c;
    bVar24 = bVar3 ^ 1;
    uVar13 = 2;
    if (bVar3 == 0) {
      uVar13 = 0;
    }
LAB_10abf2ee8:
    uVar2 = *(uint *)(lVar14 + 0x324);
    (**(code **)(*param_2 + 0x90))(param_2,uVar13,3,3);
    lVar14 = param_1[1];
    bVar16 = bVar16 & 1 < uVar2;
    plVar18 = param_1;
    while (plVar18 = plVar18 + 2, plVar18 != param_1 + lVar14 * 2 + 2) {
      lVar15 = *plVar18;
      *(byte *)(lVar15 + 0x318) = bVar16;
      *(uint *)(lVar15 + 0x324) = uVar2;
    }
    lVar14 = param_1[10];
    if (lVar14 != 0) {
      *(byte *)(lVar14 + 0x318) = bVar16;
      *(uint *)(lVar14 + 0x324) = uVar2;
    }
LAB_10abf2fb0:
    plStack_470 = param_1 + 2;
    puStack_478 = (ulong *)(param_1 + 1);
    cVar4 = *(char *)(*plStack_470 + 0x318);
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    uStack_c0 = 0;
    param_8 = 0xffffffffffffffff;
    plStack_278 = (long *)0x0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    plStack_a8 = (long *)0x0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_90 = 0xffffffffffffffff;
    uStack_88 = 0xffffffffffffffff;
    uStack_80 = 0x3f800000;
    uStack_78 = 0;
    plStack_3c0 = (long *)0x0;
    plVar18 = param_1;
    if (*puStack_478 != 0) {
      uVar23 = 0;
      uVar13 = 1;
      if (bVar24 != 0) {
        uVar13 = 2;
      }
      plVar11 = alStack_270;
      auVar25 = NEON_fmov(0x3f800000,4);
      do {
        plVar18 = plStack_470 + uVar23 * 2;
        plVar8 = (long *)*plVar18;
        FUN_10abf27cc();
        lVar14 = *plVar18;
        *(char *)(lVar14 + 0x319) = (char)param_6;
        *(char *)(lVar14 + 0x31a) = (char)param_7;
        plStack_428 = (long *)0x0;
        plStack_430 = (long *)0x0;
        lStack_420 = 0;
        lStack_418 = 0xffffffffffffffff;
        plStack_410 = (long *)0xffffffffffffffff;
        aplStack_408[0] = (long *)0x0;
        aplStack_408[1] = (long *)0x0;
        uStack_3f8 = 0;
        uStack_3f3 = 0;
        uStack_3f0 = 0xffffffff;
        uStack_3ec = 0xffffffff;
        uStack_3e0 = 0;
        uStack_3d8 = 0;
        uStack_3e8 = 0xffffffff;
        uStack_3e4 = 0xffffffff;
        uStack_3d0 = 0;
        FUN_10a061728(&plStack_278,&plStack_430);
        plVar17 = aplStack_408[1];
        if (aplStack_408[1] != (long *)0x0) {
          plVar1 = aplStack_408[1] + 1;
          do {
            lVar14 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar14 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*aplStack_408[1] + 0x10))(aplStack_408[1]);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = plStack_428;
        if (plStack_428 != (long *)0x0) {
          plVar1 = plStack_428 + 1;
          do {
            lVar14 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar14 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_428 + 0x10))(plStack_428);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        auStack_210[uVar23 * 0x1a] = uVar13;
        uVar22 = SUB84(param_3,0);
        if (cVar4 == '\0') {
          plStack_430 = (long *)*plVar8;
          plStack_428 = (long *)plVar8[1];
          if (plVar8[1] != 0) {
            plVar17 = (long *)(plVar8[1] + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = *plVar17 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          lStack_420 = CONCAT44(param_4,uVar22);
          lStack_418 = -1;
          plStack_410 = (long *)0xffffffffffffffff;
          FUN_10a00e5c4(plVar11 + uVar23 * 0xd,&plStack_430);
          alStack_270[uVar23 * 0xd + 3] = lStack_418;
          alStack_270[uVar23 * 0xd + 2] = lStack_420;
          alStack_270[uVar23 * 0xd + 4] = (long)plStack_410;
          if (plStack_428 != (long *)0x0) {
            plVar17 = plStack_428 + 1;
            do {
              lVar14 = *plVar17;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_10abf32b4;
          }
        }
        else {
          puVar9 = (undefined8 *)*plVar18;
          FUN_10abf7e14(puVar9,param_3);
          plStack_430 = (long *)*puVar9;
          plStack_428 = (long *)puVar9[1];
          if (puVar9[1] != 0) {
            plVar17 = (long *)(puVar9[1] + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = *plVar17 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          lStack_420 = 0;
          lStack_418 = -1;
          plStack_410 = (long *)0xffffffffffffffff;
          FUN_10a00e5c4(plVar11 + uVar23 * 0xd,&plStack_430);
          plVar17 = plStack_428;
          alStack_270[uVar23 * 0xd + 3] = lStack_418;
          alStack_270[uVar23 * 0xd + 2] = lStack_420;
          alStack_270[uVar23 * 0xd + 4] = (long)plStack_410;
          if (plStack_428 != (long *)0x0) {
            plVar1 = plStack_428 + 1;
            do {
              lVar14 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_428 + 0x10))(plStack_428);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          if (bVar24 != 0) {
            FUN_10abf1f8c(param_1,uVar23 & 0xffffffff);
          }
          plStack_430 = (long *)*plVar8;
          plStack_428 = (long *)plVar8[1];
          if (plVar8[1] != 0) {
            plVar17 = (long *)(plVar8[1] + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = *plVar17 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          lStack_420 = CONCAT44(param_4,uVar22);
          lStack_418 = -1;
          plStack_410 = (long *)0xffffffffffffffff;
          FUN_10a00e5c4(auStack_248 + uVar23 * 0x68,&plStack_430);
          alStack_238[uVar23 * 0xd + 1] = lStack_418;
          alStack_238[uVar23 * 0xd] = lStack_420;
          alStack_238[uVar23 * 0xd + 2] = (long)plStack_410;
          if (plStack_428 != (long *)0x0) {
            plVar17 = plStack_428 + 1;
            do {
              lVar14 = *plVar17;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_10abf32b4:
            plVar17 = plStack_428;
            if (lVar14 == 0) {
              (**(code **)(*plStack_428 + 0x10))(plStack_428);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
        }
        if (bVar24 != 0) {
          plStack_430 = (long *)0x0;
          plStack_428 = (long *)0x0;
          aplStack_408[0] = (long *)0x0;
          plStack_410 = (long *)0x3f800000;
          uStack_3f8 = 0;
          uStack_3f3 = 0;
          aplStack_408[1] = (long *)0x3f800000;
          uStack_3f0 = 0x3f800000;
          uStack_3ec = 0;
          uStack_3e8 = 0;
          uStack_3e4 = uStack_3e4 & 0xffffff00;
          lVar14 = *plVar18;
          lStack_420 = auVar25._0_8_;
          lStack_418 = auVar25._8_8_;
          FUN_10abf1b04(lVar14);
          FUN_10a026ab4(&plStack_430,lVar14);
          (**(code **)(*(long *)plVar18[1] + 0x90))(&plStack_460);
          plVar17 = plStack_428;
          aplStack_408[0] = plStack_458;
          plStack_410 = plStack_460;
          uStack_3f8 = (undefined5)uStack_448;
          uStack_3f3 = (undefined3)((ulong)uStack_448 >> 0x28);
          aplStack_408[1] = plStack_450;
          uStack_3f0 = uStack_440;
          alStack_3b8[(long)plStack_3c0 * 10 + 1] = (long)plStack_428;
          alStack_3b8[(long)plStack_3c0 * 10] = (long)plStack_430;
          uStack_3ec._0_1_ = SUB81(param_3,0);
          uStack_3ec._1_3_ = (undefined3)((ulong)param_3 >> 8);
          uStack_3ec = uVar22;
          if (plStack_428 == (long *)0x0) {
            *(ulong *)(auStack_380 + ((long)plStack_3c0 * 10 + 1) * 8 + 5) =
                 CONCAT17((undefined1)uStack_3e4,CONCAT43(uStack_3e8,uStack_3ec._1_3_));
            *(ulong *)(auStack_380 + (long)plStack_3c0 * 0x50 + 5) =
                 CONCAT17((undefined1)uStack_3ec,CONCAT43(uStack_440,uStack_3f3));
            alStack_3b8[(long)plStack_3c0 * 10 + 3] = lStack_418;
            alStack_3b8[(long)plStack_3c0 * 10 + 2] = lStack_420;
            alStack_3b8[(long)plStack_3c0 * 10 + 5] = (long)plStack_458;
            alStack_3b8[(long)plStack_3c0 * 10 + 4] = (long)plStack_460;
            *(undefined8 *)(auStack_380 + (long)plStack_3c0 * 0x50) = uStack_448;
            alStack_3b8[(long)plStack_3c0 * 10 + 6] = (long)plStack_450;
            plStack_3c0 = (long *)((long)plStack_3c0 + 1);
          }
          else {
            plVar8 = plStack_428 + 1;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar7) {
                *plVar8 = *plVar8 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *(ulong *)(auStack_380 + ((long)plStack_3c0 * 10 + 1) * 8 + 5) =
                 CONCAT17((undefined1)uStack_3e4,CONCAT43(uStack_3e8,uStack_3ec._1_3_));
            *(ulong *)(auStack_380 + (long)plStack_3c0 * 0x50 + 5) =
                 CONCAT17((undefined1)uStack_3ec,CONCAT43(uStack_440,uStack_3f3));
            alStack_3b8[(long)plStack_3c0 * 10 + 3] = lStack_418;
            alStack_3b8[(long)plStack_3c0 * 10 + 2] = lStack_420;
            alStack_3b8[(long)plStack_3c0 * 10 + 5] = (long)plStack_458;
            alStack_3b8[(long)plStack_3c0 * 10 + 4] = (long)plStack_460;
            *(undefined8 *)(auStack_380 + (long)plStack_3c0 * 0x50) = uStack_448;
            alStack_3b8[(long)plStack_3c0 * 10 + 6] = (long)plStack_450;
            plStack_3c0 = (long *)((long)plStack_3c0 + 1);
            if (plStack_428 != (long *)0x0) {
              plVar8 = plStack_428 + 1;
              do {
                lVar14 = *plVar8;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar7) {
                  *plVar8 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_428 + 0x10))(plStack_428);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
              }
            }
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < *puStack_478);
    }
    if (((param_6 & 1) == 0) && ((param_7 & 1) == 0)) {
      uStack_78 = 0x200000002;
    }
    else {
      FUN_10abf9090(&plStack_430,param_1,0,param_3);
      plVar18 = plStack_c8;
      if (cVar4 == '\0') {
        if (plStack_428 != (long *)0x0) {
          plVar17 = plStack_428 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_c8 = plStack_428;
        plStack_d0 = plStack_430;
        if (plVar18 != (long *)0x0) {
          plVar17 = plVar18 + 1;
          do {
            lVar14 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffffffffffff;
      }
      else {
        FUN_10abf9090(&plStack_460,param_1,1,param_3);
        param_3 = plStack_c8;
        if (plStack_458 != (long *)0x0) {
          plVar18 = plStack_458 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *plVar18 = *plVar18 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_c8 = plStack_458;
        plStack_d0 = plStack_460;
        if (param_3 != (long *)0x0) {
          plVar18 = param_3 + 1;
          do {
            lVar14 = *plVar18;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *plVar18 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*param_3 + 0x10))(param_3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
          }
        }
        uStack_c0 = 0;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffffffffffff;
        if (bVar24 != 0) {
          FUN_10abf2074(param_1,2);
        }
        plVar18 = plStack_a0;
        if (plStack_428 != (long *)0x0) {
          plVar17 = plStack_428 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_a0 = plStack_428;
        plStack_a8 = plStack_430;
        if (plVar18 != (long *)0x0) {
          plVar17 = plVar18 + 1;
          do {
            lVar14 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        uStack_98 = 0;
        uStack_90 = 0xffffffffffffffff;
        uStack_88 = 0xffffffffffffffff;
        plVar18 = plStack_458;
        if (plStack_458 != (long *)0x0) {
          plVar17 = plStack_458 + 1;
          do {
            lVar14 = *plVar17;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_458 + 0x10))(plStack_458);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_458);
          }
        }
      }
      plVar17 = plStack_428;
      uVar13 = uVar21;
      if (param_6 == 0) {
        uVar13 = 2;
      }
      uStack_80 = 0x3f800000;
      if (param_7 == 0) {
        uVar21 = 2;
      }
      uStack_78 = CONCAT44(uVar21,uVar13);
      if (plStack_428 != (long *)0x0) {
        plVar8 = plStack_428 + 1;
        do {
          lVar14 = *plVar8;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_428 + 0x10))(plStack_428);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
    }
    if ((plStack_d0 != (long *)0x0) && (*(char *)((long)plStack_d0 + 0x19) == '\x01')) {
      if ((int)uStack_78 == 1) {
        uStack_78 = uStack_78 & 0xffffffff00000000;
      }
      if (uStack_78._4_4_ == 1) {
        uStack_78 = uStack_78 & 0xffffffff;
      }
    }
    (**(code **)(*param_2 + 0x88))(param_2,&plStack_278);
    if (bVar24 != 0) {
      plStack_430 = alStack_3b8;
      plStack_428 = plStack_3c0;
      FUN_10abf2724(param_2,&plStack_430);
    }
    if (plStack_3c0 != (long *)0x0) {
      pplVar10 = aplStack_408 + (long)plStack_3c0 * 10;
      plVar17 = plStack_3c0;
      do {
        plVar17 = (long *)((long)plVar17 + -1);
        func_0x00010a0523dc(pplVar10);
        pplVar10 = pplVar10 + -10;
      } while (plVar17 != (long *)0x0);
    }
    plVar17 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar8 = plStack_a0 + 1;
      do {
        lVar14 = *plVar8;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar17 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar8 = plStack_c8 + 1;
      do {
        lVar14 = *plVar8;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    param_2 = plStack_278;
    func_0x00010a048e34(alStack_270);
    plVar17 = (long *)0x1;
    param_1 = plVar18;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0523dc(&plStack_460);
  func_0x00010a0523dc(&plStack_430);
  if (plStack_3c0 != (long *)0x0) {
    pplVar10 = aplStack_408 + (long)plStack_3c0 * 10;
    plVar18 = plStack_3c0;
    do {
      plVar18 = (long *)((long)plVar18 + -1);
      func_0x00010a0523dc(pplVar10);
      pplVar10 = pplVar10 + -10;
    } while (plVar18 != (long *)0x0);
  }
  uVar19 = 0;
  FUN_10a023a44(&plStack_278);
  plVar18 = plVar17;
  __Unwind_Resume();
  pcVar27 = FUN_10abf3824;
  lVar14 = plVar18[0x137];
  lVar15 = 0xd;
  if ((int)plVar18[8] < 0xcb) {
    lVar15 = 0xe;
  }
  uVar12 = *(undefined1 *)(lVar14 + lVar15);
  if (*(short *)(plVar18[0x136] + 4) == -1) {
    uVar20 = 0;
  }
  else {
    plVar8 = plVar18 + 4;
    FUN_10a01f6d4();
    uVar20 = *(undefined1 *)((long)plVar8 + 0x44);
    if (*(short *)(plVar18[0x136] + 4) != -1) {
      plVar8 = plVar18 + 4;
      FUN_10a01f6d4();
      uVar21 = (undefined4)plVar8[8];
      goto LAB_10abf38a4;
    }
  }
  uVar21 = 0;
LAB_10abf38a4:
  uVar5 = *(ushort *)(param_2 + 0xc);
  lVar14 = lVar14 + 0x10;
  FUN_10abf2e34(lVar14,plVar18,uVar20,uVar21,uVar5 >> 3 & 1,uVar5 >> 1 & 1,uVar5 >> 2 & 1,uVar12,
                param_3,param_1,param_8,plVar11,uVar19,plVar17,puVar26,pcVar27);
  if ((int)lVar14 != 0) {
    uVar19 = *(undefined8 *)(plVar18[0x137] + 0x20);
    if (*(short *)(plVar18[0x136] + 4) == -1) {
      uVar12 = 0;
    }
    else {
      plVar11 = plVar18 + 4;
      FUN_10a01f6d4();
      uVar12 = *(undefined1 *)((long)plVar11 + 0x44);
    }
    FUN_10abf1f44(plVar18,uVar19,uVar12);
  }
  *(undefined1 *)plVar18[0x137] = 0;
  (**(code **)(*plVar18 + 0x100))(plVar18,param_2);
  lVar14 = plVar18[0x136];
  *(undefined4 *)(lVar14 + 8) = 0xffffffff;
  *(undefined2 *)(lVar14 + 0xc) = 0xffff;
  *(undefined1 *)plVar18[0x137] = 0;
  return;
}



/* Entry: 10abf3824; end: 10abf3973;  */

void FUN_10abf3824(long *param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  
  lVar8 = param_1[0x137];
  lVar1 = 0xd;
  if ((int)param_1[8] < 0xcb) {
    lVar1 = 0xe;
  }
  uVar4 = *(undefined1 *)(lVar8 + lVar1);
  if (*(short *)(param_1[0x136] + 4) == -1) {
    uVar7 = 0;
  }
  else {
    plVar3 = param_1 + 4;
    FUN_10a01f6d4();
    uVar7 = *(undefined1 *)((long)plVar3 + 0x44);
    if (*(short *)(param_1[0x136] + 4) != -1) {
      plVar3 = param_1 + 4;
      FUN_10a01f6d4();
      uVar5 = (undefined4)plVar3[8];
      goto LAB_10abf38a4;
    }
  }
  uVar5 = 0;
LAB_10abf38a4:
  uVar2 = *(ushort *)(param_2 + 0x60);
  lVar8 = lVar8 + 0x10;
  FUN_10abf2e34(lVar8,param_1,uVar7,uVar5,uVar2 >> 3 & 1,uVar2 >> 1 & 1,uVar2 >> 2 & 1,uVar4);
  if ((int)lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_1[0x137] + 0x20);
    if (*(short *)(param_1[0x136] + 4) == -1) {
      uVar4 = 0;
    }
    else {
      plVar3 = param_1 + 4;
      FUN_10a01f6d4();
      uVar4 = *(undefined1 *)((long)plVar3 + 0x44);
    }
    FUN_10abf1f44(param_1,uVar6,uVar4);
  }
  *(undefined1 *)param_1[0x137] = 0;
  (**(code **)(*param_1 + 0x100))(param_1,param_2);
  lVar8 = param_1[0x136];
  *(undefined4 *)(lVar8 + 8) = 0xffffffff;
  *(undefined2 *)(lVar8 + 0xc) = 0xffff;
  *(undefined1 *)param_1[0x137] = 0;
  return;
}



/* Entry: 10abf3974; end: 10abf3e5b;  */

long * FUN_10abf3974(undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  long *plStack_4b0;
  long *plStack_4a8;
  undefined8 uStack_498;
  undefined1 auStack_490 [424];
  long *plStack_2e8;
  long *plStack_2c0;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2[0x137] + 0x18) == 0) {
    uVar11 = *(undefined8 *)(param_2[0x10b] + 0x1e0);
    plVar4 = (long *)param_2[0x16c];
    (**(code **)(*plVar4 + 0x20))();
    plVar5 = (long *)param_2[0x16c];
    (**(code **)(*plVar5 + 0x28))();
    plVar6 = (long *)param_2[0x16c];
    (**(code **)(*plVar6 + 0x30))();
    plVar7 = (long *)param_2[0x16c];
    (**(code **)(*plVar7 + 0x48))();
    plVar8 = (long *)param_2[0x16c];
    (**(code **)(*plVar8 + 0x68))();
    (**(code **)(*(long *)param_2[0x16c] + 0x70))();
    FUN_10a048e7c(&plStack_4b0,uVar11,plVar4,plVar5,plVar6,plVar7,4,1,plVar8);
    FUN_10a18da5c(&uStack_290,param_2 + 0x16b);
    plStack_e0 = (long *)param_2[0x1a1];
    lStack_e8 = param_2[0x1a0];
    if (param_2[0x1a1] != 0) {
      plVar4 = (long *)(param_2[0x1a1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_d0 = param_2[0x1a3];
    lStack_d8 = param_2[0x1a2];
    lStack_c8 = param_2[0x1a4];
    lStack_c0 = param_2[0x1a5];
    plStack_b8 = (long *)param_2[0x1a6];
    if (plStack_b8 != (long *)0x0) {
      plVar4 = plStack_b8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_a0 = param_2[0x1a9];
    lStack_a8 = param_2[0x1a8];
    lStack_b0 = param_2[0x1a7];
    lStack_90 = param_2[0x1ab];
    lStack_98 = param_2[0x1aa];
    cVar1 = *(char *)((long)param_2 + 0xb52);
    if (cVar1 == '\x01') {
      (**(code **)(*param_2 + 0x90))(param_2,0,0,0);
    }
    plVar4 = plStack_4b0;
    plVar5 = plStack_4b0;
    (**(code **)(*plStack_4b0 + 0x28))();
    (**(code **)(*plVar4 + 0x30))();
    uVar14 = (uint)plVar5;
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    uVar3 = (uint)plVar4;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    iVar18 = *(int *)((long)param_2 + 0xb0c);
    lVar13 = param_2[0x162];
    iVar19 = *(int *)((long)param_2 + 0xb14);
    lVar12 = param_2[0x163];
    param_4 = (ulong)*(uint *)((long)param_2 + 0xb74);
    (**(code **)(*param_2 + 0x98))
              (param_2,param_2 + 0x16c,(int)param_2[0x16e],param_4,&plStack_4b0,0,0);
    if (cVar1 != '\0') {
      param_4 = 0;
      FUN_10a025e68(&uStack_498,&plStack_4b0,0,0,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_2 + 0x88))(param_2,&uStack_498);
      if (plStack_2c0 != (long *)0x0) {
        plVar4 = plStack_2c0 + 1;
        do {
          lVar10 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
        }
      }
      if (plStack_2e8 != (long *)0x0) {
        plVar4 = plStack_2e8 + 1;
        do {
          lVar10 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2e8);
        }
      }
      func_0x00010a048e34(auStack_490,uStack_498);
    }
    plVar4 = plStack_b8;
    fVar15 = (float)iVar18 / (float)(int)uVar14;
    fVar17 = (float)(int)lVar13 / (float)(int)uVar3;
    param_1[1] = plStack_4a8;
    *param_1 = plStack_4b0;
    plStack_4b0 = (long *)0x0;
    plStack_4a8 = (long *)0x0;
    *(float *)(param_1 + 2) = (float)iVar19 / (float)(int)uVar14 - fVar15;
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(float *)(param_1 + 4) = (float)(int)lVar12 / (float)(int)uVar3 - fVar17;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(float *)(param_1 + 5) = fVar15;
    *(float *)((long)param_1 + 0x2c) = fVar17;
    *(undefined4 *)(param_1 + 6) = 0x3f800000;
    if (plStack_b8 != (long *)0x0) {
      plVar5 = plStack_b8 + 1;
      do {
        lVar13 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      plVar5 = plStack_e0 + 1;
      do {
        lVar13 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = &lStack_288;
    func_0x00010a048e34();
    plVar5 = plStack_4a8;
    uVar11 = uStack_290;
    if (plStack_4a8 != (long *)0x0) {
      plVar6 = plStack_4a8 + 1;
      do {
        lVar13 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plVar5;
        uVar11 = uStack_290;
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)(param_2[0x137] + 0x20);
    (**(code **)(*param_2 + 0x50))(param_2,uVar11,param_3);
    lVar13 = *(long *)(param_2[0x137] + 0x20);
    plVar4 = *(long **)(param_2[0x137] + 0x28);
    (**(code **)(*plVar4 + 0x90))(&uStack_290);
    lVar12 = *(long *)(lVar13 + 0x298);
    uVar16 = *(undefined8 *)(lVar13 + 0x290);
    param_1[1] = *(undefined8 *)(lVar13 + 0x298);
    *param_1 = uVar16;
    if (lVar12 != 0) {
      plVar5 = (long *)(lVar12 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[3] = lStack_288;
    param_1[2] = uStack_290;
    param_1[5] = uStack_278;
    param_1[4] = uStack_280;
    *(undefined4 *)(param_1 + 6) = uStack_270;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    FUN_10a023a44(&uStack_498);
    FUN_10a023a44(&uStack_290);
    func_0x00010a0523dc(&plStack_4b0);
    __Unwind_Resume();
    (**(code **)(*plVar4 + 0x168))();
    if (((param_4 & 1) == 0) && ((int)plVar4 != 0)) {
      uVar11 = 0xff;
    }
    else if (3 < (uint)uVar11) {
      puVar9 = &UNK_10f69a9c8;
      FUN_10a00946c();
      lVar13 = *(long *)(puVar9 + 0xe8);
      lVar12 = *(long *)(puVar9 + 0xf0);
      while( true ) {
        if (lVar13 == lVar12) {
          return (long *)0x1;
        }
        lVar10 = *(long *)(lVar13 + 0x30);
        if ((lVar10 != 0) && (FUN_10a088744(lVar10,1), (int)lVar10 != 2)) break;
        lVar13 = lVar13 + 0x68;
      }
      return (long *)0x0;
    }
    return (long *)(ulong)(uint)(int)(char)uVar11;
  }
  return plVar4;
}



/* Entry: 10abf3e5c; end: 10abf3f03;  */

int FUN_10abf3e5c(long *param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)(*param_1 + 0x168))();
  if (((param_4 & 1) == 0) && ((int)param_1 != 0)) {
    param_2 = 0xff;
  }
  else if (3 < param_2) {
    puVar2 = &UNK_10f69a9c8;
    FUN_10a00946c();
    lVar4 = *(long *)(puVar2 + 0xe8);
    lVar1 = *(long *)(puVar2 + 0xf0);
    while( true ) {
      if (lVar4 == lVar1) {
        return 1;
      }
      lVar3 = *(long *)(lVar4 + 0x30);
      if ((lVar3 != 0) && (FUN_10a088744(lVar3,1), (int)lVar3 != 2)) break;
      lVar4 = lVar4 + 0x68;
    }
    return 0;
  }
  return (int)(char)param_2;
}



/* Entry: 10abf3f04; end: 10abf3f8b;  */

void FUN_10abf3f04(float param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5,int param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar6 = (undefined8 *)param_4[0x10b];
  FUN_10a244c9c();
  uVar7 = *(undefined8 *)(param_4[0x10b] + 0x208);
  bVar1 = (int)param_4[8] < 0x52;
  if (bVar1) {
    if (((*(int *)(puVar6 + 5) == (int)param_7) &&
        (*(float *)((long)puVar6 + 0x2c) == (float)param_2)) &&
       (*(float *)(puVar6 + 6) == (float)param_3)) {
      iVar2 = *(int *)(puVar6 + 7);
      plVar4 = (long *)*param_5;
      (**(code **)(*plVar4 + 0x28))();
      if (iVar2 == (int)plVar4) {
        iVar2 = *(int *)((long)puVar6 + 0x3c);
        plVar4 = (long *)*param_5;
        (**(code **)(*plVar4 + 0x30))();
        if ((iVar2 == (int)plVar4) && ((*(byte *)((long)puVar6 + 0x34) & 1) != 0))
        goto LAB_10ab0d3b0;
      }
    }
    *(int *)(puVar6 + 5) = (int)param_7;
    *(float *)((long)puVar6 + 0x2c) = (float)param_2;
    *(float *)(puVar6 + 6) = (float)param_3;
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    *(int *)(puVar6 + 7) = (int)plVar4;
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x30))();
    *(int *)((long)puVar6 + 0x3c) = (int)plVar4;
    *(bool *)((long)puVar6 + 0x34) = bVar1;
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = (long *)*param_5;
    (**(code **)(*plVar5 + 0x30))();
    FUN_10ab0d5ec(param_2,param_3,param_7,plVar4,plVar5,0,puVar6 + 0x11,puVar6 + 0x14);
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = (long *)*param_5;
    (**(code **)(*plVar5 + 0x30))();
    FUN_10ab0d5ec(param_2,param_3,param_7,plVar4,plVar5,1,puVar6 + 0x17,puVar6 + 0x1a);
  }
  else {
    if ((*(float *)(puVar6 + 4) == param_1) && (*(float *)((long)puVar6 + 0x24) == 0.0)) {
      iVar2 = *(int *)(puVar6 + 7);
      plVar4 = (long *)*param_5;
      (**(code **)(*plVar4 + 0x28))();
      if (iVar2 == (int)plVar4) {
        iVar2 = *(int *)((long)puVar6 + 0x3c);
        plVar4 = (long *)*param_5;
        (**(code **)(*plVar4 + 0x30))();
        if ((iVar2 == (int)plVar4) && (*(char *)((long)puVar6 + 0x34) == '\0')) goto LAB_10ab0d3b0;
      }
    }
    *(float *)(puVar6 + 4) = param_1;
    *(undefined4 *)((long)puVar6 + 0x24) = 0;
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    *(int *)(puVar6 + 7) = (int)plVar4;
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x30))();
    *(int *)((long)puVar6 + 0x3c) = (int)plVar4;
    *(bool *)((long)puVar6 + 0x34) = bVar1;
    uVar12 = *(undefined4 *)(puVar6 + 4);
    uVar13 = *(undefined4 *)((long)puVar6 + 0x24);
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = (long *)*param_5;
    (**(code **)(*plVar5 + 0x30))();
    FUN_10ab0d7c0(uVar12,uVar13,plVar4,plVar5,0,puVar6 + 0x11,puVar6 + 0x14);
    uVar12 = *(undefined4 *)(puVar6 + 4);
    uVar13 = *(undefined4 *)((long)puVar6 + 0x24);
    plVar4 = (long *)*param_5;
    (**(code **)(*plVar4 + 0x28))();
    plVar5 = (long *)*param_5;
    (**(code **)(*plVar5 + 0x30))();
    FUN_10ab0d7c0(uVar12,uVar13,plVar4,plVar5,1,puVar6 + 0x17,puVar6 + 0x1a);
  }
LAB_10ab0d3b0:
  uStack_80 = 0;
  uStack_78 = 0;
  uVar8 = (long)(puVar6[0x12] - puVar6[0x11]) >> 2;
  puStack_88 = &uStack_80;
  if (uVar8 < (ulong)((long)(puVar6[0xf] - puVar6[0xe]) >> 5)) {
    lVar9 = puVar6[0xe] + uVar8 * 0x20;
    FUN_10a047898(&puStack_88,lVar9,lVar9);
    if (param_6 != 0) {
      uStack_98 = 0x1d;
      puStack_a0 = &DAT_10f68f701;
      uStack_90 = 0xd10da28bcf2838b1;
      func_0x000107c2b074(&uStack_e0,&puStack_a0);
      FUN_10a20e230(&puStack_88,&uStack_e0,&uStack_e0);
      if (uStack_cc._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_dc,uStack_e0));
      }
    }
    plVar4 = param_4 + 4;
    FUN_10a5dfd94(plVar4,*puVar6);
    plVar5 = param_4 + 4;
    FUN_10a01eacc(plVar5,plVar4);
    if ((undefined8 **)plVar5[0x2b] != &puStack_88) {
      FUN_10a1f503c((undefined8 **)plVar5[0x2b],puStack_88,&uStack_80);
    }
    FUN_10a1db4cc(puVar6[2],param_5);
    lVar9 = puVar6[0x11];
    if (puVar6[0x12] != lVar9) {
      lVar10 = 0;
      lVar11 = 0;
      uVar8 = 0;
      do {
        if ((ulong)((long)(puVar6[9] - puVar6[8]) >> 5) <= uVar8) goto LAB_10ab0d5a8;
        FUN_10a01671c(plVar5,puVar6[8] + lVar11,lVar9 + lVar10);
        if (((ulong)((long)(puVar6[0xc] - puVar6[0xb]) >> 5) <= uVar8) ||
           ((ulong)((long)(puVar6[0x15] - puVar6[0x14]) >> 2) <= uVar8)) goto LAB_10ab0d5a8;
        FUN_10a01671c(plVar5,puVar6[0xb] + lVar11,puVar6[0x14] + lVar10);
        uVar8 = uVar8 + 1;
        lVar9 = puVar6[0x11];
        lVar11 = lVar11 + 0x20;
        lVar10 = lVar10 + 4;
      } while (uVar8 < (ulong)(puVar6[0x12] - lVar9 >> 2));
    }
    uStack_e0 = 0x3f800000;
    uStack_d4 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_cc = 0x3f800000;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0x3f800000;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_a4 = 0x3f800000;
    (**(code **)(*param_4 + 0x58))(param_4,uVar7,plVar4,&uStack_e0,3);
    lVar9 = puVar6[2];
    FUN_10a18cbd8(lVar9 + 0x288);
    FUN_10a1da3a4(lVar9,0,0,0,4,0,0,0);
    FUN_10a0da1b8(&puStack_88,uStack_80);
    return;
  }
LAB_10ab0d5a8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab0d5ac);
  (*pcVar3)();
}



/* Entry: 10abf3f8c; end: 10abf51bf;  */

void FUN_10abf3f8c(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *in_x5;
  long *in_x6;
  long *in_x7;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 *in_stack_00000000;
  ulong in_stack_fffffffffffffca0;
  long lStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 ***pppuStack_308;
  long *plStack_300;
  undefined7 uStack_2f8;
  char cStack_2f1;
  undefined1 auStack_2f0 [8];
  long *plStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined4 uStack_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  long *plStack_e0;
  long *plStack_b8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_328 = (long *)0x0;
  pppuStack_330 = (undefined8 ****)0x3f800000;
  uStack_318 = 0;
  plStack_320 = (long *)0x3f800000;
  uStack_310 = 0x3f800000;
  lStack_340 = 0;
  plStack_338 = (long *)0x0;
  plVar12 = param_1;
  if (in_x6 != (long *)0x0) {
    puVar9 = (undefined8 *)0x1;
    plVar12 = in_x6;
    FUN_10a088744();
    uStack_2e0 = (undefined8 ****)CONCAT44(uStack_2e0._4_4_,(int)plVar12);
    if (puVar9 == (undefined8 *)0x0) {
      plStack_2d8 = (long *)0x0;
      plStack_2d0 = (long *)0x0;
    }
    else {
      plStack_2d8 = (long *)*puVar9;
      plStack_2d0 = (long *)puVar9[1];
      if (puVar9[1] != 0) {
        plVar14 = (long *)(puVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = *plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if ((int)plVar12 == 2) {
      FUN_10a026ab4(&lStack_340,&plStack_2d8);
      (**(code **)(*in_x6 + 0x90))(&uStack_290);
      plStack_328 = plStack_288;
      pppuStack_330 = uStack_290;
      uStack_318 = uStack_278;
      plStack_320 = plStack_280;
      uStack_310 = uStack_270;
      plVar12 = in_x6;
    }
    plVar14 = plStack_2d0;
    if (plStack_2d0 != (long *)0x0) {
      plVar1 = plStack_2d0 + 1;
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
        (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar12 = plVar14;
      }
    }
  }
  iVar7 = (int)plVar12;
  if (param_2 < 2) {
    if (lStack_340 == 0) {
      FUN_10a00946c(&UNK_10f69aa55);
      goto LAB_10abf4fd8;
    }
LAB_10abf461c:
    FUN_10ad055a0();
    if (iVar7 == 0) {
LAB_10abf4650:
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar10 = 0;
LAB_10abf4698:
        uVar16 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar10 = *(undefined1 *)((long)plVar12 + 0x44);
        if (*(short *)(param_1[0x136] + 4) == -1) goto LAB_10abf4698;
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar16 = (undefined4)plVar12[8];
      }
      FUN_10a025e68(&uStack_290,in_x5,uVar10,uVar16,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      if (plStack_b8 != (long *)0x0) {
        plVar12 = plStack_b8 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      if (plStack_e0 != (long *)0x0) {
        plVar12 = plStack_e0 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      uVar13 = *(undefined8 *)(param_1[0x137] + 0x20);
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar10 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar10 = *(undefined1 *)((long)plVar12 + 0x44);
      }
      FUN_10abf1f44(param_1,uVar13,uVar10);
      plVar12 = (long *)*in_x5;
      pppuStack_308 = (undefined8 ****)0x0;
      plStack_300 = (long *)0x0;
      plStack_288 = (long *)0x0;
      uStack_290 = (undefined8 ****)0x3f800000;
      uStack_278 = 0;
      plStack_280 = (long *)0x3f800000;
      uStack_270 = 0x3f800000;
      uStack_2a0 = *in_stack_00000000;
      plStack_298 = (long *)in_stack_00000000[1];
      if (in_x7 == (long *)0x0) {
        FUN_10a026ab4(&pppuStack_308,param_1[0x10b] + 0x108);
      }
      else {
        puVar9 = (undefined8 *)0x1;
        plVar14 = in_x7;
        FUN_10a088744();
        iStack_2b8 = (int)plVar14;
        if (puVar9 == (undefined8 *)0x0) {
          plVar14 = (long *)0x0;
          plStack_2b0 = (long *)0x0;
          uStack_2a8 = (long *)0x0;
        }
        else {
          plVar14 = (long *)puVar9[1];
          plStack_2b0 = (long *)*puVar9;
          uStack_2a8 = (long *)puVar9[1];
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
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
        if (iStack_2b8 == 2) {
          if (*(char *)((long)param_1 + 0x4c) == '\x01') {
            auVar17 = NEON_fmov(0x3f800000,4);
            plStack_298 = auVar17._8_8_;
            uStack_2a0 = auVar17._0_8_;
          }
          FUN_10a026ab4(&pppuStack_308,&plStack_2b0);
          (**(code **)(*in_x7 + 0x90))(&uStack_2e0,in_x7);
          uStack_278 = CONCAT71(uStack_2c7,uStack_2c8);
          plStack_288 = plStack_2d8;
          uStack_290 = uStack_2e0;
          plStack_280 = plStack_2d0;
          uStack_270 = uStack_2c0;
          plVar14 = uStack_2a8;
        }
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
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
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar15 = 0;
      }
      else {
        plVar14 = param_1 + 4;
        FUN_10a01f6d4();
        uVar15 = (uint)*(byte *)((long)plVar14 + 0x44);
      }
      plVar14 = plVar12;
      (**(code **)(*plVar12 + 0x28))();
      uVar3 = (uint)plVar14 >> (ulong)(uVar15 & 0x1f);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      (**(code **)(*plVar12 + 0x30))();
      FUN_10a24473c(param_1[0x10b]);
      uVar15 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      uStack_2e0 = (undefined8 ****)CONCAT44((float)uVar15,(float)uVar3);
      FUN_10ab10600();
      plVar12 = plStack_300;
      if (plStack_300 != (long *)0x0) {
        plVar14 = plStack_300 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_300 + 0x10))(plStack_300);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      goto LAB_10abf49a4;
    }
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar8;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10abf4650;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) == 0) goto LAB_10abf4650;
  }
  else {
    if (param_2 == 3) {
      if (*(short *)(param_1[0x136] + 4) == -1) {
        uVar15 = 0;
LAB_10abf4124:
        uVar16 = 0;
      }
      else {
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar15 = (uint)*(byte *)((long)plVar12 + 0x44);
        if (*(short *)(param_1[0x136] + 4) == -1) goto LAB_10abf4124;
        plVar12 = param_1 + 4;
        FUN_10a01f6d4();
        uVar16 = (undefined4)plVar12[8];
      }
      plVar12 = (long *)*in_x5;
      (**(code **)(*plVar12 + 0x28))();
      uVar3 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      plVar12 = (long *)*in_x5;
      (**(code **)(*plVar12 + 0x30))();
      uVar2 = (uint)plVar12 >> (ulong)(uVar15 & 0x1f);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      in_stack_fffffffffffffca0 = in_stack_fffffffffffffca0 & 0xffffffffffffff00;
      FUN_10a048e7c(&uStack_2a0,*(undefined8 *)(param_1[0x10b] + 0x1e0),0,uVar3,uVar2,1,4,1,0,
                    in_stack_fffffffffffffca0);
      uVar13 = *(undefined8 *)(param_1[0x10b] + 0x1e0);
      FUN_10a048e7c(auStack_2f0,uVar13,0,uVar3,uVar2,1,4,1,0,
                    in_stack_fffffffffffffca0 & 0xffffffffffffff00);
      iVar7 = (int)uVar13;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf41f4;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aaad);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4d5c;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4e94:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4e94;
            }
LAB_10abf4d5c:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4ec0;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4f74:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4f74;
            }
LAB_10abf4ec0:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf41f4:
      FUN_10a025e68(&uStack_290,&uStack_2a0,uVar15,uVar16,2,2,2,0xffffffffffffffff,
                    0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a244794(param_1[0x10b]);
      fVar18 = (float)uVar3;
      fVar19 = (float)uVar2;
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73f1a0();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf4344;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aacd);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4de8;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4ee0:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4ee0;
            }
LAB_10abf4de8:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4f0c;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4f9c:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4f9c;
            }
LAB_10abf4f0c:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf4344:
      FUN_10a025e68(&uStack_290,auStack_2f0,uVar15,uVar16,2,2,2,0xffffffffffffffff,
                    0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a2447ec(param_1[0x10b]);
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73ecd4();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      FUN_10ad055a0();
      if (iVar7 != 0) {
        ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar8 == (undefined *)0x0) {
          ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar12 = (long *)*ppuVar8;
          if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0)
             ) goto LAB_10abf448c;
          plVar12 = plVar12 + 7;
        }
        else {
          plVar12 = (long *)(*ppuVar8 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&iStack_2b8,&UNK_10f69aaed);
          func_0x000107c2b054(&pppuStack_308,"");
          if ((long)uStack_2a8 < 0) {
            uStack_290 = (undefined8 ****)"null";
            if (plStack_2b0 != (long *)0x0) {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
            }
          }
          else {
            uStack_290 = (undefined8 ****)"null";
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)&iStack_2b8;
            }
          }
          if (cStack_2f1 < '\0') {
            uStack_2e0 = (undefined8 ****)"null";
            if (plStack_300 != (long *)0x0) {
              uStack_2e0 = (undefined8 ****)pppuStack_308;
            }
          }
          else {
            uStack_2e0 = (undefined8 ****)"null";
            if (cStack_2f1 != '\0') {
              uStack_2e0 = &pppuStack_308;
            }
          }
          FUN_10a224324(&uStack_290,&uStack_2e0);
          if ((long)uStack_2a8 < 0) {
            if (plStack_2b0 == (long *)0x0) goto LAB_10abf4e74;
            func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4f2c:
            uVar10 = 1;
          }
          else {
            if (uStack_2a8._7_1_ != '\0') {
              uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
              plStack_288 = plStack_2b0;
              plStack_280 = uStack_2a8;
              goto LAB_10abf4f2c;
            }
LAB_10abf4e74:
            uVar10 = 0;
            uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
          }
          uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
          if (cStack_2f1 < '\0') {
            if (plStack_300 == (long *)0x0) goto LAB_10abf4f58;
            func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4fc4:
            uStack_2c8 = 1;
          }
          else {
            if (cStack_2f1 != '\0') {
              plStack_2d8 = plStack_300;
              uStack_2e0 = (undefined8 ****)pppuStack_308;
              plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
              goto LAB_10abf4fc4;
            }
LAB_10abf4f58:
            uStack_2c8 = 0;
            uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          FUN_10a234a0c(&uStack_290,&uStack_2e0);
          goto LAB_10abf4fd8;
        }
      }
LAB_10abf448c:
      FUN_10a025e68(&uStack_290,in_x5,uVar15,uVar16,2,2,2,0xffffffffffffffff,0xffffffffffffffff);
      (**(code **)(*param_1 + 0x88))(param_1,&uStack_290);
      plVar12 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar14 = plStack_b8 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar14 = plStack_e0 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x00010a048e34(&plStack_288,uStack_290);
      FUN_10abf1f44(param_1,*(undefined8 *)(param_1[0x137] + 0x20),uVar15);
      FUN_10a244844(param_1[0x10b]);
      uStack_290 = (undefined8 ****)CONCAT44(fVar19,fVar18);
      FUN_10a73f7a8();
      plVar12 = param_1;
      (**(code **)(*param_1 + 0x90))(param_1,0,3,3);
      iVar7 = (int)plVar12;
      if (plStack_2e8 != (long *)0x0) {
        plVar12 = plStack_2e8 + 1;
        do {
          lVar11 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          iVar7 = (int)plStack_2e8;
        }
      }
      plVar12 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar14 = plStack_298 + 1;
        do {
          lVar11 = *plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          iVar7 = (int)plVar12;
        }
      }
    }
    if (lStack_340 != 0) goto LAB_10abf461c;
LAB_10abf49a4:
    plVar12 = plStack_338;
    if (plStack_338 != (long *)0x0) {
      plVar14 = plStack_338 + 1;
      do {
        lVar11 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000107c2b054(&iStack_2b8,&UNK_10f69aa8c);
  func_0x000107c2b054(&pppuStack_308,"");
  if ((long)uStack_2a8 < 0) {
    uStack_290 = (undefined8 ****)"null";
    if (plStack_2b0 != (long *)0x0) {
      uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
    }
  }
  else {
    uStack_290 = (undefined8 ****)"null";
    if (uStack_2a8._7_1_ != '\0') {
      uStack_290 = (undefined8 ****)&iStack_2b8;
    }
  }
  if (cStack_2f1 < '\0') {
    uStack_2e0 = (undefined8 ****)"null";
    if (plStack_300 != (long *)0x0) {
      uStack_2e0 = (undefined8 ****)pppuStack_308;
    }
  }
  else {
    uStack_2e0 = (undefined8 ****)"null";
    if (cStack_2f1 != '\0') {
      uStack_2e0 = &pppuStack_308;
    }
  }
  FUN_10a224324(&uStack_290,&uStack_2e0);
  if ((long)uStack_2a8 < 0) {
    if (plStack_2b0 == (long *)0x0) goto LAB_10abf4c5c;
    func_0x000107c3192c(&uStack_290,CONCAT44(uStack_2b4,iStack_2b8));
LAB_10abf4c7c:
    uVar10 = 1;
  }
  else {
    if (uStack_2a8._7_1_ != '\0') {
      uStack_290 = (undefined8 ****)CONCAT44(uStack_2b4,iStack_2b8);
      plStack_288 = plStack_2b0;
      plStack_280 = uStack_2a8;
      goto LAB_10abf4c7c;
    }
LAB_10abf4c5c:
    uVar10 = 0;
    uStack_290 = (undefined8 ****)((ulong)uStack_290 & 0xffffffffffffff00);
  }
  uStack_278 = CONCAT71(uStack_278._1_7_,uVar10);
  if (cStack_2f1 < '\0') {
    if (plStack_300 == (long *)0x0) goto LAB_10abf4ca8;
    func_0x000107c3192c(&uStack_2e0,pppuStack_308);
LAB_10abf4cc4:
    uStack_2c8 = 1;
  }
  else {
    if (cStack_2f1 != '\0') {
      plStack_2d8 = plStack_300;
      uStack_2e0 = (undefined8 ****)pppuStack_308;
      plStack_2d0 = (long *)CONCAT17(cStack_2f1,uStack_2f8);
      goto LAB_10abf4cc4;
    }
LAB_10abf4ca8:
    uStack_2c8 = 0;
    uStack_2e0 = (undefined8 ****)((ulong)uStack_2e0 & 0xffffffffffffff00);
  }
  FUN_10a234a0c(&uStack_290,&uStack_2e0);
LAB_10abf4fd8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abf4fdc);
  (*pcVar6)();
}



/* Entry: 10abf51c0; end: 10abf57db;  */

code * FUN_10abf51c0(code *param_1,code *param_2,byte param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  int iVar6;
  code cVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  byte bVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  undefined4 uVar28;
  ulong uVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined8 uVar32;
  uint3 uStack_2d8;
  undefined5 uStack_2d5;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined3 uStack_2c8;
  undefined5 uStack_2c5;
  undefined3 uStack_2c0;
  undefined5 uStack_2bd;
  undefined4 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  uint uStack_284;
  long lStack_280;
  long *plStack_278;
  undefined1 uStack_270;
  long lStack_d8;
  code *pcStack_d0;
  long *plStack_a8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0x9b8);
  bVar23 = param_3;
  if (*(long *)(lVar16 + 0x18) != 0) {
    lVar20 = *(long *)(lVar16 + 0x18) << 4;
    puVar26 = (ulong *)(lVar16 + 0x20);
    do {
      bVar23 = bVar23 | (code *)*puVar26 == param_2;
      lVar20 = lVar20 + -0x10;
      puVar26 = puVar26 + 2;
    } while (lVar20 != 0);
  }
  pcVar13 = param_1;
  UNRECOVERED_JUMPTABLE = param_2;
  if ((((bVar23 & 1) == 0) && (*(code **)(lVar16 + 0x60) != param_2)) ||
     (((param_3 & 1) == 0 && (*(int *)(param_2 + 0x364) == **(int **)(param_1 + 0x9b0))))) {
LAB_10abf5304:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return pcVar13;
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x170))();
    if ((int)pcVar13 != 0) goto LAB_10abf57b4;
    pcVar13 = param_2;
    (**(code **)(*(long *)param_2 + 0x28))();
    ppuVar5 = &PTR_DAT_110ae4700 + ((ulong)pcVar13 & 0xffffffff) * 4;
    if (0x56 < (uint)pcVar13) {
      ppuVar5 = &PTR_DAT_110ae4700;
    }
    bVar12 = (*(byte *)((long)ppuVar5 + 0x14) & 3) != 0;
    iVar6 = *(int *)(param_1 + (ulong)bVar12 * 4 + 0xb04);
    *(int *)(param_1 + (ulong)bVar12 * 4 + 0xb04) = iVar6 + 1;
    if (*(int *)(param_1 + (ulong)bVar12 * 4 + 0xafc) <= iVar6) goto LAB_10abf5304;
    puVar17 = *(undefined4 **)(param_1 + 0x9b0);
    *(undefined4 *)(param_2 + 0x364) = *puVar17;
    if (*(short *)(puVar17 + 1) == -1) {
      uVar31 = 0;
LAB_10abf5340:
      uVar30 = 0;
    }
    else {
      pcVar13 = param_1 + 0x20;
      FUN_10a01f6d4();
      uVar31 = (uint)(byte)pcVar13[0x44];
      if (*(short *)(*(long *)(param_1 + 0x9b0) + 4) == -1) goto LAB_10abf5340;
      pcVar13 = param_1 + 0x20;
      FUN_10a01f6d4();
      uVar30 = *(undefined4 *)(pcVar13 + 0x40);
    }
    lVar20 = *(long *)(param_2 + 0x348);
    lVar16 = *(long *)(param_2 + 0x350);
    if (lVar20 == lVar16) {
      lVar16 = *(long *)(param_2 + 0x338);
      lVar20 = *(long *)(param_2 + 0x330);
      lVar24 = 3;
      if ((param_4 >> 1 & 1) != 0) goto LAB_10abf5370;
LAB_10abf5438:
      lVar20 = *(long *)(param_1 + 0x9b8);
      lVar16 = *(long *)(lVar20 + 0x20);
      cVar9 = *(char *)(lVar16 + 0x318);
      bVar23 = *(byte *)(lVar16 + 0x319);
      bVar10 = *(byte *)(lVar16 + 0x31a);
      uVar30 = 0;
      if (bVar23 == 0) {
        uVar30 = 3;
      }
      uVar28 = 0;
      if (bVar10 == 0) {
        uVar28 = 3;
      }
      uStack_284 = uVar31;
      (**(code **)(*(long *)param_1 + 0x90))(param_1,cVar9,uVar30,uVar28);
      if (*(long *)(lVar20 + 0x18) != 0) {
        uVar29 = 0;
        do {
          lVar16 = ((long *)(lVar20 + 0x20))[uVar29 * 2];
          if (cVar9 == '\0') {
            uVar19 = 0;
            while( true ) {
              lVar25 = *(long *)(lVar16 + 0x348);
              lVar24 = *(long *)(lVar16 + 0x350);
              if (lVar25 == lVar24) {
                lVar24 = *(long *)(lVar16 + 0x338);
                lVar25 = *(long *)(lVar16 + 0x330);
                lVar27 = 3;
              }
              else {
                lVar27 = 4;
              }
              if ((ulong)(lVar24 - lVar25 >> lVar27) <= uVar19) break;
              lVar24 = lVar16;
              FUN_10abf1b04(lVar16);
              (**(code **)(*(long *)param_1 + 0xa0))(param_1,lVar16 + 0x2a8,uVar19,lVar24,uVar19);
              uVar19 = (ulong)((int)uVar19 + 1);
            }
          }
          else {
            plVar21 = (long *)(lVar16 + 0x2a8);
            plStack_278 = *(long **)(lVar16 + 0x2b0);
            lStack_280 = *plVar21;
            *(undefined8 *)(lVar16 + 0x2b0) = 0;
            *plVar21 = 0;
            uStack_270 = *(undefined1 *)(lVar16 + 0x2b8);
            FUN_10a00e5c4(plVar21,lVar16 + 0x290);
            *(undefined1 *)(lVar16 + 0x2b8) = *(undefined1 *)(lVar16 + 0x2a0);
            FUN_10a00e5c4(lVar16 + 0x290,&lStack_280);
            plVar21 = plStack_278;
            *(undefined1 *)(lVar16 + 0x2a0) = uStack_270;
            if (plStack_278 != (long *)0x0) {
              plVar1 = plStack_278 + 1;
              do {
                lVar16 = *plVar1;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar12) {
                  *plVar1 = lVar16 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_278 + 0x10))(plStack_278);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
              }
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < *(ulong *)(lVar20 + 0x18));
      }
      lVar16 = *(long *)(lVar20 + 0x60);
      if ((lVar16 != 0) && (lVar24 = *(long *)(lVar16 + 0x2a8), lVar24 != 0)) {
        puVar2 = (undefined8 *)(lVar16 + 0x2a8);
        if (cVar9 == '\0') {
          FUN_10abf1b04(lVar16);
          (**(code **)(*(long *)param_1 + 0xa0))(param_1,puVar2,uStack_284,lVar16,uStack_284);
        }
        else {
          plStack_278 = *(long **)(lVar16 + 0x2b0);
          *puVar2 = 0;
          *(undefined8 *)(lVar16 + 0x2b0) = 0;
          uStack_270 = *(undefined1 *)(lVar16 + 0x2b8);
          lStack_280 = lVar24;
          FUN_10a00e5c4(puVar2,lVar16 + 0x290);
          *(undefined1 *)(lVar16 + 0x2b8) = *(undefined1 *)(lVar16 + 0x2a0);
          FUN_10a00e5c4(lVar16 + 0x290,&lStack_280);
          plVar21 = plStack_278;
          *(undefined1 *)(lVar16 + 0x2a0) = uStack_270;
          if (plStack_278 != (long *)0x0) {
            plVar1 = plStack_278 + 1;
            do {
              lVar16 = *plVar1;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *plVar1 = lVar16 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_278 + 0x10))(plStack_278);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
        }
      }
      FUN_10abf8b28(&lStack_280,lVar20 + 0x10,cVar9,bVar10 | bVar23,uStack_284,0);
      if (lStack_280 != 0) {
        lVar16 = lStack_280 * 0x68;
        plVar21 = &lStack_280;
        do {
          plVar21 = plVar21 + 0xd;
          *(undefined4 *)plVar21 = 1;
          lVar16 = lVar16 + -0x68;
        } while (lVar16 != 0);
      }
      uStack_80 = 1;
      if (bVar23 == 0) {
        uStack_80 = 2;
      }
      uStack_7c = 1;
      if (bVar10 == 0) {
        uStack_7c = 2;
      }
      if ((lStack_d8 != 0) && (*(char *)(lStack_d8 + 0x19) == '\x01')) {
        if (bVar23 != 0) {
          uStack_80 = 0;
        }
        if (bVar10 != 0) {
          uStack_7c = 0;
        }
      }
      (**(code **)(*(long *)param_1 + 0x88))(param_1,&lStack_280);
      if (plStack_a8 != (long *)0x0) {
        plVar21 = plStack_a8 + 1;
        do {
          lVar16 = *plVar21;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar12) {
            *plVar21 = lVar16 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
      if (pcStack_d0 != (code *)0x0) {
        pcVar13 = pcStack_d0 + 8;
        do {
          lVar16 = *(long *)pcVar13;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
          if (bVar12) {
            *(long *)pcVar13 = lVar16 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)pcStack_d0 + 0x10))(pcStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcStack_d0);
        }
      }
      func_0x00010a048e34(&plStack_278,lStack_280);
      param_1 = pcStack_d0;
    }
    else {
      lVar24 = 4;
      if ((param_4 >> 1 & 1) == 0) goto LAB_10abf5438;
LAB_10abf5370:
      if (1 < (ulong)(lVar16 - lVar20 >> lVar24)) goto LAB_10abf5438;
      pcVar13 = param_2;
      (**(code **)(*(long *)param_2 + 0x28))();
      ppuVar5 = &PTR_DAT_110ae4700 + ((ulong)pcVar13 & 0xffffffff) * 4;
      if (0x56 < (uint)pcVar13) {
        ppuVar5 = &PTR_DAT_110ae4700;
      }
      cVar7 = param_2[0x318];
      lVar16 = *(long *)(*(long *)(param_1 + 0x9b8) + 0x20);
      uVar8 = *(undefined1 *)(lVar16 + 0x318);
      uVar3 = uVar8;
      if (*(char *)(lVar16 + 0x319) == '\0') {
        uVar3 = 3;
      }
      uVar4 = uVar8;
      if (*(char *)(lVar16 + 0x31a) == '\0') {
        uVar4 = 3;
      }
      (**(code **)(*(long *)param_1 + 0x90))(param_1,uVar8,uVar3,uVar4);
      uVar28 = 1;
      if ((*(byte *)((long)ppuVar5 + 0x14) & 3) != 0) {
        uVar28 = 2;
      }
      FUN_10abf2074(*(long *)(param_1 + 0x9b8) + 0x10,uVar28);
      FUN_10abf285c(*(long *)(param_1 + 0x9b8) + 0x10,param_1,uVar31,uVar30,2);
      puVar18 = *(undefined1 **)(param_1 + 0x9b8);
      *puVar18 = 1;
      if (cVar7 == (code)0x1) {
        FUN_10abf1f44(param_1,*(undefined8 *)(puVar18 + 0x20),uVar31);
      }
    }
    (**(code **)(*(long *)param_2 + 0x10))();
    param_2 = *(code **)param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0xb0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010abf57ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_2;
    }
  }
  ___stack_chk_fail();
LAB_10abf57b4:
  puVar14 = &UNK_10f69ab5d;
  FUN_10a00946c();
  FUN_10a023a44(&lStack_280);
  puVar15 = puVar14;
  __Unwind_Resume();
  pcStack_298 = FUN_10abf57dc;
  pcStack_2b0 = param_1;
  puStack_2a8 = puVar14;
  puStack_2a0 = &stack0xfffffffffffffff0;
  if (puVar15[0xb52] == '\x01') {
    pcVar13 = (code *)&UNK_10f69ab85;
    FUN_10a00946c();
    iVar6 = *(int *)(pcVar13 + 8);
    UNRECOVERED_JUMPTABLE = pcVar13;
    __ZSt19uncaught_exceptionsv();
    if (iVar6 < (int)UNRECOVERED_JUMPTABLE) {
      lVar16 = *(long *)pcVar13;
      *(undefined1 *)(lVar16 + 0xb52) = 0;
      func_0x00010abf5978(lVar16 + 0xb58);
      func_0x00010a5dfd48(lVar16 + 0x20);
    }
    return pcVar13;
  }
  if (((puVar15[0x20] & 1) == 0) && (*(int *)(puVar15 + 0x24) == 0)) {
    uStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2bd = 0;
    uStack_2c5 = 0;
    uStack_2c0 = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0x17d;
    *(undefined8 *)(puVar15 + 0x55) = 0;
    *(ulong *)(puVar15 + 0x4d) = (ulong)uStack_2d8;
    uStack_2b8 = 0;
    *(undefined4 *)(puVar15 + 0x6d) = 0;
    *(undefined2 *)(puVar15 + 0x4a) = 0;
    puVar15[0x4c] = 0;
    *(undefined8 *)(puVar15 + 0x65) = 0;
    *(undefined8 *)(puVar15 + 0x5d) = 0;
  }
  *(int *)(puVar15 + 0x24) = *(int *)(puVar15 + 0x24) + 1;
  uStack_2d8 = (uint3)puVar15;
  uStack_2d5 = (undefined5)((ulong)puVar15 >> 0x18);
  puVar14 = puVar15;
  __ZSt19uncaught_exceptionsv();
  uStack_2d0 = SUB84(puVar14,0);
  puVar15[0xb52] = 1;
  FUN_10ac04fec(puVar15 + 0xb58,UNRECOVERED_JUMPTABLE);
  FUN_10a026ab4(puVar15 + 0xd00,UNRECOVERED_JUMPTABLE + 0x1a8);
  uVar22 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1c8);
  uVar32 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1b8);
  *(undefined8 *)(puVar15 + 0xd18) = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1c0);
  *(undefined8 *)(puVar15 + 0xd10) = uVar32;
  *(undefined8 *)(puVar15 + 0xd20) = uVar22;
  FUN_10a026ab4(puVar15 + 0xd28,UNRECOVERED_JUMPTABLE + 0x1d0);
  uVar32 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1e8);
  uVar22 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1e0);
  *(undefined8 *)(puVar15 + 0xd48) = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1f0);
  *(undefined8 *)(puVar15 + 0xd40) = uVar32;
  *(undefined8 *)(puVar15 + 0xd38) = uVar22;
  uVar22 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x1f8);
  *(undefined8 *)(puVar15 + 0xd58) = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x200);
  *(undefined8 *)(puVar15 + 0xd50) = uVar22;
  FUN_10aba1d00(UNRECOVERED_JUMPTABLE);
  pcVar13 = (code *)&uStack_2d8;
  FUN_10abf58ec(pcVar13);
  return pcVar13;
}



/* Entry: 10abf57dc; end: 10abf58eb;  */

uint3 * FUN_10abf57dc(long param_1,long param_2)

{
  int iVar1;
  uint3 *puVar2;
  uint3 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint3 uStack_48;
  undefined5 uStack_45;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined5 uStack_2d;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0xb52) != '\x01') {
    if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_2d = 0;
      uStack_35 = 0;
      uStack_30 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0x17d;
      *(undefined8 *)(param_1 + 0x55) = 0;
      *(ulong *)(param_1 + 0x4d) = (ulong)uStack_48;
      uStack_28 = 0;
      *(undefined4 *)(param_1 + 0x6d) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x65) = 0;
      *(undefined8 *)(param_1 + 0x5d) = 0;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    uStack_48 = (uint3)param_1;
    uStack_45 = (undefined5)((ulong)param_1 >> 0x18);
    lVar5 = param_1;
    __ZSt19uncaught_exceptionsv();
    uStack_40 = (undefined4)lVar5;
    *(undefined1 *)(param_1 + 0xb52) = 1;
    FUN_10ac04fec(param_1 + 0xb58,param_2);
    FUN_10a026ab4(param_1 + 0xd00,param_2 + 0x1a8);
    uVar4 = *(undefined8 *)(param_2 + 0x1c8);
    uVar6 = *(undefined8 *)(param_2 + 0x1b8);
    *(undefined8 *)(param_1 + 0xd18) = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_1 + 0xd10) = uVar6;
    *(undefined8 *)(param_1 + 0xd20) = uVar4;
    FUN_10a026ab4(param_1 + 0xd28,param_2 + 0x1d0);
    uVar6 = *(undefined8 *)(param_2 + 0x1e8);
    uVar4 = *(undefined8 *)(param_2 + 0x1e0);
    *(undefined8 *)(param_1 + 0xd48) = *(undefined8 *)(param_2 + 0x1f0);
    *(undefined8 *)(param_1 + 0xd40) = uVar6;
    *(undefined8 *)(param_1 + 0xd38) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x1f8);
    *(undefined8 *)(param_1 + 0xd58) = *(undefined8 *)(param_2 + 0x200);
    *(undefined8 *)(param_1 + 0xd50) = uVar4;
    FUN_10aba1d00(param_2);
    puVar2 = &uStack_48;
    FUN_10abf58ec(puVar2);
    return puVar2;
  }
  puVar2 = (uint3 *)&UNK_10f69ab85;
  FUN_10a00946c();
  iVar1 = *(int *)(puVar2 + 2);
  puVar3 = puVar2;
  __ZSt19uncaught_exceptionsv();
  if (iVar1 < (int)puVar3) {
    lVar5 = *(long *)puVar2;
    *(undefined1 *)(lVar5 + 0xb52) = 0;
    func_0x00010abf5978(lVar5 + 0xb58);
    func_0x00010a5dfd48(lVar5 + 0x20);
  }
  return puVar2;
}



/* Entry: 10abf58ec; end: 10abf5937;  */

long * FUN_10abf58ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  plVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)lVar2 < (int)plVar1) {
    lVar2 = *param_1;
    *(undefined1 *)(lVar2 + 0xb52) = 0;
    func_0x00010abf5978(lVar2 + 0xb58);
    func_0x00010a5dfd48(lVar2 + 0x20);
  }
  return param_1;
}



/* Entry: 10abf5938; end: 10abf5a8f;  */

/* WARNING: Possible PIC construction at 0x00010abf5958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010abf595c) */
/* WARNING: Removing unreachable block (ram,0x00010a5dfd48) */
/* WARNING: Removing unreachable block (ram,0x00010a5dfd5c) */
/* WARNING: Removing unreachable block (ram,0x00010a5dfd90) */
/* WARNING: Removing unreachable block (ram,0x00010a5dfd60) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3b50) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3b58) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3b7c) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3b80) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3b94) */
/* WARNING: Removing unreachable block (ram,0x00010a5e3ba0) */

void FUN_10abf5938(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 0xb52) & 1) == 0) {
    puVar5 = (undefined8 *)&UNK_10f69abab;
    FUN_10a00946c();
  }
  else {
    *(undefined1 *)(param_1 + 0xb52) = 0;
    puVar5 = (undefined8 *)(param_1 + 0xb58);
  }
  func_0x00010a048e34(puVar5 + 1,*puVar5);
  *puVar5 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_10a00e5c4(puVar5 + 0x35,&uStack_a0);
  puVar5[0x38] = uStack_88;
  puVar5[0x37] = uStack_90;
  puVar5[0x39] = uStack_80;
  FUN_10a00e5c4(puVar5 + 0x3a,&uStack_78);
  plVar4 = plStack_70;
  puVar5[0x3d] = uStack_60;
  puVar5[0x3c] = uStack_68;
  puVar5[0x3e] = uStack_58;
  puVar5[0x40] = uStack_48;
  puVar5[0x3f] = CONCAT44(uStack_4c,uStack_50);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10abf5a90; end: 10abf5a9f;  */

void FUN_10abf5a90(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xb14) = param_2[1];
  *(undefined8 *)(param_1 + 0xb0c) = uVar1;
  return;
}



/* Entry: 10abf5aa0; end: 10abf6253;  */

undefined8
FUN_10abf5aa0(long *param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5,
             ulong param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11,long param_12,short param_13)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  undefined4 *puVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  uint uStack_784;
  uint uStack_778;
  uint uStack_774;
  uint uStack_738;
  undefined1 auStack_728 [64];
  undefined8 auStack_6e8 [81];
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined1 uStack_440;
  long *plStack_430;
  undefined1 auStack_350 [696];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_1 + 4;
  FUN_10a021e20(plVar12,param_4);
  if ((*(byte *)(plVar12 + 3) & 1) != 0) {
    param_6 = param_3;
    if ((bRam00000001137ec650 & 1) == 0) goto LAB_10abf6170;
    goto LAB_10abf5b64;
  }
  lVar13 = 0;
  FUN_10a2421c8();
  plVar14 = *(long **)(lVar13 + 0x228);
  (**(code **)(*plVar14 + 0x68))();
  if ((char)plVar12[4] == '\x05') {
    uStack_738 = 0;
    if ((*(byte *)((long)plVar14 + 0x79) & *(byte *)(*(long *)(param_1[0x137] + 0x20) + 0x318)) == 0
       ) {
      uStack_738 = 0x10;
    }
  }
  else {
    uStack_738 = 0;
  }
  plVar15 = param_1;
  (**(code **)(*param_1 + 0x178))(param_1,plVar12,param_2);
  plVar14 = param_1 + 4;
  FUN_10a01f140(plVar14,param_3);
  lVar6 = plVar14[4];
  lVar7 = plVar14[3];
  lVar8 = plVar14[1];
  lVar9 = *plVar14;
  lVar13 = plVar14[7] - plVar14[6];
  if (lVar13 == 0) {
    uStack_778 = 0;
    uStack_774 = 0;
  }
  else {
    lVar26 = 0;
    lVar20 = 0;
    uVar27 = (param_1[0x2f] - param_1[0x2e] >> 3) * -0xf0f0f0f0f0f0f0f;
    pbVar23 = (byte *)plVar14[6];
    do {
      uVar28 = (ulong)*pbVar23;
      if (uVar27 < uVar28 || uVar27 - uVar28 == 0) goto LAB_10abf6168;
      lVar29 = param_1[0x2e] + uVar28 * 0x88;
      if (*(char *)(lVar29 + 0x40) == '\x03') {
        lVar26 = *(long *)(lVar29 + 0x20);
        lVar20 = *(long *)(lVar29 + 0x30);
      }
      else if (*(char *)(lVar29 + 0x40) == '\x04') {
        lVar20 = 0;
        lVar26 = 0;
        break;
      }
      lVar13 = lVar13 + -1;
      pbVar23 = pbVar23 + 1;
    } while (lVar13 != 0);
    uStack_774 = 0;
    if (lVar26 != 0) {
      uStack_774 = 4;
    }
    uStack_778 = 0;
    if (lVar20 != 0) {
      uStack_778 = 0x10000;
    }
  }
  lVar13 = plVar14[9];
  lVar20 = plVar14[10];
  auStack_6e8[0] = 0;
  puVar2 = (undefined8 *)plVar12[0x1e];
  for (puVar16 = (undefined8 *)plVar12[0x1d]; puVar16 != puVar2; puVar16 = puVar16 + 0xd) {
    plVar14 = (long *)puVar16[6];
    if (plVar14 != (long *)0x0) {
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_460,*puVar16,puVar16[1]);
      }
      else {
        uStack_458 = puVar16[1];
        uStack_460 = *puVar16;
        lStack_450 = puVar16[2];
      }
      lStack_448 = puVar16[3];
      (**(code **)(*plVar14 + 0xd0))();
      uStack_440 = SUB81(plVar14,0);
      FUN_10ac09cc8(auStack_6e8,&uStack_460);
      if (lStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
    }
  }
  if (param_13 != -1) {
    plVar14 = param_1 + 4;
    FUN_10a01f6d4(plVar14,param_13);
    plVar14 = (long *)plVar14[0x3a];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0xd0))();
      func_0x000107c2b074(&uStack_460,&PTR_DAT_110bab0a8);
      uStack_440 = SUB81(plVar14,0);
      FUN_10ac09cc8(auStack_6e8,&uStack_460);
      if (lStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
    }
  }
  plVar14 = param_1;
  FUN_10abf0c94(param_1,plVar12);
  if (((ulong)plVar14 & 1) == 0) {
    if (*(long *)(param_1[0x137] + 0x18) != 0) {
      lVar26 = 0x28;
      goto LAB_10abf5e18;
    }
  }
  else {
    lVar26 = 0x98;
LAB_10abf5e18:
    plVar14 = *(long **)(param_1[0x137] + lVar26);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0xd0))();
      func_0x000107c2b074(&uStack_460,&PTR_DAT_110bab0c0);
      uStack_440 = SUB81(plVar14,0);
      FUN_10ac09cc8(auStack_6e8,&uStack_460);
      if (lStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
    }
  }
  lVar26 = param_1[0x136];
  uVar24 = 0x40;
  if (((uint)(*(long *)(lVar26 + 0x98) != 0) & param_5 >> 1) == 0) {
    uVar24 = 0;
  }
  uVar25 = 0x80;
  if (((uint)(*(long *)(lVar26 + 0xa8) != 0) & param_5 >> 2) == 0) {
    uVar25 = 0;
  }
  uVar3 = param_5 << 5;
  uVar1 = 0;
  if (*(long *)(lVar26 + 0xb8) != 0) {
    uVar1 = uVar3 & 0x100;
  }
  if (*(char *)(param_12 + 0x2a) == '\x02') {
    uStack_784 = (uint)*(byte *)(param_1 + 0x15f);
  }
  else if ((byte)((char)plVar12[4] - 5U) < 4) {
    uStack_784 = *(uint *)(&UNK_10df13380 + (ulong)(byte)((char)plVar12[4] - 5) * 4);
  }
  else {
    uStack_784 = 0;
  }
  uVar22 = 0;
  if (lVar13 != lVar20) {
    uVar22 = 8;
  }
  uVar18 = 2;
  if (param_10._1_1_ != '\x04') {
    uVar18 = 0;
  }
  if (param_13 == -1) {
LAB_10abf5fc0:
    uVar19 = 0x10;
  }
  else {
    plVar14 = param_1 + 4;
    FUN_10a01f6d4(plVar14,param_13);
    uVar27 = (ulong)*(byte *)((long)plVar14 + 0x24);
    if (uVar27 == 0xff) {
      uVar27 = (ulong)*(byte *)((long)plVar14 + 0x23);
      if (uVar27 == 0xff) goto LAB_10abf5fc0;
      uVar28 = (param_1[0x2c] - param_1[0x2b] >> 3) * -0x7063e7063e7063e7;
      if (uVar28 < uVar27 || uVar28 - uVar27 == 0) goto LAB_10abf6168;
      puVar21 = (undefined4 *)(param_1[0x2b] + uVar27 * 0x148 + 0x58);
    }
    else {
      uVar28 = (param_1[0x29] - param_1[0x28] >> 4) * -0x30c30c30c30c30c3;
      if (uVar28 < uVar27 || uVar28 - uVar27 == 0) {
LAB_10abf6168:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10abf616c);
        (*pcVar10)();
      }
      puVar21 = (undefined4 *)(param_1[0x28] + uVar27 * 0x150 + 0x70);
    }
    uVar19 = *puVar21;
  }
  func_0x00010a1f4088(auStack_728,
                      uVar18 | uStack_738 | uStack_778 | uStack_774 | uVar22 |
                      uVar3 & 0x220 | param_5 & 0xc00 | (param_5 >> 6 & 1) << 0xc | uVar3 & 0x6000 |
                      (param_5 >> 7 & 1) << 0xf | uVar24 | uVar25 | uVar1 | uStack_784,param_7,
                      param_8,(undefined1)param_10,(char)plVar12[4],param_9,(int)lVar6 - (int)lVar7,
                      (int)lVar8 - (int)lVar9,0xc,uVar19);
  lVar13 = plVar12[0x2b];
  FUN_10a1e46d4(&uStack_460,param_1 + 0x130,param_11,auStack_728,auStack_6e8,param_12);
  param_1 = (long *)(param_3 & 0xffffffff);
  param_4 = param_4 & 0xffffffff;
  puVar16 = &uStack_460;
  lStack_88 = lVar13;
  plStack_80 = plVar15;
  func_0x00010a1e5184();
  puStack_78 = puVar16;
  FUN_10abf6254(param_2,&uStack_460,param_6,param_1,param_4);
  FUN_10a1902ec(auStack_90,0);
  func_0x00010a19032c(auStack_98,0);
  FUN_10a19036c(auStack_350);
  plVar12 = plStack_430;
  if (plStack_430 != (long *)0x0) {
    plVar14 = plStack_430 + 1;
    do {
      lVar13 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_430 + 0x10))(plStack_430);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (lStack_448 < 0) {
    __ZdlPv(uStack_458);
  }
  FUN_10a19036c(auStack_6e8);
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    param_3 = param_6;
LAB_10abf6170:
    iVar11 = 0x137ec650;
    ___cxa_guard_acquire();
    param_6 = param_3;
    if (iVar11 != 0) {
      func_0x000107c2b07c(&uStack_460,&UNK_10f69abd1);
      FUN_10a0d9f14(0x1137ec688,&uStack_460,1,auStack_6e8);
      if (lStack_450 < 0) {
        __ZdlPv(uStack_460);
      }
      ___cxa_guard_release(0x1137ec650);
    }
LAB_10abf5b64:
    FUN_10a1e4580(&uStack_460);
    puVar16 = (undefined8 *)0x1;
    FUN_10a044920(param_1[0x13b]);
    if (puVar16 == (undefined8 *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *puVar16;
    }
    FUN_10abf6254(param_2,&uStack_460,uVar17,param_6,param_4);
    FUN_10a1902ec(auStack_90,0);
    func_0x00010a19032c(auStack_98,0);
    FUN_10a19036c(auStack_350);
    plVar12 = plStack_430;
    if (plStack_430 != (long *)0x0) {
      plVar14 = plStack_430 + 1;
      do {
        lVar13 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_430 + 0x10))(plStack_430);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (lStack_448 < 0) {
      __ZdlPv(uStack_458);
    }
  }
  return param_2;
}



/* Entry: 10abf6254; end: 10abf63d3;  */

uint FUN_10abf6254(long param_1,long param_2,long param_3,ulong param_4,undefined2 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar7 = *(ulong *)(param_1 + 0x28);
  if (uVar7 < *(ulong *)(param_1 + 0x30)) {
    FUN_10abda510(uVar7,param_2);
    *(long *)(uVar7 + 0x3f0) = param_3;
    *(int *)(uVar7 + 0x3f8) = (int)param_4;
    lVar15 = uVar7 + 0x400;
    *(undefined2 *)(uVar7 + 0x3fc) = param_5;
    goto LAB_10abf639c;
  }
  lVar15 = uVar7 - *(long *)(param_1 + 0x20);
  uVar10 = (lVar15 >> 10) + 1;
  if (uVar10 >> 0x36 == 0) {
    uVar11 = *(ulong *)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
    uVar12 = (long)uVar11 >> 9;
    if (uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x7ffffffffffffbff < uVar11) {
      uVar12 = 0x3fffffffffffff;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar12 >> 0x36 != 0) goto LAB_10abf63d0;
      lVar8 = uVar12 << 10;
      __Znwm();
    }
    lVar15 = lVar8 + lVar15;
    FUN_10abda510(lVar15,param_2);
    *(long *)(lVar15 + 0x3f0) = param_3;
    *(int *)(lVar15 + 0x3f8) = (int)param_4;
    *(undefined2 *)(lVar15 + 0x3fc) = param_5;
    lVar14 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar2 = lVar15 + (lVar14 - lVar3);
    lVar9 = lVar2;
    lVar16 = lVar14;
    if (lVar14 - lVar3 != 0) {
      do {
        FUN_10abda510(lVar9,lVar16);
        uVar13 = *(undefined8 *)(lVar16 + 0x3f0);
        *(undefined8 *)(lVar9 + 0x3f6) = *(undefined8 *)(lVar16 + 0x3f6);
        *(undefined8 *)(lVar9 + 0x3f0) = uVar13;
        lVar16 = lVar16 + 0x400;
        lVar9 = lVar9 + 0x400;
      } while (lVar16 != lVar3);
      do {
        FUN_10a18bb28(lVar14);
        lVar14 = lVar14 + 0x400;
      } while (lVar14 != lVar3);
      lVar14 = *(long *)(param_1 + 0x20);
    }
    lVar15 = lVar15 + 0x400;
    *(long *)(param_1 + 0x20) = lVar2;
    *(long *)(param_1 + 0x28) = lVar15;
    *(ulong *)(param_1 + 0x30) = lVar8 + uVar12 * 0x400;
    if (lVar14 != 0) {
      __ZdlPv(lVar14);
    }
LAB_10abf639c:
    *(long *)(param_1 + 0x28) = lVar15;
    return ((uint)((int)lVar15 - *(int *)(param_1 + 0x20)) >> 10) - 1 & 0xffff;
  }
  FUN_10ac0518c();
LAB_10abf63d0:
  func_0x000109ffded8();
  if (param_3 == 0) {
    return 0;
  }
  cVar4 = *(char *)(param_3 + 0x1c);
  bVar1 = cVar4 != '\x01';
  if (cVar4 == '\x01') {
    cVar5 = *(char *)(param_2 + 0x28);
    if (cVar5 != '\x01') {
LAB_10abf642c:
      if (cVar5 != '\x02') {
        if (cVar4 == '\x03') {
          if ((param_4 & 1) != 0) {
            return 3;
          }
        }
        else if (cVar4 == '\x02') goto LAB_10abf6454;
        goto LAB_10abf6494;
      }
    }
    uVar6 = 1;
  }
  else {
    if (cVar4 == '\x02') {
      bVar1 = false;
LAB_10abf6454:
      if ((*(byte *)(uVar7 + 0xac0) & 1) == 0) {
        uVar10 = uVar7 + 0x20;
        func_0x00010abf64a4(uVar10,*(undefined2 *)(uVar7 + 0x9c0),*(undefined8 *)(param_3 + 0x30),
                            *(undefined8 *)(param_3 + 0x38));
        if ((param_4 & 1) != 0) {
          return 2;
        }
        if ((uVar10 & 1) != 0) {
          return 2;
        }
      }
      if (((uint)param_4 & (uint)bVar1) != 0) {
        return 3;
      }
    }
    else if (cVar4 == '\x03') {
      cVar5 = *(char *)(param_2 + 0x28);
      goto LAB_10abf642c;
    }
LAB_10abf6494:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 10abf63d4; end: 10abf6517;  */

undefined8 FUN_10abf63d4(long param_1,long param_2,long param_3,byte param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  cVar2 = *(char *)(param_3 + 0x1c);
  bVar1 = cVar2 != '\x01';
  if (cVar2 == '\x01') {
    cVar3 = *(char *)(param_2 + 0x28);
    if (cVar3 != '\x01') {
LAB_10abf642c:
      if (cVar3 != '\x02') {
        if (cVar2 == '\x03') {
          param_4 = param_4 & 1;
          goto joined_r0x00010abf6490;
        }
        if (cVar2 == '\x02') goto LAB_10abf6454;
        goto LAB_10abf6494;
      }
    }
    uVar4 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      bVar1 = false;
LAB_10abf6454:
      if ((*(byte *)(param_1 + 0xac0) & 1) == 0) {
        uVar5 = param_1 + 0x20;
        func_0x00010abf64a4(uVar5,*(undefined2 *)(param_1 + 0x9c0),*(undefined8 *)(param_3 + 0x30),
                            *(undefined8 *)(param_3 + 0x38));
        if ((param_4 & 1) != 0) {
          return 2;
        }
        if ((uVar5 & 1) != 0) {
          return 2;
        }
      }
      param_4 = param_4 & bVar1;
joined_r0x00010abf6490:
      if (param_4 != 0) {
        return 3;
      }
    }
    else if (cVar2 == '\x03') {
      cVar3 = *(char *)(param_2 + 0x28);
      goto LAB_10abf642c;
    }
LAB_10abf6494:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10abf6518; end: 10abf67ab;  */

void FUN_10abf6518(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_58 = (undefined8 **)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_70 = (undefined8 **)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  plVar6 = (long *)*param_2;
  while (plVar6 != param_2 + 1) {
    uVar8 = *(undefined4 *)(plVar6 + 8);
    if (1.0 <= *(float *)(plVar6 + 4)) {
      FUN_10aba2318(&ppuStack_80,param_1,0);
      FUN_10ab799ec(uVar8,ppuStack_80,plVar6 + 5);
      plVar2 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      pppuVar4 = (undefined8 ***)&puStack_58;
    }
    else {
      FUN_10aba2318(&ppuStack_80,param_1,1);
      FUN_10ab799ec(uVar8,ppuStack_80,plVar6 + 5);
      plVar2 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      pppuVar4 = &ppuStack_70;
    }
    FUN_10a0b4ec0(pppuVar4,plVar6 + 5);
    plVar2 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10aba2318(&ppuStack_80,param_1,1);
    FUN_10ab79a6c(ppuStack_80,&ppuStack_70);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar5 = *plVar2;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar3) {
          *plVar2 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_10aba2318(&ppuStack_80,param_1,0);
    FUN_10ab79a6c(ppuStack_80,&puStack_58);
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
  }
  ppuStack_80 = &ppuStack_70;
  FUN_10a0426d8(&ppuStack_80);
  ppuStack_70 = &puStack_58;
  FUN_10a0426d8(&ppuStack_70);
  return;
}



/* Entry: 10abf67ac; end: 10abf6d6f;  */

void FUN_10abf67ac(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  ulong *puVar6;
  code *pcVar7;
  bool bVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong *puStack_70;
  long *plStack_68;
  
  FUN_10aba2318(&puStack_70,param_2,param_5);
  if (puStack_70[2] != 0) {
    puVar9 = puStack_70;
    if ((char)puStack_70[6] == '\x01') {
      FUN_10ab79b20();
      plVar3 = (long *)*puVar9;
      plVar4 = (long *)puVar9[1];
      if (plVar4 != (long *)0x0) {
        plVar10 = plVar4 + 1;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar10 = plVar3;
      (**(code **)(*plVar3 + 0x20))();
      plVar11 = plVar3;
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar10);
      lVar12 = *(long *)(param_1 + 0xaa8);
      uVar16 = *(long *)(param_1 + 0xab0) - lVar12;
      lVar25 = ((ulong)plVar10 & 0xffffffff) - uVar16;
      if (uVar16 <= ((ulong)plVar10 & 0xffffffff) && lVar25 != 0) {
        func_0x000107c27d58((long *)(param_1 + 0xaa8),lVar25);
        lVar12 = *(long *)(param_1 + 0xaa8);
      }
      if (plVar11 != (long *)0x0) {
        puVar23 = (ulong *)*puStack_70;
        puVar9 = puStack_70 + 1;
        if (puVar23 != puVar9) {
          lVar25 = 0;
          uVar16 = puStack_70[2];
          uVar15 = (uint)(((ulong)plVar10 & 0xffffffff) / 0x18);
          if ((uint)(((ulong)plVar10 & 0xffffffff) / 0x18) < 2) {
            uVar15 = 1;
          }
          uVar22 = (ulong)uVar15;
          pfVar1 = (float *)(lVar12 + 8);
          puVar2 = (undefined8 *)(lVar12 + 0xc);
          do {
            lVar12 = param_2 + 0x48;
            FUN_10a043614(lVar12,puVar23 + 4);
            lVar12 = **(long **)(lVar12 + 0x10);
            fVar26 = *(float *)(puVar23 + 7);
            uVar15 = (uint)plVar10;
            if ((lVar25 == 0) && (uVar16 == 1)) {
              if ((param_6 & 1) == 0) {
                if (0x17 < uVar15) {
                  pfVar14 = (float *)(lVar12 + 8);
                  pfVar19 = (float *)(plVar11 + 1);
                  uVar20 = uVar22;
                  do {
                    fVar27 = *pfVar14;
                    *(long *)(pfVar19 + -2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar26,
                                  (float)*(undefined8 *)(pfVar14 + -2) * fVar26);
                    *pfVar19 = fVar26 * fVar27;
                    pfVar14 = pfVar14 + 6;
                    uVar20 = uVar20 - 1;
                    pfVar19 = pfVar19 + 6;
                  } while (uVar20 != 0);
                }
              }
              else if (0x17 < uVar15) {
                puVar13 = (undefined8 *)(lVar12 + 0xc);
                puVar17 = (undefined8 *)((long)plVar11 + 0xcU);
                uVar20 = uVar22;
                do {
                  fVar27 = *(float *)((long)puVar13 + -4);
                  *(ulong *)((long)puVar17 + -0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)((long)puVar13 + -0xc) >> 0x20) *
                                fVar26,(float)*(undefined8 *)((long)puVar13 + -0xc) * fVar26);
                  *(float *)((long)puVar17 + -4) = fVar26 * fVar27;
                  fVar27 = *(float *)(puVar13 + 1);
                  *puVar17 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar26,
                                      (float)*puVar13 * fVar26);
                  *(float *)(puVar17 + 1) = fVar26 * fVar27;
                  puVar17 = puVar17 + 3;
                  uVar20 = uVar20 - 1;
                  puVar13 = puVar13 + 3;
                } while (uVar20 != 0);
              }
            }
            else if ((lVar25 == 0) && (1 < uVar16)) {
              if ((param_6 & 1) == 0) {
                if (0x17 < uVar15) {
                  pfVar14 = (float *)(lVar12 + 8);
                  pfVar19 = pfVar1;
                  uVar20 = uVar22;
                  do {
                    fVar27 = *pfVar14;
                    *(ulong *)(pfVar19 + -2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar26,
                                  (float)*(undefined8 *)(pfVar14 + -2) * fVar26);
                    *pfVar19 = fVar26 * fVar27;
                    pfVar14 = pfVar14 + 6;
                    uVar20 = uVar20 - 1;
                    pfVar19 = pfVar19 + 6;
                  } while (uVar20 != 0);
                }
              }
              else if (0x17 < uVar15) {
                puVar13 = (undefined8 *)(lVar12 + 0xc);
                puVar17 = puVar2;
                uVar20 = uVar22;
                do {
                  fVar27 = *(float *)((long)puVar13 + -4);
                  *(ulong *)((long)puVar17 + -0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)((long)puVar13 + -0xc) >> 0x20) *
                                fVar26,(float)*(undefined8 *)((long)puVar13 + -0xc) * fVar26);
                  *(float *)((long)puVar17 + -4) = fVar26 * fVar27;
                  fVar27 = *(float *)(puVar13 + 1);
                  *puVar17 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar26,
                                      (float)*puVar13 * fVar26);
                  *(float *)(puVar17 + 1) = fVar26 * fVar27;
                  puVar17 = puVar17 + 3;
                  uVar20 = uVar20 - 1;
                  puVar13 = puVar13 + 3;
                } while (uVar20 != 0);
              }
            }
            else if ((lVar25 == 0) || (uVar16 <= lVar25 + 1U)) {
              if (lVar25 + 1U == uVar16) {
                if ((param_6 & 1) == 0) {
                  if (0x17 < uVar15) {
                    pfVar14 = (float *)(lVar12 + 8);
                    pfVar19 = pfVar1;
                    pfVar21 = (float *)(plVar11 + 1);
                    uVar20 = uVar22;
                    do {
                      fVar27 = *pfVar14;
                      fVar28 = *pfVar19;
                      *(long *)(pfVar21 + -2) =
                           CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar26 +
                                    (float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20),
                                    (float)*(undefined8 *)(pfVar14 + -2) * fVar26 +
                                    (float)*(undefined8 *)(pfVar19 + -2));
                      *pfVar21 = fVar26 * fVar27 + fVar28;
                      pfVar19 = pfVar19 + 6;
                      pfVar14 = pfVar14 + 6;
                      uVar20 = uVar20 - 1;
                      pfVar21 = pfVar21 + 6;
                    } while (uVar20 != 0);
                  }
                }
                else if (0x17 < uVar15) {
                  puVar13 = (undefined8 *)(lVar12 + 0xc);
                  puVar18 = puVar2;
                  puVar17 = (undefined8 *)((long)plVar11 + 0xcU);
                  uVar20 = uVar22;
                  do {
                    fVar27 = *(float *)((long)puVar13 + -4);
                    fVar28 = *(float *)((long)puVar18 + -4);
                    *(ulong *)((long)puVar17 + -0xc) =
                         CONCAT44((float)((ulong)*(undefined8 *)((long)puVar13 + -0xc) >> 0x20) *
                                  fVar26 + (float)((ulong)*(undefined8 *)((long)puVar18 + -0xc) >>
                                                  0x20),
                                  (float)*(undefined8 *)((long)puVar13 + -0xc) * fVar26 +
                                  (float)*(undefined8 *)((long)puVar18 + -0xc));
                    *(float *)((long)puVar17 + -4) = fVar26 * fVar27 + fVar28;
                    fVar27 = *(float *)(puVar13 + 1);
                    fVar28 = *(float *)(puVar18 + 1);
                    *puVar17 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar26 +
                                        (float)((ulong)*puVar18 >> 0x20),
                                        (float)*puVar13 * fVar26 + (float)*puVar18);
                    *(float *)(puVar17 + 1) = fVar26 * fVar27 + fVar28;
                    puVar17 = puVar17 + 3;
                    uVar20 = uVar20 - 1;
                    puVar13 = puVar13 + 3;
                    puVar18 = puVar18 + 3;
                  } while (uVar20 != 0);
                }
              }
            }
            else if ((param_6 & 1) == 0) {
              if (0x17 < uVar15) {
                pfVar14 = (float *)(lVar12 + 8);
                pfVar19 = pfVar1;
                uVar20 = uVar22;
                do {
                  fVar27 = *pfVar14;
                  *(ulong *)(pfVar19 + -2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar26 +
                                (float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20),
                                (float)*(undefined8 *)(pfVar14 + -2) * fVar26 +
                                (float)*(undefined8 *)(pfVar19 + -2));
                  *pfVar19 = fVar26 * fVar27 + *pfVar19;
                  pfVar14 = pfVar14 + 6;
                  uVar20 = uVar20 - 1;
                  pfVar19 = pfVar19 + 6;
                } while (uVar20 != 0);
              }
            }
            else if (0x17 < uVar15) {
              puVar13 = (undefined8 *)(lVar12 + 0xc);
              puVar17 = puVar2;
              uVar20 = uVar22;
              do {
                fVar27 = *(float *)((long)puVar13 + -4);
                *(ulong *)((long)puVar17 + -0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)((long)puVar13 + -0xc) >> 0x20) * fVar26
                              + (float)((ulong)*(undefined8 *)((long)puVar17 + -0xc) >> 0x20),
                              (float)*(undefined8 *)((long)puVar13 + -0xc) * fVar26 +
                              (float)*(undefined8 *)((long)puVar17 + -0xc));
                *(float *)((long)puVar17 + -4) = fVar26 * fVar27 + *(float *)((long)puVar17 + -4);
                fVar27 = *(float *)(puVar13 + 1);
                *puVar17 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar26 +
                                    (float)((ulong)*puVar17 >> 0x20),
                                    (float)*puVar13 * fVar26 + (float)*puVar17);
                *(float *)(puVar17 + 1) = fVar26 * fVar27 + *(float *)(puVar17 + 1);
                puVar17 = puVar17 + 3;
                uVar20 = uVar20 - 1;
                puVar13 = puVar13 + 3;
              } while (uVar20 != 0);
            }
            puVar6 = (ulong *)puVar23[1];
            puVar24 = puVar23;
            if ((ulong *)puVar23[1] == (ulong *)0x0) {
              do {
                puVar23 = (ulong *)puVar24[2];
                bVar8 = (ulong *)*puVar23 != puVar24;
                puVar24 = puVar23;
              } while (bVar8);
            }
            else {
              do {
                puVar23 = puVar6;
                puVar6 = (ulong *)*puVar23;
              } while ((ulong *)*puVar23 != (ulong *)0x0);
            }
            lVar25 = lVar25 + 1;
          } while (puVar23 != puVar9);
        }
      }
      (**(code **)(*plVar3 + 0x38))(plVar3);
      (**(code **)(*plVar3 + 0x40))(plVar3,0,0,plVar10,1);
      if (plVar4 != (long *)0x0) {
        plVar3 = plVar4 + 1;
        do {
          lVar25 = *plVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      puVar9 = puStack_70;
      if (puStack_70[2] == 0) goto LAB_10abf6ca8;
    }
    FUN_10ab79b20();
    func_0x00010a1759fc(param_3,puVar9);
    uVar16 = (param_3[1] - *param_3 >> 4) - 1;
    if (0xb < uVar16) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10abf6d04);
      (*pcVar7)();
    }
    *(undefined4 *)(param_4 + uVar16 * 4) = 0x3f800000;
  }
LAB_10abf6ca8:
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar25 = *plVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10abf6d70; end: 10abf709f;  */

uint FUN_10abf6d70(long *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  
  iVar5 = param_2[0xe];
  iVar15 = param_3[0xe];
  bVar11 = SBORROW4(iVar5,iVar15);
  bVar12 = iVar5 - iVar15 < 0;
  if (iVar5 != iVar15) {
LAB_10abf7098:
    return (uint)(bVar12 != bVar11);
  }
  iVar5 = param_2[0xf];
  iVar15 = param_3[0xf];
  bVar11 = SBORROW4(iVar5,iVar15);
  bVar12 = iVar5 - iVar15 < 0;
  if (iVar5 != iVar15) goto LAB_10abf7098;
  uVar13 = *(uint *)(*param_1 + 0x18);
  iVar5 = param_2[0xc];
  if ((int)uVar13 < 0xff) {
    iVar15 = param_3[0xc];
  }
  else {
    iVar15 = param_3[0xc];
    if ((iVar5 != 3) != (iVar15 != 3)) {
      return (uint)(iVar5 != 3);
    }
  }
  if ((iVar5 == 4) == (iVar15 != 4)) {
    return (uint)(iVar5 != 4);
  }
  uVar9 = *(ushort *)(param_2 + 0x18);
  bVar12 = (uVar9 & 1) == 0 && *(ushort *)(param_2 + 1) == 0xffff;
  uVar10 = *(ushort *)(param_3 + 0x18);
  if (((uint)(*(ushort *)(param_3 + 1) == 0xffff) & (uVar10 ^ 0xffffffff)) != (uint)bVar12) {
    return (uint)bVar12;
  }
  bVar7 = *(byte *)(param_2 + 0x16);
  bVar8 = *(byte *)(param_3 + 0x16);
  uVar14 = (uint)bVar8;
  if ((int)uVar13 < 0x170) {
    if ((bVar7 & 1) != 0) {
      if (uVar14 == 0) goto LAB_10abf6f34;
      if (param_2[0x11] != param_3[0x11]) {
        fVar17 = (float)param_2[0x17];
        fVar18 = (float)param_3[0x17];
        if (ABS(fVar17 - fVar18) < 1.1920929e-07) {
          bVar12 = (uint)param_3[0x11] <= (uint)param_2[0x11];
          goto LAB_10abf7030;
        }
        goto LAB_10abf7038;
      }
      bVar12 = (uint)param_3[0x12] <= (uint)param_2[0x12];
      if (param_2[0x12] != param_3[0x12]) goto LAB_10abf7030;
      iVar2 = 2;
      if (iVar5 != 0xc) {
        iVar2 = iVar5;
      }
      iVar5 = 2;
      if (iVar15 != 0xc) {
        iVar5 = iVar15;
      }
      bVar11 = SBORROW4(iVar2,iVar5);
      bVar12 = iVar2 - iVar5 < 0;
      if (iVar2 != iVar5) goto LAB_10abf7098;
      goto LAB_10abf701c;
    }
    if ((bVar8 & 1) != 0) {
LAB_10abf6f34:
      fVar17 = (float)param_2[0x17];
      fVar18 = (float)param_3[0x17];
      if (ABS(fVar17 - fVar18) < 1.1920929e-07) {
        return (uint)bVar7;
      }
LAB_10abf7038:
      return (uint)(fVar18 < fVar17);
    }
    uVar14 = uVar9 >> 7 & 1;
    if (uVar14 != (uVar10 & 0x80) >> 7) {
      return uVar14;
    }
    if ((uVar9 >> 8 & 1) != (uVar10 & 0x100) >> 8) {
      bVar12 = (uVar9 & 0x100) == 0;
      goto LAB_10abf6fa4;
    }
    if ((uVar9 >> 7 & 1) == 0) {
      fVar17 = (float)param_2[0x17];
      fVar18 = (float)param_3[0x17];
      if (1.1920929e-07 <= ABS(fVar17 - fVar18)) goto LAB_10abf7038;
    }
    if ((0x159 < (int)uVar13) && (*param_2 != *param_3)) {
      iVar2 = 2;
      if (iVar5 != 0xc) {
        iVar2 = iVar5;
      }
      iVar5 = 2;
      if (iVar15 != 0xc) {
        iVar5 = iVar15;
      }
      bVar11 = SBORROW4(iVar2,iVar5);
      bVar12 = iVar2 - iVar5 < 0;
      if (iVar2 != iVar5) goto LAB_10abf7098;
    }
    if (*param_2 == *param_3) goto LAB_10abf701c;
  }
  else {
    if (((bVar7 & bVar8) != 1) || (param_2[0x11] != param_3[0x11])) {
      uVar16 = (uint)bVar7;
      uVar1 = (uVar16 ^ 1) & (uint)(uVar9 >> 7);
      uVar3 = uVar16;
      if ((uVar9 & 0x100) != 0) {
        uVar3 = 1;
      }
      if (((bVar8 ^ 1) & (uint)(uVar10 >> 7)) != uVar1) {
        return uVar1;
      }
      uVar4 = uVar14;
      if ((uVar10 & 0x100) != 0) {
        uVar4 = 1;
      }
      if (uVar3 == uVar4) {
        fVar17 = (float)param_2[0x17];
        fVar18 = (float)param_3[0x17];
        if (1.1920929e-07 <= ABS(fVar17 - fVar18)) {
          bVar12 = fVar17 != fVar18 && fVar17 >= fVar18;
          if (uVar1 != 0) {
            bVar12 = fVar17 < fVar18;
          }
          return (uint)bVar12;
        }
        if ((bVar7 & bVar8) == 0) {
          if (uVar16 != uVar14) {
            return (uint)bVar7;
          }
          iVar15 = param_2[0x19];
          iVar5 = 2;
          if (iVar15 != 0xc) {
            iVar5 = iVar15;
          }
          iVar6 = param_3[0x19];
          iVar2 = 2;
          if (iVar6 != 0xc) {
            iVar2 = iVar6;
          }
          if (uVar13 < 0x178) {
            iVar6 = iVar2;
            iVar15 = iVar5;
          }
          bVar11 = SBORROW4(iVar15,iVar6);
          bVar12 = iVar15 - iVar6 < 0;
          if (iVar15 != iVar6) goto LAB_10abf7098;
          bVar12 = *(ushort *)(param_3 + 0x1a) <= *(ushort *)(param_2 + 0x1a);
          if (*(ushort *)(param_2 + 0x1a) != *(ushort *)(param_3 + 0x1a)) goto LAB_10abf7030;
          uVar13 = (uint)*(byte *)((long)param_2 + 0x62);
          uVar14 = (uint)*(byte *)((long)param_3 + 0x62);
        }
        else {
          uVar13 = param_2[0x11];
          uVar14 = param_3[0x11];
        }
        bVar12 = uVar14 <= uVar13;
        goto LAB_10abf7030;
      }
      bVar12 = uVar3 == 0;
LAB_10abf6fa4:
      return (uint)bVar12;
    }
    bVar12 = (uint)param_3[0x12] <= (uint)param_2[0x12];
    if (param_2[0x12] != param_3[0x12]) goto LAB_10abf7030;
    iVar2 = 2;
    if (iVar5 != 0xc) {
      iVar2 = iVar5;
    }
    iVar6 = 2;
    if (iVar15 != 0xc) {
      iVar6 = iVar15;
    }
    if (uVar13 < 0x178) {
      iVar15 = iVar6;
      iVar5 = iVar2;
    }
    bVar11 = SBORROW4(iVar5,iVar15);
    bVar12 = iVar5 - iVar15 < 0;
    if (iVar5 != iVar15) goto LAB_10abf7098;
LAB_10abf701c:
    bVar12 = *(byte *)((long)param_3 + 0x62) <= *(byte *)((long)param_2 + 0x62);
    if (*(byte *)((long)param_2 + 0x62) != *(byte *)((long)param_3 + 0x62)) goto LAB_10abf7030;
  }
  bVar12 = *(ushort *)(param_3 + 1) <= *(ushort *)(param_2 + 1);
LAB_10abf7030:
  return (uint)!bVar12;
}



/* Entry: 10abf70a0; end: 10abf741b;  */

undefined8 *
FUN_10abf70a0(undefined8 *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x71] = &PTR_FUN_110c383b8;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  *param_1 = &PTR_DAT_110c553c0;
  FUN_10a1da04c(param_1 + 1,&PTR_PTR_110c54d58,param_2);
  *param_1 = &PTR_FUN_110c54a68;
  param_1[1] = &PTR_DAT_110c54b10;
  param_1[3] = &PTR_FUN_110c54c40;
  param_1[6] = &PTR_DAT_110c54c70;
  param_1[0x71] = &PTR_DAT_110c54d18;
  puVar7 = param_1 + 0x16;
  *puVar7 = &PTR_DAT_110c54cc8;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0x100000000;
  param_1[0x65] = 0x100000004;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  puVar4 = (undefined8 *)0x8;
  __Znwm();
  param_1[0x66] = puVar4;
  *puVar4 = 0;
  param_1[0x68] = puVar4 + 1;
  param_1[0x67] = puVar4 + 1;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0x8000000000000001;
  iRam00000001137ec630 = iRam00000001137ec630 + 1;
  *(int *)(param_1 + 0x6d) = iRam00000001137ec630;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  uVar2 = *(ushort *)((long)param_1 + 0x109);
  *(ushort *)((long)param_1 + 0x109) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  piVar1 = (int *)(param_1 + 0x40);
  puStack_98 = puVar7;
  if (*(int *)(param_1 + 0x40) != param_3) {
    *piVar1 = param_3;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(piVar1);
  }
  if (param_4 == 0) {
    if ((param_2 == 0) || (*(char *)(param_2 + 0x1150) != '\x01')) {
      uVar5 = 1;
    }
    else {
      param_4 = 4;
      if (*(char *)(param_2 + 0xff8) != '\x02') {
        param_4 = 1;
      }
      if (*(char *)(param_2 + 0xff8) != '\x01') goto LAB_10abf7258;
      uVar5 = 2;
    }
    *(undefined1 *)(param_1 + 0x41) = uVar5;
LAB_10abf72b8:
    uVar6 = 1;
  }
  else {
LAB_10abf7258:
    *(char *)(param_1 + 0x41) = (char)param_4;
    if (param_4 != 4) goto LAB_10abf72b8;
    if (*piVar1 == 0) {
      *piVar1 = 1;
      func_0x00010a1bd170(auStack_b0);
      FUN_10a1fd58c(piVar1);
      uVar6 = 1;
      if (*(char *)(param_1 + 0x41) == '\x04') {
        uVar6 = 2;
      }
    }
    else {
      if (*piVar1 != 1) goto LAB_10abf7350;
      uVar6 = 2;
    }
  }
  *(undefined4 *)((long)param_1 + 0x32c) = uVar6;
  param_1[0x50] = param_5;
  param_1[0x51] = param_6;
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10abf7350:
  FUN_10a00946c(&UNK_10f69abdd);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf7360);
  (*pcVar3)();
}



/* Entry: 10abf741c; end: 10abf75a7;  */

undefined8 * FUN_10abf741c(undefined8 *param_1)

{
  undefined8 *puStack_38;
  
  param_1[1] = &PTR_DAT_110c54b10;
  *param_1 = &PTR_FUN_110c54a68;
  param_1[3] = &PTR_FUN_110c54c40;
  param_1[6] = &PTR_DAT_110c54c70;
  param_1[0x71] = &PTR_DAT_110c54d18;
  param_1[0x16] = &PTR_DAT_110c54cc8;
  if (param_1[0x6e] != 0) {
    param_1[0x6f] = param_1[0x6e];
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
  puStack_38 = param_1 + 0x60;
  FUN_10a18ba48(&puStack_38);
  puStack_38 = param_1 + 0x5d;
  FUN_10a18ba48(&puStack_38);
  puStack_38 = param_1 + 0x5a;
  FUN_10a18ba48(&puStack_38);
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x55);
  func_0x00010a0523dc(param_1 + 0x52);
  param_1[1] = &PTR_FUN_110c55028;
  param_1[3] = &PTR_FUN_110bb3968;
  param_1[6] = &PTR_DAT_110bb3998;
  param_1[0x71] = &PTR_DAT_110c55188;
  param_1[0x16] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4e);
  func_0x00010a042c64(param_1 + 0x49);
  func_0x00010a0523dc(param_1 + 0x46);
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3b);
  }
  param_1[0x16] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x16);
  param_1[1] = &PTR_DAT_110c551d8;
  param_1[3] = &PTR_FUN_110b9f848;
  param_1[6] = &PTR_DAT_110b9f878;
  param_1[0x71] = &PTR_DAT_110c552a8;
  FUN_10a042dcc(param_1 + 0x14);
  FUN_10ac63308(param_1 + 1);
  return param_1;
}



/* Entry: 10abf75a8; end: 10abf75db;  */

undefined8 * FUN_10abf75a8(undefined8 *param_1)

{
  undefined8 *puStack_38;
  
  param_1[1] = &PTR_DAT_110c54b10;
  *param_1 = &PTR_FUN_110c54a68;
  param_1[3] = &PTR_FUN_110c54c40;
  param_1[6] = &PTR_DAT_110c54c70;
  param_1[0x71] = &PTR_DAT_110c54d18;
  param_1[0x16] = &PTR_DAT_110c54cc8;
  if (param_1[0x6e] != 0) {
    param_1[0x6f] = param_1[0x6e];
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
  puStack_38 = param_1 + 0x60;
  FUN_10a18ba48(&puStack_38);
  puStack_38 = param_1 + 0x5d;
  FUN_10a18ba48(&puStack_38);
  puStack_38 = param_1 + 0x5a;
  FUN_10a18ba48(&puStack_38);
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x55);
  func_0x00010a0523dc(param_1 + 0x52);
  param_1[1] = &PTR_FUN_110c55028;
  param_1[3] = &PTR_FUN_110bb3968;
  param_1[6] = &PTR_DAT_110bb3998;
  param_1[0x71] = &PTR_DAT_110c55188;
  param_1[0x16] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4e);
  func_0x00010a042c64(param_1 + 0x49);
  func_0x00010a0523dc(param_1 + 0x46);
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3b);
  }
  param_1[0x16] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x16);
  param_1[1] = &PTR_DAT_110c551d8;
  param_1[3] = &PTR_FUN_110b9f848;
  param_1[6] = &PTR_DAT_110b9f878;
  param_1[0x71] = &PTR_DAT_110c552a8;
  FUN_10a042dcc(param_1 + 0x14);
  FUN_10ac63308(param_1 + 1);
  return param_1;
}



/* Entry: 10abf75dc; end: 10abf764f;  */

void FUN_10abf75dc(void)

{
  FUN_10abf741c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abf7650; end: 10abf767f;  */

void FUN_10abf7650(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10abf741c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10abf7680; end: 10abf77f3;  */

void FUN_10abf7680(long param_1)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  lVar1 = *(long *)(param_1 + 0x290);
  if (lVar1 != *(long *)(param_1 + 0x2c0)) {
    FUN_10a18cbd8(param_1 + 0x290);
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    lVar1 = *(long *)(param_1 + 0x2c0);
  }
  if (*(long *)(param_1 + 0x2a8) != lVar1) {
    FUN_10a18cbd8(param_1 + 0x2a8);
    *(undefined1 *)(param_1 + 0x2b8) = 0;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = uStack_48;
  *(undefined8 *)(param_1 + 0x2d0) = uStack_50;
  *(undefined8 *)(param_1 + 0x2e0) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394((undefined8 *)(param_1 + 0x2e8));
  *(undefined8 *)(param_1 + 0x2f0) = uStack_48;
  *(undefined8 *)(param_1 + 0x2e8) = uStack_50;
  *(undefined8 *)(param_1 + 0x2f8) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = uStack_48;
  *(undefined8 *)(param_1 + 0x300) = uStack_50;
  *(undefined8 *)(param_1 + 0x310) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  return;
}



/* Entry: 10abf77f4; end: 10abf7907;  */

undefined * FUN_10abf77f4(undefined *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_30;
  puVar2 = &stack0xfffffffffffffff0;
  uVar5 = (uint)param_2;
  if (*(uint *)(param_1 + 0x200) == uVar5) {
    return param_1;
  }
  if ((1 < uVar5) && (uVar5 != 3)) {
    puVar3 = &UNK_10f69ac34;
    FUN_10a00946c();
    iVar6 = (int)param_2;
    if (*(int *)(puVar3 + 0x328) == iVar6) {
      return puVar3;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(puVar3 + 0x98) + 0x100) + 0x260);
    puStack_60 = &UNK_10f653c20;
    uStack_58 = 0x21;
    if (lVar7 == 0) {
      FUN_10a0edfc4(&puStack_60);
    }
    else {
      plVar4 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar4 + 0x50))();
      FUN_10a173a60(param_2,plVar4);
      if ((param_2 & 1) != 0) {
        *(int *)(puVar3 + 0x328) = iVar6;
        unaff_x30 = 0x10abf7868;
        goto FUN_10abf7680;
      }
    }
    puVar3 = &UNK_10f69ac77;
    FUN_10a00946c();
    return (undefined *)(ulong)*(uint *)(puVar3 + 0x328);
  }
  *(uint *)(param_1 + 0x200) = uVar5;
  func_0x00010a1bd170(auStack_28);
  FUN_10a1fd58c(param_1 + 0x200);
  puVar3 = param_1;
  param_1 = unaff_x19;
  puVar2 = unaff_x29;
  puVar1 = (undefined1 *)register0x00000008;
FUN_10abf7680:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar2;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  lVar7 = *(long *)(puVar3 + 0x290);
  if (lVar7 != *(long *)(puVar3 + 0x2c0)) {
    FUN_10a18cbd8(puVar3 + 0x290);
    puVar3[0x2a0] = 0;
    lVar7 = *(long *)(puVar3 + 0x2c0);
  }
  if (*(long *)(puVar3 + 0x2a8) != lVar7) {
    FUN_10a18cbd8(puVar3 + 0x2a8);
    puVar3[0x2b8] = 0;
  }
  lVar7 = *(long *)(puVar3 + 0x338);
  lVar8 = *(long *)(puVar3 + 0x330);
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  FUN_10ac052f0(puVar1 + -0x50,lVar7 - lVar8 >> 3,puVar1 + -0x60);
  FUN_10ac05394(puVar3 + 0x2d0);
  uVar9 = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar3 + 0x2d8) = *(undefined8 *)(puVar1 + -0x48);
  *(undefined8 *)(puVar3 + 0x2d0) = uVar9;
  *(undefined8 *)(puVar3 + 0x2e0) = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined8 *)(puVar1 + -0x40) = 0;
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
  FUN_10a18ba48(puVar1 + -0x38);
  lVar7 = *(long *)(puVar3 + 0x330);
  lVar8 = *(long *)(puVar3 + 0x338);
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  FUN_10ac052f0(puVar1 + -0x50,lVar8 - lVar7 >> 3,puVar1 + -0x60);
  FUN_10ac05394(puVar3 + 0x2e8);
  uVar9 = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar3 + 0x2f0) = *(undefined8 *)(puVar1 + -0x48);
  *(undefined8 *)(puVar3 + 0x2e8) = uVar9;
  *(undefined8 *)(puVar3 + 0x2f8) = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined8 *)(puVar1 + -0x40) = 0;
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
  FUN_10a18ba48(puVar1 + -0x38);
  lVar7 = *(long *)(puVar3 + 0x330);
  lVar8 = *(long *)(puVar3 + 0x338);
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  FUN_10ac052f0(puVar1 + -0x50,lVar8 - lVar7 >> 3,puVar1 + -0x60);
  FUN_10ac05394(puVar3 + 0x300);
  uVar9 = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar3 + 0x308) = *(undefined8 *)(puVar1 + -0x48);
  *(undefined8 *)(puVar3 + 0x300) = uVar9;
  *(undefined8 *)(puVar3 + 0x310) = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined8 *)(puVar1 + -0x40) = 0;
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x50;
  puVar2 = puVar1 + -0x38;
  FUN_10a18ba48(puVar2);
  return puVar2;
}



/* Entry: 10abf7908; end: 10abf790f;  */

undefined4 FUN_10abf7908(long param_1)

{
  return *(undefined4 *)(param_1 + 0x328);
}



/* Entry: 10abf7910; end: 10abf7a5f;  */

void FUN_10abf7910(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iStack_38;
  int iStack_34;
  
  piVar9 = *(int **)(param_1 + 0x330);
  if ((piVar9 == *(int **)(param_1 + 0x338)) ||
     ((param_3 == (ulong)((long)*(int **)(param_1 + 0x338) - (long)piVar9) < 9 ||
      *param_2 != *piVar9) || param_2[1] != piVar9[1])) {
    *(int **)(param_1 + 0x338) = piVar9;
    if (param_3 == 0) {
      if (piVar9 < *(int **)(param_1 + 0x340)) {
        piVar10 = piVar9 + 2;
        *(undefined8 *)piVar9 = *(undefined8 *)param_2;
      }
      else {
        uVar4 = (long)*(int **)(param_1 + 0x340) - (long)piVar9;
        uVar5 = (long)uVar4 >> 2;
        if (uVar5 < 2) {
          uVar5 = 1;
        }
        if (0x7ffffffffffffff7 < uVar4) {
          uVar5 = 0x1fffffffffffffff;
        }
        puVar2 = (undefined8 *)(param_1 + 0x330);
        FUN_10a7a5734();
        piVar10 = (int *)(puVar2 + 1);
        *puVar2 = *(undefined8 *)param_2;
        lVar7 = (long)puVar2 - (*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330));
        _memcpy(lVar7);
        lVar3 = *(long *)(param_1 + 0x330);
        *(long *)(param_1 + 0x330) = lVar7;
        *(int **)(param_1 + 0x338) = piVar10;
        *(undefined8 **)(param_1 + 0x340) = puVar2 + uVar5;
        if (lVar3 != 0) {
          __ZdlPv();
        }
      }
      *(int **)(param_1 + 0x338) = piVar10;
    }
    else {
      iVar8 = *param_2;
      iVar6 = param_2[1];
      if (1 < iVar8 || 1 < iVar6) {
        do {
          iStack_38 = iVar8;
          iStack_34 = iVar6;
          FUN_10a7a565c(param_1 + 0x330,&iStack_38);
          iVar8 = iVar8 >> 1;
          iVar1 = iVar6 >> 1;
          iVar6 = iVar1;
          if (iVar1 < 2) {
            iVar6 = 1;
          }
        } while ((1 < iVar8) || (iVar8 = 1, 1 < iVar1));
      }
      iStack_38 = iVar8;
      iStack_34 = iVar6;
      FUN_10a7a565c(param_1 + 0x330,&iStack_38);
    }
    FUN_10abf7680(param_1);
  }
  return;
}



/* Entry: 10abf7a60; end: 10abf7a77;  */

void FUN_10abf7a60(long param_1,int param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  if (*(int *)(param_1 + 0x360) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x360) = param_2;
  lVar1 = *(long *)(param_1 + 0x290);
  if (lVar1 != *(long *)(param_1 + 0x2c0)) {
    FUN_10a18cbd8(param_1 + 0x290);
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    lVar1 = *(long *)(param_1 + 0x2c0);
  }
  if (*(long *)(param_1 + 0x2a8) != lVar1) {
    FUN_10a18cbd8(param_1 + 0x2a8);
    *(undefined1 *)(param_1 + 0x2b8) = 0;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = uStack_48;
  *(undefined8 *)(param_1 + 0x2d0) = uStack_50;
  *(undefined8 *)(param_1 + 0x2e0) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394((undefined8 *)(param_1 + 0x2e8));
  *(undefined8 *)(param_1 + 0x2f0) = uStack_48;
  *(undefined8 *)(param_1 + 0x2e8) = uStack_50;
  *(undefined8 *)(param_1 + 0x2f8) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10ac052f0(&uStack_50,*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x330) >> 3,&uStack_60);
  FUN_10ac05394(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = uStack_48;
  *(undefined8 *)(param_1 + 0x300) = uStack_50;
  *(undefined8 *)(param_1 + 0x310) = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_38 = &uStack_50;
  FUN_10a18ba48(&puStack_38);
  return;
}



/* Entry: 10abf7a78; end: 10abf7bbf;  */

long * FUN_10abf7a78(long *param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar10 = param_2[2];
  iVar14 = param_2[3];
  iVar11 = *param_2;
  iVar15 = param_2[1];
  if ((iVar11 < iVar10 && iVar14 != iVar15) && (iVar10 <= iVar11 || iVar15 <= iVar14)) {
    piVar8 = (int *)param_1[0x69];
    if (((piVar8 == (int *)param_1[0x6a]) || (iVar11 != *piVar8 || iVar15 != piVar8[1])) ||
       ((param_3 == (ulong)(param_1[0x6a] - (long)piVar8) < 0x11 || iVar10 != piVar8[2]) ||
        iVar14 != piVar8[3])) {
      param_1[0x6a] = (long)piVar8;
      if (param_3 == 0) {
        plVar6 = param_1 + 0x69;
        puVar13 = (undefined8 *)param_1[0x6a];
        if (puVar13 < (undefined8 *)param_1[0x6b]) {
          uVar16 = *(undefined8 *)param_2;
          puVar13[1] = *(undefined8 *)(param_2 + 2);
          *puVar13 = uVar16;
          puVar13 = puVar13 + 2;
          plVar5 = plVar6;
        }
        else {
          lVar12 = (long)puVar13 - *plVar6;
          uVar1 = (lVar12 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a7a2e00();
            return plVar6 + 0x52;
          }
          uVar7 = param_1[0x6b] - *plVar6;
          uVar9 = (long)uVar7 >> 3;
          if (uVar9 <= uVar1) {
            uVar9 = uVar1;
          }
          if (0x7fffffffffffffef < uVar7) {
            uVar9 = 0xfffffffffffffff;
          }
          plVar4 = plVar6;
          FUN_10a7a2e14();
          puVar2 = (undefined8 *)((long)plVar4 + lVar12);
          uVar16 = *(undefined8 *)param_2;
          puVar2[1] = *(undefined8 *)(param_2 + 2);
          *puVar2 = uVar16;
          puVar13 = puVar2 + 2;
          lVar12 = (long)puVar2 - (param_1[0x6a] - *plVar6);
          _memcpy(lVar12);
          plVar5 = (long *)*plVar6;
          *plVar6 = lVar12;
          param_1[0x6a] = (long)puVar13;
          param_1[0x6b] = (long)(plVar4 + uVar9 * 2);
          if (plVar5 != (long *)0x0) {
            __ZdlPv();
          }
        }
        param_1[0x6a] = (long)puVar13;
        return plVar5;
      }
      iVar10 = *param_2;
      iVar11 = param_2[1];
      iVar14 = param_2[2] - iVar10;
      iVar15 = param_2[3] - iVar11;
      if (1 < iVar14 || 1 < iVar15) {
        do {
          uStack_50 = CONCAT44(iVar11,iVar10);
          uStack_48 = CONCAT44(iVar15 + iVar11,iVar14 + iVar10);
          FUN_10a774be0(param_1 + 0x69,&uStack_50);
          iVar10 = iVar10 >> 1;
          iVar11 = iVar11 >> 1;
          iVar14 = iVar14 >> 1;
          iVar3 = iVar15 >> 1;
          iVar15 = iVar3;
          if (iVar3 < 2) {
            iVar15 = 1;
          }
        } while ((1 < iVar14) || (iVar14 = 1, 1 < iVar3));
      }
      uStack_50 = CONCAT44(iVar11,iVar10);
      uStack_48 = CONCAT44(iVar11 + iVar15,iVar10 + iVar14);
      param_1 = param_1 + 0x69;
      FUN_10a774be0(param_1,&uStack_50);
    }
  }
  else {
    param_1[0x6a] = param_1[0x69];
  }
  return param_1;
}



/* Entry: 10abf7bc0; end: 10abf7c87;  */

long * FUN_10abf7bc0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar9;
    puVar8 = puVar8 + 2;
    plVar4 = param_1;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a7a2e00();
      return param_1 + 0x52;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a7a2e14();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar8 = puVar2 + 2;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar6 * 2);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return plVar4;
}



/* Entry: 10abf7c88; end: 10abf7c8f;  */

long FUN_10abf7c88(long param_1)

{
  return param_1 + 0x290;
}



/* Entry: 10abf7c90; end: 10abf7e13;  */

void FUN_10abf7c90(undefined8 *param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_78 [8];
  long *plStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_40;
  
  FUN_10abf8210(&iStack_68,param_2,*(undefined4 *)(param_2 + 0x328),0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = *(long *)(param_2 + 0x98);
  FUN_10a2421c8();
  if (((((param_3 != 0) && ((*(byte *)(param_2 + 0x36c) & 1) != 0)) && (iStack_58 == 4)) &&
      ((*(long *)(param_2 + 0x338) - *(long *)(param_2 + 0x330) == 8 && (iStack_5c == 1)))) &&
     (1 < iStack_68 - 3U)) {
    lVar4 = *(long *)(param_2 + 0x98);
    FUN_10a2421c8();
    FUN_10a244d68();
    uVar6 = *(ulong *)(lVar4 + 0x830);
    if ((iStack_64 == (int)uVar6) && (iStack_60 == (int)(uVar6 >> 0x20))) {
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_10a048e7c(auStack_78,*(undefined8 *)(lVar3 + 0x1e0),0,uVar6,uVar6 >> 0x20,1,4,uStack_50,
                    uStack_48,uStack_40);
      FUN_10a00e5c4(param_1,auStack_78);
      if (plStack_70 == (long *)0x0) {
        return;
      }
      plVar5 = plStack_70 + 1;
      do {
        lVar3 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 != 0) {
        return;
      }
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      return;
    }
  }
  plVar5 = *(long **)(lVar3 + 0x228);
  (**(code **)(*plVar5 + 0x20))(plVar5,&iStack_68);
  FUN_10a099d88(param_1,plVar5);
  return;
}



/* Entry: 10abf7e14; end: 10abf7f53;  */

long FUN_10abf7e14(long param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar3 = *(long *)(param_1 + 0x2d8);
  lVar4 = *(long *)(param_1 + 0x2d0);
  func_0x000107c2b054(auStack_68,&UNK_10f69acbe);
  if ((uint)((ulong)(lVar3 - lVar4) >> 4) <= (uint)param_2) {
    FUN_10a109200(auStack_68);
    goto LAB_10abf7f34;
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  uVar5 = param_2 & 0xffffffff;
  if ((ulong)(*(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 4) <= uVar5)
  goto LAB_10abf7f34;
  plVar2 = *(long **)(*(long *)(param_1 + 0x2d0) + uVar5 * 0x10);
  if (plVar2 == (long *)0x0) {
LAB_10abf7ea4:
    lVar3 = *(long *)(param_1 + 0x98);
    FUN_10a2421c8();
    plVar2 = *(long **)(lVar3 + 0x228);
    FUN_10abf7f54(auStack_68,param_1,*(undefined4 *)(param_1 + 0x328),param_2,
                  *(undefined4 *)(param_1 + 0x324));
    lVar3 = *(long *)(param_1 + 0x2d0);
    if ((ulong)(*(long *)(param_1 + 0x2d8) - lVar3 >> 4) <= uVar5) goto LAB_10abf7f34;
    (**(code **)(*plVar2 + 0x20))(plVar2,auStack_68);
    FUN_10a099d88(lVar3 + uVar5 * 0x10,plVar2);
  }
  else {
    (**(code **)(*plVar2 + 0x60))();
    if ((int)plVar2 != *(int *)(param_1 + 0x324)) goto LAB_10abf7ea4;
  }
  if (uVar5 < (ulong)(*(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 4)) {
    return *(long *)(param_1 + 0x2d0) + uVar5 * 0x10;
  }
LAB_10abf7f34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abf7f38);
  (*pcVar1)();
}



/* Entry: 10abf7f54; end: 10abf80a3;  */

long * FUN_10abf7f54(undefined4 *param_1,ulong param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  uint uStack_c0;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_70;
  if (*(uint *)(param_2 + 0x32c) < 2) {
    uVar8 = 1;
  }
  else if ((uint)param_5 < 2) {
    uVar8 = 0x41;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x98) + 0x100) + 0x260);
    puStack_70 = &UNK_10f653c20;
    uStack_68 = 0x21;
    if (lVar9 == 0) {
      uVar7 = param_2;
      FUN_10a0edfc4();
      pcStack_78 = FUN_10abf80a4;
      lVar9 = *(long *)((long)ppuVar5 + 0x2f0);
      lVar10 = *(long *)((long)ppuVar5 + 0x2e8);
      uStack_a0 = param_2;
      uStack_98 = param_3;
      uStack_90 = param_5;
      puStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x000107c2b054(auStack_d8,&UNK_10f69acbe);
      if ((uint)uVar7 < (uint)((ulong)(lVar9 - lVar10) >> 4)) {
        if (cStack_c1 < '\0') {
          __ZdlPv(auStack_d8[0]);
        }
        lVar9 = *(long *)((long)ppuVar5 + 0x2e8);
        uVar11 = *(long *)((long)ppuVar5 + 0x2f0) - lVar9 >> 4;
        if ((uVar7 & 0xffffffff) < uVar11) {
          uVar12 = uVar7 & 0xffffffff;
          if (*(long *)(lVar9 + uVar12 * 0x10) == 0) {
            lVar9 = *(long *)((long)ppuVar5 + 0x98);
            FUN_10a2421c8();
            plVar4 = *(long **)(lVar9 + 0x228);
            FUN_10abf8210(auStack_d8,ppuVar5,0x2e,uVar7);
            if ((((*(char *)((long)ppuVar5 + 0x31b) == '\x01') &&
                 (plVar6 = plVar4, (**(code **)(*plVar4 + 0x50))(), plVar6 != (long *)0x0)) &&
                (*(int *)((long)plVar6 + 0x734) == 3)) &&
               ((*(byte *)((long)plVar6 + 0x4c) & 1) != 0)) {
              uStack_c0 = uStack_c0 | 0x400;
            }
            lVar9 = *(long *)((long)ppuVar5 + 0x2e8);
            if ((ulong)(*(long *)((long)ppuVar5 + 0x2f0) - lVar9 >> 4) <= uVar12)
            goto LAB_10abf81f0;
            (**(code **)(*plVar4 + 0x20))(plVar4,auStack_d8);
            FUN_10a099d88(lVar9 + uVar12 * 0x10,plVar4);
            lVar9 = *(long *)((long)ppuVar5 + 0x2e8);
            uVar11 = *(long *)((long)ppuVar5 + 0x2f0) - lVar9 >> 4;
          }
          if (uVar12 < uVar11) {
            return (long *)(lVar9 + uVar12 * 0x10);
          }
        }
      }
      else {
        FUN_10a109200(auStack_d8);
      }
LAB_10abf81f0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf81f4);
      (*pcVar3)();
    }
    plVar4 = *(long **)(lVar9 + 0x228);
    (**(code **)(*plVar4 + 0x50))();
    if ((plVar4 == (long *)0x0) || ((*(byte *)((long)plVar4 + 0x8c) & 1) != 0)) {
      uVar8 = 0xc1;
    }
    else {
      uVar8 = 0x441;
      if ((*(int *)((long)plVar4 + 0x734) == 3 & *(byte *)((long)plVar4 + 0x4c)) == 0) {
        uVar8 = 0x41;
      }
    }
  }
  if ((ulong)(*(long *)(param_2 + 0x338) - *(long *)(param_2 + 0x330) >> 3) <=
      (param_4 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf809c);
    (*pcVar3)();
  }
  plVar4 = (long *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x200);
  uVar1 = *(uint *)(param_2 + 0x360);
  if (*(uint *)(param_2 + 0x360) <= *(uint *)(param_2 + 0x32c)) {
    uVar1 = *(uint *)(param_2 + 0x32c);
  }
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x330) + (param_4 & 0xffffffff) * 8);
  (**(code **)(*plVar4 + 0xd0))();
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 1) = uVar13;
  param_1[3] = uVar1;
  param_1[4] = (int)param_3;
  param_1[5] = 0;
  param_1[6] = uVar8;
  param_1[7] = (uint)param_5;
  *(undefined8 *)(param_1 + 8) = 1;
  *(char *)(param_1 + 10) = (char)plVar4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return plVar4;
}



/* Entry: 10abf80a4; end: 10abf820f;  */

long FUN_10abf80a4(long param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 auStack_68 [2];
  char cStack_51;
  uint uStack_50;
  
  lVar3 = *(long *)(param_1 + 0x2f0);
  lVar4 = *(long *)(param_1 + 0x2e8);
  func_0x000107c2b054(auStack_68,&UNK_10f69acbe);
  if ((uint)param_2 < (uint)((ulong)(lVar3 - lVar4) >> 4)) {
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    lVar3 = *(long *)(param_1 + 0x2e8);
    uVar5 = *(long *)(param_1 + 0x2f0) - lVar3 >> 4;
    if ((param_2 & 0xffffffff) < uVar5) {
      uVar7 = param_2 & 0xffffffff;
      if (*(long *)(lVar3 + uVar7 * 0x10) == 0) {
        lVar3 = *(long *)(param_1 + 0x98);
        FUN_10a2421c8();
        plVar6 = *(long **)(lVar3 + 0x228);
        FUN_10abf8210(auStack_68,param_1,0x2e,param_2);
        if ((((*(char *)(param_1 + 0x31b) == '\x01') &&
             (plVar2 = plVar6, (**(code **)(*plVar6 + 0x50))(), plVar2 != (long *)0x0)) &&
            (*(int *)((long)plVar2 + 0x734) == 3)) && ((*(byte *)((long)plVar2 + 0x4c) & 1) != 0)) {
          uStack_50 = uStack_50 | 0x400;
        }
        lVar3 = *(long *)(param_1 + 0x2e8);
        if ((ulong)(*(long *)(param_1 + 0x2f0) - lVar3 >> 4) <= uVar7) goto LAB_10abf81f0;
        (**(code **)(*plVar6 + 0x20))(plVar6,auStack_68);
        FUN_10a099d88(lVar3 + uVar7 * 0x10,plVar6);
        lVar3 = *(long *)(param_1 + 0x2e8);
        uVar5 = *(long *)(param_1 + 0x2f0) - lVar3 >> 4;
      }
      if (uVar7 < uVar5) {
        return lVar3 + uVar7 * 0x10;
      }
    }
  }
  else {
    FUN_10a109200(auStack_68);
  }
LAB_10abf81f0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abf81f4);
  (*pcVar1)();
}



/* Entry: 10abf8210; end: 10abf83a7;  */

long * FUN_10abf8210(int *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  uint uStack_d0;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_80;
  uVar7 = param_2;
  FUN_10a0962c8(param_3);
  uVar2 = *(uint *)(param_2 + 0x32c);
  lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x98) + 0x100) + 0x260);
  puStack_80 = &UNK_10f653c20;
  uStack_78 = 0x21;
  if (lVar9 != 0) {
    plVar4 = *(long **)(lVar9 + 0x228);
    (**(code **)(*plVar4 + 0x50))();
    uVar12 = param_3;
    FUN_10a173ba4(param_3,plVar4);
    if ((int)uVar12 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
      if (8 < (ulong)(*(long *)(param_2 + 0x338) - *(long *)(param_2 + 0x330))) {
        iVar8 = 3;
      }
    }
    iVar14 = *(int *)(param_2 + 0x200);
    uVar11 = *(uint *)(param_2 + 0x32c);
    ppuVar5 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
    if (0x56 < (uint)param_3) {
      ppuVar5 = &PTR_DAT_110ae4700;
    }
    uVar13 = uVar11;
    if ((*(byte *)((long)ppuVar5 + 0x14) & 3) == 0 || iVar14 != 2) {
      if ((iVar14 - 1U < 2) &&
         (uVar13 = *(uint *)(param_2 + 0x360), *(uint *)(param_2 + 0x360) <= uVar11)) {
        uVar13 = uVar11;
      }
    }
    else {
      iVar14 = 0;
      if (uVar11 < 2) {
        uVar13 = 1;
      }
    }
    if ((param_4 & 0xffffffff) <
        (ulong)(*(long *)(param_2 + 0x338) - *(long *)(param_2 + 0x330) >> 3)) {
      uVar11 = 3;
      if ((uVar7 & 0x10000000000) == 0) {
        uVar11 = 1;
      }
      uVar1 = uVar11 | 0x40;
      if (uVar2 < 2) {
        uVar1 = uVar11;
      }
      plVar4 = (long *)(param_2 + 8);
      uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x330) + (param_4 & 0xffffffff) * 8);
      (**(code **)(*plVar4 + 0xd0))();
      *param_1 = iVar14;
      *(undefined8 *)(param_1 + 1) = uVar15;
      param_1[3] = uVar13;
      param_1[4] = (uint)param_3;
      param_1[5] = 0;
      param_1[6] = uVar1;
      param_1[7] = 1;
      param_1[8] = iVar8;
      param_1[9] = 0;
      *(char *)(param_1 + 10) = (char)plVar4;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      return plVar4;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf83a0);
    (*pcVar3)();
  }
  FUN_10a0edfc4();
  lVar9 = *(long *)((long)ppuVar5 + 0x308);
  lVar10 = *(long *)((long)ppuVar5 + 0x300);
  func_0x000107c2b054(auStack_e8,&UNK_10f69acbe);
  if ((uint)uVar7 < (uint)((ulong)(lVar9 - lVar10) >> 4)) {
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    uVar12 = uVar7 & 0xffffffff;
    if (uVar12 < (ulong)(*(long *)((long)ppuVar5 + 0x308) - *(long *)((long)ppuVar5 + 0x300) >> 4))
    {
      plVar4 = *(long **)(*(long *)((long)ppuVar5 + 0x300) + uVar12 * 0x10);
      if ((plVar4 == (long *)0x0) ||
         ((**(code **)(*plVar4 + 0x60))(), (int)plVar4 != *(int *)((long)ppuVar5 + 0x324))) {
        lVar9 = *(long *)((long)ppuVar5 + 0x98);
        FUN_10a2421c8();
        plVar4 = *(long **)(lVar9 + 0x228);
        FUN_10abf7f54(auStack_e8,ppuVar5,0x2e,uVar7,*(undefined4 *)((long)ppuVar5 + 0x324));
        if ((*(char *)((long)ppuVar5 + 0x31b) == '\x01') &&
           (((plVar6 = plVar4, (**(code **)(*plVar4 + 0x50))(), plVar6 != (long *)0x0 &&
             (*(int *)((long)plVar6 + 0x734) == 3)) && ((*(byte *)((long)plVar6 + 0x4c) & 1) != 0)))
           ) {
          uStack_d0 = uStack_d0 | 0x400;
        }
        lVar9 = *(long *)((long)ppuVar5 + 0x300);
        if ((ulong)(*(long *)((long)ppuVar5 + 0x308) - lVar9 >> 4) <= uVar12) goto LAB_10abf8508;
        (**(code **)(*plVar4 + 0x20))(plVar4,auStack_e8);
        FUN_10a099d88(lVar9 + uVar12 * 0x10,plVar4);
      }
      if (uVar12 < (ulong)(*(long *)((long)ppuVar5 + 0x308) - *(long *)((long)ppuVar5 + 0x300) >> 4)
         ) {
        return (long *)(*(long *)((long)ppuVar5 + 0x300) + uVar12 * 0x10);
      }
    }
  }
  else {
    FUN_10a109200(auStack_e8);
  }
LAB_10abf8508:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10abf850c);
  (*pcVar3)();
}



/* Entry: 10abf83a8; end: 10abf8527;  */

long FUN_10abf83a8(long param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 auStack_68 [2];
  char cStack_51;
  uint uStack_50;
  
  lVar4 = *(long *)(param_1 + 0x308);
  lVar5 = *(long *)(param_1 + 0x300);
  func_0x000107c2b054(auStack_68,&UNK_10f69acbe);
  if ((uint)((ulong)(lVar4 - lVar5) >> 4) <= (uint)param_2) {
    FUN_10a109200(auStack_68);
    goto LAB_10abf8508;
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  uVar6 = param_2 & 0xffffffff;
  if ((ulong)(*(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x300) >> 4) <= uVar6)
  goto LAB_10abf8508;
  plVar2 = *(long **)(*(long *)(param_1 + 0x300) + uVar6 * 0x10);
  if (plVar2 == (long *)0x0) {
LAB_10abf8438:
    lVar4 = *(long *)(param_1 + 0x98);
    FUN_10a2421c8();
    plVar2 = *(long **)(lVar4 + 0x228);
    FUN_10abf7f54(auStack_68,param_1,0x2e,param_2,*(undefined4 *)(param_1 + 0x324));
    if ((((*(char *)(param_1 + 0x31b) == '\x01') &&
         (plVar3 = plVar2, (**(code **)(*plVar2 + 0x50))(), plVar3 != (long *)0x0)) &&
        (*(int *)((long)plVar3 + 0x734) == 3)) && ((*(byte *)((long)plVar3 + 0x4c) & 1) != 0)) {
      uStack_50 = uStack_50 | 0x400;
    }
    lVar4 = *(long *)(param_1 + 0x300);
    if ((ulong)(*(long *)(param_1 + 0x308) - lVar4 >> 4) <= uVar6) goto LAB_10abf8508;
    (**(code **)(*plVar2 + 0x20))(plVar2,auStack_68);
    FUN_10a099d88(lVar4 + uVar6 * 0x10,plVar2);
  }
  else {
    (**(code **)(*plVar2 + 0x60))();
    if ((int)plVar2 != *(int *)(param_1 + 0x324)) goto LAB_10abf8438;
  }
  if (uVar6 < (ulong)(*(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x300) >> 4)) {
    return *(long *)(param_1 + 0x300) + uVar6 * 0x10;
  }
LAB_10abf8508:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abf850c);
  (*pcVar1)();
}



/* Entry: 10abf8528; end: 10abf854f;  */

undefined4 FUN_10abf8528(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x290) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10abf8550; end: 10abf8693;  */

void FUN_10abf8550(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  long unaff_x21;
  long *plVar8;
  undefined8 *puVar9;
  long *unaff_x22;
  long *plVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = param_2[0x55];
    *(long *)((long)register0x00000008 + -0x48) = param_2[0x52];
    *(long *)((long)register0x00000008 + -0x40) = lVar5;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
    plVar3 = param_1;
    FUN_10a0888e0(param_1,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x38),2);
    plVar10 = (long *)param_2[0x5b];
    for (plVar8 = (long *)param_2[0x5a]; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    unaff_x22 = (long *)param_2[0x5e];
    for (plVar8 = (long *)param_2[0x5d]; plVar8 != unaff_x22; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    plVar10 = (long *)param_2[0x61];
    for (plVar8 = (long *)param_2[0x60]; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x19 = plVar3;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x78) = plVar8;
    *(long **)((long)register0x00000008 + -0x70) = plVar3;
    *(long **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10abf8694;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar2 = (undefined8 *)unaff_x19[1];
    if (puVar2 < (undefined8 *)unaff_x19[2]) break;
    unaff_x21 = (long)puVar2 - *unaff_x19;
    uVar1 = (unaff_x21 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar4 = unaff_x19[2] - *unaff_x19;
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      plVar8 = unaff_x19;
      FUN_10a08899c();
      puVar2 = (undefined8 *)((long)plVar8 + unaff_x21);
      puVar9 = puVar2 + 1;
      *puVar2 = *unaff_x20;
      lVar7 = (long)puVar2 - (unaff_x19[1] - *unaff_x19);
      _memcpy(lVar7);
      lVar5 = *unaff_x19;
      *unaff_x19 = lVar7;
      unaff_x19[1] = (long)puVar9;
      unaff_x19[2] = (long)(plVar8 + uVar6);
      if (lVar5 != 0) {
        __ZdlPv();
      }
LAB_10abf8740:
      unaff_x19[1] = (long)puVar9;
      return;
    }
    unaff_x30 = FUN_10abf8758;
    param_2 = unaff_x19;
    FUN_10a088988();
    param_2 = param_2 + -1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = extraout_x8;
  }
  puVar9 = puVar2 + 1;
  *puVar2 = *unaff_x20;
  goto LAB_10abf8740;
}



/* Entry: 10abf8694; end: 10abf8757;  */

void FUN_10abf8694(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_x8;
  ulong uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  long *plVar7;
  long *unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      puVar9 = puVar2 + 1;
      *puVar2 = *param_2;
LAB_10abf8740:
      param_1[1] = (long)puVar9;
      return;
    }
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar4 = param_1[2] - *param_1;
      uVar5 = (long)uVar4 >> 2;
      if (uVar5 <= uVar1) {
        uVar5 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar5 = 0x1fffffffffffffff;
      }
      plVar7 = param_1;
      FUN_10a08899c();
      puVar2 = (undefined8 *)((long)plVar7 + lVar8);
      puVar9 = puVar2 + 1;
      *puVar2 = *param_2;
      lVar6 = (long)puVar2 - (param_1[1] - *param_1);
      _memcpy(lVar6);
      lVar8 = *param_1;
      *param_1 = lVar6;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)(plVar7 + uVar5);
      if (lVar8 != 0) {
        __ZdlPv();
      }
      goto LAB_10abf8740;
    }
    plVar3 = param_1;
    FUN_10a088988();
    *(long **)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar8;
    *(undefined8 **)((long)register0x00000008 + -0x50) = param_2;
    *(long **)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10abf8758;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar8 = plVar3[0x54];
    *(long *)((long)register0x00000008 + -0x78) = plVar3[0x51];
    *(long *)((long)register0x00000008 + -0x70) = lVar8;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    param_2 = (undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x20 = extraout_x8;
    FUN_10a0888e0(extraout_x8,param_2,(undefined1 *)((long)register0x00000008 + -0x68),2);
    plVar10 = (long *)plVar3[0x5a];
    for (plVar7 = (long *)plVar3[0x59]; plVar7 != plVar10; plVar7 = plVar7 + 2) {
      if (*plVar7 != 0) {
        *(long *)((long)register0x00000008 + -0x78) = *plVar7;
        param_2 = (undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x20 = extraout_x8;
        FUN_10abf8694();
      }
    }
    unaff_x22 = (long *)plVar3[0x5d];
    for (plVar7 = (long *)plVar3[0x5c]; plVar7 != unaff_x22; plVar7 = plVar7 + 2) {
      if (*plVar7 != 0) {
        *(long *)((long)register0x00000008 + -0x78) = *plVar7;
        param_2 = (undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x20 = extraout_x8;
        FUN_10abf8694();
      }
    }
    plVar7 = (long *)plVar3[0x60];
    for (unaff_x21 = (long *)plVar3[0x5f]; unaff_x21 != plVar7; unaff_x21 = unaff_x21 + 2) {
      if (*unaff_x21 != 0) {
        *(long *)((long)register0x00000008 + -0x78) = *unaff_x21;
        param_2 = (undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x20 = extraout_x8;
        FUN_10abf8694();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10abf8694;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = extraout_x8;
  } while( true );
}



/* Entry: 10abf8758; end: 10abf8773;  */

void FUN_10abf8758(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x21;
  long *plVar10;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = param_2[0x54];
    *(long *)((long)register0x00000008 + -0x48) = param_2[0x51];
    *(long *)((long)register0x00000008 + -0x40) = lVar5;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
    plVar3 = param_1;
    FUN_10a0888e0(param_1,unaff_x20,(undefined1 *)((long)register0x00000008 + -0x38),2);
    plVar10 = (long *)param_2[0x5a];
    for (plVar8 = (long *)param_2[0x59]; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    unaff_x22 = (long *)param_2[0x5d];
    for (plVar8 = (long *)param_2[0x5c]; plVar8 != unaff_x22; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    plVar10 = (long *)param_2[0x60];
    for (plVar8 = (long *)param_2[0x5f]; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        *(long *)((long)register0x00000008 + -0x48) = *plVar8;
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x48);
        plVar3 = param_1;
        FUN_10abf8694();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    unaff_x19 = plVar3;
    __Unwind_Resume();
    *(long **)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x78) = plVar8;
    *(long **)((long)register0x00000008 + -0x70) = plVar3;
    *(long **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10abf8694;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar2 = (undefined8 *)unaff_x19[1];
    if (puVar2 < (undefined8 *)unaff_x19[2]) break;
    unaff_x21 = (long)puVar2 - *unaff_x19;
    uVar1 = (unaff_x21 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar4 = unaff_x19[2] - *unaff_x19;
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      plVar8 = unaff_x19;
      FUN_10a08899c();
      puVar2 = (undefined8 *)((long)plVar8 + unaff_x21);
      puVar9 = puVar2 + 1;
      *puVar2 = *unaff_x20;
      lVar7 = (long)puVar2 - (unaff_x19[1] - *unaff_x19);
      _memcpy(lVar7);
      lVar5 = *unaff_x19;
      *unaff_x19 = lVar7;
      unaff_x19[1] = (long)puVar9;
      unaff_x19[2] = (long)(plVar8 + uVar6);
      if (lVar5 != 0) {
        __ZdlPv();
      }
LAB_10abf8740:
      unaff_x19[1] = (long)puVar9;
      return;
    }
    unaff_x30 = FUN_10abf8758;
    param_2 = unaff_x19;
    FUN_10a088988();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = extraout_x8;
  }
  puVar9 = puVar2 + 1;
  *puVar2 = *unaff_x20;
  goto LAB_10abf8740;
}



/* Entry: 10abf8774; end: 10abf87a3;  */

void FUN_10abf8774(long *param_1)

{
  func_0x00010ab9ac98();
  func_0x00010ab9ac98();
  func_0x00010ab9ac98();
  func_0x00010ab9ac98();
                    /* WARNING: Could not recover jumptable at 0x00010abf87ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10abf87a4; end: 10abf87bb;  */

void FUN_10abf87a4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abf87ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10abf87bc; end: 10abf8937;  */

long * FUN_10abf87bc(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  puVar8 = &stack0xfffffffffffffff0;
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x28))();
  ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar6 & 0xffffffff) * 4;
  if (0x56 < (uint)plVar6) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if ((*(byte *)((long)ppuVar1 + 0x14) & 3) == 0) {
    FUN_10a026ab4(param_1 + 0x52,param_2);
    *(undefined1 *)(param_1 + 0x54) = 0;
    lVar7 = param_2[1];
    lVar5 = *param_2;
    if (param_2[1] != 0) {
      plVar6 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)param_1[0x59];
    param_1[0x59] = lVar7;
    param_1[0x58] = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return param_1 + 0x58;
  }
  plVar6 = (long *)&UNK_10f69acf1;
  FUN_10a00946c();
  uVar9 = 0x10abf8830;
  plVar4 = plVar6;
  (**(code **)(*plVar6 + 0x28))();
  ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar4 & 0xffffffff) * 4;
  if (0x56 < (uint)plVar4) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if ((*(byte *)((long)ppuVar1 + 0x14) & 3) == 0) {
    lVar5 = 0x2c0;
  }
  else {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69ad4a,&UNK_10f69ad9b,0x1cc,&UNK_10f69ae27,in_x6,in_x7,param_1
                          ,param_2,puVar8,uVar9);
    }
    lVar5 = 0x230;
  }
  return (long *)((long)plVar6 + lVar5);
}



/* Entry: 10abf8938; end: 10abf89fb;  */

void FUN_10abf8938(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a18ce1c();
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a18ce30();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10abf89fc; end: 10abf8b27;  */

void FUN_10abf89fc(void)

{
  return;
}



/* Entry: 10abf8b28; end: 10abf908f;  */

void FUN_10abf8b28(undefined8 *param_1,long param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *param_1 = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0xffffffffffffffff;
  param_1[0x39] = 0xffffffffffffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xffffffffffffffff;
  param_1[0x3e] = 0xffffffffffffffff;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar11 = 0;
    do {
      plVar2 = (long *)(param_2 + 0x10 + uVar11 * 0x10);
      puVar5 = (undefined8 *)*plVar2;
      FUN_10abf27cc();
      uVar9 = *(undefined8 *)(*plVar2 + 0x280);
      uVar10 = *(undefined8 *)(*plVar2 + 0x288);
      plStack_c8 = (long *)0x0;
      uStack_d0 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xffffffffffffffff;
      uStack_b0 = 0xffffffffffffffff;
      uStack_a8 = 0;
      plStack_a0 = (long *)0x0;
      uStack_98 = 0;
      uStack_90 = 0xffffffffffffffff;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0xffffffffffffffff;
      uStack_70 = 0;
      FUN_10a061728(param_1,&uStack_d0);
      plVar8 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar1 = plStack_a0 + 1;
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
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
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
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (param_3 == 0) {
        plStack_c8 = (long *)puVar5[1];
        uStack_d0 = *puVar5;
        if (puVar5[1] != 0) {
          plVar2 = (long *)(puVar5[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_c0 = CONCAT44(param_6,(int)param_5);
        puVar5 = param_1 + uVar11 * 0xd + 1;
        uStack_b8 = uVar9;
        uStack_b0 = uVar10;
        FUN_10a00e5c4(puVar5,&uStack_d0);
        puVar5[3] = uStack_b8;
        puVar5[2] = uStack_c0;
        puVar5[4] = uStack_b0;
        if (plStack_c8 != (long *)0x0) {
          plVar2 = plStack_c8 + 1;
          do {
            lVar7 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10abf8df0;
        }
      }
      else {
        puVar6 = (undefined8 *)*plVar2;
        FUN_10abf7e14(puVar6,param_5);
        plStack_c8 = (long *)puVar6[1];
        uStack_d0 = *puVar6;
        if (puVar6[1] != 0) {
          plVar2 = (long *)(puVar6[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_c0 = 0;
        puVar6 = param_1 + uVar11 * 0xd + 1;
        uStack_b8 = 0xffffffffffffffff;
        uStack_b0 = 0xffffffffffffffff;
        FUN_10a00e5c4(puVar6,&uStack_d0);
        plVar2 = plStack_c8;
        puVar6[3] = uStack_b8;
        puVar6[2] = uStack_c0;
        puVar6[4] = uStack_b0;
        if (plStack_c8 != (long *)0x0) {
          plVar8 = plStack_c8 + 1;
          do {
            lVar7 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        plStack_c8 = (long *)puVar5[1];
        uStack_d0 = *puVar5;
        if (puVar5[1] != 0) {
          plVar2 = (long *)(puVar5[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_c0 = CONCAT44(param_6,(int)param_5);
        uStack_b8 = uVar9;
        uStack_b0 = uVar10;
        FUN_10a00e5c4(puVar6 + 5,&uStack_d0);
        puVar6[8] = uStack_b8;
        puVar6[7] = uStack_c0;
        puVar6[9] = uStack_b0;
        if (plStack_c8 != (long *)0x0) {
          plVar2 = plStack_c8 + 1;
          do {
            lVar7 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_10abf8df0:
          plVar2 = plStack_c8;
          if (lVar7 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(param_2 + 8));
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_10abf9090(&uStack_e0,param_2,0,param_5);
  if (param_3 == 0) {
    plStack_c8 = plStack_d8;
    uStack_d0 = uStack_e0;
    if (plStack_d8 != (long *)0x0) {
      plVar2 = plStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_c0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    FUN_10a00e5c4(param_1 + 0x35,&uStack_d0);
    param_1[0x38] = uStack_b8;
    param_1[0x37] = uStack_c0;
    param_1[0x39] = uStack_b0;
    if (plStack_c8 == (long *)0x0) goto LAB_10abf900c;
    plVar2 = plStack_c8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_c8;
    } while (cVar3 != '\0');
  }
  else {
    FUN_10abf9090(&uStack_f0,param_2,1,param_5);
    plStack_c8 = plStack_e8;
    uStack_d0 = uStack_f0;
    if (plStack_e8 != (long *)0x0) {
      plVar2 = plStack_e8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_c0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    FUN_10a00e5c4(param_1 + 0x35,&uStack_d0);
    plVar2 = plStack_c8;
    param_1[0x38] = uStack_b8;
    param_1[0x37] = uStack_c0;
    param_1[0x39] = uStack_b0;
    if (plStack_c8 != (long *)0x0) {
      plVar8 = plStack_c8 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plStack_c8 = plStack_d8;
    uStack_d0 = uStack_e0;
    if (plStack_d8 != (long *)0x0) {
      plVar2 = plStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_c0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    FUN_10a00e5c4(param_1 + 0x3a,&uStack_d0);
    plVar2 = plStack_c8;
    param_1[0x3d] = uStack_b8;
    param_1[0x3c] = uStack_c0;
    param_1[0x3e] = uStack_b0;
    if (plStack_c8 != (long *)0x0) {
      plVar8 = plStack_c8 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_e8 == (long *)0x0) goto LAB_10abf900c;
    plVar2 = plStack_e8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = plStack_e8;
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10abf900c:
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  return;
}



/* Entry: 10abf9090; end: 10abf911f;  */

undefined8 * FUN_10abf9090(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x50);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_2 + 0x10);
    }
    else {
      param_3 = param_3 & 1;
    }
    if (param_3 == 0) {
      FUN_10abf80a4(puVar4,param_4);
    }
    else {
      FUN_10abf83a8(puVar4,param_4);
    }
  }
  else if (param_3 == 0) {
    FUN_10abf27cc();
  }
  else {
    FUN_10abf7e14(puVar4,param_4);
  }
  uVar8 = puVar4[1];
  uVar7 = *puVar4;
  if (puVar4[1] != 0) {
    plVar6 = (long *)(puVar4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)param_1[1];
  param_1[1] = uVar8;
  *param_1 = uVar7;
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
  return param_1;
}



/* Entry: 10abf9120; end: 10abf917f;  */

undefined8 * FUN_10abf9120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54dd8;
  FUN_10ac09d98(param_1 + 1);
  return param_1;
}



/* Entry: 10abf9180; end: 10abfa18b;  */

/* WARNING: Removing unreachable block (ram,0x00010abf9590) */
/* WARNING: Removing unreachable block (ram,0x00010abf98b4) */
/* WARNING: Removing unreachable block (ram,0x00010abf95c8) */
/* WARNING: Removing unreachable block (ram,0x00010abf93b0) */
/* WARNING: Removing unreachable block (ram,0x00010abf9560) */
/* WARNING: Removing unreachable block (ram,0x00010abf9630) */
/* WARNING: Removing unreachable block (ram,0x00010abf96c4) */
/* WARNING: Removing unreachable block (ram,0x00010abf9ae8) */
/* WARNING: Removing unreachable block (ram,0x00010abf9b2c) */
/* WARNING: Removing unreachable block (ram,0x00010abf96f0) */
/* WARNING: Removing unreachable block (ram,0x00010abf9600) */
/* WARNING: Removing unreachable block (ram,0x00010abf9668) */
/* WARNING: Removing unreachable block (ram,0x00010abf93f4) */
/* WARNING: Removing unreachable block (ram,0x00010abf94fc) */
/* WARNING: Removing unreachable block (ram,0x00010abf9494) */
/* WARNING: Removing unreachable block (ram,0x00010abf9424) */
/* WARNING: Removing unreachable block (ram,0x00010abf945c) */
/* WARNING: Removing unreachable block (ram,0x00010abf94c4) */
/* WARNING: Removing unreachable block (ram,0x00010abf9720) */

void FUN_10abf9180(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  undefined4 *puVar30;
  long *plVar31;
  uint uVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  undefined4 uVar37;
  undefined4 uStack_124;
  undefined8 uStack_120;
  long *plStack_118;
  char cStack_109;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long *plStack_f0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  long *plStack_78;
  
  uVar37 = *param_4;
  plVar15 = param_2 + 4;
  func_0x00010a01e9ec(plVar15,uVar37);
  lVar27 = plVar15[0x35];
  if (((*(byte *)(lVar27 + 0x59c) & 1) == 0) && (*(char *)(lVar27 + 0x59d) != '\x01')) {
    return;
  }
  uVar25 = (ulong)*(byte *)(*(long *)(lVar27 + 0x170) + 0x29);
  if (5 < uVar25) {
LAB_10abfa0e4:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10abfa0e8);
    (*pcVar13)();
  }
  plVar15 = *(long **)(*(long *)(lVar27 + 0x170) + uVar25 * 8 + 0x30);
  (**(code **)(*plVar15 + 0x18))();
  if (((int)plVar15 != 0) && ((*(byte *)(lVar27 + 0x586) & 1) == 0)) {
    plVar15 = param_2 + 4;
    func_0x00010a01e9ec(plVar15,uVar37);
    plVar16 = param_2 + 4;
    FUN_10a015150(plVar16,uVar37);
    if ((ushort *)plVar16[0x17] == (ushort *)plVar16[0x18]) {
      return;
    }
    uVar22 = (uint)*(ushort *)plVar16[0x17];
    if (uVar22 == 0xffff) {
      return;
    }
    plVar31 = param_2 + 4;
    FUN_10a021e20();
    bVar7 = *(byte *)((long)plVar31 + 0x1a);
    puVar30 = (undefined4 *)plVar15[0x35];
    uVar37 = NEON_ucvtf(puVar30[0x15c]);
    lStack_80 = CONCAT44(lStack_80._4_4_,uVar37);
    uStack_124 = NEON_ucvtf(puVar30[0x15f]);
    if ((ulong)bVar7 == 0) {
      return;
    }
    uVar25 = 0;
    uVar3 = puVar30[0x13c];
    do {
      uVar2 = uVar22 + (int)uVar25;
      plVar15 = param_2 + 4;
      FUN_10a01eacc(plVar15,uVar2 & 0xffff);
      func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55578);
      uStack_100 = puVar30[0x15a];
      FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
      if (uVar3 < 0x20) {
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55590);
        uStack_100 = puVar30[0x15b];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c555a8);
        FUN_10a01671c(plVar15,&uStack_c0,&lStack_80);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c555c0);
        uStack_100 = puVar30[0x15d];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c555d8);
        uStack_100 = puVar30[0x15e];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c555f0);
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_124);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55608);
        uStack_100 = puVar30[0x160];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55620);
        uStack_100 = puVar30[0x14c];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
      }
      else {
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55638);
        uStack_100 = puVar30[0x15b];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55650);
        FUN_10a01671c(plVar15,&uStack_c0,&lStack_80);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55668);
        uStack_100 = puVar30[0x15d];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55680);
        uStack_100 = puVar30[0x15e];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55698);
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_124);
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c556b0);
        uStack_100 = puVar30[0x160];
        FUN_10a01671c(plVar15,&uStack_c0,&uStack_100);
      }
      if (*(char *)((long)puVar30 + 0x587) == '\x01') {
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c556c8);
        FUN_10a047898(plVar15[0x2b],&uStack_c0,&uStack_c0);
      }
      else {
        func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c556c8);
        FUN_10a048040(plVar15[0x2b],&uStack_c0);
      }
      func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c556e0);
      FUN_10a048040(plVar15[0x2b],&uStack_c0);
      func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c556f8);
      FUN_10a047898(plVar15[0x2b],&uStack_c0,&uStack_c0);
      lVar27 = plVar16[0x15];
      puVar23 = (undefined8 *)0x1;
      FUN_10a061940();
      if (puVar23 == (undefined8 *)0x0) {
        plVar31 = (long *)0x0;
      }
      else {
        plVar31 = (long *)*puVar23;
      }
      uVar5 = puVar30[0x17a];
      if ((ulong)uVar5 != 0) {
        uVar34 = 0;
        uVar35 = 1;
        do {
          puVar23 = *(undefined8 **)(puVar30 + 0x178);
          uVar26 = uVar35;
          if (uVar34 != 0) {
            do {
              puVar23 = (undefined8 *)*puVar23;
              uVar26 = uVar26 - 1;
            } while (1 < uVar26);
          }
          uVar37 = *(undefined4 *)(puVar23 + 2);
          puVar17 = puVar30;
          FUN_10a5f95d0(puVar30,uVar37);
          plVar33 = *(long **)(param_1 + 8);
          uStack_120 = CONCAT44((int)puVar17,uVar37);
          __ZNSt3__15mutex4lockEv(plVar33 + 4);
          plVar20 = plVar33 + 0x10;
          FUN_10ac05934(plVar20,uStack_120 & 0xffffffff,uStack_120._4_4_);
          if ((plVar20 == (long *)0x0) || (plVar20[5] == 0)) {
            __ZNSt3__15mutex6unlockEv(plVar33 + 4);
LAB_10abf9830:
            plVar18 = plVar33;
            (**(code **)(*plVar33 + 0x10))(plVar33,&uStack_120);
            if (plVar18 == (long *)0x0) {
              FUN_10a00946c(&UNK_10f6337b7);
              goto LAB_10abfa0e4;
            }
            FUN_10ad04458(&uStack_c0,&UNK_10e507d0c);
            if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
              func_0x00010ae06f08(1,4,&UNK_10f633be3,&UNK_10f69b45c,0x1d,&UNK_10f633d7c,param_7,
                                  param_8,&uStack_c0);
            }
          }
          else {
            lVar28 = plVar20[3];
            plVar19 = *(long **)(lVar28 + 0x10);
            plVar18 = *(long **)(lVar28 + 0x18);
            *(undefined8 *)(lVar28 + 0x18) = 0;
            if (plVar19 == plVar33 + 0xd) goto LAB_10abfa0e4;
            lVar28 = *plVar19;
            plVar19 = (long *)plVar19[1];
            *(long **)(lVar28 + 8) = plVar19;
            *plVar19 = lVar28;
            plVar33[0xf] = plVar33[0xf] + -1;
            __ZdlPv();
            lVar28 = plVar20[5];
            if (lVar28 == 0) goto LAB_10abfa0e4;
            lVar4 = *(long *)plVar20[3];
            plVar19 = (long *)((long *)plVar20[3])[1];
            *(long **)(lVar4 + 8) = plVar19;
            *plVar19 = lVar4;
            plVar20[5] = lVar28 + -1;
            func_0x00010ac05754();
            __ZNSt3__15mutex6unlockEv(plVar33 + 4);
            if (plVar18 == (long *)0x0) goto LAB_10abf9830;
          }
          lVar28 = plVar33[1];
          plVar20 = (long *)plVar33[2];
          uStack_c0 = (undefined4)lVar28;
          uStack_bc = (undefined4)((ulong)lVar28 >> 0x20);
          if (plVar20 == (long *)0x0) {
LAB_10abf9fac:
            FUN_10a043ecc();
            goto LAB_10abfa0e4;
          }
          __ZNSt3__119__shared_weak_count4lockEv();
          uStack_b8 = SUB84(plVar20,0);
          uStack_b4 = (undefined4)((ulong)plVar20 >> 0x20);
          if (plVar20 == (long *)0x0) goto LAB_10abf9fac;
          uVar11 = (undefined4)uStack_120;
          uVar12 = uStack_120._4_4_;
          plVar33 = plVar20 + 2;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *plVar33 = *plVar33 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          uStack_100 = (undefined4)uStack_120;
          uStack_fc = uStack_120._4_4_;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *plVar33 = *plVar33 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          plVar19 = (long *)0x38;
          lStack_f8 = lVar28;
          plStack_f0 = plVar20;
          __Znwm();
          lStack_f8 = 0;
          plStack_f0 = (long *)0x0;
          plVar36 = plVar19 + 1;
          *plVar36 = 0;
          *plVar19 = (long)&PTR_FUN_110c55720;
          plVar19[2] = 0;
          plVar19[3] = (long)plVar18;
          *(undefined4 *)(plVar19 + 4) = uVar11;
          *(undefined4 *)((long)plVar19 + 0x24) = uVar12;
          plVar19[5] = lVar28;
          plVar19[6] = (long)plVar20;
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
          plVar33 = plVar20 + 1;
          do {
            lVar28 = *plVar33;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar10) {
              *plVar33 = lVar28 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
          }
          uVar32 = 0;
          lVar28 = plVar18[2];
          while( true ) {
            plVar20 = *(long **)(*plVar18 + 0x268);
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0xb8))();
            }
            if ((uint)plVar20 <= uVar32) break;
            uVar29 = 0;
            while( true ) {
              plVar20 = *(long **)(*plVar18 + 0x268);
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0xb0))();
              }
              if ((uint)plVar20 <= uVar29) break;
              plVar20 = *(long **)(*plVar18 + 0x268);
              if (plVar20 == (long *)0x0) {
                iVar14 = 0;
              }
              else {
                (**(code **)(*plVar20 + 0xb0))();
                iVar14 = (int)plVar20;
              }
              puVar17 = puVar30;
              FUN_10a5f9610(puVar30,uVar37,uVar32,uVar29);
              plVar20 = *(long **)(*plVar18 + 0x268);
              if (plVar20 == (long *)0x0) {
                plVar20 = (long *)0x0;
              }
              else {
                (**(code **)(*plVar20 + 0xb0))();
              }
              puVar21 = puVar30;
              func_0x00010a5f9694(puVar30,plVar20,uVar32);
              puVar1 = (undefined4 *)(lVar28 + (ulong)(uVar29 + uVar32 * iVar14) * 0x10);
              *puVar1 = *puVar17;
              puVar1[1] = puVar17[1];
              puVar1[2] = puVar17[2];
              lVar4 = 0;
              if (uVar29 != 0) {
                lVar4 = 4;
              }
              puVar1[3] = (float)*(int *)((long)puVar21 + lVar4);
              uVar29 = uVar29 + 1;
            }
            uVar32 = uVar32 + 1;
          }
          puVar23 = (undefined8 *)0x1;
          FUN_10a088744(*(undefined8 *)(*plVar18 + 0x268));
          (**(code **)(*(long *)*puVar23 + 0x98))((long *)*puVar23,plVar18[2],0,0);
          func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55770);
          if (*plVar18 == 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined8 *)(*plVar18 + 0x268);
          }
          FUN_10a5e17a8(plVar15,&uStack_c0,uVar24,&UNK_10e4ac8d0);
          func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c55788);
          if (*plVar18 == 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = *(undefined8 *)(*plVar18 + 0x268);
          }
          FUN_10a5e17a8(plVar15,&uStack_c0,uVar24,&UNK_10e4ac8d0);
          (**(code **)(*plVar31 + 0x68))(plVar31,0);
          plVar20 = *(long **)(*plVar18 + 0x268);
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0xb0))();
          }
          (**(code **)(*plVar31 + 0x78))(plVar31,(int)plVar20 << 1);
          FUN_10a5f489c(&uStack_c0,puVar30);
          uStack_120 = 0;
          plStack_118 = (long *)0x0;
          plVar20 = (long *)CONCAT44(uStack_b4,uStack_b8);
          if (plVar20 == (long *)0x0) {
LAB_10abf9bf0:
            plVar33 = (long *)0x0;
LAB_10abf9bf4:
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_bc = 0;
            uStack_b8 = 0;
            uStack_c0 = 0x3f800000;
            uStack_ac = 0x3f800000;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_98 = 0x3f800000;
            uStack_84 = 0x3f800000;
          }
          else {
            plVar33 = plVar20;
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_118 = plVar33;
            if (plVar33 == (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
              goto LAB_10abf9bf0;
            }
            uVar26 = CONCAT44(uStack_bc,uStack_c0);
            uStack_120 = uVar26;
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            if (uVar26 == 0) goto LAB_10abf9bf4;
            lVar28 = *(long *)(uVar26 + 0x140);
            if ((*(byte *)(lVar28 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar28);
            }
            uStack_a8 = *(undefined8 *)(lVar28 + 0xd8);
            uStack_b8 = (undefined4)*(undefined8 *)(lVar28 + 200);
            uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 200) >> 0x20);
            uStack_c0 = (undefined4)*(undefined8 *)(lVar28 + 0xc0);
            uStack_bc = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20);
            uStack_b0 = (undefined4)*(undefined8 *)(lVar28 + 0xd0);
            uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xd0) >> 0x20);
            uStack_a0 = *(undefined8 *)(lVar28 + 0xe0);
            uStack_98 = (undefined4)*(undefined8 *)(lVar28 + 0xe8);
            uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20);
            uStack_88 = (undefined4)*(undefined8 *)(lVar28 + 0xf8);
            uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xf8) >> 0x20);
            uStack_90 = (undefined4)*(undefined8 *)(lVar28 + 0xf0);
            uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xf0) >> 0x20);
          }
          iVar14 = puVar30[0x15c];
          iVar6 = puVar30[0x15f];
          plVar20 = *(long **)(*plVar18 + 0x268);
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0xb8))();
          }
          *(int *)(plVar15 + 0xd) = (int)plVar20 + (int)plVar20 * (iVar14 + iVar6);
          lVar28 = *(long *)(puVar30 + 0x5e);
          if ((*(byte *)(lVar28 + 0x2a) & 0x24) != 0) {
            FUN_10a3e8fd4(lVar28);
          }
          func_0x000109519fd0(&uStack_100,lVar28 + 0xc0,&uStack_c0);
          (**(code **)(*param_2 + 0x58))(param_2,lVar27,uVar2 & 0xffff,&uStack_100,2);
          if (plVar33 != (long *)0x0) {
            plVar20 = plVar33 + 1;
            do {
              lVar28 = *plVar20;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar10) {
                *plVar20 = lVar28 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar28 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
            }
          }
          do {
            lVar28 = *plVar36;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar10) {
              *plVar36 = lVar28 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          }
          uVar34 = uVar34 + 1;
          uVar35 = uVar35 + 1;
        } while (uVar34 != uVar5);
      }
      uVar25 = uVar25 + 1;
      if (uVar25 == bVar7) {
        return;
      }
    } while( true );
  }
  plVar15 = param_2 + 4;
  func_0x00010a01e9ec(plVar15,uVar37);
  plVar16 = param_2 + 4;
  FUN_10a015150(plVar16,uVar37);
  if ((ushort *)plVar16[0x17] == (ushort *)plVar16[0x18]) {
    return;
  }
  uVar8 = *(ushort *)plVar16[0x17];
  if (uVar8 == 0xffff) {
    return;
  }
  plVar31 = param_2 + 4;
  FUN_10a021e20(plVar31,uVar8);
  bVar7 = *(byte *)((long)plVar31 + 0x1a);
  lVar27 = plVar15[0x35];
  FUN_10a5f489c(&uStack_c0,lVar27);
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  plVar15 = (long *)CONCAT44(uStack_b4,uStack_b8);
  if (plVar15 == (long *)0x0) {
LAB_10abf9d38:
    plVar31 = (long *)0x0;
  }
  else {
    plVar31 = plVar15;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_78 = plVar31;
    if (plVar31 == (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      goto LAB_10abf9d38;
    }
    lVar28 = CONCAT44(uStack_bc,uStack_c0);
    lStack_80 = lVar28;
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    if (lVar28 != 0) {
      lVar28 = *(long *)(lVar28 + 0x140);
      if ((*(byte *)(lVar28 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar28);
      }
      uStack_a8 = *(undefined8 *)(lVar28 + 0xd8);
      uStack_b8 = (undefined4)*(undefined8 *)(lVar28 + 200);
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 200) >> 0x20);
      uStack_c0 = (undefined4)*(undefined8 *)(lVar28 + 0xc0);
      uStack_bc = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20);
      uStack_b0 = (undefined4)*(undefined8 *)(lVar28 + 0xd0);
      uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xd0) >> 0x20);
      uStack_a0 = *(undefined8 *)(lVar28 + 0xe0);
      uStack_98 = (undefined4)*(undefined8 *)(lVar28 + 0xe8);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20);
      uStack_88 = (undefined4)*(undefined8 *)(lVar28 + 0xf8);
      uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xf8) >> 0x20);
      uStack_90 = (undefined4)*(undefined8 *)(lVar28 + 0xf0);
      uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar28 + 0xf0) >> 0x20);
      goto LAB_10abf9d6c;
    }
  }
  uStack_c0 = 0x3f800000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_ac = 0x3f800000;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_98 = 0x3f800000;
  uStack_84 = 0x3f800000;
LAB_10abf9d6c:
  lVar28 = *(long *)(lVar27 + 0x178);
  if ((*(byte *)(lVar28 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar28);
  }
  func_0x000109519fd0(&uStack_100,lVar28 + 0xc0,&uStack_c0);
  if (bVar7 != 0) {
    uVar25 = 0;
    uVar22 = *(uint *)(lVar27 + 0x4f0);
    do {
      uVar3 = (uint)uVar8 + (int)uVar25;
      plVar15 = param_2 + 4;
      FUN_10a01eacc(plVar15,uVar3 & 0xffff);
      func_0x000107c2b074(&uStack_120,&PTR_DAT_110c55578);
      uStack_124 = *(undefined4 *)(lVar27 + 0x568);
      FUN_10a01671c(plVar15,&uStack_120,&uStack_124);
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      if (uVar22 < 0x20) {
        func_0x000107c2b074(&uStack_120,&PTR_DAT_110c55590);
        uStack_124 = *(undefined4 *)(lVar27 + 0x56c);
        FUN_10a01671c(plVar15,&uStack_120,&uStack_124);
      }
      else {
        func_0x000107c2b074(&uStack_120,&PTR_DAT_110c55638);
        uStack_124 = *(undefined4 *)(lVar27 + 0x56c);
        FUN_10a01671c(plVar15,&uStack_120,&uStack_124);
      }
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      if (*(char *)(lVar27 + 0x587) == '\x01') {
        func_0x000107c2b074(&uStack_120,&PTR_DAT_110c556c8);
        FUN_10a047898(plVar15[0x2b],&uStack_120,&uStack_120);
      }
      else {
        func_0x000107c2b074(&uStack_120,&PTR_DAT_110c556c8);
        FUN_10a048040(plVar15[0x2b],&uStack_120);
      }
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      func_0x000107c2b074(&uStack_120,&PTR_DAT_110c556e0);
      FUN_10a047898(plVar15[0x2b],&uStack_120,&uStack_120);
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      func_0x000107c2b074(&uStack_120,&PTR_DAT_110c556f8);
      FUN_10a047898(plVar15[0x2b],&uStack_120,&uStack_120);
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      (**(code **)(*param_2 + 0x58))(param_2,plVar16[0x15],uVar3 & 0xffff,&uStack_100,2);
      uVar25 = uVar25 + 1;
    } while (bVar7 != uVar25);
  }
  if (plVar31 != (long *)0x0) {
    plVar15 = plVar31 + 1;
    do {
      lVar27 = *plVar15;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
    }
  }
  return;
}



/* Entry: 10abfa18c; end: 10abfade7;  */

void FUN_10abfa18c(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  long lVar29;
  float *pfVar30;
  float *pfVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long lVar35;
  ulong uVar36;
  undefined2 *puVar37;
  long lVar38;
  long *plVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long *plVar48;
  ulong uVar49;
  ulong uVar50;
  undefined8 uVar51;
  long *plVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  lVar38 = *(long *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  uVar45 = (lVar2 - lVar38 >> 3) * 0xf83e0f83e0f83e1;
  if (*(ulong *)(param_1 + 0x50) < uVar45) {
    *(ulong *)(param_1 + 0x50) = uVar45;
    FUN_10a01066c(param_1 + 0x38,uVar45);
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f69af7d,&UNK_10f69afc7,0x60,&UNK_10f69b03a);
  }
  if (cRam0000000113306dd8 == '\x01') {
    if (lVar2 != lVar38) {
      lVar35 = 0;
      lVar40 = 0;
      uVar42 = 0;
      do {
        uVar18 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) * 0xf83e0f83e0f83e1;
        if (uVar18 < uVar42 || uVar18 - uVar42 == 0) goto LAB_10abfadc0;
        plVar48 = param_2 + 4;
        FUN_10a015150(plVar48,*(undefined4 *)(*(long *)(param_4 + 0x18) + lVar35));
        if ((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 6) <= uVar42)
        goto LAB_10abfadc0;
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar40);
        uVar51 = *(undefined8 *)((long)plVar48 + 0xc);
        uVar8 = *(undefined8 *)((long)plVar48 + 4);
        uVar54 = *(undefined8 *)((long)plVar48 + 0x1c);
        uVar53 = *(undefined8 *)((long)plVar48 + 0x14);
        uVar55 = *(undefined8 *)((long)plVar48 + 0x24);
        uVar57 = *(undefined8 *)((long)plVar48 + 0x3c);
        uVar56 = *(undefined8 *)((long)plVar48 + 0x34);
        puVar11[5] = *(undefined8 *)((long)plVar48 + 0x2c);
        puVar11[4] = uVar55;
        puVar11[7] = uVar57;
        puVar11[6] = uVar56;
        puVar11[1] = uVar51;
        *puVar11 = uVar8;
        puVar11[3] = uVar54;
        puVar11[2] = uVar53;
        uVar42 = uVar42 + 1;
        lVar40 = lVar40 + 0x40;
        lVar35 = lVar35 + 0x108;
      } while (uVar45 - uVar42 != 0);
      uVar42 = 0;
      lVar40 = *(long *)(param_1 + 0x60);
      do {
        uVar18 = uVar42 + lVar40;
        if (uVar45 <= uVar42 + lVar40) {
          uVar18 = uVar45;
        }
        lVar40 = *(long *)(param_4 + 0x18);
        uVar14 = (*(long *)(param_4 + 0x20) - lVar40 >> 3) * 0xf83e0f83e0f83e1;
        if (uVar14 < uVar42 || uVar14 - uVar42 == 0) goto LAB_10abfadc0;
        uVar14 = *(ulong *)(param_1 + 0x58);
        if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 4) <= uVar14)
        goto LAB_10abfadc0;
        lVar35 = *(long *)(*(long *)(param_1 + 0x20) + uVar14 * 0x10);
        uVar3 = *(uint *)(lVar35 + 0x110);
        if (uVar3 == 0xffffffff) {
          lVar44 = 0;
        }
        else {
          uVar25 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
          if (uVar25 < uVar3 || uVar25 - uVar3 == 0) goto LAB_10abfadc4;
          lVar44 = *(long *)(lVar35 + 0xf8) + (ulong)uVar3 * 0x38;
        }
        uVar3 = *(uint *)(lVar35 + 0x114);
        if (uVar3 == 0xffffffff) {
          lStack_140 = 0;
        }
        else {
          uVar25 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
          if (uVar25 < uVar3 || uVar25 - uVar3 == 0) goto LAB_10abfadc4;
          lStack_140 = *(long *)(lVar35 + 0xf8) + (ulong)uVar3 * 0x38;
        }
        uVar3 = *(uint *)(lVar35 + 0x120);
        if (uVar3 == 0xffffffff) {
          lStack_148 = 0;
        }
        else {
          uVar25 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
          if (uVar25 < uVar3 || uVar25 - uVar3 == 0) goto LAB_10abfadc4;
          lStack_148 = *(long *)(lVar35 + 0xf8) + (ulong)uVar3 * 0x38;
        }
        uVar3 = *(uint *)(lVar35 + 0x124);
        if (uVar3 == 0xffffffff) {
          lStack_130 = 0;
        }
        else {
          uVar25 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
          if (uVar25 < uVar3 || uVar25 - uVar3 == 0) goto LAB_10abfadc4;
          lStack_130 = *(long *)(lVar35 + 0xf8) + (ulong)uVar3 * 0x38;
        }
        uVar3 = *(uint *)(lVar35 + 0x118);
        if (uVar3 == 0xffffffff) {
          lStack_150 = 0;
        }
        else {
          uVar25 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
          if (uVar25 < uVar3 || uVar25 - uVar3 == 0) {
LAB_10abfadc4:
            FUN_10ab725fc();
            func_0x00010a1943a0(&plStack_e0);
            __Unwind_Resume();
            plVar39 = plVar48 + 0x1e;
            *(int *)(plVar48 + 0x1b) = ((int)plVar48[0x1b] + 1) % 3;
            *(undefined4 *)((long)plVar48 + 0xdc) = 0;
            func_0x00010ac08d34(*plVar39);
            *plVar39 = 0;
            plVar48[0x1f] = 0;
            plVar48[0x1d] = (long)plVar39;
            return;
          }
          lStack_150 = *(long *)(lVar35 + 0xf8) + (ulong)uVar3 * 0x38;
        }
        uVar3 = *(int *)(lVar44 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(lVar44 + 0x28) * iVar17 == 0xc) {
          lVar19 = *(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lVar44 + 0x30);
          uVar25 = (ulong)*(uint *)(lVar35 + 0xf0);
        }
        else {
          lVar19 = 0;
          uVar25 = 0;
        }
        uVar3 = *(int *)(lStack_140 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(lStack_140 + 0x28) * iVar17 == 0xc) {
          lVar22 = *(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lStack_140 + 0x30);
          uVar12 = (ulong)*(uint *)(lVar35 + 0xf0);
        }
        else {
          lVar22 = 0;
          uVar12 = 0;
        }
        uVar3 = *(int *)(lStack_148 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(lStack_148 + 0x28) * iVar17 == 8) {
          lStack_170 = *(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lStack_148 + 0x30);
          uVar13 = (ulong)*(uint *)(lVar35 + 0xf0);
        }
        else {
          lStack_170 = 0;
          uVar13 = 0;
        }
        uVar3 = *(int *)(lStack_130 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(lStack_130 + 0x28) * iVar17 == 8) {
          lStack_178 = *(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lStack_130 + 0x30);
          uVar47 = (ulong)*(uint *)(lVar35 + 0xf0);
        }
        else {
          lStack_178 = 0;
          uVar47 = 0;
        }
        uVar3 = *(int *)(lStack_150 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
        }
        else {
          iVar17 = 0;
        }
        if (*(int *)(lStack_150 + 0x28) * iVar17 == 0x10) {
          lStack_180 = *(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lStack_150 + 0x30);
          uVar49 = (ulong)*(uint *)(lVar35 + 0xf0);
        }
        else {
          lStack_180 = 0;
          uVar49 = 0;
        }
        if (uVar42 < uVar18) {
          lStack_f8 = 0;
          lStack_f0 = 0;
          lStack_108 = 0;
          lStack_100 = 0;
          lStack_110 = 0;
          uVar14 = uVar42;
          do {
            uVar20 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) *
                     0xf83e0f83e0f83e1;
            if (uVar20 < uVar14 || uVar20 - uVar14 == 0) goto LAB_10abfadc0;
            plVar48 = param_2 + 4;
            func_0x00010a01e9ec(plVar48,*(undefined4 *)(*(long *)(param_4 + 0x18) + uVar14 * 0x108))
            ;
            lVar21 = *(long *)(param_4 + 0x18);
            uVar20 = (*(long *)(param_4 + 0x20) - lVar21 >> 3) * 0xf83e0f83e0f83e1;
            if (uVar20 < uVar14 || uVar20 - uVar14 == 0) goto LAB_10abfadc0;
            uVar3 = *(int *)(lVar44 + 0x24) - 1;
            if (uVar3 < 7) {
              iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
            }
            else {
              iVar17 = 0;
            }
            lVar15 = *(long *)(plVar48[0x35] + 0x528);
            if (*(int *)(lVar44 + 0x28) * iVar17 == 0xc) {
              lVar29 = *(long *)(lVar15 + 0x10) + (ulong)*(uint *)(lVar44 + 0x30);
              uVar20 = (ulong)*(uint *)(lVar15 + 0xf0);
            }
            else {
              lVar29 = 0;
              uVar20 = 0;
            }
            uVar3 = *(int *)(lStack_140 + 0x24) - 1;
            if (uVar3 < 7) {
              iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
            }
            else {
              iVar17 = 0;
            }
            if (*(int *)(lStack_140 + 0x28) * iVar17 == 0xc) {
              lVar32 = *(long *)(lVar15 + 0x10) + (ulong)*(uint *)(lStack_140 + 0x30);
              uVar36 = (ulong)*(uint *)(lVar15 + 0xf0);
            }
            else {
              lVar32 = 0;
              uVar36 = 0;
            }
            uVar3 = *(int *)(lStack_148 + 0x24) - 1;
            if (uVar3 < 7) {
              iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
            }
            else {
              iVar17 = 0;
            }
            if (*(int *)(lStack_148 + 0x28) * iVar17 == 8) {
              puVar11 = (undefined8 *)
                        (*(long *)(lVar15 + 0x10) + (ulong)*(uint *)(lStack_148 + 0x30));
              uVar50 = (ulong)*(uint *)(lVar15 + 0xf0);
            }
            else {
              puVar11 = (undefined8 *)0x0;
              uVar50 = 0;
            }
            uVar3 = *(int *)(lStack_130 + 0x24) - 1;
            if (uVar3 < 7) {
              iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
            }
            else {
              iVar17 = 0;
            }
            if (*(int *)(lStack_130 + 0x28) * iVar17 == 8) {
              puVar43 = (undefined8 *)
                        (*(long *)(lVar15 + 0x10) + (ulong)*(uint *)(lStack_130 + 0x30));
              uVar41 = (ulong)*(uint *)(lVar15 + 0xf0);
            }
            else {
              puVar43 = (undefined8 *)0x0;
              uVar41 = 0;
            }
            uVar3 = *(int *)(lStack_150 + 0x24) - 1;
            if (uVar3 < 7) {
              iVar17 = *(int *)(&UNK_10e5080c4 + (ulong)uVar3 * 4);
            }
            else {
              iVar17 = 0;
            }
            if (*(int *)(lStack_150 + 0x28) * iVar17 == 0x10) {
              lVar23 = *(long *)(lVar15 + 0x10) + (ulong)*(uint *)(lStack_150 + 0x30);
              uVar46 = (ulong)*(uint *)(lVar15 + 0xf0);
            }
            else {
              lVar23 = 0;
              uVar46 = 0;
            }
            if ((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 6) <= uVar14)
            goto LAB_10abfadc0;
            puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar14 * 0x40);
            func_0x0001094f5708(&fStack_c8,puVar1);
            if (*(long *)(param_1 + 0x70) != 0) {
              uVar16 = 0;
              lVar21 = lVar21 + uVar14 * 0x108;
              auVar6._4_4_ = fStack_a4;
              auVar6._0_4_ = fStack_a8;
              auVar6._8_4_ = fStack_a0;
              auVar6._12_4_ = fStack_9c;
              auVar58._4_4_ = uStack_98;
              auVar58._0_4_ = fStack_a8;
              auVar58._8_4_ = fStack_a4;
              auVar58._12_4_ = fStack_94;
              auVar58 = NEON_ext(auVar6,auVar58,8,1);
              pfVar24 = (float *)(lVar19 + 8 + uVar25 * lStack_110);
              pfVar26 = (float *)(lVar23 + 8);
              pfVar27 = (float *)(lVar22 + 8 + uVar12 * lStack_108);
              pfVar28 = (float *)(lVar29 + 4);
              pfVar30 = (float *)(lStack_170 + uVar13 * lStack_100);
              pfVar31 = (float *)(lVar32 + 4);
              puVar33 = (undefined8 *)(lStack_180 + uVar49 * lStack_f0);
              puVar34 = (undefined8 *)(lStack_178 + uVar47 * lStack_f8);
              do {
                fVar59 = pfVar28[-1];
                fVar60 = *pfVar28;
                fVar61 = pfVar28[1];
                fVar62 = *(float *)(puVar1 + 1);
                fVar63 = *(float *)(puVar1 + 3);
                fVar64 = *(float *)(puVar1 + 5);
                fVar65 = *(float *)(puVar1 + 7);
                *(ulong *)(pfVar24 + -2) =
                     CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar59 +
                              (float)((ulong)puVar1[2] >> 0x20) * fVar60 +
                              (float)((ulong)puVar1[4] >> 0x20) * fVar61 +
                              (float)((ulong)puVar1[6] >> 0x20),
                              (float)*puVar1 * fVar59 + (float)puVar1[2] * fVar60 +
                              (float)puVar1[4] * fVar61 + (float)puVar1[6]);
                *pfVar24 = fVar59 * fVar62 + fVar60 * fVar63 + fVar61 * fVar64 + fVar65;
                fVar59 = pfVar31[-1];
                fVar60 = *pfVar31;
                fVar61 = pfVar31[1];
                *(ulong *)(pfVar27 + -2) =
                     CONCAT44(fStack_b8 * fVar59 + fStack_b4 * fVar60 +
                              fStack_ac * 0.0 + fStack_b0 * fVar61,
                              fStack_c8 * fVar59 + fStack_c4 * fVar60 +
                              fStack_bc * 0.0 + fStack_c0 * fVar61);
                *pfVar27 = fStack_a8 * fVar59 + fStack_a4 * fVar60 +
                           fStack_9c * 0.0 + fStack_a0 * fVar61;
                uVar8 = *puVar11;
                *(undefined8 *)pfVar30 = uVar8;
                fVar59 = (float)((ulong)uVar8 >> 0x20);
                if (*(char *)(lVar21 + 0xe8) == '\x01') {
                  *pfVar30 = *(float *)(lVar21 + 0xd8) +
                             (*(float *)(lVar21 + 0xe0) - *(float *)(lVar21 + 0xd8)) *
                             (1.0 - fVar59);
                  fVar59 = *(float *)(lVar21 + 0xdc) +
                           (*(float *)(lVar21 + 0xe4) - *(float *)(lVar21 + 0xdc)) * (float)uVar8;
                }
                else {
                  *pfVar30 = *(float *)(lVar21 + 0xd8) +
                             (*(float *)(lVar21 + 0xe0) - *(float *)(lVar21 + 0xd8)) * (float)uVar8;
                  fVar59 = *(float *)(lVar21 + 0xdc) +
                           (*(float *)(lVar21 + 0xe4) - *(float *)(lVar21 + 0xdc)) * fVar59;
                }
                pfVar30[1] = fVar59;
                pfVar28 = (float *)((long)pfVar28 + uVar20);
                pfVar31 = (float *)((long)pfVar31 + uVar36);
                puVar11 = (undefined8 *)((long)puVar11 + uVar50);
                *puVar34 = *puVar43;
                fVar59 = pfVar26[-2];
                fVar60 = pfVar26[-1];
                fVar61 = *pfVar26;
                fVar62 = pfVar26[1];
                puVar33[1] = CONCAT44(auVar58._12_4_ * fVar59 + fStack_94 * fVar60 +
                                      fStack_90 * fVar61 + fStack_8c * fVar62,
                                      auVar58._8_4_ * fVar59 + fStack_a4 * fVar60 +
                                      fStack_a0 * fVar61 + fStack_9c * fVar62);
                *puVar33 = CONCAT44(fStack_b8 * fVar59 + fStack_b4 * fVar60 +
                                    fStack_b0 * fVar61 + fStack_ac * fVar62,
                                    fStack_c8 * fVar59 + fStack_c4 * fVar60 +
                                    fStack_c0 * fVar61 + fStack_bc * fVar62);
                uVar16 = uVar16 + 1;
                pfVar24 = (float *)((long)pfVar24 + uVar25);
                pfVar26 = (float *)((long)pfVar26 + uVar46);
                pfVar27 = (float *)((long)pfVar27 + uVar12);
                puVar43 = (undefined8 *)((long)puVar43 + uVar41);
                pfVar30 = (float *)((long)pfVar30 + uVar13);
                puVar33 = (undefined8 *)((long)puVar33 + uVar49);
                puVar34 = (undefined8 *)((long)puVar34 + uVar47);
              } while (uVar16 < *(ulong *)(param_1 + 0x70));
              lStack_110 = lStack_110 + uVar16;
              lStack_108 = lStack_108 + uVar16;
              lStack_f0 = lStack_f0 + uVar16;
              lStack_f8 = lStack_f8 + uVar16;
              lStack_100 = lStack_100 + uVar16;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar18);
          uVar14 = *(ulong *)(param_1 + 0x58);
        }
        if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 4) <= uVar14)
        goto LAB_10abfadc0;
        puVar11 = (undefined8 *)(*(long *)(param_1 + 8) + uVar14 * 0x10);
        plVar52 = (long *)puVar11[1];
        plVar39 = (long *)*puVar11;
        if (plVar52 != (long *)0x0) {
          plVar48 = plVar52 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar48,0x10);
            if (bVar5) {
              *plVar48 = *plVar48 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar48 = plVar39;
        plStack_e0 = plVar39;
        plStack_d8 = plVar52;
        (**(code **)(*plVar39 + 0x90))();
        *(undefined8 *)(*plVar48 + 0xe8) = 1;
        puVar11 = (undefined8 *)0x1;
        FUN_10a061940(plVar39);
        if (puVar11 == (undefined8 *)0x0) {
          plVar48 = (long *)0x0;
        }
        else {
          plVar48 = (long *)*puVar11;
        }
        if (*(long *)(lVar35 + 0x18) != *(long *)(lVar35 + 0x10)) {
          plVar9 = plVar48;
          (**(code **)(*plVar48 + 0x28))();
          lVar44 = *(long *)(lVar35 + 0x10);
          lVar35 = *(long *)(lVar35 + 0x18);
          plVar10 = plVar48;
          (**(code **)(*plVar48 + 0xa0))(plVar48);
          (**(code **)(*plVar9 + 0x10))(plVar9,lVar44,lVar35 - lVar44,0,plVar10);
        }
        (**(code **)(*plVar48 + 0x78))(plVar48,((int)uVar18 - (int)uVar42) * 6);
        puVar37 = (undefined2 *)(lVar40 + uVar42 * 0x108 + 4);
        plVar48 = param_2 + 4;
        FUN_10a01eacc(plVar48,*puVar37);
        *(undefined4 *)(plVar48 + 0xd) = 1;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_c8 = 1.0;
        fStack_b4 = 1.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_94 = 0.0;
        fStack_90 = 0.0;
        fStack_9c = 0.0;
        uStack_98 = 0;
        fStack_a0 = 1.0;
        fStack_8c = 1.0;
        plVar48 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,plVar39,*puVar37,&fStack_c8,1);
        uVar14 = *(ulong *)(param_1 + 0x60);
        uVar18 = *(long *)(param_1 + 0x58) + 1;
        uVar25 = 0;
        if (uVar14 != 0) {
          uVar25 = uVar18 / uVar14;
        }
        *(ulong *)(param_1 + 0x58) = uVar18 - uVar25 * uVar14;
        if (plVar52 != (long *)0x0) {
          plVar39 = plVar52 + 1;
          do {
            lVar40 = *plVar39;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar5) {
              *plVar39 = lVar40 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar40 == 0) {
            (**(code **)(*plVar52 + 0x10))(plVar52);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar48 = plVar52;
          }
        }
        lVar40 = *(long *)(param_1 + 0x60);
        uVar42 = lVar40 + uVar42;
      } while (uVar42 < uVar45);
    }
  }
  else {
    lVar35 = *(long *)(param_4 + 0x20);
    for (lVar40 = *(long *)(param_4 + 0x18); lVar40 != lVar35; lVar40 = lVar40 + 0x108) {
      (**(code **)(*param_2 + 0x148))(param_2,lVar40);
    }
  }
  if (lVar2 != lVar38) {
    lVar38 = 0;
    uVar42 = 0;
    do {
      uVar18 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 3) * 0xf83e0f83e0f83e1;
      if (uVar18 < uVar42 || uVar18 - uVar42 == 0) {
LAB_10abfadc0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10abfadc4);
        (*pcVar7)();
      }
      plVar48 = param_2 + 4;
      func_0x00010a01e9ec(plVar48,*(undefined4 *)(*(long *)(param_4 + 0x18) + lVar38));
      puVar11 = (undefined8 *)plVar48[0x35];
      if ((puVar11 != (undefined8 *)0x0) && (puVar11[0x44] != 0)) {
        FUN_10a66ad54();
        FUN_10abe33e8(param_2,*puVar11,(long)plVar48 + 0x6c);
      }
      uVar42 = uVar42 + 1;
      lVar38 = lVar38 + 0x108;
    } while (uVar45 != uVar42);
  }
  return;
}



/* Entry: 10abfade8; end: 10abfae3f;  */

void FUN_10abfade8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xd8) = (*(int *)(param_1 + 0xd8) + 1) % 3;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  func_0x00010ac08d34(*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 **)(param_1 + 0xe8) = puVar1;
  return;
}



/* Entry: 10abfae40; end: 10abfae6f;  */

void FUN_10abfae40(long param_1)

{
  *(int *)(param_1 + 0xd8) = (*(int *)(param_1 + 0xd8) + 1) % 3;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}



/* Entry: 10abfae70; end: 10abfaf9f;  */

undefined8 FUN_10abfae70(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x168) + 0x120);
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  puVar4 = (undefined8 *)*puVar6;
  puVar7 = puVar6;
  if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
    do {
      while (puVar2 = puVar4, puVar6 = puVar2, param_2 < (ulong)puVar2[4]) {
        puVar4 = (undefined8 *)*puVar2;
        puVar7 = puVar2;
        if ((undefined8 *)*puVar2 == (undefined8 *)0x0) goto LAB_10abfaee4;
      }
      if (param_2 <= (ulong)puVar2[4]) goto LAB_10abfaf38;
      puVar4 = (undefined8 *)puVar2[1];
    } while ((undefined8 *)puVar2[1] != (undefined8 *)0x0);
    puVar7 = puVar2 + 1;
  }
LAB_10abfaee4:
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[4] = param_2;
  puVar2[5] = 0;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[7] = 0xffffffffffffffff;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar6;
  *puVar7 = puVar2;
  puVar4 = puVar2;
  if (**(long **)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xe8) = **(long **)(param_1 + 0xe8);
    puVar4 = (undefined8 *)*puVar7;
  }
  func_0x000107c2b058(*(undefined8 *)(param_1 + 0xf0),puVar4);
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
LAB_10abfaf38:
  iVar1 = *(int *)(*(long *)(lVar5 + 0x850) + 0x30);
  if ((puVar2[6] == *(long *)(param_3 + 0x10)) &&
     (puVar2[7] == *(long *)(param_3 + 0x18) && *(int *)(puVar2 + 5) == iVar1)) {
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x10);
    puVar2[7] = *(undefined8 *)(param_3 + 0x18);
    puVar2[6] = lVar5;
    *(int *)(puVar2 + 5) = iVar1;
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10abfafa0; end: 10abfafab;  */

undefined8 FUN_10abfafa0(void)

{
  return 1;
}



/* Entry: 10abfafac; end: 10abfb12f;  */

void FUN_10abfafac(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined4 *param_8,long param_9)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 auStack_d8 [2];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined1 auStack_a0 [64];
  
  if (param_9 != 0) {
    param_9 = param_9 << 2;
    do {
      uVar1 = *param_8;
      lVar2 = param_7;
      func_0x00010a01e9ec(param_7,uVar1);
      func_0x000109519fd0(auStack_a0,param_6,lVar2 + 0x6c);
      uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0x1a8) + 0x4f0);
      puStack_a8 = (undefined4 *)0x0;
      puStack_b0 = (undefined4 *)0x0;
      puStack_b8 = (undefined4 *)0x0;
      uStack_c0 = 0;
      lStack_c8 = 0;
      lStack_d0 = 0;
      puVar3 = (undefined4 *)0x4;
      auStack_d8[0] = uVar1;
      __Znwm();
      puStack_b0 = puVar3 + 1;
      *puVar3 = uVar1;
      puStack_b8 = puVar3;
      puStack_a8 = puStack_b0;
      FUN_10abe4138(auStack_a0);
      uStack_e8 = uVar4;
      uStack_e4 = param_2;
      uStack_e0 = param_3;
      uStack_dc = param_4;
      func_0x00010a67960c(&lStack_d0,&uStack_e8);
      puVar3 = *(undefined4 **)(param_5 + 0x10);
      if (puVar3 < *(undefined4 **)(param_5 + 0x18)) {
        *puVar3 = auStack_d8[0];
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(long *)(puVar3 + 4) = lStack_c8;
        *(long *)(puVar3 + 2) = lStack_d0;
        *(undefined8 *)(puVar3 + 6) = uStack_c0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined4 **)(puVar3 + 10) = puStack_b0;
        *(undefined4 **)(puVar3 + 8) = puStack_b8;
        *(undefined4 **)(puVar3 + 0xc) = puStack_a8;
        uStack_c0 = 0;
        puStack_b8 = (undefined4 *)0x0;
        puStack_b0 = (undefined4 *)0x0;
        puStack_a8 = (undefined4 *)0x0;
        *(undefined4 **)(param_5 + 0x10) = puVar3 + 0xe;
      }
      else {
        lVar2 = param_5 + 8;
        FUN_10abffed0(lVar2,auStack_d8);
        *(long *)(param_5 + 0x10) = lVar2;
        if (puStack_b8 != (undefined4 *)0x0) {
          puStack_b0 = puStack_b8;
          __ZdlPv();
        }
      }
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      param_8 = param_8 + 1;
      param_9 = param_9 + -4;
    } while (param_9 != 0);
  }
  return;
}



/* Entry: 10abfb130; end: 10abfb273;  */

void FUN_10abfb130(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10abe3528(param_1,0);
  uStack_58 = 0x13;
  puStack_60 = &DAT_10f69b053;
  uStack_50 = 0x497cd84a0ee21db5;
  lVar3 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != lVar3) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      func_0x000107c2b074(auStack_80,&puStack_60);
      FUN_10a20e230(lVar3 + lVar1,auStack_80,auStack_80);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x50);
      lVar1 = lVar1 + 0x18;
    } while (uVar2 < (ulong)((*(long *)(param_1 + 0x58) - lVar3 >> 3) * -0x5555555555555555));
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != lVar3) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      func_0x000107c2b074(auStack_80,&puStack_60);
      FUN_10a20e230(lVar3 + lVar1,auStack_80,auStack_80);
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      uVar2 = uVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x68);
      lVar1 = lVar1 + 0x18;
    } while (uVar2 < (ulong)((*(long *)(param_1 + 0x70) - lVar3 >> 3) * -0x5555555555555555));
  }
  return;
}



/* Entry: 10abfb274; end: 10abfb993;  */

void FUN_10abfb274(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  short sVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int iVar39;
  ulong uVar40;
  long *plVar41;
  long lVar42;
  undefined4 *puVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ushort uVar49;
  ushort uVar50;
  float fVar51;
  short sVar53;
  undefined8 uVar52;
  short sVar55;
  undefined8 uVar54;
  short sVar56;
  short sVar57;
  long lVar58;
  short sVar59;
  short sVar60;
  ulong uStack_98;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  iVar7 = *(int *)(param_1 + 0xf8);
  lVar8 = (long)iVar7;
  uVar9 = *(uint *)(param_1 + 0xfc);
  uVar40 = (ulong)(int)uVar9;
  FUN_10abfafac();
  FUN_10abe45a0(param_1);
  lVar42 = **(long **)(param_1 + 0x100);
  func_0x00010983d048(param_1 + 0x140,uVar40 + 1);
  uVar25 = lVar8 * 0x10;
  if (uVar40 != 0xffffffffffffffff) {
    uVar28 = 0;
    puVar27 = (undefined8 *)(lVar42 + 8);
    do {
      if (lVar8 + 1 == 0) {
        fVar31 = 3.4028235e+38;
        fVar32 = 1.1754944e-38;
        fVar44 = 1.1754944e-38;
        fVar46 = 3.4028235e+38;
      }
      else {
        fVar32 = 1.1754944e-38;
        fVar44 = 1.1754944e-38;
        puVar33 = puVar27;
        lVar26 = lVar8 + 1;
        fVar31 = 3.4028235e+38;
        fVar46 = 3.4028235e+38;
        do {
          fVar47 = (float)puVar33[-1] + (float)*puVar33;
          fVar48 = (float)((ulong)puVar33[-1] >> 0x20) + (float)((ulong)*puVar33 >> 0x20);
          fVar31 = (float)((uint)fVar31 ^ ((uint)fVar31 ^ (uint)fVar47) & -(uint)(fVar47 < fVar31));
          fVar46 = (float)((uint)fVar46 ^ ((uint)fVar46 ^ (uint)fVar48) & -(uint)(fVar48 < fVar46));
          fVar32 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar47) & -(uint)(fVar32 < fVar47));
          fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar48) & -(uint)(fVar44 < fVar48));
          puVar33 = puVar33 + 2;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      if ((ulong)(*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) <= uVar28)
      goto LAB_10abfb94c;
      *(float *)(*(long *)(param_1 + 0x140) + uVar28 * 0x10) = fVar31;
      if ((ulong)(*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) <= uVar28)
      goto LAB_10abfb94c;
      *(float *)(*(long *)(param_1 + 0x140) + uVar28 * 0x10 + 4) = fVar46;
      if ((ulong)(*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) <= uVar28)
      goto LAB_10abfb94c;
      *(float *)(*(long *)(param_1 + 0x140) + uVar28 * 0x10 + 8) = fVar32;
      if ((ulong)(*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4) <= uVar28)
      goto LAB_10abfb94c;
      *(float *)(*(long *)(param_1 + 0x140) + uVar28 * 0x10 + 0xc) = fVar44;
      puVar27 = puVar27 + lVar8 * 2 + 2;
      bVar15 = uVar28 != uVar40;
      uVar28 = uVar28 + 1;
    } while (bVar15);
  }
  if (uVar9 != 0) {
    lVar26 = 0;
    uVar28 = 0;
    do {
      uVar34 = *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4;
      if ((uVar34 <= uVar28) || (uVar36 = uVar28 + 1, uVar34 <= uVar36)) goto LAB_10abfb94c;
      pfVar3 = (float *)(*(long *)(param_1 + 0x140) + lVar26);
      fVar31 = pfVar3[4];
      if (*pfVar3 <= pfVar3[4]) {
        fVar31 = *pfVar3;
      }
      *pfVar3 = fVar31;
      uVar34 = *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4;
      if ((uVar34 <= uVar28) || (uVar34 <= uVar36)) goto LAB_10abfb94c;
      lVar4 = *(long *)(param_1 + 0x140) + lVar26;
      fVar31 = *(float *)(lVar4 + 0x14);
      if (*(float *)(lVar4 + 4) <= *(float *)(lVar4 + 0x14)) {
        fVar31 = *(float *)(lVar4 + 4);
      }
      *(float *)(lVar4 + 4) = fVar31;
      uVar34 = *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4;
      if ((uVar34 <= uVar28) || (uVar34 <= uVar36)) goto LAB_10abfb94c;
      lVar4 = *(long *)(param_1 + 0x140) + lVar26;
      fVar31 = *(float *)(lVar4 + 0x18);
      if (*(float *)(lVar4 + 0x18) <= *(float *)(lVar4 + 8)) {
        fVar31 = *(float *)(lVar4 + 8);
      }
      *(float *)(lVar4 + 8) = fVar31;
      uVar34 = *(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 4;
      if ((uVar34 <= uVar28) || (uVar34 <= uVar36)) goto LAB_10abfb94c;
      lVar4 = *(long *)(param_1 + 0x140) + lVar26;
      fVar31 = *(float *)(lVar4 + 0x1c);
      if (*(float *)(lVar4 + 0x1c) <= *(float *)(lVar4 + 0xc)) {
        fVar31 = *(float *)(lVar4 + 0xc);
      }
      *(float *)(lVar4 + 0xc) = fVar31;
      lVar26 = lVar26 + 0x10;
      uVar28 = uVar36;
    } while (uVar36 != uVar9);
  }
  func_0x00010983d048(param_1 + 0x140,uVar40);
  lVar26 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != lVar26) {
    uStack_98 = 0;
    lVar38 = *(long *)(param_1 + 0x140);
    lVar4 = lVar8 + 1;
    lVar2 = uVar25 + 0x10;
    do {
      lVar16 = param_1;
      FUN_10abe5154();
      puVar20 = (ulong *)0x1;
      FUN_10a061940();
      if (puVar20 == (ulong *)0x0) {
        plVar41 = (long *)0x0;
      }
      else {
        plVar41 = (long *)*puVar20;
      }
      puVar43 = (undefined4 *)(lVar26 + uStack_98 * 0x38);
      plVar17 = plVar41;
      (**(code **)(*plVar41 + 0x28))();
      uVar10 = iVar7 * uVar9 * 0x60 *
               (int)((ulong)(*(long *)(puVar43 + 4) - *(long *)(puVar43 + 2)) >> 4);
      plVar18 = plVar41;
      (**(code **)(*plVar41 + 0xa0))();
      plVar19 = plVar17;
      (**(code **)(*plVar17 + 0x30))(plVar17,uVar10);
      puVar27 = *(undefined8 **)(puVar43 + 2);
      puVar33 = *(undefined8 **)(puVar43 + 4);
      if (puVar27 == puVar33) {
        uVar40 = 0;
      }
      else {
        uVar40 = 0;
        do {
          if (uVar9 != 0) {
            uVar29 = 0;
            lVar30 = 0;
            uVar28 = 0;
            uVar45 = *puVar27;
            fVar46 = (float)puVar27[1];
            fVar31 = (float)((ulong)uVar45 >> 0x20);
            fVar32 = (float)((ulong)puVar27[1] >> 0x20);
            lVar35 = lVar42;
            lVar26 = lVar42 + lVar8 * 0x10;
            uVar36 = uVar25;
            uVar34 = lVar8 + 2;
            do {
              pfVar3 = (float *)(lVar38 + uVar28 * 0x10);
              if ((((*pfVar3 <= fVar46) && (fVar44 = (float)uVar45, fVar44 <= pfVar3[2])) &&
                  (fVar31 <= pfVar3[3])) && (pfVar3[1] <= fVar32 && iVar7 != 0)) {
                uVar37 = 0;
                lVar5 = lVar42 + (uVar28 * lVar4 + lVar8) * 0x10;
                fVar47 = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x18);
                fVar48 = *(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 0x1c);
                bVar15 = false;
                bVar14 = true;
                if (fVar31 <= fVar48) {
                  bVar15 = false;
                  bVar14 = true;
                  if (!NAN(fVar44) && !NAN(fVar47)) {
                    bVar15 = fVar44 == fVar47;
                    bVar14 = fVar47 <= fVar44;
                  }
                }
                pfVar3 = (float *)(lVar42 + uVar28 * lVar4 * 0x10);
                fVar51 = *pfVar3 + pfVar3[2];
                uVar49 = 0;
                if (fVar48 <= fVar32) {
                  uVar49 = (ushort)((!bVar14 || bVar15) && fVar47 <= fVar46);
                }
                bVar15 = false;
                bVar14 = true;
                if (fVar31 <= pfVar3[1] + pfVar3[3]) {
                  bVar15 = false;
                  bVar14 = true;
                  if (!NAN(fVar44) && !NAN(fVar51)) {
                    bVar15 = fVar44 == fVar51;
                    bVar14 = fVar51 <= fVar44;
                  }
                }
                uVar21 = uVar29;
                uVar22 = uVar34;
                uVar50 = 0;
                if (pfVar3[1] + pfVar3[3] <= fVar32) {
                  uVar50 = (ushort)((!bVar14 || bVar15) && fVar51 <= fVar46);
                }
                do {
                  lVar5 = **(long **)(param_1 + 0x100);
                  uVar24 = (*(long **)(param_1 + 0x100))[1] - lVar5 >> 4;
                  if (((uVar24 <= uVar21) || (uVar24 <= uVar21 + 1)) ||
                     ((uVar24 <= uVar22 || (uVar24 <= uVar22 - 1)))) goto LAB_10abfb94c;
                  uVar52 = *(undefined8 *)(lVar26 + uVar37 + 0x20);
                  uVar54 = *(undefined8 *)(lVar26 + uVar37 + 0x28);
                  fVar47 = (float)uVar52 + (float)uVar54;
                  fVar48 = (float)((ulong)uVar52 >> 0x20) + (float)((ulong)uVar54 >> 0x20);
                  sVar56 = -(ushort)(fVar47 <= fVar46);
                  sVar57 = -(ushort)(fVar48 <= fVar32);
                  sVar11 = -(ushort)(fVar44 <= fVar47);
                  sVar53 = -(ushort)(fVar31 <= fVar48);
                  uVar52 = *(undefined8 *)(lVar35 + uVar37 + 0x10);
                  uVar54 = *(undefined8 *)(lVar35 + uVar37 + 0x18);
                  fVar47 = (float)uVar52 + (float)uVar54;
                  fVar48 = (float)((ulong)uVar52 >> 0x20) + (float)((ulong)uVar54 >> 0x20);
                  sVar59 = -(ushort)(fVar47 <= fVar46);
                  sVar60 = -(ushort)(fVar48 <= fVar32);
                  sVar12 = -(ushort)(fVar44 <= fVar47);
                  sVar55 = -(ushort)(fVar31 <= fVar48);
                  plVar6 = (long *)(lVar5 + lVar30 + uVar37);
                  lVar5 = lVar5 + uVar36 + uVar37;
                  iVar39 = (int)uVar40;
                  if ((ushort)((ushort)(((((byte)sVar11 & 1) + ((byte)sVar53 & 2) +
                                          ((byte)sVar56 & 4) + ((byte)sVar57 & 8) ^ 0xff) & 0xf) !=
                                       0) & (uVar50 ^ 0xffff)) == 0) {
                    lVar58 = *plVar6;
                    (plVar19 + uVar40 * 2)[1] = plVar6[1];
                    plVar19[uVar40 * 2] = lVar58;
                    lVar58 = *(long *)(lVar5 + 0x20);
                    (plVar19 + (ulong)(iVar39 + 1) * 2)[1] = *(long *)(lVar5 + 0x28);
                    plVar19[(ulong)(iVar39 + 1) * 2] = lVar58;
                    lVar58 = plVar6[2];
                    (plVar19 + (ulong)(iVar39 + 2) * 2)[1] = plVar6[3];
                    plVar19[(ulong)(iVar39 + 2) * 2] = lVar58;
                    lVar58 = *plVar6;
                    (plVar19 + (ulong)(iVar39 + 3) * 2)[1] = plVar6[1];
                    plVar19[(ulong)(iVar39 + 3) * 2] = lVar58;
                    uVar23 = iVar39 + 5;
                    lVar58 = *(long *)(lVar5 + 0x10);
                    (plVar19 + (ulong)(iVar39 + 4) * 2)[1] = *(long *)(lVar5 + 0x18);
                    plVar19[(ulong)(iVar39 + 4) * 2] = lVar58;
                    uVar1 = iVar39 + 6;
LAB_10abfb808:
                    uVar40 = (ulong)uVar1;
                    lVar58 = *(long *)(lVar5 + 0x20);
                    (plVar19 + (ulong)uVar23 * 2)[1] = *(long *)(lVar5 + 0x28);
                    plVar19[(ulong)uVar23 * 2] = lVar58;
                  }
                  else {
                    if (((((byte)sVar12 & 1) + ((byte)sVar55 & 2) +
                          ((byte)sVar59 & 4) + ((byte)sVar60 & 8) ^ 0xff) & 0xf) == 0) {
                      lVar58 = *plVar6;
                      (plVar19 + uVar40 * 2)[1] = plVar6[1];
                      plVar19[uVar40 * 2] = lVar58;
                      lVar58 = *(long *)(lVar5 + 0x20);
                      (plVar19 + (ulong)(iVar39 + 1) * 2)[1] = *(long *)(lVar5 + 0x28);
                      plVar19[(ulong)(iVar39 + 1) * 2] = lVar58;
                      uVar40 = (ulong)(iVar39 + 3);
                      lVar58 = plVar6[2];
                      (plVar19 + (ulong)(iVar39 + 2) * 2)[1] = plVar6[3];
                      plVar19[(ulong)(iVar39 + 2) * 2] = lVar58;
                    }
                    if ((uVar49 & 1) != 0) {
                      lVar58 = *plVar6;
                      (plVar19 + uVar40 * 2)[1] = plVar6[1];
                      plVar19[uVar40 * 2] = lVar58;
                      iVar39 = (int)uVar40;
                      uVar23 = iVar39 + 2;
                      lVar58 = *(long *)(lVar5 + 0x10);
                      (plVar19 + (ulong)(iVar39 + 1) * 2)[1] = *(long *)(lVar5 + 0x18);
                      plVar19[(ulong)(iVar39 + 1) * 2] = lVar58;
                      uVar1 = iVar39 + 3;
                      goto LAB_10abfb808;
                    }
                  }
                  uVar49 = NEON_uminv(CONCAT44(CONCAT22(sVar57,sVar56),CONCAT22(sVar53,sVar11)),2);
                  uVar50 = NEON_uminv(CONCAT44(CONCAT22(sVar60,sVar59),CONCAT22(sVar55,sVar12)),2);
                  uVar37 = uVar37 + 0x10;
                  uVar21 = uVar21 + 1;
                  uVar22 = uVar22 + 1;
                } while ((uVar25 & 0xffffffff0) != uVar37);
              }
              uVar28 = uVar28 + 1;
              uVar34 = uVar34 + lVar4;
              uVar36 = uVar36 + lVar2;
              lVar26 = lVar26 + lVar2;
              lVar30 = lVar30 + lVar2;
              uVar29 = uVar29 + lVar4;
              lVar35 = lVar35 + lVar2;
            } while (uVar28 != uVar9);
          }
          puVar27 = puVar27 + 2;
        } while (puVar27 != puVar33);
      }
      puStack_70 = &UNK_10f696c5b;
      uStack_68 = 0x57;
      if (uVar10 < (uint)((int)uVar40 << 4)) {
        FUN_10a0edfc4(&puStack_70);
LAB_10abfb94c:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10abfb950);
        (*pcVar13)();
      }
      lVar26 = param_3;
      FUN_10a190e68(param_3,*puVar43);
      *(long *)(lVar26 + 0xa8) = lVar16;
      (**(code **)(*plVar41 + 0x78))(plVar41,uVar40);
      (**(code **)(*plVar17 + 0x38))(plVar17);
      (**(code **)(*plVar17 + 0x40))(plVar17,0,0,(int)uVar40 << 4,(ulong)plVar18 & 0xffffffff);
      uStack_98 = uStack_98 + 1;
      lVar26 = *(long *)(param_1 + 8);
      uVar40 = (*(long *)(param_1 + 0x10) - lVar26 >> 3) * 0x6db6db6db6db6db7;
    } while (uStack_98 <= uVar40 && uVar40 - uStack_98 != 0);
  }
  return;
}



/* Entry: 10abfb994; end: 10abfba67;  */

undefined8 ** FUN_10abfb994(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 auStack_88 [2];
  char cStack_71;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c2b054(auStack_88,&UNK_10f69a315);
  FUN_10ab45dcc(&lStack_70,uVar2,auStack_88,1);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *(byte *)(lStack_70 + 0x279) = *(byte *)(lStack_70 + 0x279) | 2;
  FUN_10a044790(auStack_68);
  ppuVar1 = apuStack_60;
  (*(code *)*apuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  __Unwind_Resume();
  *ppuVar1 = &PTR_FUN_110c54ea0;
  ppuVar1[2] = (undefined8 *)0x0;
  ppuVar1[1] = (undefined8 *)0x0;
  ppuVar1[4] = (undefined8 *)0x0;
  ppuVar1[3] = (undefined8 *)0x0;
  ppuVar1[5] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar1 + 6) = 1;
  ppuVar1[8] = (undefined8 *)0x0;
  ppuVar1[7] = (undefined8 *)0x0;
  ppuVar1[10] = (undefined8 *)0x0;
  ppuVar1[9] = (undefined8 *)0x0;
  ppuVar1[0xc] = (undefined8 *)0x0;
  ppuVar1[0xb] = (undefined8 *)0x0;
  ppuVar1[0xe] = (undefined8 *)0x0;
  ppuVar1[0xd] = (undefined8 *)0x0;
  ppuVar1[0x10] = (undefined8 *)0x0;
  ppuVar1[0xf] = (undefined8 *)0x0;
  ppuVar1[0x12] = (undefined8 *)0x0;
  ppuVar1[0x11] = (undefined8 *)0x0;
  ppuVar1[0x14] = (undefined8 *)0x0;
  ppuVar1[0x13] = (undefined8 *)0x0;
  ppuVar1[0x16] = (undefined8 *)0x0;
  ppuVar1[0x15] = (undefined8 *)0x0;
  ppuVar1[0x18] = (undefined8 *)0x0;
  ppuVar1[0x17] = (undefined8 *)0x0;
  *(undefined1 *)(ppuVar1 + 0x19) = 1;
  *(undefined8 *)((long)ppuVar1 + 0xd4) = 0;
  *(undefined8 *)((long)ppuVar1 + 0xcc) = 0;
  *(undefined4 *)((long)ppuVar1 + 0xdc) = 0;
  *(undefined4 *)(ppuVar1 + 0x1c) = 2;
  FUN_10abfbb60();
  return ppuVar1;
}



/* Entry: 10abfba68; end: 10abfbb5f;  */

undefined8 * FUN_10abfba68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54ea0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  FUN_10abfbb60(param_1,2);
  return param_1;
}



/* Entry: 10abfbb60; end: 10abfbbe3;  */

void FUN_10abfbb60(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0x80;
  do {
    plVar1 = (long *)(param_1 + lVar5);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    while (lVar3 != lVar2) {
      lVar3 = lVar3 + -0x10;
      func_0x00010a1943a0();
    }
    plVar1[1] = lVar2;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 200);
  iVar4 = 0;
  do {
    *(int *)(param_1 + 0xd8) = iVar4;
    FUN_10abfbbfc(param_1,param_2);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 10abfbbe4; end: 10abfbbe7;  */

undefined8 * FUN_10abfbbe4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c54ea0;
  lVar1 = 0xb0;
  do {
    func_0x00010ac062b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x68);
  FUN_10ac0630c(param_1 + 0xd);
  FUN_10ac0630c(param_1 + 10);
  puStack_28 = param_1 + 7;
  FUN_10a044868(&puStack_28);
  FUN_10a0617bc(param_1 + 4);
  func_0x00010ac0637c(param_1 + 1);
  return param_1;
}



/* Entry: 10abfbbe8; end: 10abfbbfb;  */

void FUN_10abfbbe8(void)

{
  FUN_10abe5428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abfbbfc; end: 10abfc05f;  */

/* WARNING: Removing unreachable block (ram,0x00010abfbd38) */

void FUN_10abfbbfc(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uStack_128;
  long *plStack_120;
  char cStack_111;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0d0194(&lStack_a8,&lStack_108);
  uStack_b8 = 10;
  puStack_c0 = &DAT_10f69a35b;
  uStack_b0 = 0xd732ac4d99e43116;
  func_0x000107c2b074(&uStack_128,&puStack_c0);
  if (cStack_111 < '\0') {
    func_0x000107c3192c(&uStack_90,uStack_128,plStack_120);
  }
  else {
    plStack_88 = plStack_120;
    uStack_90 = uStack_128;
  }
  uStack_78 = uStack_110;
  uStack_70 = 0x500000000;
  uStack_64 = 0;
  uStack_60 = 0;
  iStack_68 = param_2;
  FUN_10ab6f520(&lStack_108,&uStack_90,1);
  lVar11 = lStack_a8;
  *(undefined4 *)(lStack_a8 + 0xf0) = (undefined4)lStack_108;
  if ((long *)(lStack_a8 + 0xf0) != &lStack_108) {
    FUN_10a1903c4(lStack_a8 + 0xf8,lStack_100,lStack_f8,
                  (lStack_f8 - lStack_100 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar11 + 0x118) = uStack_e0;
  *(long **)(lVar11 + 0x110) = plStack_e8;
  *(undefined8 *)(lVar11 + 0x128) = uStack_d0;
  *(undefined8 *)(lVar11 + 0x120) = uStack_d8;
  *(undefined8 *)(lVar11 + 0x130) = uStack_c8;
  plStack_98 = &lStack_100;
  func_0x00010a190844(&plStack_98);
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  *(undefined8 *)(lStack_a8 + 0xe8) = 0;
  uVar10 = (ulong)((uint)(param_2 * *(int *)(lStack_a8 + 0xf0) * 0x1fe) >> 2);
  lVar11 = *(long *)(lStack_a8 + 0x10);
  uVar12 = *(long *)(lStack_a8 + 0x18) - lVar11;
  if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
    if (uVar10 < uVar12) {
      *(ulong *)(lStack_a8 + 0x18) = lVar11 + uVar10;
    }
  }
  else {
    func_0x000107c27d58((long *)(lStack_a8 + 0x10),uVar10 - uVar12);
  }
  uVar3 = *(uint *)(param_1 + 0xd8);
  if (2 < uVar3) goto LAB_10abfbfdc;
  uStack_128 = 0;
  puVar8 = &uStack_128;
  FUN_10a1995d0(&uStack_90,&lStack_108,puVar8,&lStack_a8);
  plVar13 = (long *)(param_1 + 0x80 + (ulong)uVar3 * 0x18);
  puVar1 = (undefined8 *)plVar13[1];
  if (puVar1 < (undefined8 *)plVar13[2]) {
    puVar1[1] = plStack_88;
    *puVar1 = uStack_90;
    plVar13[1] = (long)(puVar1 + 2);
LAB_10abfbeac:
    if ((2 < *(uint *)(param_1 + 0xd8)) ||
       (plVar13 = (long *)(param_1 + 0x80 + (ulong)*(uint *)(param_1 + 0xd8) * 0x18),
       lVar11 = plVar13[1], *plVar13 == lVar11)) goto LAB_10abfbfdc;
    plVar13 = *(long **)(lVar11 + -0x10);
    if (*(char *)((long)plVar13 + 0xb9) != '\x01') {
      *(undefined1 *)((long)plVar13 + 0xb9) = 1;
      (**(code **)(*plVar13 + 0xa0))();
      plVar13 = *(long **)(lVar11 + -0x10);
    }
    puVar8 = (undefined8 *)0x1;
    FUN_10a061940(plVar13);
    if (puVar8 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)*puVar8;
    }
    if (*(long *)(lStack_a8 + 0x18) != *(long *)(lStack_a8 + 0x10)) {
      plVar7 = plVar13;
      (**(code **)(*plVar13 + 0x28))();
      lVar11 = *(long *)(lStack_a8 + 0x10);
      lVar2 = *(long *)(lStack_a8 + 0x18);
      (**(code **)(*plVar13 + 0xa0))(plVar13);
      (**(code **)(*plVar7 + 0x10))(plVar7,lVar11,lVar2 - lVar11,0,plVar13);
    }
    if (plStack_a0 != (long *)0x0) {
      plVar13 = plStack_a0 + 1;
      do {
        lVar11 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar11 = (long)puVar1 - *plVar13;
    uVar10 = (lVar11 >> 4) + 1;
    if (uVar10 >> 0x3c == 0) {
      uVar9 = plVar13[2] - *plVar13;
      uVar12 = (long)uVar9 >> 3;
      if (uVar12 <= uVar10) {
        uVar12 = uVar10;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar12 = 0xfffffffffffffff;
      }
      plStack_e8 = plVar13;
      FUN_10ac00674();
      lVar2 = *plVar13;
      puVar1 = (undefined8 *)(uVar12 + lVar11);
      lVar11 = (long)puVar1 - (plVar13[1] - lVar2);
      puVar1[1] = plStack_88;
      *puVar1 = uStack_90;
      uStack_90 = 0;
      plStack_88 = (long *)0x0;
      _memcpy(lVar11,lVar2);
      lStack_108 = *plVar13;
      *plVar13 = lVar11;
      plVar13[1] = (long)(puVar1 + 2);
      lStack_f0 = plVar13[2];
      plVar13[2] = uVar12 + (long)puVar8 * 0x10;
      lStack_100 = lStack_108;
      lStack_f8 = lStack_108;
      func_0x00010ac006a8(&lStack_108);
      plVar7 = plStack_88;
      plVar13[1] = (long)(puVar1 + 2);
      if (plStack_88 != (long *)0x0) {
        plVar13 = plStack_88 + 1;
        do {
          lVar11 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      goto LAB_10abfbeac;
    }
  }
  FUN_10ac00660();
LAB_10abfbfdc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abfbfe0);
  (*pcVar6)();
}



/* Entry: 10abfc060; end: 10abfc443;  */

void FUN_10abfc060(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 *puVar15;
  
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))(param_1,param_3);
  puVar1 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[1] != puVar1) {
    uVar32 = NEON_fmov(0x3f800000,4);
    puVar25 = (undefined4 *)param_1[1];
    do {
      plVar5 = param_1;
      FUN_10abe5154();
      plVar9 = (long *)0x1;
      FUN_10a061940();
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)*plVar9;
      }
      plVar6 = plVar9;
      (**(code **)(*plVar9 + 0x28))();
      if (*(undefined8 **)(puVar25 + 2) == *(undefined8 **)(puVar25 + 4)) {
        uVar23 = 0;
      }
      else {
        iVar17 = 0;
        puVar14 = *(undefined8 **)(puVar25 + 2);
        do {
          puVar15 = puVar14 + 2;
          fVar27 = (float)((ulong)uVar32 >> 0x20);
          iVar17 = ((int)(float)(int)(((float)puVar14[1] + (float)uVar32) * 0.5 * 10.0) -
                   (int)(float)(int)(((float)*puVar14 + (float)uVar32) * 0.5 * 10.0)) *
                   ((int)(float)(int)(((float)((ulong)puVar14[1] >> 0x20) + fVar27) * 0.5 * 17.0) -
                   (int)(float)(int)(((float)((ulong)*puVar14 >> 0x20) + fVar27) * 0.5 * 17.0)) +
                   iVar17;
          puVar14 = puVar15;
        } while (puVar15 != *(undefined8 **)(puVar25 + 4));
        uVar23 = iVar17 * 0x30;
      }
      plVar7 = plVar9;
      (**(code **)(*plVar9 + 0xa0))(plVar9);
      plVar8 = plVar6;
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar23);
      pfVar16 = *(float **)(puVar25 + 2);
      pfVar2 = *(float **)(puVar25 + 4);
      if (pfVar16 == pfVar2) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          iVar17 = (int)((pfVar16[1] + 1.0) * 0.5 * 17.0);
          iVar18 = (int)((pfVar16[3] + 1.0) * 0.5 * 17.0);
          if (iVar17 < iVar18) {
            iVar19 = (int)((*pfVar16 + 1.0) * 0.5 * 10.0);
            iVar20 = (int)((pfVar16[2] + 1.0) * 0.5 * 10.0);
            do {
              if (iVar19 < iVar20) {
                fVar27 = (float)iVar17 * 0.05882353 + (float)iVar17 * 0.05882353 + -1.0;
                fVar28 = (float)(iVar17 + 1) * 0.05882353;
                fVar28 = fVar28 + fVar28 + -1.0;
                iVar21 = iVar19;
                do {
                  lVar22 = 0;
                  fVar29 = (float)iVar21;
                  iVar21 = iVar21 + 1;
                  fVar29 = fVar29 * 0.1 + fVar29 * 0.1 + -1.0;
                  fVar30 = (float)iVar21 * 0.1 + (float)iVar21 * 0.1 + -1.0;
                  fStack_a8 = *pfVar16;
                  if (*pfVar16 <= fVar29) {
                    fStack_a8 = fVar29;
                  }
                  fVar29 = pfVar16[1];
                  if (pfVar16[1] <= fVar27) {
                    fVar29 = fVar27;
                  }
                  fVar31 = pfVar16[2];
                  if (fVar30 <= pfVar16[2]) {
                    fVar31 = fVar30;
                  }
                  fStack_a4 = pfVar16[3];
                  if (fVar28 <= pfVar16[3]) {
                    fStack_a4 = fVar28;
                  }
                  uStack_b8 = (undefined *)CONCAT44(fVar29,fVar31);
                  lStack_b0 = CONCAT44(fStack_a4,fVar31);
                  ppuVar10 = &puStack_c0;
                  bVar3 = true;
                  do {
                    bVar12 = bVar3;
                    plVar13 = plVar8 + uVar24 + lVar22 * 3;
                    puVar11 = ppuVar10[1];
                    *plVar13 = CONCAT44(fVar29,fStack_a8);
                    plVar13[1] = (long)puVar11;
                    plVar13[2] = (&lStack_b0)[lVar22];
                    lVar22 = 1;
                    ppuVar10 = (undefined **)&uStack_b8;
                    bVar3 = false;
                  } while (bVar12);
                  uVar24 = (ulong)((int)uVar24 + 6);
                } while (iVar21 != iVar20);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 != iVar18);
          }
          pfVar16 = pfVar16 + 4;
        } while (pfVar16 != pfVar2);
      }
      puStack_c0 = &UNK_10f696c5b;
      uStack_b8 = (undefined *)0x57;
      if (uVar23 < (uint)((int)uVar24 << 3)) {
        FUN_10a0edfc4(&puStack_c0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10abfc400);
        (*pcVar4)();
      }
      puVar26 = puVar25 + 0xe;
      lVar22 = param_3;
      FUN_10a190e68(param_3,*puVar25);
      *(long **)(lVar22 + 0xa8) = plVar5;
      (**(code **)(*plVar9 + 0x78))(plVar9,uVar24);
      (**(code **)(*plVar6 + 0x38))(plVar6);
      (**(code **)(*plVar6 + 0x40))(plVar6,0,0,(int)uVar24 << 3,plVar7);
      puVar25 = puVar26;
    } while (puVar26 != puVar1);
  }
  return;
}



/* Entry: 10abfc444; end: 10abfc517;  */

/* WARNING: Removing unreachable block (ram,0x00010abe3af0) */
/* WARNING: Removing unreachable block (ram,0x00010abe37e0) */
/* WARNING: Removing unreachable block (ram,0x00010abe384c) */
/* WARNING: Removing unreachable block (ram,0x00010abe379c) */
/* WARNING: Removing unreachable block (ram,0x00010abe36c8) */
/* WARNING: Removing unreachable block (ram,0x00010abe3734) */
/* WARNING: Removing unreachable block (ram,0x00010abe3914) */
/* WARNING: Removing unreachable block (ram,0x00010abe39b4) */
/* WARNING: Removing unreachable block (ram,0x00010abe3a20) */
/* WARNING: Removing unreachable block (ram,0x00010abe3b28) */
/* WARNING: Removing unreachable block (ram,0x00010abe394c) */

void FUN_10abfc444(undefined8 param_1,ulong param_2,float param_3,float param_4,long param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  undefined4 *puVar11;
  long in_x4;
  long *****ppppplVar12;
  long ****pppplVar13;
  float fVar14;
  float *pfVar15;
  ulong uVar16;
  long ***ppplVar17;
  undefined8 uVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  float fStack_328;
  float fStack_324;
  undefined4 auStack_320 [2];
  long ***ppplStack_318;
  long ***ppplStack_310;
  long ***ppplStack_308;
  long ***ppplStack_300;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  undefined1 auStack_2e4 [64];
  undefined4 uStack_2a4;
  undefined1 uStack_228;
  undefined7 uStack_227;
  long ***ppplStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long ***ppplStack_200;
  long ****pppplStack_1f8;
  undefined1 uStack_1e1;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  long ***ppplStack_190;
  long ****pppplStack_188;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  long ***ppplStack_150;
  long ****pppplStack_148;
  undefined8 auStack_140 [2];
  char acStack_129 [33];
  long lStack_108;
  undefined8 auStack_88 [2];
  char cStack_71;
  long lStack_70;
  undefined1 auStack_68 [8];
  long ****apppplStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(undefined8 *)(param_5 + 0x20);
  func_0x000107c2b054(auStack_88,&UNK_10f69a315);
  FUN_10ab45dcc(&lStack_70,uVar18,auStack_88,1);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *(byte *)(lStack_70 + 0x279) = *(byte *)(lStack_70 + 0x279) | 2;
  FUN_10a044790(auStack_68);
  pppppplVar9 = (long ******)apppplStack_60;
  (*(code *)*apppplStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  __Unwind_Resume();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_210 = (long *****)pppppplVar9;
  if (lRam00000001137ec638 != -1) {
    ppppplStack_160 = (long *****)&ppppplStack_210;
    ppppplStack_1a0 = (long *****)&ppppplStack_160;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec638,&ppppplStack_1a0,FUN_10ac09df0);
  }
  uStack_1b8 = 0xc;
  puStack_1c0 = &DAT_10f69b067;
  uStack_1b0 = 0xc3e1946cddf186a4;
  FUN_10abfc520(pppppplVar9 + 7,0);
  pppppplVar10 = pppppplVar9 + 10;
  ppppplVar19 = *pppppplVar10;
  ppppplVar12 = pppppplVar9[0xb];
  if (pppppplVar9[0xb] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar12 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar12[-2]);
      ppppplVar12 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    pppppplVar9[0xb] = ppppplVar19;
  }
  pppppplVar8 = pppppplVar9 + 0xd;
  ppppplVar19 = *pppppplVar8;
  ppppplVar12 = pppppplVar9[0xe];
  if (pppppplVar9[0xe] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar12 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar12[-2]);
      ppppplVar12 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    pppppplVar9[0xe] = ppppplVar19;
  }
  uStack_1d8 = 0xc;
  puStack_1e0 = &DAT_10f69b074;
  uStack_1d0 = 0x3d769d59ea032204;
  if (0 < *(int *)((long)pppppplVar9 + 0xd4)) {
    iVar21 = 0;
    do {
      FUN_10a0ee900(&ppppplStack_160,&UNK_10f69b081,0xd);
      ppppplVar19 = pppppplVar9[8];
      if (ppppplVar19 < pppppplVar9[9]) {
        ppppplVar19[2] = (long ****)ppplStack_150;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_158;
        *ppppplVar19 = (long ****)ppppplStack_160;
        ppppplStack_158 = (long *****)0x0;
        ppplStack_150 = (long ***)0x0;
        ppppplStack_160 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar7 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar7 = pppppplVar9 + 7;
        FUN_10ab14008(pppppplVar7,&ppppplStack_160);
      }
      pppppplVar9[8] = (long *****)pppppplVar7;
      FUN_10a0ee900(&ppppplStack_160,&UNK_10f69b08f,10);
      ppppplVar19 = pppppplVar9[8];
      if (ppppplVar19 < pppppplVar9[9]) {
        ppppplVar19[2] = (long ****)ppplStack_150;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_158;
        *ppppplVar19 = (long ****)ppppplStack_160;
        ppppplStack_158 = (long *****)0x0;
        ppplStack_150 = (long ***)0x0;
        ppppplStack_160 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar7 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar7 = pppppplVar9 + 7;
        FUN_10ab14008(pppppplVar7,&ppppplStack_160);
      }
      pppppplVar9[8] = (long *****)pppppplVar7;
      FUN_10a0ee900(&ppppplStack_160,&UNK_10f69b09a,0xb);
      ppppplVar19 = pppppplVar9[8];
      if (ppppplVar19 < pppppplVar9[9]) {
        ppppplVar19[2] = (long ****)ppplStack_150;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_158;
        *ppppplVar19 = (long ****)ppppplStack_160;
        ppppplStack_158 = (long *****)0x0;
        ppplStack_150 = (long ***)0x0;
        ppppplStack_160 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar7 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar7 = pppppplVar9 + 7;
        FUN_10ab14008(pppppplVar7,&ppppplStack_160);
      }
      pppppplVar9[8] = (long *****)pppppplVar7;
      FUN_10a0ee900(&ppppplStack_160,&UNK_10f69b0a6,0xe);
      ppplStack_190 = ppplStack_150;
      ppppplStack_198 = ppppplStack_158;
      ppppplStack_1a0 = ppppplStack_160;
      ppppplStack_158 = (long *****)0x0;
      ppplStack_150 = (long ***)0x0;
      ppppplStack_160 = (long *****)0x0;
      pppplStack_188 = (long ****)0x0;
      func_0x000107c2b080(&ppppplStack_1a0);
      if ((long)ppplStack_190 < 0) {
        func_0x000107c3192c(&ppppplStack_160,ppppplStack_1a0,ppppplStack_198);
      }
      else {
        ppppplStack_158 = ppppplStack_198;
        ppppplStack_160 = ppppplStack_1a0;
        ppplStack_150 = ppplStack_190;
      }
      pppplStack_148 = pppplStack_188;
      FUN_10a0d9f14(&ppppplStack_210,&ppppplStack_160,1,&uStack_1e1);
      FUN_10abfc5a0(pppppplVar10,&ppppplStack_210);
      FUN_10a0da1b8(&ppppplStack_210,ppppplStack_208);
      if ((long)ppplStack_190 < 0) {
        func_0x000107c3192c(&ppppplStack_160,ppppplStack_1a0,ppppplStack_198);
      }
      else {
        ppppplStack_158 = ppppplStack_198;
        ppppplStack_160 = ppppplStack_1a0;
        ppplStack_150 = ppplStack_190;
      }
      pppplStack_148 = pppplStack_188;
      func_0x000107c2b074(auStack_140,&puStack_1c0);
      FUN_10a0d9f14(&ppppplStack_210,&ppppplStack_160,2,&uStack_1e1);
      FUN_10abfc5a0(pppppplVar8,&ppppplStack_210);
      FUN_10a0da1b8(&ppppplStack_210,ppppplStack_208);
      lVar22 = 0;
      do {
        if (acStack_129[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar22));
        }
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != -0x40);
      ppppplVar19 = pppppplVar9[0xb];
      if (pppppplVar9[10] == ppppplVar19) goto LAB_10abe3ce0;
      func_0x000107c2b074(&ppppplStack_160,&puStack_1e0);
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_160,&ppppplStack_160);
      ppppplVar19 = pppppplVar9[0xe];
      if (pppppplVar9[0xd] == ppppplVar19) goto LAB_10abe3ce0;
      func_0x000107c2b074(&ppppplStack_160,&puStack_1e0);
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_160,&ppppplStack_160);
      if ((long)ppplStack_190 < 0) {
        __ZdlPv(ppppplStack_1a0);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)((long)pppppplVar9 + 0xd4));
  }
  FUN_10a0ee900(&ppppplStack_160,&UNK_10f69b0a6,0xe);
  ppplStack_200 = ppplStack_150;
  ppppplStack_208 = ppppplStack_158;
  ppppplStack_210 = ppppplStack_160;
  ppppplStack_158 = (long *****)0x0;
  ppplStack_150 = (long ***)0x0;
  ppppplStack_160 = (long *****)0x0;
  pppplStack_1f8 = (long ****)0x0;
  func_0x000107c2b080(&ppppplStack_210);
  if ((long)ppplStack_200 < 0) {
    func_0x000107c3192c(&ppppplStack_160,ppppplStack_210,ppppplStack_208);
  }
  else {
    ppppplStack_158 = ppppplStack_208;
    ppppplStack_160 = ppppplStack_210;
    ppplStack_150 = ppplStack_200;
  }
  pppplStack_148 = pppplStack_1f8;
  FUN_10a0d9f14(&ppppplStack_1a0,&ppppplStack_160,1,&uStack_1e1);
  FUN_10abfc5a0(pppppplVar10,&ppppplStack_1a0);
  FUN_10a0da1b8(&ppppplStack_1a0,ppppplStack_198);
  if ((long)ppplStack_200 < 0) {
    func_0x000107c3192c(&ppppplStack_160,ppppplStack_210,ppppplStack_208);
  }
  else {
    ppppplStack_158 = ppppplStack_208;
    ppppplStack_160 = ppppplStack_210;
    ppplStack_150 = ppplStack_200;
  }
  pppplStack_148 = pppplStack_1f8;
  func_0x000107c2b074(auStack_140,&puStack_1c0);
  puVar11 = (undefined4 *)&uStack_1e1;
  FUN_10a0d9f14(&ppppplStack_1a0,&ppppplStack_160);
  FUN_10abfc5a0(pppppplVar8,&ppppplStack_1a0);
  FUN_10a0da1b8(&ppppplStack_1a0,ppppplStack_198);
  lVar22 = 0;
  do {
    if (acStack_129[lVar22] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar22));
    }
    lVar22 = lVar22 + -0x20;
  } while (lVar22 != -0x40);
  ppppplVar19 = pppppplVar9[0xb];
  if (pppppplVar9[10] != ppppplVar19) {
    func_0x000107c2b074(&ppppplStack_160,&puStack_1e0);
    FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_160,&ppppplStack_160);
    ppppplVar19 = pppppplVar9[0xe];
    if (pppppplVar9[0xd] != ppppplVar19) {
      func_0x000107c2b074(&ppppplStack_160,&puStack_1e0);
      pppppplVar10 = &ppppplStack_160;
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_160);
      ppppplStack_1a0 = (long *****)0x0;
      FUN_10a3b1e74(&ppppplStack_160,&ppppplStack_1a0);
      func_0x00010a015c50(pppppplVar9 + 4,&ppppplStack_160);
      ppppplVar19 = pppppplVar9[4];
      func_0x000107c2b054(&uStack_228,&UNK_10f69b0b5);
      if (*(char *)((long)ppppplVar19 + 0x6f) < '\0') {
        __ZdlPv(ppppplVar19[0xb]);
      }
      ppppplVar19[0xc] = (long ****)ppplStack_220;
      ppppplVar19[0xb] = (long ****)CONCAT71(uStack_227,uStack_228);
      ppppplVar19[0xd] = (long ****)CONCAT17(uStack_211,uStack_218);
      uStack_211 = 0;
      uStack_228 = 0;
      (*(code *)(*pppppplVar9)[9])(pppppplVar9);
      pppplVar13 = pppppplVar9[4][0x45];
      if (pppppplVar9[4][0x46] != pppplVar13) {
        ppplVar17 = *pppplVar13;
        ppplStack_190 = ppplVar17 + 8;
        uVar2 = *(ushort *)((long)ppplVar17 + 0x129);
        *(ushort *)((long)ppplVar17 + 0x129) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
        *(ushort *)(ppplVar17 + 0xe) =
             *(ushort *)(ppplVar17 + 0xe) & 0xff80 | *(ushort *)(ppplVar17 + 0xe) + 1 & 0x7f;
        pppplStack_188 = (long ****)CONCAT71(pppplStack_188._1_7_,1);
        ppppplStack_1a0 = (long *****)FUN_10a1d3648;
        ppppplStack_198 = (long *****)&PTR_FUN_110bad818;
        func_0x00010a332748((long)ppplVar17 + 0x219,0);
        func_0x00010a332700((long)ppplVar17 + 0x21a,0);
        uVar18 = 1;
        func_0x00010a3326b8(ppplVar17 + 0x43,1);
        FUN_10a044790(&ppppplStack_1a0);
        (*(code *)*ppppplStack_198)(&ppppplStack_198);
        FUN_10a044790(&ppplStack_150);
        pppppplVar9 = (long ******)&pppplStack_148;
        (*(code *)*pppplStack_148)();
        pppppplVar8 = (long ******)ppppplStack_158;
        if ((long ******)ppppplStack_158 != (long ******)0x0) {
          pppppplVar7 = (long ******)(ppppplStack_158 + 1);
          do {
            ppppplVar19 = *pppppplVar7;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar7,0x10);
            if (bVar6) {
              *pppppplVar7 = (long *****)((long)ppppplVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppplVar19 == (long *****)0x0) {
            (*(code *)(*ppppplStack_158)[2])(ppppplStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppplVar9 = pppppplVar8;
          }
        }
        if ((long)ppplStack_200 < 0) {
          pppppplVar9 = (long ******)ppppplStack_210;
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
          return;
        }
        ___stack_chk_fail();
        if ((long)ppplStack_200 < 0) {
          __ZdlPv(ppppplStack_210);
        }
        __Unwind_Resume();
        if (in_x4 != 0) {
          pppplVar13 = *pppppplVar9[0x20];
          puVar1 = puVar11 + in_x4;
          iVar21 = *(int *)((long)pppppplVar9 + 0xfc) + 1;
          uVar3 = iVar21 + iVar21 * *(int *)(pppppplVar9 + 0x1f);
          do {
            uVar25 = (undefined4)param_2;
            uStack_2a4 = *puVar11;
            pppppplVar8 = pppppplVar10;
            func_0x00010a01e9ec();
            func_0x000109519fd0(auStack_2e4,uVar18,(long)pppppplVar8 + 0x6c);
            uVar31 = *(undefined4 *)(pppppplVar8[0x35] + 0x9e);
            ppplStack_2f0 = (long ***)0x0;
            ppplStack_2f8 = (long ***)0x0;
            ppplStack_300 = (long ***)0x0;
            ppplStack_308 = (long ***)0x0;
            ppplStack_310 = (long ***)0x0;
            ppplStack_318 = (long ***)0x0;
            auStack_320[0] = uStack_2a4;
            FUN_10abac094(&ppplStack_300,&uStack_2a4);
            FUN_10abe4138(auStack_2e4);
            uStack_330 = uVar31;
            uStack_32c = uVar25;
            fStack_328 = param_3;
            fStack_324 = param_4;
            func_0x00010a67960c(&ppplStack_318,&uStack_330);
            if (ppplStack_318 == ppplStack_310) {
LAB_10abe4118:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10abe411c);
              (*pcVar5)();
            }
            if ((int)uVar3 < 1) {
              fVar33 = 0.0;
              fVar30 = 0.0;
            }
            else {
              param_3 = *(float *)(ppplStack_310 + -2);
              param_4 = *(float *)((long)ppplStack_310 + -0xc);
              fVar30 = 0.0;
              fVar14 = 3.4028235e+38;
              fVar33 = 0.0;
              pfVar15 = (float *)((long)pppplVar13 + 4);
              uVar16 = (ulong)uVar3;
              do {
                fVar28 = pfVar15[-1] - param_3;
                fVar32 = *pfVar15 - param_4;
                fVar29 = SQRT(fVar32 * fVar32 + fVar28 * fVar28);
                fVar28 = pfVar15[-1];
                fVar32 = *pfVar15;
                if (fVar14 <= fVar29) {
                  fVar28 = fVar30;
                  fVar32 = fVar33;
                  fVar29 = fVar14;
                }
                fVar14 = fVar29;
                fVar33 = fVar32;
                fVar30 = fVar28;
                pfVar15 = pfVar15 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            *(float *)(ppplStack_310 + -2) = fVar30;
            if ((ppplStack_318 == ppplStack_310) ||
               (*(float *)((long)ppplStack_310 + -0xc) = fVar33, ppplStack_318 == ppplStack_310))
            goto LAB_10abe4118;
            if ((int)uVar3 < 1) {
              param_2 = 0x7f7fffff;
              uVar31 = 0x7f7fffff;
            }
            else {
              uVar23 = 0x7f7fffff;
              param_3 = *(float *)(ppplStack_310 + -1);
              param_4 = *(float *)((long)ppplStack_310 + -4);
              pfVar15 = (float *)((long)pppplVar13 + 4);
              uVar16 = (ulong)uVar3;
              uVar26 = uVar23;
              uVar24 = uVar23;
              do {
                fVar30 = pfVar15[-1] - param_3;
                fVar33 = *pfVar15 - param_4;
                fVar30 = SQRT(fVar33 * fVar33 + fVar30 * fVar30);
                bVar6 = (float)uVar24 <= fVar30;
                uVar27 = (ulong)(uint)fVar30;
                if (bVar6) {
                  uVar27 = uVar24;
                }
                uVar24 = (ulong)(uint)*pfVar15;
                if (bVar6) {
                  uVar24 = uVar23;
                }
                uVar31 = (undefined4)uVar24;
                param_2 = (ulong)(uint)pfVar15[-1];
                if (bVar6) {
                  param_2 = uVar26;
                }
                pfVar15 = pfVar15 + 4;
                uVar16 = uVar16 - 1;
                uVar23 = uVar24;
                uVar26 = param_2;
                uVar24 = uVar27;
              } while (uVar16 != 0);
            }
            *(int *)(ppplStack_310 + -1) = (int)param_2;
            if (ppplStack_318 == ppplStack_310) goto LAB_10abe4118;
            *(undefined4 *)((long)ppplStack_310 + -4) = uVar31;
            ppppplVar19 = pppppplVar9[2];
            if (ppppplVar19 < pppppplVar9[3]) {
              *(undefined4 *)ppppplVar19 = auStack_320[0];
              ppppplVar19[1] = (long ****)0x0;
              ppppplVar19[2] = (long ****)0x0;
              ppppplVar19[3] = (long ****)0x0;
              ppppplVar19[4] = (long ****)0x0;
              ppppplVar19[2] = (long ****)ppplStack_310;
              ppppplVar19[1] = (long ****)ppplStack_318;
              ppppplVar19[3] = (long ****)ppplStack_308;
              ppplStack_318 = (long ***)0x0;
              ppplStack_310 = (long ***)0x0;
              ppppplVar19[5] = (long ****)0x0;
              ppppplVar19[6] = (long ****)0x0;
              ppppplVar19[5] = (long ****)ppplStack_2f8;
              ppppplVar19[4] = (long ****)ppplStack_300;
              ppppplVar19[6] = (long ****)ppplStack_2f0;
              ppplStack_308 = (long ***)0x0;
              ppplStack_300 = (long ***)0x0;
              ppplStack_2f8 = (long ***)0x0;
              ppplStack_2f0 = (long ***)0x0;
              pppppplVar9[2] = ppppplVar19 + 7;
            }
            else {
              pppppplVar8 = pppppplVar9 + 1;
              FUN_10abffed0(pppppplVar8,auStack_320);
              pppppplVar9[2] = (long *****)pppppplVar8;
              if ((long ****)ppplStack_300 != (long ****)0x0) {
                ppplStack_2f8 = ppplStack_300;
                __ZdlPv();
              }
            }
            if ((long ****)ppplStack_318 != (long ****)0x0) {
              ppplStack_310 = ppplStack_318;
              __ZdlPv();
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar1);
        }
        return;
      }
      FUN_10a00946c(&UNK_10f6921f0);
    }
  }
LAB_10abe3ce0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abe3ce4);
  (*pcVar5)();
}



/* Entry: 10abfc518; end: 10abfc51f;  */

/* WARNING: Removing unreachable block (ram,0x00010abe3af0) */
/* WARNING: Removing unreachable block (ram,0x00010abe37e0) */
/* WARNING: Removing unreachable block (ram,0x00010abe384c) */
/* WARNING: Removing unreachable block (ram,0x00010abe379c) */
/* WARNING: Removing unreachable block (ram,0x00010abe36c8) */
/* WARNING: Removing unreachable block (ram,0x00010abe3734) */
/* WARNING: Removing unreachable block (ram,0x00010abe3914) */
/* WARNING: Removing unreachable block (ram,0x00010abe39b4) */
/* WARNING: Removing unreachable block (ram,0x00010abe3a20) */
/* WARNING: Removing unreachable block (ram,0x00010abe3b28) */
/* WARNING: Removing unreachable block (ram,0x00010abe394c) */

void FUN_10abfc518(undefined8 param_1,ulong param_2,float param_3,float param_4,long ******param_5)

{
  long ******pppppplVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  undefined8 uVar10;
  long ******pppppplVar11;
  undefined4 *puVar12;
  long in_x4;
  long *****ppppplVar13;
  long ****pppplVar14;
  float fVar15;
  float *pfVar16;
  ulong uVar17;
  long ***ppplVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  undefined4 auStack_290 [2];
  long ***ppplStack_288;
  long ***ppplStack_280;
  long ***ppplStack_278;
  long ***ppplStack_270;
  long ***ppplStack_268;
  long ***ppplStack_260;
  undefined1 auStack_254 [64];
  undefined4 uStack_214;
  undefined1 uStack_198;
  undefined7 uStack_197;
  long ***ppplStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long ***ppplStack_170;
  long ****pppplStack_168;
  undefined1 uStack_151;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long ***ppplStack_100;
  long ****pppplStack_f8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long ***ppplStack_c0;
  long ****pppplStack_b8;
  undefined8 auStack_b0 [2];
  char acStack_99 [33];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_180 = (long *****)param_5;
  if (lRam00000001137ec638 != -1) {
    ppppplStack_d0 = (long *****)&ppppplStack_180;
    ppppplStack_110 = (long *****)&ppppplStack_d0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ec638,&ppppplStack_110,FUN_10ac09df0);
  }
  uStack_128 = 0xc;
  puStack_130 = &DAT_10f69b067;
  uStack_120 = 0xc3e1946cddf186a4;
  FUN_10abfc520(param_5 + 7,0);
  pppppplVar11 = param_5 + 10;
  ppppplVar19 = *pppppplVar11;
  ppppplVar13 = param_5[0xb];
  if (param_5[0xb] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    param_5[0xb] = ppppplVar19;
  }
  pppppplVar9 = param_5 + 0xd;
  ppppplVar19 = *pppppplVar9;
  ppppplVar13 = param_5[0xe];
  if (param_5[0xe] != ppppplVar19) {
    do {
      ppppplVar20 = ppppplVar13 + -3;
      FUN_10a0da1b8(ppppplVar20,ppppplVar13[-2]);
      ppppplVar13 = ppppplVar20;
    } while (ppppplVar20 != ppppplVar19);
    param_5[0xe] = ppppplVar19;
  }
  uStack_148 = 0xc;
  puStack_150 = &DAT_10f69b074;
  uStack_140 = 0x3d769d59ea032204;
  if (0 < *(int *)((long)param_5 + 0xd4)) {
    iVar21 = 0;
    do {
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b081,0xd);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b08f,10);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b09a,0xb);
      ppppplVar19 = param_5[8];
      if (ppppplVar19 < param_5[9]) {
        ppppplVar19[2] = (long ****)ppplStack_c0;
        ppppplVar19[3] = (long ****)0x0;
        ppppplVar19[1] = (long ****)ppppplStack_c8;
        *ppppplVar19 = (long ****)ppppplStack_d0;
        ppppplStack_c8 = (long *****)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppppplStack_d0 = (long *****)0x0;
        func_0x000107c2b080(ppppplVar19);
        pppppplVar8 = (long ******)(ppppplVar19 + 4);
      }
      else {
        pppppplVar8 = param_5 + 7;
        FUN_10ab14008(pppppplVar8,&ppppplStack_d0);
      }
      param_5[8] = (long *****)pppppplVar8;
      FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b0a6,0xe);
      ppplStack_100 = ppplStack_c0;
      ppppplStack_108 = ppppplStack_c8;
      ppppplStack_110 = ppppplStack_d0;
      ppppplStack_c8 = (long *****)0x0;
      ppplStack_c0 = (long ***)0x0;
      ppppplStack_d0 = (long *****)0x0;
      pppplStack_f8 = (long ****)0x0;
      func_0x000107c2b080(&ppppplStack_110);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&ppppplStack_d0,ppppplStack_110,ppppplStack_108);
      }
      else {
        ppppplStack_c8 = ppppplStack_108;
        ppppplStack_d0 = ppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      pppplStack_b8 = pppplStack_f8;
      FUN_10a0d9f14(&ppppplStack_180,&ppppplStack_d0,1,&uStack_151);
      FUN_10abfc5a0(pppppplVar11,&ppppplStack_180);
      FUN_10a0da1b8(&ppppplStack_180,ppppplStack_178);
      if ((long)ppplStack_100 < 0) {
        func_0x000107c3192c(&ppppplStack_d0,ppppplStack_110,ppppplStack_108);
      }
      else {
        ppppplStack_c8 = ppppplStack_108;
        ppppplStack_d0 = ppppplStack_110;
        ppplStack_c0 = ppplStack_100;
      }
      pppplStack_b8 = pppplStack_f8;
      func_0x000107c2b074(auStack_b0,&puStack_130);
      FUN_10a0d9f14(&ppppplStack_180,&ppppplStack_d0,2,&uStack_151);
      FUN_10abfc5a0(pppppplVar9,&ppppplStack_180);
      FUN_10a0da1b8(&ppppplStack_180,ppppplStack_178);
      lVar22 = 0;
      do {
        if (acStack_99[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar22));
        }
        lVar22 = lVar22 + -0x20;
      } while (lVar22 != -0x40);
      ppppplVar19 = param_5[0xb];
      if (param_5[10] == ppppplVar19) goto LAB_10abe3ce0;
      func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
      ppppplVar19 = param_5[0xe];
      if (param_5[0xd] == ppppplVar19) goto LAB_10abe3ce0;
      func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
      if ((long)ppplStack_100 < 0) {
        __ZdlPv(ppppplStack_110);
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)((long)param_5 + 0xd4));
  }
  FUN_10a0ee900(&ppppplStack_d0,&UNK_10f69b0a6,0xe);
  ppplStack_170 = ppplStack_c0;
  ppppplStack_178 = ppppplStack_c8;
  ppppplStack_180 = ppppplStack_d0;
  ppppplStack_c8 = (long *****)0x0;
  ppplStack_c0 = (long ***)0x0;
  ppppplStack_d0 = (long *****)0x0;
  pppplStack_168 = (long ****)0x0;
  func_0x000107c2b080(&ppppplStack_180);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&ppppplStack_d0,ppppplStack_180,ppppplStack_178);
  }
  else {
    ppppplStack_c8 = ppppplStack_178;
    ppppplStack_d0 = ppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  pppplStack_b8 = pppplStack_168;
  FUN_10a0d9f14(&ppppplStack_110,&ppppplStack_d0,1,&uStack_151);
  FUN_10abfc5a0(pppppplVar11,&ppppplStack_110);
  FUN_10a0da1b8(&ppppplStack_110,ppppplStack_108);
  if ((long)ppplStack_170 < 0) {
    func_0x000107c3192c(&ppppplStack_d0,ppppplStack_180,ppppplStack_178);
  }
  else {
    ppppplStack_c8 = ppppplStack_178;
    ppppplStack_d0 = ppppplStack_180;
    ppplStack_c0 = ppplStack_170;
  }
  pppplStack_b8 = pppplStack_168;
  func_0x000107c2b074(auStack_b0,&puStack_130);
  puVar12 = (undefined4 *)&uStack_151;
  FUN_10a0d9f14(&ppppplStack_110,&ppppplStack_d0);
  FUN_10abfc5a0(pppppplVar9,&ppppplStack_110);
  FUN_10a0da1b8(&ppppplStack_110,ppppplStack_108);
  lVar22 = 0;
  do {
    if (acStack_99[lVar22] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar22));
    }
    lVar22 = lVar22 + -0x20;
  } while (lVar22 != -0x40);
  ppppplVar19 = param_5[0xb];
  if (param_5[10] != ppppplVar19) {
    func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
    FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0,&ppppplStack_d0);
    ppppplVar19 = param_5[0xe];
    if (param_5[0xd] != ppppplVar19) {
      func_0x000107c2b074(&ppppplStack_d0,&puStack_150);
      pppppplVar11 = &ppppplStack_d0;
      FUN_10a20e230(ppppplVar19 + -3,&ppppplStack_d0);
      ppppplStack_110 = (long *****)0x0;
      FUN_10a3b1e74(&ppppplStack_d0,&ppppplStack_110);
      func_0x00010a015c50(param_5 + 4,&ppppplStack_d0);
      ppppplVar19 = param_5[4];
      func_0x000107c2b054(&uStack_198,&UNK_10f69b0b5);
      if (*(char *)((long)ppppplVar19 + 0x6f) < '\0') {
        __ZdlPv(ppppplVar19[0xb]);
      }
      ppppplVar19[0xc] = (long ****)ppplStack_190;
      ppppplVar19[0xb] = (long ****)CONCAT71(uStack_197,uStack_198);
      ppppplVar19[0xd] = (long ****)CONCAT17(uStack_181,uStack_188);
      uStack_181 = 0;
      uStack_198 = 0;
      (*(code *)(*param_5)[9])(param_5);
      pppplVar14 = param_5[4][0x45];
      if (param_5[4][0x46] != pppplVar14) {
        ppplVar18 = *pppplVar14;
        ppplStack_100 = ppplVar18 + 8;
        uVar3 = *(ushort *)((long)ppplVar18 + 0x129);
        *(ushort *)((long)ppplVar18 + 0x129) = uVar3 & 0xff80 | uVar3 + 1 & 0x7f;
        *(ushort *)(ppplVar18 + 0xe) =
             *(ushort *)(ppplVar18 + 0xe) & 0xff80 | *(ushort *)(ppplVar18 + 0xe) + 1 & 0x7f;
        pppplStack_f8 = (long ****)CONCAT71(pppplStack_f8._1_7_,1);
        ppppplStack_110 = (long *****)FUN_10a1d3648;
        ppppplStack_108 = (long *****)&PTR_FUN_110bad818;
        func_0x00010a332748((long)ppplVar18 + 0x219,0);
        func_0x00010a332700((long)ppplVar18 + 0x21a,0);
        uVar10 = 1;
        func_0x00010a3326b8(ppplVar18 + 0x43,1);
        FUN_10a044790(&ppppplStack_110);
        (*(code *)*ppppplStack_108)(&ppppplStack_108);
        FUN_10a044790(&ppplStack_c0);
        pppppplVar9 = (long ******)&pppplStack_b8;
        (*(code *)*pppplStack_b8)();
        pppppplVar8 = (long ******)ppppplStack_c8;
        if ((long ******)ppppplStack_c8 != (long ******)0x0) {
          pppppplVar1 = (long ******)(ppppplStack_c8 + 1);
          do {
            ppppplVar19 = *pppppplVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
            if (bVar7) {
              *pppppplVar1 = (long *****)((long)ppppplVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppplVar19 == (long *****)0x0) {
            (*(code *)(*ppppplStack_c8)[2])(ppppplStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppplVar9 = pppppplVar8;
          }
        }
        if ((long)ppplStack_170 < 0) {
          pppppplVar9 = (long ******)ppppplStack_180;
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
        if ((long)ppplStack_170 < 0) {
          __ZdlPv(ppppplStack_180);
        }
        __Unwind_Resume();
        if (in_x4 != 0) {
          pppplVar14 = *pppppplVar9[0x20];
          puVar2 = puVar12 + in_x4;
          iVar21 = *(int *)((long)pppppplVar9 + 0xfc) + 1;
          uVar4 = iVar21 + iVar21 * *(int *)(pppppplVar9 + 0x1f);
          do {
            uVar25 = (undefined4)param_2;
            uStack_214 = *puVar12;
            pppppplVar8 = pppppplVar11;
            func_0x00010a01e9ec();
            func_0x000109519fd0(auStack_254,uVar10,(long)pppppplVar8 + 0x6c);
            uVar31 = *(undefined4 *)(pppppplVar8[0x35] + 0x9e);
            ppplStack_260 = (long ***)0x0;
            ppplStack_268 = (long ***)0x0;
            ppplStack_270 = (long ***)0x0;
            ppplStack_278 = (long ***)0x0;
            ppplStack_280 = (long ***)0x0;
            ppplStack_288 = (long ***)0x0;
            auStack_290[0] = uStack_214;
            FUN_10abac094(&ppplStack_270,&uStack_214);
            FUN_10abe4138(auStack_254);
            uStack_2a0 = uVar31;
            uStack_29c = uVar25;
            fStack_298 = param_3;
            fStack_294 = param_4;
            func_0x00010a67960c(&ppplStack_288,&uStack_2a0);
            if (ppplStack_288 == ppplStack_280) {
LAB_10abe4118:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe411c);
              (*pcVar6)();
            }
            if ((int)uVar4 < 1) {
              fVar33 = 0.0;
              fVar30 = 0.0;
            }
            else {
              param_3 = *(float *)(ppplStack_280 + -2);
              param_4 = *(float *)((long)ppplStack_280 + -0xc);
              fVar30 = 0.0;
              fVar15 = 3.4028235e+38;
              fVar33 = 0.0;
              pfVar16 = (float *)((long)pppplVar14 + 4);
              uVar17 = (ulong)uVar4;
              do {
                fVar28 = pfVar16[-1] - param_3;
                fVar32 = *pfVar16 - param_4;
                fVar29 = SQRT(fVar32 * fVar32 + fVar28 * fVar28);
                fVar28 = pfVar16[-1];
                fVar32 = *pfVar16;
                if (fVar15 <= fVar29) {
                  fVar28 = fVar30;
                  fVar32 = fVar33;
                  fVar29 = fVar15;
                }
                fVar15 = fVar29;
                fVar33 = fVar32;
                fVar30 = fVar28;
                pfVar16 = pfVar16 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            *(float *)(ppplStack_280 + -2) = fVar30;
            if ((ppplStack_288 == ppplStack_280) ||
               (*(float *)((long)ppplStack_280 + -0xc) = fVar33, ppplStack_288 == ppplStack_280))
            goto LAB_10abe4118;
            if ((int)uVar4 < 1) {
              param_2 = 0x7f7fffff;
              uVar31 = 0x7f7fffff;
            }
            else {
              uVar23 = 0x7f7fffff;
              param_3 = *(float *)(ppplStack_280 + -1);
              param_4 = *(float *)((long)ppplStack_280 + -4);
              pfVar16 = (float *)((long)pppplVar14 + 4);
              uVar17 = (ulong)uVar4;
              uVar26 = uVar23;
              uVar24 = uVar23;
              do {
                fVar30 = pfVar16[-1] - param_3;
                fVar33 = *pfVar16 - param_4;
                fVar30 = SQRT(fVar33 * fVar33 + fVar30 * fVar30);
                bVar7 = (float)uVar24 <= fVar30;
                uVar27 = (ulong)(uint)fVar30;
                if (bVar7) {
                  uVar27 = uVar24;
                }
                uVar24 = (ulong)(uint)*pfVar16;
                if (bVar7) {
                  uVar24 = uVar23;
                }
                uVar31 = (undefined4)uVar24;
                param_2 = (ulong)(uint)pfVar16[-1];
                if (bVar7) {
                  param_2 = uVar26;
                }
                pfVar16 = pfVar16 + 4;
                uVar17 = uVar17 - 1;
                uVar23 = uVar24;
                uVar26 = param_2;
                uVar24 = uVar27;
              } while (uVar17 != 0);
            }
            *(int *)(ppplStack_280 + -1) = (int)param_2;
            if (ppplStack_288 == ppplStack_280) goto LAB_10abe4118;
            *(undefined4 *)((long)ppplStack_280 + -4) = uVar31;
            ppppplVar19 = pppppplVar9[2];
            if (ppppplVar19 < pppppplVar9[3]) {
              *(undefined4 *)ppppplVar19 = auStack_290[0];
              ppppplVar19[1] = (long ****)0x0;
              ppppplVar19[2] = (long ****)0x0;
              ppppplVar19[3] = (long ****)0x0;
              ppppplVar19[4] = (long ****)0x0;
              ppppplVar19[2] = (long ****)ppplStack_280;
              ppppplVar19[1] = (long ****)ppplStack_288;
              ppppplVar19[3] = (long ****)ppplStack_278;
              ppplStack_288 = (long ***)0x0;
              ppplStack_280 = (long ***)0x0;
              ppppplVar19[5] = (long ****)0x0;
              ppppplVar19[6] = (long ****)0x0;
              ppppplVar19[5] = (long ****)ppplStack_268;
              ppppplVar19[4] = (long ****)ppplStack_270;
              ppppplVar19[6] = (long ****)ppplStack_260;
              ppplStack_278 = (long ***)0x0;
              ppplStack_270 = (long ***)0x0;
              ppplStack_268 = (long ***)0x0;
              ppplStack_260 = (long ***)0x0;
              pppppplVar9[2] = ppppplVar19 + 7;
            }
            else {
              pppppplVar8 = pppppplVar9 + 1;
              FUN_10abffed0(pppppplVar8,auStack_290);
              pppppplVar9[2] = (long *****)pppppplVar8;
              if ((long ****)ppplStack_270 != (long ****)0x0) {
                ppplStack_268 = ppplStack_270;
                __ZdlPv();
              }
            }
            if ((long ****)ppplStack_288 != (long ****)0x0) {
              ppplStack_280 = ppplStack_288;
              __ZdlPv();
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != puVar2);
        }
        return;
      }
      FUN_10a00946c(&UNK_10f6921f0);
    }
  }
LAB_10abe3ce0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abe3ce4);
  (*pcVar6)();
}



/* Entry: 10abfc520; end: 10abfc59f;  */

/* WARNING: Removing unreachable block (ram,0x00010abfc580) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10abfc520(long *param_1,ulong param_2,long *param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *puStack_300;
  ulong uStack_2f8;
  undefined2 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined4 uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  undefined2 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar21 = param_1[1];
  uVar15 = lVar21 - *param_1 >> 5;
  if (param_2 <= uVar15) {
    if (param_2 < uVar15) {
      lVar6 = *param_1 + param_2 * 0x20;
      for (; lVar21 != lVar6; lVar21 = lVar21 + -0x20) {
      }
      param_1[1] = lVar6;
    }
    return;
  }
  puVar12 = (ulong *)(param_2 - uVar15);
  puVar13 = (undefined8 *)param_1[1];
  if ((ulong *)(param_1[2] - (long)puVar13 >> 5) < puVar12) {
    lVar21 = (long)puVar13 - *param_1;
    puVar1 = (undefined *)((long)puVar12 + (lVar21 >> 5));
    if ((ulong)puVar1 >> 0x3b != 0) {
      FUN_10a36f344();
      func_0x00010a36f4bc(&plStack_58);
      __Unwind_Resume(param_1);
      puVar5 = (ulong *)&UNK_10f69b42f;
      FUN_109ffde64();
LAB_10ac0658c:
      puVar20 = puVar12 + -0x21;
      puVar19 = puVar5;
LAB_10ac065a4:
      do {
        puVar5 = puVar19;
        uVar15 = (long)puVar12 - (long)puVar5;
        uVar18 = ((long)uVar15 >> 3) * 0xf83e0f83e0f83e1;
        if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
          if (uVar18 < 2) {
            return;
          }
          if (uVar18 == 2) {
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(int)*puVar20);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar5);
            if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0)) {
              return;
            }
            FUN_10ac07f70(puVar5,puVar20);
            return;
          }
        }
        else {
          if (uVar18 == 3) {
            FUN_10ac08118(puVar5,puVar5 + 0x21,puVar20,param_3);
            return;
          }
          if (uVar18 == 4) {
            FUN_10ac08274(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar20,param_3);
            return;
          }
          if (uVar18 == 5) {
            FUN_10ac08388(puVar5,puVar5 + 0x21,puVar5 + 0x42,puVar5 + 99,puVar20,param_3);
            return;
          }
        }
        if ((long)uVar15 < 0x18c0) {
          if ((param_5 & 1) == 0) {
            if (puVar5 == puVar12) {
              return;
            }
            puVar19 = puVar5 + 0x21;
            if (puVar19 == puVar12) {
              return;
            }
            lVar21 = 0x108;
            puVar20 = puVar5;
            lVar6 = 0;
            do {
              lVar10 = lVar21;
              lVar21 = *param_3;
              func_0x00010a01e9ec(lVar21,(int)*puVar19);
              lVar7 = *param_3;
              func_0x00010a01e9ec(lVar7,(int)*puVar20);
              if (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
                  *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
                uStack_1e8 = puVar19[1];
                puStack_1f0 = (ulong *)*puVar19;
                uStack_1e0 = (undefined2)puVar19[2];
                uStack_1d0 = puVar20[0x25];
                uStack_1d8 = puVar20[0x24];
                uStack_1c8 = puVar20[0x26];
                puVar20[0x24] = 0;
                puVar20[0x25] = 0;
                puVar20[0x26] = 0;
                uStack_f0 = (undefined4)puVar20[0x41];
                uStack_118 = puVar20[0x3c];
                uStack_120 = puVar20[0x3b];
                uStack_108 = puVar20[0x3e];
                uStack_110 = puVar20[0x3d];
                uStack_f8 = puVar20[0x40];
                uStack_100 = puVar20[0x3f];
                uStack_158 = puVar20[0x34];
                uStack_160 = puVar20[0x33];
                uStack_148 = puVar20[0x36];
                uStack_150 = puVar20[0x35];
                uStack_138 = puVar20[0x38];
                uStack_140 = puVar20[0x37];
                uStack_128 = puVar20[0x3a];
                uStack_130 = puVar20[0x39];
                uStack_198 = puVar20[0x2c];
                uStack_1a0 = puVar20[0x2b];
                uStack_188 = puVar20[0x2e];
                uStack_190 = puVar20[0x2d];
                uStack_178 = puVar20[0x30];
                uStack_180 = puVar20[0x2f];
                uStack_168 = puVar20[0x32];
                uStack_170 = puVar20[0x31];
                uStack_1b8 = puVar20[0x28];
                uStack_1c0 = puVar20[0x27];
                uStack_1a8 = puVar20[0x2a];
                uStack_1b0 = puVar20[0x29];
                do {
                  lVar21 = lVar6;
                  puVar13 = (undefined8 *)((long)puVar5 + lVar21);
                  puVar13[0x22] = puVar13[1];
                  puVar13[0x21] = *puVar13;
                  *(undefined2 *)(puVar13 + 0x23) = *(undefined2 *)(puVar13 + 2);
                  FUN_10ac00490(puVar13 + 0x24);
                  puVar13[0x25] = puVar13[4];
                  puVar13[0x24] = puVar13[3];
                  puVar13[0x27] = puVar13[6];
                  puVar13[0x26] = puVar13[5];
                  puVar13[4] = 0;
                  puVar13[5] = 0;
                  puVar13[3] = 0;
                  puVar13[0x28] = puVar13[7];
                  puVar13[0x3e] = puVar13[0x1d];
                  puVar13[0x3d] = puVar13[0x1c];
                  puVar13[0x40] = puVar13[0x1f];
                  puVar13[0x3f] = puVar13[0x1e];
                  *(undefined4 *)(puVar13 + 0x41) = *(undefined4 *)(puVar13 + 0x20);
                  puVar13[0x36] = puVar13[0x15];
                  puVar13[0x35] = puVar13[0x14];
                  puVar13[0x38] = puVar13[0x17];
                  puVar13[0x37] = puVar13[0x16];
                  puVar13[0x3a] = puVar13[0x19];
                  puVar13[0x39] = puVar13[0x18];
                  puVar13[0x3c] = puVar13[0x1b];
                  puVar13[0x3b] = puVar13[0x1a];
                  puVar13[0x2e] = puVar13[0xd];
                  puVar13[0x2d] = puVar13[0xc];
                  puVar13[0x30] = puVar13[0xf];
                  puVar13[0x2f] = puVar13[0xe];
                  puVar13[0x32] = puVar13[0x11];
                  puVar13[0x31] = puVar13[0x10];
                  puVar13[0x34] = puVar13[0x13];
                  puVar13[0x33] = puVar13[0x12];
                  puVar13[0x2a] = puVar13[9];
                  puVar13[0x29] = puVar13[8];
                  puVar13[0x2c] = puVar13[0xb];
                  puVar13[0x2b] = puVar13[10];
                  if (lVar21 == -0x108) {
LAB_10ac07edc:
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac07ee0);
                    (*pcVar3)();
                  }
                  lVar7 = *param_3;
                  func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
                  lVar11 = *param_3;
                  func_0x00010a01e9ec(lVar11,*(undefined4 *)((long)puVar5 + lVar21 + -0x108));
                  lVar6 = lVar21 + -0x108;
                } while (*(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0) <
                         *(float *)(*(long *)(lVar11 + 0x1a8) + 0x4f0));
                *(undefined2 *)((long)puVar5 + lVar21 + 0x10) = uStack_1e0;
                *(ulong *)((long)puVar5 + lVar21 + 8) = uStack_1e8;
                *(ulong **)((long)puVar5 + lVar21) = puStack_1f0;
                FUN_10ac00490((undefined *)((long)puVar5 + lVar21 + 0x18));
                *(ulong *)((long)puVar5 + lVar21 + 0x20) = uStack_1d0;
                *(ulong *)((long)puVar5 + lVar21 + 0x18) = uStack_1d8;
                *(ulong *)((long)puVar5 + lVar21 + 0x28) = uStack_1c8;
                uStack_1d8 = 0;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                *(ulong *)((long)puVar5 + lVar21 + 0x30) = uStack_1c0;
                *(ulong *)((long)puVar5 + lVar21 + 0x38) = uStack_1b8;
                *(ulong *)((long)puVar5 + lVar21 + 0x48) = uStack_1a8;
                *(ulong *)((long)puVar5 + lVar21 + 0x40) = uStack_1b0;
                *(ulong *)((long)puVar5 + lVar21 + 0x78) = uStack_178;
                *(ulong *)((long)puVar5 + lVar21 + 0x70) = uStack_180;
                *(ulong *)((long)puVar5 + lVar21 + 0x88) = uStack_168;
                *(ulong *)((long)puVar5 + lVar21 + 0x80) = uStack_170;
                *(ulong *)((long)puVar5 + lVar21 + 0x58) = uStack_198;
                *(ulong *)((long)puVar5 + lVar21 + 0x50) = uStack_1a0;
                *(ulong *)((long)puVar5 + lVar21 + 0x68) = uStack_188;
                *(ulong *)((long)puVar5 + lVar21 + 0x60) = uStack_190;
                *(ulong *)((long)puVar5 + lVar21 + 0xb8) = uStack_138;
                *(ulong *)((long)puVar5 + lVar21 + 0xb0) = uStack_140;
                *(ulong *)((long)puVar5 + lVar21 + 200) = uStack_128;
                *(ulong *)((long)puVar5 + lVar21 + 0xc0) = uStack_130;
                *(ulong *)((long)puVar5 + lVar21 + 0x98) = uStack_158;
                *(ulong *)((long)puVar5 + lVar21 + 0x90) = uStack_160;
                *(ulong *)((long)puVar5 + lVar21 + 0xa8) = uStack_148;
                *(ulong *)((long)puVar5 + lVar21 + 0xa0) = uStack_150;
                *(undefined4 *)((long)puVar5 + lVar21 + 0x100) = uStack_f0;
                *(ulong *)((long)puVar5 + lVar21 + 0xe8) = uStack_108;
                *(ulong *)((long)puVar5 + lVar21 + 0xe0) = uStack_110;
                *(ulong *)((long)puVar5 + lVar21 + 0xf8) = uStack_f8;
                *(ulong *)((long)puVar5 + lVar21 + 0xf0) = uStack_100;
                *(ulong *)((long)puVar5 + lVar21 + 0xd8) = uStack_118;
                *(ulong *)((long)puVar5 + lVar21 + 0xd0) = uStack_120;
                puStack_300 = &uStack_1d8;
                FUN_10a1901f0(&puStack_300);
              }
              puVar20 = (ulong *)((long)puVar5 + lVar10);
              puVar19 = (ulong *)((long)puVar5 + lVar10 + 0x108);
              lVar21 = lVar10 + 0x108;
              lVar6 = lVar10;
              if (puVar19 == puVar12) {
                return;
              }
            } while( true );
          }
          if (puVar5 == puVar12) {
            return;
          }
          if (puVar5 + 0x21 == puVar12) {
            return;
          }
          lVar21 = 0;
          puVar19 = puVar5 + 0x21;
          puVar20 = puVar5;
          goto LAB_10ac0706c;
        }
        if (param_4 == 0) {
          if (puVar5 == puVar12) {
            return;
          }
          uVar17 = uVar18 - 2 >> 1;
          uVar24 = uVar17;
          goto LAB_10ac072bc;
        }
        puVar19 = puVar5 + (uVar18 >> 1) * 0x21;
        if (uVar15 < 0x8401) {
          FUN_10ac08118(puVar19,puVar5,puVar20,param_3);
        }
        else {
          FUN_10ac08118(puVar5,puVar19,puVar20,param_3);
          FUN_10ac08118(puVar5 + 0x21,puVar19 + -0x21,puVar12 + -0x42,param_3);
          FUN_10ac08118(puVar5 + 0x42,puVar19 + 0x21,puVar12 + -99,param_3);
          FUN_10ac08118(puVar19 + -0x21,puVar19,puVar19 + 0x21,param_3);
          uStack_1e8 = puVar5[1];
          puStack_1f0 = (ulong *)*puVar5;
          uStack_1e0 = (undefined2)puVar5[2];
          puVar8 = puVar5 + 3;
          uVar17 = puVar5[4];
          uVar18 = *puVar8;
          uVar15 = puVar5[5];
          puVar5[4] = 0;
          puVar5[5] = 0;
          *puVar8 = 0;
          uStack_1b8 = puVar5[7];
          uStack_1c0 = puVar5[6];
          uStack_1a8 = puVar5[9];
          uStack_1b0 = puVar5[8];
          uStack_138 = puVar5[0x17];
          uStack_140 = puVar5[0x16];
          uStack_128 = puVar5[0x19];
          uStack_130 = puVar5[0x18];
          uStack_158 = puVar5[0x13];
          uStack_160 = puVar5[0x12];
          uStack_148 = puVar5[0x15];
          uStack_150 = puVar5[0x14];
          uStack_178 = puVar5[0xf];
          uStack_180 = puVar5[0xe];
          uStack_168 = puVar5[0x11];
          uStack_170 = puVar5[0x10];
          uStack_198 = puVar5[0xb];
          uStack_1a0 = puVar5[10];
          uStack_188 = puVar5[0xd];
          uStack_190 = puVar5[0xc];
          uStack_f0 = (undefined4)puVar5[0x20];
          uStack_108 = puVar5[0x1d];
          uStack_110 = puVar5[0x1c];
          uStack_f8 = puVar5[0x1f];
          uStack_100 = puVar5[0x1e];
          uStack_118 = puVar5[0x1b];
          uStack_120 = puVar5[0x1a];
          uVar25 = puVar19[1];
          uVar24 = *puVar19;
          *(short *)(puVar5 + 2) = (short)puVar19[2];
          puVar5[1] = uVar25;
          *puVar5 = uVar24;
          FUN_10ac00490(puVar8);
          puVar9 = puVar19 + 3;
          uVar24 = *puVar9;
          puVar5[4] = puVar19[4];
          *puVar8 = uVar24;
          puVar5[5] = puVar19[5];
          *puVar9 = 0;
          puVar19[4] = 0;
          puVar19[5] = 0;
          puVar5[6] = puVar19[6];
          puVar5[7] = puVar19[7];
          uVar24 = puVar19[8];
          puVar5[9] = puVar19[9];
          puVar5[8] = uVar24;
          uVar25 = puVar19[0xb];
          uVar24 = puVar19[10];
          uVar26 = puVar19[0xd];
          uVar27 = puVar19[0xc];
          uVar28 = puVar19[0xe];
          uVar30 = puVar19[0x11];
          uVar29 = puVar19[0x10];
          puVar5[0xf] = puVar19[0xf];
          puVar5[0xe] = uVar28;
          puVar5[0x11] = uVar30;
          puVar5[0x10] = uVar29;
          puVar5[0xb] = uVar25;
          puVar5[10] = uVar24;
          puVar5[0xd] = uVar26;
          puVar5[0xc] = uVar27;
          uVar25 = puVar19[0x13];
          uVar24 = puVar19[0x12];
          uVar26 = puVar19[0x15];
          uVar27 = puVar19[0x14];
          uVar28 = puVar19[0x16];
          uVar30 = puVar19[0x19];
          uVar29 = puVar19[0x18];
          puVar5[0x17] = puVar19[0x17];
          puVar5[0x16] = uVar28;
          puVar5[0x19] = uVar30;
          puVar5[0x18] = uVar29;
          puVar5[0x13] = uVar25;
          puVar5[0x12] = uVar24;
          puVar5[0x15] = uVar26;
          puVar5[0x14] = uVar27;
          uVar25 = puVar19[0x1b];
          uVar24 = puVar19[0x1a];
          uVar26 = puVar19[0x1d];
          uVar27 = puVar19[0x1c];
          uVar29 = puVar19[0x1f];
          uVar28 = puVar19[0x1e];
          *(int *)(puVar5 + 0x20) = (int)puVar19[0x20];
          puVar5[0x1d] = uVar26;
          puVar5[0x1c] = uVar27;
          puVar5[0x1f] = uVar29;
          puVar5[0x1e] = uVar28;
          puVar5[0x1b] = uVar25;
          puVar5[0x1a] = uVar24;
          *(undefined2 *)(puVar19 + 2) = uStack_1e0;
          puVar19[1] = uStack_1e8;
          *puVar19 = (ulong)puStack_1f0;
          FUN_10ac00490(puVar9);
          puVar19[4] = uVar17;
          *puVar9 = uVar18;
          puVar19[5] = uVar15;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          puVar19[6] = uStack_1c0;
          puVar19[7] = uStack_1b8;
          puVar19[9] = uStack_1a8;
          puVar19[8] = uStack_1b0;
          puVar19[0xf] = uStack_178;
          puVar19[0xe] = uStack_180;
          puVar19[0x11] = uStack_168;
          puVar19[0x10] = uStack_170;
          puVar19[0xb] = uStack_198;
          puVar19[10] = uStack_1a0;
          puVar19[0xd] = uStack_188;
          puVar19[0xc] = uStack_190;
          puVar19[0x17] = uStack_138;
          puVar19[0x16] = uStack_140;
          puVar19[0x19] = uStack_128;
          puVar19[0x18] = uStack_130;
          puVar19[0x13] = uStack_158;
          puVar19[0x12] = uStack_160;
          puVar19[0x15] = uStack_148;
          puVar19[0x14] = uStack_150;
          *(undefined4 *)(puVar19 + 0x20) = uStack_f0;
          puVar19[0x1d] = uStack_108;
          puVar19[0x1c] = uStack_110;
          puVar19[0x1f] = uStack_f8;
          puVar19[0x1e] = uStack_100;
          puVar19[0x1b] = uStack_118;
          puVar19[0x1a] = uStack_120;
          puStack_300 = &uStack_1d8;
          FUN_10a1901f0(&puStack_300);
        }
        param_4 = param_4 + -1;
        if ((param_5 & 1) != 0) {
LAB_10ac0684c:
          lVar21 = 0;
          uStack_1e8 = puVar5[1];
          puStack_1f0 = (ulong *)*puVar5;
          uStack_1e0 = (undefined2)puVar5[2];
          puVar8 = puVar5 + 3;
          uStack_1d0 = puVar5[4];
          uStack_1d8 = *puVar8;
          uStack_1c8 = puVar5[5];
          puVar5[4] = 0;
          puVar5[5] = 0;
          *puVar8 = 0;
          uStack_1b8 = puVar5[7];
          uStack_1c0 = puVar5[6];
          uStack_1a8 = puVar5[9];
          uStack_1b0 = puVar5[8];
          uStack_108 = puVar5[0x1d];
          uStack_110 = puVar5[0x1c];
          uStack_f8 = puVar5[0x1f];
          uStack_100 = puVar5[0x1e];
          uStack_f0 = (undefined4)puVar5[0x20];
          uStack_118 = puVar5[0x1b];
          uStack_120 = puVar5[0x1a];
          uStack_138 = puVar5[0x17];
          uStack_140 = puVar5[0x16];
          uStack_128 = puVar5[0x19];
          uStack_130 = puVar5[0x18];
          uStack_158 = puVar5[0x13];
          uStack_160 = puVar5[0x12];
          uStack_148 = puVar5[0x15];
          uStack_150 = puVar5[0x14];
          uStack_178 = puVar5[0xf];
          uStack_180 = puVar5[0xe];
          uStack_168 = puVar5[0x11];
          uStack_170 = puVar5[0x10];
          uStack_198 = puVar5[0xb];
          uStack_1a0 = puVar5[10];
          uStack_188 = puVar5[0xd];
          uStack_190 = puVar5[0xc];
          do {
            puVar19 = (ulong *)((long)puVar5 + lVar21 + 0x108);
            if (puVar19 == puVar12) goto LAB_10ac07edc;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar19);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
            lVar21 = lVar21 + 0x108;
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
          puVar9 = (ulong *)((long)puVar5 + lVar21);
          puVar22 = puVar12;
          if (lVar21 == 0x108) {
            do {
              if (puVar22 <= puVar9) break;
              puVar22 = puVar22 + -0x21;
              lVar21 = *param_3;
              func_0x00010a01e9ec(lVar21,(int)*puVar22);
              lVar6 = *param_3;
              func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
            } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                     *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
          }
          else {
            do {
              if (puVar22 == puVar5) goto LAB_10ac07edc;
              puVar22 = puVar22 + -0x21;
              lVar21 = *param_3;
              func_0x00010a01e9ec(lVar21,(int)*puVar22);
              lVar6 = *param_3;
              func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
            } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                     *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
          }
          puVar19 = puVar9;
          puVar23 = puVar22;
          if (puVar9 < puVar22) {
            do {
              FUN_10ac07f70(puVar19,puVar23);
              do {
                puVar19 = puVar19 + 0x21;
                if (puVar19 == puVar12) goto LAB_10ac07edc;
                lVar21 = *param_3;
                func_0x00010a01e9ec(lVar21,(int)*puVar19);
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
              } while (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
                       *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
              do {
                if (puVar23 == puVar5) goto LAB_10ac07edc;
                puVar23 = puVar23 + -0x21;
                lVar21 = *param_3;
                func_0x00010a01e9ec(lVar21,(int)*puVar23);
                lVar6 = *param_3;
                func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
              } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                       *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
            } while (puVar19 < puVar23);
          }
          puVar23 = puVar19 + -0x21;
          if (puVar23 != puVar5) {
            uVar18 = puVar19[-0x20];
            uVar15 = *puVar23;
            *(short *)(puVar5 + 2) = (short)puVar19[-0x1f];
            puVar5[1] = uVar18;
            *puVar5 = uVar15;
            FUN_10ac00490(puVar8);
            uVar15 = puVar19[-0x1e];
            puVar5[4] = puVar19[-0x1d];
            puVar5[3] = uVar15;
            puVar5[5] = puVar19[-0x1c];
            puVar19[-0x1e] = 0;
            puVar19[-0x1d] = 0;
            puVar19[-0x1c] = 0;
            puVar5[6] = puVar19[-0x1b];
            puVar5[7] = puVar19[-0x1a];
            uVar15 = puVar19[-0x19];
            puVar5[9] = puVar19[-0x18];
            puVar5[8] = uVar15;
            uVar18 = puVar19[-0x16];
            uVar15 = puVar19[-0x17];
            uVar17 = puVar19[-0x14];
            uVar24 = puVar19[-0x15];
            uVar25 = puVar19[-0x13];
            uVar26 = puVar19[-0x10];
            uVar27 = puVar19[-0x11];
            puVar5[0xf] = puVar19[-0x12];
            puVar5[0xe] = uVar25;
            puVar5[0x11] = uVar26;
            puVar5[0x10] = uVar27;
            puVar5[0xb] = uVar18;
            puVar5[10] = uVar15;
            puVar5[0xd] = uVar17;
            puVar5[0xc] = uVar24;
            uVar18 = puVar19[-0xe];
            uVar15 = puVar19[-0xf];
            uVar17 = puVar19[-0xc];
            uVar24 = puVar19[-0xd];
            uVar25 = puVar19[-0xb];
            uVar26 = puVar19[-8];
            uVar27 = puVar19[-9];
            puVar5[0x17] = puVar19[-10];
            puVar5[0x16] = uVar25;
            puVar5[0x19] = uVar26;
            puVar5[0x18] = uVar27;
            puVar5[0x13] = uVar18;
            puVar5[0x12] = uVar15;
            puVar5[0x15] = uVar17;
            puVar5[0x14] = uVar24;
            uVar18 = puVar19[-6];
            uVar15 = puVar19[-7];
            uVar17 = puVar19[-4];
            uVar24 = puVar19[-5];
            uVar27 = puVar19[-2];
            uVar25 = puVar19[-3];
            *(int *)(puVar5 + 0x20) = (int)puVar19[-1];
            puVar5[0x1d] = uVar17;
            puVar5[0x1c] = uVar24;
            puVar5[0x1f] = uVar27;
            puVar5[0x1e] = uVar25;
            puVar5[0x1b] = uVar18;
            puVar5[0x1a] = uVar15;
          }
          *(undefined2 *)(puVar19 + -0x1f) = uStack_1e0;
          puVar19[-0x20] = uStack_1e8;
          *puVar23 = (ulong)puStack_1f0;
          FUN_10ac00490(puVar19 + -0x1e);
          puVar19[-0x1d] = uStack_1d0;
          puVar19[-0x1e] = uStack_1d8;
          puVar19[-0x1c] = uStack_1c8;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          puVar19[-0x1b] = uStack_1c0;
          puVar19[-0x1a] = uStack_1b8;
          puVar19[-0x18] = uStack_1a8;
          puVar19[-0x19] = uStack_1b0;
          puVar19[-0x10] = uStack_168;
          puVar19[-0x11] = uStack_170;
          puVar19[-0x12] = uStack_178;
          puVar19[-0x13] = uStack_180;
          puVar19[-0x14] = uStack_188;
          puVar19[-0x15] = uStack_190;
          puVar19[-0x16] = uStack_198;
          puVar19[-0x17] = uStack_1a0;
          puVar19[-8] = uStack_128;
          puVar19[-9] = uStack_130;
          puVar19[-10] = uStack_138;
          puVar19[-0xb] = uStack_140;
          puVar19[-0xc] = uStack_148;
          puVar19[-0xd] = uStack_150;
          puVar19[-0xe] = uStack_158;
          puVar19[-0xf] = uStack_160;
          *(undefined4 *)(puVar19 + -1) = uStack_f0;
          puVar19[-2] = uStack_f8;
          puVar19[-3] = uStack_100;
          puVar19[-4] = uStack_108;
          puVar19[-5] = uStack_110;
          puVar19[-6] = uStack_118;
          puVar19[-7] = uStack_120;
          puStack_300 = &uStack_1d8;
          FUN_10a1901f0(&puStack_300);
          if (puVar22 <= puVar9) {
            puVar8 = puVar5;
            FUN_10ac084ec(puVar5,puVar23,param_3);
            puVar9 = puVar19;
            FUN_10ac084ec(puVar19,puVar12,param_3);
            if ((int)puVar9 != 0) goto LAB_10ac06f90;
            if (((ulong)puVar8 & 1) != 0) goto LAB_10ac065a4;
          }
          FUN_10ac06544(puVar5,puVar23,param_3,param_4,param_5 & 1);
          param_5 = 0;
          goto LAB_10ac065a4;
        }
        lVar21 = *param_3;
        func_0x00010a01e9ec(lVar21,(int)puVar5[-0x21]);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar5);
        if (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) goto LAB_10ac0684c;
        uStack_1e8 = puVar5[1];
        puStack_1f0 = (ulong *)*puVar5;
        uStack_1e0 = (undefined2)puVar5[2];
        puVar8 = puVar5 + 3;
        uStack_1d0 = puVar5[4];
        uStack_1d8 = *puVar8;
        uStack_1c8 = puVar5[5];
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar8 = 0;
        uStack_1b8 = puVar5[7];
        uStack_1c0 = puVar5[6];
        uStack_1a8 = puVar5[9];
        uStack_1b0 = puVar5[8];
        uStack_108 = puVar5[0x1d];
        uStack_110 = puVar5[0x1c];
        uStack_f8 = puVar5[0x1f];
        uStack_100 = puVar5[0x1e];
        uStack_f0 = (undefined4)puVar5[0x20];
        uStack_118 = puVar5[0x1b];
        uStack_120 = puVar5[0x1a];
        uStack_138 = puVar5[0x17];
        uStack_140 = puVar5[0x16];
        uStack_128 = puVar5[0x19];
        uStack_130 = puVar5[0x18];
        uStack_158 = puVar5[0x13];
        uStack_160 = puVar5[0x12];
        uStack_148 = puVar5[0x15];
        uStack_150 = puVar5[0x14];
        uStack_178 = puVar5[0xf];
        uStack_180 = puVar5[0xe];
        uStack_168 = puVar5[0x11];
        uStack_170 = puVar5[0x10];
        uStack_198 = puVar5[0xb];
        uStack_1a0 = puVar5[10];
        uStack_188 = puVar5[0xd];
        uStack_190 = puVar5[0xc];
        lVar21 = *param_3;
        func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)*puVar20);
        puVar19 = puVar5;
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
            *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0)) {
          do {
            puVar19 = puVar19 + 0x21;
            if (puVar12 <= puVar19) break;
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar19);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
        }
        else {
          do {
            puVar19 = puVar19 + 0x21;
            if (puVar19 == puVar12) goto LAB_10ac07edc;
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar19);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
        }
        puVar9 = puVar12;
        if (puVar19 < puVar12) {
          do {
            if (puVar9 == puVar5) goto LAB_10ac07edc;
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
            puVar9 = puVar9 + -0x21;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar9);
          } while (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
        }
        while (puVar19 < puVar9) {
          FUN_10ac07f70(puVar19,puVar9);
          do {
            puVar19 = puVar19 + 0x21;
            if (puVar19 == puVar12) goto LAB_10ac07edc;
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar19);
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                   *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
          do {
            if (puVar9 == puVar5) goto LAB_10ac07edc;
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(ulong)puStack_1f0 & 0xffffffff);
            puVar9 = puVar9 + -0x21;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)*puVar9);
          } while (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0));
        }
        puVar9 = puVar19 + -0x21;
        if (puVar9 != puVar5) {
          uVar18 = puVar19[-0x20];
          uVar15 = *puVar9;
          *(short *)(puVar5 + 2) = (short)puVar19[-0x1f];
          puVar5[1] = uVar18;
          *puVar5 = uVar15;
          FUN_10ac00490(puVar8);
          uVar15 = puVar19[-0x1e];
          puVar5[4] = puVar19[-0x1d];
          puVar5[3] = uVar15;
          puVar5[5] = puVar19[-0x1c];
          puVar19[-0x1e] = 0;
          puVar19[-0x1d] = 0;
          puVar19[-0x1c] = 0;
          puVar5[6] = puVar19[-0x1b];
          puVar5[7] = puVar19[-0x1a];
          uVar15 = puVar19[-0x19];
          puVar5[9] = puVar19[-0x18];
          puVar5[8] = uVar15;
          uVar18 = puVar19[-0x16];
          uVar15 = puVar19[-0x17];
          uVar17 = puVar19[-0x14];
          uVar24 = puVar19[-0x15];
          uVar25 = puVar19[-0x13];
          uVar26 = puVar19[-0x10];
          uVar27 = puVar19[-0x11];
          puVar5[0xf] = puVar19[-0x12];
          puVar5[0xe] = uVar25;
          puVar5[0x11] = uVar26;
          puVar5[0x10] = uVar27;
          puVar5[0xb] = uVar18;
          puVar5[10] = uVar15;
          puVar5[0xd] = uVar17;
          puVar5[0xc] = uVar24;
          uVar18 = puVar19[-0xe];
          uVar15 = puVar19[-0xf];
          uVar17 = puVar19[-0xc];
          uVar24 = puVar19[-0xd];
          uVar25 = puVar19[-0xb];
          uVar26 = puVar19[-8];
          uVar27 = puVar19[-9];
          puVar5[0x17] = puVar19[-10];
          puVar5[0x16] = uVar25;
          puVar5[0x19] = uVar26;
          puVar5[0x18] = uVar27;
          puVar5[0x13] = uVar18;
          puVar5[0x12] = uVar15;
          puVar5[0x15] = uVar17;
          puVar5[0x14] = uVar24;
          uVar18 = puVar19[-6];
          uVar15 = puVar19[-7];
          uVar17 = puVar19[-4];
          uVar24 = puVar19[-5];
          uVar27 = puVar19[-2];
          uVar25 = puVar19[-3];
          *(int *)(puVar5 + 0x20) = (int)puVar19[-1];
          puVar5[0x1d] = uVar17;
          puVar5[0x1c] = uVar24;
          puVar5[0x1f] = uVar27;
          puVar5[0x1e] = uVar25;
          puVar5[0x1b] = uVar18;
          puVar5[0x1a] = uVar15;
        }
        *(undefined2 *)(puVar19 + -0x1f) = uStack_1e0;
        puVar19[-0x20] = uStack_1e8;
        *puVar9 = (ulong)puStack_1f0;
        FUN_10ac00490(puVar19 + -0x1e);
        puVar19[-0x1d] = uStack_1d0;
        puVar19[-0x1e] = uStack_1d8;
        puVar19[-0x1c] = uStack_1c8;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        puVar19[-0x1b] = uStack_1c0;
        puVar19[-0x1a] = uStack_1b8;
        puVar19[-0x18] = uStack_1a8;
        puVar19[-0x19] = uStack_1b0;
        puVar19[-0x10] = uStack_168;
        puVar19[-0x11] = uStack_170;
        puVar19[-0x12] = uStack_178;
        puVar19[-0x13] = uStack_180;
        puVar19[-0x14] = uStack_188;
        puVar19[-0x15] = uStack_190;
        puVar19[-0x16] = uStack_198;
        puVar19[-0x17] = uStack_1a0;
        puVar19[-8] = uStack_128;
        puVar19[-9] = uStack_130;
        puVar19[-10] = uStack_138;
        puVar19[-0xb] = uStack_140;
        puVar19[-0xc] = uStack_148;
        puVar19[-0xd] = uStack_150;
        puVar19[-0xe] = uStack_158;
        puVar19[-0xf] = uStack_160;
        *(undefined4 *)(puVar19 + -1) = uStack_f0;
        puVar19[-2] = uStack_f8;
        puVar19[-3] = uStack_100;
        puVar19[-4] = uStack_108;
        puVar19[-5] = uStack_110;
        puVar19[-6] = uStack_118;
        puVar19[-7] = uStack_120;
        puStack_300 = &uStack_1d8;
        FUN_10a1901f0(&puStack_300);
        param_5 = 0;
      } while( true );
    }
    uVar15 = param_1[2] - *param_1;
    puVar16 = (undefined *)((long)uVar15 >> 4);
    if (puVar16 <= puVar1) {
      puVar16 = puVar1;
    }
    if (0x7fffffffffffffdf < uVar15) {
      puVar16 = (undefined *)0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (puVar16 == (undefined *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10a36f358();
    }
    plStack_50 = (long *)((long)plVar4 + lVar21);
    puVar14 = plStack_50 + (long)puVar12 * 4;
    puVar13 = plStack_50;
    do {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0x28cd94bfde;
      puVar13 = puVar13 + 4;
    } while (puVar13 != puVar14);
    lVar21 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar4;
    plStack_48 = puVar14;
    plStack_40 = plVar4 + (long)puVar16 * 4;
    func_0x00010a36f38c(param_1,*param_1,param_1[1],lVar21);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar21;
    param_1[1] = (long)puVar14;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + (long)puVar16 * 4);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a36f4bc(&plStack_58);
  }
  else {
    puVar14 = puVar13;
    if (puVar12 != (ulong *)0x0) {
      puVar14 = puVar13 + (long)puVar12 * 4;
      do {
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0x28cd94bfde;
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar14);
    }
    param_1[1] = (long)puVar14;
  }
  return;
LAB_10ac0706c:
  puVar8 = puVar19;
  lVar6 = *param_3;
  func_0x00010a01e9ec(lVar6,(int)puVar20[0x21]);
  lVar7 = *param_3;
  func_0x00010a01e9ec(lVar7,(int)*puVar20);
  if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) < *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
    uStack_1e8 = puVar8[1];
    puStack_1f0 = (ulong *)*puVar8;
    uStack_1e0 = (undefined2)puVar8[2];
    uStack_1d0 = puVar20[0x25];
    uStack_1d8 = puVar20[0x24];
    uStack_1c8 = puVar20[0x26];
    puVar20[0x24] = 0;
    puVar20[0x25] = 0;
    puVar20[0x26] = 0;
    uStack_f0 = (undefined4)puVar20[0x41];
    uStack_118 = puVar20[0x3c];
    uStack_120 = puVar20[0x3b];
    uStack_108 = puVar20[0x3e];
    uStack_110 = puVar20[0x3d];
    uStack_f8 = puVar20[0x40];
    uStack_100 = puVar20[0x3f];
    uStack_158 = puVar20[0x34];
    uStack_160 = puVar20[0x33];
    uStack_148 = puVar20[0x36];
    uStack_150 = puVar20[0x35];
    uStack_138 = puVar20[0x38];
    uStack_140 = puVar20[0x37];
    uStack_128 = puVar20[0x3a];
    uStack_130 = puVar20[0x39];
    uStack_198 = puVar20[0x2c];
    uStack_1a0 = puVar20[0x2b];
    uStack_188 = puVar20[0x2e];
    uStack_190 = puVar20[0x2d];
    uStack_178 = puVar20[0x30];
    uStack_180 = puVar20[0x2f];
    uStack_168 = puVar20[0x32];
    uStack_170 = puVar20[0x31];
    uStack_1b8 = puVar20[0x28];
    uStack_1c0 = puVar20[0x27];
    uStack_1a8 = puVar20[0x2a];
    uStack_1b0 = puVar20[0x29];
    lVar6 = lVar21;
    do {
      lVar7 = lVar6;
      puVar13 = (undefined8 *)((long)puVar5 + lVar7);
      puVar13[0x22] = puVar13[1];
      puVar13[0x21] = *puVar13;
      *(undefined2 *)(puVar13 + 0x23) = *(undefined2 *)(puVar13 + 2);
      FUN_10ac00490(puVar13 + 0x24);
      puVar13[0x25] = puVar13[4];
      puVar13[0x24] = puVar13[3];
      puVar13[0x27] = puVar13[6];
      puVar13[0x26] = puVar13[5];
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[3] = 0;
      puVar13[0x28] = puVar13[7];
      puVar13[0x3e] = puVar13[0x1d];
      puVar13[0x3d] = puVar13[0x1c];
      puVar13[0x40] = puVar13[0x1f];
      puVar13[0x3f] = puVar13[0x1e];
      *(undefined4 *)(puVar13 + 0x41) = *(undefined4 *)(puVar13 + 0x20);
      puVar13[0x36] = puVar13[0x15];
      puVar13[0x35] = puVar13[0x14];
      puVar13[0x38] = puVar13[0x17];
      puVar13[0x37] = puVar13[0x16];
      puVar13[0x3a] = puVar13[0x19];
      puVar13[0x39] = puVar13[0x18];
      puVar13[0x3c] = puVar13[0x1b];
      puVar13[0x3b] = puVar13[0x1a];
      puVar13[0x2e] = puVar13[0xd];
      puVar13[0x2d] = puVar13[0xc];
      puVar13[0x30] = puVar13[0xf];
      puVar13[0x2f] = puVar13[0xe];
      puVar13[0x32] = puVar13[0x11];
      puVar13[0x31] = puVar13[0x10];
      puVar13[0x34] = puVar13[0x13];
      puVar13[0x33] = puVar13[0x12];
      puVar13[0x2a] = puVar13[9];
      puVar13[0x29] = puVar13[8];
      puVar13[0x2c] = puVar13[0xb];
      puVar13[0x2b] = puVar13[10];
      puVar19 = puVar5;
      if (lVar7 == 0) goto LAB_10ac071e8;
      lVar10 = *param_3;
      func_0x00010a01e9ec(lVar10,(ulong)puStack_1f0 & 0xffffffff);
      lVar11 = *param_3;
      func_0x00010a01e9ec(lVar11,*(undefined4 *)(puVar13 + -0x21));
      lVar6 = lVar7 + -0x108;
    } while (*(float *)(*(long *)(lVar10 + 0x1a8) + 0x4f0) <
             *(float *)(*(long *)(lVar11 + 0x1a8) + 0x4f0));
    puVar19 = (ulong *)((long)puVar5 + lVar7);
LAB_10ac071e8:
    *(undefined2 *)(puVar19 + 2) = uStack_1e0;
    puVar19[1] = uStack_1e8;
    *puVar19 = (ulong)puStack_1f0;
    FUN_10ac00490(puVar13 + 3);
    puVar13[3] = uStack_1d8;
    puVar19[5] = uStack_1c8;
    puVar19[4] = uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    puVar19[6] = uStack_1c0;
    puVar19[7] = uStack_1b8;
    puVar13[0x17] = uStack_138;
    puVar13[0x16] = uStack_140;
    puVar13[0x19] = uStack_128;
    puVar13[0x18] = uStack_130;
    puVar13[0x13] = uStack_158;
    puVar13[0x12] = uStack_160;
    puVar13[0x15] = uStack_148;
    puVar13[0x14] = uStack_150;
    puVar13[0xf] = uStack_178;
    puVar13[0xe] = uStack_180;
    puVar13[0x11] = uStack_168;
    puVar13[0x10] = uStack_170;
    puVar13[0xb] = uStack_198;
    puVar13[10] = uStack_1a0;
    puVar13[0xd] = uStack_188;
    puVar13[0xc] = uStack_190;
    puVar13[9] = uStack_1a8;
    puVar13[8] = uStack_1b0;
    *(undefined4 *)(puVar13 + 0x20) = uStack_f0;
    puVar13[0x1d] = uStack_108;
    puVar13[0x1c] = uStack_110;
    puVar13[0x1f] = uStack_f8;
    puVar13[0x1e] = uStack_100;
    puVar13[0x1b] = uStack_118;
    puVar13[0x1a] = uStack_120;
    puStack_300 = &uStack_1d8;
    FUN_10a1901f0(&puStack_300);
  }
  lVar21 = lVar21 + 0x108;
  puVar19 = puVar8 + 0x21;
  puVar20 = puVar8;
  if (puVar8 + 0x21 == puVar12) {
    return;
  }
  goto LAB_10ac0706c;
LAB_10ac072bc:
  do {
    if ((long)uVar24 <= (long)uVar17) {
      uVar27 = uVar24 << 1 | 1;
      puVar19 = puVar5 + uVar27 * 0x21;
      uVar25 = uVar24 * 2 + 2;
      if ((long)uVar25 < (long)uVar18) {
        lVar21 = *param_3;
        func_0x00010a01e9ec(lVar21,(int)*puVar19);
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar19[0x21]);
        if (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
          puVar19 = puVar19 + 0x21;
          uVar27 = uVar25;
        }
      }
      puVar20 = puVar5 + uVar24 * 0x21;
      lVar21 = *param_3;
      func_0x00010a01e9ec(lVar21,(int)*puVar19);
      lVar6 = *param_3;
      func_0x00010a01e9ec(lVar6,(int)*puVar20);
      if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
          *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0)) {
        uStack_1e8 = puVar20[1];
        puStack_1f0 = (ulong *)*puVar20;
        uStack_1e0 = (undefined2)puVar20[2];
        uStack_1d0 = puVar20[4];
        uStack_1d8 = puVar20[3];
        uStack_1c8 = puVar20[5];
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[3] = 0;
        uStack_178 = puVar20[0xf];
        uStack_180 = puVar20[0xe];
        uStack_168 = puVar20[0x11];
        uStack_170 = puVar20[0x10];
        uStack_198 = puVar20[0xb];
        uStack_1a0 = puVar20[10];
        uStack_188 = puVar20[0xd];
        uStack_190 = puVar20[0xc];
        uStack_138 = puVar20[0x17];
        uStack_140 = puVar20[0x16];
        uStack_128 = puVar20[0x19];
        uStack_130 = puVar20[0x18];
        uStack_158 = puVar20[0x13];
        uStack_160 = puVar20[0x12];
        uStack_148 = puVar20[0x15];
        uStack_150 = puVar20[0x14];
        uStack_108 = puVar20[0x1d];
        uStack_110 = puVar20[0x1c];
        uStack_f8 = puVar20[0x1f];
        uStack_100 = puVar20[0x1e];
        uStack_f0 = (undefined4)puVar20[0x20];
        uStack_118 = puVar20[0x1b];
        uStack_120 = puVar20[0x1a];
        uStack_1b8 = puVar20[7];
        uStack_1c0 = puVar20[6];
        uStack_1a8 = puVar20[9];
        uStack_1b0 = puVar20[8];
        do {
          puVar9 = puVar19;
          uVar26 = puVar9[1];
          uVar25 = *puVar9;
          *(short *)(puVar20 + 2) = (short)puVar9[2];
          puVar20[1] = uVar26;
          *puVar20 = uVar25;
          FUN_10ac00490(puVar20 + 3);
          puVar8 = puVar9 + 3;
          uVar25 = *puVar8;
          puVar20[4] = puVar9[4];
          puVar20[3] = uVar25;
          puVar20[5] = puVar9[5];
          *puVar8 = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar20[6] = puVar9[6];
          puVar20[7] = puVar9[7];
          uVar25 = puVar9[8];
          puVar20[9] = puVar9[9];
          puVar20[8] = uVar25;
          uVar26 = puVar9[0xb];
          uVar25 = puVar9[10];
          uVar29 = puVar9[0xd];
          uVar28 = puVar9[0xc];
          uVar30 = puVar9[0xe];
          uVar32 = puVar9[0x11];
          uVar31 = puVar9[0x10];
          puVar20[0xf] = puVar9[0xf];
          puVar20[0xe] = uVar30;
          puVar20[0x11] = uVar32;
          puVar20[0x10] = uVar31;
          puVar20[0xb] = uVar26;
          puVar20[10] = uVar25;
          puVar20[0xd] = uVar29;
          puVar20[0xc] = uVar28;
          uVar26 = puVar9[0x13];
          uVar25 = puVar9[0x12];
          uVar29 = puVar9[0x15];
          uVar28 = puVar9[0x14];
          uVar30 = puVar9[0x16];
          uVar32 = puVar9[0x19];
          uVar31 = puVar9[0x18];
          puVar20[0x17] = puVar9[0x17];
          puVar20[0x16] = uVar30;
          puVar20[0x19] = uVar32;
          puVar20[0x18] = uVar31;
          puVar20[0x13] = uVar26;
          puVar20[0x12] = uVar25;
          puVar20[0x15] = uVar29;
          puVar20[0x14] = uVar28;
          uVar26 = puVar9[0x1b];
          uVar25 = puVar9[0x1a];
          uVar29 = puVar9[0x1d];
          uVar28 = puVar9[0x1c];
          uVar31 = puVar9[0x1f];
          uVar30 = puVar9[0x1e];
          *(int *)(puVar20 + 0x20) = (int)puVar9[0x20];
          puVar20[0x1d] = uVar29;
          puVar20[0x1c] = uVar28;
          puVar20[0x1f] = uVar31;
          puVar20[0x1e] = uVar30;
          puVar20[0x1b] = uVar26;
          puVar20[0x1a] = uVar25;
          if ((long)uVar17 < (long)uVar27) break;
          uVar26 = uVar27 << 1 | 1;
          puVar19 = puVar5 + uVar26 * 0x21;
          uVar25 = uVar27 * 2 + 2;
          uVar27 = uVar26;
          if ((long)uVar25 < (long)uVar18) {
            lVar21 = *param_3;
            func_0x00010a01e9ec(lVar21,(int)*puVar19);
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)puVar19[0x21]);
            if (*(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0) <
                *(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0)) {
              uVar27 = uVar25;
              puVar19 = puVar19 + 0x21;
            }
          }
          lVar21 = *param_3;
          func_0x00010a01e9ec(lVar21,(int)*puVar19);
          lVar6 = *param_3;
          func_0x00010a01e9ec(lVar6,(ulong)puStack_1f0 & 0xffffffff);
          puVar20 = puVar9;
        } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <=
                 *(float *)(*(long *)(lVar21 + 0x1a8) + 0x4f0));
        *(undefined2 *)(puVar9 + 2) = uStack_1e0;
        puVar9[1] = uStack_1e8;
        *puVar9 = (ulong)puStack_1f0;
        FUN_10ac00490(puVar8);
        puVar9[4] = uStack_1d0;
        puVar9[3] = uStack_1d8;
        puVar9[5] = uStack_1c8;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        puVar9[6] = uStack_1c0;
        puVar9[7] = uStack_1b8;
        *(undefined4 *)(puVar9 + 0x20) = uStack_f0;
        puVar9[0x1f] = uStack_f8;
        puVar9[0x1e] = uStack_100;
        puVar9[0x1d] = uStack_108;
        puVar9[0x1c] = uStack_110;
        puVar9[0x1b] = uStack_118;
        puVar9[0x1a] = uStack_120;
        puVar9[0x19] = uStack_128;
        puVar9[0x18] = uStack_130;
        puVar9[0x17] = uStack_138;
        puVar9[0x16] = uStack_140;
        puVar9[0x15] = uStack_148;
        puVar9[0x14] = uStack_150;
        puVar9[0x13] = uStack_158;
        puVar9[0x12] = uStack_160;
        puVar9[0x11] = uStack_168;
        puVar9[0x10] = uStack_170;
        puVar9[0xf] = uStack_178;
        puVar9[0xe] = uStack_180;
        puVar9[0xd] = uStack_188;
        puVar9[0xc] = uStack_190;
        puVar9[0xb] = uStack_198;
        puVar9[10] = uStack_1a0;
        puVar9[9] = uStack_1a8;
        puVar9[8] = uStack_1b0;
        puStack_300 = &uStack_1d8;
        FUN_10a1901f0(&puStack_300);
      }
    }
    bVar2 = uVar24 != 0;
    uVar24 = uVar24 - 1;
  } while (bVar2);
  lVar21 = (uVar15 >> 3) * 0xf83e0f83e0f83e1;
  do {
    uStack_2f8 = puVar5[1];
    puStack_300 = (ulong *)*puVar5;
    uStack_2f0 = (undefined2)puVar5[2];
    uStack_2e0 = puVar5[4];
    uStack_2e8 = puVar5[3];
    uStack_2d8 = puVar5[5];
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    uStack_2c8 = puVar5[7];
    uStack_2d0 = puVar5[6];
    uStack_2b8 = puVar5[9];
    uStack_2c0 = puVar5[8];
    uStack_218 = puVar5[0x1d];
    uStack_220 = puVar5[0x1c];
    uStack_208 = puVar5[0x1f];
    uStack_210 = puVar5[0x1e];
    uStack_200 = (undefined4)puVar5[0x20];
    uStack_228 = puVar5[0x1b];
    uStack_230 = puVar5[0x1a];
    uStack_248 = puVar5[0x17];
    uStack_250 = puVar5[0x16];
    uStack_238 = puVar5[0x19];
    uStack_240 = puVar5[0x18];
    uStack_268 = puVar5[0x13];
    uStack_270 = puVar5[0x12];
    uStack_258 = puVar5[0x15];
    uStack_260 = puVar5[0x14];
    uStack_288 = puVar5[0xf];
    uStack_290 = puVar5[0xe];
    uStack_278 = puVar5[0x11];
    uStack_280 = puVar5[0x10];
    uStack_2a8 = puVar5[0xb];
    uStack_2b0 = puVar5[10];
    uStack_298 = puVar5[0xd];
    uStack_2a0 = puVar5[0xc];
    puVar19 = puVar5;
    uVar15 = 0;
    do {
      uVar24 = uVar15 << 1 | 1;
      uVar18 = uVar15 * 2 + 2;
      puVar20 = puVar19 + uVar15 * 0x21 + 0x21;
      if ((long)uVar18 < lVar21) {
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar19[uVar15 * 0x21 + 0x21]);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)puVar19[uVar15 * 0x21 + 0x42]);
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
          puVar20 = puVar19 + uVar15 * 0x21 + 0x42;
          uVar24 = uVar18;
        }
      }
      uVar18 = puVar20[1];
      uVar15 = *puVar20;
      *(short *)(puVar19 + 2) = (short)puVar20[2];
      puVar19[1] = uVar18;
      *puVar19 = uVar15;
      FUN_10ac00490(puVar19 + 3);
      puVar8 = puVar20 + 3;
      uVar15 = *puVar8;
      puVar19[4] = puVar20[4];
      puVar19[3] = uVar15;
      puVar19[5] = puVar20[5];
      *puVar8 = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar19[6] = puVar20[6];
      puVar19[7] = puVar20[7];
      uVar15 = puVar20[8];
      puVar19[9] = puVar20[9];
      puVar19[8] = uVar15;
      uVar18 = puVar20[0xb];
      uVar15 = puVar20[10];
      uVar25 = puVar20[0xd];
      uVar17 = puVar20[0xc];
      uVar27 = puVar20[0xe];
      uVar28 = puVar20[0x11];
      uVar26 = puVar20[0x10];
      puVar19[0xf] = puVar20[0xf];
      puVar19[0xe] = uVar27;
      puVar19[0x11] = uVar28;
      puVar19[0x10] = uVar26;
      puVar19[0xb] = uVar18;
      puVar19[10] = uVar15;
      puVar19[0xd] = uVar25;
      puVar19[0xc] = uVar17;
      uVar18 = puVar20[0x13];
      uVar15 = puVar20[0x12];
      uVar25 = puVar20[0x15];
      uVar17 = puVar20[0x14];
      uVar27 = puVar20[0x16];
      uVar28 = puVar20[0x19];
      uVar26 = puVar20[0x18];
      puVar19[0x17] = puVar20[0x17];
      puVar19[0x16] = uVar27;
      puVar19[0x19] = uVar28;
      puVar19[0x18] = uVar26;
      puVar19[0x13] = uVar18;
      puVar19[0x12] = uVar15;
      puVar19[0x15] = uVar25;
      puVar19[0x14] = uVar17;
      uVar18 = puVar20[0x1b];
      uVar15 = puVar20[0x1a];
      uVar25 = puVar20[0x1d];
      uVar17 = puVar20[0x1c];
      uVar26 = puVar20[0x1f];
      uVar27 = puVar20[0x1e];
      *(int *)(puVar19 + 0x20) = (int)puVar20[0x20];
      puVar19[0x1d] = uVar25;
      puVar19[0x1c] = uVar17;
      puVar19[0x1f] = uVar26;
      puVar19[0x1e] = uVar27;
      puVar19[0x1b] = uVar18;
      puVar19[0x1a] = uVar15;
      puVar19 = puVar20;
      uVar15 = uVar24;
    } while ((long)uVar24 <= (long)(lVar21 - 2U >> 1));
    puVar19 = puVar12 + -0x21;
    if (puVar20 == puVar19) {
      *(undefined2 *)(puVar20 + 2) = uStack_2f0;
      puVar20[1] = uStack_2f8;
      *puVar20 = (ulong)puStack_300;
      FUN_10ac00490(puVar8);
      puVar20[4] = uStack_2e0;
      puVar20[3] = uStack_2e8;
      puVar20[5] = uStack_2d8;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      puVar20[6] = uStack_2d0;
      puVar20[7] = uStack_2c8;
      *(undefined4 *)(puVar20 + 0x20) = uStack_200;
      puVar20[0x1f] = uStack_208;
      puVar20[0x1e] = uStack_210;
      puVar20[0x1d] = uStack_218;
      puVar20[0x1c] = uStack_220;
      puVar20[0x1b] = uStack_228;
      puVar20[0x1a] = uStack_230;
      puVar20[0x19] = uStack_238;
      puVar20[0x18] = uStack_240;
      puVar20[0x17] = uStack_248;
      puVar20[0x16] = uStack_250;
      puVar20[0x15] = uStack_258;
      puVar20[0x14] = uStack_260;
      puVar20[0x13] = uStack_268;
      puVar20[0x12] = uStack_270;
      puVar20[0x11] = uStack_278;
      puVar20[0x10] = uStack_280;
      puVar20[0xf] = uStack_288;
      puVar20[0xe] = uStack_290;
      puVar20[0xd] = uStack_298;
      puVar20[0xc] = uStack_2a0;
      puVar20[0xb] = uStack_2a8;
      puVar20[10] = uStack_2b0;
      puVar20[9] = uStack_2b8;
      puVar20[8] = uStack_2c0;
    }
    else {
      uVar18 = puVar12[-0x20];
      uVar15 = *puVar19;
      *(short *)(puVar20 + 2) = (short)puVar12[-0x1f];
      puVar20[1] = uVar18;
      *puVar20 = uVar15;
      FUN_10ac00490(puVar8);
      puVar9 = puVar12 + -0x1e;
      uVar15 = *puVar9;
      puVar20[4] = puVar12[-0x1d];
      puVar20[3] = uVar15;
      puVar20[5] = puVar12[-0x1c];
      *puVar9 = 0;
      puVar12[-0x1d] = 0;
      puVar12[-0x1c] = 0;
      puVar20[6] = puVar12[-0x1b];
      puVar20[7] = puVar12[-0x1a];
      uVar15 = puVar12[-0x19];
      puVar20[9] = puVar12[-0x18];
      puVar20[8] = uVar15;
      uVar18 = puVar12[-0x16];
      uVar15 = puVar12[-0x17];
      uVar17 = puVar12[-0x14];
      uVar24 = puVar12[-0x15];
      uVar27 = puVar12[-0x12];
      uVar25 = puVar12[-0x13];
      uVar26 = puVar12[-0x11];
      puVar20[0x11] = puVar12[-0x10];
      puVar20[0x10] = uVar26;
      puVar20[0xf] = uVar27;
      puVar20[0xe] = uVar25;
      puVar20[0xd] = uVar17;
      puVar20[0xc] = uVar24;
      puVar20[0xb] = uVar18;
      puVar20[10] = uVar15;
      uVar18 = puVar12[-0xe];
      uVar15 = puVar12[-0xf];
      uVar17 = puVar12[-0xc];
      uVar24 = puVar12[-0xd];
      uVar27 = puVar12[-10];
      uVar25 = puVar12[-0xb];
      uVar26 = puVar12[-9];
      puVar20[0x19] = puVar12[-8];
      puVar20[0x18] = uVar26;
      puVar20[0x17] = uVar27;
      puVar20[0x16] = uVar25;
      puVar20[0x15] = uVar17;
      puVar20[0x14] = uVar24;
      puVar20[0x13] = uVar18;
      puVar20[0x12] = uVar15;
      uVar18 = puVar12[-6];
      uVar15 = puVar12[-7];
      uVar17 = puVar12[-4];
      uVar24 = puVar12[-5];
      uVar27 = puVar12[-2];
      uVar25 = puVar12[-3];
      *(int *)(puVar20 + 0x20) = (int)puVar12[-1];
      puVar20[0x1f] = uVar27;
      puVar20[0x1e] = uVar25;
      puVar20[0x1d] = uVar17;
      puVar20[0x1c] = uVar24;
      puVar20[0x1b] = uVar18;
      puVar20[0x1a] = uVar15;
      *(undefined2 *)(puVar12 + -0x1f) = uStack_2f0;
      puVar12[-0x20] = uStack_2f8;
      *puVar19 = (ulong)puStack_300;
      FUN_10ac00490(puVar9);
      puVar12[-0x1d] = uStack_2e0;
      *puVar9 = uStack_2e8;
      puVar12[-0x1c] = uStack_2d8;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      puVar12[-0x1b] = uStack_2d0;
      puVar12[-0x1a] = uStack_2c8;
      puVar12[-0x18] = uStack_2b8;
      puVar12[-0x19] = uStack_2c0;
      puVar12[-0x10] = uStack_278;
      puVar12[-0x11] = uStack_280;
      puVar12[-0x12] = uStack_288;
      puVar12[-0x13] = uStack_290;
      puVar12[-0x14] = uStack_298;
      puVar12[-0x15] = uStack_2a0;
      puVar12[-0x16] = uStack_2a8;
      puVar12[-0x17] = uStack_2b0;
      puVar12[-8] = uStack_238;
      puVar12[-9] = uStack_240;
      puVar12[-10] = uStack_248;
      puVar12[-0xb] = uStack_250;
      puVar12[-0xc] = uStack_258;
      puVar12[-0xd] = uStack_260;
      puVar12[-0xe] = uStack_268;
      puVar12[-0xf] = uStack_270;
      *(undefined4 *)(puVar12 + -1) = uStack_200;
      puVar12[-2] = uStack_208;
      puVar12[-3] = uStack_210;
      puVar12[-4] = uStack_218;
      puVar12[-5] = uStack_220;
      puVar12[-6] = uStack_228;
      puVar12[-7] = uStack_230;
      puVar1 = (undefined *)((long)puVar20 + (0x108 - (long)puVar5));
      if (0x108 < (long)puVar1) {
        uVar15 = ((ulong)puVar1 >> 3) * 0xf83e0f83e0f83e1 - 2 >> 1;
        lVar6 = *param_3;
        func_0x00010a01e9ec(lVar6,(int)puVar5[uVar15 * 0x21]);
        lVar7 = *param_3;
        func_0x00010a01e9ec(lVar7,(int)*puVar20);
        if (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
            *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0)) {
          uStack_1e8 = puVar20[1];
          puStack_1f0 = (ulong *)*puVar20;
          uStack_1e0 = (undefined2)puVar20[2];
          uStack_1d0 = puVar20[4];
          uStack_1d8 = puVar20[3];
          uStack_1c8 = puVar20[5];
          puVar20[4] = 0;
          puVar20[5] = 0;
          *puVar8 = 0;
          uStack_1b8 = puVar20[7];
          uStack_1c0 = puVar20[6];
          uStack_1a8 = puVar20[9];
          uStack_1b0 = puVar20[8];
          uStack_108 = puVar20[0x1d];
          uStack_110 = puVar20[0x1c];
          uStack_f8 = puVar20[0x1f];
          uStack_100 = puVar20[0x1e];
          uStack_f0 = (undefined4)puVar20[0x20];
          uStack_118 = puVar20[0x1b];
          uStack_120 = puVar20[0x1a];
          uStack_138 = puVar20[0x17];
          uStack_140 = puVar20[0x16];
          uStack_128 = puVar20[0x19];
          uStack_130 = puVar20[0x18];
          uStack_158 = puVar20[0x13];
          uStack_160 = puVar20[0x12];
          uStack_148 = puVar20[0x15];
          uStack_150 = puVar20[0x14];
          uStack_178 = puVar20[0xf];
          uStack_180 = puVar20[0xe];
          uStack_168 = puVar20[0x11];
          uStack_170 = puVar20[0x10];
          uStack_198 = puVar20[0xb];
          uStack_1a0 = puVar20[10];
          uStack_188 = puVar20[0xd];
          uStack_190 = puVar20[0xc];
          puVar12 = puVar5 + uVar15 * 0x21;
          do {
            puVar9 = puVar12;
            uVar24 = puVar9[1];
            uVar18 = *puVar9;
            *(short *)(puVar20 + 2) = (short)puVar9[2];
            puVar20[1] = uVar24;
            *puVar20 = uVar18;
            FUN_10ac00490(puVar20 + 3);
            puVar8 = puVar9 + 3;
            uVar18 = *puVar8;
            puVar20[4] = puVar9[4];
            puVar20[3] = uVar18;
            puVar20[5] = puVar9[5];
            *puVar8 = 0;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar20[6] = puVar9[6];
            puVar20[7] = puVar9[7];
            uVar18 = puVar9[8];
            puVar20[9] = puVar9[9];
            puVar20[8] = uVar18;
            uVar24 = puVar9[0xb];
            uVar18 = puVar9[10];
            uVar25 = puVar9[0xd];
            uVar17 = puVar9[0xc];
            uVar27 = puVar9[0xe];
            uVar28 = puVar9[0x11];
            uVar26 = puVar9[0x10];
            puVar20[0xf] = puVar9[0xf];
            puVar20[0xe] = uVar27;
            puVar20[0x11] = uVar28;
            puVar20[0x10] = uVar26;
            puVar20[0xb] = uVar24;
            puVar20[10] = uVar18;
            puVar20[0xd] = uVar25;
            puVar20[0xc] = uVar17;
            uVar24 = puVar9[0x13];
            uVar18 = puVar9[0x12];
            uVar25 = puVar9[0x15];
            uVar17 = puVar9[0x14];
            uVar27 = puVar9[0x16];
            uVar28 = puVar9[0x19];
            uVar26 = puVar9[0x18];
            puVar20[0x17] = puVar9[0x17];
            puVar20[0x16] = uVar27;
            puVar20[0x19] = uVar28;
            puVar20[0x18] = uVar26;
            puVar20[0x13] = uVar24;
            puVar20[0x12] = uVar18;
            puVar20[0x15] = uVar25;
            puVar20[0x14] = uVar17;
            uVar24 = puVar9[0x1b];
            uVar18 = puVar9[0x1a];
            uVar25 = puVar9[0x1d];
            uVar17 = puVar9[0x1c];
            uVar26 = puVar9[0x1f];
            uVar27 = puVar9[0x1e];
            *(int *)(puVar20 + 0x20) = (int)puVar9[0x20];
            puVar20[0x1d] = uVar25;
            puVar20[0x1c] = uVar17;
            puVar20[0x1f] = uVar26;
            puVar20[0x1e] = uVar27;
            puVar20[0x1b] = uVar24;
            puVar20[0x1a] = uVar18;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            lVar6 = *param_3;
            func_0x00010a01e9ec(lVar6,(int)puVar5[uVar15 * 0x21]);
            lVar7 = *param_3;
            func_0x00010a01e9ec(lVar7,(ulong)puStack_1f0 & 0xffffffff);
            puVar12 = puVar5 + uVar15 * 0x21;
            puVar20 = puVar9;
          } while (*(float *)(*(long *)(lVar6 + 0x1a8) + 0x4f0) <
                   *(float *)(*(long *)(lVar7 + 0x1a8) + 0x4f0));
          *(undefined2 *)(puVar9 + 2) = uStack_1e0;
          puVar9[1] = uStack_1e8;
          *puVar9 = (ulong)puStack_1f0;
          FUN_10ac00490(puVar8);
          puVar9[4] = uStack_1d0;
          puVar9[3] = uStack_1d8;
          puVar9[5] = uStack_1c8;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          puVar9[6] = uStack_1c0;
          puVar9[7] = uStack_1b8;
          *(undefined4 *)(puVar9 + 0x20) = uStack_f0;
          puVar9[0x1f] = uStack_f8;
          puVar9[0x1e] = uStack_100;
          puVar9[0x1d] = uStack_108;
          puVar9[0x1c] = uStack_110;
          puVar9[0x1b] = uStack_118;
          puVar9[0x1a] = uStack_120;
          puVar9[0x19] = uStack_128;
          puVar9[0x18] = uStack_130;
          puVar9[0x17] = uStack_138;
          puVar9[0x16] = uStack_140;
          puVar9[0x15] = uStack_148;
          puVar9[0x14] = uStack_150;
          puVar9[0x13] = uStack_158;
          puVar9[0x12] = uStack_160;
          puVar9[0x11] = uStack_168;
          puVar9[0x10] = uStack_170;
          puVar9[0xf] = uStack_178;
          puVar9[0xe] = uStack_180;
          puVar9[0xd] = uStack_188;
          puVar9[0xc] = uStack_190;
          puVar9[0xb] = uStack_198;
          puVar9[10] = uStack_1a0;
          puVar9[9] = uStack_1a8;
          puVar9[8] = uStack_1b0;
          puStack_1f8 = &uStack_1d8;
          FUN_10a1901f0(&puStack_1f8);
        }
      }
    }
    puStack_1f0 = &uStack_2e8;
    FUN_10a1901f0(&puStack_1f0);
    bVar2 = lVar21 < 3;
    lVar21 = lVar21 + -1;
    puVar12 = puVar19;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_10ac06f90:
  puVar12 = puVar23;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_10ac0658c;
}



/* Entry: 10abfc5a0; end: 10abfc767;  */

/* WARNING: Removing unreachable block (ram,0x00010abfc89c) */
/* WARNING: Removing unreachable block (ram,0x00010abfc8ac) */

void FUN_10abfc5a0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  
  puVar16 = (undefined8 *)param_1[1];
  if (puVar16 < (undefined8 *)param_1[2]) {
    *puVar16 = *param_2;
    plVar5 = param_2 + 1;
    lVar7 = *plVar5;
    plVar6 = puVar16 + 1;
    *plVar6 = lVar7;
    lVar9 = param_2[2];
    puVar16[2] = lVar9;
    if (lVar9 == 0) {
      *puVar16 = plVar6;
    }
    else {
      *(long **)(lVar7 + 0x10) = plVar6;
      *param_2 = plVar5;
      *plVar5 = 0;
      param_2[2] = 0;
    }
    puVar15 = puVar16 + 3;
LAB_10abfc748:
    param_1[1] = (ulong)puVar15;
    return;
  }
  puVar14 = (undefined8 *)*param_1;
  lVar7 = (long)puVar16 - (long)puVar14;
  uVar8 = (lVar7 >> 3) * -0x5555555555555555 + 1;
  if (uVar8 < 0xaaaaaaaaaaaaaab) {
    lVar9 = (long)param_1[2] - (long)puVar14 >> 3;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      lVar9 = uVar10 * 0x18;
      __Znwm();
      puVar1 = (undefined8 *)(lVar9 + lVar7);
      plVar5 = param_2 + 1;
      lVar11 = *plVar5;
      *puVar1 = *param_2;
      plVar6 = puVar1 + 1;
      *plVar6 = lVar11;
      lVar12 = param_2[2];
      puVar1[2] = lVar12;
      if (lVar12 == 0) {
        *puVar1 = plVar6;
      }
      else {
        *(long **)(lVar11 + 0x10) = plVar6;
        *param_2 = plVar5;
        *plVar5 = 0;
        param_2[2] = 0;
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)param_1[1];
        lVar7 = (long)puVar16 - (long)puVar14;
      }
      puVar15 = puVar1 + 3;
      if (puVar14 != puVar16) {
        lVar11 = 0;
        do {
          puVar2 = (undefined8 *)(((long)puVar1 - lVar7) + lVar11);
          puVar3 = (undefined8 *)((long)puVar14 + lVar11);
          *puVar2 = *puVar3;
          plVar5 = puVar3 + 1;
          lVar12 = *plVar5;
          plVar6 = puVar2 + 1;
          *plVar6 = lVar12;
          lVar13 = puVar3[2];
          puVar2[2] = lVar13;
          if (lVar13 == 0) {
            *puVar2 = plVar6;
          }
          else {
            *(long **)(lVar12 + 0x10) = plVar6;
            *(long **)((long)puVar14 + lVar11) = plVar5;
            *plVar5 = 0;
            puVar3[2] = 0;
          }
          lVar11 = lVar11 + 0x18;
        } while ((undefined8 *)((long)puVar14 + lVar11) != puVar16);
        do {
          FUN_10a0da1b8(puVar14,puVar14[1]);
          puVar14 = puVar14 + 3;
        } while (puVar14 != puVar16);
        puVar14 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar1 - lVar7;
      param_1[1] = (ulong)puVar15;
      param_1[2] = lVar9 + uVar10 * 0x18;
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
      goto LAB_10abfc748;
    }
  }
  else {
    FUN_10ac06530();
  }
  func_0x000109ffded8();
  FUN_10a0ee900(param_1,&UNK_10f69b1a7,0xea);
  lVar7 = param_2[3];
  lVar9 = param_2[4];
  if (lVar7 != lVar9) {
    do {
      FUN_10a0ee900(&ppuStack_a8,&UNK_10f69b292,0x11);
      uVar8 = uStack_a0;
      pppuVar4 = (undefined8 ***)ppuStack_a8;
      if (-1 < (char)bStack_91) {
        uVar8 = (ulong)bStack_91;
        pppuVar4 = &ppuStack_a8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar4,uVar8);
      FUN_10abfc768(&ppuStack_c0,lVar7);
      uVar8 = uStack_b8;
      pppuVar4 = (undefined8 ***)ppuStack_c0;
      if (-1 < (char)bStack_a9) {
        uVar8 = (ulong)bStack_a9;
        pppuVar4 = &ppuStack_c0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar4,uVar8);
      lVar7 = lVar7 + 0x108;
    } while (lVar7 != lVar9);
  }
  return;
}



/* Entry: 10abfc768; end: 10abfc923;  */

/* WARNING: Removing unreachable block (ram,0x00010abfc89c) */
/* WARNING: Removing unreachable block (ram,0x00010abfc8ac) */

void FUN_10abfc768(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  FUN_10a0ee900(param_1,&UNK_10f69b1a7,0xea);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar4 != lVar2) {
    do {
      FUN_10a0ee900(&ppuStack_68,&UNK_10f69b292,0x11);
      uVar1 = uStack_60;
      pppuVar3 = (undefined8 ***)ppuStack_68;
      if (-1 < (char)bStack_51) {
        uVar1 = (ulong)bStack_51;
        pppuVar3 = &ppuStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      FUN_10abfc768(&ppuStack_80,lVar4);
      uVar1 = uStack_78;
      pppuVar3 = (undefined8 ***)ppuStack_80;
      if (-1 < (char)bStack_69) {
        uVar1 = (ulong)bStack_69;
        pppuVar3 = &ppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      lVar4 = lVar4 + 0x108;
    } while (lVar4 != lVar2);
  }
  return;
}



/* Entry: 10abfc924; end: 10abfd28f;  */

/* WARNING: Removing unreachable block (ram,0x00010abfcc08) */
/* WARNING: Removing unreachable block (ram,0x00010abfcca4) */

long ** FUN_10abfc924(undefined8 *param_1,long **param_2,long **param_3,long *param_4,
                     undefined4 *param_5,long **param_6,ulong param_7,undefined8 *param_8,
                     undefined8 *param_9)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  code *pcVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined1 uVar21;
  uint uVar22;
  long **pplVar23;
  long **pplVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *unaff_x22;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulong unaff_x25;
  long *unaff_x26;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 unaff_d9;
  undefined8 uVar35;
  undefined8 uVar36;
  long *plStack_2b0;
  long *plStack_2a8;
  long **pplStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_280;
  ulong uStack_278;
  long **pplStack_270;
  undefined8 *puStack_268;
  long *plStack_260;
  ulong uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  ulong uStack_238;
  long *plStack_230;
  long **pplStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined1 uStack_210;
  undefined2 uStack_20f;
  undefined8 *puStack_208;
  long **pplStack_200;
  long *plStack_1f0;
  long *plStack_1e8;
  uint uStack_1dc;
  long **pplStack_1d8;
  long **pplStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 *puStack_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 *puStack_188;
  uint uStack_17c;
  long **pplStack_178;
  ulong uStack_170;
  long **pplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  uint uStack_14c;
  long **pplStack_148;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  uStack_190 = (uint)param_5;
  puStack_188 = param_9;
  iVar3 = *(int *)(param_2 + 4);
  pplVar7 = param_2;
  pplVar10 = param_3;
  plVar25 = param_4;
  pplStack_1d0 = param_6;
  uStack_1c8 = param_7;
  func_0x00010a01e9ec(param_2,param_3);
  uStack_18c = (uint)param_3;
  pplStack_178 = param_2;
  FUN_10a015150();
  pplVar23 = (long **)pplVar7[0x35];
  pplStack_1d8 = param_2;
  if (pplVar23 == (long **)0x0) {
    uStack_198 = 0;
    uStack_19c = 0;
  }
  else {
    pplVar24 = pplVar23;
    (*(code *)(*pplVar23)[0x38])();
    uStack_198._4_4_ = SUB84(pplVar24,0);
    pplVar24 = pplVar23;
    (*(code *)(*pplVar23)[0x39])();
    uStack_198 = CONCAT44(uStack_198._4_4_,(int)pplVar24);
    (*(code *)(*pplVar23)[0x3a])();
    uStack_19c = SUB84(pplVar23,0);
    param_2 = pplVar23;
  }
  iVar11 = (int)plVar25;
  uVar27 = *(uint *)(pplVar7 + 3);
  lVar14 = 0x60;
  if ((uVar27 & 0x8000) != 0) {
    lVar14 = 0x54;
  }
  pfVar1 = (float *)((long)pplVar7 + lVar14);
  uVar15 = (ulong)(uint)(*(float *)(param_1 + 3) -
                        (*(float *)((long)param_1 + 0xc) * *pfVar1 +
                         *(float *)(param_1 + 2) * pfVar1[1] +
                        *(float *)((long)param_1 + 0x14) * pfVar1[2]));
  uStack_1b0 = (uint)param_4;
  pplVar23 = param_6;
  uVar12 = uVar27;
  uStack_1dc = uVar27;
  if (uStack_1c8 != 0) {
    uVar17 = 0;
    puVar29 = (undefined8 *)0x0;
    uStack_1ac = uVar27 >> 5 & 1;
    puStack_1a8 = (undefined8 *)((long)pplStack_1d8 + 4);
    uStack_1a0 = (uint)((uStack_1b0 != 1 && iVar3 != 0x162) && (uStack_1b0 == 1 || 0x161 < iVar3));
    plStack_1e8 = (long *)0xbf800000;
    plStack_1f0 = (long *)0x0;
    uVar12 = 0xffff;
    unaff_x22 = param_1;
    puStack_1b8 = param_1;
    pplStack_168 = pplVar7;
    do {
      uVar19 = *(ushort *)((long)pplStack_1d0 + uVar17 * 2);
      pplVar24 = (long **)(ulong)uVar19;
      param_1 = unaff_x22;
      if (uVar19 != 0xffff) {
        param_2 = pplStack_178;
        param_3 = pplVar24;
        uStack_1c0 = uVar17;
        FUN_10a021e20();
        uStack_170 = (ulong)*(byte *)((long)param_2 + 0x1a);
        plStack_d8 = plStack_1e8;
        plStack_e0 = plStack_1f0;
        uStack_d0._0_4_ = (uint)uStack_d0 & 0xffffff00;
        uStack_d0._4_4_ = 0;
        uStack_c8._0_4_ = 0xffffffff;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        uVar17 = ((long)pplStack_1d8[0x1b] - (long)pplStack_1d8[0x1a] >> 4) * -0x5555555555555555;
        if (uStack_1c0 <= uVar17 && uVar17 - uStack_1c0 != 0) {
          plVar8 = pplStack_1d8[0x1a] + uStack_1c0 * 6;
          plStack_d8 = (long *)plVar8[1];
          plStack_e0 = (long *)*plVar8;
          uStack_c8._0_4_ = (undefined4)plVar8[3];
          uStack_d0._0_4_ = (uint)plVar8[2];
          uStack_d0._4_4_ = (undefined4)((ulong)plVar8[2] >> 0x20);
          uStack_bc = (undefined4)*(undefined8 *)((long)plVar8 + 0x24);
          uStack_b8 = (undefined4)((ulong)*(undefined8 *)((long)plVar8 + 0x24) >> 0x20);
          uStack_c8._4_4_ = (undefined4)*(undefined8 *)((long)plVar8 + 0x1c);
          uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)plVar8 + 0x1c) >> 0x20);
        }
        uVar17 = uStack_1c0;
        uVar27 = uStack_1dc;
        if (*(byte *)((long)param_2 + 0x1a) != 0) {
          uVar28 = 0;
          pplVar23 = param_6;
          uStack_17c = (uint)uVar19;
          do {
            iVar11 = (int)plVar25;
            uStack_134 = (int)pplVar24 + (int)uVar28;
            param_3 = (long **)(ulong)(uStack_134 & 0xffff);
            pplVar24 = pplStack_178;
            FUN_10a021e20();
            bVar5 = *(byte *)(pplVar24 + 4);
            unaff_x25 = (ulong)bVar5;
            uVar21 = *(undefined1 *)((long)pplVar7 + 1);
            uStack_160 = *param_8;
            uStack_158 = param_8[1];
            unaff_d9 = param_8[2];
            uVar35 = param_8[3];
            uVar36 = param_8[4];
            uStack_13c = (uint)((*(byte *)((long)pplVar24 + 0x1b) & 7) != 0);
            uStack_138 = (uint)*(byte *)(param_8 + 5);
            uStack_110 = puStack_188[4];
            uStack_108 = (undefined4)puStack_188[5];
            uStack_104 = (undefined4)((ulong)puStack_188[5] >> 0x20);
            uStack_f8 = (undefined4)puStack_188[7];
            uStack_f4 = (undefined4)((ulong)puStack_188[7] >> 0x20);
            uStack_100 = (undefined4)puStack_188[6];
            uStack_fc = (undefined4)((ulong)puStack_188[6] >> 0x20);
            uStack_f0 = *(uint *)(puStack_188 + 8);
            uStack_128 = (undefined4)puStack_188[1];
            uStack_124 = (undefined4)((ulong)puStack_188[1] >> 0x20);
            uStack_130 = (undefined4)*puStack_188;
            uStack_12c = (undefined4)((ulong)*puStack_188 >> 0x20);
            uStack_118 = (undefined4)puStack_188[3];
            uStack_114 = (undefined4)((ulong)puStack_188[3] >> 0x20);
            uStack_120 = (uint)puStack_188[2];
            uStack_11c = (undefined4)((ulong)puStack_188[2] >> 0x20);
            iStack_140 = (int)puVar29;
            uVar27 = 0;
            if (((ulong)puVar29 & 0xff) != 0) {
              uVar27 = uStack_1a0;
            }
            plVar25 = param_4;
            uVar22 = uStack_1ac;
            uStack_14c = uVar12;
            pplStack_148 = pplVar24;
            if ((uVar27 == 1) && (plVar8 = pplVar24[0x2c], plVar8 != (long *)0x0)) {
              (**(code **)(*plVar8 + 0x98))();
              func_0x000107c2b07c(&plStack_b0,&UNK_10f69b62f);
              param_3 = &plStack_b0;
              FUN_10a203c54();
              unaff_x22 = puStack_1b8;
              uVar22 = uStack_1ac;
              if (plVar8 != (long *)0x0) {
                func_0x000107c2b07c(&plStack_b0,&UNK_10f69b644);
                plVar8 = plVar8 + 6;
                param_3 = &plStack_b0;
                func_0x00010a203cf4();
                unaff_x22 = puStack_1b8;
                uVar22 = uStack_1ac;
                if (plVar8 != (long *)0x0) {
                  lVar14 = 0;
                  FUN_10a2421c8();
                  uStack_160 = *(undefined8 *)(lVar14 + 0x208);
                  uStack_124 = 0;
                  uStack_120 = 0;
                  uStack_12c = 0;
                  uStack_128 = 0;
                  uStack_118 = 0;
                  uStack_114 = 0;
                  uStack_110 = 0;
                  uStack_fc = 0;
                  uStack_f8 = 0;
                  uStack_104 = 0;
                  uStack_100 = 0;
                  uStack_130 = 0x3f800000;
                  uStack_11c = 0x3f800000;
                  unaff_d9 = 0;
                  uStack_108 = 0x3f800000;
                  uStack_f4 = 0x3f800000;
                  if ((uStack_f0 & 1) == 0) {
                    uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
                  }
                  uStack_158 = 0;
                  uVar21 = 3;
                  uStack_138 = 1;
                  uVar35 = 0;
                  uVar36 = 0;
                  plVar25 = (long *)0x1;
                  unaff_x22 = puStack_1b8;
                  uVar22 = 0;
                }
              }
            }
            bVar5 = unaff_x25 < 9 & (byte)(0x160 >> (ulong)(bVar5 & 0x1f));
            unaff_x26 = (long *)*unaff_x22;
            param_6 = (long **)(ulong)(*(byte *)(pplVar7 + 3) >> 1 & 1);
            param_1 = (undefined8 *)&uStack_130;
            if ((uStack_f0 & 1) == 0) {
              param_1 = puStack_1a8;
            }
            param_2 = (long **)unaff_x26[1];
            uStack_150 = uVar22;
            if (param_2 < (long **)unaff_x26[2]) {
              plVar25 = (long *)(ulong)*(uint *)(pplVar7 + 8);
              param_5 = (undefined4 *)(ulong)*(uint *)((long)pplVar7 + 0x44);
              pplStack_200 = &plStack_e0;
              uStack_20f = CONCAT11((char)uStack_13c,bVar5);
              param_3 = (long **)(ulong)uStack_18c;
              pplVar10 = (long **)(ulong)uStack_134;
              uStack_210 = uVar21;
              puStack_208 = param_1;
              FUN_10ac088bc(uVar15);
              pplVar7 = param_2 + 0x21;
              unaff_x26[1] = (long)pplVar7;
            }
            else {
              puVar29 = (undefined8 *)((long)param_2 - *unaff_x26);
              uVar17 = ((long)puVar29 >> 3) * 0xf83e0f83e0f83e1 + 1;
              puVar30 = param_8;
              if (0xf83e0f83e0f83e < uVar17) goto LAB_10abfd250;
              lVar14 = unaff_x26[2] - *unaff_x26 >> 3;
              uVar18 = lVar14 * 0x1f07c1f07c1f07c2;
              if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
                uVar18 = uVar17;
              }
              if (0x7c1f07c1f07c1e < (ulong)(lVar14 * 0xf83e0f83e0f83e1)) {
                uVar18 = 0xf83e0f83e0f83e;
              }
              plStack_90 = unaff_x26;
              if (uVar18 == 0) {
                plVar8 = (long *)0x0;
              }
              else {
                plVar8 = unaff_x26;
                FUN_10a193c28();
              }
              unaff_x25 = (long)plVar8 + (long)puVar29;
              param_5 = (undefined4 *)(ulong)*(uint *)((long)pplStack_168 + 0x44);
              pplStack_200 = &plStack_e0;
              uStack_20f = CONCAT11((char)uStack_13c,bVar5);
              uStack_210 = uVar21;
              puStack_208 = param_1;
              plStack_b0 = plVar8;
              plStack_a8 = (long *)unaff_x25;
              plStack_98 = plVar8 + uVar18 * 0x21;
              FUN_10ac088bc(uVar15,unaff_x25,uStack_18c,uStack_134,*(undefined4 *)(pplStack_168 + 8)
                            ,param_5,param_6,*(undefined2 *)(unaff_x22 + 1),plVar25);
              pplVar7 = (long **)(unaff_x25 + 0x108);
              param_3 = (long **)*unaff_x26;
              pplVar10 = (long **)unaff_x26[1];
              plVar31 = (long *)((long)param_3 + (unaff_x25 - (long)pplVar10));
              plVar25 = plVar31;
              pplStack_a0 = pplVar7;
              func_0x00010a193c70(unaff_x26);
              plStack_b0 = (long *)*unaff_x26;
              *unaff_x26 = (long)plVar31;
              unaff_x26[1] = (long)pplVar7;
              plStack_98 = (long *)unaff_x26[2];
              unaff_x26[2] = (long)(plVar8 + uVar18 * 0x21);
              param_2 = &plStack_b0;
              plStack_a8 = plStack_b0;
              pplStack_a0 = (long **)plStack_b0;
              func_0x00010a193e00(param_2);
              param_4 = (long *)(ulong)uStack_1b0;
            }
            unaff_x26[1] = (long)pplVar7;
            lVar14 = ((long *)*unaff_x22)[1];
            if (*(long *)*unaff_x22 == lVar14) goto LAB_10abfd24c;
            *(char *)(lVar14 + -0xd4) = (char)((ulong)uStack_198 >> 0x20);
            *(char *)(lVar14 + -0xd3) = (char)uStack_198;
            *(char *)(lVar14 + -0xd2) = (char)uStack_19c;
            if ((uStack_190 & 1) == 0) {
              uVar19 = 0;
              uVar16 = *(ushort *)(lVar14 + -0xa8) & 0xffef;
              *(ushort *)(lVar14 + -0xa8) = uVar16;
            }
            else {
              bVar5 = *(byte *)(pplStack_148 + 3);
              uVar16 = *(ushort *)(lVar14 + -0xa8) & 0xffe0 |
                       *(ushort *)(lVar14 + -0xa8) & 0xf | (bVar5 >> 2 & 1) << 4;
              *(ushort *)(lVar14 + -0xa8) = uVar16;
              uVar19 = (bVar5 & 2) << 4;
            }
            pplVar24 = (long **)(ulong)uStack_17c;
            uVar20 = 0x200;
            if (uStack_150 == 0) {
              uVar20 = 0;
            }
            *(ushort *)(lVar14 + -0xa8) =
                 uVar19 | uVar20 | (*(byte *)(pplStack_148 + 10) & 1) << 2 | uVar16 & 0xfddb;
            uVar12 = uStack_134;
            if (((uStack_14c ^ 0xffffffff) & 0xffff) != 0) {
              uVar12 = uStack_14c;
            }
            *(char *)(lVar14 + -0xa6) = (char)iStack_140;
            *(int *)(lVar14 + -0xa4) = (int)param_4;
            *(short *)(lVar14 + -0xa0) = (short)uVar12;
            if (*(char *)((long)pplStack_168 + 0x19) < '\0') {
              plVar8 = pplStack_168[0xb];
              plVar31 = pplStack_168[9];
              *(long **)(lVar14 + -0xc0) = pplStack_168[10];
              *(long **)(lVar14 + -200) = plVar31;
              *(long **)(lVar14 + -0xb8) = plVar8;
              if ((*(byte *)(lVar14 + -0xb0) & 1) == 0) {
                *(undefined1 *)(lVar14 + -0xb0) = 1;
              }
            }
            if ((uStack_138 & 1) != 0) {
              *(undefined8 *)(lVar14 + -0x58) = uStack_160;
              *(undefined8 *)(lVar14 + -0x50) = uStack_158;
              *(undefined8 *)(lVar14 + -0x48) = unaff_d9;
              *(undefined8 *)(lVar14 + -0x40) = uVar35;
              *(undefined8 *)(lVar14 + -0x38) = uVar36;
            }
            uVar28 = uVar28 + 1;
            puVar29 = (undefined8 *)(ulong)(iStack_140 + 1);
            pplVar23 = param_6;
            uVar17 = uStack_1c0;
            param_1 = unaff_x22;
            pplVar7 = pplStack_168;
            uVar27 = uStack_1dc;
          } while (uStack_170 != uVar28);
        }
      }
      iVar11 = (int)plVar25;
      uVar17 = uVar17 + 1;
      unaff_x22 = param_1;
    } while (uVar17 != uStack_1c8);
    if (((ulong)puVar29 & 0xff) != 0) {
      return param_2;
    }
    pplVar23 = param_6;
    unaff_x22 = puVar29;
    uVar12 = *(uint *)(pplVar7 + 3);
  }
  param_6 = pplVar7;
  uVar22 = uStack_1b0;
  plVar25 = (long *)*param_1;
  puVar30 = (undefined8 *)(ulong)(uVar12 >> 1 & 1);
  puVar2 = puStack_188;
  if (*(char *)(puStack_188 + 8) == '\0') {
    puVar2 = (undefined8 *)((long)pplStack_1d8 + 4);
  }
  uStack_128 = 0xbf800000;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_11c = 0;
  uStack_118 = 0xffffffff;
  uStack_110 = 0;
  uStack_108 = 0;
  param_2 = (long **)plVar25[1];
  if (param_2 < (long **)plVar25[2]) {
    uStack_210 = *(undefined1 *)((long)param_6 + 1);
    pplStack_200 = (long **)&uStack_130;
    uStack_20f = 0x101;
    puStack_208 = puVar2;
    func_0x00010ac089ac(uVar15,param_2,uStack_18c,0xffff,*(undefined4 *)(param_6 + 8),
                        *(undefined4 *)((long)param_6 + 0x44),puVar30,*(undefined2 *)(param_1 + 1),
                        uStack_1b0);
    pplVar10 = param_2 + 0x21;
    plVar25[1] = (long)pplVar10;
  }
  else {
    uVar28 = (long)param_2 - *plVar25;
    uVar17 = ((long)uVar28 >> 3) * 0xf83e0f83e0f83e1 + 1;
    puVar29 = param_8;
    if (0xf83e0f83e0f83e < uVar17) {
LAB_10abfd250:
      FUN_10a193c14();
      func_0x00010a193e00(&plStack_e0);
      pplVar24 = param_2;
      __Unwind_Resume();
      pcStack_218 = FUN_10abfd290;
      pplVar7 = pplVar24;
      if (pplVar23 != (long **)0x0) {
        uVar19 = 0x30;
        if (iVar11 == 0) {
          uVar19 = 0;
        }
        lVar14 = (long)pplVar23 << 2;
        pplVar23 = pplVar10;
        uStack_280 = unaff_d9;
        uStack_278 = uVar15;
        pplStack_270 = param_6;
        puStack_268 = param_1;
        plStack_260 = unaff_x26;
        uStack_258 = unaff_x25;
        puStack_250 = puVar30;
        puStack_248 = puVar29;
        puStack_240 = unaff_x22;
        uStack_238 = uVar28;
        plStack_230 = plVar25;
        pplStack_228 = param_2;
        puStack_220 = &stack0xfffffffffffffff0;
        do {
          uVar4 = *param_5;
          pplVar9 = param_3;
          func_0x00010a01e9ec(param_3,uVar4);
          FUN_10a015150(param_3,uVar4);
          fVar34 = *(float *)(pplVar24 + 3) -
                   (*(float *)((long)pplVar24 + 0xc) * *(float *)(pplVar9 + 0xc) +
                    *(float *)(pplVar24 + 2) * *(float *)((long)pplVar9 + 100) +
                   *(float *)((long)pplVar24 + 0x14) * *(float *)(pplVar9 + 0xd));
          uVar27 = *(uint *)(pplVar9 + 3);
          plVar25 = *pplVar24;
          uVar12 = uVar27 >> 1 & 1;
          pplVar7 = (long **)plVar25[1];
          if (pplVar7 < (long **)plVar25[2]) {
            func_0x00010ac08a9c(fVar34,pplVar7,uVar4,0xffff,*(undefined4 *)(pplVar9 + 8),
                                *(undefined4 *)((long)pplVar9 + 0x44),uVar12,
                                *(undefined2 *)(pplVar24 + 1),pplVar23,
                                *(undefined1 *)((long)pplVar9 + 1));
            pplVar9 = pplVar7 + 0x21;
            plVar25[1] = (long)pplVar9;
          }
          else {
            lVar26 = (long)pplVar7 - *plVar25;
            uVar15 = (lVar26 >> 3) * 0xf83e0f83e0f83e1 + 1;
            if (0xf83e0f83e0f83e < uVar15) {
              FUN_10a193c14();
              func_0x00010a193e00(&plStack_2b0);
              __Unwind_Resume();
              if (pplVar7[6] != (long *)0x0) {
                pplVar7[7] = pplVar7[6];
                __ZdlPv();
              }
              if (pplVar7[3] != (long *)0x0) {
                pplVar7[4] = pplVar7[3];
                __ZdlPv();
              }
              if (*pplVar7 != (long *)0x0) {
                pplVar7[1] = *pplVar7;
                __ZdlPv();
              }
              return pplVar7;
            }
            lVar13 = plVar25[2] - *plVar25 >> 3;
            uVar17 = lVar13 * 0x1f07c1f07c1f07c2;
            if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
              uVar17 = uVar15;
            }
            if (0x7c1f07c1f07c1e < (ulong)(lVar13 * 0xf83e0f83e0f83e1)) {
              uVar17 = 0xf83e0f83e0f83e;
            }
            plStack_290 = plVar25;
            if (uVar17 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              plVar8 = plVar25;
              FUN_10a193c28();
            }
            lVar26 = (long)plVar8 + lVar26;
            plStack_2b0 = plVar8;
            plStack_2a8 = (long *)lVar26;
            plStack_298 = plVar8 + uVar17 * 0x21;
            func_0x00010ac08a9c(fVar34,lVar26,uVar4,0xffff,*(undefined4 *)(pplVar9 + 8),
                                *(undefined4 *)((long)pplVar9 + 0x44),uVar12,
                                *(undefined2 *)(pplVar24 + 1),(int)pplVar10,
                                *(undefined1 *)((long)pplVar9 + 1));
            pplVar9 = (long **)(lVar26 + 0x108);
            lVar26 = lVar26 + (*plVar25 - plVar25[1]);
            pplStack_2a0 = pplVar9;
            func_0x00010a193c70(plVar25,*plVar25,plVar25[1],lVar26);
            plStack_2b0 = (long *)*plVar25;
            *plVar25 = lVar26;
            plVar25[1] = (long)pplVar9;
            plStack_298 = (long *)plVar25[2];
            plVar25[2] = (long)(plVar8 + uVar17 * 0x21);
            pplVar7 = &plStack_2b0;
            plStack_2a8 = plStack_2b0;
            pplStack_2a0 = (long **)plStack_2b0;
            func_0x00010a193e00(pplVar7);
            pplVar23 = (long **)((ulong)pplVar10 & 0xffffffff);
          }
          plVar25[1] = (long)pplVar9;
          lVar26 = (*pplVar24)[1];
          if (**pplVar24 == lVar26) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10abfd554);
            (*pcVar6)();
          }
          *(ushort *)(lVar26 + -0xa8) =
               uVar19 | (ushort)((uVar27 >> 5 & 1) << 9) | *(ushort *)(lVar26 + -0xa8) & 0xfdcf;
          *(int *)(lVar26 + -0xa4) = (int)pplVar23;
          *(undefined2 *)(lVar26 + -0xa0) = 0xffff;
          param_5 = param_5 + 1;
          lVar14 = lVar14 + -4;
        } while (lVar14 != 0);
      }
      return pplVar7;
    }
    lVar14 = plVar25[2] - *plVar25 >> 3;
    uVar18 = lVar14 * 0x1f07c1f07c1f07c2;
    if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
      uVar18 = uVar17;
    }
    if (0x7c1f07c1f07c1e < (ulong)(lVar14 * 0xf83e0f83e0f83e1)) {
      uVar18 = 0xf83e0f83e0f83e;
    }
    uStack_c0 = SUB84(plVar25,0);
    uStack_bc = (undefined4)((ulong)plVar25 >> 0x20);
    if (uVar18 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = plVar25;
      FUN_10a193c28();
    }
    uVar22 = uStack_1b0;
    lVar14 = (long)plVar8 + uVar28;
    uStack_210 = *(undefined1 *)((long)param_6 + 1);
    pplStack_200 = (long **)&uStack_130;
    uStack_20f = 0x101;
    puStack_208 = puVar2;
    plStack_e0 = plVar8;
    plStack_d8 = (long *)lVar14;
    uStack_c8 = plVar8 + uVar18 * 0x21;
    func_0x00010ac089ac(uVar15,lVar14,uStack_18c,0xffff,*(undefined4 *)(param_6 + 8),
                        *(undefined4 *)((long)param_6 + 0x44),puVar30,*(undefined2 *)(param_1 + 1),
                        uStack_1b0);
    pplVar10 = (long **)(lVar14 + 0x108);
    lVar14 = lVar14 + (*plVar25 - plVar25[1]);
    uStack_d0 = pplVar10;
    func_0x00010a193c70(plVar25,*plVar25,plVar25[1],lVar14);
    plStack_e0 = (long *)*plVar25;
    *plVar25 = lVar14;
    plVar25[1] = (long)pplVar10;
    uStack_d0._0_4_ = (uint)plStack_e0;
    uStack_d0._4_4_ = (undefined4)((ulong)plStack_e0 >> 0x20);
    lVar14 = plVar25[2];
    plVar25[2] = (long)(plVar8 + uVar18 * 0x21);
    uStack_c8._0_4_ = (undefined4)lVar14;
    uStack_c8._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
    param_2 = &plStack_e0;
    plStack_d8 = plStack_e0;
    func_0x00010a193e00(param_2);
    uVar27 = uStack_1dc;
  }
  plVar25[1] = (long)pplVar10;
  lVar14 = ((long *)*param_1)[1];
  if (*(long *)*param_1 != lVar14) {
    *(char *)(lVar14 + -0xd4) = (char)((ulong)uStack_198 >> 0x20);
    *(char *)(lVar14 + -0xd3) = (char)uStack_198;
    *(char *)(lVar14 + -0xd2) = (char)uStack_19c;
    uVar19 = 0x30;
    if (uStack_190 == 0) {
      uVar19 = 0;
    }
    *(ushort *)(lVar14 + -0xa8) =
         *(ushort *)(lVar14 + -0xa8) & 0xfdcf | uVar19 | (ushort)((uVar27 & 0x20) << 4);
    *(uint *)(lVar14 + -0xa4) = uVar22;
    *(undefined2 *)(lVar14 + -0xa0) = 0xffff;
    if (*(char *)(param_8 + 5) == '\x01') {
      uVar36 = param_8[1];
      uVar35 = *param_8;
      uVar33 = param_8[3];
      uVar32 = param_8[2];
      *(undefined8 *)(lVar14 + -0x38) = param_8[4];
      *(undefined8 *)(lVar14 + -0x40) = uVar33;
      *(undefined8 *)(lVar14 + -0x48) = uVar32;
      *(undefined8 *)(lVar14 + -0x50) = uVar36;
      *(undefined8 *)(lVar14 + -0x58) = uVar35;
    }
    return param_2;
  }
LAB_10abfd24c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abfd250);
  (*pcVar6)();
}



/* Entry: 10abfd290; end: 10abfd56b;  */

long ** FUN_10abfd290(long **param_1,long param_2,ulong param_3,int param_4,undefined4 *param_5,
                     long param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  ushort uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  long *plVar14;
  float fVar15;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
  long *plStack_88;
  long *plStack_80;
  
  pplVar7 = param_1;
  if (param_6 != 0) {
    uVar8 = 0x30;
    if (param_4 == 0) {
      uVar8 = 0;
    }
    param_6 = param_6 << 2;
    uVar10 = param_3;
    do {
      uVar1 = *param_5;
      lVar5 = param_2;
      func_0x00010a01e9ec(param_2,uVar1);
      FUN_10a015150(param_2,uVar1);
      fVar15 = *(float *)(param_1 + 3) -
               (*(float *)((long)param_1 + 0xc) * *(float *)(lVar5 + 0x60) +
                *(float *)(param_1 + 2) * *(float *)(lVar5 + 100) +
               *(float *)((long)param_1 + 0x14) * *(float *)(lVar5 + 0x68));
      uVar2 = *(uint *)(lVar5 + 0x18);
      plVar14 = *param_1;
      uVar3 = uVar2 >> 1 & 1;
      pplVar7 = (long **)plVar14[1];
      if (pplVar7 < (long **)plVar14[2]) {
        func_0x00010ac08a9c(fVar15,pplVar7,uVar1,0xffff,*(undefined4 *)(lVar5 + 0x40),
                            *(undefined4 *)(lVar5 + 0x44),uVar3,*(undefined2 *)(param_1 + 1),uVar10,
                            *(undefined1 *)(lVar5 + 1));
        pplVar13 = pplVar7 + 0x21;
        plVar14[1] = (long)pplVar13;
      }
      else {
        lVar12 = (long)pplVar7 - *plVar14;
        uVar10 = (lVar12 >> 3) * 0xf83e0f83e0f83e1 + 1;
        if (0xf83e0f83e0f83e < uVar10) {
          FUN_10a193c14();
          func_0x00010a193e00(&plStack_a0);
          __Unwind_Resume();
          if (pplVar7[6] != (long *)0x0) {
            pplVar7[7] = pplVar7[6];
            __ZdlPv();
          }
          if (pplVar7[3] != (long *)0x0) {
            pplVar7[4] = pplVar7[3];
            __ZdlPv();
          }
          if (*pplVar7 != (long *)0x0) {
            pplVar7[1] = *pplVar7;
            __ZdlPv();
          }
          return pplVar7;
        }
        lVar9 = plVar14[2] - *plVar14 >> 3;
        uVar11 = lVar9 * 0x1f07c1f07c1f07c2;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x7c1f07c1f07c1e < (ulong)(lVar9 * 0xf83e0f83e0f83e1)) {
          uVar11 = 0xf83e0f83e0f83e;
        }
        plStack_80 = plVar14;
        if (uVar11 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar14;
          FUN_10a193c28();
        }
        lVar12 = (long)plVar6 + lVar12;
        plStack_a0 = plVar6;
        plStack_98 = (long *)lVar12;
        plStack_88 = plVar6 + uVar11 * 0x21;
        func_0x00010ac08a9c(fVar15,lVar12,uVar1,0xffff,*(undefined4 *)(lVar5 + 0x40),
                            *(undefined4 *)(lVar5 + 0x44),uVar3,*(undefined2 *)(param_1 + 1),
                            (int)param_3,*(undefined1 *)(lVar5 + 1));
        pplVar13 = (long **)(lVar12 + 0x108);
        lVar12 = lVar12 + (*plVar14 - plVar14[1]);
        pplStack_90 = pplVar13;
        func_0x00010a193c70(plVar14,*plVar14,plVar14[1],lVar12);
        plStack_a0 = (long *)*plVar14;
        *plVar14 = lVar12;
        plVar14[1] = (long)pplVar13;
        plStack_88 = (long *)plVar14[2];
        plVar14[2] = (long)(plVar6 + uVar11 * 0x21);
        pplVar7 = &plStack_a0;
        plStack_98 = plStack_a0;
        pplStack_90 = (long **)plStack_a0;
        func_0x00010a193e00(pplVar7);
        uVar10 = param_3 & 0xffffffff;
      }
      plVar14[1] = (long)pplVar13;
      lVar5 = (*param_1)[1];
      if (**param_1 == lVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10abfd554);
        (*pcVar4)();
      }
      *(ushort *)(lVar5 + -0xa8) =
           uVar8 | (ushort)((uVar2 >> 5 & 1) << 9) | *(ushort *)(lVar5 + -0xa8) & 0xfdcf;
      *(int *)(lVar5 + -0xa4) = (int)uVar10;
      *(undefined2 *)(lVar5 + -0xa0) = 0xffff;
      param_5 = param_5 + 1;
      param_6 = param_6 + -4;
    } while (param_6 != 0);
  }
  return pplVar7;
}



/* Entry: 10abfd56c; end: 10abfd5bb;  */

long * FUN_10abfd56c(long *param_1)

{
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abfd5bc; end: 10abfdb93;  */

void FUN_10abfd5bc(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 0x20);
  cVar3 = *(char *)(param_2 + 0x2b);
  plVar7 = (long *)*param_3;
  plVar4 = (long *)param_3[1];
  if (plVar7 != plVar4) {
    do {
      puVar5 = (undefined4 *)*plVar7;
      if (((*(ushort *)(puVar5 + 0x18) >> 6 & 1) == 0) && (puVar5[0xc] == 3)) {
        FUN_10abe56f8(puVar5 + 6,puVar5);
        if (iVar1 < 0x4b || cVar3 != '\x01') {
          lVar6 = param_2;
          func_0x00010a01e9ec(param_2,*puVar5);
          plVar8 = plVar7 + 1;
          plVar4 = (long *)param_3[1];
          if (plVar4 != plVar8) {
            iVar2 = *(int *)(lVar6 + 0x40);
            do {
              lVar6 = *plVar8;
              if (*(int *)(lVar6 + 0x38) != iVar2) break;
              if (((*(ushort *)(lVar6 + 0x60) >> 6 & 1) == 0) && (*(int *)(lVar6 + 0x30) == 3)) {
                FUN_10abe56f8(puVar5 + 6,lVar6);
                *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 0x40;
                plVar4 = (long *)param_3[1];
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar4);
          }
        }
        else {
          plVar8 = plVar7 + 1;
          plVar4 = (long *)param_3[1];
          if (plVar4 != plVar8) {
            do {
              lVar6 = *plVar8;
              if (((*(ushort *)(lVar6 + 0x60) >> 6 & 1) == 0) && (*(int *)(lVar6 + 0x30) == 3)) {
                FUN_10abe56f8(puVar5 + 6,lVar6);
                *(ushort *)(lVar6 + 0x60) = *(ushort *)(lVar6 + 0x60) | 0x40;
                plVar4 = (long *)param_3[1];
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar4);
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
    plVar7 = (long *)*param_3;
  }
  for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
    puVar5 = (undefined4 *)*plVar7;
    if (((((*(ushort *)(puVar5 + 0x18) >> 6 & 1) == 0) &&
         (*(long *)(puVar5 + 6) != *(long *)(puVar5 + 8))) && (*(long *)(puVar5 + 2) == 0)) &&
       (puVar5[0xc] == 3)) {
      *puVar5 = 0xffffffff;
      *(undefined2 *)(puVar5 + 1) = 0xffff;
      *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(param_1 + 0x48);
    }
  }
  return;
}



/* Entry: 10abfdb94; end: 10abfe2d7;  */

void FUN_10abfdb94(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  short *psVar16;
  short *psVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  
  puVar21 = (undefined8 *)*param_3;
  puVar19 = (undefined8 *)param_3[1];
  if (puVar21 != puVar19) {
    do {
      puVar18 = (undefined4 *)*puVar21;
      if ((((*(ushort *)(puVar18 + 0x18) >> 6 & 1) == 0) && (*(long *)(puVar18 + 2) == 0)) &&
         (plVar9 = (long *)(puVar18 + 6), *plVar9 == *(long *)(puVar18 + 8))) {
        iVar3 = puVar18[0xc];
        if (iVar3 == 9) {
          puVar19 = *(undefined8 **)(param_1 + 0x78);
          if (puVar19 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)0x8;
            __Znwm();
            *puVar19 = &PTR_FUN_110c547f0;
            *(undefined8 **)(param_1 + 0x78) = puVar19;
          }
        }
        else if (iVar3 == 7) {
          if (*(char *)(puVar18 + 0xd) == '\x01') {
            if ((0.0 < (float)puVar18[0x38] - (float)puVar18[0x36]) &&
               (0.0 < (float)puVar18[0x39] - (float)puVar18[0x37])) {
              lVar15 = param_2;
              FUN_10a015150(param_2,*puVar18);
              lVar10 = param_2;
              FUN_10a01f6d4(param_2,*(undefined2 *)(puVar18 + 4));
              if (*(long *)(puVar18 + 0x3e) == 0) {
                lStack_70 = 0;
              }
              else {
                lStack_70 = *(long *)(*(long *)(puVar18 + 0x3e) + 0xd0);
              }
              lVar2 = *(long *)(lVar10 + 0x28);
              lVar10 = *(long *)(lVar10 + 0x30);
              puVar11 = puVar18;
              FUN_10abfe358(puVar18,param_2);
              FUN_10abe56f8(plVar9,puVar18);
              puVar19 = puVar21 + 1;
              if ((undefined8 *)param_3[1] != puVar19) {
                do {
                  puVar22 = (undefined4 *)*puVar19;
                  if (((((float)puVar22[0x38] - (float)puVar22[0x36] <= 0.0) ||
                       ((float)puVar22[0x39] - (float)puVar22[0x37] <= 0.0)) || (puVar22[0xc] != 7))
                     || (((puVar18[0xe] != puVar22[0xe] || (puVar18[0xf] != puVar22[0xf])) ||
                         (lVar14 = param_2, FUN_10a01f6d4(param_2,*(undefined2 *)(puVar22 + 4)),
                         lVar2 != *(long *)(lVar14 + 0x28) || lVar10 != *(long *)(lVar14 + 0x30)))))
                  break;
                  if ((*(ushort *)(puVar22 + 0x18) >> 6 & 1) == 0) {
                    lVar14 = param_2;
                    FUN_10a015150(param_2,*puVar22);
                    psVar16 = *(short **)(lVar15 + 0xb8);
                    psVar17 = *(short **)(lVar14 + 0xb8);
                    if ((long)*(short **)(lVar15 + 0xc0) - (long)*(short **)(lVar15 + 0xb8) !=
                        *(long *)(lVar14 + 0xc0) - (long)*(short **)(lVar14 + 0xb8)) break;
                    while (psVar16 != *(short **)(lVar15 + 0xc0)) {
                      sVar4 = *psVar16;
                      sVar5 = *psVar17;
                      psVar16 = psVar16 + 1;
                      psVar17 = psVar17 + 1;
                      if (sVar4 != sVar5) goto LAB_10abfe25c;
                    }
                    lVar14 = 0;
                    if (*(long *)(puVar22 + 0x3e) != 0) {
                      lVar14 = *(long *)(*(long *)(puVar22 + 0x3e) + 0xd0);
                    }
                    if ((lStack_70 != lVar14) ||
                       (puVar12 = puVar22, FUN_10abfe358(puVar22,param_2),
                       (int)puVar12 != (int)puVar11)) break;
                    FUN_10abe56f8(plVar9,puVar22);
                    *(ushort *)(puVar22 + 0x18) = *(ushort *)(puVar22 + 0x18) | 0x40;
                  }
                  puVar19 = puVar19 + 1;
                } while (puVar19 != (undefined8 *)param_3[1]);
              }
LAB_10abfe25c:
              *puVar18 = 0xffffffff;
              *(undefined2 *)(puVar18 + 1) = 0xffff;
              puVar19 = *(undefined8 **)(param_1 + 0x80);
              goto LAB_10abfe274;
            }
LAB_10abfde0c:
            if (((float)puVar18[0x38] - (float)puVar18[0x36] <= 0.0) ||
               ((float)puVar18[0x39] - (float)puVar18[0x37] <= 0.0)) goto LAB_10abfe27c;
          }
          else {
LAB_10abfde38:
            if (((*(char *)((long)puVar18 + 0x35) != '\x01') || (*(int *)(param_2 + 0x20) < 0x172))
               || ((puVar18[0x3c] == -1 || (*(long *)(puVar18 + 0x3e) == 0)))) goto LAB_10abfe27c;
          }
          lVar15 = param_2;
          FUN_10a015150(param_2,*puVar18);
          lVar10 = param_2;
          FUN_10a01f6d4(param_2,*(undefined2 *)(puVar18 + 4));
          if (*(long *)(puVar18 + 0x3e) == 0) {
            lStack_88 = 0;
          }
          else {
            lStack_88 = *(long *)(*(long *)(puVar18 + 0x3e) + 0xd0);
          }
          lVar2 = *(long *)(lVar10 + 0x28);
          lVar10 = *(long *)(lVar10 + 0x30);
          iVar3 = *(int *)(param_2 + 0x20);
          cVar6 = *(char *)((long)puVar18 + 0x36);
          lStack_98 = *(long *)(lVar15 + 0xe8);
          if (lStack_98 == 0) {
            lStack_98 = 0;
LAB_10abfded8:
            lStack_80 = 0;
          }
          else {
            FUN_10a791100();
            lStack_80 = *(long *)(lVar15 + 0xe8);
            if (lStack_80 == 0) goto LAB_10abfded8;
            func_0x00010a791170();
          }
          puVar11 = puVar18;
          FUN_10abfe358(puVar18,param_2);
          FUN_10abe56f8(plVar9,puVar18);
          puVar19 = puVar21 + 1;
          if ((undefined8 *)param_3[1] != puVar19) {
            lStack_a0 = lStack_80;
            do {
              puVar22 = (undefined4 *)*puVar19;
              if (*(char *)(puVar22 + 0xd) == '\x01') {
                if (((float)puVar22[0x38] - (float)puVar22[0x36] <= 0.0) ||
                   ((float)puVar22[0x39] - (float)puVar22[0x37] <= 0.0)) break;
              }
              else if ((*(char *)((long)puVar22 + 0x35) != '\x01' || puVar22[0x3c] == -1) ||
                      (*(long *)(puVar22 + 0x3e) == 0)) break;
              if (((iVar3 < 0x179) &&
                  ((puVar18[0xe] != puVar22[0xe] || (puVar18[0xf] != puVar22[0xf])))) ||
                 (lVar14 = param_2, FUN_10a01f6d4(param_2,*(undefined2 *)(puVar22 + 4)),
                 lVar2 != *(long *)(lVar14 + 0x28) || lVar10 != *(long *)(lVar14 + 0x30))) break;
              if ((*(ushort *)(puVar22 + 0x18) >> 6 & 1) == 0) {
                lVar14 = param_2;
                FUN_10a015150(param_2,*puVar22);
                psVar16 = *(short **)(lVar15 + 0xb8);
                psVar17 = *(short **)(lVar14 + 0xb8);
                if ((long)*(short **)(lVar15 + 0xc0) - (long)*(short **)(lVar15 + 0xb8) !=
                    *(long *)(lVar14 + 0xc0) - (long)*(short **)(lVar14 + 0xb8)) break;
                while (psVar16 != *(short **)(lVar15 + 0xc0)) {
                  sVar4 = *psVar16;
                  sVar5 = *psVar17;
                  psVar16 = psVar16 + 1;
                  psVar17 = psVar17 + 1;
                  if (sVar4 != sVar5) goto LAB_10abfe0d8;
                }
                lVar13 = 0;
                if (*(long *)(puVar22 + 0x3e) != 0) {
                  lVar13 = *(long *)(*(long *)(puVar22 + 0x3e) + 0xd0);
                }
                if ((lStack_88 != lVar13) ||
                   (puVar12 = puVar22, FUN_10abfe358(puVar22,param_2), (int)puVar12 != (int)puVar11)
                   ) break;
                if (cVar6 != '\0') {
                  lVar13 = *(long *)(lVar14 + 0xe8);
                  if (lVar13 != 0) {
                    FUN_10a791100();
                  }
                  if (lStack_98 != lVar13) break;
                }
                lVar13 = *(long *)(lVar14 + 0xe8);
                lVar14 = lStack_a0;
                if (lVar13 == 0) {
                  if (iVar3 < 0x179) {
                    lVar13 = 0;
                    goto LAB_10abfe098;
                  }
                }
                else {
                  func_0x00010a791170();
                  if (iVar3 < 0x179) {
LAB_10abfe098:
                    if (lStack_80 != lVar13) break;
                  }
                  else if (((lVar13 != 0) && (lVar14 = lVar13, lStack_a0 != 0)) &&
                          (lStack_a0 != lVar13)) break;
                }
                lStack_a0 = lVar14;
                FUN_10abe56f8(plVar9,puVar22);
                *(ushort *)(puVar22 + 0x18) = *(ushort *)(puVar22 + 0x18) | 0x40;
              }
              puVar19 = puVar19 + 1;
            } while (puVar19 != (undefined8 *)param_3[1]);
          }
LAB_10abfe0d8:
          *puVar18 = 0xffffffff;
          *(undefined2 *)(puVar18 + 1) = 0xffff;
          lVar15 = 0x80;
          if ((puVar18[0xc] == 7 & *(byte *)(puVar18 + 0xd)) == 0) {
            lVar15 = 0x88;
          }
          puVar19 = *(undefined8 **)(param_1 + lVar15);
        }
        else {
          if (iVar3 != 6) {
            if (*(char *)(puVar18 + 0xd) == '\x01') goto LAB_10abfde0c;
            goto LAB_10abfde38;
          }
          puVar19 = *(undefined8 **)(param_1 + 0x70);
          if (puVar19 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)0x18;
            __Znwm();
            *puVar19 = &PTR_FUN_110c54dd8;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar8 = (undefined8 *)0xa8;
            __Znwm();
            puVar8[2] = 0;
            puVar8[3] = &PTR_FUN_110c554d8;
            puVar8[4] = 0x32aaaba7;
            puVar8[6] = 0;
            puVar8[5] = 0;
            puVar8[8] = 0;
            puVar8[7] = 0;
            puVar8[10] = 0;
            puVar8[9] = 0;
            puVar8[0xb] = 0;
            puVar8[0xd] = puVar8 + 0xd;
            puVar8[0xe] = puVar8 + 0xd;
            puVar8[0x10] = 0;
            puVar8[0xf] = 0;
            puVar8[0x12] = 0;
            puVar8[0x11] = 0;
            puVar8[0x13] = 0;
            *(undefined4 *)(puVar8 + 0x14) = 0x3f800000;
            *(undefined4 *)(puVar8 + 0xc) = 8;
            *puVar8 = &PTR_FUN_110c55428;
            puVar8[1] = 0;
            plVar9 = (long *)0x20;
            __Znwm();
            plVar20 = plVar9 + 1;
            *plVar20 = 0;
            *plVar9 = (long)&PTR_FUN_110c55510;
            plVar9[2] = 0;
            plVar9[3] = (long)puVar8;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar7) {
                *plVar20 = *plVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar1 = plVar9 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            puVar8[1] = puVar8;
            puVar8[2] = plVar9;
            do {
              lVar15 = *plVar20;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar7) {
                *plVar20 = lVar15 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
            plVar20 = (long *)puVar19[2];
            puVar19[1] = puVar8;
            puVar19[2] = plVar9;
            if (plVar20 != (long *)0x0) {
              plVar9 = plVar20 + 1;
              do {
                lVar15 = *plVar9;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar7) {
                  *plVar9 = lVar15 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
              }
            }
            plVar9 = *(long **)(param_1 + 0x70);
            *(undefined8 **)(param_1 + 0x70) = puVar19;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))();
              puVar19 = *(undefined8 **)(param_1 + 0x70);
            }
          }
        }
LAB_10abfe274:
        *(undefined8 **)(puVar18 + 2) = puVar19;
        puVar19 = (undefined8 *)param_3[1];
      }
LAB_10abfe27c:
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar19);
  }
  return;
}



/* Entry: 10abfe2d8; end: 10abfe357;  */

void FUN_10abfe2d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_10abe56f8(param_1 + 0x18,lVar1 + lVar2);
      uVar3 = uVar3 + 1;
      lVar1 = *(long *)(param_2 + 0x18);
      lVar2 = lVar2 + 0x108;
    } while (uVar3 < (ulong)((*(long *)(param_2 + 0x20) - lVar1 >> 3) * 0xf83e0f83e0f83e1));
  }
  return;
}



/* Entry: 10abfe358; end: 10abfe473;  */

undefined4 FUN_10abfe358(int *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_2;
    func_0x00010a01e9ec();
  }
  lVar4 = param_2;
  FUN_10a01f6d4(param_2,(short)param_1[4]);
  uVar6 = 7;
  if ((lVar7 != 0) && ((*(byte *)(lVar4 + 0x1d8) & 1) != 0)) {
    uStack_38 = *(undefined8 *)(param_2 + 0x48);
    uStack_40 = *(undefined8 *)(param_2 + 0x40);
    uVar8 = *(ulong *)(param_2 + 0x40);
    uVar9 = *(ulong *)(lVar7 + 0x30);
    uVar5 = (ulong)&uStack_40 | 8;
    FUN_10a3c8d60(uVar5,lVar7 + 0x38);
    bVar1 = (uVar9 & uVar8) != 0;
    bVar2 = uVar5 != 0;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      uVar6 = 7;
      if (bVar1 || bVar2) {
        uVar6 = 0;
      }
    }
    else {
      uStack_38 = *(undefined8 *)(param_2 + 0x38);
      uStack_40 = *(undefined8 *)(param_2 + 0x30);
      uVar8 = *(ulong *)(param_2 + 0x30);
      uVar9 = *(ulong *)(lVar7 + 0x30);
      uVar5 = (ulong)&uStack_40 | 8;
      FUN_10a3c8d60(uVar5,lVar7 + 0x38);
      bVar3 = (uVar9 & uVar8) != 0;
      if ((bVar3 || uVar5 != 0) && (bVar1 || bVar2)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 7;
        if (bVar1 || bVar2) {
          uVar6 = 4;
        }
        if (bVar3 || uVar5 != 0) {
          uVar6 = 3;
        }
      }
    }
  }
  return uVar6;
}



/* Entry: 10abfe474; end: 10abfe593;  */

undefined8 FUN_10abfe474(void)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam0000000113835980 & 1) == 0) {
    iVar1 = 0x13835980;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x113306de0,0x100000000);
      ___cxa_guard_release(0x113835980);
    }
  }
  __ZNSt3__15mutex4lockEv(0x113306de0);
  if ((bRam00000001138359a0 & 1) == 0) {
    iVar1 = 0x138359a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113835988 = 0;
      uRam0000000113835990 = 0;
      uRam0000000113835998 = 0;
      ___cxa_guard_release(0x1138359a0);
    }
  }
  if (lRam00000001138359a8 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1138359a8,&ppuStack_30,FUN_10ac09e58);
  }
  __ZNSt3__15mutex6unlockEv(0x113306de0);
  return 0x113835988;
}



/* Entry: 10abfe594; end: 10abfe6b3;  */

undefined8 FUN_10abfe594(void)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam00000001138359b0 & 1) == 0) {
    iVar1 = 0x138359b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x113306e20,0x100000000);
      ___cxa_guard_release(0x1138359b0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x113306e20);
  if ((bRam00000001138359d0 & 1) == 0) {
    iVar1 = 0x138359d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138359b8 = 0;
      uRam00000001138359c0 = 0;
      uRam00000001138359c8 = 0;
      ___cxa_guard_release(0x1138359d0);
    }
  }
  if (lRam00000001138359d8 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1138359d8,&ppuStack_30,FUN_10ac0b038);
  }
  __ZNSt3__15mutex6unlockEv(0x113306e20);
  return 0x1138359b8;
}



/* Entry: 10abfe6b4; end: 10abfe7d3;  */

undefined8 FUN_10abfe6b4(void)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam00000001138359e0 & 1) == 0) {
    iVar1 = 0x138359e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x113306e60,0x100000000);
      ___cxa_guard_release(0x1138359e0);
    }
  }
  __ZNSt3__15mutex4lockEv(0x113306e60);
  if ((bRam0000000113835a00 & 1) == 0) {
    iVar1 = 0x13835a00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138359e8 = 0;
      uRam00000001138359f0 = 0;
      uRam00000001138359f8 = 0;
      ___cxa_guard_release(0x113835a00);
    }
  }
  if (lRam0000000113835a08 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113835a08,&ppuStack_30,0x10ac0b5f4);
  }
  __ZNSt3__15mutex6unlockEv(0x113306e60);
  return 0x1138359e8;
}



/* Entry: 10abfe7d4; end: 10abfe8c7;  */

void FUN_10abfe7d4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  
  func_0x00010a08f1bc();
  if ((*(byte *)(*param_2 + 0x440) & 1) != 0) {
    puVar5 = (undefined8 *)(*param_2 + 0x248);
    func_0x00010a155704();
    FUN_10abfe8c8(&uStack_50,*puVar5,param_4);
    FUN_10a097928(param_3,&uStack_50);
    param_1[1] = plStack_48;
    *param_1 = uStack_50;
    if (plStack_48 == (long *)0x0) {
      param_1[2] = (ulong)uStack_38;
      param_1[3] = uStack_40;
    }
    else {
      plVar1 = plStack_48 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[2] = (ulong)uStack_38;
      param_1[3] = uStack_40;
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10abfe8b4);
  (*pcVar4)();
}



/* Entry: 10abfe8c8; end: 10abfeaeb;  */

void FUN_10abfe8c8(undefined8 *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plStack_58;
  long *plStack_50;
  uint uStack_48;
  int iStack_44;
  
  FUN_10abe3228(&plStack_58,param_2 + 8);
  if (plStack_58 == (long *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    goto LAB_10abfea7c;
  }
  lVar8 = plStack_58[5];
  if ((plStack_58 == *(long **)(param_2 + 0xb8)) && (*(uint *)(param_2 + 200) <= uStack_48)) {
LAB_10abfea38:
    *(uint *)(param_2 + 0xcc) = iStack_44 + uStack_48;
  }
  else {
    FUN_10abff71c(param_2,0);
    uVar6 = *(ulong *)(param_2 + 0xd8);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar9 = ((ulong)(uint)((int)plStack_58 << 3) + 8 ^ (ulong)plStack_58 >> 0x20) *
              -0x622015f714c7d297;
      uVar9 = ((ulong)plStack_58 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
      uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
      uVar10 = uVar6 - 1;
      if ((uVar6 & uVar10) == 0) {
        uVar11 = uVar10 & uVar9;
      }
      else {
        uVar11 = uVar9;
        if (uVar6 <= uVar9) {
          uVar11 = 0;
          if (uVar6 != 0) {
            uVar11 = uVar9 / uVar6;
          }
          uVar11 = uVar9 - uVar11 * uVar6;
        }
      }
      plVar12 = *(long **)(*(long *)(param_2 + 0xd0) + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10abfe9f8;
            uVar13 = plVar12[1];
            if (uVar9 - uVar13 != 0) break;
            if ((long *)plVar12[2] == plStack_58) {
              uVar5 = *(uint *)(plVar12 + 3);
              goto LAB_10abfe9fc;
            }
          }
          if ((uVar6 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar6 <= uVar13) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar4 * uVar6;
          }
        } while (uVar13 == uVar11);
      }
LAB_10abfe9f8:
      uVar5 = 0;
    }
LAB_10abfe9fc:
    uVar1 = 0;
    if (uVar5 <= uStack_48) {
      uVar1 = uVar5;
    }
    plVar12 = plStack_58;
    (**(code **)(*plStack_58 + 0x30))(plStack_58,2,uVar1,(int)lVar8 - uVar1);
    *(long **)(param_2 + 0xc0) = plVar12;
    if (plVar12 != (long *)0x0) {
      *(long **)(param_2 + 0xb8) = plStack_58;
      *(uint *)(param_2 + 200) = uVar1;
      goto LAB_10abfea38;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10a0e65b0(param_1,&plStack_58);
  lVar7 = *(long *)(param_2 + 0xc0);
  lVar8 = lVar7;
  if (lVar7 != 0) {
    lVar8 = 0;
    if (*(uint *)(param_2 + 200) <= uStack_48) {
      lVar8 = lVar7 + (ulong)(uStack_48 - *(uint *)(param_2 + 200));
    }
  }
  param_1[2] = lVar8;
  *(uint *)(param_1 + 3) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
LAB_10abfea7c:
  if (plStack_50 != (long *)0x0) {
    plVar12 = plStack_50 + 1;
    do {
      lVar8 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  return;
}



/* Entry: 10abfeaec; end: 10abfebe3;  */

void FUN_10abfeaec(ulong *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  
  uVar5 = param_2[4] - param_2[3];
  if (7 < uVar5) {
    uVar5 = 8;
  }
  lVar1 = *(long *)(param_3 + 0xa8);
  lVar2 = *(long *)(param_3 + 0xb0);
  *param_1 = uVar5;
  param_1[1] = (lVar2 - lVar1 >> 3) * -0x71c71c71c71c71c7;
  uVar5 = param_2[1] - *param_2;
  lVar1 = *(long *)(param_3 + 0xc0);
  lVar2 = *(long *)(param_3 + 200);
  if (7 < uVar5) {
    uVar5 = 8;
  }
  param_1[2] = uVar5;
  param_1[3] = lVar2 - lVar1 >> 5;
  uVar5 = param_2[7] - param_2[6];
  if (7 < uVar5) {
    uVar5 = 8;
  }
  lVar1 = param_2[9];
  lVar2 = param_2[10];
  param_1[4] = uVar5;
  param_1[5] = lVar2 - lVar1;
  param_1[6] = (*(long *)(param_3 + 0xf8) - *(long *)(param_3 + 0xf0) >> 3) * -0x5555555555555555;
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)(param_3 + 0x23c);
  if (*(long *)(param_3 + 0xd8) == *(long *)(param_3 + 0xe0)) {
    if (*(long *)(param_3 + 0x148) == 0) {
      bVar4 = *(long *)(param_3 + 0x150) != 0;
      bVar3 = false;
      goto LAB_10abfebac;
    }
    bVar3 = true;
  }
  else {
    bVar3 = *(long *)(param_3 + 0x148) != 0;
  }
  bVar4 = true;
LAB_10abfebac:
  *(bool *)(param_1 + 7) = bVar4;
  *(bool *)((long)param_1 + 0x3a) = bVar3;
  lVar1 = *(long *)(param_3 + 0x158);
  *(bool *)((long)param_1 + 0x3b) = *(long *)(param_3 + 0x150) != 0;
  *(bool *)((long)param_1 + 0x3c) = lVar1 != 0;
  return;
}



/* Entry: 10abfebe4; end: 10abfec3f;  */

uint FUN_10abfebe4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_60 [64];
  
  if (*(ushort *)(param_1 + 0x1840) == param_2) {
    uVar1 = (uint)auStack_60;
    FUN_10abfeaec(auStack_60,param_3,param_4);
    FUN_10abfec40(auStack_60,param_1 + 0x1800);
    return uVar1 ^ 1;
  }
  return 1;
}



/* Entry: 10abfec40; end: 10abfed0b;  */

bool FUN_10abfec40(long *param_1,long *param_2)

{
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
      ((param_1[5] == param_2[5] &&
       ((param_1[6] == param_2[6] && ((char)param_1[7] == (char)param_2[7])))))) &&
     ((*(char *)((long)param_1 + 0x39) == *(char *)((long)param_2 + 0x39) &&
      ((*(char *)((long)param_1 + 0x3a) == *(char *)((long)param_2 + 0x3a) &&
       (*(char *)((long)param_1 + 0x3b) == *(char *)((long)param_2 + 0x3b))))))) {
    return *(char *)((long)param_1 + 0x3c) == *(char *)((long)param_2 + 0x3c);
  }
  return false;
}



/* Entry: 10abfed0c; end: 10abfed97;  */

void FUN_10abfed0c(long param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 0x1868) = 0;
  *(undefined2 *)(param_1 + 0x1840) = 0xffff;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  FUN_10a176664(param_1 + 0x1850);
  *(undefined8 *)(param_1 + 0x1860) = 0;
  func_0x00010abd71d8(param_1);
  *(undefined2 *)(param_1 + 0x1840) = param_2;
  FUN_10abfeaec(param_1 + 0x1800,param_3,param_4);
  *(undefined1 *)(param_1 + 0x1868) = 1;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  plVar5 = *(long **)(param_1 + 0x1858);
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
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
  return;
}



/* Entry: 10abfed98; end: 10abfeeb7;  */

undefined8 FUN_10abfed98(void)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam0000000113835a10 & 1) == 0) {
    iVar1 = 0x13835a10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x113306ea0,0x100000000);
      ___cxa_guard_release(0x113835a10);
    }
  }
  __ZNSt3__15mutex4lockEv(0x113306ea0);
  if ((bRam0000000113835a30 & 1) == 0) {
    iVar1 = 0x13835a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113835a18 = 0;
      uRam0000000113835a20 = 0;
      uRam0000000113835a28 = 0;
      ___cxa_guard_release(0x113835a30);
    }
  }
  if (lRam0000000113835a38 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113835a38,&ppuStack_30,FUN_10ac0c818);
  }
  __ZNSt3__15mutex6unlockEv(0x113306ea0);
  return 0x113835a18;
}



/* Entry: 10abfeeb8; end: 10abfef17;  */

void FUN_10abfeeb8(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  *(long *)(param_1 + 8) = param_2;
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x88) == '\x04') {
      lVar1 = *(long *)(param_2 + 0x28);
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_2 + 0x20);
        if ((lVar1 == 0) || (uVar2 = 0x8c1a, *(int *)(param_2 + 0x78) != 0x8c1a)) {
          lVar1 = 0;
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x7c);
      }
    }
    else {
      lVar1 = *(long *)(param_2 + 0x20);
      uVar2 = *(undefined4 *)(param_2 + 0x78);
    }
    *(undefined1 *)(param_1 + 0x88) = param_3;
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  return;
}


