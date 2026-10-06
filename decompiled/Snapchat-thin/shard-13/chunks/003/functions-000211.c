/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3dfc00; end: 10a3dfc77;  */

void FUN_10a3dfc00(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  for (puVar3 = puVar1; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    FUN_10a3c6798(*puVar3);
  }
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a3dfc78; end: 10a3dfecf;  */

void FUN_10a3dfc78(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "SceneActivityPhase";
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Foregrounding";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0(param_1,&pcStack_a8,1);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Foreground";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Backgrounding";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Background";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Suspending";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Suspended";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Paused";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f653596;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x1660000016f;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3dfed0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a3dfed0; end: 10a3dff73;  */

undefined8 * FUN_10a3dfed0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3dff74);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a3dff74; end: 10a3e00f3;  */

long FUN_10a3dff74(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_38;
  
  plVar1 = *(long **)(param_1 + 0x128);
  for (plVar2 = *(long **)(param_1 + 0x120); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((*plVar2 != 0) && ((*(ushort *)(*plVar2 + 0x180) >> 4 & 1) == 0)) {
      FUN_10a3c762c();
    }
  }
  plVar1 = *(long **)(param_1 + 0x110);
  for (plVar2 = *(long **)(param_1 + 0x108); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((*plVar2 != 0) && ((*(ushort *)(*plVar2 + 0x118) >> 3 & 1) == 0)) {
      FUN_10a3e00f4();
    }
  }
  plVar2 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    func_0x00010a3e15fc(param_1 + 0x138);
    __ZdlPv(*(undefined8 *)(param_1 + 0x138));
  }
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x128);
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x10;
        FUN_10a0d4f28();
      } while (lVar3 != lVar5);
      lVar4 = *(long *)(param_1 + 0x120);
    }
    *(long *)(param_1 + 0x128) = lVar5;
    __ZdlPv(lVar4);
  }
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x110);
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x10;
        func_0x00010a05253c();
      } while (lVar3 != lVar5);
      lVar4 = *(long *)(param_1 + 0x108);
    }
    *(long *)(param_1 + 0x110) = lVar5;
    __ZdlPv(lVar4);
  }
  lStack_38 = param_1 + 0xf0;
  FUN_10a10a66c(&lStack_38);
  FUN_10a10a718(param_1 + 200);
  func_0x00010a10a78c(param_1 + 0xa0);
  (*(code *)**(undefined8 **)(param_1 + 0x60))();
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return param_1;
}



/* Entry: 10a3e00f4; end: 10a3e039f;  */

void FUN_10a3e00f4(undefined ***param_1,undefined ****param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ****ppppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined **unaff_x20;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_90;
  long *plStack_88;
  undefined ***pppuStack_80;
  long *plStack_78;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(ushort *)(param_1 + 0x23) >> 8 & 1) == 0) {
    pppuStack_60 = &ppuStack_68;
    ppuStack_68 = &PTR_FUN_110bd2bb0;
    pppuVar10 = param_1;
    do {
      pppuVar10 = (undefined ***)pppuVar10[0x31];
      pppuStack_50 = pppuStack_60;
      if (pppuVar10 == (undefined ***)0x0) {
        iVar6 = (int)&ppuStack_68;
        param_2 = &pppuStack_80;
        pppuStack_80 = param_1;
        FUN_10a3fdd50();
        if (iVar6 == 0) {
          ppuVar14 = param_1[0x24];
          bVar2 = *(byte *)(ppuVar14 + 0x22e);
          unaff_x20 = (undefined **)(ulong)bVar2;
          *(undefined1 *)(ppuVar14 + 0x22e) = 1;
          FUN_10a3e1c20(param_1);
          func_0x00010a3e1c98(param_1);
          FUN_10a3e1d14(param_1);
          if ((bVar2 & 1) == 0) {
            ppuVar15 = (undefined **)ppuVar14[0x22c];
            ppuVar11 = (undefined **)ppuVar14[0x22b];
            while (ppuVar11 != ppuVar15) {
              plVar7 = (long *)ppuVar15[-1];
              if ((plVar7 == (long *)0x0) ||
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
                puVar13 = (undefined *)0x0;
              }
              else {
                puVar13 = ppuVar15[-2];
                plVar1 = plVar7 + 1;
                do {
                  lVar12 = *plVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = lVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              unaff_x20 = (undefined **)ppuVar14[0x22c];
              if ((undefined **)ppuVar14[0x22b] == unaff_x20) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e033c);
                (*pcVar5)();
              }
              if (unaff_x20[-1] != (undefined *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              ppuVar15 = unaff_x20 + -2;
              ppuVar14[0x22c] = (undefined *)ppuVar15;
              if ((puVar13 != (undefined *)0x0) && ((*(ushort *)(puVar13 + 0x118) >> 3 & 1) == 0)) {
                FUN_10a3e1c20(puVar13);
                func_0x00010a3e1c98(puVar13);
                FUN_10a3e1d14(puVar13);
                ppuVar15 = (undefined **)ppuVar14[0x22c];
              }
              ppuVar11 = (undefined **)ppuVar14[0x22b];
            }
            *(undefined1 *)(ppuVar14 + 0x22e) = 0;
          }
          goto LAB_10a3e02dc;
        }
        break;
      }
    } while ((*(ushort *)(pppuVar10 + 0x23) >> 2 & 1) == 0);
    unaff_x20 = param_1[0x24];
    func_0x00010a0d77bc(&pppuStack_90,param_1);
    plStack_78 = plStack_88;
    pppuStack_80 = pppuStack_90;
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_2 = &pppuStack_80;
    FUN_10a2d9e4c(unaff_x20 + 0x22b);
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 1;
      do {
        lVar12 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
LAB_10a3e02dc:
    param_1 = pppuStack_50;
    if (pppuStack_50 == &ppuStack_68) {
      lVar12 = 0x20;
    }
    else {
      if (pppuStack_50 == (undefined ***)0x0) goto LAB_10a3e0308;
      lVar12 = 0x28;
    }
    (**(code **)((long)*pppuStack_50 + lVar12))();
  }
LAB_10a3e0308:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar12 = 0x20;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_10a3e0398;
    lVar12 = 0x28;
  }
  (**(code **)((long)*pppuStack_50 + lVar12))();
LAB_10a3e0398:
  pppuVar8 = param_1;
  __Unwind_Resume();
  pcStack_98 = FUN_10a3e03a0;
  pppuVar10 = pppuVar8 + 0x5a;
  ppuStack_b0 = unaff_x20;
  pppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv();
  _pthread_self();
  param_2[1] = pppuVar10;
  ppppuVar9 = &pppuStack_b8;
  pppuStack_b8 = pppuVar10;
  FUN_10a3fa36c(pppuVar8 + 0x8a,ppppuVar9,&pppuStack_b8,param_2);
  if (((ulong)ppppuVar9 & 1) == 0) {
    func_0x000105688514(&UNK_10f654162);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e040c);
    (*pcVar5)();
  }
  __ZNSt3__15mutex6unlockEv(pppuVar8 + 0x5a);
  return;
}



/* Entry: 10a3e03a0; end: 10a3e0427;  */

void FUN_10a3e03a0(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lStack_28;
  
  lVar2 = param_1 + 0x2d0;
  __ZNSt3__15mutex4lockEv();
  _pthread_self();
  *(long *)(param_2 + 8) = lVar2;
  plVar3 = &lStack_28;
  lStack_28 = lVar2;
  FUN_10a3fa36c(param_1 + 0x450,plVar3,&lStack_28,param_2);
  if (((ulong)plVar3 & 1) != 0) {
    __ZNSt3__15mutex6unlockEv(param_1 + 0x2d0);
    return;
  }
  func_0x000105688514(&UNK_10f654162);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3e040c);
  (*pcVar1)();
}



/* Entry: 10a3e0428; end: 10a3e05ef;  */

int * FUN_10a3e0428(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  puVar7 = (undefined8 *)0x158;
  __Znwm();
  puVar7[0x1b] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x17] = 0;
  puVar7[0x16] = 0;
  puVar7[0x19] = 0;
  puVar7[0x18] = 0;
  puVar7[0x13] = 0;
  puVar7[0x12] = 0;
  puVar7[0x15] = 0;
  puVar7[0x14] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = &UNK_1053a6a3c;
  puVar7[4] = &PTR_DAT_110ae9180;
  puVar7[0xb] = &UNK_1053a6a3c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  puVar7[0x15] = 0;
  puVar7[0x14] = 0;
  puVar7[0x17] = 0;
  puVar7[0x16] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0x3f800000;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  *(undefined4 *)(puVar7 + 0x1d) = 0x3f800000;
  puVar7[0x2a] = 0;
  puVar7[0x27] = 0;
  puVar7[0x26] = 0;
  puVar7[0x29] = 0;
  puVar7[0x28] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x25] = 0;
  puVar7[0x24] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x21] = 0;
  puVar7[0x20] = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x480);
  if (puVar13 < *(undefined8 **)(param_1 + 0x488)) {
    puVar14 = puVar13 + 1;
    *puVar13 = puVar7;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x478);
    lVar12 = (long)puVar13 - lVar9;
    uVar2 = (lVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x00010a3efb8c();
      goto LAB_10a3e05c4;
    }
    uVar8 = (long)*(undefined8 **)(param_1 + 0x488) - lVar9;
    uVar10 = (long)uVar8 >> 2;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    plStack_48 = (long *)(param_1 + 0x478);
    FUN_10a3efba0();
    lVar9 = *(long *)(param_1 + 0x478);
    puVar13 = (undefined8 *)(uVar10 + lVar12);
    lVar12 = (long)puVar13 - (*(long *)(param_1 + 0x480) - lVar9);
    puVar14 = puVar13 + 1;
    *puVar13 = puVar7;
    _memcpy(lVar12,lVar9);
    uStack_68 = *(undefined8 *)(param_1 + 0x478);
    *(long *)(param_1 + 0x478) = lVar12;
    *(undefined8 **)(param_1 + 0x480) = puVar14;
    uStack_50 = *(undefined8 *)(param_1 + 0x488);
    *(ulong *)(param_1 + 0x488) = uVar10 + param_2 * 8;
    uStack_60 = uStack_68;
    uStack_58 = uStack_68;
    func_0x00010a3efbd4(&uStack_68);
  }
  *(undefined8 **)(param_1 + 0x480) = puVar14;
  if (*(undefined8 **)(param_1 + 0x478) != puVar14) {
    piVar11 = (int *)puVar14[-1];
    __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
    iVar1 = *(int *)(param_1 + 0x4ac) + 1;
    *(int *)(param_1 + 0x4ac) = iVar1;
    *piVar11 = iVar1;
    piVar3 = (int *)(param_1 + 0x4a8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    return piVar11;
  }
LAB_10a3e05c4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3e05c8);
  (*pcVar6)();
}



/* Entry: 10a3e05f0; end: 10a3e0707;  */

void FUN_10a3e05f0(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  lVar11 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_70,param_3 + 1);
  puVar23 = (undefined8 *)(param_2 + 0x60);
  *(code **)(param_2 + 0x58) = FUN_10a3fa768;
  (**(code **)*puVar23)(puVar23);
  *puVar23 = &PTR_FUN_110bd2ae8;
  plVar6 = (long *)0x48;
  __Znwm();
  *plVar6 = param_2;
  plVar6[1] = lVar11;
  ppuVar8 = apuStack_70;
  (*(code *)apuStack_70[0][2])(plVar6 + 2);
  *(long **)(param_2 + 0x68) = plVar6;
  (*(code *)*apuStack_70[0])(apuStack_70);
  lVar11 = param_1 + 0x310;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  __Unwind_Resume();
  ppuVar9 = ppuVar8;
  __ZNSt3__15mutex4lockEv(lVar11 + 0x310);
  if (ppuVar8[1] == (undefined8 *)0x0) goto LAB_10a3e0870;
  puVar23 = (undefined8 *)(lVar11 + 0x2d0);
  __ZNSt3__15mutex4lockEv();
  _pthread_self();
  plVar6 = (long *)(lVar11 + 0x450);
  ppuVar9 = &puStack_e8;
  plVar7 = plVar6;
  puStack_e8 = puVar23;
  func_0x00010a3fa294();
  if (plVar7 != (long *)0x0) {
    uVar16 = *(ulong *)(lVar11 + 0x458);
    lVar12 = *plVar7;
    uVar14 = plVar7[1];
    uVar18 = uVar16 - 1;
    if ((uVar16 & uVar18) == 0) {
      uVar14 = uVar18 & uVar14;
    }
    else if (uVar16 <= uVar14) {
      uVar20 = 0;
      if (uVar16 != 0) {
        uVar20 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar20 * uVar16;
    }
    plVar4 = *(long **)(*plVar6 + uVar14 * 8);
    do {
      plVar19 = plVar4;
      plVar4 = (long *)*plVar19;
    } while ((long *)*plVar19 != plVar7);
    if (plVar19 == (long *)(lVar11 + 0x460)) {
LAB_10a3e07d8:
      if (lVar12 == 0) {
LAB_10a3e080c:
        *(undefined8 *)(*plVar6 + uVar14 * 8) = 0;
        lVar12 = *plVar7;
        goto LAB_10a3e0814;
      }
      uVar20 = *(ulong *)(lVar12 + 8);
      if ((uVar16 & uVar18) == 0) {
        uVar21 = uVar20 & uVar18;
      }
      else {
        uVar21 = uVar20;
        if (uVar16 <= uVar20) {
          uVar21 = 0;
          if (uVar16 != 0) {
            uVar21 = uVar20 / uVar16;
          }
          uVar21 = uVar20 - uVar21 * uVar16;
        }
      }
      if (uVar21 != uVar14) goto LAB_10a3e080c;
LAB_10a3e081c:
      if ((uVar16 & uVar18) == 0) {
        uVar20 = uVar20 & uVar18;
      }
      else if (uVar16 <= uVar20) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar20 / uVar16;
        }
        uVar20 = uVar20 - uVar18 * uVar16;
      }
      if (uVar20 != uVar14) {
        *(long **)(*plVar6 + uVar20 * 8) = plVar19;
        lVar12 = *plVar7;
      }
    }
    else {
      uVar20 = plVar19[1];
      if ((uVar16 & uVar18) == 0) {
        uVar20 = uVar20 & uVar18;
      }
      else if (uVar16 <= uVar20) {
        uVar21 = 0;
        if (uVar16 != 0) {
          uVar21 = uVar20 / uVar16;
        }
        uVar20 = uVar20 - uVar21 * uVar16;
      }
      if (uVar20 != uVar14) goto LAB_10a3e07d8;
LAB_10a3e0814:
      if (lVar12 != 0) {
        uVar20 = *(ulong *)(lVar12 + 8);
        goto LAB_10a3e081c;
      }
    }
    *plVar19 = lVar12;
    *plVar7 = 0;
    *(long *)(lVar11 + 0x468) = *(long *)(lVar11 + 0x468) + -1;
    __ZdlPv();
  }
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x2d0);
LAB_10a3e0870:
  puVar23 = *(undefined8 **)(lVar11 + 0x478);
  puVar24 = *(undefined8 **)(lVar11 + 0x480);
  if (puVar23 != puVar24) {
    lVar12 = -(long)puVar23;
    do {
      ppuVar13 = (undefined8 **)*puVar23;
      if (ppuVar13 == ppuVar8) {
        puVar25 = *(undefined8 **)(lVar11 + 0x498);
        if (puVar25 < *(undefined8 **)(lVar11 + 0x4a0)) {
          *puVar23 = 0;
          puVar26 = puVar25 + 1;
          *puVar25 = ppuVar13;
        }
        else {
          lVar17 = *(long *)(lVar11 + 0x490);
          lVar22 = (long)puVar25 - lVar17;
          uVar14 = (lVar22 >> 3) + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x00010a3efb8c();
            goto LAB_10a3e09f4;
          }
          uVar18 = (long)*(undefined8 **)(lVar11 + 0x4a0) - lVar17;
          uVar16 = (long)uVar18 >> 2;
          if (uVar16 <= uVar14) {
            uVar16 = uVar14;
          }
          if (0x7ffffffffffffff7 < uVar18) {
            uVar16 = 0x1fffffffffffffff;
          }
          plStack_c8 = (long *)(lVar11 + 0x490);
          FUN_10a3efba0();
          lVar15 = *(long *)(lVar11 + 0x498);
          lVar17 = *(long *)(lVar11 + 0x490);
          uVar10 = *puVar23;
          puVar24 = (undefined8 *)(uVar16 + lVar22);
          *puVar23 = 0;
          lVar22 = (long)puVar24 - (lVar15 - lVar17);
          puVar26 = puVar24 + 1;
          *puVar24 = uVar10;
          _memcpy(lVar22,lVar17);
          puStack_e8 = *(undefined8 **)(lVar11 + 0x490);
          *(long *)(lVar11 + 0x490) = lVar22;
          *(undefined8 **)(lVar11 + 0x498) = puVar26;
          uStack_d0 = *(undefined8 *)(lVar11 + 0x4a0);
          *(ulong *)(lVar11 + 0x4a0) = uVar16 + (long)ppuVar9 * 8;
          puStack_e0 = puStack_e8;
          puStack_d8 = puStack_e8;
          func_0x00010a3efbd4(&puStack_e8);
          puVar24 = *(undefined8 **)(lVar11 + 0x480);
        }
        *(undefined8 **)(lVar11 + 0x498) = puVar26;
        if (puVar23 == puVar24) {
LAB_10a3e09f4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e09f8);
          (*pcVar5)();
        }
        puVar23 = (undefined8 *)-lVar12;
        puVar25 = (undefined8 *)(8 - lVar12);
        if ((undefined8 *)(8 - lVar12) != puVar24) {
          do {
            uVar10 = *puVar25;
            puVar26 = puVar25 + 1;
            *puVar25 = 0;
            FUN_10a3efb64(puVar23,uVar10);
            puVar23 = puVar23 + 1;
            puVar25 = puVar26;
          } while (puVar26 != puVar24);
          puVar24 = *(undefined8 **)(lVar11 + 0x480);
        }
        while (puVar24 != puVar23) {
          puVar24 = puVar24 + -1;
          FUN_10a3efb64(puVar24,0);
        }
        *(undefined8 **)(lVar11 + 0x480) = puVar23;
        piVar1 = (int *)(lVar11 + 0x4a8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      }
      puVar23 = puVar23 + 1;
      lVar12 = lVar12 + -8;
    } while (puVar23 != puVar24);
  }
  __ZNSt3__15mutex6unlockEv(lVar11 + 0x310);
  return;
}



/* Entry: 10a3e0708; end: 10a3e0a23;  */

void FUN_10a3e0708(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar7 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  if (param_2[1] == 0) goto LAB_10a3e0870;
  lVar9 = param_1 + 0x2d0;
  __ZNSt3__15mutex4lockEv();
  _pthread_self();
  plVar10 = (long *)(param_1 + 0x450);
  plVar7 = &lStack_68;
  plVar6 = plVar10;
  lStack_68 = lVar9;
  func_0x00010a3fa294();
  if (plVar6 != (long *)0x0) {
    uVar13 = *(ulong *)(param_1 + 0x458);
    lVar9 = *plVar6;
    uVar11 = plVar6[1];
    uVar15 = uVar13 - 1;
    if ((uVar13 & uVar15) == 0) {
      uVar11 = uVar15 & uVar11;
    }
    else if (uVar13 <= uVar11) {
      uVar17 = 0;
      if (uVar13 != 0) {
        uVar17 = uVar11 / uVar13;
      }
      uVar11 = uVar11 - uVar17 * uVar13;
    }
    plVar4 = *(long **)(*plVar10 + uVar11 * 8);
    do {
      plVar16 = plVar4;
      plVar4 = (long *)*plVar16;
    } while ((long *)*plVar16 != plVar6);
    if (plVar16 == (long *)(param_1 + 0x460)) {
LAB_10a3e07d8:
      if (lVar9 == 0) {
LAB_10a3e080c:
        *(undefined8 *)(*plVar10 + uVar11 * 8) = 0;
        lVar9 = *plVar6;
        goto LAB_10a3e0814;
      }
      uVar17 = *(ulong *)(lVar9 + 8);
      if ((uVar13 & uVar15) == 0) {
        uVar18 = uVar17 & uVar15;
      }
      else {
        uVar18 = uVar17;
        if (uVar13 <= uVar17) {
          uVar18 = 0;
          if (uVar13 != 0) {
            uVar18 = uVar17 / uVar13;
          }
          uVar18 = uVar17 - uVar18 * uVar13;
        }
      }
      if (uVar18 != uVar11) goto LAB_10a3e080c;
LAB_10a3e081c:
      if ((uVar13 & uVar15) == 0) {
        uVar17 = uVar17 & uVar15;
      }
      else if (uVar13 <= uVar17) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = uVar17 / uVar13;
        }
        uVar17 = uVar17 - uVar15 * uVar13;
      }
      if (uVar17 != uVar11) {
        *(long **)(*plVar10 + uVar17 * 8) = plVar16;
        lVar9 = *plVar6;
      }
    }
    else {
      uVar17 = plVar16[1];
      if ((uVar13 & uVar15) == 0) {
        uVar17 = uVar17 & uVar15;
      }
      else if (uVar13 <= uVar17) {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar17 / uVar13;
        }
        uVar17 = uVar17 - uVar18 * uVar13;
      }
      if (uVar17 != uVar11) goto LAB_10a3e07d8;
LAB_10a3e0814:
      if (lVar9 != 0) {
        uVar17 = *(ulong *)(lVar9 + 8);
        goto LAB_10a3e081c;
      }
    }
    *plVar16 = lVar9;
    *plVar6 = 0;
    *(long *)(param_1 + 0x468) = *(long *)(param_1 + 0x468) + -1;
    __ZdlPv();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x2d0);
LAB_10a3e0870:
  puVar21 = *(undefined8 **)(param_1 + 0x478);
  puVar20 = *(undefined8 **)(param_1 + 0x480);
  if (puVar21 != puVar20) {
    lVar9 = -(long)puVar21;
    do {
      plVar10 = (long *)*puVar21;
      if (plVar10 == param_2) {
        puVar22 = *(undefined8 **)(param_1 + 0x498);
        if (puVar22 < *(undefined8 **)(param_1 + 0x4a0)) {
          *puVar21 = 0;
          puVar23 = puVar22 + 1;
          *puVar22 = plVar10;
        }
        else {
          lVar14 = *(long *)(param_1 + 0x490);
          lVar19 = (long)puVar22 - lVar14;
          uVar11 = (lVar19 >> 3) + 1;
          if (uVar11 >> 0x3d != 0) {
            func_0x00010a3efb8c();
            goto LAB_10a3e09f4;
          }
          uVar15 = (long)*(undefined8 **)(param_1 + 0x4a0) - lVar14;
          uVar13 = (long)uVar15 >> 2;
          if (uVar13 <= uVar11) {
            uVar13 = uVar11;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar13 = 0x1fffffffffffffff;
          }
          plStack_48 = (long *)(param_1 + 0x490);
          FUN_10a3efba0();
          lVar12 = *(long *)(param_1 + 0x498);
          lVar14 = *(long *)(param_1 + 0x490);
          uVar8 = *puVar21;
          puVar20 = (undefined8 *)(uVar13 + lVar19);
          *puVar21 = 0;
          lVar19 = (long)puVar20 - (lVar12 - lVar14);
          puVar23 = puVar20 + 1;
          *puVar20 = uVar8;
          _memcpy(lVar19,lVar14);
          lStack_68 = *(long *)(param_1 + 0x490);
          *(long *)(param_1 + 0x490) = lVar19;
          *(undefined8 **)(param_1 + 0x498) = puVar23;
          uStack_50 = *(undefined8 *)(param_1 + 0x4a0);
          *(ulong *)(param_1 + 0x4a0) = uVar13 + (long)plVar7 * 8;
          lStack_60 = lStack_68;
          lStack_58 = lStack_68;
          func_0x00010a3efbd4(&lStack_68);
          puVar20 = *(undefined8 **)(param_1 + 0x480);
        }
        *(undefined8 **)(param_1 + 0x498) = puVar23;
        if (puVar21 == puVar20) {
LAB_10a3e09f4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e09f8);
          (*pcVar5)();
        }
        puVar21 = (undefined8 *)-lVar9;
        puVar22 = (undefined8 *)(8 - lVar9);
        if ((undefined8 *)(8 - lVar9) != puVar20) {
          do {
            uVar8 = *puVar22;
            puVar23 = puVar22 + 1;
            *puVar22 = 0;
            FUN_10a3efb64(puVar21,uVar8);
            puVar21 = puVar21 + 1;
            puVar22 = puVar23;
          } while (puVar23 != puVar20);
          puVar20 = *(undefined8 **)(param_1 + 0x480);
        }
        while (puVar20 != puVar21) {
          puVar20 = puVar20 + -1;
          FUN_10a3efb64(puVar20,0);
        }
        *(undefined8 **)(param_1 + 0x480) = puVar21;
        piVar1 = (int *)(param_1 + 0x4a8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      }
      puVar21 = puVar21 + 1;
      lVar9 = lVar9 + -8;
    } while (puVar21 != puVar20);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  return;
}



/* Entry: 10a3e0a24; end: 10a3e0c27;  */

void FUN_10a3e0a24(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  lVar7 = *(long *)(param_2 + 0x138);
  lVar8 = *(long *)(param_2 + 0x140);
  if (lVar8 != lVar7) {
    uVar11 = 0;
    do {
      lVar9 = lVar7 + uVar11 * 0x28;
      lVar10 = *(long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar4 = *(undefined8 *)(lVar9 + 0x18);
        plVar1 = *(long **)(lVar9 + 0x20);
        if ((*(long *)(lVar10 + 8) != -1) &&
           (FUN_10a042ab0(uVar4,&PTR_DAT_110bcfb40), (int)uVar4 != 0)) {
          if ((plVar1 == (long *)0x0) ||
             ((plVar5 = plVar1,
              ___dynamic_cast(plVar1,&PTR_DAT_110bcfb40,&PTR_DAT_110bf32c0,0xfffffffffffffffe),
              plVar5 == (long *)0x0 &&
              (plVar5 = plVar1, ___dynamic_cast(plVar1,&PTR_DAT_110bcfb40,&PTR_DAT_110c681e8,0x10),
              plVar5 == (long *)0x0)))) {
            ppuVar6 = &PTR_PTR_113302080;
            FUN_10ae079a0(0,&PTR_PTR_113302080);
            FUN_10ae07cd4(ppuVar6,&PTR_PTR_113302080);
          }
          (**(code **)*plVar1)(plVar1);
          plVar5 = plVar1;
          (**(code **)*plVar1)();
          if ((int)plVar5 == 0) {
            (**(code **)(*plVar1 + 8))(plVar1,0);
          }
          plVar5 = plVar1;
          (**(code **)*plVar1)();
          if ((int)plVar5 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
          (**(code **)*plVar1)(plVar1);
        }
        __ZNSt3__119__shared_weak_count14__release_weakEv(lVar10);
        lVar7 = *(long *)(param_2 + 0x138);
        lVar8 = *(long *)(param_2 + 0x140);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)((lVar8 - lVar7 >> 3) * -0x3333333333333333));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x310);
  return;
}



/* Entry: 10a3e0c28; end: 10a3e0c8f;  */

undefined * FUN_10a3e0c28(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  func_0x00010ae02fb8(0,param_1);
  FUN_10ae030a0();
  ppuVar6 = &PTR_PTR_1133020b0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010ae02fc8();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a3e0c90; end: 10a3e0df7;  */

undefined8 * FUN_10a3e0c90(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = param_1;
  lStack_90 = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x62);
  uStack_78 = *param_3;
  puStack_88 = param_1;
  lStack_80 = param_2;
  (**(code **)(param_3[1] + 0x10))(apuStack_70,param_3 + 1);
  puVar2 = (undefined8 *)(param_2 + 0x20);
  *(code **)(param_2 + 0x18) = FUN_10a3fa7cc;
  (**(code **)*puVar2)(puVar2);
  *puVar2 = &PTR_FUN_110bd2b00;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[1] = lStack_80;
  *puVar2 = puStack_88;
  puVar2[2] = uStack_78;
  (*(code *)apuStack_70[0][2])(puVar2 + 3,apuStack_70);
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x62);
  FUN_10a3e0a24(param_1,param_2);
  puVar2 = param_1;
  FUN_10a3e0708(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x62);
  FUN_10a3e0df8(&puStack_98);
  __Unwind_Resume();
  uVar1 = *puVar2;
  FUN_10a3e0a24(uVar1,puVar2[1]);
  FUN_10a3e0708(uVar1,puVar2[1]);
  return puVar2;
}



/* Entry: 10a3e0df8; end: 10a3e0e2f;  */

undefined8 * FUN_10a3e0df8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10a3e0a24(uVar1,param_1[1]);
  FUN_10a3e0708(uVar1,param_1[1]);
  return param_1;
}



/* Entry: 10a3e0e30; end: 10a3e0f8f;  */

void FUN_10a3e0e30(long param_1,undefined **param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  lVar10 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_70,param_3 + 1);
  ppuVar16 = param_2 + 4;
  param_2[3] = FUN_10a3faabc;
  (**(code **)*ppuVar16)(ppuVar16);
  *ppuVar16 = (undefined *)&PTR_DAT_110bd2b18;
  plVar7 = (long *)0x50;
  __Znwm();
  plVar7[1] = (long)param_2;
  *plVar7 = param_1;
  plVar7[2] = lVar10;
  (*(code *)apuStack_70[0][2])(plVar7 + 3,apuStack_70);
  param_2[5] = (undefined *)plVar7;
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  FUN_10a3e0708();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_1);
  func_0x000104bd46a0();
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  puVar18 = *(undefined8 **)(param_1 + 0x480);
  puVar17 = *(undefined8 **)(param_1 + 0x478);
  if ((long)puVar18 - (long)puVar17 == 0) {
    ppuVar8 = (undefined **)0x0;
    ppuVar16 = (undefined **)0x0;
    ppuVar3 = ppuVar8;
  }
  else {
    ppuVar8 = (undefined **)((long)puVar18 - (long)puVar17 >> 3);
    if ((ulong)ppuVar8 >> 0x3d != 0) {
      FUN_10a3efc24();
      goto LAB_10a3e13f0;
    }
    FUN_10a3efc38();
    ppuVar16 = ppuVar8 + (long)param_2;
    puVar17 = *(undefined8 **)(param_1 + 0x478);
    puVar18 = *(undefined8 **)(param_1 + 0x480);
    ppuVar3 = ppuVar8;
  }
  for (; puVar17 != puVar18; puVar17 = puVar17 + 1) {
    puVar21 = (undefined *)*puVar17;
    ppuVar9 = ppuVar8;
    ppuVar14 = ppuVar3;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x60) + 8) == '\x01')) {
      if (ppuVar3 < ppuVar16) {
        ppuVar14 = ppuVar3 + 1;
        *ppuVar3 = puVar21;
      }
      else {
        lVar10 = (long)ppuVar3 - (long)ppuVar8;
        uVar1 = (lVar10 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a3efc24();
          goto LAB_10a3e13f0;
        }
        uVar12 = (long)ppuVar16 - (long)ppuVar8 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuVar16 - (long)ppuVar8)) {
          uVar12 = 0x1fffffffffffffff;
        }
        FUN_10a3efc38();
        puVar2 = (undefined8 *)(uVar12 + lVar10);
        ppuVar16 = (undefined **)(uVar12 + (long)param_2 * 8);
        ppuVar9 = (undefined **)(puVar2 + -(lVar10 >> 3));
        ppuVar14 = (undefined **)(puVar2 + 1);
        *puVar2 = puVar21;
        param_2 = ppuVar8;
        _memcpy(ppuVar9,ppuVar8,lVar10);
        if (ppuVar8 != (undefined **)0x0) {
          __ZdlPv(ppuVar8);
        }
      }
    }
    ppuVar8 = ppuVar9;
    ppuVar3 = ppuVar14;
  }
  ppuStack_130 = (undefined **)0x0;
  ppuStack_128 = (undefined **)0x0;
  ppuStack_120 = (undefined **)0x0;
  plVar11 = *(long **)(param_1 + 0x498);
  plVar7 = *(long **)(param_1 + 0x490);
  if ((long)plVar11 - (long)plVar7 != 0) {
    ppuVar9 = (undefined **)((long)plVar11 - (long)plVar7 >> 3);
    if ((ulong)ppuVar9 >> 0x3d != 0) {
      func_0x00010a3efb8c();
LAB_10a3e13f0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e13f4);
      (*pcVar5)();
    }
    pppuStack_f8 = &ppuStack_130;
    FUN_10a3efba0();
    ppuVar14 = ppuVar9 + (long)param_2;
    ppuVar15 = (undefined **)((long)ppuVar9 - ((long)ppuStack_128 - (long)ppuStack_130));
    param_2 = ppuStack_130;
    _memcpy(ppuVar15);
    ppuStack_118 = ppuStack_130;
    ppuStack_108 = ppuStack_130;
    ppuStack_100 = ppuStack_120;
    ppuStack_110 = ppuStack_130;
    ppuStack_130 = ppuVar15;
    ppuStack_128 = ppuVar9;
    ppuStack_120 = ppuVar14;
    func_0x00010a3efbd4(&ppuStack_118);
    plVar7 = *(long **)(param_1 + 0x490);
    plVar11 = *(long **)(param_1 + 0x498);
  }
  if (plVar7 != plVar11) {
    do {
      lVar10 = *(long *)(*plVar7 + 0x138);
      lVar13 = *(long *)(*plVar7 + 0x140);
      if (lVar13 == lVar10) {
LAB_10a3e11b8:
        if (ppuStack_128 < ppuStack_120) {
          puVar21 = (undefined *)*plVar7;
          *plVar7 = 0;
          ppuVar14 = ppuStack_128 + 1;
          *ppuStack_128 = puVar21;
        }
        else {
          lVar10 = (long)ppuStack_128 - (long)ppuStack_130;
          uVar1 = (lVar10 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
            func_0x00010a3efb8c();
            goto LAB_10a3e13f0;
          }
          uVar12 = (long)ppuStack_120 - (long)ppuStack_130 >> 2;
          if (uVar12 <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_120 - (long)ppuStack_130)) {
            uVar12 = 0x1fffffffffffffff;
          }
          pppuStack_f8 = &ppuStack_130;
          FUN_10a3efba0();
          plVar11 = (long *)(uVar12 + lVar10);
          lVar10 = (long)param_2 * 8;
          lVar13 = *plVar7;
          *plVar7 = 0;
          ppuVar9 = (undefined **)((long)plVar11 - ((long)ppuStack_128 - (long)ppuStack_130));
          ppuVar14 = (undefined **)(plVar11 + 1);
          *plVar11 = lVar13;
          param_2 = ppuStack_130;
          _memcpy(ppuVar9);
          ppuStack_118 = ppuStack_130;
          ppuStack_108 = ppuStack_130;
          ppuStack_100 = ppuStack_120;
          ppuStack_110 = ppuStack_130;
          ppuStack_130 = ppuVar9;
          ppuStack_128 = ppuVar14;
          ppuStack_120 = (undefined **)(uVar12 + lVar10);
          func_0x00010a3efbd4(&ppuStack_118);
        }
        plVar11 = *(long **)(param_1 + 0x498);
        ppuStack_128 = ppuVar14;
        if (plVar11 == plVar7) goto LAB_10a3e13f0;
        plVar20 = plVar7;
        plVar4 = plVar7 + 1;
        if (plVar7 + 1 != plVar11) {
          do {
            plVar20 = plVar4;
            param_2 = (undefined **)*plVar20;
            *plVar20 = 0;
            FUN_10a3efb64(plVar20 + -1);
            plVar4 = plVar20 + 1;
          } while (plVar20 + 1 != plVar11);
          plVar11 = *(long **)(param_1 + 0x498);
        }
        while (plVar11 != plVar20) {
          plVar11 = plVar11 + -1;
          param_2 = (undefined **)0x0;
          FUN_10a3efb64(plVar11);
        }
        *(long **)(param_1 + 0x498) = plVar20;
      }
      else {
        do {
          if ((*(long *)(lVar10 + 8) != 0) && (*(long *)(*(long *)(lVar10 + 8) + 8) != -1)) {
            iVar6 = (int)*(undefined8 *)(lVar10 + 0x18);
            param_2 = &PTR_DAT_110bcfb40;
            FUN_10a042ab0();
            if (iVar6 != 0) {
              puVar18 = *(undefined8 **)(lVar10 + 0x20);
              puVar17 = puVar18;
              (**(code **)*puVar18)();
              if (((int)puVar17 != 2) &&
                 ((**(code **)*puVar18)(), lVar19 = lVar10, (int)puVar18 != 0)) break;
            }
          }
          lVar10 = lVar10 + 0x28;
          lVar19 = lVar13;
        } while (lVar10 != lVar13);
        if (lVar19 == lVar13) goto LAB_10a3e11b8;
        plVar7 = plVar7 + 1;
        plVar20 = *(long **)(param_1 + 0x498);
      }
    } while (plVar7 != plVar20);
  }
  ppuVar14 = ppuStack_128;
  ppuVar9 = ppuStack_130;
  ppuStack_160 = ppuStack_130;
  ppuStack_150 = ppuStack_120;
  ppuStack_158 = ppuStack_128;
  ppuStack_128 = (undefined **)0x0;
  ppuStack_120 = (undefined **)0x0;
  ppuStack_130 = (undefined **)0x0;
  ppuStack_148 = ppuVar8;
  ppuStack_140 = ppuVar3;
  ppuStack_138 = ppuVar16;
  func_0x00010a3ec7ec(&ppuStack_130);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  for (ppuVar16 = ppuVar8; ppuVar16 != ppuVar3; ppuVar16 = ppuVar16 + 1) {
    puVar21 = *ppuVar16;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x60) + 8) == '\x01')) {
      (**(code **)(puVar21 + 0x58))();
    }
  }
  for (; ppuVar9 != ppuVar14; ppuVar9 = ppuVar9 + 1) {
    puVar21 = *ppuVar9;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x20) + 8) == '\x01')) {
      (**(code **)(puVar21 + 0x18))();
      puVar17 = (undefined8 *)(*ppuVar9 + 0x20);
      *(undefined **)(*ppuVar9 + 0x18) = &UNK_1053a6a3c;
      (**(code **)*puVar17)(puVar17);
      *puVar17 = &PTR_DAT_110ae9180;
    }
  }
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_140 = ppuVar8;
    __ZdlPv(ppuVar8);
  }
  func_0x00010a3ec7ec(&ppuStack_160);
  return;
}



/* Entry: 10a3e0f90; end: 10a3e144f;  */

void FUN_10a3e0f90(long param_1,undefined **param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x310);
  puVar18 = *(undefined8 **)(param_1 + 0x480);
  puVar16 = *(undefined8 **)(param_1 + 0x478);
  if ((long)puVar18 - (long)puVar16 == 0) {
    ppuVar7 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
    ppuVar3 = ppuVar7;
  }
  else {
    ppuVar7 = (undefined **)((long)puVar18 - (long)puVar16 >> 3);
    if ((ulong)ppuVar7 >> 0x3d != 0) {
      FUN_10a3efc24();
      goto LAB_10a3e13f0;
    }
    FUN_10a3efc38();
    ppuVar15 = ppuVar7 + (long)param_2;
    puVar16 = *(undefined8 **)(param_1 + 0x478);
    puVar18 = *(undefined8 **)(param_1 + 0x480);
    ppuVar3 = ppuVar7;
  }
  for (; puVar16 != puVar18; puVar16 = puVar16 + 1) {
    puVar21 = (undefined *)*puVar16;
    ppuVar8 = ppuVar7;
    ppuVar12 = ppuVar3;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x60) + 8) == '\x01')) {
      if (ppuVar3 < ppuVar15) {
        ppuVar12 = ppuVar3 + 1;
        *ppuVar3 = puVar21;
      }
      else {
        lVar14 = (long)ppuVar3 - (long)ppuVar7;
        uVar1 = (lVar14 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a3efc24();
          goto LAB_10a3e13f0;
        }
        uVar10 = (long)ppuVar15 - (long)ppuVar7 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuVar15 - (long)ppuVar7)) {
          uVar10 = 0x1fffffffffffffff;
        }
        FUN_10a3efc38();
        puVar2 = (undefined8 *)(uVar10 + lVar14);
        ppuVar15 = (undefined **)(uVar10 + (long)param_2 * 8);
        ppuVar8 = (undefined **)(puVar2 + -(lVar14 >> 3));
        ppuVar12 = (undefined **)(puVar2 + 1);
        *puVar2 = puVar21;
        param_2 = ppuVar7;
        _memcpy(ppuVar8,ppuVar7,lVar14);
        if (ppuVar7 != (undefined **)0x0) {
          __ZdlPv(ppuVar7);
        }
      }
    }
    ppuVar7 = ppuVar8;
    ppuVar3 = ppuVar12;
  }
  ppuStack_a0 = (undefined **)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_90 = (undefined **)0x0;
  plVar9 = *(long **)(param_1 + 0x498);
  plVar17 = *(long **)(param_1 + 0x490);
  if ((long)plVar9 - (long)plVar17 != 0) {
    ppuVar8 = (undefined **)((long)plVar9 - (long)plVar17 >> 3);
    if ((ulong)ppuVar8 >> 0x3d != 0) {
      func_0x00010a3efb8c();
LAB_10a3e13f0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e13f4);
      (*pcVar5)();
    }
    pppuStack_68 = &ppuStack_a0;
    FUN_10a3efba0();
    ppuVar12 = ppuVar8 + (long)param_2;
    ppuVar13 = (undefined **)((long)ppuVar8 - ((long)ppuStack_98 - (long)ppuStack_a0));
    param_2 = ppuStack_a0;
    _memcpy(ppuVar13);
    ppuStack_88 = ppuStack_a0;
    ppuStack_78 = ppuStack_a0;
    ppuStack_70 = ppuStack_90;
    ppuStack_80 = ppuStack_a0;
    ppuStack_a0 = ppuVar13;
    ppuStack_98 = ppuVar8;
    ppuStack_90 = ppuVar12;
    func_0x00010a3efbd4(&ppuStack_88);
    plVar17 = *(long **)(param_1 + 0x490);
    plVar9 = *(long **)(param_1 + 0x498);
  }
  if (plVar17 != plVar9) {
    do {
      lVar14 = *(long *)(*plVar17 + 0x138);
      lVar11 = *(long *)(*plVar17 + 0x140);
      if (lVar11 == lVar14) {
LAB_10a3e11b8:
        if (ppuStack_98 < ppuStack_90) {
          puVar21 = (undefined *)*plVar17;
          *plVar17 = 0;
          ppuVar12 = ppuStack_98 + 1;
          *ppuStack_98 = puVar21;
        }
        else {
          lVar14 = (long)ppuStack_98 - (long)ppuStack_a0;
          uVar1 = (lVar14 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
            func_0x00010a3efb8c();
            goto LAB_10a3e13f0;
          }
          uVar10 = (long)ppuStack_90 - (long)ppuStack_a0 >> 2;
          if (uVar10 <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_90 - (long)ppuStack_a0)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_68 = &ppuStack_a0;
          FUN_10a3efba0();
          plVar9 = (long *)(uVar10 + lVar14);
          lVar14 = (long)param_2 * 8;
          lVar11 = *plVar17;
          *plVar17 = 0;
          ppuVar8 = (undefined **)((long)plVar9 - ((long)ppuStack_98 - (long)ppuStack_a0));
          ppuVar12 = (undefined **)(plVar9 + 1);
          *plVar9 = lVar11;
          param_2 = ppuStack_a0;
          _memcpy(ppuVar8);
          ppuStack_88 = ppuStack_a0;
          ppuStack_78 = ppuStack_a0;
          ppuStack_70 = ppuStack_90;
          ppuStack_80 = ppuStack_a0;
          ppuStack_a0 = ppuVar8;
          ppuStack_98 = ppuVar12;
          ppuStack_90 = (undefined **)(uVar10 + lVar14);
          func_0x00010a3efbd4(&ppuStack_88);
        }
        plVar9 = *(long **)(param_1 + 0x498);
        ppuStack_98 = ppuVar12;
        if (plVar9 == plVar17) goto LAB_10a3e13f0;
        plVar20 = plVar17;
        plVar4 = plVar17 + 1;
        if (plVar17 + 1 != plVar9) {
          do {
            plVar20 = plVar4;
            param_2 = (undefined **)*plVar20;
            *plVar20 = 0;
            FUN_10a3efb64(plVar20 + -1);
            plVar4 = plVar20 + 1;
          } while (plVar20 + 1 != plVar9);
          plVar9 = *(long **)(param_1 + 0x498);
        }
        while (plVar9 != plVar20) {
          plVar9 = plVar9 + -1;
          param_2 = (undefined **)0x0;
          FUN_10a3efb64(plVar9);
        }
        *(long **)(param_1 + 0x498) = plVar20;
      }
      else {
        do {
          if ((*(long *)(lVar14 + 8) != 0) && (*(long *)(*(long *)(lVar14 + 8) + 8) != -1)) {
            iVar6 = (int)*(undefined8 *)(lVar14 + 0x18);
            param_2 = &PTR_DAT_110bcfb40;
            FUN_10a042ab0();
            if (iVar6 != 0) {
              puVar18 = *(undefined8 **)(lVar14 + 0x20);
              puVar16 = puVar18;
              (**(code **)*puVar18)();
              if (((int)puVar16 != 2) &&
                 ((**(code **)*puVar18)(), lVar19 = lVar14, (int)puVar18 != 0)) break;
            }
          }
          lVar14 = lVar14 + 0x28;
          lVar19 = lVar11;
        } while (lVar14 != lVar11);
        if (lVar19 == lVar11) goto LAB_10a3e11b8;
        plVar17 = plVar17 + 1;
        plVar20 = *(long **)(param_1 + 0x498);
      }
    } while (plVar17 != plVar20);
  }
  ppuVar12 = ppuStack_98;
  ppuVar8 = ppuStack_a0;
  ppuStack_d0 = ppuStack_a0;
  ppuStack_c0 = ppuStack_90;
  ppuStack_c8 = ppuStack_98;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_90 = (undefined **)0x0;
  ppuStack_a0 = (undefined **)0x0;
  ppuStack_b8 = ppuVar7;
  ppuStack_b0 = ppuVar3;
  ppuStack_a8 = ppuVar15;
  func_0x00010a3ec7ec(&ppuStack_a0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x310);
  for (ppuVar15 = ppuVar7; ppuVar15 != ppuVar3; ppuVar15 = ppuVar15 + 1) {
    puVar21 = *ppuVar15;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x60) + 8) == '\x01')) {
      (**(code **)(puVar21 + 0x58))();
    }
  }
  for (; ppuVar8 != ppuVar12; ppuVar8 = ppuVar8 + 1) {
    puVar21 = *ppuVar8;
    if ((puVar21 != (undefined *)0x0) && (*(char *)(*(long *)(puVar21 + 0x20) + 8) == '\x01')) {
      (**(code **)(puVar21 + 0x18))();
      puVar16 = (undefined8 *)(*ppuVar8 + 0x20);
      *(undefined **)(*ppuVar8 + 0x18) = &UNK_1053a6a3c;
      (**(code **)*puVar16)(puVar16);
      *puVar16 = &PTR_DAT_110ae9180;
    }
  }
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_b0 = ppuVar7;
    __ZdlPv(ppuVar7);
  }
  func_0x00010a3ec7ec(&ppuStack_d0);
  return;
}



/* Entry: 10a3e1450; end: 10a3e1487;  */

long FUN_10a3e1450(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  func_0x00010a3ec7ec(param_1);
  return param_1;
}



/* Entry: 10a3e1488; end: 10a3e1567;  */

void FUN_10a3e1488(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x140);
  for (lVar2 = *(long *)(param_2 + 0x138); lVar2 != lVar7; lVar2 = lVar2 + 0x28) {
    plVar5 = *(long **)(lVar2 + 8);
    if ((plVar5 != (long *)0x0) && (plVar5[1] != -1)) {
      __ZNSt3__119__shared_weak_count4lockEv();
      FUN_10a5aea7c();
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
  }
  lVar2 = *(long *)(param_2 + 0x138);
  for (lVar7 = *(long *)(param_2 + 0x140); lVar7 != lVar2; lVar7 = lVar7 + -0x28) {
    if (*(long *)(lVar7 + -0x20) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *(long *)(param_2 + 0x140) = lVar2;
  return;
}



/* Entry: 10a3e1568; end: 10a3e16b3;  */

void FUN_10a3e1568(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  for (puVar4 = *(undefined8 **)(param_1 + 0x120); puVar4 != puVar2; puVar4 = puVar4 + 2) {
    FUN_10a3c762c(*puVar4);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  for (puVar4 = *(undefined8 **)(param_1 + 0x108); puVar4 != puVar2; puVar4 = puVar4 + 2) {
    FUN_10a3e00f4(*puVar4);
  }
  func_0x00010a3e15fc(param_1 + 0x138);
  lVar1 = *(long *)(param_1 + 0x120);
  lVar3 = *(long *)(param_1 + 0x128);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x10;
    FUN_10a0d4f28();
  }
  *(long *)(param_1 + 0x128) = lVar1;
  lVar1 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x10;
    func_0x00010a05253c();
  }
  *(long *)(param_1 + 0x110) = lVar1;
  return;
}



/* Entry: 10a3e16b4; end: 10a3e1723;  */

undefined1  [16] FUN_10a3e16b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f64c61b;
  return auVar1;
}



/* Entry: 10a3e1724; end: 10a3e1abf;  */

undefined8 * FUN_10a3e1724(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &PTR_DAT_110bd0848;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(ushort *)((long)param_1 + 0xb9) = *(ushort *)((long)param_1 + 0xb9) & 0xfc00 | 1;
  param_1[2] = &PTR_DAT_110bd07d0;
  param_1[0xf] = &UNK_10e52b660;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = &UNK_10e52b660;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_110bd0750;
  param_1[7] = &PTR_DAT_110bd0828;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 1;
  if ((bRam00000001137eb030 & 1) == 0) {
    bRam00000001137eb030 = 1;
  }
  plVar4 = (long *)0x158;
  __Znwm();
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar4[2] = 0;
  plVar5 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_110bd2b40;
  FUN_10a3e7f00(plVar5,param_1);
  param_1[0x28] = plVar5;
  param_1[0x29] = plVar4;
  lVar7 = plVar4[7];
  if (lVar7 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
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
    plVar4[6] = (long)plVar5;
    plVar4[7] = (long)plVar4;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a3e18c0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
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
    plVar4[6] = (long)plVar5;
    plVar4[7] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a3e18c0:
  param_1[0x2a] = param_1 + 0x2a;
  param_1[0x2b] = param_1 + 0x2a;
  param_1[0x2c] = 0;
  if ((bRam00000001137eb032 & 1) == 0) {
    bRam00000001137eb032 = 1;
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x28cd94bfde;
  param_1[0x31] = 0;
  param_1[0x32] = param_1 + 0x32;
  param_1[0x33] = param_1 + 0x32;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x35] = &UNK_1053a6a3c;
  param_1[0x36] = &PTR_DAT_110ae9180;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x3d] = &UNK_1053a6a3c;
  param_1[0x3e] = &PTR_DAT_110ae9180;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9a070;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x12] = 0;
  puVar6[3] = &PTR_FUN_110b9a0c0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a004c4c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  param_1[0x45] = puVar6 + 3;
  param_1[0x46] = puVar6;
  puVar6 = (undefined8 *)0x98;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9a070;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[3] = &PTR_FUN_110b9a0c0;
  puVar6[0x12] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 10) = 0x3f800000;
  puVar6[0xb] = FUN_10a004c4c;
  puVar6[0xc] = &PTR_DAT_110ae9180;
  param_1[0x47] = puVar6 + 3;
  param_1[0x48] = puVar6;
  param_1[0x49] = 0;
  return param_1;
}



/* Entry: 10a3e1ac0; end: 10a3e1ba7;  */

undefined8 * FUN_10a3e1ac0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bd0750;
  param_1[2] = &PTR_DAT_110bd07d0;
  param_1[7] = &PTR_DAT_110bd0828;
  param_1[0xc] = &PTR_DAT_110bd0848;
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a044790(param_1 + 0x3d);
  (**(code **)param_1[0x3e])(param_1 + 0x3e);
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  FUN_10a3eff64(param_1 + 0x32);
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    __ZdlPv(param_1[0x2d]);
  }
  func_0x00010a3effc0(param_1 + 0x2a);
  FUN_10a3fdb14(param_1 + 0x28);
  FUN_10a3f2154(param_1 + 0x25);
  param_1[0xc] = &PTR_FUN_110bd2b90;
  FUN_10a1c00f4(param_1 + 0xc);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xb];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a3e1ba8; end: 10a3e1bc3;  */

undefined8 * FUN_10a3e1ba8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bd0750;
  param_1[2] = &PTR_DAT_110bd07d0;
  param_1[7] = &PTR_DAT_110bd0828;
  param_1[0xc] = &PTR_DAT_110bd0848;
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a044790(param_1 + 0x3d);
  (**(code **)param_1[0x3e])(param_1 + 0x3e);
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  FUN_10a3eff64(param_1 + 0x32);
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    __ZdlPv(param_1[0x2d]);
  }
  func_0x00010a3effc0(param_1 + 0x2a);
  FUN_10a3fdb14(param_1 + 0x28);
  FUN_10a3f2154(param_1 + 0x25);
  param_1[0xc] = &PTR_FUN_110bd2b90;
  FUN_10a1c00f4(param_1 + 0xc);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xb];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a3e1bc4; end: 10a3e1c1f;  */

void FUN_10a3e1bc4(void)

{
  FUN_10a3e1ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3e1c20; end: 10a3e1d13;  */

void FUN_10a3e1c20(long param_1)

{
  long lVar1;
  
  *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) | 0x100;
  for (lVar1 = *(long *)(param_1 + 0x198); lVar1 != param_1 + 400; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_10a3e1c20(*(undefined8 *)(lVar1 + 0x10));
  }
  for (lVar1 = *(long *)(param_1 + 0x158); lVar1 != param_1 + 0x150; lVar1 = *(long *)(lVar1 + 8)) {
    *(ushort *)(*(long *)(lVar1 + 0x10) + 0x180) =
         *(ushort *)(*(long *)(lVar1 + 0x10) + 0x180) | 0x200;
  }
  return;
}



/* Entry: 10a3e1d14; end: 10a3e1eaf;  */

void FUN_10a3e1d14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((*(ushort *)(param_1 + 0x118) >> 3 & 1) == 0) {
    func_0x00010a0d77bc(auStack_30);
    while (*(long *)(param_1 + 0x1a0) != 0) {
      FUN_10a3e1d14(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x10));
    }
    while (*(long *)(param_1 + 0x160) != 0) {
      FUN_10a3c7420(*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10));
    }
    FUN_10a044790(param_1 + 0x1e8);
    FUN_10a044790(param_1 + 0x1a8);
    plVar4 = *(long **)(*(long *)(param_1 + 0x120) + 0xd20);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    }
    *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) | 8;
    *(undefined8 *)(param_1 + 0x120) = 0;
    plVar4 = *(long **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a3e1eb0; end: 10a3e20c7;  */

void FUN_10a3e1eb0(ulong *param_1,ulong **param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong **ppuVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong **ppuVar20;
  undefined8 *puVar21;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong auStack_b0 [4];
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_78;
  if (param_2[0x31] == (ulong *)0x0) {
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    lStack_80 = 4;
    uStack_88 = 0;
    ppuVar9 = param_2;
  }
  else {
    plVar5 = (long *)param_2[0x31][0x25];
    FUN_10a3bfba4();
    lStack_80 = 4;
    uStack_88 = 0;
    ppuVar9 = (ulong **)*plVar5;
    FUN_10a3f001c(&puStack_90,ppuVar9,ppuVar9 + plVar5[1]);
  }
  for (ppuVar20 = (ulong **)param_2[0x2b]; ppuVar20 != param_2 + 0x2a;
      ppuVar20 = (ulong **)ppuVar20[1]) {
    puVar6 = ppuVar20[2];
    if ((puVar6 != (ulong *)0x0) && ((puVar6[0x30] & 0x17) == 0)) {
      ppuVar9 = &puStack_90;
      (**(code **)(*puVar6 + 0xa8))();
    }
  }
  puVar6 = param_2[0x25];
  FUN_10a3bfba4();
  uVar14 = puVar6[1];
  if (uVar14 == uStack_88) {
    if (uVar14 != 0) {
      lVar15 = uVar14 << 3;
      puVar11 = (ulong *)*puVar6;
      puVar13 = puStack_90;
      do {
        if (*puVar11 != *puVar13) goto LAB_10a3e1fd4;
        lVar15 = lVar15 + -8;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar15 != 0);
    }
    puVar11 = param_2[0x25];
    *param_1 = (ulong)puVar11;
    param_1 = puVar6;
    if (puVar11 != (ulong *)0x0) {
      *(int *)puVar11 = (int)*puVar11 + 1;
    }
  }
  else {
LAB_10a3e1fd4:
    puVar6 = param_2[0x24];
    lStack_b8 = 4;
    uStack_c0 = 0;
    puStack_c8 = auStack_b0;
    FUN_10a3e98e4(&puStack_c8,&puStack_90);
    ppuVar9 = (ulong **)(puVar6 + 0xcc);
    FUN_10a3bfe68(param_1,ppuVar9,&puStack_c8);
    if ((lStack_b8 != 0) && (param_1 = puStack_c8, auStack_b0 != puStack_c8)) {
      __ZdlPv();
    }
  }
  if ((lStack_80 != 0) && (param_1 = puStack_90, &uStack_78 != puStack_90)) {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((lStack_80 != 0) && (&uStack_78 != puStack_90)) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar12 = (undefined8 *)param_1[1];
  puVar16 = (undefined8 *)param_1[2];
  puVar21 = (undefined8 *)((long)puVar16 - (long)puVar12);
  lVar15 = 0;
  if (puVar21 != (undefined8 *)0x0) {
    lVar15 = ((long)puVar16 - (long)puVar12) * 4 + -1;
  }
  uVar14 = param_1[4];
  if (lVar15 != param_1[5] + uVar14) goto LAB_10a3e230c;
  if (uVar14 < 0x20) {
    puVar19 = (undefined8 *)param_1[3];
    puVar18 = (undefined8 *)*param_1;
    if ((undefined8 *)((long)puVar19 - (long)puVar18) <= puVar21) {
      uVar14 = (long)puVar19 - (long)puVar18 >> 2;
      if (puVar19 == puVar18) {
        uVar14 = 1;
      }
      if (uVar14 >> 0x3d == 0) {
        puVar19 = (undefined8 *)(uVar14 * 8);
        __Znwm();
        uVar10 = 0x1000;
        __Znwm();
        puVar18 = puVar19 + uVar14;
        puVar7 = puVar19;
        puVar17 = (undefined8 *)((long)puVar19 + (long)puVar21);
        if (puVar21 == (undefined8 *)(uVar14 * 8)) {
          if ((long)puVar21 < 1) {
            uVar14 = (long)puVar21 >> 2;
            if (puVar16 == puVar12) {
              uVar14 = 1;
            }
            if (uVar14 >> 0x3d != 0) goto LAB_10a3e243c;
            puVar7 = (undefined8 *)(uVar14 << 3);
            __Znwm();
            puVar18 = puVar7 + uVar14;
            __ZdlPv(puVar19);
            puVar12 = (undefined8 *)param_1[1];
            puVar16 = (undefined8 *)param_1[2];
            puVar17 = puVar7;
          }
          else {
            puVar17 = (undefined8 *)
                      (((long)puVar19 + (long)puVar21) -
                      (((ulong)puVar21 >> 1) + 4 & 0xfffffffffffffff8));
          }
        }
        puVar21 = puVar17 + 1;
        *puVar17 = uVar10;
        if (puVar16 != puVar12) {
          do {
            puVar12 = puVar17;
            if (puVar17 == puVar7) {
              if (puVar21 < puVar18) {
                lVar15 = ((long)puVar18 - (long)puVar21 >> 3) + 1;
                lVar2 = (long)puVar21 - (long)puVar17;
                lVar3 = (long)puVar21 - (long)puVar17;
                puVar21 = puVar21 + ((ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1);
                puVar12 = (undefined8 *)((long)puVar21 - lVar2);
                if (lVar3 != 0) {
                  _memmove(puVar12,puVar17,lVar3);
                }
              }
              else {
                uVar14 = (long)puVar18 - (long)puVar17 >> 2;
                if ((long)puVar18 - (long)puVar17 == 0) {
                  uVar14 = 1;
                }
                if (uVar14 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a3e2440;
                }
                puVar19 = (undefined8 *)(uVar14 << 3);
                __Znwm();
                puVar12 = (undefined8 *)((long)puVar19 + (uVar14 * 2 + 6 & 0xfffffffffffffff8));
                lVar15 = (long)puVar21 - (long)puVar17;
                puVar21 = puVar12;
                if (lVar15 != 0) {
                  puVar21 = (undefined8 *)((long)puVar12 + lVar15);
                  puVar18 = puVar12;
                  do {
                    *puVar18 = *puVar17;
                    lVar15 = lVar15 + -8;
                    puVar18 = puVar18 + 1;
                    puVar17 = puVar17 + 1;
                  } while (lVar15 != 0);
                }
                puVar18 = puVar19 + uVar14;
                __ZdlPv(puVar7);
                puVar7 = puVar19;
              }
            }
            puVar16 = puVar16 + -1;
            puVar17 = puVar12 + -1;
            *puVar17 = *puVar16;
          } while (puVar16 != (undefined8 *)param_1[1]);
        }
        uVar14 = *param_1;
        *param_1 = (ulong)puVar7;
        param_1[1] = (ulong)puVar17;
        param_1[2] = (ulong)puVar21;
        param_1[3] = (ulong)puVar18;
        if (uVar14 != 0) {
          __ZdlPv();
        }
        goto LAB_10a3e230c;
      }
LAB_10a3e2438:
      func_0x000109ffded8();
LAB_10a3e243c:
      func_0x000109ffded8();
LAB_10a3e2440:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3e2444);
      (*pcVar4)();
    }
    uVar10 = 0x1000;
    __Znwm();
    if (puVar19 != puVar16) {
      *puVar16 = uVar10;
      param_1[2] = param_1[2] + 8;
      goto LAB_10a3e230c;
    }
    if (puVar12 == puVar18) {
      uVar14 = (long)puVar19 - (long)puVar12 >> 2;
      if (puVar16 == puVar12) {
        uVar14 = 1;
      }
      if (uVar14 >> 0x3d != 0) goto LAB_10a3e2438;
      uVar8 = uVar14 << 3;
      __Znwm();
      puVar19 = (undefined8 *)(uVar8 + (uVar14 * 2 + 6 & 0xfffffffffffffff8));
      puVar7 = puVar19;
      if (puVar16 != puVar12) {
        puVar7 = (undefined8 *)((long)puVar19 + (long)puVar21);
        puVar16 = puVar19;
        puVar17 = puVar12;
        do {
          *puVar16 = *puVar17;
          puVar21 = puVar21 + -1;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        } while (puVar21 != (undefined8 *)0x0);
      }
      *param_1 = uVar8;
      param_1[1] = (ulong)puVar19;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar8 + uVar14 * 8;
      bVar1 = puVar12 != (undefined8 *)0x0;
      puVar12 = puVar19;
      if (bVar1) {
        __ZdlPv(puVar18);
        puVar12 = (undefined8 *)param_1[1];
      }
    }
    puVar12[-1] = uVar10;
    uVar14 = param_1[1];
    param_1[1] = uVar14 - 8;
    uVar10 = *(undefined8 *)(uVar14 - 8);
    param_1[1] = uVar14;
  }
  else {
    param_1[4] = uVar14 - 0x20;
    uVar10 = *puVar12;
    param_1[1] = (ulong)(puVar12 + 1);
  }
  FUN_10a3fdbf4(param_1,uVar10);
LAB_10a3e230c:
  puVar12 = (undefined8 *)
            (*(long *)(param_1[1] + (param_1[5] + param_1[4] >> 5) * 8) +
            (param_1[5] + param_1[4] & 0x1f) * 0x80);
  puVar6 = *ppuVar9;
  puVar12[1] = ppuVar9[1];
  *puVar12 = puVar6;
  ppuVar9[1] = (ulong *)0x0;
  puVar12[2] = puVar12 + 5;
  puVar12[4] = 4;
  puVar12[3] = 0;
  FUN_10a3e98e4(puVar12 + 2,ppuVar9 + 2);
  puVar12[9] = puVar12 + 0xc;
  puVar12[0xb] = 4;
  puVar12[10] = 0;
  FUN_10a3e98e4(puVar12 + 9,ppuVar9 + 9);
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10a3e20c8; end: 10a3e2477;  */

void FUN_10a3e20c8(ulong *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)param_1[2];
  puVar15 = (undefined8 *)((long)puVar11 - (long)puVar9);
  lVar8 = 0;
  if (puVar15 != (undefined8 *)0x0) {
    lVar8 = ((long)puVar11 - (long)puVar9) * 4 + -1;
  }
  uVar10 = param_1[4];
  if (lVar8 != param_1[5] + uVar10) goto LAB_10a3e230c;
  if (uVar10 < 0x20) {
    puVar14 = (undefined8 *)param_1[3];
    puVar13 = (undefined8 *)*param_1;
    if ((undefined8 *)((long)puVar14 - (long)puVar13) <= puVar15) {
      uVar10 = (long)puVar14 - (long)puVar13 >> 2;
      if (puVar14 == puVar13) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d == 0) {
        puVar14 = (undefined8 *)(uVar10 * 8);
        __Znwm();
        uVar7 = 0x1000;
        __Znwm();
        puVar13 = puVar14 + uVar10;
        puVar5 = puVar14;
        puVar12 = (undefined8 *)((long)puVar14 + (long)puVar15);
        if (puVar15 == (undefined8 *)(uVar10 * 8)) {
          if ((long)puVar15 < 1) {
            uVar10 = (long)puVar15 >> 2;
            if (puVar11 == puVar9) {
              uVar10 = 1;
            }
            if (uVar10 >> 0x3d != 0) goto LAB_10a3e243c;
            puVar5 = (undefined8 *)(uVar10 << 3);
            __Znwm();
            puVar13 = puVar5 + uVar10;
            __ZdlPv(puVar14);
            puVar9 = (undefined8 *)param_1[1];
            puVar11 = (undefined8 *)param_1[2];
            puVar12 = puVar5;
          }
          else {
            puVar12 = (undefined8 *)
                      (((long)puVar14 + (long)puVar15) -
                      (((ulong)puVar15 >> 1) + 4 & 0xfffffffffffffff8));
          }
        }
        puVar15 = puVar12 + 1;
        *puVar12 = uVar7;
        if (puVar11 != puVar9) {
          do {
            puVar9 = puVar12;
            if (puVar12 == puVar5) {
              if (puVar15 < puVar13) {
                lVar8 = ((long)puVar13 - (long)puVar15 >> 3) + 1;
                lVar2 = (long)puVar15 - (long)puVar12;
                lVar3 = (long)puVar15 - (long)puVar12;
                puVar15 = puVar15 + ((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
                puVar9 = (undefined8 *)((long)puVar15 - lVar2);
                if (lVar3 != 0) {
                  _memmove(puVar9,puVar12,lVar3);
                }
              }
              else {
                uVar10 = (long)puVar13 - (long)puVar12 >> 2;
                if ((long)puVar13 - (long)puVar12 == 0) {
                  uVar10 = 1;
                }
                if (uVar10 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a3e2440;
                }
                puVar14 = (undefined8 *)(uVar10 << 3);
                __Znwm();
                puVar9 = (undefined8 *)((long)puVar14 + (uVar10 * 2 + 6 & 0xfffffffffffffff8));
                lVar8 = (long)puVar15 - (long)puVar12;
                puVar15 = puVar9;
                if (lVar8 != 0) {
                  puVar15 = (undefined8 *)((long)puVar9 + lVar8);
                  puVar13 = puVar9;
                  do {
                    *puVar13 = *puVar12;
                    lVar8 = lVar8 + -8;
                    puVar13 = puVar13 + 1;
                    puVar12 = puVar12 + 1;
                  } while (lVar8 != 0);
                }
                puVar13 = puVar14 + uVar10;
                __ZdlPv(puVar5);
                puVar5 = puVar14;
              }
            }
            puVar11 = puVar11 + -1;
            puVar12 = puVar9 + -1;
            *puVar12 = *puVar11;
          } while (puVar11 != (undefined8 *)param_1[1]);
        }
        uVar10 = *param_1;
        *param_1 = (ulong)puVar5;
        param_1[1] = (ulong)puVar12;
        param_1[2] = (ulong)puVar15;
        param_1[3] = (ulong)puVar13;
        if (uVar10 != 0) {
          __ZdlPv();
        }
        goto LAB_10a3e230c;
      }
LAB_10a3e2438:
      func_0x000109ffded8();
LAB_10a3e243c:
      func_0x000109ffded8();
LAB_10a3e2440:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3e2444);
      (*pcVar4)();
    }
    uVar7 = 0x1000;
    __Znwm();
    if (puVar14 != puVar11) {
      *puVar11 = uVar7;
      param_1[2] = param_1[2] + 8;
      goto LAB_10a3e230c;
    }
    if (puVar9 == puVar13) {
      uVar10 = (long)puVar14 - (long)puVar9 >> 2;
      if (puVar11 == puVar9) {
        uVar10 = 1;
      }
      if (uVar10 >> 0x3d != 0) goto LAB_10a3e2438;
      uVar6 = uVar10 << 3;
      __Znwm();
      puVar14 = (undefined8 *)(uVar6 + (uVar10 * 2 + 6 & 0xfffffffffffffff8));
      puVar5 = puVar14;
      if (puVar11 != puVar9) {
        puVar5 = (undefined8 *)((long)puVar14 + (long)puVar15);
        puVar11 = puVar14;
        puVar12 = puVar9;
        do {
          *puVar11 = *puVar12;
          puVar15 = puVar15 + -1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar15 != (undefined8 *)0x0);
      }
      *param_1 = uVar6;
      param_1[1] = (ulong)puVar14;
      param_1[2] = (ulong)puVar5;
      param_1[3] = uVar6 + uVar10 * 8;
      bVar1 = puVar9 != (undefined8 *)0x0;
      puVar9 = puVar14;
      if (bVar1) {
        __ZdlPv(puVar13);
        puVar9 = (undefined8 *)param_1[1];
      }
    }
    puVar9[-1] = uVar7;
    uVar10 = param_1[1];
    param_1[1] = uVar10 - 8;
    uVar7 = *(undefined8 *)(uVar10 - 8);
    param_1[1] = uVar10;
  }
  else {
    param_1[4] = uVar10 - 0x20;
    uVar7 = *puVar9;
    param_1[1] = (ulong)(puVar9 + 1);
  }
  FUN_10a3fdbf4(param_1,uVar7);
LAB_10a3e230c:
  puVar9 = (undefined8 *)
           (*(long *)(param_1[1] + (param_1[5] + param_1[4] >> 5) * 8) +
           (param_1[5] + param_1[4] & 0x1f) * 0x80);
  uVar7 = *param_2;
  puVar9[1] = param_2[1];
  *puVar9 = uVar7;
  param_2[1] = 0;
  puVar9[2] = puVar9 + 5;
  puVar9[4] = 4;
  puVar9[3] = 0;
  FUN_10a3e98e4(puVar9 + 2,param_2 + 2);
  puVar9[9] = puVar9 + 0xc;
  puVar9[0xb] = 4;
  puVar9[10] = 0;
  FUN_10a3e98e4(puVar9 + 9,param_2 + 9);
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10a3e2478; end: 10a3e24d7;  */

long FUN_10a3e2478(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    if (param_1 + 0x60 != *(long *)(param_1 + 0x48)) {
      __ZdlPv();
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (param_1 + 0x28 != *(long *)(param_1 + 0x10)) {
      __ZdlPv();
    }
  }
  FUN_10a3f2154(param_1 + 8);
  return param_1;
}



/* Entry: 10a3e24d8; end: 10a3e262b;  */

long * FUN_10a3e24d8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar6 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar2 = param_1[4];
    plVar7 = puVar4 + (uVar2 >> 5);
    lVar3 = *plVar7 + (uVar2 & 0x1f) * 0x80;
    lVar1 = puVar4[param_1[5] + uVar2 >> 5] + (param_1[5] + uVar2 & 0x1f) * 0x80;
    puVar6 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        FUN_10a3fdb9c(lVar3);
        lVar3 = lVar3 + 0x80;
        if (lVar3 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar3 = *plVar7;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar6 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar6 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar6 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x10;
  }
  else {
    if (uVar2 != 2) goto LAB_10a3e25cc;
    lVar3 = 0x20;
  }
  param_1[4] = lVar3;
LAB_10a3e25cc:
  if (puVar4 != puVar6) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3e262c; end: 10a3e28b7;  */

void FUN_10a3e262c(long param_1,long param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  ushort uVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ushort *)(param_1 + 0x118);
  if ((uVar5 >> 8 & 1) == 0) {
    if ((param_2 != 0) && ((*(ushort *)(param_2 + 0x118) >> 8 & 1) != 0)) {
      FUN_10a00946c(&UNK_10f6545cb);
LAB_10a3e2890:
      puVar4 = &UNK_10f6545ff;
      goto LAB_10a3e2898;
    }
    if (*(long *)(param_1 + 0x188) == param_2) {
LAB_10a3e283c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a3e2874;
    }
    uStack_b8 = 0;
    uStack_c0 = 0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    uStack_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    if (param_3 != 0) {
      lVar6 = *(long *)(param_1 + 0x140);
      if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar6);
        uVar5 = *(ushort *)(param_1 + 0x118);
      }
      uStack_b8 = *(undefined8 *)(lVar6 + 200);
      uStack_c0 = *(undefined8 *)(lVar6 + 0xc0);
      uStack_a8 = *(undefined8 *)(lVar6 + 0xd8);
      uStack_b0 = *(undefined8 *)(lVar6 + 0xd0);
      uStack_98 = *(undefined8 *)(lVar6 + 0xe8);
      uStack_a0 = *(undefined8 *)(lVar6 + 0xe0);
      uStack_88 = *(undefined8 *)(lVar6 + 0xf8);
      uStack_90 = *(undefined8 *)(lVar6 + 0xf0);
    }
    *(ushort *)(param_1 + 0x118) = uVar5 | 0x80;
    if (param_2 == 0) {
      FUN_10a044790(param_1 + 0x1e8);
LAB_10a3e2778:
      *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) & 0xff7f;
      *(long *)(param_1 + 0x188) = param_2;
      FUN_10a2e1c34(param_1,3);
      if ((*(ushort *)(param_1 + 0x118) >> 7 & 1) == 0) {
        FUN_10a2e1c34(param_1,3);
        FUN_10a2e1c34(param_1,4);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x2a);
        if (((bVar1 ^ 0xff) & 0x7c) != 0) {
          *(byte *)(*(long *)(param_1 + 0x140) + 0x2a) = bVar1 | 0x7c;
          FUN_10a3e8248();
        }
        if (*(long *)(param_1 + 0x188) == 0) {
          uVar5 = *(ushort *)(param_1 + 0x118);
          *(ushort *)(param_1 + 0x118) = uVar5 & 0xfffd;
          if (((uVar5 & 0x13) == 0) != ((uVar5 & 0x11) == 0)) {
            FUN_10a3e4250(param_1);
          }
        }
        else {
          FUN_10a3e2a80(param_1,(*(ushort *)(*(long *)(param_1 + 0x188) + 0x118) & 0x13) == 0);
        }
      }
      if (param_3 != 0) {
        FUN_10a3e28b8(*(undefined8 *)(param_1 + 0x140),&uStack_c0);
      }
      goto LAB_10a3e283c;
    }
    if ((*(ushort *)(param_2 + 0x118) & 0xc) != 0) goto LAB_10a3e2890;
    lVar6 = param_2;
    if (param_2 != param_1) {
      do {
        lVar6 = *(long *)(lVar6 + 0x188);
      } while (lVar6 != param_1 && lVar6 != 0);
      if (lVar6 == 0) {
        plVar3 = (long *)0x18;
        __Znwm();
        plVar3[1] = param_2 + 400;
        plVar3[2] = param_1;
        lVar6 = *(long *)(param_2 + 400);
        *plVar3 = lVar6;
        *(long **)(lVar6 + 8) = plVar3;
        *(long **)(param_2 + 400) = plVar3;
        *(long *)(param_2 + 0x1a0) = *(long *)(param_2 + 0x1a0) + 1;
        uStack_78 = 0x10a3fde24;
        ppuStack_70 = &PTR_DAT_110bd2c30;
        lStack_68 = param_1;
        plStack_60 = plVar3;
        func_0x00010a108320(param_1 + 0x1e8,&uStack_78);
        FUN_10a044790(&uStack_78);
        (*(code *)*ppuStack_70)(&ppuStack_70);
        goto LAB_10a3e2778;
      }
    }
  }
  else {
    FUN_10a00946c(&UNK_10f65459d);
LAB_10a3e2874:
    ___stack_chk_fail();
  }
  puVar4 = &UNK_10f654636;
LAB_10a3e2898:
  FUN_10a00946c(puVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3e28a0);
  (*pcVar2)();
}



/* Entry: 10a3e28b8; end: 10a3e2a7f;  */

void FUN_10a3e28b8(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((((((((*(byte *)(param_1 + 0x2a) & 0x24) != 0) || (*(float *)(param_1 + 0xc0) != *param_2)) ||
         (*(float *)(param_1 + 0xc4) != param_2[1])) ||
        ((*(float *)(param_1 + 200) != param_2[2] || (*(float *)(param_1 + 0xcc) != param_2[3]))))
       || ((*(float *)(param_1 + 0xd0) != param_2[4] ||
           ((*(float *)(param_1 + 0xd4) != param_2[5] || (*(float *)(param_1 + 0xd8) != param_2[6]))
           )))) || (*(float *)(param_1 + 0xdc) != param_2[7])) ||
     ((((*(float *)(param_1 + 0xe0) != param_2[8] || (*(float *)(param_1 + 0xe4) != param_2[9])) ||
       (*(float *)(param_1 + 0xe8) != param_2[10])) ||
      (((*(float *)(param_1 + 0xec) != param_2[0xb] || (*(float *)(param_1 + 0xf0) != param_2[0xc]))
       || ((*(float *)(param_1 + 0xf4) != param_2[0xd] ||
           ((*(float *)(param_1 + 0xf8) != param_2[0xe] ||
            (*(float *)(param_1 + 0xfc) != param_2[0xf])))))))))) {
    uStack_68 = *(undefined8 *)(param_2 + 2);
    uStack_70 = *(undefined8 *)param_2;
    uStack_58 = *(undefined8 *)(param_2 + 6);
    uStack_60 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 10);
    uStack_50 = *(undefined8 *)(param_2 + 8);
    uStack_38 = *(undefined8 *)(param_2 + 0xe);
    uStack_40 = *(undefined8 *)(param_2 + 0xc);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x188), lVar1 != 0)) {
      lVar1 = *(long *)(lVar1 + 0x140);
      if ((*(byte *)(lVar1 + 0x2a) >> 6 & 1) != 0) {
        func_0x00010a3e933c(lVar1);
      }
      func_0x000109519fd0(&uStack_b0,lVar1 + 0x100,&uStack_70);
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_48 = uStack_88;
      uStack_50 = uStack_90;
      uStack_38 = uStack_78;
      uStack_40 = uStack_80;
    }
    func_0x00010a3e8440(param_1,&uStack_70);
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0x9b | 0x40;
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
    *(undefined8 *)(param_1 + 0xf0) = uVar7;
    *(undefined8 *)(param_1 + 200) = uVar3;
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
  }
  return;
}



/* Entry: 10a3e2a80; end: 10a3e2abf;  */

void FUN_10a3e2a80(long param_1,int param_2)

{
  long *plVar1;
  long **pplVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ushort uVar8;
  long lVar9;
  ushort uVar10;
  long lVar11;
  long *plVar12;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  uVar8 = *(ushort *)(param_1 + 0x118);
  uVar10 = 0;
  if (param_2 == 0) {
    uVar10 = 2;
  }
  *(ushort *)(param_1 + 0x118) = uVar8 & 0xfffd | uVar10;
  if (((uVar8 & 0x13) == 0) == ((uVar8 & 0x11) == 0 && uVar10 == 0)) {
    return;
  }
  uVar10 = *(ushort *)(param_1 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18)) {
    bVar5 = (uVar10 & 0x13) == 0;
    lVar11 = 0x228;
    if (!bVar5) {
      lVar11 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar11));
    if (bVar5 != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_10a3faba8(param_1,&plStack_80);
  plVar7 = plStack_78;
  if (plStack_80 != plStack_78) {
    uVar8 = 0;
    plVar12 = plStack_80;
    if ((uVar10 & 0x13) != 0) {
      uVar8 = 4;
    }
    do {
      plVar6 = (long *)plVar12[1];
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar11 = *plVar12;
        plVar1 = plVar6 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
        if ((lVar11 != 0) && (uVar3 = *(ushort *)(lVar11 + 0x180), (uVar3 >> 4 & 1) == 0)) {
          if ((((uVar10 & 0x13) == 0) != ((uVar3 & 4) == 0)) &&
             (*(ushort *)(lVar11 + 0x180) = uVar3 & 0xffeb | uVar8,
             ((uVar3 & 7) == 0) != ((uVar3 & 3) == 0 && uVar8 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar11 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar11);
            }
            else {
              FUN_10a3c7718(lVar11);
            }
          }
          if (((uVar10 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar7);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar11 = 0x228;
    if ((uVar10 & 0x13) != 0) {
      lVar11 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar11));
  }
  FUN_10a3e45e0(&pplStack_98,param_1);
  for (pplVar2 = pplStack_98; pplVar2 != pplStack_90; pplVar2 = pplVar2 + 2) {
    plVar7 = pplVar2[1];
    if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)
       ) {
      plVar6 = *pplVar2;
      plVar12 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      if (((plVar6 != (long *)0x0) && ((*(ushort *)(plVar6 + 0x23) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(plVar6,(uVar10 & 0x13) == 0),
         ((uVar10 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))) break;
    }
  }
  ppplStack_68 = &pplStack_98;
  func_0x00010a2e3118(&ppplStack_68);
LAB_10a3e44d0:
  pplStack_98 = &plStack_80;
  FUN_10a0d80a4(&pplStack_98);
  return;
}



/* Entry: 10a3e2ac0; end: 10a3e2ea7;  */

void FUN_10a3e2ac0(long param_1,long ****param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined **ppuVar10;
  long ***ppplVar11;
  undefined *puVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  long ***ppplStack_c0;
  long **pplStack_b8;
  long ***ppplStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_69;
  undefined1 *puStack_68;
  
  pppplVar6 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110bd1720);
  if ((int)pppplVar6 == 0) {
    pppplVar6 = param_2;
    (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110bd0858);
    if ((int)pppplVar6 != 0) {
      (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110bd0858);
      pppplVar6 = param_2;
      (*(code *)(*param_2)[0x41])();
      if ((int)pppplVar6 != 0) {
        iVar14 = 0;
        do {
          (*(code *)(*param_2)[0x43])(param_2,iVar14);
          FUN_10a34ada8(&uStack_a0,param_2,0);
          (*(code *)(*param_2)[0x44])(param_2);
          FUN_10a0c3500(uStack_a0,*(undefined8 *)(param_1 + 0x10));
          plVar5 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar2 = plStack_98 + 1;
            do {
              lVar13 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)pppplVar6);
      }
      (*(code *)(*param_2)[0x44])(param_2);
    }
  }
  else {
    plStack_98 = (long *)0x0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    lVar13 = *(long *)(param_1 + 0x10);
    ppuStack_a8 = *(undefined ***)(lVar13 + 0x48);
    ppplStack_b0 = *(long ****)(lVar13 + 0x40);
    ppplStack_c0 = (long ***)&ppplStack_b0;
    puVar7 = &uStack_a0;
    FUN_10a3f9630(puVar7,&ppplStack_b0,&UNK_10dd5b8f9,&ppplStack_c0,&puStack_68);
    puVar7[4] = lVar13;
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110bd0858);
    pppplVar6 = param_2;
    (*(code *)(*param_2)[0x41])();
    if ((int)pppplVar6 != 0) {
      iVar14 = 0;
      do {
        (*(code *)(*param_2)[0x43])(param_2,iVar14);
        FUN_10a34ada8(&ppplStack_b0,param_2,0);
        ppplVar11 = ppplStack_b0;
        pplStack_b8 = ppplStack_b0[9];
        ppplStack_c0 = (long ***)ppplStack_b0[8];
        puVar7 = &uStack_a0;
        puStack_68 = (undefined1 *)&ppplStack_c0;
        FUN_10a3f9630(puVar7,&ppplStack_c0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
        puVar7[4] = ppplVar11;
        (*(code *)(*param_2)[0x44])(param_2);
        ppuVar10 = ppuStack_a8;
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar1 = ppuStack_a8 + 1;
          do {
            puVar12 = *ppuVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = puVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar12 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != (int)pppplVar6);
    }
    (*(code *)(*param_2)[0x44])(param_2);
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110bd1720);
    pppplVar6 = param_2;
    (*(code *)(*param_2)[0x41])();
    if ((int)pppplVar6 != 0) {
      iVar14 = 0;
      do {
        (*(code *)(*param_2)[0x43])(param_2,iVar14);
        pppplVar8 = param_2;
        ppuVar10 = &PTR_DAT_110bd1740;
        (*(code *)(*param_2)[2])();
        pppplVar9 = param_2;
        ppplVar11 = (long ***)&PTR_DAT_110bd1760;
        ppplStack_b0 = (long ***)pppplVar8;
        ppuStack_a8 = ppuVar10;
        (*(code *)(*param_2)[2])();
        ppplStack_c0 = (long ***)pppplVar9;
        pplStack_b8 = (long **)ppplVar11;
        (*(code *)(*param_2)[0x44])(param_2);
        puVar7 = &uStack_a0;
        FUN_10a3f9844(puVar7,pppplVar8,ppuVar10,&ppplStack_b0);
        uVar15 = puVar7[4];
        puVar7 = &uStack_a0;
        FUN_10a3f9844(puVar7,pppplVar9,ppplVar11,&ppplStack_c0);
        FUN_10a0c3500(uVar15,puVar7[4]);
        iVar14 = iVar14 + 1;
      } while ((int)pppplVar6 != iVar14);
    }
    (*(code *)(*param_2)[0x44])(param_2);
    FUN_10a3f2240(&uStack_a0);
  }
  return;
}



/* Entry: 10a3e2ea8; end: 10a3e3893;  */

void FUN_10a3e2ea8(undefined8 param_1,float param_2,float param_3,float param_4,ulong param_5,
                  long *param_6)

{
  long *plVar1;
  ushort uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long ***ppplVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long ****pppplVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  ulong *puVar22;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar23;
  long ****pppplVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  int iVar30;
  ulong *puVar31;
  undefined4 uVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fStack_170;
  float fStack_160;
  float fStack_140;
  undefined8 uStack_130;
  long *plStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long *plStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b0;
  long ***ppplStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long **pplStack_90;
  long *plStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = (undefined **)(param_5 + 0x130);
  uStack_f8 = (long *)((ulong)uStack_f8 & 0xffffffffffffff00);
  fStack_140 = param_4;
  fStack_160 = param_2;
  FUN_10a3c92c8();
  FUN_10a3fde74(&uStack_100);
  (**(code **)(*param_6 + 0xa8))(&uStack_130,param_6,&PTR_DAT_110bd1780,&UNK_10f653596,0);
  uStack_f0 = uStack_120;
  uStack_f8 = plStack_128;
  uStack_100 = (undefined **)uStack_130;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  uStack_130 = (long ***)0x0;
  uStack_e8 = 0;
  func_0x000107c2b080(&uStack_100);
  puVar31 = (ulong *)(param_5 + 0x168);
  if (*(char *)(param_5 + 0x17f) < '\0') {
    __ZdlPv(*puVar31);
  }
  uVar32 = SUB84(uStack_100,0);
  *(long **)(param_5 + 0x170) = uStack_f8;
  *puVar31 = (ulong)uStack_100;
  *(ulong *)(param_5 + 0x178) = uStack_f0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff;
  uStack_100 = (undefined **)((ulong)uStack_100 & 0xffffffffffffff00);
  *(undefined8 *)(param_5 + 0x180) = uStack_e8;
  if ((long)uStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  puVar9 = PTR___tlv_bootstrap_11340d750;
  ppuVar21 = &PTR___tlv_bootstrap_11340d750;
  ppuVar15 = ppuVar21;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar16 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar15 & 1) == 0) {
    ppuVar15 = ppuVar16;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar15,0x100000000);
    (*(code *)puVar9)();
    *(undefined1 *)ppuVar21 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  uVar11 = uStack_130;
  puVar27 = (undefined8 *)ppuVar16[2];
  if (puVar27 == (undefined8 *)0x0) {
    uStack_130 = (long ***)((ulong)uStack_130._1_7_ << 8);
    plStack_110 = (long *)0x0;
    uStack_108 = 0;
LAB_10a3e32a4:
    uStack_100 = (undefined **)0x0;
    uStack_f8 = (long *)((ulong)uStack_f8 & 0xffffffff00000000);
    (**(code **)(*param_6 + 0xf0))(param_6,&PTR_DAT_110bd0878,&uStack_100);
    uStack_d0 = CONCAT44(fStack_160,uVar32);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,param_3);
    FUN_10a3e3894(*(undefined8 *)(param_5 + 0x140),&uStack_d0);
    fVar33 = 0.0;
    uStack_f8 = (long *)0x3f80000000000000;
    uStack_100 = (undefined **)0x0;
    (**(code **)(*param_6 + 400))(param_6,&PTR_DAT_110bd0898,&uStack_100);
    fVar35 = fStack_160;
    if (((NAN(fVar33)) || (NAN(fStack_160))) || (NAN(param_3))) {
LAB_10a3e336c:
      fVar36 = fVar35;
      fStack_140 = 1.0;
      fVar33 = 0.0;
      if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
        fStack_160 = 0.0;
        fStack_170 = 0.0;
      }
      else {
        puVar22 = puVar31;
        if (*(char *)(param_5 + 0x17f) < '\0') {
          puVar22 = (ulong *)*puVar31;
        }
        func_0x00010ae06f08(1,2,&UNK_10f654482,&UNK_10f654682,0x2af,&UNK_10f6546de,in_x6,in_x7,
                            puVar22);
        fStack_160 = 0.0;
        fStack_170 = 0.0;
      }
    }
    else {
      fVar36 = INFINITY;
      auVar8._4_4_ = -(uint)(ABS(fStack_160) == INFINITY);
      auVar8._0_4_ = -(uint)(ABS(fVar33) == INFINITY);
      auVar8._8_4_ = -(uint)(ABS(param_3) == INFINITY);
      auVar8._12_4_ = -(uint)(ABS(fStack_140) == INFINITY);
      uVar34 = NEON_umaxv(auVar8,4);
      fVar35 = INFINITY;
      if (((uVar34 & 1) != 0) || (fStack_170 = param_3, NAN(fStack_140))) goto LAB_10a3e336c;
    }
    uStack_100 = (undefined **)NEON_fmov(0x3f800000,4);
    fVar35 = SUB84(uStack_100,0);
    uStack_f8 = (long *)CONCAT44(uStack_f8._4_4_,0x3f800000);
    (**(code **)(*param_6 + 0xf0))(param_6,&PTR_s_scale_110bd17b8,&uStack_100);
    if ((NAN(fVar35)) || (NAN(fVar36))) {
LAB_10a3e3468:
      param_3 = 1.0;
      if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
        fVar36 = 1.0;
        fVar35 = 1.0;
      }
      else {
        if (*(char *)(param_5 + 0x17f) < '\0') {
          puVar31 = (ulong *)*puVar31;
        }
        func_0x00010ae06f08(1,2,&UNK_10f654482,&UNK_10f654682,0x2b5,&UNK_10f654718,in_x6,in_x7,
                            puVar31);
        fVar36 = 1.0;
        fVar35 = 1.0;
      }
    }
    else if ((ABS(param_3) == INFINITY) ||
            (((ABS(fVar36) == INFINITY || (NAN(param_3))) || (ABS(fVar35) == INFINITY))))
    goto LAB_10a3e3468;
    uStack_100 = (undefined **)CONCAT44(fVar36,fVar35);
    uStack_f8 = (long *)CONCAT44(fVar33,param_3);
    uStack_f0 = CONCAT44(fStack_170,fStack_160);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,fStack_140);
    FUN_10a3e38dc(*(undefined8 *)(param_5 + 0x140),&uStack_100);
    plVar28 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bd08b8,0);
    *(byte *)(*(long *)(param_5 + 0x140) + 0x29) =
         *(byte *)(*(long *)(param_5 + 0x140) + 0x29) & 0xfe | (byte)plVar28;
    plVar28 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bd08d8,1);
    uVar2 = 0;
    if ((int)plVar28 == 0) {
      uVar2 = 0x10;
    }
    *(ushort *)(param_5 + 0x118) = *(ushort *)(param_5 + 0x118) & 0xffef | uVar2;
    plVar28 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_components_110bd08f8);
    if ((int)plVar28 != 0) {
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_s_components_110bd08f8);
      plVar28 = param_6;
      (**(code **)(*param_6 + 0x208))();
      if ((int)plVar28 != 0) {
        iVar30 = 0;
        do {
          (**(code **)(*param_6 + 0x218))(param_6,iVar30);
          (**(code **)(*param_6 + 600))(&uStack_100,param_6,param_5);
          if (((long ****)uStack_100 == (long ****)0x0) ||
             (pppplVar19 = (long ****)uStack_100,
             ___dynamic_cast(uStack_100,&PTR_DAT_110b9fe10,&PTR_DAT_110bd31d8,0),
             pppplVar19 == (long ****)0x0)) {
            pppplVar24 = &ppplStack_a8;
          }
          else {
            plStack_a0 = uStack_f8;
            pppplVar24 = (long ****)&uStack_100;
            ppplStack_a8 = (long ***)pppplVar19;
          }
          *pppplVar24 = (long ***)0x0;
          pppplVar24[1] = (long ***)0x0;
          plVar29 = uStack_f8;
          if (uStack_f8 != (long *)0x0) {
            plVar1 = uStack_f8 + 1;
            do {
              lVar25 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar25 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*uStack_f8 + 0x10))(uStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
            }
          }
          (**(code **)(*param_6 + 0x220))(param_6);
          ppplVar13 = ppplStack_a8;
          if (((long ****)ppplStack_a8 != (long ****)0x0) &&
             ((*(code *)(*ppplStack_a8)[0x13])(ppplStack_a8),
             *(int *)(*(long *)(*(long *)(param_5 + 0x120) + 0xa20) + 0x18) < 0x92)) {
            FUN_10a3c6bf8(ppplVar13);
          }
          plVar29 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar1 = plStack_a0 + 1;
            do {
              lVar25 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar25 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
            }
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 != (int)plVar28);
      }
      (**(code **)(*param_6 + 0x220))(param_6);
    }
    uStack_f8 = (long *)((ulong)uStack_f8 & 0xffffffffffffff00);
    uStack_100 = &PTR_DAT_110bd0d98;
    uStack_f0 = param_5;
    (**(code **)(*param_6 + 0x1e0))(param_6,&uStack_100);
    FUN_10a1d33b4(&uStack_130);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    cVar4 = *(char *)(puVar27[1] + 0x1e);
    uStack_130 = (long ***)CONCAT71(uStack_130._1_7_,cVar4);
    uVar12 = uStack_130;
    uStack_130._4_4_ = SUB84(uVar11,4);
    uStack_130._0_4_ = CONCAT22(0xe,(short)uVar12);
    plStack_128 = (long *)&UNK_10f654670;
    ppuVar21 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar30 = *(int *)ppuVar21;
    if (*(int *)ppuVar21 == 0) {
      uStack_100 = (undefined **)0x0;
      _pthread_threadid_np(0,&uStack_100);
      *(int *)ppuVar21 = (int)uStack_100;
      iVar30 = (int)uStack_100;
    }
    puVar10 = puRam00000001137eb040;
    uStack_120 = CONCAT44(uStack_120._4_4_,iVar30);
    plStack_110 = (long *)0x0;
    uStack_108 = 0;
    if (cVar4 == '\0') goto LAB_10a3e32a4;
    if (((*(byte *)(puVar27[1] + 0x42) | *(byte *)(puVar27[1] + 0x43)) & 1) == 0) {
LAB_10a3e3268:
      if (*(char *)(puVar27[1] + 0x41) == '\x01') {
        plVar28 = (long *)puVar27[0xb];
        if (plVar28 != (long *)0x0) {
          plVar29 = plVar28;
          (**(code **)(*plVar28 + 0x10))(plVar28,plStack_128);
          plStack_110 = plVar29;
        }
        uStack_108 = plVar28 != (long *)0x0;
      }
      goto LAB_10a3e32a4;
    }
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar26 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar26 / uVar3;
      }
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = ((uVar26 - uVar6 * uVar3) * 1000000000) / uVar3;
      }
      uVar26 = uVar7 + uVar6 * 1000000000;
    }
    puVar17 = puVar27;
    uStack_118 = uVar26;
    FUN_10a1333cc();
    if (puVar17 == (undefined8 *)0x0) goto LAB_10a3e3268;
    plVar28 = (long *)puVar27[2];
    puVar18 = &uStack_100;
    uStack_f8 = plVar28;
    FUN_10a3f0238(puVar18,1);
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[4] = plVar28;
    FUN_10a3f013c();
    uStack_c0 = CONCAT17(4,(undefined7)uStack_c0);
    uStack_d0 = CONCAT35(uStack_d0._5_3_,0x656d616e);
    plVar29 = (long *)(long)*(char *)(param_5 + 0x17f);
    puVar22 = puVar31;
    plStack_b0 = plVar28;
    plStack_88 = plVar28;
    if (-1 < (long)plVar29) {
LAB_10a3e30f4:
      if (plVar29 < (long *)0x17) {
        uStack_98 = CONCAT17((char)plVar29,(undefined7)uStack_98);
        pppplVar19 = &ppplStack_a8;
        if (plVar29 != (long *)0x0) goto LAB_10a3e3154;
      }
      else {
        uVar3 = 0x19;
        if (((ulong)plVar29 | 7) != 0x17) {
          uVar3 = ((ulong)plVar29 | 7) + 1;
        }
        pppplVar19 = (long ****)&pplStack_90;
        FUN_10a3a8170(pppplVar19,uVar3);
        uStack_98 = uVar3 | 0x8000000000000000;
        ppplStack_a8 = (long ***)pppplVar19;
        plStack_a0 = plVar29;
LAB_10a3e3154:
        _memmove(pppplVar19,puVar22,plVar29);
      }
      *(undefined1 *)((long)pppplVar19 + (long)plVar29) = 0;
      uVar32 = SUB84(ppplStack_a8,0);
      uStack_f8 = plStack_a0;
      uStack_100 = (undefined **)ppplStack_a8;
      uStack_f0 = uStack_98;
      plStack_e0 = plStack_88;
      uStack_d8 = 2;
      puVar20 = (undefined8 *)puVar18[1];
      if (puVar20 < (undefined8 *)puVar18[2]) {
        uVar32 = (undefined4)uStack_d0;
        puVar20[2] = uStack_c0;
        puVar20[1] = uStack_c8;
        *puVar20 = uStack_d0;
        puVar20[4] = plStack_b0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d0 = 0;
        FUN_10a3f0510(puVar20 + 5,&uStack_100);
        puVar20 = puVar20 + 0xb;
      }
      else {
        puVar20 = puVar18;
        FUN_10a3f0658(puVar18,&uStack_d0,&uStack_100);
      }
      puVar18[1] = puVar20;
      FUN_10a133060(&uStack_100);
      if ((long)uStack_c0 < 0) {
        plVar28 = plStack_b0 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar5) {
            *plVar28 = *plVar28 - (uStack_c0 & 0x7fffffffffffffff);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        __ZdlPv(uStack_d0);
      }
      uVar23 = 4;
      if (puRam00000001137eb040 != puVar10) {
        uVar23 = 5;
        puVar18 = puVar10;
      }
      *puVar17 = &UNK_10f654670;
      puVar17[1] = puVar18;
      puVar17[2] = uVar26;
      *(int *)(puVar17 + 3) = iVar30;
      *(undefined2 *)((long)puVar17 + 0x1c) = 0xe;
      *(undefined1 *)((long)puVar17 + 0x1e) = uVar23;
      if ((*(byte *)(puVar27 + 0x38) & 1) == 0) goto LAB_10a3e37c8;
      puVar27[0x18] = puVar27[0x18] + 1;
      goto LAB_10a3e3268;
    }
    plVar29 = *(long **)(param_5 + 0x170);
    if (plVar29 < (long *)0x7ffffffffffffff8) {
      puVar22 = *(ulong **)(param_5 + 0x168);
      goto LAB_10a3e30f4;
    }
  }
  FUN_10a3a815c();
LAB_10a3e37c8:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a3e37cc);
  (*pcVar14)();
}



/* Entry: 10a3e3894; end: 10a3e38db;  */

ulong FUN_10a3e3894(long param_1,float *param_2,float *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  fVar9 = *param_2;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x94) == fVar9) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x98)) && !NAN(param_2[1]))) {
    bVar2 = *(float *)(param_1 + 0x98) == param_2[1];
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x9c)) && !NAN(param_2[2]))) {
    bVar3 = *(float *)(param_1 + 0x9c) == param_2[2];
  }
  if (bVar3) {
    return (ulong)(uint)fVar9;
  }
  *(float *)(param_1 + 0x94) = fVar9;
  *(float *)(param_1 + 0x98) = param_2[1];
  fVar9 = param_2[2];
  uVar10 = 0;
  *(float *)(param_1 + 0x9c) = fVar9;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 0x60;
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    for (lVar8 = *(long *)(lVar6 + 0x198); lVar8 != lVar6 + 400; lVar8 = *(long *)(lVar8 + 8)) {
      lVar4 = *(long *)(*(long *)(lVar8 + 0x10) + 0x140);
      bVar1 = *(byte *)(lVar4 + 0x2a);
      if (((bVar1 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar4 + 0x2a) = bVar1 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar7 = *(float **)(param_1 + 0x38);
  (**(code **)(*(long *)pfVar7 + 0x20))(pfVar7);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar5 = (int)&pcStack_78;
  lStack_68 = param_1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar7 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(pfVar7);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar7)) && (!NAN(pfVar7[1]))) && (ABS(pfVar7[1]) != INFINITY)) &&
       (((ABS(*pfVar7) != INFINITY && (!NAN(pfVar7[2]))) && (ABS(pfVar7[2]) != INFINITY)))) {
      param_3 = pfVar7;
    }
    return (ulong)(uint)*param_3;
  }
  return CONCAT44(uVar10,fVar9);
}



/* Entry: 10a3e38dc; end: 10a3e39b7;  */

ulong FUN_10a3e38dc(ulong param_1,long param_2,ulong *param_3,float *param_4)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((*(byte *)(param_2 + 0x2a) & 1) != 0) {
    FUN_10a3e8ed4(param_2);
  }
  func_0x00010a0d8ae0(param_2);
  uVar7 = param_2 + 0x48;
  FUN_10a3e83c4(uVar7,param_3);
  if ((uVar7 & 1) != 0) {
    return param_1;
  }
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar9 = *(undefined8 *)((long)param_3 + 0xc);
  *(undefined8 *)(param_2 + 0x5c) = *(undefined8 *)((long)param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x54) = uVar9;
  *(ulong *)(param_2 + 0x50) = uVar8;
  *(ulong *)(param_2 + 0x48) = uVar7;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) & 0xfd;
    bVar3 = *(byte *)(param_2 + 0x2a) | 2;
  }
  else {
    ppuStack_70 = *(undefined ***)(param_2 + 0x94);
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(param_2 + 0x9c));
    FUN_10a0087b0(&uStack_60,param_2 + 0x48,&ppuStack_70);
    *(undefined8 *)(param_2 + 0x6c) = uStack_58;
    *(undefined8 *)(param_2 + 100) = uStack_60;
    *(undefined8 *)(param_2 + 0x7c) = uStack_48;
    *(undefined8 *)(param_2 + 0x74) = uStack_50;
    *(long *)(param_2 + 0x8c) = lStack_38;
    *(ulong *)(param_2 + 0x84) = uStack_40;
    *(undefined8 *)(param_2 + 0x9c) = in_stack_ffffffffffffffd8;
    *(undefined8 *)(param_2 + 0x94) = in_stack_ffffffffffffffd0;
    bVar3 = *(byte *)(param_2 + 0x2a);
    uVar7 = uStack_40;
  }
  *(byte *)(param_2 + 0x2a) = bVar3 | 0x5c;
  lVar4 = *(long *)(param_2 + 0x30);
  if (lVar4 != 0) {
    for (lVar6 = *(long *)(lVar4 + 0x198); lVar6 != lVar4 + 400; lVar6 = *(long *)(lVar6 + 8)) {
      lVar1 = *(long *)(*(long *)(lVar6 + 0x10) + 0x140);
      bVar3 = *(byte *)(lVar1 + 0x2a);
      if (((bVar3 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar1 + 0x2a) = bVar3 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar5 = *(float **)(param_2 + 0x38);
  (**(code **)(*(long *)pfVar5 + 0x20))(pfVar5);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar2 = (int)&pcStack_78;
  lStack_68 = param_2;
  (**(code **)(**(long **)(param_2 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar5 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume(pfVar5);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar5)) && (!NAN(pfVar5[1]))) && (ABS(pfVar5[1]) != INFINITY)) &&
       (((ABS(*pfVar5) != INFINITY && (!NAN(pfVar5[2]))) && (ABS(pfVar5[2]) != INFINITY)))) {
      param_4 = pfVar5;
    }
    return (ulong)(uint)*param_4;
  }
  return uVar7;
}



/* Entry: 10a3e39b8; end: 10a3e39c7;  */

void FUN_10a3e39b8(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3e39c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
  return;
}



/* Entry: 10a3e39c8; end: 10a3e3b4f;  */

void FUN_10a3e39c8(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_78;
  long lStack_70;
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  
  lVar1 = param_2 + 400;
  lVar3 = *(long *)(param_2 + 0x198);
  if (lVar3 != lVar1) {
    do {
      lVar4 = *(long *)(lVar3 + 0x10);
      (**(code **)(*param_1 + 0x10))(param_1);
      uStack_88 = *(undefined8 *)(lVar4 + 0x48);
      uStack_90 = *(undefined8 *)(lVar4 + 0x40);
      FUN_10a0ffca4(&ppuStack_78,&uStack_90);
      lStack_58 = (long)cStack_61;
      ppuStack_60 = &ppuStack_78;
      if (lStack_58 < 0) {
        ppuStack_60 = ppuStack_78;
        lStack_58 = lStack_70;
        if (lStack_70 < 0) goto LAB_10a3e3b2c;
      }
      (**(code **)(*param_1 + 0x30))(param_1,&PTR_DAT_110bd1740,&ppuStack_60);
      if (cStack_61 < '\0') {
        __ZdlPv(ppuStack_78);
      }
      uStack_88 = *(undefined8 *)(param_2 + 0x48);
      uStack_90 = *(undefined8 *)(param_2 + 0x40);
      FUN_10a0ffca4(&ppuStack_78,&uStack_90);
      lStack_58 = (long)cStack_61;
      ppuStack_60 = &ppuStack_78;
      if (lStack_58 < 0) {
        ppuStack_60 = ppuStack_78;
        lStack_58 = lStack_70;
        if (lStack_70 < 0) {
LAB_10a3e3b2c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3e3b30);
          (*pcVar2)();
        }
      }
      (**(code **)(*param_1 + 0x30))(param_1,&PTR_DAT_110bd1760,&ppuStack_60);
      if (cStack_61 < '\0') {
        __ZdlPv(ppuStack_78);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar1);
    lVar3 = *(long *)(param_2 + 0x198);
  }
  for (; lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_10a3e39c8(param_1,*(undefined8 *)(lVar3 + 0x10));
  }
  return;
}



/* Entry: 10a3e3b50; end: 10a3e3c63;  */

void FUN_10a3e3b50(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar1 = param_2 + 400;
  lVar9 = *(long *)(param_2 + 0x198);
  if (lVar9 != lVar1) {
    plVar3 = param_1;
    lVar4 = param_2;
    puVar10 = (undefined8 *)param_1[1];
    do {
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      if (puVar10 < (undefined8 *)param_1[2]) {
        puVar12 = puVar10 + 1;
        *puVar10 = uVar7;
      }
      else {
        lVar11 = (long)puVar10 - *param_1;
        uVar2 = (lVar11 >> 3) + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_10a3ee614();
          lVar1 = param_3 + 400;
          lVar9 = *(long *)(param_3 + 0x198);
          if (lVar9 != lVar1) {
            do {
              (**(code **)(*plVar3 + 0x128))(plVar3,*(undefined8 *)(lVar9 + 0x10),lVar4);
              lVar9 = *(long *)(lVar9 + 8);
            } while (lVar9 != lVar1);
            lVar9 = *(long *)(param_3 + 0x198);
          }
          for (; lVar9 != lVar1; lVar9 = *(long *)(lVar9 + 8)) {
            FUN_10a3e3c64(plVar3,lVar4,*(undefined8 *)(lVar9 + 0x10));
          }
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar6 = (long)uVar5 >> 2;
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar6 = 0x1fffffffffffffff;
        }
        FUN_10a3ee628();
        puVar10 = (undefined8 *)(uVar6 + lVar11);
        lVar11 = lVar4 * 8;
        puVar12 = puVar10 + 1;
        *puVar10 = uVar7;
        lVar4 = *param_1;
        param_3 = param_1[1] - lVar4;
        lVar8 = (long)puVar10 - param_3;
        _memcpy(lVar8);
        plVar3 = (long *)*param_1;
        *param_1 = lVar8;
        param_1[1] = (long)puVar12;
        param_1[2] = uVar6 + lVar11;
        if (plVar3 != (long *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar12;
      lVar9 = *(long *)(lVar9 + 8);
      puVar10 = puVar12;
    } while (lVar9 != lVar1);
    lVar9 = *(long *)(param_2 + 0x198);
  }
  for (; lVar9 != lVar1; lVar9 = *(long *)(lVar9 + 8)) {
    FUN_10a3e3b50(param_1,*(undefined8 *)(lVar9 + 0x10));
  }
  return;
}



/* Entry: 10a3e3c64; end: 10a3e3cef;  */

void FUN_10a3e3c64(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 400;
  lVar2 = *(long *)(param_3 + 0x198);
  if (lVar2 != lVar1) {
    do {
      (**(code **)(*param_1 + 0x128))(param_1,*(undefined8 *)(lVar2 + 0x10),param_2);
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != lVar1);
    lVar2 = *(long *)(param_3 + 0x198);
  }
  for (; lVar2 != lVar1; lVar2 = *(long *)(lVar2 + 8)) {
    FUN_10a3e3c64(param_1,param_2,*(undefined8 *)(lVar2 + 0x10));
  }
  return;
}



/* Entry: 10a3e3cf0; end: 10a3e3ec7;  */

void FUN_10a3e3cf0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined2 uStack_38;
  undefined4 uStack_34;
  
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    if (uVar2 != 0) {
      if ((uVar2 & 0xfffffffe) != 2) {
        return;
      }
      uStack_38 = 0x101;
      ppuStack_40 = &PTR_FUN_110bc7b80;
      uStack_34 = 1;
      if (uVar2 == 2) {
        (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd0858);
        FUN_10a3e3c64(param_2,&ppuStack_40,*(undefined8 *)(param_1 + 0x10));
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      else {
        ppuStack_58 = (undefined **)0x0;
        ppuStack_50 = (undefined **)0x0;
        uStack_48 = 0;
        FUN_10a3e3b50(&ppuStack_58,*(undefined8 *)(param_1 + 0x10));
        ppuVar3 = ppuStack_58;
        lVar1 = 0;
        if (ppuStack_50 != ppuStack_58) {
          lVar1 = LZCOUNT((long)ppuStack_50 - (long)ppuStack_58 >> 3) * -2 + 0x7e;
        }
        FUN_10a3f07c0(ppuStack_58,ppuStack_50,lVar1,1);
        (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd0858);
        FUN_10a3e3ec8(param_2,*(long *)(param_1 + 0x10) + 400,&ppuStack_40);
        (**(code **)(*param_2 + 0x20))(param_2);
        if (ppuVar3 != (undefined **)0x0) {
          __ZdlPv(ppuVar3);
        }
      }
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd1720);
      FUN_10a3e39c8(param_2,*(undefined8 *)(param_1 + 0x10));
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
    uVar4 = *(undefined1 *)(param_3 + 8);
  }
  ppuStack_58 = &PTR_FUN_110bc7b80;
  ppuStack_50 = (undefined **)
                (CONCAT71((int7)(CONCAT62(ppuStack_50._2_6_,0x101) >> 8),uVar4) & 0xffffff01);
  FUN_10a3e3ec8(param_2,*(long *)(param_1 + 0x10) + 400,&ppuStack_58);
  return;
}



/* Entry: 10a3e3ec8; end: 10a3e3f6f;  */

void FUN_10a3e3ec8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_3 + 9) != '\x01' || *(long *)(param_2 + 8) != param_2) {
    (**(code **)(*param_1 + 0x18))(param_1,&PTR_DAT_110bd0858);
    for (lVar2 = *(long *)(param_2 + 8); lVar2 != param_2; lVar2 = *(long *)(lVar2 + 8)) {
      lVar1 = *(long *)(lVar2 + 0x10);
      if ((lVar1 != 0) && ((*(char *)(lVar1 + 8) != '\x01' || ((*(byte *)(param_3 + 8) & 1) == 0))))
      {
        (**(code **)(*param_1 + 0x128))(param_1,lVar1,param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010a3e3f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



/* Entry: 10a3e3f70; end: 10a3e3f7f;  */

void FUN_10a3e3f70(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3e3f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
  return;
}



/* Entry: 10a3e3f80; end: 10a3e41bf;  */

void FUN_10a3e3f80(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  ulong uStack_48;
  
  (**(code **)(*param_2 + 0x140))
            (param_2,&PTR_DAT_110bd17d8,*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48));
  ppuStack_68 = (undefined **)&UNK_10f64c61b;
  uStack_60 = 0xb;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bd11d8,&ppuStack_68);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0x130));
  FUN_10a00d760(param_2,&PTR_DAT_110bd1780,param_1 + 0x168);
  ppuStack_68 = *(undefined ***)(*(long *)(param_1 + 0x140) + 0x94);
  uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x140) + 0x9c));
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bd0878,&ppuStack_68);
  lVar3 = *(long *)(param_1 + 0x140);
  func_0x00010a0d8ae0(lVar3);
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bd0898,lVar3 + 0x54);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_s_scale_110bd17b8,lVar3 + 0x48);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_DAT_110bd08b8,*(byte *)(*(long *)(param_1 + 0x140) + 0x29) & 1);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_DAT_110bd08d8,(*(ushort *)(param_1 + 0x118) & 0x10) == 0);
  ppuStack_50 = &PTR_FUN_110bd1408;
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(param_3 + 8);
  }
  uStack_48 = CONCAT71(1,uVar2) & 0xffffffffffffff01;
  if (*(long *)(param_1 + 0x158) != param_1 + 0x150) {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_components_110bd08f8);
    for (lVar3 = *(long *)(param_1 + 0x158); lVar3 != param_1 + 0x150; lVar3 = *(long *)(lVar3 + 8))
    {
      lVar1 = *(long *)(lVar3 + 0x10);
      if ((lVar1 != 0) && ((*(char *)(lVar1 + 8) != '\x01' || ((uStack_48 & 1) == 0)))) {
        (**(code **)(*param_2 + 0x128))(param_2,lVar1,&ppuStack_50);
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  ppuStack_68 = &PTR_DAT_110bd0d98;
  lStack_58 = param_1;
  (**(code **)(*param_2 + 0x120))(param_2,&ppuStack_68,param_3);
  return;
}



/* Entry: 10a3e41c0; end: 10a3e41ef;  */

ulong * FUN_10a3e41c0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong uVar3;
  
  if ((uint)param_2 < 0x40) {
    param_2 = 1L << (param_2 & 0x3f);
    puVar2 = (ulong *)(param_1 + 0x130);
    param_3 = 0;
    puVar1 = (undefined1 *)register0x00000008;
  }
  else {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = (ulong *)&UNK_10f633850;
    unaff_x30 = FUN_10a3e41f0;
    FUN_10a00946c();
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(code **)(puVar1 + -8) = unaff_x30;
  *(ulong *)(puVar1 + -0x38) = param_2;
  *(undefined8 *)(puVar1 + -0x30) = param_3;
  if ((*puVar2 != param_2) || (puVar2[1] != *(ulong *)(puVar1 + -0x30))) {
    uVar3 = *(ulong *)(puVar1 + -0x38);
    puVar2[1] = *(ulong *)(puVar1 + -0x30);
    *puVar2 = uVar3;
    func_0x00010a1bd170(puVar1 + -0x28);
    FUN_10a3fe008(puVar2);
  }
  return puVar2;
}



/* Entry: 10a3e41f0; end: 10a3e424f;  */

long * FUN_10a3e41f0(long *param_1,long param_2,long param_3)

{
  undefined1 auStack_28 [8];
  
  if ((*param_1 != param_2) || (param_1[1] != param_3)) {
    param_1[1] = param_3;
    *param_1 = param_2;
    func_0x00010a1bd170(auStack_28);
    FUN_10a3fe008(param_1);
  }
  return param_1;
}



/* Entry: 10a3e4250; end: 10a3e4547;  */

void FUN_10a3e4250(long param_1)

{
  long *plVar1;
  long **pplVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  uVar3 = *(ushort *)(param_1 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18)) {
    bVar6 = (uVar3 & 0x13) == 0;
    lVar11 = 0x228;
    if (!bVar6) {
      lVar11 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar11));
    if (bVar6 != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_10a3faba8(param_1,&plStack_80);
  plVar8 = plStack_78;
  if (plStack_80 != plStack_78) {
    uVar9 = 0;
    plVar12 = plStack_80;
    if ((uVar3 & 0x13) != 0) {
      uVar9 = 4;
    }
    do {
      plVar7 = (long *)plVar12[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
        lVar11 = *plVar12;
        plVar1 = plVar7 + 1;
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        if ((lVar11 != 0) && (uVar4 = *(ushort *)(lVar11 + 0x180), (uVar4 >> 4 & 1) == 0)) {
          if ((((uVar3 & 0x13) == 0) != ((uVar4 & 4) == 0)) &&
             (*(ushort *)(lVar11 + 0x180) = uVar4 & 0xffeb | uVar9,
             ((uVar4 & 7) == 0) != ((uVar4 & 3) == 0 && uVar9 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar11 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar11);
            }
            else {
              FUN_10a3c7718(lVar11);
            }
          }
          if (((uVar3 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar8);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar11 = 0x228;
    if ((uVar3 & 0x13) != 0) {
      lVar11 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar11));
  }
  FUN_10a3e45e0(&pplStack_98,param_1);
  for (pplVar2 = pplStack_98; pplVar2 != pplStack_90; pplVar2 = pplVar2 + 2) {
    plVar8 = pplVar2[1];
    if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)
       ) {
      plVar7 = *pplVar2;
      plVar12 = plVar8 + 1;
      do {
        lVar11 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      if (((plVar7 != (long *)0x0) && ((*(ushort *)(plVar7 + 0x23) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(plVar7,(uVar3 & 0x13) == 0),
         ((uVar3 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))) break;
    }
  }
  ppplStack_68 = &pplStack_98;
  func_0x00010a2e3118(&ppplStack_68);
LAB_10a3e44d0:
  pplStack_98 = &plStack_80;
  FUN_10a0d80a4(&pplStack_98);
  return;
}



/* Entry: 10a3e4548; end: 10a3e45df;  */

void FUN_10a3e4548(long param_1,uint param_2)

{
  long *plVar1;
  long **pplVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  
  uVar4 = *(ushort *)(param_1 + 0x118);
  if ((param_2 == ((uVar4 & 1) == 0)) ||
     (uVar5 = uVar4 & 0xfffe | param_2 ^ 1, *(short *)(param_1 + 0x118) = (short)uVar5,
     ((uVar4 & 0x13) == 0) == ((uVar5 & 0x13) == 0))) {
    return;
  }
  uVar4 = *(ushort *)(param_1 + 0x118);
  if (0x120 < *(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18)) {
    bVar7 = (uVar4 & 0x13) == 0;
    lVar12 = 0x228;
    if (!bVar7) {
      lVar12 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar12));
    if (bVar7 != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0)) {
      return;
    }
  }
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_10a3faba8(param_1,&plStack_80);
  plVar9 = plStack_78;
  if (plStack_80 != plStack_78) {
    uVar10 = 0;
    plVar13 = plStack_80;
    if ((uVar4 & 0x13) != 0) {
      uVar10 = 4;
    }
    do {
      plVar8 = (long *)plVar13[1];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
        lVar12 = *plVar13;
        plVar1 = plVar8 + 1;
        do {
          lVar11 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
        if ((lVar12 != 0) && (uVar3 = *(ushort *)(lVar12 + 0x180), (uVar3 >> 4 & 1) == 0)) {
          if ((((uVar4 & 0x13) == 0) != ((uVar3 & 4) == 0)) &&
             (*(ushort *)(lVar12 + 0x180) = uVar3 & 0xffeb | uVar10,
             ((uVar3 & 7) == 0) != ((uVar3 & 3) == 0 && uVar10 == 0))) {
            if (*(int *)(*(long *)(*(long *)(lVar12 + 0x170) + 0xa20) + 0x18) < 0x92) {
              FUN_10a3c6798(lVar12);
            }
            else {
              FUN_10a3c7718(lVar12);
            }
          }
          if (((uVar4 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))
          goto LAB_10a3e44d0;
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar9);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18) < 0x121) {
    lVar12 = 0x228;
    if ((uVar4 & 0x13) != 0) {
      lVar12 = 0x238;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar12));
  }
  FUN_10a3e45e0(&pplStack_98,param_1);
  for (pplVar2 = pplStack_98; pplVar2 != pplStack_90; pplVar2 = pplVar2 + 2) {
    plVar9 = pplVar2[1];
    if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)
       ) {
      plVar8 = *pplVar2;
      plVar13 = plVar9 + 1;
      do {
        lVar12 = *plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if (((plVar8 != (long *)0x0) && ((*(ushort *)(plVar8 + 0x23) >> 3 & 1) == 0)) &&
         (FUN_10a3e2a80(plVar8,(uVar4 & 0x13) == 0),
         ((uVar4 & 0x13) == 0) != ((*(ushort *)(param_1 + 0x118) & 0x13) == 0))) break;
    }
  }
  ppplStack_68 = &pplStack_98;
  func_0x00010a2e3118(&ppplStack_68);
LAB_10a3e44d0:
  pplStack_98 = &plStack_80;
  FUN_10a0d80a4(&pplStack_98);
  return;
}



/* Entry: 10a3e45e0; end: 10a3e474f;  */

void FUN_10a3e45e0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = *(ulong *)(param_2 + 0x1a0);
  if (uVar6 != 0) {
    if (uVar6 >> 0x3c != 0) {
      FUN_10a2e3050();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3e4718);
      (*pcVar4)();
    }
    plVar5 = param_1;
    plStack_50 = param_1;
    FUN_10a2e3064();
    lVar8 = (long)plVar5 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plStack_70 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar5;
    lStack_58 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar6 * 2);
    plStack_68 = plStack_70;
    plStack_60 = plStack_70;
    func_0x00010a2e3098(&plStack_70);
  }
  for (lVar8 = *(long *)(param_2 + 0x198); lVar8 != param_2 + 400; lVar8 = *(long *)(lVar8 + 8)) {
    func_0x00010a0d77bc(&plStack_80,*(undefined8 *)(lVar8 + 0x10));
    plStack_68 = plStack_78;
    plStack_70 = plStack_80;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d9e4c(param_1,&plStack_70);
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a3e4750; end: 10a3e4813;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c6ccc) */

void FUN_10a3e4750(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *****pppppcVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long alStack_188 [7];
  code *pcStack_150;
  undefined **ppuStack_148;
  long *plStack_140;
  undefined1 uStack_138;
  code ****ppppcStack_110;
  undefined **ppuStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  plVar15 = (long *)param_1[1];
  if (plVar15 < (long *)param_1[2]) {
    plVar16 = plVar15 + 1;
    *plVar15 = *param_2;
LAB_10a3e47fc:
    param_1[1] = (long)plVar16;
    return;
  }
  lVar14 = (long)plVar15 - *param_1;
  uVar1 = (lVar14 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar11 = param_1[2] - *param_1;
    uVar12 = (long)uVar11 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar12 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    FUN_10a3ec538();
    plVar15 = (long *)((long)plVar9 + lVar14);
    plVar16 = plVar15 + 1;
    *plVar15 = *param_2;
    lVar13 = (long)plVar15 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lVar14 = *param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar16;
    param_1[2] = (long)(plVar9 + uVar12);
    if (lVar14 != 0) {
      __ZdlPv();
    }
    goto LAB_10a3e47fc;
  }
  FUN_10a3ec524();
  FUN_10a3c7ce8();
  if (*(char *)(param_3[1] + 8) == '\x01') {
    (*(code *)*param_3)(*param_2,param_3);
  }
  (**(code **)(*(long *)*param_2 + 0x98))();
  lVar14 = param_1[0x24];
  FUN_10a3cfa0c();
  if (lVar14 != 0) {
    return;
  }
  lVar14 = param_1[0x24];
  if (0x91 < *(int *)(*(long *)(lVar14 + 0xa20) + 0x18)) {
    plVar15 = *(long **)(lVar14 + 0x4e0);
    uStack_98 = *(undefined8 *)(lVar14 + 0x4f0);
    plVar16 = *(long **)(lVar14 + 0x4e8);
    *(undefined8 *)(lVar14 + 0x4e0) = 0;
    *(undefined8 *)(lVar14 + 0x4e8) = 0;
    *(undefined8 *)(lVar14 + 0x4f0) = 0;
    plStack_a8 = plVar15;
    plStack_a0 = plVar16;
    for (; plVar15 != plVar16; plVar15 = plVar15 + 2) {
      plVar9 = (long *)plVar15[1];
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b0 = plVar9, plVar9 != (long *)0x0)) {
        lStack_b8 = *plVar15;
        if ((lStack_b8 != 0) && (lStack_b8 != *param_2)) {
          lVar14 = param_1[0x24];
          FUN_10a3c759c(&uStack_90);
          plVar3 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar2 = plStack_88 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = *plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          FUN_10a3dd140(lVar14 + 0x4e0,&stack0xffffffffffffff80);
          if (plVar3 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar3 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar2 = plStack_88 + 1;
            do {
              lVar14 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
        }
        plVar3 = plVar9 + 1;
        do {
          lVar14 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    FUN_10a3c6bf8(*param_2);
    FUN_10a0d80a4(&stack0xffffffffffffff80);
    return;
  }
  param_2 = (long *)*param_2;
  plStack_88 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(ushort *)(param_2 + 0x30);
  if ((uVar5 >> 7 & 1) == 0) {
    puVar10 = &UNK_10f653718;
  }
  else if ((uVar5 >> 6 & 1) == 0) {
    if ((uVar5 >> 4 & 1) == 0) {
      plVar16 = param_2;
      FUN_10a3c5cc8();
      cVar6 = *(char *)((long)plVar16 + 0x17);
      plVar15 = (long *)*plVar16;
      if (-1 < (long)cVar6) {
        plVar15 = plVar16;
      }
      lVar14 = plVar16[1];
      if (-1 < cVar6) {
        lVar14 = (long)cVar6;
      }
      FUN_10a3a7ab8(alStack_188,plVar15,lVar14);
      *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 0x40;
      if (*(char *)((long)param_2 + 0x167) < '\0') {
        if (param_2[0x2b] == 0) goto LAB_10a3c6c84;
      }
      else if (*(char *)((long)param_2 + 0x167) == '\0') {
LAB_10a3c6c84:
        lVar14 = param_2[0x2e];
        __ZNSt3__19to_stringEj(&puStack_c8,*(undefined4 *)(lVar14 + 0xd0c));
        ppuVar8 = &puStack_c8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppuVar8,0,&UNK_10f654023,10);
        ppuStack_108 = (undefined **)ppuVar8[1];
        ppppcStack_110 = (code ****)*ppuVar8;
        plStack_100 = (long *)ppuVar8[2];
        ppuVar8[1] = (undefined *)0x0;
        ppuVar8[2] = (undefined *)0x0;
        *ppuVar8 = (undefined *)0x0;
        *(int *)(lVar14 + 0xd0c) = *(int *)(lVar14 + 0xd0c) + 1;
        pppppcVar4 = (code *****)ppppcStack_110;
        ppuVar8 = ppuStack_108;
        if (-1 < (long)plStack_100) {
          pppppcVar4 = &ppppcStack_110;
          ppuVar8 = (undefined **)((ulong)plStack_100 >> 0x38);
        }
        func_0x000107c2c4d8(param_2 + 0x2a,pppppcVar4,ppuVar8);
        if ((long)plStack_100 < 0) {
          __ZdlPv(ppppcStack_110);
        }
      }
      uStack_90 = 0;
      uStack_98 = 0;
      plStack_a0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      plStack_b0 = (long *)0x0;
      lStack_b8 = 0;
      puStack_c8 = &UNK_1053a6a3c;
      ppuStack_c0 = &PTR_DAT_110ae9180;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x28))();
      if (plVar15 != (long *)0x0) {
        *(ushort *)((long)plVar15 + 0x59) =
             *(ushort *)((long)plVar15 + 0x59) & 0xff80 |
             *(ushort *)((long)plVar15 + 0x59) + 1 & 0x7f;
        uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
        ppppcStack_110 = (code ****)FUN_10a1d0710;
        ppuStack_108 = &PTR_FUN_110bad6c8;
        plStack_100 = plVar15;
        func_0x00010a108320(&puStack_c8,&ppppcStack_110);
        FUN_10a044790(&ppppcStack_110);
        (*(code *)*ppuStack_108)(&ppuStack_108);
      }
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      ppppcStack_110 = (code ****)&UNK_1053a6a3c;
      ppuStack_108 = &PTR_DAT_110ae9180;
      plVar15 = param_2;
      (**(code **)(*param_2 + 0x30))();
      if (plVar15 != (long *)0x0) {
        *(ushort *)(plVar15 + 6) =
             *(ushort *)(plVar15 + 6) & 0xff80 | *(ushort *)(plVar15 + 6) + 1 & 0x7f;
        uStack_138 = 1;
        pcStack_150 = FUN_10a1d355c;
        ppuStack_148 = &PTR_FUN_110bad800;
        plStack_140 = plVar15;
        func_0x00010a108320(&ppppcStack_110,&pcStack_150);
        FUN_10a044790(&pcStack_150);
        (*(code *)*ppuStack_148)(&ppuStack_148);
      }
      (**(code **)(param_2[0xd] + 0x20))();
      (**(code **)(*param_2 + 0x28))();
      if (param_2 != (long *)0x0) {
        FUN_10a1c08dc();
      }
      FUN_10a044790(&ppppcStack_110);
      (*(code *)*ppuStack_108)(&ppuStack_108);
      FUN_10a044790(&puStack_c8);
      (*(code *)*ppuStack_c0)(&ppuStack_c0);
      param_2 = alStack_188;
      FUN_10a3b78c4(param_2);
      if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_88) {
        return;
      }
      goto LAB_10a3c6ef0;
    }
    puVar10 = &UNK_10f653754;
  }
  else {
    puVar10 = &UNK_10f65373c;
  }
  FUN_10a3c6548(param_2,puVar10,&UNK_10f653736);
LAB_10a3c6ef0:
  ___stack_chk_fail();
  if ((long)plStack_100 < 0) {
    __ZdlPv(ppppcStack_110);
  }
  FUN_10a3b78c4(alStack_188);
  do {
    __Unwind_Resume(param_2);
  } while( true );
}



/* Entry: 10a3e4814; end: 10a3e4a33;  */

/* WARNING: Removing unreachable block (ram,0x00010a3c6ccc) */

void FUN_10a3e4814(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  code *****pppppcVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long alStack_158 [7];
  code *pcStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  undefined1 uStack_108;
  code ****ppppcStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  FUN_10a3c7ce8();
  if (*(char *)(param_3[1] + 8) == '\x01') {
    (*(code *)*param_3)(*param_2,param_3);
  }
  (**(code **)(*(long *)*param_2 + 0x98))();
  lVar8 = *(long *)(param_1 + 0x120);
  FUN_10a3cfa0c();
  if (lVar8 != 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x120);
  if (0x91 < *(int *)(*(long *)(lVar8 + 0xa20) + 0x18)) {
    plVar11 = *(long **)(lVar8 + 0x4e0);
    uStack_68 = *(undefined8 *)(lVar8 + 0x4f0);
    plVar12 = *(long **)(lVar8 + 0x4e8);
    *(undefined8 *)(lVar8 + 0x4e0) = 0;
    *(undefined8 *)(lVar8 + 0x4e8) = 0;
    *(undefined8 *)(lVar8 + 0x4f0) = 0;
    plStack_78 = plVar11;
    plStack_70 = plVar12;
    for (; plVar11 != plVar12; plVar11 = plVar11 + 2) {
      plVar9 = (long *)plVar11[1];
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_80 = plVar9, plVar9 != (long *)0x0)) {
        lStack_88 = *plVar11;
        if ((lStack_88 != 0) && (lStack_88 != *param_2)) {
          lVar8 = *(long *)(param_1 + 0x120);
          FUN_10a3c759c(&uStack_60);
          plVar2 = plStack_58;
          if (plStack_58 != (long *)0x0) {
            plVar1 = plStack_58 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_10a3dd140(lVar8 + 0x4e0,&stack0xffffffffffffffb0);
          if (plVar2 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar2 = plStack_58;
          if (plStack_58 != (long *)0x0) {
            plVar1 = plStack_58 + 1;
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
              (**(code **)(*plStack_58 + 0x10))(plStack_58);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
        }
        plVar2 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    FUN_10a3c6bf8(*param_2);
    FUN_10a0d80a4(&stack0xffffffffffffffb0);
    return;
  }
  param_2 = (long *)*param_2;
  plStack_58 = *(long **)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ushort *)(param_2 + 0x30);
  if ((uVar4 >> 7 & 1) == 0) {
    puVar10 = &UNK_10f653718;
  }
  else if ((uVar4 >> 6 & 1) == 0) {
    if ((uVar4 >> 4 & 1) == 0) {
      plVar12 = param_2;
      FUN_10a3c5cc8();
      cVar5 = *(char *)((long)plVar12 + 0x17);
      plVar11 = (long *)*plVar12;
      if (-1 < (long)cVar5) {
        plVar11 = plVar12;
      }
      lVar8 = plVar12[1];
      if (-1 < cVar5) {
        lVar8 = (long)cVar5;
      }
      FUN_10a3a7ab8(alStack_158,plVar11,lVar8);
      *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 0x40;
      if (*(char *)((long)param_2 + 0x167) < '\0') {
        if (param_2[0x2b] == 0) goto LAB_10a3c6c84;
      }
      else if (*(char *)((long)param_2 + 0x167) == '\0') {
LAB_10a3c6c84:
        lVar8 = param_2[0x2e];
        __ZNSt3__19to_stringEj(&puStack_98,*(undefined4 *)(lVar8 + 0xd0c));
        ppuVar7 = &puStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppuVar7,0,&UNK_10f654023,10);
        ppuStack_d8 = (undefined **)ppuVar7[1];
        ppppcStack_e0 = (code ****)*ppuVar7;
        plStack_d0 = (long *)ppuVar7[2];
        ppuVar7[1] = (undefined *)0x0;
        ppuVar7[2] = (undefined *)0x0;
        *ppuVar7 = (undefined *)0x0;
        *(int *)(lVar8 + 0xd0c) = *(int *)(lVar8 + 0xd0c) + 1;
        pppppcVar3 = (code *****)ppppcStack_e0;
        ppuVar7 = ppuStack_d8;
        if (-1 < (long)plStack_d0) {
          pppppcVar3 = &ppppcStack_e0;
          ppuVar7 = (undefined **)((ulong)plStack_d0 >> 0x38);
        }
        func_0x000107c2c4d8(param_2 + 0x2a,pppppcVar3,ppuVar7);
        if ((long)plStack_d0 < 0) {
          __ZdlPv(ppppcStack_e0);
        }
      }
      uStack_60 = 0;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_80 = (long *)0x0;
      lStack_88 = 0;
      puStack_98 = &UNK_1053a6a3c;
      ppuStack_90 = &PTR_DAT_110ae9180;
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x28))();
      if (plVar11 != (long *)0x0) {
        *(ushort *)((long)plVar11 + 0x59) =
             *(ushort *)((long)plVar11 + 0x59) & 0xff80 |
             *(ushort *)((long)plVar11 + 0x59) + 1 & 0x7f;
        uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
        ppppcStack_e0 = (code ****)FUN_10a1d0710;
        ppuStack_d8 = &PTR_FUN_110bad6c8;
        plStack_d0 = plVar11;
        func_0x00010a108320(&puStack_98,&ppppcStack_e0);
        FUN_10a044790(&ppppcStack_e0);
        (*(code *)*ppuStack_d8)(&ppuStack_d8);
      }
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      ppppcStack_e0 = (code ****)&UNK_1053a6a3c;
      ppuStack_d8 = &PTR_DAT_110ae9180;
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x30))();
      if (plVar11 != (long *)0x0) {
        *(ushort *)(plVar11 + 6) =
             *(ushort *)(plVar11 + 6) & 0xff80 | *(ushort *)(plVar11 + 6) + 1 & 0x7f;
        uStack_108 = 1;
        pcStack_120 = FUN_10a1d355c;
        ppuStack_118 = &PTR_FUN_110bad800;
        plStack_110 = plVar11;
        func_0x00010a108320(&ppppcStack_e0,&pcStack_120);
        FUN_10a044790(&pcStack_120);
        (*(code *)*ppuStack_118)(&ppuStack_118);
      }
      (**(code **)(param_2[0xd] + 0x20))();
      (**(code **)(*param_2 + 0x28))();
      if (param_2 != (long *)0x0) {
        FUN_10a1c08dc();
      }
      FUN_10a044790(&ppppcStack_e0);
      (*(code *)*ppuStack_d8)(&ppuStack_d8);
      FUN_10a044790(&puStack_98);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      param_2 = alStack_158;
      FUN_10a3b78c4(param_2);
      if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_58) {
        return;
      }
      goto LAB_10a3c6ef0;
    }
    puVar10 = &UNK_10f653754;
  }
  else {
    puVar10 = &UNK_10f65373c;
  }
  FUN_10a3c6548(param_2,puVar10,&UNK_10f653736);
LAB_10a3c6ef0:
  ___stack_chk_fail();
  if ((long)plStack_d0 < 0) {
    __ZdlPv(ppppcStack_e0);
  }
  FUN_10a3b78c4(alStack_158);
  do {
    __Unwind_Resume(param_2);
  } while( true );
}



/* Entry: 10a3e4a34; end: 10a3e4aff;  */

void FUN_10a3e4a34(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_3 < *(undefined8 **)(param_2 + 0x1a0)) {
    plVar7 = *(long **)(param_2 + 0x198);
    if ((long)param_3 < 0) {
      do {
        plVar7 = (long *)*plVar7;
        bVar3 = param_3 != (undefined8 *)0xffffffffffffffff;
        param_3 = (undefined8 *)((long)param_3 + 1);
      } while (bVar3);
    }
    else if (param_3 != (undefined8 *)0x0) {
      uVar8 = (long)param_3 + 1;
      do {
        plVar7 = (long *)plVar7[1];
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
    func_0x00010a0d77bc(&uStack_30,plVar7[2]);
    param_1[1] = plStack_28;
    *param_1 = uStack_30;
    if (plStack_28 != (long *)0x0) {
      plVar7 = plStack_28 + 2;
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7 = plStack_28 + 1;
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    return;
  }
  plVar7 = (long *)&UNK_10f65474f;
  FUN_10a00946c();
  pplVar4 = &plStack_a0;
  plVar7[4] = 0;
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar6 = (long *)*param_3;
  uVar8 = param_3[1];
  plVar5 = plVar7;
  plVar10 = plVar6;
  if (((param_4 & 1) == 0) || (uVar8 == 0)) {
LAB_10a3e4c48:
    plVar6 = plVar10;
    if ((1 < (uint)param_4) && (uVar8 == 0)) {
      plVar6 = (long *)0x0;
      goto LAB_10a3e4c7c;
    }
  }
  else {
    plVar5 = plVar6;
    _memchr(plVar6,0x2e,uVar8);
    if (plVar5 == (long *)0x0 || (long)plVar5 - (long)plVar6 == -1) {
      if (((uint)param_4 < 2) && (uVar8 == 9)) {
        if (*plVar6 == 0x6e656e6f706d6f43 && (char)plVar6[1] == 't') goto LAB_10a3e4c5c;
LAB_10a3e4bac:
        uStack_90 = CONCAT17((char)uVar8,(undefined7)uStack_90);
      }
      else {
        if (0x7ffffffffffffff7 < uVar8) {
          func_0x000109ffde50();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3e4cc4);
          (*pcVar2)();
        }
        if (uVar8 < 0x17) goto LAB_10a3e4bac;
        plVar5 = (long *)0x19;
        if ((uVar8 | 7) != 0x17) {
          plVar5 = (long *)((uVar8 | 7) + 1);
        }
        pplVar4 = (long **)plVar5;
        __Znwm();
        uStack_90 = (ulong)plVar5 | 0x8000000000000000;
        plStack_a0 = (long *)pplVar4;
        uStack_98 = uVar8;
      }
      _memmove(pplVar4,plVar6,uVar8);
      *(undefined1 *)((long)pplVar4 + uVar8) = 0;
      plVar5 = &lStack_88;
      FUN_10a3e5e28(plVar5,&plStack_a0);
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        plVar5 = (long *)*plVar7;
        __ZdlPv(plVar5);
      }
      plVar7[1] = lStack_80;
      *plVar7 = lStack_88;
      plVar7[2] = lStack_78;
      if ((long)uStack_90 < 0) {
        plVar5 = plStack_a0;
        __ZdlPv(plStack_a0);
      }
      plVar10 = (long *)*plVar7;
      uVar8 = plVar7[1];
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        plVar10 = plVar7;
        uVar8 = (ulong)*(byte *)((long)plVar7 + 0x17);
      }
      goto LAB_10a3e4c48;
    }
  }
LAB_10a3e4c5c:
  FUN_10a3ca004();
  FUN_10a3ca840();
  func_0x000109887510();
  func_0x000109887bd0();
  plVar10 = plVar5;
LAB_10a3e4c7c:
  func_0x000107c2c4d8(plVar7,plVar10,plVar6);
  uVar8 = plVar7[1];
  plVar5 = (long *)*plVar7;
  if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)plVar7 + 0x17);
    plVar5 = plVar7;
  }
  plVar7[3] = (long)plVar5;
  plVar7[4] = uVar8;
  return;
}



/* Entry: 10a3e4b00; end: 10a3e4cfb;  */

void FUN_10a3e4b00(long *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pplVar2 = &plStack_70;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar4 = (long *)*param_2;
  uVar6 = param_2[1];
  plVar3 = param_1;
  plVar5 = plVar4;
  if (((param_3 & 1) == 0) || (uVar6 == 0)) {
LAB_10a3e4c48:
    plVar4 = plVar5;
    if ((1 < param_3) && (uVar6 == 0)) {
      plVar4 = (long *)0x0;
      goto LAB_10a3e4c7c;
    }
  }
  else {
    plVar3 = plVar4;
    _memchr(plVar4,0x2e,uVar6);
    if (plVar3 == (long *)0x0 || (long)plVar3 - (long)plVar4 == -1) {
      if ((param_3 < 2) && (uVar6 == 9)) {
        if (*plVar4 == 0x6e656e6f706d6f43 && (char)plVar4[1] == 't') goto LAB_10a3e4c5c;
LAB_10a3e4bac:
        uStack_60 = CONCAT17((char)uVar6,(undefined7)uStack_60);
      }
      else {
        if (0x7ffffffffffffff7 < uVar6) {
          func_0x000109ffde50();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3e4cc4);
          (*pcVar1)();
        }
        if (uVar6 < 0x17) goto LAB_10a3e4bac;
        plVar3 = (long *)0x19;
        if ((uVar6 | 7) != 0x17) {
          plVar3 = (long *)((uVar6 | 7) + 1);
        }
        pplVar2 = (long **)plVar3;
        __Znwm();
        uStack_60 = (ulong)plVar3 | 0x8000000000000000;
        plStack_70 = (long *)pplVar2;
        uStack_68 = uVar6;
      }
      _memmove(pplVar2,plVar4,uVar6);
      *(undefined1 *)((long)pplVar2 + uVar6) = 0;
      plVar3 = &lStack_58;
      FUN_10a3e5e28(plVar3,&plStack_70);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        plVar3 = (long *)*param_1;
        __ZdlPv(plVar3);
      }
      param_1[1] = lStack_50;
      *param_1 = lStack_58;
      param_1[2] = lStack_48;
      if ((long)uStack_60 < 0) {
        plVar3 = plStack_70;
        __ZdlPv(plStack_70);
      }
      plVar5 = (long *)*param_1;
      uVar6 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        plVar5 = param_1;
        uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      goto LAB_10a3e4c48;
    }
  }
LAB_10a3e4c5c:
  FUN_10a3ca004();
  FUN_10a3ca840();
  func_0x000109887510();
  func_0x000109887bd0();
  plVar5 = plVar3;
LAB_10a3e4c7c:
  func_0x000107c2c4d8(param_1,plVar5,plVar4);
  uVar6 = param_1[1];
  plVar3 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
    plVar3 = param_1;
  }
  param_1[3] = (long)plVar3;
  param_1[4] = uVar6;
  return;
}



/* Entry: 10a3e4cfc; end: 10a3e4fd7;  */

void FUN_10a3e4cfc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  iVar2 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
  FUN_10a3e4b00(auStack_e8,param_3,3);
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)(param_2 + 0x150);
  if (iVar2 < 0x157) {
    plVar7 = *(long **)(param_2 + 0x158);
    if (plVar7 != plVar1 && lStack_c8 != 0) {
      do {
        plVar6 = (long *)plVar7[2];
        (**(code **)(*plVar6 + 0x40))(plVar6,uStack_d0,lStack_c8);
        if (((ulong)plVar6 & 1) != 0) break;
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != plVar1);
    }
    if (plVar7 != plVar1) {
      lVar8 = 0;
      do {
        if (lVar8 == param_4) {
          FUN_10a3c759c(&plStack_a0,plVar7[2]);
          plStack_60 = plStack_a0;
          if (plStack_98 == (long *)0x0) {
LAB_10a3e4f04:
            *param_1 = plStack_60;
            param_1[1] = 0;
          }
          else {
            plVar1 = plStack_98 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            *param_1 = plStack_a0;
            param_1[1] = plStack_98;
            plVar1 = plStack_98 + 1;
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar7 = plStack_98;
            } while (cVar3 != '\0');
LAB_10a3e4ee4:
            if (lVar8 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          break;
        }
        plVar7 = (long *)plVar7[1];
        if (plVar7 != plVar1 && lStack_c8 != 0) {
          do {
            plVar6 = (long *)plVar7[2];
            (**(code **)(*plVar6 + 0x40))(plVar6,uStack_d0,lStack_c8);
            if (((ulong)plVar6 & 1) != 0) break;
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != plVar1);
        }
        lVar8 = lVar8 + 1;
      } while (plVar7 != plVar1);
    }
  }
  else {
    plStack_a0 = *(long **)(param_2 + 0x158);
    uStack_90 = uStack_d0;
    lStack_88 = lStack_c8;
    plStack_98 = plVar1;
    FUN_10a3fe20c(&plStack_a0);
    uStack_70 = uStack_d0;
    lStack_68 = lStack_c8;
    plStack_80 = plVar1;
    plStack_78 = plVar1;
    FUN_10a3fe20c(&plStack_80);
    plVar1 = plStack_80;
    plStack_b8 = plStack_98;
    plStack_c0 = plStack_a0;
    lStack_a8 = lStack_88;
    uStack_b0 = uStack_90;
    if (plStack_a0 != plStack_80) {
      lVar8 = param_4 + 1;
      plVar7 = plStack_a0;
LAB_10a3e4e2c:
      lVar8 = lVar8 + -1;
      if (lVar8 != 0) goto code_r0x00010a3e4e34;
      FUN_10a3c759c(&plStack_60,plVar7[2]);
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *param_1 = plStack_60;
        param_1[1] = plStack_58;
        plVar1 = plStack_58 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar7 = plStack_58;
        } while (cVar3 != '\0');
        goto LAB_10a3e4ee4;
      }
      goto LAB_10a3e4f04;
    }
  }
LAB_10a3e4f08:
  if ((param_1[1] != 0) && (*(long *)(param_1[1] + 8) != -1)) {
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    return;
  }
  __ZNSt3__19to_stringEm(&plStack_c0,param_4);
  FUN_109feb280(&plStack_a0,&UNK_10f654771,&plStack_c0);
  FUN_10a0029c0(&plStack_a0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e4f74);
  (*pcVar5)();
code_r0x00010a3e4e34:
  if (plVar7 != plStack_b8) {
    plStack_c0 = (long *)plVar7[1];
    FUN_10a3fe20c(&plStack_c0);
    plVar7 = plStack_c0;
  }
  if (plVar7 == plVar1) goto LAB_10a3e4f08;
  goto LAB_10a3e4e2c;
}



/* Entry: 10a3e4fd8; end: 10a3e51ef;  */

void FUN_10a3e4fd8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if (param_3[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_80 = 0;
    uStack_98 = 0;
    puStack_a0 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    uStack_90 = 0;
    uVar9 = *param_3;
    lVar6 = param_2;
    FUN_10a3ca004();
    FUN_10a3ca840();
    func_0x000109887510();
    func_0x000109887bd0();
    func_0x000107c2c4d8(&puStack_a0,lVar6,uVar9);
    uVar2 = uStack_98;
    ppuVar5 = (undefined1 **)puStack_a0;
    if (-1 < (long)uStack_90) {
      uVar2 = uStack_90 >> 0x38;
      ppuVar5 = &puStack_a0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    lVar6 = param_2 + 0x150;
    lVar10 = *(long *)(param_2 + 0x158);
    puStack_88 = (undefined1 *)ppuVar5;
    uStack_80 = uVar2;
    if ((lVar10 != lVar6) && (uVar2 != 0)) {
      do {
        plVar7 = *(long **)(lVar10 + 0x10);
        (**(code **)(*plVar7 + 0x40))(plVar7,ppuVar5,uVar2);
        if (((ulong)plVar7 & 1) != 0) break;
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 != lVar6);
    }
LAB_10a3e5168:
    if (lVar10 != lVar6) {
      FUN_10a3c759c(&uStack_70,*(undefined8 *)(lVar10 + 0x10));
      plStack_58 = plStack_68;
      uStack_60 = uStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3dd140(param_1,&uStack_60);
      if (plStack_58 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar7 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if ((lVar10 != lVar6) && (lVar10 = *(long *)(lVar10 + 8), lVar10 != lVar6 && uVar2 != 0)) {
        do {
          plVar7 = *(long **)(lVar10 + 0x10);
          (**(code **)(*plVar7 + 0x40))(plVar7,ppuVar5,uVar2);
          if (((ulong)plVar7 & 1) != 0) break;
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != lVar6);
      }
      goto LAB_10a3e5168;
    }
    if ((long)uStack_90 < 0) {
      __ZdlPv(puStack_a0);
    }
  }
  return;
}



/* Entry: 10a3e51f0; end: 10a3e52c3;  */

undefined *** FUN_10a3e51f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  code **ppcVar6;
  undefined8 extraout_x8;
  undefined ***extraout_x8_00;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  uVar5 = param_3;
  func_0x00010a0fda30();
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  pcStack_78 = FUN_10a0d4f18;
  ppuStack_70 = &PTR_DAT_110950c70;
  ppcVar6 = &pcStack_78;
  FUN_10a3e52c4(param_1,param_2,param_3,uVar2,uVar5,ppcVar6);
  pppuVar3 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __Unwind_Resume();
  if ((*(ushort *)(pppuVar3 + 0x23) >> 8 & 1) == 0) {
    FUN_10a3e5334(extraout_x8,pppuVar3[0x24]);
    FUN_10a3e4814(pppuVar3,extraout_x8,ppcVar6);
    return pppuVar3;
  }
  ppuVar4 = (undefined **)&UNK_10f654789;
  FUN_10a00946c();
  FUN_10a0d4f28(extraout_x8);
  __Unwind_Resume();
  FUN_10a3dd220();
  FUN_10a3ca004();
  FUN_10a3ca840();
  FUN_10a3fe274();
  *extraout_x8_00 = ppuVar4;
  ppuVar1 = (undefined **)0x28;
  __Znwm();
  *ppuVar1 = (undefined *)&PTR_FUN_110ba5328;
  ppuVar1[1] = (undefined *)0x0;
  ppuVar1[2] = (undefined *)0x0;
  ppuVar1[3] = (undefined *)ppuVar4;
  ppuVar1[4] = FUN_10a3df8cc;
  extraout_x8_00[1] = ppuVar1;
  ppuVar1 = (undefined **)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4 + 5;
  }
  FUN_10a10c460(extraout_x8_00,ppuVar1,ppuVar4);
  return extraout_x8_00;
}



/* Entry: 10a3e52c4; end: 10a3e5333;  */

undefined8 * FUN_10a3e52c4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 in_x4;
  undefined8 *extraout_x8;
  
  if ((*(ushort *)(param_2 + 0x23) >> 8 & 1) == 0) {
    FUN_10a3e5334(param_1,param_2[0x24]);
    FUN_10a3e4814(param_2,param_1,in_x4);
    return param_2;
  }
  puVar3 = &UNK_10f654789;
  FUN_10a00946c();
  FUN_10a0d4f28(param_1);
  __Unwind_Resume();
  FUN_10a3dd220();
  FUN_10a3ca004();
  FUN_10a3ca840();
  FUN_10a3fe274();
  *extraout_x8 = puVar3;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba5328;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar3;
  puVar2[4] = FUN_10a3df8cc;
  extraout_x8[1] = puVar2;
  puVar1 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3 + 0x28;
  }
  FUN_10a10c460(extraout_x8,puVar1,puVar3);
  return extraout_x8;
}



/* Entry: 10a3e5334; end: 10a3e539f;  */

long * FUN_10a3e5334(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a3ca004();
  FUN_10a3ca840();
  FUN_10a3fe274();
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba5328;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a10c460(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a3e53a0; end: 10a3e557b;  */

long * FUN_10a3e53a0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_2 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f6547ca);
  }
  else if ((*(ushort *)(param_1 + 0x118) >> 8 & 1) == 0) {
    (**(code **)(*param_2 + 0x48))(&plStack_50,param_2,param_1);
    plStack_38 = plStack_48;
    plStack_40 = plStack_50;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
    plVar1 = plStack_38;
    if (plStack_40 != (long *)0x0) {
      if (param_3 != 0) {
        lVar8 = param_2[8];
        lVar4 = param_2[9];
        plStack_60 = plStack_40;
        plStack_58 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar2 = plStack_38 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10a572464(param_3,lVar8,lVar4,&plStack_60);
        if (plVar1 != (long *)0x0) {
          plVar2 = plVar1 + 1;
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
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      plVar1 = plStack_40;
      (**(code **)(*plStack_40 + 0x98))(plStack_40);
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18) < 0x92) {
        FUN_10a3c6bf8(plVar1);
      }
      plVar2 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar3 = plStack_38 + 1;
        do {
          lVar8 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      return plVar1;
    }
    goto LAB_10a3e5548;
  }
  FUN_10a00946c(&UNK_10f654789);
LAB_10a3e5548:
  FUN_10a00946c(&UNK_10f6547f7);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3e5558);
  (*pcVar7)();
}



/* Entry: 10a3e557c; end: 10a3e576f;  */

undefined *** FUN_10a3e557c(undefined8 *param_1,long param_2,ulong param_3,undefined1 param_4)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined *extraout_x8;
  long lVar12;
  ulong *unaff_x20;
  ulong unaff_x21;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined2 uStack_38;
  undefined4 uStack_34;
  
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f654835);
  }
  else {
    unaff_x21 = param_3;
    if ((*(ushort *)(param_3 + 0x118) >> 3 & 1) == 0) {
      ppuStack_40 = &PTR_FUN_110bc7b80;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_f8 = *(undefined8 *)(param_2 + 0x120);
      ppuStack_1a8 = &PTR_FUN_110bf1728;
      ppuStack_1a0 = &PTR_DAT_110bf18e8;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_178 = 0x3f800000;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_150 = 0x3f800000;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0x3f800000;
      uStack_100 = 0x3f800000;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0x3f800000;
      uStack_a0 = 0x3f800000;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = 0x3f800000;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      uStack_f0 = param_4;
      FUN_10a0fff24(&ppuStack_1a8,param_3,&ppuStack_40);
      FUN_10a3e5770(param_3,&ppuStack_1a8,1);
      func_0x00010a0d77bc(&uStack_1c0);
      FUN_10a0c3500(uStack_1c0,param_2);
      FUN_10a57282c(&ppuStack_1a8);
      if (0x91 < *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18)) {
        ppuVar14 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)();
        puVar13 = *ppuVar14;
        *ppuVar14 = extraout_x8;
        FUN_10a5b44b8(extraout_x8 + 0x200);
        *ppuVar14 = puVar13;
      }
      param_1[1] = plStack_1b8;
      *param_1 = uStack_1c0;
      if (plStack_1b8 != (long *)0x0) {
        plVar1 = plStack_1b8 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar1 = plStack_1b8 + 1;
        do {
          lVar12 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
        }
      }
      pppuVar11 = &ppuStack_1a8;
      FUN_10a5716d0(pppuVar11);
      return pppuVar11;
    }
  }
  puVar13 = &UNK_10f65486b;
  FUN_10a00946c();
  *unaff_x20 = unaff_x21;
  func_0x00010a05253c(&uStack_1c0);
  FUN_10a5716d0(&ppuStack_1a8);
  __Unwind_Resume();
  plStack_218 = *(long **)(puVar13 + 0x48);
  uStack_220 = *(undefined8 *)(puVar13 + 0x40);
  lVar12 = param_2 + 0x88;
  func_0x00010a35bf90(lVar12,&uStack_220);
  puVar4 = (undefined8 *)((ulong)&uStack_220 | 8);
  puVar10 = &uStack_220;
  if (lVar12 != 0) {
    puVar4 = (undefined8 *)(lVar12 + 0x28);
    puVar10 = (undefined8 *)(lVar12 + 0x20);
  }
  pppuVar11 = *(undefined ****)(puVar13 + 0x120);
  FUN_10a3dd268(pppuVar11,*puVar10,*puVar4,puVar13 + 0x168);
  uVar5 = *(undefined8 *)(puVar13 + 0x40);
  uVar6 = *(undefined8 *)(puVar13 + 0x48);
  func_0x00010a0d77bc(&uStack_220);
  plVar1 = plStack_218;
  plStack_228 = plStack_218;
  uStack_230 = uStack_220;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  FUN_10a572464(param_2,uVar5,uVar6,&uStack_230);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar12 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar2 = plStack_218 + 1;
    do {
      lVar12 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uVar7 = *(ushort *)(pppuVar11 + 0x23);
  uVar3 = (*(ushort *)(puVar13 + 0x118) >> 4 & 1) << 4;
  *(ushort *)(pppuVar11 + 0x23) = uVar7 & 0xffe0 | uVar7 & 0xf | uVar3;
  *(ushort *)(pppuVar11 + 0x23) =
       uVar7 & 0xffe0 | uVar7 & 0xe | uVar3 | *(ushort *)(puVar13 + 0x118) & 1;
  ppuVar14 = pppuVar11[0x28];
  lVar12 = *(long *)(puVar13 + 0x140);
  func_0x00010a0d8ae0(lVar12);
  FUN_10a3e38dc(ppuVar14,lVar12 + 0x48);
  uStack_220 = *(undefined8 *)(*(long *)(puVar13 + 0x140) + 0x94);
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,
                                 *(undefined4 *)(*(long *)(puVar13 + 0x140) + 0x9c));
  FUN_10a3e3894(pppuVar11[0x28],&uStack_220);
  FUN_10a3e41f0(pppuVar11 + 0x26,*(undefined8 *)(puVar13 + 0x130),*(undefined8 *)(puVar13 + 0x138));
  for (puVar15 = *(undefined **)(puVar13 + 0x158); puVar15 != puVar13 + 0x150;
      puVar15 = *(undefined **)(puVar15 + 8)) {
    FUN_10a3e53a0(pppuVar11,*(undefined8 *)(puVar15 + 0x10),param_2);
  }
  if ((param_3 & 1) != 0) {
    for (puVar15 = *(undefined **)(puVar13 + 0x198); puVar15 != puVar13 + 400;
        puVar15 = *(undefined **)(puVar15 + 8)) {
      FUN_10a3e5770(*(undefined8 *)(puVar15 + 0x10),param_2,1);
      func_0x00010a0d77bc(&uStack_220);
      FUN_10a0c3500(uStack_220,pppuVar11);
      plVar1 = plStack_218;
      if (plStack_218 != (long *)0x0) {
        plVar2 = plStack_218 + 1;
        do {
          lVar12 = *plVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return pppuVar11;
}



/* Entry: 10a3e5770; end: 10a3e59c7;  */

long FUN_10a3e5770(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plStack_58 = *(long **)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  lVar10 = param_2 + 0x88;
  func_0x00010a35bf90(lVar10,&uStack_60);
  puVar3 = (undefined8 *)((ulong)&uStack_60 | 8);
  puVar8 = &uStack_60;
  if (lVar10 != 0) {
    puVar3 = (undefined8 *)(lVar10 + 0x28);
    puVar8 = (undefined8 *)(lVar10 + 0x20);
  }
  lVar10 = *(long *)(param_1 + 0x120);
  FUN_10a3dd268(lVar10,*puVar8,*puVar3,param_1 + 0x168);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010a0d77bc(&uStack_60);
  plVar9 = plStack_58;
  plStack_68 = plStack_58;
  uStack_70 = uStack_60;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  FUN_10a572464(param_2,uVar13,uVar4,&uStack_70);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uVar5 = *(ushort *)(lVar10 + 0x118);
  uVar2 = (*(ushort *)(param_1 + 0x118) >> 4 & 1) << 4;
  *(ushort *)(lVar10 + 0x118) = uVar5 & 0xffe0 | uVar5 & 0xf | uVar2;
  *(ushort *)(lVar10 + 0x118) =
       uVar5 & 0xffe0 | uVar5 & 0xe | uVar2 | *(ushort *)(param_1 + 0x118) & 1;
  uVar13 = *(undefined8 *)(lVar10 + 0x140);
  lVar11 = *(long *)(param_1 + 0x140);
  func_0x00010a0d8ae0(lVar11);
  FUN_10a3e38dc(uVar13,lVar11 + 0x48);
  uStack_60 = *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x94);
  plStack_58 = (long *)CONCAT44(plStack_58._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x140) + 0x9c))
  ;
  FUN_10a3e3894(*(undefined8 *)(lVar10 + 0x140),&uStack_60);
  FUN_10a3e41f0(lVar10 + 0x130,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138));
  for (lVar11 = *(long *)(param_1 + 0x158); lVar11 != param_1 + 0x150;
      lVar11 = *(long *)(lVar11 + 8)) {
    FUN_10a3e53a0(lVar10,*(undefined8 *)(lVar11 + 0x10),param_2);
  }
  if ((param_3 & 1) != 0) {
    for (lVar11 = *(long *)(param_1 + 0x198); lVar11 != param_1 + 400;
        lVar11 = *(long *)(lVar11 + 8)) {
      FUN_10a3e5770(*(undefined8 *)(lVar11 + 0x10),param_2,1);
      func_0x00010a0d77bc(&uStack_60);
      FUN_10a0c3500(uStack_60,lVar10);
      plVar9 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar12 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
  }
  return lVar10;
}



/* Entry: 10a3e59c8; end: 10a3e59ef;  */

undefined *** FUN_10a3e59c8(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined *extraout_x8;
  long lVar12;
  ulong *unaff_x20;
  undefined *puVar13;
  ulong unaff_x21;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uStack_230;
  long *plStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined2 uStack_38;
  undefined4 uStack_34;
  
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f654835);
  }
  else {
    unaff_x21 = param_3;
    if ((*(ushort *)(param_3 + 0x118) >> 3 & 1) == 0) {
      ppuStack_40 = &PTR_FUN_110bc7b80;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_f8 = *(undefined8 *)(param_2 + 0x120);
      ppuStack_1a8 = &PTR_FUN_110bf1728;
      ppuStack_1a0 = &PTR_DAT_110bf18e8;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_178 = 0x3f800000;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_150 = 0x3f800000;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0x3f800000;
      uStack_100 = 0x3f800000;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0x3f800000;
      uStack_a0 = 0x3f800000;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = 0x3f800000;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      FUN_10a0fff24(&ppuStack_1a8,param_3,&ppuStack_40);
      FUN_10a3e5770(param_3,&ppuStack_1a8,1);
      func_0x00010a0d77bc(&uStack_1c0);
      FUN_10a0c3500(uStack_1c0,param_2);
      FUN_10a57282c(&ppuStack_1a8);
      if (0x91 < *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18)) {
        ppuVar14 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)();
        puVar13 = *ppuVar14;
        *ppuVar14 = extraout_x8;
        FUN_10a5b44b8(extraout_x8 + 0x200);
        *ppuVar14 = puVar13;
      }
      param_1[1] = plStack_1b8;
      *param_1 = uStack_1c0;
      if (plStack_1b8 != (long *)0x0) {
        plVar1 = plStack_1b8 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar1 = plStack_1b8 + 1;
        do {
          lVar12 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
        }
      }
      pppuVar11 = &ppuStack_1a8;
      FUN_10a5716d0(pppuVar11);
      return pppuVar11;
    }
  }
  puVar13 = &UNK_10f65486b;
  FUN_10a00946c();
  *unaff_x20 = unaff_x21;
  func_0x00010a05253c(&uStack_1c0);
  FUN_10a5716d0(&ppuStack_1a8);
  __Unwind_Resume();
  plStack_218 = *(long **)(puVar13 + 0x48);
  uStack_220 = *(undefined8 *)(puVar13 + 0x40);
  lVar12 = param_2 + 0x88;
  func_0x00010a35bf90(lVar12,&uStack_220);
  puVar4 = (undefined8 *)((ulong)&uStack_220 | 8);
  puVar10 = &uStack_220;
  if (lVar12 != 0) {
    puVar4 = (undefined8 *)(lVar12 + 0x28);
    puVar10 = (undefined8 *)(lVar12 + 0x20);
  }
  pppuVar11 = *(undefined ****)(puVar13 + 0x120);
  FUN_10a3dd268(pppuVar11,*puVar10,*puVar4,puVar13 + 0x168);
  uVar5 = *(undefined8 *)(puVar13 + 0x40);
  uVar6 = *(undefined8 *)(puVar13 + 0x48);
  func_0x00010a0d77bc(&uStack_220);
  plVar1 = plStack_218;
  plStack_228 = plStack_218;
  uStack_230 = uStack_220;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  FUN_10a572464(param_2,uVar5,uVar6,&uStack_230);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar12 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    plVar2 = plStack_218 + 1;
    do {
      lVar12 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uVar7 = *(ushort *)(pppuVar11 + 0x23);
  uVar3 = (*(ushort *)(puVar13 + 0x118) >> 4 & 1) << 4;
  *(ushort *)(pppuVar11 + 0x23) = uVar7 & 0xffe0 | uVar7 & 0xf | uVar3;
  *(ushort *)(pppuVar11 + 0x23) =
       uVar7 & 0xffe0 | uVar7 & 0xe | uVar3 | *(ushort *)(puVar13 + 0x118) & 1;
  ppuVar14 = pppuVar11[0x28];
  lVar12 = *(long *)(puVar13 + 0x140);
  func_0x00010a0d8ae0(lVar12);
  FUN_10a3e38dc(ppuVar14,lVar12 + 0x48);
  uStack_220 = *(undefined8 *)(*(long *)(puVar13 + 0x140) + 0x94);
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,
                                 *(undefined4 *)(*(long *)(puVar13 + 0x140) + 0x9c));
  FUN_10a3e3894(pppuVar11[0x28],&uStack_220);
  FUN_10a3e41f0(pppuVar11 + 0x26,*(undefined8 *)(puVar13 + 0x130),*(undefined8 *)(puVar13 + 0x138));
  for (puVar15 = *(undefined **)(puVar13 + 0x158); puVar15 != puVar13 + 0x150;
      puVar15 = *(undefined **)(puVar15 + 8)) {
    FUN_10a3e53a0(pppuVar11,*(undefined8 *)(puVar15 + 0x10),param_2);
  }
  if ((param_3 & 1) != 0) {
    for (puVar15 = *(undefined **)(puVar13 + 0x198); puVar15 != puVar13 + 400;
        puVar15 = *(undefined **)(puVar15 + 8)) {
      FUN_10a3e5770(*(undefined8 *)(puVar15 + 0x10),param_2,1);
      func_0x00010a0d77bc(&uStack_220);
      FUN_10a0c3500(uStack_220,pppuVar11);
      plVar1 = plStack_218;
      if (plStack_218 != (long *)0x0) {
        plVar2 = plStack_218 + 1;
        do {
          lVar12 = *plVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return pppuVar11;
}



/* Entry: 10a3e59f0; end: 10a3e5c1f;  */

undefined *** FUN_10a3e59f0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined *extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    FUN_10a00946c(&UNK_10f6548ac);
  }
  else {
    unaff_x21 = param_3;
    if ((*(ushort *)(param_3 + 0x118) >> 3 & 1) == 0) {
      uStack_108 = *(undefined8 *)(param_2 + 0x120);
      ppuStack_1b8 = &PTR_FUN_110bf1728;
      ppuStack_1b0 = &PTR_DAT_110bf18e8;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_188 = 0x3f800000;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_160 = 0x3f800000;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0x3f800000;
      uStack_110 = 0x3f800000;
      uStack_100 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0x3f800000;
      uStack_b0 = 0x3f800000;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_70 = 0x3f800000;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = 0;
      FUN_10a571798(&ppuStack_1b8,&PTR_DAT_110bd17d8,*(undefined8 *)(param_3 + 0x40),
                    *(undefined8 *)(param_3 + 0x48));
      for (lVar7 = *(long *)(param_3 + 0x158); lVar7 != param_3 + 0x150;
          lVar7 = *(long *)(lVar7 + 8)) {
        FUN_10a571798(&ppuStack_1b8,&PTR_DAT_110bd17d8,
                      *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x40),
                      *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x48));
      }
      FUN_10a3e5770(param_3,&ppuStack_1b8,0);
      func_0x00010a0d77bc(&uStack_1d0);
      FUN_10a0c3500(uStack_1d0,param_2);
      FUN_10a57282c(&ppuStack_1b8);
      if (0x91 < *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18)) {
        ppuVar4 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)();
        puVar6 = *ppuVar4;
        *ppuVar4 = extraout_x8;
        FUN_10a5b44b8(extraout_x8 + 0x200);
        *ppuVar4 = puVar6;
      }
      param_1[1] = plStack_1c8;
      *param_1 = uStack_1d0;
      if (plStack_1c8 != (long *)0x0) {
        plVar1 = plStack_1c8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = plStack_1c8 + 1;
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
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
        }
      }
      pppuVar5 = &ppuStack_1b8;
      FUN_10a5716d0(pppuVar5);
      return pppuVar5;
    }
  }
  puVar6 = &UNK_10f6548df;
  FUN_10a00946c();
  *unaff_x20 = unaff_x21;
  func_0x00010a05253c(&uStack_1d0);
  FUN_10a5716d0(&ppuStack_1b8);
  __Unwind_Resume();
  return (undefined ***)
         (ulong)(0x4c < *(int *)(*(long *)(*(long *)(puVar6 + 0x120) + 0xa20) + 0x18));
}



/* Entry: 10a3e5c20; end: 10a3e5c4f;  */

bool FUN_10a3e5c20(long param_1)

{
  return 0x4c < *(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18);
}



/* Entry: 10a3e5c50; end: 10a3e5ccf;  */

void FUN_10a3e5c50(long *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* Entry: 10a3e5cd0; end: 10a3e5e27;  */

void FUN_10a3e5cd0(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  long *plStack_48;
  
  bVar3 = *(byte *)((long)param_3 + 0x17);
  uVar1 = param_3[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (uVar1 != 0) {
    plVar2 = (long *)*param_3;
    if (-1 < (char)bVar3) {
      plVar2 = param_3;
    }
    plVar6 = plVar2;
    _memchr(plVar2,0x2e,uVar1);
    if (plVar6 != (long *)0x0 && (long)plVar6 - (long)plVar2 != -1) {
      lStack_60 = (long)plVar2;
      uStack_58 = uVar1;
      FUN_10a3e51f0(&lStack_50,param_2,&lStack_60);
      goto LAB_10a3e5d9c;
    }
  }
  FUN_10a3e5e28(&pppuStack_88,param_3);
  uStack_68 = uStack_80;
  pppuStack_70 = pppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_68 = (ulong)bStack_71;
    pppuStack_70 = &pppuStack_88;
  }
  FUN_10a3e51f0(&lStack_50,param_2,&pppuStack_70);
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppuStack_88);
  }
LAB_10a3e5d9c:
  *(undefined1 *)(lStack_50 + 8) = 1;
  *param_1 = lStack_50;
  param_1[1] = (long)plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a3e5e28; end: 10a3e5ed3;  */

void FUN_10a3e5e28(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  char cStack_21;
  
  cStack_21 = '\n';
  uStack_30 = 0x2e74;
  uStack_38 = 0x6e656e6f706d6f43;
  uStack_2e = 0;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  puVar3 = &uStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 10a3e5ed4; end: 10a3e6087;  */

long FUN_10a3e5ed4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_d0 = param_2[1];
  puStack_d8 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_d0 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_d8 = param_2;
  }
  iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x120) + 0xa20) + 0x18);
  FUN_10a3e4b00(auStack_c8,&puStack_d8,3);
  lVar1 = param_1 + 0x150;
  if (iVar2 < 0x157) {
    lVar5 = *(long *)(param_1 + 0x158);
    if ((lVar5 != lVar1) && (lStack_a8 != 0)) {
      do {
        plVar3 = *(long **)(lVar5 + 0x10);
        (**(code **)(*plVar3 + 0x40))(plVar3,uStack_b0,lStack_a8);
        if (((ulong)plVar3 & 1) != 0) break;
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar1);
    }
    if (lVar5 != lVar1) {
      lVar4 = 0;
      do {
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 != lVar1 && lStack_a8 != 0) {
          do {
            plVar3 = *(long **)(lVar5 + 0x10);
            (**(code **)(*plVar3 + 0x40))(plVar3,uStack_b0,lStack_a8);
            if (((ulong)plVar3 & 1) != 0) break;
            lVar5 = *(long *)(lVar5 + 8);
          } while (lVar5 != lVar1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar1);
      goto LAB_10a3e603c;
    }
  }
  else {
    lStack_80 = *(long *)(param_1 + 0x158);
    uStack_70 = uStack_b0;
    lStack_68 = lStack_a8;
    lStack_78 = lVar1;
    FUN_10a3fe20c(&lStack_80);
    uStack_50 = uStack_b0;
    lStack_48 = lStack_a8;
    lStack_60 = lVar1;
    lStack_58 = lVar1;
    FUN_10a3fe20c(&lStack_60);
    lVar1 = lStack_60;
    lStack_98 = lStack_78;
    lStack_a0 = lStack_80;
    lStack_88 = lStack_68;
    uStack_90 = uStack_70;
    if (lStack_80 != lStack_60) {
      lVar4 = 0;
      lVar5 = lStack_80;
      do {
        if (lVar5 != lStack_98) {
          lStack_a0 = *(long *)(lVar5 + 8);
          FUN_10a3fe20c(&lStack_a0);
          lVar5 = lStack_a0;
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar1);
      goto LAB_10a3e603c;
    }
  }
  lVar4 = 0;
LAB_10a3e603c:
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  return lVar4;
}



/* Entry: 10a3e6088; end: 10a3e60d3;  */

void FUN_10a3e6088(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_3[1];
  puStack_20 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_3 + 0x17);
    puStack_20 = param_3;
  }
  FUN_10a3e4cfc(param_1,param_2,&puStack_20,0);
  return;
}



/* Entry: 10a3e60d4; end: 10a3e62a3;  */

void FUN_10a3e60d4(undefined1 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plStack_88 = (long *)(long)*(char *)((long)param_3 + 0x17);
  if ((long)plStack_88 < 0) {
    plStack_88 = (long *)param_3[1];
    if (plStack_88 == (long *)0x0) goto LAB_10a3e61cc;
    iVar7 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
    param_3 = (long *)*param_3;
  }
  else {
    if (*(char *)((long)param_3 + 0x17) == '\0') {
LAB_10a3e61cc:
      *param_1 = 0;
      param_1[0x10] = 0;
      return;
    }
    iVar7 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
  }
  plStack_90 = param_3;
  FUN_10a3e4b00(auStack_b8,&plStack_90,1);
  *param_1 = 0;
  param_1[0x10] = 0;
  plVar1 = (long *)(param_2 + 0x150);
  if (iVar7 < 0x157) {
    plVar6 = *(long **)(param_2 + 0x158);
    if ((plVar6 != plVar1) && (lStack_98 != 0)) {
      do {
        plVar4 = (long *)plVar6[2];
        (**(code **)(*plVar4 + 0x40))(plVar4,uStack_a0,lStack_98);
        if (((ulong)plVar4 & 1) != 0) break;
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != plVar1);
    }
    if (plVar6 == plVar1) goto LAB_10a3e6260;
    FUN_10a3c759c(&plStack_90,plVar6[2]);
    FUN_10a3fe428(param_1,plStack_90,plStack_88);
    if (plStack_88 == (long *)0x0) goto LAB_10a3e6260;
    plVar1 = plStack_88 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_88;
    } while (cVar2 != '\0');
  }
  else {
    plStack_90 = *(long **)(param_2 + 0x158);
    uStack_80 = uStack_a0;
    lStack_78 = lStack_98;
    plStack_88 = plVar1;
    FUN_10a3fe20c(&plStack_90);
    uStack_60 = uStack_a0;
    lStack_58 = lStack_98;
    plStack_70 = plVar1;
    plStack_68 = plVar1;
    FUN_10a3fe20c(&plStack_70);
    if (plStack_90 == plStack_70) goto LAB_10a3e6260;
    FUN_10a3c759c(&uStack_50,plStack_90[2]);
    FUN_10a3fe428(param_1,uStack_50,plStack_48);
    if (plStack_48 == (long *)0x0) goto LAB_10a3e6260;
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_48;
    } while (cVar2 != '\0');
  }
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a3e6260:
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return;
}



/* Entry: 10a3e62a4; end: 10a3e65b7;  */

void FUN_10a3e62a4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plStack_b8 = (long *)(long)*(char *)((long)param_3 + 0x17);
  if ((long)plStack_b8 < 0) {
    plStack_b8 = (long *)param_3[1];
    if (plStack_b8 == (long *)0x0) goto LAB_10a3e6430;
    iVar7 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
    param_3 = (long *)*param_3;
  }
  else {
    if (*(char *)((long)param_3 + 0x17) == '\0') {
LAB_10a3e6430:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    iVar7 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
  }
  plStack_c0 = param_3;
  FUN_10a3e4b00(auStack_108,&plStack_c0,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (long *)(param_2 + 0x150);
  if (iVar7 < 0x157) {
    plVar8 = *(long **)(param_2 + 0x158);
    if ((plVar8 != plVar1) && (lStack_e8 != 0)) {
      do {
        plVar5 = (long *)plVar8[2];
        (**(code **)(*plVar5 + 0x40))(plVar5,uStack_f0,lStack_e8);
        if (((ulong)plVar5 & 1) != 0) break;
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != plVar1);
    }
LAB_10a3e6424:
    if (plVar8 != plVar1) {
      FUN_10a3c759c(&plStack_e0,plVar8[2]);
      plStack_b8 = plStack_d8;
      plStack_c0 = plStack_e0;
      if (plStack_d8 != (long *)0x0) {
        plVar5 = plStack_d8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3dd140(param_1,&plStack_c0);
      if (plStack_b8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
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
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if ((plVar8 != plVar1) && (plVar8 = (long *)plVar8[1], plVar8 != plVar1 && lStack_e8 != 0)) {
        do {
          plVar5 = (long *)plVar8[2];
          (**(code **)(*plVar5 + 0x40))(plVar5,uStack_f0,lStack_e8);
          if (((ulong)plVar5 & 1) != 0) break;
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != plVar1);
      }
      goto LAB_10a3e6424;
    }
  }
  else {
    plStack_c0 = *(long **)(param_2 + 0x158);
    uStack_b0 = uStack_f0;
    lStack_a8 = lStack_e8;
    plStack_b8 = plVar1;
    FUN_10a3fe20c(&plStack_c0);
    uStack_90 = uStack_f0;
    lStack_88 = lStack_e8;
    plStack_a0 = plVar1;
    plStack_98 = plVar1;
    FUN_10a3fe20c(&plStack_a0);
    plVar1 = plStack_a0;
    plStack_d8 = plStack_b8;
    lStack_c8 = lStack_a8;
    uStack_d0 = uStack_b0;
    plStack_e0 = plStack_c0;
    while (plStack_e0 != plVar1) {
      FUN_10a3c759c(&uStack_80,plStack_e0[2]);
      plStack_68 = plStack_78;
      uStack_70 = uStack_80;
      if (plStack_78 != (long *)0x0) {
        plVar8 = plStack_78 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3dd140(param_1,&uStack_70);
      if (plStack_68 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar5 = plStack_78 + 1;
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_e0 != plStack_d8) {
        plStack_e0 = (long *)plStack_e0[1];
        FUN_10a3fe20c(&plStack_e0);
      }
    }
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  return;
}



/* Entry: 10a3e65b8; end: 10a3e6833;  */

void FUN_10a3e65b8(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_10a3e6834();
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar6 = &uStack_78;
  lVar8 = param_3;
  FUN_10a3e687c(param_3,puVar6);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  iVar2 = *(int *)(*(long *)(*(long *)(param_2 + 0x120) + 0xa20) + 0x18);
  if ((param_7 & 1) == 0) {
    param_6 = 0xffffffffffffffff;
  }
  if ((param_5 & 0x101) == 0x101) {
    lVar12 = param_2;
    if (0x164 < iVar2) goto LAB_10a3e666c;
    if (param_6 != 0) {
      param_6 = param_6 - 1;
      goto LAB_10a3e666c;
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 0x188);
LAB_10a3e666c:
    uVar7 = (ulong)((param_5 & 0x101) != 0x101);
    if (uVar7 <= param_6 && lVar12 != 0) {
      lVar10 = 0;
      do {
        if (((param_4 & 0x101) != 0x101) || ((*(ushort *)(lVar12 + 0x118) & 0x13) == 0)) {
          for (lVar9 = *(long *)(lVar12 + 0x158); lVar9 != lVar12 + 0x150;
              lVar9 = *(long *)(lVar9 + 8)) {
            plVar11 = *(long **)(lVar9 + 0x10);
            if ((((iVar2 < 0x157) || ((*(ushort *)(plVar11 + 0x30) >> 8 & 1) == 0)) &&
                (((param_4 & 0x101) != 0x101 ||
                 (plVar5 = plVar11, (**(code **)(*plVar11 + 0x60))(), (int)plVar5 != 0)))) &&
               ((lVar10 = lVar10 + 1, uVar1 == 0 ||
                (plVar5 = plVar11, (**(code **)(*plVar11 + 0x40))(plVar11,lVar8,puVar6),
                ((ulong)plVar5 & 1) != 0)))) goto LAB_10a3e6738;
          }
        }
        lVar12 = *(long *)(lVar12 + 0x188);
        uVar7 = uVar7 + 1;
      } while (lVar12 != 0 && uVar7 <= param_6);
      goto LAB_10a3e6734;
    }
  }
  lVar10 = 0;
LAB_10a3e6734:
  plVar11 = (long *)0x0;
LAB_10a3e6738:
  FUN_10a3e6998(*(long *)(param_2 + 0x120) + 0xe58,
                *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x120) + 0x850) + 0x2c),lVar10);
  if (plVar11 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    FUN_10a3c759c(&uStack_90,plVar11);
    param_1[1] = plStack_88;
    *param_1 = uStack_90;
    if (plStack_88 == (long *)0x0) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      plVar11 = plStack_88 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined1 *)(param_1 + 2) = 1;
      plVar11 = plStack_88 + 1;
      do {
        lVar8 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  return;
}



/* Entry: 10a3e6834; end: 10a3e687b;  */

undefined1  [16] FUN_10a3e6834(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((*(ushort *)(param_1 + 0x118) >> 5 & 1) == 0) {
    FUN_10a00946c(&UNK_10f65491d);
  }
  else if ((*(ushort *)(param_1 + 0x118) >> 3 & 1) == 0) {
    if (*(long *)(param_1 + 0x120) != 0) {
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = param_1;
      return auVar5;
    }
    goto LAB_10a3e6870;
  }
  FUN_10a00946c(&UNK_10f654946);
LAB_10a3e6870:
  plVar1 = (long *)&UNK_10f654965;
  FUN_10a00946c();
  plVar3 = (long *)*plVar1;
  uVar4 = plVar1[1];
  if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
    plVar3 = plVar1;
    uVar4 = (ulong)*(byte *)((long)plVar1 + 0x17);
  }
  if ((uVar4 != 0) &&
     (plVar2 = plVar3, _memchr(plVar3,0x2e,uVar4),
     plVar2 == (long *)0x0 || (long)plVar2 - (long)plVar3 == -1)) {
    if ((uVar4 == 9) && (*plVar3 == 0x6e656e6f706d6f43 && (char)plVar3[1] == 't')) {
      uVar4 = 9;
    }
    else {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        param_2[1] = 10;
        plVar3 = (long *)*param_2;
      }
      else {
        *(undefined1 *)((long)param_2 + 0x17) = 10;
        plVar3 = param_2;
      }
      *(undefined2 *)(plVar3 + 1) = 0x2e74;
      *plVar3 = 0x6e656e6f706d6f43;
      *(undefined1 *)((long)plVar3 + 10) = 0;
      uVar4 = plVar1[1];
      plVar3 = (long *)*plVar1;
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)plVar1 + 0x17);
        plVar3 = plVar1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,plVar3,uVar4);
      plVar3 = (long *)*param_2;
      uVar4 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        plVar3 = param_2;
        uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
    }
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10a3e687c; end: 10a3e6997;  */

undefined1  [16] FUN_10a3e687c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  plVar2 = (long *)*param_1;
  uVar3 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if ((uVar3 != 0) &&
     (plVar1 = plVar2, _memchr(plVar2,0x2e,uVar3),
     plVar1 == (long *)0x0 || (long)plVar1 - (long)plVar2 == -1)) {
    if ((uVar3 == 9) && (*plVar2 == 0x6e656e6f706d6f43 && (char)plVar2[1] == 't')) {
      uVar3 = 9;
    }
    else {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        param_2[1] = 10;
        plVar2 = (long *)*param_2;
      }
      else {
        *(undefined1 *)((long)param_2 + 0x17) = 10;
        plVar2 = param_2;
      }
      *(undefined2 *)(plVar2 + 1) = 0x2e74;
      *plVar2 = 0x6e656e6f706d6f43;
      *(undefined1 *)((long)plVar2 + 10) = 0;
      uVar3 = param_1[1];
      plVar2 = (long *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
        plVar2 = param_1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,plVar2,uVar3);
      plVar2 = (long *)*param_2;
      uVar3 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 10a3e6998; end: 10a3e69df;  */

void FUN_10a3e6998(uint *param_1,uint param_2,long param_3)

{
  uint *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  
  if (0x3b < param_2) {
    if (*param_1 == param_2) {
      lVar2 = *(long *)(param_1 + 2);
    }
    else {
      lVar2 = 0;
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    *(long *)(param_1 + 2) = lVar2 + param_3;
    if ((1000 < (ulong)(lVar2 + param_3)) && ((param_1[4] & 1) == 0)) {
      *(undefined1 *)(param_1 + 4) = 1;
      puVar1 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((999999999 < (long)puVar1 - *(long *)(param_1 + 6)) &&
         (*(uint **)(param_1 + 6) = puVar1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
        func_0x00010ae06f08(1,2,&UNK_10f655e47,&UNK_10f655e89,0x2c,&UNK_10f655eda,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 2));
      }
      return;
    }
  }
  return;
}



/* Entry: 10a3e69e0; end: 10a3e6c9f;  */

void FUN_10a3e69e0(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  FUN_10a3e6834();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a3e6ca0(param_1,0x20);
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  puVar7 = &uStack_98;
  lVar5 = param_3;
  FUN_10a3e687c(param_3,puVar7);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  lVar8 = *(long *)(param_2 + 0x120);
  iVar2 = *(int *)(*(long *)(lVar8 + 0xa20) + 0x18);
  if ((param_7 & 1) == 0) {
    param_6 = 0xffffffffffffffff;
  }
  if ((param_5 & 0x101) == 0x101) {
    lVar13 = param_2;
    if (iVar2 < 0x165) {
      if (param_6 == 0) {
        lVar11 = 0;
        goto LAB_10a3e6bfc;
      }
      param_6 = param_6 - 1;
    }
  }
  else {
    lVar13 = *(long *)(param_2 + 0x188);
  }
  lVar11 = 0;
  uVar10 = (ulong)((param_5 & 0x101) != 0x101);
  if ((uVar10 <= param_6) && (lVar13 != 0)) {
    lVar11 = 0;
    do {
      if (((param_4 & 0x101) != 0x101) || ((*(ushort *)(lVar13 + 0x118) & 0x13) == 0)) {
        for (lVar8 = *(long *)(lVar13 + 0x158); lVar8 != lVar13 + 0x150;
            lVar8 = *(long *)(lVar8 + 8)) {
          plVar12 = *(long **)(lVar8 + 0x10);
          if ((((iVar2 < 0x157) || ((*(ushort *)(plVar12 + 0x30) >> 8 & 1) == 0)) &&
              (((param_4 & 0x101) != 0x101 ||
               (plVar6 = plVar12, (**(code **)(*plVar12 + 0x60))(), (int)plVar6 != 0)))) &&
             ((lVar11 = lVar11 + 1, uVar1 == 0 ||
              (plVar6 = plVar12, (**(code **)(*plVar12 + 0x40))(plVar12,lVar5,puVar7),
              (int)plVar6 != 0)))) {
            FUN_10a3c759c(&uStack_80,plVar12);
            plStack_68 = plStack_78;
            uStack_70 = uStack_80;
            if (plStack_78 != (long *)0x0) {
              plVar12 = plStack_78 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *plVar12 = *plVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_10a3dd140(param_1,&uStack_70);
            if (plStack_68 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            plVar12 = plStack_78;
            if (plStack_78 != (long *)0x0) {
              plVar6 = plStack_78 + 1;
              do {
                lVar9 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_78 + 0x10))(plStack_78);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
        }
      }
      lVar13 = *(long *)(lVar13 + 0x188);
      uVar10 = uVar10 + 1;
    } while (lVar13 != 0 && uVar10 <= param_6);
    lVar8 = *(long *)(param_2 + 0x120);
  }
LAB_10a3e6bfc:
  FUN_10a3e6998(lVar8 + 0xe58,*(undefined4 *)(*(long *)(lVar8 + 0x850) + 0x2c),lVar11);
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 10a3e6ca0; end: 10a3e6d2f;  */

void FUN_10a3e6ca0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_10a3ef8bc();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a3ef8f0(&lStack_58);
  }
  return;
}



/* Entry: 10a3e6d30; end: 10a3e706f;  */

void FUN_10a3e6d30(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_10a3e6834();
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar7 = &uStack_78;
  lVar8 = param_3;
  FUN_10a3e687c(param_3,puVar7);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  lVar14 = *(long *)(param_2 + 0x120);
  iVar2 = *(int *)(*(long *)(lVar14 + 0xa20) + 0x18);
  if ((param_7 & 1) == 0) {
    param_6 = 0xffffffffffffffff;
  }
  *(undefined8 *)(lVar14 + 0xe48) = *(undefined8 *)(lVar14 + 0xe40);
  if ((param_5 & 0x101) == 0x101) {
    FUN_10a3fe4a4(lVar14 + 0xe40);
  }
  else {
    for (lVar13 = *(long *)(param_2 + 0x198); lVar13 != param_2 + 400;
        lVar13 = *(long *)(lVar13 + 8)) {
      FUN_10a3fe4a4(lVar14 + 0xe40,*(undefined8 *)(lVar13 + 0x10));
    }
  }
  if ((*(long *)(lVar14 + 0xe40) == *(long *)(lVar14 + 0xe48)) ||
     (uStack_b0 = (ulong)((param_5 & 0x101) != 0x101), param_6 < uStack_b0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar10 = 0;
    uStack_b8 = *(long *)(lVar14 + 0xe48) - *(long *)(lVar14 + 0xe40) >> 3;
    do {
      do {
        if ((ulong)(*(long *)(lVar14 + 0xe48) - *(long *)(lVar14 + 0xe40) >> 3) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e703c);
          (*pcVar5)();
        }
        lVar9 = *(long *)(*(long *)(lVar14 + 0xe40) + uVar10 * 8);
        if (((param_4 & 0x101) != 0x101) || ((*(ushort *)(lVar9 + 0x118) & 0x13) == 0)) {
          for (lVar11 = *(long *)(lVar9 + 0x158); lVar11 != lVar9 + 0x150;
              lVar11 = *(long *)(lVar11 + 8)) {
            plVar12 = *(long **)(lVar11 + 0x10);
            if ((((iVar2 < 0x157) || ((*(ushort *)(plVar12 + 0x30) >> 8 & 1) == 0)) &&
                (((param_4 & 0x101) != 0x101 ||
                 (plVar6 = plVar12, (**(code **)(*plVar12 + 0x60))(), (int)plVar6 != 0)))) &&
               ((lVar13 = lVar13 + 1, uVar1 == 0 ||
                (plVar6 = plVar12, (**(code **)(*plVar12 + 0x40))(plVar12,lVar8,puVar7),
                ((ulong)plVar6 & 1) != 0)))) goto LAB_10a3e6e34;
          }
          if (uStack_b0 < param_6) {
            for (lVar11 = *(long *)(lVar9 + 0x198); lVar11 != lVar9 + 400;
                lVar11 = *(long *)(lVar11 + 8)) {
              FUN_10a3fe4a4(lVar14 + 0xe40,*(undefined8 *)(lVar11 + 0x10));
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uStack_b8);
      uStack_b0 = uStack_b0 + 1;
      uStack_b8 = *(long *)(lVar14 + 0xe48) - *(long *)(lVar14 + 0xe40) >> 3;
    } while (uVar10 < uStack_b8 && uStack_b0 <= param_6);
  }
  plVar12 = (long *)0x0;
LAB_10a3e6e34:
  FUN_10a3e6998(*(long *)(param_2 + 0x120) + 0xe58,
                *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x120) + 0x850) + 0x2c),lVar13);
  if (plVar12 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    FUN_10a3c759c(&uStack_90,plVar12);
    param_1[1] = plStack_88;
    *param_1 = uStack_90;
    if (plStack_88 == (long *)0x0) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      plVar12 = plStack_88 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined1 *)(param_1 + 2) = 1;
      plVar12 = plStack_88 + 1;
      do {
        lVar8 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  return;
}



/* Entry: 10a3e7070; end: 10a3e73fb;  */

void FUN_10a3e7070(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  FUN_10a3e6834();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a3e6ca0(param_1,0x40);
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  puVar8 = &uStack_98;
  lVar6 = param_3;
  FUN_10a3e687c(param_3,puVar8);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  lVar15 = *(long *)(param_2 + 0x120);
  iVar2 = *(int *)(*(long *)(lVar15 + 0xa20) + 0x18);
  if ((param_7 & 1) == 0) {
    param_6 = 0xffffffffffffffff;
  }
  *(undefined8 *)(lVar15 + 0xe48) = *(undefined8 *)(lVar15 + 0xe40);
  if ((param_5 & 0x101) == 0x101) {
    FUN_10a3fe4a4(lVar15 + 0xe40);
  }
  else {
    for (lVar13 = *(long *)(param_2 + 0x198); lVar13 != param_2 + 400;
        lVar13 = *(long *)(lVar13 + 8)) {
      FUN_10a3fe4a4(lVar15 + 0xe40,*(undefined8 *)(lVar13 + 0x10));
    }
  }
  if ((*(long *)(lVar15 + 0xe40) == *(long *)(lVar15 + 0xe48)) ||
     (uStack_b0 = (ulong)((param_5 & 0x101) != 0x101), param_6 < uStack_b0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    uVar14 = 0;
    uStack_c0 = *(long *)(lVar15 + 0xe48) - *(long *)(lVar15 + 0xe40) >> 3;
    do {
      do {
        if ((ulong)(*(long *)(lVar15 + 0xe48) - *(long *)(lVar15 + 0xe40) >> 3) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e7398);
          (*pcVar5)();
        }
        lVar10 = *(long *)(*(long *)(lVar15 + 0xe40) + uVar14 * 8);
        if (((param_4 & 0x101) != 0x101) || ((*(ushort *)(lVar10 + 0x118) & 0x13) == 0)) {
          for (lVar11 = *(long *)(lVar10 + 0x158); lVar11 != lVar10 + 0x150;
              lVar11 = *(long *)(lVar11 + 8)) {
            plVar12 = *(long **)(lVar11 + 0x10);
            if ((((iVar2 < 0x157) || ((*(ushort *)(plVar12 + 0x30) >> 8 & 1) == 0)) &&
                (((param_4 & 0x101) != 0x101 ||
                 (plVar7 = plVar12, (**(code **)(*plVar12 + 0x60))(), (int)plVar7 != 0)))) &&
               ((lVar13 = lVar13 + 1, uVar1 == 0 ||
                (plVar7 = plVar12, (**(code **)(*plVar12 + 0x40))(plVar12,lVar6,puVar8),
                (int)plVar7 != 0)))) {
              FUN_10a3c759c(&uStack_80,plVar12);
              plStack_68 = plStack_78;
              uStack_70 = uStack_80;
              if (plStack_78 != (long *)0x0) {
                plVar12 = plStack_78 + 2;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar4) {
                    *plVar12 = *plVar12 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_10a3dd140(param_1,&uStack_70);
              if (plStack_68 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              plVar12 = plStack_78;
              if (plStack_78 != (long *)0x0) {
                plVar7 = plStack_78 + 1;
                do {
                  lVar9 = *plVar7;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar4) {
                    *plVar7 = lVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar9 == 0) {
                  (**(code **)(*plStack_78 + 0x10))(plStack_78);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                }
              }
            }
          }
          if (uStack_b0 < param_6) {
            for (lVar11 = *(long *)(lVar10 + 0x198); lVar11 != lVar10 + 400;
                lVar11 = *(long *)(lVar11 + 8)) {
              FUN_10a3fe4a4(lVar15 + 0xe40,*(undefined8 *)(lVar11 + 0x10));
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uStack_c0);
      uStack_b0 = uStack_b0 + 1;
      uStack_c0 = *(long *)(lVar15 + 0xe48) - *(long *)(lVar15 + 0xe40) >> 3;
    } while (uVar14 < uStack_c0 && uStack_b0 <= param_6);
  }
  FUN_10a3e6998(*(long *)(param_2 + 0x120) + 0xe58,
                *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x120) + 0x850) + 0x2c),lVar13);
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 10a3e73fc; end: 10a3e749f;  */

bool FUN_10a3e73fc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  FUN_10a3e6834();
  plVar5 = (long *)param_2[1];
  if ((plVar5 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 == (long *)0x0))
  {
    bVar4 = false;
  }
  else {
    if (*param_2 == 0) {
      bVar4 = false;
    }
    else {
      do {
        param_1 = *(long *)(param_1 + 0x188);
        bVar4 = param_1 != 0;
      } while (param_1 != *param_2 && param_1 != 0);
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
  return bVar4;
}



/* Entry: 10a3e74a0; end: 10a3e759b;  */

void FUN_10a3e74a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puStack_30;
  ulong uStack_28;
  
  FUN_10a3e6834();
  uStack_28 = param_2[1];
  puStack_30 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_28 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_30 = param_2;
  }
  FUN_10a0c34a4(param_1,&puStack_30);
  return;
}



/* Entry: 10a3e759c; end: 10a3e75a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a3e2698) */
/* WARNING: Removing unreachable block (ram,0x00010a3e26ac) */
/* WARNING: Removing unreachable block (ram,0x00010a3e26b8) */
/* WARNING: Removing unreachable block (ram,0x00010a3e2830) */

void FUN_10a3e759c(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(ushort *)(param_1 + 0x118) >> 8 & 1) == 0) {
    if ((param_2 != 0) && ((*(ushort *)(param_2 + 0x118) >> 8 & 1) != 0)) {
      FUN_10a00946c(&UNK_10f6545cb);
LAB_10a3e2890:
      puVar5 = &UNK_10f6545ff;
      goto LAB_10a3e2898;
    }
    if (*(long *)(param_1 + 0x188) == param_2) {
LAB_10a3e283c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a3e2874;
    }
    *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) | 0x80;
    if (param_2 == 0) {
      FUN_10a044790(param_1 + 0x1e8);
LAB_10a3e2778:
      *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) & 0xff7f;
      *(long *)(param_1 + 0x188) = param_2;
      FUN_10a2e1c34(param_1,3);
      if ((*(ushort *)(param_1 + 0x118) >> 7 & 1) == 0) {
        FUN_10a2e1c34(param_1,3);
        FUN_10a2e1c34(param_1,4);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x2a);
        if (((bVar1 ^ 0xff) & 0x7c) != 0) {
          *(byte *)(*(long *)(param_1 + 0x140) + 0x2a) = bVar1 | 0x7c;
          FUN_10a3e8248();
        }
        if (*(long *)(param_1 + 0x188) == 0) {
          uVar2 = *(ushort *)(param_1 + 0x118);
          *(ushort *)(param_1 + 0x118) = uVar2 & 0xfffd;
          if (((uVar2 & 0x13) == 0) != ((uVar2 & 0x11) == 0)) {
            FUN_10a3e4250(param_1);
          }
        }
        else {
          FUN_10a3e2a80(param_1,(*(ushort *)(*(long *)(param_1 + 0x188) + 0x118) & 0x13) == 0);
        }
      }
      goto LAB_10a3e283c;
    }
    if ((*(ushort *)(param_2 + 0x118) & 0xc) != 0) goto LAB_10a3e2890;
    lVar6 = param_2;
    if (param_2 != param_1) {
      do {
        lVar6 = *(long *)(lVar6 + 0x188);
      } while (lVar6 != param_1 && lVar6 != 0);
      if (lVar6 == 0) {
        plVar4 = (long *)0x18;
        __Znwm();
        plVar4[1] = param_2 + 400;
        plVar4[2] = param_1;
        lVar6 = *(long *)(param_2 + 400);
        *plVar4 = lVar6;
        *(long **)(lVar6 + 8) = plVar4;
        *(long **)(param_2 + 400) = plVar4;
        *(long *)(param_2 + 0x1a0) = *(long *)(param_2 + 0x1a0) + 1;
        uStack_78 = 0x10a3fde24;
        ppuStack_70 = &PTR_DAT_110bd2c30;
        lStack_68 = param_1;
        plStack_60 = plVar4;
        func_0x00010a108320(param_1 + 0x1e8,&uStack_78);
        FUN_10a044790(&uStack_78);
        (*(code *)*ppuStack_70)(&ppuStack_70);
        goto LAB_10a3e2778;
      }
    }
  }
  else {
    FUN_10a00946c(&UNK_10f65459d);
LAB_10a3e2874:
    ___stack_chk_fail();
  }
  puVar5 = &UNK_10f654636;
LAB_10a3e2898:
  FUN_10a00946c(puVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3e28a0);
  (*pcVar3)();
}



/* Entry: 10a3e75a4; end: 10a3e75d3;  */

void FUN_10a3e75a4(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_38;
  
  FUN_10a3e6834();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ushort *)(param_1 + 0x118);
  if ((uVar2 >> 8 & 1) == 0) {
    if ((param_2 != 0) && ((*(ushort *)(param_2 + 0x118) >> 8 & 1) != 0)) {
      FUN_10a00946c(&UNK_10f6545cb);
LAB_10a3e2890:
      puVar5 = &UNK_10f6545ff;
      goto LAB_10a3e2898;
    }
    if (*(long *)(param_1 + 0x188) == param_2) {
LAB_10a3e283c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a3e2874;
    }
    uStack_b8 = 0;
    uStack_c0 = 0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    uStack_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    lVar6 = *(long *)(param_1 + 0x140);
    if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(lVar6);
      uVar2 = *(ushort *)(param_1 + 0x118);
    }
    uStack_b8 = *(undefined8 *)(lVar6 + 200);
    uStack_c0 = *(undefined8 *)(lVar6 + 0xc0);
    uStack_a8 = *(undefined8 *)(lVar6 + 0xd8);
    uStack_b0 = *(undefined8 *)(lVar6 + 0xd0);
    uStack_98 = *(undefined8 *)(lVar6 + 0xe8);
    uStack_a0 = *(undefined8 *)(lVar6 + 0xe0);
    uStack_88 = *(undefined8 *)(lVar6 + 0xf8);
    uStack_90 = *(undefined8 *)(lVar6 + 0xf0);
    *(ushort *)(param_1 + 0x118) = uVar2 | 0x80;
    if (param_2 == 0) {
      FUN_10a044790(param_1 + 0x1e8);
LAB_10a3e2778:
      *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) & 0xff7f;
      *(long *)(param_1 + 0x188) = param_2;
      FUN_10a2e1c34(param_1,3);
      if ((*(ushort *)(param_1 + 0x118) >> 7 & 1) == 0) {
        FUN_10a2e1c34(param_1,3);
        FUN_10a2e1c34(param_1,4);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x2a);
        if (((bVar1 ^ 0xff) & 0x7c) != 0) {
          *(byte *)(*(long *)(param_1 + 0x140) + 0x2a) = bVar1 | 0x7c;
          FUN_10a3e8248();
        }
        if (*(long *)(param_1 + 0x188) == 0) {
          uVar2 = *(ushort *)(param_1 + 0x118);
          *(ushort *)(param_1 + 0x118) = uVar2 & 0xfffd;
          if (((uVar2 & 0x13) == 0) != ((uVar2 & 0x11) == 0)) {
            FUN_10a3e4250(param_1);
          }
        }
        else {
          FUN_10a3e2a80(param_1,(*(ushort *)(*(long *)(param_1 + 0x188) + 0x118) & 0x13) == 0);
        }
      }
      FUN_10a3e28b8(*(undefined8 *)(param_1 + 0x140),&uStack_c0);
      goto LAB_10a3e283c;
    }
    if ((*(ushort *)(param_2 + 0x118) & 0xc) != 0) goto LAB_10a3e2890;
    lVar6 = param_2;
    if (param_2 != param_1) {
      do {
        lVar6 = *(long *)(lVar6 + 0x188);
      } while (lVar6 != param_1 && lVar6 != 0);
      if (lVar6 == 0) {
        plVar4 = (long *)0x18;
        __Znwm();
        plVar4[1] = param_2 + 400;
        plVar4[2] = param_1;
        lVar6 = *(long *)(param_2 + 400);
        *plVar4 = lVar6;
        *(long **)(lVar6 + 8) = plVar4;
        *(long **)(param_2 + 400) = plVar4;
        *(long *)(param_2 + 0x1a0) = *(long *)(param_2 + 0x1a0) + 1;
        uStack_78 = 0x10a3fde24;
        ppuStack_70 = &PTR_DAT_110bd2c30;
        lStack_68 = param_1;
        plStack_60 = plVar4;
        func_0x00010a108320(param_1 + 0x1e8,&uStack_78);
        FUN_10a044790(&uStack_78);
        (*(code *)*ppuStack_70)(&ppuStack_70);
        goto LAB_10a3e2778;
      }
    }
  }
  else {
    FUN_10a00946c(&UNK_10f65459d);
LAB_10a3e2874:
    ___stack_chk_fail();
  }
  puVar5 = &UNK_10f654636;
LAB_10a3e2898:
  FUN_10a00946c(puVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3e28a0);
  (*pcVar3)();
}



/* Entry: 10a3e75d4; end: 10a3e7797;  */

void FUN_10a3e75d4(undefined8 param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    uStack_58 = 0;
    puStack_60 = (undefined8 *)0x0;
    lStack_48 = 0;
    uStack_50 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_70 = 0;
    func_0x00010a3fe5a8(&uStack_70,param_1);
    lVar4 = lStack_48;
    while (lVar4 != 0) {
      lVar2 = 0;
      if (puStack_60 != puStack_68) {
        lVar2 = ((long)puStack_60 - (long)puStack_68) * 0x40 + -1;
      }
      lVar4 = lVar4 + -1;
      uVar1 = uStack_50 + lVar4;
      lVar3 = *(long *)(puStack_68[uVar1 >> 9] + (uVar1 & 0x1ff) * 8);
      lStack_48 = lVar4;
      if (0x3ff < lVar2 - uVar1) {
        puVar5 = puStack_60 + -1;
        __ZdlPv(*puVar5);
        puStack_60 = puVar5;
      }
      (*(code *)*param_2)(lVar3,param_2);
      if (lVar3 == 0) break;
      plVar6 = (long *)(lVar3 + 400);
      if (plVar6 != *(long **)(lVar3 + 0x198)) {
        do {
          func_0x00010a3fea5c(&uStack_70,*plVar6 + 0x10);
          plVar6 = (long *)*plVar6;
          lVar4 = lStack_48;
        } while (plVar6 != *(long **)(lVar3 + 0x198));
      }
    }
  }
  else {
    uStack_58 = 0;
    puStack_60 = (undefined8 *)0x0;
    lStack_48 = 0;
    uStack_50 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_70 = 0;
    func_0x00010a3fe5a8(&uStack_70,param_1);
    lVar4 = lStack_48;
    while (uVar1 = uStack_50, lVar4 != 0) {
      lVar2 = *(long *)(puStack_68[uStack_50 >> 9] + (uStack_50 & 0x1ff) * 8);
      lVar4 = lVar4 + -1;
      uStack_50 = uStack_50 + 1;
      lStack_48 = lVar4;
      if (0x3ff < uStack_50) {
        puVar5 = puStack_68 + 1;
        __ZdlPv(*puStack_68);
        uStack_50 = uVar1 - 0x1ff;
        puStack_68 = puVar5;
      }
      (*(code *)*param_2)(lVar2,param_2);
      if (lVar2 == 0) break;
      for (lVar3 = *(long *)(lVar2 + 0x198); lVar3 != lVar2 + 400; lVar3 = *(long *)(lVar3 + 8)) {
        uStack_78 = *(undefined8 *)(lVar3 + 0x10);
        func_0x00010a3fea5c(&uStack_70,&uStack_78);
        lVar4 = lStack_48;
      }
    }
  }
  FUN_10a3f1a80(&uStack_70);
  return;
}



/* Entry: 10a3e7798; end: 10a3e77e7;  */

void FUN_10a3e7798(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(char *)(param_1 + 8) = (char)param_2;
    for (lVar1 = *(long *)(param_1 + 0x198); lVar1 != param_1 + 400; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_10a3e7798(*(undefined8 *)(lVar1 + 0x10),param_2);
    }
  }
  return;
}



/* Entry: 10a3e77e8; end: 10a3e7c67;  */

long FUN_10a3e77e8(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  ulong unaff_x23;
  ulong uVar15;
  float fVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c2b054(&lStack_68,*param_2);
  uVar8 = param_1 + 0x180;
  func_0x000107c2b05c(uVar8,&lStack_68);
  uVar15 = *(ulong *)(param_1 + 0x188);
  if (uVar15 != 0) {
    uVar14 = uVar15 - 1;
    if ((uVar15 & uVar14) == 0) {
      unaff_x23 = uVar14 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar15 <= uVar8) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar8 / uVar15;
        }
        unaff_x23 = uVar8 - uVar6 * uVar15;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x180) + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar8) {
          uVar6 = param_1 + 0x180;
          func_0x000107c2b068(uVar6,plVar5 + 2,&lStack_68);
          if ((uVar6 & 1) != 0) {
            bVar13 = false;
            goto LAB_10a3e7b8c;
          }
        }
        else {
          if ((uVar15 & uVar14) == 0) {
            uVar6 = uVar6 & uVar14;
          }
          else if (uVar15 <= uVar6) {
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar7 = uVar6 / uVar15;
            }
            uVar6 = uVar6 - uVar7 * uVar15;
          }
          if (uVar6 != unaff_x23) break;
        }
      }
    }
  }
  plVar5 = (long *)0x90;
  __Znwm();
  plVar5[3] = lStack_60;
  plVar5[2] = lStack_68;
  lVar17 = param_2[5];
  lVar4 = param_2[4];
  lVar3 = param_2[6];
  plVar5[0xc] = param_2[7];
  plVar5[0xb] = lVar3;
  lVar3 = param_2[8];
  lVar19 = param_2[0xb];
  lVar18 = param_2[10];
  plVar5[0xe] = param_2[9];
  plVar5[0xd] = lVar3;
  plVar5[0x10] = lVar19;
  plVar5[0xf] = lVar18;
  lVar3 = *param_2;
  lVar19 = param_2[3];
  lVar18 = param_2[2];
  plVar5[6] = param_2[1];
  plVar5[5] = lVar3;
  *plVar5 = 0;
  plVar5[1] = uVar8;
  plVar5[4] = lStack_58;
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  plVar5[0x11] = param_2[0xc];
  plVar5[8] = lVar19;
  plVar5[7] = lVar18;
  plVar5[10] = lVar17;
  plVar5[9] = lVar4;
  fVar16 = (float)(*(long *)(param_1 + 0x198) + 1);
  if ((uVar15 == 0) || (*(float *)(param_1 + 0x1a0) * (float)uVar15 < fVar16)) {
    uVar14 = 1;
    if (2 < uVar15) {
      uVar14 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar14 = uVar14 | uVar15 << 1;
    uVar15 = (ulong)(fVar16 / *(float *)(param_1 + 0x1a0));
    if (uVar14 <= uVar15) {
      uVar14 = uVar15;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar15 = *(ulong *)(param_1 + 0x188);
    if (uVar15 < uVar14) {
LAB_10a3e799c:
      if (uVar14 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a3e7c30;
      }
      lVar3 = uVar14 << 3;
      __Znwm();
      lVar4 = *(long *)(param_1 + 0x180);
      *(long *)(param_1 + 0x180) = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      *(ulong *)(param_1 + 0x188) = uVar14;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x180) + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
      plVar9 = *(long **)(param_1 + 400);
      uVar15 = uVar14;
      if (plVar9 != (long *)0x0) {
        uVar6 = plVar9[1];
        uVar7 = uVar14 - 1;
        if ((uVar14 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar14 <= uVar6) {
          uVar12 = 0;
          if (uVar14 != 0) {
            uVar12 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar12 * uVar14;
        }
        *(long *)(*(long *)(param_1 + 0x180) + uVar6 * 8) = param_1 + 400;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar14 & uVar7) == 0) {
            uVar12 = uVar12 & uVar7;
          }
          else if (uVar14 <= uVar12) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar12 / uVar14;
            }
            uVar12 = uVar12 - uVar1 * uVar14;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar6) {
            lVar3 = *(long *)(param_1 + 0x180);
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar6 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar14 < uVar15) {
      uVar6 = (ulong)((float)*(ulong *)(param_1 + 0x198) / *(float *)(param_1 + 0x1a0));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar14 <= uVar6) {
        uVar14 = uVar6;
      }
      if (uVar14 < uVar15) {
        if (uVar14 != 0) goto LAB_10a3e799c;
        lVar3 = *(long *)(param_1 + 0x180);
        *(undefined8 *)(param_1 + 0x180) = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x188) = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)(param_1 + 0x188);
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x23 = uVar15 - 1 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar15 <= uVar8) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar8 / uVar15;
        }
        unaff_x23 = uVar8 - uVar14 * uVar15;
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0x180);
  plVar9 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar5 = *(long *)(param_1 + 400);
    *(long **)(param_1 + 400) = plVar5;
    *(long *)(lVar3 + unaff_x23 * 8) = param_1 + 400;
    if (*plVar5 != 0) {
      uVar8 = *(ulong *)(*plVar5 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar8 = uVar8 & uVar15 - 1;
      }
      else if (uVar15 <= uVar8) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar14 * uVar15;
      }
      plVar9 = (long *)(*(long *)(param_1 + 0x180) + uVar8 * 8);
      goto LAB_10a3e7b78;
    }
  }
  else {
    *plVar5 = *plVar9;
LAB_10a3e7b78:
    *plVar9 = (long)plVar5;
  }
  *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
  bVar13 = true;
LAB_10a3e7b8c:
  if (lStack_58 < 0) {
    __ZdlPv(lStack_68);
  }
  if (bVar13) {
    return param_1;
  }
  func_0x00010b0ae4b8(&lStack_68,&UNK_10f6560c3,0x29);
  func_0x00010989842c(&lStack_68);
LAB_10a3e7c30:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a3e7c34);
  (*pcVar2)();
}



/* Entry: 10a3e7c68; end: 10a3e7de7;  */

undefined8 * FUN_10a3e7c68(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar6 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar6 & 1) == 0) {
    uVar9 = *param_2;
    if (param_4 == (long *)0x0) {
      lVar8 = param_1[3];
      if (param_1[2] == lVar8) goto LAB_10a3e7de4;
      uVar10 = *param_1;
    }
    else {
      plVar1 = param_4 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = param_1[3];
      if (param_1[2] == lVar8) {
LAB_10a3e7de4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3e7de8);
        (*pcVar5)();
      }
      uVar10 = *param_1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_58 = &PTR_DAT_110bf81e0;
    uStack_50 = param_3;
    plStack_48 = param_4;
    func_0x000109899de4(aiStack_68,uVar10,&uStack_50,&ppuStack_58,0,0);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    FUN_10a005308(lVar8 + -8,uVar10,uVar9,aiStack_68);
    if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
      (**(code **)*puStack_60)();
    }
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 1;
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
        (**(code **)(*param_4 + 0x10))(param_4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
      }
    }
  }
  return param_1;
}



/* Entry: 10a3e7de8; end: 10a3e7def;  */

undefined8 FUN_10a3e7de8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10a3e7df0; end: 10a3e7e87;  */

void FUN_10a3e7df0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,param_3 + param_5 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,param_2,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  return;
}



/* Entry: 10a3e7e88; end: 10a3e7eff;  */

undefined1  [16] FUN_10a3e7e88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f57dd0d;
  return auVar1;
}



/* Entry: 10a3e7f00; end: 10a3e7fe7;  */

undefined8 * FUN_10a3e7f00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110bd0ce0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2a) = 0x7d;
  param_1[6] = param_2;
  FUN_10a4018ec(param_1 + 7,0);
  uVar1 = NEON_fmov(0x3f800000,4);
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = uVar1;
  *(undefined4 *)((long)param_1 + 0xac) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0x3f80000000000000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x17] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x27] = 0x3f80000000000000;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x22] = 0x3f80000000000000;
  param_1[0x1f] = 0x3f80000000000000;
  param_1[0x1e] = 0;
  return param_1;
}



/* Entry: 10a3e7fe8; end: 10a3e814b;  */

void FUN_10a3e7fe8(long param_1,undefined8 *param_2,float *param_3,long param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_b4;
  float fStack_b0;
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
  undefined8 uStack_84;
  undefined8 uStack_7c;
  float afStack_74 [16];
  float fStack_34;
  
  iVar3 = 0;
  afStack_74[0] = *param_3;
  fStack_b4 = param_3[1];
  fStack_34 = param_3[2];
  do {
    pfVar1 = afStack_74;
    if (iVar3 == 1) {
      pfVar1 = &fStack_b4;
    }
    pfVar2 = &fStack_34;
    if (iVar3 != 2) {
      pfVar2 = pfVar1;
    }
    if (1e-06 < ABS(*pfVar2)) {
      pfVar1 = afStack_74;
      if (iVar3 == 1) {
        pfVar1 = &fStack_b4;
      }
      pfVar2 = &fStack_34;
      if (iVar3 != 2) {
        pfVar2 = pfVar1;
      }
      *pfVar2 = 1.0 / *pfVar2;
    }
    fStack_a0 = fStack_b4;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  fVar8 = *(float *)(param_4 + 0x30);
  fVar9 = *(float *)(param_4 + 0x34);
  fVar10 = *(float *)(param_4 + 0x38);
  fVar11 = *(float *)(param_2 + 1);
  fVar12 = *(float *)(param_2 + 3);
  fVar13 = *(float *)(param_2 + 5);
  fVar14 = *(float *)(param_2 + 7);
  fStack_b0 = afStack_74[0] * 0.0;
  fStack_b4 = afStack_74[0];
  fStack_a4 = fStack_a0 * 0.0;
  fStack_94 = fStack_34 * 0.0;
  fStack_8c = fStack_34;
  uVar4 = *param_2;
  uVar5 = param_2[2];
  uVar6 = param_2[4];
  uVar7 = param_2[6];
  uStack_84 = 0;
  uStack_7c = 0x3f80000000000000;
  fStack_ac = fStack_b0;
  fStack_a8 = fStack_b0;
  fStack_9c = fStack_a4;
  fStack_98 = fStack_a4;
  fStack_90 = fStack_94;
  fStack_88 = fStack_94;
  func_0x000109519fd0(afStack_74,param_2,&fStack_b4);
  func_0x000109519fd0(param_1,afStack_74,param_4);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar8 + (float)((ulong)uVar5 >> 0x20) * fVar9 +
                (float)((ulong)uVar6 >> 0x20) * fVar10 + (float)((ulong)uVar7 >> 0x20),
                (float)uVar4 * fVar8 + (float)uVar5 * fVar9 + (float)uVar6 * fVar10 + (float)uVar7);
  *(float *)(param_1 + 0x38) = fVar8 * fVar11 + fVar9 * fVar12 + fVar10 * fVar13 + fVar14;
  return;
}



/* Entry: 10a3e814c; end: 10a3e8247;  */

ulong FUN_10a3e814c(long param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
    FUN_10a3e8ed4(param_1);
  }
  func_0x00010a0d8ae0(param_1);
  pfVar1 = (float *)(param_1 + 0x48);
  uVar8 = (ulong)(uint)*pfVar1;
  if (((*pfVar1 == *param_2) &&
      (uVar8 = (ulong)(uint)*(float *)(param_1 + 0x4c), *(float *)(param_1 + 0x4c) == param_2[1]))
     && (uVar8 = (ulong)(uint)*(float *)(param_1 + 0x50), *(float *)(param_1 + 0x50) == param_2[2]))
  {
    return uVar8;
  }
  uVar5 = *(undefined8 *)param_2;
  *(float *)(param_1 + 0x50) = param_2[2];
  *(undefined8 *)pfVar1 = uVar5;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfd;
    bVar4 = *(byte *)(param_1 + 0x2a) | 2;
  }
  else {
    ppuStack_70 = *(undefined ***)(param_1 + 0x94);
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(param_1 + 0x9c));
    FUN_10a0087b0(&uStack_60,pfVar1,&ppuStack_70);
    *(undefined8 *)(param_1 + 0x6c) = uStack_58;
    *(undefined8 *)(param_1 + 100) = uStack_60;
    *(undefined8 *)(param_1 + 0x7c) = uStack_48;
    *(undefined8 *)(param_1 + 0x74) = uStack_50;
    *(long *)(param_1 + 0x8c) = lStack_38;
    *(ulong *)(param_1 + 0x84) = uStack_40;
    *(undefined8 *)(param_1 + 0x9c) = in_stack_ffffffffffffffd8;
    *(undefined8 *)(param_1 + 0x94) = in_stack_ffffffffffffffd0;
    bVar4 = *(byte *)(param_1 + 0x2a);
    uVar8 = uStack_40;
  }
  *(byte *)(param_1 + 0x2a) = bVar4 | 0x4c;
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    for (lVar7 = *(long *)(lVar6 + 0x198); lVar7 != lVar6 + 400; lVar7 = *(long *)(lVar7 + 8)) {
      lVar2 = *(long *)(*(long *)(lVar7 + 0x10) + 0x140);
      bVar4 = *(byte *)(lVar2 + 0x2a);
      if (((bVar4 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar2 + 0x2a) = bVar4 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar1 = *(float **)(param_1 + 0x38);
  (**(code **)(*(long *)pfVar1 + 0x20))(pfVar1);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar3 = (int)&pcStack_78;
  lStack_68 = param_1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar1 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume(pfVar1);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar1)) && (!NAN(pfVar1[1]))) &&
        ((ABS(pfVar1[1]) != INFINITY && ((ABS(*pfVar1) != INFINITY && (!NAN(pfVar1[2]))))))) &&
       (ABS(pfVar1[2]) != INFINITY)) {
      param_3 = pfVar1;
    }
    return (ulong)(uint)*param_3;
  }
  return uVar8;
}



/* Entry: 10a3e8248; end: 10a3e82bb;  */

ulong FUN_10a3e8248(undefined8 param_1,long param_2,undefined8 param_3,float *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  lVar4 = *(long *)(param_2 + 0x30);
  if (lVar4 != 0) {
    for (lVar6 = *(long *)(lVar4 + 0x198); lVar6 != lVar4 + 400; lVar6 = *(long *)(lVar6 + 8)) {
      lVar2 = *(long *)(*(long *)(lVar6 + 0x10) + 0x140);
      bVar1 = *(byte *)(lVar2 + 0x2a);
      if (((bVar1 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar2 + 0x2a) = bVar1 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar5 = *(float **)(param_2 + 0x38);
  (**(code **)(*(long *)pfVar5 + 0x20))(pfVar5);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar3 = (int)&pcStack_78;
  lStack_68 = param_2;
  (**(code **)(**(long **)(param_2 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar5 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume(pfVar5);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar5)) && (!NAN(pfVar5[1]))) && (ABS(pfVar5[1]) != INFINITY)) &&
       (((ABS(*pfVar5) != INFINITY && (!NAN(pfVar5[2]))) && (ABS(pfVar5[2]) != INFINITY)))) {
      param_4 = pfVar5;
    }
    return (ulong)(uint)*param_4;
  }
  return CONCAT44(uVar8,uVar7);
}



/* Entry: 10a3e82bc; end: 10a3e83c3;  */

ulong FUN_10a3e82bc(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
    FUN_10a3e8ed4(param_1);
  }
  func_0x00010a0d8ae0(param_1);
  if ((((*(float *)(param_1 + 0x54) == *param_2) && (*(float *)(param_1 + 0x58) == param_2[1])) &&
      (*(float *)(param_1 + 0x5c) == param_2[2])) && (*(float *)(param_1 + 0x60) == param_2[3])) {
    return (ulong)(uint)*(float *)(param_1 + 0x60);
  }
  uVar7 = *(ulong *)param_2;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 2);
  *(ulong *)(param_1 + 0x54) = uVar7;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfd;
    bVar3 = *(byte *)(param_1 + 0x2a) | 2;
  }
  else {
    ppuStack_70 = *(undefined ***)(param_1 + 0x94);
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)(param_1 + 0x9c));
    FUN_10a0087b0(&uStack_60,param_1 + 0x48,&ppuStack_70);
    *(undefined8 *)(param_1 + 0x6c) = uStack_58;
    *(undefined8 *)(param_1 + 100) = uStack_60;
    *(undefined8 *)(param_1 + 0x7c) = uStack_48;
    *(undefined8 *)(param_1 + 0x74) = uStack_50;
    *(long *)(param_1 + 0x8c) = lStack_38;
    *(ulong *)(param_1 + 0x84) = uStack_40;
    *(undefined8 *)(param_1 + 0x9c) = in_stack_ffffffffffffffd8;
    *(undefined8 *)(param_1 + 0x94) = in_stack_ffffffffffffffd0;
    bVar3 = *(byte *)(param_1 + 0x2a);
    uVar7 = uStack_40;
  }
  *(byte *)(param_1 + 0x2a) = bVar3 | 0x54;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    for (lVar6 = *(long *)(lVar4 + 0x198); lVar6 != lVar4 + 400; lVar6 = *(long *)(lVar6 + 8)) {
      lVar1 = *(long *)(*(long *)(lVar6 + 0x10) + 0x140);
      bVar3 = *(byte *)(lVar1 + 0x2a);
      if (((bVar3 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar1 + 0x2a) = bVar3 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar5 = *(float **)(param_1 + 0x38);
  (**(code **)(*(long *)pfVar5 + 0x20))(pfVar5);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar2 = (int)&pcStack_78;
  lStack_68 = param_1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar5 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume(pfVar5);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar5)) && (!NAN(pfVar5[1]))) &&
        ((ABS(pfVar5[1]) != INFINITY && ((ABS(*pfVar5) != INFINITY && (!NAN(pfVar5[2]))))))) &&
       (ABS(pfVar5[2]) != INFINITY)) {
      param_3 = pfVar5;
    }
    return (ulong)(uint)*param_3;
  }
  return uVar7;
}



/* Entry: 10a3e83c4; end: 10a3e857b;  */

bool FUN_10a3e83c4(float *param_1,float *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return param_1[6] == param_2[6];
  }
  return false;
}



/* Entry: 10a3e857c; end: 10a3e8837;  */

void FUN_10a3e857c(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  float *param_6)

{
  undefined1 (*pauVar1) [12];
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [12];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float in_register_0000502c;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auVar8 [16];
  
  bVar2 = *(byte *)(param_5 + 0x2a);
  if ((bVar2 & 1) != 0) {
    FUN_10a3e8ed4(param_5);
    bVar2 = *(byte *)(param_5 + 0x2a);
  }
  if ((bVar2 >> 3 & 1) == 0) {
    param_2 = *param_6;
    in_register_0000502c = 0.0;
    if (*(float *)(param_5 + 0xa4) == param_2) {
      param_2 = param_6[1];
      in_register_0000502c = 0.0;
      if (*(float *)(param_5 + 0xa8) == param_2) {
        param_2 = param_6[2];
        in_register_0000502c = 0.0;
        if (*(float *)(param_5 + 0xac) == param_2) {
          return;
        }
      }
    }
  }
  fVar6 = param_6[2];
  *(undefined8 *)(param_5 + 0xa4) = *(undefined8 *)param_6;
  *(float *)(param_5 + 0xac) = fVar6;
  uVar4 = bVar2 & 0xfffffff7 | 0x40;
  *(char *)(param_5 + 0x2a) = (char)uVar4;
  if ((*(long *)(param_5 + 0x30) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_5 + 0x30) + 0x188), lVar5 == 0)) {
    func_0x00010a0d8ae0(param_5);
    fVar6 = param_6[2];
    *(undefined8 *)(param_5 + 0x48) = *(undefined8 *)param_6;
    *(float *)(param_5 + 0x50) = fVar6;
    if ((*(byte *)(param_5 + 0x28) & 1) == 0) {
      *(byte *)(param_5 + 0x29) = *(byte *)(param_5 + 0x29) & 0xfd;
      bVar2 = *(byte *)(param_5 + 0x2a) | 6;
    }
    else {
      uStack_a8 = *(undefined4 *)(param_5 + 0x9c);
      uStack_b0 = *(undefined8 *)(param_5 + 0x94);
      FUN_10a0087b0(&uStack_70,(undefined8 *)(param_5 + 0x48),&uStack_b0);
      *(undefined8 *)(param_5 + 0x6c) = uStack_68;
      *(undefined8 *)(param_5 + 100) = uStack_70;
      *(undefined8 *)(param_5 + 0x7c) = uStack_58;
      *(undefined8 *)(param_5 + 0x74) = uStack_60;
      *(undefined8 *)(param_5 + 0x8c) = uStack_48;
      *(undefined8 *)(param_5 + 0x84) = uStack_50;
      *(undefined8 *)(param_5 + 0x9c) = uStack_38;
      *(undefined8 *)(param_5 + 0x94) = uStack_40;
      *(undefined8 *)(param_5 + 200) = *(undefined8 *)(param_5 + 0x6c);
      *(undefined8 *)(param_5 + 0xc0) = *(undefined8 *)(param_5 + 100);
      *(undefined8 *)(param_5 + 0xd8) = *(undefined8 *)(param_5 + 0x7c);
      *(undefined8 *)(param_5 + 0xd0) = *(undefined8 *)(param_5 + 0x74);
      *(undefined8 *)(param_5 + 0xe8) = *(undefined8 *)(param_5 + 0x8c);
      *(undefined8 *)(param_5 + 0xe0) = *(undefined8 *)(param_5 + 0x84);
      *(undefined8 *)(param_5 + 0xf8) = *(undefined8 *)(param_5 + 0x9c);
      *(undefined8 *)(param_5 + 0xf0) = *(undefined8 *)(param_5 + 0x94);
      bVar2 = *(byte *)(param_5 + 0x2a) & 0xfb;
    }
    *(byte *)(param_5 + 0x2a) = bVar2;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x140);
    if (((bVar2 & *(byte *)(param_5 + 0x29)) >> 1 & 1) != 0) {
      FUN_10a008544(param_5 + 0x48,param_5 + 100);
      uVar4 = (uint)*(byte *)(param_5 + 0x2a);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      fVar6 = (float)func_0x00010a2cd08c(lVar5);
      pauVar1 = (undefined1 (*) [12])(param_5 + 0x54);
      fVar13 = (float)((ulong)*(undefined8 *)(param_5 + 0x5c) >> 0x20);
      fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar18._12_4_ = fVar13;
      auVar18._0_12_ = *pauVar1;
      auVar19._12_4_ = fVar13;
      auVar19._0_12_ = *pauVar1;
      auVar14 = NEON_ext(auVar18,auVar19,0xc,1);
      auVar16._4_4_ = param_3;
      auVar16._0_4_ = param_2;
      auVar16._8_4_ = fVar6;
      auVar16._12_4_ = in_register_0000502c;
      auVar7._0_4_ = -param_2;
      auVar7._4_4_ = -param_3;
      auVar7._8_4_ = -fVar6;
      auVar8._12_4_ = -in_register_0000502c;
      auVar8._0_12_ = auVar7;
      auVar15 = NEON_ext(auVar16,auVar8,4,1);
      auVar9._12_4_ = auVar7._4_4_;
      auVar9._0_12_ = auVar7;
      auVar19 = NEON_ext(auVar9,auVar9,4,1);
      auVar20._4_4_ = fVar13;
      auVar20._0_4_ = fVar13;
      auVar20._8_4_ = fVar13;
      auVar20._12_4_ = fVar13;
      auVar21._12_4_ = fVar13;
      auVar21._0_12_ = *pauVar1;
      auVar21 = NEON_ext(auVar20,auVar21,4,1);
      auVar17._4_4_ = SUB124(*pauVar1,8);
      auVar17._0_4_ = SUB124(*pauVar1,0);
      auVar17._8_4_ = SUB124(*pauVar1,0);
      auVar17._12_4_ = SUB124(*pauVar1,8);
      auVar3._12_4_ = fVar13;
      auVar3._0_12_ = *pauVar1;
      auVar18 = NEON_ext(auVar17,auVar3,0xc,1);
      fVar10 = auVar21._0_4_ * param_2 + fVar12 * param_4 +
               (float)*(undefined8 *)*pauVar1 * auVar15._0_4_ + auVar18._0_4_ * auVar19._4_4_;
      fVar11 = auVar21._4_4_ * param_3 + SUB124(*pauVar1,8) * param_4 + fVar12 * auVar15._4_4_ +
               auVar18._4_4_ * auVar19._12_4_;
      fVar6 = auVar21._8_4_ * fVar6 + auVar14._4_4_ * param_4 +
              (float)*(undefined8 *)(param_5 + 0x5c) * param_2 + auVar18._8_4_ * auVar7._4_4_;
      fVar12 = auVar21._12_4_ * auVar7._8_4_ + fVar13 * param_4 + fVar12 * auVar15._12_4_ +
               auVar18._12_4_ * auVar7._4_4_;
      auVar14._4_4_ = fVar11;
      auVar14._0_4_ = fVar10;
      auVar14._8_4_ = fVar6;
      auVar14._12_4_ = fVar12;
      auVar15._4_4_ = fVar11;
      auVar15._0_4_ = fVar10;
      auVar15._8_4_ = fVar6;
      auVar15._12_4_ = fVar12;
      auVar14 = NEON_ext(auVar14,auVar15,4,1);
      *(float *)(param_5 + 0xb8) = fVar11;
      *(float *)(param_5 + 0xbc) = fVar12;
      *(int *)(param_5 + 0xb0) = auVar14._4_4_;
      *(int *)(param_5 + 0xb4) = auVar14._12_4_;
    }
    uStack_70 = *(undefined8 *)(param_5 + 0xc0);
    uStack_68 = *(undefined8 *)(param_5 + 200);
    uStack_58 = *(undefined8 *)(param_5 + 0xd8);
    uStack_60 = *(undefined8 *)(param_5 + 0xd0);
    uStack_48 = *(undefined8 *)(param_5 + 0xe8);
    uStack_50 = *(undefined8 *)(param_5 + 0xe0);
    uStack_b0 = *(undefined8 *)(param_5 + 0xf0);
    uStack_38 = *(undefined8 *)(param_5 + 0xf8);
    uStack_a8 = (undefined4)uStack_38;
    uStack_40 = uStack_b0;
    FUN_10a0087b0(&uStack_70,(undefined8 *)(param_5 + 0xa4),&uStack_b0);
    if ((*(byte *)(lVar5 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar5);
    }
    func_0x000109519fd0(&uStack_b0,lVar5 + 0x100,&uStack_70);
    *(ulong *)(param_5 + 0x6c) = CONCAT44(uStack_a4,uStack_a8);
    *(undefined8 *)(param_5 + 100) = uStack_b0;
    *(undefined8 *)(param_5 + 0x7c) = uStack_98;
    *(undefined8 *)(param_5 + 0x74) = uStack_a0;
    *(undefined8 *)(param_5 + 0x8c) = uStack_88;
    *(undefined8 *)(param_5 + 0x84) = uStack_90;
    fVar12 = (float)((ulong)*(undefined8 *)(param_5 + 100) >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_5 + 100);
    fVar10 = (float)*(undefined8 *)(param_5 + 0x74);
    fVar11 = (float)((ulong)*(undefined8 *)(param_5 + 0x74) >> 0x20);
    *(ulong *)(param_5 + 0x48) =
         CONCAT44(SQRT(fVar10 * fVar10 + fVar11 * fVar11 +
                       *(float *)(param_5 + 0x7c) * *(float *)(param_5 + 0x7c)),
                  SQRT(fVar6 * fVar6 + fVar12 * fVar12 +
                       *(float *)(param_5 + 0x6c) * *(float *)(param_5 + 0x6c)));
    *(float *)(param_5 + 0x50) =
         SQRT(*(float *)(param_5 + 0x84) * *(float *)(param_5 + 0x84) +
              *(float *)(param_5 + 0x88) * *(float *)(param_5 + 0x88) +
              *(float *)(param_5 + 0x8c) * *(float *)(param_5 + 0x8c));
    *(byte *)(param_5 + 0x2a) = *(byte *)(param_5 + 0x2a) & 0xe9;
    *(undefined8 *)(param_5 + 200) = uStack_68;
    *(undefined8 *)(param_5 + 0xc0) = uStack_70;
    *(undefined8 *)(param_5 + 0xd8) = uStack_58;
    *(undefined8 *)(param_5 + 0xd0) = uStack_60;
    *(undefined8 *)(param_5 + 0xe8) = uStack_48;
    *(undefined8 *)(param_5 + 0xe0) = uStack_50;
    *(undefined8 *)(param_5 + 0xf8) = uStack_38;
    *(undefined8 *)(param_5 + 0xf0) = uStack_40;
  }
  FUN_10a3e8248(param_5);
  return;
}



/* Entry: 10a3e8838; end: 10a3e8ad3;  */

void FUN_10a3e8838(undefined8 param_1,float param_2,float param_3,long param_4,
                  undefined1 (*param_5) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar15;
  float fVar14;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float extraout_s3;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_150;
  float fStack_148;
  undefined8 auStack_110 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  pauVar10 = (undefined1 (*) [16])auStack_110;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_4 + 0x2a);
  lVar11 = param_4;
  pauVar9 = param_5;
  if ((bVar1 & 1) != 0) {
    FUN_10a3e8ed4();
    bVar1 = *(byte *)(param_4 + 0x2a);
  }
  if (((((bVar1 >> 4 & 1) != 0) ||
       (param_2 = *(float *)*param_5, *(float *)(param_4 + 0xb0) != param_2)) ||
      (param_2 = *(float *)(*param_5 + 4), *(float *)(param_4 + 0xb4) != param_2)) ||
     ((param_2 = *(float *)(*param_5 + 8), *(float *)(param_4 + 0xb8) != param_2 ||
      (param_2 = *(float *)(*param_5 + 0xc), *(float *)(param_4 + 0xbc) != param_2)))) {
    if ((*(byte *)(param_4 + 0x28) & 1) == 0) {
      func_0x00010a0d8ae0(param_4);
      *(byte *)(param_4 + 0x29) = *(byte *)(param_4 + 0x29) & 0xfd;
      auVar24 = *param_5;
      pauVar10 = pauVar9;
      if ((*(long *)(param_4 + 0x30) != 0) &&
         (lVar11 = *(long *)(*(long *)(param_4 + 0x30) + 0x188), lVar11 != 0)) {
        fVar13 = (float)func_0x00010a2cd08c(*(undefined8 *)(lVar11 + 0x140));
        fVar14 = extraout_s3 * extraout_s3 + fVar13 * fVar13 + param_2 * param_2 + param_3 * param_3
        ;
        fVar22 = extraout_s3 / fVar14;
        fVar17 = -param_3 / fVar14;
        fVar13 = -fVar13 / fVar14;
        fVar18 = -param_2 / fVar14;
        fVar14 = -param_3 / fVar14;
        fVar20 = (float)*(undefined8 *)(*param_5 + 8);
        fVar21 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
        fVar19 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
        auVar26._4_4_ = fVar21;
        auVar26._0_4_ = fVar21;
        auVar26._8_4_ = fVar21;
        auVar26._12_4_ = fVar21;
        auVar16._12_4_ = fVar21;
        auVar16._0_12_ = *(undefined1 (*) [12])*param_5;
        auVar16 = NEON_ext(auVar26,auVar16,4,1);
        auVar25._4_4_ = fVar13;
        auVar25._0_4_ = fVar17;
        auVar25._8_4_ = fVar18;
        auVar25._12_4_ = fVar14;
        auVar26 = NEON_rev64(auVar25,4);
        auVar23._4_4_ = fVar17;
        auVar23._0_4_ = -fVar17;
        auVar23._8_4_ = -fVar18;
        auVar23._12_4_ = fVar18;
        auVar2._4_4_ = fVar13;
        auVar2._0_4_ = fVar17;
        auVar2._8_4_ = fVar18;
        auVar2._12_4_ = fVar14;
        auVar24 = NEON_ext(auVar23,auVar2,8,1);
        auVar25 = NEON_ext(auVar24,auVar24,4,1);
        auVar24._0_4_ =
             (auVar16._0_4_ * auVar26._0_4_ + (float)*(undefined8 *)*param_5 * fVar22 +
             fVar20 * auVar25._0_4_) - fVar19 * fVar17;
        auVar24._4_4_ =
             (auVar16._4_4_ * fVar18 + fVar19 * fVar22 +
             SUB124(*(undefined1 (*) [12])*param_5,0) * auVar25._4_4_) -
             SUB124(*(undefined1 (*) [12])*param_5,8) * fVar13;
        auVar24._8_4_ =
             (auVar16._8_4_ * auVar26._4_4_ + fVar20 * fVar22 +
             SUB124(*(undefined1 (*) [12])*param_5,4) * auVar25._8_4_) -
             SUB124(*(undefined1 (*) [12])*param_5,0) * fVar18;
        auVar24._12_4_ =
             (auVar16._12_4_ * -fVar13 + fVar21 * fVar22 +
             SUB124(*(undefined1 (*) [12])*param_5,4) * auVar25._12_4_) -
             SUB124(*(undefined1 (*) [12])*param_5,8) * fVar14;
        pauVar10 = pauVar9;
      }
      *(long *)(param_4 + 0x5c) = auVar24._8_8_;
      *(long *)(param_4 + 0x54) = auVar24._0_8_;
      uVar3 = *(undefined8 *)*param_5;
      *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(*param_5 + 8);
      *(undefined8 *)(param_4 + 0xb0) = uVar3;
      *(byte *)(param_4 + 0x2a) = *(byte *)(param_4 + 0x2a) & 0xef | 0x46;
    }
    else {
      if ((bVar1 >> 3 & 1) != 0) {
        func_0x00010a3e9130(param_4);
        bVar1 = *(byte *)(param_4 + 0x2a);
      }
      if ((bVar1 >> 5 & 1) != 0) {
        func_0x00010a3e9278(param_4);
      }
      uVar3 = *(undefined8 *)*param_5;
      *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(*param_5 + 8);
      *(undefined8 *)(param_4 + 0xb0) = uVar3;
      auStack_110[1]._0_4_ = *(undefined4 *)(param_4 + 0xf8);
      auStack_110[0] = *(undefined8 *)(param_4 + 0xf0);
      FUN_10a0087b0(auStack_d0,param_4 + 0xa4);
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_88 = auStack_d0[1];
      uStack_90 = auStack_d0[0];
      uVar15 = (undefined4)uStack_a0;
      uVar4 = uStack_a0._4_4_;
      uVar5 = (undefined4)uStack_98;
      uVar6 = uStack_98._4_4_;
      if ((*(long *)(param_4 + 0x30) != 0) &&
         (lVar11 = *(long *)(*(long *)(param_4 + 0x30) + 0x188), lVar11 != 0)) {
        lVar11 = *(long *)(lVar11 + 0x140);
        if ((*(byte *)(lVar11 + 0x2a) >> 6 & 1) != 0) {
          func_0x00010a3e933c(lVar11);
        }
        pauVar10 = (undefined1 (*) [16])auStack_d0;
        func_0x000109519fd0(auStack_110,lVar11 + 0x100);
        auStack_d0[1]._4_4_ = auStack_110[1]._4_4_;
        auStack_d0[1]._0_4_ = (undefined4)auStack_110[1];
        auStack_d0[0] = auStack_110[0];
        uStack_b8 = uStack_f8;
        uStack_c0 = uStack_100;
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
      }
      *(undefined8 *)(param_4 + 0x6c) = auStack_d0[1];
      *(undefined8 *)(param_4 + 100) = auStack_d0[0];
      *(undefined8 *)(param_4 + 0x7c) = uStack_b8;
      *(undefined8 *)(param_4 + 0x74) = uStack_c0;
      *(undefined8 *)(param_4 + 0x8c) = uStack_a8;
      *(undefined8 *)(param_4 + 0x84) = uStack_b0;
      *(byte *)(param_4 + 0x2a) = *(byte *)(param_4 + 0x2a) & 0xa9 | 0x42;
      *(undefined8 *)(param_4 + 200) = uStack_88;
      *(undefined8 *)(param_4 + 0xc0) = uStack_90;
      *(undefined8 *)(param_4 + 0xd8) = uStack_78;
      *(undefined8 *)(param_4 + 0xd0) = uStack_80;
      *(undefined8 *)(param_4 + 0xe8) = uStack_68;
      *(undefined8 *)(param_4 + 0xe0) = uStack_70;
      *(undefined4 *)(param_4 + 0xf0) = uVar15;
      *(undefined4 *)(param_4 + 0xf4) = uVar4;
      *(undefined4 *)(param_4 + 0xf8) = uVar5;
      *(undefined4 *)(param_4 + 0xfc) = uVar6;
    }
    FUN_10a3e8248();
    lVar11 = param_4;
    pauVar9 = pauVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if ((*(byte *)(lVar11 + 0x2a) >> 5 & 1) == 0) {
      bVar7 = false;
      if ((*(float *)(lVar11 + 0xf0) == *(float *)*pauVar9) &&
         (bVar7 = false, !NAN(*(float *)(lVar11 + 0xf4)) && !NAN(*(float *)(*pauVar9 + 4)))) {
        bVar7 = *(float *)(lVar11 + 0xf4) == *(float *)(*pauVar9 + 4);
      }
      bVar8 = false;
      if ((bVar7) &&
         (bVar8 = false, !NAN(*(float *)(lVar11 + 0xf8)) && !NAN(*(float *)(*pauVar9 + 8)))) {
        bVar8 = *(float *)(lVar11 + 0xf8) == *(float *)(*pauVar9 + 8);
      }
      if (bVar8) {
        return;
      }
    }
    uStack_150 = *(undefined8 *)*pauVar9;
    fStack_148 = *(float *)(*pauVar9 + 8);
    if ((*(long *)(lVar11 + 0x30) != 0) &&
       (lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 0x188), lVar12 != 0)) {
      lVar12 = *(long *)(lVar12 + 0x140);
      if ((*(byte *)(lVar12 + 0x2a) >> 6 & 1) != 0) {
        func_0x00010a3e933c(lVar12);
      }
      fVar13 = *(float *)*pauVar9;
      fVar14 = *(float *)(*pauVar9 + 4);
      fVar17 = *(float *)(*pauVar9 + 8);
      fStack_148 = fVar13 * *(float *)(lVar12 + 0x108) + fVar14 * *(float *)(lVar12 + 0x118) +
                   fVar17 * *(float *)(lVar12 + 0x128) + *(float *)(lVar12 + 0x138);
      uStack_150 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20) * fVar13 +
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20) * fVar14 +
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x120) >> 0x20) * fVar17 +
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x130) >> 0x20),
                            (float)*(undefined8 *)(lVar12 + 0x100) * fVar13 +
                            (float)*(undefined8 *)(lVar12 + 0x110) * fVar14 +
                            (float)*(undefined8 *)(lVar12 + 0x120) * fVar17 +
                            (float)*(undefined8 *)(lVar12 + 0x130));
    }
    FUN_10a3e3894(lVar11,&uStack_150);
    uVar15 = *(undefined4 *)(*pauVar9 + 8);
    *(undefined8 *)(lVar11 + 0xf0) = *(undefined8 *)*pauVar9;
    *(undefined4 *)(lVar11 + 0xf8) = uVar15;
    *(byte *)(lVar11 + 0x2a) = *(byte *)(lVar11 + 0x2a) & 0x9f | 0x40;
    return;
  }
  return;
}



/* Entry: 10a3e8ad4; end: 10a3e8beb;  */

void FUN_10a3e8ad4(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_40;
  float fStack_38;
  
  if ((*(byte *)(param_1 + 0x2a) >> 5 & 1) == 0) {
    bVar1 = false;
    if ((*(float *)(param_1 + 0xf0) == *param_2) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0xf4)) && !NAN(param_2[1]))) {
      bVar1 = *(float *)(param_1 + 0xf4) == param_2[1];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(*(float *)(param_1 + 0xf8)) && !NAN(param_2[2]))) {
      bVar2 = *(float *)(param_1 + 0xf8) == param_2[2];
    }
    if (bVar2) {
      return;
    }
  }
  uStack_40 = *(undefined8 *)param_2;
  fStack_38 = param_2[2];
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x188), lVar3 != 0)) {
    lVar3 = *(long *)(lVar3 + 0x140);
    if ((*(byte *)(lVar3 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar3);
    }
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fStack_38 = fVar4 * *(float *)(lVar3 + 0x108) + fVar5 * *(float *)(lVar3 + 0x118) +
                fVar6 * *(float *)(lVar3 + 0x128) + *(float *)(lVar3 + 0x138);
    uStack_40 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x100) >> 0x20) * fVar4 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x110) >> 0x20) * fVar5 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x120) >> 0x20) * fVar6 +
                         (float)((ulong)*(undefined8 *)(lVar3 + 0x130) >> 0x20),
                         (float)*(undefined8 *)(lVar3 + 0x100) * fVar4 +
                         (float)*(undefined8 *)(lVar3 + 0x110) * fVar5 +
                         (float)*(undefined8 *)(lVar3 + 0x120) * fVar6 +
                         (float)*(undefined8 *)(lVar3 + 0x130));
  }
  FUN_10a3e3894(param_1,&uStack_40);
  fVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)param_2;
  *(float *)(param_1 + 0xf8) = fVar4;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0x9f | 0x40;
  return;
}



/* Entry: 10a3e8bec; end: 10a3e8cef;  */

ulong FUN_10a3e8bec(undefined8 param_1,long *param_2,undefined8 param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar2 = (float *)*param_2;
  (**(code **)(*(long *)pfVar2 + 0x20))(pfVar2);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar1 = (int)&pcStack_78;
  uStack_68 = param_3;
  (**(code **)(*(long *)*param_2 + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar2 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return CONCAT44(uVar4,uVar3);
  }
  ___stack_chk_fail();
  if (iVar1 == 0) {
    __Unwind_Resume(pfVar2);
  }
  func_0x000104bd46a0();
  if ((((!NAN(*pfVar2)) && (!NAN(pfVar2[1]))) && (ABS(pfVar2[1]) != INFINITY)) &&
     (((ABS(*pfVar2) != INFINITY && (!NAN(pfVar2[2]))) && (ABS(pfVar2[2]) != INFINITY)))) {
    param_4 = pfVar2;
  }
  return (ulong)(uint)*param_4;
}


