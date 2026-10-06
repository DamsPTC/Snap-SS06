/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac1a0f4; end: 10ac1a143;  */

long * FUN_10ac1a0f4(long *param_1,long param_2)

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
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c5f0c8;
  param_1[5] = (long)&PTR_DAT_110c5f0f8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_2 + 0x10);
  FUN_10ac409b0(param_1 + 0x13);
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



/* Entry: 10ac1a144; end: 10ac1ac37;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1a4a0) */

undefined8 * FUN_10ac1a144(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined ***pppuVar3;
  ulong *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_270;
  undefined **appuStack_268 [7];
  undefined *puStack_230;
  undefined *puStack_228;
  undefined **appuStack_220 [7];
  long lStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **appuStack_190 [7];
  long *plStack_158;
  long *plStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **appuStack_138 [7];
  undefined **ppuStack_100;
  undefined8 *apuStack_f8 [7];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  puVar8 = param_1;
  FUN_10ac1b018(param_1,&PTR_PTR_110c56040,param_2);
  *puVar8 = &PTR_FUN_110c55e88;
  puVar8[2] = &PTR_FUN_110c55f40;
  puVar8[5] = &PTR_DAT_110c55f70;
  puVar8[0x1b] = &PTR_DAT_110c55ff8;
  ppuVar17 = (undefined **)(puVar8 + 0x15);
  puVar8[0x16] = 0;
  *ppuVar17 = (undefined *)0x0;
  puVar8[0x18] = 0;
  puVar8[0x17] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x19] = 0;
  if (param_2 == 0) {
    FUN_10a00946c(&UNK_10f69c075);
    goto LAB_10ac1aba4;
  }
  ppuStack_270 = (undefined **)((ulong)ppuStack_270 & 0xffffffffffffff00);
  FUN_10ac46794(&lStack_1e8,&ppuStack_100,&UNK_10f69b9ca,&ppuStack_270);
  func_0x00010a41cc44(ppuVar17,&lStack_1e8);
  ppuVar9 = ppuStack_1e0;
  if (ppuStack_1e0 != (undefined **)0x0) {
    ppuVar1 = ppuStack_1e0 + 1;
    do {
      puVar15 = *ppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar6) {
        *ppuVar1 = puVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1e0 + 0x10))(ppuStack_1e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar17 = ppuVar9;
    }
  }
  FUN_109d1a80c();
  puStack_2b8 = *ppuVar17;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  puStack_2f8 = &UNK_1053a6a3c;
  ppuStack_2f0 = &PTR_DAT_110ae9180;
  ppuStack_270 = (undefined **)FUN_10ac47310;
  appuStack_268[0] = &PTR_DAT_110c5dd88;
  puStack_228 = &UNK_1053a6a3c;
  appuStack_220[0] = &PTR_DAT_110ae9180;
  puStack_2b0 = &UNK_1053a6a3c;
  ppuStack_2a8 = &PTR_DAT_110ae9180;
  lVar10 = 0x2230;
  puStack_230 = puStack_2b8;
  __Znwm();
  FUN_10ad12f6c();
  ppuStack_100 = ppuStack_270;
  (*(code *)appuStack_268[0][2])(apuStack_f8,appuStack_268);
  puStack_c0 = puStack_230;
  puStack_b8 = puStack_228;
  appuStack_b0[0] = &PTR_DAT_110ae9180;
  (*(code *)appuStack_220[0][2])(appuStack_b0,appuStack_220);
  puStack_228 = &UNK_1053a6a3c;
  (*(code *)*appuStack_220[0])(appuStack_220);
  appuStack_220[0] = &PTR_DAT_110ae9180;
  plStack_78 = (long *)0x0;
  plVar11 = (long *)0xb0;
  __Znwm();
  puVar15 = puStack_c0;
  plVar11[2] = 0;
  plVar11[1] = 0x200000006;
  *(undefined2 *)(plVar11 + 3) = 4;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x10] = 0;
  plVar11[0x11] = (long)(plVar11 + 3);
  plVar11[0x12] = 0;
  *plVar11 = (long)&PTR_DAT_110c5dd60;
  *(undefined1 *)(plVar11 + 0x13) = 0;
  *(undefined1 *)(plVar11 + 0x15) = 0;
  plStack_320 = (long *)0x0;
  lStack_318 = 0;
  puStack_148 = puStack_c0;
  appuStack_138[0] = &PTR_DAT_110ae9180;
  puStack_140 = puStack_b8;
  plStack_150 = plVar11;
  plStack_78 = plVar11;
  (*(code *)appuStack_b0[0][2])(appuStack_138,appuStack_b0);
  puStack_b8 = &UNK_1053a6a3c;
  (*(code *)*appuStack_b0[0])(appuStack_b0);
  appuStack_b0[0] = &PTR_DAT_110ae9180;
  puVar12 = (undefined8 *)0xb8;
  __Znwm();
  *puVar12 = FUN_10ac5523c;
  puVar12[1] = FUN_10ac554e0;
  func_0x0001092ba17c(puVar12 + 2);
  plVar11 = plStack_150;
  plVar21 = (long *)puVar12[7];
  if (plVar21 != (long *)0x0) {
    plVar2 = plVar21 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_150 = (long *)0x0;
  puVar12[10] = puStack_148;
  puVar12[9] = plVar11;
  puVar12[0xc] = &PTR_DAT_110ae9180;
  puVar12[0xb] = puStack_140;
  (*(code *)appuStack_138[0][2])(puVar12 + 0xc,appuStack_138);
  puStack_140 = &UNK_1053a6a3c;
  (*(code *)*appuStack_138[0])(appuStack_138);
  appuStack_138[0] = &PTR_DAT_110ae9180;
  puVar12[0x13] = puVar15;
  *(undefined1 *)(puVar12 + 0x14) = 0;
  *(undefined1 *)(puVar12 + 0x16) = 0;
  puVar13 = puVar12 + 0x13;
  func_0x0001092ba064(puVar13,puVar12);
  if (((ulong)puVar13 & 1) == 0) {
    FUN_10ac46c80(puVar12 + 0x15,puVar12 + 9);
    puVar12[0x13] = puVar12[0x15];
    plVar11 = (long *)(puVar12[0x15] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar12[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar12 + 0x16) = 1;
      lVar20 = puVar12[0x13];
      plVar11 = (long *)(lVar20 + 0x10);
      uVar16 = puVar12[3];
      do {
        lVar19 = *plVar11;
        if (lVar19 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            uStack_310 = 0;
            puStack_308 = puVar12;
            uStack_300 = uVar16;
            func_0x000109d1b588(lVar20 + 0x18,&uStack_310);
            *(undefined8 *)(lVar20 + 0x10) = 0;
            goto joined_r0x00010ac1a628;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
    pppuVar14 = (undefined ***)puVar12[0x13];
    if (((uint)*(undefined8 *)(puVar12[0x13] + 0x10) >> 5 & 1) == 0) {
      if (pppuVar14 != (undefined ***)0x0) {
        pppuVar3 = pppuVar14 + 1;
        do {
          ppuVar17 = *pppuVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
          if (bVar6) {
            *pppuVar3 = (undefined **)((long)ppuVar17 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)ppuVar17 & 0x1fffffffc) == 4) {
          do {
            ppuVar17 = *pppuVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
            if (bVar6) {
              *pppuVar3 = (undefined **)((long)ppuVar17 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined **)((long)ppuVar17 + -1) == (undefined **)0x0) {
            (*(code *)(*pppuVar14)[1])();
          }
        }
      }
      plVar11 = (long *)puVar12[0x15];
      if (plVar11 != (long *)0x0) {
        puVar4 = (ulong *)(plVar11 + 1);
        do {
          uVar18 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar18 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar18 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar12 + 2);
      func_0x0001092ba41c(puVar12 + 10);
      plVar11 = (long *)puVar12[9];
      if (plVar11 != (long *)0x0) {
        puVar4 = (ulong *)(plVar11 + 1);
        do {
          uVar18 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar18 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar18 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar12 + 2);
      __ZdlPv(puVar12);
      goto joined_r0x00010ac1a628;
    }
  }
  else {
joined_r0x00010ac1a628:
    if (plVar21 != (long *)0x0) {
      puVar4 = (ulong *)(plVar21 + 1);
      do {
        uVar18 = *puVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar6) {
          *puVar4 = uVar18 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar18 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar21 + 8))(plVar21);
        }
      }
    }
    func_0x0001092ba41c((ulong)&plStack_150 | 8);
    if (plStack_150 != (long *)0x0) {
      puVar4 = (ulong *)(plStack_150 + 1);
      do {
        uVar18 = *puVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar6) {
          *puVar4 = uVar18 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar18 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plStack_150 + 8))();
        }
      }
    }
    if (lStack_318 != 0) {
      func_0x0001092b4274((ulong)&plStack_320 | 8);
    }
    if (plStack_320 != (long *)0x0) {
      puVar4 = (ulong *)(plStack_320 + 1);
      do {
        uVar18 = *puVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar6) {
          *puVar4 = uVar18 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar6) {
            *puVar4 = uVar18 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plStack_320 + 8))();
        }
      }
    }
    ppuStack_1e0 = ppuStack_100;
    lStack_1e8 = lVar10;
    (*(code *)apuStack_f8[0][2])(&lStack_1d8,apuStack_f8);
    puStack_1a0 = puStack_c0;
    puStack_198 = puStack_b8;
    appuStack_190[0] = &PTR_DAT_110ae9180;
    (*(code *)appuStack_b0[0][2])(appuStack_190,appuStack_b0);
    puStack_b8 = &UNK_1053a6a3c;
    (*(code *)*appuStack_b0[0])(appuStack_b0);
    plStack_158 = plStack_78;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    plStack_78 = (long *)0x0;
    func_0x0001092ba41c(&puStack_c0);
    (*(code *)*apuStack_f8[0])(apuStack_f8);
    lVar10 = lStack_1e8;
    if (lStack_1e8 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)0xb0;
      __Znwm();
      ppuStack_100 = ppuStack_1e0;
      (**(code **)(lStack_1d8 + 0x10))(apuStack_f8,&lStack_1d8);
      puStack_c0 = puStack_1a0;
      puStack_b8 = puStack_198;
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_190[0][2])(appuStack_b0,appuStack_190);
      puStack_198 = &UNK_1053a6a3c;
      (*(code *)*appuStack_190[0])(appuStack_190);
      plStack_78 = plStack_158;
      appuStack_190[0] = &PTR_DAT_110ae9180;
      plStack_158 = (long *)0x0;
      *puVar12 = &PTR_FUN_110c5ddb0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = lVar10;
      puVar12[4] = ppuStack_100;
      (*(code *)apuStack_f8[0][2])(puVar12 + 5,apuStack_f8);
      puVar12[0xe] = &PTR_DAT_110ae9180;
      puVar12[0xc] = puStack_c0;
      puVar12[0xd] = puStack_b8;
      (*(code *)appuStack_b0[0][2])(puVar12 + 0xe,appuStack_b0);
      puStack_b8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_b0[0])(appuStack_b0);
      puVar12[0x15] = plStack_78;
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      plStack_78 = (long *)0x0;
      func_0x0001092ba41c(&puStack_c0);
      (*(code *)*apuStack_f8[0])(apuStack_f8);
    }
    lStack_1e8 = 0;
    plVar11 = (long *)param_1[0x18];
    param_1[0x17] = lVar10;
    param_1[0x18] = puVar12;
    if (plVar11 != (long *)0x0) {
      plVar21 = plVar11 + 1;
      do {
        lVar10 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    FUN_10ac47328(&lStack_1e8);
    func_0x0001092ba41c(&puStack_230);
    (*(code *)*appuStack_268[0])(appuStack_268);
    func_0x0001092ba41c(&puStack_2b8);
    (*(code *)*ppuStack_2f0)(&ppuStack_2f0);
    FUN_10a66def4(&lStack_1e8,&ppuStack_100);
    FUN_10a64ad40(puVar8 + 0x19,&lStack_1e8);
    ppuVar17 = ppuStack_1e0;
    if (ppuStack_1e0 != (undefined **)0x0) {
      ppuVar9 = ppuStack_1e0 + 1;
      do {
        puVar15 = *ppuVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar6) {
          *ppuVar9 = puVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_1e0 + 0x10))(ppuStack_1e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
    lVar10 = param_1[0x17];
    uStack_1d0 = param_1[0x1a];
    lStack_1d8 = param_1[0x19];
    if (param_1[0x1a] != 0) {
      plVar11 = (long *)(param_1[0x1a] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_1e8 = 0x10ac47664;
    ppuStack_1e0 = &PTR_DAT_110c5de00;
    ppuStack_100 = (undefined **)0x0;
    apuStack_f8[0] = (undefined8 *)0x0;
    if ((((*(byte *)(lVar10 + 0x2219) & 1) == 0) && ((*(byte *)(lVar10 + 0x221a) & 1) == 0)) &&
       (plVar11 = *(long **)(lVar10 + 0xe0), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x40))(plVar11,&lStack_1e8);
    }
    pppuVar14 = &ppuStack_1e0;
    (*(code *)*ppuStack_1e0)(pppuVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(pppuVar14 + 0x12);
LAB_10ac1aba4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac1aba8);
  (*pcVar7)();
}



/* Entry: 10ac1ac38; end: 10ac1accf;  */

void FUN_10ac1ac38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    uStack_39 = 0;
    FUN_10ac46794(auStack_38,&uStack_21,&UNK_10f69b9ca,&uStack_39);
    func_0x00010a41cc44((long *)(param_1 + 0xa8),auStack_38);
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
    *(undefined4 *)(param_1 + 0x74) = 2;
  }
  return;
}



/* Entry: 10ac1acd0; end: 10ac1acd7;  */

void FUN_10ac1acd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uStack_39 = 0;
    FUN_10ac46794(auStack_38,&uStack_21,&UNK_10f69b9ca,&uStack_39);
    func_0x00010a41cc44((long *)(param_1 + 0x98),auStack_38);
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
    *(undefined4 *)(param_1 + 100) = 2;
  }
  return;
}



/* Entry: 10ac1acd8; end: 10ac1acff;  */

void FUN_10ac1acd8(long param_1)

{
  func_0x00010a3a4b08(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac1ad00; end: 10ac1ad27;  */

long FUN_10ac1ad00(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac1ad28; end: 10ac1ae0f;  */

void FUN_10ac1ad28(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar2);
  lVar1 = 0;
  if (param_1[0x15] != 0) {
    lVar1 = param_1[0x15] + 0x20;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010ac1ad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(param_1[0x15] + 0x48));
  return;
}



/* Entry: 10ac1ae10; end: 10ac1ae3f;  */

undefined8 FUN_10ac1ae10(void)

{
  return 0x4000;
}



/* Entry: 10ac1ae40; end: 10ac1af3f;  */

void FUN_10ac1ae40(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f69b9ca;
  uStack_88 = 0;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_70 = 0x90;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10ac1af40(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69c0c7;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac477d0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69c0d2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x91;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010ac47a74(param_1,&puStack_a8);
  FUN_10ac47b90(param_1);
  return;
}



/* Entry: 10ac1af40; end: 10ac1b017;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1afd8) */

undefined1  [16] FUN_10ac1af40(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69d9dd,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac476d4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac1b018; end: 10ac1b0db;  */

long * FUN_10ac1b018(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c5f0c8;
  plVar1[5] = (long)&PTR_DAT_110c5f0f8;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10ac1b0dc; end: 10ac1b0fb;  */

undefined1  [16] FUN_10ac1b0dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2c;
  auVar1._0_8_ = &UNK_10f662788;
  return auVar1;
}



/* Entry: 10ac1b0fc; end: 10ac1b163;  */

bool FUN_10ac1b0fc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2c) {
    iVar2 = 0xf662788;
    _memcmp(&UNK_10f662788,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10ac1b164; end: 10ac1b16b;  */

bool FUN_10ac1b164(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2c) {
    iVar2 = 0xf662788;
    _memcmp(&UNK_10f662788,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10ac1b16c; end: 10ac1b50f;  */

void FUN_10ac1b16c(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662788,0x2c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c59b70;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c59b70;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac1b4f0;
    FUN_10a054dac(param_1,&UNK_10f69c0df,FUN_10ac47c4c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac1b4f0;
    FUN_10a054dac(param_1,&UNK_10f69c0ed,FUN_10ac481c8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac1b4f0;
    FUN_10a054dac(param_1,&UNK_10f69c0f8,FUN_10ac48680,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f311774,FUN_10ac4878c,FUN_10ac48844);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2e5c64,FUN_10ac489b8,FUN_10ac48a70);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f448783,FUN_10ac48b8c,FUN_10ac48c44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f681883,FUN_10ac48d0c,FUN_10ac48dc4);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662788,0x2c);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac1b4f0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac1b4f4);
  (*pcVar6)();
}



/* Entry: 10ac1b510; end: 10ac1b7db;  */

undefined8 * FUN_10ac1b510(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c56238;
  param_1[2] = &PTR_FUN_110c56380;
  param_1[5] = &PTR_DAT_110c563b0;
  param_1[0xb6] = &PTR_DAT_110c564d0;
  param_1[0x15] = &PTR_DAT_110c56408;
  param_1[0x51] = &PTR_DAT_110c56430;
  param_1[0x56] = &PTR_DAT_110c56478;
  __ZNSt3__16futureIvED1Ev(param_1 + 0xb5);
  func_0x00010a136de4(param_1 + 0xb3);
  func_0x00010a202f70(param_1 + 0xb1);
  FUN_10a7660a4(param_1 + 0xaf);
  func_0x00010a061620(param_1 + 0xac);
  func_0x00010a042b54(param_1 + 0xaa);
  func_0x00010a0523dc(param_1 + 0xa8);
  func_0x00010a0523dc(param_1 + 0xa6);
  func_0x00010a0523dc(param_1 + 0xa4);
  func_0x00010a0523dc(param_1 + 0xa2);
  if (param_1[0x93] != 0) {
    piVar1 = (int *)(param_1[0x93] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8c);
    }
  }
  param_1[0x93] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  if (0 < *(int *)((long)param_1 + 0x464)) {
    lVar5 = 0;
    lVar7 = param_1[0x94];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x464));
  }
  puVar6 = (undefined8 *)param_1[0x95];
  if (puVar6 != param_1 + 0x96 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x87] != 0) {
    piVar1 = (int *)(param_1[0x87] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x80);
    }
  }
  param_1[0x87] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  if (0 < *(int *)((long)param_1 + 0x404)) {
    lVar5 = 0;
    lVar7 = param_1[0x88];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x404));
  }
  puVar6 = (undefined8 *)param_1[0x89];
  if (puVar6 != param_1 + 0x8a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a0524e4(param_1 + 0x7e);
  func_0x0001094c8830(param_1 + 0x79);
  func_0x00010a05248c(param_1 + 0x77);
  func_0x00010a05248c(param_1 + 0x75);
  func_0x00010a05248c(param_1 + 0x73);
  func_0x00010a05248c(param_1 + 0x71);
  func_0x00010a05248c(param_1 + 0x6f);
  FUN_10ab12f0c(param_1 + 0x5f);
  func_0x00010ac48ef4(param_1 + 0x5d);
  func_0x00010ac48e9c(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c59ac0;
  param_1[0xb6] = &PTR_FUN_110c59b38;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c597f0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xb6] = &PTR_DAT_110c59950;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c599a0;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xb6] = &PTR_DAT_110c59a70;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 0xb);
  puVar10 = (undefined8 *)param_1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar8; puVar6 != puVar10; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar9 = param_1 + 10;
  if ((*plVar9 != 0) && (*(undefined ***)(*(long *)(*plVar9 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar5 = *(long *)(param_1[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar9;
  *plVar9 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar9);
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



/* Entry: 10ac1b7dc; end: 10ac1b817;  */

undefined8 * FUN_10ac1b7dc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c56238;
  param_1[2] = &PTR_FUN_110c56380;
  param_1[5] = &PTR_DAT_110c563b0;
  param_1[0xb6] = &PTR_DAT_110c564d0;
  param_1[0x15] = &PTR_DAT_110c56408;
  param_1[0x51] = &PTR_DAT_110c56430;
  param_1[0x56] = &PTR_DAT_110c56478;
  __ZNSt3__16futureIvED1Ev(param_1 + 0xb5);
  func_0x00010a136de4(param_1 + 0xb3);
  func_0x00010a202f70(param_1 + 0xb1);
  FUN_10a7660a4(param_1 + 0xaf);
  func_0x00010a061620(param_1 + 0xac);
  func_0x00010a042b54(param_1 + 0xaa);
  func_0x00010a0523dc(param_1 + 0xa8);
  func_0x00010a0523dc(param_1 + 0xa6);
  func_0x00010a0523dc(param_1 + 0xa4);
  func_0x00010a0523dc(param_1 + 0xa2);
  if (param_1[0x93] != 0) {
    piVar1 = (int *)(param_1[0x93] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8c);
    }
  }
  param_1[0x93] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  if (0 < *(int *)((long)param_1 + 0x464)) {
    lVar5 = 0;
    lVar7 = param_1[0x94];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x464));
  }
  puVar6 = (undefined8 *)param_1[0x95];
  if (puVar6 != param_1 + 0x96 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x87] != 0) {
    piVar1 = (int *)(param_1[0x87] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x80);
    }
  }
  param_1[0x87] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  if (0 < *(int *)((long)param_1 + 0x404)) {
    lVar5 = 0;
    lVar7 = param_1[0x88];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x404));
  }
  puVar6 = (undefined8 *)param_1[0x89];
  if (puVar6 != param_1 + 0x8a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a0524e4(param_1 + 0x7e);
  func_0x0001094c8830(param_1 + 0x79);
  func_0x00010a05248c(param_1 + 0x77);
  func_0x00010a05248c(param_1 + 0x75);
  func_0x00010a05248c(param_1 + 0x73);
  func_0x00010a05248c(param_1 + 0x71);
  func_0x00010a05248c(param_1 + 0x6f);
  FUN_10ab12f0c(param_1 + 0x5f);
  func_0x00010ac48ef4(param_1 + 0x5d);
  func_0x00010ac48e9c(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c59ac0;
  param_1[0xb6] = &PTR_FUN_110c59b38;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c597f0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xb6] = &PTR_DAT_110c59950;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c599a0;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xb6] = &PTR_DAT_110c59a70;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 0xb);
  puVar10 = (undefined8 *)param_1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar8; puVar6 != puVar10; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar9 = param_1 + 10;
  if ((*plVar9 != 0) && (*(undefined ***)(*(long *)(*plVar9 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar5 = *(long *)(param_1[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar9;
  *plVar9 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar9);
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



/* Entry: 10ac1b818; end: 10ac1b8a3;  */

void FUN_10ac1b818(void)

{
  FUN_10ac1b510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac1b8a4; end: 10ac1b8d3;  */

void FUN_10ac1b8a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac1b510((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac1b8d4; end: 10ac1bf9b;  */

undefined ** FUN_10ac1b8d4(undefined **param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined *puStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined1 **ppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined **ppuStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3b8;
  undefined **ppuStack_3b0;
  long *plStack_3a8;
  long lStack_378;
  undefined8 *puStack_370;
  undefined **ppuStack_368;
  long *plStack_360;
  undefined **ppuStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined **ppuStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  code *pcStack_220;
  undefined **appuStack_218 [7];
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined2 auStack_198 [76];
  undefined1 auStack_100 [8];
  undefined8 *apuStack_f8 [7];
  undefined1 auStack_c0 [72];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0xb6] = (undefined *)&PTR_FUN_110c383b8;
  param_1[0xb8] = (undefined *)0x0;
  param_1[0xb7] = (undefined *)0x0;
  *(undefined2 *)(param_1 + 0xb9) = 0x100;
  ppuVar5 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c56510,param_2);
  ppuVar5 = ppuVar5 + 0x51;
  FUN_10a0040d0(ppuVar5,&PTR_PTR_110c56530);
  auStack_198[0] = 1;
  FUN_10a00db68(param_1 + 0x56,param_2,auStack_198);
  *param_1 = (undefined *)&PTR_FUN_110c56238;
  param_1[2] = (undefined *)&PTR_FUN_110c56380;
  param_1[5] = (undefined *)&PTR_DAT_110c563b0;
  param_1[0xb6] = (undefined *)&PTR_DAT_110c564d0;
  param_1[0x15] = (undefined *)&PTR_DAT_110c56408;
  param_1[0x51] = (undefined *)&PTR_DAT_110c56430;
  param_1[0x56] = (undefined *)&PTR_DAT_110c56478;
  ppuVar11 = param_1 + 0x5b;
  ppuStack_338 = param_1 + 0x5d;
  param_1[0x5c] = (undefined *)0x0;
  *ppuVar11 = (undefined *)0x0;
  param_1[0x5e] = (undefined *)0x0;
  param_1[0x5d] = (undefined *)0x0;
  ppuVar9 = param_1 + 0x5f;
  FUN_10ab12b08();
  param_1[0x7a] = (undefined *)0x0;
  param_1[0x79] = (undefined *)0x0;
  param_1[0x7c] = (undefined *)0x0;
  param_1[0x7b] = (undefined *)0x0;
  param_1[0x76] = (undefined *)0x0;
  param_1[0x75] = (undefined *)0x0;
  param_1[0x78] = (undefined *)0x0;
  param_1[0x77] = (undefined *)0x0;
  param_1[0x72] = (undefined *)0x0;
  param_1[0x71] = (undefined *)0x0;
  param_1[0x74] = (undefined *)0x0;
  param_1[0x73] = (undefined *)0x0;
  param_1[0x70] = (undefined *)0x0;
  param_1[0x6f] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x7d) = 0x3f800000;
  param_1[0x7f] = (undefined *)0x0;
  param_1[0x7e] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x80) = 0x42ff0000;
  param_1[0x87] = (undefined *)0x0;
  param_1[0x86] = (undefined *)0x0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  param_1[0x88] = (undefined *)(param_1 + 0x81);
  param_1[0x89] = (undefined *)(param_1 + 0x8a);
  param_1[0x8b] = (undefined *)0x0;
  param_1[0x8a] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x8c) = 0x42ff0000;
  param_1[0x93] = (undefined *)0x0;
  param_1[0x92] = (undefined *)0x0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x48c) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  param_1[0x94] = (undefined *)(param_1 + 0x8d);
  param_1[0x95] = (undefined *)(param_1 + 0x96);
  param_1[0x97] = (undefined *)0x0;
  param_1[0x96] = (undefined *)0x0;
  param_1[0x99] = (undefined *)0x0;
  param_1[0x98] = (undefined *)0x0;
  param_1[0x9b] = (undefined *)0x0;
  param_1[0x9a] = (undefined *)0x0;
  param_1[0x9c] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  param_1[0x9e] = (undefined *)0x0;
  param_1[0x9d] = (undefined *)0x3f800000;
  param_1[0xa0] = (undefined *)0x0;
  param_1[0x9f] = (undefined *)0x3f800000;
  *(undefined2 *)((long)param_1 + 0x50c) = 0;
  param_1[0xab] = (undefined *)0x0;
  param_1[0xaa] = (undefined *)0x0;
  param_1[0xa9] = (undefined *)0x0;
  param_1[0xa8] = (undefined *)0x0;
  param_1[0xa7] = (undefined *)0x0;
  param_1[0xa6] = (undefined *)0x0;
  param_1[0xa5] = (undefined *)0x0;
  param_1[0xa4] = (undefined *)0x0;
  param_1[0xa3] = (undefined *)0x0;
  param_1[0xa2] = (undefined *)0x0;
  FUN_109d1a80c();
  puStack_268 = *ppuVar9;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  puStack_2a8 = &UNK_1053a6a3c;
  ppuStack_2a0 = &PTR_DAT_110ae9180;
  pcStack_220 = FUN_10a062c68;
  appuStack_218[0] = &PTR_DAT_110b9f9f8;
  puStack_1d8 = &UNK_1053a6a3c;
  ppuStack_1d0 = &PTR_DAT_110ae9180;
  puStack_260 = &UNK_1053a6a3c;
  ppuStack_258 = &PTR_DAT_110ae9180;
  puStack_1e0 = puStack_268;
  FUN_109d1a80c();
  puStack_2f0 = *ppuVar9;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  puStack_330 = &UNK_1053a6a3c;
  ppuStack_328 = &PTR_DAT_110ae9180;
  puStack_2e8 = &UNK_1053a6a3c;
  ppuStack_2e0 = &PTR_DAT_110ae9180;
  uVar6 = 0xb8;
  __Znwm(0xb8);
  FUN_109d228cc();
  FUN_10a061dc8(auStack_100,&pcStack_220);
  FUN_10a062bb4(auStack_198,uVar6,auStack_100);
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  func_0x0001092ba41c(auStack_c0);
  (*(code *)*apuStack_f8[0])(apuStack_f8);
  FUN_10a062f08(param_1 + 0xac,auStack_198);
  FUN_10a062c88(auStack_198);
  func_0x0001092ba41c(&puStack_2f0);
  (*(code *)*ppuStack_328)(&ppuStack_328);
  func_0x0001092ba41c(&puStack_1e0);
  (*(code *)*appuStack_218[0])(appuStack_218);
  func_0x0001092ba41c(&puStack_268);
  (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
  *(undefined2 *)(param_1 + 0xae) = 0;
  param_1[0xb0] = (undefined *)0x0;
  param_1[0xaf] = (undefined *)0x0;
  param_1[0xb2] = (undefined *)0x0;
  param_1[0xb1] = (undefined *)0x0;
  param_1[0xb4] = (undefined *)0x0;
  param_1[0xb3] = (undefined *)0x0;
  param_1[0xb5] = (undefined *)0x0;
  plVar7 = (long *)((long)ppuVar5 + *(long *)(param_1[0x51] + -0x18));
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
    *(undefined1 *)(plVar7 + 3) = 1;
    plVar7[2] = param_2;
    if (param_2 != 0) {
      plVar7[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar7 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,param_2,ppuVar5);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  uVar4 = uRam00000001132ffd98;
  plVar7 = (long *)0x68;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c5de30;
  *(undefined4 *)(plVar7 + 4) = uVar4;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[5] = 0;
  *(undefined1 *)(plVar7 + 8) = 1;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[3] = (long)&PTR_DAT_110c5de80;
  param_1[0x5d] = (undefined *)(plVar7 + 3);
  plVar14 = (long *)param_1[0x5e];
  param_1[0x5e] = (undefined *)plVar7;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
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
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      plVar7 = plVar14;
    }
  }
  plVar14 = (long *)*ppuStack_338;
  func_0x00010ad031c0();
  (**(code **)(*plVar14 + 0x20))(plVar14,plVar7);
  puVar8 = (undefined8 *)0x50;
  __Znwm();
  puVar8[2] = 0;
  puVar8[1] = 0;
  puVar13 = puVar8 + 3;
  *puVar13 = 0x10000000100;
  *puVar8 = &PTR_FUN_110c5def0;
  plVar7 = puVar8 + 8;
  puVar8[9] = 0;
  *plVar7 = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  __ZNSt3__17promiseIvEC1Ev();
  *(undefined1 *)(puVar8 + 9) = 6;
  param_1[0x5b] = (undefined *)puVar13;
  plVar14 = (long *)param_1[0x5c];
  param_1[0x5c] = (undefined *)puVar8;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
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
      (**(code **)(*plVar14 + 0x10))(plVar14);
      plVar7 = plVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar12 = puVar8[5];
    if (lVar12 != 0) {
      puVar8[6] = lVar12;
      __ZdlPv();
    }
    __ZNSt3__119__shared_weak_countD2Ev(puVar8);
    __ZdlPv();
    __ZNSt3__16futureIvED1Ev(param_1 + 0xb5);
    func_0x00010a136de4(param_1 + 0xb3);
    func_0x00010a202f70(param_1 + 0xb1);
    FUN_10a7660a4(param_1 + 0xaf);
    func_0x00010a061620(param_1 + 0xac);
    func_0x00010a042b54(param_1 + 0xaa);
    func_0x00010a0523dc(param_1 + 0xa8);
    func_0x00010a0523dc(param_1 + 0xa6);
    func_0x00010a0523dc(param_1 + 0xa4);
    func_0x00010a0523dc(param_1 + 0xa2);
    func_0x00010567aa40(param_1 + 0x8c);
    func_0x00010567aa40(param_1 + 0x80);
    func_0x00010a0524e4(param_1 + 0x7e);
    func_0x0001094c8830(param_1 + 0x79);
    func_0x00010a05248c(param_1 + 0x77);
    func_0x00010a05248c(param_1 + 0x75);
    func_0x00010a05248c(param_1 + 0x73);
    func_0x00010a05248c(param_1 + 0x71);
    func_0x00010a05248c(param_1 + 0x6f);
    FUN_10ab12f0c(param_1 + 0x5f);
    func_0x00010ac48ef4(ppuStack_338);
    func_0x00010ac48e9c(ppuVar11);
    FUN_10a00dc2c(param_1 + 0x56);
    FUN_10a004174(plVar14,&PTR_PTR_110c56530);
    ppuVar5 = &PTR_PTR_110c56510;
    FUN_10a00dc70(param_1);
    __Unwind_Resume();
    pcStack_348 = FUN_10ac1bf9c;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = ppuVar5;
    puStack_370 = puVar13;
    ppuStack_368 = ppuVar11;
    plStack_360 = plVar14;
    ppuStack_358 = param_1;
    puStack_350 = &stack0xfffffffffffffff0;
    (**(code **)(*ppuVar5 + 0x248))(ppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar7 + 0xf,ppuVar9);
    uStack_3b8 = 0x10ac49014;
    ppuStack_3b0 = &PTR_DAT_110c5df30;
    plStack_3a8 = plVar7;
    FUN_10a7e353c(ppuVar5,&PTR_DAT_110c56550,&uStack_3b8,0);
    (*(code *)*ppuStack_3b0)(&ppuStack_3b0);
    uStack_3f8 = 0x10ac49040;
    ppuStack_3f0 = &PTR_DAT_110c5df48;
    plStack_3e8 = plVar7;
    FUN_10a02d928(ppuVar5,&PTR_DAT_110c56570,&uStack_3f8,0);
    (*(code *)*ppuStack_3f0)(&ppuStack_3f0);
    (**(code **)(*ppuVar5 + 0x58))(ppuVar5,&PTR_DAT_110c56590,1);
    ppuVar9 = (undefined **)plVar7[0x5d];
    ppuVar11 = ppuVar5;
    (**(code **)(*ppuVar9 + 0x28))();
    *(char *)(plVar7 + 0xae) = (char)ppuVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail();
      (*(code *)*ppuStack_3f0)(&ppuStack_3f0);
      ppuVar10 = ppuVar9;
      __Unwind_Resume();
      pcStack_408 = FUN_10ac1c104;
      ppuStack_420 = ppuVar5;
      ppuStack_418 = ppuVar9;
      ppuStack_410 = &puStack_350;
      if (ppuVar10[0xb3] == (undefined *)0x0) {
        puStack_438 = &UNK_10f653c20;
        uStack_430 = 0x21;
        if (*(long *)(*(long *)(ppuVar10[0x12] + 0x100) + 0x260) == 0) {
          ppuVar5 = &puStack_438;
          FUN_10a0edfc4();
          FUN_10a009b20(ppuVar11,&PTR_DAT_110c56550,ppuVar5 + 0x7e,&UNK_10f63349d,0xe);
          FUN_10a02e188(ppuVar11,&PTR_DAT_110c56570,ppuVar5 + 0x6f,&UNK_10f633e9d,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010ac1c280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar11 + 0x70))
                    (ppuVar11,&PTR_DAT_110c56590,*(undefined1 *)(ppuVar5 + 0xae));
          return ppuVar11;
        }
        ppuVar10 = (undefined **)(*(long *)(*(long *)(ppuVar10[0x12] + 0x100) + 0x260) + 0xb8);
      }
      else if (((*(byte *)((long)ppuVar10 + 0x50d) & 1) == 0) &&
              ((*(byte *)((long)ppuVar10 + 0x50c) & 1) != 0)) {
        ppuVar10 = ppuVar10 + 0xa2;
      }
      else {
        uVar4 = (undefined4)*(undefined8 *)(ppuVar10[0x6f] + 0x268);
        puVar8 = (undefined8 *)0x1;
        FUN_10a088744();
        puStack_438 = (undefined *)CONCAT44(puStack_438._4_4_,uVar4);
        if (puVar8 == (undefined8 *)0x0) {
          uStack_430 = 0;
          plStack_428 = (long *)0x0;
        }
        else {
          plStack_428 = (long *)puVar8[1];
          uStack_430 = *puVar8;
          if (puVar8[1] != 0) {
            plVar7 = (long *)(puVar8[1] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = *plVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        ppuVar10 = ppuVar10 + 0xa2;
        FUN_10a026ab4(ppuVar10,&uStack_430);
        plVar7 = plStack_428;
        if (plStack_428 != (long *)0x0) {
          plVar14 = plStack_428 + 1;
          do {
            lVar12 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_428 + 0x10))(plStack_428);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      return ppuVar10;
    }
    return ppuVar9;
  }
  return param_1;
}



/* Entry: 10ac1bf9c; end: 10ac1c103;  */

long * FUN_10ac1bf9c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar4);
  uStack_78 = 0x10ac49014;
  ppuStack_70 = &PTR_DAT_110c5df30;
  lStack_68 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c56550,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10ac49040;
  ppuStack_b0 = &PTR_DAT_110c5df48;
  lStack_a8 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c56570,&uStack_b8,0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c56590,1);
  plVar5 = *(long **)(param_1 + 0x2e8);
  plVar4 = param_2;
  (**(code **)(*plVar5 + 0x28))();
  *(char *)(param_1 + 0x570) = (char)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  plVar6 = plVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_10ac1c104;
  plStack_e0 = param_2;
  plStack_d8 = plVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (plVar6[0xb3] == 0) {
    lVar9 = *(long *)(*(long *)(plVar6[0x12] + 0x100) + 0x260);
    puStack_f8 = &UNK_10f653c20;
    uStack_f0 = 0x21;
    if (lVar9 == 0) {
      ppuVar7 = &puStack_f8;
      FUN_10a0edfc4();
      FUN_10a009b20(plVar4,&PTR_DAT_110c56550,ppuVar7 + 0x7e,&UNK_10f63349d,0xe);
      FUN_10a02e188(plVar4,&PTR_DAT_110c56570,ppuVar7 + 0x6f,&UNK_10f633e9d,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010ac1c280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x70))(plVar4,&PTR_DAT_110c56590,*(undefined1 *)(ppuVar7 + 0xae));
      return plVar4;
    }
    plVar6 = (long *)(lVar9 + 0xb8);
  }
  else if (((*(byte *)((long)plVar6 + 0x50d) & 1) == 0) &&
          ((*(byte *)((long)plVar6 + 0x50c) & 1) != 0)) {
    plVar6 = plVar6 + 0xa2;
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(plVar6[0x6f] + 0x268);
    puVar8 = (undefined8 *)0x1;
    FUN_10a088744();
    puStack_f8 = (undefined *)CONCAT44(puStack_f8._4_4_,uVar3);
    if (puVar8 == (undefined8 *)0x0) {
      uStack_f0 = 0;
      plStack_e8 = (long *)0x0;
    }
    else {
      plStack_e8 = (long *)puVar8[1];
      uStack_f0 = *puVar8;
      if (puVar8[1] != 0) {
        plVar4 = (long *)(puVar8[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    plVar6 = plVar6 + 0xa2;
    FUN_10a026ab4(plVar6,&uStack_f0);
    plVar4 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar5 = plStack_e8 + 1;
      do {
        lVar9 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return plVar6;
}



/* Entry: 10ac1c104; end: 10ac1c32f;  */

long * FUN_10ac1c104(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x598) == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_38 = &UNK_10f653c20;
    uStack_30 = 0x21;
    if (lVar8 == 0) {
      ppuVar6 = &puStack_38;
      FUN_10a0edfc4();
      FUN_10a009b20(param_2,&PTR_DAT_110c56550,ppuVar6 + 0x7e,&UNK_10f63349d,0xe);
      FUN_10a02e188(param_2,&PTR_DAT_110c56570,ppuVar6 + 0x6f,&UNK_10f633e9d,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010ac1c280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c56590,*(undefined1 *)(ppuVar6 + 0xae));
      return param_2;
    }
    plVar9 = (long *)(lVar8 + 0xb8);
  }
  else if (((*(byte *)(param_1 + 0x50d) & 1) == 0) && ((*(byte *)(param_1 + 0x50c) & 1) != 0)) {
    plVar9 = (long *)(param_1 + 0x510);
  }
  else {
    uVar5 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x378) + 0x268);
    puVar7 = (undefined8 *)0x1;
    FUN_10a088744();
    puStack_38 = (undefined *)CONCAT44(puStack_38._4_4_,uVar5);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_30 = 0;
      plStack_28 = (long *)0x0;
    }
    else {
      plStack_28 = (long *)puVar7[1];
      uStack_30 = *puVar7;
      if (puVar7[1] != 0) {
        plVar9 = (long *)(puVar7[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    plVar9 = (long *)(param_1 + 0x510);
    FUN_10a026ab4(plVar9,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return plVar9;
}



/* Entry: 10ac1c330; end: 10ac1c837;  */

void FUN_10ac1c330(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  code *pcStack_78;
  ulong *puStack_70;
  undefined8 *puStack_68;
  
  *(undefined1 *)((long)param_1 + 0x571) = 0;
  if (*param_2 == 0) {
    uStack_b0 = CONCAT17(9,(undefined7)uStack_b0);
    uStack_b8 = CONCAT62(uStack_b8._2_6_,0x6c);
    uStack_c0 = 0x65646f4d6e69616d;
    (**(code **)(*(long *)param_1[0x5d] + 0x18))((long *)param_1[0x5d],&uStack_c0);
    if ((long)uStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    pcVar6 = *(code **)(*param_1 + 0x50);
LAB_10ac1c554:
    (*pcVar6)(param_1);
    return;
  }
  lVar11 = param_1[0xae];
  uStack_b0 = CONCAT17(9,(undefined7)uStack_b0);
  uStack_b8 = CONCAT62(uStack_b8._2_6_,0x6c);
  uStack_c0 = 0x65646f4d6e69616d;
  (**(code **)(*(long *)param_1[0x5d] + 0x18))((long *)param_1[0x5d],&uStack_c0);
  if ((long)uStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  FUN_10a7f82b8(param_1 + 0x7e,param_2);
  lVar7 = param_1[0x7e];
  func_0x00010aae9fd8();
  if (lVar7 != 0) {
    FUN_10a08d2e0(&uStack_c0,lVar7 + 0x10);
    plVar8 = (long *)0x38;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110bb3748;
    pcStack_78 = (code *)(plVar8 + 3);
    *(undefined ***)pcStack_78 = &PTR_FUN_110ba56f0;
    plVar8[5] = uStack_b8;
    plVar8[4] = uStack_c0;
    plVar8[6] = uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffffffffffff;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    puStack_70 = (ulong *)plVar8;
    func_0x00010ac1c284(param_1 + 0xb1,&pcStack_78);
    puVar9 = puStack_70;
    if (puStack_70 != (ulong *)0x0) {
      plVar8 = (long *)(puStack_70 + 1);
      do {
        lVar7 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*puStack_70 + 0x10))(puStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
      }
    }
    if ((long)uStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if (param_1[0x6f] != 0) {
      if ((char)lVar11 != '\0') {
        __ZNSt3__17promiseIvEC1Ev(&pcStack_78);
        pcVar6 = pcStack_78;
        pcStack_78 = (code *)0x0;
        uStack_c0 = *(ulong *)(param_1[0x5b] + 0x28);
        *(code **)(param_1[0x5b] + 0x28) = pcVar6;
        __ZNSt3__17promiseIvED1Ev(&uStack_c0);
        __ZNSt3__17promiseIvED1Ev(&pcStack_78);
        __ZNSt3__17promiseIvE10get_futureEv(&pcStack_78,param_1[0x5b] + 0x28);
        pcVar6 = pcStack_78;
        pcStack_78 = (code *)0x0;
        uStack_c0 = param_1[0xb5];
        param_1[0xb5] = (long)pcVar6;
        __ZNSt3__16futureIvED1Ev(&uStack_c0);
        __ZNSt3__16futureIvED1Ev(&pcStack_78);
        uVar2 = param_1[8];
        uVar3 = param_1[9];
        if (uVar3 == 0) {
          uStack_b8 = 0;
        }
        else {
          plVar8 = (long *)(uVar3 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            uStack_b8 = uVar3;
          } while (cVar4 != '\0');
        }
        uVar14 = param_1[0x5d];
        uVar15 = param_1[0x5e];
        if (uVar15 != 0) {
          plVar8 = (long *)(uVar15 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar16 = param_1[0xb1];
        uVar17 = param_1[0xb2];
        if (uVar17 != 0) {
          plVar8 = (long *)(uVar17 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar18 = param_1[0x5b];
        uVar19 = param_1[0x5c];
        if (uVar19 != 0) {
          plVar8 = (long *)(uVar19 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar12 = (undefined8 *)param_1[0xac];
        plVar8 = (long *)puVar12[2];
        uStack_c0 = uVar2;
        uStack_b0 = uVar14;
        uStack_a8 = uVar15;
        uStack_a0 = uVar16;
        uStack_98 = uVar17;
        uStack_90 = uVar18;
        uStack_88 = uVar19;
        puStack_68 = puVar12;
        if (plVar8 == (long *)0x0) {
          puVar9 = (ulong *)0x50;
          __Znwm();
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
          uStack_c0 = 0;
          uStack_b8 = 0;
          puVar9[2] = uVar14;
          puVar9[3] = uVar15;
          puVar9[4] = uVar16;
          puVar9[5] = uVar17;
          puVar9[6] = uVar18;
          puVar9[7] = uVar19;
          puVar9[9] = 0x10ac49420;
          pcStack_78 = FUN_10ac491e8;
          puStack_70 = puVar9;
          (**(code **)*puVar12)(puVar12,&pcStack_78);
        }
        else {
          lStack_80 = 0;
          (**(code **)(*plVar8 + 0x28))(plVar8,0,&lStack_80);
          if (lStack_80 != 0) {
            func_0x0001092af97c(&lStack_80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac1c7dc);
            (*pcVar6)();
          }
          puVar9 = (ulong *)0x58;
          __Znwm();
          *puVar9 = uVar2;
          puVar9[1] = uStack_b8;
          uStack_c0 = 0;
          uStack_b8 = 0;
          puVar9[2] = uVar14;
          puVar9[3] = uVar15;
          puVar9[4] = uVar16;
          puVar9[5] = uVar17;
          puVar9[6] = uVar18;
          puVar9[7] = uVar19;
          puVar9[9] = (ulong)FUN_10ac493d0;
          puVar9[10] = (ulong)plVar8;
          pcStack_78 = (code *)0x10ac491b8;
          puStack_70 = puVar9;
          (**(code **)*puVar12)(puVar12,&pcStack_78);
          __ZNSt13exception_ptrD1Ev(&lStack_80);
        }
        lStack_80 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_80);
        if (uStack_b8 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (uVar3 == 0) {
          return;
        }
        __ZNSt3__119__shared_weak_count14__release_weakEv(uVar3);
        return;
      }
      uStack_b0._7_1_ = '\t';
      uStack_b8 = CONCAT62(uStack_b8._2_6_,0x6c);
      uStack_c0 = 0x65646f4d6e69616d;
      (**(code **)(*(long *)param_1[0x5d] + 0x10))((long *)param_1[0x5d],&uStack_c0,param_1 + 0xb1);
      if (uStack_b0._7_1_ < '\0') {
        __ZdlPv(uStack_c0);
      }
      lVar11 = *(long *)(param_1[0x5d] + 0x30);
      puVar12 = (undefined8 *)param_1[0x5b];
      *puVar12 = *(undefined8 *)(lVar11 + 0x40);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar11 + 0x50);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x0001092cc0dc(&uStack_c0,*(long *)(lVar11 + 0x58),*(long *)(lVar11 + 0x60),
                          *(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58) >> 2);
      lVar13 = param_1[0x5b];
      lVar7 = *(long *)(lVar13 + 0x10);
      lVar11 = lVar13;
      if (lVar7 != 0) {
        *(long *)(lVar13 + 0x18) = lVar7;
        __ZdlPv();
        *(long *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        lVar11 = param_1[0x5b];
      }
      *(ulong *)(lVar13 + 0x18) = uStack_b8;
      *(ulong *)(lVar13 + 0x10) = uStack_c0;
      *(ulong *)(lVar13 + 0x20) = uStack_b0;
      *(char *)(lVar11 + 0x30) = (char)*(undefined4 *)(*(long *)(param_1[0x5d] + 0x30) + 0xe0);
      param_1 = (long *)param_1[0xaa];
      if (param_1 == (long *)0x0) {
        return;
      }
      if ((char)param_1[8] != '\x01') {
        if ((char)param_1[8] != '\x02') {
          return;
        }
        FUN_10a05e614();
        return;
      }
      pcVar6 = (code *)*param_1;
      goto LAB_10ac1c554;
    }
  }
  puVar10 = &UNK_10f63b8ac;
  FUN_10a00946c();
  func_0x000104bd46a0();
  if ((long)uStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  __Unwind_Resume();
  puVar10[0x50d] = 1;
  FUN_10a18cbd8(puVar10 + 0x510);
  FUN_10a18cbd8(puVar10 + 0x520);
  FUN_10a18cbd8(puVar10 + 0x530);
  FUN_10a18cbd8(puVar10 + 0x540);
  FUN_10a02d8cc(puVar10 + 0x388);
  FUN_10a02d8cc(puVar10 + 0x398);
  plVar8 = *(long **)(puVar10 + 0x3f8);
  *(undefined8 *)(puVar10 + 0x3f8) = 0;
  *(undefined8 *)(puVar10 + 0x3f0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = *(long **)(puVar10 + 0x590);
  *(undefined8 *)(puVar10 + 0x590) = 0;
  *(undefined8 *)(puVar10 + 0x588) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10ac1c838; end: 10ac1c917;  */

void FUN_10ac1c838(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 0x50d) = 1;
  FUN_10a18cbd8(param_1 + 0x510);
  FUN_10a18cbd8(param_1 + 0x520);
  FUN_10a18cbd8(param_1 + 0x530);
  FUN_10a18cbd8(param_1 + 0x540);
  FUN_10a02d8cc(param_1 + 0x388);
  FUN_10a02d8cc(param_1 + 0x398);
  plVar5 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
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
  plVar5 = *(long **)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
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



/* Entry: 10ac1c918; end: 10ac1c9ff;  */

float FUN_10ac1c918(long param_1,long param_2,uint param_3,int param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 - param_1 >> 3;
  if ((ulong)(long)param_4 <= uVar3) {
    fVar6 = 0.0;
    if (param_4 - param_3 != 0 && (int)param_3 <= param_4) {
      uVar1 = 0;
      if ((ulong)(long)(int)param_3 <= uVar3) {
        uVar1 = uVar3 - (long)(int)param_3;
      }
      if (uVar1 <= param_4 + ~param_3) goto LAB_10ac1c9c8;
      lVar4 = (long)param_4 - (long)(int)param_3;
      fVar6 = 0.0;
      puVar5 = (undefined8 *)(param_1 + (long)(int)param_3 * 8);
      do {
        fVar6 = fVar6 + (float)*puVar5;
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
    }
    return fVar6 / (float)(int)(param_4 - param_3);
  }
  __ZNSt3__19to_stringEm(auStack_50,uVar3);
  FUN_109feb280(auStack_38,&UNK_10f56ee75,auStack_50);
  FUN_10a0029c0(auStack_38);
LAB_10ac1c9c8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac1c9cc);
  (*pcVar2)();
}



/* Entry: 10ac1ca00; end: 10ac1cab3;  */

undefined8 FUN_10ac1ca00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x570) != '\x01') {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x571) & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x5a8);
    if (lVar4 != 0) {
      lVar2 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_28 = lVar2;
      func_0x0001093f25b0(lVar4,&lStack_28);
      if ((int)lVar4 == 0) {
        __ZNSt3__16futureIvE3getEv(param_1 + 0x5a8);
        *(undefined1 *)(param_1 + 0x571) = 1;
        puVar3 = *(undefined8 **)(param_1 + 0x550);
        if (puVar3 == (undefined8 *)0x0) {
          return 1;
        }
        if (*(char *)(puVar3 + 8) == '\x01') {
          (*(code *)*puVar3)(puVar3);
        }
        else {
          if (*(char *)(puVar3 + 8) != '\x02') {
            return 1;
          }
          FUN_10a05e614(puVar3);
        }
        goto LAB_10ac1ca28;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_10ac1ca28:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ac1cab4; end: 10ac1d39f;  */

void FUN_10ac1cab4(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_register_00005028;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar20;
  ulong unaff_d11;
  float fVar21;
  ulong unaff_d12;
  float fVar22;
  ulong unaff_d13;
  float fVar23;
  undefined8 unaff_d14;
  float fVar24;
  undefined8 unaff_d15;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d15;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)param_3 + 0x74) = 0;
    unaff_x19 = param_3;
    plVar4 = param_4;
    FUN_10ac1ca00();
    unaff_x20 = param_4;
    if ((((int)unaff_x19 != 0) && (param_3[0x6f] != 0)) &&
       ((*(byte *)((long)param_3 + 0x50d) & 1) == 0)) {
      plVar4 = *(long **)(param_3[0x6f] + 0x268);
      unaff_d10 = 0;
      if (plVar4 == (long *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        (**(code **)(*plVar4 + 0xb0))();
        uVar10 = (ulong)(uint)(float)(int)plVar4;
        uVar11 = 0;
        plVar4 = *(long **)(param_3[0x6f] + 0x268);
        if (plVar4 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar4 + 0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(ulong *)((long)register0x00000008 + -0x1e0) = uVar10;
          (*pcVar7)();
          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
          uVar10 = *(ulong *)((long)register0x00000008 + -0x1e0);
          unaff_d10 = (ulong)(uint)(float)(int)plVar4;
        }
      }
      lVar8 = param_4[0xd];
      if (lVar8 != 0) {
        unaff_x20 = *(long **)(lVar8 + 0x28);
        plVar4 = *(long **)(lVar8 + 0x30);
        if (unaff_x20 == plVar4) {
LAB_10ac1cb98:
          if ((unaff_x20 != plVar4) && (unaff_x20 != (long *)0x0)) {
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar11;
            *(ulong *)((long)register0x00000008 + -0x1e0) = uVar10;
            unaff_x22 = (undefined8 *)((long)register0x00000008 + -0xf0);
            uVar12 = 0;
            uVar11 = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
            *unaff_x22 = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x3f800000;
            (**(code **)(*param_3 + 0x98))(param_3,(undefined1 *)((long)register0x00000008 + -0xf0))
            ;
            *(undefined1 *)((long)param_3 + 0x50c) = 1;
            plVar5 = unaff_x20 + 3;
            fVar20 = *(float *)(unaff_x20 + 0x23);
            unaff_d11 = (ulong)(uint)fVar20;
            fVar21 = *(float *)((long)unaff_x20 + 0x11c);
            unaff_d12 = (ulong)(uint)fVar21;
            fVar22 = *(float *)(unaff_x20 + 0x24);
            unaff_d13 = (ulong)(uint)fVar22;
            unaff_x21 = unaff_x20 + 4;
            FUN_10ac1c918(*plVar5,*unaff_x21,0x2a,0x30);
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = in_register_00005028;
            *(undefined8 *)((long)register0x00000008 + -0x200) = param_2;
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar12;
            *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar11;
            unaff_x19 = (long *)*plVar5;
            plVar4 = (long *)*unaff_x21;
            FUN_10ac1c918(unaff_x19,plVar4,0x24,0x2a);
            lVar8 = *plVar5;
            if ((ulong)(*unaff_x21 - lVar8) < 0x1b1) {
LAB_10ac1d308:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac1d30c);
              (*pcVar7)();
            }
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x200);
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
            unaff_x20 = (long *)param_3[0x5b];
            uVar13 = *(uint *)(unaff_x20 + 1);
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
            *(ulong *)((long)register0x00000008 + -0x1f0) = (ulong)uVar13;
            fVar23 = ((float)uVar16 + (float)uVar11) * 0.5;
            fVar24 = ((float)uVar12 + (float)param_2) * 0.5;
            unaff_d14 = CONCAT44(fVar24,fVar23);
            fVar14 = fVar23 - ((float)*(undefined8 *)(lVar8 + 0x1b0) +
                              (float)*(undefined8 *)(lVar8 + 0x180)) * 0.5;
            fVar15 = fVar24 - ((float)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar8 + 0x180) >> 0x20)) * 0.5;
            fVar19 = ((float)uVar16 - (float)uVar11) - fVar15;
            unaff_d8 = (ulong)(uint)fVar19;
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
            *(ulong *)((long)register0x00000008 + -0x200) = CONCAT44(fVar15,fVar14);
            fVar14 = ((float)uVar12 - (float)param_2) + fVar14;
            unaff_d9 = (ulong)(uint)fVar14;
            uVar10 = unaff_d9;
            _atan2f(unaff_d9,unaff_d8);
            *(int *)((long)param_3 + 0x4c4) = (int)uVar10;
            if ((float *)unaff_x20[3] == (float *)unaff_x20[2]) goto LAB_10ac1d308;
            fVar20 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
            fVar23 = fVar23 + (float)*(undefined8 *)((long)register0x00000008 + -0x200) * -0.1 *
                              (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
            fVar24 = fVar24 + (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x200) >>
                                     0x20) * -0.1 *
                              (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
            fVar21 = SQRT(fVar14 * fVar14 + fVar19 * fVar19);
            fVar19 = fVar19 / fVar21;
            fVar14 = fVar14 / fVar21;
            fVar15 = fVar20 * (-fVar19 - fVar14);
            fVar22 = fVar20 * (fVar14 - fVar19);
            fVar21 = *(float *)unaff_x20[2];
            *(float *)(param_3 + 0x99) = fVar23 + fVar22 * fVar21;
            *(float *)((long)param_3 + 0x4cc) = fVar24 + fVar15 * fVar21;
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 5) goto LAB_10ac1d308;
            fVar21 = fVar20 * (fVar19 - fVar14);
            fVar18 = *(float *)(unaff_x20[2] + 4);
            param_3[0x9a] = CONCAT44(fVar24 + fVar21 * fVar18,fVar23 + fVar15 * fVar18);
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 9) goto LAB_10ac1d308;
            fVar20 = fVar20 * (fVar19 + fVar14);
            fVar14 = *(float *)(unaff_x20[2] + 8);
            param_3[0x9b] = CONCAT44(fVar24 + fVar22 * fVar14,fVar23 + fVar20 * fVar14);
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 0xd) goto LAB_10ac1d308;
            fVar22 = *(float *)(unaff_x20[2] + 0xc);
            param_3[0x9c] = CONCAT44(fVar24 + fVar20 * fVar22,fVar23 + fVar21 * fVar22);
            fVar20 = (float)*(undefined8 *)((long)register0x00000008 + -0x1e0);
            fVar21 = (float)unaff_d10 / fVar20;
            param_2 = CONCAT44(fVar21,fVar21);
            in_register_00005028 = CONCAT44(fVar21,fVar21);
            fVar22 = *(float *)(param_3 + 0x99);
            auVar17 = NEON_fmov(0xbf800000,4);
            *(float *)(param_3 + 0x99) = (fVar22 + fVar22) / fVar20 + auVar17._0_4_;
            *(float *)((long)param_3 + 0x4cc) =
                 fVar21 - (*(float *)((long)param_3 + 0x4cc) + *(float *)((long)param_3 + 0x4cc)) /
                          fVar20;
            *(float *)(param_3 + 0x9a) =
                 (*(float *)(param_3 + 0x9a) + *(float *)(param_3 + 0x9a)) / fVar20 + auVar17._4_4_;
            *(float *)((long)param_3 + 0x4d4) =
                 fVar21 - (*(float *)((long)param_3 + 0x4d4) + *(float *)((long)param_3 + 0x4d4)) /
                          fVar20;
            *(float *)(param_3 + 0x9b) =
                 (*(float *)(param_3 + 0x9b) + *(float *)(param_3 + 0x9b)) / fVar20 + auVar17._8_4_;
            *(float *)((long)param_3 + 0x4dc) =
                 fVar21 - (*(float *)((long)param_3 + 0x4dc) + *(float *)((long)param_3 + 0x4dc)) /
                          fVar20;
            *(float *)(param_3 + 0x9c) =
                 (*(float *)(param_3 + 0x9c) + *(float *)(param_3 + 0x9c)) / fVar20 + auVar17._12_4_
            ;
            *(float *)((long)param_3 + 0x4e4) =
                 fVar21 - (*(float *)((long)param_3 + 0x4e4) + *(float *)((long)param_3 + 0x4e4)) /
                          fVar20;
            *(undefined4 *)((long)param_3 + 0x74) = 2;
            if (param_3[0xa2] != 0) goto LAB_10ac1cfd4;
            FUN_10ad4bd78();
            unaff_x23 = param_3 + 0x12;
            lVar8 = *unaff_x23;
            FUN_10a2421c8();
            plVar4 = *(long **)(lVar8 + 0x228);
            puVar9 = (undefined8 *)param_3[0x5b];
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar9;
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x2100000000;
            *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x400000001;
            *(undefined8 *)((long)register0x00000008 + -0xdc) = 0x2100000000;
            *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x400000001;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar4 + 0x20))(plVar4,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0xa4,plVar4);
            uVar6 = 0x24;
            if ((int)unaff_x19 < 3000) {
              uVar6 = 2;
            }
            lVar8 = *unaff_x23;
            FUN_10a2421c8();
            plVar4 = *(long **)(lVar8 + 0x228);
            puVar9 = (undefined8 *)param_3[0x5b];
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar9;
            *(undefined4 *)((long)register0x00000008 + -0xe4) = 1;
            *(undefined4 *)((long)register0x00000008 + -0xe0) = uVar6;
            *(undefined8 *)((long)register0x00000008 + -0xdc) = 0;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar4 + 0x20))(plVar4,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0xa6,plVar4);
            if (2999 < (int)unaff_x19) {
              lVar8 = param_3[0x12];
              FUN_10a2421c8();
              plVar4 = *(long **)(lVar8 + 0x228);
              puVar9 = (undefined8 *)param_3[0x5b];
              *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar9;
              *(undefined8 *)((long)register0x00000008 + -0xdc) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x2500000001;
              *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
              *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
              *(undefined1 *)((long)register0x00000008 + -200) = 0;
              (**(code **)(*plVar4 + 0x20))(plVar4,(undefined1 *)((long)register0x00000008 + -0xf0))
              ;
              FUN_10a099d88(param_3 + 0xa8,plVar4);
              *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
              FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x140),
                            (undefined1 *)((long)register0x00000008 + -400),
                            (undefined1 *)((long)register0x00000008 + -0xf0));
              *(long *)((long)register0x00000008 + -400) = param_3[0x12];
              FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                            (undefined1 *)((long)register0x00000008 + -400),
                            (undefined1 *)((long)register0x00000008 + -0x140));
              func_0x00010a015bec(param_3 + 0x77,(undefined1 *)((long)register0x00000008 + -0xf0));
              FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x140),param_3 + 0xa8);
              func_0x00010a015cec((undefined1 *)((long)register0x00000008 + -0xf0));
              func_0x00010a061678((undefined1 *)((long)register0x00000008 + -0x140));
            }
            plVar4 = *(long **)(param_3[0x6f] + 0x268);
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)0x0;
LAB_10ac1d01c:
              unaff_x21 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar4 + 0xb0))();
              unaff_x21 = *(long **)(param_3[0x6f] + 0x268);
              if (unaff_x21 == (long *)0x0) goto LAB_10ac1d01c;
              (**(code **)(*unaff_x21 + 0xb8))();
            }
            FUN_10a1da3a4(param_3,plVar4,unaff_x21,0,0,4,0,0);
            unaff_x24 = param_3 + 0x12;
            lVar8 = *unaff_x24;
            FUN_10a2421c8();
            plVar5 = *(long **)(lVar8 + 0x228);
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(int *)((long)register0x00000008 + -0xec) = (int)plVar4;
            *(undefined8 *)((long)register0x00000008 + -0xdc) =
                 *(undefined8 *)((long)register0x00000008 + -0x1d8);
            *(undefined8 *)((long)register0x00000008 + -0xe4) =
                 *(undefined8 *)((long)register0x00000008 + -0x1e0);
            *(int *)((long)register0x00000008 + -0xe8) = (int)unaff_x21;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar5 + 0x20))(plVar5,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0xa2,plVar5);
            *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1a0),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0xf0));
            *(long *)((long)register0x00000008 + -0x140) = *unaff_x24;
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0x1a0));
            func_0x00010a015bec(param_3 + 0x71,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1a0),param_3 + 0xa2);
            *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1b0),
                          (undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x140));
            *(long *)((long)register0x00000008 + -400) = param_3[0x12];
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x1b0));
            func_0x00010a015bec(param_3 + 0x73,(undefined1 *)((long)register0x00000008 + -0x140));
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1b0),param_3 + 0xa4);
            *(undefined8 *)((long)register0x00000008 + -400) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1c0),
                          (undefined1 *)((long)register0x00000008 + -0x1c8),
                          (undefined1 *)((long)register0x00000008 + -400));
            *(long *)((long)register0x00000008 + -0x1c8) = param_3[0x12];
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x1c8),
                          (undefined1 *)((long)register0x00000008 + -0x1c0));
            unaff_x20 = (long *)((long)register0x00000008 + -400);
            func_0x00010a015bec(param_3 + 0x75,(undefined1 *)((long)register0x00000008 + -400));
            plVar4 = param_3 + 0xa6;
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1c0));
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x180));
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x178))
                      ((undefined1 *)((long)register0x00000008 + -0x178));
            plVar5 = *(long **)((long)register0x00000008 + -0x188);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
            plVar5 = *(long **)((long)register0x00000008 + -0x1b8);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x130));
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x128))
                      ((undefined1 *)((long)register0x00000008 + -0x128));
            plVar5 = *(long **)((long)register0x00000008 + -0x138);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
            plVar5 = *(long **)((long)register0x00000008 + -0x1a8);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
              }
            }
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
            unaff_x19 = (long *)((long)register0x00000008 + -0xd8);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))();
            plVar5 = *(long **)((long)register0x00000008 + -0xe8);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar5;
              }
            }
            plVar5 = *(long **)((long)register0x00000008 + -0x198);
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 1;
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
                (**(code **)(*plVar5 + 0x10))(plVar5);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar5;
              }
            }
            goto LAB_10ac1cfd4;
          }
        }
        else {
          do {
            if (((int)*unaff_x20 == 0) && (*(int *)((long)unaff_x20 + 4) == (int)param_3[0x98]))
            goto LAB_10ac1cb98;
            unaff_x20 = unaff_x20 + 0x44;
          } while (unaff_x20 != plVar4);
        }
      }
      *(undefined1 *)((long)param_3 + 0x50c) = 0;
      (**(code **)(**(long **)(param_3[0x6f] + 0x268) + 0x90))
                ((undefined1 *)((long)register0x00000008 + -0xf0));
      plVar4 = (long *)((long)register0x00000008 + -0xf0);
      (**(code **)(*param_3 + 0x98))();
      unaff_x19 = param_3;
    }
LAB_10ac1cfd4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x98)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a015cec((undefined1 *)((long)register0x00000008 + -0xf0));
    func_0x00010a061678((undefined1 *)((long)register0x00000008 + -0x140));
    unaff_x30 = FUN_10ac1d3a0;
    param_3 = unaff_x19;
    __Unwind_Resume();
    param_3 = param_3 + -0x51;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x200);
    param_4 = plVar4;
  } while( true );
}



/* Entry: 10ac1d3a0; end: 10ac1d3a7;  */

void FUN_10ac1d3a0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long *plVar9;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_register_00005028;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar20;
  ulong unaff_d11;
  float fVar21;
  ulong unaff_d12;
  float fVar22;
  ulong unaff_d13;
  float fVar23;
  float fVar24;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  do {
    plVar4 = param_3 + -0x51;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d15;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)param_3 + -0x214) = 0;
    unaff_x19 = plVar4;
    plVar3 = param_4;
    FUN_10ac1ca00();
    unaff_x20 = param_4;
    if ((((int)unaff_x19 != 0) && (param_3[0x1e] != 0)) &&
       ((*(byte *)((long)param_3 + 0x285) & 1) == 0)) {
      plVar3 = *(long **)(param_3[0x1e] + 0x268);
      unaff_d10 = 0;
      if (plVar3 == (long *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0xb0))();
        uVar10 = (ulong)(uint)(float)(int)plVar3;
        uVar11 = 0;
        plVar3 = *(long **)(param_3[0x1e] + 0x268);
        if (plVar3 != (long *)0x0) {
          pcVar6 = *(code **)(*plVar3 + 0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(ulong *)((long)register0x00000008 + -0x1e0) = uVar10;
          (*pcVar6)();
          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
          uVar10 = *(ulong *)((long)register0x00000008 + -0x1e0);
          unaff_d10 = (ulong)(uint)(float)(int)plVar3;
        }
      }
      lVar7 = param_4[0xd];
      if (lVar7 != 0) {
        unaff_x20 = *(long **)(lVar7 + 0x28);
        plVar3 = *(long **)(lVar7 + 0x30);
        if (unaff_x20 == plVar3) {
LAB_10ac1cb98:
          if ((unaff_x20 != plVar3) && (unaff_x20 != (long *)0x0)) {
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar11;
            *(ulong *)((long)register0x00000008 + -0x1e0) = uVar10;
            unaff_x22 = (undefined8 *)((long)register0x00000008 + -0xf0);
            uVar12 = 0;
            uVar11 = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
            *unaff_x22 = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x3f800000;
            (**(code **)(*plVar4 + 0x98))(plVar4,(undefined1 *)((long)register0x00000008 + -0xf0));
            *(undefined1 *)((long)param_3 + 0x284) = 1;
            plVar9 = unaff_x20 + 3;
            fVar20 = *(float *)(unaff_x20 + 0x23);
            unaff_d11 = (ulong)(uint)fVar20;
            fVar21 = *(float *)((long)unaff_x20 + 0x11c);
            unaff_d12 = (ulong)(uint)fVar21;
            fVar22 = *(float *)(unaff_x20 + 0x24);
            unaff_d13 = (ulong)(uint)fVar22;
            unaff_x21 = unaff_x20 + 4;
            FUN_10ac1c918(*plVar9,*unaff_x21,0x2a,0x30);
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = in_register_00005028;
            *(undefined8 *)((long)register0x00000008 + -0x200) = param_2;
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar12;
            *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar11;
            unaff_x19 = (long *)*plVar9;
            plVar3 = (long *)*unaff_x21;
            FUN_10ac1c918(unaff_x19,plVar3,0x24,0x2a);
            lVar7 = *plVar9;
            if ((ulong)(*unaff_x21 - lVar7) < 0x1b1) {
LAB_10ac1d308:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac1d30c);
              (*pcVar6)();
            }
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x200);
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
            unaff_x20 = (long *)param_3[10];
            uVar13 = *(uint *)(unaff_x20 + 1);
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
            *(ulong *)((long)register0x00000008 + -0x1f0) = (ulong)uVar13;
            fVar23 = ((float)uVar16 + (float)uVar11) * 0.5;
            fVar24 = ((float)uVar12 + (float)param_2) * 0.5;
            unaff_d14 = CONCAT44(fVar24,fVar23);
            fVar14 = fVar23 - ((float)*(undefined8 *)(lVar7 + 0x1b0) +
                              (float)*(undefined8 *)(lVar7 + 0x180)) * 0.5;
            fVar15 = fVar24 - ((float)((ulong)*(undefined8 *)(lVar7 + 0x1b0) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar7 + 0x180) >> 0x20)) * 0.5;
            fVar19 = ((float)uVar16 - (float)uVar11) - fVar15;
            unaff_d8 = (ulong)(uint)fVar19;
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
            *(ulong *)((long)register0x00000008 + -0x200) = CONCAT44(fVar15,fVar14);
            fVar14 = ((float)uVar12 - (float)param_2) + fVar14;
            unaff_d9 = (ulong)(uint)fVar14;
            uVar10 = unaff_d9;
            _atan2f(unaff_d9,unaff_d8);
            *(int *)((long)param_3 + 0x23c) = (int)uVar10;
            if ((float *)unaff_x20[3] == (float *)unaff_x20[2]) goto LAB_10ac1d308;
            fVar20 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
            fVar23 = fVar23 + (float)*(undefined8 *)((long)register0x00000008 + -0x200) * -0.1 *
                              (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
            fVar24 = fVar24 + (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x200) >>
                                     0x20) * -0.1 *
                              (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
            fVar21 = SQRT(fVar14 * fVar14 + fVar19 * fVar19);
            fVar19 = fVar19 / fVar21;
            fVar14 = fVar14 / fVar21;
            fVar15 = fVar20 * (-fVar19 - fVar14);
            fVar22 = fVar20 * (fVar14 - fVar19);
            fVar21 = *(float *)unaff_x20[2];
            *(float *)(param_3 + 0x48) = fVar23 + fVar22 * fVar21;
            *(float *)((long)param_3 + 0x244) = fVar24 + fVar15 * fVar21;
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 5) goto LAB_10ac1d308;
            fVar21 = fVar20 * (fVar19 - fVar14);
            fVar18 = *(float *)(unaff_x20[2] + 4);
            param_3[0x49] = CONCAT44(fVar24 + fVar21 * fVar18,fVar23 + fVar15 * fVar18);
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 9) goto LAB_10ac1d308;
            fVar20 = fVar20 * (fVar19 + fVar14);
            fVar14 = *(float *)(unaff_x20[2] + 8);
            param_3[0x4a] = CONCAT44(fVar24 + fVar22 * fVar14,fVar23 + fVar20 * fVar14);
            if ((ulong)(unaff_x20[3] - unaff_x20[2]) < 0xd) goto LAB_10ac1d308;
            fVar22 = *(float *)(unaff_x20[2] + 0xc);
            param_3[0x4b] = CONCAT44(fVar24 + fVar20 * fVar22,fVar23 + fVar21 * fVar22);
            fVar20 = (float)*(undefined8 *)((long)register0x00000008 + -0x1e0);
            fVar21 = (float)unaff_d10 / fVar20;
            param_2 = CONCAT44(fVar21,fVar21);
            in_register_00005028 = CONCAT44(fVar21,fVar21);
            fVar22 = *(float *)(param_3 + 0x48);
            auVar17 = NEON_fmov(0xbf800000,4);
            *(float *)(param_3 + 0x48) = (fVar22 + fVar22) / fVar20 + auVar17._0_4_;
            *(float *)((long)param_3 + 0x244) =
                 fVar21 - (*(float *)((long)param_3 + 0x244) + *(float *)((long)param_3 + 0x244)) /
                          fVar20;
            *(float *)(param_3 + 0x49) =
                 (*(float *)(param_3 + 0x49) + *(float *)(param_3 + 0x49)) / fVar20 + auVar17._4_4_;
            *(float *)((long)param_3 + 0x24c) =
                 fVar21 - (*(float *)((long)param_3 + 0x24c) + *(float *)((long)param_3 + 0x24c)) /
                          fVar20;
            *(float *)(param_3 + 0x4a) =
                 (*(float *)(param_3 + 0x4a) + *(float *)(param_3 + 0x4a)) / fVar20 + auVar17._8_4_;
            *(float *)((long)param_3 + 0x254) =
                 fVar21 - (*(float *)((long)param_3 + 0x254) + *(float *)((long)param_3 + 0x254)) /
                          fVar20;
            *(float *)(param_3 + 0x4b) =
                 (*(float *)(param_3 + 0x4b) + *(float *)(param_3 + 0x4b)) / fVar20 + auVar17._12_4_
            ;
            *(float *)((long)param_3 + 0x25c) =
                 fVar21 - (*(float *)((long)param_3 + 0x25c) + *(float *)((long)param_3 + 0x25c)) /
                          fVar20;
            *(undefined4 *)((long)param_3 + -0x214) = 2;
            if (param_3[0x51] != 0) goto LAB_10ac1cfd4;
            FUN_10ad4bd78();
            unaff_x23 = param_3 + -0x3f;
            lVar7 = *unaff_x23;
            FUN_10a2421c8();
            plVar3 = *(long **)(lVar7 + 0x228);
            puVar8 = (undefined8 *)param_3[10];
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar8;
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x2100000000;
            *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0x400000001;
            *(undefined8 *)((long)register0x00000008 + -0xdc) = 0x2100000000;
            *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x400000001;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0x53,plVar3);
            uVar5 = 0x24;
            if ((int)unaff_x19 < 3000) {
              uVar5 = 2;
            }
            lVar7 = *unaff_x23;
            FUN_10a2421c8();
            plVar3 = *(long **)(lVar7 + 0x228);
            puVar8 = (undefined8 *)param_3[10];
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar8;
            *(undefined4 *)((long)register0x00000008 + -0xe4) = 1;
            *(undefined4 *)((long)register0x00000008 + -0xe0) = uVar5;
            *(undefined8 *)((long)register0x00000008 + -0xdc) = 0;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0x55,plVar3);
            if (2999 < (int)unaff_x19) {
              lVar7 = param_3[-0x3f];
              FUN_10a2421c8();
              plVar3 = *(long **)(lVar7 + 0x228);
              puVar8 = (undefined8 *)param_3[10];
              *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xec) = *puVar8;
              *(undefined8 *)((long)register0x00000008 + -0xdc) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xe4) = 0x2500000001;
              *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
              *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
              *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
              *(undefined1 *)((long)register0x00000008 + -200) = 0;
              (**(code **)(*plVar3 + 0x20))(plVar3,(undefined1 *)((long)register0x00000008 + -0xf0))
              ;
              FUN_10a099d88(param_3 + 0x57,plVar3);
              *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
              FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x140),
                            (undefined1 *)((long)register0x00000008 + -400),
                            (undefined1 *)((long)register0x00000008 + -0xf0));
              *(long *)((long)register0x00000008 + -400) = param_3[-0x3f];
              FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                            (undefined1 *)((long)register0x00000008 + -400),
                            (undefined1 *)((long)register0x00000008 + -0x140));
              func_0x00010a015bec(param_3 + 0x26,(undefined1 *)((long)register0x00000008 + -0xf0));
              FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x140),param_3 + 0x57);
              func_0x00010a015cec((undefined1 *)((long)register0x00000008 + -0xf0));
              func_0x00010a061678((undefined1 *)((long)register0x00000008 + -0x140));
            }
            plVar3 = *(long **)(param_3[0x1e] + 0x268);
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)0x0;
LAB_10ac1d01c:
              unaff_x21 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar3 + 0xb0))();
              unaff_x21 = *(long **)(param_3[0x1e] + 0x268);
              if (unaff_x21 == (long *)0x0) goto LAB_10ac1d01c;
              (**(code **)(*unaff_x21 + 0xb8))();
            }
            FUN_10a1da3a4(plVar4,plVar3,unaff_x21,0,0,4,0,0);
            unaff_x24 = param_3 + -0x3f;
            lVar7 = *unaff_x24;
            FUN_10a2421c8();
            plVar4 = *(long **)(lVar7 + 0x228);
            *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
            *(int *)((long)register0x00000008 + -0xec) = (int)plVar3;
            *(undefined8 *)((long)register0x00000008 + -0xdc) =
                 *(undefined8 *)((long)register0x00000008 + -0x1d8);
            *(undefined8 *)((long)register0x00000008 + -0xe4) =
                 *(undefined8 *)((long)register0x00000008 + -0x1e0);
            *(int *)((long)register0x00000008 + -0xe8) = (int)unaff_x21;
            *(undefined4 *)((long)register0x00000008 + -0xd4) = 1;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined1 *)((long)register0x00000008 + -200) = 0;
            (**(code **)(*plVar4 + 0x20))(plVar4,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a099d88(param_3 + 0x51,plVar4);
            *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1a0),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0xf0));
            *(long *)((long)register0x00000008 + -0x140) = *unaff_x24;
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0xf0),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0x1a0));
            func_0x00010a015bec(param_3 + 0x20,(undefined1 *)((long)register0x00000008 + -0xf0));
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1a0),param_3 + 0x51);
            *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1b0),
                          (undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x140));
            *(long *)((long)register0x00000008 + -400) = param_3[-0x3f];
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x1b0));
            func_0x00010a015bec(param_3 + 0x22,(undefined1 *)((long)register0x00000008 + -0x140));
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1b0),param_3 + 0x53);
            *(undefined8 *)((long)register0x00000008 + -400) = 0;
            FUN_10a063b58((undefined1 *)((long)register0x00000008 + -0x1c0),
                          (undefined1 *)((long)register0x00000008 + -0x1c8),
                          (undefined1 *)((long)register0x00000008 + -400));
            *(long *)((long)register0x00000008 + -0x1c8) = param_3[-0x3f];
            FUN_10a8d1380((undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x1c8),
                          (undefined1 *)((long)register0x00000008 + -0x1c0));
            unaff_x20 = (long *)((long)register0x00000008 + -400);
            func_0x00010a015bec(param_3 + 0x24,(undefined1 *)((long)register0x00000008 + -400));
            plVar3 = param_3 + 0x55;
            FUN_10a1db4cc(*(undefined8 *)((long)register0x00000008 + -0x1c0));
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x180));
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x178))
                      ((undefined1 *)((long)register0x00000008 + -0x178));
            plVar4 = *(long **)((long)register0x00000008 + -0x188);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
              }
            }
            plVar4 = *(long **)((long)register0x00000008 + -0x1b8);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
              }
            }
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x130));
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0x128))
                      ((undefined1 *)((long)register0x00000008 + -0x128));
            plVar4 = *(long **)((long)register0x00000008 + -0x138);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
              }
            }
            plVar4 = *(long **)((long)register0x00000008 + -0x1a8);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
              }
            }
            FUN_10a044790((undefined1 *)((long)register0x00000008 + -0xe0));
            unaff_x19 = (long *)((long)register0x00000008 + -0xd8);
            (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd8))();
            plVar4 = *(long **)((long)register0x00000008 + -0xe8);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar4;
              }
            }
            plVar4 = *(long **)((long)register0x00000008 + -0x198);
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 1;
              do {
                lVar7 = *plVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = lVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar7 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                unaff_x19 = plVar4;
              }
            }
            goto LAB_10ac1cfd4;
          }
        }
        else {
          do {
            if (((int)*unaff_x20 == 0) && (*(int *)((long)unaff_x20 + 4) == (int)param_3[0x47]))
            goto LAB_10ac1cb98;
            unaff_x20 = unaff_x20 + 0x44;
          } while (unaff_x20 != plVar3);
        }
      }
      *(undefined1 *)((long)param_3 + 0x284) = 0;
      (**(code **)(**(long **)(param_3[0x1e] + 0x268) + 0x90))
                ((undefined1 *)((long)register0x00000008 + -0xf0));
      plVar3 = (long *)((long)register0x00000008 + -0xf0);
      (**(code **)(*plVar4 + 0x98))();
      unaff_x19 = plVar4;
    }
LAB_10ac1cfd4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x98)) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a015cec((undefined1 *)((long)register0x00000008 + -0xf0));
    func_0x00010a061678((undefined1 *)((long)register0x00000008 + -0x140));
    unaff_x30 = FUN_10ac1d3a0;
    param_3 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x200);
    param_4 = plVar3;
  } while( true );
}



/* Entry: 10ac1d3a8; end: 10ac1d4b3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1dc64) */
/* WARNING: Removing unreachable block (ram,0x00010ac1de2c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac1d3a8(float param_1,undefined8 *param_2,uint *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  uint uVar19;
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
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 in_stack_fffffffffffffd78;
  uint uStack_270;
  int iStack_26c;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  undefined8 auStack_220 [2];
  uint uStack_210;
  int iStack_20c;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1c8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [4];
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_48;
  undefined *puStack_40;
  
  puStack_48 = &UNK_10f69da03;
  puStack_40 = (undefined *)0x14;
  if ((*param_3 & 7) == 5) {
    FUN_10a0dc020(&puStack_48,
                  (long)(int)((param_3[2] + param_3[2] * (*param_3 >> 3 & 0x1ff)) * param_3[3]));
    if (puStack_48 != puStack_40) {
      puVar16 = puStack_48;
      pfVar14 = *(float **)(param_3 + 4);
      do {
        uVar19 = (uint)(long)(double)(long)(param_1 * *pfVar14 + 127.0);
        uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar19) {
          uVar19 = 0xff;
        }
        puVar12 = puVar16 + 1;
        *puVar16 = (char)uVar19;
        puVar16 = puVar12;
        pfVar14 = pfVar14 + 1;
      } while (puVar12 != puStack_40);
    }
    (**(code **)(*(long *)*param_2 + 0x98))((long *)*param_2,puStack_48,0,0);
    if (puStack_48 != (undefined *)0x0) {
      puStack_40 = puStack_48;
      __ZdlPv();
    }
    return;
  }
  ppuVar9 = &puStack_48;
  FUN_10a0edfc4();
  if (puStack_48 != (undefined *)0x0) {
    puStack_40 = puStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  ppuVar10 = ppuVar9;
  FUN_10ac1ca00();
  if (param_3 == (uint *)0x0) {
    return;
  }
  if ((int)ppuVar10 == 0) {
    return;
  }
  if (ppuVar9[0x6f] == (undefined *)0x0) {
    return;
  }
  if (ppuVar9[0xa2] == (undefined *)0x0) {
    return;
  }
  if ((*(byte *)((long)ppuVar9 + 0x50d) & 1) != 0) {
    return;
  }
  if (*(char *)((long)ppuVar9 + 0x50c) != '\x01') {
    return;
  }
  ppuVar10 = ppuVar9 + 0x6f;
  plVar11 = *(long **)(ppuVar9[0x6f] + 0x268);
  fVar28 = 0.0;
  if (plVar11 == (long *)0x0) {
    fVar29 = 0.0;
  }
  else {
    (**(code **)(*plVar11 + 0xb0))();
    fVar29 = (float)((ulong)plVar11 & 0xffffffff);
    plVar11 = *(long **)(*ppuVar10 + 0x268);
    fVar28 = 0.0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))();
      fVar28 = (float)((ulong)plVar11 & 0xffffffff);
    }
  }
  lVar13 = 0;
  fVar20 = *(float *)(ppuVar9 + 0x99);
  fVar21 = *(float *)(ppuVar9 + 0x9a);
  fVar22 = *(float *)((long)ppuVar9 + 0x4cc);
  fVar23 = *(float *)((long)ppuVar9 + 0x4d4);
  fVar24 = *(float *)(ppuVar9 + 0x9b);
  fVar25 = *(float *)((long)ppuVar9 + 0x4dc);
  fVar26 = *(float *)(ppuVar9 + 0x9c);
  fVar27 = *(float *)((long)ppuVar9 + 0x4e4);
  do {
    *(float *)((long)ppuVar9 + lVar13 + 0x4cc) =
         (fVar29 / fVar28) * *(float *)((long)ppuVar9 + lVar13 + 0x4cc);
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x20);
  fVar33 = fVar20 - fVar21;
  fVar34 = fVar22 - fVar23;
  fVar27 = fVar22 + fVar23 + fVar25 + fVar27;
  fVar30 = 2.0 / SQRT(fVar33 * fVar33 + fVar34 * fVar34);
  fVar31 = (fVar20 + fVar21 + fVar24 + fVar26) * -0.25;
  fVar32 = fVar27 * -0.25;
  fVar20 = *(float *)((long)ppuVar9 + 0x4c4);
  ___sincosf_stret();
  fVar22 = 1.0 - fVar27;
  fVar23 = fVar22 * 0.0;
  fVar24 = fVar27 + fVar23 * 0.0;
  fVar25 = fVar20 + fVar23 * 0.0;
  fVar35 = fVar20 * -0.0 + fVar23;
  fVar26 = fVar23 * 0.0 - fVar20;
  fVar23 = fVar20 * 0.0 + fVar23;
  fVar21 = fVar20 * 0.0 + fVar22 * 0.0;
  fVar34 = fVar20 * -0.0 + fVar22 * 0.0;
  fVar20 = fVar24 * 0.0;
  fVar36 = fVar25 * 0.0;
  fVar33 = fVar35 * 0.0;
  fVar38 = fVar33 + fVar24 + fVar36;
  fVar33 = fVar33 + fVar25 + fVar20;
  fVar35 = fVar35 + fVar20 + fVar36;
  fVar37 = fVar26 * 0.0;
  fVar25 = fVar23 * 0.0;
  fVar36 = fVar25 + fVar26 + fVar20;
  fVar25 = fVar25 + fVar24 + fVar37;
  fVar23 = fVar23 + fVar37 + fVar20;
  fVar24 = fVar21 * 0.0;
  fVar37 = fVar34 * 0.0;
  fVar26 = (fVar27 + fVar22) * 0.0;
  fVar20 = fVar26 + fVar21 + fVar37;
  fVar26 = fVar26 + fVar34 + fVar24;
  fVar21 = fVar27 + fVar22 + fVar24 + fVar37;
  fVar22 = fVar38 + fVar36 * 0.0 + fVar20 * 0.0;
  fVar37 = fVar33 + fVar25 * 0.0 + fVar26 * 0.0;
  fVar24 = fVar35 + fVar23 * 0.0 + fVar21 * 0.0;
  fVar39 = fVar36 + fVar38 * 0.0 + fVar20 * 0.0;
  fVar40 = fVar25 + fVar33 * 0.0 + fVar26 * 0.0;
  fVar34 = fVar23 + fVar35 * 0.0 + fVar21 * 0.0;
  fVar20 = fVar20 + fVar32 * fVar36 + fVar31 * fVar38;
  fVar26 = fVar26 + fVar32 * fVar25 + fVar31 * fVar33;
  fVar21 = fVar21 + fVar32 * fVar23 + fVar31 * fVar35;
  fVar27 = fVar30 * 0.0;
  fVar23 = fVar27 * fVar37;
  fVar25 = fVar23 + fVar22 * fVar30 + fVar24 * 0.0;
  fVar33 = fVar30 * fVar37 + fVar22 * fVar27 + fVar24 * 0.0;
  fVar24 = fVar24 + fVar23 + fVar22 * fVar27;
  fVar22 = fVar27 * fVar40;
  fVar23 = fVar22 + fVar39 * fVar30 + fVar34 * 0.0;
  fVar31 = fVar30 * fVar40 + fVar39 * fVar27 + fVar34 * 0.0;
  fVar34 = fVar34 + fVar22 + fVar39 * fVar27;
  fVar32 = fVar27 * fVar26;
  fVar35 = fVar32 + fVar20 * fVar30 + fVar21 * 0.0;
  fVar22 = fVar30 * fVar26 + fVar20 * fVar27 + fVar21 * 0.0;
  fVar21 = fVar21 + fVar32 + fVar20 * fVar27;
  fVar28 = 1.0 / (fVar29 / fVar28);
  fVar29 = fVar28 * 0.0;
  fVar20 = fVar23 * 0.0;
  fVar27 = fVar31 * 0.0;
  fVar26 = fVar34 * 0.0;
  *(float *)(ppuVar9 + 0x9d) = fVar25 + fVar20 + fVar35 * 0.0;
  *(float *)((long)ppuVar9 + 0x4ec) = fVar33 + fVar27 + fVar22 * 0.0;
  *(float *)(ppuVar9 + 0x9e) = fVar24 + fVar26 + fVar21 * 0.0;
  *(float *)((long)ppuVar9 + 0x4f4) = fVar28 * fVar23 + fVar29 * fVar25 + fVar29 * fVar35;
  *(float *)(ppuVar9 + 0x9f) = fVar28 * fVar31 + fVar29 * fVar33 + fVar29 * fVar22;
  *(float *)((long)ppuVar9 + 0x4fc) = fVar28 * fVar34 + fVar29 * fVar24 + fVar29 * fVar21;
  *(float *)(ppuVar9 + 0xa0) = fVar35 + fVar20 + fVar25 * 0.0;
  *(float *)((long)ppuVar9 + 0x504) = fVar22 + fVar27 + fVar33 * 0.0;
  *(float *)(ppuVar9 + 0xa1) = fVar21 + fVar26 + fVar24 * 0.0;
  uStack_270 = uStack_270 & 0xffffff00;
  puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffffffffff00);
  FUN_10ab1306c(ppuVar9 + 0x5f,param_3,&UNK_10e4ac8a8,ppuVar10,ppuVar9 + 0xa4,ppuVar9 + 0x99,
                ppuVar9 + 0x9d,6,&uStack_270,
                CONCAT71((uint7)(uint3)((uint)in_stack_fffffffffffffd78 >> 8),1));
  (**(code **)(*(long *)param_3 + 0x90))(param_3,0,3,3);
  uVar15 = (ulong)(byte)ppuVar9[0x12][0x29];
  if (5 < uVar15) goto LAB_10ac1e0fc;
  FUN_10aba1500(&uStack_270,*(undefined8 *)(ppuVar9[0x12] + uVar15 * 8 + 0x30),ppuVar9[0x73],0);
  func_0x00010a22b8d4(ppuVar9 + 0xb3,&uStack_270);
  plVar11 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar1 = plStack_268 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  auStack_1b0._0_4_ = 0x42ff0000;
  puStack_170 = auStack_1a8;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  stack0xfffffffffffffe54 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  puVar12 = ppuVar9[0xb3];
  puVar16 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    puVar16 = puVar12 + 0x10;
  }
  puStack_168 = &uStack_160;
  FUN_10a0f3910(&uStack_270,puVar16,0);
  uStack_140 = 0;
  uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,0x1010000);
  uStack_120 = CONCAT44(uStack_120._4_4_,0x2010000);
  uStack_110 = 0;
  uStack_148 = (undefined **)&uStack_270;
  ppuStack_118 = (undefined **)auStack_1b0;
  func_0x000109ac9fc8(&uStack_150,&uStack_120,3,0);
  if (puStack_238 != (undefined *)0x0) {
    piVar18 = (int *)(puStack_238 + 0x14);
    do {
      iVar4 = *piVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar6) {
        *piVar18 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_270);
    }
  }
  puStack_238 = (undefined *)0x0;
  puStack_258 = (undefined *)0x0;
  puStack_260 = (undefined *)0x0;
  puStack_248 = (undefined *)0x0;
  puStack_250 = (undefined *)0x0;
  if (0 < iStack_26c) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_230 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_26c);
  }
  if (puStack_228 != auStack_220 && puStack_228 != (undefined8 *)0x0) {
    _free(puStack_228[-1]);
  }
  (**(code **)(*(long *)ppuVar9[0x5d] + 0x38))(&uStack_270,ppuVar9[0x5d],auStack_1b0,ppuVar9 + 0x79)
  ;
  ppuVar2 = ppuVar9 + 0x80;
  if (ppuVar2 != (undefined **)&uStack_270) {
    if (puStack_238 != (undefined *)0x0) {
      piVar18 = (int *)(puStack_238 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = *piVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (ppuVar9[0x87] != (undefined *)0x0) {
      piVar18 = (int *)(ppuVar9[0x87] + 0x14);
      do {
        iVar4 = *piVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(ppuVar2);
      }
    }
    ppuVar9[0x87] = (undefined *)0x0;
    ppuVar9[0x83] = (undefined *)0x0;
    ppuVar9[0x82] = (undefined *)0x0;
    ppuVar9[0x85] = (undefined *)0x0;
    ppuVar9[0x84] = (undefined *)0x0;
    if (*(int *)((long)ppuVar9 + 0x404) < 1) {
      *(uint *)ppuVar2 = uStack_270;
LAB_10ac1da68:
      if (2 < iStack_26c) goto LAB_10ac1da9c;
      *(int *)((long)ppuVar9 + 0x404) = iStack_26c;
      ppuVar9[0x81] = (undefined *)plStack_268;
      puVar17 = (undefined8 *)ppuVar9[0x89];
      *puVar17 = *puStack_228;
      puVar17[1] = puStack_228[1];
    }
    else {
      lVar13 = 0;
      puVar16 = ppuVar9[0x88];
      do {
        *(undefined4 *)(puVar16 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)((long)ppuVar9 + 0x404));
      *(uint *)ppuVar2 = uStack_270;
      if (*(int *)((long)ppuVar9 + 0x404) < 3) goto LAB_10ac1da68;
LAB_10ac1da9c:
      func_0x000109a84868(ppuVar2,&uStack_270);
    }
    puVar7 = puStack_248;
    puVar12 = puStack_250;
    puVar16 = puStack_260;
    ppuVar9[0x83] = puStack_258;
    ppuVar9[0x82] = puVar16;
    ppuVar9[0x85] = puVar7;
    ppuVar9[0x84] = puVar12;
    ppuVar9[0x87] = puStack_238;
    ppuVar9[0x86] = puStack_240;
  }
  ppuVar3 = ppuVar9 + 0x8c;
  if (ppuVar3 != (undefined **)&uStack_210) {
    if (puStack_1d8 != (undefined *)0x0) {
      piVar18 = (int *)(puStack_1d8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = *piVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (ppuVar9[0x93] != (undefined *)0x0) {
      piVar18 = (int *)(ppuVar9[0x93] + 0x14);
      do {
        iVar4 = *piVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar6) {
          *piVar18 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(ppuVar3);
      }
    }
    ppuVar9[0x93] = (undefined *)0x0;
    ppuVar9[0x8f] = (undefined *)0x0;
    ppuVar9[0x8e] = (undefined *)0x0;
    ppuVar9[0x91] = (undefined *)0x0;
    ppuVar9[0x90] = (undefined *)0x0;
    if (*(int *)((long)ppuVar9 + 0x464) < 1) {
      *(uint *)ppuVar3 = uStack_210;
LAB_10ac1db68:
      if (2 < iStack_20c) goto LAB_10ac1db9c;
      *(int *)((long)ppuVar9 + 0x464) = iStack_20c;
      ppuVar9[0x8d] = puStack_208;
      puVar17 = (undefined8 *)ppuVar9[0x95];
      *puVar17 = *puStack_1c8;
      puVar17[1] = puStack_1c8[1];
    }
    else {
      lVar13 = 0;
      puVar16 = ppuVar9[0x94];
      do {
        *(undefined4 *)(puVar16 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)((long)ppuVar9 + 0x464));
      *(uint *)ppuVar3 = uStack_210;
      if (*(int *)((long)ppuVar9 + 0x464) < 3) goto LAB_10ac1db68;
LAB_10ac1db9c:
      func_0x000109a84868(ppuVar3,&uStack_210);
    }
    ppuVar9[0x8f] = puStack_1f8;
    ppuVar9[0x8e] = puStack_200;
    ppuVar9[0x91] = puStack_1e8;
    ppuVar9[0x90] = puStack_1f0;
    ppuVar9[0x93] = puStack_1d8;
    ppuVar9[0x92] = puStack_1e0;
  }
  uVar15 = (ulong)(byte)ppuVar9[0x12][0x29];
  if (5 < uVar15) goto LAB_10ac1e0fc;
  plVar11 = *(long **)(ppuVar9[0x12] + uVar15 * 8 + 0x30);
  (**(code **)(*plVar11 + 0x48))(plVar11,ppuVar9[0x6f],ppuVar9[0x71]);
  uVar19 = *(uint *)ppuVar2 >> 3 & 0x1ff;
  __ZNSt3__19to_stringEi(&uStack_120,uVar19 + 1);
  puVar17 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar17,0,&UNK_10f69c11f,0x20);
  uStack_148 = (undefined **)puVar17[1];
  uStack_150 = (undefined8 *)*puVar17;
  uStack_140 = puVar17[2];
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = 0;
  ppuStack_c8 = (undefined **)(long)uStack_140._7_1_;
  if ((long)ppuStack_c8 < 0) {
    puStack_d0 = uStack_150;
    ppuStack_c8 = uStack_148;
    if (1 < uVar19) {
      __ZdlPv();
      goto LAB_10ac1dc5c;
    }
  }
  else {
    puStack_d0 = &uStack_150;
    if (1 < uVar19) {
LAB_10ac1dc5c:
      uVar19 = *(uint *)ppuVar2;
      if ((uVar19 & 0xff8) == 0x10) {
        uStack_140 = 0;
        uStack_150 = (undefined8 *)CONCAT44(uStack_150._4_4_,0x1010000);
        uStack_120 = CONCAT44(uStack_120._4_4_,0x2010000);
        uStack_110 = 0;
        uStack_148 = ppuVar2;
        ppuStack_118 = ppuVar2;
        func_0x000109ac9fc8(&uStack_150,&uStack_120,0,0);
        uVar19 = *(uint *)ppuVar2;
      }
      uStack_e0 = 0;
      plStack_d8 = (long *)0x0;
      uStack_e8 = 0x3f800000;
      if ((uVar19 & 7) == 5) {
        plVar11 = (long *)ppuVar9[0xa8];
        if (plVar11 == (long *)0x0) {
          FUN_10ac1d3a8(0x3f000000,ppuVar9 + 0xa4,ppuVar2);
          func_0x00010a04a704(&uStack_e0,ppuVar9 + 0x73);
          uStack_e8 = 0x3f00000040000000;
        }
        else {
          (**(code **)(*plVar11 + 0x98))(plVar11,ppuVar9[0x82],0,0);
          func_0x00010a04a704(&uStack_e0,ppuVar9 + 0x77);
          uStack_e8 = 0x3b808081;
        }
      }
      else {
        (**(code **)(*(long *)ppuVar9[0xa4] + 0x98))(ppuVar9[0xa4],ppuVar9[0x82],0,0);
        func_0x00010a04a704(&uStack_e0,ppuVar9 + 0x73);
      }
      plVar11 = (long *)ppuVar9[0xa6];
      (**(code **)(*plVar11 + 0x50))();
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      if (ppuVar9[0x8e] == (undefined *)0x0) goto LAB_10ac1de7c;
      uVar15 = (ulong)*(uint *)((long)ppuVar9 + 0x464);
      if ((int)*(uint *)((long)ppuVar9 + 0x464) < 3) {
        lVar13 = (long)*(int *)((long)ppuVar9 + 0x46c) * (long)*(int *)(ppuVar9 + 0x8d);
      }
      else {
        lVar13 = 1;
        piVar18 = (int *)ppuVar9[0x94];
        do {
          lVar13 = lVar13 * *piVar18;
          uVar15 = uVar15 - 1;
          piVar18 = piVar18 + 1;
        } while (uVar15 != 0);
      }
      if (lVar13 == 0) goto LAB_10ac1de7c;
      iVar4 = (*(uint *)ppuVar3 >> 3 & 0x1ff) + 1;
      __ZNSt3__19to_stringEi(&uStack_120,iVar4);
      puVar17 = &uStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar17,0,&UNK_10f69c140,0x25);
      uStack_148 = (undefined **)puVar17[1];
      uStack_150 = (undefined8 *)*puVar17;
      uStack_140 = puVar17[2];
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = 0;
      ppuStack_c8 = (undefined **)(long)uStack_140._7_1_;
      if ((long)ppuStack_c8 < 0) {
        puStack_d0 = uStack_150;
        ppuStack_c8 = uStack_148;
        if (iVar4 == 2) {
          __ZdlPv();
          goto LAB_10ac1de24;
        }
      }
      else {
        puStack_d0 = &uStack_150;
        if (iVar4 == 2) {
LAB_10ac1de24:
          if ((int)plVar11 == 0x24) {
            (**(code **)(*(long *)ppuVar9[0xa6] + 0x98))(ppuVar9[0xa6],ppuVar9[0x8e],0,0);
          }
          else {
            FUN_10ac1d3a8(0x437f0000,ppuVar9 + 0xa6,ppuVar3);
          }
          func_0x00010a04a704(&uStack_f8,ppuVar9 + 0x75);
LAB_10ac1de7c:
          fVar28 = *(float *)(ppuVar9 + 0x9d);
          fVar29 = *(float *)(ppuVar9 + 0x9f);
          fVar20 = *(float *)(ppuVar9 + 0xa1);
          fVar21 = *(float *)((long)ppuVar9 + 0x504);
          fVar27 = *(float *)((long)ppuVar9 + 0x4fc);
          fVar22 = -(fVar21 * fVar27) + fVar20 * fVar29;
          fVar23 = *(float *)((long)ppuVar9 + 0x4f4);
          fVar24 = *(float *)((long)ppuVar9 + 0x4ec);
          fVar25 = *(float *)(ppuVar9 + 0x9e);
          fVar26 = -(fVar21 * fVar25) + fVar20 * fVar24;
          fVar33 = *(float *)(ppuVar9 + 0xa0);
          fVar34 = -(fVar29 * fVar25) + fVar27 * fVar24;
          fStack_130 = 1.0 / (-(fVar23 * fVar26) + fVar22 * fVar28 + fVar34 * fVar33);
          fVar22 = fVar22 * fStack_130;
          fVar30 = -((-(fVar33 * fVar27) + fVar20 * fVar23) * fStack_130);
          fStack_138 = (-(fVar33 * fVar29) + fVar21 * fVar23) * fStack_130;
          fVar26 = -(fVar26 * fStack_130);
          fVar20 = (-(fVar33 * fVar25) + fVar20 * fVar28) * fStack_130;
          fStack_134 = -((-(fVar33 * fVar24) + fVar21 * fVar28) * fStack_130);
          fVar34 = fVar34 * fStack_130;
          fVar21 = -((-(fVar23 * fVar25) + fVar27 * fVar28) * fStack_130);
          fStack_130 = (-(fVar23 * fVar24) + fVar29 * fVar28) * fStack_130;
          ppuStack_118 = (undefined **)0xbf800000bf800000;
          uStack_120 = 0x3f800000bf800000;
          uStack_108 = 0xbf8000003f800000;
          uStack_110 = 0x3f8000003f800000;
          fVar28 = fVar30 * 0.0;
          fVar27 = fVar20 * 0.0;
          uStack_150 = (undefined8 *)
                       CONCAT44(fVar26 + fVar27 + fStack_134 * 0.0,
                                fVar22 + fVar28 + fStack_138 * 0.0);
          fVar29 = fVar21 * 0.0;
          uStack_148 = (undefined **)
                       CONCAT44((fVar22 * 0.0 - fVar30) + fStack_138 * 0.0,
                                fVar34 + fVar29 + fStack_130 * 0.0);
          uStack_140 = CONCAT44((fVar34 * 0.0 - fVar21) + fStack_130 * 0.0,
                                (fVar26 * 0.0 - fVar20) + fStack_134 * 0.0);
          fStack_138 = fStack_138 + fVar28 + fVar22 * 0.0;
          fStack_134 = fStack_134 + fVar27 + fVar26 * 0.0;
          fStack_130 = fStack_130 + fVar29 + fVar34 * 0.0;
          FUN_10ab13590(ppuVar9 + 0x5f,param_3,&uStack_e0,&uStack_e8,&uStack_f8,(int)plVar11 == 0x24
                        ,ppuVar10,ppuVar9 + 0xa2,&uStack_120,&uStack_150,6);
          plVar11 = plStack_f0;
          if (plStack_f0 != (long *)0x0) {
            plVar1 = plStack_f0 + 1;
            do {
              lVar13 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plVar11 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar13 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          func_0x0001094af130(&uStack_270);
          if (lStack_178 != 0) {
            piVar18 = (int *)(lStack_178 + 0x14);
            do {
              iVar4 = *piVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar6) {
                *piVar18 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(auStack_1b0);
            }
          }
          lStack_178 = 0;
          uStack_198 = 0;
          uStack_194 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_188 = 0;
          uStack_184 = 0;
          uStack_190 = 0;
          uStack_18c = 0;
          if (0 < (int)auStack_1b0._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(puStack_170 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)auStack_1b0._4_4_);
          }
          if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
            _free(puStack_168[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&puStack_d0);
      goto LAB_10ac1e0fc;
    }
  }
  FUN_10a0edfc4(&puStack_d0);
LAB_10ac1e0fc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac1e100);
  (*pcVar8)();
}



/* Entry: 10ac1d4b4; end: 10ac1e1cb;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1dc64) */
/* WARNING: Removing unreachable block (ram,0x00010ac1de2c) */

void FUN_10ac1d4b4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
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
  undefined4 in_stack_fffffffffffffdc8;
  uint uStack_220;
  int iStack_21c;
  long *plStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  uint uStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_178;
  uint uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  
  lVar11 = param_1;
  FUN_10ac1ca00();
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((int)lVar11 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x378) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x510) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x50d) & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x50c) != '\x01') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x378);
  plVar9 = *(long **)(*(long *)(param_1 + 0x378) + 0x268);
  fVar24 = 0.0;
  if (plVar9 == (long *)0x0) {
    fVar25 = 0.0;
  }
  else {
    (**(code **)(*plVar9 + 0xb0))();
    fVar25 = (float)((ulong)plVar9 & 0xffffffff);
    plVar9 = *(long **)(*plVar1 + 0x268);
    fVar24 = 0.0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0xb8))();
      fVar24 = (float)((ulong)plVar9 & 0xffffffff);
    }
  }
  lVar11 = 0;
  fVar16 = *(float *)(param_1 + 0x4c8);
  fVar17 = *(float *)(param_1 + 0x4d0);
  fVar18 = *(float *)(param_1 + 0x4cc);
  fVar19 = *(float *)(param_1 + 0x4d4);
  fVar20 = *(float *)(param_1 + 0x4d8);
  fVar21 = *(float *)(param_1 + 0x4dc);
  fVar22 = *(float *)(param_1 + 0x4e0);
  fVar23 = *(float *)(param_1 + 0x4e4);
  do {
    *(float *)(param_1 + 0x4cc + lVar11) = (fVar25 / fVar24) * *(float *)(param_1 + 0x4cc + lVar11);
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  fVar29 = fVar16 - fVar17;
  fVar30 = fVar18 - fVar19;
  fVar23 = fVar18 + fVar19 + fVar21 + fVar23;
  fVar26 = 2.0 / SQRT(fVar29 * fVar29 + fVar30 * fVar30);
  fVar27 = (fVar16 + fVar17 + fVar20 + fVar22) * -0.25;
  fVar28 = fVar23 * -0.25;
  fVar16 = *(float *)(param_1 + 0x4c4);
  ___sincosf_stret();
  fVar18 = 1.0 - fVar23;
  fVar19 = fVar18 * 0.0;
  fVar20 = fVar23 + fVar19 * 0.0;
  fVar21 = fVar16 + fVar19 * 0.0;
  fVar31 = fVar16 * -0.0 + fVar19;
  fVar22 = fVar19 * 0.0 - fVar16;
  fVar19 = fVar16 * 0.0 + fVar19;
  fVar17 = fVar16 * 0.0 + fVar18 * 0.0;
  fVar30 = fVar16 * -0.0 + fVar18 * 0.0;
  fVar16 = fVar20 * 0.0;
  fVar32 = fVar21 * 0.0;
  fVar29 = fVar31 * 0.0;
  fVar34 = fVar29 + fVar20 + fVar32;
  fVar29 = fVar29 + fVar21 + fVar16;
  fVar31 = fVar31 + fVar16 + fVar32;
  fVar33 = fVar22 * 0.0;
  fVar21 = fVar19 * 0.0;
  fVar32 = fVar21 + fVar22 + fVar16;
  fVar21 = fVar21 + fVar20 + fVar33;
  fVar19 = fVar19 + fVar33 + fVar16;
  fVar20 = fVar17 * 0.0;
  fVar33 = fVar30 * 0.0;
  fVar22 = (fVar23 + fVar18) * 0.0;
  fVar16 = fVar22 + fVar17 + fVar33;
  fVar22 = fVar22 + fVar30 + fVar20;
  fVar17 = fVar23 + fVar18 + fVar20 + fVar33;
  fVar18 = fVar34 + fVar32 * 0.0 + fVar16 * 0.0;
  fVar33 = fVar29 + fVar21 * 0.0 + fVar22 * 0.0;
  fVar20 = fVar31 + fVar19 * 0.0 + fVar17 * 0.0;
  fVar35 = fVar32 + fVar34 * 0.0 + fVar16 * 0.0;
  fVar36 = fVar21 + fVar29 * 0.0 + fVar22 * 0.0;
  fVar30 = fVar19 + fVar31 * 0.0 + fVar17 * 0.0;
  fVar16 = fVar16 + fVar28 * fVar32 + fVar27 * fVar34;
  fVar22 = fVar22 + fVar28 * fVar21 + fVar27 * fVar29;
  fVar17 = fVar17 + fVar28 * fVar19 + fVar27 * fVar31;
  fVar23 = fVar26 * 0.0;
  fVar19 = fVar23 * fVar33;
  fVar21 = fVar19 + fVar18 * fVar26 + fVar20 * 0.0;
  fVar29 = fVar26 * fVar33 + fVar18 * fVar23 + fVar20 * 0.0;
  fVar20 = fVar20 + fVar19 + fVar18 * fVar23;
  fVar18 = fVar23 * fVar36;
  fVar19 = fVar18 + fVar35 * fVar26 + fVar30 * 0.0;
  fVar27 = fVar26 * fVar36 + fVar35 * fVar23 + fVar30 * 0.0;
  fVar30 = fVar30 + fVar18 + fVar35 * fVar23;
  fVar28 = fVar23 * fVar22;
  fVar31 = fVar28 + fVar16 * fVar26 + fVar17 * 0.0;
  fVar18 = fVar26 * fVar22 + fVar16 * fVar23 + fVar17 * 0.0;
  fVar17 = fVar17 + fVar28 + fVar16 * fVar23;
  fVar24 = 1.0 / (fVar25 / fVar24);
  fVar25 = fVar24 * 0.0;
  fVar16 = fVar19 * 0.0;
  fVar23 = fVar27 * 0.0;
  fVar22 = fVar30 * 0.0;
  *(float *)(param_1 + 0x4e8) = fVar21 + fVar16 + fVar31 * 0.0;
  *(float *)(param_1 + 0x4ec) = fVar29 + fVar23 + fVar18 * 0.0;
  *(float *)(param_1 + 0x4f0) = fVar20 + fVar22 + fVar17 * 0.0;
  *(float *)(param_1 + 0x4f4) = fVar24 * fVar19 + fVar25 * fVar21 + fVar25 * fVar31;
  *(float *)(param_1 + 0x4f8) = fVar24 * fVar27 + fVar25 * fVar29 + fVar25 * fVar18;
  *(float *)(param_1 + 0x4fc) = fVar24 * fVar30 + fVar25 * fVar20 + fVar25 * fVar17;
  *(float *)(param_1 + 0x500) = fVar31 + fVar16 + fVar21 * 0.0;
  *(float *)(param_1 + 0x504) = fVar18 + fVar23 + fVar29 * 0.0;
  *(float *)(param_1 + 0x508) = fVar17 + fVar22 + fVar20 * 0.0;
  uStack_220 = uStack_220 & 0xffffff00;
  uStack_210 = uStack_210 & 0xffffffffffffff00;
  FUN_10ab1306c(param_1 + 0x2f8,param_2,&UNK_10e4ac8a8,plVar1,param_1 + 0x520,param_1 + 0x4c8,
                param_1 + 0x4e8,6,&uStack_220,
                CONCAT71((uint7)(uint3)((uint)in_stack_fffffffffffffdc8 >> 8),1));
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  uVar13 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x29);
  if (5 < uVar13) goto LAB_10ac1e0fc;
  FUN_10aba1500(&uStack_220,*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar13 * 8 + 0x30),
                *(undefined8 *)(param_1 + 0x398),0);
  func_0x00010a22b8d4((long *)(param_1 + 0x598),&uStack_220);
  plVar9 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar2 = plStack_218 + 1;
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  lVar12 = *(long *)(param_1 + 0x598);
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = lVar12 + 0x10;
  }
  puStack_118 = &uStack_110;
  FUN_10a0f3910(&uStack_220,lVar11,0);
  uStack_f0 = 0;
  uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,0x1010000);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2010000);
  uStack_c0 = 0;
  uStack_f8 = &uStack_220;
  puStack_c8 = &uStack_160;
  func_0x000109ac9fc8(&uStack_100,&uStack_d0,3,0);
  if (lStack_1e8 != 0) {
    piVar15 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar5 = *piVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar7) {
        *piVar15 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < iStack_21c) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_21c);
  }
  if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x38))
            (&uStack_220,*(long **)(param_1 + 0x2e8),&uStack_160,param_1 + 0x3c8);
  puVar3 = (uint *)(param_1 + 0x400);
  if (puVar3 != &uStack_220) {
    if (lStack_1e8 != 0) {
      piVar15 = (int *)(lStack_1e8 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = *piVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(long *)(param_1 + 0x438) != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0x438) + 0x14);
      do {
        iVar5 = *piVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(puVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    if (*(int *)(param_1 + 0x404) < 1) {
      *puVar3 = uStack_220;
LAB_10ac1da68:
      if (2 < iStack_21c) goto LAB_10ac1da9c;
      *(int *)(param_1 + 0x404) = iStack_21c;
      *(long **)(param_1 + 0x408) = plStack_218;
      puVar14 = *(undefined8 **)(param_1 + 0x448);
      *puVar14 = *puStack_1d8;
      puVar14[1] = puStack_1d8[1];
    }
    else {
      lVar11 = 0;
      lVar12 = *(long *)(param_1 + 0x440);
      do {
        *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x404));
      *puVar3 = uStack_220;
      if (*(int *)(param_1 + 0x404) < 3) goto LAB_10ac1da68;
LAB_10ac1da9c:
      func_0x000109a84868(puVar3,&uStack_220);
    }
    *(undefined8 *)(param_1 + 0x418) = uStack_208;
    *(ulong *)(param_1 + 0x410) = uStack_210;
    *(undefined8 *)(param_1 + 0x428) = uStack_1f8;
    *(undefined8 *)(param_1 + 0x420) = uStack_200;
    *(long *)(param_1 + 0x438) = lStack_1e8;
    *(undefined8 *)(param_1 + 0x430) = uStack_1f0;
  }
  puVar4 = (uint *)(param_1 + 0x460);
  if (puVar4 != &uStack_1c0) {
    if (lStack_188 != 0) {
      piVar15 = (int *)(lStack_188 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = *piVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(long *)(param_1 + 0x498) != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0x498) + 0x14);
      do {
        iVar5 = *piVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000109a848d4(puVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (*(int *)(param_1 + 0x464) < 1) {
      *puVar4 = uStack_1c0;
LAB_10ac1db68:
      if (2 < iStack_1bc) goto LAB_10ac1db9c;
      *(int *)(param_1 + 0x464) = iStack_1bc;
      *(undefined8 *)(param_1 + 0x468) = uStack_1b8;
      puVar14 = *(undefined8 **)(param_1 + 0x4a8);
      *puVar14 = *puStack_178;
      puVar14[1] = puStack_178[1];
    }
    else {
      lVar11 = 0;
      lVar12 = *(long *)(param_1 + 0x4a0);
      do {
        *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x464));
      *puVar4 = uStack_1c0;
      if (*(int *)(param_1 + 0x464) < 3) goto LAB_10ac1db68;
LAB_10ac1db9c:
      func_0x000109a84868(puVar4,&uStack_1c0);
    }
    *(undefined8 *)(param_1 + 0x478) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x470) = uStack_1b0;
    *(undefined8 *)(param_1 + 0x488) = uStack_198;
    *(undefined8 *)(param_1 + 0x480) = uStack_1a0;
    *(long *)(param_1 + 0x498) = lStack_188;
    *(undefined8 *)(param_1 + 0x490) = uStack_190;
  }
  uVar13 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x29);
  if (5 < uVar13) goto LAB_10ac1e0fc;
  plVar9 = *(long **)(*(long *)(param_1 + 0x90) + uVar13 * 8 + 0x30);
  (**(code **)(*plVar9 + 0x48))
            (plVar9,*(undefined8 *)(param_1 + 0x378),*(undefined8 *)(param_1 + 0x388));
  uVar10 = *puVar3 >> 3 & 0x1ff;
  __ZNSt3__19to_stringEi(&uStack_d0,uVar10 + 1);
  puVar14 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar14,0,&UNK_10f69c11f,0x20);
  uStack_f8 = (uint *)puVar14[1];
  uStack_100 = (undefined8 *)*puVar14;
  uStack_f0 = puVar14[2];
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  puStack_78 = (uint *)(long)uStack_f0._7_1_;
  if ((long)puStack_78 < 0) {
    puStack_80 = uStack_100;
    puStack_78 = uStack_f8;
    if (1 < uVar10) {
      __ZdlPv();
      goto LAB_10ac1dc5c;
    }
  }
  else {
    puStack_80 = &uStack_100;
    if (1 < uVar10) {
LAB_10ac1dc5c:
      uVar10 = *puVar3;
      if ((uVar10 & 0xff8) == 0x10) {
        uStack_f0 = 0;
        uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,0x1010000);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2010000);
        uStack_c0 = 0;
        uStack_f8 = puVar3;
        puStack_c8 = puVar3;
        func_0x000109ac9fc8(&uStack_100,&uStack_d0,0,0);
        uVar10 = *puVar3;
      }
      uStack_90 = 0;
      plStack_88 = (long *)0x0;
      uStack_98 = 0x3f800000;
      if ((uVar10 & 7) == 5) {
        plVar9 = *(long **)(param_1 + 0x540);
        if (plVar9 == (long *)0x0) {
          FUN_10ac1d3a8(0x3f000000,param_1 + 0x520,puVar3);
          func_0x00010a04a704(&uStack_90,param_1 + 0x398);
          uStack_98 = 0x3f00000040000000;
        }
        else {
          (**(code **)(*plVar9 + 0x98))(plVar9,*(undefined8 *)(param_1 + 0x410),0,0);
          func_0x00010a04a704(&uStack_90,param_1 + 0x3b8);
          uStack_98 = 0x3b808081;
        }
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x520) + 0x98))
                  (*(long **)(param_1 + 0x520),*(undefined8 *)(param_1 + 0x410),0,0);
        func_0x00010a04a704(&uStack_90,param_1 + 0x398);
      }
      plVar9 = *(long **)(param_1 + 0x530);
      (**(code **)(*plVar9 + 0x50))();
      uStack_a8 = 0;
      plStack_a0 = (long *)0x0;
      if (*(long *)(param_1 + 0x470) == 0) goto LAB_10ac1de7c;
      uVar13 = (ulong)*(uint *)(param_1 + 0x464);
      if ((int)*(uint *)(param_1 + 0x464) < 3) {
        lVar11 = (long)*(int *)(param_1 + 0x46c) * (long)*(int *)(param_1 + 0x468);
      }
      else {
        lVar11 = 1;
        piVar15 = *(int **)(param_1 + 0x4a0);
        do {
          lVar11 = lVar11 * *piVar15;
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 1;
        } while (uVar13 != 0);
      }
      if (lVar11 == 0) goto LAB_10ac1de7c;
      iVar5 = (*puVar4 >> 3 & 0x1ff) + 1;
      __ZNSt3__19to_stringEi(&uStack_d0,iVar5);
      puVar14 = &uStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar14,0,&UNK_10f69c140,0x25);
      uStack_f8 = (uint *)puVar14[1];
      uStack_100 = (undefined8 *)*puVar14;
      uStack_f0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puStack_78 = (uint *)(long)uStack_f0._7_1_;
      if ((long)puStack_78 < 0) {
        puStack_80 = uStack_100;
        puStack_78 = uStack_f8;
        if (iVar5 == 2) {
          __ZdlPv();
          goto LAB_10ac1de24;
        }
      }
      else {
        puStack_80 = &uStack_100;
        if (iVar5 == 2) {
LAB_10ac1de24:
          if ((int)plVar9 == 0x24) {
            (**(code **)(**(long **)(param_1 + 0x530) + 0x98))
                      (*(long **)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x470),0,0);
          }
          else {
            FUN_10ac1d3a8(0x437f0000,param_1 + 0x530,puVar4);
          }
          func_0x00010a04a704(&uStack_a8,param_1 + 0x3a8);
LAB_10ac1de7c:
          fVar24 = *(float *)(param_1 + 0x4e8);
          fVar25 = *(float *)(param_1 + 0x4f8);
          fVar16 = *(float *)(param_1 + 0x508);
          fVar17 = *(float *)(param_1 + 0x504);
          fVar23 = *(float *)(param_1 + 0x4fc);
          fVar18 = -(fVar17 * fVar23) + fVar16 * fVar25;
          fVar19 = *(float *)(param_1 + 0x4f4);
          fVar20 = *(float *)(param_1 + 0x4ec);
          fVar21 = *(float *)(param_1 + 0x4f0);
          fVar22 = -(fVar17 * fVar21) + fVar16 * fVar20;
          fVar29 = *(float *)(param_1 + 0x500);
          fVar30 = -(fVar25 * fVar21) + fVar23 * fVar20;
          fStack_e0 = 1.0 / (-(fVar19 * fVar22) + fVar18 * fVar24 + fVar30 * fVar29);
          fVar18 = fVar18 * fStack_e0;
          fVar26 = -((-(fVar29 * fVar23) + fVar16 * fVar19) * fStack_e0);
          fStack_e8 = (-(fVar29 * fVar25) + fVar17 * fVar19) * fStack_e0;
          fVar22 = -(fVar22 * fStack_e0);
          fVar16 = (-(fVar29 * fVar21) + fVar16 * fVar24) * fStack_e0;
          fStack_e4 = -((-(fVar29 * fVar20) + fVar17 * fVar24) * fStack_e0);
          fVar30 = fVar30 * fStack_e0;
          fVar17 = -((-(fVar19 * fVar21) + fVar23 * fVar24) * fStack_e0);
          fStack_e0 = (-(fVar19 * fVar20) + fVar25 * fVar24) * fStack_e0;
          puStack_c8 = (uint *)0xbf800000bf800000;
          uStack_d0 = 0x3f800000bf800000;
          uStack_b8 = 0xbf8000003f800000;
          uStack_c0 = 0x3f8000003f800000;
          fVar24 = fVar26 * 0.0;
          fVar23 = fVar16 * 0.0;
          uStack_100 = (undefined8 *)
                       CONCAT44(fVar22 + fVar23 + fStack_e4 * 0.0,fVar18 + fVar24 + fStack_e8 * 0.0)
          ;
          fVar25 = fVar17 * 0.0;
          uStack_f8 = (uint *)CONCAT44((fVar18 * 0.0 - fVar26) + fStack_e8 * 0.0,
                                       fVar30 + fVar25 + fStack_e0 * 0.0);
          uStack_f0 = CONCAT44((fVar30 * 0.0 - fVar17) + fStack_e0 * 0.0,
                               (fVar22 * 0.0 - fVar16) + fStack_e4 * 0.0);
          fStack_e8 = fStack_e8 + fVar24 + fVar18 * 0.0;
          fStack_e4 = fStack_e4 + fVar23 + fVar22 * 0.0;
          fStack_e0 = fStack_e0 + fVar25 + fVar30 * 0.0;
          FUN_10ab13590(param_1 + 0x2f8,param_2,&uStack_90,&uStack_98,&uStack_a8,(int)plVar9 == 0x24
                        ,plVar1,param_1 + 0x510,&uStack_d0,&uStack_100,6);
          plVar1 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar9 = plStack_a0 + 1;
            do {
              lVar11 = *plVar9;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          plVar1 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar9 = plStack_88 + 1;
            do {
              lVar11 = *plVar9;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          func_0x0001094af130(&uStack_220);
          if (lStack_128 != 0) {
            piVar15 = (int *)(lStack_128 + 0x14);
            do {
              iVar5 = *piVar15;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar7) {
                *piVar15 = iVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_160);
            }
          }
          lStack_128 = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          if (0 < (int)uStack_15c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_120 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uStack_15c);
          }
          if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
            _free(puStack_118[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&puStack_80);
      goto LAB_10ac1e0fc;
    }
  }
  FUN_10a0edfc4(&puStack_80);
LAB_10ac1e0fc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac1e100);
  (*pcVar8)();
}



/* Entry: 10ac1e1cc; end: 10ac1e1d3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1dc64) */
/* WARNING: Removing unreachable block (ram,0x00010ac1de2c) */

void FUN_10ac1e1cc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
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
  undefined4 in_stack_fffffffffffffdc8;
  uint uStack_220;
  int iStack_21c;
  long *plStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  uint uStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_178;
  uint uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  
  iVar8 = (int)param_1 + -0x2b0;
  FUN_10ac1ca00();
  if (param_2 == (long *)0x0) {
    return;
  }
  if (iVar8 == 0) {
    return;
  }
  if (*(long *)(param_1 + 200) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x260) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x25d) & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x25c) != '\x01') {
    return;
  }
  plVar1 = (long *)(param_1 + 200);
  plVar9 = *(long **)(*(long *)(param_1 + 200) + 0x268);
  fVar24 = 0.0;
  if (plVar9 == (long *)0x0) {
    fVar25 = 0.0;
  }
  else {
    (**(code **)(*plVar9 + 0xb0))();
    fVar25 = (float)((ulong)plVar9 & 0xffffffff);
    plVar9 = *(long **)(*plVar1 + 0x268);
    fVar24 = 0.0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0xb8))();
      fVar24 = (float)((ulong)plVar9 & 0xffffffff);
    }
  }
  lVar11 = 0;
  fVar16 = *(float *)(param_1 + 0x218);
  fVar17 = *(float *)(param_1 + 0x220);
  fVar18 = *(float *)(param_1 + 0x21c);
  fVar19 = *(float *)(param_1 + 0x224);
  fVar20 = *(float *)(param_1 + 0x228);
  fVar21 = *(float *)(param_1 + 0x22c);
  fVar22 = *(float *)(param_1 + 0x230);
  fVar23 = *(float *)(param_1 + 0x234);
  do {
    *(float *)(param_1 + 0x21c + lVar11) = (fVar25 / fVar24) * *(float *)(param_1 + 0x21c + lVar11);
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  fVar29 = fVar16 - fVar17;
  fVar30 = fVar18 - fVar19;
  fVar23 = fVar18 + fVar19 + fVar21 + fVar23;
  fVar26 = 2.0 / SQRT(fVar29 * fVar29 + fVar30 * fVar30);
  fVar27 = (fVar16 + fVar17 + fVar20 + fVar22) * -0.25;
  fVar28 = fVar23 * -0.25;
  fVar16 = *(float *)(param_1 + 0x214);
  ___sincosf_stret();
  fVar18 = 1.0 - fVar23;
  fVar19 = fVar18 * 0.0;
  fVar20 = fVar23 + fVar19 * 0.0;
  fVar21 = fVar16 + fVar19 * 0.0;
  fVar31 = fVar16 * -0.0 + fVar19;
  fVar22 = fVar19 * 0.0 - fVar16;
  fVar19 = fVar16 * 0.0 + fVar19;
  fVar17 = fVar16 * 0.0 + fVar18 * 0.0;
  fVar30 = fVar16 * -0.0 + fVar18 * 0.0;
  fVar16 = fVar20 * 0.0;
  fVar32 = fVar21 * 0.0;
  fVar29 = fVar31 * 0.0;
  fVar34 = fVar29 + fVar20 + fVar32;
  fVar29 = fVar29 + fVar21 + fVar16;
  fVar31 = fVar31 + fVar16 + fVar32;
  fVar33 = fVar22 * 0.0;
  fVar21 = fVar19 * 0.0;
  fVar32 = fVar21 + fVar22 + fVar16;
  fVar21 = fVar21 + fVar20 + fVar33;
  fVar19 = fVar19 + fVar33 + fVar16;
  fVar20 = fVar17 * 0.0;
  fVar33 = fVar30 * 0.0;
  fVar22 = (fVar23 + fVar18) * 0.0;
  fVar16 = fVar22 + fVar17 + fVar33;
  fVar22 = fVar22 + fVar30 + fVar20;
  fVar17 = fVar23 + fVar18 + fVar20 + fVar33;
  fVar18 = fVar34 + fVar32 * 0.0 + fVar16 * 0.0;
  fVar33 = fVar29 + fVar21 * 0.0 + fVar22 * 0.0;
  fVar20 = fVar31 + fVar19 * 0.0 + fVar17 * 0.0;
  fVar35 = fVar32 + fVar34 * 0.0 + fVar16 * 0.0;
  fVar36 = fVar21 + fVar29 * 0.0 + fVar22 * 0.0;
  fVar30 = fVar19 + fVar31 * 0.0 + fVar17 * 0.0;
  fVar16 = fVar16 + fVar28 * fVar32 + fVar27 * fVar34;
  fVar22 = fVar22 + fVar28 * fVar21 + fVar27 * fVar29;
  fVar17 = fVar17 + fVar28 * fVar19 + fVar27 * fVar31;
  fVar23 = fVar26 * 0.0;
  fVar19 = fVar23 * fVar33;
  fVar21 = fVar19 + fVar18 * fVar26 + fVar20 * 0.0;
  fVar29 = fVar26 * fVar33 + fVar18 * fVar23 + fVar20 * 0.0;
  fVar20 = fVar20 + fVar19 + fVar18 * fVar23;
  fVar18 = fVar23 * fVar36;
  fVar19 = fVar18 + fVar35 * fVar26 + fVar30 * 0.0;
  fVar27 = fVar26 * fVar36 + fVar35 * fVar23 + fVar30 * 0.0;
  fVar30 = fVar30 + fVar18 + fVar35 * fVar23;
  fVar28 = fVar23 * fVar22;
  fVar31 = fVar28 + fVar16 * fVar26 + fVar17 * 0.0;
  fVar18 = fVar26 * fVar22 + fVar16 * fVar23 + fVar17 * 0.0;
  fVar17 = fVar17 + fVar28 + fVar16 * fVar23;
  fVar24 = 1.0 / (fVar25 / fVar24);
  fVar25 = fVar24 * 0.0;
  fVar16 = fVar19 * 0.0;
  fVar23 = fVar27 * 0.0;
  fVar22 = fVar30 * 0.0;
  *(float *)(param_1 + 0x238) = fVar21 + fVar16 + fVar31 * 0.0;
  *(float *)(param_1 + 0x23c) = fVar29 + fVar23 + fVar18 * 0.0;
  *(float *)(param_1 + 0x240) = fVar20 + fVar22 + fVar17 * 0.0;
  *(float *)(param_1 + 0x244) = fVar24 * fVar19 + fVar25 * fVar21 + fVar25 * fVar31;
  *(float *)(param_1 + 0x248) = fVar24 * fVar27 + fVar25 * fVar29 + fVar25 * fVar18;
  *(float *)(param_1 + 0x24c) = fVar24 * fVar30 + fVar25 * fVar20 + fVar25 * fVar17;
  *(float *)(param_1 + 0x250) = fVar31 + fVar16 + fVar21 * 0.0;
  *(float *)(param_1 + 0x254) = fVar18 + fVar23 + fVar29 * 0.0;
  *(float *)(param_1 + 600) = fVar17 + fVar22 + fVar20 * 0.0;
  uStack_220 = uStack_220 & 0xffffff00;
  uStack_210 = uStack_210 & 0xffffffffffffff00;
  FUN_10ab1306c(param_1 + 0x48,param_2,&UNK_10e4ac8a8,plVar1,param_1 + 0x270,param_1 + 0x218,
                param_1 + 0x238,6,&uStack_220,
                CONCAT71((uint7)(uint3)((uint)in_stack_fffffffffffffdc8 >> 8),1));
  (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
  uVar13 = (ulong)*(byte *)(*(long *)(param_1 + -0x220) + 0x29);
  if (5 < uVar13) goto LAB_10ac1e0fc;
  FUN_10aba1500(&uStack_220,*(undefined8 *)(*(long *)(param_1 + -0x220) + uVar13 * 8 + 0x30),
                *(undefined8 *)(param_1 + 0xe8),0);
  func_0x00010a22b8d4((long *)(param_1 + 0x2e8),&uStack_220);
  plVar9 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar2 = plStack_218 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  lVar12 = *(long *)(param_1 + 0x2e8);
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = lVar12 + 0x10;
  }
  puStack_118 = &uStack_110;
  FUN_10a0f3910(&uStack_220,lVar11,0);
  uStack_f0 = 0;
  uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,0x1010000);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2010000);
  uStack_c0 = 0;
  uStack_f8 = &uStack_220;
  puStack_c8 = &uStack_160;
  func_0x000109ac9fc8(&uStack_100,&uStack_d0,3,0);
  if (lStack_1e8 != 0) {
    piVar15 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar8 = *piVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar6) {
        *piVar15 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < iStack_21c) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_21c);
  }
  if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
    _free(puStack_1d8[-1]);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))
            (&uStack_220,*(long **)(param_1 + 0x38),&uStack_160,param_1 + 0x118);
  puVar3 = (uint *)(param_1 + 0x150);
  if (puVar3 != &uStack_220) {
    if (lStack_1e8 != 0) {
      piVar15 = (int *)(lStack_1e8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0x188) + 0x14);
      do {
        iVar8 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(puVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (*(int *)(param_1 + 0x154) < 1) {
      *puVar3 = uStack_220;
LAB_10ac1da68:
      if (2 < iStack_21c) goto LAB_10ac1da9c;
      *(int *)(param_1 + 0x154) = iStack_21c;
      *(long **)(param_1 + 0x158) = plStack_218;
      puVar14 = *(undefined8 **)(param_1 + 0x198);
      *puVar14 = *puStack_1d8;
      puVar14[1] = puStack_1d8[1];
    }
    else {
      lVar11 = 0;
      lVar12 = *(long *)(param_1 + 400);
      do {
        *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x154));
      *puVar3 = uStack_220;
      if (*(int *)(param_1 + 0x154) < 3) goto LAB_10ac1da68;
LAB_10ac1da9c:
      func_0x000109a84868(puVar3,&uStack_220);
    }
    *(undefined8 *)(param_1 + 0x168) = uStack_208;
    *(ulong *)(param_1 + 0x160) = uStack_210;
    *(undefined8 *)(param_1 + 0x178) = uStack_1f8;
    *(undefined8 *)(param_1 + 0x170) = uStack_200;
    *(long *)(param_1 + 0x188) = lStack_1e8;
    *(undefined8 *)(param_1 + 0x180) = uStack_1f0;
  }
  puVar4 = (uint *)(param_1 + 0x1b0);
  if (puVar4 != &uStack_1c0) {
    if (lStack_188 != 0) {
      piVar15 = (int *)(lStack_188 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(long *)(param_1 + 0x1e8) != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0x1e8) + 0x14);
      do {
        iVar8 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        func_0x000109a848d4(puVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x1b4) < 1) {
      *puVar4 = uStack_1c0;
LAB_10ac1db68:
      if (2 < iStack_1bc) goto LAB_10ac1db9c;
      *(int *)(param_1 + 0x1b4) = iStack_1bc;
      *(undefined8 *)(param_1 + 0x1b8) = uStack_1b8;
      puVar14 = *(undefined8 **)(param_1 + 0x1f8);
      *puVar14 = *puStack_178;
      puVar14[1] = puStack_178[1];
    }
    else {
      lVar11 = 0;
      lVar12 = *(long *)(param_1 + 0x1f0);
      do {
        *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1b4));
      *puVar4 = uStack_1c0;
      if (*(int *)(param_1 + 0x1b4) < 3) goto LAB_10ac1db68;
LAB_10ac1db9c:
      func_0x000109a84868(puVar4,&uStack_1c0);
    }
    *(undefined8 *)(param_1 + 0x1c8) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x1c0) = uStack_1b0;
    *(undefined8 *)(param_1 + 0x1d8) = uStack_198;
    *(undefined8 *)(param_1 + 0x1d0) = uStack_1a0;
    *(long *)(param_1 + 0x1e8) = lStack_188;
    *(undefined8 *)(param_1 + 0x1e0) = uStack_190;
  }
  uVar13 = (ulong)*(byte *)(*(long *)(param_1 + -0x220) + 0x29);
  if (5 < uVar13) goto LAB_10ac1e0fc;
  plVar9 = *(long **)(*(long *)(param_1 + -0x220) + uVar13 * 8 + 0x30);
  (**(code **)(*plVar9 + 0x48))
            (plVar9,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8));
  uVar10 = *puVar3 >> 3 & 0x1ff;
  __ZNSt3__19to_stringEi(&uStack_d0,uVar10 + 1);
  puVar14 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar14,0,&UNK_10f69c11f,0x20);
  uStack_f8 = (uint *)puVar14[1];
  uStack_100 = (undefined8 *)*puVar14;
  uStack_f0 = puVar14[2];
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  puStack_78 = (uint *)(long)uStack_f0._7_1_;
  if ((long)puStack_78 < 0) {
    puStack_80 = uStack_100;
    puStack_78 = uStack_f8;
    if (1 < uVar10) {
      __ZdlPv();
      goto LAB_10ac1dc5c;
    }
  }
  else {
    puStack_80 = &uStack_100;
    if (1 < uVar10) {
LAB_10ac1dc5c:
      uVar10 = *puVar3;
      if ((uVar10 & 0xff8) == 0x10) {
        uStack_f0 = 0;
        uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,0x1010000);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0x2010000);
        uStack_c0 = 0;
        uStack_f8 = puVar3;
        puStack_c8 = puVar3;
        func_0x000109ac9fc8(&uStack_100,&uStack_d0,0,0);
        uVar10 = *puVar3;
      }
      uStack_90 = 0;
      plStack_88 = (long *)0x0;
      uStack_98 = 0x3f800000;
      if ((uVar10 & 7) == 5) {
        plVar9 = *(long **)(param_1 + 0x290);
        if (plVar9 == (long *)0x0) {
          FUN_10ac1d3a8(0x3f000000,param_1 + 0x270,puVar3);
          func_0x00010a04a704(&uStack_90,param_1 + 0xe8);
          uStack_98 = 0x3f00000040000000;
        }
        else {
          (**(code **)(*plVar9 + 0x98))(plVar9,*(undefined8 *)(param_1 + 0x160),0,0);
          func_0x00010a04a704(&uStack_90,param_1 + 0x108);
          uStack_98 = 0x3b808081;
        }
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x270) + 0x98))
                  (*(long **)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x160),0,0);
        func_0x00010a04a704(&uStack_90,param_1 + 0xe8);
      }
      plVar9 = *(long **)(param_1 + 0x280);
      (**(code **)(*plVar9 + 0x50))();
      uStack_a8 = 0;
      plStack_a0 = (long *)0x0;
      if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_10ac1de7c;
      uVar13 = (ulong)*(uint *)(param_1 + 0x1b4);
      if ((int)*(uint *)(param_1 + 0x1b4) < 3) {
        lVar11 = (long)*(int *)(param_1 + 0x1bc) * (long)*(int *)(param_1 + 0x1b8);
      }
      else {
        lVar11 = 1;
        piVar15 = *(int **)(param_1 + 0x1f0);
        do {
          lVar11 = lVar11 * *piVar15;
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 1;
        } while (uVar13 != 0);
      }
      if (lVar11 == 0) goto LAB_10ac1de7c;
      iVar8 = (*puVar4 >> 3 & 0x1ff) + 1;
      __ZNSt3__19to_stringEi(&uStack_d0,iVar8);
      puVar14 = &uStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar14,0,&UNK_10f69c140,0x25);
      uStack_f8 = (uint *)puVar14[1];
      uStack_100 = (undefined8 *)*puVar14;
      uStack_f0 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puStack_78 = (uint *)(long)uStack_f0._7_1_;
      if ((long)puStack_78 < 0) {
        puStack_80 = uStack_100;
        puStack_78 = uStack_f8;
        if (iVar8 == 2) {
          __ZdlPv();
          goto LAB_10ac1de24;
        }
      }
      else {
        puStack_80 = &uStack_100;
        if (iVar8 == 2) {
LAB_10ac1de24:
          if ((int)plVar9 == 0x24) {
            (**(code **)(**(long **)(param_1 + 0x280) + 0x98))
                      (*(long **)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x1c0),0,0);
          }
          else {
            FUN_10ac1d3a8(0x437f0000,param_1 + 0x280,puVar4);
          }
          func_0x00010a04a704(&uStack_a8,param_1 + 0xf8);
LAB_10ac1de7c:
          fVar24 = *(float *)(param_1 + 0x238);
          fVar25 = *(float *)(param_1 + 0x248);
          fVar16 = *(float *)(param_1 + 600);
          fVar17 = *(float *)(param_1 + 0x254);
          fVar23 = *(float *)(param_1 + 0x24c);
          fVar18 = -(fVar17 * fVar23) + fVar16 * fVar25;
          fVar19 = *(float *)(param_1 + 0x244);
          fVar20 = *(float *)(param_1 + 0x23c);
          fVar21 = *(float *)(param_1 + 0x240);
          fVar22 = -(fVar17 * fVar21) + fVar16 * fVar20;
          fVar29 = *(float *)(param_1 + 0x250);
          fVar30 = -(fVar25 * fVar21) + fVar23 * fVar20;
          fStack_e0 = 1.0 / (-(fVar19 * fVar22) + fVar18 * fVar24 + fVar30 * fVar29);
          fVar18 = fVar18 * fStack_e0;
          fVar26 = -((-(fVar29 * fVar23) + fVar16 * fVar19) * fStack_e0);
          fStack_e8 = (-(fVar29 * fVar25) + fVar17 * fVar19) * fStack_e0;
          fVar22 = -(fVar22 * fStack_e0);
          fVar16 = (-(fVar29 * fVar21) + fVar16 * fVar24) * fStack_e0;
          fStack_e4 = -((-(fVar29 * fVar20) + fVar17 * fVar24) * fStack_e0);
          fVar30 = fVar30 * fStack_e0;
          fVar17 = -((-(fVar19 * fVar21) + fVar23 * fVar24) * fStack_e0);
          fStack_e0 = (-(fVar19 * fVar20) + fVar25 * fVar24) * fStack_e0;
          puStack_c8 = (uint *)0xbf800000bf800000;
          uStack_d0 = 0x3f800000bf800000;
          uStack_b8 = 0xbf8000003f800000;
          uStack_c0 = 0x3f8000003f800000;
          fVar24 = fVar26 * 0.0;
          fVar23 = fVar16 * 0.0;
          uStack_100 = (undefined8 *)
                       CONCAT44(fVar22 + fVar23 + fStack_e4 * 0.0,fVar18 + fVar24 + fStack_e8 * 0.0)
          ;
          fVar25 = fVar17 * 0.0;
          uStack_f8 = (uint *)CONCAT44((fVar18 * 0.0 - fVar26) + fStack_e8 * 0.0,
                                       fVar30 + fVar25 + fStack_e0 * 0.0);
          uStack_f0 = CONCAT44((fVar30 * 0.0 - fVar17) + fStack_e0 * 0.0,
                               (fVar22 * 0.0 - fVar16) + fStack_e4 * 0.0);
          fStack_e8 = fStack_e8 + fVar24 + fVar18 * 0.0;
          fStack_e4 = fStack_e4 + fVar23 + fVar22 * 0.0;
          fStack_e0 = fStack_e0 + fVar25 + fVar30 * 0.0;
          FUN_10ab13590(param_1 + 0x48,param_2,&uStack_90,&uStack_98,&uStack_a8,(int)plVar9 == 0x24,
                        plVar1,param_1 + 0x260,&uStack_d0,&uStack_100,6);
          plVar1 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar9 = plStack_a0 + 1;
            do {
              lVar11 = *plVar9;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          plVar1 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar9 = plStack_88 + 1;
            do {
              lVar11 = *plVar9;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
          func_0x0001094af130(&uStack_220);
          if (lStack_128 != 0) {
            piVar15 = (int *)(lStack_128 + 0x14);
            do {
              iVar8 = *piVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar6) {
                *piVar15 = iVar8 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_160);
            }
          }
          lStack_128 = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          if (0 < (int)uStack_15c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_120 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uStack_15c);
          }
          if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
            _free(puStack_118[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&puStack_80);
      goto LAB_10ac1e0fc;
    }
  }
  FUN_10a0edfc4(&puStack_80);
LAB_10ac1e0fc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac1e100);
  (*pcVar7)();
}



/* Entry: 10ac1e1d4; end: 10ac1e27b;  */

void FUN_10ac1e1d4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1;
    if ((param_1[0x50d] & 1) == 0) {
      *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x4c0);
      *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x40) = 8;
      *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x34) = 0xffffffff;
      *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
      FUN_10a4c3ba4(param_2 + 0x58);
      FUN_10a22d0f8();
      unaff_x19 = puVar1;
      param_2 = puVar2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac1e27c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x288;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10ac1e27c; end: 10ac1e34b;  */

void FUN_10ac1e27c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1 + -0x288;
    if ((param_1[0x285] & 1) == 0) {
      *(undefined4 *)((long)register0x00000008 + -0x80) = *(undefined4 *)(param_1 + 0x238);
      *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x40) = 8;
      *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x38) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x34) = 0xffffffff;
      *(undefined1 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x2c) = 0;
      FUN_10a4c3ba4(param_2 + 0x58);
      FUN_10a22d0f8();
      unaff_x19 = puVar1;
      param_2 = puVar2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x80));
    unaff_x30 = FUN_10ac1e27c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10ac1e34c; end: 10ac1e5df;  */

void FUN_10ac1e34c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  long *plStack_40;
  undefined8 *puStack_38;
  
  if (*(char *)(param_2 + 0x4f) < '\0') {
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_10ac1e3bc;
    func_0x000107c3192c(&uStack_f0,*(undefined8 *)(param_2 + 0x38));
  }
  else {
    if (*(char *)(param_2 + 0x4f) == '\0') {
LAB_10ac1e3bc:
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f69c166,&UNK_10f69c1a1,10,&UNK_10f69c21c);
      }
      puVar4 = (undefined8 *)0xf8;
      __Znwm();
      *(undefined2 *)(puVar4 + 3) = 4;
      puVar4[2] = 0;
      puVar4[1] = 0x200000006;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = puVar4 + 3;
      puVar4[0x12] = 0;
      *puVar4 = &PTR_DAT_110bb2e48;
      *(undefined1 *)(puVar4 + 0x13) = 0;
      *(undefined1 *)(puVar4 + 0x1e) = 0;
      puStack_38 = puVar4;
      func_0x00010a1fe64c();
      *param_1 = puVar4;
      plStack_40 = (long *)0x0;
      func_0x0001092b4274(&puStack_38,puVar4);
      if (plStack_40 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_40 + 1);
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
            (**(code **)(*plStack_40 + 8))();
          }
        }
      }
      return;
    }
    uStack_e8 = *(undefined8 *)(param_2 + 0x40);
    uStack_f0 = *(undefined8 *)(param_2 + 0x38);
    lStack_e0 = *(undefined8 *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x67) < '\0') {
    func_0x000107c3192c(&uStack_d8,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
  }
  else {
    uStack_d0 = *(undefined8 *)(param_2 + 0x58);
    uStack_d8 = *(undefined8 *)(param_2 + 0x50);
    lStack_c8 = *(undefined8 *)(param_2 + 0x60);
  }
  if (*(char *)(param_2 + 0x7f) < '\0') {
    func_0x000107c3192c(&uStack_c0,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  }
  else {
    uStack_b8 = *(undefined8 *)(param_2 + 0x70);
    uStack_c0 = *(undefined8 *)(param_2 + 0x68);
    lStack_b0 = *(undefined8 *)(param_2 + 0x78);
  }
  uStack_a8 = 0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = lStack_e0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  uStack_80 = uStack_d0;
  uStack_88 = uStack_d8;
  uStack_78 = lStack_c8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_60 = lStack_b0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_58 = 0;
  uStack_50 = 1;
  puVar4 = (undefined8 *)0xf8;
  __Znwm();
  *(undefined2 *)(puVar4 + 3) = 4;
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar4 + 3;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110bb2e48;
  *(undefined1 *)(puVar4 + 0x13) = 0;
  *(undefined1 *)(puVar4 + 0x1e) = 0;
  puStack_38 = puVar4;
  FUN_10a754524();
  *param_1 = puVar4;
  plStack_40 = (long *)0x0;
  func_0x0001092b4274(&puStack_38,puVar4);
  if (plStack_40 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_40 + 1);
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
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  func_0x00010a1fe790(&uStack_a0);
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (lStack_c8 < 0) {
    __ZdlPv(uStack_d8);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  return;
}



/* Entry: 10ac1e5e0; end: 10ac1e65f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e010c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0110) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0118) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0120) */
/* WARNING: Removing unreachable block (ram,0x00010a1e012c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0134) */
/* WARNING: Removing unreachable block (ram,0x00010a1e013c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0140) */

void FUN_10ac1e5e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110bb2e48;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  puStack_38 = puVar1;
  FUN_10a1fe64c();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10ac1e660; end: 10ac1e6b3;  */

void FUN_10ac1e660(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000040;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0xffffffff00000111;
  FUN_10ac1e6b4(param_1,&uStack_58);
  FUN_10ac4956c();
  return;
}



/* Entry: 10ac1e6b4; end: 10ac1e78b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1e74c) */

undefined1  [16] FUN_10ac1e6b4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69da29,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac49470(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac1e78c; end: 10ac1e87f;  */

long * FUN_10ac1e78c(long *param_1,long *param_2)

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
  param_1[2] = (long)&PTR_FUN_110c56668;
  param_1[5] = (long)&PTR_DAT_110c56698;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a37d918(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c5d628;
  param_1[5] = (long)&PTR_DAT_110c5d658;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  FUN_10ac40a18(param_1 + 0x13);
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



/* Entry: 10ac1e880; end: 10ac1e8c3;  */

undefined8 * FUN_10ac1e880(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c565c8;
  param_1[2] = &PTR_FUN_110c56668;
  param_1[5] = &PTR_DAT_110c56698;
  param_1[0x1e] = &PTR_DAT_110c56720;
  FUN_10a37d918(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  *param_1 = &PTR_FUN_110c59c18;
  param_1[2] = &PTR_FUN_110c5d628;
  param_1[5] = &PTR_DAT_110c5d658;
  param_1[0x1e] = &PTR_DAT_110c59ce8;
  FUN_10ac40a18(param_1 + 0x13);
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



/* Entry: 10ac1e8c4; end: 10ac1e91f;  */

void FUN_10ac1e8c4(undefined8 param_1)

{
  FUN_10ac1e78c(param_1,&PTR_PTR_110c56758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac1e920; end: 10ac1e957;  */

void FUN_10ac1e920(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac1e78c((long)param_1 + lVar1,&PTR_PTR_110c56758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac1e958; end: 10ac1ea8f;  */

long * FUN_10ac1e958(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  plVar1 = param_1;
  FUN_10ac1ea90(param_1,param_2 + 1);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c56668;
  plVar1[5] = (long)&PTR_DAT_110c56698;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  func_0x000107c2b054(auStack_48,&UNK_10f69b9ca);
  func_0x000107c2b054(auStack_60,&UNK_10f69b9ca);
  FUN_10a107e2c(param_1 + 0x15,auStack_48,auStack_60,0);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_10ac1eb54(param_1,param_4);
  return param_1;
}



/* Entry: 10ac1ea90; end: 10ac1eb53;  */

long * FUN_10ac1ea90(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c5d628;
  plVar1[5] = (long)&PTR_DAT_110c5d658;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10ac1eb54; end: 10ac1ec63;  */

void FUN_10ac1eb54(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  
  plVar1 = (long *)(param_1 + 0xa8);
  if ((int)param_2[6] == *(int *)(param_1 + 0xd8)) {
    bVar5 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    bVar6 = *(byte *)(param_1 + 0xbf);
    uVar3 = *(ulong *)(param_1 + 0xb0);
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    if (uVar2 == uVar3) {
      plVar7 = (long *)*param_2;
      if (-1 < (char)bVar5) {
        plVar7 = param_2;
      }
      plVar4 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar4 = plVar1;
      }
      _memcmp(plVar7,plVar4);
      if ((int)plVar7 == 0) {
        bVar5 = *(byte *)((long)param_2 + 0x2f);
        uVar2 = param_2[4];
        if (-1 < (char)bVar5) {
          uVar2 = (ulong)bVar5;
        }
        bVar6 = *(byte *)(param_1 + 0xd7);
        uVar3 = *(ulong *)(param_1 + 200);
        if (-1 < (char)bVar6) {
          uVar3 = (ulong)bVar6;
        }
        if (uVar2 == uVar3) {
          plVar7 = (long *)param_2[3];
          if (-1 < (char)bVar5) {
            plVar7 = param_2 + 3;
          }
          plVar4 = (long *)*(long *)(param_1 + 0xc0);
          if (-1 < (char)bVar6) {
            plVar4 = (long *)(param_1 + 0xc0);
          }
          _memcmp(plVar7,plVar4);
          if ((int)plVar7 == 0) {
            return;
          }
        }
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0xc0,param_2 + 3);
  *(int *)(param_1 + 0xd8) = (int)param_2[6];
  func_0x00010ac1ede0(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac1ec64; end: 10ac1edb7;  */

undefined8 * FUN_10ac1ec64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  puVar1 = param_1;
  FUN_10ac1ea90(param_1,&PTR_PTR_110c56760,param_2);
  *puVar1 = &PTR_FUN_110c565c8;
  puVar1[2] = &PTR_FUN_110c56668;
  puVar1[5] = &PTR_DAT_110c56698;
  puVar1[0x1e] = &PTR_DAT_110c56720;
  func_0x000107c2b054(auStack_48,&UNK_10f69b9ca);
  func_0x000107c2b054(auStack_60,&UNK_10f69b9ca);
  FUN_10a107e2c(param_1 + 0x15,auStack_48,auStack_60,0);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_10ac1eb54(param_1,param_3);
  return param_1;
}



/* Entry: 10ac1edb8; end: 10ac1ee3b;  */

void FUN_10ac1edb8(long param_1)

{
  func_0x00010ac1ede0(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac1ee3c; end: 10ac1ef83;  */

void FUN_10ac1ee3c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0xe0) == 0) {
    if (*(char *)(param_1 + 0xbf) < '\0') {
      if (*(long *)(param_1 + 0xb0) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0xbf) == '\0') {
      return;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar6 = plVar4 + 1;
    *plVar6 = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110c5df70;
    FUN_10aaea2c8(plVar4 + 4,param_1 + 0xa8);
    plStack_40 = plVar4 + 3;
    *plStack_40 = (long)&PTR_FUN_110c44848;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xe] = (long)plStack_40;
    plVar4[0xf] = (long)plVar4;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = plVar4;
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    FUN_10ac1ef84((long *)(param_1 + 0xe0),&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 2;
  }
  return;
}



/* Entry: 10ac1ef84; end: 10ac1efe7;  */

undefined8 * FUN_10ac1ef84(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ac1efe8; end: 10ac1eff7;  */

void FUN_10ac1efe8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    if (*(char *)(param_1 + 0xaf) < '\0') {
      if (*(long *)(param_1 + 0xa0) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0xaf) == '\0') {
      return;
    }
    plVar4 = (long *)0x80;
    __Znwm();
    plVar6 = plVar4 + 1;
    *plVar6 = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110c5df70;
    FUN_10aaea2c8(plVar4 + 4,param_1 + 0x98);
    plStack_40 = plVar4 + 3;
    *plStack_40 = (long)&PTR_FUN_110c44848;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xe] = (long)plStack_40;
    plVar4[0xf] = (long)plVar4;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = plVar4;
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    FUN_10ac1ef84((long *)(param_1 + 0xd0),&plStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 100) = 2;
  }
  return;
}



/* Entry: 10ac1eff8; end: 10ac1f213;  */

void FUN_10ac1eff8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  char cStack_69;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined4 uStack_30;
  
  func_0x00010ac1ede0(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c55db0);
  if ((int)plVar1 == 0) {
    func_0x000107c2b054(auStack_98,&UNK_10f69b9ca);
    FUN_10a0fed30(&uStack_60,param_2,&PTR_DAT_110c55dd0,auStack_98);
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0xb0) = uStack_58;
    *(ulong *)(param_1 + 0xa8) = uStack_60;
    *(ulong *)(param_1 + 0xb8) = uStack_50;
    uStack_50 = uStack_50 & 0xffffffffffffff;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
    if (*(char *)(param_1 + 0x8f) < '\0') {
      func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80)
                         );
    }
    else {
      uStack_58 = *(undefined8 *)(param_1 + 0x80);
      uStack_60 = *(ulong *)(param_1 + 0x78);
      uStack_50 = *(ulong *)(param_1 + 0x88);
    }
    if (*(char *)(param_1 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
    }
    *(undefined8 *)(param_1 + 200) = uStack_58;
    *(ulong *)(param_1 + 0xc0) = uStack_60;
    *(ulong *)(param_1 + 0xd0) = uStack_50;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    FUN_10a1e3e54(auStack_98);
    (**(code **)(*param_2 + 0x230))(&uStack_60,param_2,&PTR_DAT_110c55db0,auStack_98);
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0xb0) = uStack_58;
    *(ulong *)(param_1 + 0xa8) = uStack_60;
    *(ulong *)(param_1 + 0xb8) = uStack_50;
    uStack_50 = uStack_50 & 0xffffffffffffff;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    if (*(char *)(param_1 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 200) = uStack_40;
      *(ulong *)(param_1 + 0xc0) = CONCAT71(uStack_47,uStack_48);
      *(ulong *)(param_1 + 0xd0) = CONCAT17(uStack_31,uStack_38);
      uStack_31 = 0;
      uStack_48 = 0;
      *(undefined4 *)(param_1 + 0xd8) = uStack_30;
      if ((long)uStack_50 < 0) {
        __ZdlPv(uStack_60);
      }
    }
    else {
      *(undefined8 *)(param_1 + 200) = uStack_40;
      *(ulong *)(param_1 + 0xc0) = CONCAT71(uStack_47,uStack_48);
      *(ulong *)(param_1 + 0xd0) = CONCAT17(uStack_31,uStack_38);
      uStack_31 = 0;
      uStack_48 = 0;
      *(undefined4 *)(param_1 + 0xd8) = uStack_30;
    }
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
  }
  return;
}



/* Entry: 10ac1f214; end: 10ac1f29f;  */

void FUN_10ac1f214(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 0x15;
  plVar1 = param_2;
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&plStack_30);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c55dd0,plVar2);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c55db0,plVar2);
  return;
}



/* Entry: 10ac1f2a0; end: 10ac1f2ff;  */

undefined1  [16] FUN_10ac1f2a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f69da42;
  return auVar1;
}



/* Entry: 10ac1f300; end: 10ac1f77b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e010c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0110) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0118) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0120) */
/* WARNING: Removing unreachable block (ram,0x00010a1e012c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0134) */
/* WARNING: Removing unreachable block (ram,0x00010a1e013c) */
/* WARNING: Removing unreachable block (ram,0x00010a1e0140) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ac1f300(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 ****ppppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 ***pppuVar9;
  undefined1 **ppuVar10;
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined1 ****ppppuStack_80;
  undefined1 ****ppppuStack_78;
  undefined8 *puStack_70;
  undefined1 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x48) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f69c23b,&UNK_10f69c278,0xe,&UNK_10f69c2f7);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      puVar7 = (undefined8 *)0xf8;
      __Znwm();
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *puVar7 = &PTR_DAT_110bb2e48;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x1e) = 0;
      FUN_10a1fe64c();
      *param_1 = puVar7;
      func_0x0001092b4274(&stack0xffffffffffffffc8,puVar7);
      return;
    }
  }
  else {
    auStack_c8[0] = 0;
    uStack_b8 = 0xffffffff;
    ppppuVar6 = (undefined1 ****)auStack_c8;
    FUN_10ac40a70();
    uVar2 = *(uint *)(param_2 + 0x38);
    if (uVar2 != 0xffffffff) {
      ppppuVar6 = (undefined1 ****)&ppppuStack_78;
      ppppuStack_78 = (undefined1 ****)auStack_c8;
      (*(code *)(&PTR_DAT_110c5d728)[uVar2])(ppppuVar6,param_2 + 0x28);
      uStack_b8 = uVar2;
    }
    uStack_a8 = *(undefined8 *)(param_2 + 0x48);
    uStack_b0 = *(undefined8 *)(param_2 + 0x40);
    FUN_109d1a80c();
    pppuVar9 = ppppuVar6[9];
    ppuVar10 = pppuVar9[2];
    plStack_90 = (long *)0x0;
    puStack_88 = (undefined8 *)0x0;
    if (ppuVar10 == (undefined1 **)0x0) {
      FUN_10ac40e84(&ppppuStack_78,auStack_c8);
      uStack_58 = uStack_a8;
      uStack_60 = uStack_b0;
      puVar7 = (undefined8 *)0x138;
      __Znwm();
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x1e) = 0;
      *puVar7 = &PTR_FUN_110c5d790;
      FUN_10ac40e84(puVar7 + 0x1f,&ppppuStack_78);
      puVar7[0x23] = uStack_58;
      puVar7[0x22] = uStack_60;
      *(undefined1 *)(puVar7 + 0x25) = 1;
      puVar7[0x26] = 0;
      if (plStack_90 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_90 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_90 + 8))();
          }
        }
      }
      plStack_90 = puVar7;
      if (puStack_88 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_88);
      }
      puStack_98 = puVar7 + 0x1f;
      puStack_88 = puVar7;
      FUN_10ac40a70(&ppppuStack_78);
      ppppuStack_80 = (undefined1 ****)FUN_10ac40b5c;
    }
    else {
      lStack_a0 = 0;
      (**(code **)(*ppuVar10 + 0x28))(ppuVar10,0,&lStack_a0);
      if (lStack_a0 != 0) goto LAB_10ac1f72c;
      FUN_10ac40e84(&ppppuStack_78,auStack_c8);
      uStack_58 = uStack_a8;
      uStack_60 = uStack_b0;
      puVar7 = (undefined8 *)0x140;
      __Znwm();
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x1e) = 0;
      *puVar7 = &PTR_FUN_110c5d748;
      FUN_10ac40e84(puVar7 + 0x1f,&ppppuStack_78);
      puVar7[0x23] = uStack_58;
      puVar7[0x22] = uStack_60;
      *(undefined1 *)(puVar7 + 0x25) = 1;
      puVar7[0x26] = 0;
      puVar7[0x27] = ppuVar10;
      if (plStack_90 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_90 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_90 + 8))();
          }
        }
      }
      plStack_90 = puVar7;
      if (puStack_88 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_88);
      }
      puStack_98 = puVar7 + 0x1f;
      puStack_88 = puVar7;
      FUN_10ac40a70(&ppppuStack_78);
      ppppuStack_80 = (undefined1 ****)FUN_10ac40b2c;
      __ZNSt13exception_ptrD1Ev(&lStack_a0);
    }
    puVar7 = puStack_98;
    if (puStack_98[7] != 0) {
      func_0x0001092b4274();
    }
    puVar7[7] = puStack_88;
    puStack_88 = (undefined8 *)0x0;
    ppppuStack_78 = ppppuStack_80;
    puStack_70 = puStack_98;
    pppuStack_68 = pppuVar9;
    (*(code *)**pppuVar9)(pppuVar9,&ppppuStack_78);
    *param_1 = plStack_90;
    plStack_90 = (long *)0x0;
    if ((puStack_88 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_88), plStack_90 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_90 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plStack_90 + 8))();
        }
      }
    }
    FUN_10ac40a70(auStack_c8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10ac1f72c:
  func_0x0001092af97c(&lStack_a0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac1f738);
  (*pcVar5)();
}



/* Entry: 10ac1f77c; end: 10ac1f807;  */

undefined1  [16] FUN_10ac1f77c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f6634f2;
  return auVar1;
}



/* Entry: 10ac1f808; end: 10ac1fb57;  */

void FUN_10ac1f808(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6634f2,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5a040;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
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
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c5a040;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac1fb38;
    FUN_10a054dac(param_1,&UNK_10f69c319,FUN_10ac49664,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69c321,FUN_10ac497e4,FUN_10ac4989c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2fd449,FUN_10ac49a10,FUN_10ac49af4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69c330,FUN_10ac49bfc,FUN_10ac49cb8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69c33c,FUN_10ac49df8,FUN_10ac49eb4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f30968d,FUN_10ac49f6c,FUN_10ac4a028);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6634f2,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac1fb38:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac1fb3c);
  (*pcVar6)();
}



/* Entry: 10ac1fb58; end: 10ac1fc53;  */

void FUN_10ac1fb58(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c34a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac1fc54(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c35d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10ac1fcac(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69c365;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10ac1fcac(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ac1fc54; end: 10ac1fcab;  */

ulong FUN_10ac1fc54(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ac1fcac; end: 10ac1fd03;  */

ulong FUN_10ac1fcac(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ac4a118(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ac1fd04; end: 10ac2028b;  */

undefined8 *
FUN_10ac1fd04(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  long *plStack_68;
  
  param_1[0x79] = &PTR_FUN_110c383b8;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0x100;
  puVar4 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c56a08,param_2);
  FUN_10a03c0d0(puVar4 + 0x51);
  *param_1 = &PTR_FUN_110c56790;
  param_1[2] = &PTR_FUN_110c568c8;
  param_1[5] = &PTR_FUN_110c568f8;
  param_1[0x79] = &PTR_FUN_110c569c8;
  param_1[0x15] = &PTR_FUN_110c56950;
  param_1[0x51] = &PTR_FUN_110c56970;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x5a,*param_3,param_3[1]);
  }
  else {
    uVar10 = param_3[1];
    uVar9 = *param_3;
    param_1[0x5c] = param_3[2];
    param_1[0x5b] = uVar10;
    param_1[0x5a] = uVar9;
  }
  *(undefined4 *)(param_1 + 0x5d) = param_4;
  *(undefined4 *)((long)param_1 + 0x2ec) = param_5;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((long)param_1 + 0x2fd) = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x67] = 0x32aaaba7;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  lVar7 = *(long *)(*(long *)(param_2 + 0x100) + 0x260);
  puStack_70 = &UNK_10f653c20;
  plStack_68 = (long *)0x21;
  if (lVar7 != 0) {
    FUN_10a026ab4(param_1 + 0x56,lVar7 + 0x128);
    FUN_10a5ae998(param_1[0x52],&PTR_DAT_110b9f988,param_2,param_1 + 0x51);
    *(undefined1 *)(*(long *)(*(long *)(param_1[0x12] + 0x100) + 0x1d8) + 0x28) = 1;
    lVar7 = *(long *)(param_2 + 0x858);
    plVar8 = *(long **)(param_2 + 0x860);
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar5 = (undefined *)0x138;
    lStack_a0 = lVar7;
    plStack_98 = plVar8;
    __Znwm();
    FUN_10a744d54();
    lStack_90 = lVar7;
    plStack_88 = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6 = plVar8 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plVar6 = (long *)0x30;
    lStack_80 = lVar7;
    plStack_78 = plVar8;
    puStack_70 = puVar5;
    __Znwm();
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
    *plVar6 = (long)&PTR_DAT_110c5dfc0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)puVar5;
    plVar6[4] = lVar7;
    plVar6[5] = (long)plVar8;
    plStack_68 = plVar6;
    FUN_10ac4a348(&puStack_70,puVar5 + 0x28,puVar5);
    FUN_10ac4a1e4(&puStack_b0,&puStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((lStack_a0 != 0) && (puStack_b0 != (undefined *)0x0)) {
      puStack_70 = puStack_b0;
      plStack_68 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar8 = plStack_a8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_a0,&puStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          lVar7 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    plVar8 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = plStack_a8;
    puVar5 = puStack_b0;
    puStack_b0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    plVar6 = (long *)param_1[100];
    param_1[100] = plVar8;
    param_1[99] = puVar5;
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      do {
        lVar7 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar8 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar6 = plStack_a8 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    FUN_10a03d37c(&puStack_70,param_2);
    FUN_10a03d430(param_1 + 0x65,&puStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac201b4);
  (*pcVar3)();
}



/* Entry: 10ac2028c; end: 10ac2030b;  */

undefined8 FUN_10ac2028c(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f69b9ca);
  FUN_10ac1fd04(param_1,param_2,auStack_38,0,0xfffffffe);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 10ac2030c; end: 10ac203bb;  */

void FUN_10ac2030c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 **ppuVar10;
  code *pcVar11;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &puStack_20;
  if (1 < param_2 + 1U) {
    puStack_20 = &UNK_10f69c370;
    uStack_18 = 0x12;
    if (*(int *)(param_1 + 0x2ec) != -1) {
      FUN_10a0edfc4();
      ppuVar7 = &puStack_40;
      uStack_28 = 0x10ac20364;
      ppuVar10 = &puStack_30;
      if (1 < *(int *)((long)ppuVar4 + 0x2e8) + 1U) {
        puStack_40 = &UNK_10f69c383;
        uStack_38 = 0x14;
        if (param_2 != -1) {
          pcVar11 = FUN_10ac203bc;
          puStack_30 = &stack0xfffffffffffffff0;
          FUN_10a0edfc4();
          ppuVar4 = &puStack_40;
          do {
            *(long **)((long)ppuVar4 + -0x20) = unaff_x20;
            *(undefined1 **)((long)ppuVar4 + -0x18) = unaff_x19;
            *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar10;
            *(code **)((long)ppuVar4 + -8) = pcVar11;
            ppuVar10 = (undefined1 **)((long)ppuVar4 + -0x10);
            unaff_x20 = *(long **)((long)ppuVar7 + 0x2b0);
            (**(code **)(*unaff_x20 + 0x28))();
            plVar5 = *(long **)((long)ppuVar7 + 0x2b0);
            (**(code **)(*plVar5 + 0x30))();
            if ((int)plVar5 * (int)unaff_x20 != 1) {
              *(undefined8 *)((long)ppuVar4 + -0x30) = 0;
              *(undefined8 *)((long)ppuVar4 + -0x28) = 0;
              FUN_10a1e3a04(ppuVar7,(undefined1 *)((long)ppuVar4 + -0x30));
              plVar5 = *(long **)((long)ppuVar4 + -0x28);
              if (plVar5 != (long *)0x0) {
                plVar1 = plVar5 + 1;
                do {
                  lVar8 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
LAB_10ac20484:
                if (lVar8 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                }
              }
              return;
            }
            lVar8 = *(long *)((long)ppuVar7 + 0x308);
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x270);
              *(undefined8 *)((long)ppuVar4 + -0x30) = *(undefined8 *)(lVar8 + 0x268);
              *(long *)((long)ppuVar4 + -0x28) = lVar9;
              if (lVar9 != 0) {
                plVar5 = (long *)(lVar9 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar3) {
                    *plVar5 = *plVar5 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_10a1e3a04(ppuVar7,(undefined1 *)((long)ppuVar4 + -0x30));
              plVar5 = *(long **)((long)ppuVar4 + -0x28);
              if (plVar5 == (long *)0x0) {
                return;
              }
              plVar1 = plVar5 + 1;
              do {
                lVar8 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_10ac20484;
            }
            lVar8 = *(long *)((long)ppuVar7 + 0x2c0);
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x270);
              *(undefined8 *)((long)ppuVar4 + -0x30) = *(undefined8 *)(lVar8 + 0x268);
              *(long *)((long)ppuVar4 + -0x28) = lVar9;
              if (lVar9 != 0) {
                plVar5 = (long *)(lVar9 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar3) {
                    *plVar5 = *plVar5 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_10a1e3a04(ppuVar7,(undefined1 *)((long)ppuVar4 + -0x30));
              plVar5 = *(long **)((long)ppuVar4 + -0x28);
              if (plVar5 == (long *)0x0) {
                return;
              }
              plVar1 = plVar5 + 1;
              do {
                lVar8 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_10ac20484;
            }
            plVar5 = *(long **)(*(long *)(*(long *)((long)ppuVar7 + 0x90) + 0x100) + 0x260);
            *(undefined **)((long)ppuVar4 + -0x30) = &UNK_10f653c20;
            *(undefined8 *)((long)ppuVar4 + -0x28) = 0x21;
            if (plVar5 != (long *)0x0) {
              FUN_10a243348(plVar5,0);
              lVar8 = *(long *)(*plVar5 + 0x270);
              *(undefined8 *)((long)ppuVar4 + -0x40) = *(undefined8 *)(*plVar5 + 0x268);
              *(long *)((long)ppuVar4 + -0x38) = lVar8;
              if (lVar8 != 0) {
                plVar5 = (long *)(lVar8 + 8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar3) {
                    *plVar5 = *plVar5 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              FUN_10a1e3a04(ppuVar7,(undefined1 *)((long)ppuVar4 + -0x40));
              plVar5 = *(long **)((long)ppuVar4 + -0x38);
              if (plVar5 == (long *)0x0) {
                return;
              }
              plVar1 = plVar5 + 1;
              do {
                lVar8 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_10ac20484;
            }
            unaff_x19 = (undefined1 *)((long)ppuVar4 + -0x30);
            FUN_10a0edfc4();
            FUN_10a042dcc((undefined1 *)((long)ppuVar4 + -0x40));
            pcVar11 = FUN_10ac205b4;
            puVar6 = unaff_x19;
            __Unwind_Resume();
            ppuVar7 = (undefined **)(puVar6 + -0x10);
            ppuVar4 = (undefined **)((long)ppuVar4 + -0x40);
          } while( true );
        }
      }
      *(int *)((long)ppuVar4 + 0x2ec) = param_2;
      *(byte *)((long)ppuVar4 + 0x2a8) = *(byte *)((long)ppuVar4 + 0x2a8) & 0xfd;
      return;
    }
  }
  *(int *)(param_1 + 0x2e8) = param_2;
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) & 0xfd;
  return;
}



/* Entry: 10ac203bc; end: 10ac205b3;  */

void FUN_10ac203bc(undefined1 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = *(long **)(param_1 + 0x2b0);
    (**(code **)(*unaff_x20 + 0x28))();
    plVar4 = *(long **)(param_1 + 0x2b0);
    (**(code **)(*plVar4 + 0x30))();
    if ((int)plVar4 * (int)unaff_x20 != 1) {
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      FUN_10a1e3a04(param_1,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_10ac20484:
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      return;
    }
    lVar5 = *(long *)(param_1 + 0x308);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar5 + 0x268);
      *(long *)((long)register0x00000008 + -0x28) = lVar6;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(param_1,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10ac20484;
    }
    lVar5 = *(long *)(param_1 + 0x2c0);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar5 + 0x268);
      *(long *)((long)register0x00000008 + -0x28) = lVar6;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(param_1,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10ac20484;
    }
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x30) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0x21;
    if (plVar4 != (long *)0x0) {
      FUN_10a243348(plVar4,0);
      lVar5 = *(long *)(*plVar4 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x40) = *(undefined8 *)(*plVar4 + 0x268);
      *(long *)((long)register0x00000008 + -0x38) = lVar5;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(param_1,(undefined1 *)((long)register0x00000008 + -0x40));
      plVar4 = *(long **)((long)register0x00000008 + -0x38);
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_10ac20484;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_10a0edfc4();
    FUN_10a042dcc((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10ac205b4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x10;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  } while( true );
}



/* Entry: 10ac205b4; end: 10ac205c3;  */

void FUN_10ac205b4(undefined1 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar5 = param_1 + -0x10;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = *(long **)(param_1 + 0x2a0);
    (**(code **)(*unaff_x20 + 0x28))();
    plVar4 = *(long **)(param_1 + 0x2a0);
    (**(code **)(*plVar4 + 0x30))();
    if ((int)plVar4 * (int)unaff_x20 != 1) {
      *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
      FUN_10a1e3a04(puVar5,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 != (long *)0x0) {
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
LAB_10ac20484:
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      return;
    }
    lVar6 = *(long *)(param_1 + 0x2f8);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar6 + 0x268);
      *(long *)((long)register0x00000008 + -0x28) = lVar7;
      if (lVar7 != 0) {
        plVar4 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(puVar5,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 == (long *)0x0) {
        return;
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
      goto LAB_10ac20484;
    }
    lVar6 = *(long *)(param_1 + 0x2b0);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar6 + 0x268);
      *(long *)((long)register0x00000008 + -0x28) = lVar7;
      if (lVar7 != 0) {
        plVar4 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(puVar5,(undefined1 *)((long)register0x00000008 + -0x30));
      plVar4 = *(long **)((long)register0x00000008 + -0x28);
      if (plVar4 == (long *)0x0) {
        return;
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
      goto LAB_10ac20484;
    }
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x80) + 0x100) + 0x260);
    *(undefined **)((long)register0x00000008 + -0x30) = &UNK_10f653c20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0x21;
    if (plVar4 != (long *)0x0) {
      FUN_10a243348(plVar4,0);
      lVar6 = *(long *)(*plVar4 + 0x270);
      *(undefined8 *)((long)register0x00000008 + -0x40) = *(undefined8 *)(*plVar4 + 0x268);
      *(long *)((long)register0x00000008 + -0x38) = lVar6;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a1e3a04(puVar5,(undefined1 *)((long)register0x00000008 + -0x40));
      plVar4 = *(long **)((long)register0x00000008 + -0x38);
      if (plVar4 == (long *)0x0) {
        return;
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
      goto LAB_10ac20484;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_10a0edfc4();
    FUN_10a042dcc((undefined1 *)((long)register0x00000008 + -0x40));
    unaff_x30 = FUN_10ac205b4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  } while( true );
}



/* Entry: 10ac205c4; end: 10ac2067f;  */

void FUN_10ac205c4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_48,param_2,&PTR_DAT_110c56a30,&UNK_10f69b9ca,0);
  if (*(char *)(param_1 + 0x2e7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2d0));
  }
  *(undefined8 *)(param_1 + 0x2d8) = uStack_40;
  *(undefined8 *)(param_1 + 0x2d0) = uStack_48;
  *(undefined8 *)(param_1 + 0x2e0) = uStack_38;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c56a50,0);
  *(int *)(param_1 + 0x2e8) = (int)plVar1;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c56a70,0xfffffffe);
  *(int *)(param_1 + 0x2ec) = (int)param_2;
  return;
}



/* Entry: 10ac20680; end: 10ac206e7;  */

void FUN_10ac20680(long param_1,long *param_2)

{
  FUN_10a00d760(param_2,&PTR_DAT_110c56a30,param_1 + 0x2d0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c56a50,*(undefined4 *)(param_1 + 0x2e8));
                    /* WARNING: Could not recover jumptable at 0x00010ac206e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c56a70,*(undefined4 *)(param_1 + 0x2ec));
  return;
}



/* Entry: 10ac206e8; end: 10ac20703;  */

byte FUN_10ac206e8(long param_1)

{
  return *(byte *)(param_1 + 0x2a8) & 2;
}



/* Entry: 10ac20704; end: 10ac211a3;  */

void FUN_10ac20704(long ******param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long ******pppppplVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  long *****ppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ****pppplVar12;
  byte bVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long ***ppplVar18;
  long **pplVar19;
  long ***ppplVar20;
  int iVar21;
  long *****ppppplVar22;
  long ***ppplStack_210;
  long ***ppplStack_208;
  long **pplStack_200;
  long ***ppplStack_1f8;
  long ***ppplStack_1f0;
  undefined7 uStack_1e8;
  char cStack_1e1;
  long *****ppppplStack_1e0;
  long ****pppplStack_1d8;
  long ****pppplStack_1d0;
  long *****ppppplStack_1c0;
  long ***ppplStack_1b8;
  long ***ppplStack_1b0;
  long **pplStack_1a8;
  long *****ppppplStack_180;
  long ****pppplStack_178;
  long *****ppppplStack_170;
  long ****pppplStack_168;
  long ***ppplStack_160;
  long **pplStack_158;
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [21];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_210 = (long ***)0x0;
  ppplStack_208 = (long ***)0x0;
  pplStack_200 = (long **)0x0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x67);
  ppppplVar22 = param_1[0x5e];
  if (ppppplVar22 == (long *****)0x0) {
    if (*(char *)((long)param_1 + 0x2e7) < '\0') {
      if (param_1[0x5b] == (long *****)0x0) goto LAB_10ac20814;
    }
    else if (*(char *)((long)param_1 + 0x2e7) == '\0') {
LAB_10ac20814:
      if (param_1[0x58] != (long *****)0x0) {
        pppppplVar10 = param_1 + 0x58;
        goto LAB_10ac20de0;
      }
    }
    ppplVar20 = param_1[0x12][0x20][0x3b];
LAB_10ac20834:
    if (*(int *)(param_1 + 0x5d) == -1) {
LAB_10ac2086c:
      if (*(int *)((long)ppplVar20 + 0x1e4) == 2) {
        bVar13 = *(byte *)((long)ppplVar20 + 0x5f);
        pplVar19 = ppplVar20[10];
LAB_10ac20884:
        if (-1 < (char)bVar13) {
          pplVar19 = (long **)(ulong)bVar13;
        }
        bVar6 = pplVar19 != (long **)0x0;
      }
      else {
LAB_10ac20898:
        bVar6 = false;
      }
      bVar7 = false;
      bVar13 = *(byte *)(param_1 + 0x55) & 0xfe | bVar6;
LAB_10ac20a2c:
      *(byte *)(param_1 + 0x55) = bVar13;
      if ((bVar13 & 3) == 1) {
        if (*(char *)((long)param_1 + 0x2e7) < '\0') {
          if (param_1[0x5b] != (long *****)0x0) goto LAB_10ac20a54;
        }
        else if (*(char *)((long)param_1 + 0x2e7) != '\0') {
LAB_10ac20a54:
          FUN_10ac45bf0(&ppppplStack_1e0,param_1 + 8);
          if (((long ******)ppppplStack_1e0 == (long ******)0x0) ||
             (pppppplVar10 = (long ******)ppppplStack_1e0,
             ___dynamic_cast(ppppplStack_1e0,&PTR_DAT_110c681e8,&PTR_DAT_110c5a040,0),
             pppppplVar10 == (long ******)0x0)) {
            pppppplVar15 = &ppppplStack_180;
          }
          else {
            pppplStack_178 = pppplStack_1d8;
            pppppplVar15 = &ppppplStack_1e0;
            ppppplStack_180 = (long *****)pppppplVar10;
          }
          *pppppplVar15 = (long *****)0x0;
          pppppplVar15[1] = (long *****)0x0;
          pppplVar12 = pppplStack_178;
          ppppplVar22 = ppppplStack_180;
          if ((long *****)pppplStack_178 != (long *****)0x0) {
            ppppplVar9 = (long *****)(pppplStack_178 + 2);
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
              if (bVar6) {
                *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            ppppplVar9 = (long *****)(pppplStack_178 + 1);
            do {
              pppplVar16 = *ppppplVar9;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
              if (bVar6) {
                *ppppplVar9 = (long ****)((long)pppplVar16 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppplVar16 == (long ****)0x0) {
              (*(code *)(*pppplStack_178)[2])(pppplStack_178);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar12);
            }
          }
          pppplVar16 = pppplStack_1d8;
          if ((long *****)pppplStack_1d8 != (long *****)0x0) {
            ppppplVar9 = (long *****)(pppplStack_1d8 + 1);
            do {
              pppplVar17 = *ppppplVar9;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
              if (bVar6) {
                *ppppplVar9 = (long ****)((long)pppplVar17 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppplVar17 == (long ****)0x0) {
              (*(code *)(*pppplStack_1d8)[2])(pppplStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar16);
            }
          }
          if ((long *****)pppplVar12 != (long *****)0x0) {
            ppppplVar9 = (long *****)(pppplVar12 + 2);
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
              if (bVar6) {
                *ppppplVar9 = (long ****)((long)*ppppplVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppplStack_180 = (long *****)FUN_10ac4a540;
          pppplStack_178 = (long ****)&PTR_DAT_110c5e060;
          pppplStack_168 = pppplVar12;
          ppppplStack_170 = ppppplVar22;
          iVar21 = *(int *)(param_1 + 0x5d);
          lVar2 = 0x30;
          if (iVar21 != 0) {
            lVar2 = 0x48;
          }
          plVar1 = (long *)((long)ppplVar20 + lVar2);
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            func_0x000107c3192c(&ppppplStack_1e0,*plVar1,plVar1[1]);
            iVar21 = *(int *)(param_1 + 0x5d);
          }
          else {
            pppplStack_1d8 = (long ****)plVar1[1];
            ppppplStack_1e0 = (long *****)*plVar1;
            pppplStack_1d0 = (long ****)plVar1[2];
          }
          func_0x000107c2b054(&ppplStack_1f8,&UNK_10f69b9ca);
          uVar8 = iVar21 != 0;
          if (*(int *)((long)param_1 + 0x2ec) == -1) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppplStack_1f8,ppplVar20 + 9);
            uVar8 = 2;
          }
          ppppplStack_1c0 = ppppplStack_180;
          (*(code *)pppplStack_178[3])(&ppplStack_1b8,&pppplStack_178);
          FUN_10ad39efc(ppplVar20,uVar8,param_1 + 0x5a,&ppppplStack_1e0,&ppplStack_1f8,1,bVar7,
                        &ppppplStack_1c0);
          (*(code *)*ppplStack_1b8)(&ppplStack_1b8);
          if (cStack_1e1 < '\0') {
            __ZdlPv(ppplStack_1f8);
          }
          if ((long)pppplStack_1d0 < 0) {
            __ZdlPv(ppppplStack_1e0);
          }
          (*(code *)*pppplStack_178)(&pppplStack_178);
          if ((long *****)pppplVar12 != (long *****)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar12);
          }
        }
      }
      goto LAB_10ac20e04;
    }
    if (*(int *)(param_1 + 0x5d) == 0) {
      if (*(int *)(ppplVar20 + 0x3c) != 2) goto LAB_10ac20898;
      bVar13 = *(byte *)((long)ppplVar20 + 0x47);
      pplVar19 = ppplVar20[7];
      goto LAB_10ac20884;
    }
    if (*(int *)((long)param_1 + 0x2ec) == -1) goto LAB_10ac2086c;
  }
  else {
    pppppplVar15 = param_1 + 0x5e;
    if ((*(byte *)((long)param_1 + 0x304) & 1) != 0) {
      ppplVar20 = param_1[0x12][0x20][0x3b];
      ppppplVar9 = ppppplVar22;
      FUN_10a247214();
      if ((int)ppppplVar9 == 0) goto LAB_10ac20834;
      pppppplVar10 = param_1 + 0x5a;
      cVar3 = *(char *)((long)param_1 + 0x2e7);
      ppppplVar14 = (long *****)(long)cVar3;
      ppppplVar9 = ppppplVar14;
      if ((long)ppppplVar14 < 0) {
        ppppplVar9 = param_1[0x5b];
      }
      if (ppppplVar9 == (long *****)0x0) {
        if ((((ulong)ppppplVar22[0xe] & 1) == 0) || (((ulong)ppppplVar22[0xd] & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pppppplVar10,ppppplVar22 + 10);
        ppppplVar22 = *pppppplVar15;
        if ((((ulong)ppppplVar22[0xe] & 1) == 0) || (((ulong)ppppplVar22[0xd] & 1) == 0))
        goto LAB_10ac21054;
        bVar7 = true;
      }
      else {
        if ((((ulong)ppppplVar22[0xe] & 1) == 0) || (((ulong)ppppplVar22[0xd] & 1) == 0))
        goto LAB_10ac21054;
        ppppplVar9 = param_1[0x5b];
        if (-1 < cVar3) {
          ppppplVar9 = ppppplVar14;
        }
        bVar13 = *(byte *)((long)ppppplVar22 + 0x67);
        ppppplVar14 = (long *****)ppppplVar22[0xb];
        if (-1 < (char)bVar13) {
          ppppplVar14 = (long *****)(ulong)bVar13;
        }
        if (ppppplVar9 == ppppplVar14) {
          pppppplVar11 = (long ******)*pppppplVar10;
          if (-1 < cVar3) {
            pppppplVar11 = pppppplVar10;
          }
          ppppplVar9 = (long *****)ppppplVar22[10];
          if (-1 < (char)bVar13) {
            ppppplVar9 = ppppplVar22 + 10;
          }
          _memcmp(pppppplVar11,ppppplVar9);
          bVar7 = (int)pppppplVar11 == 0;
        }
        else {
          bVar7 = false;
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (ppplVar20 + 0xc,ppppplVar22 + 10);
      ppppplVar22 = param_1[0x5e];
      FUN_10a247594(ppppplVar22,param_1[0x12]);
      if ((int)ppppplVar22 == 0) {
        *(undefined4 *)((long)ppplVar20 + 0x1e4) = 2;
        ppppplVar22 = *pppppplVar15;
        if ((((ulong)ppppplVar22[0xe] & 1) == 0) || (((ulong)ppppplVar22[9] & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (ppplVar20 + 9,ppppplVar22 + 6);
        if (*(int *)(param_1 + 0x60) == 1) {
          param_1[0x5d] = (long *****)0xffffffff00000000;
          if (*(int *)(ppplVar20 + 0x3c) == 2) {
            *(undefined4 *)(ppplVar20 + 0x3d) = 2;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(ppplVar20 + 0x3c) = 2;
        ppppplVar22 = *pppppplVar15;
        if ((((ulong)ppppplVar22[0xe] & 1) == 0) || (((ulong)ppppplVar22[9] & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (ppplVar20 + 6,ppppplVar22 + 6);
        *(undefined4 *)(param_1 + 0x5d) = 0;
      }
      bVar13 = *(byte *)(param_1 + 0x55) | 1;
      goto LAB_10ac20a2c;
    }
    FUN_109fed7e0(&ppppplStack_180);
    ppppplVar22 = *pppppplVar15;
    if (ppppplVar22 == (long *****)0x0) {
      FUN_10a002568(&ppppplStack_180,&UNK_10f69c3a0,0xe);
    }
    else {
      pppppplVar10 = &ppppplStack_180;
      FUN_10a002568(pppppplVar10,&UNK_10f69c398,7);
      FUN_10a002568();
      if ((*(byte *)((long)pppppplVar10 + (long)((*pppppplVar10)[-3] + 4)) & 5) == 0) {
        if (*(char *)((long)ppppplVar22 + 0x2f) < '\0') {
          func_0x000107c3192c(&ppppplStack_1c0,ppppplVar22[3],ppppplVar22[4]);
        }
        else {
          ppplStack_1b8 = (long ***)ppppplVar22[4];
          ppppplStack_1c0 = (long *****)ppppplVar22[3];
          ppplStack_1b0 = (long ***)ppppplVar22[5];
        }
      }
      else {
        func_0x000107c2b054(&ppppplStack_1c0,"default");
      }
      if ((long)ppplStack_1b0 < 0) {
        __ZdlPv(ppppplStack_1c0);
      }
    }
    pppppplVar10 = &ppppplStack_180;
    FUN_10a002568(pppppplVar10,&UNK_10f69c3af,10);
    pppppplVar11 = param_1 + 0x5a;
    if (*(char *)((long)param_1 + 0x2e7) < '\0') {
      if (param_1[0x5b] == (long *****)0x0) goto LAB_10ac20ce0;
      func_0x000107c3192c(&ppppplStack_1e0,*pppppplVar11);
    }
    else if (*(char *)((long)param_1 + 0x2e7) == '\0') {
LAB_10ac20ce0:
      func_0x000107c2b054(&ppppplStack_1e0,"default");
    }
    else {
      pppplStack_1d8 = (long ****)param_1[0x5b];
      ppppplStack_1e0 = *pppppplVar11;
      pppplStack_1d0 = (long ****)param_1[0x5c];
    }
    ppppplVar22 = (long *****)pppplStack_1d8;
    pppppplVar4 = (long ******)ppppplStack_1e0;
    if (-1 < (long)pppplStack_1d0) {
      ppppplVar22 = (long *****)((ulong)pppplStack_1d0 >> 0x38);
      pppppplVar4 = &ppppplStack_1e0;
    }
    FUN_10a002568(pppppplVar10,pppppplVar4,ppppplVar22);
    if ((long)pppplStack_1d0 < 0) {
      __ZdlPv(ppppplStack_1e0);
    }
    func_0x00010a002480(&ppplStack_1f8,&pppplStack_178,&ppppplStack_1e0);
    appuStack_110[0] = &PTR_DAT_11088d708;
    ppppplStack_180 = (long *****)&PTR_DAT_11088d6e0;
    pppplStack_178 = (long ****)&PTR_DAT_11088d7b0;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    pppplStack_178 =
         (long ****)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(&ppppplStack_170);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppppplStack_180,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
    if ((long)pplStack_200 < 0) {
      __ZdlPv(ppplStack_210);
    }
    ppplStack_208 = ppplStack_1f0;
    ppplStack_210 = ppplStack_1f8;
    pplStack_200 = (long **)CONCAT17(cStack_1e1,uStack_1e8);
    pppppplVar10 = param_1 + 0x74;
    FUN_10aa0893c(pppppplVar10,&ppplStack_210);
    if (pppppplVar10 == (long ******)0x0) {
      pppppplVar10 = param_1 + 0x6f;
      func_0x00010596ff94(pppppplVar10,&ppplStack_210);
      if (pppppplVar10 != (long ******)0x0) goto LAB_10ac20e04;
      func_0x000107c2827c(param_1 + 0x6f,&ppplStack_210,&ppplStack_210);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x67);
      ppppplStack_1c0 = (long *****)param_1;
      if ((long)pplStack_200 < 0) {
        func_0x000107c3192c(&ppplStack_1b8,ppplStack_210,ppplStack_208);
      }
      else {
        ppplStack_1b0 = ppplStack_208;
        ppplStack_1b8 = ppplStack_210;
        pplStack_1a8 = pplStack_200;
      }
      ppppplVar22 = ppppplStack_1c0;
      ppppplStack_180 = (long *****)FUN_10ac4a7e0;
      pppplStack_178 = (long ****)&PTR_DAT_110c5e0c0;
      ppplStack_160 = ppplStack_1b0;
      pppplStack_168 = (long ****)ppplStack_1b8;
      pplStack_158 = pplStack_1a8;
      pppplVar12 = (long ****)0x60;
      ppppplStack_170 = ppppplStack_1c0;
      __Znwm();
      pppplVar12[1] = (long ***)0x0;
      pppplVar12[2] = (long ***)0x0;
      *pppplVar12 = (long ***)&PTR_FUN_110c172d0;
      ppppplStack_1c0 = (long *****)(pppplVar12 + 3);
      *ppppplStack_1c0 = (long ****)FUN_10ac4a7e0;
      pppplVar12[4] = (long ***)&PTR_DAT_110c5e0c0;
      pppplVar12[5] = (long ***)ppppplVar22;
      pppplVar12[7] = ppplStack_160;
      pppplVar12[6] = (long ***)pppplStack_168;
      pppplVar12[8] = (long ***)pplStack_158;
      pppplStack_168 = (long ****)0x0;
      ppplStack_160 = (long ***)0x0;
      pplStack_158 = (long **)0x0;
      *(undefined1 *)(pppplVar12 + 0xb) = 1;
      ppppplVar22 = (long *****)0x58;
      ppplStack_1b8 = (long ***)pppplVar12;
      __Znwm();
      ppppplVar22[1] = (long ****)0x0;
      ppppplVar22[2] = (long ****)0x0;
      *ppppplVar22 = (long ****)&PTR_FUN_110c17320;
      ppppplVar22[4] = (long ****)0x0;
      ppppplVar22[5] = (long ****)0x0;
      ppppplStack_1e0 = ppppplVar22 + 3;
      *ppppplStack_1e0 = (long ****)&PTR_DAT_110c17370;
      ppppplVar22[9] = (long ****)0x0;
      ppppplVar22[8] = (long ****)0x0;
      ppppplVar22[10] = (long ****)0x0;
      ppppplVar22[7] = (long ****)0x0;
      ppppplVar22[6] = (long ****)0x0;
      pppplStack_1d8 = (long ****)ppppplVar22;
      FUN_10a73fecc(ppppplVar22 + 6,pppppplVar15);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (ppppplVar22 + 8,pppppplVar11);
      FUN_10a744ec8(param_1[99],&ppppplStack_1e0,&ppppplStack_1c0);
      pppplVar12 = pppplStack_1d8;
      if ((long *****)pppplStack_1d8 != (long *****)0x0) {
        ppppplVar22 = (long *****)(pppplStack_1d8 + 1);
        do {
          pppplVar16 = *ppppplVar22;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppplVar22,0x10);
          if (bVar6) {
            *ppppplVar22 = (long ****)((long)pppplVar16 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppplVar16 == (long ****)0x0) {
          (*(code *)(*pppplStack_1d8)[2])(pppplStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar12);
        }
      }
      ppplVar20 = ppplStack_1b8;
      if ((long ****)ppplStack_1b8 != (long ****)0x0) {
        pppplVar12 = (long ****)(ppplStack_1b8 + 1);
        do {
          ppplVar18 = *pppplVar12;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppplVar12,0x10);
          if (bVar6) {
            *pppplVar12 = (long ***)((long)ppplVar18 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppplVar18 == (long ***)0x0) {
          (*(code *)(*ppplStack_1b8)[2])(ppplStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar20);
        }
      }
      (*(code *)*pppplStack_178)(&pppplStack_178);
    }
    else {
      pppppplVar10 = pppppplVar10 + 5;
LAB_10ac20de0:
      func_0x00010a04a704(param_1 + 0x61,pppppplVar10);
      *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 2;
LAB_10ac20e04:
      __ZNSt3__15mutex6unlockEv(param_1 + 0x67);
    }
    if ((long)pplStack_200 < 0) {
      __ZdlPv(ppplStack_210);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_109febc44(&ppppplStack_180);
  FUN_10a002568(&ppppplStack_170,&UNK_10f69c3ba,0x36);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x00010a002480(&ppppplStack_1e0,&pppplStack_168,&ppplStack_1f8);
  FUN_10a0029c0(&ppppplStack_1e0);
LAB_10ac21054:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac21058);
  (*pcVar5)();
}



/* Entry: 10ac211a4; end: 10ac211d7;  */

void FUN_10ac211a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  long ****pppplVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  long lVar10;
  long *****ppppplVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte bVar16;
  ulong uVar17;
  long *****ppppplVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined7 uStack_1e8;
  char cStack_1e1;
  long ****pppplStack_1e0;
  undefined **ppuStack_1d8;
  ulong uStack_1d0;
  long ****pppplStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long ****pppplStack_180;
  undefined **ppuStack_178;
  long ****pppplStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [21];
  long lStack_68;
  
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
    return;
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_210 = (undefined **)0x0;
  puStack_208 = (undefined *)0x0;
  puStack_200 = (undefined *)0x0;
  __ZNSt3__15mutex4lockEv(param_1 + 0xb0);
  lVar23 = *(long *)(param_1 + 0x68);
  if (lVar23 == 0) {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_10ac20814;
    }
    else if (*(char *)(param_1 + 0x5f) == '\0') {
LAB_10ac20814:
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar23 = param_1 + 0x38;
        goto LAB_10ac20de0;
      }
    }
    lVar21 = *(long *)(*(long *)(*(long *)(param_1 + -0x1f8) + 0x100) + 0x1d8);
LAB_10ac20834:
    if (*(int *)(param_1 + 0x60) == -1) {
LAB_10ac2086c:
      if (*(int *)(lVar21 + 0x1e4) == 2) {
        bVar16 = *(byte *)(lVar21 + 0x5f);
        uVar20 = *(ulong *)(lVar21 + 0x50);
LAB_10ac20884:
        if (-1 < (char)bVar16) {
          uVar20 = (ulong)bVar16;
        }
        bVar7 = uVar20 != 0;
      }
      else {
LAB_10ac20898:
        bVar7 = false;
      }
      bVar8 = false;
      bVar16 = *(byte *)(param_1 + 0x20) & 0xfe | bVar7;
LAB_10ac20a2c:
      *(byte *)(param_1 + 0x20) = bVar16;
      if ((bVar16 & 3) == 1) {
        if (*(char *)(param_1 + 0x5f) < '\0') {
          if (*(long *)(param_1 + 0x50) != 0) goto LAB_10ac20a54;
        }
        else if (*(char *)(param_1 + 0x5f) != '\0') {
LAB_10ac20a54:
          FUN_10ac45bf0(&pppplStack_1e0,param_1 + -0x248);
          if (((long *****)pppplStack_1e0 == (long *****)0x0) ||
             (ppppplVar11 = (long *****)pppplStack_1e0,
             ___dynamic_cast(pppplStack_1e0,&PTR_DAT_110c681e8,&PTR_DAT_110c5a040,0),
             ppppplVar11 == (long *****)0x0)) {
            ppppplVar18 = &pppplStack_180;
          }
          else {
            ppuStack_178 = ppuStack_1d8;
            ppppplVar18 = &pppplStack_1e0;
            pppplStack_180 = (long ****)ppppplVar11;
          }
          *ppppplVar18 = (long ****)0x0;
          ppppplVar18[1] = (long ****)0x0;
          ppuVar14 = ppuStack_178;
          pppplVar5 = pppplStack_180;
          if (ppuStack_178 != (undefined **)0x0) {
            ppuVar15 = ppuStack_178 + 2;
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = *ppuVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            ppuVar15 = ppuStack_178 + 1;
            do {
              puVar19 = *ppuVar15;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar19 == (undefined *)0x0) {
              (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
            }
          }
          ppuVar15 = ppuStack_1d8;
          if (ppuStack_1d8 != (undefined **)0x0) {
            ppuVar3 = ppuStack_1d8 + 1;
            do {
              puVar19 = *ppuVar3;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
              if (bVar7) {
                *ppuVar3 = puVar19 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar19 == (undefined *)0x0) {
              (**(code **)(*ppuStack_1d8 + 0x10))(ppuStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
            }
          }
          if (ppuVar14 != (undefined **)0x0) {
            ppuVar15 = ppuVar14 + 2;
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar7) {
                *ppuVar15 = *ppuVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppplStack_180 = (long ****)FUN_10ac4a540;
          ppuStack_178 = &PTR_DAT_110c5e060;
          ppuStack_168 = ppuVar14;
          pppplStack_170 = pppplVar5;
          iVar22 = *(int *)(param_1 + 0x60);
          lVar23 = 0x30;
          if (iVar22 != 0) {
            lVar23 = 0x48;
          }
          plVar1 = (long *)(lVar21 + lVar23);
          if (*(char *)((long)plVar1 + 0x17) < '\0') {
            func_0x000107c3192c(&pppplStack_1e0,*plVar1,plVar1[1]);
            iVar22 = *(int *)(param_1 + 0x60);
          }
          else {
            ppuStack_1d8 = (undefined **)plVar1[1];
            pppplStack_1e0 = (long ****)*plVar1;
            uStack_1d0 = plVar1[2];
          }
          func_0x000107c2b054(&ppuStack_1f8,&UNK_10f69b9ca);
          uVar9 = iVar22 != 0;
          if (*(int *)(param_1 + 100) == -1) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&ppuStack_1f8,lVar21 + 0x48);
            uVar9 = 2;
          }
          pppplStack_1c0 = pppplStack_180;
          (*(code *)ppuStack_178[3])(&ppuStack_1b8,&ppuStack_178);
          FUN_10ad39efc(lVar21,uVar9,param_1 + 0x48,&pppplStack_1e0,&ppuStack_1f8,1,bVar8,
                        &pppplStack_1c0);
          (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
          if (cStack_1e1 < '\0') {
            __ZdlPv(ppuStack_1f8);
          }
          if ((long)uStack_1d0 < 0) {
            __ZdlPv(pppplStack_1e0);
          }
          (*(code *)*ppuStack_178)(&ppuStack_178);
          if (ppuVar14 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
          }
        }
      }
      goto LAB_10ac20e04;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      if (*(int *)(lVar21 + 0x1e0) != 2) goto LAB_10ac20898;
      bVar16 = *(byte *)(lVar21 + 0x47);
      uVar20 = *(ulong *)(lVar21 + 0x38);
      goto LAB_10ac20884;
    }
    if (*(int *)(param_1 + 100) == -1) goto LAB_10ac2086c;
  }
  else {
    plVar1 = (long *)(param_1 + 0x68);
    if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
      lVar21 = *(long *)(*(long *)(*(long *)(param_1 + -0x1f8) + 0x100) + 0x1d8);
      lVar10 = lVar23;
      FUN_10a247214();
      if ((int)lVar10 == 0) goto LAB_10ac20834;
      plVar2 = (long *)(param_1 + 0x48);
      cVar4 = *(char *)(param_1 + 0x5f);
      uVar17 = (ulong)cVar4;
      uVar20 = uVar17;
      if ((long)uVar17 < 0) {
        uVar20 = *(ulong *)(param_1 + 0x50);
      }
      if (uVar20 == 0) {
        if (((*(byte *)(lVar23 + 0x70) & 1) == 0) || ((*(byte *)(lVar23 + 0x68) & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar2,lVar23 + 0x50);
        lVar23 = *plVar1;
        if (((*(byte *)(lVar23 + 0x70) & 1) == 0) || ((*(byte *)(lVar23 + 0x68) & 1) == 0))
        goto LAB_10ac21054;
        bVar8 = true;
      }
      else {
        if (((*(byte *)(lVar23 + 0x70) & 1) == 0) || ((*(byte *)(lVar23 + 0x68) & 1) == 0))
        goto LAB_10ac21054;
        uVar20 = *(ulong *)(param_1 + 0x50);
        if (-1 < cVar4) {
          uVar20 = uVar17;
        }
        bVar16 = *(byte *)(lVar23 + 0x67);
        uVar17 = *(ulong *)(lVar23 + 0x58);
        if (-1 < (char)bVar16) {
          uVar17 = (ulong)bVar16;
        }
        if (uVar20 == uVar17) {
          plVar12 = (long *)*plVar2;
          if (-1 < cVar4) {
            plVar12 = plVar2;
          }
          plVar2 = (long *)*(long *)(lVar23 + 0x50);
          if (-1 < (char)bVar16) {
            plVar2 = (long *)(lVar23 + 0x50);
          }
          _memcmp(plVar12,plVar2);
          bVar8 = (int)plVar12 == 0;
        }
        else {
          bVar8 = false;
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (lVar21 + 0x60,lVar23 + 0x50);
      uVar13 = *(undefined8 *)(param_1 + 0x68);
      FUN_10a247594(uVar13,*(undefined8 *)(param_1 + -0x1f8));
      if ((int)uVar13 == 0) {
        *(undefined4 *)(lVar21 + 0x1e4) = 2;
        lVar23 = *plVar1;
        if (((*(byte *)(lVar23 + 0x70) & 1) == 0) || ((*(byte *)(lVar23 + 0x48) & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar21 + 0x48,lVar23 + 0x30);
        if (*(int *)(param_1 + 0x78) == 1) {
          *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000000;
          if (*(int *)(lVar21 + 0x1e0) == 2) {
            *(undefined4 *)(lVar21 + 0x1e8) = 2;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(lVar21 + 0x1e0) = 2;
        lVar23 = *plVar1;
        if (((*(byte *)(lVar23 + 0x70) & 1) == 0) || ((*(byte *)(lVar23 + 0x48) & 1) == 0))
        goto LAB_10ac21054;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar21 + 0x30,lVar23 + 0x30);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      bVar16 = *(byte *)(param_1 + 0x20) | 1;
      goto LAB_10ac20a2c;
    }
    FUN_109fed7e0(&pppplStack_180);
    lVar23 = *plVar1;
    if (lVar23 == 0) {
      FUN_10a002568(&pppplStack_180,&UNK_10f69c3a0,0xe);
    }
    else {
      ppppplVar11 = &pppplStack_180;
      FUN_10a002568(ppppplVar11,&UNK_10f69c398,7);
      FUN_10a002568();
      if ((*(byte *)((long)ppppplVar11 + (long)((*ppppplVar11)[-3] + 4)) & 5) == 0) {
        if (*(char *)(lVar23 + 0x2f) < '\0') {
          func_0x000107c3192c(&pppplStack_1c0,*(undefined8 *)(lVar23 + 0x18),
                              *(undefined8 *)(lVar23 + 0x20));
        }
        else {
          ppuStack_1b8 = *(undefined ***)(lVar23 + 0x20);
          pppplStack_1c0 = *(long *****)(lVar23 + 0x18);
          puStack_1b0 = *(undefined **)(lVar23 + 0x28);
        }
      }
      else {
        func_0x000107c2b054(&pppplStack_1c0,"default");
      }
      if ((long)puStack_1b0 < 0) {
        __ZdlPv(pppplStack_1c0);
      }
    }
    ppppplVar11 = &pppplStack_180;
    FUN_10a002568(ppppplVar11,&UNK_10f69c3af,10);
    plVar2 = (long *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x5f) < '\0') {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_10ac20ce0;
      func_0x000107c3192c(&pppplStack_1e0,*plVar2);
    }
    else if (*(char *)(param_1 + 0x5f) == '\0') {
LAB_10ac20ce0:
      func_0x000107c2b054(&pppplStack_1e0,"default");
    }
    else {
      ppuStack_1d8 = *(undefined ***)(param_1 + 0x50);
      pppplStack_1e0 = (long ****)*plVar2;
      uStack_1d0 = *(ulong *)(param_1 + 0x58);
    }
    ppuVar14 = ppuStack_1d8;
    ppppplVar18 = (long *****)pppplStack_1e0;
    if (-1 < (long)uStack_1d0) {
      ppuVar14 = (undefined **)(uStack_1d0 >> 0x38);
      ppppplVar18 = &pppplStack_1e0;
    }
    FUN_10a002568(ppppplVar11,ppppplVar18,ppuVar14);
    if ((long)uStack_1d0 < 0) {
      __ZdlPv(pppplStack_1e0);
    }
    func_0x00010a002480(&ppuStack_1f8,&ppuStack_178,&pppplStack_1e0);
    appuStack_110[0] = &PTR_DAT_11088d708;
    pppplStack_180 = (long ****)&PTR_DAT_11088d6e0;
    ppuStack_178 = &PTR_DAT_11088d7b0;
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    ppuStack_178 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(&pppplStack_170);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppplStack_180,&PTR_PTR_11088d720);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
    if ((long)puStack_200 < 0) {
      __ZdlPv(ppuStack_210);
    }
    puStack_208 = puStack_1f0;
    ppuStack_210 = ppuStack_1f8;
    puStack_200 = (undefined *)CONCAT17(cStack_1e1,uStack_1e8);
    lVar23 = param_1 + 0x118;
    FUN_10aa0893c(lVar23,&ppuStack_210);
    if (lVar23 == 0) {
      lVar23 = param_1 + 0xf0;
      func_0x00010596ff94(lVar23,&ppuStack_210);
      if (lVar23 != 0) goto LAB_10ac20e04;
      func_0x000107c2827c(param_1 + 0xf0,&ppuStack_210,&ppuStack_210);
      __ZNSt3__15mutex6unlockEv(param_1 + 0xb0);
      pppplStack_1c0 = (long ****)(param_1 + -0x288);
      if ((long)puStack_200 < 0) {
        func_0x000107c3192c(&ppuStack_1b8,ppuStack_210,puStack_208);
      }
      else {
        puStack_1b0 = puStack_208;
        ppuStack_1b8 = ppuStack_210;
        puStack_1a8 = puStack_200;
      }
      pppplVar5 = pppplStack_1c0;
      pppplStack_180 = (long ****)FUN_10ac4a7e0;
      ppuStack_178 = &PTR_DAT_110c5e0c0;
      puStack_160 = puStack_1b0;
      ppuStack_168 = ppuStack_1b8;
      puStack_158 = puStack_1a8;
      ppuVar14 = (undefined **)0x60;
      pppplStack_170 = pppplStack_1c0;
      __Znwm();
      ppuVar14[1] = (undefined *)0x0;
      ppuVar14[2] = (undefined *)0x0;
      *ppuVar14 = (undefined *)&PTR_FUN_110c172d0;
      pppplStack_1c0 = (long ****)(ppuVar14 + 3);
      *pppplStack_1c0 = (long ***)FUN_10ac4a7e0;
      ppuVar14[4] = (undefined *)&PTR_DAT_110c5e0c0;
      ppuVar14[5] = (undefined *)pppplVar5;
      ppuVar14[7] = puStack_160;
      ppuVar14[6] = (undefined *)ppuStack_168;
      ppuVar14[8] = puStack_158;
      ppuStack_168 = (undefined **)0x0;
      puStack_160 = (undefined *)0x0;
      puStack_158 = (undefined *)0x0;
      *(undefined1 *)(ppuVar14 + 0xb) = 1;
      ppuVar15 = (undefined **)0x58;
      ppuStack_1b8 = ppuVar14;
      __Znwm();
      ppuVar15[1] = (undefined *)0x0;
      ppuVar15[2] = (undefined *)0x0;
      *ppuVar15 = (undefined *)&PTR_FUN_110c17320;
      ppuVar15[4] = (undefined *)0x0;
      ppuVar15[5] = (undefined *)0x0;
      pppplStack_1e0 = (long ****)(ppuVar15 + 3);
      *pppplStack_1e0 = (long ***)&PTR_DAT_110c17370;
      ppuVar15[9] = (undefined *)0x0;
      ppuVar15[8] = (undefined *)0x0;
      ppuVar15[10] = (undefined *)0x0;
      ppuVar15[7] = (undefined *)0x0;
      ppuVar15[6] = (undefined *)0x0;
      ppuStack_1d8 = ppuVar15;
      FUN_10a73fecc(ppuVar15 + 6,plVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar15 + 8,plVar2);
      FUN_10a744ec8(*(undefined8 *)(param_1 + 0x90),&pppplStack_1e0,&pppplStack_1c0);
      ppuVar14 = ppuStack_1d8;
      if (ppuStack_1d8 != (undefined **)0x0) {
        ppuVar15 = ppuStack_1d8 + 1;
        do {
          puVar19 = *ppuVar15;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar7) {
            *ppuVar15 = puVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1d8 + 0x10))(ppuStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      ppuVar14 = ppuStack_1b8;
      if (ppuStack_1b8 != (undefined **)0x0) {
        ppuVar15 = ppuStack_1b8 + 1;
        do {
          puVar19 = *ppuVar15;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar7) {
            *ppuVar15 = puVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar19 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      (*(code *)*ppuStack_178)(&ppuStack_178);
    }
    else {
      lVar23 = lVar23 + 0x28;
LAB_10ac20de0:
      func_0x00010a04a704(param_1 + 0x80,lVar23);
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 2;
LAB_10ac20e04:
      __ZNSt3__15mutex6unlockEv(param_1 + 0xb0);
    }
    if ((long)puStack_200 < 0) {
      __ZdlPv(ppuStack_210);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_109febc44(&pppplStack_180);
  FUN_10a002568(&pppplStack_170,&UNK_10f69c3ba,0x36);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x00010a002480(&pppplStack_1e0,&ppuStack_168,&ppuStack_1f8);
  FUN_10a0029c0(&pppplStack_1e0);
LAB_10ac21054:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac21058);
  (*pcVar6)();
}



/* Entry: 10ac211d8; end: 10ac2123f;  */

bool FUN_10ac211d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf6632b5;
    _memcmp(&UNK_10f6632b5,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10ac21240; end: 10ac21247;  */

bool FUN_10ac21240(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf6632b5;
    _memcmp(&UNK_10f6632b5,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10ac21248; end: 10ac2186f;  */

void FUN_10ac21248(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6632b5,0x24);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5f2c8;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c5f2c8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10ac4b1e8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10ac4b314,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10ac4b3d8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&DAT_10f31bc73,FUN_10ac4b498,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&UNK_10f69c3f1,FUN_10ac4b578,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&UNK_10f69c3fd,FUN_10ac4b67c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac21850;
    FUN_10a054dac(param_1,&UNK_10f69c410,FUN_10ac4b868,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69c424,FUN_10ac4b920,FUN_10ac4b9e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69c435,FUN_10ac4bb64,FUN_10ac4bc28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350e61,FUN_10ac4bd40,FUN_10ac4bdfc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f69c444,FUN_10ac4bef0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f34e4cc,FUN_10ac4bfac,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3becc6,FUN_10ac4c074,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c44d,FUN_10ac4c130,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2d4358,FUN_10ac4c1f8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c45d,FUN_10ac4c2bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69c46c,FUN_10ac4c390,0);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6632b5,0x24);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac21850:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac21854);
  (*pcVar6)();
}



/* Entry: 10ac21870; end: 10ac2196b;  */

undefined8 FUN_10ac21870(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  func_0x000107c2b054(auStack_80,&UNK_10f69b9ca);
  func_0x000107c2b054(auStack_98,&UNK_10f69b9ca);
  FUN_10a107e2c(auStack_68,auStack_80,auStack_98,0);
  FUN_10ac2196c(param_1,param_2,auStack_68);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  return param_1;
}



/* Entry: 10ac2196c; end: 10ac21c1b;  */

undefined8 * FUN_10ac2196c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 uStack_32;
  
  param_1[0x84] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x87) = 0x100;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c56d90,param_2);
  FUN_10aaea2c8(puVar1 + 0x51,param_3);
  uStack_32 = 0x101;
  FUN_10a00db68(param_1 + 0x5b,param_2,&uStack_32);
  FUN_10a03e114(param_1 + 0x60);
  *param_1 = &PTR_FUN_110c56aa8;
  param_1[2] = &PTR_FUN_110c56bf8;
  param_1[5] = &PTR_FUN_110c56c28;
  param_1[0x84] = &PTR_FUN_110c56d50;
  param_1[0x15] = &PTR_FUN_110c56c80;
  param_1[0x5b] = &PTR_FUN_110c56ca0;
  param_1[0x60] = &PTR_FUN_110c56cc8;
  param_1[100] = &PTR_FUN_110c56cf0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x65] = puVar1 + 3;
  param_1[0x66] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x65);
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x67] = puVar1 + 3;
  param_1[0x68] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x67);
  *(undefined1 *)(param_1 + 0x69) = 0x38;
  *(undefined4 *)((long)param_1 + 0x34c) = 0x3f800000;
  param_1[0x6a] = 0x3f80000000000000;
  func_0x000107c2b054(param_1 + 0x6b,&UNK_10f69b9ca);
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x75] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = FUN_10ac41034;
  param_1[0x78] = &PTR_DAT_110950c70;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  FUN_10a5ae998(param_1[0x65],&PTR_DAT_110c5f2c8,param_2,param_1);
  FUN_10a5ae998(param_1[0x61],&PTR_DAT_110b9fab0,param_2,param_1 + 0x60);
  FUN_10a5ae998(param_1[0x67],&PTR_DAT_110bd31c8,param_2,param_1 + 100);
  return param_1;
}



/* Entry: 10ac21c1c; end: 10ac21cff;  */

/* WARNING: Removing unreachable block (ram,0x00010ac21c58) */

long FUN_10ac21c1c(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x78))((undefined8 *)(param_1 + 0x78));
  func_0x00010a0523dc(param_1 + 0x38);
  FUN_10a060bec(param_1 + 0x28);
  return param_1;
}



/* Entry: 10ac21d00; end: 10ac21d2f;  */

undefined4 FUN_10ac21d00(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x370);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))();
    uVar2 = 1;
    if ((int)plVar1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 10ac21d30; end: 10ac21f23;  */

void FUN_10ac21d30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar7;
  long lVar8;
  
  while( true ) {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xf0) = 0x38;
    *(undefined4 *)((long)register0x00000008 + -0xec) = 0x3f800000;
    *(undefined4 *)((long)register0x00000008 + -0xe4) = 0x3f800000;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f69b9ca);
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x8c) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0x3f800000;
    *(code **)((long)register0x00000008 + -0x80) = FUN_10ac41034;
    *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_DAT_110950c70;
    lVar5 = *(long *)((long)register0x00000008 + -0xf0);
    param_1[0x6a] = *(long *)((long)register0x00000008 + -0xe8);
    param_1[0x69] = lVar5;
    unaff_x21 = param_1 + 0x6b;
    if (*(char *)((long)param_1 + 0x36f) < '\0') {
      __ZdlPv(*unaff_x21);
    }
    lVar5 = *(long *)((long)register0x00000008 + -0xe0);
    param_1[0x6c] = *(long *)((long)register0x00000008 + -0xd8);
    *unaff_x21 = lVar5;
    param_1[0x6d] = *(long *)((long)register0x00000008 + -0xd0);
    *(undefined1 *)((long)register0x00000008 + -0xc9) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xe0) = 0;
    FUN_10ac41044(param_1 + 0x6e,(undefined1 *)((long)register0x00000008 + -200));
    FUN_10a00e5c4(param_1 + 0x70,(undefined1 *)((long)register0x00000008 + -0xb8));
    lVar5 = *(long *)((long)register0x00000008 + -0xa8);
    lVar8 = *(long *)((long)register0x00000008 + -0x90);
    lVar7 = *(long *)((long)register0x00000008 + -0x98);
    param_1[0x73] = *(long *)((long)register0x00000008 + -0xa0);
    param_1[0x72] = lVar5;
    param_1[0x75] = lVar8;
    param_1[0x74] = lVar7;
    *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)((long)register0x00000008 + -0x88);
    param_1[0x77] = *(long *)((long)register0x00000008 + -0x80);
    (**(code **)param_1[0x78])(param_1 + 0x78);
    (**(code **)(*(long *)((long)register0x00000008 + -0x78) + 0x10))
              (param_1 + 0x78,(undefined1 *)((long)register0x00000008 + -0x78));
    param_1 = (long *)((long)register0x00000008 + -0x78);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))();
    plVar6 = *(long **)((long)register0x00000008 + -0xb0);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar6;
      }
    }
    unaff_x19 = *(long **)((long)register0x00000008 + -0xc0);
    if (unaff_x19 != (long *)0x0) {
      plVar6 = unaff_x19 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
        param_1 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      param_1 = *(long **)((long)register0x00000008 + -0xe0);
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_10ac21f24;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    unaff_x20 = puVar4;
  }
  return;
}



/* Entry: 10ac21f24; end: 10ac21fbf;  */

void FUN_10ac21f24(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar7;
  long lVar8;
  
  while( true ) {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xf0) = 0x38;
    *(undefined4 *)((long)register0x00000008 + -0xec) = 0x3f800000;
    *(undefined4 *)((long)register0x00000008 + -0xe4) = 0x3f800000;
    func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xe0),&UNK_10f69b9ca);
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x8c) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0x3f800000;
    *(code **)((long)register0x00000008 + -0x80) = FUN_10ac41034;
    *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_DAT_110950c70;
    lVar5 = *(long *)((long)register0x00000008 + -0xf0);
    param_1[0x6a] = *(long *)((long)register0x00000008 + -0xe8);
    param_1[0x69] = lVar5;
    unaff_x21 = param_1 + 0x6b;
    if (*(char *)((long)param_1 + 0x36f) < '\0') {
      __ZdlPv(*unaff_x21);
    }
    lVar5 = *(long *)((long)register0x00000008 + -0xe0);
    param_1[0x6c] = *(long *)((long)register0x00000008 + -0xd8);
    *unaff_x21 = lVar5;
    param_1[0x6d] = *(long *)((long)register0x00000008 + -0xd0);
    *(undefined1 *)((long)register0x00000008 + -0xc9) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xe0) = 0;
    FUN_10ac41044(param_1 + 0x6e,(undefined1 *)((long)register0x00000008 + -200));
    FUN_10a00e5c4(param_1 + 0x70,(undefined1 *)((long)register0x00000008 + -0xb8));
    lVar5 = *(long *)((long)register0x00000008 + -0xa8);
    lVar8 = *(long *)((long)register0x00000008 + -0x90);
    lVar7 = *(long *)((long)register0x00000008 + -0x98);
    param_1[0x73] = *(long *)((long)register0x00000008 + -0xa0);
    param_1[0x72] = lVar5;
    param_1[0x75] = lVar8;
    param_1[0x74] = lVar7;
    *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)((long)register0x00000008 + -0x88);
    param_1[0x77] = *(long *)((long)register0x00000008 + -0x80);
    (**(code **)param_1[0x78])(param_1 + 0x78);
    (**(code **)(*(long *)((long)register0x00000008 + -0x78) + 0x10))
              (param_1 + 0x78,(undefined1 *)((long)register0x00000008 + -0x78));
    param_1 = (long *)((long)register0x00000008 + -0x78);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x78))();
    plVar6 = *(long **)((long)register0x00000008 + -0xb0);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar6;
      }
    }
    unaff_x19 = *(long **)((long)register0x00000008 + -0xc0);
    if (unaff_x19 != (long *)0x0) {
      plVar6 = unaff_x19 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
        param_1 = unaff_x19;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      param_1 = *(long **)((long)register0x00000008 + -0xe0);
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_10ac21f24;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    unaff_x20 = puVar4;
  }
  return;
}



/* Entry: 10ac21fc0; end: 10ac22193;  */

void FUN_10ac21fc0(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 uStack_88;
  char cStack_71;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  FUN_10ac21d30();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  FUN_10a1e3e54(auStack_a0);
  (**(code **)(*param_2 + 0x230))(auStack_68,param_2,&PTR_DAT_110c56db8,auStack_a0);
  FUN_10a1e4260(param_1 + 0x288,auStack_68);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if (cStack_89 < '\0') {
    __ZdlPv(auStack_a0[0]);
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c56dd8);
  func_0x00010ac8a42c(param_1 + 0x348);
  fVar3 = 0.0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c56df8);
  fVar5 = 1.0;
  if (fVar3 <= 1.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  *(float *)(param_1 + 0x350) = fVar4;
  *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 4;
  func_0x00010ac8a2ec(param_1 + 0x348);
  fVar3 = 1.0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c56e18);
  fVar5 = 1.0;
  if (fVar3 <= 1.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  *(float *)(param_1 + 0x354) = fVar4;
  *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 4;
  func_0x00010ac8a2ec(param_1 + 0x348);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c56e38);
  bVar2 = 0x10;
  if ((int)param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) & 0xef | bVar2;
  func_0x00010ac8a2ec(param_1 + 0x348);
  return;
}



/* Entry: 10ac22194; end: 10ac22287;  */

void FUN_10ac22194(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f6632b5;
  uStack_28 = 0x24;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&puStack_30);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c56db8,param_1 + 0x290);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x34c),param_2,&PTR_DAT_110c56dd8);
  func_0x00010ac8a2ec(param_1 + 0x348);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x350),param_2,&PTR_DAT_110c56df8);
  func_0x00010ac8a2ec(param_1 + 0x348);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x354),param_2,&PTR_DAT_110c56e18);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c56e38,*(byte *)(param_1 + 0x348) >> 4 & 1);
  return;
}



/* Entry: 10ac22288; end: 10ac22463;  */

void FUN_10ac22288(long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  code **ppcVar12;
  long lVar13;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  
  plVar8 = (long *)param_1[0x6e];
  if (plVar8 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar8 + 0x60))();
  if ((int)plVar8 == 0) {
    return;
  }
  if (((int)param_1[0x7f] == 1) &&
     (*(undefined4 *)(param_1 + 0x7f) = 2, (*(byte *)((long)param_1 + 0x3fc) & 1) == 0)) {
    func_0x00010ac8a3ac(param_1 + 0x69);
  }
  puVar9 = (undefined8 *)param_1[0x80];
  if (puVar9 != (undefined8 *)0x0) {
    if (*(char *)(puVar9 + 8) == '\x01') {
      (*(code *)*puVar9)();
    }
    else if (*(char *)(puVar9 + 8) == '\x02') {
      FUN_10a05e614();
    }
    func_0x00010a94f7e8(param_1 + 0x80);
  }
  FUN_10ac8a510(param_1 + 0x69);
  plVar8 = (long *)param_1[0x70];
  if (plVar8 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar8 + 0x28))();
  plVar10 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  if ((int)plVar8 == (int)plVar10) {
    plVar10 = (long *)param_1[0x70];
    (**(code **)(*plVar10 + 0x30))();
    plVar8 = param_1;
    (**(code **)(*param_1 + 0xb8))();
    if ((int)plVar10 == (int)plVar8) {
      plVar10 = (long *)param_1[0x70];
      (**(code **)(*plVar10 + 0x50))();
      plVar8 = param_1;
      (**(code **)(*param_1 + 0xe8))();
      if ((int)plVar10 == (int)plVar8) goto LAB_10ac2240c;
    }
  }
  param_2 = (long *)param_1[0x70];
  (**(code **)(*param_2 + 0x28))();
  plVar8 = (long *)param_1[0x70];
  (**(code **)(*plVar8 + 0x30))();
  plVar10 = (long *)param_1[0x70];
  (**(code **)(*plVar10 + 0x50))();
  plVar11 = (long *)param_1[0x70];
  (**(code **)(*plVar11 + 0x70))();
  FUN_10a1da3a4(param_1,param_2,plVar8,0,0,plVar10,plVar11,0);
LAB_10ac2240c:
  if ((param_1[0x70] != 0) && (ppcVar12 = (code **)param_1[0x82], ppcVar12 != (code **)0x0)) {
    if (*(char *)(ppcVar12 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac22460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar12)();
      return;
    }
    if (*(char *)(ppcVar12 + 8) == '\x02') {
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = ppcVar12;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != (long *)0x0) {
          pcStack_50 = ppcVar12[1];
          pcStack_58 = *ppcVar12;
          if (ppcVar12[1] != (code *)0x0) {
            pcVar1 = ppcVar12[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*ppcVar12;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
        ___stack_chk_fail();
        (*(code *)*ppuStack_60)(ppcVar5 + 1);
        func_0x00010a004dac(&uStack_78);
        pppuVar7 = pppuVar6;
        __Unwind_Resume();
        pcStack_88 = FUN_10a05e740;
        pppuStack_a0 = pppuVar6;
        ppcStack_98 = ppcVar5;
        puStack_90 = &stack0xfffffffffffffff0;
        func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
        func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
        if (puStack_b0 != (undefined8 *)0x0) {
          (**(code **)*puStack_b0)();
        }
        (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
        FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
        if (puStack_b0 != (undefined8 *)0x0) {
          (**(code **)*puStack_b0)();
        }
        if (puStack_a8 != (undefined8 *)0x0) {
          (**(code **)*puStack_a8)();
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ac22464; end: 10ac2246b;  */

void FUN_10ac22464(long param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  code **ppcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  
  plVar13 = (long *)(param_1 + -0x2d8);
  plVar8 = *(long **)(param_1 + 0x98);
  if (plVar8 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar8 + 0x60))();
  if ((int)plVar8 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x120) == 1) &&
     (*(undefined4 *)(param_1 + 0x120) = 2, (*(byte *)(param_1 + 0x124) & 1) == 0)) {
    func_0x00010ac8a3ac(param_1 + 0x70);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x128);
  if (puVar9 != (undefined8 *)0x0) {
    if (*(char *)(puVar9 + 8) == '\x01') {
      (*(code *)*puVar9)();
    }
    else if (*(char *)(puVar9 + 8) == '\x02') {
      FUN_10a05e614();
    }
    func_0x00010a94f7e8(param_1 + 0x128);
  }
  FUN_10ac8a510(param_1 + 0x70);
  plVar8 = *(long **)(param_1 + 0xa8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar8 + 0x28))();
  plVar10 = plVar13;
  (**(code **)(*plVar13 + 0xb0))();
  if ((int)plVar8 == (int)plVar10) {
    plVar10 = *(long **)(param_1 + 0xa8);
    (**(code **)(*plVar10 + 0x30))();
    plVar8 = plVar13;
    (**(code **)(*plVar13 + 0xb8))();
    if ((int)plVar10 == (int)plVar8) {
      plVar10 = *(long **)(param_1 + 0xa8);
      (**(code **)(*plVar10 + 0x50))();
      plVar8 = plVar13;
      (**(code **)(*plVar13 + 0xe8))();
      if ((int)plVar10 == (int)plVar8) goto LAB_10ac2240c;
    }
  }
  param_2 = *(long **)(param_1 + 0xa8);
  (**(code **)(*param_2 + 0x28))();
  plVar8 = *(long **)(param_1 + 0xa8);
  (**(code **)(*plVar8 + 0x30))();
  plVar10 = *(long **)(param_1 + 0xa8);
  (**(code **)(*plVar10 + 0x50))();
  plVar11 = *(long **)(param_1 + 0xa8);
  (**(code **)(*plVar11 + 0x70))();
  FUN_10a1da3a4(plVar13,param_2,plVar8,0,0,plVar10,plVar11,0);
LAB_10ac2240c:
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (ppcVar12 = *(code ***)(param_1 + 0x138), ppcVar12 != (code **)0x0)) {
    if (*(char *)(ppcVar12 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac22460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar12)();
      return;
    }
    if (*(char *)(ppcVar12 + 8) == '\x02') {
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = ppcVar12;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != (long *)0x0) {
          pcStack_50 = ppcVar12[1];
          pcStack_58 = *ppcVar12;
          if (ppcVar12[1] != (code *)0x0) {
            pcVar1 = ppcVar12[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*ppcVar12;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        ___stack_chk_fail();
        (*(code *)*ppuStack_60)(ppcVar5 + 1);
        func_0x00010a004dac(&uStack_78);
        pppuVar7 = pppuVar6;
        __Unwind_Resume();
        pcStack_88 = FUN_10a05e740;
        pppuStack_a0 = pppuVar6;
        ppcStack_98 = ppcVar5;
        puStack_90 = &stack0xfffffffffffffff0;
        func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
        func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
        if (puStack_b0 != (undefined8 *)0x0) {
          (**(code **)*puStack_b0)();
        }
        (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
        FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
        if (puStack_b0 != (undefined8 *)0x0) {
          (**(code **)*puStack_b0)();
        }
        if (puStack_a8 != (undefined8 *)0x0) {
          (**(code **)*puStack_a8)();
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ac2246c; end: 10ac224bf;  */

/* WARNING: Removing unreachable block (ram,0x00010ac22770) */
/* WARNING: Removing unreachable block (ram,0x00010ac22740) */
/* WARNING: Removing unreachable block (ram,0x00010ac22750) */
/* WARNING: Removing unreachable block (ram,0x00010ac227e0) */

undefined8 *** FUN_10ac2246c(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 **ppuVar7;
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 **appuStack_148 [2];
  char cStack_131;
  undefined8 **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  byte bStack_61;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar2 = &puStack_20;
  if (*(long *)(param_1 + 0x380) == 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_20 = &UNK_10f653c20;
    uStack_18 = 0x21;
    if (lVar6 == 0) {
      FUN_10a0edfc4();
      func_0x00010989f98c(auStack_78,(undefined1 *)((long)ppuVar2 + 0x28));
      uVar1 = uStack_70;
      if (-1 < (char)bStack_61) {
        uVar1 = (ulong)bStack_61;
      }
      FUN_10a003c90(appuStack_148,uVar1 + 10,&ppuStack_160);
      pppuVar4 = (undefined8 ***)appuStack_148[0];
      if (-1 < cStack_131) {
        pppuVar4 = appuStack_148;
      }
      if (uVar1 != 0) {
        _memmove(pppuVar4,auStack_78,uVar1);
      }
      puVar5 = (undefined8 *)((long)pppuVar4 + uVar1);
      *puVar5 = 0x656d756c6f76202c;
      *(undefined2 *)(puVar5 + 1) = 0x203a;
      *(undefined1 *)((long)puVar5 + 10) = 0;
      __ZNSt3__19to_stringEf(&ppuStack_160,*(undefined4 *)((long)ppuVar2 + 0x34c));
      pppuVar4 = (undefined8 ***)ppuStack_160;
      if (-1 < (char)bStack_149) {
        uStack_158 = (ulong)bStack_149;
        pppuVar4 = &ppuStack_160;
      }
      pppuVar3 = appuStack_148;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar3,pppuVar4,uStack_158);
      puStack_128 = pppuVar3[1];
      ppuStack_130 = *pppuVar3;
      puStack_120 = pppuVar3[2];
      pppuVar3[1] = (undefined8 **)0x0;
      pppuVar3[2] = (undefined8 **)0x0;
      *pppuVar3 = (undefined8 **)0x0;
      pppuVar4 = &ppuStack_130;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar4,&UNK_10f69c48a,0x14);
      puStack_108 = pppuVar4[1];
      ppuStack_110 = *pppuVar4;
      puStack_100 = pppuVar4[2];
      pppuVar4[1] = (undefined8 **)0x0;
      pppuVar4[2] = (undefined8 **)0x0;
      *pppuVar4 = (undefined8 **)0x0;
      func_0x00010ac8a2ec((undefined1 *)((long)ppuVar2 + 0x348));
      __ZNSt3__19to_stringEf(&ppuStack_178,*(undefined4 *)((long)ppuVar2 + 0x350));
      pppuVar4 = (undefined8 ***)ppuStack_178;
      if (-1 < (char)bStack_161) {
        uStack_170 = (ulong)bStack_161;
        pppuVar4 = &ppuStack_178;
      }
      pppuVar3 = &ppuStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar3,pppuVar4,uStack_170);
      puStack_e8 = pppuVar3[1];
      ppuStack_f0 = *pppuVar3;
      puStack_e0 = pppuVar3[2];
      pppuVar3[1] = (undefined8 **)0x0;
      pppuVar3[2] = (undefined8 **)0x0;
      *pppuVar3 = (undefined8 **)0x0;
      pppuVar4 = &ppuStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar4,&UNK_10f69c49f,0x12);
      puStack_c8 = pppuVar4[1];
      puStack_d0 = *pppuVar4;
      puStack_c0 = pppuVar4[2];
      pppuVar4[1] = (undefined8 **)0x0;
      pppuVar4[2] = (undefined8 **)0x0;
      *pppuVar4 = (undefined8 **)0x0;
      func_0x00010ac8a2ec((undefined1 *)((long)ppuVar2 + 0x348));
      __ZNSt3__19to_stringEf(&ppuStack_190,*(undefined4 *)((long)ppuVar2 + 0x354));
      pppuVar4 = (undefined8 ***)ppuStack_190;
      if (-1 < (char)bStack_179) {
        uStack_188 = (ulong)bStack_179;
        pppuVar4 = &ppuStack_190;
      }
      ppuVar7 = &puStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar7,pppuVar4,uStack_188);
      uStack_a8 = ppuVar7[1];
      uStack_b0 = *ppuVar7;
      uStack_a0 = ppuVar7[2];
      ppuVar7[1] = (undefined8 *)0x0;
      ppuVar7[2] = (undefined8 *)0x0;
      *ppuVar7 = (undefined8 *)0x0;
      puVar5 = &uStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar5,&UNK_10f68ca40,0xc);
      uStack_88 = puVar5[1];
      puStack_90 = (undefined8 *)*puVar5;
      uStack_80 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      func_0x00010ac8a2ec((undefined1 *)((long)ppuVar2 + 0x348));
      __ZNSt3__19to_stringEf(&ppuStack_1a8,*(undefined4 *)((long)ppuVar2 + 0x398));
      pppuVar4 = (undefined8 ***)ppuStack_1a8;
      if (-1 < (char)bStack_191) {
        uStack_1a0 = (ulong)bStack_191;
        pppuVar4 = &ppuStack_1a8;
      }
      pppuVar3 = (undefined8 ***)&puStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar3,pppuVar4,uStack_1a0);
      ppuVar7 = *pppuVar3;
      extraout_x8[1] = pppuVar3[1];
      *extraout_x8 = ppuVar7;
      extraout_x8[2] = pppuVar3[2];
      pppuVar3[1] = (undefined8 **)0x0;
      pppuVar3[2] = (undefined8 **)0x0;
      *pppuVar3 = (undefined8 **)0x0;
      if ((char)bStack_191 < '\0') {
        __ZdlPv(ppuStack_1a8);
        pppuVar3 = (undefined8 ***)ppuStack_1a8;
      }
      if ((char)bStack_179 < '\0') {
        __ZdlPv(ppuStack_190);
        pppuVar3 = (undefined8 ***)ppuStack_190;
      }
      if ((long)puStack_e0 < 0) {
        pppuVar3 = (undefined8 ***)ppuStack_f0;
        __ZdlPv(ppuStack_f0);
      }
      if ((char)bStack_161 < '\0') {
        __ZdlPv(ppuStack_178);
        pppuVar3 = (undefined8 ***)ppuStack_178;
      }
      if ((long)puStack_100 < 0) {
        pppuVar3 = (undefined8 ***)ppuStack_110;
        __ZdlPv(ppuStack_110);
      }
      if ((long)puStack_120 < 0) {
        pppuVar3 = (undefined8 ***)ppuStack_130;
        __ZdlPv(ppuStack_130);
      }
      if ((char)bStack_149 < '\0') {
        __ZdlPv(ppuStack_160);
        pppuVar3 = (undefined8 ***)ppuStack_160;
      }
      if (cStack_131 < '\0') {
        __ZdlPv(appuStack_148[0]);
        pppuVar3 = (undefined8 ***)appuStack_148[0];
      }
      return pppuVar3;
    }
    pppuVar4 = (undefined8 ***)(lVar6 + 0x128);
  }
  else {
    pppuVar4 = (undefined8 ***)(param_1 + 0x380);
  }
  return pppuVar4;
}



/* Entry: 10ac224c0; end: 10ac22923;  */

/* WARNING: Removing unreachable block (ram,0x00010ac22770) */
/* WARNING: Removing unreachable block (ram,0x00010ac22740) */
/* WARNING: Removing unreachable block (ram,0x00010ac22750) */
/* WARNING: Removing unreachable block (ram,0x00010ac227e0) */

void FUN_10ac224c0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 **ppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 **ppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 **ppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 **appuStack_128 [2];
  char cStack_111;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010989f98c(auStack_58,param_2 + 0x28);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_128,uVar1 + 10,&ppuStack_140);
  pppuVar2 = (undefined8 ***)appuStack_128[0];
  if (-1 < cStack_111) {
    pppuVar2 = appuStack_128;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x656d756c6f76202c;
  *(undefined2 *)(puVar5 + 1) = 0x203a;
  *(undefined1 *)((long)puVar5 + 10) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_140,*(undefined4 *)(param_2 + 0x34c));
  pppuVar2 = (undefined8 ***)ppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    pppuVar2 = &ppuStack_140;
  }
  pppuVar3 = appuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_138);
  puStack_108 = pppuVar3[1];
  puStack_110 = *pppuVar3;
  puStack_100 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f69c48a,0x14);
  uStack_e8 = ppuVar4[1];
  uStack_f0 = *ppuVar4;
  lStack_e0 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  func_0x00010ac8a2ec(param_2 + 0x348);
  __ZNSt3__19to_stringEf(&ppuStack_158,*(undefined4 *)(param_2 + 0x350));
  pppuVar2 = (undefined8 ***)ppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    pppuVar2 = &ppuStack_158;
  }
  puVar5 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_150);
  uStack_c8 = puVar5[1];
  uStack_d0 = *puVar5;
  lStack_c0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f69c49f,0x12);
  uStack_a8 = puVar5[1];
  uStack_b0 = *puVar5;
  uStack_a0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  func_0x00010ac8a2ec(param_2 + 0x348);
  __ZNSt3__19to_stringEf(&ppuStack_170,*(undefined4 *)(param_2 + 0x354));
  pppuVar2 = (undefined8 ***)ppuStack_170;
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    pppuVar2 = &ppuStack_170;
  }
  puVar5 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_168);
  uStack_88 = puVar5[1];
  uStack_90 = *puVar5;
  uStack_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f68ca40,0xc);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  func_0x00010ac8a2ec(param_2 + 0x348);
  __ZNSt3__19to_stringEf(&ppuStack_188,*(undefined4 *)(param_2 + 0x398));
  pppuVar2 = (undefined8 ***)ppuStack_188;
  if (-1 < (char)bStack_171) {
    uStack_180 = (ulong)bStack_171;
    pppuVar2 = &ppuStack_188;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_180);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_171 < '\0') {
    __ZdlPv(ppuStack_188);
  }
  if ((char)bStack_159 < '\0') {
    __ZdlPv(ppuStack_170);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if ((char)bStack_141 < '\0') {
    __ZdlPv(ppuStack_158);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if ((long)puStack_100 < 0) {
    __ZdlPv(puStack_110);
  }
  if ((char)bStack_129 < '\0') {
    __ZdlPv(ppuStack_140);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(appuStack_128[0]);
  }
  return;
}



/* Entry: 10ac22924; end: 10ac229b7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac22770) */
/* WARNING: Removing unreachable block (ram,0x00010ac22740) */
/* WARNING: Removing unreachable block (ram,0x00010ac22750) */
/* WARNING: Removing unreachable block (ram,0x00010ac227e0) */

void FUN_10ac22924(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 **ppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 **ppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 **ppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 **appuStack_128 [2];
  char cStack_111;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010989f98c(auStack_58,param_2);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_128,uVar1 + 10,&ppuStack_140);
  pppuVar2 = (undefined8 ***)appuStack_128[0];
  if (-1 < cStack_111) {
    pppuVar2 = appuStack_128;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar2,auStack_58,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x656d756c6f76202c;
  *(undefined2 *)(puVar5 + 1) = 0x203a;
  *(undefined1 *)((long)puVar5 + 10) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_140,*(undefined4 *)(param_2 + 0x324));
  pppuVar2 = (undefined8 ***)ppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    pppuVar2 = &ppuStack_140;
  }
  pppuVar3 = appuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_138);
  puStack_108 = pppuVar3[1];
  puStack_110 = *pppuVar3;
  puStack_100 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f69c48a,0x14);
  uStack_e8 = ppuVar4[1];
  uStack_f0 = *ppuVar4;
  lStack_e0 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  func_0x00010ac8a2ec(param_2 + 800);
  __ZNSt3__19to_stringEf(&ppuStack_158,*(undefined4 *)(param_2 + 0x328));
  pppuVar2 = (undefined8 ***)ppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    pppuVar2 = &ppuStack_158;
  }
  puVar5 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_150);
  uStack_c8 = puVar5[1];
  uStack_d0 = *puVar5;
  lStack_c0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f69c49f,0x12);
  uStack_a8 = puVar5[1];
  uStack_b0 = *puVar5;
  uStack_a0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  func_0x00010ac8a2ec(param_2 + 800);
  __ZNSt3__19to_stringEf(&ppuStack_170,*(undefined4 *)(param_2 + 0x32c));
  pppuVar2 = (undefined8 ***)ppuStack_170;
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    pppuVar2 = &ppuStack_170;
  }
  puVar5 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_168);
  uStack_88 = puVar5[1];
  uStack_90 = *puVar5;
  uStack_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f68ca40,0xc);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  func_0x00010ac8a2ec(param_2 + 800);
  __ZNSt3__19to_stringEf(&ppuStack_188,*(undefined4 *)(param_2 + 0x370));
  pppuVar2 = (undefined8 ***)ppuStack_188;
  if (-1 < (char)bStack_171) {
    uStack_180 = (ulong)bStack_171;
    pppuVar2 = &ppuStack_188;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_180);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_171 < '\0') {
    __ZdlPv(ppuStack_188);
  }
  if ((char)bStack_159 < '\0') {
    __ZdlPv(ppuStack_170);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if ((char)bStack_141 < '\0') {
    __ZdlPv(ppuStack_158);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if ((long)puStack_100 < 0) {
    __ZdlPv(puStack_110);
  }
  if ((char)bStack_129 < '\0') {
    __ZdlPv(ppuStack_140);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(appuStack_128[0]);
  }
  return;
}



/* Entry: 10ac229b8; end: 10ac229eb;  */

long FUN_10ac229b8(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x288) < 8) {
    uVar2 = (uint)*(byte *)(param_1 + 0x288);
  }
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8(lVar1);
  return lVar1 + (ulong)uVar2 * 0x10 + 0xb8;
}



/* Entry: 10ac229ec; end: 10ac22a93;  */

undefined *** FUN_10ac229ec(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  undefined4 uVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  undefined ***pppuVar20;
  int *piVar21;
  long *unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long *plStack_100;
  long *plStack_f8;
  int *piStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  plVar19 = param_1;
  (**(code **)(*param_1 + 0x88))();
  plVar19 = (long *)*plVar19;
  plVar9 = plVar19;
  (**(code **)(*plVar19 + 0x28))();
  plVar6 = plVar19;
  (**(code **)(*plVar19 + 0x30))();
  plVar10 = plVar19;
  (**(code **)(*plVar19 + 0x50))();
  (**(code **)(*plVar19 + 0x70))();
  uVar12 = 0;
  uVar18 = 0;
  piVar21 = (int *)0x0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_98 = param_1 + 0x15;
  uVar2 = *(ushort *)((long)param_1 + 0x101);
  *(ushort *)((long)param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  plVar11 = plVar6;
  plVar14 = plVar10;
  plVar16 = plVar19;
  if ((int)param_1[0x3d] != (int)plVar9) {
    unaff_x26 = param_1 + 0x3d;
    *(int *)unaff_x26 = (int)plVar9;
    uVar18 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  iVar13 = (int)plVar14;
  uVar15 = SUB84(plVar16,0);
  if (*(int *)((long)param_1 + 0x1ec) != (int)plVar6) {
    unaff_x26 = (long *)((long)param_1 + 0x1ec);
    *(int *)unaff_x26 = (int)plVar6;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if ((int)param_1[0x3f] != 0) {
    plVar6 = param_1 + 0x3f;
    *(undefined4 *)plVar6 = 0;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(plVar6);
  }
  if (*(int *)((long)param_1 + 0x1fc) != (int)plVar10) {
    piVar21 = (int *)((long)param_1 + 0x1fc);
    *piVar21 = (int)plVar10;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(piVar21);
  }
  *(char *)(param_1 + 0x40) = (char)plVar19;
  if ((int)param_1[0x3e] != 0) {
    plVar19 = param_1 + 0x3e;
    *(undefined4 *)plVar19 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(plVar19);
  }
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined1 *)((long)param_1 + 0x201) = 1;
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar20 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar20;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar5 = pppuVar20;
  __Unwind_Resume();
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  plStack_100 = unaff_x26;
  plStack_f8 = plVar6;
  piStack_f0 = piVar21;
  plStack_e8 = plVar10;
  plStack_e0 = plVar19;
  pppuStack_c8 = pppuVar20;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar5[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar5 + 0x5b) = 0x100;
  pppuVar5[0x5a] = (undefined **)0x0;
  pppuVar5[0x59] = (undefined **)0x0;
  pppuVar20 = pppuVar5;
  FUN_10a1da04c();
  *pppuVar20 = &PTR_DAT_110bae008;
  pppuVar20[2] = &PTR_FUN_110bae138;
  pppuVar20[5] = &PTR_FUN_110bae168;
  pppuVar20[0x58] = &PTR_FUN_110bae210;
  pppuVar20[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar18 - 0x30) {
    uVar1 = uVar18;
  }
  pppuVar20[0x52] = (undefined **)0x0;
  pppuVar20[0x51] = (undefined **)0x0;
  pppuVar20[0x54] = (undefined **)0x0;
  pppuVar20[0x53] = (undefined **)0x0;
  pppuVar20[0x56] = (undefined **)0x0;
  pppuVar20[0x55] = (undefined **)0x0;
  pppuVar20[0x57] = (undefined **)0x0;
  plVar6 = plVar9;
  FUN_10a2421c8();
  plVar6 = (long *)plVar6[0x45];
  (**(code **)(*plVar6 + 0x68))();
  uVar18 = *(uint *)(plVar6 + 0x11);
  if ((0 < (int)uVar18) && (uVar18 < (uint)plVar11 || uVar18 < (uint)uVar12)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar18 = uVar1;
  if (uVar1 == 0x22) {
    uVar18 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar18;
  }
  uVar18 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar18 != 0) {
    uVar17 = (uVar12 & 0xffffffff) * ((ulong)plVar11 & 0xffffffff);
    uVar3 = 0;
    if (uVar18 != 0) {
      uVar3 = 0xffffffff / uVar18;
    }
    if (uVar3 <= uVar17 && uVar17 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar5,plVar11,uVar12,0,0,uVar1,0,0);
  FUN_10a2421c8();
  plVar6 = (long *)plVar9[0x45];
  lStack_148 = (long)plVar11 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar12);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar15;
  (**(code **)(*plVar6 + 0x20))(plVar6,&lStack_148);
  FUN_10a099d88(pppuVar20 + 0x51,plVar6);
  if (iVar13 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar20 = pppuVar5;
    (*(code *)(*pppuVar5)[0x1d])();
    if ((int)pppuVar20 == 0x21) {
      pppuVar20 = (undefined ***)0x24;
    }
    else if ((int)pppuVar20 == 0x22) {
      pppuVar20 = (undefined ***)0x25;
    }
    pppuVar7 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar8 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])(pppuVar5);
    FUN_109fc8e58(pppuVar7,pppuVar8,pppuVar20);
    if (((ulong)pppuVar7 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar20 = pppuVar5;
    (*(code *)(*pppuVar5)[0x16])();
    pppuVar7 = pppuVar5;
    (*(code *)(*pppuVar5)[0x17])();
    uStack_108 = (ulong)pppuVar20 & 0xffffffff | (long)pppuVar7 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar5,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar5;
}



/* Entry: 10ac22a94; end: 10ac22b43;  */

void FUN_10ac22a94(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c56e58,0);
  *(char *)(param_1 + 0x288) = (char)param_2;
  return;
}



/* Entry: 10ac22b44; end: 10ac22bcf;  */

undefined1  [16] FUN_10ac22b44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f69da65;
  return auVar1;
}



/* Entry: 10ac22bd0; end: 10ac22cbf;  */

void FUN_10ac22bd0(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0xd2;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10ac22cc0(param_1,&puStack_88);
  uStack_68 = 0x4ffffffff;
  uStack_70 = 0x10000000064;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c4b2;
  puStack_60 = &UNK_10f69b9ca;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x117;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac4c548();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69c4bd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ac4d55c(param_1,&puStack_88);
  FUN_10ac4d6c0(param_1);
  return;
}



/* Entry: 10ac22cc0; end: 10ac22d97;  */

/* WARNING: Removing unreachable block (ram,0x00010ac22d58) */

undefined1  [16] FUN_10ac22cc0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69da65,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac4c44c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac22d98; end: 10ac22f6b;  */

undefined8 * FUN_10ac22d98(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  
  param_1[0x6f] = &PTR_FUN_110c383b8;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c57138,param_2);
  FUN_10a0040d0(puVar1 + 0x51,&PTR_PTR_110c57158);
  *param_1 = &PTR_FUN_110c56e90;
  param_1[2] = &PTR_FUN_110c56fd0;
  param_1[5] = &PTR_FUN_110c57000;
  param_1[0x6f] = &PTR_FUN_110c570f8;
  param_1[0x15] = &PTR_FUN_110c57058;
  param_1[0x51] = &PTR_FUN_110c57080;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110c5e108;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110c5e158;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = FUN_10ac4da50;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x56] = puVar1 + 3;
  param_1[0x57] = puVar1;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x67] = &PTR_DAT_110ba5598;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  if (param_3 != 0) {
    if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x72) = 1;
      param_1[0x71] = param_2;
      if (param_2 != 0) {
        param_1[0x70] = *(undefined8 *)(*(long *)(param_2 + 0x850) + 0x2c);
      }
    }
    FUN_10a5ae998(param_1[0x54],&PTR_DAT_110b99f08,param_2,param_1 + 0x51);
  }
  return param_1;
}



/* Entry: 10ac22f6c; end: 10ac230ab;  */

undefined8 * FUN_10ac22f6c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c56e90;
  param_1[2] = &PTR_FUN_110c56fd0;
  param_1[5] = &PTR_FUN_110c57000;
  param_1[0x6f] = &PTR_FUN_110c570f8;
  param_1[0x15] = &PTR_FUN_110c57058;
  param_1[0x51] = &PTR_FUN_110c57080;
  if (*(char *)(param_1 + 0x6e) == '\x01') {
    func_0x00010a136de4(param_1 + 0x6b);
  }
  func_0x00010a09db64(param_1 + 0x58);
  func_0x00010ac4d77c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c5a918;
  param_1[0x6f] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c5a648;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6f] = &PTR_DAT_110c5a7a8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c5a7f8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6f] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac230ac; end: 10ac230e7;  */

undefined8 * FUN_10ac230ac(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c56e90;
  param_1[2] = &PTR_FUN_110c56fd0;
  param_1[5] = &PTR_FUN_110c57000;
  param_1[0x6f] = &PTR_FUN_110c570f8;
  param_1[0x15] = &PTR_FUN_110c57058;
  param_1[0x51] = &PTR_FUN_110c57080;
  if (*(char *)(param_1 + 0x6e) == '\x01') {
    func_0x00010a136de4(param_1 + 0x6b);
  }
  func_0x00010a09db64(param_1 + 0x58);
  func_0x00010ac4d77c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c5a918;
  param_1[0x6f] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c5a648;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6f] = &PTR_DAT_110c5a7a8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c5a7f8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6f] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac230e8; end: 10ac23297;  */

void FUN_10ac230e8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  if ((*(byte *)(param_1 + 0x334) & 1) == 0) {
    plVar13 = (long *)(*(long *)(param_1 + 0x90) + 0xc68);
  }
  else {
    plVar13 = (long *)(param_1 + 0x2c0);
  }
  lVar11 = *plVar13;
  if (lVar11 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    if (*(long *)(lVar11 + 8) == 0) {
      plVar13 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
    }
    else {
      plVar13 = (long *)(*(long *)(lVar11 + 8) + 8);
    }
    plVar6 = (long *)*plVar13;
    plVar13 = (long *)plVar13[1];
    if (plVar13 != (long *)0x0) {
      plVar3 = plVar13 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6;
      plVar12 = plVar6;
      plVar14 = plVar13;
      (**(code **)(*plVar6 + 0x28))(plVar6);
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x30))(plVar6);
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x50))(plVar6);
      (**(code **)(*plVar6 + 0x70))(plVar6);
      FUN_10a1da3a4(param_1,plVar3,plVar4,0,0,plVar5,plVar6,0,plVar12,plVar14);
      goto LAB_10ac23224;
    }
  }
  if (*(char *)(param_1 + 0x370) == '\x01') {
    uVar9 = 0;
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x10);
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x14);
    uVar10 = 4;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar9 = 4;
  }
  FUN_10a1da3a4(param_1,uVar7,uVar8,0,uVar9,uVar10,0,0,0,plVar13);
LAB_10ac23224:
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar13);
      return;
    }
  }
  return;
}



/* Entry: 10ac23298; end: 10ac2331b;  */

undefined4 FUN_10ac23298(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0x334) & 1) == 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x90) + 0xc68);
  }
  else {
    plVar2 = (long *)(param_1 + 0x2c0);
  }
  uVar1 = 0;
  if (*plVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10ac2331c; end: 10ac2356f;  */

void FUN_10ac2331c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_54;
  long lStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x334) == '\x01') {
      if ((*(long *)(param_1 + 0x2c0) == 0) && (*(char *)(param_1 + 0x370) == '\x01')) {
        lVar5 = *(long *)(param_1 + 0x358);
        lVar4 = 0;
        FUN_10a2421c8();
        FUN_10a048e7c(&plStack_30,*(undefined8 *)(lVar4 + 0x1e0),0,*(undefined4 *)(lVar5 + 0x10),
                      *(undefined4 *)(lVar5 + 0x14),1,4,0,0,0);
        FUN_10a1b498c(&puStack_40,*(undefined4 *)(lVar5 + 0x24),1);
        uStack_54 = 0;
        uStack_68 = *(undefined8 *)(lVar5 + 0x10);
        (**(code **)*puStack_40)(&lStack_50,puStack_40,lVar5,&uStack_54,&uStack_68);
        (**(code **)(*plStack_30 + 0x98))(plStack_30,*(undefined8 *)(lStack_50 + 0x28),0,0);
        FUN_10ac410a8(&uStack_68,&plStack_30);
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
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
        if (plStack_28 != (long *)0x0) {
          plVar1 = plStack_28 + 1;
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
            (**(code **)(*plStack_28 + 0x10))(plStack_28);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
          }
        }
        FUN_10a22b994(param_1 + 0x2c0,&uStack_68);
        if (plStack_60 != (long *)0x0) {
          plVar1 = plStack_60 + 1;
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
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
          }
        }
      }
    }
    else if ((*(long *)(*(long *)(param_1 + 0x90) + 0xc68) == 0) &&
            (*(int *)(*(long *)(param_1 + 0x90) + 0xe30) == 2)) {
      *(undefined8 *)(param_1 + 0x2d0) = 0x37fffffff;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined1 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)(param_1 + 0x2f8) = 0;
      *(undefined1 *)(param_1 + 0x2fc) = 0;
      *(undefined1 *)(param_1 + 0x318) = 0;
      *(undefined1 *)(param_1 + 0x31c) = 0;
      *(undefined1 *)(param_1 + 0x330) = 0;
      *(undefined1 *)(param_1 + 0x334) = 1;
    }
  }
  return;
}



/* Entry: 10ac23570; end: 10ac2357b;  */

void FUN_10ac23570(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_54;
  long lStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x324) == '\x01') {
      if ((*(long *)(param_1 + 0x2b0) == 0) && (*(char *)(param_1 + 0x360) == '\x01')) {
        lVar5 = *(long *)(param_1 + 0x348);
        lVar4 = 0;
        FUN_10a2421c8();
        FUN_10a048e7c(&plStack_30,*(undefined8 *)(lVar4 + 0x1e0),0,*(undefined4 *)(lVar5 + 0x10),
                      *(undefined4 *)(lVar5 + 0x14),1,4,0,0,0);
        FUN_10a1b498c(&puStack_40,*(undefined4 *)(lVar5 + 0x24),1);
        uStack_54 = 0;
        uStack_68 = *(undefined8 *)(lVar5 + 0x10);
        (**(code **)*puStack_40)(&lStack_50,puStack_40,lVar5,&uStack_54,&uStack_68);
        (**(code **)(*plStack_30 + 0x98))(plStack_30,*(undefined8 *)(lStack_50 + 0x28),0,0);
        FUN_10ac410a8(&uStack_68,&plStack_30);
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
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
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
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
        if (plStack_28 != (long *)0x0) {
          plVar1 = plStack_28 + 1;
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
            (**(code **)(*plStack_28 + 0x10))(plStack_28);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
          }
        }
        FUN_10a22b994(param_1 + 0x2b0,&uStack_68);
        if (plStack_60 != (long *)0x0) {
          plVar1 = plStack_60 + 1;
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
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
          }
        }
      }
    }
    else if ((*(long *)(*(long *)(param_1 + 0x80) + 0xc68) == 0) &&
            (*(int *)(*(long *)(param_1 + 0x80) + 0xe30) == 2)) {
      *(undefined8 *)(param_1 + 0x2c0) = 0x37fffffff;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined1 *)(param_1 + 0x2d0) = 0;
      *(undefined1 *)(param_1 + 0x2e8) = 0;
      *(undefined1 *)(param_1 + 0x2ec) = 0;
      *(undefined1 *)(param_1 + 0x308) = 0;
      *(undefined1 *)(param_1 + 0x30c) = 0;
      *(undefined1 *)(param_1 + 800) = 0;
      *(undefined1 *)(param_1 + 0x324) = 1;
    }
  }
  return;
}



/* Entry: 10ac2357c; end: 10ac235bf;  */

void FUN_10ac2357c(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f69da65;
  uStack_18 = 0x1e;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&puStack_20);
  return;
}



/* Entry: 10ac235c0; end: 10ac2364f;  */

void FUN_10ac235c0(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x334) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
      *(undefined1 *)(param_2 + 0x48) = 1;
    }
    param_2 = param_2 + 0x20;
    lStack_28 = param_1 + 0x2d0;
    FUN_10aae6e98(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
    FUN_10a22c4c8(param_2 + 0x18,param_1 + 0x2d4,param_1 + 0x2d4);
    return;
  }
  *(undefined1 *)(param_2 + 0x569) = 1;
  return;
}



/* Entry: 10ac23650; end: 10ac23dcf;  */

void FUN_10ac23650(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *unaff_x22;
  long *plVar22;
  undefined ***unaff_x23;
  ulong unaff_x26;
  double dVar23;
  double dVar24;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)(param_1 + 0x2c0);
  FUN_10ac23dd0();
  ppuVar7 = (undefined **)(param_1 + 0x358);
  if (*(char *)(param_1 + 0x370) == '\x01') {
    ppuVar5 = ppuVar7;
    func_0x00010a136de4();
    *(undefined1 *)(param_1 + 0x370) = 0;
  }
  if (*(char *)(param_1 + 0x334) == '\x01') {
    ppuVar5 = *(undefined ***)(param_2 + 0x58);
    FUN_10aad301c(&ppuStack_c0,ppuVar5,param_1 + 0x2d0);
    uVar15 = uStack_a8;
    bVar1 = *(byte *)(param_1 + 0x370);
    unaff_x22 = (undefined8 *)(uStack_a8 & 0xff);
    if (bVar1 == (byte)uStack_a8) {
      if ((bVar1 & 1) != 0) {
        func_0x00010a22b8d4(ppuVar7,&ppuStack_c0);
        *(long *)(param_1 + 0x368) = lStack_b0;
        ppuVar5 = ppuVar7;
        if ((byte)uStack_a8 == '\x01') goto LAB_10ac2373c;
      }
    }
    else {
      if (bVar1 == 0) {
        *(undefined ***)(param_1 + 0x360) = ppuStack_b8;
        *ppuVar7 = (undefined *)ppuStack_c0;
        ppuStack_c0 = (undefined **)0x0;
        ppuStack_b8 = (undefined **)0x0;
        *(long *)(param_1 + 0x368) = lStack_b0;
        *(undefined1 *)(param_1 + 0x370) = 1;
        ppuVar7 = ppuVar5;
      }
      else {
        func_0x00010a136de4();
        *(undefined1 *)(param_1 + 0x370) = 0;
      }
      ppuVar5 = ppuVar7;
      if ((uVar15 & 1) != 0) {
LAB_10ac2373c:
        ppuVar6 = ppuStack_b8;
        ppuVar5 = ppuVar7;
        if (ppuStack_b8 != (undefined **)0x0) {
          ppuVar7 = ppuStack_b8 + 1;
          do {
            puVar17 = *ppuVar7;
            cVar13 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar2) {
              *ppuVar7 = puVar17 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (puVar17 == (undefined *)0x0) {
            (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar5 = ppuVar6;
          }
        }
      }
    }
  }
  lVar21 = *(long *)(param_1 + 0x2b0);
  if ((*(long *)(lVar21 + 0x30) != 0) &&
     ((*(char *)(param_1 + 0x334) != '\x01' || (*(char *)(param_1 + 0x370) == '\x01')))) {
    if (*(long *)(param_2 + 0x58) == 0) {
      if (*(int *)(*(long *)(param_1 + 0x90) + 0xe30) == 2) {
        uVar9 = 0;
        cVar13 = '\0';
        dVar23 = 0.0;
      }
      else {
        uVar9 = *(undefined1 *)(param_2 + 0x18);
        dVar23 = *(double *)(param_2 + 0x20);
        cVar13 = *(char *)(param_2 + 0x28);
      }
    }
    else {
      uVar9 = 0;
      cVar13 = '\x01';
      dVar23 = (double)*(long *)(*(long *)(param_2 + 0x58) + 8) / 1000000000.0;
    }
    if ((dVar23 != *(double *)(param_1 + 0x348)) || (cVar13 != *(char *)(param_1 + 0x350))) {
      *(undefined1 *)(param_1 + 0x340) = uVar9;
      *(double *)(param_1 + 0x348) = dVar23;
      *(char *)(param_1 + 0x350) = cVar13;
      dVar24 = *(double *)(*(long *)(*(long *)(param_1 + 0x90) + 0x850) + 0x18);
      ppuVar7 = (undefined **)0x38;
      __Znwm();
      ppuVar7[1] = (undefined *)0x0;
      ppuVar7[2] = (undefined *)0x0;
      *ppuVar7 = (undefined *)&PTR_FUN_110c5e1b0;
      ppuVar7[4] = (undefined *)0x0;
      ppuVar7[5] = (undefined *)0x0;
      ppuStack_120 = ppuVar7 + 3;
      *ppuStack_120 = (undefined *)&PTR_FUN_110c173c8;
      ppuVar7[6] = (undefined *)(dVar23 - dVar24);
      uStack_108 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_f8 = 0;
      plStack_100 = (long *)0x0;
      fStack_f0 = *(float *)(lVar21 + 0x38);
      ppuStack_118 = ppuVar7;
      FUN_10ac4c7c0(&puStack_110,*(undefined8 *)(lVar21 + 0x20));
      plVar22 = *(long **)(lVar21 + 0x28);
      if (plVar22 != (long *)0x0) {
        unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
        do {
          uVar15 = uStack_108;
          uVar10 = plVar22[2];
          uVar18 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
          uVar18 = (uVar10 >> 0x20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
          uVar18 = (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
          if (uStack_108 != 0) {
            uVar14 = uStack_108 - 1;
            if ((uStack_108 & uVar14) == 0) {
              unaff_x26 = uVar18 & uVar14;
            }
            else {
              unaff_x26 = uVar18;
              if (uStack_108 <= uVar18) {
                uVar20 = 0;
                if (uStack_108 != 0) {
                  uVar20 = uVar18 / uStack_108;
                }
                unaff_x26 = uVar18 - uVar20 * uStack_108;
              }
            }
            plVar19 = *(long **)(puStack_110 + unaff_x26 * 8);
            if (plVar19 != (long *)0x0) {
              do {
                while( true ) {
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) goto LAB_10ac2394c;
                  uVar20 = plVar19[1];
                  if (uVar20 != uVar18) break;
                  if (plVar19[2] == uVar10) goto LAB_10ac23aac;
                }
                if ((uStack_108 & uVar14) == 0) {
                  uVar20 = uVar20 & uVar14;
                }
                else if (uStack_108 <= uVar20) {
                  uVar4 = 0;
                  if (uStack_108 != 0) {
                    uVar4 = uVar20 / uStack_108;
                  }
                  uVar20 = uVar20 - uVar4 * uStack_108;
                }
              } while (uVar20 == unaff_x26);
            }
          }
LAB_10ac2394c:
          plVar19 = (long *)0x68;
          __Znwm();
          *plVar19 = 0;
          plVar19[1] = uVar18;
          lVar11 = plVar22[3];
          lVar8 = plVar22[2];
          plVar19[3] = plVar22[3];
          plVar19[2] = lVar8;
          if (lVar11 != 0) {
            plVar16 = (long *)(lVar11 + 8);
            do {
              cVar13 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar2) {
                *plVar16 = *plVar16 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          ppuStack_c0 = (undefined **)(plVar19 + 4);
          *(undefined1 *)(plVar19 + 0xc) = 3;
          if ((char)plVar22[0xc] == '\0') {
            uVar9 = 0;
          }
          else {
            FUN_10a005398(&ppuStack_c0,plVar22 + 4);
            uVar9 = (undefined1)plVar22[0xc];
          }
          *(undefined1 *)(plVar19 + 0xc) = uVar9;
          if ((uVar15 == 0) || (fStack_f0 * (float)uVar15 < (float)(lStack_f8 + 1))) {
            uVar10 = 1;
            if (2 < uVar15) {
              uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
            }
            uVar10 = uVar10 | uVar15 << 1;
            uVar15 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
            if (uVar10 <= uVar15) {
              uVar10 = uVar15;
            }
            FUN_10ac4c7c0(&puStack_110,uVar10);
            uVar15 = uStack_108;
            if ((uStack_108 & uStack_108 - 1) == 0) {
              unaff_x26 = uStack_108 - 1 & uVar18;
            }
            else {
              unaff_x26 = uVar18;
              if (uStack_108 <= uVar18) {
                uVar10 = 0;
                if (uStack_108 != 0) {
                  uVar10 = uVar18 / uStack_108;
                }
                unaff_x26 = uVar18 - uVar10 * uStack_108;
              }
            }
          }
          plVar16 = *(long **)(puStack_110 + unaff_x26 * 8);
          if (plVar16 == (long *)0x0) {
            *plVar19 = (long)plStack_100;
            *(long ***)(puStack_110 + unaff_x26 * 8) = &plStack_100;
            plStack_100 = plVar19;
            if (*plVar19 != 0) {
              uVar10 = *(ulong *)(*plVar19 + 8);
              if ((uVar15 & uVar15 - 1) == 0) {
                uVar10 = uVar10 & uVar15 - 1;
              }
              else if (uVar15 <= uVar10) {
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar10 / uVar15;
                }
                uVar10 = uVar10 - uVar18 * uVar15;
              }
              *(long **)(puStack_110 + uVar10 * 8) = plVar19;
            }
          }
          else {
            *plVar19 = *plVar16;
            *plVar16 = (long)plVar19;
          }
          lStack_f8 = lStack_f8 + 1;
LAB_10ac23aac:
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      unaff_x22 = (undefined8 *)0x0;
      if (plStack_100 == (long *)0x0) {
        ppuVar5 = &puStack_110;
        FUN_10ac4da60();
      }
      else {
        unaff_x22 = &uStack_e0;
        unaff_x23 = &ppuStack_c0;
        plVar22 = plStack_100;
        do {
          lVar8 = plVar22[2];
          lVar11 = lVar21 + 0x18;
          FUN_10ac4d1d0();
          if (lVar11 != 0) {
            if ((char)plVar22[0xc] == '\x01') {
              pcVar12 = (code *)plVar22[4];
              ppuStack_b8 = ppuStack_118;
              ppuStack_c0 = ppuStack_120;
              if (ppuStack_118 != (undefined **)0x0) {
                ppuVar7 = ppuStack_118 + 1;
                do {
                  cVar13 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar2) {
                    *ppuVar7 = *ppuVar7 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              (*pcVar12)(&ppuStack_c0,plVar22 + 4);
              if (ppuStack_b8 != (undefined **)0x0) {
                ppuVar7 = ppuStack_b8 + 1;
                do {
                  puVar17 = *ppuVar7;
                  cVar13 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                  if (bVar2) {
                    *ppuVar7 = puVar17 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                  ppuVar5 = ppuStack_b8;
                } while (cVar13 != '\0');
LAB_10ac23b8c:
                if (puVar17 == (undefined *)0x0) {
                  (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
                }
              }
            }
            else if ((char)plVar22[0xc] == '\x02') {
              plVar19 = plVar22 + 4;
              FUN_10a688b40();
              ppuVar7 = ppuStack_118;
              if (plVar19 == (long *)0x0) {
                if (lVar8 != 0) {
                  lStack_b0 = plVar22[4];
                  uStack_a8 = plVar22[5];
                  if (uStack_a8 != 0) {
                    plVar19 = (long *)(uStack_a8 + 8);
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar2) {
                        *plVar19 = *plVar19 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppuStack_d0 = ppuStack_120;
                  ppuStack_c8 = ppuStack_118;
                  if (ppuStack_118 == (undefined **)0x0) {
                    ppuStack_98 = (undefined **)0x0;
                  }
                  else {
                    ppuVar5 = ppuStack_118 + 1;
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = *ppuVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    ppuStack_98 = ppuStack_118;
                    do {
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = *ppuVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  ppuStack_a0 = ppuStack_120;
                  ppuStack_b8 = &PTR_FUN_110c5e1f0;
                  ppuStack_d8 = (undefined **)0x0;
                  uStack_e0 = 0;
                  ppuStack_c0 = (undefined **)FUN_10ac4dd84;
                  FUN_10a4634ec(lVar8,&ppuStack_c0);
                  (*(code *)*ppuStack_b8)(&ppuStack_b8);
                  if (ppuVar7 != (undefined **)0x0) {
                    ppuVar5 = ppuVar7 + 1;
                    do {
                      puVar17 = *ppuVar5;
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                      if (bVar2) {
                        *ppuVar5 = puVar17 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    if (puVar17 == (undefined *)0x0) {
                      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
                    }
                  }
                  if (ppuStack_d8 != (undefined **)0x0) {
                    ppuVar7 = ppuStack_d8 + 1;
                    do {
                      puVar17 = *ppuVar7;
                      cVar13 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
                      if (bVar2) {
                        *ppuVar7 = puVar17 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                      ppuVar5 = ppuStack_d8;
                    } while (cVar13 != '\0');
                    goto LAB_10ac23b8c;
                  }
                }
              }
              else {
                *plVar19 = CONCAT44((int)((ulong)*plVar19 >> 0x20) + 1,(int)*plVar19 + 1);
                FUN_10ac4db80(plVar22[4],&ppuStack_120);
                iVar3 = *(int *)((long)plVar19 + 4) + -1;
                *(int *)((long)plVar19 + 4) = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)plVar19 = 0;
                }
              }
            }
          }
          ppuVar7 = ppuStack_118;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
        ppuVar5 = &puStack_110;
        FUN_10ac4da60();
        if (ppuVar7 == (undefined **)0x0) goto LAB_10ac23ce8;
      }
      ppuVar6 = ppuVar7 + 1;
      do {
        puVar17 = *ppuVar6;
        cVar13 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar2) {
          *ppuVar6 = puVar17 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar5 = ppuVar7;
      }
    }
  }
LAB_10ac23ce8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10ac4db28(unaff_x22 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10ac4da60(&puStack_110);
  FUN_10ac4db28(&ppuStack_120);
  __Unwind_Resume();
  plVar22 = (long *)ppuVar5[1];
  *ppuVar5 = (undefined *)0x0;
  ppuVar5[1] = (undefined *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar19 = plVar22 + 1;
    do {
      lVar21 = *plVar19;
      cVar13 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar2) {
        *plVar19 = lVar21 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar22);
      return;
    }
  }
  return;
}


