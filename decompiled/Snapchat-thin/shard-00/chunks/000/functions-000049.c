/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10012defc; end: 10012f093;  */

long ** FUN_10012defc(long **param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long **pplVar5;
  long **pplVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  int *piVar11;
  long *plVar12;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  iVar10 = (int)param_3;
  if (piRam000000011383ad70 < (int *)0x2) {
LAB_10012df44:
    if (piRam000000011383ad70 == (int *)0x0) goto code_r0x00010012df4c;
    ClearExclusiveLocal();
    if (piRam000000011383ad70 == (int *)0x1) {
      pplVar5 = param_1;
      (*(code *)PTR_FUN_11336f918)();
      pplVar6 = pplVar5;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)pplVar6 - (long)pplVar5 < 1000) {
          func_0x000107c612dc();
        }
        else {
          plStack_80 = (long *)0xaaaaaaaaaaaaaaaa;
          uStack_78 = 0xaaaaaaaaaaaaaaaa;
          uStack_68 = 1000000;
          plStack_70 = (long *)0x0;
          pplVar6 = &plStack_70;
          func_0x000107c610f0(pplVar6,&plStack_80);
          iVar4 = (int)pplVar6;
          while ((iVar4 == -1 && (func_0x000107c60e5c(), *(int *)pplVar6 == 4))) {
            uStack_68 = uStack_78;
            plStack_70 = plStack_80;
            pplVar6 = &plStack_70;
            func_0x000107c610f0(pplVar6,&plStack_80);
            iVar4 = (int)pplVar6;
          }
        }
      } while (piRam000000011383ad70 == (int *)0x1);
    }
    piVar11 = piRam000000011383ad70;
    pplVar6 = pplRam000000011336f908;
    func_0x000107c61248();
    uVar8 = (ulong)pplVar6 & 0xfffffffffffffffc;
    plVar9 = (long *)0x0;
    if (uVar8 != 0) goto LAB_10012e048;
    goto LAB_10012e064;
  }
LAB_10012df70:
  piVar11 = piRam000000011383ad70;
  pplVar6 = pplRam000000011336f908;
  func_0x000107c61248();
  uVar8 = (ulong)pplVar6 & 0xfffffffffffffffc;
  if (uVar8 == 0) {
    plVar9 = (long *)0x0;
LAB_10012e064:
    *param_1 = plVar9;
  }
  else {
LAB_10012e048:
    puVar1 = (undefined8 *)(uVar8 + (long)*piVar11 * 0x10);
    if (*(int *)(puVar1 + 1) == piVar11[1]) {
      plVar9 = (long *)*puVar1;
      goto LAB_10012e064;
    }
    *param_1 = (long *)0x0;
  }
  if (piRam000000011383ad90 < (int *)0x2) {
LAB_10012e0a0:
    if (piRam000000011383ad90 == (int *)0x0) goto code_r0x00010012e0a8;
    ClearExclusiveLocal();
    if (piRam000000011383ad90 == (int *)0x1) {
      (*(code *)PTR_FUN_11336f918)();
      pplVar5 = pplVar6;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)pplVar5 - (long)pplVar6 < 1000) {
          func_0x000107c612dc();
        }
        else {
          plStack_80 = (long *)0xaaaaaaaaaaaaaaaa;
          uStack_78 = 0xaaaaaaaaaaaaaaaa;
          uStack_68 = 1000000;
          plStack_70 = (long *)0x0;
          pplVar5 = &plStack_70;
          func_0x000107c610f0(pplVar5,&plStack_80);
          iVar4 = (int)pplVar5;
          while ((iVar4 == -1 && (func_0x000107c60e5c(), *(int *)pplVar5 == 4))) {
            uStack_68 = uStack_78;
            plStack_70 = plStack_80;
            pplVar5 = &plStack_70;
            func_0x000107c610f0(pplVar5,&plStack_80);
            iVar4 = (int)pplVar5;
          }
        }
      } while (piRam000000011383ad90 == (int *)0x1);
    }
    piVar11 = piRam000000011383ad90;
    pplVar6 = pplRam000000011336f908;
    func_0x000107c61248();
    uVar8 = (ulong)pplVar6 & 0xfffffffffffffffc;
    plVar9 = (long *)0x0;
    if (uVar8 != 0) goto LAB_10012e19c;
    goto LAB_10012e1b8;
  }
LAB_10012e0cc:
  piVar11 = piRam000000011383ad90;
  pplVar6 = pplRam000000011336f908;
  func_0x000107c61248();
  uVar8 = (ulong)pplVar6 & 0xfffffffffffffffc;
  if (uVar8 == 0) {
    plVar9 = (long *)0x0;
LAB_10012e1b8:
    param_1[1] = plVar9;
    if (iVar10 == 1) goto LAB_10012e1c4;
LAB_10012e1dc:
    bVar7 = 0;
    if (plVar9 != (long *)0x0) {
      bVar7 = *(byte *)(plVar9 + 2);
    }
  }
  else {
LAB_10012e19c:
    puVar1 = (undefined8 *)(uVar8 + (long)*piVar11 * 0x10);
    if (*(int *)(puVar1 + 1) == piVar11[1]) {
      plVar9 = (long *)*puVar1;
      goto LAB_10012e1b8;
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long *)0x0;
    if (iVar10 != 1) goto LAB_10012e1dc;
LAB_10012e1c4:
    bVar7 = 1;
  }
  *(byte *)(param_1 + 2) = bVar7 & 1;
  pplVar6 = param_1 + 3;
  func_0x00010012e54c(pplVar6,*(undefined8 *)(param_2 + 0x18),0,0x11be9915,0);
  *(undefined1 *)(param_1 + 7) = 0;
  if (piRam000000011383ad90 < (int *)0x2) {
    do {
      if (piRam000000011383ad90 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011383ad90 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          pplVar5 = pplVar6;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)pplVar5 - (long)pplVar6 < 1000) {
              func_0x000107c612dc();
            }
            else {
              plStack_80 = (long *)0xaaaaaaaaaaaaaaaa;
              uStack_78 = 0xaaaaaaaaaaaaaaaa;
              uStack_68 = 1000000;
              plStack_70 = (long *)0x0;
              pplVar5 = &plStack_70;
              func_0x000107c610f0(pplVar5,&plStack_80);
              iVar4 = (int)pplVar5;
              while ((iVar4 == -1 && (func_0x000107c60e5c(), *(int *)pplVar5 == 4))) {
                uStack_68 = uStack_78;
                plStack_70 = plStack_80;
                pplVar5 = &plStack_70;
                func_0x000107c610f0(pplVar5,&plStack_80);
                iVar4 = (int)pplVar5;
              }
            }
          } while (piRam000000011383ad90 == (int *)0x1);
        }
        goto LAB_10012e2f8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x11383ad90,0x10);
      if (bVar3) {
        piRam000000011383ad90 = (int *)0x1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uRam000000011383ad98 = 0xffffffff;
    func_0x000100126cd4(0x11383ad98,0);
    piRam000000011383ad90 = (int *)0x11383ad98;
  }
LAB_10012e2f8:
  piVar11 = piRam000000011383ad90;
  pplVar6 = pplRam000000011336f908;
  func_0x000107c61248();
  pplVar6 = (long **)((ulong)pplVar6 & 0xfffffffffffffffc);
  if (pplVar6 == (long **)0x0) {
    if (param_1 != (long **)0x0) {
      func_0x000100126e0c();
      goto LAB_10012e308;
    }
  }
  else {
LAB_10012e308:
    pplVar6[(long)*piVar11 * 2] = (long *)param_1;
    *(int *)(pplVar6 + (long)*piVar11 * 2 + 1) = piVar11[1];
  }
  func_0x00010012e68c();
  if ((int)pplVar6 == 0) {
    if ((bRam000000011383ad20 & 1) == 0) {
      pplVar6 = (long **)0x11383ad20;
      func_0x000107c60e48();
      if ((int)pplVar6 != 0) {
        if (lRam000000011383a988 != 0) {
          plStack_70 = (long *)&UNK_10e574b65;
          uStack_68 = 0x1d;
          func_0x000107c2ca6c(lRam000000011383a988 + 0x18,&plStack_70);
        }
        bRam000000011383ad18 = 1;
        pplVar6 = (long **)0x11383ad20;
        func_0x000107c60e4c();
      }
    }
    if ((bRam000000011383ad18 & 1) != 0) goto LAB_10012e400;
  }
  if ((param_4 == 0) && (((ulong)param_1[2] & 1) == 0)) {
    if (param_1[1] == (long *)0x0) {
      pplVar5 = pplVar6;
      if (*(char *)(param_1 + 7) == '\x01') {
        pplVar5 = param_1 + 9;
        plVar9 = *pplVar5;
        if (plVar9 != (long *)0x0) {
          plVar12 = param_1[8];
          (*(code *)PTR_FUN_11336f918)();
          func_0x000107c2ce20(plVar9,plVar12,pplVar6);
        }
        func_0x00010012ebe8();
        *(undefined1 *)(param_1 + 7) = 0;
      }
      (*(code *)PTR_FUN_11336f918)();
      param_1[8] = (long *)pplVar5;
      func_0x00010012e80c();
      param_1[9] = (long *)pplVar5;
      if ((pplVar5 != (long **)0x0) && ((long)param_1[8] < (long)pplVar5[0x45])) {
        param_1[8] = pplVar5[0x45];
      }
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  else {
    plVar9 = param_1[1];
    if ((plVar9 != (long *)0x0) && ((char)plVar9[7] == '\x01')) {
      plStack_70 = (long *)plVar9[9];
      plVar9[9] = 0;
      func_0x00010012ebe8(&plStack_70);
    }
  }
LAB_10012e400:
  plVar9 = *param_1;
  if (plVar9 != (long *)0x0) {
    if (param_1[1] == (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,param_3);
    }
    else if ((iVar10 == 1) && ((*(byte *)(param_1[1] + 2) & 1) == 0)) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  if ((param_1[3] != (long *)0x0) && (*(uint *)(param_1 + 4) < *(uint *)(param_1[3] + 3))) {
    (*(code *)PTR_FUN_11336f918)();
    pplVar6 = param_1 + 3;
    func_0x000107c2ca7c();
    plStack_70 = plVar9;
    (*(code *)(*pplVar6)[2])();
    plStack_70 = (long *)(long)iVar10;
    (*(code *)(*pplVar6)[2])(pplVar6,&UNK_10f7452da,0xd,8,&plStack_70,8);
  }
  return param_1;
code_r0x00010012df4c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(0x11383ad70,0x10);
  if (bVar3) {
    piRam000000011383ad70 = (int *)0x1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x00010012df54;
  goto LAB_10012df44;
code_r0x00010012df54:
  uRam000000011383ad78 = 0xffffffff;
  func_0x000100126cd4(0x11383ad78,0);
  piRam000000011383ad70 = (int *)0x11383ad78;
  goto LAB_10012df70;
code_r0x00010012e0a8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(0x11383ad90,0x10);
  if (bVar3) {
    piRam000000011383ad90 = (int *)0x1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto code_r0x00010012e0b0;
  goto LAB_10012e0a0;
code_r0x00010012e0b0:
  uRam000000011383ad98 = 0xffffffff;
  func_0x000100126cd4(0x11383ad98,0);
  piRam000000011383ad90 = (int *)0x11383ad98;
  goto LAB_10012e0cc;
}



/* Entry: 10012f094; end: 10012f1c7;  */

void FUN_10012f094(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_28;
  
  plVar2 = *(long **)(param_1 + 0x30);
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  (**(code **)(*plVar2 + 0x40))(plVar2,&plStack_28);
  plVar2 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))(*(long **)(param_1 + 0x30),param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x3b9) = 1;
  plVar2 = *(long **)(param_1 + 0x30);
  (**(code **)(*plVar2 + 0x58))();
  if (plVar2 != (long *)0x0) {
    if ((bRam000000011383ad00 & 1) == 0) {
      iVar1 = 0x1383ad00;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        uRam000000011383acf8 = 0xffffffff;
        func_0x000100126cd4(0x11383acf8,0);
        func_0x000107c60e4c(0x11383ad00);
      }
    }
    uVar3 = uRam000000011336f908;
    func_0x000107c61248();
    uVar3 = uVar3 & 0xfffffffffffffffc;
    if (uVar3 == 0) {
      if (param_1 == 0) goto LAB_10012f158;
      func_0x000100126e0c();
    }
    *(long *)(uVar3 + (long)(int)uRam000000011383acf8 * 0x10) = param_1;
    *(undefined4 *)(uVar3 + (long)(int)uRam000000011383acf8 * 0x10 + 8) = uRam000000011383acf8._4_4_
    ;
  }
LAB_10012f158:
  if (*(int *)(param_1 + 0x38) == 1) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x68))();
  }
  return;
}



/* Entry: 10012f1c8; end: 10012fb2b;  */

undefined8 FUN_10012f1c8(void)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if ((bRam000000011383aa40 & 1) == 0) {
    iVar3 = 0x1383aa40;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      uRam000000011383aa38 = 0xffffffff;
      func_0x000100126cd4(0x11383aa38,&UNK_10b2f8d08);
      func_0x000107c60e4c(0x11383aa40);
    }
  }
  uVar4 = uRam000000011336f908;
  func_0x000107c61248();
  if ((uVar4 & 0xfffffffffffffffc) != 0) {
    plVar1 = (long *)((uVar4 & 0xfffffffffffffffc) + (long)(int)uRam000000011383aa38 * 0x10);
    if (((int)plVar1[1] == uRam000000011383aa38._4_4_) && (*plVar1 != 0)) goto LAB_10012f2b0;
  }
  puVar5 = (undefined4 *)0x4;
  func_0x000107c60e20();
  *puVar5 = 0;
  uVar4 = uRam000000011336f908;
  func_0x000107c61248();
  if ((uVar4 & 0xfffffffffffffffc) == 0) {
LAB_10012f274:
    lVar6 = 0;
    uVar4 = uRam000000011336f908;
    func_0x000107c61248();
    uVar4 = uVar4 & 0xfffffffffffffffc;
    if (uVar4 != 0) goto LAB_10012f288;
LAB_10012f300:
    if (puVar5 != (undefined4 *)0x0) {
      func_0x000100126e0c();
      goto LAB_10012f288;
    }
  }
  else {
    plVar1 = (long *)((uVar4 & 0xfffffffffffffffc) + (long)(int)uRam000000011383aa38 * 0x10);
    if ((int)plVar1[1] != uRam000000011383aa38._4_4_) goto LAB_10012f274;
    lVar6 = *plVar1;
    uVar4 = uRam000000011336f908;
    func_0x000107c61248();
    uVar4 = uVar4 & 0xfffffffffffffffc;
    if (uVar4 == 0) goto LAB_10012f300;
LAB_10012f288:
    *(undefined4 **)(uVar4 + (long)(int)uRam000000011383aa38 * 0x10) = puVar5;
    *(int *)(uVar4 + (long)(int)uRam000000011383aa38 * 0x10 + 8) = uRam000000011383aa38._4_4_;
  }
  if (lVar6 != 0) {
    func_0x000107c60e14(lVar6);
  }
LAB_10012f2b0:
  uVar4 = uRam000000011336f908;
  func_0x000107c61248();
  if ((uVar4 & 0xfffffffffffffffc) != 0) {
    puVar2 = (undefined8 *)((uVar4 & 0xfffffffffffffffc) + (long)(int)uRam000000011383aa38 * 0x10);
    if (*(int *)(puVar2 + 1) == uRam000000011383aa38._4_4_) {
      return *puVar2;
    }
  }
  return 0;
}



/* Entry: 10012fb2c; end: 10012fb33;  */

undefined8 FUN_10012fb2c(void)

{
  return 0;
}



/* Entry: 10012fb34; end: 1001302f3;  */

void FUN_10012fb34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((bRam000000011336f9a8 & 0x19) != 0) &&
     (func_0x000107c2ca88(0x49,0x11336f9a8,&UNK_10f745202,0,0,8,0),
     (bRam000000011336f9a8 & 0x19) != 0)) {
    func_0x000107c2ca88(0x42,0x11336f9a8,&UNK_10f745214,0,0,0,0);
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x18))(*(long **)(param_1 + 0x98),param_1);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f745214,0,0,0,0);
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x38))(*(long **)(param_1 + 0x98),param_1 + 0x68);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    func_0x000107c2ca88(0x42,0x11336f9a8,&UNK_10f745214,0,0,0,0);
  }
  do {
    if ((*(char *)(param_1 + 0x90) != '\0') || (*(char *)(param_1 + 0xc0) != '\0')) break;
    lVar10 = *(long *)(param_1 + 0xa0);
    iVar6 = (int)lVar10 + 0xa8;
    func_0x000107c61264();
    if (iVar6 == 0) {
      piVar9 = *(int **)(lVar10 + 0xe8);
      if (piVar9 != (int *)0x0) goto LAB_10012fc38;
LAB_10012fc74:
      func_0x000107c61268(lVar10 + 0xa8);
    }
    else {
      func_0x000107c2cfbc(lVar10 + 0xa8);
      piVar9 = *(int **)(lVar10 + 0xe8);
      if (piVar9 == (int *)0x0) goto LAB_10012fc74;
LAB_10012fc38:
      uVar7 = (ulong)*(uint *)(*(long *)(piVar9 + 2) + 0x10);
      FUN_100126324(uVar7,*piVar9 == 1);
      func_0x000107c61268(lVar10 + 0xa8);
      if ((uVar7 & 1) != 0) break;
    }
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    FUN_1001ab334(&uStack_90);
    uStack_88 = 0xaaaaaaaaaaaaaa00;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if ((**(uint **)(*(long *)(param_1 + 0xa0) + 0x30) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0xbc) != iVar6) {
LAB_10012fcc4:
        if ((bRam000000011336f8f9 & 1) != 0) {
          FUN_10012bb38(iVar6);
        }
        *(int *)(param_1 + 0xbc) = iVar6;
      }
    }
    else {
      iVar6 = 1;
      if (*(int *)(param_1 + 0xbc) != 1) goto LAB_10012fcc4;
    }
    plStack_a0 = (long *)0xaaaaaaaaaaaaaaaa;
    lStack_98 = -0x5555555555555556;
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))
              (&plStack_a0,*(long **)(param_1 + 0x98),param_1);
    if (plStack_a0 == (long *)0x0) {
      if ((*(char *)(param_1 + 0x90) == '\0') && (*(char *)(param_1 + 0xc0) == '\0')) {
        lVar10 = *(long *)(param_1 + 0xa0);
        iVar6 = (int)lVar10 + 0xa8;
        func_0x000107c61264();
        if (iVar6 == 0) {
          piVar9 = *(int **)(lVar10 + 0xe8);
          if (piVar9 != (int *)0x0) goto LAB_100130014;
LAB_100130050:
          func_0x000107c61268(lVar10 + 0xa8);
        }
        else {
          func_0x000107c2cfbc(lVar10 + 0xa8);
          piVar9 = *(int **)(lVar10 + 0xe8);
          if (piVar9 == (int *)0x0) goto LAB_100130050;
LAB_100130014:
          uVar7 = (ulong)*(uint *)(*(long *)(piVar9 + 2) + 0x10);
          FUN_100126324(uVar7,*piVar9 == 1);
          func_0x000107c61268(lVar10 + 0xa8);
          if ((uVar7 & 1) != 0) goto LAB_10012fe20;
        }
        if ((bRam000000011336f9a8 & 0x19) == 0) {
        }
        else {
          func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f745214,0,0,0,0);
        }
        if ((char)uStack_88 == '\x01') {
          func_0x000107c2ce0c(&uStack_80);
          uStack_88 = uStack_88 & 0xffffffffffffff00;
        }
        (**(code **)(**(long **)(param_1 + 0x98) + 0x38))(*(long **)(param_1 + 0x98),param_1 + 0x68)
        ;
        if ((bRam000000011336f9a8 & 0x19) != 0) {
          func_0x000107c2ca88(0x42,0x11336f9a8,&UNK_10f745214,0,0,0,0);
        }
        goto LAB_10012ff70;
      }
LAB_10012fe20:
      bVar4 = true;
      plVar8 = plStack_a0;
    }
    else {
      plStack_a8 = plStack_a0;
      func_0x000100123990(&plStack_a8);
      lStack_c8 = lStack_98;
      plStack_d0 = plStack_a0;
      plStack_a0 = (long *)0x0;
      lStack_98 = 0;
      func_0x0001001ac16c(&plStack_b8,*(undefined8 *)(param_1 + 0xa0),&plStack_d0);
      plVar8 = plStack_a0;
      if (plStack_a0 == (long *)0x0) {
        plStack_a0 = plStack_b8;
LAB_10012fe3c:
        lStack_98 = lStack_b0;
        plStack_b8 = (long *)0x0;
        lStack_b0 = 0;
      }
      else {
        plStack_a0 = (long *)0x0;
        if (lStack_98 != 0) {
          func_0x0001001b6dcc(lStack_98,plVar8);
        }
        plVar1 = plVar8 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        plVar8 = plStack_a0;
        plStack_a0 = plStack_b8;
        plStack_b8 = (long *)0x0;
        if (plVar8 == (long *)0x0) goto LAB_10012fe3c;
        plVar1 = plVar8 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        lStack_98 = lStack_b0;
        plVar8 = plStack_b8;
        lStack_b0 = 0;
        if (plStack_b8 != (long *)0x0) {
          plStack_b8 = (long *)0x0;
          plVar1 = plVar8 + 1;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          if (plStack_b8 != (long *)0x0) {
            plVar8 = plStack_b8 + 1;
            do {
              iVar6 = (int)*plVar8 + -1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = iVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plStack_b8 + 0x20))();
            }
          }
        }
      }
      plVar8 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plStack_d0 = (long *)0x0;
        if (lStack_c8 != 0) {
          func_0x0001001b6dcc(lStack_c8,plVar8);
        }
        plVar1 = plVar8 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (plStack_d0 != (long *)0x0) {
          plVar8 = plStack_d0 + 1;
          do {
            iVar6 = (int)*plVar8 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *(int *)plVar8 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plStack_d0 + 0x20))();
          }
        }
      }
      plStack_b8 = plStack_a0;
      func_0x000100123990(&plStack_b8);
      lStack_d8 = lStack_98;
      plStack_e0 = plStack_a0;
      plStack_a0 = (long *)0x0;
      lStack_98 = 0;
      (**(code **)(**(long **)(param_1 + 0x98) + 0x28))(*(long **)(param_1 + 0x98),&plStack_e0);
      plVar8 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plStack_e0 = (long *)0x0;
        if (lStack_d8 != 0) {
          func_0x0001001b6dcc(lStack_d8,plVar8);
        }
        plVar1 = plVar8 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (plStack_e0 != (long *)0x0) {
          plVar8 = plStack_e0 + 1;
          do {
            iVar6 = (int)*plVar8 + -1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *(int *)plVar8 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plStack_e0 + 0x20))();
          }
        }
      }
      if (plStack_a0 != (long *)0x0) goto LAB_1001302bc;
      FUN_100126324(*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x10),1);
LAB_10012ff70:
      bVar4 = false;
      plVar8 = plStack_a0;
    }
    plStack_a0 = plVar8;
    if (plVar8 != (long *)0x0) {
      plStack_a0 = (long *)0x0;
      if (lStack_98 != 0) {
        func_0x0001001b6dcc(lStack_98,plVar8);
      }
      plVar1 = plVar8 + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      if (plStack_a0 != (long *)0x0) {
        plVar8 = plStack_a0 + 1;
        do {
          iVar6 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plStack_a0 + 0x20))();
        }
      }
    }
    if ((char)uStack_88 == '\x01') {
      func_0x000107c2ce0c(&uStack_80);
    }
    func_0x000107c422b4(uStack_90);
  } while (!bVar4);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x40))(*(long **)(param_1 + 0x98),param_1);
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))();
  }
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if (((bRam000000011336f9a8 & 0x19) != 0) &&
     (func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f745214,0,0,0,0),
     (bRam000000011336f9a8 & 0x19) != 0)) {
    func_0x000107c2ca88(0x49,0x11336f9a8,&UNK_10f745228,0,0,8,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_1001302bc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x1001302c0);
  (*pcVar5)();
}



/* Entry: 1001302f4; end: 100130387;  */

void FUN_1001302f4(long param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_1001307c0(auStack_38,&UNK_10f7451a7);
  FUN_10012c9dc(auStack_38);
  if (cStack_21 < '\0') {
    func_0x000107c60e14(auStack_38[0]);
  }
  FUN_1001307f8(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  func_0x00010013288c(param_1 + 8);
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x1a0) == '\x01') {
    func_0x00010012c800(*(long *)(param_1 + 0x30) + 0x1a8);
  }
  return;
}



/* Entry: 100130388; end: 1001307bf;  */

void FUN_100130388(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_480 [8];
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong auStack_468 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = auStack_468;
  uStack_470 = param_3;
  func_0x000107c610bc(puVar10,0xaa,0x400);
  uStack_478 = uStack_470;
  func_0x000107c60e5c();
  uVar3 = *puVar10;
  func_0x000107c60e5c();
  *(undefined4 *)puVar10 = 0;
  puVar10 = auStack_468;
  func_0x000107c616d0(puVar10,0x400,param_2,uStack_478);
  puVar11 = puVar10;
  if ((uint)puVar10 < 0x400) {
    uVar9 = (ulong)puVar10 & 0xffffffff;
    cVar2 = *(char *)((long)param_1 + 0x17);
    uVar7 = (ulong)cVar2;
    if ((long)uVar7 < 0) {
      uVar7 = param_1[1];
      uVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar8 = uVar13 - uVar7;
    }
    else {
      uVar13 = 0x16;
      uVar8 = 0x16 - uVar7;
    }
    if (uVar8 < uVar9) {
      if (0x7ffffffffffffff6 - uVar13 < (uVar9 - uVar13) + uVar7) goto LAB_1001307bc;
      if (cVar2 < '\0') {
        puVar10 = (ulong *)*param_1;
        if (0x3ffffffffffffff2 < uVar13) goto LAB_100130630;
LAB_100130460:
        uVar6 = uVar7 + uVar9;
        if (uVar7 + uVar9 <= uVar13 * 2) {
          uVar6 = uVar13 * 2;
        }
        uVar1 = 0x19;
        if ((uVar6 | 7) != 0x17) {
          uVar1 = (uVar6 | 7) + 1;
        }
        uVar8 = 0x17;
        if (0x16 < uVar6) {
          uVar8 = uVar1;
        }
        uVar6 = uVar8;
        func_0x000107c60e20();
      }
      else {
        puVar10 = param_1;
        if (uVar13 < 0x3ffffffffffffff3) goto LAB_100130460;
LAB_100130630:
        uVar8 = 0x7ffffffffffffff7;
        uVar6 = uVar8;
        func_0x000107c60e20();
      }
      if (uVar7 != 0) {
        func_0x000107c610b8(uVar6,puVar10,uVar7);
      }
      puVar11 = (ulong *)(uVar6 + uVar7);
      func_0x000107c610b4(puVar11,auStack_468,uVar9);
      if (uVar13 != 0x16) {
        func_0x000107c60e14();
        puVar11 = puVar10;
      }
      *param_1 = uVar6;
      param_1[1] = uVar7 + uVar9;
      param_1[2] = uVar8 | 0x8000000000000000;
      *(undefined1 *)(uVar6 + uVar7 + uVar9) = 0;
    }
    else if ((uint)puVar10 != 0) {
      puVar10 = param_1;
      if (cVar2 < '\0') {
        puVar10 = (ulong *)*param_1;
      }
      puVar11 = (ulong *)((long)puVar10 + uVar7);
      func_0x000107c610b8(puVar11,auStack_468,uVar9);
      uVar7 = uVar7 + uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar7;
        *(undefined1 *)((long)puVar10 + uVar7) = 0;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar7 & 0x7f;
        *(undefined1 *)((long)puVar10 + uVar7) = 0;
      }
    }
  }
  else {
    uVar12 = 0x400;
    while( true ) {
      if ((int)puVar10 < 0) {
        func_0x000107c60e5c();
        if (((int)*puVar11 != 0) && (func_0x000107c60e5c(), (int)*puVar11 != 0x54))
        goto LAB_100130768;
        uVar12 = uVar12 * 2;
      }
      else {
        uVar12 = (int)puVar10 + 1;
      }
      if (0x2000000 < (int)uVar12) goto LAB_100130768;
      puVar5 = (ulong *)(ulong)uVar12;
      func_0x000107c60e20();
      func_0x000107c60ee4();
      uStack_478 = uStack_470;
      puVar10 = puVar5;
      func_0x000107c616d0(puVar5,(ulong *)(ulong)uVar12,param_2);
      iVar4 = (int)puVar10;
      if ((-1 < iVar4) && (iVar4 < (int)uVar12)) break;
      puVar11 = puVar10;
      if (puVar5 != (ulong *)0x0) {
        func_0x000107c60e14();
        puVar11 = puVar5;
      }
    }
    uVar9 = (ulong)puVar10 & 0xffffffff;
    cVar2 = *(char *)((long)param_1 + 0x17);
    uVar7 = (ulong)cVar2;
    if ((long)uVar7 < 0) {
      uVar7 = param_1[1];
      uVar13 = (param_1[2] & 0x7fffffffffffffff) - 1;
      if (uVar9 <= uVar13 - uVar7) goto LAB_1001306a4;
LAB_100130554:
      if (0x7ffffffffffffff6 - uVar13 < (uVar9 - uVar13) + uVar7) goto LAB_1001307bc;
      if (cVar2 < '\0') {
        puVar11 = (ulong *)*param_1;
        if (0x3ffffffffffffff2 < uVar13) goto LAB_100130704;
LAB_100130588:
        uVar6 = uVar7 + uVar9;
        if (uVar7 + uVar9 <= uVar13 * 2) {
          uVar6 = uVar13 * 2;
        }
        uVar1 = 0x19;
        if ((uVar6 | 7) != 0x17) {
          uVar1 = (uVar6 | 7) + 1;
        }
        uVar8 = 0x17;
        if (0x16 < uVar6) {
          uVar8 = uVar1;
        }
        uVar6 = uVar8;
        func_0x000107c60e20();
      }
      else {
        puVar11 = param_1;
        if (uVar13 < 0x3ffffffffffffff3) goto LAB_100130588;
LAB_100130704:
        uVar8 = 0x7ffffffffffffff7;
        uVar6 = uVar8;
        func_0x000107c60e20();
      }
      if (uVar7 != 0) {
        func_0x000107c610b8(uVar6,puVar11,uVar7);
      }
      puVar10 = (ulong *)(uVar6 + uVar7);
      func_0x000107c610b4(puVar10,puVar5,uVar9);
      if (uVar13 != 0x16) {
        func_0x000107c60e14();
        puVar10 = puVar11;
      }
      *param_1 = uVar6;
      param_1[1] = uVar7 + uVar9;
      param_1[2] = uVar8 | 0x8000000000000000;
      *(undefined1 *)(uVar6 + uVar7 + uVar9) = 0;
    }
    else {
      uVar13 = 0x16;
      if (0x16 - uVar7 < uVar9) goto LAB_100130554;
LAB_1001306a4:
      if (iVar4 != 0) {
        puVar11 = param_1;
        if (cVar2 < '\0') {
          puVar11 = (ulong *)*param_1;
        }
        puVar10 = (ulong *)((long)puVar11 + uVar7);
        func_0x000107c610b8(puVar10,puVar5,uVar9);
        uVar7 = uVar7 + uVar9;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar7;
          *(undefined1 *)((long)puVar11 + uVar7) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar7 & 0x7f;
          *(undefined1 *)((long)puVar11 + uVar7) = 0;
        }
      }
    }
    puVar11 = puVar10;
    if (puVar5 != (ulong *)0x0) {
      func_0x000107c60e14();
      puVar11 = puVar5;
    }
  }
LAB_100130768:
  func_0x000107c60e5c();
  *(int *)puVar11 = (int)uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar10 = puVar11;
LAB_1001307bc:
  func_0x000104bd47d4();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_100130388(extraout_x8,puVar10,auStack_480);
  return;
}



/* Entry: 1001307c0; end: 1001307f7;  */

void FUN_1001307c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100130388(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1001307f8; end: 10013132b;  */

void FUN_1001307f8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (piRam000000011383ad40 < (int *)0x2) {
    do {
      if (piRam000000011383ad40 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011383ad40 == (int *)0x1) {
          piVar4 = param_1;
          (*(code *)PTR_FUN_11336f918)();
          piVar5 = piVar4;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)piVar5 - (long)piVar4 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_60 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 0xaaaaaaaaaaaaaaaa;
              uStack_48 = 1000000;
              uStack_50 = 0;
              piVar5 = (int *)&uStack_50;
              func_0x000107c610f0(piVar5,&uStack_60);
              iVar3 = (int)piVar5;
              while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar5 == 4))) {
                uStack_48 = uStack_58;
                uStack_50 = uStack_60;
                piVar5 = (int *)&uStack_50;
                func_0x000107c610f0(piVar5,&uStack_60);
                iVar3 = (int)piVar5;
              }
            }
          } while (piRam000000011383ad40 == (int *)0x1);
        }
        goto LAB_100130908;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11383ad40,0x10);
      if (bVar2) {
        piRam000000011383ad40 = (int *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uRam000000011383ad48 = 0xffffffff;
    func_0x000100126cd4(0x11383ad48,0);
    piRam000000011383ad40 = (int *)0x11383ad48;
  }
LAB_100130908:
  piVar5 = piRam000000011383ad40;
  uVar6 = uRam000000011336f908;
  func_0x000107c61248();
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (uVar6 == 0) {
    if (param_1 == (int *)0x0) {
      return;
    }
    func_0x000100126e0c();
  }
  *(int **)(uVar6 + (long)*piVar5 * 0x10) = param_1;
  *(int *)(uVar6 + (long)*piVar5 * 0x10 + 8) = piVar5[1];
  return;
}



/* Entry: 10013132c; end: 1001314f7;  */

long * FUN_10013132c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    plVar8 = (long *)param_1[1];
  }
  else {
    plVar2 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    if (plVar2 == plVar8) {
joined_r0x0001001313e8:
      if (plVar2 != plVar8) {
        return param_1;
      }
    }
    else {
      uVar5 = (long)plVar8 + (-8 - (long)plVar2);
      uVar4 = (uint)uVar5;
      if ((~uVar4 & 0x18) != 0) {
        uVar6 = (ulong)((uVar4 >> 3) + 1) & 3;
        do {
          if (*plVar2 == param_2) goto joined_r0x0001001313e8;
          plVar2 = plVar2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (0x17 < uVar5) {
        plVar2 = plVar2 + 2;
        do {
          if (plVar2[-2] == param_2) {
            plVar2 = plVar2 + -2;
            goto joined_r0x0001001313e8;
          }
          if (plVar2[-1] == param_2) {
            plVar2 = plVar2 + -1;
            goto joined_r0x0001001313e8;
          }
          if (*plVar2 == param_2) goto joined_r0x0001001313e8;
          if (plVar2[1] == param_2) {
            plVar2 = plVar2 + 1;
            goto joined_r0x0001001313e8;
          }
          plVar9 = plVar2 + 2;
          plVar2 = plVar2 + 4;
        } while (plVar9 != plVar8);
      }
    }
  }
  param_1[5] = param_1[5] + 1;
  if (plVar8 < (long *)param_1[2]) {
    plVar9 = plVar8 + 1;
    *plVar8 = param_2;
    plVar8 = param_1;
  }
  else {
    lVar7 = (long)plVar8 - *param_1;
    uVar5 = (lVar7 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
      func_0x000107c2cb4c();
LAB_1001314f4:
      func_0x000107c35c58();
      return (long *)param_1[0x28];
    }
    uVar3 = param_1[2] - *param_1;
    uVar6 = (long)uVar3 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar1 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_1001314f4;
      lVar1 = uVar6 << 3;
      func_0x000107c60e20();
    }
    plVar8 = (long *)(lVar1 + lVar7);
    plVar9 = plVar8 + 1;
    *plVar8 = param_2;
    lVar7 = (long)plVar8 - (param_1[1] - *param_1);
    func_0x000107c610b4(lVar7);
    plVar2 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar9;
    param_1[2] = lVar1 + uVar6 * 8;
    plVar8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      func_0x000107c60e14();
      param_1[1] = (long)plVar9;
      return plVar2;
    }
  }
  param_1[1] = (long)plVar9;
  return plVar8;
}



/* Entry: 1001314f8; end: 1001314ff;  */

undefined8 FUN_1001314f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 100131500; end: 10013150f;  */

void FUN_100131500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010013150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
  return;
}



/* Entry: 100131510; end: 10013151f;  */

void FUN_100131510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010013151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x140) + 0x30))();
  return;
}



/* Entry: 100131520; end: 100131527;  */

void FUN_100131520(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



/* Entry: 100131528; end: 1001316c7;  */

undefined8 * FUN_100131528(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110cd5ad8;
  param_1[1] = param_2;
  if ((bRam000000011383ad10 & 1) == 0) {
    iVar2 = 0x1383ad10;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uRam000000011383ad08 = 0xffffffff;
      func_0x000100126cd4(0x11383ad08,0);
      func_0x000107c60e4c(0x11383ad10);
    }
  }
  uVar3 = uRam000000011336f908;
  func_0x000107c61248();
  if ((uVar3 & 0xfffffffffffffffc) != 0) {
    plVar1 = (long *)((uVar3 & 0xfffffffffffffffc) + (long)(int)uRam000000011383ad08 * 0x10);
    if ((int)plVar1[1] == uRam000000011383ad08._4_4_) {
      lVar4 = *plVar1;
      param_1[2] = lVar4;
      if (lVar4 != 0) {
        if ((bRam000000011383ad10 & 1) == 0) {
          iVar2 = 0x1383ad10;
          func_0x000107c60e48();
          if (iVar2 != 0) {
            uRam000000011383ad08 = 0xffffffff;
            func_0x000100126cd4(0x11383ad08,0);
            func_0x000107c60e4c(0x11383ad10);
          }
        }
        uVar3 = uRam000000011336f908;
        func_0x000107c61248();
        uVar3 = uVar3 & 0xfffffffffffffffc;
        if (uVar3 != 0) {
          *(undefined8 *)(uVar3 + (long)(int)uRam000000011383ad08 * 0x10) = 0;
          *(int *)(uVar3 + (long)(int)uRam000000011383ad08 * 0x10 + 8) = uRam000000011383ad08._4_4_;
        }
      }
      goto LAB_1001315d4;
    }
  }
  param_1[2] = 0;
LAB_1001315d4:
  if ((bRam000000011383ad10 & 1) == 0) {
    iVar2 = 0x1383ad10;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uRam000000011383ad08 = 0xffffffff;
      func_0x000100126cd4(0x11383ad08,0);
      func_0x000107c60e4c(0x11383ad10);
    }
  }
  uVar3 = uRam000000011336f908;
  func_0x000107c61248();
  uVar3 = uVar3 & 0xfffffffffffffffc;
  if (uVar3 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    func_0x000100126e0c();
  }
  *(undefined8 **)(uVar3 + (long)(int)uRam000000011383ad08 * 0x10) = param_1;
  *(int *)(uVar3 + (long)(int)uRam000000011383ad08 * 0x10 + 8) = uRam000000011383ad08._4_4_;
  return param_1;
}



/* Entry: 1001316c8; end: 1001317cf;  */

undefined8 * FUN_1001316c8(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam000000011383ac60 & 1) == 0) {
    iVar4 = 0x1383ac60;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      uRam000000011383ac58 = 0xffffffff;
      func_0x000100126cd4(0x11383ac58,0);
      func_0x000107c60e4c(0x11383ac60);
    }
  }
  plVar5 = plRam000000011336f908;
  func_0x000107c61248();
  uVar7 = 0;
  if (((ulong)plVar5 & 0xfffffffffffffffc) != 0) {
    puVar1 = (undefined8 *)
             (((ulong)plVar5 & 0xfffffffffffffffc) + (long)(int)uRam000000011383ac58 * 0x10);
    if (*(int *)(puVar1 + 1) == uRam000000011383ac58._4_4_) {
      uVar7 = *puVar1;
    }
    else {
      uVar7 = 0;
    }
  }
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_1001317d0();
  lVar8 = *plVar5;
  param_1[3] = lVar8;
  if (lVar8 != 0) {
    piVar6 = (int *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  piVar6 = (int *)0x8;
  func_0x000107c60e20();
  *piVar6 = 0;
  *(undefined1 *)(piVar6 + 1) = 0;
  if (piVar6 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = piVar6;
  param_1[5] = param_1;
  return param_1;
}



/* Entry: 1001317d0; end: 100131987;  */

void FUN_1001317d0(int *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (piRam000000011383c5f0 < (int *)0x2) {
    do {
      if (piRam000000011383c5f0 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011383c5f0 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          piVar6 = param_1;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)piVar6 - (long)param_1 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_50 = 0xaaaaaaaaaaaaaaaa;
              uStack_48 = 0xaaaaaaaaaaaaaaaa;
              uStack_38 = 1000000;
              uStack_40 = 0;
              piVar6 = (int *)&uStack_40;
              func_0x000107c610f0(piVar6,&uStack_50);
              iVar5 = (int)piVar6;
              while ((iVar5 == -1 && (func_0x000107c60e5c(), *piVar6 == 4))) {
                uStack_38 = uStack_48;
                uStack_40 = uStack_50;
                piVar6 = (int *)&uStack_40;
                func_0x000107c610f0(piVar6,&uStack_50);
                iVar5 = (int)piVar6;
              }
            }
          } while (piRam000000011383c5f0 == (int *)0x1);
        }
        goto LAB_1001318d8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x11383c5f0,0x10);
      if (bVar3) {
        piRam000000011383c5f0 = (int *)0x1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uRam000000011383c5f8 = 0xffffffff;
    func_0x000100126cd4(0x11383c5f8,0);
    piRam000000011383c5f0 = (int *)0x11383c5f8;
  }
LAB_1001318d8:
  piVar6 = piRam000000011383c5f0;
  uVar7 = uRam000000011336f908;
  func_0x000107c61248();
  if ((((uVar7 & 0xfffffffffffffffc) != 0) &&
      (plVar1 = (long *)((uVar7 & 0xfffffffffffffffc) + (long)*piVar6 * 0x10),
      (int)plVar1[1] == piVar6[1])) && (*plVar1 != 0)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0,0x100131924);
  (*pcVar4)();
}



/* Entry: 100131988; end: 100131dc7;  */

void FUN_100131988(long *param_1,undefined8 *param_2)

{
  char cVar1;
  int **ppiVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piStack_80;
  undefined1 auStack_78 [32];
  int *piStack_58;
  int *piStack_50;
  int **ppiStack_48;
  
  if (puRam00000001137f50e8 == (undefined *)0x0) {
    puVar9 = &DAT_10f3b28b3;
    FUN_100131dc8();
    plVar8 = param_1;
    puRam00000001137f50e8 = puVar9;
    FUN_10013b614();
    iVar5 = (int)plVar8;
  }
  else {
    plVar8 = param_1;
    FUN_10013b614();
    iVar5 = (int)plVar8;
  }
  if (iVar5 != 0) {
    piStack_58 = (int *)0x0;
    piVar6 = (int *)0x8;
    func_0x000107c60e20();
    *piVar6 = 0;
    *(undefined1 *)(piVar6 + 1) = 0;
    if (piVar6 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppiStack_48 = &piStack_58;
    piStack_50 = piVar6;
    if ((bRam00000001137f5100 & 1) == 0) {
      iVar5 = 0x137f5100;
      func_0x000107c60e48();
      if (iVar5 != 0) {
        uRam00000001137f50f8 = 0xffffffff;
        func_0x000100126cd4(0x1137f50f8,0);
        func_0x000107c60e4c(0x1137f5100);
      }
    }
    uVar7 = uRam000000011336f908;
    func_0x000107c61248();
    if ((uVar7 & 0xfffffffffffffffc) != 0) {
      puVar12 = (undefined8 *)
                ((uVar7 & 0xfffffffffffffffc) + (long)(int)uRam00000001137f50f8 * 0x10);
      if ((*(int *)(puVar12 + 1) == uRam00000001137f50f8._4_4_) &&
         (puVar12 = (undefined8 *)*puVar12, puVar12 != (undefined8 *)0x0)) {
        piVar6 = (int *)0x58;
        func_0x000107c60e20();
        *piVar6 = 1;
        *(undefined **)(piVar6 + 2) = &UNK_10b303a40;
        *(undefined **)(piVar6 + 4) = &UNK_10b303a9c;
        piVar6[6] = 0x142430;
        piVar6[7] = 1;
        *(undefined **)(piVar6 + 8) = &UNK_10b3031cc;
        *(long **)(piVar6 + 10) = param_1;
        uVar13 = *param_2;
        uVar15 = param_2[3];
        uVar14 = param_2[2];
        *(undefined8 *)(piVar6 + 0xe) = param_2[1];
        *(undefined8 *)(piVar6 + 0xc) = uVar13;
        *(undefined8 *)(piVar6 + 0x12) = uVar15;
        *(undefined8 *)(piVar6 + 0x10) = uVar14;
        piVar6[0x14] = 0;
        piVar6[0x15] = 0;
        piVar10 = (int *)puVar12[1];
        if (piVar10 != (int *)0x0) {
          do {
            iVar5 = *piVar10;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar5 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x100131dc0);
            (*pcVar3)();
          }
          *(int **)(piVar6 + 0x14) = piVar10;
        }
        *(undefined1 *)(piStack_50 + 1) = 1;
        piVar10 = (int *)0x8;
        func_0x000107c60e20();
        *piVar10 = 0;
        *(undefined1 *)(piVar10 + 1) = 0;
        if (piVar10 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (piStack_50 != (int *)0x0) {
          do {
            iVar5 = *piStack_50;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
            if (bVar4) {
              *piStack_50 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar5 + -1 == 0) {
            piStack_50 = piVar10;
            func_0x000107c60e14();
            piVar10 = piStack_50;
          }
        }
        piStack_50 = piVar10;
        piVar10 = piStack_58;
        piStack_58 = (int *)0x0;
        if (piVar10 != (int *)0x0) {
          do {
            iVar5 = *piVar10;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piVar10 + 4))();
          }
          if (piStack_58 != (int *)0x0) {
            do {
              iVar5 = *piStack_58;
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
              if (bVar4) {
                *piStack_58 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar5 + -1 == 0) {
              piVar10 = piStack_58 + 4;
              piStack_58 = piVar6;
              (**(code **)piVar10)();
              piVar6 = piStack_58;
            }
          }
        }
        piStack_58 = piVar6;
        puVar11 = (undefined8 *)param_1[3];
        FUN_10012dd4c(auStack_78,&UNK_10f568da9,&UNK_10f744664,0x86);
        ppiVar2 = ppiStack_48;
        piVar6 = piStack_50;
        piStack_80 = (int *)0x0;
        piVar10 = piStack_80;
        if (piStack_58 != (int *)0x0) {
          if (piStack_50 != (int *)0x0) {
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
              if (bVar4) {
                *piStack_50 = *piStack_50 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
              if (bVar4) {
                *piStack_50 = *piStack_50 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            do {
              iVar5 = *piStack_50;
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
              if (bVar4) {
                *piStack_50 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000107c60e14(piStack_50);
            }
          }
          piVar10 = (int *)0x40;
          func_0x000107c60e20();
          *piVar10 = 1;
          *(undefined **)(piVar10 + 2) = &UNK_10b303c90;
          *(undefined **)(piVar10 + 4) = &UNK_10b303cf0;
          *(undefined **)(piVar10 + 6) = &UNK_10b303d3c;
          *(undefined **)(piVar10 + 8) = &UNK_10b303bd8;
          piVar10[10] = 0;
          piVar10[0xb] = 0;
          *(int **)(piVar10 + 0xc) = piVar6;
          *(int ***)(piVar10 + 0xe) = ppiVar2;
          if (piStack_80 != (int *)0x0) {
            do {
              iVar5 = *piStack_80;
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piStack_80,0x10);
              if (bVar4) {
                *piStack_80 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar5 + -1 == 0) {
              piVar6 = piStack_80 + 4;
              piStack_80 = piVar10;
              (**(code **)piVar6)();
              piVar10 = piStack_80;
            }
          }
        }
        piStack_80 = piVar10;
        (**(code **)*puVar11)(puVar11,auStack_78,&piStack_80,*puVar12);
        if (piStack_80 != (int *)0x0) {
          do {
            iVar5 = *piStack_80;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piStack_80,0x10);
            if (bVar4) {
              *piStack_80 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar5 + -1 == 0) {
            (**(code **)(piStack_80 + 4))();
          }
        }
      }
    }
    plVar8 = (long *)*param_1;
    bVar4 = true;
    if (plVar8[2] - plVar8[1] != 8) {
      bVar4 = (int)param_1[1] == 1;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,bVar4,0x7fffffffffffffff);
    func_0x000107c2cc14(param_1);
    ppiStack_48 = (int **)0x0;
    *(undefined1 *)(piStack_50 + 1) = 1;
    if (piStack_50 != (int *)0x0) {
      do {
        iVar5 = *piStack_50;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
        if (bVar4) {
          *piStack_50 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 + -1 == 0) {
        func_0x000107c60e14();
      }
    }
    if (piStack_58 != (int *)0x0) {
      do {
        iVar5 = *piStack_58;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
        if (bVar4) {
          *piStack_58 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(piStack_58 + 4))();
      }
    }
  }
  if (puRam00000001137f50f0 != (undefined *)0x0) {
    return;
  }
  puVar9 = &DAT_10f3b28b3;
  FUN_100131dc8();
  puRam00000001137f50f0 = puVar9;
  return;
}



/* Entry: 100131dc8; end: 100132a2f;  */

long FUN_100131dc8(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam000000011383cb48 & 1) == 0) {
    iVar1 = 0x1383cb48;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000100131f68(0x11383c6f0,0);
      func_0x000107c60e4c(0x11383cb48);
    }
  }
  if (uRam0000000113370be8 != 0) {
    lVar3 = 0x11336f928;
    uVar4 = uRam0000000113370be8;
    do {
      uVar2 = *(undefined8 *)(lVar3 + 8);
      func_0x000107c613c0(uVar2,param_1);
      if ((int)uVar2 == 0) {
        if (lVar3 != 0) {
          return lVar3;
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar1 = 0x1383c6f8;
  func_0x000107c61264();
  uVar4 = uRam0000000113370be8;
  if (iVar1 != 0) {
    func_0x000107c2cfbc(0x11383c6f8);
    uVar4 = uRam0000000113370be8;
  }
  uRam0000000113370be8 = uVar4;
  if (uVar4 != 0) {
    lVar3 = 0x11336f928;
    do {
      uVar2 = *(undefined8 *)(lVar3 + 8);
      func_0x000107c613c0(uVar2,param_1);
      if ((int)uVar2 == 0) {
        if (lVar3 != 0) goto LAB_100131ecc;
        break;
      }
      lVar3 = lVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = uRam0000000113370be8;
  lVar3 = 0x11336f928;
  if (uRam0000000113370be8 < 300) {
    func_0x000107c613c8();
    lVar3 = uVar4 * 0x10 + 0x11336f928;
    (&PTR_DAT_11336f930)[uVar4 * 2] = param_1;
    if ((bRam000000011383cb48 & 1) == 0) {
      iVar1 = 0x1383cb48;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        func_0x000100131f68(0x11383c6f0,0);
        func_0x000107c60e4c(0x11383cb48);
      }
    }
    func_0x00010013b4e0(0x11383c6f0,lVar3);
    uRam0000000113370be8 = uVar4 + 1;
  }
LAB_100131ecc:
  func_0x000107c61268(0x11383c6f8);
  return lVar3;
}



/* Entry: 100132a30; end: 100132a77;  */

long FUN_100132a30(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = (double)*(long *)(*(long *)(param_1 + 0x30) + 0xc0) * 1.1;
  lVar1 = 0;
  if (-9.223372036854776e+18 <= dVar3) {
    lVar1 = 0x7fffffffffffffff;
  }
  lVar2 = (long)dVar3;
  if (9.223372036854775e+18 < dVar3) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 100132a78; end: 10013365b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100132a78(int *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined1 *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined ***unaff_x21;
  undefined **ppuVar22;
  undefined ****ppppuVar23;
  undefined *puVar24;
  undefined ***pppuStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  iVar6 = (int)&pppuStack_250;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *param_2;
  if (lVar15 < 1) {
    piVar13 = (int *)(ulong)*(uint *)(*(long *)(param_1 + 2) + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pppuVar8 = &ppuStack_170;
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (*param_1 == 1) {
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        ppuStack_188 = (undefined **)((ulong)*(uint *)(*(long *)(param_1 + 2) + 0x10) << 0x20);
        puVar7 = &uStack_190;
        piVar16 = (int *)0x102;
        func_0x000107c6107c(puVar7,0x102,0,0x20,piVar13,0,0);
        piVar13 = piVar16;
        if (((int)puVar7 != 0) && ((int)puVar7 != 0x10004003)) {
          ppuStack_170 = &PTR_DAT_110cd4a10;
          uStack_168 = 3;
          uStack_c0 = 0;
          ppuStack_160 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
          ppuStack_f0 = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
          func_0x000107c60dd0(&ppuStack_f0,&ppuStack_158);
          uStack_68 = 0;
          ppuStack_f0 = &PTR_DAT_11088d708;
          ppuStack_158 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          ppuStack_160 = &PTR_DAT_11088d6e0;
          func_0x000107c60dac(auStack_150);
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          ppuStack_158 = &PTR_DAT_11088d7b0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f8 = 0x10;
          pppuVar8 = &ppuStack_158;
          FUN_10014d39c();
          func_0x000107c60e5c();
          func_0x000107c60e5c();
          *(undefined4 *)pppuVar8 = 0;
          FUN_10014d66c(&ppuStack_170,&UNK_10f7457d8,0x161);
          ppuStack_170 = &PTR_DAT_110cd6578;
          FUN_10014d9fc(&ppuStack_160,&UNK_10f745892,0x26);
          FUN_10014d9fc();
          piVar13 = (int *)&UNK_10f74587f;
LAB_100126640:
          unaff_x21 = &ppuStack_170;
          pppuVar8 = (undefined ***)&UNK_10f7457d8;
          FUN_10014d9fc();
          func_0x000107c2cfe8(&ppuStack_170);
        }
      }
      else {
        uStack_198 = 0xaaaaaaaa;
        uStack_190 = 0xaaaaaaaaaaaaaaaa;
        uStack_1a0 = 0xaaaaaaaa00000008;
        puVar7 = (undefined8 *)(ulong)*(uint *)PTR__mach_task_self__11034c5c8;
        func_0x000107c61094(puVar7,piVar13,0,(long)&uStack_198 + 4,&uStack_198,(long)&uStack_1a0 + 4
                            ,&uStack_190,&uStack_1a0);
        if ((int)puVar7 != 0 && (int)puVar7 != 5) {
          ppuStack_170 = &PTR_DAT_110cd4a10;
          uStack_168 = 3;
          uStack_c0 = 0;
          ppuStack_160 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
          ppuStack_f0 = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
          func_0x000107c60dd0(&ppuStack_f0,&ppuStack_158);
          uStack_68 = 0;
          ppuStack_f0 = &PTR_DAT_11088d708;
          ppuStack_158 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          ppuStack_160 = &PTR_DAT_11088d6e0;
          func_0x000107c60dac(auStack_150);
          uStack_120 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          ppuStack_158 = &PTR_DAT_11088d7b0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          uStack_f8 = 0x10;
          pppuVar8 = &ppuStack_158;
          FUN_10014d39c();
          func_0x000107c60e5c();
          func_0x000107c60e5c();
          *(undefined4 *)pppuVar8 = 0;
          FUN_10014d66c(&ppuStack_170,&UNK_10f7457d8,0x171);
          ppuStack_170 = &PTR_DAT_110cd6578;
          FUN_10014d9fc(&ppuStack_160,&UNK_10f7458b9,0x20);
          FUN_10014d9fc();
          piVar13 = (int *)&UNK_10f7458da;
          goto LAB_100126640;
        }
      }
      uVar21 = (ulong)((int)puVar7 == 0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return uVar21;
      }
      func_0x000107c60e78();
      uStack_1a8 = 0x100126684;
      pppuVar9 = (undefined ***)(ulong)*(uint *)(*(long *)(uVar21 + 0xa8) + 0x10);
      pppuStack_1c8 = unaff_x21;
      pppuStack_1c0 = pppuVar8;
      puStack_1b8 = puVar7;
      puStack_1b0 = &stack0xfffffffffffffff0;
      FUN_100126324(pppuVar9,1);
      *(undefined4 *)(uVar21 + 0x98) = 0;
      if (piRam00000001137f5198 < (int *)0x2) {
        do {
          if (piRam00000001137f5198 != (int *)0x0) {
            ClearExclusiveLocal();
            if (piRam00000001137f5198 == (int *)0x1) {
              (*(code *)PTR_FUN_11336f918)();
              ppuStack_208 = (undefined **)0xf4240;
              ppuStack_210 = (undefined **)0x0;
              pppuVar8 = pppuVar9;
              do {
                (*(code *)PTR_FUN_11336f918)();
                if ((long)pppuVar8 - (long)pppuVar9 < 1000) {
                  func_0x000107c612dc();
                }
                else {
                  uStack_200 = (undefined **)0xaaaaaaaaaaaaaaaa;
                  ppuStack_1f8 = (undefined **)0xaaaaaaaaaaaaaaaa;
                  ppuStack_1e8 = ppuStack_208;
                  ppuStack_1f0 = ppuStack_210;
                  pppuVar8 = &ppuStack_1f0;
                  func_0x000107c610f0(pppuVar8,&uStack_200);
                  iVar6 = (int)pppuVar8;
                  while ((iVar6 == -1 && (func_0x000107c60e5c(), *(int *)pppuVar8 == 4))) {
                    ppuStack_1e8 = ppuStack_1f8;
                    ppuStack_1f0 = uStack_200;
                    pppuVar8 = &ppuStack_1f0;
                    func_0x000107c610f0(pppuVar8,&uStack_200);
                    iVar6 = (int)pppuVar8;
                  }
                }
              } while (piRam00000001137f5198 == (int *)0x1);
            }
            goto LAB_1001267ac;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x1137f5198,0x10);
          if (bVar4) {
            piRam00000001137f5198 = (int *)0x1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uRam00000001137f51a0 = 0xffffffff;
        func_0x000100126cd4(0x1137f51a0,0);
        piRam00000001137f5198 = (int *)0x1137f51a0;
      }
LAB_1001267ac:
      piVar16 = piRam00000001137f5198;
      uVar11 = uRam000000011336f908;
      func_0x000107c61248();
      uVar11 = uVar11 & 0xfffffffffffffffc;
      if (uVar11 != 0) {
        *(undefined8 *)(uVar11 + (long)*piVar16 * 0x10) = 0;
        *(int *)(uVar11 + (long)*piVar16 * 0x10 + 8) = piVar16[1];
      }
      *(int *)(uVar21 + 0xd8) = piVar13[4];
      lVar15 = *(long *)(piVar13 + 2);
      if (lVar15 == 0) {
        ppuVar22 = *(undefined ***)(piVar13 + 6);
        if (ppuVar22 == (undefined **)0x0) {
          ppuVar22 = (undefined **)0x28;
          func_0x000107c60e20();
          *(int *)ppuVar22 = 1;
          ppuVar22[1] = (undefined *)0x10012d008;
          ppuVar22[2] = (undefined *)0x10012eef8;
          ppuVar22[3] = (undefined *)0x100142430;
          *(int *)((long)ppuVar22 + 0x24) = *piVar13;
          uVar12 = 0x40;
          func_0x000107c60e20();
          ppuStack_1f0 = ppuVar22;
          func_0x000100126f84();
          if (ppuStack_1f0 != (undefined **)0x0) {
            do {
              iVar6 = *(int *)ppuStack_1f0 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuStack_1f0,0x10);
              if (bVar4) {
                *(int *)ppuStack_1f0 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_100126940;
          }
        }
        else {
          uVar12 = 0x40;
          func_0x000107c60e20();
          do {
            iVar6 = *(int *)ppuVar22;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
            if (bVar4) {
              *(int *)ppuVar22 = iVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 < 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x1001269c0);
            (*pcVar5)();
          }
          ppuStack_1f0 = ppuVar22;
          func_0x000100126f84(uVar12,2,&ppuStack_1f0);
          if (ppuStack_1f0 != (undefined **)0x0) {
            do {
              iVar6 = *(int *)ppuStack_1f0 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuStack_1f0,0x10);
              if (bVar4) {
                *(int *)ppuStack_1f0 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_100126940:
            if (iVar6 == 0) {
              (*(code *)ppuStack_1f0[2])();
            }
          }
        }
        plVar10 = *(long **)(uVar21 + 200);
        *(undefined8 *)(uVar21 + 200) = uVar12;
      }
      else {
        piVar13[2] = 0;
        piVar13[3] = 0;
        plVar10 = *(long **)(uVar21 + 200);
        *(long *)(uVar21 + 200) = lVar15;
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      FUN_100126324(*(undefined4 *)(*(long *)(uVar21 + 0x100) + 0x10),1);
      iVar6 = (int)uVar21 + 0x58;
      func_0x000107c61264();
      if (iVar6 == 0) {
        cVar3 = (char)piVar13[0xb];
        uVar11 = *(ulong *)(piVar13 + 8);
      }
      else {
        func_0x000107c2cfbc(uVar21 + 0x58);
        cVar3 = (char)piVar13[0xb];
        uVar11 = *(ulong *)(piVar13 + 8);
      }
      if (cVar3 == '\x01') {
        FUN_100129c04(uVar11,1,uVar21,uVar21 + 0x50,piVar13[10]);
        func_0x000107c61268(uVar21 + 0x58);
        if ((uVar11 & 1) != 0) {
LAB_100126998:
          *(char *)(uVar21 + 8) = (char)piVar13[0xb];
          return 1;
        }
      }
      else {
        FUN_100129c04(uVar11,0,uVar21,&ppuStack_1f0,piVar13[10]);
        func_0x000107c61268(uVar21 + 0x58);
        if ((int)uVar11 != 0) goto LAB_100126998;
      }
      return 0;
    }
  }
  else {
    uStack_228 = 0xaaaaaaaaaaaaaa00;
    uStack_220 = 0;
    uStack_218 = 0;
    ppuStack_210 = (undefined **)0x0;
    uStack_d0 = 0xaaaaaaaaaaaaaa00;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    piVar13 = param_1;
    if ((char)param_1[8] == '\x01') {
      FUN_1001412bc();
      func_0x000100141310(&uStack_220,piVar13,param_1);
      uStack_228 = CONCAT71(uStack_228._1_7_,1);
      FUN_10012dd4c(&ppuStack_208,&UNK_10f745888,&UNK_10f7457d8,0x7f);
      if ((char)uStack_d0 == '\x01') {
        func_0x0001001331dc(&uStack_c8);
        uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      }
      piVar13 = (int *)&uStack_c8;
      FUN_10012defc(piVar13,&ppuStack_208,0,1);
      if ((bRam000000011336f9a8 & 0x19) != 0) {
        piVar13 = (int *)&UNK_10f74524d;
        pppuStack_250 = &ppuStack_208;
        func_0x000107c35cb4(&UNK_10f74524d,&pppuStack_250);
      }
      uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
      lVar15 = *param_2;
    }
    uVar18 = 0;
    uVar19 = 2;
    if (lVar15 != 0x7fffffffffffffff) {
      uVar19 = 0x502;
    }
    iVar2 = *param_1;
    uVar1 = uVar19 | 4;
    if (iVar2 != 0) {
      uVar1 = uVar19;
    }
    pppuStack_250 = (undefined ***)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_248 = (ulong)*(uint *)(*(long *)(param_1 + 2) + 0x10) << 0x20;
    uVar20 = 0;
    if (iVar2 != 0) {
      uVar20 = 0x20;
    }
    if (lVar15 == 0x7fffffffffffffff) {
LAB_100132bd0:
      func_0x000107c6107c(&pppuStack_250,uVar1,0,uVar20,
                          *(undefined4 *)(*(long *)(param_1 + 2) + 0x10),uVar18,0);
      if (iVar6 == 0) {
LAB_100132c54:
        goto joined_r0x000100132e64;
      }
      if (iVar6 == 0x10004005) {
        do {
          iVar6 = (int)&pppuStack_250;
          func_0x000107c6107c(&pppuStack_250,uVar1,0,uVar20,
                              *(undefined4 *)(*(long *)(param_1 + 2) + 0x10),0,0);
        } while (iVar6 == 0x10004005);
        if (iVar6 == 0) goto LAB_100132c54;
      }
joined_r0x000100132e7c:
      if ((iVar2 == 0) && (iVar6 == 0x10004004)) goto LAB_100132c54;
      if (iVar6 == 0x10004003) {
        uVar21 = 0;
        cVar3 = (char)uStack_d0;
      }
      else {
        ppuStack_208 = &PTR_DAT_110cd4a10;
        uVar21 = (ulong)uStack_200 >> 0x20;
        uStack_200 = (undefined **)CONCAT44((int)uVar21,3);
        ppuStack_158 = (undefined **)0x0;
        ppuStack_1f8 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
        ppuStack_188 = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
        func_0x000107c60dd0(&ppuStack_188,&ppuStack_1f0);
        uStack_f8 = 0xffffffff;
        uStack_100 = 0;
        ppuStack_188 = &PTR_DAT_11088d708;
        ppuStack_1f0 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        ppuStack_1f8 = &PTR_DAT_11088d6e0;
        func_0x000107c60dac(&ppuStack_1e8);
        puStack_1b8 = (undefined8 *)0x0;
        pppuStack_1c0 = (undefined ***)0x0;
        pppuStack_1c8 = (undefined ***)0x0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        ppuStack_1f0 = &PTR_DAT_11088d7b0;
        uStack_1a8 = 0;
        puStack_1b0 = (undefined1 *)0x0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_190 = CONCAT44(uStack_190._4_4_,0x10);
        pppuVar8 = &ppuStack_1f0;
        FUN_10014d39c();
        puStack_e8 = &UNK_10f7457d8;
        uStack_e0 = 0xb3;
        func_0x000107c60e5c();
        uStack_dc = *(undefined4 *)pppuVar8;
        func_0x000107c60e5c();
        *(undefined4 *)pppuVar8 = 0;
        FUN_10014d66c(&ppuStack_208,&UNK_10f7457d8,0xb3);
        ppuStack_208 = &PTR_DAT_110cd6578;
        iStack_d8 = iVar6;
        FUN_10014d9fc(&ppuStack_1f8,&UNK_10f745892,0x26);
        FUN_10014d9fc();
        FUN_10014d9fc();
        func_0x000107c2cfe8(&ppuStack_208);
        uVar21 = 0;
        cVar3 = (char)uStack_d0;
      }
    }
    else {
      FUN_100128a9c();
      piVar16 = (int *)*param_2;
      if ((undefined *)((long)piVar16 + -0x7fffffffffffffff) < (undefined *)0x2) {
        if ((piVar13 != piVar16) &&
           ((undefined *)((long)piVar13 + -0x7fffffffffffffff) < (undefined *)0x2))
        goto LAB_100133004;
        uVar18 = 0;
        puVar24 = (undefined *)0x7fffffffffffffff;
        if (piVar16 != (int *)0x7fffffffffffffff) {
          puVar24 = (undefined *)0x8000000000000000;
        }
        if (puVar24 != (undefined *)0x7fffffffffffffff) goto LAB_100132db8;
        goto LAB_100132bd0;
      }
      puVar24 = (undefined *)((long)piVar13 + (long)piVar16 >> 0x3f ^ 0x8000000000000000);
      if (!SCARRY8((long)piVar13,(long)piVar16)) {
        puVar24 = (undefined *)((long)piVar13 + (long)piVar16);
      }
      uVar18 = (uint)((long)piVar16 / 1000);
      if (((long)piVar16 / 1000) * 1000 < (long)piVar16) {
        uVar18 = uVar18 + 1;
      }
      if (puVar24 == (undefined *)0x7fffffffffffffff) goto LAB_100132bd0;
LAB_100132db8:
      ppppuVar23 = (undefined ****)0x10004005;
      while (iVar6 = (int)ppppuVar23, iVar6 == 0x10004005) {
        ppppuVar23 = &pppuStack_250;
        func_0x000107c6107c(&pppuStack_250,uVar1,0,uVar20,
                            *(undefined4 *)(*(long *)(param_1 + 2) + 0x10),uVar18,0);
        puVar14 = (undefined1 *)ppppuVar23;
        FUN_100128a9c();
        lVar17 = (long)puVar24 - (long)puVar14;
        lVar15 = lVar17;
        if ((1 < lVar17 + 0x8000000000000001U) && (lVar15 = lVar17 / 1000, lVar15 * 1000 < lVar17))
        {
          lVar15 = lVar15 + 1;
        }
        uVar18 = (uint)lVar15 & ((uint)(lVar15 >> 0x3f) ^ 0xffffffff);
      }
      if (iVar6 != 0) goto joined_r0x000100132e7c;
joined_r0x000100132e64:
      uVar21 = 1;
      cVar3 = (char)uStack_d0;
    }
    if (cVar3 == '\x01') {
      func_0x0001001331dc(&uStack_c8);
    }
    if ((char)uStack_228 == '\x01') {
      func_0x0001001333e0(&uStack_220);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return uVar21;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar21;
    }
  }
  func_0x000107c60e78();
LAB_100133004:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x100133008);
  (*pcVar5)();
}



/* Entry: 10013365c; end: 100133877;  */

undefined1  [16] FUN_10013365c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  plVar5 = param_1 + 3;
  FUN_100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_100133720;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          FUN_1000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10013384c;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x25);
    }
  }
LAB_100133720:
  FUN_100133878(aplStack_68,param_1,plVar5,param_3);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_1001338e4(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_68[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      plVar5 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000100133ae4();
  uVar1 = 1;
LAB_10013384c:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 100133878; end: 1001338d7;  */

void FUN_100133878(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x000107c60c94(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1001338d8; end: 1001338e3;  */

void FUN_1001338d8(void)

{
  return;
}



/* Entry: 1001338e4; end: 1001339ab;  */

void FUN_1001338e4(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10013392c;
    }
    return;
  }
LAB_10013392c:
  if (param_2 == 0) {
    FUN_100133ac4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_1001339ac(plVar2);
    FUN_100133ac4(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1001339ac; end: 1001339c7;  */

void FUN_1001339ac(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_100133ac4(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1001339ac(plVar3);
      FUN_100133ac4(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1001339c8; end: 100133ac3;  */

void FUN_1001339c8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_100133ac4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1001339ac(plVar3);
    FUN_100133ac4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100133ac4; end: 100133b03;  */

void FUN_100133ac4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100133b04; end: 100133b27;  */

undefined8 FUN_100133b04(undefined8 param_1)

{
  func_0x000100133aec(param_1,0);
  return param_1;
}



/* Entry: 100133b28; end: 100133b2f;  */

void FUN_100133b28(void)

{
  return;
}



/* Entry: 100133b30; end: 100133b67;  */

undefined8 * FUN_100133b30(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return param_1;
  }
  func_0x000107c60e14(*param_1);
  return param_1;
}



/* Entry: 100133b68; end: 100133f37;  */

void FUN_100133b68(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 in_x7;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined1 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *plStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c60c94(auStack_a8,in_stack_00000010);
  func_0x000100133d70(&uStack_90,auStack_a8);
  func_0x000107c60ca0(auStack_a8);
  if ((uStack_90 & 1) == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c2fd70(&uStack_90,&uStack_c0);
    func_0x000100139d44(&uStack_c0);
    uVar3 = uStack_90 & 0xff;
  }
  else {
    uVar3 = 1;
  }
  puVar1 = (undefined1 *)0x178;
  func_0x000107c60e20();
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)((ulong)&uStack_90 | 8);
    uStack_d8 = uStack_80;
    uStack_e0 = uStack_88;
    uStack_d0 = uStack_78;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    lStack_e8 = *in_stack_00000018;
    *in_stack_00000018 = 0;
    uStack_100 = in_stack_00000028;
    uStack_f8 = in_stack_00000030;
    uStack_108 = in_stack_00000020;
    plStack_110 = &lStack_e8;
    puStack_118 = &uStack_e0;
    uStack_128 = in_stack_00000000;
    uStack_120 = in_stack_00000008;
    uStack_130 = in_x7;
    func_0x000100139e4c();
    *param_1 = puVar1;
    if (lStack_e8 != 0) {
      func_0x000107c39144();
    }
    func_0x000100139d44(&uStack_e0);
    func_0x00010013b4ac(&uStack_90);
    return;
  }
  func_0x000107c2d060();
  uStack_138 = 0x100133cd4;
  plStack_148 = *(long **)(puVar1 + 0x90);
  *(undefined8 *)(puVar1 + 0x90) = 0;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_100133b68(*puVar1,puVar1 + 8,puVar1[0x20],puVar1[0x21],*(undefined4 *)(puVar1 + 0x24),
                *(undefined4 *)(puVar1 + 0x28),puVar1[0x2c],puVar1 + 0x30,puVar1 + 0x48,
                puVar1 + 0x60,puVar1 + 0x78,&plStack_148,*(undefined2 *)(puVar1 + 0x98));
  if (plStack_148 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100133d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_148 + 8))();
    return;
  }
  return;
}



/* Entry: 100133f38; end: 10013412f;  */

void FUN_100133f38(undefined8 *param_1,long param_2,short *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  *(short **)(param_2 + 0x10) = param_3;
  *(ulong *)(param_2 + 0x18) = param_4;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0xffffffff00000001;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (param_4 >> 0x1f != 0) {
    *(undefined8 *)(param_2 + 0x38) = 0x100000009;
    *(undefined4 *)(param_2 + 0x40) = 1;
LAB_100134028:
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    return;
  }
  if ((2 < param_4) && (*param_3 == -0x4411 && (char)param_3[1] == -0x41)) {
    *(undefined4 *)(param_2 + 0x20) = 3;
  }
  lStack_30 = -0x5555555555555556;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  lVar2 = param_2;
  FUN_1001342e0(param_2);
  FUN_1001347e4(&uStack_50,param_2,lVar2);
  if ((uStack_50 & 1) == 0) goto LAB_100134028;
  lVar2 = param_2;
  FUN_1001342e0();
  if ((int)lVar2 != 0xb) {
    *(undefined4 *)(param_2 + 0x38) = 6;
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
    iVar1 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x34);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)(param_2 + 0x40) = iVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    goto LAB_100134108;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (lStack_30 < 4) {
    if (lStack_30 == 1) {
      *(undefined1 *)(param_1 + 1) = (undefined1)uStack_48;
    }
    else if (lStack_30 == 2) {
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
    }
    else if (lStack_30 == 3) {
      param_1[1] = uStack_48;
    }
  }
  else {
    puVar3 = (undefined8 *)((ulong)&uStack_50 | 8);
    if (lStack_30 < 6) {
      if (lStack_30 == 4) {
        uVar4 = *puVar3;
        param_1[2] = puVar3[1];
        param_1[1] = uVar4;
        param_1[3] = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
      }
      else if (lStack_30 == 5) goto LAB_1001340b0;
    }
    else if ((lStack_30 == 6) || (lStack_30 == 7)) {
LAB_1001340b0:
      param_1[2] = uStack_40;
      param_1[1] = uStack_48;
      param_1[3] = uStack_38;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
  }
  param_1[4] = lStack_30;
  *(undefined1 *)param_1 = 1;
LAB_100134108:
  uStack_28 = (ulong)&uStack_50 | 8;
  FUN_100136360(&uStack_28,lStack_30);
  return;
}



/* Entry: 100134130; end: 1001342df;  */

undefined8 **
FUN_100134130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  char acStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = (undefined8 *)CONCAT44(0xaaaaaaaa,param_4);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 200;
  uStack_60 = 0xaaaaaaaa00000000;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0xaaaaaaaa;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  *param_1 = 0xaaaaaaaaaaaaaa00;
  puVar7 = param_1 + 1;
  param_1[2] = 0;
  *puVar7 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_100133f38(acStack_b0,&uStack_80,param_2,param_3);
  if (acStack_b0[0] != '\x01') {
    ppuVar4 = (undefined8 **)&uStack_80;
    func_0x000107c2caec(param_1 + 5);
    param_1[8] = CONCAT44(uStack_40,uStack_44);
    goto LAB_1001342b0;
  }
  puStack_88 = &uStack_a8;
  if (lStack_90 < 4) {
    if (lStack_90 == 1) {
      *(undefined1 *)puVar7 = (undefined1)uStack_a8;
    }
    else if (lStack_90 == 2) {
      *(undefined4 *)puVar7 = (undefined4)uStack_a8;
    }
    else if (lStack_90 == 3) {
      *puVar7 = uStack_a8;
    }
  }
  else if (lStack_90 < 6) {
    if (lStack_90 == 4) {
      param_1[2] = uStack_a0;
      *puVar7 = uStack_a8;
      param_1[3] = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
    }
    else if (lStack_90 == 5) goto LAB_10013424c;
  }
  else if ((lStack_90 == 6) || (lStack_90 == 7)) {
LAB_10013424c:
    param_1[2] = uStack_a0;
    param_1[1] = uStack_a8;
    param_1[3] = uStack_98;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
  }
  param_1[4] = lStack_90;
  *(undefined1 *)param_1 = 1;
  ppuVar4 = &puStack_88;
  FUN_100136360();
LAB_1001342b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar4;
  }
  func_0x000107c60e78();
  uVar8 = *(uint *)(ppuVar4 + 4);
  lVar10 = (long)(int)uVar8;
  puVar7 = (undefined8 *)(lVar10 + 1);
  puVar6 = ppuVar4[3];
  if (puVar7 <= puVar6) {
    puVar7 = ppuVar4[2];
    do {
      bVar2 = *(byte *)((long)puVar7 + lVar10);
      if (bVar2 < 0xd) {
        if (bVar2 != 9) {
          if (bVar2 != 10) break;
LAB_10013435c:
          *(uint *)((long)ppuVar4 + 0x34) = uVar8;
          if ((0 < (int)uVar8) && (bVar2 == 10)) {
            if (puVar6 <= (undefined8 *)(ulong)(uVar8 - 1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x10013466c);
              (*pcVar3)();
            }
            if (*(char *)((long)puVar7 + (long)(ulong)(uVar8 - 1)) == '\r') goto LAB_100134390;
          }
          *(uint *)(ppuVar4 + 6) = *(uint *)(ppuVar4 + 6) + 1;
        }
LAB_100134390:
        uVar8 = uVar8 + 1;
        *(uint *)(ppuVar4 + 4) = uVar8;
      }
      else {
        if (bVar2 != 0x2f) {
          if (bVar2 == 0x20) goto LAB_100134390;
          if (bVar2 == 0xd) goto LAB_10013435c;
          break;
        }
        lVar10 = (long)(int)uVar8;
        if (puVar6 < (undefined8 *)(lVar10 + 2U)) {
LAB_100134500:
          puVar6 = ppuVar4[3];
          break;
        }
        uVar1 = *(uint *)ppuVar4;
        if (*(short *)((long)puVar7 + lVar10) != 0x2f2f) {
          if (*(short *)((long)puVar7 + lVar10) == 0x2a2f) {
            func_0x000107c2cbbc(&UNK_10e57417f,0,5);
            if ((uVar1 >> 2 & 1) == 0) goto LAB_1001344d8;
            uVar8 = *(uint *)(ppuVar4 + 4);
            lVar10 = (long)(int)uVar8;
            puVar6 = ppuVar4[3];
            if ((undefined8 *)(lVar10 + 2U) <= puVar6) {
              uVar8 = uVar8 + 2;
              *(uint *)(ppuVar4 + 4) = uVar8;
              lVar10 = (long)(int)uVar8;
            }
            if ((undefined8 *)(lVar10 + 1U) <= puVar6) {
              cVar9 = '\0';
              puVar7 = ppuVar4[2];
              while ((cVar9 != '*' || (*(char *)((long)puVar7 + lVar10) != '/'))) {
                uVar8 = uVar8 + 1;
                *(uint *)(ppuVar4 + 4) = uVar8;
                cVar9 = *(char *)((long)puVar7 + lVar10);
                lVar10 = (long)(int)uVar8;
                if (puVar6 < (undefined8 *)(lVar10 + 1U)) goto LAB_100134500;
              }
              goto LAB_100134390;
            }
          }
          goto LAB_100134500;
        }
        func_0x000107c2cbbc(&UNK_10e57417f,1,5);
        if ((uVar1 >> 2 & 1) == 0) {
LAB_1001344d8:
          *(uint *)(ppuVar4 + 7) = 3;
          *(uint *)((long)ppuVar4 + 0x3c) = *(uint *)(ppuVar4 + 6);
          uVar8 = *(uint *)(ppuVar4 + 4);
          uVar1 = uVar8 - *(uint *)((long)ppuVar4 + 0x34);
          if ((int)uVar1 < 2) {
            uVar1 = 1;
          }
          *(uint *)(ppuVar4 + 8) = uVar1;
          goto LAB_100134500;
        }
        uVar8 = *(uint *)(ppuVar4 + 4);
        lVar10 = (long)(int)uVar8;
        puVar6 = ppuVar4[3];
        if ((undefined8 *)(lVar10 + 2U) <= puVar6) {
          uVar8 = uVar8 + 2;
          *(uint *)(ppuVar4 + 4) = uVar8;
          lVar10 = (long)(int)uVar8;
        }
        if (puVar6 < (undefined8 *)(lVar10 + 1U)) goto LAB_100134500;
        puVar7 = ppuVar4[2];
        while (*(char *)((long)puVar7 + lVar10) != '\n' && *(char *)((long)puVar7 + lVar10) != '\r')
        {
          uVar8 = uVar8 + 1;
          *(uint *)(ppuVar4 + 4) = uVar8;
          lVar10 = (long)(int)uVar8;
          if (puVar6 < (undefined8 *)(lVar10 + 1U)) goto LAB_100134500;
        }
      }
      lVar10 = (long)(int)uVar8;
    } while ((undefined8 *)(lVar10 + 1U) <= puVar6);
    lVar10 = (long)(int)uVar8;
    puVar7 = (undefined8 *)(lVar10 + 1);
  }
  if (puVar6 < puVar7) {
    ppuVar5 = (undefined8 **)0xb;
code_r0x00010013451c:
    return ppuVar5;
  }
  ppuVar5 = (undefined8 **)0x0;
  switch(*(undefined1 *)((long)ppuVar4[2] + lVar10)) {
  case 0x22:
    return (undefined8 **)0x4;
  default:
    return (undefined8 **)0xc;
  case 0x2c:
    return (undefined8 **)0x9;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    return (undefined8 **)0x5;
  case 0x3a:
    return (undefined8 **)0xa;
  case 0x5b:
    return (undefined8 **)0x2;
  case 0x5d:
    return (undefined8 **)0x3;
  case 0x66:
    return (undefined8 **)0x7;
  case 0x6e:
    return (undefined8 **)0x8;
  case 0x74:
    return (undefined8 **)0x6;
  case 0x7b:
    goto code_r0x00010013451c;
  case 0x7d:
    return (undefined8 **)0x1;
  }
}



/* Entry: 1001342e0; end: 100134673;  */

undefined8 FUN_1001342e0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  
  uVar8 = param_1[8];
  lVar10 = (long)(int)uVar8;
  uVar7 = lVar10 + 1;
  uVar5 = *(ulong *)(param_1 + 6);
  if (uVar7 <= uVar5) {
    lVar6 = *(long *)(param_1 + 4);
    do {
      bVar2 = *(byte *)(lVar6 + lVar10);
      if (bVar2 < 0xd) {
        if (bVar2 != 9) {
          if (bVar2 != 10) break;
LAB_10013435c:
          param_1[0xd] = uVar8;
          if ((0 < (int)uVar8) && (bVar2 == 10)) {
            if (uVar5 <= uVar8 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x10013466c);
              (*pcVar3)();
            }
            if (*(char *)(lVar6 + (ulong)(uVar8 - 1)) == '\r') goto LAB_100134390;
          }
          param_1[0xc] = param_1[0xc] + 1;
        }
LAB_100134390:
        uVar8 = uVar8 + 1;
        param_1[8] = uVar8;
      }
      else {
        if (bVar2 != 0x2f) {
          if (bVar2 == 0x20) goto LAB_100134390;
          if (bVar2 == 0xd) goto LAB_10013435c;
          break;
        }
        lVar10 = (long)(int)uVar8;
        if (uVar5 < lVar10 + 2U) {
LAB_100134500:
          uVar5 = *(ulong *)(param_1 + 6);
          break;
        }
        uVar1 = *param_1;
        if (*(short *)(lVar6 + lVar10) != 0x2f2f) {
          if (*(short *)(lVar6 + lVar10) == 0x2a2f) {
            func_0x000107c2cbbc(&UNK_10e57417f,0,5);
            if ((uVar1 >> 2 & 1) == 0) goto LAB_1001344d8;
            uVar8 = param_1[8];
            lVar10 = (long)(int)uVar8;
            uVar5 = *(ulong *)(param_1 + 6);
            if (lVar10 + 2U <= uVar5) {
              uVar8 = uVar8 + 2;
              param_1[8] = uVar8;
              lVar10 = (long)(int)uVar8;
            }
            if (lVar10 + 1U <= uVar5) {
              cVar9 = '\0';
              lVar6 = *(long *)(param_1 + 4);
              while ((cVar9 != '*' || (*(char *)(lVar6 + lVar10) != '/'))) {
                uVar8 = uVar8 + 1;
                param_1[8] = uVar8;
                cVar9 = *(char *)(lVar6 + lVar10);
                lVar10 = (long)(int)uVar8;
                if (uVar5 < lVar10 + 1U) goto LAB_100134500;
              }
              goto LAB_100134390;
            }
          }
          goto LAB_100134500;
        }
        func_0x000107c2cbbc(&UNK_10e57417f,1,5);
        if ((uVar1 >> 2 & 1) == 0) {
LAB_1001344d8:
          param_1[0xe] = 3;
          param_1[0xf] = param_1[0xc];
          uVar8 = param_1[8];
          uVar1 = uVar8 - param_1[0xd];
          if ((int)uVar1 < 2) {
            uVar1 = 1;
          }
          param_1[0x10] = uVar1;
          goto LAB_100134500;
        }
        uVar8 = param_1[8];
        lVar10 = (long)(int)uVar8;
        uVar5 = *(ulong *)(param_1 + 6);
        if (lVar10 + 2U <= uVar5) {
          uVar8 = uVar8 + 2;
          param_1[8] = uVar8;
          lVar10 = (long)(int)uVar8;
        }
        if (uVar5 < lVar10 + 1U) goto LAB_100134500;
        lVar6 = *(long *)(param_1 + 4);
        while (*(char *)(lVar6 + lVar10) != '\n' && *(char *)(lVar6 + lVar10) != '\r') {
          uVar8 = uVar8 + 1;
          param_1[8] = uVar8;
          lVar10 = (long)(int)uVar8;
          if (uVar5 < lVar10 + 1U) goto LAB_100134500;
        }
      }
      lVar10 = (long)(int)uVar8;
    } while (lVar10 + 1U <= uVar5);
    lVar10 = (long)(int)uVar8;
    uVar7 = lVar10 + 1;
  }
  if (uVar5 < uVar7) {
    uVar4 = 0xb;
code_r0x00010013451c:
    return uVar4;
  }
  uVar4 = 0;
  switch(*(undefined1 *)(*(long *)(param_1 + 4) + lVar10)) {
  case 0x22:
    return 4;
  default:
    return 0xc;
  case 0x2c:
    return 9;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    return 5;
  case 0x3a:
    return 10;
  case 0x5b:
    return 2;
  case 0x5d:
    return 3;
  case 0x66:
    return 7;
  case 0x6e:
    return 8;
  case 0x74:
    return 6;
  case 0x7b:
    goto code_r0x00010013451c;
  case 0x7d:
    return 1;
  }
}



/* Entry: 100134674; end: 1001347e3;  */

void FUN_100134674(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0xd0,0x100134674);
  (*pcVar1)();
}



/* Entry: 1001347e4; end: 10013485b;  */

/* WARNING: Possible PIC construction at 0x000100136514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100134938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100136518) */
/* WARNING: Removing unreachable block (ram,0x000100136544) */
/* WARNING: Removing unreachable block (ram,0x00010013651c) */
/* WARNING: Removing unreachable block (ram,0x000100136578) */
/* WARNING: Removing unreachable block (ram,0x000100136650) */
/* WARNING: Removing unreachable block (ram,0x000100136588) */
/* WARNING: Removing unreachable block (ram,0x0001001365a4) */
/* WARNING: Removing unreachable block (ram,0x0001001365b0) */
/* WARNING: Removing unreachable block (ram,0x000100136594) */
/* WARNING: Removing unreachable block (ram,0x0001001365cc) */
/* WARNING: Removing unreachable block (ram,0x0001001365a0) */
/* WARNING: Removing unreachable block (ram,0x0001001365dc) */
/* WARNING: Removing unreachable block (ram,0x000100136528) */
/* WARNING: Removing unreachable block (ram,0x0001001365e0) */
/* WARNING: Removing unreachable block (ram,0x000100136628) */
/* WARNING: Removing unreachable block (ram,0x000100136560) */
/* WARNING: Removing unreachable block (ram,0x000100136630) */
/* WARNING: Removing unreachable block (ram,0x00010013493c) */
/* WARNING: Removing unreachable block (ram,0x0001001349c0) */
/* WARNING: Removing unreachable block (ram,0x000100134940) */
/* WARNING: Removing unreachable block (ram,0x0001001349dc) */
/* WARNING: Removing unreachable block (ram,0x0001001349fc) */
/* WARNING: Removing unreachable block (ram,0x000100134950) */
/* WARNING: Removing unreachable block (ram,0x000100134964) */
/* WARNING: Removing unreachable block (ram,0x00010013496c) */
/* WARNING: Removing unreachable block (ram,0x000100134a18) */
/* WARNING: Removing unreachable block (ram,0x000100134998) */
/* WARNING: Removing unreachable block (ram,0x000100134a20) */
/* WARNING: Removing unreachable block (ram,0x0001001355a8) */
/* WARNING: Removing unreachable block (ram,0x000100134a30) */
/* WARNING: Removing unreachable block (ram,0x000100134a4c) */
/* WARNING: Removing unreachable block (ram,0x000100134a58) */
/* WARNING: Removing unreachable block (ram,0x000100134a3c) */
/* WARNING: Removing unreachable block (ram,0x000100134a84) */
/* WARNING: Removing unreachable block (ram,0x000100134a48) */
/* WARNING: Removing unreachable block (ram,0x000100134a94) */
/* WARNING: Removing unreachable block (ram,0x0001001355a4) */
/* WARNING: Removing unreachable block (ram,0x0001001349a4) */
/* WARNING: Removing unreachable block (ram,0x000100134aa4) */
/* WARNING: Removing unreachable block (ram,0x000100134af0) */
/* WARNING: Removing unreachable block (ram,0x0001001355ac) */
/* WARNING: Removing unreachable block (ram,0x000100134b18) */
/* WARNING: Removing unreachable block (ram,0x000100134b30) */
/* WARNING: Removing unreachable block (ram,0x000100134b48) */
/* WARNING: Removing unreachable block (ram,0x000100134ba0) */
/* WARNING: Removing unreachable block (ram,0x000100134b50) */
/* WARNING: Removing unreachable block (ram,0x0001001355b0) */
/* WARNING: Removing unreachable block (ram,0x000100134b58) */
/* WARNING: Removing unreachable block (ram,0x000100134ba4) */
/* WARNING: Removing unreachable block (ram,0x000100134bf0) */
/* WARNING: Removing unreachable block (ram,0x000100134dd4) */
/* WARNING: Removing unreachable block (ram,0x000100134bf8) */
/* WARNING: Removing unreachable block (ram,0x000100134e00) */
/* WARNING: Removing unreachable block (ram,0x000100134c00) */
/* WARNING: Removing unreachable block (ram,0x000100134c08) */
/* WARNING: Removing unreachable block (ram,0x000100134bd4) */
/* WARNING: Removing unreachable block (ram,0x000100134c54) */
/* WARNING: Removing unreachable block (ram,0x000100134c5c) */
/* WARNING: Removing unreachable block (ram,0x000100134bdc) */
/* WARNING: Removing unreachable block (ram,0x000100134de0) */
/* WARNING: Removing unreachable block (ram,0x000100134be4) */
/* WARNING: Removing unreachable block (ram,0x000100134c64) */
/* WARNING: Removing unreachable block (ram,0x000100134bec) */
/* WARNING: Removing unreachable block (ram,0x000100134e08) */
/* WARNING: Removing unreachable block (ram,0x000100134e1c) */
/* WARNING: Removing unreachable block (ram,0x000100134eac) */
/* WARNING: Removing unreachable block (ram,0x000100134ef0) */
/* WARNING: Removing unreachable block (ram,0x000100134f14) */
/* WARNING: Removing unreachable block (ram,0x000100134ef8) */
/* WARNING: Removing unreachable block (ram,0x000100134f3c) */
/* WARNING: Removing unreachable block (ram,0x000100134f00) */
/* WARNING: Removing unreachable block (ram,0x000100134f08) */
/* WARNING: Removing unreachable block (ram,0x000100134ed4) */
/* WARNING: Removing unreachable block (ram,0x000100134e54) */
/* WARNING: Removing unreachable block (ram,0x000100134f20) */
/* WARNING: Removing unreachable block (ram,0x000100134e5c) */
/* WARNING: Removing unreachable block (ram,0x000100134edc) */
/* WARNING: Removing unreachable block (ram,0x000100134ee4) */
/* WARNING: Removing unreachable block (ram,0x000100134e64) */
/* WARNING: Removing unreachable block (ram,0x000100134eec) */
/* WARNING: Removing unreachable block (ram,0x000100134e8c) */
/* WARNING: Removing unreachable block (ram,0x000100134f54) */
/* WARNING: Removing unreachable block (ram,0x000100134f70) */
/* WARNING: Removing unreachable block (ram,0x000100134f48) */
/* WARNING: Removing unreachable block (ram,0x000100134f7c) */
/* WARNING: Removing unreachable block (ram,0x000100134f98) */
/* WARNING: Removing unreachable block (ram,0x000100134f9c) */
/* WARNING: Removing unreachable block (ram,0x000100134fbc) */
/* WARNING: Removing unreachable block (ram,0x000100134ab0) */
/* WARNING: Removing unreachable block (ram,0x000100134b68) */
/* WARNING: Removing unreachable block (ram,0x000100134c94) */
/* WARNING: Removing unreachable block (ram,0x000100134cb0) */
/* WARNING: Removing unreachable block (ram,0x000100134b70) */
/* WARNING: Removing unreachable block (ram,0x000100134ce8) */
/* WARNING: Removing unreachable block (ram,0x000100134b78) */
/* WARNING: Removing unreachable block (ram,0x000100134b80) */
/* WARNING: Removing unreachable block (ram,0x000100134b9c) */
/* WARNING: Removing unreachable block (ram,0x000100134ad4) */
/* WARNING: Removing unreachable block (ram,0x000100134c14) */
/* WARNING: Removing unreachable block (ram,0x000100134c1c) */
/* WARNING: Removing unreachable block (ram,0x000100134adc) */
/* WARNING: Removing unreachable block (ram,0x000100134cb4) */
/* WARNING: Removing unreachable block (ram,0x000100134ce4) */
/* WARNING: Removing unreachable block (ram,0x000100134ae4) */
/* WARNING: Removing unreachable block (ram,0x000100134c24) */
/* WARNING: Removing unreachable block (ram,0x000100134c50) */
/* WARNING: Removing unreachable block (ram,0x000100134aec) */
/* WARNING: Removing unreachable block (ram,0x000100134cf0) */
/* WARNING: Removing unreachable block (ram,0x000100134d04) */
/* WARNING: Removing unreachable block (ram,0x000100134d0c) */
/* WARNING: Removing unreachable block (ram,0x000100134d24) */
/* WARNING: Removing unreachable block (ram,0x000100134d2c) */
/* WARNING: Removing unreachable block (ram,0x000100134d40) */
/* WARNING: Removing unreachable block (ram,0x000100134d48) */
/* WARNING: Removing unreachable block (ram,0x000100134d5c) */
/* WARNING: Removing unreachable block (ram,0x000100134d64) */
/* WARNING: Removing unreachable block (ram,0x000100134d68) */
/* WARNING: Removing unreachable block (ram,0x000100134d7c) */
/* WARNING: Removing unreachable block (ram,0x000100134d84) */
/* WARNING: Removing unreachable block (ram,0x000100134d98) */
/* WARNING: Removing unreachable block (ram,0x000100134da0) */
/* WARNING: Removing unreachable block (ram,0x000100134db4) */
/* WARNING: Removing unreachable block (ram,0x000100134dc0) */
/* WARNING: Removing unreachable block (ram,0x000100134dc8) */
/* WARNING: Removing unreachable block (ram,0x000100134910) */
/* WARNING: Removing unreachable block (ram,0x000100135050) */
/* WARNING: Removing unreachable block (ram,0x000100135060) */
/* WARNING: Removing unreachable block (ram,0x0001001350f4) */
/* WARNING: Removing unreachable block (ram,0x00010013514c) */
/* WARNING: Removing unreachable block (ram,0x000100135170) */
/* WARNING: Removing unreachable block (ram,0x000100135154) */
/* WARNING: Removing unreachable block (ram,0x000100135198) */
/* WARNING: Removing unreachable block (ram,0x00010013515c) */
/* WARNING: Removing unreachable block (ram,0x000100135164) */
/* WARNING: Removing unreachable block (ram,0x000100135130) */
/* WARNING: Removing unreachable block (ram,0x00010013507c) */
/* WARNING: Removing unreachable block (ram,0x00010013517c) */
/* WARNING: Removing unreachable block (ram,0x000100135084) */
/* WARNING: Removing unreachable block (ram,0x000100135138) */
/* WARNING: Removing unreachable block (ram,0x000100135140) */
/* WARNING: Removing unreachable block (ram,0x00010013508c) */
/* WARNING: Removing unreachable block (ram,0x000100135148) */
/* WARNING: Removing unreachable block (ram,0x0001001350a4) */
/* WARNING: Removing unreachable block (ram,0x000100135204) */
/* WARNING: Removing unreachable block (ram,0x0001001351d8) */
/* WARNING: Removing unreachable block (ram,0x0001001351e0) */
/* WARNING: Removing unreachable block (ram,0x000100135210) */
/* WARNING: Removing unreachable block (ram,0x000100135560) */
/* WARNING: Removing unreachable block (ram,0x00010013524c) */
/* WARNING: Removing unreachable block (ram,0x000100135258) */
/* WARNING: Removing unreachable block (ram,0x0001001352a4) */
/* WARNING: Removing unreachable block (ram,0x00010013526c) */
/* WARNING: Removing unreachable block (ram,0x00010013527c) */
/* WARNING: Removing unreachable block (ram,0x0001001352d0) */
/* WARNING: Removing unreachable block (ram,0x0001001352d4) */
/* WARNING: Removing unreachable block (ram,0x000100135348) */
/* WARNING: Removing unreachable block (ram,0x0001001352e0) */
/* WARNING: Removing unreachable block (ram,0x000100135304) */
/* WARNING: Removing unreachable block (ram,0x000100135308) */
/* WARNING: Removing unreachable block (ram,0x000100135310) */
/* WARNING: Removing unreachable block (ram,0x000100135314) */
/* WARNING: Removing unreachable block (ram,0x00010013531c) */
/* WARNING: Removing unreachable block (ram,0x000100135338) */
/* WARNING: Removing unreachable block (ram,0x000100135344) */
/* WARNING: Removing unreachable block (ram,0x00010013534c) */
/* WARNING: Removing unreachable block (ram,0x000100135354) */
/* WARNING: Removing unreachable block (ram,0x000100135434) */
/* WARNING: Removing unreachable block (ram,0x000100135360) */
/* WARNING: Removing unreachable block (ram,0x00010013537c) */
/* WARNING: Removing unreachable block (ram,0x000100135398) */
/* WARNING: Removing unreachable block (ram,0x00010013539c) */
/* WARNING: Removing unreachable block (ram,0x0001001353a4) */
/* WARNING: Removing unreachable block (ram,0x0001001353a8) */
/* WARNING: Removing unreachable block (ram,0x0001001353b0) */
/* WARNING: Removing unreachable block (ram,0x0001001353cc) */
/* WARNING: Removing unreachable block (ram,0x000100135368) */
/* WARNING: Removing unreachable block (ram,0x0001001353d4) */
/* WARNING: Removing unreachable block (ram,0x0001001353e0) */
/* WARNING: Removing unreachable block (ram,0x0001001353e8) */
/* WARNING: Removing unreachable block (ram,0x000100135428) */
/* WARNING: Removing unreachable block (ram,0x000100135438) */
/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_1001347e4(byte *******param_1,byte ******param_2,byte *******param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  int iVar13;
  undefined4 uVar14;
  byte ******ppppppbVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  byte ******ppppppbVar20;
  byte ******ppppppbVar21;
  int iVar22;
  byte ******ppppppbVar23;
  undefined8 unaff_x21;
  byte ******ppppppbVar24;
  undefined8 unaff_x22;
  int iVar25;
  byte *******unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar26;
  byte *pbVar27;
  byte bVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  byte ******unaff_x28;
  undefined8 uVar29;
  byte *****pppppbVar30;
  byte abStack_198 [136];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  byte *******pppppppbStack_100;
  undefined8 uStack_f8;
  byte *******apppppppbStack_f0 [4];
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  undefined8 auStack_c0 [2];
  byte *******pppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte ******ppppppbStack_a0;
  byte ******ppppppbStack_98;
  byte ******ppppppbStack_90;
  byte ******ppppppbStack_88;
  byte *******pppppppbStack_80;
  undefined8 uStack_78;
  byte *******pppppppbStack_70;
  byte ******ppppppbStack_68;
  
  if (param_4 < 5) {
    if (param_4 != 0) {
      if (param_4 == 2) {
        iVar25 = *(int *)(param_3 + 4);
        iVar13 = iVar25;
        if ((byte ******)((long)iVar25 + 1U) <= param_3[3]) {
          iVar13 = iVar25 + 1;
          *(int *)(param_3 + 4) = iVar13;
          if (*(char *)((long)param_3[2] + (long)iVar25) == '[') {
            ppppppbVar20 = param_3[5];
            param_3[5] = (byte ******)((long)ppppppbVar20 + 1U);
            if ((byte ******)((long)ppppppbVar20 + 1U) < param_3[1]) {
              pppppppbStack_80 = (byte *******)0x0;
              uStack_78 = (byte *******)0x0;
              pppppppbStack_70 = (byte *******)0x0;
              pppppppbVar11 = param_3;
              FUN_1001342e0();
              bVar28 = *(byte *)param_1;
              do {
                pppppppbVar5 = pppppppbStack_70;
                pppppppbVar6 = uStack_78;
                pppppppbVar12 = pppppppbStack_80;
                if ((int)pppppppbVar11 == 3) {
                  if ((byte ******)((long)*(int *)(param_3 + 4) + 1U) <= param_3[3]) {
                    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
                  }
                  uStack_78 = (byte *******)0x0;
                  pppppppbStack_70 = (byte *******)0x0;
                  pppppppbStack_80 = (byte *******)0x0;
                  *(byte *)param_1 = 1;
                  param_1[2] = (byte ******)pppppppbVar6;
                  param_1[1] = (byte ******)pppppppbVar12;
                  ppppppbStack_a0 = (byte ******)0x0;
                  ppppppbStack_98 = (byte ******)0x7;
                  pppppppbStack_b0 = (byte *******)0x0;
                  ppppppbStack_a8 = (byte ******)0x0;
                  param_1[3] = (byte ******)pppppppbVar5;
                  param_1[4] = (byte ******)0x7;
                  pppppppbVar12 = &ppppppbStack_68;
                  ppppppbStack_68 = (byte ******)&pppppppbStack_b0;
                  FUN_100136360(pppppppbVar12,7);
                  pppppppbVar6 = pppppppbStack_80;
                  pppppppbVar11 = uStack_78;
                  goto joined_r0x00010016a184;
                }
                ppppppbStack_90 = (byte ******)0xaaaaaaaaaaaaaaaa;
                ppppppbStack_a8 = (byte ******)0xaaaaaaaaaaaaaaaa;
                pppppppbStack_b0 = (byte *******)0xaaaaaaaaaaaaaaaa;
                ppppppbStack_98 = (byte ******)0xaaaaaaaaaaaaaaaa;
                ppppppbStack_a0 = (byte ******)0xaaaaaaaaaaaaaaaa;
                pppppppbVar12 = param_3;
                FUN_1001347e4(&pppppppbStack_b0,param_3,pppppppbVar11);
                if (((ulong)pppppppbStack_b0 & 1) == 0) {
LAB_10016a098:
                  bVar28 = 0;
                  bVar1 = false;
                  param_1[2] = (byte ******)0x0;
                  param_1[1] = (byte ******)0x0;
                  param_1[4] = (byte ******)0x0;
                  param_1[3] = (byte ******)0x0;
                }
                else {
                  if (uStack_78 < pppppppbStack_70) {
                    uStack_78[3] = (byte ******)0xffffffffffffffff;
                    if ((long)ppppppbStack_90 < 4) {
                      if (ppppppbStack_90 == (byte ******)0x1) {
                        *(byte *)uStack_78 = (byte)ppppppbStack_a8;
                      }
                      else if (ppppppbStack_90 == (byte ******)0x2) {
                        *(undefined4 *)uStack_78 = ppppppbStack_a8._0_4_;
                      }
                      else if (ppppppbStack_90 == (byte ******)0x3) {
                        *uStack_78 = ppppppbStack_a8;
                      }
                    }
                    else if ((long)ppppppbStack_90 < 6) {
                      if (ppppppbStack_90 == (byte ******)0x4) {
                        uStack_78[2] = ppppppbStack_98;
                        uStack_78[1] = ppppppbStack_a0;
                        *uStack_78 = ppppppbStack_a8;
                        ppppppbStack_a0 = (byte ******)0x0;
                        ppppppbStack_98 = (byte ******)0x0;
                        ppppppbStack_a8 = (byte ******)0x0;
                      }
                      else if (ppppppbStack_90 == (byte ******)0x5) goto LAB_100169fb4;
                    }
                    else if ((ppppppbStack_90 == (byte ******)0x6) ||
                            (ppppppbStack_90 == (byte ******)0x7)) {
LAB_100169fb4:
                      *uStack_78 = (byte ******)0x0;
                      uStack_78[1] = (byte ******)0x0;
                      uStack_78[2] = (byte ******)0x0;
                      *uStack_78 = ppppppbStack_a8;
                      uStack_78[1] = ppppppbStack_a0;
                      uStack_78[2] = ppppppbStack_98;
                      ppppppbStack_a8 = (byte ******)0x0;
                      ppppppbStack_a0 = (byte ******)0x0;
                      ppppppbStack_98 = (byte ******)0x0;
                    }
                    uStack_78[3] = ppppppbStack_90;
                    pppppppbVar11 = uStack_78 + 4;
                  }
                  else {
                    pppppppbVar11 = (byte *******)&pppppppbStack_80;
                    FUN_10016a200(pppppppbVar11,&ppppppbStack_a8);
                  }
                  pppppppbVar12 = param_3;
                  uStack_78 = pppppppbVar11;
                  FUN_1001342e0();
                  uVar14 = 1;
                  bVar1 = true;
                  pppppppbVar11 = pppppppbVar12;
                  if ((int)pppppppbVar12 != 3) {
                    if ((int)pppppppbVar12 == 9) {
                      if ((byte ******)((long)*(int *)(param_3 + 4) + 1U) <= param_3[3]) {
                        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
                      }
                      pppppppbVar12 = param_3;
                      FUN_1001342e0();
                      pppppppbVar11 = pppppppbVar12;
                      if (((int)pppppppbVar12 != 3) || (((ulong)*param_3 & 1) != 0))
                      goto LAB_10016a0a8;
                      uVar14 = 4;
                    }
                    *(undefined4 *)(param_3 + 7) = uVar14;
                    *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                    iVar13 = *(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34);
                    if (iVar13 < 2) {
                      iVar13 = 1;
                    }
                    *(int *)(param_3 + 8) = iVar13;
                    pppppppbVar11 = pppppppbVar12;
                    goto LAB_10016a098;
                  }
                }
LAB_10016a0a8:
                if (((ulong)pppppppbStack_b0 & 1) != 0) {
                  pppppppbVar12 = &ppppppbStack_68;
                  ppppppbStack_68 = (byte ******)&ppppppbStack_a8;
                  FUN_100136360(pppppppbVar12,ppppppbStack_90);
                }
              } while (bVar1);
              *(byte *)param_1 = bVar28;
              pppppppbVar6 = pppppppbStack_80;
              pppppppbVar11 = uStack_78;
joined_r0x00010016a184:
              pppppppbStack_80 = pppppppbVar12;
              pppppppbVar12 = pppppppbVar6;
              uStack_78 = pppppppbVar11;
              if (pppppppbVar6 != (byte *******)0x0) {
                while (pppppppbStack_80 = pppppppbVar12, pppppppbVar11 != pppppppbVar6) {
                  pppppppbStack_b0 = pppppppbVar11 + -4;
                  FUN_100136360(&pppppppbStack_b0,pppppppbVar11[-1]);
                  pppppppbVar12 = pppppppbStack_80;
                  pppppppbVar11 = pppppppbVar11 + -4;
                }
                uStack_78 = pppppppbVar6;
                func_0x000107c60e14(pppppppbStack_80);
              }
              ppppppbVar20 = (byte ******)((long)param_3[5] + -1);
            }
            else {
              *(undefined4 *)(param_3 + 7) = 5;
              *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
              iVar25 = iVar25 - *(int *)((long)param_3 + 0x34);
              if (iVar25 < 2) {
                iVar25 = 1;
              }
              *(int *)(param_3 + 8) = iVar25;
              *(byte *)param_1 = 0;
              param_1[2] = (byte ******)0x0;
              param_1[1] = (byte ******)0x0;
              param_1[4] = (byte ******)0x0;
              param_1[3] = (byte ******)0x0;
              pppppppbStack_80 = param_3;
            }
            param_3[5] = ppppppbVar20;
            return pppppppbStack_80;
          }
        }
        *(undefined4 *)(param_3 + 7) = 3;
        *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
        iVar13 = iVar13 - *(int *)((long)param_3 + 0x34);
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        *(int *)(param_3 + 8) = iVar13;
        *(byte *)param_1 = 0;
        param_1[2] = (byte ******)0x0;
        param_1[1] = (byte ******)0x0;
        param_1[4] = (byte ******)0x0;
        param_1[3] = (byte ******)0x0;
        return param_3;
      }
      if (param_4 == 4) {
        puVar8 = auStack_c0;
        uStack_78 = (byte *******)0x0;
        pppppppbStack_70 = (byte *******)0x0;
        ppppppbStack_68 = (byte ******)0xaaaaaaaaaaaaaa00;
        ppppppbVar20 = (byte ******)&uStack_78;
        uVar29 = 0x100136518;
        pppppppbVar11 = param_1;
        param_1 = (byte *******)&uStack_78;
SUB_1001355b4:
        uStack_78 = (byte *******)0x0;
        *(byte *******)((long)puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)((long)puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)((long)puVar8 + -0x50) = unaff_x26;
        *(undefined8 *)((long)puVar8 + -0x48) = unaff_x25;
        *(undefined8 *)((long)puVar8 + -0x40) = unaff_x24;
        *(byte ********)((long)puVar8 + -0x38) = unaff_x23;
        *(undefined8 *)((long)puVar8 + -0x30) = unaff_x22;
        *(undefined8 *)((long)puVar8 + -0x28) = unaff_x21;
        *(byte ********)((long)puVar8 + -0x20) = param_1;
        *(byte ********)((long)puVar8 + -0x18) = pppppppbVar11;
        *(undefined1 **)((long)puVar8 + -0x10) = &stack0xfffffffffffffff0;
        *(undefined8 *)((long)puVar8 + -8) = uVar29;
        pppppppbVar11 = param_3 + 4;
        iVar13 = *(int *)pppppppbVar11;
        lVar16 = (long)iVar13;
        ppppppbVar23 = param_3[3];
        if ((byte ******)(lVar16 + 1U) <= ppppppbVar23) {
          ppppppbVar15 = param_3[2];
          iVar13 = iVar13 + 1;
          *(int *)(param_3 + 4) = iVar13;
          if (*(char *)((long)ppppppbVar15 + lVar16) == '\"') {
            *(undefined8 *)((long)puVar8 + -0x88) = 0xaaaaaaaaaaaaaa00;
            ppppppbVar21 = (byte ******)(long)iVar13;
            if (ppppppbVar23 < ppppppbVar21) {
LAB_100135e2c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(0,0x100135e30);
              (*pcVar7)();
            }
            *(long *)((long)puVar8 + -0x98) = (long)ppppppbVar15 + (long)ppppppbVar21;
            *(undefined8 *)((long)puVar8 + -0x90) = 0;
            *(undefined8 *)((long)puVar8 + -0x78) = 0;
            *(undefined8 *)((long)puVar8 + -0x70) = 0;
            *(undefined8 *)((long)puVar8 + -0x80) = 0;
            if (ppppppbVar23 < (byte ******)((long)ppppppbVar21 + 1U)) {
LAB_100135c78:
              uVar14 = 1;
LAB_100135c80:
              *(undefined4 *)(param_3 + 7) = uVar14;
              *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
              iVar13 = iVar13 + ~*(uint *)((long)param_3 + 0x34);
LAB_100135c90:
              pppppppbVar11 = (byte *******)0x0;
              if (iVar13 < 2) {
                iVar13 = 1;
              }
              *(int *)(param_3 + 8) = iVar13;
LAB_100135c9c:
              if (*(char *)((long)puVar8 + -0x88) != '\x01') {
                return pppppppbVar11;
              }
              if (-1 < *(char *)((long)puVar8 + -0x69)) {
                return pppppppbVar11;
              }
              func_0x000107c60e14(*(undefined8 *)((long)puVar8 + -0x80));
              return pppppppbVar11;
            }
            puVar2 = (undefined8 *)((long)puVar8 + -0x80);
            do {
              *(undefined4 *)((long)puVar8 + -0x9c) = 0;
              ppppppbVar15 = param_3[2];
              FUN_100135fa0(ppppppbVar15,ppppppbVar23,pppppppbVar11,
                            (undefined1 *)((long)puVar8 + -0x9c));
              if (((int)ppppppbVar15 == 0) ||
                 ((uVar17 = *(uint *)((long)puVar8 + -0x9c), 0x1a < uVar17 >> 0xb &&
                  (0x101fff < uVar17 - 0xe000)))) {
                if ((*(byte *)param_3 >> 1 & 1) == 0) {
                  *(undefined4 *)(param_3 + 7) = 7;
                  *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                  iVar13 = *(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34);
                  goto LAB_100135c90;
                }
                if ((byte ******)((long)*(int *)(param_3 + 4) + 1U) <= param_3[3]) {
                  *(int *)pppppppbVar11 = *(int *)(param_3 + 4) + 1;
                }
                if ((*(byte *)((long)puVar8 + -0x88) & 1) == 0) {
                  uVar26 = *(ulong *)((long)puVar8 + -0x90);
                  if (0x7ffffffffffffff7 < uVar26) {
LAB_100135e28:
                    func_0x000107c35c54();
                    goto LAB_100135e2c;
                  }
                  uVar29 = *(undefined8 *)((long)puVar8 + -0x98);
                  if (uVar26 < 0x17) {
                    *(char *)((long)puVar8 + -0x69) = (char)uVar26;
                    puVar10 = puVar2;
                    if (uVar26 != 0) goto LAB_100135844;
                  }
                  else {
                    puVar3 = (undefined8 *)0x19;
                    if ((uVar26 | 7) != 0x17) {
                      puVar3 = (undefined8 *)((uVar26 | 7) + 1);
                    }
                    puVar10 = puVar3;
                    func_0x000107c60e20();
                    *(ulong *)((long)puVar8 + -0x78) = uVar26;
                    *(ulong *)((long)puVar8 + -0x70) = (ulong)puVar3 | 0x8000000000000000;
                    *(undefined8 **)((long)puVar8 + -0x80) = puVar10;
LAB_100135844:
                    func_0x000107c610b8(puVar10,uVar29,uVar26);
                  }
                  *(undefined1 *)((long)puVar10 + uVar26) = 0;
                  *(undefined1 *)((long)puVar8 + -0x88) = 1;
                }
                bVar28 = *(byte *)((long)puVar8 + -0x69);
                lVar16 = (*(ulong *)((long)puVar8 + -0x70) & 0x7fffffffffffffff) - 1;
                uVar26 = *(ulong *)((long)puVar8 + -0x78);
                if (-1 < (char)bVar28) {
                  lVar16 = 0x16;
                  uVar26 = (ulong)bVar28;
                }
                if (lVar16 - uVar26 < 3) {
                  func_0x000107c60c48(puVar2,lVar16,(uVar26 - lVar16) + 3,uVar26,uVar26,0,3,
                                      &UNK_10e57417b);
                }
                else {
                  puVar3 = *(undefined8 **)((long)puVar8 + -0x80);
                  if (-1 < (char)bVar28) {
                    puVar3 = puVar2;
                  }
                  *(undefined1 *)((undefined2 *)((long)puVar3 + uVar26) + 1) = 0xbd;
                  *(undefined2 *)((long)puVar3 + uVar26) = 0xbfef;
                  lVar16 = uVar26 + 3;
                  if (*(char *)((long)puVar8 + -0x69) < '\0') {
                    *(long *)((long)puVar8 + -0x78) = lVar16;
                    *(undefined1 *)((long)puVar3 + lVar16) = 0;
                  }
                  else {
                    *(byte *)((long)puVar8 + -0x69) = (byte)lVar16 & 0x7f;
                    *(undefined1 *)((long)puVar3 + lVar16) = 0;
                  }
                }
                goto LAB_1001356c8;
              }
              if (uVar17 != 0x5c) {
                if (uVar17 != 0x22) {
                  if ((0x1f < uVar17) ||
                     (func_0x000107c2cbbc(&UNK_10e57417f,4,5), (*(byte *)param_3 >> 3 & 1) != 0)) {
                    if ((uVar17 == 10) || (uVar17 == 0xd)) {
                      iVar13 = *(int *)(param_3 + 4);
                      *(int *)((long)param_3 + 0x34) = iVar13;
                      if (uVar17 == 0xd) {
LAB_1001357dc:
                        *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + 1;
                      }
                      else {
                        if (param_3[3] <= (byte ******)((long)iVar13 + -1)) {
                    /* WARNING: Does not return */
                          pcVar7 = (code *)SoftwareBreakpoint(0,0x100135e3c);
                          (*pcVar7)();
                        }
                        if (*(char *)((long)param_3[2] + (long)iVar13 + -1) != '\r')
                        goto LAB_1001357dc;
                      }
                      if ((byte ******)((long)iVar13 + 1U) <= param_3[3]) goto LAB_1001357fc;
                    }
                    else {
                      iVar13 = *(int *)pppppppbVar11;
                      if ((byte ******)((long)iVar13 + 1U) <= param_3[3]) {
LAB_1001357fc:
                        *(int *)pppppppbVar11 = iVar13 + 1;
                      }
                    }
                    FUN_1001360e8((undefined1 *)((long)puVar8 + -0x98),uVar17);
                    goto LAB_1001356c8;
                  }
                  uVar14 = 7;
                  goto LAB_100135d8c;
                }
                if ((byte ******)((long)*(int *)(param_3 + 4) + 1U) <= param_3[3]) {
                  *(int *)pppppppbVar11 = *(int *)(param_3 + 4) + 1;
                }
                pppppbVar30 = *(byte ******)((long)puVar8 + -0x98);
                ppppppbVar20[1] = *(byte ******)((long)puVar8 + -0x90);
                *ppppppbVar20 = pppppbVar30;
                if (*(char *)((long)puVar8 + -0x88) == '\x01') {
                  if (*(char *)(ppppppbVar20 + 2) == '\0') {
                    pppppbVar30 = (byte *****)*puVar2;
                    ppppppbVar20[4] = *(byte ******)((long)puVar8 + -0x78);
                    ppppppbVar20[3] = pppppbVar30;
                    ppppppbVar20[5] = *(byte ******)((long)puVar8 + -0x70);
                    *(undefined8 *)((long)puVar8 + -0x78) = 0;
                    *(undefined8 *)((long)puVar8 + -0x70) = 0;
                    *puVar2 = 0;
                    pppppppbVar11 = (byte *******)0x1;
                    *(undefined1 *)(ppppppbVar20 + 2) = 1;
                  }
                  else {
                    if (*(char *)((long)ppppppbVar20 + 0x2f) < '\0') {
                      func_0x000107c60e14(ppppppbVar20[3]);
                    }
                    pppppbVar30 = (byte *****)*puVar2;
                    ppppppbVar20[4] = *(byte ******)((long)puVar8 + -0x78);
                    ppppppbVar20[3] = pppppbVar30;
                    ppppppbVar20[5] = *(byte ******)((long)puVar8 + -0x70);
                    *(undefined1 *)((long)puVar8 + -0x69) = 0;
                    *(undefined1 *)((long)puVar8 + -0x80) = 0;
                    pppppppbVar11 = (byte *******)0x1;
                  }
                }
                else if (*(char *)(ppppppbVar20 + 2) == '\0') {
                  pppppppbVar11 = (byte *******)0x1;
                }
                else {
                  if (*(char *)((long)ppppppbVar20 + 0x2f) < '\0') {
                    func_0x000107c60e14(ppppppbVar20[3]);
                  }
                  *(undefined1 *)(ppppppbVar20 + 2) = 0;
                  pppppppbVar11 = (byte *******)0x1;
                }
                goto LAB_100135c9c;
              }
              if ((*(byte *)((long)puVar8 + -0x88) & 1) == 0) {
                uVar26 = *(ulong *)((long)puVar8 + -0x90);
                if (0x7ffffffffffffff7 < uVar26) goto LAB_100135e28;
                uVar29 = *(undefined8 *)((long)puVar8 + -0x98);
                if (uVar26 < 0x17) {
                  *(char *)((long)puVar8 + -0x69) = (char)uVar26;
                  puVar10 = puVar2;
                  if (uVar26 != 0) goto LAB_10013594c;
                }
                else {
                  puVar3 = (undefined8 *)0x19;
                  if ((uVar26 | 7) != 0x17) {
                    puVar3 = (undefined8 *)((uVar26 | 7) + 1);
                  }
                  puVar10 = puVar3;
                  func_0x000107c60e20();
                  *(ulong *)((long)puVar8 + -0x78) = uVar26;
                  *(ulong *)((long)puVar8 + -0x70) = (ulong)puVar3 | 0x8000000000000000;
                  *(undefined8 **)((long)puVar8 + -0x80) = puVar10;
LAB_10013594c:
                  func_0x000107c610b8(puVar10,uVar29,uVar26);
                }
                *(undefined1 *)((long)puVar10 + uVar26) = 0;
                *(undefined1 *)((long)puVar8 + -0x88) = 1;
              }
              iVar13 = *(int *)(param_3 + 4);
              if (param_3[3] < (byte ******)((long)iVar13 + 2U)) {
                uVar14 = 2;
                goto LAB_100135c80;
              }
              iVar25 = iVar13 + 2;
              *(int *)(param_3 + 4) = iVar25;
              switch(*(undefined1 *)((long)param_3[2] + (long)iVar13 + 1)) {
              case 0x22:
                uVar29 = 0x22;
                break;
              default:
                *(undefined4 *)(param_3 + 7) = 2;
                *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                iVar13 = iVar25 + ~*(uint *)((long)param_3 + 0x34);
                goto LAB_100135c90;
              case 0x2f:
                uVar29 = 0x2f;
                break;
              case 0x5c:
                uVar29 = 0x5c;
                break;
              case 0x62:
                uVar29 = 8;
                break;
              case 0x66:
                uVar29 = 0xc;
                break;
              case 0x6e:
                uVar29 = 10;
                break;
              case 0x72:
                uVar29 = 0xd;
                break;
              case 0x74:
                uVar29 = 9;
                break;
              case 0x75:
                if ((byte ******)((long)iVar25 + 4U) <= param_3[3]) {
                  pbVar27 = (byte *)((long)param_3[2] + (long)iVar25);
                  *(int *)pppppppbVar11 = iVar13 + 6;
                  if (((((*pbVar27 - 0x30 & 0xff) < 10) ||
                       (uVar17 = *pbVar27 - 0x41,
                       uVar17 < 0x26 && (1L << ((ulong)uVar17 & 0x3f) & 0x3f0000003fU) != 0)) &&
                      (((pbVar27[1] - 0x30 & 0xff) < 10 ||
                       ((uVar17 = pbVar27[1] - 0x41, uVar17 < 0x26 &&
                        ((1L << ((ulong)uVar17 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
                     ((((pbVar27[2] - 0x30 & 0xff) < 10 ||
                       ((uVar17 = pbVar27[2] - 0x41, uVar17 < 0x26 &&
                        ((1L << ((ulong)uVar17 & 0x3f) & 0x3f0000003fU) != 0)))) &&
                      ((((pbVar27[3] - 0x30 & 0xff) < 10 ||
                        ((uVar17 = pbVar27[3] - 0x41, uVar17 < 0x26 &&
                         ((1L << ((ulong)uVar17 & 0x3f) & 0x3f0000003fU) != 0)))) &&
                       (func_0x000107c2cc3c(pbVar27,4), ((ulong)pbVar27 >> 0x20 & 1) != 0)))))) {
                    if (((uint)((ulong)pbVar27 >> 0xb) & 0x1fffff) == 0x1b) {
                      if (((uint)pbVar27 >> 10 & 1) == 0) {
                        iVar13 = *(int *)(param_3 + 4);
                        if (((byte ******)((long)iVar13 + 2U) <= param_3[3]) &&
                           (ppppppbVar23 = param_3[2],
                           *(short *)((long)ppppppbVar23 + (long)iVar13) == 0x755c)) {
                          iVar25 = iVar13 + 2;
                          *(int *)pppppppbVar11 = iVar25;
                          if ((byte ******)((long)iVar25 + 4U) <= param_3[3]) {
                            *(int *)pppppppbVar11 = iVar13 + 6;
                            *(undefined4 *)((long)puVar8 + -100) = 0;
                            lVar16 = (long)ppppppbVar23 + (long)iVar25;
                            func_0x000107c2caf0(lVar16,4,(undefined1 *)((long)puVar8 + -100));
                            if ((int)lVar16 != 0) {
                              if (*(uint *)((long)puVar8 + -100) >> 10 == 0x37) {
                                pbVar27 = (byte *)(ulong)(*(uint *)((long)puVar8 + -100) +
                                                          (uint)pbVar27 * 0x400 + 0xfca02400);
                                goto code_r0x000100135c68;
                              }
                              goto code_r0x000100135c5c;
                            }
                          }
                          goto code_r0x000100135d84;
                        }
                      }
code_r0x000100135c5c:
                      if ((*(byte *)param_3 >> 1 & 1) == 0) goto code_r0x000100135d84;
                      pbVar27 = (byte *)0xfffd;
                    }
code_r0x000100135c68:
                    FUN_1001360e8((undefined1 *)((long)puVar8 + -0x98),pbVar27);
                    goto LAB_1001356c8;
                  }
                }
                goto code_r0x000100135d84;
              case 0x76:
                func_0x000107c2cbbc(&UNK_10e57417f,3,5);
                if ((*(byte *)param_3 >> 4 & 1) == 0) goto code_r0x000100135d84;
                if ((*(byte *)((long)puVar8 + -0x88) & 1) == 0) {
                  *(long *)((long)puVar8 + -0x90) = *(long *)((long)puVar8 + -0x90) + 1;
                  goto LAB_1001356c8;
                }
                uVar29 = 0xb;
                break;
              case 0x78:
                func_0x000107c2cbbc(&UNK_10e57417f,2,5);
                if ((*(byte *)param_3 >> 5 & 1) == 0) {
code_r0x000100135d84:
                  uVar14 = 2;
LAB_100135d8c:
                  *(undefined4 *)(param_3 + 7) = uVar14;
                  *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                  iVar13 = *(int *)(param_3 + 4) + ~*(uint *)((long)param_3 + 0x34);
                }
                else {
                  iVar13 = *(int *)(param_3 + 4);
                  if (param_3[3] < (byte ******)((long)iVar13 + 2U)) {
                    *(undefined4 *)(param_3 + 7) = 2;
                    *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                    iVar13 = (iVar13 - *(int *)((long)param_3 + 0x34)) + -3;
                  }
                  else {
                    ppppppbVar23 = param_3[2];
                    *(int *)(param_3 + 4) = iVar13 + 2;
                    *(undefined4 *)((long)puVar8 + -100) = 0;
                    lVar16 = (long)ppppppbVar23 + (long)iVar13;
                    func_0x000107c2caf0(lVar16,2,(undefined1 *)((long)puVar8 + -100));
                    if (((int)lVar16 != 0) &&
                       (((uVar17 = *(uint *)((long)puVar8 + -100), uVar17 >> 0xb < 0x1b ||
                         (uVar17 - 0xe000 >> 4 < 0x1dd)) ||
                        ((uVar17 - 0xfdf0 < 0x100210 && ((uVar17 & 0xfffe) != 0xfffe)))))) {
                      FUN_1001360e8((undefined1 *)((long)puVar8 + -0x98));
                      goto LAB_1001356c8;
                    }
                    *(undefined4 *)(param_3 + 7) = 2;
                    *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
                    iVar13 = (*(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34)) + -3;
                  }
                }
                goto LAB_100135c90;
              }
              func_0x000107c2cca8(uVar29,puVar2);
LAB_1001356c8:
              iVar13 = *(int *)(param_3 + 4);
              ppppppbVar23 = param_3[3];
              if (ppppppbVar23 < (byte ******)((long)iVar13 + 1U)) goto LAB_100135c78;
            } while( true );
          }
        }
        *(undefined4 *)(param_3 + 7) = 3;
        *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
        iVar13 = iVar13 - *(int *)((long)param_3 + 0x34);
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        *(int *)(param_3 + 8) = iVar13;
        return (byte *******)0x0;
      }
      goto LAB_100134824;
    }
    puVar8 = (undefined8 *)auStack_110;
    iVar25 = *(int *)(param_3 + 4);
    iVar13 = iVar25;
    if (param_3[3] < (byte ******)((long)iVar25 + 1U)) {
LAB_100134fc0:
      *(undefined4 *)(param_3 + 7) = 3;
      *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
      iVar13 = iVar13 - *(int *)((long)param_3 + 0x34);
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      *(int *)(param_3 + 8) = iVar13;
      *(byte *)param_1 = 0;
      param_1[2] = (byte ******)0x0;
      param_1[1] = (byte ******)0x0;
      param_1[4] = (byte ******)0x0;
      param_1[3] = (byte ******)0x0;
      return param_3;
    }
    iVar13 = iVar25 + 1;
    *(int *)(param_3 + 4) = iVar13;
    if (*(char *)((long)param_3[2] + (long)iVar25) != '{') goto LAB_100134fc0;
    ppppppbVar20 = param_3[5];
    param_3[5] = (byte ******)((long)ppppppbVar20 + 1U);
    unaff_x23 = param_3;
    if (param_3[1] <= (byte ******)((long)ppppppbVar20 + 1U)) {
      *(undefined4 *)(param_3 + 7) = 5;
      *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
      iVar25 = iVar25 - *(int *)((long)param_3 + 0x34);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      *(int *)(param_3 + 8) = iVar25;
      *(byte *)param_1 = 0;
      param_1[2] = (byte ******)0x0;
      param_1[1] = (byte ******)0x0;
      param_1[4] = (byte ******)0x0;
      param_1[3] = (byte ******)0x0;
      goto LAB_100135580;
    }
    FUN_1001342e0();
    unaff_x22 = 0;
    unaff_x21 = 0;
    unaff_x28 = (byte ******)&ppppppbStack_a0;
    pppppppbStack_100 = (byte *******)&pppppppbStack_c8;
    uStack_f8 = 0;
    unaff_x25 = 0xaaaaaaaaaaaaaaaa;
    unaff_x26 = 0x6db6db6db6db6db7;
    unaff_x27 = 0xffffffffffffffff;
    if ((int)unaff_x23 == 4) {
      ppppppbStack_98 = (byte ******)0x0;
      pppppppbStack_80 = (byte *******)0x0;
      uStack_78 = (byte *******)0x0;
      ppppppbStack_88 = (byte ******)0x0;
      ppppppbStack_a0 = (byte ******)0x0;
      ppppppbStack_90 = (byte ******)0xaaaaaaaaaaaaaa00;
      ppppppbVar20 = (byte ******)&ppppppbStack_a0;
      uVar29 = 0x10013493c;
      pppppppbVar11 = param_3;
      goto SUB_1001355b4;
    }
    if ((int)unaff_x23 == 1) {
      if ((byte ******)((long)*(int *)(param_3 + 4) + 1U) <= param_3[3]) {
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      }
      auStack_c0[0] = 0;
      pppppppbStack_c8 = (byte *******)0x0;
      pppppppbStack_d0 = (byte *******)0x0;
      uStack_f8 = 0;
      uStack_108 = 0;
      FUN_100137178(0,0,0,0,0);
      FUN_100138724(&pppppppbStack_d0,0,0);
      FUN_100138828(&ppppppbStack_a0,&pppppppbStack_d0);
      *(byte *)param_1 = 1;
      if ((long)ppppppbStack_88 < 4) {
        if (ppppppbStack_88 == (byte ******)0x1) {
          *(byte *)(param_1 + 1) = (byte)ppppppbStack_a0;
        }
        else if (ppppppbStack_88 == (byte ******)0x2) {
          *(undefined4 *)(param_1 + 1) = ppppppbStack_a0._0_4_;
        }
        else if (ppppppbStack_88 == (byte ******)0x3) {
          param_1[1] = ppppppbStack_a0;
        }
      }
      else if ((long)ppppppbStack_88 < 6) {
        if (ppppppbStack_88 == (byte ******)0x4) {
          param_1[2] = ppppppbStack_98;
          param_1[1] = ppppppbStack_a0;
          param_1[3] = ppppppbStack_90;
          ppppppbStack_98 = (byte ******)0x0;
          ppppppbStack_90 = (byte ******)0x0;
          ppppppbStack_a0 = (byte ******)0x0;
        }
        else if (ppppppbStack_88 == (byte ******)0x5) goto LAB_1001354b8;
      }
      else if ((ppppppbStack_88 == (byte ******)0x6) || (ppppppbStack_88 == (byte ******)0x7)) {
LAB_1001354b8:
        param_1[2] = ppppppbStack_98;
        param_1[1] = ppppppbStack_a0;
        param_1[3] = ppppppbStack_90;
        ppppppbStack_98 = (byte ******)0x0;
        ppppppbStack_90 = (byte ******)0x0;
        ppppppbStack_a0 = (byte ******)0x0;
      }
      param_1[4] = ppppppbStack_88;
      apppppppbStack_f0[0] = &ppppppbStack_a0;
      unaff_x23 = (byte *******)apppppppbStack_f0;
      FUN_100136360(unaff_x23);
      pppppppbVar12 = pppppppbStack_d0;
      pppppppbVar6 = pppppppbStack_d0;
      pppppppbVar11 = pppppppbStack_c8;
      if (pppppppbStack_d0 != (byte *******)0x0) {
        for (; unaff_x23 = pppppppbVar6, pppppppbStack_d0 = unaff_x23,
            pppppppbVar11 != pppppppbVar12; pppppppbVar11 = pppppppbVar11 + -7) {
          apppppppbStack_f0[0] = pppppppbVar11 + -4;
          FUN_100136360(apppppppbStack_f0,pppppppbVar11[-1]);
          pppppppbVar6 = pppppppbStack_d0;
        }
        pppppppbStack_c8 = pppppppbVar12;
        func_0x000107c60e14(unaff_x23);
      }
    }
    else {
      *(undefined4 *)(param_3 + 7) = 8;
      *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
      iVar13 = *(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34);
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      *(int *)(param_3 + 8) = iVar13;
      *(byte *)param_1 = 0;
      param_1[2] = (byte ******)0x0;
      param_1[1] = (byte ******)0x0;
      param_1[4] = (byte ******)0x0;
      param_1[3] = (byte ******)0x0;
    }
    ppppppbVar20 = (byte ******)((long)param_3[5] + -1);
LAB_100135580:
    param_3[5] = ppppppbVar20;
    return unaff_x23;
  }
  if (param_4 - 6U < 3) {
    iVar13 = *(int *)(param_3 + 4);
    lVar16 = (long)iVar13;
    ppppppbVar20 = param_3[3];
    if ((ppppppbVar20 < (byte ******)(lVar16 + 4U)) ||
       (*(int *)((long)param_3[2] + lVar16) != 0x65757274)) {
      if ((ppppppbVar20 < (byte ******)(lVar16 + 5U)) ||
         (*(int *)((long)param_3[2] + lVar16) != 0x736c6166 ||
          (char)((int *)((long)param_3[2] + lVar16))[1] != 'e')) {
        if (((byte ******)(lVar16 + 4U) <= ppppppbVar20) &&
           (*(int *)((long)param_3[2] + lVar16) == 0x6c6c756e)) {
          *(int *)(param_3 + 4) = iVar13 + 4;
          *(byte *)param_1 = 1;
          param_1[4] = (byte ******)0x0;
          pppppppbVar11 = (byte *******)&stack0xffffffffffffffe8;
          FUN_100136360(pppppppbVar11,0);
          return pppppppbVar11;
        }
        *(undefined4 *)(param_3 + 7) = 1;
        *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
        iVar13 = iVar13 - *(int *)((long)param_3 + 0x34);
        if (iVar13 < 2) {
          iVar13 = 1;
        }
        *(int *)(param_3 + 8) = iVar13;
        *(byte *)param_1 = 0;
        param_1[2] = (byte ******)0x0;
        param_1[1] = (byte ******)0x0;
        param_1[4] = (byte ******)0x0;
        param_1[3] = (byte ******)0x0;
        return param_3;
      }
      *(int *)(param_3 + 4) = iVar13 + 5;
      *(byte *)param_1 = 1;
      *(byte *)(param_1 + 1) = 0;
    }
    else {
      *(int *)(param_3 + 4) = iVar13 + 4;
      *(byte *)param_1 = 1;
      *(byte *)(param_1 + 1) = 1;
    }
    param_1[4] = (byte ******)0x1;
    pppppppbVar11 = (byte *******)&stack0xffffffffffffffe8;
    FUN_100136360(pppppppbVar11,1);
    return pppppppbVar11;
  }
  if (param_4 != 5) {
LAB_100134824:
    *(undefined4 *)(param_3 + 7) = 3;
    *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
    iVar13 = *(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34);
    if (iVar13 < 2) {
      iVar13 = 1;
    }
    *(int *)(param_3 + 8) = iVar13;
    *(byte *)param_1 = 0;
    param_1[2] = (byte ******)0x0;
    param_1[1] = (byte ******)0x0;
    param_1[4] = (byte ******)0x0;
    param_1[3] = (byte ******)0x0;
    return param_3;
  }
  iVar13 = *(int *)(param_3 + 4);
  ppppppbVar23 = (byte ******)(long)iVar13;
  ppppppbVar20 = param_3[3];
  if (ppppppbVar20 < ppppppbVar23) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0,0x100136a8c);
    (*pcVar7)();
  }
  ppppppbVar24 = param_3[2];
  ppppppbVar15 = (byte ******)((long)ppppppbVar23 + 1);
  ppppppbVar21 = ppppppbVar23;
  iVar25 = iVar13;
  if ((ppppppbVar15 <= ppppppbVar20) && (*(char *)((long)ppppppbVar24 + (long)ppppppbVar23) == '-'))
  {
    iVar25 = iVar13 + 1;
    *(int *)(param_3 + 4) = iVar25;
    ppppppbVar15 = (byte ******)((long)iVar25 + 1);
    ppppppbVar21 = (byte ******)(long)iVar25;
  }
  if (ppppppbVar15 <= ppppppbVar20) {
    lVar16 = 0;
    uVar17 = 0;
    do {
      iVar22 = (int)lVar16;
      if (9 < *(byte *)((long)ppppppbVar24 + (long)ppppppbVar21) - 0x30) {
        bVar1 = lVar16 == 1 || uVar17 != 0x30;
        goto joined_r0x000100136794;
      }
      uVar4 = (uint)*(byte *)((long)ppppppbVar24 + (long)ppppppbVar21);
      if (lVar16 != 0) {
        uVar4 = uVar17;
      }
      lVar16 = lVar16 + 1;
      iVar22 = iVar25 + iVar22 + 1;
      *(int *)(param_3 + 4) = iVar22;
      ppppppbVar21 = (byte ******)(long)iVar22;
      uVar17 = uVar4;
    } while ((byte ******)((long)ppppppbVar21 + 1U) <= ppppppbVar20);
    iVar22 = (int)lVar16;
    bVar1 = lVar16 == 1 || uVar4 != 0x30;
joined_r0x000100136794:
    iVar25 = iVar25 + iVar22;
    if ((lVar16 != 0) && (bVar1)) {
      lVar16 = (long)iVar25;
      ppppppbVar15 = (byte ******)(lVar16 + 1);
      if ((ppppppbVar20 < ppppppbVar15) || (*(char *)((long)ppppppbVar24 + lVar16) != '.')) {
LAB_10013680c:
        if ((ppppppbVar20 < ppppppbVar15) ||
           ((*(byte *)((long)ppppppbVar24 + lVar16) & 0xdf) != 0x45)) {
LAB_1001368bc:
          pppppppbVar11 = param_3;
          FUN_1001342e0();
          uVar4 = (int)pppppppbVar11 - 1;
          uVar17 = uVar4 >> 1;
          uVar14 = 1;
          if ((uVar17 | uVar4 * -0x80000000) < 6 && (1 << (ulong)(uVar17 & 0x1f) & 0x33U) != 0) {
            *(int *)(param_3 + 4) = iVar25;
            iVar22 = iVar25 - iVar13;
            uVar26 = (long)ppppppbVar24 + (long)ppppppbVar23;
            FUN_100136a94(uVar26,(long)iVar22);
            if ((uVar26 >> 0x20 & 1) != 0) {
              uStack_78 = (byte *******)CONCAT44(uStack_78._4_4_,(int)uVar26);
              *(byte *)param_1 = 1;
              *(int *)(param_1 + 1) = (int)uVar26;
              param_1[4] = (byte ******)0x2;
              pppppppbVar11 = (byte *******)&stack0xffffffffffffffa8;
              FUN_100136360(pppppppbVar11,2);
              return pppppppbVar11;
            }
            if ((bRam000000011336f8e8 & 1) == 0) {
              iVar9 = 0x1336f8e8;
              func_0x000107c60e48();
              if (iVar9 != 0) {
                uRam000000011336f8b8 = 0xc;
                param_2 = (byte ******)0x0;
                uRam000000011336f8c8 = 0;
                uRam000000011336f8c0 = 0;
                uRam000000011336f8d8 = 0;
                uRam000000011336f8d0 = 0;
                uRam000000011336f8e0 = 0;
                func_0x000107c60e4c(0x11336f8e8);
              }
            }
            uStack_78 = (byte *******)CONCAT44(uStack_78._4_4_,0xaaaaaaaa);
            pppppppbVar11 = (byte *******)0x11336f8b8;
            func_0x000107c2d150(0x11336f8b8,(long)ppppppbVar24 + (long)ppppppbVar23,iVar22,1,
                                &uStack_78);
            if (((iVar25 != iVar13) && (((ulong)param_2 & 0x7fffffffffffffff) != 0x7ff0000000000000)
                ) && (iVar22 == (int)uStack_78)) {
              piVar19 = (int *)&UNK_10e574610;
              do {
                iVar13 = *piVar19;
                piVar19 = piVar19 + 1;
              } while (iVar13 != *(char *)((long)ppppppbVar24 + (long)ppppppbVar23) && iVar13 != 0);
              if ((iVar13 == 0) && (((ulong)param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) {
                *(byte *)param_1 = 1;
                param_1[1] = param_2;
                param_1[4] = (byte ******)0x3;
                pppppppbVar11 = (byte *******)&stack0xffffffffffffffa8;
                uStack_78 = (byte *******)param_2;
                FUN_100136360(pppppppbVar11,3);
                return pppppppbVar11;
              }
            }
            uVar14 = 10;
          }
          *(undefined4 *)(param_3 + 7) = uVar14;
          *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
          iVar13 = *(int *)(param_3 + 4) - *(int *)((long)param_3 + 0x34);
          if (iVar13 < 2) {
            iVar13 = 1;
          }
          *(int *)(param_3 + 8) = iVar13;
          *(byte *)param_1 = 0;
          param_1[2] = (byte ******)0x0;
          param_1[1] = (byte ******)0x0;
          param_1[4] = (byte ******)0x0;
          param_1[3] = (byte ******)0x0;
          return pppppppbVar11;
        }
        iVar22 = iVar25 + 1;
        *(int *)(param_3 + 4) = iVar22;
        lVar16 = (long)iVar22;
        ppppppbVar15 = (byte ******)(lVar16 + 1);
        if ((ppppppbVar15 <= ppppppbVar20) &&
           ((*(char *)((long)ppppppbVar24 + lVar16) == '-' ||
            (*(char *)((long)ppppppbVar24 + lVar16) == '+')))) {
          iVar22 = iVar25 + 2;
          *(int *)(param_3 + 4) = iVar22;
          lVar16 = (long)iVar22;
          ppppppbVar15 = (byte ******)(lVar16 + 1);
        }
        iVar25 = iVar22;
        if (ppppppbVar15 <= ppppppbVar20) {
          lVar18 = 0;
          do {
            iVar22 = (int)lVar18;
            if (9 < *(byte *)((long)ppppppbVar24 + lVar16) - 0x30) goto LAB_1001368b4;
            lVar18 = lVar18 + 1;
            iVar22 = iVar25 + iVar22 + 1;
            *(int *)(param_3 + 4) = iVar22;
            lVar16 = (long)iVar22;
          } while ((byte ******)(lVar16 + 1U) <= ppppppbVar20);
          iVar22 = (int)lVar18;
LAB_1001368b4:
          iVar25 = iVar25 + iVar22;
          if (lVar18 != 0) goto LAB_1001368bc;
        }
        *(undefined4 *)(param_3 + 7) = 1;
        *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
        iVar25 = iVar25 - *(int *)((long)param_3 + 0x34);
        goto LAB_1001366dc;
      }
      iVar25 = iVar25 + 1;
      *(int *)(param_3 + 4) = iVar25;
      lVar16 = (long)iVar25;
      if ((byte ******)(lVar16 + 1U) <= ppppppbVar20) {
        lVar18 = 0;
        do {
          if (9 < *(byte *)((long)ppppppbVar24 + lVar16) - 0x30) break;
          lVar18 = lVar18 + 1;
          iVar25 = iVar25 + 1;
          *(int *)(param_3 + 4) = iVar25;
          lVar16 = (long)iVar25;
        } while ((byte ******)(lVar16 + 1U) <= ppppppbVar20);
        if (lVar18 != 0) {
          lVar16 = (long)iVar25;
          ppppppbVar15 = (byte ******)(lVar16 + 1);
          goto LAB_10013680c;
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 7) = 1;
  *(undefined4 *)((long)param_3 + 0x3c) = *(undefined4 *)(param_3 + 6);
  iVar25 = iVar25 - *(int *)((long)param_3 + 0x34);
LAB_1001366dc:
  if (iVar25 < 2) {
    iVar25 = 1;
  }
  *(int *)(param_3 + 8) = iVar25;
  *(byte *)param_1 = 0;
  param_1[2] = (byte ******)0x0;
  param_1[1] = (byte ******)0x0;
  param_1[4] = (byte ******)0x0;
  param_1[3] = (byte ******)0x0;
  return param_3;
}



/* Entry: 10013485c; end: 100135e43;  */

/* WARNING: Possible PIC construction at 0x000100134938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010013493c) */
/* WARNING: Removing unreachable block (ram,0x0001001349c0) */
/* WARNING: Removing unreachable block (ram,0x000100134940) */
/* WARNING: Removing unreachable block (ram,0x0001001349dc) */
/* WARNING: Removing unreachable block (ram,0x0001001349fc) */
/* WARNING: Removing unreachable block (ram,0x000100134950) */
/* WARNING: Removing unreachable block (ram,0x000100134964) */
/* WARNING: Removing unreachable block (ram,0x00010013496c) */
/* WARNING: Removing unreachable block (ram,0x000100134a18) */
/* WARNING: Removing unreachable block (ram,0x000100134998) */
/* WARNING: Removing unreachable block (ram,0x000100134a20) */
/* WARNING: Removing unreachable block (ram,0x0001001355a8) */
/* WARNING: Removing unreachable block (ram,0x000100134a30) */
/* WARNING: Removing unreachable block (ram,0x000100134a4c) */
/* WARNING: Removing unreachable block (ram,0x000100134a58) */
/* WARNING: Removing unreachable block (ram,0x000100134a3c) */
/* WARNING: Removing unreachable block (ram,0x000100134a84) */
/* WARNING: Removing unreachable block (ram,0x000100134a48) */
/* WARNING: Removing unreachable block (ram,0x000100134a94) */
/* WARNING: Removing unreachable block (ram,0x0001001355a4) */
/* WARNING: Removing unreachable block (ram,0x0001001349a4) */
/* WARNING: Removing unreachable block (ram,0x000100134aa4) */
/* WARNING: Removing unreachable block (ram,0x000100134af0) */
/* WARNING: Removing unreachable block (ram,0x0001001355ac) */
/* WARNING: Removing unreachable block (ram,0x000100134b18) */
/* WARNING: Removing unreachable block (ram,0x000100134b30) */
/* WARNING: Removing unreachable block (ram,0x000100134b48) */
/* WARNING: Removing unreachable block (ram,0x000100134ba0) */
/* WARNING: Removing unreachable block (ram,0x000100134b50) */
/* WARNING: Removing unreachable block (ram,0x0001001355b0) */
/* WARNING: Removing unreachable block (ram,0x000100134b58) */
/* WARNING: Removing unreachable block (ram,0x000100134ba4) */
/* WARNING: Removing unreachable block (ram,0x000100134bf0) */
/* WARNING: Removing unreachable block (ram,0x000100134dd4) */
/* WARNING: Removing unreachable block (ram,0x000100134bf8) */
/* WARNING: Removing unreachable block (ram,0x000100134e00) */
/* WARNING: Removing unreachable block (ram,0x000100134c00) */
/* WARNING: Removing unreachable block (ram,0x000100134c08) */
/* WARNING: Removing unreachable block (ram,0x000100134bd4) */
/* WARNING: Removing unreachable block (ram,0x000100134c54) */
/* WARNING: Removing unreachable block (ram,0x000100134c5c) */
/* WARNING: Removing unreachable block (ram,0x000100134bdc) */
/* WARNING: Removing unreachable block (ram,0x000100134de0) */
/* WARNING: Removing unreachable block (ram,0x000100134be4) */
/* WARNING: Removing unreachable block (ram,0x000100134c64) */
/* WARNING: Removing unreachable block (ram,0x000100134bec) */
/* WARNING: Removing unreachable block (ram,0x000100134e08) */
/* WARNING: Removing unreachable block (ram,0x000100134e1c) */
/* WARNING: Removing unreachable block (ram,0x000100134eac) */
/* WARNING: Removing unreachable block (ram,0x000100134ef0) */
/* WARNING: Removing unreachable block (ram,0x000100134f14) */
/* WARNING: Removing unreachable block (ram,0x000100134ef8) */
/* WARNING: Removing unreachable block (ram,0x000100134f3c) */
/* WARNING: Removing unreachable block (ram,0x000100134f00) */
/* WARNING: Removing unreachable block (ram,0x000100134f08) */
/* WARNING: Removing unreachable block (ram,0x000100134ed4) */
/* WARNING: Removing unreachable block (ram,0x000100134e54) */
/* WARNING: Removing unreachable block (ram,0x000100134f20) */
/* WARNING: Removing unreachable block (ram,0x000100134e5c) */
/* WARNING: Removing unreachable block (ram,0x000100134edc) */
/* WARNING: Removing unreachable block (ram,0x000100134ee4) */
/* WARNING: Removing unreachable block (ram,0x000100134e64) */
/* WARNING: Removing unreachable block (ram,0x000100134eec) */
/* WARNING: Removing unreachable block (ram,0x000100134e8c) */
/* WARNING: Removing unreachable block (ram,0x000100134f54) */
/* WARNING: Removing unreachable block (ram,0x000100134f70) */
/* WARNING: Removing unreachable block (ram,0x000100134f48) */
/* WARNING: Removing unreachable block (ram,0x000100134f7c) */
/* WARNING: Removing unreachable block (ram,0x000100134f98) */
/* WARNING: Removing unreachable block (ram,0x000100134f9c) */
/* WARNING: Removing unreachable block (ram,0x000100134fbc) */
/* WARNING: Removing unreachable block (ram,0x000100134ab0) */
/* WARNING: Removing unreachable block (ram,0x000100134b68) */
/* WARNING: Removing unreachable block (ram,0x000100134c94) */
/* WARNING: Removing unreachable block (ram,0x000100134cb0) */
/* WARNING: Removing unreachable block (ram,0x000100134b70) */
/* WARNING: Removing unreachable block (ram,0x000100134ce8) */
/* WARNING: Removing unreachable block (ram,0x000100134b78) */
/* WARNING: Removing unreachable block (ram,0x000100134b80) */
/* WARNING: Removing unreachable block (ram,0x000100134b9c) */
/* WARNING: Removing unreachable block (ram,0x000100134ad4) */
/* WARNING: Removing unreachable block (ram,0x000100134c14) */
/* WARNING: Removing unreachable block (ram,0x000100134c1c) */
/* WARNING: Removing unreachable block (ram,0x000100134adc) */
/* WARNING: Removing unreachable block (ram,0x000100134cb4) */
/* WARNING: Removing unreachable block (ram,0x000100134ce4) */
/* WARNING: Removing unreachable block (ram,0x000100134ae4) */
/* WARNING: Removing unreachable block (ram,0x000100134c24) */
/* WARNING: Removing unreachable block (ram,0x000100134c50) */
/* WARNING: Removing unreachable block (ram,0x000100134aec) */
/* WARNING: Removing unreachable block (ram,0x000100134cf0) */
/* WARNING: Removing unreachable block (ram,0x000100134d04) */
/* WARNING: Removing unreachable block (ram,0x000100134d0c) */
/* WARNING: Removing unreachable block (ram,0x000100134d24) */
/* WARNING: Removing unreachable block (ram,0x000100134d2c) */
/* WARNING: Removing unreachable block (ram,0x000100134d40) */
/* WARNING: Removing unreachable block (ram,0x000100134d48) */
/* WARNING: Removing unreachable block (ram,0x000100134d5c) */
/* WARNING: Removing unreachable block (ram,0x000100134d64) */
/* WARNING: Removing unreachable block (ram,0x000100134d68) */
/* WARNING: Removing unreachable block (ram,0x000100134d7c) */
/* WARNING: Removing unreachable block (ram,0x000100134d84) */
/* WARNING: Removing unreachable block (ram,0x000100134d98) */
/* WARNING: Removing unreachable block (ram,0x000100134da0) */
/* WARNING: Removing unreachable block (ram,0x000100134db4) */
/* WARNING: Removing unreachable block (ram,0x000100134dc0) */
/* WARNING: Removing unreachable block (ram,0x000100134dc8) */
/* WARNING: Removing unreachable block (ram,0x000100134910) */
/* WARNING: Removing unreachable block (ram,0x000100135050) */
/* WARNING: Removing unreachable block (ram,0x000100135060) */
/* WARNING: Removing unreachable block (ram,0x0001001350f4) */
/* WARNING: Removing unreachable block (ram,0x00010013514c) */
/* WARNING: Removing unreachable block (ram,0x000100135170) */
/* WARNING: Removing unreachable block (ram,0x000100135154) */
/* WARNING: Removing unreachable block (ram,0x000100135198) */
/* WARNING: Removing unreachable block (ram,0x00010013515c) */
/* WARNING: Removing unreachable block (ram,0x000100135164) */
/* WARNING: Removing unreachable block (ram,0x000100135130) */
/* WARNING: Removing unreachable block (ram,0x00010013507c) */
/* WARNING: Removing unreachable block (ram,0x00010013517c) */
/* WARNING: Removing unreachable block (ram,0x000100135084) */
/* WARNING: Removing unreachable block (ram,0x000100135138) */
/* WARNING: Removing unreachable block (ram,0x000100135140) */
/* WARNING: Removing unreachable block (ram,0x00010013508c) */
/* WARNING: Removing unreachable block (ram,0x000100135148) */
/* WARNING: Removing unreachable block (ram,0x0001001350a4) */
/* WARNING: Removing unreachable block (ram,0x000100135204) */
/* WARNING: Removing unreachable block (ram,0x0001001351d8) */
/* WARNING: Removing unreachable block (ram,0x0001001351e0) */
/* WARNING: Removing unreachable block (ram,0x000100135210) */
/* WARNING: Removing unreachable block (ram,0x000100135560) */
/* WARNING: Removing unreachable block (ram,0x00010013524c) */
/* WARNING: Removing unreachable block (ram,0x000100135258) */
/* WARNING: Removing unreachable block (ram,0x0001001352a4) */
/* WARNING: Removing unreachable block (ram,0x00010013526c) */
/* WARNING: Removing unreachable block (ram,0x00010013527c) */
/* WARNING: Removing unreachable block (ram,0x0001001352d0) */
/* WARNING: Removing unreachable block (ram,0x0001001352d4) */
/* WARNING: Removing unreachable block (ram,0x000100135348) */
/* WARNING: Removing unreachable block (ram,0x0001001352e0) */
/* WARNING: Removing unreachable block (ram,0x000100135304) */
/* WARNING: Removing unreachable block (ram,0x000100135308) */
/* WARNING: Removing unreachable block (ram,0x000100135310) */
/* WARNING: Removing unreachable block (ram,0x000100135314) */
/* WARNING: Removing unreachable block (ram,0x00010013531c) */
/* WARNING: Removing unreachable block (ram,0x000100135338) */
/* WARNING: Removing unreachable block (ram,0x000100135344) */
/* WARNING: Removing unreachable block (ram,0x00010013534c) */
/* WARNING: Removing unreachable block (ram,0x000100135354) */
/* WARNING: Removing unreachable block (ram,0x000100135434) */
/* WARNING: Removing unreachable block (ram,0x000100135360) */
/* WARNING: Removing unreachable block (ram,0x00010013537c) */
/* WARNING: Removing unreachable block (ram,0x000100135398) */
/* WARNING: Removing unreachable block (ram,0x00010013539c) */
/* WARNING: Removing unreachable block (ram,0x0001001353a4) */
/* WARNING: Removing unreachable block (ram,0x0001001353a8) */
/* WARNING: Removing unreachable block (ram,0x0001001353b0) */
/* WARNING: Removing unreachable block (ram,0x0001001353cc) */
/* WARNING: Removing unreachable block (ram,0x000100135368) */
/* WARNING: Removing unreachable block (ram,0x0001001353d4) */
/* WARNING: Removing unreachable block (ram,0x0001001353e0) */
/* WARNING: Removing unreachable block (ram,0x0001001353e8) */
/* WARNING: Removing unreachable block (ram,0x000100135428) */
/* WARNING: Removing unreachable block (ram,0x000100135438) */
/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10013485c(undefined1 *param_1,byte *******param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  int iVar3;
  uint uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  undefined8 uVar9;
  byte *******pppppppbVar10;
  int iVar11;
  undefined4 uVar12;
  byte ******ppppppbVar13;
  long lVar14;
  byte ******ppppppbVar15;
  byte *pbVar16;
  uint uStack_1ac;
  byte ******ppppppbStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 *******pppppppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  uint uStack_174;
  byte ******ppppppbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte *******apppppppbStack_f0 [4];
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  undefined8 uStack_c0;
  byte ******ppppppbStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar11 = iVar3;
  if (param_2[3] < (byte ******)((long)iVar3 + 1U)) {
LAB_100134fc0:
    *(undefined4 *)(param_2 + 7) = 3;
    *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
    iVar11 = iVar11 - *(int *)((long)param_2 + 0x34);
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    *(int *)(param_2 + 8) = iVar11;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return param_2;
  }
  iVar11 = iVar3 + 1;
  *(int *)(param_2 + 4) = iVar11;
  if (*(char *)((long)param_2[2] + (long)iVar3) != '{') goto LAB_100134fc0;
  ppppppbVar13 = param_2[5];
  param_2[5] = (byte ******)((long)ppppppbVar13 + 1U);
  pppppppbVar10 = param_2;
  if (param_2[1] <= (byte ******)((long)ppppppbVar13 + 1U)) {
    *(undefined4 *)(param_2 + 7) = 5;
    *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
    iVar3 = iVar3 - *(int *)((long)param_2 + 0x34);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(param_2 + 8) = iVar3;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    goto LAB_100135580;
  }
  FUN_1001342e0();
  ppppppbStack_170 = (byte ******)&ppppppbStack_a0;
  if ((int)pppppppbVar10 == 4) {
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pppppppuStack_88 = (undefined8 *******)0x0;
    ppppppbStack_a0 = (byte ******)0x0;
    uStack_90 = 0xaaaaaaaaaaaaaa00;
    uStack_168 = 0xffffffffffffffff;
    uStack_160 = 0x6db6db6db6db6db7;
    uStack_158 = 0xaaaaaaaaaaaaaaaa;
    pppppppbVar10 = param_2 + 4;
    iVar11 = *(int *)pppppppbVar10;
    lVar14 = (long)iVar11;
    ppppppbVar13 = param_2[3];
    if ((byte ******)(lVar14 + 1U) <= ppppppbVar13) {
      iVar11 = iVar11 + 1;
      *(int *)(param_2 + 4) = iVar11;
      if (*(char *)((long)param_2[2] + lVar14) == '\"') {
        uStack_198 = 0xaaaaaaaaaaaaaa00;
        ppppppbVar15 = (byte ******)(long)iVar11;
        if (ppppppbVar13 < ppppppbVar15) {
LAB_100135e2c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x100135e30);
          (*pcVar7)();
        }
        ppppppbStack_1a8 = (byte ******)((long)param_2[2] + (long)ppppppbVar15);
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        pppppppuStack_190 = (undefined8 *******)0x0;
        if (ppppppbVar13 < (byte ******)((long)ppppppbVar15 + 1U)) {
LAB_100135c78:
          uVar12 = 1;
LAB_100135c80:
          *(undefined4 *)(param_2 + 7) = uVar12;
          *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
          iVar11 = iVar11 + ~*(uint *)((long)param_2 + 0x34);
LAB_100135c90:
          pppppppbVar10 = (byte *******)0x0;
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          *(int *)(param_2 + 8) = iVar11;
LAB_100135c9c:
          if ((char)uStack_198 != '\x01') {
            return pppppppbVar10;
          }
          if (-1 < (long)uStack_180) {
            return pppppppbVar10;
          }
          func_0x000107c60e14(pppppppuStack_190);
          return pppppppbVar10;
        }
        do {
          uStack_1ac = 0;
          ppppppbVar15 = param_2[2];
          FUN_100135fa0(ppppppbVar15,ppppppbVar13,pppppppbVar10,&uStack_1ac);
          uVar1 = uStack_1a0;
          ppppppbVar13 = ppppppbStack_1a8;
          uVar4 = uStack_1ac;
          if (((int)ppppppbVar15 == 0) ||
             ((0x1a < uStack_1ac >> 0xb && (0x101fff < uStack_1ac - 0xe000)))) {
            if ((*(byte *)param_2 >> 1 & 1) == 0) {
              *(undefined4 *)(param_2 + 7) = 7;
              *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
              iVar11 = *(int *)(param_2 + 4) - *(int *)((long)param_2 + 0x34);
              goto LAB_100135c90;
            }
            if ((byte ******)((long)*(int *)(param_2 + 4) + 1U) <= param_2[3]) {
              *(int *)pppppppbVar10 = *(int *)(param_2 + 4) + 1;
            }
            if ((uStack_198 & 1) == 0) {
              if (0x7ffffffffffffff7 < uStack_1a0) {
LAB_100135e28:
                func_0x000107c35c54();
                goto LAB_100135e2c;
              }
              if (uStack_1a0 < 0x17) {
                uStack_180 = CONCAT17((char)uStack_1a0,(undefined7)uStack_180);
                pppppppuVar8 = &pppppppuStack_190;
                if (uStack_1a0 != 0) goto LAB_100135844;
              }
              else {
                pppppppuVar2 = (undefined8 *******)0x19;
                if ((uStack_1a0 | 7) != 0x17) {
                  pppppppuVar2 = (undefined8 *******)((uStack_1a0 | 7) + 1);
                }
                pppppppuVar8 = pppppppuVar2;
                func_0x000107c60e20();
                uStack_180 = (ulong)pppppppuVar2 | 0x8000000000000000;
                uStack_188 = uVar1;
                pppppppuStack_190 = pppppppuVar8;
LAB_100135844:
                func_0x000107c610b8(pppppppuVar8,ppppppbVar13,uVar1);
              }
              *(undefined1 *)((long)pppppppuVar8 + uVar1) = 0;
              uStack_198 = CONCAT71(uStack_198._1_7_,1);
            }
            lVar14 = (uStack_180 & 0x7fffffffffffffff) - 1;
            uVar1 = uStack_188;
            if (-1 < (long)uStack_180) {
              lVar14 = 0x16;
              uVar1 = uStack_180 >> 0x38;
            }
            if (lVar14 - uVar1 < 3) {
              func_0x000107c60c48(&pppppppuStack_190,lVar14,(uVar1 - lVar14) + 3,uVar1,uVar1,0,3,
                                  &UNK_10e57417b);
            }
            else {
              pppppppuVar2 = pppppppuStack_190;
              if (-1 < (long)uStack_180) {
                pppppppuVar2 = &pppppppuStack_190;
              }
              *(undefined1 *)((undefined2 *)((long)pppppppuVar2 + uVar1) + 1) = 0xbd;
              *(undefined2 *)((long)pppppppuVar2 + uVar1) = 0xbfef;
              uVar1 = uVar1 + 3;
              if ((long)uStack_180 < 0) {
                uStack_188 = uVar1;
                *(undefined1 *)((long)pppppppuVar2 + uVar1) = 0;
              }
              else {
                uStack_180 = CONCAT17((char)uVar1,(undefined7)uStack_180) & 0x7fffffffffffffff;
                *(undefined1 *)((long)pppppppuVar2 + uVar1) = 0;
              }
            }
            goto LAB_1001356c8;
          }
          if (uStack_1ac != 0x5c) {
            if (uStack_1ac != 0x22) {
              if ((0x1f < uStack_1ac) ||
                 (func_0x000107c2cbbc(&UNK_10e57417f,4,5), (*(byte *)param_2 >> 3 & 1) != 0)) {
                if ((uVar4 == 10) || (uVar4 == 0xd)) {
                  iVar11 = *(int *)(param_2 + 4);
                  *(int *)((long)param_2 + 0x34) = iVar11;
                  if (uVar4 == 0xd) {
LAB_1001357dc:
                    *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + 1;
                  }
                  else {
                    if (param_2[3] <= (byte ******)((long)iVar11 + -1)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(0,0x100135e3c);
                      (*pcVar7)();
                    }
                    if (*(char *)((long)param_2[2] + (long)iVar11 + -1) != '\r') goto LAB_1001357dc;
                  }
                  if ((byte ******)((long)iVar11 + 1U) <= param_2[3]) goto LAB_1001357fc;
                }
                else {
                  iVar11 = *(int *)pppppppbVar10;
                  if ((byte ******)((long)iVar11 + 1U) <= param_2[3]) {
LAB_1001357fc:
                    *(int *)pppppppbVar10 = iVar11 + 1;
                  }
                }
                FUN_1001360e8(&ppppppbStack_1a8,uVar4);
                goto LAB_1001356c8;
              }
              uVar12 = 7;
              goto LAB_100135d8c;
            }
            if ((byte ******)((long)*(int *)(param_2 + 4) + 1U) <= param_2[3]) {
              *(int *)pppppppbVar10 = *(int *)(param_2 + 4) + 1;
            }
            uStack_98 = uStack_1a0;
            ppppppbStack_a0 = ppppppbStack_1a8;
            if ((char)uStack_198 == '\x01') {
              if ((char)uStack_90 == '\0') {
                uStack_80 = uStack_188;
                pppppppuStack_88 = pppppppuStack_190;
                uStack_78 = uStack_180;
                uStack_188 = 0;
                uStack_180 = 0;
                pppppppuStack_190 = (undefined8 *******)0x0;
                pppppppbVar10 = (byte *******)0x1;
                uStack_90 = CONCAT71(uStack_90._1_7_,1);
              }
              else {
                if ((long)uStack_78 < 0) {
                  func_0x000107c60e14(pppppppuStack_88);
                }
                uStack_80 = uStack_188;
                pppppppuStack_88 = pppppppuStack_190;
                uStack_78 = uStack_180;
                uStack_180 = uStack_180 & 0xffffffffffffff;
                pppppppuStack_190 =
                     (undefined8 *******)((ulong)pppppppuStack_190 & 0xffffffffffffff00);
                pppppppbVar10 = (byte *******)0x1;
              }
            }
            else if ((char)uStack_90 == '\0') {
              pppppppbVar10 = (byte *******)0x1;
            }
            else {
              if ((long)uStack_78 < 0) {
                func_0x000107c60e14(pppppppuStack_88);
              }
              uStack_90 = uStack_90 & 0xffffffffffffff00;
              pppppppbVar10 = (byte *******)0x1;
            }
            goto LAB_100135c9c;
          }
          if ((uStack_198 & 1) == 0) {
            if (0x7ffffffffffffff7 < uStack_1a0) goto LAB_100135e28;
            if (uStack_1a0 < 0x17) {
              uStack_180 = CONCAT17((char)uStack_1a0,(undefined7)uStack_180);
              pppppppuVar8 = &pppppppuStack_190;
              if (uStack_1a0 != 0) goto LAB_10013594c;
            }
            else {
              pppppppuVar2 = (undefined8 *******)0x19;
              if ((uStack_1a0 | 7) != 0x17) {
                pppppppuVar2 = (undefined8 *******)((uStack_1a0 | 7) + 1);
              }
              pppppppuVar8 = pppppppuVar2;
              func_0x000107c60e20();
              uStack_180 = (ulong)pppppppuVar2 | 0x8000000000000000;
              uStack_188 = uVar1;
              pppppppuStack_190 = pppppppuVar8;
LAB_10013594c:
              func_0x000107c610b8(pppppppuVar8,ppppppbVar13,uVar1);
            }
            *(undefined1 *)((long)pppppppuVar8 + uVar1) = 0;
            uStack_198 = CONCAT71(uStack_198._1_7_,1);
          }
          iVar11 = *(int *)(param_2 + 4);
          if (param_2[3] < (byte ******)((long)iVar11 + 2U)) {
            uVar12 = 2;
            goto LAB_100135c80;
          }
          iVar3 = iVar11 + 2;
          *(int *)(param_2 + 4) = iVar3;
          switch(*(undefined1 *)((long)param_2[2] + (long)iVar11 + 1)) {
          case 0x22:
            uVar9 = 0x22;
            break;
          default:
            *(undefined4 *)(param_2 + 7) = 2;
            *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
            iVar11 = iVar3 + ~*(uint *)((long)param_2 + 0x34);
            goto LAB_100135c90;
          case 0x2f:
            uVar9 = 0x2f;
            break;
          case 0x5c:
            uVar9 = 0x5c;
            break;
          case 0x62:
            uVar9 = 8;
            break;
          case 0x66:
            uVar9 = 0xc;
            break;
          case 0x6e:
            uVar9 = 10;
            break;
          case 0x72:
            uVar9 = 0xd;
            break;
          case 0x74:
            uVar9 = 9;
            break;
          case 0x75:
            if ((byte ******)((long)iVar3 + 4U) <= param_2[3]) {
              pbVar16 = (byte *)((long)param_2[2] + (long)iVar3);
              *(int *)pppppppbVar10 = iVar11 + 6;
              if (((((*pbVar16 - 0x30 & 0xff) < 10) ||
                   (uVar4 = *pbVar16 - 0x41,
                   uVar4 < 0x26 && (1L << ((ulong)uVar4 & 0x3f) & 0x3f0000003fU) != 0)) &&
                  (((pbVar16[1] - 0x30 & 0xff) < 10 ||
                   ((uVar4 = pbVar16[1] - 0x41, uVar4 < 0x26 &&
                    ((1L << ((ulong)uVar4 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
                 ((((pbVar16[2] - 0x30 & 0xff) < 10 ||
                   ((uVar4 = pbVar16[2] - 0x41, uVar4 < 0x26 &&
                    ((1L << ((ulong)uVar4 & 0x3f) & 0x3f0000003fU) != 0)))) &&
                  ((((pbVar16[3] - 0x30 & 0xff) < 10 ||
                    ((uVar4 = pbVar16[3] - 0x41, uVar4 < 0x26 &&
                     ((1L << ((ulong)uVar4 & 0x3f) & 0x3f0000003fU) != 0)))) &&
                   (func_0x000107c2cc3c(pbVar16,4), ((ulong)pbVar16 >> 0x20 & 1) != 0)))))) {
                if (((uint)((ulong)pbVar16 >> 0xb) & 0x1fffff) == 0x1b) {
                  if (((uint)pbVar16 >> 10 & 1) == 0) {
                    iVar11 = *(int *)(param_2 + 4);
                    if (((byte ******)((long)iVar11 + 2U) <= param_2[3]) &&
                       (*(short *)((long)param_2[2] + (long)iVar11) == 0x755c)) {
                      iVar3 = iVar11 + 2;
                      *(int *)pppppppbVar10 = iVar3;
                      if ((byte ******)((long)iVar3 + 4U) <= param_2[3]) {
                        *(int *)pppppppbVar10 = iVar11 + 6;
                        uStack_174 = 0;
                        lVar14 = (long)param_2[2] + (long)iVar3;
                        func_0x000107c2caf0(lVar14,4,&uStack_174);
                        if ((int)lVar14 != 0) {
                          if (uStack_174 >> 10 == 0x37) {
                            pbVar16 = (byte *)(ulong)(uStack_174 + (uint)pbVar16 * 0x400 +
                                                     0xfca02400);
                            goto code_r0x000100135c68;
                          }
                          goto code_r0x000100135c5c;
                        }
                      }
                      goto code_r0x000100135d84;
                    }
                  }
code_r0x000100135c5c:
                  if ((*(byte *)param_2 >> 1 & 1) == 0) goto code_r0x000100135d84;
                  pbVar16 = (byte *)0xfffd;
                }
code_r0x000100135c68:
                FUN_1001360e8(&ppppppbStack_1a8,pbVar16);
                goto LAB_1001356c8;
              }
            }
            goto code_r0x000100135d84;
          case 0x76:
            func_0x000107c2cbbc(&UNK_10e57417f,3,5);
            if ((*(byte *)param_2 >> 4 & 1) == 0) goto code_r0x000100135d84;
            if ((uStack_198 & 1) == 0) {
              uStack_1a0 = uStack_1a0 + 1;
              goto LAB_1001356c8;
            }
            uVar9 = 0xb;
            break;
          case 0x78:
            func_0x000107c2cbbc(&UNK_10e57417f,2,5);
            if ((*(byte *)param_2 >> 5 & 1) == 0) {
code_r0x000100135d84:
              uVar12 = 2;
LAB_100135d8c:
              *(undefined4 *)(param_2 + 7) = uVar12;
              *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
              iVar11 = *(int *)(param_2 + 4) + ~*(uint *)((long)param_2 + 0x34);
            }
            else {
              iVar11 = *(int *)(param_2 + 4);
              if (param_2[3] < (byte ******)((long)iVar11 + 2U)) {
                *(undefined4 *)(param_2 + 7) = 2;
                *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
                iVar11 = (iVar11 - *(int *)((long)param_2 + 0x34)) + -3;
              }
              else {
                *(int *)(param_2 + 4) = iVar11 + 2;
                uStack_174 = 0;
                lVar14 = (long)param_2[2] + (long)iVar11;
                func_0x000107c2caf0(lVar14,2,&uStack_174);
                if (((int)lVar14 != 0) &&
                   (((uStack_174 >> 0xb < 0x1b || (uStack_174 - 0xe000 >> 4 < 0x1dd)) ||
                    ((uStack_174 - 0xfdf0 < 0x100210 && ((uStack_174 & 0xfffe) != 0xfffe)))))) {
                  FUN_1001360e8(&ppppppbStack_1a8);
                  goto LAB_1001356c8;
                }
                *(undefined4 *)(param_2 + 7) = 2;
                *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
                iVar11 = (*(int *)(param_2 + 4) - *(int *)((long)param_2 + 0x34)) + -3;
              }
            }
            goto LAB_100135c90;
          }
          func_0x000107c2cca8(uVar9,&pppppppuStack_190);
LAB_1001356c8:
          iVar11 = *(int *)(param_2 + 4);
          ppppppbVar13 = param_2[3];
          if (ppppppbVar13 < (byte ******)((long)iVar11 + 1U)) goto LAB_100135c78;
        } while( true );
      }
    }
    *(undefined4 *)(param_2 + 7) = 3;
    *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
    iVar11 = iVar11 - *(int *)((long)param_2 + 0x34);
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    *(int *)(param_2 + 8) = iVar11;
    return (byte *******)0x0;
  }
  if ((int)pppppppbVar10 == 1) {
    if ((byte ******)((long)*(int *)(param_2 + 4) + 1U) <= param_2[3]) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
    uStack_c0 = 0;
    pppppppbStack_c8 = (byte *******)0x0;
    pppppppbStack_d0 = (byte *******)0x0;
    FUN_100137178(0,0,0,0,0);
    FUN_100138724(&pppppppbStack_d0,0,0);
    FUN_100138828(&ppppppbStack_a0,&pppppppbStack_d0);
    *param_1 = 1;
    if ((long)pppppppuStack_88 < 4) {
      if (pppppppuStack_88 == (undefined8 *******)0x1) {
        param_1[8] = ppppppbStack_a0._0_1_;
      }
      else if (pppppppuStack_88 == (undefined8 *******)0x2) {
        *(undefined4 *)(param_1 + 8) = ppppppbStack_a0._0_4_;
      }
      else if (pppppppuStack_88 == (undefined8 *******)0x3) {
        *(byte *******)(param_1 + 8) = ppppppbStack_a0;
      }
    }
    else if ((long)pppppppuStack_88 < 6) {
      if (pppppppuStack_88 == (undefined8 *******)0x4) {
        *(ulong *)(param_1 + 0x10) = uStack_98;
        *(byte *******)(param_1 + 8) = ppppppbStack_a0;
        *(ulong *)(param_1 + 0x18) = uStack_90;
        uStack_98 = 0;
        uStack_90 = 0;
        ppppppbStack_a0 = (byte ******)0x0;
      }
      else if (pppppppuStack_88 == (undefined8 *******)0x5) goto LAB_1001354b8;
    }
    else if ((pppppppuStack_88 == (undefined8 *******)0x6) ||
            (pppppppuStack_88 == (undefined8 *******)0x7)) {
LAB_1001354b8:
      *(ulong *)(param_1 + 0x10) = uStack_98;
      *(byte *******)(param_1 + 8) = ppppppbStack_a0;
      *(ulong *)(param_1 + 0x18) = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      ppppppbStack_a0 = (byte ******)0x0;
    }
    *(undefined8 ********)(param_1 + 0x20) = pppppppuStack_88;
    apppppppbStack_f0[0] = &ppppppbStack_a0;
    pppppppbVar10 = (byte *******)apppppppbStack_f0;
    FUN_100136360(pppppppbVar10);
    pppppppbVar6 = pppppppbStack_d0;
    pppppppbVar5 = pppppppbStack_c8;
    if (pppppppbStack_d0 != (byte *******)0x0) {
      for (; pppppppbVar10 = pppppppbStack_d0, pppppppbStack_d0 = pppppppbVar10,
          pppppppbVar5 != pppppppbVar6; pppppppbVar5 = pppppppbVar5 + -7) {
        apppppppbStack_f0[0] = pppppppbVar5 + -4;
        FUN_100136360(apppppppbStack_f0,pppppppbVar5[-1]);
      }
      pppppppbStack_c8 = pppppppbVar6;
      func_0x000107c60e14(pppppppbVar10);
    }
  }
  else {
    *(undefined4 *)(param_2 + 7) = 8;
    *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_2 + 6);
    iVar11 = *(int *)(param_2 + 4) - *(int *)((long)param_2 + 0x34);
    if (iVar11 < 2) {
      iVar11 = 1;
    }
    *(int *)(param_2 + 8) = iVar11;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  ppppppbVar13 = (byte ******)((long)param_2[5] + -1);
LAB_100135580:
  param_2[5] = ppppppbVar13;
  return pppppppbVar10;
}



/* Entry: 100135e44; end: 100135f9f;  */

void FUN_100135e44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x100135e44);
  (*pcVar1)();
}



/* Entry: 100135fa0; end: 1001360e7;  */

bool FUN_100135fa0(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)(int)*param_3;
  uVar4 = lVar7 + 1;
  uVar3 = (uint)uVar4;
  *param_3 = uVar3;
  bVar2 = *(byte *)(param_1 + lVar7);
  uVar5 = (uint)bVar2;
  if (-1 < (char)bVar2) goto LAB_100135fc4;
  if (uVar3 != param_2) {
    if (uVar5 < 0xe0) {
      if (0xc1 < uVar5) {
        uVar1 = uVar5 & 0x1f;
        bVar2 = *(byte *)(param_1 + (int)uVar3);
joined_r0x00010013606c:
        if ((bVar2 ^ 0x80) < 0x40) {
          uVar5 = bVar2 ^ 0x80 | uVar1 << 6;
          *param_3 = (int)uVar4 + 1;
          goto LAB_100135fc4;
        }
      }
    }
    else if (uVar5 < 0xf0) {
      uVar6 = (ulong)bVar2 & 0xf;
      if (((byte)(&UNK_10f7446e5)[uVar6] >> (ulong)(*(byte *)(param_1 + uVar4) >> 5) & 1) != 0) {
        uVar1 = *(byte *)(param_1 + uVar4) & 0x3f;
        uVar3 = uVar3 + 1;
        *param_3 = uVar3;
joined_r0x0001001360e0:
        if (uVar3 != param_2) {
          uVar4 = (ulong)uVar3;
          uVar1 = uVar1 | (int)uVar6 << 6;
          bVar2 = *(byte *)(param_1 + (int)uVar3);
          goto joined_r0x00010013606c;
        }
      }
    }
    else if (uVar5 < 0xf5) {
      bVar2 = *(byte *)(param_1 + uVar4);
      if (((uint)(int)(char)(&UNK_10e57467f)[bVar2 >> 4] >> (ulong)(uVar5 - 0xf0 & 0x1f) & 1) != 0)
      {
        uVar3 = (uint)(lVar7 + 2);
        *param_3 = uVar3;
        if ((uVar3 != param_2) && (uVar1 = *(byte *)(param_1 + lVar7 + 2) ^ 0x80, uVar1 < 0x40)) {
          uVar6 = (ulong)(bVar2 & 0x3f | (uVar5 - 0xf0) * 0x40);
          uVar3 = uVar3 + 1;
          *param_3 = uVar3;
          goto joined_r0x0001001360e0;
        }
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_100135fc4:
  *param_4 = uVar5;
  *param_3 = *param_3 - 1;
  return uVar5 >> 0xb < 0x1b || uVar5 - 0xe000 < 0x102000;
}



/* Entry: 1001360e8; end: 100136203;  */

undefined8 * FUN_1001360e8(undefined8 *param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *extraout_x8;
  long *plVar16;
  long *plVar17;
  long *extraout_x8_00;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *unaff_x23;
  long *plVar27;
  long *unaff_x24;
  long *plVar28;
  ulong unaff_x25;
  long *unaff_x26;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 *puVar8;
  
  uVar13 = (uint)param_2;
  if (uVar13 < 0x80) {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      param_1[1] = param_1[1] + 1;
      return param_1;
    }
  }
  else {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      plVar27 = (long *)param_1[1];
      if ((long *)0x7ffffffffffffff7 < plVar27) {
        func_0x000107c35c54();
        iVar19 = *(int *)(param_1 + 4);
        lVar12 = (long)iVar19;
        uVar20 = param_1[3];
        if ((uVar20 < lVar12 + 4U) || (*(int *)(param_1[2] + lVar12) != 0x65757274)) {
          if ((uVar20 < lVar12 + 5U) ||
             (*(int *)(param_1[2] + lVar12) != 0x736c6166 ||
              (char)((int *)(param_1[2] + lVar12))[1] != 'e')) {
            if ((lVar12 + 4U <= uVar20) && (*(int *)(param_1[2] + lVar12) == 0x6c6c756e)) {
              *(int *)(param_1 + 4) = iVar19 + 4;
              *extraout_x8 = 1;
              *(undefined8 *)(extraout_x8 + 0x20) = 0;
              puVar26 = (undefined8 *)&stack0xffffffffffffffa8;
              FUN_100136360(puVar26,0);
              return puVar26;
            }
            *(undefined4 *)(param_1 + 7) = 1;
            *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_1 + 6);
            iVar19 = iVar19 - *(int *)((long)param_1 + 0x34);
            if (iVar19 < 2) {
              iVar19 = 1;
            }
            *(int *)(param_1 + 8) = iVar19;
            *extraout_x8 = 0;
            *(undefined8 *)(extraout_x8 + 0x10) = 0;
            *(undefined8 *)(extraout_x8 + 8) = 0;
            *(undefined8 *)(extraout_x8 + 0x20) = 0;
            *(undefined8 *)(extraout_x8 + 0x18) = 0;
            return param_1;
          }
          *(int *)(param_1 + 4) = iVar19 + 5;
          *extraout_x8 = 1;
          extraout_x8[8] = 0;
        }
        else {
          *(int *)(param_1 + 4) = iVar19 + 4;
          *extraout_x8 = 1;
          extraout_x8[8] = 1;
        }
        *(undefined8 *)(extraout_x8 + 0x20) = 1;
        puVar26 = (undefined8 *)&stack0xffffffffffffffa8;
        FUN_100136360(puVar26,1);
        return puVar26;
      }
      uVar24 = *param_1;
      if (plVar27 < (long *)0x17) {
        puVar10 = param_1 + 3;
        *(char *)((long)param_1 + 0x2f) = (char)plVar27;
        if (plVar27 != (long *)0x0) goto LAB_100136190;
      }
      else {
        puVar26 = (undefined8 *)0x19;
        if (((ulong)plVar27 | 7) != 0x17) {
          puVar26 = (undefined8 *)(((ulong)plVar27 | 7) + 1);
        }
        puVar10 = puVar26;
        func_0x000107c60e20();
        param_1[4] = plVar27;
        param_1[5] = (ulong)puVar26 | 0x8000000000000000;
        param_1[3] = puVar10;
LAB_100136190:
        param_3 = plVar27;
        func_0x000107c610b8(puVar10,uVar24);
      }
      *(char *)((long)puVar10 + (long)plVar27) = '\0';
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if (uVar13 == 0xfffd) {
      param_1 = param_1 + 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
                (param_1,&UNK_10e57417b,3);
      return param_1;
    }
  }
  plVar27 = param_1 + 3;
  if (uVar13 < 0x80) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar27,param_2);
    return (undefined8 *)0x1;
  }
  plVar16 = (long *)(long)*(char *)((long)param_1 + 0x2f);
  bVar4 = (byte)param_2;
  plVar28 = plVar27;
  if ((long)plVar16 < 0) {
    plVar16 = (long *)param_1[4];
    if (plVar16 < (long *)0xfffffffffffffffc) {
      unaff_x25 = (param_1[5] & 0x7fffffffffffffff) - 1;
      uVar22 = (uint)((ulong)param_1[5] >> 0x3f);
      uVar20 = unaff_x25 - (long)plVar16;
      goto joined_r0x00010b30818c;
    }
    param_1[4] = (char *)((long)plVar16 + 4);
    ((char *)((long)plVar16 + 4))[*plVar27] = '\0';
    if (0x7ff < uVar13) goto code_r0x00010b308284;
code_r0x00010b3081bc:
    plVar25 = plVar27;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      plVar25 = (long *)*plVar27;
    }
    *(byte *)((long)plVar25 + (long)plVar16) = (byte)(uVar13 >> 6) | 0xc0;
    cVar3 = *(char *)((long)param_1 + 0x2f);
    plVar17 = plVar16;
joined_r0x00010b3081ec:
    plVar25 = plVar27;
    if (cVar3 < '\0') {
      plVar25 = (long *)*plVar27;
    }
    ((char *)((long)plVar25 + (long)plVar17))[1] = bVar4 & 0x3f | 0x80;
    unaff_x26 = (long *)((long)plVar17 + 2);
    plVar17 = (long *)(long)*(char *)((long)param_1 + 0x2f);
    if ((long)plVar17 < 0) {
      plVar17 = (long *)param_1[4];
      if (plVar17 < unaff_x26) {
        uVar20 = (param_1[5] & 0x7fffffffffffffff) - 1;
        uVar13 = (uint)((ulong)param_1[5] >> 0x3f);
        plVar25 = (long *)((long)unaff_x26 - (long)plVar17);
        if (plVar25 <= (long *)(uVar20 - (long)plVar17)) goto code_r0x00010b308408;
code_r0x00010b30836c:
        unaff_x23 = (long *)0x7ffffffffffffff7;
        if ((char *)(0x7ffffffffffffff7 - uVar20) <
            (char *)(((long)plVar25 - uVar20) + (long)plVar17)) goto code_r0x00010b3084d8;
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          plVar28 = (long *)*plVar27;
          if (0x3ffffffffffffff2 < uVar20) goto code_r0x00010b308450;
code_r0x00010b3083a0:
          plVar11 = unaff_x26;
          if (unaff_x26 <= (long *)(uVar20 * 2)) {
            plVar11 = (long *)(uVar20 * 2);
          }
          plVar14 = (long *)0x19;
          if (((ulong)plVar11 | 7) != 0x17) {
            plVar14 = (long *)(((ulong)plVar11 | 7) + 1);
          }
          unaff_x23 = (long *)0x17;
          if ((long *)0x16 < plVar11) {
            unaff_x23 = plVar14;
          }
          plVar11 = unaff_x23;
          __Znwm();
        }
        else {
          plVar28 = plVar27;
          if (uVar20 < 0x3ffffffffffffff3) goto code_r0x00010b3083a0;
code_r0x00010b308450:
          plVar11 = unaff_x23;
          __Znwm();
        }
        if (plVar17 != (long *)0x0) {
          _memmove(plVar11,plVar28,plVar17);
        }
        if (uVar20 != 0x16) {
          __ZdlPv(plVar28);
        }
        param_1[4] = plVar17;
        param_1[5] = (ulong)unaff_x23 | 0x8000000000000000;
        *plVar27 = (long)plVar11;
code_r0x00010b30848c:
        plVar27 = (long *)*plVar27;
        _bzero((char *)((long)plVar27 + (long)plVar17),plVar25);
        cVar3 = *(char *)((long)param_1 + 0x2f);
        goto joined_r0x00010b3084a0;
      }
      plVar27 = (long *)*plVar27;
    }
    else {
      if (unaff_x26 <= plVar17) {
        *(byte *)((long)param_1 + 0x2f) = (byte)unaff_x26;
        goto code_r0x00010b3084b4;
      }
      uVar13 = 0;
      uVar20 = 0x16;
      plVar25 = (long *)((long)unaff_x26 - (long)plVar17);
      if ((long *)(0x16 - (long)plVar17) < plVar25) goto code_r0x00010b30836c;
code_r0x00010b308408:
      if (uVar13 != 0) goto code_r0x00010b30848c;
      _bzero((char *)((long)plVar27 + (long)plVar17),plVar25);
      cVar3 = *(char *)((long)param_1 + 0x2f);
joined_r0x00010b3084a0:
      if (-1 < cVar3) {
        *(byte *)((long)param_1 + 0x2f) = (byte)unaff_x26 & 0x7f;
        goto code_r0x00010b3084b4;
      }
    }
    param_1[4] = unaff_x26;
code_r0x00010b3084b4:
    *(char *)((long)plVar27 + (long)unaff_x26) = '\0';
    return (undefined8 *)((long)unaff_x26 - (long)plVar16);
  }
  uVar22 = 0;
  unaff_x25 = 0x16;
  uVar20 = 0x16 - (long)plVar16;
joined_r0x00010b30818c:
  if (3 < uVar20) {
    if (uVar22 != 0) goto code_r0x00010b308260;
    pcVar1 = (char *)((long)plVar27 + (long)plVar16);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    plVar25 = plVar27;
    if (-1 < *(char *)((long)param_1 + 0x2f)) goto code_r0x00010b3081a8;
code_r0x00010b308274:
    param_1[4] = (char *)((long)plVar16 + 4);
    *(char *)((long)plVar25 + (long)plVar16 + 4) = '\0';
joined_r0x00010b308280:
    if (uVar13 < 0x800) goto code_r0x00010b3081bc;
code_r0x00010b308284:
    if (uVar13 >> 0x10 == 0) {
      plVar25 = plVar27;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        plVar25 = (long *)*plVar27;
      }
      plVar17 = (long *)((long)plVar16 + 1);
      *(byte *)((long)plVar25 + (long)plVar16) = (byte)(uVar13 >> 0xc) | 0xe0;
      bVar5 = (byte)(uVar13 >> 6);
      cVar3 = *(char *)((long)param_1 + 0x2f);
    }
    else {
      plVar25 = plVar27;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        plVar25 = (long *)*plVar27;
      }
      *(byte *)((long)plVar25 + (long)plVar16) = (byte)(uVar13 >> 0x12) | 0xf0;
      plVar25 = plVar27;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        plVar25 = (long *)*plVar27;
      }
      plVar17 = (long *)((long)plVar16 + 2);
      ((char *)((long)plVar25 + (long)plVar16))[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
      bVar5 = (byte)(uVar13 >> 6);
      cVar3 = *(char *)((long)param_1 + 0x2f);
    }
    plVar25 = plVar27;
    if (cVar3 < '\0') {
      plVar25 = (long *)*plVar27;
    }
    *(byte *)((long)plVar25 + (long)plVar17) = bVar5 & 0x3f | 0x80;
    cVar3 = *(char *)((long)param_1 + 0x2f);
    goto joined_r0x00010b3081ec;
  }
  plVar25 = (long *)0x7ffffffffffffff7;
  plVar17 = param_2;
  if ((char *)((long)plVar16 + (4 - unaff_x25)) <= (char *)(0x7ffffffffffffff7 - unaff_x25)) {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      plVar17 = (long *)*plVar27;
      if (0x3ffffffffffffff2 < unaff_x25) goto code_r0x00010b308224;
code_r0x00010b308128:
      pcVar1 = (char *)((long)plVar16 + 4U);
      if ((char *)((long)plVar16 + 4U) <= (char *)(unaff_x25 * 2)) {
        pcVar1 = (char *)(unaff_x25 * 2);
      }
      plVar11 = (long *)0x19;
      if (((ulong)pcVar1 | 7) != 0x17) {
        plVar11 = (long *)(((ulong)pcVar1 | 7) + 1);
      }
      plVar25 = (long *)0x17;
      if ((char *)0x16 < pcVar1) {
        plVar25 = plVar11;
      }
      unaff_x24 = plVar25;
      __Znwm();
    }
    else {
      plVar17 = plVar27;
      if (unaff_x25 < 0x3ffffffffffffff3) goto code_r0x00010b308128;
code_r0x00010b308224:
      unaff_x24 = plVar25;
      __Znwm();
    }
    param_2 = unaff_x24;
    if (plVar16 != (long *)0x0) {
      plVar28 = plVar17;
      param_3 = plVar16;
      _memmove();
    }
    if (unaff_x25 != 0x16) {
      __ZdlPv();
      param_2 = plVar17;
    }
    param_1[4] = plVar16;
    param_1[5] = (ulong)plVar25 | 0x8000000000000000;
    *plVar27 = (long)unaff_x24;
code_r0x00010b308260:
    plVar25 = (long *)*plVar27;
    pcVar1 = (char *)((long)plVar25 + (long)plVar16);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    if (*(char *)((long)param_1 + 0x2f) < '\0') goto code_r0x00010b308274;
code_r0x00010b3081a8:
    *(byte *)((long)param_1 + 0x2f) = (byte)(char *)((long)plVar16 + 4) & 0x7f;
    *(char *)((long)plVar25 + (long)plVar16 + 4) = '\0';
    goto joined_r0x00010b308280;
  }
code_r0x00010b3084d8:
  puVar29 = &UNK_10b3084dc;
  func_0x000104c4f6b8();
  puVar6 = &stack0xffffffffffffffa0;
  puVar7 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar15 = param_3;
    plVar14 = plVar28;
    plVar11 = param_2;
    puVar8 = puVar6;
    *(long **)(puVar8 + -0x50) = unaff_x26;
    *(ulong *)(puVar8 + -0x48) = unaff_x25;
    *(long **)(puVar8 + -0x40) = unaff_x24;
    *(long **)(puVar8 + -0x38) = unaff_x23;
    *(long **)(puVar8 + -0x30) = plVar25;
    *(long **)(puVar8 + -0x28) = plVar17;
    *(long **)(puVar8 + -0x20) = plVar16;
    *(long **)(puVar8 + -0x18) = plVar27;
    *(undefined1 **)(puVar8 + -0x10) = puVar7 + -0x10;
    *(undefined **)(puVar8 + -8) = puVar29;
    param_2 = plVar11;
    plVar28 = plVar14;
    func_0x000107c2cc78();
    uVar13 = (uint)plVar14;
    if ((int)param_2 == 0) break;
    plVar27 = plVar15;
    if (*(char *)((long)plVar15 + 0x17) < '\0') {
      uVar20 = plVar15[2] & 0x7fffffffffffffff;
      unaff_x24 = (long *)(uVar20 - 1);
      if (plVar14 <= unaff_x24) {
        if (plVar15[2] < 0) {
          plVar27 = (long *)*plVar15;
        }
        goto code_r0x00010b308830;
      }
      if (0x7ffffffffffffff8 - uVar20 < (ulong)((long)plVar14 - (long)unaff_x24))
      goto code_r0x00010b308930;
      unaff_x23 = (long *)*plVar15;
      if (unaff_x24 < (long *)0x3ffffffffffffff3) goto code_r0x00010b308764;
      unaff_x25 = 0x7ffffffffffffff7;
      plVar16 = (long *)0xffffffffffffffee;
      __Znwm();
code_r0x00010b30885c:
      __ZdlPv(unaff_x23);
      plVar15[1] = 0;
      plVar15[2] = unaff_x25 | 0x8000000000000000;
      *plVar15 = (long)plVar16;
      plVar28 = plVar11;
      if (plVar14 < (long *)0x20) goto code_r0x00010b308898;
code_r0x00010b30887c:
      if ((plVar16 < (long *)((long)plVar11 + (long)plVar14)) &&
         (plVar28 = plVar11, plVar11 < (long *)((long)plVar16 + (long)plVar14 * 2)))
      goto code_r0x00010b308898;
      plVar17 = (long *)((ulong)plVar14 & 0xffffffffffffffe0);
      plVar27 = (long *)((long)plVar16 + (long)plVar17 * 2);
      plVar28 = plVar11 + 2;
      plVar25 = plVar16 + 4;
      plVar16 = plVar17;
      do {
        lVar30 = plVar28[-1];
        lVar12 = plVar28[-2];
        lVar32 = plVar28[1];
        lVar31 = *plVar28;
        plVar25[-3] = CONCAT26((short)(char)((ulong)lVar12 >> 0x38),
                               CONCAT24((short)(char)((ulong)lVar12 >> 0x30),
                                        CONCAT22((short)(char)((ulong)lVar12 >> 0x28),
                                                 (short)(char)((ulong)lVar12 >> 0x20))));
        plVar25[-4] = CONCAT26((short)(char)((ulong)lVar12 >> 0x18),
                               CONCAT24((short)(char)((ulong)lVar12 >> 0x10),
                                        CONCAT22((short)(char)((ulong)lVar12 >> 8),
                                                 (short)(char)lVar12)));
        plVar25[-1] = CONCAT26((short)(char)((ulong)lVar30 >> 0x38),
                               CONCAT24((short)(char)((ulong)lVar30 >> 0x30),
                                        CONCAT22((short)(char)((ulong)lVar30 >> 0x28),
                                                 (short)(char)((ulong)lVar30 >> 0x20))));
        plVar25[-2] = CONCAT26((short)(char)((ulong)lVar30 >> 0x18),
                               CONCAT24((short)(char)((ulong)lVar30 >> 0x10),
                                        CONCAT22((short)(char)((ulong)lVar30 >> 8),
                                                 (short)(char)lVar30)));
        plVar25[1] = CONCAT26((short)(char)((ulong)lVar31 >> 0x38),
                              CONCAT24((short)(char)((ulong)lVar31 >> 0x30),
                                       CONCAT22((short)(char)((ulong)lVar31 >> 0x28),
                                                (short)(char)((ulong)lVar31 >> 0x20))));
        *plVar25 = CONCAT26((short)(char)((ulong)lVar31 >> 0x18),
                            CONCAT24((short)(char)((ulong)lVar31 >> 0x10),
                                     CONCAT22((short)(char)((ulong)lVar31 >> 8),(short)(char)lVar31)
                                    ));
        plVar25[3] = CONCAT26((short)(char)((ulong)lVar32 >> 0x38),
                              CONCAT24((short)(char)((ulong)lVar32 >> 0x30),
                                       CONCAT22((short)(char)((ulong)lVar32 >> 0x28),
                                                (short)(char)((ulong)lVar32 >> 0x20))));
        plVar25[2] = CONCAT26((short)(char)((ulong)lVar32 >> 0x18),
                              CONCAT24((short)(char)((ulong)lVar32 >> 0x10),
                                       CONCAT22((short)(char)((ulong)lVar32 >> 8),
                                                (short)(char)lVar32)));
        plVar28 = plVar28 + 4;
        plVar16 = plVar16 + -4;
        plVar25 = plVar25 + 8;
      } while (plVar16 != (long *)0x0);
      plVar16 = plVar27;
      plVar28 = (long *)((long)plVar11 + (long)plVar17);
      if (plVar14 != plVar17) {
code_r0x00010b308898:
        do {
          plVar25 = (long *)((long)plVar28 + 1);
          plVar27 = (long *)((long)plVar16 + 2);
          *(short *)plVar16 = (short)(char)*plVar28;
          plVar16 = plVar27;
          plVar28 = plVar25;
        } while (plVar25 != (long *)((long)plVar11 + (long)plVar14));
      }
code_r0x00010b3088a8:
      *(undefined2 *)plVar27 = 0;
      if (*(char *)((long)plVar15 + 0x17) < '\0') {
        plVar15[1] = (long)plVar14;
      }
      else {
        *(byte *)((long)plVar15 + 0x17) = (byte)plVar14 & 0x7f;
      }
      return (undefined8 *)0x1;
    }
    if (plVar14 < (long *)0xb) {
code_r0x00010b308830:
      plVar16 = plVar27;
      if (plVar14 == (long *)0x0) goto code_r0x00010b3088a8;
joined_r0x00010b308840:
      plVar28 = plVar11;
      if ((long *)0x1f < plVar14) goto code_r0x00010b30887c;
      goto code_r0x00010b308898;
    }
    plVar25 = plVar15;
    if (plVar14 + -0xfffffffffffffff < (long *)0x8000000000000012) {
code_r0x00010b308930:
      func_0x00010b30250c();
    }
    else {
      unaff_x24 = (long *)0xa;
      unaff_x23 = plVar15;
code_r0x00010b308764:
      plVar27 = plVar14;
      if (plVar14 <= (long *)((long)unaff_x24 * 2)) {
        plVar27 = (long *)((long)unaff_x24 * 2);
      }
      uVar20 = 0xd;
      if (((ulong)plVar27 | 3) != 0xb) {
        uVar20 = ((ulong)plVar27 | 3) + 1;
      }
      unaff_x25 = 0xb;
      if ((long *)0xa < plVar27) {
        unaff_x25 = uVar20;
      }
      if (-1 < (long)unaff_x25) {
        plVar16 = (long *)(unaff_x25 << 1);
        __Znwm();
        if (unaff_x24 != (long *)0xa) goto code_r0x00010b30885c;
        plVar15[1] = 0;
        plVar15[2] = unaff_x25 | 0x8000000000000000;
        *plVar15 = (long)plVar16;
        goto joined_r0x00010b308840;
      }
    }
    puVar29 = &UNK_10b308938;
    func_0x00010b2ed0ac();
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    puVar6 = puVar8 + -0x50;
    param_3 = extraout_x8_00;
    plVar27 = plVar15;
    plVar16 = plVar14;
    plVar17 = plVar11;
    puVar7 = puVar8;
  }
  func_0x0001078a86d4(plVar15,plVar14,0);
  if (*(char *)((long)plVar15 + 0x17) < '\0') {
    plVar27 = (long *)*plVar15;
    if ((int)uVar13 < 1) goto code_r0x00010b3087cc;
code_r0x00010b308568:
    iVar19 = 0;
    plVar16 = (long *)0x0;
    puVar26 = (undefined8 *)0x1;
    do {
      lVar12 = (long)(int)plVar16;
      plVar16 = (long *)(lVar12 + 1);
      bVar4 = *(byte *)((long)plVar11 + lVar12);
      uVar22 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        uVar9 = (uint)plVar16;
        if (uVar9 == uVar13) {
code_r0x00010b3085d0:
          plVar16 = plVar14;
          uVar22 = 0xffffffff;
        }
        else {
          if (uVar22 < 0xe0) {
            if (0xc1 < uVar22) {
              uVar23 = uVar22 & 0x1f;
code_r0x00010b30862c:
              uVar22 = (uint)plVar16;
              uVar9 = *(byte *)((long)plVar11 + (long)(int)uVar22) ^ 0x80;
              if (uVar9 < 0x40) {
                uVar22 = uVar22 + 1;
              }
              plVar16 = (long *)(ulong)uVar22;
              uVar22 = 0xffffffff;
              if (uVar9 < 0x40) {
                uVar22 = uVar9 | uVar23 << 6;
              }
              goto code_r0x00010b3086a0;
            }
          }
          else if (uVar22 < 0xf0) {
            uVar20 = (ulong)bVar4 & 0xf;
            if (((byte)(&UNK_10f47c06f)[uVar20] >>
                 (ulong)(*(byte *)((long)plVar11 + (long)plVar16) >> 5) & 1) != 0) {
              uVar23 = *(byte *)((long)plVar11 + (long)plVar16) & 0x3f;
joined_r0x00010b308694:
              if (uVar9 + 1 != uVar13) {
                plVar16 = (long *)(ulong)(uVar9 + 1);
                uVar23 = uVar23 | (int)uVar20 << 6;
                goto code_r0x00010b30862c;
              }
              goto code_r0x00010b3085d0;
            }
          }
          else if (uVar22 < 0xf5) {
            pbVar2 = (byte *)((long)plVar11 + (long)plVar16);
            if (((uint)(int)(char)(&UNK_10e574690)[*pbVar2 >> 4] >> (ulong)(uVar22 - 0xf0 & 0x1f) &
                1) != 0) {
              plVar16 = (long *)(lVar12 + 2);
              uVar9 = (uint)plVar16;
              if (uVar9 == uVar13) goto code_r0x00010b3085d0;
              uVar23 = *(byte *)((long)plVar11 + (long)plVar16) ^ 0x80;
              if (0x3f < uVar23) {
                uVar22 = 0xffffffff;
                goto code_r0x00010b3086a0;
              }
              uVar20 = (ulong)(*pbVar2 & 0x3f | (uVar22 - 0xf0) * 0x40);
              goto joined_r0x00010b308694;
            }
          }
          uVar22 = 0xffffffff;
        }
      }
code_r0x00010b3086a0:
      uVar9 = (uint)(uVar22 >> 0xb < 0x1b || uVar22 - 0xe000 < 0x102000);
      if (uVar9 == 0) {
        uVar22 = 0xfffd;
      }
      iVar18 = iVar19;
      if (uVar22 >> 0x10 != 0) {
        *(short *)((long)plVar27 + (long)iVar19 * 2) = (short)(uVar22 >> 10) + -0x2840;
        iVar18 = iVar19 + 1;
        uVar22 = uVar22 & 0x3ff | 0xffffdc00;
      }
      puVar26 = (undefined8 *)(ulong)(uVar9 & (uint)puVar26);
      iVar19 = iVar18 + 1;
      *(short *)((long)plVar27 + (long)iVar18 * 2) = (short)uVar22;
    } while ((int)plVar16 < (int)uVar13);
    func_0x0001078a86d4(plVar15,(long)iVar19,0);
    uVar13 = (uint)*(char *)((long)plVar15 + 0x17);
    if (*(char *)((long)plVar15 + 0x17) < '\0') {
code_r0x00010b3087e8:
      uVar21 = plVar15[1] | 3;
      uVar20 = 0xc;
      if (uVar21 != 0xb) {
        uVar20 = uVar21;
      }
      if ((ulong)plVar15[1] < 0xb) {
        uVar20 = 10;
      }
      if (uVar20 == (plVar15[2] & 0x7fffffffffffffffU) - 1) {
        return puVar26;
      }
      goto code_r0x00010b308818;
    }
  }
  else {
    plVar27 = plVar15;
    if (0 < (int)uVar13) goto code_r0x00010b308568;
code_r0x00010b3087cc:
    puVar26 = (undefined8 *)0x1;
    func_0x0001078a86d4(plVar15,0,0);
    uVar13 = (uint)*(char *)((long)plVar15 + 0x17);
    if ((int)uVar13 < 0) goto code_r0x00010b3087e8;
  }
  uVar9 = uVar13 & 0xff | 3;
  uVar22 = 0xc;
  if (uVar9 != 0xb) {
    uVar22 = uVar9;
  }
  if ((uVar13 & 0xff) < 0xb) {
    uVar22 = 10;
  }
  if (uVar22 == 10) {
    return puVar26;
  }
code_r0x00010b308818:
  func_0x000109892b50(plVar15);
  return puVar26;
}



/* Entry: 100136204; end: 10013635f;  */

void FUN_100136204(undefined1 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  iVar2 = *(int *)(param_2 + 0x20);
  lVar3 = (long)iVar2;
  uVar4 = *(ulong *)(param_2 + 0x18);
  if ((uVar4 < lVar3 + 4U) || (*(int *)(*(long *)(param_2 + 0x10) + lVar3) != 0x65757274)) {
    if ((uVar4 < lVar3 + 5U) ||
       (piVar1 = (int *)(*(long *)(param_2 + 0x10) + lVar3),
       *piVar1 != 0x736c6166 || (char)piVar1[1] != 'e')) {
      if ((lVar3 + 4U <= uVar4) && (*(int *)(*(long *)(param_2 + 0x10) + lVar3) == 0x6c6c756e)) {
        *(int *)(param_2 + 0x20) = iVar2 + 4;
        uStack_20 = 0;
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x20) = 0;
        puStack_18 = auStack_38;
        FUN_100136360(&puStack_18,0);
        return;
      }
      *(undefined4 *)(param_2 + 0x38) = 1;
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
      iVar2 = iVar2 - *(int *)(param_2 + 0x34);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_2 + 0x40) = iVar2;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    *(int *)(param_2 + 0x20) = iVar2 + 5;
    auStack_38[0] = 0;
    *param_1 = 1;
    param_1[8] = 0;
  }
  else {
    *(int *)(param_2 + 0x20) = iVar2 + 4;
    auStack_38[0] = 1;
    *param_1 = 1;
    param_1[8] = 1;
  }
  uStack_20 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  puStack_18 = auStack_38;
  FUN_100136360(&puStack_18,1);
  return;
}



/* Entry: 100136360; end: 1001364db;  */

/* WARNING: Possible PIC construction at 0x000100136404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100136488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100136408) */
/* WARNING: Removing unreachable block (ram,0x000100136498) */

void FUN_100136360(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  if (param_2 < 6) {
    if (param_2 == 4) {
      if (*(char *)((long)*param_1 + 0x17) < '\0') {
        lVar1 = *(long *)*param_1;
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar1);
        return;
      }
    }
    else if (param_2 == 5) {
      lVar1 = *(long *)*param_1;
      if (lVar1 != 0) {
        ((long *)*param_1)[1] = lVar1;
        goto code_r0x000107c60e14;
      }
    }
  }
  else if (param_2 == 6) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = plVar2[1];
      lVar1 = lVar3;
      if (lVar4 != lVar3) {
        do {
          lVar1 = *(long *)(lVar4 + -8);
          *(undefined8 *)(lVar4 + -8) = 0;
          if (lVar1 != 0) {
            lStack_38 = lVar1;
            FUN_100136360(&lStack_38,*(undefined8 *)(lVar1 + 0x18));
            goto code_r0x000107c60e14;
          }
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != lVar3);
        lVar1 = *plVar2;
      }
      plVar2[1] = lVar3;
      func_0x000107c60e14(lVar1);
      return;
    }
  }
  else if (param_2 == 7) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar1 = lVar3;
      lVar4 = plVar2[1];
      if (plVar2[1] != lVar3) {
        do {
          lVar1 = lVar4 + -0x20;
          lStack_38 = lVar1;
          FUN_100136360(&lStack_38,*(undefined8 *)(lVar4 + -8));
          lVar4 = lVar1;
        } while (lVar1 != lVar3);
        lVar1 = *plVar2;
      }
      plVar2[1] = lVar3;
      goto code_r0x000107c60e14;
    }
  }
  return;
}



/* Entry: 1001364dc; end: 100136653;  */

void FUN_1001364dc(undefined1 *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined1 **ppuVar8;
  undefined4 uVar9;
  undefined1 *extraout_x8;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined1 **ppuVar20;
  int iVar21;
  ulong auStack_138 [3];
  undefined8 uStack_120;
  ulong *puStack_118;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  
  ppuVar8 = &puStack_c0;
  ppuVar20 = &puStack_c0;
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xaaaaaaaaaaaaaa00;
  func_0x0001001355b4(param_3,&uStack_78);
  uVar10 = uStack_70;
  uVar5 = uStack_78;
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    goto joined_r0x00010013655c;
  }
  if ((char)uStack_68 == '\x01') {
    uStack_b8 = uStack_58;
    puStack_c0 = puStack_60;
    uStack_b0 = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_60 = (undefined1 *)0x0;
  }
  else {
    if (0x7ffffffffffffff7 < uStack_70) {
      func_0x000107c35c54();
      iVar3 = *(int *)(param_3 + 0x20);
      uVar18 = (ulong)iVar3;
      uVar10 = *(ulong *)(param_3 + 0x18);
      if (uVar10 < uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x100136a8c);
        (*pcVar6)();
      }
      lVar19 = *(long *)(param_3 + 0x10);
      uVar12 = uVar18 + 1;
      uVar15 = uVar18;
      iVar21 = iVar3;
      if ((uVar12 <= uVar10) && (*(char *)(lVar19 + uVar18) == '-')) {
        iVar21 = iVar3 + 1;
        *(int *)(param_3 + 0x20) = iVar21;
        uVar12 = (long)iVar21 + 1;
        uVar15 = (long)iVar21;
      }
      if (uVar12 <= uVar10) {
        lVar16 = 0;
        uVar11 = 0;
        do {
          iVar17 = (int)lVar16;
          if (9 < *(byte *)(lVar19 + uVar15) - 0x30) {
            bVar1 = lVar16 == 1 || uVar11 != 0x30;
            goto joined_r0x000100136794;
          }
          uVar4 = (uint)*(byte *)(lVar19 + uVar15);
          if (lVar16 != 0) {
            uVar4 = uVar11;
          }
          lVar16 = lVar16 + 1;
          iVar17 = iVar21 + iVar17 + 1;
          *(int *)(param_3 + 0x20) = iVar17;
          uVar15 = (ulong)iVar17;
          uVar11 = uVar4;
        } while (uVar15 + 1 <= uVar10);
        iVar17 = (int)lVar16;
        bVar1 = lVar16 == 1 || uVar4 != 0x30;
joined_r0x000100136794:
        iVar21 = iVar21 + iVar17;
        if ((lVar16 != 0) && (bVar1)) {
          lVar16 = (long)iVar21;
          uVar12 = lVar16 + 1;
          if ((uVar10 < uVar12) || (*(char *)(lVar19 + lVar16) != '.')) {
LAB_10013680c:
            if ((uVar10 < uVar12) || ((*(byte *)(lVar19 + lVar16) & 0xdf) != 0x45)) {
LAB_1001368bc:
              uVar10 = param_3;
              FUN_1001342e0();
              uVar4 = (int)uVar10 - 1;
              uVar11 = uVar4 >> 1;
              uVar9 = 1;
              if ((uVar11 | uVar4 * -0x80000000) < 6 && (1 << (ulong)(uVar11 & 0x1f) & 0x33U) != 0)
              {
                *(int *)(param_3 + 0x20) = iVar21;
                iVar17 = iVar21 - iVar3;
                uVar10 = lVar19 + uVar18;
                FUN_100136a94(uVar10,(long)iVar17);
                if ((uVar10 >> 0x20 & 1) != 0) {
                  auStack_138[0] = CONCAT44(auStack_138[0]._4_4_,(int)uVar10);
                  uStack_120 = 2;
                  *extraout_x8 = 1;
                  *(int *)(extraout_x8 + 8) = (int)uVar10;
                  *(undefined8 *)(extraout_x8 + 0x20) = 2;
                  puStack_118 = auStack_138;
                  FUN_100136360(&puStack_118,2);
                  return;
                }
                if ((bRam000000011336f8e8 & 1) == 0) {
                  iVar7 = 0x1336f8e8;
                  func_0x000107c60e48();
                  if (iVar7 != 0) {
                    uRam000000011336f8b8 = 0xc;
                    param_2 = 0;
                    uRam000000011336f8c8 = 0;
                    uRam000000011336f8c0 = 0;
                    uRam000000011336f8d8 = 0;
                    uRam000000011336f8d0 = 0;
                    uRam000000011336f8e0 = 0;
                    func_0x000107c60e4c(0x11336f8e8);
                  }
                }
                auStack_138[0] = CONCAT44(auStack_138[0]._4_4_,0xaaaaaaaa);
                func_0x000107c2d150(0x11336f8b8,lVar19 + uVar18,iVar17,1,auStack_138);
                if (((iVar21 != iVar3) && ((param_2 & 0x7fffffffffffffff) != 0x7ff0000000000000)) &&
                   (iVar17 == (int)auStack_138[0])) {
                  piVar14 = (int *)&UNK_10e574610;
                  do {
                    iVar3 = *piVar14;
                    piVar14 = piVar14 + 1;
                  } while (iVar3 != *(char *)(lVar19 + uVar18) && iVar3 != 0);
                  if ((iVar3 == 0) && ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) {
                    uStack_120 = 3;
                    *extraout_x8 = 1;
                    *(ulong *)(extraout_x8 + 8) = param_2;
                    *(undefined8 *)(extraout_x8 + 0x20) = 3;
                    puStack_118 = auStack_138;
                    auStack_138[0] = param_2;
                    FUN_100136360(&puStack_118,3);
                    return;
                  }
                }
                uVar9 = 10;
              }
              *(undefined4 *)(param_3 + 0x38) = uVar9;
              *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
              iVar3 = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x34);
              if (iVar3 < 2) {
                iVar3 = 1;
              }
              *(int *)(param_3 + 0x40) = iVar3;
              *extraout_x8 = 0;
              *(undefined8 *)(extraout_x8 + 0x10) = 0;
              *(undefined8 *)(extraout_x8 + 8) = 0;
              *(undefined8 *)(extraout_x8 + 0x20) = 0;
              *(undefined8 *)(extraout_x8 + 0x18) = 0;
              return;
            }
            iVar17 = iVar21 + 1;
            *(int *)(param_3 + 0x20) = iVar17;
            lVar16 = (long)iVar17;
            uVar12 = lVar16 + 1;
            if ((uVar12 <= uVar10) &&
               ((*(char *)(lVar19 + lVar16) == '-' || (*(char *)(lVar19 + lVar16) == '+')))) {
              iVar17 = iVar21 + 2;
              *(int *)(param_3 + 0x20) = iVar17;
              lVar16 = (long)iVar17;
              uVar12 = lVar16 + 1;
            }
            iVar21 = iVar17;
            if (uVar12 <= uVar10) {
              lVar13 = 0;
              do {
                iVar17 = (int)lVar13;
                if (9 < *(byte *)(lVar19 + lVar16) - 0x30) goto LAB_1001368b4;
                lVar13 = lVar13 + 1;
                iVar17 = iVar21 + iVar17 + 1;
                *(int *)(param_3 + 0x20) = iVar17;
                lVar16 = (long)iVar17;
              } while (lVar16 + 1U <= uVar10);
              iVar17 = (int)lVar13;
LAB_1001368b4:
              iVar21 = iVar21 + iVar17;
              if (lVar13 != 0) goto LAB_1001368bc;
            }
            *(undefined4 *)(param_3 + 0x38) = 1;
            *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
            iVar21 = iVar21 - *(int *)(param_3 + 0x34);
            goto LAB_1001366dc;
          }
          iVar21 = iVar21 + 1;
          *(int *)(param_3 + 0x20) = iVar21;
          lVar16 = (long)iVar21;
          if (lVar16 + 1U <= uVar10) {
            lVar13 = 0;
            do {
              if (9 < *(byte *)(lVar19 + lVar16) - 0x30) break;
              lVar13 = lVar13 + 1;
              iVar21 = iVar21 + 1;
              *(int *)(param_3 + 0x20) = iVar21;
              lVar16 = (long)iVar21;
            } while (lVar16 + 1U <= uVar10);
            if (lVar13 != 0) {
              lVar16 = (long)iVar21;
              uVar12 = lVar16 + 1;
              goto LAB_10013680c;
            }
          }
        }
      }
      *(undefined4 *)(param_3 + 0x38) = 1;
      *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
      iVar21 = iVar21 - *(int *)(param_3 + 0x34);
LAB_1001366dc:
      if (iVar21 < 2) {
        iVar21 = 1;
      }
      *(int *)(param_3 + 0x40) = iVar21;
      *extraout_x8 = 0;
      *(undefined8 *)(extraout_x8 + 0x10) = 0;
      *(undefined8 *)(extraout_x8 + 8) = 0;
      *(undefined8 *)(extraout_x8 + 0x20) = 0;
      *(undefined8 *)(extraout_x8 + 0x18) = 0;
      return;
    }
    if (uStack_70 < 0x17) {
      uStack_b0 = CONCAT17((char)uStack_70,(undefined7)uStack_b0);
      if (uStack_70 != 0) goto LAB_1001365cc;
    }
    else {
      puVar2 = (undefined1 *)0x19;
      if ((uStack_70 | 7) != 0x17) {
        puVar2 = (undefined1 *)((uStack_70 | 7) + 1);
      }
      ppuVar8 = (undefined1 **)puVar2;
      func_0x000107c60e20();
      uStack_b0 = (ulong)puVar2 | 0x8000000000000000;
      uStack_b8 = uVar10;
      puStack_c0 = (undefined1 *)ppuVar8;
LAB_1001365cc:
      func_0x000107c610b8(ppuVar8,uVar5,uVar10);
      ppuVar20 = ppuVar8;
    }
    *(undefined1 *)((long)ppuVar20 + uVar10) = 0;
  }
  *param_1 = 1;
  *(ulong *)(param_1 + 0x10) = uStack_b8;
  *(undefined1 **)(param_1 + 8) = puStack_c0;
  uStack_90 = 0;
  uStack_88 = 4;
  uStack_a0 = 0;
  uStack_98 = 0;
  *(ulong *)(param_1 + 0x18) = uStack_b0;
  *(undefined8 *)(param_1 + 0x20) = 4;
  puStack_48 = &uStack_a0;
  FUN_100136360(&puStack_48,4);
joined_r0x00010013655c:
  if (((char)uStack_68 == '\x01') && ((long)uStack_50 < 0)) {
    func_0x000107c60e14(puStack_60);
    return;
  }
  return;
}



/* Entry: 100136654; end: 100136a93;  */

void FUN_100136654(undefined1 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar15 = (ulong)iVar1;
  uVar6 = *(ulong *)(param_2 + 0x18);
  if (uVar6 < uVar15) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x100136a8c);
    (*pcVar3)();
  }
  lVar16 = *(long *)(param_2 + 0x10);
  uVar9 = uVar15 + 1;
  uVar12 = uVar15;
  iVar17 = iVar1;
  if ((uVar9 <= uVar6) && (*(char *)(lVar16 + uVar15) == '-')) {
    iVar17 = iVar1 + 1;
    *(int *)(param_2 + 0x20) = iVar17;
    uVar9 = (long)iVar17 + 1;
    uVar12 = (long)iVar17;
  }
  if (uVar9 <= uVar6) {
    lVar13 = 0;
    uVar8 = 0;
    do {
      iVar14 = (int)lVar13;
      if (9 < *(byte *)(lVar16 + uVar12) - 0x30) {
        iVar17 = iVar17 + iVar14;
        bVar7 = lVar13 == 1 || uVar8 != 0x30;
        if (lVar13 == 0) goto LAB_1001366cc;
        goto LAB_100136798;
      }
      uVar2 = (uint)*(byte *)(lVar16 + uVar12);
      if (lVar13 != 0) {
        uVar2 = uVar8;
      }
      lVar13 = lVar13 + 1;
      iVar14 = iVar17 + iVar14 + 1;
      *(int *)(param_2 + 0x20) = iVar14;
      uVar12 = (ulong)iVar14;
      uVar8 = uVar2;
    } while (uVar12 + 1 <= uVar6);
    iVar17 = iVar17 + (int)lVar13;
    bVar7 = lVar13 == 1 || uVar2 != 0x30;
    if (lVar13 != 0) {
LAB_100136798:
      if (bVar7) {
        lVar13 = (long)iVar17;
        uVar9 = lVar13 + 1;
        if ((uVar6 < uVar9) || (*(char *)(lVar16 + lVar13) != '.')) {
LAB_10013680c:
          if ((uVar6 < uVar9) || ((*(byte *)(lVar16 + lVar13) & 0xdf) != 0x45)) {
LAB_1001368bc:
            lVar13 = param_2;
            FUN_1001342e0();
            uVar2 = (int)lVar13 - 1;
            uVar8 = uVar2 >> 1;
            uVar5 = 1;
            if ((uVar8 | uVar2 * -0x80000000) < 6 && (1 << (ulong)(uVar8 & 0x1f) & 0x33U) != 0) {
              *(int *)(param_2 + 0x20) = iVar17;
              iVar14 = iVar17 - iVar1;
              uVar6 = lVar16 + uVar15;
              FUN_100136a94(uVar6,(long)iVar14);
              if ((uVar6 >> 0x20 & 1) != 0) {
                auStack_78[0] = CONCAT44(auStack_78[0]._4_4_,(int)uVar6);
                uStack_60 = 2;
                *param_1 = 1;
                *(int *)(param_1 + 8) = (int)uVar6;
                *(undefined8 *)(param_1 + 0x20) = 2;
                puStack_58 = auStack_78;
                FUN_100136360(&puStack_58,2);
                return;
              }
              if ((bRam000000011336f8e8 & 1) == 0) {
                iVar4 = 0x1336f8e8;
                func_0x000107c60e48();
                if (iVar4 != 0) {
                  uRam000000011336f8b8 = 0xc;
                  in_b0 = 0;
                  in_register_00005001 = 0;
                  in_register_00005002 = 0;
                  in_register_00005003 = 0;
                  in_register_00005004 = 0;
                  in_register_00005005 = 0;
                  in_register_00005006 = 0;
                  in_register_00005007 = 0;
                  uRam000000011336f8c8 = 0;
                  uRam000000011336f8c0 = 0;
                  uRam000000011336f8d8 = 0;
                  uRam000000011336f8d0 = 0;
                  uRam000000011336f8e0 = 0;
                  func_0x000107c60e4c(0x11336f8e8);
                }
              }
              auStack_78[0] = CONCAT44(auStack_78[0]._4_4_,0xaaaaaaaa);
              func_0x000107c2d150(0x11336f8b8,lVar16 + uVar15,iVar14,1,auStack_78);
              if (((iVar17 != iVar1) &&
                  ((CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) &
                   0x7fffffffffffffff) != 0x7ff0000000000000)) && (iVar14 == (int)auStack_78[0])) {
                piVar11 = (int *)&UNK_10e574610;
                do {
                  iVar1 = *piVar11;
                  piVar11 = piVar11 + 1;
                } while (iVar1 != *(char *)(lVar16 + uVar15) && iVar1 != 0);
                if ((iVar1 == 0) &&
                   ((CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,
                                                         CONCAT13(in_register_00005003,
                                                                  CONCAT12(in_register_00005002,
                                                                           CONCAT11(
                                                  in_register_00005001,in_b0))))))) &
                    0x7fffffffffffffff) < 0x7ff0000000000000)) {
                  auStack_78[0] =
                       CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0)))))));
                  uStack_60 = 3;
                  *param_1 = 1;
                  *(ulong *)(param_1 + 8) =
                       CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0)))))));
                  *(undefined8 *)(param_1 + 0x20) = 3;
                  puStack_58 = auStack_78;
                  FUN_100136360(&puStack_58,3);
                  return;
                }
              }
              uVar5 = 10;
            }
            *(undefined4 *)(param_2 + 0x38) = uVar5;
            *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
            iVar1 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x34);
            if (iVar1 < 2) {
              iVar1 = 1;
            }
            *(int *)(param_2 + 0x40) = iVar1;
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            return;
          }
          iVar14 = iVar17 + 1;
          *(int *)(param_2 + 0x20) = iVar14;
          lVar13 = (long)iVar14;
          uVar9 = lVar13 + 1;
          if ((uVar9 <= uVar6) &&
             ((*(char *)(lVar16 + lVar13) == '-' || (*(char *)(lVar16 + lVar13) == '+')))) {
            iVar14 = iVar17 + 2;
            *(int *)(param_2 + 0x20) = iVar14;
            lVar13 = (long)iVar14;
            uVar9 = lVar13 + 1;
          }
          iVar17 = iVar14;
          if (uVar9 <= uVar6) {
            lVar10 = 0;
            do {
              iVar14 = (int)lVar10;
              if (9 < *(byte *)(lVar16 + lVar13) - 0x30) goto LAB_1001368b4;
              lVar10 = lVar10 + 1;
              iVar14 = iVar17 + iVar14 + 1;
              *(int *)(param_2 + 0x20) = iVar14;
              lVar13 = (long)iVar14;
            } while (lVar13 + 1U <= uVar6);
            iVar14 = (int)lVar10;
LAB_1001368b4:
            iVar17 = iVar17 + iVar14;
            if (lVar10 != 0) goto LAB_1001368bc;
          }
          *(undefined4 *)(param_2 + 0x38) = 1;
          *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
          iVar17 = iVar17 - *(int *)(param_2 + 0x34);
          goto LAB_1001366dc;
        }
        iVar17 = iVar17 + 1;
        *(int *)(param_2 + 0x20) = iVar17;
        lVar13 = (long)iVar17;
        if (lVar13 + 1U <= uVar6) {
          lVar10 = 0;
          do {
            if (9 < *(byte *)(lVar16 + lVar13) - 0x30) break;
            lVar10 = lVar10 + 1;
            iVar17 = iVar17 + 1;
            *(int *)(param_2 + 0x20) = iVar17;
            lVar13 = (long)iVar17;
          } while (lVar13 + 1U <= uVar6);
          if (lVar10 != 0) {
            lVar13 = (long)iVar17;
            uVar9 = lVar13 + 1;
            goto LAB_10013680c;
          }
        }
      }
    }
  }
LAB_1001366cc:
  *(undefined4 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
  iVar17 = iVar17 - *(int *)(param_2 + 0x34);
LAB_1001366dc:
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  *(int *)(param_2 + 0x40) = iVar17;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 100136a94; end: 100137177;  */

ulong FUN_100136a94(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  pbVar1 = param_1 + param_2;
  if (param_2 == 0) {
    uVar5 = 1;
joined_r0x000100136af4:
    if (param_1 != pbVar1) {
      if (*param_1 - 0x30 < 10) {
        uVar7 = 0xaaaaaa0100000000;
        uVar6 = *param_1 - 0x30 & 0xff;
        while (param_1 = param_1 + 1, param_1 != pbVar1) {
          uVar3 = *param_1 - 0x30;
          if (9 < uVar3) goto LAB_100136ca0;
          if ((0xccccccc < (int)uVar6) || ((uVar6 == 0xccccccc && (7 < (uVar3 & 0xff))))) {
            uVar6 = 0x7fffffff;
            goto LAB_100136ca0;
          }
          uVar6 = uVar6 * 10 + (uVar3 & 0xff);
        }
      }
      else {
LAB_100136c9c:
        uVar6 = 0;
LAB_100136ca0:
        uVar7 = 0xaaaaaa0000000000;
      }
LAB_100136ca8:
      uVar7 = uVar7 | uVar6;
      goto LAB_100136cb0;
    }
  }
  else {
    bVar2 = *param_1;
    if ((long)(char)bVar2 < 0) {
      uVar5 = (uint)bVar2;
      func_0x000107c60e64(bVar2,0x4000);
      puVar4 = PTR___DefaultRuneLocale_11034bcf8;
    }
    else {
      uVar5 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)(char)bVar2 * 4 + 0x3c) & 0x4000;
      puVar4 = PTR___DefaultRuneLocale_11034bcf8;
    }
    PTR___DefaultRuneLocale_11034bcf8 = puVar4;
    if (uVar5 == 0) {
      uVar5 = 1;
      bVar2 = *param_1;
    }
    else {
      do {
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          uVar5 = 0;
          goto LAB_100136c90;
        }
        param_1 = param_1 + 1;
        bVar2 = *param_1;
        if ((long)(char)bVar2 < 0) {
          uVar5 = (uint)bVar2;
          func_0x000107c60e64(bVar2,0x4000);
        }
        else {
          uVar5 = *(uint *)(puVar4 + (long)(char)bVar2 * 4 + 0x3c) & 0x4000;
        }
      } while (uVar5 != 0);
      uVar5 = 0;
      bVar2 = *param_1;
    }
    if (bVar2 != 0x2d) {
      if (bVar2 == 0x2b) {
        param_1 = param_1 + 1;
      }
      goto joined_r0x000100136af4;
    }
    if (param_1 + 1 != pbVar1) {
      uVar6 = param_1[1] - 0x30;
      if (9 < uVar6) goto LAB_100136c9c;
      uVar7 = 0xaaaaaa0100000000;
      uVar6 = -(uVar6 & 0xff);
      for (param_1 = param_1 + 2; param_1 != pbVar1; param_1 = param_1 + 1) {
        uVar3 = *param_1 - 0x30;
        if (9 < uVar3) goto LAB_100136ca0;
        if (((int)uVar6 < -0xccccccc) || ((uVar6 == 0xf3333334 && ((uVar3 & 0xff) == 9)))) {
          uVar6 = 0x80000000;
          goto LAB_100136ca0;
        }
        uVar6 = uVar6 * 10 - (uVar3 & 0xff);
      }
      goto LAB_100136ca8;
    }
  }
LAB_100136c90:
  uVar7 = 0xaaaaaa0000000000;
LAB_100136cb0:
  return uVar7 & 0xffffffff | (ulong)(uVar5 & (uint)(uVar7 >> 0x20)) << 0x20 | 0xaaaaaa0000000000;
}



/* Entry: 100137178; end: 100138723;  */

/* WARNING: Possible PIC construction at 0x00010b2f4c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2f4c74) */
/* WARNING: Removing unreachable block (ram,0x00010b2f4c88) */
/* WARNING: Removing unreachable block (ram,0x00010b2f52bc) */
/* WARNING: Removing unreachable block (ram,0x00010013783c) */

void FUN_100137178(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long unaff_x22;
  undefined8 *puVar21;
  ulong unaff_x23;
  ulong uVar22;
  long unaff_x24;
  ulong uVar23;
  undefined8 *unaff_x25;
  undefined8 *puVar24;
  long unaff_x26;
  long lVar25;
  long unaff_x27;
  undefined8 *puVar26;
  undefined8 *unaff_x28;
  undefined8 *puVar27;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_3 < 2) {
    return;
  }
  if (param_3 != 2) {
    if ((long)param_3 < 1) {
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 7 == param_2) {
        return;
      }
      lVar18 = 0;
      puVar24 = param_1 + 7;
      puVar15 = param_1;
      do {
        puVar21 = puVar24;
        puVar24 = (undefined8 *)*puVar21;
        uVar22 = puVar15[8];
        if (-1 < (char)*(byte *)((long)puVar15 + 0x4f)) {
          puVar24 = puVar21;
          uVar22 = (ulong)*(byte *)((long)puVar15 + 0x4f);
        }
        puVar17 = (undefined8 *)*puVar15;
        uVar19 = puVar15[1];
        if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
          puVar17 = puVar15;
          uVar19 = (ulong)*(byte *)((long)puVar15 + 0x17);
        }
        uVar1 = uVar19;
        if (uVar22 <= uVar19) {
          uVar1 = uVar22;
        }
        func_0x000107c610b0(puVar24,puVar17,uVar1);
        bVar9 = uVar22 < uVar19;
        if ((int)puVar24 != 0) {
          bVar9 = (int)puVar24 < 0;
        }
        if (bVar9) {
          uStack_90 = 0xaaaaaaaaaaaaaaaa;
          uStack_88 = 0xaaaaaaaaaaaaaaaa;
          uStack_98 = 0xaaaaaaaaaaaaaaaa;
          puStack_a8 = (undefined8 *)puVar21[1];
          uStack_b0 = (undefined8 *)*puVar21;
          uStack_a0 = puVar21[2];
          puVar21[1] = 0;
          puVar21[2] = 0;
          *puVar21 = 0;
          lStack_80 = puVar15[0xd];
          lVar25 = lVar18;
          if (lStack_80 < 4) {
            if (lStack_80 == 1) {
              uStack_98 = CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(puVar15 + 10));
            }
            else if (lStack_80 == 2) {
              uStack_98 = CONCAT44(0xaaaaaaaa,*(undefined4 *)(puVar15 + 10));
            }
            else if (lStack_80 == 3) {
              uStack_98 = puVar15[10];
            }
          }
          else if (lStack_80 < 6) {
            if (lStack_80 == 4) {
              uStack_90 = puVar15[0xb];
              uStack_98 = puVar15[10];
              uStack_88 = puVar15[0xc];
              puVar15[0xb] = 0;
              puVar15[0xc] = 0;
              puVar15[10] = 0;
            }
            else if (lStack_80 == 5) goto LAB_100137434;
          }
          else if ((lStack_80 == 6) || (lStack_80 == 7)) {
LAB_100137434:
            uStack_90 = puVar15[0xb];
            uStack_98 = puVar15[10];
            uStack_88 = puVar15[0xc];
            puVar15[0xb] = 0;
            puVar15[0xc] = 0;
            puVar15[10] = 0;
          }
          do {
            lVar16 = lVar25;
            puVar24 = (undefined8 *)((long)param_1 + lVar16);
            if (*(char *)((long)puVar24 + 0x4f) < '\0') {
              func_0x000107c60e14(puVar24[7]);
            }
            puVar24[8] = puVar24[1];
            puVar24[7] = *puVar24;
            puVar24[9] = puVar24[2];
            *(undefined1 *)((long)puVar24 + 0x17) = 0;
            *(undefined1 *)puVar24 = 0;
            puStack_70 = puVar24 + 10;
            puStack_68 = puVar24 + 3;
            func_0x000100136cd8(&puStack_70,puVar24[6]);
            if (lVar16 == 0) {
              cVar6 = *(char *)((long)param_1 + 0x17);
              puVar24 = param_1;
              goto joined_r0x000100137550;
            }
            plVar13 = (long *)((long)param_1 + lVar16 + -0x38);
            bVar5 = *(byte *)((long)param_1 + lVar16 + -0x21);
            puVar24 = uStack_b0;
            puVar15 = puStack_a8;
            if (-1 < (long)uStack_a0) {
              puVar24 = &uStack_b0;
              puVar15 = (undefined8 *)(uStack_a0 >> 0x38);
            }
            plVar2 = (long *)*plVar13;
            puVar17 = *(undefined8 **)((long)param_1 + lVar16 + -0x30);
            if (-1 < (char)bVar5) {
              plVar2 = plVar13;
              puVar17 = (undefined8 *)(ulong)bVar5;
            }
            puVar10 = puVar17;
            if (puVar15 <= puVar17) {
              puVar10 = puVar15;
            }
            func_0x000107c610b0(puVar24,plVar2,puVar10);
            bVar9 = puVar15 < puVar17;
            if ((int)puVar24 != 0) {
              bVar9 = (int)puVar24 < 0;
            }
            lVar25 = lVar16 + -0x38;
          } while (bVar9);
          puVar24 = (undefined8 *)((long)param_1 + lVar16);
          cVar6 = *(char *)((long)param_1 + lVar16 + 0x17);
joined_r0x000100137550:
          if (cVar6 < '\0') {
            func_0x000107c60e14(*puVar24);
          }
          puStack_70 = (undefined8 *)((long)param_1 + lVar16 + 0x18);
          puVar24[2] = uStack_a0;
          puVar24[1] = puStack_a8;
          *puVar24 = uStack_b0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff;
          uStack_b0 = (undefined8 *)((ulong)uStack_b0 & 0xffffffffffffff00);
          puStack_68 = &uStack_98;
          func_0x000100136cd8(&puStack_70,lStack_80);
          puStack_70 = &uStack_98;
          FUN_100136360(&puStack_70,lStack_80);
          if ((long)uStack_a0 < 0) {
            func_0x000107c60e14(uStack_b0);
          }
        }
        lVar18 = lVar18 + 0x38;
        puVar24 = puVar21 + 7;
        puVar15 = puVar21;
        if (puVar21 + 7 == param_2) {
          return;
        }
      } while( true );
    }
    uVar22 = param_3 >> 1;
    lVar18 = param_3 - uVar22;
    if (param_5 < (long)param_3) {
      FUN_100137178(param_1,param_1 + uVar22 * 7,uVar22,param_4);
      FUN_100137178(param_1 + uVar22 * 7,param_2,lVar18,param_4,param_5);
      puVar24 = param_1 + uVar22 * 7;
      puVar8 = (undefined1 *)register0x00000008;
code_r0x00010b2f4500:
      *(undefined8 **)(puVar8 + -0x60) = unaff_x28;
      *(long *)(puVar8 + -0x58) = unaff_x27;
      *(long *)(puVar8 + -0x50) = unaff_x26;
      *(undefined8 **)(puVar8 + -0x48) = unaff_x25;
      *(long *)(puVar8 + -0x40) = unaff_x24;
      *(ulong *)(puVar8 + -0x38) = unaff_x23;
      *(long *)(puVar8 + -0x30) = unaff_x22;
      *(undefined8 **)(puVar8 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
      *(long *)(puVar8 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar8 + -0x10) = unaff_x29;
      *(undefined **)(puVar8 + -8) = unaff_x30;
      unaff_x29 = puVar8 + -0x10;
      *(undefined8 **)(puVar8 + -0xc0) = param_2;
      *(long *)(puVar8 + -0xb8) = param_5;
      *(undefined8 **)(puVar8 + -200) = param_4;
      *(undefined8 **)(puVar8 + -0xa8) = puVar24;
      *(undefined8 **)(puVar8 + -0x98) = param_1;
      if (lVar18 == 0) {
        return;
      }
code_r0x00010b2f453c:
      if ((*(long *)(puVar8 + -0xb8) < (long)uVar22) && (*(long *)(puVar8 + -0xb8) < lVar18)) {
        if (uVar22 == 0) {
          return;
        }
        unaff_x27 = 0;
        puVar15 = *(undefined8 **)(puVar8 + -0xa8);
        puVar24 = (undefined8 *)*puVar15;
        uVar19 = puVar15[1];
        if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
          puVar24 = puVar15;
          uVar19 = (ulong)*(byte *)((long)puVar15 + 0x17);
        }
        unaff_x22 = -uVar22;
        while( true ) {
          lVar25 = *(long *)(puVar8 + -0x98);
          unaff_x20 = (undefined8 *)(lVar25 + unaff_x27);
          puVar21 = (undefined8 *)*unaff_x20;
          uVar22 = unaff_x20[1];
          puVar15 = puVar21;
          uVar1 = uVar22;
          if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
            puVar15 = unaff_x20;
            uVar1 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
          }
          uVar23 = uVar1;
          if (uVar19 <= uVar1) {
            uVar23 = uVar19;
          }
          puVar17 = puVar24;
          _memcmp(puVar24,puVar15,uVar23);
          bVar9 = uVar19 < uVar1;
          if ((int)puVar17 != 0) {
            bVar9 = (int)puVar17 < 0;
          }
          if (bVar9) break;
          unaff_x27 = unaff_x27 + 0x38;
          bVar9 = unaff_x22 == -1;
          unaff_x22 = unaff_x22 + 1;
          if (bVar9) {
            return;
          }
        }
        unaff_x25 = *(undefined8 **)(puVar8 + -0xa8);
        *(long *)(puVar8 + -0xd0) = lVar18;
        if (-unaff_x22 < lVar18) {
          *(long *)(puVar8 + -0xd8) = lVar18 / 2;
          puVar15 = unaff_x25 + (lVar18 / 2) * 7;
          lVar18 = (long)unaff_x25 + (-unaff_x27 - lVar25);
          puVar24 = unaff_x25;
          if (lVar18 != 0) {
            uVar19 = (lVar18 >> 3) * 0x6db6db6db6db6db7;
            bVar5 = *(byte *)((long)puVar15 + 0x17);
            puVar21 = (undefined8 *)*puVar15;
            uVar22 = puVar15[1];
            if (-1 < (char)bVar5) {
              uVar22 = (ulong)bVar5;
            }
            *(undefined8 **)(puVar8 + -0xa0) = puVar15;
            puVar24 = unaff_x20;
            if (-1 < (char)bVar5) {
              puVar21 = puVar15;
            }
            do {
              uVar23 = uVar19 >> 1;
              puVar17 = puVar24 + uVar23 * 7;
              puVar15 = (undefined8 *)*puVar17;
              uVar1 = puVar17[1];
              if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
                puVar15 = puVar17;
                uVar1 = (ulong)*(byte *)((long)puVar17 + 0x17);
              }
              uVar3 = uVar1;
              if (uVar22 <= uVar1) {
                uVar3 = uVar22;
              }
              puVar10 = puVar21;
              _memcmp(puVar21,puVar15,uVar3);
              bVar9 = uVar22 < uVar1;
              if ((int)puVar10 != 0) {
                bVar9 = (int)puVar10 < 0;
              }
              uVar1 = uVar19 + ~uVar23;
              uVar19 = uVar23;
              if (!bVar9) {
                uVar19 = uVar1;
                puVar24 = puVar17 + 7;
              }
            } while (uVar19 != 0);
            puVar15 = *(undefined8 **)(puVar8 + -0xa0);
            lVar25 = *(long *)(puVar8 + -0x98);
            unaff_x25 = *(undefined8 **)(puVar8 + -0xa8);
          }
          uVar22 = ((long)puVar24 + (-unaff_x27 - lVar25) >> 3) * 0x6db6db6db6db6db7;
          *(undefined8 **)(puVar8 + -0xa0) = puVar15;
          param_2 = puVar15;
          if (puVar24 != unaff_x25) {
code_r0x00010b2f4808:
            param_2 = puVar24;
            if (unaff_x25 != puVar15) {
              *(ulong *)(puVar8 + -0xe0) = uVar22;
              lVar18 = 0;
              *(undefined8 **)(puVar8 + -0xb0) = unaff_x25 + 3;
              puVar21 = unaff_x25;
              do {
                puVar17 = (undefined8 *)((long)unaff_x25 + lVar18);
                puVar10 = (undefined8 *)((long)puVar24 + lVar18);
                uVar12 = *puVar10;
                uVar28 = puVar10[2];
                uVar14 = puVar10[1];
                uVar30 = puVar17[1];
                uVar29 = *puVar17;
                puVar10[2] = puVar17[2];
                puVar10[1] = uVar30;
                *puVar10 = uVar29;
                *puVar17 = uVar12;
                puVar17[2] = uVar28;
                puVar17[1] = uVar14;
                *(undefined8 *)(puVar8 + -0x88) = 0xaaaaaaaaaaaaaaaa;
                *(undefined8 *)(puVar8 + -0x80) = 0xaaaaaaaaaaaaaaaa;
                *(undefined8 *)(puVar8 + -0x90) = 0xaaaaaaaaaaaaaaaa;
                lVar25 = puVar10[6];
                if (lVar25 < 4) {
                  if (lVar25 == 1) {
                    puVar8[-0x90] = *(undefined1 *)(puVar10 + 3);
                  }
                  else if (lVar25 == 2) {
                    *(undefined4 *)(puVar8 + -0x90) = *(undefined4 *)(puVar10 + 3);
                  }
                  else if (lVar25 == 3) {
                    *(undefined8 *)(puVar8 + -0x90) = puVar10[3];
                  }
                }
                else if (lVar25 < 6) {
                  if (lVar25 == 4) {
                    uVar14 = puVar10[4];
                    uVar12 = puVar10[3];
                    *(undefined8 *)(puVar8 + -0x80) = puVar10[5];
                    *(undefined8 *)(puVar8 + -0x88) = uVar14;
                    *(undefined8 *)(puVar8 + -0x90) = uVar12;
                    puVar10[4] = 0;
                    puVar10[5] = 0;
                    puVar10[3] = 0;
                  }
                  else if (lVar25 == 5) goto code_r0x00010b2f48b8;
                }
                else if ((lVar25 == 6) || (lVar25 == 7)) {
code_r0x00010b2f48b8:
                  uVar12 = puVar10[3];
                  *(undefined8 *)(puVar8 + -0x88) = puVar10[4];
                  *(undefined8 *)(puVar8 + -0x90) = uVar12;
                  *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)((long)puVar24 + lVar18 + 0x28);
                  puVar10[3] = 0;
                  puVar10[4] = 0;
                  puVar10[5] = 0;
                }
                *(long *)(puVar8 + -0x78) = lVar25;
                lVar25 = *(long *)(puVar8 + -0xb0);
                *(long *)(puVar8 + -0x70) = (long)puVar24 + lVar18 + 0x18;
                *(long *)(puVar8 + -0x68) = lVar25 + lVar18;
                func_0x000107c2cf50(puVar8 + -0x70,puVar17[6]);
                *(long *)(puVar8 + -0x70) = lVar25 + lVar18;
                unaff_x25 = (undefined8 *)(puVar8 + -0x90);
                *(undefined8 **)(puVar8 + -0x68) = unaff_x25;
                func_0x000107c2cf50(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
                *(undefined8 **)(puVar8 + -0x70) = unaff_x25;
                func_0x000107c2cf54(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
                puVar15 = *(undefined8 **)(puVar8 + -0xa0);
                if (puVar17 + 7 == puVar15) goto code_r0x00010b2f497c;
                puVar15 = puVar17 + 7;
                if (puVar10 + 7 != puVar21) {
                  puVar15 = puVar21;
                }
                lVar18 = lVar18 + 0x38;
                unaff_x25 = *(undefined8 **)(puVar8 + -0xa8);
                puVar21 = puVar15;
              } while( true );
            }
          }
        }
        else {
          if (unaff_x22 == -1) {
            puVar24 = (undefined8 *)(lVar25 + unaff_x27);
            uVar12 = puVar24[2];
            uVar14 = unaff_x25[2];
            uVar28 = *unaff_x25;
            puVar24[1] = unaff_x25[1];
            *puVar24 = uVar28;
            puVar24[2] = uVar14;
            *unaff_x25 = puVar21;
            unaff_x25[1] = uVar22;
            unaff_x25[2] = uVar12;
            *(undefined8 *)(puVar8 + -0x88) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x90) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x78) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x80) = 0xaaaaaaaaaaaaaaaa;
            func_0x000107c2cea0(puVar8 + -0x90,puVar24 + 3);
            *(undefined8 **)(puVar8 + -0x70) = puVar24 + 3;
            *(undefined8 **)(puVar8 + -0x68) = unaff_x25 + 3;
            func_0x000107c2cf50(puVar8 + -0x70,unaff_x25[6]);
            *(undefined8 **)(puVar8 + -0x70) = unaff_x25 + 3;
            *(undefined1 **)(puVar8 + -0x68) = puVar8 + -0x90;
            func_0x000107c2cf50(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
            *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x90;
            func_0x000107c2cf54(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
            return;
          }
          uVar22 = -unaff_x22 / 2;
          puVar15 = unaff_x25;
          if (unaff_x25 != *(undefined8 **)(puVar8 + -0xc0)) {
            plVar13 = (long *)(lVar25 + uVar22 * 0x38 + unaff_x27);
            uVar19 = (*(long *)(puVar8 + -0xc0) - (long)unaff_x25 >> 3) * 0x6db6db6db6db6db7;
            *(ulong *)(puVar8 + -0xe0) = uVar22;
            lVar18 = lVar25 + uVar22 * 0x38 + unaff_x27;
            bVar5 = *(byte *)(lVar18 + 0x17);
            uVar22 = *(ulong *)(lVar18 + 8);
            plVar2 = (long *)*plVar13;
            if (-1 < (char)bVar5) {
              uVar22 = (ulong)bVar5;
              plVar2 = plVar13;
            }
            do {
              uVar23 = uVar19 >> 1;
              puVar15 = unaff_x25 + uVar23 * 7;
              puVar24 = (undefined8 *)*puVar15;
              uVar1 = puVar15[1];
              if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
                puVar24 = puVar15;
                uVar1 = (ulong)*(byte *)((long)puVar15 + 0x17);
              }
              uVar3 = uVar22;
              if (uVar1 <= uVar22) {
                uVar3 = uVar1;
              }
              _memcmp(puVar24,plVar2,uVar3);
              bVar9 = uVar1 < uVar22;
              if ((int)puVar24 != 0) {
                bVar9 = (int)puVar24 < 0;
              }
              puVar15 = puVar15 + 7;
              uVar19 = uVar19 + ~uVar23;
              if (!bVar9) {
                puVar15 = unaff_x25;
                uVar19 = uVar23;
              }
              unaff_x25 = puVar15;
            } while (uVar19 != 0);
            lVar25 = *(long *)(puVar8 + -0x98);
            unaff_x25 = *(undefined8 **)(puVar8 + -0xa8);
            uVar22 = *(ulong *)(puVar8 + -0xe0);
          }
          *(long *)(puVar8 + -0xd8) = ((long)puVar15 - (long)unaff_x25 >> 3) * 0x6db6db6db6db6db7;
          puVar24 = (undefined8 *)(lVar25 + uVar22 * 0x38 + unaff_x27);
          *(undefined8 **)(puVar8 + -0xa0) = puVar15;
          param_2 = puVar15;
          if (puVar24 != unaff_x25) goto code_r0x00010b2f4808;
        }
        goto code_r0x00010b2f4c2c;
      }
      if (lVar18 < (long)uVar22) {
        if (*(long *)(puVar8 + -0xa8) == *(long *)(puVar8 + -0xc0)) {
          return;
        }
        lVar25 = 0;
        lVar18 = 0;
        puVar17 = *(undefined8 **)(puVar8 + -0x98);
        puVar15 = *(undefined8 **)(puVar8 + -200);
        puVar24 = *(undefined8 **)(puVar8 + -0xc0);
        puVar21 = *(undefined8 **)(puVar8 + -0xa8);
        goto code_r0x00010b2f4d58;
      }
      if (*(long *)(puVar8 + -0xa8) == *(long *)(puVar8 + -0x98)) {
        return;
      }
      lVar25 = 0;
      lVar18 = 0;
      puVar21 = *(undefined8 **)(puVar8 + -0x98);
      puVar24 = *(undefined8 **)(puVar8 + -0xa8);
      puVar15 = *(undefined8 **)(puVar8 + -200);
      goto code_r0x00010b2f4e84;
    }
    func_0x0001001378b4(param_1,param_1 + uVar22 * 7,uVar22,param_4);
    puVar15 = param_4 + uVar22 * 7;
    func_0x0001001378b4(param_1 + uVar22 * 7,param_2,lVar18,puVar15);
    puVar21 = param_4 + param_3 * 7;
    puVar24 = puVar15;
    if (param_3 != 1) {
      puVar17 = param_1 + 3;
      puVar20 = param_1;
      puVar10 = param_4;
      do {
        while( true ) {
          if (puVar24 == puVar21) {
            if (puVar10 != puVar15) {
              puVar24 = puVar10 + 3;
              do {
                if (*(char *)((long)puVar20 + 0x17) < '\0') {
                  func_0x000107c60e14(*puVar20);
                }
                uVar14 = puVar10[1];
                uVar12 = *puVar10;
                puVar20[2] = puVar10[2];
                puVar20[1] = uVar14;
                *puVar20 = uVar12;
                *(undefined1 *)((long)puVar10 + 0x17) = 0;
                *(undefined1 *)puVar10 = 0;
                uStack_b0 = puVar17;
                puStack_a8 = puVar24;
                func_0x000100136cd8(&uStack_b0,puVar10[6]);
                puVar10 = puVar10 + 7;
                puVar24 = puVar24 + 7;
                puVar17 = puVar17 + 7;
                puVar20 = puVar20 + 7;
              } while (puVar10 != puVar15);
            }
            goto LAB_10013780c;
          }
          puVar26 = (undefined8 *)*puVar24;
          uVar22 = puVar24[1];
          if (-1 < (char)*(byte *)((long)puVar24 + 0x17)) {
            puVar26 = puVar24;
            uVar22 = (ulong)*(byte *)((long)puVar24 + 0x17);
          }
          puVar11 = (undefined8 *)*puVar10;
          uVar19 = puVar10[1];
          if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
            puVar11 = puVar10;
            uVar19 = (ulong)*(byte *)((long)puVar10 + 0x17);
          }
          uVar1 = uVar19;
          if (uVar22 <= uVar19) {
            uVar1 = uVar22;
          }
          func_0x000107c610b0(puVar26,puVar11,uVar1);
          bVar9 = uVar22 < uVar19;
          if ((int)puVar26 != 0) {
            bVar9 = (int)puVar26 < 0;
          }
          if (!bVar9) break;
          if (*(char *)((long)puVar20 + 0x17) < '\0') {
            func_0x000107c60e14(*puVar20);
          }
          uVar14 = puVar24[1];
          uVar12 = *puVar24;
          puVar20[2] = puVar24[2];
          param_1 = puVar20 + 7;
          puVar20[1] = uVar14;
          *puVar20 = uVar12;
          *(undefined1 *)((long)puVar24 + 0x17) = 0;
          *(undefined1 *)puVar24 = 0;
          puStack_a8 = puVar24 + 3;
          uStack_b0 = puVar17;
          func_0x000100136cd8(&uStack_b0,puVar24[6]);
          puVar24 = puVar24 + 7;
          puVar17 = puVar17 + 7;
          puVar20 = param_1;
          if (puVar10 == puVar15) goto LAB_1001375e8;
        }
        if (*(char *)((long)puVar20 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar20);
        }
        uVar14 = puVar10[1];
        uVar12 = *puVar10;
        puVar20[2] = puVar10[2];
        param_1 = puVar20 + 7;
        puVar20[1] = uVar14;
        *puVar20 = uVar12;
        *(undefined1 *)((long)puVar10 + 0x17) = 0;
        *(undefined1 *)puVar10 = 0;
        puStack_a8 = puVar10 + 3;
        uStack_b0 = puVar17;
        func_0x000100136cd8(&uStack_b0,puVar10[6]);
        puVar10 = puVar10 + 7;
        puVar17 = puVar17 + 7;
        puVar20 = param_1;
      } while (puVar10 != puVar15);
    }
LAB_1001375e8:
    if (puVar24 != puVar21) {
      puVar15 = puVar24 + 3;
      puVar17 = param_1 + 3;
      do {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c60e14(*param_1);
        }
        uVar14 = puVar24[1];
        uVar12 = *puVar24;
        param_1[2] = puVar24[2];
        param_1[1] = uVar14;
        *param_1 = uVar12;
        *(undefined1 *)((long)puVar24 + 0x17) = 0;
        *(undefined1 *)puVar24 = 0;
        uStack_b0 = puVar17;
        puStack_a8 = puVar15;
        func_0x000100136cd8(&uStack_b0,puVar24[6]);
        puVar24 = puVar24 + 7;
        puVar15 = puVar15 + 7;
        puVar17 = puVar17 + 7;
        param_1 = param_1 + 7;
      } while (puVar24 != puVar21);
    }
LAB_10013780c:
    if (param_4 == (undefined8 *)0x0) {
      return;
    }
    param_4 = param_4 + 3;
    do {
      uStack_b0 = param_4;
      FUN_100136360(&uStack_b0,param_4[3]);
      param_4 = param_4 + 7;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  puVar21 = param_2 + -7;
  puVar15 = (undefined8 *)*param_1;
  uVar22 = param_1[1];
  puVar24 = (undefined8 *)*puVar21;
  uVar19 = param_2[-6];
  if (-1 < (char)*(byte *)((long)param_2 + -0x21)) {
    puVar24 = puVar21;
    uVar19 = (ulong)*(byte *)((long)param_2 + -0x21);
  }
  puVar17 = puVar15;
  uVar1 = uVar22;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar17 = param_1;
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  uVar23 = uVar1;
  if (uVar19 <= uVar1) {
    uVar23 = uVar19;
  }
  func_0x000107c610b0(puVar24,puVar17,uVar23);
  bVar9 = uVar19 < uVar1;
  if ((int)puVar24 != 0) {
    bVar9 = (int)puVar24 < 0;
  }
  if (!bVar9) {
    return;
  }
  uVar12 = param_1[2];
  uVar14 = param_2[-5];
  uVar28 = *puVar21;
  param_1[1] = param_2[-6];
  *param_1 = uVar28;
  param_1[2] = uVar14;
  param_2[-7] = puVar15;
  param_2[-6] = uVar22;
  param_2[-5] = uVar12;
  puStack_70 = param_1 + 3;
  puStack_a8 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
  lVar18 = param_1[6];
  if (lVar18 < 4) {
    if (lVar18 == 1) {
      uStack_b0 = (undefined8 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)puStack_70);
    }
    else if (lVar18 == 2) {
      uStack_b0 = (undefined8 *)CONCAT44(0xaaaaaaaa,*(undefined4 *)puStack_70);
    }
    else if (lVar18 == 3) {
      uStack_b0 = (undefined8 *)*puStack_70;
    }
    goto LAB_100137878;
  }
  if (lVar18 < 6) {
    if (lVar18 == 4) {
      puStack_a8 = (undefined8 *)param_1[4];
      uStack_b0 = (undefined8 *)*puStack_70;
      uStack_a0 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      *puStack_70 = 0;
      goto LAB_100137878;
    }
    if (lVar18 != 5) goto LAB_100137878;
  }
  else if ((lVar18 != 6) && (lVar18 != 7)) goto LAB_100137878;
  puStack_a8 = (undefined8 *)param_1[4];
  uStack_b0 = (undefined8 *)param_1[3];
  uStack_a0 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  *puStack_70 = 0;
LAB_100137878:
  uStack_98 = lVar18;
  puStack_68 = param_2 + -4;
  func_0x000100136cd8(&puStack_70,param_2[-1]);
  puStack_70 = param_2 + -4;
  puStack_68 = &uStack_b0;
  func_0x000100136cd8(&puStack_70,lVar18);
  puStack_70 = &uStack_b0;
  FUN_100136360(&puStack_70,uStack_98);
  return;
code_r0x00010b2f4e84:
  do {
    puVar17 = (undefined8 *)((long)puVar15 + lVar25);
    puVar10 = (undefined8 *)((long)puVar21 + lVar25);
    uVar14 = puVar10[1];
    uVar12 = *puVar10;
    puVar17[2] = puVar10[2];
    puVar17[1] = uVar14;
    *puVar17 = uVar12;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    puVar17[6] = 0xffffffffffffffff;
    lVar16 = puVar10[6];
    if (lVar16 < 4) {
      if (lVar16 == 1) {
        *(undefined1 *)(puVar17 + 3) = *(undefined1 *)(puVar10 + 3);
      }
      else if (lVar16 == 2) {
        *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar10 + 3);
      }
      else if (lVar16 == 3) {
        puVar17[3] = puVar10[3];
      }
    }
    else if (lVar16 < 6) {
      if (lVar16 == 4) {
        uVar14 = puVar10[4];
        uVar12 = puVar10[3];
        puVar17[5] = puVar10[5];
        puVar17[4] = uVar14;
        puVar17[3] = uVar12;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[3] = 0;
      }
      else if (lVar16 == 5) goto code_r0x00010b2f4e38;
    }
    else if ((lVar16 == 6) || (lVar16 == 7)) {
code_r0x00010b2f4e38:
      puVar17[3] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[3] = puVar10[3];
      *(undefined8 *)((long)puVar15 + lVar25 + 0x20) =
           *(undefined8 *)((long)puVar21 + lVar25 + 0x20);
      *(undefined8 *)((long)puVar15 + lVar25 + 0x28) =
           *(undefined8 *)((long)puVar21 + lVar25 + 0x28);
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
    }
    puVar17[6] = puVar10[6];
    lVar18 = lVar18 + 1;
    lVar25 = lVar25 + 0x38;
  } while (puVar10 + 7 != puVar24);
  puVar17 = puVar21 + 3;
  puVar20 = (undefined8 *)((long)puVar15 + lVar25);
  *(undefined8 **)(puVar8 + -0xa0) = puVar20 + -7;
  puVar26 = *(undefined8 **)(puVar8 + -0xc0);
  puVar10 = puVar15;
  do {
    while( true ) {
      if (puVar24 == puVar26) {
        puVar24 = puVar10 + 3;
        puVar20 = *(undefined8 **)(puVar8 + -0xa0);
        do {
          if (*(char *)((long)puVar21 + 0x17) < '\0') {
            __ZdlPv(*puVar21);
          }
          uVar14 = puVar10[1];
          uVar12 = *puVar10;
          puVar21[2] = puVar10[2];
          puVar21[1] = uVar14;
          *puVar21 = uVar12;
          *(undefined1 *)((long)puVar10 + 0x17) = 0;
          *(undefined1 *)puVar10 = 0;
          *(undefined8 **)(puVar8 + -0x90) = puVar17;
          *(undefined8 **)(puVar8 + -0x88) = puVar24;
          func_0x000107c2cf50(puVar8 + -0x90,puVar10[6]);
          puVar17 = puVar17 + 7;
          puVar24 = puVar24 + 7;
          bVar9 = puVar20 != puVar10;
          puVar10 = puVar10 + 7;
          puVar21 = puVar21 + 7;
        } while (bVar9);
        goto code_r0x00010b2f528c;
      }
      puVar11 = (undefined8 *)*puVar24;
      uVar22 = puVar24[1];
      if (-1 < (char)*(byte *)((long)puVar24 + 0x17)) {
        puVar11 = puVar24;
        uVar22 = (ulong)*(byte *)((long)puVar24 + 0x17);
      }
      puVar27 = (undefined8 *)*puVar10;
      uVar19 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        puVar27 = puVar10;
        uVar19 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
      uVar1 = uVar19;
      if (uVar22 <= uVar19) {
        uVar1 = uVar22;
      }
      _memcmp(puVar11,puVar27,uVar1);
      bVar9 = uVar22 < uVar19;
      if ((int)puVar11 != 0) {
        bVar9 = (int)puVar11 < 0;
      }
      if (!bVar9) break;
      if (*(char *)((long)puVar21 + 0x17) < '\0') {
        __ZdlPv(*puVar21);
      }
      uVar14 = puVar24[1];
      uVar12 = *puVar24;
      puVar21[2] = puVar24[2];
      puVar21[1] = uVar14;
      *puVar21 = uVar12;
      *(undefined1 *)((long)puVar24 + 0x17) = 0;
      *(undefined1 *)puVar24 = 0;
      *(undefined8 **)(puVar8 + -0x90) = puVar17;
      *(undefined8 **)(puVar8 + -0x88) = puVar24 + 3;
      func_0x000107c2cf50(puVar8 + -0x90,puVar24[6]);
      puVar24 = puVar24 + 7;
      puVar17 = puVar17 + 7;
      puVar21 = puVar21 + 7;
      if (puVar20 == puVar10) goto code_r0x00010b2f528c;
    }
    if (*(char *)((long)puVar21 + 0x17) < '\0') {
      __ZdlPv(*puVar21);
    }
    uVar14 = puVar10[1];
    uVar12 = *puVar10;
    puVar21[2] = puVar10[2];
    puVar21[1] = uVar14;
    *puVar21 = uVar12;
    *(undefined1 *)((long)puVar10 + 0x17) = 0;
    *(undefined1 *)puVar10 = 0;
    *(undefined8 **)(puVar8 + -0x90) = puVar17;
    *(undefined8 **)(puVar8 + -0x88) = puVar10 + 3;
    func_0x000107c2cf50(puVar8 + -0x90,puVar10[6]);
    puVar10 = puVar10 + 7;
    puVar17 = puVar17 + 7;
    puVar21 = puVar21 + 7;
  } while (puVar20 != puVar10);
  goto code_r0x00010b2f528c;
code_r0x00010b2f497c:
  if (puVar10 + 7 != puVar21) {
    puVar17 = (undefined8 *)((long)puVar24 + lVar18 + 0x38);
    unaff_x25 = puVar21;
    do {
      puVar10 = puVar21;
      uVar12 = *puVar17;
      uVar28 = puVar17[2];
      uVar14 = puVar17[1];
      uVar30 = unaff_x25[1];
      uVar29 = *unaff_x25;
      puVar17[2] = unaff_x25[2];
      puVar17[1] = uVar30;
      *puVar17 = uVar29;
      *unaff_x25 = uVar12;
      unaff_x25[2] = uVar28;
      unaff_x25[1] = uVar14;
      puVar15 = puVar17 + 3;
      *(undefined8 *)(puVar8 + -0x90) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)(puVar8 + -0x88) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)(puVar8 + -0x80) = 0xaaaaaaaaaaaaaaaa;
      *(undefined8 *)(puVar8 + -0x78) = 0xffffffffffffffff;
      lVar25 = puVar17[6];
      if (lVar25 < 4) {
        if (lVar25 == 1) {
          puVar8[-0x90] = *(undefined1 *)puVar15;
        }
        else if (lVar25 == 2) {
          *(undefined4 *)(puVar8 + -0x90) = *(undefined4 *)puVar15;
        }
        else if (lVar25 == 3) {
          *(undefined8 *)(puVar8 + -0x90) = *puVar15;
        }
      }
      else if (lVar25 < 6) {
        if (lVar25 == 4) {
          uVar12 = *puVar15;
          *(undefined8 *)(puVar8 + -0x88) = puVar17[4];
          *(undefined8 *)(puVar8 + -0x90) = uVar12;
          *(undefined8 *)(puVar8 + -0x80) = puVar17[5];
          puVar17[4] = 0;
          puVar17[5] = 0;
          *puVar15 = 0;
        }
        else if (lVar25 == 5) goto code_r0x00010b2f4a2c;
      }
      else if ((lVar25 == 7) || (lVar25 == 6)) {
code_r0x00010b2f4a2c:
        uVar12 = puVar17[3];
        *(undefined8 *)(puVar8 + -0x88) = puVar17[4];
        *(undefined8 *)(puVar8 + -0x90) = uVar12;
        *(undefined8 *)(puVar8 + -0x80) = puVar17[5];
        puVar17[4] = 0;
        puVar17[5] = 0;
        *puVar15 = 0;
      }
      *(long *)(puVar8 + -0x78) = lVar25;
      *(undefined8 **)(puVar8 + -0x70) = puVar15;
      *(undefined8 **)(puVar8 + -0x68) = unaff_x25 + 3;
      func_0x000107c2cf50(puVar8 + -0x70,unaff_x25[6]);
      *(undefined8 **)(puVar8 + -0x70) = unaff_x25 + 3;
      *(undefined1 **)(puVar8 + -0x68) = puVar8 + -0x90;
      func_0x000107c2cf50(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
      *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x90;
      func_0x000107c2cf54(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
      puVar20 = puVar17 + 7;
      unaff_x25 = unaff_x25 + 7;
      puVar15 = *(undefined8 **)(puVar8 + -0xa0);
      if (unaff_x25 == puVar15) {
        if (puVar20 != puVar10) {
          *(undefined8 **)(puVar8 + -0xa8) = puVar10 + 7;
          puVar17 = puVar17 + 10;
          do {
            uVar12 = *puVar20;
            uVar28 = puVar20[2];
            uVar14 = puVar20[1];
            uVar30 = puVar10[1];
            uVar29 = *puVar10;
            puVar20[2] = puVar10[2];
            puVar20[1] = uVar30;
            *puVar20 = uVar29;
            *puVar10 = uVar12;
            puVar10[2] = uVar28;
            puVar10[1] = uVar14;
            *(undefined8 *)(puVar8 + -0x90) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x88) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x80) = 0xaaaaaaaaaaaaaaaa;
            *(undefined8 *)(puVar8 + -0x78) = 0xffffffffffffffff;
            lVar25 = puVar20[6];
            if (lVar25 < 4) {
              if (lVar25 == 1) {
                puVar8[-0x90] = *(undefined1 *)(puVar20 + 3);
              }
              else if (lVar25 == 2) {
                *(undefined4 *)(puVar8 + -0x90) = *(undefined4 *)(puVar20 + 3);
              }
              else if (lVar25 == 3) {
                *(undefined8 *)(puVar8 + -0x90) = puVar20[3];
              }
            }
            else if (lVar25 < 6) {
              if (lVar25 == 4) {
                uVar14 = puVar20[4];
                uVar12 = puVar20[3];
                *(undefined8 *)(puVar8 + -0x80) = puVar20[5];
                *(undefined8 *)(puVar8 + -0x88) = uVar14;
                *(undefined8 *)(puVar8 + -0x90) = uVar12;
                puVar20[4] = 0;
                puVar20[5] = 0;
                puVar20[3] = 0;
              }
              else if (lVar25 == 5) goto code_r0x00010b2f4b78;
            }
            else if ((lVar25 == 6) || (lVar25 == 7)) {
code_r0x00010b2f4b78:
              uVar12 = puVar20[3];
              *(undefined8 *)(puVar8 + -0x88) = puVar20[4];
              *(undefined8 *)(puVar8 + -0x90) = uVar12;
              *(undefined8 *)(puVar8 + -0x80) = puVar20[5];
              puVar20[3] = 0;
              puVar20[4] = 0;
              puVar20[5] = 0;
            }
            *(long *)(puVar8 + -0x78) = lVar25;
            *(undefined8 **)(puVar8 + -0x70) = puVar17;
            *(undefined8 **)(puVar8 + -0x68) = puVar10 + 3;
            func_0x000107c2cf50(puVar8 + -0x70,puVar10[6]);
            *(undefined8 **)(puVar8 + -0x70) = puVar10 + 3;
            *(undefined1 **)(puVar8 + -0x68) = puVar8 + -0x90;
            func_0x000107c2cf50(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
            *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x90;
            func_0x000107c2cf54(puVar8 + -0x70,*(undefined8 *)(puVar8 + -0x78));
            puVar20 = puVar20 + 7;
            unaff_x25 = *(undefined8 **)(puVar8 + -0xa8);
            puVar15 = *(undefined8 **)(puVar8 + -0xa0);
            if (unaff_x25 != puVar15) goto code_r0x00010b2f4990;
            puVar17 = puVar17 + 7;
            if (puVar20 == puVar10) break;
          } while( true );
        }
        break;
      }
code_r0x00010b2f4990:
      puVar17 = puVar20;
      puVar21 = unaff_x25;
      if (puVar20 != puVar10) {
        puVar21 = puVar10;
      }
    } while( true );
  }
  uVar22 = *(ulong *)(puVar8 + -0xe0);
  param_2 = (undefined8 *)((long)puVar24 + lVar18 + 0x38);
code_r0x00010b2f4c2c:
  unaff_x26 = -uVar22 - unaff_x22;
  lVar18 = *(long *)(puVar8 + -0xd8);
  unaff_x24 = *(long *)(puVar8 + -0xd0) - lVar18;
  if ((long)(uVar22 + lVar18) < (long)((*(long *)(puVar8 + -0xd0) - (uVar22 + lVar18)) - unaff_x22))
  goto code_r0x00010b2f4c50;
  func_0x00010b2f4500(param_2,puVar15,*(undefined8 *)(puVar8 + -0xc0),unaff_x26,unaff_x24,
                      *(undefined8 *)(puVar8 + -200),*(undefined8 *)(puVar8 + -0xb8));
  *(undefined8 **)(puVar8 + -0xc0) = param_2;
  *(undefined8 **)(puVar8 + -0x98) = unaff_x20;
  *(undefined8 **)(puVar8 + -0xa8) = puVar24;
  if (lVar18 == 0) {
    return;
  }
  goto code_r0x00010b2f453c;
code_r0x00010b2f4c50:
  param_1 = (undefined8 *)(*(long *)(puVar8 + -0x98) + unaff_x27);
  param_4 = *(undefined8 **)(puVar8 + -200);
  param_5 = *(long *)(puVar8 + -0xb8);
  unaff_x30 = &UNK_10b2f4c74;
  puVar8 = puVar8 + -0xe0;
  unaff_x19 = lVar18;
  unaff_x21 = param_2;
  unaff_x23 = uVar22;
  unaff_x28 = puVar24;
  goto code_r0x00010b2f4500;
code_r0x00010b2f4d58:
  do {
    puVar10 = (undefined8 *)((long)puVar15 + lVar25);
    puVar20 = (undefined8 *)((long)puVar21 + lVar25);
    uVar14 = puVar20[1];
    uVar12 = *puVar20;
    puVar10[2] = puVar20[2];
    puVar10[1] = uVar14;
    *puVar10 = uVar12;
    puVar20[1] = 0;
    puVar20[2] = 0;
    *puVar20 = 0;
    puVar10[6] = 0xffffffffffffffff;
    lVar16 = puVar20[6];
    if (lVar16 < 4) {
      if (lVar16 == 1) {
        *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar20 + 3);
      }
      else if (lVar16 == 2) {
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar20 + 3);
      }
      else if (lVar16 == 3) {
        puVar10[3] = puVar20[3];
      }
    }
    else if (lVar16 < 6) {
      if (lVar16 == 4) {
        uVar14 = puVar20[4];
        uVar12 = puVar20[3];
        puVar10[5] = puVar20[5];
        puVar10[4] = uVar14;
        puVar10[3] = uVar12;
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[3] = 0;
      }
      else if (lVar16 == 5) goto code_r0x00010b2f4d0c;
    }
    else if ((lVar16 == 6) || (lVar16 == 7)) {
code_r0x00010b2f4d0c:
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[3] = puVar20[3];
      *(undefined8 *)((long)puVar15 + lVar25 + 0x20) =
           *(undefined8 *)((long)puVar21 + lVar25 + 0x20);
      *(undefined8 *)((long)puVar15 + lVar25 + 0x28) =
           *(undefined8 *)((long)puVar21 + lVar25 + 0x28);
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
    }
    puVar10[6] = puVar20[6];
    lVar18 = lVar18 + 1;
    lVar25 = lVar25 + 0x38;
  } while (puVar20 + 7 != puVar24);
  puVar10 = puVar24 + -4;
  *(undefined8 **)(puVar8 + -0xa0) = puVar24 + -7;
  puVar24 = (undefined8 *)((long)puVar15 + lVar25);
  do {
    if (puVar21 == puVar17) {
      if (puVar15 != puVar24) {
        lVar25 = 0;
        do {
          puVar21 = (undefined8 *)(*(long *)(puVar8 + -0xa0) + lVar25);
          if (*(char *)((long)puVar21 + 0x17) < '\0') {
            __ZdlPv(*puVar21);
          }
          puVar17 = (undefined8 *)((long)puVar24 + lVar25 + -0x38);
          uVar14 = *(undefined8 *)((long)puVar24 + lVar25 + -0x30);
          uVar12 = *puVar17;
          puVar21[2] = *(undefined8 *)((long)puVar24 + lVar25 + -0x28);
          puVar21[1] = uVar14;
          *puVar21 = uVar12;
          *(undefined1 *)((long)puVar24 + lVar25 + -0x21) = 0;
          *(undefined1 *)puVar17 = 0;
          *(undefined8 **)(puVar8 + -0x90) = puVar10;
          *(long *)(puVar8 + -0x88) = (long)puVar24 + lVar25 + -0x20;
          func_0x000107c2cf50(puVar8 + -0x90,*(undefined8 *)((long)puVar24 + lVar25 + -8));
          lVar25 = lVar25 + -0x38;
          puVar10 = puVar10 + -7;
        } while ((undefined8 *)((long)puVar24 + lVar25) != puVar15);
      }
      break;
    }
    bVar5 = *(byte *)((long)puVar21 + -0x21);
    puVar17 = puVar21 + -7;
    bVar4 = *(byte *)((long)puVar24 + -0x21);
    puVar20 = puVar24 + -7;
    puVar15 = (undefined8 *)*puVar20;
    uVar22 = puVar24[-6];
    if (-1 < (char)bVar4) {
      puVar15 = puVar20;
      uVar22 = (ulong)bVar4;
    }
    puVar26 = (undefined8 *)*puVar17;
    uVar19 = puVar21[-6];
    if (-1 < (char)bVar5) {
      puVar26 = puVar17;
      uVar19 = (ulong)bVar5;
    }
    uVar1 = uVar19;
    if (uVar22 <= uVar19) {
      uVar1 = uVar22;
    }
    _memcmp(puVar15,puVar26,uVar1);
    bVar9 = uVar22 < uVar19;
    if ((int)puVar15 != 0) {
      bVar9 = (int)puVar15 < 0;
    }
    puVar27 = *(undefined8 **)(puVar8 + -0xa0);
    puVar26 = puVar24;
    puVar15 = puVar21;
    pbVar7 = (byte *)((long)puVar21 + -0x21);
    puVar11 = puVar17;
    if (!bVar9) {
      puVar26 = puVar20;
      puVar17 = puVar21;
      puVar15 = puVar24;
      pbVar7 = (byte *)((long)puVar24 + -0x21);
      puVar11 = puVar20;
    }
    puVar21 = puVar17;
    if (*(char *)((long)puVar27 + 0x17) < '\0') {
      __ZdlPv(*puVar27);
    }
    uVar14 = puVar11[1];
    uVar12 = *puVar11;
    puVar27[2] = puVar11[2];
    puVar27[1] = uVar14;
    *puVar27 = uVar12;
    *pbVar7 = 0;
    *(undefined1 *)puVar11 = 0;
    *(undefined8 **)(puVar8 + -0x90) = puVar10;
    *(undefined8 **)(puVar8 + -0x88) = puVar15 + -4;
    func_0x000107c2cf50(puVar8 + -0x90,puVar15[-1]);
    puVar10 = puVar10 + -7;
    *(undefined8 **)(puVar8 + -0xa0) = puVar27 + -7;
    puVar15 = *(undefined8 **)(puVar8 + -200);
    puVar17 = *(undefined8 **)(puVar8 + -0x98);
    puVar24 = puVar26;
  } while (puVar26 != puVar15);
code_r0x00010b2f528c:
  if (puVar15 != (undefined8 *)0x0) {
    puVar15 = puVar15 + 3;
    do {
      *(undefined8 **)(puVar8 + -0x90) = puVar15;
      func_0x000107c2cf54(puVar8 + -0x90,puVar15[3]);
      puVar15 = puVar15 + 7;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}



/* Entry: 100138724; end: 100138827;  */

/* WARNING: Removing unreachable block (ram,0x0001001387f8) */

long FUN_100138724(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_3 != param_2) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = param_2;
    if (param_3 != lVar3) {
      lVar4 = 0;
      do {
        puVar2 = (undefined8 *)(param_2 + lVar4);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar2);
        }
        puVar1 = (undefined8 *)(param_3 + lVar4);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        *(undefined1 *)((long)puVar1 + 0x17) = 0;
        *(undefined1 *)puVar1 = 0;
        puStack_50 = puVar2 + 3;
        puStack_48 = puVar1 + 3;
        func_0x000100136cd8(&puStack_50,puVar1[6]);
        lVar4 = lVar4 + 0x38;
      } while (param_3 + lVar4 != lVar3);
      lVar3 = *(long *)(param_1 + 8);
      lVar4 = param_2 + lVar4;
    }
    for (; lVar3 != lVar4; lVar3 = lVar3 + -0x38) {
      puStack_50 = (undefined8 *)(lVar3 + -0x20);
      FUN_100136360(&puStack_50,*(undefined8 *)(lVar3 + -8));
    }
    *(long *)(param_1 + 8) = lVar4;
  }
  return param_2;
}



/* Entry: 100138828; end: 10013b613;  */

/* WARNING: Possible PIC construction at 0x000100138a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100138ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100138d5c) */
/* WARNING: Removing unreachable block (ram,0x000100138c04) */
/* WARNING: Removing unreachable block (ram,0x000100138aa0) */
/* WARNING: Removing unreachable block (ram,0x000100138e00) */
/* WARNING: Removing unreachable block (ram,0x000100138d0c) */

long ******
FUN_100138828(long ******param_1,long ******param_2,long ******param_3,long ******param_4)

{
  bool bVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  long lVar4;
  long *****ppppplVar5;
  undefined8 *puVar6;
  long ******pppppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long *****ppppplVar10;
  long ******unaff_x19;
  long ******unaff_x20;
  long ******pppppplVar11;
  long ******unaff_x21;
  long *****ppppplVar12;
  long ******unaff_x22;
  ulong uVar13;
  ulong uVar14;
  long ******pppppplVar15;
  undefined8 *puVar16;
  long ******unaff_x26;
  long ******pppppplVar17;
  long ******unaff_x27;
  long ******unaff_x28;
  undefined8 uVar18;
  long *****ppppplVar19;
  long *****ppppplVar20;
  long ****pppplVar21;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  long *****ppppplStack_80;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long *****ppppplStack_68;
  
  *param_1 = (long *****)0x0;
  param_1[1] = (long *****)0x0;
  param_1[2] = (long *****)0x0;
  param_1[3] = (long *****)0x6;
  pppppplVar17 = (long ******)*param_2;
  pppppplVar15 = (long ******)param_2[1];
  pppppplVar2 = param_1;
  pppppplVar3 = param_2;
  if ((long)pppppplVar15 - (long)pppppplVar17 == 0) {
LAB_1001388a4:
    ppppplStack_98 = (long *****)pppppplVar15;
    ppppplStack_90 = (long *****)param_1;
    if (pppppplVar17 != pppppplVar15) {
      do {
        if (param_1[3] != (long *****)0x6) {
          func_0x000107c2cf6c();
          param_2 = pppppplVar3;
          goto LAB_100138c30;
        }
        param_2 = (long ******)param_1[1];
        pppppplVar2 = (long ******)0x20;
        func_0x000107c60e20();
        ppppplVar5 = pppppplVar17[6];
        if ((long)ppppplVar5 < 4) {
          if (ppppplVar5 == (long *****)0x1) {
            *(undefined1 *)pppppplVar2 = *(undefined1 *)(pppppplVar17 + 3);
          }
          else if (ppppplVar5 == (long *****)0x2) {
            *(undefined4 *)pppppplVar2 = *(undefined4 *)(pppppplVar17 + 3);
          }
          else if (ppppplVar5 == (long *****)0x3) {
            *pppppplVar2 = pppppplVar17[3];
          }
        }
        else if ((long)ppppplVar5 < 6) {
          if (ppppplVar5 == (long *****)0x4) {
            ppppplVar19 = pppppplVar17[4];
            ppppplVar10 = pppppplVar17[3];
            pppppplVar2[2] = pppppplVar17[5];
            pppppplVar2[1] = ppppplVar19;
            *pppppplVar2 = ppppplVar10;
            pppppplVar17[4] = (long *****)0x0;
            pppppplVar17[5] = (long *****)0x0;
            pppppplVar17[3] = (long *****)0x0;
          }
          else if (ppppplVar5 == (long *****)0x5) goto LAB_100138934;
        }
        else if ((ppppplVar5 == (long *****)0x6) || (ppppplVar5 == (long *****)0x7)) {
LAB_100138934:
          *pppppplVar2 = pppppplVar17[3];
          pppppplVar2[1] = pppppplVar17[4];
          pppppplVar2[2] = pppppplVar17[5];
          pppppplVar17[3] = (long *****)0x0;
          pppppplVar17[4] = (long *****)0x0;
          pppppplVar17[5] = (long *****)0x0;
        }
        pppppplVar2[3] = ppppplVar5;
        ppppplStack_68 = (long *****)pppppplVar17;
        ppppplStack_70 = (long *****)&ppppplStack_78;
        unaff_x20 = (long ******)*param_1;
        unaff_x21 = param_2;
        ppppplStack_78 = (long *****)pppppplVar2;
        if (unaff_x20 != param_2) {
          unaff_x28 = (long ******)(ulong)*(byte *)((long)pppppplVar17 + 0x17);
          unaff_x26 = (long ******)*pppppplVar17;
          unaff_x27 = (long ******)pppppplVar17[1];
          pppppplVar2 = (long ******)param_2[-4];
          pppppplVar3 = (long ******)param_2[-3];
          if (-1 < (char)*(byte *)((long)param_2 + -9)) {
            pppppplVar2 = param_2 + -4;
            pppppplVar3 = (long ******)(ulong)*(byte *)((long)param_2 + -9);
          }
          pppppplVar7 = unaff_x26;
          unaff_x22 = unaff_x27;
          if (-1 < (char)*(byte *)((long)pppppplVar17 + 0x17)) {
            pppppplVar7 = pppppplVar17;
            unaff_x22 = unaff_x28;
          }
          pppppplVar11 = unaff_x22;
          if (pppppplVar3 <= unaff_x22) {
            pppppplVar11 = pppppplVar3;
          }
          func_0x000107c610b0(pppppplVar2,pppppplVar7,pppppplVar11);
          bVar1 = pppppplVar3 < unaff_x22;
          if ((int)pppppplVar2 != 0) {
            bVar1 = (int)pppppplVar2 < 0;
          }
          unaff_x19 = (long ******)param_1[1];
          if (bVar1) {
            if (unaff_x19 != param_2) goto LAB_100138a20;
LAB_100138a88:
            param_3 = &ppppplStack_68;
            param_4 = &ppppplStack_70;
            uVar18 = 0x100138aa0;
            pppppplVar2 = (long ******)ppppplStack_90;
            param_1 = (long ******)ppppplStack_90;
          }
          else {
LAB_100138adc:
            pppppplVar11 = unaff_x19;
            if ((long)unaff_x19 - (long)unaff_x20 != 0) {
              uVar13 = (long)unaff_x19 - (long)unaff_x20 >> 5;
              ppppplStack_88 = (long *****)unaff_x27;
              ppppplStack_80 = (long *****)unaff_x26;
              pppppplVar2 = unaff_x27;
              unaff_x21 = unaff_x26;
              if (-1 < (char)unaff_x28) {
                pppppplVar2 = unaff_x28;
                unaff_x21 = pppppplVar17;
              }
              do {
                uVar14 = uVar13 >> 1;
                pppppplVar3 = unaff_x20 + uVar14 * 4;
                pppppplVar7 = (long ******)*pppppplVar3;
                pppppplVar11 = (long ******)pppppplVar3[1];
                if (-1 < (char)*(byte *)((long)pppppplVar3 + 0x17)) {
                  pppppplVar7 = pppppplVar3;
                  pppppplVar11 = (long ******)(ulong)*(byte *)((long)pppppplVar3 + 0x17);
                }
                pppppplVar15 = pppppplVar2;
                if (pppppplVar11 <= pppppplVar2) {
                  pppppplVar15 = pppppplVar11;
                }
                func_0x000107c610b0(pppppplVar7,unaff_x21,pppppplVar15);
                unaff_x26 = (long ******)ppppplStack_80;
                unaff_x27 = (long ******)ppppplStack_88;
                param_1 = (long ******)ppppplStack_90;
                pppppplVar15 = (long ******)ppppplStack_98;
                bVar1 = pppppplVar11 < pppppplVar2;
                if ((int)pppppplVar7 != 0) {
                  bVar1 = (int)pppppplVar7 < 0;
                }
                pppppplVar11 = pppppplVar3 + 4;
                uVar13 = uVar13 + ~uVar14;
                if (!bVar1) {
                  pppppplVar11 = unaff_x20;
                  uVar13 = uVar14;
                }
                unaff_x20 = pppppplVar11;
              } while (uVar13 != 0);
              unaff_x22 = (long ******)0x0;
              if (unaff_x19 != pppppplVar11) {
                pppppplVar2 = (long ******)ppppplStack_80;
                unaff_x19 = (long ******)ppppplStack_88;
                if (-1 < (char)unaff_x28) {
                  pppppplVar2 = pppppplVar17;
                  unaff_x19 = unaff_x28;
                }
                pppppplVar3 = (long ******)*pppppplVar11;
                param_2 = (long ******)pppppplVar11[1];
                if (-1 < (char)*(byte *)((long)pppppplVar11 + 0x17)) {
                  pppppplVar3 = pppppplVar11;
                  param_2 = (long ******)(ulong)*(byte *)((long)pppppplVar11 + 0x17);
                }
                param_3 = param_2;
                if (unaff_x19 <= param_2) {
                  param_3 = unaff_x19;
                }
                func_0x000107c610b0();
                bVar1 = unaff_x19 < param_2;
                if ((int)pppppplVar2 != 0) {
                  bVar1 = (int)pppppplVar2 < 0;
                }
                pppppplVar7 = (long ******)0x0;
                unaff_x21 = param_2;
                if (!bVar1) goto LAB_100138be0;
              }
            }
            pppppplVar2 = param_1;
            param_2 = pppppplVar11;
            param_3 = &ppppplStack_68;
            param_4 = &ppppplStack_70;
            uVar18 = 0x100138be0;
            unaff_x20 = param_2;
            param_1 = pppppplVar2;
          }
          goto SUB_100138c34;
        }
        unaff_x19 = (long ******)param_1[1];
        if (unaff_x19 == param_2) goto LAB_100138a88;
LAB_100138a20:
        unaff_x28 = (long ******)(ulong)*(byte *)((long)pppppplVar17 + 0x17);
        ppppplStack_80 = *pppppplVar17;
        ppppplStack_88 = pppppplVar17[1];
        unaff_x22 = (long ******)ppppplStack_80;
        unaff_x27 = (long ******)ppppplStack_88;
        if (-1 < (char)*(byte *)((long)pppppplVar17 + 0x17)) {
          unaff_x22 = pppppplVar17;
          unaff_x27 = unaff_x28;
        }
        pppppplVar2 = (long ******)*param_2;
        unaff_x26 = (long ******)param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          pppppplVar2 = param_2;
          unaff_x26 = (long ******)(ulong)*(byte *)((long)param_2 + 0x17);
        }
        param_3 = unaff_x26;
        if (unaff_x27 <= unaff_x26) {
          param_3 = unaff_x27;
        }
        pppppplVar3 = unaff_x22;
        func_0x000107c610b0(unaff_x22,pppppplVar2,param_3);
        bVar1 = unaff_x27 < unaff_x26;
        if ((int)pppppplVar3 != 0) {
          bVar1 = (int)pppppplVar3 < 0;
        }
        pppppplVar15 = param_3;
        if (bVar1) goto LAB_100138a88;
        pppppplVar3 = unaff_x22;
        func_0x000107c610b0();
        bVar1 = unaff_x26 < unaff_x27;
        if ((int)pppppplVar2 != 0) {
          bVar1 = (int)pppppplVar2 < 0;
        }
        pppppplVar7 = unaff_x22;
        param_1 = (long ******)ppppplStack_90;
        pppppplVar15 = (long ******)ppppplStack_98;
        unaff_x26 = (long ******)ppppplStack_80;
        unaff_x27 = (long ******)ppppplStack_88;
        if (bVar1) goto LAB_100138adc;
LAB_100138be0:
        pppppplVar11 = (long ******)ppppplStack_78;
        ppppplStack_78 = (long *****)0x0;
        if (pppppplVar11 != (long ******)0x0) {
          ppppplStack_68 = (long *****)pppppplVar11;
          FUN_100136360(&ppppplStack_68,pppppplVar11[3]);
          goto code_r0x000107c60e14;
        }
        pppppplVar17 = pppppplVar17 + 7;
        unaff_x20 = (long ******)0x0;
        unaff_x21 = param_2;
        unaff_x22 = pppppplVar7;
      } while (pppppplVar17 != pppppplVar15);
    }
    return param_1;
  }
  lVar4 = (long)pppppplVar15 - (long)pppppplVar17 >> 3;
  if ((ulong)(lVar4 * 0x6db6db6db6db6db7) >> 0x3b == 0) {
    unaff_x21 = (long ******)(lVar4 * -0x4924924924924920);
    pppppplVar2 = unaff_x21;
    func_0x000107c60e20();
    *param_1 = (long *****)pppppplVar2;
    param_1[1] = (long *****)pppppplVar2;
    param_1[2] = (long *****)(pppppplVar2 + lVar4 * -0x924924924924924);
    pppppplVar17 = (long ******)*param_2;
    pppppplVar15 = (long ******)param_2[1];
    unaff_x20 = param_2;
    goto LAB_1001388a4;
  }
LAB_100138c30:
  uVar18 = 0x100138c34;
  func_0x000107c2cf74();
SUB_100138c34:
  pppppplVar3 = (long ******)pppppplVar2[1];
  ppppplStack_100 = (long *****)unaff_x28;
  ppppplStack_f8 = (long *****)unaff_x27;
  ppppplStack_f0 = (long *****)unaff_x26;
  ppppplStack_e8 = (long *****)pppppplVar17;
  ppppplStack_e0 = (long *****)pppppplVar15;
  ppppplStack_d8 = (long *****)param_1;
  ppppplStack_d0 = (long *****)unaff_x22;
  ppppplStack_c8 = (long *****)unaff_x21;
  ppppplStack_c0 = (long *****)unaff_x20;
  ppppplStack_b8 = (long *****)unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_a8 = uVar18;
  if (pppppplVar3 < pppppplVar2[2]) {
    ppppplVar10 = *param_3;
    ppppplVar5 = *param_4;
    if (param_2 == pppppplVar3) {
      ppppplVar20 = (long *****)ppppplVar10[1];
      ppppplVar19 = (long *****)*ppppplVar10;
      pppppplVar3[2] = (long *****)ppppplVar10[2];
      pppppplVar3[1] = ppppplVar20;
      *pppppplVar3 = ppppplVar19;
      ppppplVar10[1] = (long ****)0x0;
      ppppplVar10[2] = (long ****)0x0;
      *ppppplVar10 = (long ****)0x0;
      ppppplVar10 = (long *****)*ppppplVar5;
      *ppppplVar5 = (long ****)0x0;
      pppppplVar3[3] = ppppplVar10;
      pppppplVar2[1] = (long *****)(pppppplVar3 + 4);
      return pppppplVar2;
    }
    ppppplVar19 = (long *****)*ppppplVar10;
    ppppplVar20 = (long *****)ppppplVar10[1];
    ppppplVar12 = (long *****)ppppplVar10[2];
    ppppplVar10[1] = (long ****)0x0;
    ppppplVar10[2] = (long ****)0x0;
    *ppppplVar10 = (long ****)0x0;
    ppppplVar10 = (long *****)*ppppplVar5;
    *ppppplVar5 = (long ****)0x0;
    pppppplVar15 = (long ******)pppppplVar2[1];
    pppppplVar3 = pppppplVar15 + -4;
    pppppplVar17 = pppppplVar15;
    if (pppppplVar3 < pppppplVar15) {
      pppppplVar17 = pppppplVar15 + 4;
      pppppplVar15[2] = pppppplVar15[-2];
      pppppplVar15[1] = pppppplVar15[-3];
      *pppppplVar15 = *pppppplVar3;
      *pppppplVar3 = (long *****)0x0;
      pppppplVar15[-3] = (long *****)0x0;
      ppppplVar5 = pppppplVar15[-1];
      pppppplVar15[-2] = (long *****)0x0;
      pppppplVar15[-1] = (long *****)0x0;
      pppppplVar15[3] = ppppplVar5;
    }
    pppppplVar2[1] = (long *****)pppppplVar17;
    if (pppppplVar15 != param_2 + 4) {
      lVar4 = 0;
      do {
        puVar6 = (undefined8 *)((long)pppppplVar15 + lVar4 + -0x40);
        *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x10) =
             *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x30);
        *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x18) =
             *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x38);
        *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x20) = *puVar6;
        *(undefined1 *)((long)pppppplVar15 + lVar4 + -0x29) = 0;
        *(undefined1 *)puVar6 = 0;
        uVar18 = *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x28);
        *(undefined8 *)((long)pppppplVar15 + lVar4 + -0x28) = 0;
        pppppplVar11 = *(long *******)((long)pppppplVar15 + lVar4 + -8);
        *(undefined8 *)((long)pppppplVar15 + lVar4 + -8) = uVar18;
        if (pppppplVar11 != (long ******)0x0) {
          ppppplStack_108 = (long *****)pppppplVar11;
          FUN_100136360(&ppppplStack_108,pppppplVar11[3]);
          goto code_r0x000107c60e14;
        }
        lVar4 = lVar4 + -0x20;
      } while ((long)param_2 + (0x20 - (long)pppppplVar15) != lVar4);
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      pppppplVar2 = (long ******)*param_2;
      func_0x000107c60e14(pppppplVar2);
    }
    *param_2 = ppppplVar19;
    param_2[1] = ppppplVar20;
    pppppplVar11 = (long ******)param_2[3];
    param_2[2] = ppppplVar12;
    param_2[3] = ppppplVar10;
    if (pppppplVar11 == (long ******)0x0) {
      return pppppplVar2;
    }
    ppppplStack_108 = (long *****)pppppplVar11;
    FUN_100136360(&ppppplStack_108,pppppplVar11[3]);
    goto code_r0x000107c60e14;
  }
  pppppplVar17 = (long ******)*pppppplVar2;
  uVar13 = ((long)pppppplVar3 - (long)pppppplVar17 >> 5) + 1;
  if (uVar13 >> 0x3b == 0) {
    uVar9 = (long)pppppplVar2[2] - (long)pppppplVar17;
    uVar14 = (long)uVar9 >> 4;
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar14 = 0x7ffffffffffffff;
    }
    pppppplVar3 = param_2;
    if (uVar14 == 0) {
      pppppplVar11 = (long ******)0x0;
      puVar6 = (undefined8 *)((long)param_2 - (long)pppppplVar17);
      pppppplVar15 = (long ******)0x0;
      pppppplVar7 = (long ******)0x0;
      puVar16 = (undefined8 *)0x0;
      if (puVar6 == (undefined8 *)0x0) {
LAB_100138e50:
        if ((long)pppppplVar7 < 1) {
          uVar13 = (long)pppppplVar7 >> 4;
          if (param_2 == pppppplVar17) {
            uVar13 = 1;
          }
          if (uVar13 >> 0x3b != 0) goto LAB_100138f60;
          lVar4 = uVar13 * 0x20;
          func_0x000107c60e20();
          puVar6 = (undefined8 *)(lVar4 + (uVar13 >> 2) * 0x20);
          pppppplVar15 = (long ******)(lVar4 + uVar13 * 0x20);
          if (pppppplVar11 != (long ******)0x0) goto code_r0x000107c60e14;
        }
        else {
          puVar6 = (undefined8 *)
                   ((long)puVar16 - (((ulong)pppppplVar7 >> 1) + 0x10 & 0xffffffffffffffe0));
        }
      }
    }
    else {
      pppppplVar11 = pppppplVar2;
      if (uVar14 >> 0x3b != 0) goto LAB_100138f60;
      pppppplVar11 = (long ******)(uVar14 * 0x20);
      func_0x000107c60e20();
      pppppplVar7 = (long ******)((long)param_2 - (long)pppppplVar17);
      puVar6 = (undefined8 *)((long)pppppplVar11 + (long)pppppplVar7);
      pppppplVar15 = pppppplVar11 + uVar14 * 4;
      puVar16 = puVar6;
      if (pppppplVar7 == (long ******)(uVar14 * 0x20)) goto LAB_100138e50;
    }
    ppppplVar5 = *param_3;
    ppppplVar10 = *param_4;
    pppplVar21 = ppppplVar5[1];
    pppplVar8 = *ppppplVar5;
    puVar6[2] = ppppplVar5[2];
    puVar6[1] = pppplVar21;
    *puVar6 = pppplVar8;
    ppppplVar5[1] = (long ****)0x0;
    ppppplVar5[2] = (long ****)0x0;
    *ppppplVar5 = (long ****)0x0;
    pppplVar8 = *ppppplVar10;
    *ppppplVar10 = (long ****)0x0;
    puVar6[3] = pppplVar8;
    func_0x000107c610b4(puVar6 + 4,param_2,(long)pppppplVar2[1] - (long)param_2);
    ppppplVar5 = pppppplVar2[1];
    pppppplVar2[1] = (long *****)param_2;
    ppppplVar10 = (long *****)((long)puVar6 - ((long)param_2 - (long)*pppppplVar2));
    func_0x000107c610b4(ppppplVar10);
    pppppplVar11 = (long ******)*pppppplVar2;
    *pppppplVar2 = ppppplVar10;
    pppppplVar2[1] = (long *****)((long)(puVar6 + 4) + ((long)ppppplVar5 - (long)param_2));
    pppppplVar2[2] = (long *****)pppppplVar15;
    if (pppppplVar11 == (long ******)0x0) {
      return (long ******)0x0;
    }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(pppppplVar11);
    return pppppplVar11;
  }
  func_0x000107c2cf74();
  pppppplVar11 = pppppplVar2;
  pppppplVar3 = param_2;
LAB_100138f60:
  func_0x000107c35c58();
  pppppplVar11[3] = (long *****)0xffffffffffffffff;
  ppppplVar5 = pppppplVar3[3];
  if ((long)ppppplVar5 < 4) {
    if (ppppplVar5 == (long *****)0x1) {
      *(undefined1 *)pppppplVar11 = *(undefined1 *)pppppplVar3;
      pppppplVar11[3] = pppppplVar3[3];
      return pppppplVar11;
    }
    if (ppppplVar5 == (long *****)0x2) {
      *(undefined4 *)pppppplVar11 = *(undefined4 *)pppppplVar3;
      pppppplVar11[3] = pppppplVar3[3];
      return pppppplVar11;
    }
    if (ppppplVar5 == (long *****)0x3) {
      *pppppplVar11 = *pppppplVar3;
      pppppplVar11[3] = pppppplVar3[3];
      return pppppplVar11;
    }
  }
  else if ((long)ppppplVar5 < 6) {
    if (ppppplVar5 == (long *****)0x4) {
      ppppplVar10 = pppppplVar3[1];
      ppppplVar5 = *pppppplVar3;
      pppppplVar11[2] = pppppplVar3[2];
      pppppplVar11[1] = ppppplVar10;
      *pppppplVar11 = ppppplVar5;
      pppppplVar3[1] = (long *****)0x0;
      pppppplVar3[2] = (long *****)0x0;
      *pppppplVar3 = (long *****)0x0;
      pppppplVar11[3] = pppppplVar3[3];
      return pppppplVar11;
    }
    if (ppppplVar5 == (long *****)0x5) {
LAB_100138fd8:
      *pppppplVar11 = (long *****)0x0;
      pppppplVar11[1] = (long *****)0x0;
      pppppplVar11[2] = (long *****)0x0;
      *pppppplVar11 = *pppppplVar3;
      pppppplVar11[1] = pppppplVar3[1];
      pppppplVar11[2] = pppppplVar3[2];
      *pppppplVar3 = (long *****)0x0;
      pppppplVar3[1] = (long *****)0x0;
      pppppplVar3[2] = (long *****)0x0;
      pppppplVar11[3] = pppppplVar3[3];
      return pppppplVar11;
    }
  }
  else if ((ppppplVar5 == (long *****)0x6) || (ppppplVar5 == (long *****)0x7)) goto LAB_100138fd8;
  pppppplVar11[3] = pppppplVar3[3];
  return pppppplVar11;
}



/* Entry: 10013b614; end: 10013b99b;  */

/* WARNING: Removing unreachable block (ram,0x00010013b928) */

long * FUN_10013b614(long *param_1,int param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined4 uStack_b4;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  bVar3 = *(byte *)((long)param_1 + 0xc);
  if (bVar3 == 1) {
    if ((bRam0000000113370178 & 0x19) != 0) {
      uVar5 = 0x58;
      func_0x000107c2ca88(0x58,0x113370178,&UNK_10f7446b1,0,0,0x880,param_1);
      if (bRam0000000113370178 != 0) {
        func_0x000107c2d058(0x113370178,&UNK_10f7446b1,uVar5);
      }
    }
    goto LAB_10013b978;
  }
  lVar17 = *param_1;
  plVar10 = *(long **)(lVar17 + 0x10);
  if (plVar10 < *(long **)(lVar17 + 0x18)) {
    plVar18 = plVar10 + 1;
    *plVar10 = (long)param_1;
  }
  else {
    lVar13 = (long)plVar10 - *(long *)(lVar17 + 8);
    uVar11 = (lVar13 >> 3) + 1;
    if (uVar11 >> 0x3d != 0) {
      func_0x000107c2cc18();
LAB_10013b998:
      func_0x000107c35c58();
      uVar11 = 0x7fffffffffffffff;
      if (param_3 != (long *)0x7fffffffffffffff) {
        plVar10 = (long *)param_1[0x28];
        (**(code **)(*plVar10 + 0x10))();
        if ((long)param_3 + 0x8000000000000001U < 2) {
          if (plVar10 != param_3 &&
              (plVar10 == (long *)0x7fffffffffffffff || plVar10 == (long *)0x8000000000000000)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0,0x10013bb7c);
            (*pcVar4)();
          }
          uVar11 = 0x8000000000000000;
        }
        else {
          uVar11 = (long)plVar10 + (long)param_3 >> 0x3f ^ 0x8000000000000000;
          if (!SCARRY8((long)plVar10,(long)param_3)) {
            uVar11 = (long)plVar10 + (long)param_3;
          }
        }
      }
      lVar17 = param_1[0x17];
      param_1[0x17] = uVar11;
      uStack_b4 = 1;
      puVar1 = (undefined4 *)param_1[0x14];
      if (puVar1 < (undefined4 *)param_1[0x15]) {
        *puVar1 = 1;
        if ((bRam000000011336f9a8 & 0x19) == 0) {
          param_1[0x14] = (long)(puVar1 + 1);
          *(undefined1 *)(param_1 + 0x11) = 0;
        }
        else {
          func_0x000107c2ca88(0x42,0x11336f9a8,&UNK_10f744e4b,0,0,0,0);
          param_1[0x14] = (long)(puVar1 + 1);
          *(undefined1 *)(param_1 + 0x11) = 0;
        }
      }
      else {
        plVar10 = param_1 + 0x13;
        func_0x00010013bb84(plVar10,&uStack_b4);
        param_1[0x14] = (long)plVar10;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      if ((param_2 == 0) || ((*(byte *)(param_1 + 0x18) & 1) != 0)) {
        plVar10 = (long *)param_1[0x26];
        (**(code **)(*plVar10 + 0x10))(plVar10,param_1 + -1);
        piVar16 = (int *)(param_1[0x14] + -4);
        iVar2 = *piVar16;
        *piVar16 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        plVar10 = (long *)param_1[0x26];
        (**(code **)(*plVar10 + 0x10))(plVar10,param_1 + -1);
        *(undefined1 *)(param_1 + 0x18) = 0;
        piVar16 = (int *)(param_1[0x14] + -4);
        iVar2 = *piVar16;
        *piVar16 = 0;
      }
      if ((iVar2 != 0) && ((bRam000000011336f9a8 & 0x19) != 0)) {
        plVar10 = (long *)0x45;
        func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f744e4b,0,0,0,0);
      }
      param_1[0x14] = (long)piVar16;
      *(undefined1 *)(param_1 + 0x11) = 0;
      param_1[0x17] = lVar17;
      return plVar10;
    }
    uVar7 = (long)*(long **)(lVar17 + 0x18) - *(long *)(lVar17 + 8);
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      if (uVar9 >> 0x3d != 0) goto LAB_10013b998;
      lVar6 = uVar9 << 3;
      func_0x000107c60e20();
    }
    plVar10 = (long *)(lVar6 + lVar13);
    plVar18 = plVar10 + 1;
    *plVar10 = (long)param_1;
    lVar14 = (long)plVar10 - (*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8));
    func_0x000107c610b4(lVar14);
    lVar13 = *(long *)(lVar17 + 8);
    *(long *)(lVar17 + 8) = lVar14;
    *(long **)(lVar17 + 0x10) = plVar18;
    *(ulong *)(lVar17 + 0x18) = lVar6 + uVar9 * 8;
    if (lVar13 != 0) {
      func_0x000107c60e14();
    }
  }
  *(long **)(lVar17 + 0x10) = plVar18;
  if (8 < (ulong)((long)plVar18 - *(long *)(lVar17 + 8))) {
    lVar17 = *param_1;
    plVar10 = (long *)(lVar17 + 0x20);
    if (*plVar10 != *(long *)(lVar17 + 0x28)) {
      plStack_60 = (long *)(lVar17 + 0x38);
      lStack_68 = *plStack_60;
      *(long **)(lStack_68 + 8) = &lStack_68;
      *plStack_60 = (long)&lStack_68;
      uStack_50 = 0;
      if (*(int *)(lVar17 + 0x50) == 0) {
        uStack_48 = 0xffffffffffffffff;
      }
      else {
        uStack_48 = *(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20) >> 3;
      }
      uVar11 = *(long *)(lVar17 + 0x28) - *plVar10 >> 3;
      if (uStack_48 <= uVar11) {
        uVar11 = uStack_48;
      }
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          uVar9 = uStack_50;
          if (*(long *)(*plVar10 + uStack_50 * 8) != 0) break;
          uStack_50 = uStack_50 + 1;
          uVar9 = uVar11;
        } while (uVar11 != uStack_50);
      }
      plStack_58 = plVar10;
      if (plVar10 != (long *)0x0) {
        plVar18 = (long *)(lVar17 + 0x28);
        plVar12 = (long *)*plVar18;
        plVar10 = (long *)*plVar10;
        uVar11 = (long)plVar12 - (long)plVar10 >> 3;
        if (uStack_48 <= uVar11) {
          uVar11 = uStack_48;
        }
        if (uVar9 == uVar11) {
          if (*(long *)(lVar17 + 0x40) == *(long *)(lVar17 + 0x38)) {
LAB_10013b8b8:
            if (plVar10 == plVar12) {
LAB_10013b910:
              if (plVar10 != plVar12) {
                *plVar18 = (long)plVar10;
              }
            }
            else {
              do {
                if (*plVar10 == 0) {
                  if ((plVar10 != plVar12) &&
                     (plVar8 = plVar10 + 1, plVar15 = plVar10, plVar8 != plVar12)) {
                    do {
                      plVar10 = plVar15;
                      if (*plVar8 != 0) {
                        plVar10 = plVar15 + 1;
                        *plVar15 = *plVar8;
                      }
                      plVar8 = plVar8 + 1;
                      plVar15 = plVar10;
                    } while (plVar8 != plVar12);
                    plVar12 = (long *)*plVar18;
                  }
                  goto LAB_10013b910;
                }
                plVar10 = plVar10 + 1;
              } while (plVar10 != plVar12);
            }
          }
        }
        else {
          do {
            (*(code *)**(undefined8 **)plVar10[uVar9])();
            if (plStack_58 == (long *)0x0) goto LAB_10013b954;
            uStack_50 = uStack_50 + 1;
            uVar11 = plStack_58[1] - *plStack_58 >> 3;
            if (uStack_48 <= uVar11) {
              uVar11 = uStack_48;
            }
            uVar9 = uStack_50;
            if (uStack_50 < uVar11) {
              do {
                uVar9 = uStack_50;
                if (*(long *)(*plStack_58 + uStack_50 * 8) != 0) break;
                uStack_50 = uStack_50 + 1;
                uVar9 = uVar11;
              } while (uVar11 != uStack_50);
            }
            plVar10 = (long *)*plStack_58;
            plVar12 = (long *)plStack_58[1];
            uVar11 = (long)plVar12 - (long)plVar10 >> 3;
            if (uStack_48 <= uVar11) {
              uVar11 = uStack_48;
            }
          } while (uVar9 != uVar11);
          plVar18 = plStack_58 + 1;
          if (plStack_58[4] == plStack_58[3]) goto LAB_10013b8b8;
        }
        if (plStack_58 != (long *)0x0) {
          plStack_58 = (long *)0x0;
          *(long **)(lStack_68 + 8) = plStack_60;
          *plStack_60 = lStack_68;
        }
      }
    }
LAB_10013b954:
    if ((int)param_1[1] == 1) {
      (**(code **)(*(long *)*param_1 + 0x20))();
    }
  }
  *(undefined1 *)((long)param_1 + 0xd) = 1;
LAB_10013b978:
  return (long *)(ulong)(bVar3 ^ 1);
}



/* Entry: 10013b99c; end: 10013bde7;  */

void FUN_10013b99c(long param_1,int param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uStack_44;
  
  uVar6 = 0x7fffffffffffffff;
  if (param_3 != (long *)0x7fffffffffffffff) {
    plVar4 = *(long **)(param_1 + 0x140);
    (**(code **)(*plVar4 + 0x10))();
    if ((long)param_3 + 0x8000000000000001U < 2) {
      if (plVar4 != param_3 &&
          (plVar4 == (long *)0x7fffffffffffffff || plVar4 == (long *)0x8000000000000000)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0,0x10013bb7c);
        (*pcVar3)();
      }
      uVar6 = 0x8000000000000000;
    }
    else {
      uVar6 = (long)plVar4 + (long)param_3 >> 0x3f ^ 0x8000000000000000;
      if (!SCARRY8((long)plVar4,(long)param_3)) {
        uVar6 = (long)plVar4 + (long)param_3;
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  *(ulong *)(param_1 + 0xb8) = uVar6;
  uStack_44 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  if (puVar1 < *(undefined4 **)(param_1 + 0xa8)) {
    *puVar1 = 1;
    if ((bRam000000011336f9a8 & 0x19) == 0) {
      *(undefined4 **)(param_1 + 0xa0) = puVar1 + 1;
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
    else {
      func_0x000107c2ca88(0x42,0x11336f9a8,&UNK_10f744e4b,0,0,0,0);
      *(undefined4 **)(param_1 + 0xa0) = puVar1 + 1;
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
  }
  else {
    lVar5 = param_1 + 0x98;
    func_0x00010013bb84(lVar5,&uStack_44);
    *(long *)(param_1 + 0xa0) = lVar5;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x10))(*(long **)(param_1 + 0x130),param_1 + -8);
    piVar7 = (int *)(*(long *)(param_1 + 0xa0) + -4);
    iVar2 = *piVar7;
    *piVar7 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    (**(code **)(**(long **)(param_1 + 0x130) + 0x10))(*(long **)(param_1 + 0x130),param_1 + -8);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    piVar7 = (int *)(*(long *)(param_1 + 0xa0) + -4);
    iVar2 = *piVar7;
    *piVar7 = 0;
  }
  if ((iVar2 != 0) && ((bRam000000011336f9a8 & 0x19) != 0)) {
    func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f744e4b,0,0,0,0);
  }
  *(int **)(param_1 + 0xa0) = piVar7;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  return;
}



/* Entry: 10013bde8; end: 10013bed7;  */

void FUN_10013bde8(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  
  uVar2 = *(undefined1 *)((long)param_1 + 0x84);
  *(undefined1 *)((long)param_1 + 0x84) = 1;
  uVar1 = *(undefined4 *)((long)param_1 + 0x7c);
  *(int *)((long)param_1 + 0x7c) = (int)param_1[0xf] + 1;
  lVar3 = param_1[0xd];
  param_1[0xd] = param_2;
  if (param_2 != 0) {
    if (*(char *)((long)param_1 + 0x85) == '\x01') {
      func_0x000107c60824(param_1[7]);
      *(undefined1 *)((long)param_1 + 0x85) = 0;
    }
    if (*(char *)((long)param_1 + 0x86) == '\x01') {
      func_0x000107c60824(param_1[8]);
      *(undefined1 *)((long)param_1 + 0x86) = 0;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    if (*(char *)((long)param_1 + 0x85) == '\x01') {
      func_0x000107c60824(param_1[7]);
      *(undefined1 *)((long)param_1 + 0x85) = 0;
    }
    if (*(char *)((long)param_1 + 0x86) == '\x01') {
      func_0x000107c60824(param_1[8]);
      *(undefined1 *)((long)param_1 + 0x86) = 0;
    }
  }
  *(undefined4 *)((long)param_1 + 0x7c) = uVar1;
  *(undefined1 *)((long)param_1 + 0x84) = uVar2;
  return;
}



/* Entry: 10013bed8; end: 10013beff;  */

void FUN_10013bed8(long param_1)

{
  func_0x000107c60824(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdba760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_11034a820)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10013bf00; end: 10013bf77;  */

void FUN_10013bf00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x84) == '\x01') {
    uVar3 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
    do {
      puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c40fe4(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c421a4(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c50988(puVar1,param_2,uVar3,puVar2);
    } while ((*(byte *)(param_1 + 0x84) & 1) != 0);
  }
  return;
}



/* Entry: 10013bf78; end: 10013c32f;  */

ulong FUN_10013bf78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(1000),8) == param_1 * 1000 >> 0x3f) {
    uVar2 = param_1 * 1000;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(uVar2,0x295e9648864000)) {
    uVar1 = uVar2 + 0x295e9648864000;
  }
  if (1 < uVar2 + 0x8000000000000001) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10013c330; end: 10013c407;  */

void FUN_10013c330(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 == 0x80) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    uStack_48 = 0x10013eca0;
    puStack_40 = &UNK_110848088;
    lStack_38 = param_3;
    FUN_10013c41c(&puStack_58);
    *(int *)(param_3 + 0x78) = *(int *)(param_3 + 0x78) + -1;
  }
  else if (param_2 == 1) {
    iVar2 = *(int *)(param_3 + 0x78);
    iVar1 = iVar2 + 1;
    *(int *)(param_3 + 0x78) = iVar1;
    if (*(int *)(param_3 + 0x80) <= iVar2) {
      *(int *)(param_3 + 0x80) = iVar1;
    }
  }
  puStack_88 = puVar3;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_10013c408;
  puStack_70 = &UNK_11096b7c8;
  lStack_68 = param_3;
  lStack_60 = param_2;
  FUN_10013c41c(&puStack_88);
  return;
}



/* Entry: 10013c408; end: 10013c41b;  */

void FUN_10013c408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010013c418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10013c41c; end: 10013c43b;  */

void FUN_10013c41c(long param_1)

{
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10013c43c; end: 10013c463;  */

void FUN_10013c43c(void)

{
  return;
}



/* Entry: 10013c464; end: 10013c4b3;  */

void FUN_10013c464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x10013c440;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_3;
  FUN_10013c41c(&puStack_38);
  return;
}



/* Entry: 10013c4b4; end: 10013c6fb;  */

void FUN_10013c4b4(void)

{
  return;
}



/* Entry: 10013c6fc; end: 10013c74b;  */

void FUN_10013c6fc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10013c74c;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  FUN_10013c41c(&puStack_38);
  return;
}



/* Entry: 10013c74c; end: 10013c84f;  */

void FUN_10013c74c(long *param_1)

{
  long *unaff_x19;
  long *plVar1;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)param_1[4];
  if (plVar1[0xd] == 0) {
    *(undefined1 *)((long)plVar1 + 0x85) = 1;
  }
  else if (*(char *)((long)plVar1 + 0x84) == '\x01') {
    unaff_x19 = plVar1;
    (**(code **)(*plVar1 + 0x58))(plVar1);
    lStack_38 = -0x5555555555555556;
    uStack_30 = 0xaaaaaaaaaaaaaaaa;
    lStack_40 = -0x5555555555555556;
    (**(code **)(*(long *)plVar1[0xd] + 0x10))(&lStack_40);
    if (lStack_40 != 0x7fffffffffffffff) {
      if (lStack_40 == 0) {
        func_0x000107c60824(plVar1[7]);
      }
      else {
        FUN_10014f708(plVar1,lStack_40 - lStack_38);
      }
    }
    param_1 = unaff_x19;
    func_0x000107c422b4(unaff_x19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    goto LAB_10013c838;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
LAB_10013c838:
  func_0x000107c60e78();
  func_0x000107c422b4(unaff_x19);
  func_0x000107c60bd8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_init_11034d1b8)(PTR__OBJC_CLASS___NSAutoreleasePool_1126ddfd8);
  return;
}



/* Entry: 10013c850; end: 10013c85b;  */

void FUN_10013c850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_init_11034d1b8)(PTR__OBJC_CLASS___NSAutoreleasePool_1126ddfd8);
  return;
}



/* Entry: 10013c85c; end: 10013ce93;  */

void FUN_10013c85c(long *param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *puVar14;
  int iVar15;
  char *pcVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined *puVar19;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  int *piStack_68;
  
  puVar14 = (undefined *)0xaaaaaaaaaaaaaaaa;
  param_1[1] = 0;
  param_1[2] = -0x5555555555555556;
  puVar1 = (uint *)(param_2 + 0x23);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar1 = 5;
  plStack_90 = (long *)param_2[0x29];
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  plStack_a8 = (long *)0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  bVar9 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcVar16 = (char *)0x0;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    if ((char)param_2[0x19] != '\x01') goto LAB_10013cb38;
LAB_10013c914:
    puVar12 = (undefined8 *)((ulong)&uStack_b0 | 8);
    if (0 < *(int *)((long)param_2 + 0x94)) {
      iVar15 = 0;
      while( true ) {
        (**(code **)(*param_2 + 0x28))(param_2);
        uStack_70 = 0xaaaaaaaaaaaaaaaa;
        piStack_68 = (int *)0xaaaaaaaaaaaaaaaa;
        uStack_78 = 0xaaaaaaaaaaaaaaaa;
        (**(code **)(*(long *)param_2[0xf] + 0x10))
                  (&uStack_78,(long *)param_2[0xf],(char)param_2[0x26]);
        if ((char)uStack_78 != '\x01') break;
        lVar10 = param_2[0x19];
        *(undefined1 *)(param_2 + 0x19) = 0;
        bVar8 = bRam0000000113370408 & 0x19;
        if ((bRam0000000113370408 & 0x19) == 0) {
          pcVar18 = (char *)0x0;
          puVar19 = (undefined *)0xaaaaaaaaaaaaaaaa;
          uVar17 = 0xaaaaaaaaaaaaaaaa;
        }
        else {
          uVar17 = 0x58;
          pcVar18 = (char *)0x113370408;
          puVar19 = &UNK_10f744ea2;
          func_0x000107c2ca88(0x58,0x113370408,&UNK_10f744ea2,0,0,0,0);
          if ((uStack_78 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10013cd84);
            (*pcVar11)();
          }
        }
        FUN_100142e40(param_2 + 0x28,uStack_70);
        (**(code **)(*(long *)param_2[0xf] + 0x18))();
        bVar5 = *(byte *)(param_2 + 0x12);
        if ((bVar8 != 0) && (*pcVar18 != '\0')) {
          func_0x000107c2d058(pcVar18,puVar19,uVar17);
        }
        *(char *)(param_2 + 0x19) = (char)lVar10;
        if (((char)uStack_78 == '\x01') && (piStack_68 != (int *)0x0)) {
          do {
            iVar3 = *piStack_68;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
            if (bVar7) {
              *piStack_68 = iVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar3 + -1 == 0) {
            (**(code **)(piStack_68 + 4))();
          }
        }
        (**(code **)(*param_2 + 0x30))(param_2);
        if (((bVar5 & 1) != 0) || (iVar15 = iVar15 + 1, *(int *)((long)param_2 + 0x94) <= iVar15))
        goto LAB_10013ca84;
      }
      (**(code **)(*param_2 + 0x30))(param_2);
    }
LAB_10013ca84:
    if ((char)param_2[0x12] == '\x01') {
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x23) = 5;
      lVar10 = param_2[0x26];
      (**(code **)(*(long *)param_2[0xf] + 0x20))((long *)param_2[0xf],&plStack_90);
      (**(code **)(*(long *)param_2[0xf] + 0x28))
                (&uStack_b0,(long *)param_2[0xf],&plStack_90,(char)lVar10);
    }
  }
  else {
    pcVar16 = (char *)0x113370618;
    puVar14 = &UNK_10f744e85;
    uStack_b8 = 0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744e85,0,0,0,0);
    if ((char)param_2[0x19] == '\x01') goto LAB_10013c914;
LAB_10013cb38:
    bVar8 = bRam000000011336f9a8;
    puVar12 = (undefined8 *)((ulong)&uStack_b0 | 8);
    if ((bRam000000011336f9a8 & 0x19) == 0) {
      pcVar18 = (char *)0x0;
      puVar19 = (undefined *)0xaaaaaaaaaaaaaaaa;
      uVar17 = 0xaaaaaaaaaaaaaaaa;
      plVar13 = (long *)param_2[0x18];
      if (plVar13 != (long *)0x7fffffffffffffff) goto LAB_10013cbd4;
LAB_10013cb68:
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    }
    else {
      pcVar18 = (char *)0x11336f9a8;
      puVar19 = &UNK_10f744eaa;
      uVar17 = 0x58;
      func_0x000107c2ca88(0x58,0x11336f9a8,&UNK_10f744eaa,0,0,0,0);
      plVar13 = (long *)param_2[0x18];
      if (plVar13 == (long *)0x7fffffffffffffff) goto LAB_10013cb68;
LAB_10013cbd4:
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
      plStack_a8 = plVar13;
    }
    if (((bVar8 & 0x19) != 0) && (*pcVar18 != '\0')) {
      func_0x000107c2d058(pcVar18,puVar19,uVar17);
    }
  }
  if ((bVar9 != 0) && (*pcVar16 != '\0')) {
    func_0x000107c2d058(pcVar16,puVar14,uStack_b8);
  }
  if (param_2[0x13] != 0) {
    if ((char)uStack_88 == '\x01') {
      if ((long)plStack_80 < param_2[0x13]) {
LAB_10013cc68:
        *(undefined1 *)(param_1 + 2) = 1;
      }
    }
    else {
      plVar13 = plStack_90;
      (**(code **)(*plStack_90 + 0x10))();
      if ((uStack_88 & 1) == 0) {
        uStack_88 = CONCAT71(uStack_88._1_7_,1);
      }
      plStack_80 = plVar13;
      if ((long)plVar13 < param_2[0x13]) goto LAB_10013cc68;
    }
  }
  plVar13 = plStack_a8;
  if (((uStack_b0 & 1) != 0) && (plStack_a8 == (long *)0x0)) {
    *puVar1 = 6;
    return;
  }
  do {
    uVar4 = *puVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = uVar4 & 0xfffffffe;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((uVar4 >> 1 & 1) != 0) {
    return;
  }
  if ((uStack_b0 & 1) == 0) {
    param_2[0x17] = 0x7fffffffffffffff;
    *param_1 = 0x7fffffffffffffff;
    return;
  }
  param_2[0x17] = (long)plStack_a8;
  if (param_2[0x18] < (long)plStack_a8) {
    param_2[0x17] = param_2[0x18];
    if ((char)uStack_88 == '\0') {
      (**(code **)(*plStack_90 + 0x10))();
      plStack_80 = plStack_90;
      if ((long)plStack_90 < param_2[0x18]) goto LAB_10013cd20;
    }
    else if ((long)plStack_80 < param_2[0x18]) {
LAB_10013cd20:
      plVar13 = (long *)param_2[0x17];
      goto LAB_10013cd3c;
    }
    *param_1 = 0x7fffffffffffffff;
  }
  else {
    if ((char)uStack_88 == '\0') {
      (**(code **)(*plStack_90 + 0x10))();
      plStack_80 = plStack_90;
    }
LAB_10013cd3c:
    plVar2 = (long *)0x7fffffffffffffff;
    if (!SCARRY8((long)plStack_80,86400000000)) {
      plVar2 = plStack_80 + 10800000000;
    }
    if ((long)plVar13 <= (long)plVar2) {
      plVar2 = plVar13;
    }
    *param_1 = (long)plVar2;
    param_1[1] = (long)plStack_80;
  }
  return;
}



/* Entry: 10013ce94; end: 10013ceb3;  */

/* WARNING: Possible PIC construction at 0x00010013e3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010013e130) */
/* WARNING: Removing unreachable block (ram,0x00010013e13c) */
/* WARNING: Removing unreachable block (ram,0x00010013e260) */
/* WARNING: Removing unreachable block (ram,0x00010013e274) */
/* WARNING: Removing unreachable block (ram,0x00010013e3a8) */
/* WARNING: Removing unreachable block (ram,0x00010013e3bc) */
/* WARNING: Removing unreachable block (ram,0x00010013e31c) */
/* WARNING: Removing unreachable block (ram,0x00010013e32c) */
/* WARNING: Removing unreachable block (ram,0x00010013e33c) */
/* WARNING: Removing unreachable block (ram,0x00010013e35c) */
/* WARNING: Removing unreachable block (ram,0x00010013e3f4) */
/* WARNING: Removing unreachable block (ram,0x00010013e400) */
/* WARNING: Removing unreachable block (ram,0x00010013e0d8) */
/* WARNING: Removing unreachable block (ram,0x00010013e088) */
/* WARNING: Removing unreachable block (ram,0x00010013e19c) */

void FUN_10013ce94(char *param_1,long param_2,undefined **param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  undefined2 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long **pplVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  undefined2 *puVar22;
  long **pplVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  ulong uVar26;
  ulong uVar27;
  ulong unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar28;
  long **unaff_x21;
  undefined8 *puVar29;
  long **pplVar30;
  undefined **ppuVar31;
  int *piVar32;
  long **pplVar33;
  undefined1 uVar34;
  undefined4 uVar35;
  undefined **unaff_x22;
  undefined1 uVar36;
  undefined **unaff_x23;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **unaff_x24;
  undefined **ppuVar39;
  undefined **ppuVar40;
  undefined **unaff_x25;
  undefined **ppuVar41;
  long lVar42;
  undefined **ppuVar43;
  undefined **unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar44;
  undefined8 unaff_x30;
  undefined *puVar45;
  undefined *puVar46;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  uint uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  char *pcStack_1a8;
  uint uStack_19c;
  char *pcStack_198;
  long *plStack_190;
  ulong uStack_188;
  long *plStack_180;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  long lStack_78;
  
  uVar11 = param_2 - 8;
  puVar44 = &stack0xfffffffffffffff0;
  puVar9 = auStack_200;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[8] = -0x56;
  param_1[9] = -0x56;
  param_1[10] = -0x56;
  param_1[0xb] = -0x56;
  param_1[0xc] = -0x56;
  param_1[0xd] = -0x56;
  param_1[0xe] = -0x56;
  param_1[0xf] = -0x56;
  param_1[0x10] = -0x56;
  param_1[0x11] = -0x56;
  param_1[0x12] = -0x56;
  param_1[0x13] = -0x56;
  param_1[0x14] = -0x56;
  param_1[0x15] = -0x56;
  param_1[0x16] = -0x56;
  param_1[0x17] = -0x56;
  param_1[0] = -0x56;
  param_1[1] = -0x56;
  param_1[2] = -0x56;
  param_1[3] = -0x56;
  param_1[4] = -0x56;
  param_1[5] = -0x56;
  param_1[6] = -0x56;
  param_1[7] = -0x56;
  uVar19 = uVar11;
  func_0x00010013ce9c();
  if ((uVar19 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e420);
    (*pcVar8)();
  }
  uStack_19c = bRam0000000113370618 & 0x19;
  ppuVar41 = unaff_x25;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcStack_198 = (char *)0x0;
    uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
    puStack_1b0 = (undefined *)0xaaaaaaaaaaaaaaaa;
    puVar29 = *(undefined8 **)(param_2 + 0x60);
  }
  else {
    uVar13 = 0x58;
    pcStack_198 = (char *)0x113370618;
    puStack_1b0 = &UNK_10f7447aa;
    func_0x000107c2ca88();
    puVar29 = *(undefined8 **)(param_2 + 0x60);
    uStack_1b8 = uVar13;
  }
  for (; puVar29 != (undefined8 *)0x0; puVar29 = (undefined8 *)puVar29[0x43]) {
    do {
      ppuVar39 = (undefined **)*puVar29;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar29,0x10);
      if (bVar10) {
        *puVar29 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar39 != (undefined **)0x0) {
      do {
        uVar19 = ((ulong)ppuVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)ppuVar39 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20);
        ppuVar41 = (undefined **)(1L << (uVar19 & 0x3f));
        (**(code **)(puVar29[uVar19 + 2] + 8))();
        bVar10 = ppuVar41 != ppuVar39;
        ppuVar39 = (undefined **)((ulong)ppuVar41 ^ (ulong)ppuVar39);
      } while (bVar10);
    }
  }
  pplVar30 = (long **)0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0;
  plStack_190 = *(long **)(param_2 + 0x448);
  plStack_180 = (long *)0x0;
  ppuVar28 = &PTR_DAT_113370000;
  bVar6 = bRam0000000113370618 & 0x19;
  ppuVar39 = (undefined **)(ulong)(bRam0000000113370618 & 0x19);
  if ((bRam0000000113370618 & 0x19) != 0) {
    ppuVar37 = (undefined **)0x113370618;
    ppuVar40 = (undefined **)&UNK_10f744769;
    uVar13 = 0x58;
    pplVar17 = (long **)0x113370618;
    puVar16 = &UNK_10f744769;
    unaff_x30 = 0x10013e0d8;
    goto code_r0x000107c2ca88;
  }
  plVar12 = (long *)(param_2 + 0x20);
  do {
    lVar42 = *plVar12;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar10) {
      *plVar12 = lVar42 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_10013e458(*(undefined8 *)(param_2 + 0x348),&plStack_190,lVar42);
  FUN_10013e458(*(undefined8 *)(param_2 + 0x350),&plStack_190,lVar42);
  if ((bVar6 != 0) && (cRam0000000000000000 != '\0')) {
    func_0x000107c2d058(0,0xaaaaaaaaaaaaaaaa,0xaaaaaaaaaaaaaaaa);
  }
  if (((char)uStack_188 == '\x01') && (*(long *)(param_2 + 0x360) <= (long)plStack_180)) {
    *(undefined1 *)(param_2 + 0x358) = 1;
  }
  ppuVar37 = &PTR_DAT_113370000;
  ppuVar40 = (undefined **)0x19;
  ppuVar41 = (undefined **)0xa0;
  while( true ) {
    do {
      plVar12 = (long *)(param_2 + 0x110);
      func_0x00010013e6d4(plVar12,param_3);
      if ((bRam0000000113370628 & 0x19) != 0) {
        func_0x000107c2cce4(&plStack_150,uVar11,plVar12);
        func_0x000107c2cce0(uVar11,&plStack_150);
        if (plStack_150 != (long *)0x0) {
          (**(code **)(*plStack_150 + 8))();
        }
      }
      if (plVar12 == (long *)0x0) goto LAB_10013e0f8;
      plVar20 = plVar12;
      func_0x000100141dd4();
    } while (((ulong)plVar20 & 1) != 0);
    lVar42 = 0;
    if (plVar12[2] != 0) {
      plVar20 = (long *)*plVar12;
      lVar42 = 0;
      if (plVar20[1] + 1 != *plVar20) {
        lVar42 = plVar20[1] + 1;
      }
      lVar42 = plVar20[3] + lVar42 * 0xa0;
    }
    if ((*(char *)(lVar42 + 0x6d) != '\0') || (*(int *)(param_2 + 0x78) < 1)) break;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    lStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_d8 = 0xaaaaaaaaaa;
    uStack_d3 = 0xaa;
    uStack_d2 = 0xaaaa;
    uStack_e0 = 0xaaaaaaaaaa;
    uStack_db = 0xaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaa;
    uStack_e3 = 0xaaaaaa;
    uStack_f0 = 0xaaaaaaaaaa;
    uStack_eb = 0xaaaaaa;
    uStack_118 = 0xaaaaaaaaaaaaaaaa;
    uStack_120 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    ppuStack_140 = (undefined **)0xaaaaaaaaaaaaaaaa;
    uStack_128 = 0xaaaaaaaaaaaaaaaa;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    puStack_148 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
    plStack_150 = (long *)0xaaaaaaaaaaaaaaaa;
    func_0x00010014243c(&plStack_150,plVar12);
    lStack_b0 = plVar12[6];
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)plVar12[0xe]);
    func_0x000107c2cce8(param_2 + 0x80,&plStack_150);
    func_0x000107c2cd38(&plStack_150);
  }
  if (*(byte *)(*(long *)(plVar12[6] + 0xe0) + 0x38) <= *(byte *)(*(long *)(param_2 + 0x430) + 0x19)
     ) {
    plVar20 = plVar12;
    pcStack_1a8 = param_1;
    func_0x00010014243c(&plStack_150);
    ppuVar41 = (undefined **)plVar12[6];
    if (((ppuVar41[0x33] == (undefined *)0x0) && (ppuVar41[0x34] == (undefined *)0x0)) &&
       ((*(int *)(param_2 + 0x78) != 0 || (*(long *)(param_2 + 0x328) == 0)))) {
      uVar35 = 0;
      ppuVar37 = (undefined **)0x0;
    }
    else {
      if (*(double *)(param_2 + 0x48) <= 0.0) {
        ppuVar37 = (undefined **)0x0;
      }
      else {
        if ((*(byte *)(param_2 + 0xf8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10013e428);
          (*pcVar8)();
        }
        uVar19 = *(ulong *)(param_2 + 0x108);
        uVar21 = *(ulong *)(param_2 + 0x100) ^ *(ulong *)(param_2 + 0x100) << 0x17;
        uVar21 = uVar19 >> 0x1a ^ uVar21 >> 0x11 ^ uVar19 ^ uVar21;
        *(ulong *)(param_2 + 0x100) = uVar19;
        *(ulong *)(param_2 + 0x108) = uVar21;
        ppuVar37 = (undefined **)
                   (ulong)((double)(uVar21 + uVar19 >> 0xb) / 9007199254740992.0 <
                          *(double *)(param_2 + 0x48));
      }
      uVar35 = 1;
    }
    ppuVar28 = *(undefined ***)(param_2 + 0x3c8);
    ppuVar40 = *(undefined ***)(param_2 + 0x3c0);
    ppuVar39 = (undefined **)((long)ppuVar28 - (long)ppuVar40);
    uStack_168 = 0;
    uStack_162 = 0;
    uStack_170 = 0;
    uStack_16a = 0;
    uStack_158 = 0;
    uStack_152 = 0;
    uStack_160 = 0;
    uStack_15a = 0;
    lVar42 = 0;
    if (ppuVar39 != (undefined **)0x0) {
      lVar42 = ((long)ppuVar28 - (long)ppuVar40 >> 3) * 0x12 + -1;
    }
    uVar19 = *(ulong *)(param_2 + 0x3d8);
    if (lVar42 != *(long *)(param_2 + 0x3e0) + uVar19) {
      if (ppuVar28 == ppuVar40) goto LAB_10013d3a8;
      goto LAB_10013d268;
    }
    if (0x11 < uVar19) {
      *(ulong *)(param_2 + 0x3d8) = uVar19 - 0x12;
      puVar16 = *ppuVar40;
      *(undefined ***)(param_2 + 0x3c0) = ppuVar40 + 1;
      goto LAB_10013d24c;
    }
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar35);
    param_3 = *(undefined ***)(param_2 + 0x3d0);
    ppuVar31 = *(undefined ***)(param_2 + 0x3b8);
    if (ppuVar39 < (undefined **)((long)param_3 - (long)ppuVar31)) {
      plVar20 = (long *)0xfc0;
      func_0x000107c60e20();
      uVar35 = (undefined4)uStack_1c0;
      if (param_3 != ppuVar28) {
        *ppuVar28 = (undefined *)plVar20;
        *(long *)(param_2 + 0x3c8) = *(long *)(param_2 + 0x3c8) + 8;
        ppuVar28 = ppuVar41;
        goto LAB_10013d398;
      }
      if (ppuVar40 != ppuVar31) goto LAB_10013df94;
      uVar19 = (long)param_3 - (long)ppuVar40 >> 2;
      if (ppuVar28 == ppuVar40) {
        uVar19 = 1;
      }
      ppuStack_1c8 = ppuVar41;
      if (uVar19 >> 0x3d != 0) goto LAB_10013e3c4;
      uVar21 = uVar19 + 3 >> 2;
      lVar42 = uVar19 * 8;
      func_0x000107c60e20();
      ppuVar41 = ppuStack_1c8;
      ppuVar38 = (undefined **)(lVar42 + uVar21 * 8);
      uVar35 = (undefined4)uStack_1c0;
      ppuVar43 = ppuVar38;
      if ((long)ppuVar28 - (long)ppuVar40 == 0) goto LAB_10013df6c;
      ppuVar43 = (undefined **)((long)ppuVar38 + (long)ppuVar39);
      uVar26 = ((long)ppuVar28 - (long)ppuVar40) - 8;
      ppuVar28 = ppuVar38;
      ppuVar25 = ppuVar40;
      if ((uVar26 < 0x38) || (lVar2 = uVar21 * 8 + lVar42, (ulong)(lVar2 - (long)ppuVar40) < 0x20))
      goto LAB_10013df5c;
      uVar21 = (uVar26 >> 3) + 1;
      uVar27 = uVar21 & 0x3ffffffffffffffc;
      ppuVar28 = ppuVar40 + 2;
      plVar12 = (long *)(lVar2 + 0x10);
      uVar26 = uVar27;
      do {
        puVar16 = ppuVar28[-2];
        puVar46 = ppuVar28[1];
        puVar45 = *ppuVar28;
        plVar12[-1] = (long)ppuVar28[-1];
        plVar12[-2] = (long)puVar16;
        plVar12[1] = (long)puVar46;
        *plVar12 = (long)puVar45;
        ppuVar28 = ppuVar28 + 4;
        plVar12 = plVar12 + 4;
        uVar26 = uVar26 - 4;
      } while (uVar26 != 0);
      ppuVar28 = ppuVar38 + uVar27;
      ppuVar25 = ppuVar40 + uVar27;
      if (uVar21 != uVar27) {
LAB_10013df5c:
        do {
          ppuVar24 = ppuVar28 + 1;
          *ppuVar28 = *ppuVar25;
          ppuVar28 = ppuVar24;
          ppuVar25 = ppuVar25 + 1;
        } while (ppuVar24 != ppuVar43);
      }
LAB_10013df6c:
      *(long *)(param_2 + 0x3b8) = lVar42;
      *(undefined ***)(param_2 + 0x3c0) = ppuVar38;
      *(undefined ***)(param_2 + 0x3c8) = ppuVar43;
      *(ulong *)(param_2 + 0x3d0) = lVar42 + uVar19 * 8;
      bVar10 = ppuVar40 != (undefined **)0x0;
      ppuVar40 = ppuVar38;
      if (bVar10) {
        func_0x000107c60e14(ppuVar31);
        ppuVar40 = *(undefined ***)(param_2 + 0x3c0);
      }
LAB_10013df94:
      ppuVar40[-1] = (undefined *)plVar20;
      lVar42 = *(long *)(param_2 + 0x3c0);
      *(long *)(param_2 + 0x3c0) = lVar42 + -8;
      puVar16 = *(undefined **)(lVar42 + -8);
      *(long *)(param_2 + 0x3c0) = lVar42;
LAB_10013d24c:
      plVar20 = (long *)(param_2 + 0x3b8);
      func_0x000107c2ccf4(plVar20,puVar16);
      ppuVar28 = ppuVar41;
      goto LAB_10013d398;
    }
    ppuStack_1d0 = (undefined **)CONCAT44(ppuStack_1d0._4_4_,(int)ppuVar37);
    uVar19 = (long)param_3 - (long)ppuVar31 >> 2;
    if (param_3 == ppuVar31) {
      uVar19 = 1;
    }
    ppuStack_1c8 = ppuVar41;
    if (uVar19 >> 0x3d != 0) goto LAB_10013e3c4;
    ppuVar37 = (undefined **)(uVar19 * 8);
    param_3 = ppuVar37;
    func_0x000107c60e20();
    ppuVar31 = (undefined **)((long)param_3 + (long)ppuVar39);
    ppuVar41 = param_3 + uVar19;
    puVar16 = (undefined *)0xfc0;
    func_0x000107c60e20();
    if (ppuVar39 == ppuVar37) {
      if ((long)ppuVar39 < 1) {
        uVar19 = (long)ppuVar39 >> 2;
        if (ppuVar28 == ppuVar40) {
          uVar19 = 1;
        }
        uStack_1d8 = puVar16;
        if (uVar19 >> 0x3d != 0) goto LAB_10013e3c4;
        ppuVar37 = (undefined **)(uVar19 * 8);
        ppuVar31 = ppuVar37;
        func_0x000107c60e20();
        ppuVar41 = ppuVar31 + uVar19;
        if (param_3 != (undefined **)0x0) {
          func_0x000107c60e14(param_3);
          ppuVar28 = *(undefined ***)(param_2 + 0x3c8);
          ppuVar40 = *(undefined ***)(param_2 + 0x3c0);
        }
        ppuVar39 = ppuVar31 + 1;
        *ppuVar31 = uStack_1d8;
        param_3 = ppuVar31;
        if (ppuVar28 == ppuVar40) goto LAB_10013d36c;
        goto LAB_10013dc28;
      }
      ppuVar31 = (undefined **)((long)ppuVar31 - (((ulong)ppuVar39 >> 1) + 4 & 0xfffffffffffffff8));
    }
    ppuVar39 = ppuVar31 + 1;
    *ppuVar31 = puVar16;
    if (ppuVar28 == ppuVar40) goto LAB_10013d36c;
    goto LAB_10013dc28;
  }
  if ((bRam0000000113370618 & 0x19) != 0) goto LAB_10013e3c8;
LAB_10013e0f8:
  *param_1 = '\0';
  goto LAB_10013d9e4;
LAB_10013dc28:
  do {
    ppuVar43 = param_3;
    ppuVar38 = ppuVar31;
    if (ppuVar31 == param_3) {
      if (ppuVar39 < ppuVar41) {
        lVar42 = ((long)ppuVar41 - (long)ppuVar39 >> 3) + 1;
        lVar2 = (long)ppuVar39 - (long)ppuVar31;
        lVar5 = (long)ppuVar39 - (long)ppuVar31;
        ppuVar39 = ppuVar39 + ((ulong)(lVar42 - (lVar42 >> 0x3f)) >> 1);
        ppuVar38 = (undefined **)((long)ppuVar39 - lVar2);
        if (lVar5 != 0) {
          func_0x000107c610b8(ppuVar38,ppuVar31,lVar5);
        }
      }
      else {
        uVar19 = (long)ppuVar41 - (long)ppuVar31 >> 2;
        if ((long)ppuVar41 - (long)ppuVar31 == 0) {
          uVar19 = 1;
        }
        if (uVar19 >> 0x3d != 0) goto LAB_10013e3c4;
        uVar21 = uVar19 + 3 >> 2;
        ppuVar43 = (undefined **)(uVar19 * 8);
        func_0x000107c60e20();
        ppuVar38 = ppuVar43 + uVar21;
        lVar42 = (long)ppuVar39 - (long)ppuVar31;
        ppuVar39 = ppuVar38;
        if (lVar42 != 0) {
          ppuVar39 = (undefined **)((long)ppuVar38 + lVar42);
          ppuVar41 = ppuVar38;
          ppuVar37 = ppuVar31;
          if ((0x17 < lVar42 - 8U) &&
             ((undefined *)0x1f < (undefined *)((long)ppuVar43 + (uVar21 * 8 - (long)ppuVar31)))) {
            uVar26 = (lVar42 - 8U >> 3) + 1;
            uVar27 = uVar26 & 0x3ffffffffffffffc;
            ppuVar41 = ppuVar31 + 2;
            ppuVar37 = ppuVar43 + uVar21 + 2;
            uVar21 = uVar27;
            do {
              puVar16 = ppuVar41[-2];
              puVar46 = ppuVar41[1];
              puVar45 = *ppuVar41;
              ppuVar37[-1] = ppuVar41[-1];
              ppuVar37[-2] = puVar16;
              ppuVar37[1] = puVar46;
              *ppuVar37 = puVar45;
              ppuVar41 = ppuVar41 + 4;
              ppuVar37 = ppuVar37 + 4;
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            ppuVar41 = ppuVar38 + uVar27;
            ppuVar37 = ppuVar31 + uVar27;
            if (uVar26 == uVar27) goto LAB_10013dd3c;
          }
          do {
            ppuVar40 = ppuVar41 + 1;
            *ppuVar41 = *ppuVar37;
            ppuVar41 = ppuVar40;
            ppuVar37 = ppuVar37 + 1;
          } while (ppuVar40 != ppuVar39);
        }
LAB_10013dd3c:
        ppuVar41 = ppuVar43 + uVar19;
        ppuVar40 = ppuVar43;
        if (ppuVar31 != (undefined **)0x0) {
          func_0x000107c60e14(param_3);
        }
      }
    }
    ppuVar28 = ppuVar28 + -1;
    ppuVar31 = ppuVar38 + -1;
    *ppuVar31 = *ppuVar28;
    param_3 = ppuVar43;
    ppuVar37 = ppuVar31;
  } while (ppuVar28 != *(undefined ***)(param_2 + 0x3c0));
LAB_10013d36c:
  ppuVar28 = ppuStack_1c8;
  plVar20 = *(long **)(param_2 + 0x3b8);
  *(undefined ***)(param_2 + 0x3b8) = param_3;
  *(undefined ***)(param_2 + 0x3c0) = ppuVar31;
  *(undefined ***)(param_2 + 0x3c8) = ppuVar39;
  *(undefined ***)(param_2 + 0x3d0) = ppuVar41;
  ppuVar37 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffff);
  uVar35 = (undefined4)uStack_1c0;
  if (plVar20 != (long *)0x0) {
    func_0x000107c60e14();
  }
LAB_10013d398:
  ppuVar40 = *(undefined ***)(param_2 + 0x3c0);
  ppuVar41 = ppuVar28;
  if (*(undefined ***)(param_2 + 0x3c8) == ppuVar40) {
LAB_10013d3a8:
    uVar34 = (undefined1)uVar35;
    uVar36 = SUB81(ppuVar37,0);
    puVar29 = (undefined8 *)0x0;
  }
  else {
LAB_10013d268:
    uVar34 = (undefined1)uVar35;
    uVar36 = SUB81(ppuVar37,0);
    uVar19 = *(long *)(param_2 + 0x3e0) + *(long *)(param_2 + 0x3d8);
    puVar29 = (undefined8 *)(ppuVar40[uVar19 / 0x12] + (uVar19 % 0x12) * 0xe0);
  }
  ppuVar28 = &PTR_DAT_113370000;
  uStack_98 = CONCAT62(uStack_168,uStack_16a);
  uStack_a0 = CONCAT62(uStack_170,uStack_172);
  uStack_88 = CONCAT62(uStack_158,uStack_15a);
  uStack_90 = CONCAT62(uStack_160,uStack_162);
  uStack_80 = uStack_152;
  pplVar30 = &plStack_150;
  *puVar29 = plStack_150;
  puVar29[2] = ppuStack_140;
  puVar29[1] = puStack_148;
  puVar29[4] = uStack_130;
  puVar29[3] = uStack_138;
  puVar29[6] = uStack_120;
  puVar29[5] = uStack_128;
  puVar29[8] = uStack_110;
  puVar29[7] = uStack_118;
  *(ulong *)((long)puVar29 + 0x65) = CONCAT53(uStack_e8,uStack_eb);
  puVar29[0xc] = CONCAT35(uStack_eb,uStack_f0);
  puVar29[0xb] = uStack_f8;
  puVar29[10] = uStack_100;
  puVar29[9] = uStack_108;
  *(undefined1 *)((long)puVar29 + 0x7d) = uStack_d3;
  *(ulong *)((long)puVar29 + 0x75) = CONCAT53(uStack_d8,uStack_db);
  *(ulong *)((long)puVar29 + 0x6d) = CONCAT53(uStack_e0,uStack_e3);
  puVar29[0x10] = uStack_d0;
  plStack_150 = (long *)0x0;
  uStack_d0 = 0;
  puVar29[0x11] = uStack_c8;
  puVar29[0x12] = uStack_c0;
  uStack_c0 = 0;
  puVar29[0x13] = uStack_b8;
  puVar29[0x14] = ppuVar41;
  puVar29[0x15] = *ppuVar41;
  *(undefined4 *)(puVar29 + 0x16) = 0;
  *(undefined1 *)((long)puVar29 + 0xb4) = uVar34;
  *(undefined1 *)((long)puVar29 + 0xb5) = uVar36;
  *(undefined8 *)((long)puVar29 + 0xbe) = uStack_98;
  *(undefined8 *)((long)puVar29 + 0xb6) = uStack_a0;
  *(undefined8 *)((long)puVar29 + 0xce) = uStack_88;
  *(undefined8 *)((long)puVar29 + 0xc6) = uStack_90;
  *(undefined2 *)((long)puVar29 + 0xd6) = uStack_152;
  *(char *)(puVar29 + 0x1b) = (char)*(undefined8 *)(ppuVar41[0x1c] + 0x38);
  *(uint *)((long)puVar29 + 0xdc) = (uint)*(byte *)((long)puVar29 + 0x7d);
  lVar42 = *(long *)(param_2 + 0x3e0) + 1;
  *(long *)(param_2 + 0x3e0) = lVar42;
  uVar19 = *(long *)(param_2 + 0x3d8) + lVar42;
  puVar29 = (undefined8 *)(*(long *)(param_2 + 0x3c0) + (uVar19 / 0x12) * 8);
  ppuVar37 = (undefined **)*puVar29;
  ppuVar41 = (undefined **)0x0;
  if (*(long *)(param_2 + 0x3c8) != *(long *)(param_2 + 0x3c0)) {
    ppuVar41 = ppuVar37 + (uVar19 % 0x12) * 0x1c;
  }
  if (ppuVar41 == ppuVar37) {
    ppuVar41 = (undefined **)(puVar29[-1] + 0xfc0);
  }
  uVar18 = (uint)bRam0000000113370618;
  ppuVar37 = (undefined **)(ulong)(uVar18 & 0x19);
  if ((bRam0000000113370618 & 0x19) != 0) {
    param_3 = (undefined **)0x113370618;
    ppuVar40 = (undefined **)&UNK_10f7447ec;
    uVar13 = 0x58;
    pplVar17 = (long **)0x113370618;
    puVar16 = &UNK_10f7447ec;
    unaff_x30 = 0x10013e130;
    puVar9 = auStack_200;
    goto code_r0x000107c2ca88;
  }
  ppuVar40 = (undefined **)0xaaaaaaaaaaaaaaaa;
  if (*(long *)(param_2 + 0xb0) != 0) {
    puVar7 = (undefined2 *)(param_2 + 0xf3);
    puVar16 = ppuVar41[-0x15];
    do {
      puVar22 = puVar7;
      *(undefined *)((long)puVar22 + 3) = (&UNK_10f744b0c)[(ulong)puVar16 & 0xf];
      bVar10 = (undefined *)0xf < puVar16;
      puVar7 = (undefined2 *)((long)puVar22 + -1);
      puVar16 = (undefined *)((ulong)puVar16 >> 4);
    } while (bVar10);
    *(undefined1 *)(puVar22 + 1) = 0x78;
    *puVar22 = 0x3020;
    puVar16 = ppuVar41[-0x18];
    do {
      puVar22 = puVar7;
      *(undefined *)puVar22 = (&UNK_10f744b0c)[(ulong)puVar16 & 0xf];
      bVar10 = (undefined *)0xf < puVar16;
      puVar7 = (undefined2 *)((long)puVar22 + -1);
      puVar16 = (undefined *)((ulong)puVar16 >> 4);
    } while (bVar10);
    puVar22[-1] = 0x7830;
  }
  puVar16 = ppuVar41[-8];
  if (puVar16[0x208] == '\x01') {
    *(undefined1 *)(param_2 + 0x3b0) = 1;
    puVar16 = ppuVar41[-8];
  }
  if (((*(long *)(puVar16 + 0x198) == 0) && (*(long *)(puVar16 + 0x1a0) == 0)) &&
     ((*(int *)(param_2 + 0x78) != 0 || (*(long *)(param_2 + 0x328) == 0)))) {
    ppuVar39 = (undefined **)0x0;
    puVar16 = ppuVar41[-10];
  }
  else {
    *(undefined4 *)(ppuVar41 + -6) = 1;
    if (*(char *)((long)ppuVar41 + -0x2c) == '\x01') {
      if (((char)uStack_188 != '\x01') &&
         (plVar12 = plStack_190, (**(code **)(*plStack_190 + 0x10))(), plStack_180 = plVar12,
         (uStack_188 & 1) == 0)) {
        uStack_188 = CONCAT71(uStack_188._1_7_,1);
      }
      ppuVar41[-5] = (undefined *)plStack_180;
      plVar20 = plStack_180;
    }
    if (*(char *)((long)ppuVar41 + -0x2b) == '\x01') {
      (*(code *)PTR_DAT_11336f920)();
      ppuVar41[-3] = (undefined *)plVar20;
    }
    ppuVar39 = (undefined **)0x1;
    puVar16 = ppuVar41[-10];
  }
  if (((puVar16 != (undefined *)0x0) && (puVar16[4] == '\0')) && (ppuVar41[-9] != (undefined *)0x0))
  {
    if ((ppuVar41[-10] == (undefined *)0x0) || (ppuVar41[-10][4] != '\0')) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e450);
      (*pcVar8)();
    }
    pplVar30 = (long **)ppuVar41[-9];
    *(undefined1 *)((long)pplVar30[3] + 4) = 1;
    plVar12 = (long *)0x8;
    func_0x000107c60e20();
    *(int *)plVar12 = 0;
    *(undefined1 *)((long)plVar12 + 4) = 0;
    if (plVar12 != (long *)0x0) {
      do {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar20 = pplVar30[3];
    pplVar30[3] = plVar12;
    if (plVar20 != (long *)0x0) {
      do {
        iVar3 = (int)*plVar20 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar10) {
          *(int *)plVar20 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        func_0x000107c60e14();
      }
    }
  }
  ppuStack_1c8 = (undefined **)0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  ppuVar38 = ppuVar41 + -0x1c;
  ppuVar31 = (undefined **)0x0;
  if (ppuVar41[-8][0x209] == '\x01') {
    uStack_1d8 = (undefined *)(CONCAT44(uStack_1d8._4_4_,uVar18) & 0xffffffff00000019);
    ppuStack_1d0 = (undefined **)0x0;
    ppuVar40 = (undefined **)ppuVar41[-0xb];
    param_3 = *(undefined ***)(ppuVar41[-8] + 400);
    uStack_1e0 = bRam0000000113370618 & 0x19;
    if ((bRam0000000113370618 & 0x19) != 0) {
      pplVar17 = (long **)0x113370618;
      puVar16 = &UNK_10f744820;
      uVar13 = 0x58;
      puStack_1e8 = &UNK_10f744820;
      unaff_x30 = 0x10013e260;
      puVar9 = auStack_200;
      goto code_r0x000107c2ca88;
    }
    uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
    puStack_1e8 = (undefined *)0xaaaaaaaaaaaaaaaa;
    if (*(long *)(param_2 + 0x2c8) != *(long *)(param_2 + 0x2d0)) {
      ppuStack_140 = (undefined **)(param_2 + 0x2c8);
      puStack_148 = (undefined8 *)(param_2 + 0x2e0);
      plStack_150 = *(long **)(param_2 + 0x2e0);
      plStack_150[1] = (long)&plStack_150;
      *(long ***)(param_2 + 0x2e0) = &plStack_150;
      uStack_138 = 0;
      if (*(int *)(param_2 + 0x2f8) == 0) {
        uStack_130 = 0xffffffffffffffff;
      }
      else {
        uStack_130 = *(long *)(param_2 + 0x2d0) - *(long *)(param_2 + 0x2c8) >> 3;
      }
      uVar19 = *(long *)(param_2 + 0x2d0) - (long)*ppuStack_140 >> 3;
      if (uStack_130 <= uVar19) {
        uVar19 = uStack_130;
      }
      uVar21 = 0;
      if (uVar19 != 0) {
        do {
          uVar21 = uStack_138;
          if (*(long *)(*ppuStack_140 + uStack_138 * 8) != 0) break;
          uStack_138 = uStack_138 + 1;
          uVar21 = uVar19;
        } while (uVar19 != uStack_138);
      }
      if (ppuStack_140 != (undefined **)0x0) {
        pplVar30 = (long **)*ppuStack_140;
        pplVar17 = *(long ***)(param_2 + 0x2d0);
        uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
        if (uStack_130 <= uVar19) {
          uVar19 = uStack_130;
        }
        if (uVar21 != uVar19) {
          do {
            (**(code **)*pplVar30[uVar21])(pplVar30[uVar21],ppuVar38,ppuVar40 < param_3);
            if (ppuStack_140 == (undefined **)0x0) goto LAB_10013d7d0;
            uVar21 = uStack_138 + 1;
            pplVar30 = (long **)*ppuStack_140;
            pplVar17 = (long **)ppuStack_140[1];
            uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
            if (uStack_130 <= uVar19) {
              uVar19 = uStack_130;
            }
            uStack_138 = uVar21;
            if (uVar21 < uVar19) {
              do {
                pplVar30 = (long **)*ppuStack_140;
                uVar21 = uStack_138;
                if (pplVar30[uStack_138] != (long *)0x0) goto LAB_10013d948;
                uStack_138 = uStack_138 + 1;
              } while (uVar19 != uStack_138);
              pplVar30 = (long **)*ppuStack_140;
              uVar21 = uVar19;
LAB_10013d948:
              pplVar17 = (long **)ppuStack_140[1];
              uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
              if (uStack_130 <= uVar19) {
                uVar19 = uStack_130;
              }
            }
          } while (uVar21 != uVar19);
        }
        if (ppuStack_140[4] == ppuStack_140[3] && pplVar30 != pplVar17) {
          uVar19 = (long)pplVar17 + (-8 - (long)pplVar30);
          uVar18 = (uint)uVar19;
          if ((~uVar18 & 0x18) != 0) {
            uVar21 = (ulong)((uVar18 >> 3) + 1) & 3;
            do {
              if (*pplVar30 == (long *)0x0) goto LAB_10013e038;
              pplVar30 = pplVar30 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          if (0x17 < uVar19) {
            pplVar30 = pplVar30 + 2;
            while( true ) {
              if (pplVar30[-2] == (long *)0x0) {
                pplVar30 = pplVar30 + -2;
                goto LAB_10013e038;
              }
              if (pplVar30[-1] == (long *)0x0) break;
              if (*pplVar30 == (long *)0x0) goto LAB_10013e038;
              if (pplVar30[1] == (long *)0x0) {
                pplVar30 = pplVar30 + 1;
                goto LAB_10013e038;
              }
              pplVar23 = pplVar30 + 2;
              pplVar30 = pplVar30 + 4;
              if (pplVar23 == pplVar17) goto LAB_10013d7b8;
            }
            pplVar30 = pplVar30 + -1;
LAB_10013e038:
            if ((pplVar30 != pplVar17) &&
               (pplVar23 = pplVar30 + 1, pplVar33 = pplVar30, pplVar23 != pplVar17)) {
              do {
                pplVar30 = pplVar33;
                if (*pplVar23 != (long *)0x0) {
                  pplVar30 = pplVar33 + 1;
                  *pplVar33 = *pplVar23;
                }
                pplVar23 = pplVar23 + 1;
                pplVar33 = pplVar30;
              } while (pplVar23 != pplVar17);
              pplVar17 = (long **)ppuStack_140[1];
            }
            if (pplVar30 != pplVar17) {
              ppuStack_140[1] = (undefined *)pplVar30;
            }
          }
        }
LAB_10013d7b8:
        if (ppuStack_140 != (undefined **)0x0) {
          ppuStack_140 = (undefined **)0x0;
          plStack_150[1] = (long)puStack_148;
          *puStack_148 = plStack_150;
        }
      }
    }
LAB_10013d7d0:
    if ((uStack_1e0 != 0) && (cRam0000000000000000 != '\0')) {
      func_0x000107c2d058(0,puStack_1e8,uStack_1f0);
    }
    if ((bRam0000000113370618 & 0x19) == 0) {
      func_0x000100142b44(ppuVar41[-8],ppuVar38,ppuVar40 < param_3);
    }
    else {
      pplVar30 = (long **)0x58;
      func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744849,0,0,0,0);
      func_0x000100142b44(ppuVar41[-8],ppuVar38,ppuVar40 < param_3);
      if (bRam0000000113370618 != 0) {
        func_0x000107c2d058(0x113370618,&UNK_10f744849,pplVar30);
      }
    }
    ppuVar37 = (undefined **)((ulong)uStack_1d8 & 0xffffffff);
    ppuVar31 = ppuStack_1d0;
    if ((int)ppuVar39 != 0) {
      param_3 = ppuStack_1d0;
      if (*(int *)(param_2 + 0x78) == 0) {
        bVar6 = bRam0000000113370618 & 0x19;
        ppuVar40 = (undefined **)(ulong)(bRam0000000113370618 & 0x19);
        if ((bRam0000000113370618 & 0x19) != 0) {
          param_3 = (undefined **)&UNK_10f744874;
          uVar13 = 0x58;
          pplVar17 = (long **)0x113370618;
          puVar16 = &UNK_10f744874;
          unaff_x30 = 0x10013e3a8;
          puVar9 = auStack_200;
          goto code_r0x000107c2ca88;
        }
        ppuVar37 = (undefined **)0xaaaaaaaaaaaaaaaa;
        param_3 = (undefined **)0xaaaaaaaaaaaaaaaa;
        if (*(long *)(param_2 + 0x300) != *(long *)(param_2 + 0x308)) {
          ppuStack_140 = (undefined **)(param_2 + 0x300);
          puStack_148 = (undefined8 *)(param_2 + 0x318);
          plStack_150 = *(long **)(param_2 + 0x318);
          plStack_150[1] = (long)&plStack_150;
          *(long ***)(param_2 + 0x318) = &plStack_150;
          uStack_138 = 0;
          if (*(int *)(param_2 + 0x330) == 0) {
            uStack_130 = 0xffffffffffffffff;
          }
          else {
            uStack_130 = *(long *)(param_2 + 0x308) - *(long *)(param_2 + 0x300) >> 3;
          }
          uVar19 = *(long *)(param_2 + 0x308) - (long)*ppuStack_140 >> 3;
          if (uStack_130 <= uVar19) {
            uVar19 = uStack_130;
          }
          uVar21 = 0;
          if (uVar19 != 0) {
            do {
              uVar21 = uStack_138;
              if (*(long *)(*ppuStack_140 + uStack_138 * 8) != 0) break;
              uStack_138 = uStack_138 + 1;
              uVar21 = uVar19;
            } while (uVar19 != uStack_138);
          }
          ppuVar39 = ppuStack_140;
          if (ppuStack_140 != (undefined **)0x0) {
            pplVar30 = (long **)*ppuStack_140;
            pplVar17 = *(long ***)(param_2 + 0x308);
            uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
            if (uStack_130 <= uVar19) {
              uVar19 = uStack_130;
            }
            if (uVar21 != uVar19) {
              do {
                (**(code **)(*pplVar30[uVar21] + 0x10))(pplVar30[uVar21],ppuVar41[-5]);
                ppuVar39 = ppuStack_140;
                if (ppuStack_140 == (undefined **)0x0) goto LAB_10013dde8;
                uVar21 = uStack_138 + 1;
                pplVar30 = (long **)*ppuStack_140;
                pplVar17 = (long **)ppuStack_140[1];
                uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
                if (uStack_130 <= uVar19) {
                  uVar19 = uStack_130;
                }
                uStack_138 = uVar21;
                if (uVar21 < uVar19) {
                  do {
                    pplVar30 = (long **)*ppuStack_140;
                    uVar21 = uStack_138;
                    if (pplVar30[uStack_138] != (long *)0x0) goto LAB_10013de10;
                    uStack_138 = uStack_138 + 1;
                  } while (uVar19 != uStack_138);
                  pplVar30 = (long **)*ppuStack_140;
                  uVar21 = uVar19;
LAB_10013de10:
                  pplVar17 = (long **)ppuStack_140[1];
                  uVar19 = (long)pplVar17 - (long)pplVar30 >> 3;
                  if (uStack_130 <= uVar19) {
                    uVar19 = uStack_130;
                  }
                }
              } while (uVar21 != uVar19);
            }
            ppuVar39 = ppuStack_140;
            if (ppuStack_140[4] == ppuStack_140[3] && pplVar30 != pplVar17) {
              uVar19 = (long)pplVar17 + (-8 - (long)pplVar30);
              uVar18 = (uint)uVar19;
              if ((~uVar18 & 0x18) != 0) {
                uVar21 = (ulong)((uVar18 >> 3) + 1) & 3;
                do {
                  if (*pplVar30 == (long *)0x0) goto LAB_10013e14c;
                  pplVar30 = pplVar30 + 1;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              if (0x17 < uVar19) {
                pplVar30 = pplVar30 + 2;
                while( true ) {
                  if (pplVar30[-2] == (long *)0x0) {
                    pplVar30 = pplVar30 + -2;
                    goto LAB_10013e14c;
                  }
                  if (pplVar30[-1] == (long *)0x0) break;
                  if (*pplVar30 == (long *)0x0) goto LAB_10013e14c;
                  if (pplVar30[1] == (long *)0x0) {
                    pplVar30 = pplVar30 + 1;
                    goto LAB_10013e14c;
                  }
                  pplVar23 = pplVar30 + 2;
                  pplVar30 = pplVar30 + 4;
                  if (pplVar23 == pplVar17) goto LAB_10013ddd0;
                }
                pplVar30 = pplVar30 + -1;
LAB_10013e14c:
                if ((pplVar30 != pplVar17) &&
                   (pplVar23 = pplVar30 + 1, pplVar33 = pplVar30, pplVar23 != pplVar17)) {
                  do {
                    pplVar30 = pplVar33;
                    if (*pplVar23 != (long *)0x0) {
                      pplVar30 = pplVar33 + 1;
                      *pplVar33 = *pplVar23;
                    }
                    pplVar23 = pplVar23 + 1;
                    pplVar33 = pplVar30;
                  } while (pplVar23 != pplVar17);
                  pplVar17 = (long **)ppuStack_140[1];
                }
                if (pplVar30 != pplVar17) {
                  ppuStack_140[1] = (undefined *)pplVar30;
                }
              }
            }
LAB_10013ddd0:
            if (ppuStack_140 != (undefined **)0x0) {
              ppuStack_140 = (undefined **)0x0;
              plStack_150[1] = (long)puStack_148;
              *puStack_148 = plStack_150;
            }
          }
        }
LAB_10013dde8:
        if ((bVar6 != 0) && (cRam0000000000000000 != '\0')) {
          func_0x000107c2d058(0,0xaaaaaaaaaaaaaaaa,0xaaaaaaaaaaaaaaaa);
        }
      }
      ppuVar31 = ppuStack_1d0;
      if ((bRam0000000113370618 & 0x19) != 0) {
        pplVar17 = (long **)0x113370618;
        puVar16 = &UNK_10f7448a1;
        uVar13 = 0x58;
        unaff_x30 = 0x10013e31c;
        puVar9 = auStack_200;
        goto code_r0x000107c2ca88;
      }
      lVar42 = *(long *)(ppuVar41[-8] + 0x198);
      ppuVar37 = (undefined **)((ulong)uStack_1d8 & 0xffffffff);
      if (lVar42 != 0) {
        (**(code **)(lVar42 + 8))(lVar42,ppuVar38,ppuVar41 + -6);
      }
    }
  }
  if (((int)ppuVar37 != 0) && (*(char *)ppuVar31 != '\0')) {
    func_0x000107c2d058(ppuVar31,uStack_1c0,ppuStack_1c8);
  }
  param_1 = pcStack_1a8;
  piVar32 = *(int **)(ppuVar41[-8] + 0x1a8);
  param_3 = ppuVar31;
  if (piVar32 == (int *)0x0) {
    *pcStack_1a8 = '\x01';
    *(undefined ***)(pcStack_1a8 + 8) = ppuVar38;
    pcStack_1a8[0x10] = '\0';
    pcStack_1a8[0x11] = '\0';
    pcStack_1a8[0x12] = '\0';
    pcStack_1a8[0x13] = '\0';
    pcStack_1a8[0x14] = '\0';
    pcStack_1a8[0x15] = '\0';
    pcStack_1a8[0x16] = '\0';
    pcStack_1a8[0x17] = '\0';
  }
  else {
    do {
      iVar3 = *piVar32;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e42c);
      (*pcVar8)();
    }
    do {
      iVar3 = *piVar32;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e438);
      (*pcVar8)();
    }
    *pcStack_1a8 = '\x01';
    *(undefined ***)(pcStack_1a8 + 8) = ppuVar38;
    pcStack_1a8[0x10] = '\0';
    pcStack_1a8[0x11] = '\0';
    pcStack_1a8[0x12] = '\0';
    pcStack_1a8[0x13] = '\0';
    pcStack_1a8[0x14] = '\0';
    pcStack_1a8[0x15] = '\0';
    pcStack_1a8[0x16] = '\0';
    pcStack_1a8[0x17] = '\0';
    do {
      iVar3 = *piVar32;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e444);
      (*pcVar8)();
    }
    *(int **)(pcStack_1a8 + 0x10) = piVar32;
    do {
      iVar3 = *piVar32;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piVar32 + 4))(piVar32);
    }
    do {
      iVar3 = *piVar32;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piVar32 + 4))(piVar32);
    }
  }
LAB_10013d9e4:
  if ((uStack_19c != 0) && (*pcStack_198 != '\0')) {
    func_0x000107c2d058(pcStack_198,puStack_1b0,uStack_1b8);
  }
  if (*param_1 == '\x01') {
    uVar19 = *(long *)(param_2 + 0x3d8) + *(long *)(param_2 + 0x3e0);
    puVar1 = (ulong *)(*(long *)(param_2 + 0x3c0) + (uVar19 / 0x12) * 8);
    uVar21 = *puVar1;
    uVar11 = 0;
    if (*(long *)(param_2 + 0x3c8) != *(long *)(param_2 + 0x3c0)) {
      uVar11 = uVar21 + (uVar19 % 0x12) * 0xe0;
    }
    if (uVar11 == uVar21) {
      uVar11 = puVar1[-1] + 0xfc0;
    }
    if ((bRam0000000113370088 & 0x19) == 0) goto LAB_10013da6c;
    func_0x000107c2ccdc(*(undefined1 *)(uVar11 - 8));
    func_0x000107c2ccd8();
    if ((bRam0000000113370088 & 0x19) == 0) goto LAB_10013da6c;
    puVar16 = *(undefined **)(uVar11 - 0x38);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pplVar17 = (long **)0x113370088;
      uVar13 = 0x42;
      puVar9 = (undefined1 *)register0x00000008;
      uVar11 = unaff_x19;
      ppuVar28 = unaff_x20;
      pplVar30 = unaff_x21;
      param_3 = unaff_x22;
      ppuVar37 = unaff_x23;
      ppuVar40 = unaff_x24;
      ppuVar41 = unaff_x25;
      ppuVar39 = unaff_x26;
      puVar44 = unaff_x29;
      goto code_r0x000107c2ca88;
    }
  }
  else {
LAB_10013da6c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  func_0x000107c60e78();
LAB_10013e3c4:
  func_0x000107c35c58();
LAB_10013e3c8:
  pplVar17 = (long **)0x113370618;
  puVar16 = &UNK_10f7447ce;
  uVar13 = 0x58;
  unaff_x30 = 0x10013e3f4;
  puVar9 = auStack_200;
  ppuVar28 = &PTR_DAT_113370000;
  pplVar30 = pplVar17;
code_r0x000107c2ca88:
  *(undefined ***)(puVar9 + -0x50) = ppuVar39;
  *(undefined ***)(puVar9 + -0x48) = ppuVar41;
  *(undefined ***)(puVar9 + -0x40) = ppuVar40;
  *(undefined ***)(puVar9 + -0x38) = ppuVar37;
  *(undefined ***)(puVar9 + -0x30) = param_3;
  *(long ***)(puVar9 + -0x28) = pplVar30;
  *(undefined ***)(puVar9 + -0x20) = ppuVar28;
  *(ulong *)(puVar9 + -0x18) = uVar11;
  *(undefined1 **)(puVar9 + -0x10) = puVar44;
  *(undefined8 *)(puVar9 + -8) = unaff_x30;
  uVar14 = uVar13;
  _pthread_self();
  _pthread_mach_thread_np();
  uVar15 = uVar14;
  func_0x000107c2d028();
  *(undefined8 *)(puVar9 + -0x58) = uVar15;
  *(undefined4 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  func_0x00010b3355ac(uVar13,pplVar17,puVar16,0,0,0,uVar14,puVar9 + -0x58);
  return;
}



/* Entry: 10013ceb4; end: 10013e457;  */

/* WARNING: Possible PIC construction at 0x00010013e3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010013e0d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010013e130) */
/* WARNING: Removing unreachable block (ram,0x00010013e13c) */
/* WARNING: Removing unreachable block (ram,0x00010013e260) */
/* WARNING: Removing unreachable block (ram,0x00010013e274) */
/* WARNING: Removing unreachable block (ram,0x00010013e3a8) */
/* WARNING: Removing unreachable block (ram,0x00010013e3bc) */
/* WARNING: Removing unreachable block (ram,0x00010013e31c) */
/* WARNING: Removing unreachable block (ram,0x00010013e32c) */
/* WARNING: Removing unreachable block (ram,0x00010013e33c) */
/* WARNING: Removing unreachable block (ram,0x00010013e35c) */
/* WARNING: Removing unreachable block (ram,0x00010013e3f4) */
/* WARNING: Removing unreachable block (ram,0x00010013e400) */
/* WARNING: Removing unreachable block (ram,0x00010013e0d8) */
/* WARNING: Removing unreachable block (ram,0x00010013e088) */
/* WARNING: Removing unreachable block (ram,0x00010013e19c) */

void FUN_10013ceb4(char *param_1,ulong param_2,undefined **param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  undefined2 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long **pplVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined2 *puVar21;
  long **pplVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  ulong uVar25;
  ulong uVar26;
  ulong unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar27;
  long **unaff_x21;
  undefined8 *puVar28;
  long **pplVar29;
  undefined **ppuVar30;
  int *piVar31;
  long **pplVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  undefined **unaff_x22;
  undefined1 uVar35;
  undefined **unaff_x23;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **unaff_x24;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined **unaff_x25;
  undefined **ppuVar40;
  long lVar41;
  undefined **ppuVar42;
  undefined **unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar43;
  undefined8 unaff_x30;
  undefined *puVar44;
  undefined *puVar45;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  uint uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  char *pcStack_1a8;
  uint uStack_19c;
  char *pcStack_198;
  long *plStack_190;
  ulong uStack_188;
  long *plStack_180;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  long lStack_78;
  
  puVar43 = &stack0xfffffffffffffff0;
  puVar9 = auStack_200;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[8] = -0x56;
  param_1[9] = -0x56;
  param_1[10] = -0x56;
  param_1[0xb] = -0x56;
  param_1[0xc] = -0x56;
  param_1[0xd] = -0x56;
  param_1[0xe] = -0x56;
  param_1[0xf] = -0x56;
  param_1[0x10] = -0x56;
  param_1[0x11] = -0x56;
  param_1[0x12] = -0x56;
  param_1[0x13] = -0x56;
  param_1[0x14] = -0x56;
  param_1[0x15] = -0x56;
  param_1[0x16] = -0x56;
  param_1[0x17] = -0x56;
  param_1[0] = -0x56;
  param_1[1] = -0x56;
  param_1[2] = -0x56;
  param_1[3] = -0x56;
  param_1[4] = -0x56;
  param_1[5] = -0x56;
  param_1[6] = -0x56;
  param_1[7] = -0x56;
  uVar18 = param_2;
  func_0x00010013ce9c();
  if ((uVar18 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e420);
    (*pcVar8)();
  }
  uStack_19c = bRam0000000113370618 & 0x19;
  ppuVar40 = unaff_x25;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcStack_198 = (char *)0x0;
    uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
    puStack_1b0 = (undefined *)0xaaaaaaaaaaaaaaaa;
    puVar28 = *(undefined8 **)(param_2 + 0x68);
  }
  else {
    uVar12 = 0x58;
    pcStack_198 = (char *)0x113370618;
    puStack_1b0 = &UNK_10f7447aa;
    func_0x000107c2ca88();
    puVar28 = *(undefined8 **)(param_2 + 0x68);
    uStack_1b8 = uVar12;
  }
  for (; puVar28 != (undefined8 *)0x0; puVar28 = (undefined8 *)puVar28[0x43]) {
    do {
      ppuVar38 = (undefined **)*puVar28;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar28,0x10);
      if (bVar10) {
        *puVar28 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar38 != (undefined **)0x0) {
      do {
        uVar18 = ((ulong)ppuVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)ppuVar38 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
        ppuVar40 = (undefined **)(1L << (uVar18 & 0x3f));
        (**(code **)(puVar28[uVar18 + 2] + 8))();
        bVar10 = ppuVar40 != ppuVar38;
        ppuVar38 = (undefined **)((ulong)ppuVar40 ^ (ulong)ppuVar38);
      } while (bVar10);
    }
  }
  pplVar29 = (long **)0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0;
  plStack_190 = *(long **)(param_2 + 0x450);
  plStack_180 = (long *)0x0;
  ppuVar27 = &PTR_DAT_113370000;
  bVar6 = bRam0000000113370618 & 0x19;
  ppuVar38 = (undefined **)(ulong)(bRam0000000113370618 & 0x19);
  if ((bRam0000000113370618 & 0x19) != 0) {
    ppuVar36 = (undefined **)0x113370618;
    ppuVar39 = (undefined **)&UNK_10f744769;
    uVar12 = 0x58;
    pplVar16 = (long **)0x113370618;
    puVar15 = &UNK_10f744769;
    unaff_x30 = 0x10013e0d8;
    goto code_r0x000107c2ca88;
  }
  plVar11 = (long *)(param_2 + 0x28);
  do {
    lVar41 = *plVar11;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar10) {
      *plVar11 = lVar41 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_10013e458(*(undefined8 *)(param_2 + 0x350),&plStack_190,lVar41);
  FUN_10013e458(*(undefined8 *)(param_2 + 0x358),&plStack_190,lVar41);
  if ((bVar6 != 0) && (cRam0000000000000000 != '\0')) {
    func_0x000107c2d058(0,0xaaaaaaaaaaaaaaaa,0xaaaaaaaaaaaaaaaa);
  }
  if (((char)uStack_188 == '\x01') && (*(long *)(param_2 + 0x368) <= (long)plStack_180)) {
    *(undefined1 *)(param_2 + 0x360) = 1;
  }
  ppuVar36 = &PTR_DAT_113370000;
  ppuVar39 = (undefined **)0x19;
  ppuVar40 = (undefined **)0xa0;
  while( true ) {
    do {
      plVar11 = (long *)(param_2 + 0x118);
      func_0x00010013e6d4(plVar11,param_3);
      if ((bRam0000000113370628 & 0x19) != 0) {
        func_0x000107c2cce4(&plStack_150,param_2,plVar11);
        func_0x000107c2cce0(param_2,&plStack_150);
        if (plStack_150 != (long *)0x0) {
          (**(code **)(*plStack_150 + 8))();
        }
      }
      if (plVar11 == (long *)0x0) goto LAB_10013e0f8;
      plVar19 = plVar11;
      func_0x000100141dd4();
    } while (((ulong)plVar19 & 1) != 0);
    lVar41 = 0;
    if (plVar11[2] != 0) {
      plVar19 = (long *)*plVar11;
      lVar41 = 0;
      if (plVar19[1] + 1 != *plVar19) {
        lVar41 = plVar19[1] + 1;
      }
      lVar41 = plVar19[3] + lVar41 * 0xa0;
    }
    if ((*(char *)(lVar41 + 0x6d) != '\0') || (*(int *)(param_2 + 0x80) < 1)) break;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    lStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_d8 = 0xaaaaaaaaaa;
    uStack_d3 = 0xaa;
    uStack_d2 = 0xaaaa;
    uStack_e0 = 0xaaaaaaaaaa;
    uStack_db = 0xaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaa;
    uStack_e3 = 0xaaaaaa;
    uStack_f0 = 0xaaaaaaaaaa;
    uStack_eb = 0xaaaaaa;
    uStack_118 = 0xaaaaaaaaaaaaaaaa;
    uStack_120 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    ppuStack_140 = (undefined **)0xaaaaaaaaaaaaaaaa;
    uStack_128 = 0xaaaaaaaaaaaaaaaa;
    uStack_130 = 0xaaaaaaaaaaaaaaaa;
    puStack_148 = (undefined8 *)0xaaaaaaaaaaaaaaaa;
    plStack_150 = (long *)0xaaaaaaaaaaaaaaaa;
    func_0x00010014243c(&plStack_150,plVar11);
    lStack_b0 = plVar11[6];
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)plVar11[0xe]);
    func_0x000107c2cce8(param_2 + 0x88,&plStack_150);
    func_0x000107c2cd38(&plStack_150);
  }
  if (*(byte *)(*(long *)(plVar11[6] + 0xe0) + 0x38) <= *(byte *)(*(long *)(param_2 + 0x438) + 0x19)
     ) {
    plVar19 = plVar11;
    pcStack_1a8 = param_1;
    func_0x00010014243c(&plStack_150);
    ppuVar40 = (undefined **)plVar11[6];
    if (((ppuVar40[0x33] == (undefined *)0x0) && (ppuVar40[0x34] == (undefined *)0x0)) &&
       ((*(int *)(param_2 + 0x80) != 0 || (*(long *)(param_2 + 0x330) == 0)))) {
      uVar34 = 0;
      ppuVar36 = (undefined **)0x0;
    }
    else {
      if (*(double *)(param_2 + 0x50) <= 0.0) {
        ppuVar36 = (undefined **)0x0;
      }
      else {
        if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10013e428);
          (*pcVar8)();
        }
        uVar18 = *(ulong *)(param_2 + 0x110);
        uVar20 = *(ulong *)(param_2 + 0x108) ^ *(ulong *)(param_2 + 0x108) << 0x17;
        uVar20 = uVar18 >> 0x1a ^ uVar20 >> 0x11 ^ uVar18 ^ uVar20;
        *(ulong *)(param_2 + 0x108) = uVar18;
        *(ulong *)(param_2 + 0x110) = uVar20;
        ppuVar36 = (undefined **)
                   (ulong)((double)(uVar20 + uVar18 >> 0xb) / 9007199254740992.0 <
                          *(double *)(param_2 + 0x50));
      }
      uVar34 = 1;
    }
    ppuVar27 = *(undefined ***)(param_2 + 0x3d0);
    ppuVar39 = *(undefined ***)(param_2 + 0x3c8);
    ppuVar38 = (undefined **)((long)ppuVar27 - (long)ppuVar39);
    uStack_168 = 0;
    uStack_162 = 0;
    uStack_170 = 0;
    uStack_16a = 0;
    uStack_158 = 0;
    uStack_152 = 0;
    uStack_160 = 0;
    uStack_15a = 0;
    lVar41 = 0;
    if (ppuVar38 != (undefined **)0x0) {
      lVar41 = ((long)ppuVar27 - (long)ppuVar39 >> 3) * 0x12 + -1;
    }
    uVar18 = *(ulong *)(param_2 + 0x3e0);
    if (lVar41 != *(long *)(param_2 + 1000) + uVar18) {
      if (ppuVar27 == ppuVar39) goto LAB_10013d3a8;
      goto LAB_10013d268;
    }
    if (0x11 < uVar18) {
      *(ulong *)(param_2 + 0x3e0) = uVar18 - 0x12;
      puVar15 = *ppuVar39;
      *(undefined ***)(param_2 + 0x3c8) = ppuVar39 + 1;
      goto LAB_10013d24c;
    }
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar34);
    param_3 = *(undefined ***)(param_2 + 0x3d8);
    ppuVar30 = *(undefined ***)(param_2 + 0x3c0);
    if (ppuVar38 < (undefined **)((long)param_3 - (long)ppuVar30)) {
      plVar19 = (long *)0xfc0;
      func_0x000107c60e20();
      uVar34 = (undefined4)uStack_1c0;
      if (param_3 != ppuVar27) {
        *ppuVar27 = (undefined *)plVar19;
        *(long *)(param_2 + 0x3d0) = *(long *)(param_2 + 0x3d0) + 8;
        ppuVar27 = ppuVar40;
        goto LAB_10013d398;
      }
      if (ppuVar39 != ppuVar30) goto LAB_10013df94;
      uVar18 = (long)param_3 - (long)ppuVar39 >> 2;
      if (ppuVar27 == ppuVar39) {
        uVar18 = 1;
      }
      ppuStack_1c8 = ppuVar40;
      if (uVar18 >> 0x3d != 0) goto LAB_10013e3c4;
      uVar20 = uVar18 + 3 >> 2;
      lVar41 = uVar18 * 8;
      func_0x000107c60e20();
      ppuVar40 = ppuStack_1c8;
      ppuVar37 = (undefined **)(lVar41 + uVar20 * 8);
      uVar34 = (undefined4)uStack_1c0;
      ppuVar42 = ppuVar37;
      if ((long)ppuVar27 - (long)ppuVar39 == 0) goto LAB_10013df6c;
      ppuVar42 = (undefined **)((long)ppuVar37 + (long)ppuVar38);
      uVar25 = ((long)ppuVar27 - (long)ppuVar39) - 8;
      ppuVar27 = ppuVar37;
      ppuVar24 = ppuVar39;
      if ((uVar25 < 0x38) || (lVar2 = uVar20 * 8 + lVar41, (ulong)(lVar2 - (long)ppuVar39) < 0x20))
      goto LAB_10013df5c;
      uVar20 = (uVar25 >> 3) + 1;
      uVar26 = uVar20 & 0x3ffffffffffffffc;
      ppuVar27 = ppuVar39 + 2;
      plVar11 = (long *)(lVar2 + 0x10);
      uVar25 = uVar26;
      do {
        puVar15 = ppuVar27[-2];
        puVar45 = ppuVar27[1];
        puVar44 = *ppuVar27;
        plVar11[-1] = (long)ppuVar27[-1];
        plVar11[-2] = (long)puVar15;
        plVar11[1] = (long)puVar45;
        *plVar11 = (long)puVar44;
        ppuVar27 = ppuVar27 + 4;
        plVar11 = plVar11 + 4;
        uVar25 = uVar25 - 4;
      } while (uVar25 != 0);
      ppuVar27 = ppuVar37 + uVar26;
      ppuVar24 = ppuVar39 + uVar26;
      if (uVar20 != uVar26) {
LAB_10013df5c:
        do {
          ppuVar23 = ppuVar27 + 1;
          *ppuVar27 = *ppuVar24;
          ppuVar27 = ppuVar23;
          ppuVar24 = ppuVar24 + 1;
        } while (ppuVar23 != ppuVar42);
      }
LAB_10013df6c:
      *(long *)(param_2 + 0x3c0) = lVar41;
      *(undefined ***)(param_2 + 0x3c8) = ppuVar37;
      *(undefined ***)(param_2 + 0x3d0) = ppuVar42;
      *(ulong *)(param_2 + 0x3d8) = lVar41 + uVar18 * 8;
      bVar10 = ppuVar39 != (undefined **)0x0;
      ppuVar39 = ppuVar37;
      if (bVar10) {
        func_0x000107c60e14(ppuVar30);
        ppuVar39 = *(undefined ***)(param_2 + 0x3c8);
      }
LAB_10013df94:
      ppuVar39[-1] = (undefined *)plVar19;
      lVar41 = *(long *)(param_2 + 0x3c8);
      *(long *)(param_2 + 0x3c8) = lVar41 + -8;
      puVar15 = *(undefined **)(lVar41 + -8);
      *(long *)(param_2 + 0x3c8) = lVar41;
LAB_10013d24c:
      plVar19 = (long *)(param_2 + 0x3c0);
      func_0x000107c2ccf4(plVar19,puVar15);
      ppuVar27 = ppuVar40;
      goto LAB_10013d398;
    }
    ppuStack_1d0 = (undefined **)CONCAT44(ppuStack_1d0._4_4_,(int)ppuVar36);
    uVar18 = (long)param_3 - (long)ppuVar30 >> 2;
    if (param_3 == ppuVar30) {
      uVar18 = 1;
    }
    ppuStack_1c8 = ppuVar40;
    if (uVar18 >> 0x3d != 0) goto LAB_10013e3c4;
    ppuVar36 = (undefined **)(uVar18 * 8);
    param_3 = ppuVar36;
    func_0x000107c60e20();
    ppuVar30 = (undefined **)((long)param_3 + (long)ppuVar38);
    ppuVar40 = param_3 + uVar18;
    puVar15 = (undefined *)0xfc0;
    func_0x000107c60e20();
    if (ppuVar38 == ppuVar36) {
      if ((long)ppuVar38 < 1) {
        uVar18 = (long)ppuVar38 >> 2;
        if (ppuVar27 == ppuVar39) {
          uVar18 = 1;
        }
        uStack_1d8 = puVar15;
        if (uVar18 >> 0x3d != 0) goto LAB_10013e3c4;
        ppuVar36 = (undefined **)(uVar18 * 8);
        ppuVar30 = ppuVar36;
        func_0x000107c60e20();
        ppuVar40 = ppuVar30 + uVar18;
        if (param_3 != (undefined **)0x0) {
          func_0x000107c60e14(param_3);
          ppuVar27 = *(undefined ***)(param_2 + 0x3d0);
          ppuVar39 = *(undefined ***)(param_2 + 0x3c8);
        }
        ppuVar38 = ppuVar30 + 1;
        *ppuVar30 = uStack_1d8;
        param_3 = ppuVar30;
        if (ppuVar27 == ppuVar39) goto LAB_10013d36c;
        goto LAB_10013dc28;
      }
      ppuVar30 = (undefined **)((long)ppuVar30 - (((ulong)ppuVar38 >> 1) + 4 & 0xfffffffffffffff8));
    }
    ppuVar38 = ppuVar30 + 1;
    *ppuVar30 = puVar15;
    if (ppuVar27 == ppuVar39) goto LAB_10013d36c;
    goto LAB_10013dc28;
  }
  if ((bRam0000000113370618 & 0x19) != 0) goto LAB_10013e3c8;
LAB_10013e0f8:
  *param_1 = '\0';
  goto LAB_10013d9e4;
LAB_10013dc28:
  do {
    ppuVar42 = param_3;
    ppuVar37 = ppuVar30;
    if (ppuVar30 == param_3) {
      if (ppuVar38 < ppuVar40) {
        lVar41 = ((long)ppuVar40 - (long)ppuVar38 >> 3) + 1;
        lVar2 = (long)ppuVar38 - (long)ppuVar30;
        lVar5 = (long)ppuVar38 - (long)ppuVar30;
        ppuVar38 = ppuVar38 + ((ulong)(lVar41 - (lVar41 >> 0x3f)) >> 1);
        ppuVar37 = (undefined **)((long)ppuVar38 - lVar2);
        if (lVar5 != 0) {
          func_0x000107c610b8(ppuVar37,ppuVar30,lVar5);
        }
      }
      else {
        uVar18 = (long)ppuVar40 - (long)ppuVar30 >> 2;
        if ((long)ppuVar40 - (long)ppuVar30 == 0) {
          uVar18 = 1;
        }
        if (uVar18 >> 0x3d != 0) goto LAB_10013e3c4;
        uVar20 = uVar18 + 3 >> 2;
        ppuVar42 = (undefined **)(uVar18 * 8);
        func_0x000107c60e20();
        ppuVar37 = ppuVar42 + uVar20;
        lVar41 = (long)ppuVar38 - (long)ppuVar30;
        ppuVar38 = ppuVar37;
        if (lVar41 != 0) {
          ppuVar38 = (undefined **)((long)ppuVar37 + lVar41);
          ppuVar40 = ppuVar37;
          ppuVar36 = ppuVar30;
          if ((0x17 < lVar41 - 8U) &&
             ((undefined *)0x1f < (undefined *)((long)ppuVar42 + (uVar20 * 8 - (long)ppuVar30)))) {
            uVar25 = (lVar41 - 8U >> 3) + 1;
            uVar26 = uVar25 & 0x3ffffffffffffffc;
            ppuVar40 = ppuVar30 + 2;
            ppuVar36 = ppuVar42 + uVar20 + 2;
            uVar20 = uVar26;
            do {
              puVar15 = ppuVar40[-2];
              puVar45 = ppuVar40[1];
              puVar44 = *ppuVar40;
              ppuVar36[-1] = ppuVar40[-1];
              ppuVar36[-2] = puVar15;
              ppuVar36[1] = puVar45;
              *ppuVar36 = puVar44;
              ppuVar40 = ppuVar40 + 4;
              ppuVar36 = ppuVar36 + 4;
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            ppuVar40 = ppuVar37 + uVar26;
            ppuVar36 = ppuVar30 + uVar26;
            if (uVar25 == uVar26) goto LAB_10013dd3c;
          }
          do {
            ppuVar39 = ppuVar40 + 1;
            *ppuVar40 = *ppuVar36;
            ppuVar40 = ppuVar39;
            ppuVar36 = ppuVar36 + 1;
          } while (ppuVar39 != ppuVar38);
        }
LAB_10013dd3c:
        ppuVar40 = ppuVar42 + uVar18;
        ppuVar39 = ppuVar42;
        if (ppuVar30 != (undefined **)0x0) {
          func_0x000107c60e14(param_3);
        }
      }
    }
    ppuVar27 = ppuVar27 + -1;
    ppuVar30 = ppuVar37 + -1;
    *ppuVar30 = *ppuVar27;
    param_3 = ppuVar42;
    ppuVar36 = ppuVar30;
  } while (ppuVar27 != *(undefined ***)(param_2 + 0x3c8));
LAB_10013d36c:
  ppuVar27 = ppuStack_1c8;
  plVar19 = *(long **)(param_2 + 0x3c0);
  *(undefined ***)(param_2 + 0x3c0) = param_3;
  *(undefined ***)(param_2 + 0x3c8) = ppuVar30;
  *(undefined ***)(param_2 + 0x3d0) = ppuVar38;
  *(undefined ***)(param_2 + 0x3d8) = ppuVar40;
  ppuVar36 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffff);
  uVar34 = (undefined4)uStack_1c0;
  if (plVar19 != (long *)0x0) {
    func_0x000107c60e14();
  }
LAB_10013d398:
  ppuVar39 = *(undefined ***)(param_2 + 0x3c8);
  ppuVar40 = ppuVar27;
  if (*(undefined ***)(param_2 + 0x3d0) == ppuVar39) {
LAB_10013d3a8:
    uVar33 = (undefined1)uVar34;
    uVar35 = SUB81(ppuVar36,0);
    puVar28 = (undefined8 *)0x0;
  }
  else {
LAB_10013d268:
    uVar33 = (undefined1)uVar34;
    uVar35 = SUB81(ppuVar36,0);
    uVar18 = *(long *)(param_2 + 1000) + *(long *)(param_2 + 0x3e0);
    puVar28 = (undefined8 *)(ppuVar39[uVar18 / 0x12] + (uVar18 % 0x12) * 0xe0);
  }
  ppuVar27 = &PTR_DAT_113370000;
  uStack_98 = CONCAT62(uStack_168,uStack_16a);
  uStack_a0 = CONCAT62(uStack_170,uStack_172);
  uStack_88 = CONCAT62(uStack_158,uStack_15a);
  uStack_90 = CONCAT62(uStack_160,uStack_162);
  uStack_80 = uStack_152;
  pplVar29 = &plStack_150;
  *puVar28 = plStack_150;
  puVar28[2] = ppuStack_140;
  puVar28[1] = puStack_148;
  puVar28[4] = uStack_130;
  puVar28[3] = uStack_138;
  puVar28[6] = uStack_120;
  puVar28[5] = uStack_128;
  puVar28[8] = uStack_110;
  puVar28[7] = uStack_118;
  *(ulong *)((long)puVar28 + 0x65) = CONCAT53(uStack_e8,uStack_eb);
  puVar28[0xc] = CONCAT35(uStack_eb,uStack_f0);
  puVar28[0xb] = uStack_f8;
  puVar28[10] = uStack_100;
  puVar28[9] = uStack_108;
  *(undefined1 *)((long)puVar28 + 0x7d) = uStack_d3;
  *(ulong *)((long)puVar28 + 0x75) = CONCAT53(uStack_d8,uStack_db);
  *(ulong *)((long)puVar28 + 0x6d) = CONCAT53(uStack_e0,uStack_e3);
  puVar28[0x10] = uStack_d0;
  plStack_150 = (long *)0x0;
  uStack_d0 = 0;
  puVar28[0x11] = uStack_c8;
  puVar28[0x12] = uStack_c0;
  uStack_c0 = 0;
  puVar28[0x13] = uStack_b8;
  puVar28[0x14] = ppuVar40;
  puVar28[0x15] = *ppuVar40;
  *(undefined4 *)(puVar28 + 0x16) = 0;
  *(undefined1 *)((long)puVar28 + 0xb4) = uVar33;
  *(undefined1 *)((long)puVar28 + 0xb5) = uVar35;
  *(undefined8 *)((long)puVar28 + 0xbe) = uStack_98;
  *(undefined8 *)((long)puVar28 + 0xb6) = uStack_a0;
  *(undefined8 *)((long)puVar28 + 0xce) = uStack_88;
  *(undefined8 *)((long)puVar28 + 0xc6) = uStack_90;
  *(undefined2 *)((long)puVar28 + 0xd6) = uStack_152;
  *(char *)(puVar28 + 0x1b) = (char)*(undefined8 *)(ppuVar40[0x1c] + 0x38);
  *(uint *)((long)puVar28 + 0xdc) = (uint)*(byte *)((long)puVar28 + 0x7d);
  lVar41 = *(long *)(param_2 + 1000) + 1;
  *(long *)(param_2 + 1000) = lVar41;
  uVar18 = *(long *)(param_2 + 0x3e0) + lVar41;
  puVar28 = (undefined8 *)(*(long *)(param_2 + 0x3c8) + (uVar18 / 0x12) * 8);
  ppuVar36 = (undefined **)*puVar28;
  ppuVar40 = (undefined **)0x0;
  if (*(long *)(param_2 + 0x3d0) != *(long *)(param_2 + 0x3c8)) {
    ppuVar40 = ppuVar36 + (uVar18 % 0x12) * 0x1c;
  }
  if (ppuVar40 == ppuVar36) {
    ppuVar40 = (undefined **)(puVar28[-1] + 0xfc0);
  }
  uVar17 = (uint)bRam0000000113370618;
  ppuVar36 = (undefined **)(ulong)(uVar17 & 0x19);
  if ((bRam0000000113370618 & 0x19) != 0) {
    param_3 = (undefined **)0x113370618;
    ppuVar39 = (undefined **)&UNK_10f7447ec;
    uVar12 = 0x58;
    pplVar16 = (long **)0x113370618;
    puVar15 = &UNK_10f7447ec;
    unaff_x30 = 0x10013e130;
    puVar9 = auStack_200;
    goto code_r0x000107c2ca88;
  }
  ppuVar39 = (undefined **)0xaaaaaaaaaaaaaaaa;
  if (*(long *)(param_2 + 0xb8) != 0) {
    puVar7 = (undefined2 *)(param_2 + 0xfb);
    puVar15 = ppuVar40[-0x15];
    do {
      puVar21 = puVar7;
      *(undefined *)((long)puVar21 + 3) = (&UNK_10f744b0c)[(ulong)puVar15 & 0xf];
      bVar10 = (undefined *)0xf < puVar15;
      puVar7 = (undefined2 *)((long)puVar21 + -1);
      puVar15 = (undefined *)((ulong)puVar15 >> 4);
    } while (bVar10);
    *(undefined1 *)(puVar21 + 1) = 0x78;
    *puVar21 = 0x3020;
    puVar15 = ppuVar40[-0x18];
    do {
      puVar21 = puVar7;
      *(undefined *)puVar21 = (&UNK_10f744b0c)[(ulong)puVar15 & 0xf];
      bVar10 = (undefined *)0xf < puVar15;
      puVar7 = (undefined2 *)((long)puVar21 + -1);
      puVar15 = (undefined *)((ulong)puVar15 >> 4);
    } while (bVar10);
    puVar21[-1] = 0x7830;
  }
  puVar15 = ppuVar40[-8];
  if (puVar15[0x208] == '\x01') {
    *(undefined1 *)(param_2 + 0x3b8) = 1;
    puVar15 = ppuVar40[-8];
  }
  if (((*(long *)(puVar15 + 0x198) == 0) && (*(long *)(puVar15 + 0x1a0) == 0)) &&
     ((*(int *)(param_2 + 0x80) != 0 || (*(long *)(param_2 + 0x330) == 0)))) {
    ppuVar38 = (undefined **)0x0;
    puVar15 = ppuVar40[-10];
  }
  else {
    *(undefined4 *)(ppuVar40 + -6) = 1;
    if (*(char *)((long)ppuVar40 + -0x2c) == '\x01') {
      if (((char)uStack_188 != '\x01') &&
         (plVar11 = plStack_190, (**(code **)(*plStack_190 + 0x10))(), plStack_180 = plVar11,
         (uStack_188 & 1) == 0)) {
        uStack_188 = CONCAT71(uStack_188._1_7_,1);
      }
      ppuVar40[-5] = (undefined *)plStack_180;
      plVar19 = plStack_180;
    }
    if (*(char *)((long)ppuVar40 + -0x2b) == '\x01') {
      (*(code *)PTR_DAT_11336f920)();
      ppuVar40[-3] = (undefined *)plVar19;
    }
    ppuVar38 = (undefined **)0x1;
    puVar15 = ppuVar40[-10];
  }
  if (((puVar15 != (undefined *)0x0) && (puVar15[4] == '\0')) && (ppuVar40[-9] != (undefined *)0x0))
  {
    if ((ppuVar40[-10] == (undefined *)0x0) || (ppuVar40[-10][4] != '\0')) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e450);
      (*pcVar8)();
    }
    pplVar29 = (long **)ppuVar40[-9];
    *(undefined1 *)((long)pplVar29[3] + 4) = 1;
    plVar11 = (long *)0x8;
    func_0x000107c60e20();
    *(int *)plVar11 = 0;
    *(undefined1 *)((long)plVar11 + 4) = 0;
    if (plVar11 != (long *)0x0) {
      do {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar10) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar19 = pplVar29[3];
    pplVar29[3] = plVar11;
    if (plVar19 != (long *)0x0) {
      do {
        iVar3 = (int)*plVar19 + -1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar10) {
          *(int *)plVar19 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        func_0x000107c60e14();
      }
    }
  }
  ppuStack_1c8 = (undefined **)0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  ppuVar37 = ppuVar40 + -0x1c;
  ppuVar30 = (undefined **)0x0;
  if (ppuVar40[-8][0x209] == '\x01') {
    uStack_1d8 = (undefined *)(CONCAT44(uStack_1d8._4_4_,uVar17) & 0xffffffff00000019);
    ppuStack_1d0 = (undefined **)0x0;
    ppuVar39 = (undefined **)ppuVar40[-0xb];
    param_3 = *(undefined ***)(ppuVar40[-8] + 400);
    uStack_1e0 = bRam0000000113370618 & 0x19;
    if ((bRam0000000113370618 & 0x19) != 0) {
      pplVar16 = (long **)0x113370618;
      puVar15 = &UNK_10f744820;
      uVar12 = 0x58;
      puStack_1e8 = &UNK_10f744820;
      unaff_x30 = 0x10013e260;
      puVar9 = auStack_200;
      goto code_r0x000107c2ca88;
    }
    uStack_1f0 = 0xaaaaaaaaaaaaaaaa;
    puStack_1e8 = (undefined *)0xaaaaaaaaaaaaaaaa;
    if (*(long *)(param_2 + 0x2d0) != *(long *)(param_2 + 0x2d8)) {
      ppuStack_140 = (undefined **)(param_2 + 0x2d0);
      puStack_148 = (undefined8 *)(param_2 + 0x2e8);
      plStack_150 = *(long **)(param_2 + 0x2e8);
      plStack_150[1] = (long)&plStack_150;
      *(long ***)(param_2 + 0x2e8) = &plStack_150;
      uStack_138 = 0;
      if (*(int *)(param_2 + 0x300) == 0) {
        uStack_130 = 0xffffffffffffffff;
      }
      else {
        uStack_130 = *(long *)(param_2 + 0x2d8) - *(long *)(param_2 + 0x2d0) >> 3;
      }
      uVar18 = *(long *)(param_2 + 0x2d8) - (long)*ppuStack_140 >> 3;
      if (uStack_130 <= uVar18) {
        uVar18 = uStack_130;
      }
      uVar20 = 0;
      if (uVar18 != 0) {
        do {
          uVar20 = uStack_138;
          if (*(long *)(*ppuStack_140 + uStack_138 * 8) != 0) break;
          uStack_138 = uStack_138 + 1;
          uVar20 = uVar18;
        } while (uVar18 != uStack_138);
      }
      if (ppuStack_140 != (undefined **)0x0) {
        pplVar29 = (long **)*ppuStack_140;
        pplVar16 = *(long ***)(param_2 + 0x2d8);
        uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
        if (uStack_130 <= uVar18) {
          uVar18 = uStack_130;
        }
        if (uVar20 != uVar18) {
          do {
            (**(code **)*pplVar29[uVar20])(pplVar29[uVar20],ppuVar37,ppuVar39 < param_3);
            if (ppuStack_140 == (undefined **)0x0) goto LAB_10013d7d0;
            uVar20 = uStack_138 + 1;
            pplVar29 = (long **)*ppuStack_140;
            pplVar16 = (long **)ppuStack_140[1];
            uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
            if (uStack_130 <= uVar18) {
              uVar18 = uStack_130;
            }
            uStack_138 = uVar20;
            if (uVar20 < uVar18) {
              do {
                pplVar29 = (long **)*ppuStack_140;
                uVar20 = uStack_138;
                if (pplVar29[uStack_138] != (long *)0x0) goto LAB_10013d948;
                uStack_138 = uStack_138 + 1;
              } while (uVar18 != uStack_138);
              pplVar29 = (long **)*ppuStack_140;
              uVar20 = uVar18;
LAB_10013d948:
              pplVar16 = (long **)ppuStack_140[1];
              uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
              if (uStack_130 <= uVar18) {
                uVar18 = uStack_130;
              }
            }
          } while (uVar20 != uVar18);
        }
        if (ppuStack_140[4] == ppuStack_140[3] && pplVar29 != pplVar16) {
          uVar18 = (long)pplVar16 + (-8 - (long)pplVar29);
          uVar17 = (uint)uVar18;
          if ((~uVar17 & 0x18) != 0) {
            uVar20 = (ulong)((uVar17 >> 3) + 1) & 3;
            do {
              if (*pplVar29 == (long *)0x0) goto LAB_10013e038;
              pplVar29 = pplVar29 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if (0x17 < uVar18) {
            pplVar29 = pplVar29 + 2;
            while( true ) {
              if (pplVar29[-2] == (long *)0x0) {
                pplVar29 = pplVar29 + -2;
                goto LAB_10013e038;
              }
              if (pplVar29[-1] == (long *)0x0) break;
              if (*pplVar29 == (long *)0x0) goto LAB_10013e038;
              if (pplVar29[1] == (long *)0x0) {
                pplVar29 = pplVar29 + 1;
                goto LAB_10013e038;
              }
              pplVar22 = pplVar29 + 2;
              pplVar29 = pplVar29 + 4;
              if (pplVar22 == pplVar16) goto LAB_10013d7b8;
            }
            pplVar29 = pplVar29 + -1;
LAB_10013e038:
            if ((pplVar29 != pplVar16) &&
               (pplVar22 = pplVar29 + 1, pplVar32 = pplVar29, pplVar22 != pplVar16)) {
              do {
                pplVar29 = pplVar32;
                if (*pplVar22 != (long *)0x0) {
                  pplVar29 = pplVar32 + 1;
                  *pplVar32 = *pplVar22;
                }
                pplVar22 = pplVar22 + 1;
                pplVar32 = pplVar29;
              } while (pplVar22 != pplVar16);
              pplVar16 = (long **)ppuStack_140[1];
            }
            if (pplVar29 != pplVar16) {
              ppuStack_140[1] = (undefined *)pplVar29;
            }
          }
        }
LAB_10013d7b8:
        if (ppuStack_140 != (undefined **)0x0) {
          ppuStack_140 = (undefined **)0x0;
          plStack_150[1] = (long)puStack_148;
          *puStack_148 = plStack_150;
        }
      }
    }
LAB_10013d7d0:
    if ((uStack_1e0 != 0) && (cRam0000000000000000 != '\0')) {
      func_0x000107c2d058(0,puStack_1e8,uStack_1f0);
    }
    if ((bRam0000000113370618 & 0x19) == 0) {
      func_0x000100142b44(ppuVar40[-8],ppuVar37,ppuVar39 < param_3);
    }
    else {
      pplVar29 = (long **)0x58;
      func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744849,0,0,0,0);
      func_0x000100142b44(ppuVar40[-8],ppuVar37,ppuVar39 < param_3);
      if (bRam0000000113370618 != 0) {
        func_0x000107c2d058(0x113370618,&UNK_10f744849,pplVar29);
      }
    }
    ppuVar36 = (undefined **)((ulong)uStack_1d8 & 0xffffffff);
    ppuVar30 = ppuStack_1d0;
    if ((int)ppuVar38 != 0) {
      param_3 = ppuStack_1d0;
      if (*(int *)(param_2 + 0x80) == 0) {
        bVar6 = bRam0000000113370618 & 0x19;
        ppuVar39 = (undefined **)(ulong)(bRam0000000113370618 & 0x19);
        if ((bRam0000000113370618 & 0x19) != 0) {
          param_3 = (undefined **)&UNK_10f744874;
          uVar12 = 0x58;
          pplVar16 = (long **)0x113370618;
          puVar15 = &UNK_10f744874;
          unaff_x30 = 0x10013e3a8;
          puVar9 = auStack_200;
          goto code_r0x000107c2ca88;
        }
        ppuVar36 = (undefined **)0xaaaaaaaaaaaaaaaa;
        param_3 = (undefined **)0xaaaaaaaaaaaaaaaa;
        if (*(long *)(param_2 + 0x308) != *(long *)(param_2 + 0x310)) {
          ppuStack_140 = (undefined **)(param_2 + 0x308);
          puStack_148 = (undefined8 *)(param_2 + 800);
          plStack_150 = *(long **)(param_2 + 800);
          plStack_150[1] = (long)&plStack_150;
          *(long ***)(param_2 + 800) = &plStack_150;
          uStack_138 = 0;
          if (*(int *)(param_2 + 0x338) == 0) {
            uStack_130 = 0xffffffffffffffff;
          }
          else {
            uStack_130 = *(long *)(param_2 + 0x310) - *(long *)(param_2 + 0x308) >> 3;
          }
          uVar18 = *(long *)(param_2 + 0x310) - (long)*ppuStack_140 >> 3;
          if (uStack_130 <= uVar18) {
            uVar18 = uStack_130;
          }
          uVar20 = 0;
          if (uVar18 != 0) {
            do {
              uVar20 = uStack_138;
              if (*(long *)(*ppuStack_140 + uStack_138 * 8) != 0) break;
              uStack_138 = uStack_138 + 1;
              uVar20 = uVar18;
            } while (uVar18 != uStack_138);
          }
          ppuVar38 = ppuStack_140;
          if (ppuStack_140 != (undefined **)0x0) {
            pplVar29 = (long **)*ppuStack_140;
            pplVar16 = *(long ***)(param_2 + 0x310);
            uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
            if (uStack_130 <= uVar18) {
              uVar18 = uStack_130;
            }
            if (uVar20 != uVar18) {
              do {
                (**(code **)(*pplVar29[uVar20] + 0x10))(pplVar29[uVar20],ppuVar40[-5]);
                ppuVar38 = ppuStack_140;
                if (ppuStack_140 == (undefined **)0x0) goto LAB_10013dde8;
                uVar20 = uStack_138 + 1;
                pplVar29 = (long **)*ppuStack_140;
                pplVar16 = (long **)ppuStack_140[1];
                uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
                if (uStack_130 <= uVar18) {
                  uVar18 = uStack_130;
                }
                uStack_138 = uVar20;
                if (uVar20 < uVar18) {
                  do {
                    pplVar29 = (long **)*ppuStack_140;
                    uVar20 = uStack_138;
                    if (pplVar29[uStack_138] != (long *)0x0) goto LAB_10013de10;
                    uStack_138 = uStack_138 + 1;
                  } while (uVar18 != uStack_138);
                  pplVar29 = (long **)*ppuStack_140;
                  uVar20 = uVar18;
LAB_10013de10:
                  pplVar16 = (long **)ppuStack_140[1];
                  uVar18 = (long)pplVar16 - (long)pplVar29 >> 3;
                  if (uStack_130 <= uVar18) {
                    uVar18 = uStack_130;
                  }
                }
              } while (uVar20 != uVar18);
            }
            ppuVar38 = ppuStack_140;
            if (ppuStack_140[4] == ppuStack_140[3] && pplVar29 != pplVar16) {
              uVar18 = (long)pplVar16 + (-8 - (long)pplVar29);
              uVar17 = (uint)uVar18;
              if ((~uVar17 & 0x18) != 0) {
                uVar20 = (ulong)((uVar17 >> 3) + 1) & 3;
                do {
                  if (*pplVar29 == (long *)0x0) goto LAB_10013e14c;
                  pplVar29 = pplVar29 + 1;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
              if (0x17 < uVar18) {
                pplVar29 = pplVar29 + 2;
                while( true ) {
                  if (pplVar29[-2] == (long *)0x0) {
                    pplVar29 = pplVar29 + -2;
                    goto LAB_10013e14c;
                  }
                  if (pplVar29[-1] == (long *)0x0) break;
                  if (*pplVar29 == (long *)0x0) goto LAB_10013e14c;
                  if (pplVar29[1] == (long *)0x0) {
                    pplVar29 = pplVar29 + 1;
                    goto LAB_10013e14c;
                  }
                  pplVar22 = pplVar29 + 2;
                  pplVar29 = pplVar29 + 4;
                  if (pplVar22 == pplVar16) goto LAB_10013ddd0;
                }
                pplVar29 = pplVar29 + -1;
LAB_10013e14c:
                if ((pplVar29 != pplVar16) &&
                   (pplVar22 = pplVar29 + 1, pplVar32 = pplVar29, pplVar22 != pplVar16)) {
                  do {
                    pplVar29 = pplVar32;
                    if (*pplVar22 != (long *)0x0) {
                      pplVar29 = pplVar32 + 1;
                      *pplVar32 = *pplVar22;
                    }
                    pplVar22 = pplVar22 + 1;
                    pplVar32 = pplVar29;
                  } while (pplVar22 != pplVar16);
                  pplVar16 = (long **)ppuStack_140[1];
                }
                if (pplVar29 != pplVar16) {
                  ppuStack_140[1] = (undefined *)pplVar29;
                }
              }
            }
LAB_10013ddd0:
            if (ppuStack_140 != (undefined **)0x0) {
              ppuStack_140 = (undefined **)0x0;
              plStack_150[1] = (long)puStack_148;
              *puStack_148 = plStack_150;
            }
          }
        }
LAB_10013dde8:
        if ((bVar6 != 0) && (cRam0000000000000000 != '\0')) {
          func_0x000107c2d058(0,0xaaaaaaaaaaaaaaaa,0xaaaaaaaaaaaaaaaa);
        }
      }
      ppuVar30 = ppuStack_1d0;
      if ((bRam0000000113370618 & 0x19) != 0) {
        pplVar16 = (long **)0x113370618;
        puVar15 = &UNK_10f7448a1;
        uVar12 = 0x58;
        unaff_x30 = 0x10013e31c;
        puVar9 = auStack_200;
        goto code_r0x000107c2ca88;
      }
      lVar41 = *(long *)(ppuVar40[-8] + 0x198);
      ppuVar36 = (undefined **)((ulong)uStack_1d8 & 0xffffffff);
      if (lVar41 != 0) {
        (**(code **)(lVar41 + 8))(lVar41,ppuVar37,ppuVar40 + -6);
      }
    }
  }
  if (((int)ppuVar36 != 0) && (*(char *)ppuVar30 != '\0')) {
    func_0x000107c2d058(ppuVar30,uStack_1c0,ppuStack_1c8);
  }
  param_1 = pcStack_1a8;
  piVar31 = *(int **)(ppuVar40[-8] + 0x1a8);
  param_3 = ppuVar30;
  if (piVar31 == (int *)0x0) {
    *pcStack_1a8 = '\x01';
    *(undefined ***)(pcStack_1a8 + 8) = ppuVar37;
    pcStack_1a8[0x10] = '\0';
    pcStack_1a8[0x11] = '\0';
    pcStack_1a8[0x12] = '\0';
    pcStack_1a8[0x13] = '\0';
    pcStack_1a8[0x14] = '\0';
    pcStack_1a8[0x15] = '\0';
    pcStack_1a8[0x16] = '\0';
    pcStack_1a8[0x17] = '\0';
  }
  else {
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar10) {
        *piVar31 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e42c);
      (*pcVar8)();
    }
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar10) {
        *piVar31 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e438);
      (*pcVar8)();
    }
    *pcStack_1a8 = '\x01';
    *(undefined ***)(pcStack_1a8 + 8) = ppuVar37;
    pcStack_1a8[0x10] = '\0';
    pcStack_1a8[0x11] = '\0';
    pcStack_1a8[0x12] = '\0';
    pcStack_1a8[0x13] = '\0';
    pcStack_1a8[0x14] = '\0';
    pcStack_1a8[0x15] = '\0';
    pcStack_1a8[0x16] = '\0';
    pcStack_1a8[0x17] = '\0';
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar10) {
        *piVar31 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x10013e444);
      (*pcVar8)();
    }
    *(int **)(pcStack_1a8 + 0x10) = piVar31;
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar10) {
        *piVar31 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piVar31 + 4))(piVar31);
    }
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar10) {
        *piVar31 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piVar31 + 4))(piVar31);
    }
  }
LAB_10013d9e4:
  if ((uStack_19c != 0) && (*pcStack_198 != '\0')) {
    func_0x000107c2d058(pcStack_198,puStack_1b0,uStack_1b8);
  }
  if (*param_1 == '\x01') {
    uVar18 = *(long *)(param_2 + 0x3e0) + *(long *)(param_2 + 1000);
    plVar11 = (long *)(param_2 + 0x3c8);
    puVar1 = (ulong *)(*plVar11 + (uVar18 / 0x12) * 8);
    plVar19 = (long *)(param_2 + 0x3d0);
    uVar20 = *puVar1;
    param_2 = 0;
    if (*plVar19 != *plVar11) {
      param_2 = uVar20 + (uVar18 % 0x12) * 0xe0;
    }
    if (param_2 == uVar20) {
      param_2 = puVar1[-1] + 0xfc0;
    }
    if ((bRam0000000113370088 & 0x19) == 0) goto LAB_10013da6c;
    func_0x000107c2ccdc(*(undefined1 *)(param_2 - 8));
    func_0x000107c2ccd8();
    if ((bRam0000000113370088 & 0x19) == 0) goto LAB_10013da6c;
    puVar15 = *(undefined **)(param_2 - 0x38);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pplVar16 = (long **)0x113370088;
      uVar12 = 0x42;
      puVar9 = (undefined1 *)register0x00000008;
      param_2 = unaff_x19;
      ppuVar27 = unaff_x20;
      pplVar29 = unaff_x21;
      param_3 = unaff_x22;
      ppuVar36 = unaff_x23;
      ppuVar39 = unaff_x24;
      ppuVar40 = unaff_x25;
      ppuVar38 = unaff_x26;
      puVar43 = unaff_x29;
      goto code_r0x000107c2ca88;
    }
  }
  else {
LAB_10013da6c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  func_0x000107c60e78();
LAB_10013e3c4:
  func_0x000107c35c58();
LAB_10013e3c8:
  pplVar16 = (long **)0x113370618;
  puVar15 = &UNK_10f7447ce;
  uVar12 = 0x58;
  unaff_x30 = 0x10013e3f4;
  puVar9 = auStack_200;
  ppuVar27 = &PTR_DAT_113370000;
  pplVar29 = pplVar16;
code_r0x000107c2ca88:
  *(undefined ***)(puVar9 + -0x50) = ppuVar38;
  *(undefined ***)(puVar9 + -0x48) = ppuVar40;
  *(undefined ***)(puVar9 + -0x40) = ppuVar39;
  *(undefined ***)(puVar9 + -0x38) = ppuVar36;
  *(undefined ***)(puVar9 + -0x30) = param_3;
  *(long ***)(puVar9 + -0x28) = pplVar29;
  *(undefined ***)(puVar9 + -0x20) = ppuVar27;
  *(ulong *)(puVar9 + -0x18) = param_2;
  *(undefined1 **)(puVar9 + -0x10) = puVar43;
  *(undefined8 *)(puVar9 + -8) = unaff_x30;
  uVar13 = uVar12;
  _pthread_self();
  _pthread_mach_thread_np();
  uVar14 = uVar13;
  func_0x000107c2d028();
  *(undefined8 *)(puVar9 + -0x58) = uVar14;
  *(undefined4 *)(puVar9 + -0x68) = 0;
  *(undefined8 *)(puVar9 + -0x70) = 0;
  func_0x00010b3355ac(uVar12,pplVar16,puVar15,0,0,0,uVar13,puVar9 + -0x58);
  return;
}



/* Entry: 10013e458; end: 10013e96f;  */

void FUN_10013e458(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  puVar7 = *(ulong **)(param_1 + 8);
  if (puVar7 == *(ulong **)(param_1 + 0x10)) {
    return;
  }
  if (*(int *)((long)puVar7 + 0x14) == 1) {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    if (uVar2 + 0x8000000000000001 < 2) {
      if (uVar1 == uVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x10013e6cc);
        (*pcVar4)();
      }
      uVar9 = (long)uVar2 >> 0x3f ^ 0x8000000000000000;
      cVar3 = (char)param_2[1];
    }
    else {
      uVar9 = (long)(uVar1 - uVar2) >> 0x3f ^ 0x8000000000000000;
      if (!SBORROW8(uVar1,uVar2)) {
        uVar9 = uVar1 - uVar2;
      }
      cVar3 = (char)param_2[1];
    }
  }
  else {
    uVar9 = *puVar7;
    cVar3 = (char)param_2[1];
  }
  if (cVar3 == '\x01') {
    if (param_2[2] < (long)uVar9) {
      return;
    }
  }
  else {
    plVar5 = (long *)*param_2;
    (**(code **)(*plVar5 + 0x10))();
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    param_2[2] = (long)plVar5;
    if ((long)plVar5 < (long)uVar9) {
      return;
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  FUN_10032eca8(lVar10,param_2,param_3);
  puVar6 = *(undefined8 **)(lVar10 + 0xd0);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,param_2);
  }
  puVar7 = *(ulong **)(param_1 + 8);
  if (puVar7 != *(ulong **)(param_1 + 0x10)) {
    do {
      if (*(int *)((long)puVar7 + 0x14) == 1) {
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        if (1 < uVar2 + 0x8000000000000001) {
          uVar9 = (long)(uVar1 - uVar2) >> 0x3f ^ 0x8000000000000000;
          if (!SBORROW8(uVar1,uVar2)) {
            uVar9 = uVar1 - uVar2;
          }
          cVar3 = (char)param_2[1];
          goto joined_r0x00010013e5c8;
        }
        if (uVar1 == uVar2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0,0x10013e6c0);
          (*pcVar4)();
        }
        uVar9 = (long)uVar2 >> 0x3f ^ 0x8000000000000000;
        if ((char)param_2[1] != '\x01') goto LAB_10013e5fc;
LAB_10013e5cc:
        lVar10 = *(long *)(param_1 + 8);
        if (param_2[2] < (long)uVar9) {
LAB_10013e658:
          if (lVar10 == *(long *)(param_1 + 0x10)) {
            return;
          }
          lVar8 = *(long *)(lVar10 + 0x18);
          func_0x00010014e6cc(lVar8,param_2);
          lVar10 = *(long *)(param_1 + 8);
          if (lVar10 == *(long *)(param_1 + 0x10)) {
            return;
          }
          do {
            lVar11 = *(long *)(lVar10 + 0x18);
            if (lVar8 == lVar11) {
              return;
            }
            func_0x00010014e6cc(lVar11,param_2);
            lVar10 = *(long *)(param_1 + 8);
            lVar8 = lVar11;
          } while (lVar10 != *(long *)(param_1 + 0x10));
          return;
        }
      }
      else {
        uVar9 = *puVar7;
        cVar3 = (char)param_2[1];
joined_r0x00010013e5c8:
        if (cVar3 == '\x01') goto LAB_10013e5cc;
LAB_10013e5fc:
        plVar5 = (long *)*param_2;
        (**(code **)(*plVar5 + 0x10))();
        if ((*(byte *)(param_2 + 1) & 1) == 0) {
          *(undefined1 *)(param_2 + 1) = 1;
        }
        param_2[2] = (long)plVar5;
        lVar10 = *(long *)(param_1 + 8);
        if ((long)plVar5 < (long)uVar9) goto LAB_10013e658;
      }
      lVar10 = *(long *)(lVar10 + 0x18);
      FUN_10032eca8(lVar10,param_2,param_3);
      puVar6 = *(undefined8 **)(lVar10 + 0xd0);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,param_2);
      }
      puVar7 = *(ulong **)(param_1 + 8);
    } while (puVar7 != *(ulong **)(param_1 + 0x10));
  }
  return;
}



/* Entry: 10013e970; end: 10013e97b;  */

void FUN_10013e970(void)

{
  return;
}



/* Entry: 10013e97c; end: 10013ec63;  */

void FUN_10013e97c(undefined1 *param_1,long *param_2,long *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  byte abStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar5 = param_2[0x29];
  if (uVar5 == 0) {
LAB_10013e9cc:
    puVar8 = (ulong *)param_2[0xd];
    if (puVar8 != (ulong *)0x0) {
      do {
        do {
          uVar5 = *puVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar3) {
            *puVar8 = 0;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (uVar5 != 0) {
          do {
            uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
            uVar9 = 1L << (uVar7 & 0x3f);
            (**(code **)(puVar8[uVar7 + 2] + 8))();
            bVar3 = uVar9 != uVar5;
            uVar5 = uVar9 ^ uVar5;
          } while (bVar3);
        }
        puVar8 = (ulong *)puVar8[0x43];
      } while (puVar8 != (ulong *)0x0);
      uVar5 = param_2[0x29];
    }
    if (uVar5 != 0) {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      uVar6 = (uint)uVar7;
      if (param_4 == 1) {
        if (uVar7 != 7) {
          do {
            uVar6 = (uint)uVar7;
            if (((uVar5 & (uint)(1 << (ulong)(uVar6 & 0x1f))) != 0) &&
               (param_2[(uVar7 & 0xff) * 3 + 0x42] != (param_2 + (uVar7 & 0xff) * 3 + 0x42)[1]))
            goto LAB_10013eb08;
            uVar7 = (ulong)(uVar6 + 1);
          } while ((uVar6 + 1 & 0xff) != 7);
          goto LAB_10013ea88;
        }
        goto LAB_10013eac0;
      }
      goto LAB_10013eb08;
    }
LAB_10013ea88:
    if ((param_4 == 1) ||
       ((**(code **)(*param_2 + 0x60))(abStack_80,param_2), (abStack_80[0] & 1) == 0)) {
LAB_10013eac0:
      *param_1 = 0;
      goto LAB_10013eb20;
    }
    if ((char)param_3[1] == '\x01') {
      plVar4 = (long *)param_3[2];
    }
    else {
      plVar4 = (long *)*param_3;
      (**(code **)(*plVar4 + 0x10))();
      if ((*(byte *)(param_3 + 1) & 1) == 0) {
        *(undefined1 *)(param_3 + 1) = 1;
      }
      param_3[2] = (long)plVar4;
    }
    if ((abStack_80[0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10013ec58);
      (*pcVar2)();
    }
    uVar5 = uStack_78;
    if (uStack_68._4_4_ == 1) {
      if (uStack_70 + 0x8000000000000001 < 2) {
        if (uStack_78 == uStack_70) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0,0x10013ec5c);
          (*pcVar2)();
        }
        uVar5 = (long)uStack_70 >> 0x3f ^ 0x8000000000000000;
      }
      else {
        uVar5 = (long)(uStack_78 - uStack_70) >> 0x3f ^ 0x8000000000000000;
        if (!SBORROW8(uStack_78,uStack_70)) {
          uVar5 = uStack_78 - uStack_70;
        }
      }
    }
    if ((long)plVar4 < (long)uVar5) {
      if (param_2[0x69] != 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        return;
      }
      *param_1 = 1;
      *(ulong *)(param_1 + 0x10) = uStack_70;
      *(ulong *)(param_1 + 8) = uStack_78;
      *(undefined8 *)(param_1 + 0x18) = uStack_68;
      return;
    }
  }
  else {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
    uVar6 = (uint)uVar7;
    if (param_4 == 1) {
      if (uVar7 != 7) {
        do {
          uVar6 = (uint)uVar7;
          if (((uVar5 & (uint)(1 << (ulong)(uVar6 & 0x1f))) != 0) &&
             (param_2[(uVar7 & 0xff) * 3 + 0x42] != (param_2 + (uVar7 & 0xff) * 3 + 0x42)[1]))
          goto LAB_10013eb08;
          uVar7 = (ulong)(uVar6 + 1);
        } while ((uVar6 + 1 & 0xff) != 7);
      }
      goto LAB_10013e9cc;
    }
LAB_10013eb08:
    if ((uint)*(byte *)(param_2[0x87] + 0x19) < (uVar6 & 0xff)) {
      if (param_4 == 1) {
        abStack_80[0] = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
      }
      else {
        (**(code **)(*param_2 + 0x60))(abStack_80,param_2);
      }
      func_0x000107c2ccd4(param_1,param_2,abStack_80,param_3);
      return;
    }
  }
  *param_1 = 1;
LAB_10013eb20:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10013ec64; end: 10013ecc3;  */

void FUN_10013ec64(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x350) + 8);
  if (puVar1 != *(undefined8 **)(*(long *)(param_2 + 0x350) + 0x10)) {
    uVar2 = *(undefined4 *)((long)puVar1 + 0x14);
    uVar3 = *puVar1;
    *(undefined8 *)(param_1 + 0x10) = puVar1[1];
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *param_1 = 1;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10013ecc4; end: 10013edaf;  */

void FUN_10013ecc4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5[0xd] == 0) {
    *(undefined1 *)((long)plVar5 + 0x86) = 1;
    lVar3 = *(long *)(param_1 + 0x20);
    iVar4 = *(int *)(lVar3 + 0x78);
    if (*(int *)(lVar3 + 0x80) <= iVar4) goto LAB_10013ed4c;
  }
  else {
    if (*(char *)((long)plVar5 + 0x84) == '\x01') {
      plVar1 = plVar5;
      (**(code **)(*plVar5 + 0x58))(plVar5);
      plVar2 = (long *)plVar5[0xd];
      (**(code **)(*plVar2 + 0x18))();
      if ((int)plVar2 != 0) {
        func_0x000107c60824(plVar5[8]);
      }
      func_0x000107c422b4(plVar1);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    iVar4 = *(int *)(lVar3 + 0x78);
    if (*(int *)(lVar3 + 0x80) <= iVar4) goto LAB_10013ed4c;
  }
  *(int *)(lVar3 + 0x80) = iVar4;
  func_0x000107c60824(*(undefined8 *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x20);
LAB_10013ed4c:
  if (*(long **)(lVar3 + 0x68) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010013ed68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar3 + 0x68) + 0x20))();
  return;
}



/* Entry: 10013edb0; end: 10013edff;  */

void FUN_10013edb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10013ecc4;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_3;
  FUN_10013c41c(&puStack_38);
  return;
}



/* Entry: 10013ee00; end: 10013f05b;  */

undefined8 FUN_10013ee00(long *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uStack_44;
  
  bVar3 = bRam0000000113370088 & 0x19;
  if ((bRam0000000113370088 & 0x19) == 0) {
    pcVar7 = (char *)0x0;
    uVar9 = 0xaaaaaaaaaaaaaaaa;
    puVar8 = (undefined *)0xaaaaaaaaaaaaaaaa;
  }
  else {
    pcVar7 = (char *)0x113370088;
    puVar8 = &UNK_10f744ed9;
    uVar9 = 0x58;
    func_0x000107c2ca88(0x58,0x113370088,&UNK_10f744ed9,0,0,0,0);
  }
  plVar10 = param_1 + 1;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  plVar4 = (long *)param_1[0x10];
  (**(code **)(*plVar4 + 0x38))();
  if ((int)plVar4 == 0) {
    (**(code **)(param_1[1] + 0x30))(plVar10);
    plVar4 = param_1 + 0x15;
    puVar1 = (undefined4 *)param_1[0x16];
    if ((undefined4 *)*plVar4 != puVar1) {
      iVar2 = puVar1[-1];
      if (iVar2 == 2) {
        uStack_44 = 0;
        if (puVar1 < (undefined4 *)param_1[0x17]) {
          *puVar1 = 0;
          param_1[0x16] = (long)(puVar1 + 1);
        }
        else {
          func_0x000107c2cd44(plVar4,&uStack_44);
          param_1[0x16] = (long)plVar4;
        }
      }
      else {
        puVar1[-1] = 0;
        if ((iVar2 != 0) && ((bRam000000011336f9a8 & 0x19) != 0)) {
          func_0x000107c2ca88(0x45,0x11336f9a8,&UNK_10f744e4b,0,0,0,0);
        }
      }
    }
    if (param_1[0x19] == 0x7fffffffffffffff) {
LAB_10013ef4c:
      if (*(char *)(*(long *)(param_1[4] + -8) + 0xf) != '\x01') goto LAB_10013ef84;
      if ((bRam0000000113370178 & 0x19) != 0) {
        uVar5 = 0x58;
        func_0x000107c2ca88(0x58,0x113370178,&UNK_10f74464f,0,0,0x880);
        if (bRam0000000113370178 != 0) {
          func_0x000107c2d058(0x113370178,&UNK_10f74464f,uVar5);
        }
      }
    }
    else {
      plVar4 = (long *)param_1[0x2a];
      (**(code **)(*plVar4 + 0x10))();
      if ((long)plVar4 < param_1[0x19]) goto LAB_10013ef4c;
    }
    pcVar6 = *(code **)(*param_1 + 0x100);
  }
  else {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
    pcVar6 = *(code **)(param_1[1] + 0x30);
    param_1 = plVar10;
  }
  (*pcVar6)(param_1);
LAB_10013ef84:
  if ((bVar3 != 0) && (*pcVar7 != '\0')) {
    func_0x000107c2d058(pcVar7,puVar8,uVar9);
  }
  return 0;
}



/* Entry: 10013f05c; end: 10013f063;  */

undefined8 FUN_10013f05c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar6 = (long *)(param_1 + -8);
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x348) + 8);
  bVar5 = puVar2 == *(undefined8 **)(*(long *)(param_1 + 0x348) + 0x10);
  if (bVar5) {
    uVar8 = 0;
    uVar13 = 0;
    uVar14 = 0;
    plVar9 = *(long **)(param_1 + 0x340);
  }
  else {
    uVar14 = puVar2[1];
    uVar13 = *puVar2;
    uVar8 = *(undefined4 *)((long)puVar2 + 0x14);
    plVar9 = *(long **)(param_1 + 0x340);
  }
  if (plVar9 != (long *)0x0) {
    uStack_5f = 0xaaaaaaaa;
    uStack_5b = 0xaaaaaa;
    uStack_48 = 0;
    plVar7 = *(long **)(param_1 + 0x28);
    uStack_60 = !bVar5;
    uStack_58 = uVar13;
    uStack_50 = uVar14;
    uStack_44 = uVar8;
    (**(code **)(*plVar7 + 0x60))();
    (**(code **)(*plVar9 + 0x18))(plVar9,&uStack_60,plVar7);
    if (((ulong)plVar9 & 1) != 0) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x358) == '\x01') {
    bVar4 = bRam0000000113370088 & 0x19;
    if ((bRam0000000113370088 & 0x19) == 0) {
      pcVar10 = (char *)0x0;
      puVar12 = (undefined *)0xaaaaaaaaaaaaaaaa;
      uVar13 = 0xaaaaaaaaaaaaaaaa;
    }
    else {
      pcVar10 = (char *)0x113370088;
      puVar12 = &UNK_10f744a47;
      uVar13 = 0x58;
      func_0x000107c2ca88(0x58,0x113370088,&UNK_10f744a47,0,0,0,0);
    }
    (**(code **)(*plVar6 + 0x70))(plVar6);
    (**(code **)(*plVar6 + 0x58))();
    plVar9 = (long *)0x7fffffffffffffff;
    if (!SCARRY8((long)plVar6,30000000)) {
      plVar9 = plVar6 + 0x393870;
    }
    *(long **)(param_1 + 0x360) = plVar9;
    *(undefined1 *)(param_1 + 0x358) = 0;
    if ((bVar4 != 0) && (*pcVar10 != '\0')) {
      func_0x000107c2d058(pcVar10,puVar12,uVar13);
    }
  }
  piVar11 = *(int **)(param_1 + 0x428);
  if (piVar11 != (int *)0x0) {
    *(undefined8 *)(param_1 + 0x428) = 0;
    (**(code **)(piVar11 + 2))(piVar11);
    do {
      iVar1 = *piVar11;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 == 1) {
      (**(code **)(piVar11 + 4))(piVar11);
    }
  }
  return 0;
}



/* Entry: 10013f064; end: 10013f22f;  */

undefined8 FUN_10013f064(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  char *pcVar9;
  int *piVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar2 = *(undefined8 **)(param_1[0x6a] + 8);
  bVar5 = puVar2 == *(undefined8 **)(param_1[0x6a] + 0x10);
  if (bVar5) {
    uVar7 = 0;
    uVar12 = 0;
    uVar13 = 0;
    plVar8 = (long *)param_1[0x69];
  }
  else {
    uVar13 = puVar2[1];
    uVar12 = *puVar2;
    uVar7 = *(undefined4 *)((long)puVar2 + 0x14);
    plVar8 = (long *)param_1[0x69];
  }
  if (plVar8 != (long *)0x0) {
    uStack_5f = 0xaaaaaaaa;
    uStack_5b = 0xaaaaaa;
    uStack_48 = 0;
    plVar6 = (long *)param_1[6];
    uStack_60 = !bVar5;
    uStack_58 = uVar12;
    uStack_50 = uVar13;
    uStack_44 = uVar7;
    (**(code **)(*plVar6 + 0x60))();
    (**(code **)(*plVar8 + 0x18))(plVar8,&uStack_60,plVar6);
    if (((ulong)plVar8 & 1) != 0) {
      return 1;
    }
  }
  if ((char)param_1[0x6c] == '\x01') {
    bVar4 = bRam0000000113370088 & 0x19;
    if ((bRam0000000113370088 & 0x19) == 0) {
      pcVar9 = (char *)0x0;
      puVar11 = (undefined *)0xaaaaaaaaaaaaaaaa;
      uVar12 = 0xaaaaaaaaaaaaaaaa;
    }
    else {
      pcVar9 = (char *)0x113370088;
      puVar11 = &UNK_10f744a47;
      uVar12 = 0x58;
      func_0x000107c2ca88(0x58,0x113370088,&UNK_10f744a47,0,0,0,0);
    }
    (**(code **)(*param_1 + 0x70))(param_1);
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x58))();
    plVar8 = (long *)0x7fffffffffffffff;
    if (!SCARRY8((long)plVar6,30000000)) {
      plVar8 = plVar6 + 0x393870;
    }
    param_1[0x6d] = (long)plVar8;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if ((bVar4 != 0) && (*pcVar9 != '\0')) {
      func_0x000107c2d058(pcVar9,puVar11,uVar12);
    }
  }
  piVar10 = (int *)param_1[0x86];
  if (piVar10 != (int *)0x0) {
    param_1[0x86] = 0;
    (**(code **)(piVar10 + 2))(piVar10);
    do {
      iVar1 = *piVar10;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 == 1) {
      (**(code **)(piVar10 + 4))(piVar10);
    }
  }
  return 0;
}



/* Entry: 10013f230; end: 10013f38f;  */

void FUN_10013f230(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_58;
  
  iVar2 = **(int **)(param_1 + 0x150);
  iVar6 = 1;
  if (1 < iVar2 + 1U) {
    iVar6 = iVar2 + 1;
  }
  **(int **)(param_1 + 0x150) = iVar6;
  if (*(char *)(param_1 + 0x178) == '\x01') {
    func_0x000107c2ce0c(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x178) = 0;
  }
  puVar3 = (undefined8 *)(param_1 + 0xa0);
  puVar1 = *(undefined4 **)(param_1 + 0xa8);
  if ((undefined4 *)*puVar3 != puVar1) {
    iVar6 = puVar1[-1];
    if (iVar6 == 2) {
      if (*(undefined4 **)(param_1 + 0xb0) <= puVar1) {
        func_0x000107c2cd44(puVar3,&stack0xffffffffffffffdc);
        *(undefined8 **)(param_1 + 0xa8) = puVar3;
        return;
      }
      *puVar1 = 0;
      *(undefined4 **)(param_1 + 0xa8) = puVar1 + 1;
    }
    else {
      puVar1[-1] = 0;
      if ((iVar6 != 0) && ((bRam000000011336f9a8 & 0x19) != 0)) {
        uVar4 = 0x45;
        _pthread_self();
        _pthread_mach_thread_np();
        uVar5 = uVar4;
        func_0x000107c2d028();
        uStack_58 = uVar5;
        func_0x00010b3355ac(0x45,0x11336f9a8,&UNK_10f744e4b,0,0,0,uVar4,&uStack_58,0,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 10013f390; end: 10013f3db;  */

long * FUN_10013f390(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return param_1;
}



/* Entry: 10013f3dc; end: 100140eb3;  */

undefined8 * FUN_10013f3dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  *param_1 = param_2;
  FUN_10013f390(&uStack_28);
  return param_1;
}



/* Entry: 100140eb4; end: 100140f6f;  */

undefined8 FUN_100140eb4(void)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  if ((bRam00000001137f4f30 & 1) == 0) {
    iVar1 = 0x137f4f30;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10012dbd0(auStack_38,&UNK_10f743db1);
      FUN_100120d44(0x1137f4f40,auStack_38);
      func_0x000107c60ca0(auStack_38);
      func_0x000107c60e4c(0x1137f4f30);
    }
  }
  if (lRam00000001137f4f38 != -1) {
    FUN_10002a2fc(0x1137f4f38,&PTR___NSConcreteGlobalBlock_110cd4830);
  }
  return 0x1137f4f40;
}



/* Entry: 100140f70; end: 100140fdb;  */

void FUN_100140f70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_100140eb4();
  plStack_28 = plRam00000001137f5008;
  if (plRam00000001137f5008 != (long *)0x0) {
    (**(code **)(*plRam00000001137f5008 + 0x10))();
  }
  uStack_30 = *param_2;
  *param_2 = 0;
  func_0x00010013fa70();
  func_0x000100140e00(&uStack_30);
  FUN_10013f390(&plStack_28);
  return;
}



/* Entry: 100140fdc; end: 1001410a7;  */

long * FUN_100140fdc(void)

{
  long *plVar1;
  long lVar2;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  long alStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_60[0] = -0x5555555600000000;
  alStack_60[2] = 0xaaaaaaaa00000000;
  alStack_60[3] = 0;
  alStack_60[4] = 0;
  alStack_60[5] = 0xaaaa010100000001;
  auStack_90[0] = 0;
  alStack_60[1] = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 1;
  uStack_64 = 1;
  func_0x000100126684(0x1137f4f40,auStack_90);
  func_0x00010013f328(auStack_90);
  plVar1 = alStack_60;
  func_0x00010013f328();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar1;
  }
  func_0x000107c60e78();
  func_0x00010013f328(auStack_90);
  func_0x00010013f328(alStack_60);
  func_0x000107c60bd8();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c3601c();
  }
  return plVar1;
}



/* Entry: 1001410a8; end: 1001412bb;  */

long * FUN_1001410a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c3601c();
  }
  return param_1;
}



/* Entry: 1001412bc; end: 1001412c3;  */

void FUN_1001412bc(void)

{
  return;
}



/* Entry: 1001412c4; end: 10014147f;  */

void FUN_1001412c4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffffffffffff;
  FUN_100132a78(param_1,&uStack_18);
  return;
}



/* Entry: 100141480; end: 10014149b;  */

void FUN_100141480(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000100141498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10014149c; end: 100142daf;  */

void FUN_10014149c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  lVar13 = param_1 + 0x20;
  func_0x000107c61264();
  if ((int)lVar13 != 0) {
    lVar13 = param_1 + 0x20;
    func_0x000107c2cfbc();
  }
  puVar15 = (undefined8 *)(param_1 + 0x60);
  uVar6 = *param_2;
  *param_2 = *puVar15;
  *puVar15 = uVar6;
  uVar6 = param_2[1];
  param_2[1] = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  uVar6 = param_2[2];
  param_2[2] = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  uVar6 = param_2[3];
  param_2[3] = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  uVar6 = param_2[4];
  param_2[4] = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  if ((*(long *)(param_1 + 0x68) != 0) && (FUN_100128a9c(), *(long *)(param_1 + 0x80) <= lVar13)) {
    lVar12 = 4;
    if (4 < *(long *)(param_1 + 0x78) + 1U) {
      lVar12 = *(long *)(param_1 + 0x78) + 1;
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      uVar7 = 0;
      do {
        uVar7 = *plVar5 + uVar7;
        plVar5 = (long *)plVar5[4];
      } while (plVar5 != (long *)0x0);
      if (lVar12 + 0x10U < uVar7) {
        func_0x000107c2cd24(puVar15);
        lVar12 = 0x7fffffffffffffff;
        if (!SCARRY8(lVar13,5000000)) {
          lVar12 = lVar13 + 5000000;
        }
        *(long *)(param_1 + 0x80) = lVar12;
      }
    }
  }
  if (((*(char *)(param_1 + 0x178) == '\x01') && (plVar5 = (long *)*param_2, plVar5 != (long *)0x0))
     && (lVar13 = plVar5[1], plVar5[2] != lVar13)) {
    lVar9 = *plVar5;
    lVar12 = 0;
    if (lVar13 + 1 != lVar9) {
      lVar12 = lVar13 + 1;
    }
    lVar13 = plVar5[3] + lVar12 * 0xa0;
    lVar14 = *(long *)(lVar13 + 0x28);
    while (lVar14 < *(long *)(param_1 + 0x180)) {
      if (lVar12 == plVar5[2]) {
        plVar5 = (long *)plVar5[4];
        if (plVar5 == (long *)0x0) goto LAB_1001417cc;
        lVar9 = *plVar5;
        lVar12 = plVar5[1];
      }
      lVar1 = 0;
      if (lVar12 + 1 != lVar9) {
        lVar1 = lVar12 + 1;
      }
      lVar13 = plVar5[3] + lVar1 * 0xa0;
      lVar12 = lVar1;
      lVar14 = *(long *)(lVar13 + 0x28);
    }
    *(undefined1 *)(param_1 + 0x178) = 0;
    uVar6 = *(undefined8 *)(lVar13 + 0x88);
    if (*(int *)(lVar13 + 0x78) == 0) {
      uVar10 = *(ulong *)(lVar13 + 0x70);
      uVar7 = *(ulong *)(lVar13 + 0x30);
      if (uVar10 + 0x8000000000000001 < 2) {
        uVar11 = uVar10;
        if (uVar7 != uVar10 && (uVar7 == 0x7fffffffffffffff || uVar7 == 0x8000000000000000)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x100141664);
          (*pcVar3)();
        }
      }
      else {
        uVar11 = (long)(uVar7 + uVar10) >> 0x3f ^ 0x8000000000000000;
        if (!SCARRY8(uVar7,uVar10)) {
          uVar11 = uVar7 + uVar10;
        }
      }
    }
    else {
      uVar11 = *(ulong *)(lVar13 + 0x30);
    }
    uVar2 = *(undefined4 *)(lVar13 + 0x68);
    if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
    puVar15 = (undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = uVar6;
    *(ulong *)(param_1 + 0x168) = uVar11;
    *(undefined4 *)(param_1 + 0x170) = uVar2;
    puVar8 = *(undefined8 **)(param_1 + 0xe0);
    if (*(char *)(puVar8 + 10) == '\x01') {
      if (puVar8[2] != 0) {
        plVar5 = (long *)*puVar8;
        lVar13 = 0;
        if (plVar5[1] + 1 != *plVar5) {
          lVar13 = plVar5[1] + 1;
        }
        lVar13 = plVar5[3] + lVar13 * 0xa0;
        if (((*(int *)(lVar13 + 0x78) == 0) && (*(long *)(lVar13 + 0x70) + 0x8000000000000001U < 2))
           && (lVar12 = *(long *)(lVar13 + 0x30),
              lVar12 != *(long *)(lVar13 + 0x70) &&
              (lVar12 == 0x7fffffffffffffff || lVar12 == -0x8000000000000000))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x10014183c);
          (*pcVar3)();
        }
      }
      uVar16 = *(undefined8 *)(param_1 + 0x168);
      uVar6 = *puVar15;
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(param_1 + 0x170);
      puVar8[0xc] = uVar16;
      puVar8[0xb] = uVar6;
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x168);
      uVar6 = *puVar15;
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(param_1 + 0x170);
      puVar8[0xc] = uVar16;
      puVar8[0xb] = uVar6;
      *(undefined1 *)(puVar8 + 10) = 1;
    }
    if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100141844);
      (*pcVar3)();
    }
    puVar8 = *(undefined8 **)(param_1 + 0xd8);
    if (*(char *)(puVar8 + 10) == '\x01') {
      if (puVar8[2] != 0) {
        plVar5 = (long *)*puVar8;
        lVar13 = 0;
        if (plVar5[1] + 1 != *plVar5) {
          lVar13 = plVar5[1] + 1;
        }
        lVar13 = plVar5[3] + lVar13 * 0xa0;
        if (((*(int *)(lVar13 + 0x78) == 0) && (*(long *)(lVar13 + 0x70) + 0x8000000000000001U < 2))
           && (lVar12 = *(long *)(lVar13 + 0x30),
              lVar12 != *(long *)(lVar13 + 0x70) &&
              (lVar12 == 0x7fffffffffffffff || lVar12 == -0x8000000000000000))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x100141848);
          (*pcVar3)();
        }
      }
      uVar16 = *(undefined8 *)(param_1 + 0x168);
      uVar6 = *puVar15;
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(param_1 + 0x170);
      puVar8[0xc] = uVar16;
      puVar8[0xb] = uVar6;
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x168);
      uVar6 = *puVar15;
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(param_1 + 0x170);
      puVar8[0xc] = uVar16;
      puVar8[0xb] = uVar6;
      *(undefined1 *)(puVar8 + 10) = 1;
    }
  }
LAB_1001417cc:
  *(bool *)(param_1 + 0x88) = *(long *)(*(long *)(param_1 + 0xe0) + 0x10) == 0;
  if (*(long *)(param_1 + 0xd0) == 0) {
    bVar4 = 0;
    if (*(char *)(param_1 + 0x148) != '\0') {
      bVar4 = *(byte *)(param_1 + 0x158) ^ 1;
    }
    *(byte *)(param_1 + 0x89) = bVar4 & 1;
  }
  else {
    *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x20);
  return;
}



/* Entry: 100142db0; end: 100142e3f;  */

void FUN_100142db0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8;
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x58))(param_1);
    uVar2 = uVar3;
    func_0x000107c6081c(0x7fefffffffffffff,uVar3,0);
    func_0x000107c422b4(plVar1);
  } while ((int)uVar2 - 3U < 0xfffffffe);
  return;
}



/* Entry: 100142e40; end: 10014376b;  */

void FUN_100142e40(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  
  alStack_58[1] = 0xaaaaaaaaaaaaaaaa;
  alStack_58[2] = 0xaaaaaaaaaaaaaaaa;
  alStack_58[0] = -0x5555555555555556;
  FUN_1001412bc();
  plVar4 = alStack_58;
  func_0x0001001430a4(plVar4,param_1,param_2);
  uVar8 = param_2[2];
  plVar6 = plVar4;
  if ((iRam000000011383c638 != 0) && (iRam000000011383c638 != 0)) {
    func_0x000107c2ce94();
    plVar6 = plVar4 + 4;
    uStack_98 = uVar8;
    if ((ulong)(plVar4[5] - *plVar6) < 0x80) {
      func_0x000107c2ce98(plVar6,&uStack_98);
    }
  }
  if ((iRam000000011383c638 != 0) && (iRam000000011383c638 != 0)) {
    func_0x000107c2ce94();
    if (plVar6[5] - plVar6[4] != 8) {
      plVar6[5] = plVar6[5] + -8;
    }
  }
  uStack_90 = param_2[4];
  uStack_98 = 0xc001c0ded017d00d;
  uStack_80 = param_2[8];
  uStack_88 = param_2[7];
  uStack_70 = param_2[10];
  uStack_78 = param_2[9];
  uStack_68 = (ulong)*(uint *)(param_2 + 0xb);
  uStack_60 = 0xd00d1d1d178119;
  func_0x000100123990(&uStack_98);
  if ((bRam000000011383acd0 & 1) == 0) {
    iVar3 = 0x1383acd0;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      uRam000000011383acc8 = 0xffffffff;
      func_0x000100126cd4(0x11383acc8,0);
      func_0x000107c60e4c(0x11383acd0);
    }
  }
  uVar5 = uRam000000011336f908;
  func_0x000107c61248();
  if ((uVar5 & 0xfffffffffffffffc) == 0) {
LAB_100142f50:
    lVar9 = 0;
    uVar5 = uRam000000011336f908;
    func_0x000107c61248();
    uVar5 = uVar5 & 0xfffffffffffffffc;
    if (uVar5 != 0) goto LAB_100142f64;
LAB_100143058:
    if (param_2 != (undefined8 *)0x0) {
      func_0x000100126e0c();
      goto LAB_100142f64;
    }
  }
  else {
    plVar4 = (long *)((uVar5 & 0xfffffffffffffffc) + (long)(int)uRam000000011383acc8 * 0x10);
    if ((int)plVar4[1] != uRam000000011383acc8._4_4_) goto LAB_100142f50;
    lVar9 = *plVar4;
    uVar5 = uRam000000011336f908;
    func_0x000107c61248();
    uVar5 = uVar5 & 0xfffffffffffffffc;
    if (uVar5 == 0) goto LAB_100143058;
LAB_100142f64:
    *(undefined8 **)(uVar5 + (long)(int)uRam000000011383acc8 * 0x10) = param_2;
    *(int *)(uVar5 + (long)(int)uRam000000011383acc8 * 0x10 + 8) = uRam000000011383acc8._4_4_;
  }
  piVar7 = (int *)*param_2;
  *param_2 = 0;
  (**(code **)(piVar7 + 2))(piVar7);
  if (piVar7 != (int *)0x0) {
    do {
      iVar3 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(piVar7 + 4))(piVar7);
    }
  }
  uVar5 = uRam000000011336f908;
  func_0x000107c61248();
  uVar5 = uVar5 & 0xfffffffffffffffc;
  if (uVar5 == 0) {
    if (lVar9 == 0) goto LAB_100142fe4;
    func_0x000100126e0c();
  }
  *(long *)(uVar5 + (long)(int)uRam000000011383acc8 * 0x10) = lVar9;
  *(int *)(uVar5 + (long)(int)uRam000000011383acc8 * 0x10 + 8) = uRam000000011383acc8._4_4_;
LAB_100142fe4:
  uStack_98 = 0;
  uStack_60 = 0;
  func_0x000100123990(&uStack_98);
  func_0x0001001333e0(alStack_58);
  return;
}



/* Entry: 10014376c; end: 100143773;  */

/* WARNING: Removing unreachable block (ram,0x000100144368) */
/* WARNING: Removing unreachable block (ram,0x000100144238) */

void FUN_10014376c(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  char *pcVar23;
  undefined *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined *puStack_c0;
  long *plStack_a0;
  ulong uStack_98;
  long *plStack_90;
  double dStack_88;
  double *pdStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_98 = 0;
  plStack_a0 = *(long **)(param_1 + 0x448);
  plStack_90 = (long *)0x0;
  uVar10 = *(long *)(param_1 + 0x3d8) + *(long *)(param_1 + 0x3e0);
  plVar7 = (long *)(*(long *)(param_1 + 0x3c0) + (uVar10 / 0x12) * 8);
  lVar16 = *plVar7;
  lVar20 = 0;
  if (*(long *)(param_1 + 0x3c8) != *(long *)(param_1 + 0x3c0)) {
    lVar20 = lVar16 + (uVar10 % 0x12) * 0xe0;
  }
  if (lVar20 == lVar16) {
    lVar20 = plVar7[-1] + 0xfc0;
  }
  plVar7 = (long *)(param_1 + -8);
  if ((bRam0000000113370088 & 0x19) != 0) {
    plVar7 = (long *)0x45;
    func_0x000107c2ca88(0x45,0x113370088,*(undefined8 *)(lVar20 + -0x38),0,0,0,0);
    if ((bRam0000000113370088 & 0x19) != 0) {
      uVar10 = (ulong)*(byte *)(lVar20 + -8);
      func_0x000107c2ccdc(uVar10);
      plVar7 = (long *)0x45;
      func_0x000107c2ca88(0x45,0x113370088,uVar10,0,0,0,0);
    }
  }
  bVar3 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcVar17 = (char *)0x0;
    puVar19 = (undefined *)0xaaaaaaaaaaaaaaaa;
    plVar9 = (long *)0xaaaaaaaaaaaaaaaa;
    cVar1 = *(char *)(*(long *)(lVar20 + -0x40) + 0x209);
  }
  else {
    pcVar17 = (char *)0x113370618;
    puVar19 = &UNK_10f7448c4;
    plVar9 = (long *)0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f7448c4,0,0,0,0);
    cVar1 = *(char *)(*(long *)(lVar20 + -0x40) + 0x209);
    plVar7 = plVar9;
  }
  if (cVar1 != '\x01') goto LAB_100143b28;
  lVar16 = lVar20 + -0xe0;
  bVar2 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    plVar22 = (long *)0x0;
    plVar25 = (long *)0xaaaaaaaaaaaaaaaa;
    puVar24 = (undefined *)0xaaaaaaaaaaaaaaaa;
    cVar1 = *(char *)(lVar20 + -0x2c);
  }
  else {
    plVar22 = (long *)0x113370618;
    puVar24 = &UNK_10f7448f7;
    plVar25 = (long *)0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f7448f7,0,0,0,0);
    cVar1 = *(char *)(lVar20 + -0x2c);
    plVar7 = plVar25;
  }
  if ((cVar1 == '\x01') &&
     (plVar7 = *(long **)(*(long *)(lVar20 + -0x40) + 0x1a0), plVar7 != (long *)0x0)) {
    (*(code *)plVar7[1])(plVar7,lVar16,lVar20 + -0x30,&plStack_a0);
  }
  if ((bVar2 != 0) && ((char)*plVar22 != '\0')) {
    func_0x000107c2d058(plVar22,puVar24,plVar25);
    plVar7 = plVar22;
  }
  iVar6 = *(int *)(lVar20 + -0x30);
  if ((*(long *)(*(long *)(lVar20 + -0x40) + 0x198) == 0) &&
     (*(long *)(*(long *)(lVar20 + -0x40) + 0x1a0) == 0)) {
    if (*(int *)(param_1 + 0x78) == 0) {
      bVar5 = *(long *)(param_1 + 0x328) != 0;
      if ((*(long *)(param_1 + 0x328) != 0) && (iVar6 != 0)) goto LAB_1001438dc;
    }
    else {
      bVar5 = false;
    }
    if (iVar6 != 0) {
LAB_100143970:
      if ((*(char *)(lVar20 + -0x2c) == '\x01') && (*(int *)(param_1 + 0x78) == 0)) {
        bVar2 = bRam0000000113370618 & 0x19;
        if ((bRam0000000113370618 & 0x19) == 0) {
          pcVar23 = (char *)0x0;
          uVar26 = 0xaaaaaaaaaaaaaaaa;
          puStack_c0 = (undefined *)0xaaaaaaaaaaaaaaaa;
          if (*(long *)(param_1 + 0x300) != *(long *)(param_1 + 0x308)) {
LAB_100143f50:
            plStack_78 = (long *)(param_1 + 0x300);
            pdStack_80 = (double *)(param_1 + 0x318);
            dStack_88 = *(double *)(param_1 + 0x318);
            *(double **)((long)dStack_88 + 8) = &dStack_88;
            *(double **)(param_1 + 0x318) = &dStack_88;
            uStack_70 = 0;
            if (*(int *)(param_1 + 0x330) == 0) {
              uStack_68 = 0xffffffffffffffff;
            }
            else {
              uStack_68 = *(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x300) >> 3;
            }
            uVar10 = *(long *)(param_1 + 0x308) - *plStack_78 >> 3;
            if (uStack_68 <= uVar10) {
              uVar10 = uStack_68;
            }
            uVar15 = 0;
            if (uVar10 != 0) {
              do {
                uVar15 = uStack_70;
                if (*(long *)(*plStack_78 + uStack_70 * 8) != 0) break;
                uStack_70 = uStack_70 + 1;
                uVar15 = uVar10;
              } while (uVar10 != uStack_70);
            }
            if (plStack_78 != (long *)0x0) {
              plVar7 = (long *)*plStack_78;
              plVar22 = *(long **)(param_1 + 0x308);
              uVar10 = (long)plVar22 - (long)plVar7 >> 3;
              if (uStack_68 <= uVar10) {
                uVar10 = uStack_68;
              }
              if (uVar15 != uVar10) {
                do {
                  (**(code **)(*(long *)plVar7[uVar15] + 0x18))
                            ((long *)plVar7[uVar15],*(undefined8 *)(lVar20 + -0x28),
                             *(undefined8 *)(lVar20 + -0x20));
                  if (plStack_78 == (long *)0x0) goto LAB_1001440ac;
                  uVar15 = uStack_70 + 1;
                  plVar7 = (long *)*plStack_78;
                  plVar22 = (long *)plStack_78[1];
                  uVar10 = (long)plVar22 - (long)plVar7 >> 3;
                  if (uStack_68 <= uVar10) {
                    uVar10 = uStack_68;
                  }
                  uStack_70 = uVar15;
                  if (uVar15 < uVar10) {
                    do {
                      plVar7 = (long *)*plStack_78;
                      uVar15 = uStack_70;
                      if (plVar7[uStack_70] != 0) goto LAB_1001440d8;
                      uStack_70 = uStack_70 + 1;
                    } while (uVar10 != uStack_70);
                    plVar7 = (long *)*plStack_78;
                    uVar15 = uVar10;
LAB_1001440d8:
                    plVar22 = (long *)plStack_78[1];
                    uVar10 = (long)plVar22 - (long)plVar7 >> 3;
                    if (uStack_68 <= uVar10) {
                      uVar10 = uStack_68;
                    }
                  }
                } while (uVar15 != uVar10);
              }
              if (plStack_78[4] == plStack_78[3] && plVar7 != plVar22) {
                uVar10 = (long)plVar22 + (-8 - (long)plVar7);
                uVar12 = (uint)uVar10;
                if ((~uVar12 & 0x18) != 0) {
                  uVar15 = (ulong)((uVar12 >> 3) + 1) & 3;
                  do {
                    if (*plVar7 == 0) goto LAB_100144318;
                    plVar7 = plVar7 + 1;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                if (0x17 < uVar10) {
                  plVar7 = plVar7 + 2;
                  while( true ) {
                    if (plVar7[-2] == 0) {
                      plVar7 = plVar7 + -2;
                      goto LAB_100144318;
                    }
                    if (plVar7[-1] == 0) break;
                    if (*plVar7 == 0) goto LAB_100144318;
                    if (plVar7[1] == 0) {
                      plVar7 = plVar7 + 1;
                      goto LAB_100144318;
                    }
                    plVar25 = plVar7 + 2;
                    plVar7 = plVar7 + 4;
                    if (plVar25 == plVar22) goto LAB_100144094;
                  }
                  plVar7 = plVar7 + -1;
LAB_100144318:
                  if ((plVar7 != plVar22) &&
                     (plVar25 = plVar7 + 1, plVar14 = plVar7, plVar25 != plVar22)) {
                    do {
                      plVar7 = plVar14;
                      if (*plVar25 != 0) {
                        plVar7 = plVar14 + 1;
                        *plVar14 = *plVar25;
                      }
                      plVar25 = plVar25 + 1;
                      plVar14 = plVar7;
                    } while (plVar25 != plVar22);
                    plVar22 = (long *)plStack_78[1];
                  }
                  if (plVar7 != plVar22) {
                    plStack_78[1] = (long)plVar7;
                  }
                }
              }
LAB_100144094:
              if (plStack_78 != (long *)0x0) {
                plStack_78 = (long *)0x0;
                *(double **)((long)dStack_88 + 8) = pdStack_80;
                *pdStack_80 = dStack_88;
              }
            }
          }
        }
        else {
          pcVar23 = (char *)0x113370618;
          uVar26 = 0x58;
          puStack_c0 = &UNK_10f74491c;
          func_0x000107c2ca88(0x58,0x113370618,&UNK_10f74491c,0,0,0,0);
          if (*(long *)(param_1 + 0x300) != *(long *)(param_1 + 0x308)) goto LAB_100143f50;
        }
LAB_1001440ac:
        if ((bVar2 != 0) && (*pcVar23 != '\0')) {
          func_0x000107c2d058(pcVar23,puStack_c0,uVar26);
        }
      }
    }
  }
  else {
    if (iVar6 != 0) {
LAB_1001438dc:
      if (iVar6 != 2) {
        *(undefined4 *)(lVar20 + -0x30) = 2;
        if (*(char *)(lVar20 + -0x2c) == '\x01') {
          if (((char)uStack_98 != '\x01') &&
             (plVar7 = plStack_a0, (**(code **)(*plStack_a0 + 0x10))(), plStack_90 = plVar7,
             (uStack_98 & 1) == 0)) {
            uStack_98 = CONCAT71(uStack_98._1_7_,1);
          }
          *(long **)(lVar20 + -0x20) = plStack_90;
          plVar7 = plStack_90;
        }
        if (*(char *)(lVar20 + -0x2b) == '\x01') {
          (*(code *)PTR_DAT_11336f920)();
          *(long **)(lVar20 + -0x10) = plVar7;
        }
      }
      bVar5 = true;
      goto LAB_100143970;
    }
    bVar5 = true;
  }
  bVar2 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcVar23 = (char *)0x0;
    uVar26 = 0xaaaaaaaaaaaaaaaa;
    puStack_c0 = (undefined *)0xaaaaaaaaaaaaaaaa;
    if (*(long *)(param_1 + 0x2c8) != *(long *)(param_1 + 0x2d0)) {
LAB_1001439bc:
      plStack_78 = (long *)(param_1 + 0x2c8);
      pdStack_80 = (double *)(param_1 + 0x2e0);
      dStack_88 = *(double *)(param_1 + 0x2e0);
      *(double **)((long)dStack_88 + 8) = &dStack_88;
      *(double **)(param_1 + 0x2e0) = &dStack_88;
      uStack_70 = 0;
      if (*(int *)(param_1 + 0x2f8) == 0) {
        uStack_68 = 0xffffffffffffffff;
      }
      else {
        uStack_68 = *(long *)(param_1 + 0x2d0) - *(long *)(param_1 + 0x2c8) >> 3;
      }
      uVar10 = *(long *)(param_1 + 0x2d0) - *plStack_78 >> 3;
      if (uStack_68 <= uVar10) {
        uVar10 = uStack_68;
      }
      uVar15 = 0;
      if (uVar10 != 0) {
        do {
          uVar15 = uStack_70;
          if (*(long *)(*plStack_78 + uStack_70 * 8) != 0) break;
          uStack_70 = uStack_70 + 1;
          uVar15 = uVar10;
        } while (uVar10 != uStack_70);
      }
      if (plStack_78 != (long *)0x0) {
        plVar7 = (long *)*plStack_78;
        plVar22 = *(long **)(param_1 + 0x2d0);
        uVar10 = (long)plVar22 - (long)plVar7 >> 3;
        if (uStack_68 <= uVar10) {
          uVar10 = uStack_68;
        }
        if (uVar15 != uVar10) {
          do {
            (**(code **)(*(long *)plVar7[uVar15] + 8))((long *)plVar7[uVar15],lVar16);
            if (plStack_78 == (long *)0x0) goto LAB_100143a8c;
            uVar15 = uStack_70 + 1;
            plVar7 = (long *)*plStack_78;
            plVar22 = (long *)plStack_78[1];
            uVar10 = (long)plVar22 - (long)plVar7 >> 3;
            if (uStack_68 <= uVar10) {
              uVar10 = uStack_68;
            }
            uStack_70 = uVar15;
            if (uVar15 < uVar10) {
              do {
                plVar7 = (long *)*plStack_78;
                uVar15 = uStack_70;
                if (plVar7[uStack_70] != 0) goto LAB_100143c68;
                uStack_70 = uStack_70 + 1;
              } while (uVar10 != uStack_70);
              plVar7 = (long *)*plStack_78;
              uVar15 = uVar10;
LAB_100143c68:
              plVar22 = (long *)plStack_78[1];
              uVar10 = (long)plVar22 - (long)plVar7 >> 3;
              if (uStack_68 <= uVar10) {
                uVar10 = uStack_68;
              }
            }
          } while (uVar15 != uVar10);
        }
        if (plStack_78[4] == plStack_78[3] && plVar7 != plVar22) {
          uVar10 = (long)plVar22 + (-8 - (long)plVar7);
          uVar12 = (uint)uVar10;
          if ((~uVar12 & 0x18) != 0) {
            uVar15 = (ulong)((uVar12 >> 3) + 1) & 3;
            do {
              if (*plVar7 == 0) goto LAB_1001441e8;
              plVar7 = plVar7 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (0x17 < uVar10) {
            plVar7 = plVar7 + 2;
            while( true ) {
              if (plVar7[-2] == 0) {
                plVar7 = plVar7 + -2;
                goto LAB_1001441e8;
              }
              if (plVar7[-1] == 0) break;
              if (*plVar7 == 0) goto LAB_1001441e8;
              if (plVar7[1] == 0) {
                plVar7 = plVar7 + 1;
                goto LAB_1001441e8;
              }
              plVar25 = plVar7 + 2;
              plVar7 = plVar7 + 4;
              if (plVar25 == plVar22) goto LAB_100143a74;
            }
            plVar7 = plVar7 + -1;
LAB_1001441e8:
            if ((plVar7 != plVar22) && (plVar25 = plVar7 + 1, plVar14 = plVar7, plVar25 != plVar22))
            {
              do {
                plVar7 = plVar14;
                if (*plVar25 != 0) {
                  plVar7 = plVar14 + 1;
                  *plVar14 = *plVar25;
                }
                plVar25 = plVar25 + 1;
                plVar14 = plVar7;
              } while (plVar25 != plVar22);
              plVar22 = (long *)plStack_78[1];
            }
            if (plVar7 != plVar22) {
              plStack_78[1] = (long)plVar7;
            }
          }
        }
LAB_100143a74:
        if (plStack_78 != (long *)0x0) {
          plStack_78 = (long *)0x0;
          *(double **)((long)dStack_88 + 8) = pdStack_80;
          *pdStack_80 = dStack_88;
        }
      }
    }
  }
  else {
    pcVar23 = (char *)0x113370618;
    uVar26 = 0x58;
    puStack_c0 = &UNK_10f744948;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744948,0,0,0,0);
    if (*(long *)(param_1 + 0x2c8) != *(long *)(param_1 + 0x2d0)) goto LAB_1001439bc;
  }
LAB_100143a8c:
  if ((bVar2 != 0) && (*pcVar23 != '\0')) {
    func_0x000107c2d058(pcVar23,puStack_c0,uVar26);
  }
  if ((bRam0000000113370618 & 0x19) == 0) {
    FUN_10014453c(*(undefined8 *)(lVar20 + -0x40),lVar16);
  }
  else {
    uVar26 = 0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744970,0,0,0,0);
    FUN_10014453c(*(undefined8 *)(lVar20 + -0x40),lVar16);
    if (bRam0000000113370618 != 0) {
      func_0x000107c2d058(0x113370618,&UNK_10f744970,uVar26);
    }
  }
  if (((((bVar5 & *(byte *)(lVar20 + -0x2c)) == 1) &&
       (uVar10 = *(long *)(lVar20 + -0x20) - *(long *)(lVar20 + -0x28), 50000 < (long)uVar10)) &&
      (*(int *)(param_1 + 0x78) == 0)) && ((bRam000000011336f9c8 & 0x19) != 0)) {
    if (uVar10 + 0x8000000000000001 < 2) {
      dStack_88 = INFINITY;
    }
    else {
      dStack_88 = (double)uVar10 / 1000000.0;
    }
    func_0x000107c2ccec(0x49,0x11336f9c8,&UNK_10f74499a,0,0,8,0,"duration",&dStack_88);
  }
LAB_100143b28:
  if ((bVar3 != 0) && (*pcVar17 != '\0')) {
    func_0x000107c2d058(pcVar17,puVar19,plVar9);
  }
  uVar10 = (*(long *)(param_1 + 0x3e0) + *(long *)(param_1 + 0x3d8)) - 1;
  puVar18 = (undefined8 *)
            (*(long *)(*(long *)(param_1 + 0x3c0) + (uVar10 / 0x12) * 8) + (uVar10 % 0x12) * 0xe0);
  piVar8 = (int *)puVar18[0x12];
  if (piVar8 != (int *)0x0) {
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000107c60e14();
    }
  }
  plVar7 = (long *)puVar18[0x10];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  piVar8 = (int *)*puVar18;
  if (piVar8 != (int *)0x0) {
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 + -1 == 0) {
      (**(code **)(piVar8 + 4))();
    }
  }
  lVar16 = *(long *)(param_1 + 0x3c8);
  lVar13 = *(long *)(param_1 + 0x3e0);
  lVar20 = 0;
  if (lVar16 != *(long *)(param_1 + 0x3c0)) {
    lVar20 = (lVar16 - *(long *)(param_1 + 0x3c0) >> 3) * 0x12 + -1;
  }
  *(long *)(param_1 + 0x3e0) = lVar13 + -1;
  if (0x23 < (lVar20 - (lVar13 + *(long *)(param_1 + 0x3d8))) + 1U) {
    func_0x000107c60e14(*(undefined8 *)(lVar16 + -8));
    *(long *)(param_1 + 0x3c8) = *(long *)(param_1 + 0x3c8) + -8;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    plVar7 = *(long **)(param_1 + 0x380);
    if (plVar7 != (long *)(param_1 + 0x388)) {
      plVar9 = (long *)(param_1 + 0x370);
      do {
        lVar20 = plVar7[4];
        if (((*(long *)(*(long *)(lVar20 + 0xd8) + 0x10) == 0) &&
            (*(long *)(lVar20 + 0xe8) == *(long *)(lVar20 + 0xf0))) &&
           (*(long *)(*(long *)(lVar20 + 0xe0) + 0x10) == 0)) {
          iVar6 = (int)lVar20 + 0x20;
          func_0x000107c61264();
          if (iVar6 == 0) {
            lVar16 = *(long *)(lVar20 + 0x70);
            func_0x000107c61268(lVar20 + 0x20);
          }
          else {
            func_0x000107c2cfbc(lVar20 + 0x20);
            lVar16 = *(long *)(lVar20 + 0x70);
            func_0x000107c61268(lVar20 + 0x20);
          }
          if (lVar16 != 0) goto LAB_100143d40;
          dStack_88 = (double)plVar7[5];
          plVar7[5] = 0;
          func_0x000107c2cccc((long *)(param_1 + -8),&dStack_88);
          dVar4 = dStack_88;
          dStack_88 = 0.0;
          if (dVar4 != 0.0) {
            func_0x000107c2ccfc();
            func_0x000107c60e14();
          }
          plVar22 = (long *)*plVar9;
          if (plVar22 != (long *)0x0) {
            plVar14 = plVar22;
            plVar25 = plVar9;
            do {
              lVar20 = 8;
              if ((ulong)plVar7[4] <= (ulong)plVar14[4]) {
                lVar20 = 0;
                plVar25 = plVar14;
              }
              plVar14 = *(long **)((long)plVar14 + lVar20);
            } while (plVar14 != (long *)0x0);
            if ((plVar25 != plVar9) && ((ulong)plVar25[4] <= (ulong)plVar7[4])) {
              plVar14 = (long *)plVar25[1];
              plVar21 = plVar25;
              if ((long *)plVar25[1] == (long *)0x0) {
                do {
                  plVar11 = (long *)plVar21[2];
                  bVar5 = (long *)*plVar11 != plVar21;
                  plVar21 = plVar11;
                } while (bVar5);
              }
              else {
                do {
                  plVar11 = plVar14;
                  plVar14 = (long *)*plVar11;
                } while ((long *)*plVar11 != (long *)0x0);
              }
              if (*(long **)(param_1 + 0x368) == plVar25) {
                *(long **)(param_1 + 0x368) = plVar11;
              }
              *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x378) + -1;
              FUN_1001a4a3c(plVar22,plVar25);
              func_0x000107c60e14(plVar25);
            }
          }
          plVar25 = (long *)plVar7[1];
          plVar22 = plVar25;
          plVar14 = plVar7;
          if (plVar25 == (long *)0x0) {
            do {
              plVar21 = (long *)plVar14[2];
              bVar5 = (long *)*plVar21 != plVar14;
              plVar22 = plVar7;
              plVar14 = plVar21;
            } while (bVar5);
            do {
              plVar14 = (long *)plVar22[2];
              bVar5 = (long *)*plVar14 != plVar22;
              plVar22 = plVar14;
            } while (bVar5);
          }
          else {
            do {
              plVar21 = plVar22;
              plVar22 = (long *)*plVar21;
            } while ((long *)*plVar21 != (long *)0x0);
            do {
              plVar14 = plVar25;
              plVar25 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x380) == plVar7) {
            *(long **)(param_1 + 0x380) = plVar14;
          }
          *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + -1;
          FUN_1001a4a3c(*(undefined8 *)(param_1 + 0x388),plVar7);
          lVar20 = plVar7[5];
          plVar7[5] = 0;
          if (lVar20 != 0) {
            func_0x000107c2ccfc();
            func_0x000107c60e14();
          }
          func_0x000107c60e14(plVar7);
          plVar7 = plVar21;
        }
        else {
LAB_100143d40:
          plVar22 = (long *)plVar7[1];
          plVar25 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar25[2];
              bVar5 = (long *)*plVar7 != plVar25;
              plVar25 = plVar7;
            } while (bVar5);
          }
          else {
            do {
              plVar7 = plVar22;
              plVar22 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
      } while (plVar7 != (long *)(param_1 + 0x388));
    }
    FUN_1001447a4(*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 **)(param_1 + 0x398) = (undefined8 *)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  return;
}



/* Entry: 100143774; end: 10014453b;  */

/* WARNING: Removing unreachable block (ram,0x000100144368) */
/* WARNING: Removing unreachable block (ram,0x000100144238) */

void FUN_100143774(long *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  char *pcVar23;
  undefined *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined *puStack_c0;
  long *plStack_a0;
  ulong uStack_98;
  long *plStack_90;
  double dStack_88;
  double *pdStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_98 = 0;
  plStack_a0 = (long *)param_1[0x8a];
  plStack_90 = (long *)0x0;
  plVar7 = (long *)(param_1[0x79] + ((ulong)(param_1[0x7c] + param_1[0x7d]) / 0x12) * 8);
  lVar16 = *plVar7;
  lVar20 = 0;
  if (param_1[0x7a] != param_1[0x79]) {
    lVar20 = lVar16 + ((ulong)(param_1[0x7c] + param_1[0x7d]) % 0x12) * 0xe0;
  }
  if (lVar20 == lVar16) {
    lVar20 = plVar7[-1] + 0xfc0;
  }
  plVar7 = param_1;
  if ((bRam0000000113370088 & 0x19) != 0) {
    plVar7 = (long *)0x45;
    func_0x000107c2ca88(0x45,0x113370088,*(undefined8 *)(lVar20 + -0x38),0,0,0,0);
    if ((bRam0000000113370088 & 0x19) != 0) {
      uVar10 = (ulong)*(byte *)(lVar20 + -8);
      func_0x000107c2ccdc(uVar10);
      plVar7 = (long *)0x45;
      func_0x000107c2ca88(0x45,0x113370088,uVar10,0,0,0,0);
    }
  }
  bVar3 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcVar17 = (char *)0x0;
    puVar19 = (undefined *)0xaaaaaaaaaaaaaaaa;
    plVar9 = (long *)0xaaaaaaaaaaaaaaaa;
    cVar1 = *(char *)(*(long *)(lVar20 + -0x40) + 0x209);
  }
  else {
    pcVar17 = (char *)0x113370618;
    puVar19 = &UNK_10f7448c4;
    plVar9 = (long *)0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f7448c4,0,0,0,0);
    cVar1 = *(char *)(*(long *)(lVar20 + -0x40) + 0x209);
    plVar7 = plVar9;
  }
  if (cVar1 != '\x01') goto LAB_100143b28;
  lVar16 = lVar20 + -0xe0;
  bVar2 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    plVar22 = (long *)0x0;
    plVar25 = (long *)0xaaaaaaaaaaaaaaaa;
    puVar24 = (undefined *)0xaaaaaaaaaaaaaaaa;
    cVar1 = *(char *)(lVar20 + -0x2c);
  }
  else {
    plVar22 = (long *)0x113370618;
    puVar24 = &UNK_10f7448f7;
    plVar25 = (long *)0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f7448f7,0,0,0,0);
    cVar1 = *(char *)(lVar20 + -0x2c);
    plVar7 = plVar25;
  }
  if ((cVar1 == '\x01') &&
     (plVar7 = *(long **)(*(long *)(lVar20 + -0x40) + 0x1a0), plVar7 != (long *)0x0)) {
    (*(code *)plVar7[1])(plVar7,lVar16,lVar20 + -0x30,&plStack_a0);
  }
  if ((bVar2 != 0) && ((char)*plVar22 != '\0')) {
    func_0x000107c2d058(plVar22,puVar24,plVar25);
    plVar7 = plVar22;
  }
  iVar6 = *(int *)(lVar20 + -0x30);
  if ((*(long *)(*(long *)(lVar20 + -0x40) + 0x198) == 0) &&
     (*(long *)(*(long *)(lVar20 + -0x40) + 0x1a0) == 0)) {
    if ((int)param_1[0x10] == 0) {
      bVar5 = param_1[0x66] != 0;
      if ((param_1[0x66] != 0) && (iVar6 != 0)) goto LAB_1001438dc;
    }
    else {
      bVar5 = false;
    }
    if (iVar6 != 0) {
LAB_100143970:
      if ((*(char *)(lVar20 + -0x2c) == '\x01') && ((int)param_1[0x10] == 0)) {
        bVar2 = bRam0000000113370618 & 0x19;
        if ((bRam0000000113370618 & 0x19) == 0) {
          pcVar23 = (char *)0x0;
          uVar26 = 0xaaaaaaaaaaaaaaaa;
          puStack_c0 = (undefined *)0xaaaaaaaaaaaaaaaa;
          if (param_1[0x61] != param_1[0x62]) {
LAB_100143f50:
            plStack_78 = param_1 + 0x61;
            pdStack_80 = (double *)(param_1 + 100);
            dStack_88 = (double)param_1[100];
            *(double **)((long)dStack_88 + 8) = &dStack_88;
            param_1[100] = (long)&dStack_88;
            uStack_70 = 0;
            if ((int)param_1[0x67] == 0) {
              uStack_68 = 0xffffffffffffffff;
            }
            else {
              uStack_68 = param_1[0x62] - param_1[0x61] >> 3;
            }
            uVar10 = param_1[0x62] - *plStack_78 >> 3;
            if (uStack_68 <= uVar10) {
              uVar10 = uStack_68;
            }
            uVar15 = 0;
            if (uVar10 != 0) {
              do {
                uVar15 = uStack_70;
                if (*(long *)(*plStack_78 + uStack_70 * 8) != 0) break;
                uStack_70 = uStack_70 + 1;
                uVar15 = uVar10;
              } while (uVar10 != uStack_70);
            }
            if (plStack_78 != (long *)0x0) {
              plVar7 = (long *)*plStack_78;
              plVar22 = (long *)param_1[0x62];
              uVar10 = (long)plVar22 - (long)plVar7 >> 3;
              if (uStack_68 <= uVar10) {
                uVar10 = uStack_68;
              }
              if (uVar15 != uVar10) {
                do {
                  (**(code **)(*(long *)plVar7[uVar15] + 0x18))
                            ((long *)plVar7[uVar15],*(undefined8 *)(lVar20 + -0x28),
                             *(undefined8 *)(lVar20 + -0x20));
                  if (plStack_78 == (long *)0x0) goto LAB_1001440ac;
                  uVar15 = uStack_70 + 1;
                  plVar7 = (long *)*plStack_78;
                  plVar22 = (long *)plStack_78[1];
                  uVar10 = (long)plVar22 - (long)plVar7 >> 3;
                  if (uStack_68 <= uVar10) {
                    uVar10 = uStack_68;
                  }
                  uStack_70 = uVar15;
                  if (uVar15 < uVar10) {
                    do {
                      plVar7 = (long *)*plStack_78;
                      uVar15 = uStack_70;
                      if (plVar7[uStack_70] != 0) goto LAB_1001440d8;
                      uStack_70 = uStack_70 + 1;
                    } while (uVar10 != uStack_70);
                    plVar7 = (long *)*plStack_78;
                    uVar15 = uVar10;
LAB_1001440d8:
                    plVar22 = (long *)plStack_78[1];
                    uVar10 = (long)plVar22 - (long)plVar7 >> 3;
                    if (uStack_68 <= uVar10) {
                      uVar10 = uStack_68;
                    }
                  }
                } while (uVar15 != uVar10);
              }
              if (plStack_78[4] == plStack_78[3] && plVar7 != plVar22) {
                uVar10 = (long)plVar22 + (-8 - (long)plVar7);
                uVar12 = (uint)uVar10;
                if ((~uVar12 & 0x18) != 0) {
                  uVar15 = (ulong)((uVar12 >> 3) + 1) & 3;
                  do {
                    if (*plVar7 == 0) goto LAB_100144318;
                    plVar7 = plVar7 + 1;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                if (0x17 < uVar10) {
                  plVar7 = plVar7 + 2;
                  while( true ) {
                    if (plVar7[-2] == 0) {
                      plVar7 = plVar7 + -2;
                      goto LAB_100144318;
                    }
                    if (plVar7[-1] == 0) break;
                    if (*plVar7 == 0) goto LAB_100144318;
                    if (plVar7[1] == 0) {
                      plVar7 = plVar7 + 1;
                      goto LAB_100144318;
                    }
                    plVar25 = plVar7 + 2;
                    plVar7 = plVar7 + 4;
                    if (plVar25 == plVar22) goto LAB_100144094;
                  }
                  plVar7 = plVar7 + -1;
LAB_100144318:
                  if ((plVar7 != plVar22) &&
                     (plVar25 = plVar7 + 1, plVar14 = plVar7, plVar25 != plVar22)) {
                    do {
                      plVar7 = plVar14;
                      if (*plVar25 != 0) {
                        plVar7 = plVar14 + 1;
                        *plVar14 = *plVar25;
                      }
                      plVar25 = plVar25 + 1;
                      plVar14 = plVar7;
                    } while (plVar25 != plVar22);
                    plVar22 = (long *)plStack_78[1];
                  }
                  if (plVar7 != plVar22) {
                    plStack_78[1] = (long)plVar7;
                  }
                }
              }
LAB_100144094:
              if (plStack_78 != (long *)0x0) {
                plStack_78 = (long *)0x0;
                *(double **)((long)dStack_88 + 8) = pdStack_80;
                *pdStack_80 = dStack_88;
              }
            }
          }
        }
        else {
          pcVar23 = (char *)0x113370618;
          uVar26 = 0x58;
          puStack_c0 = &UNK_10f74491c;
          func_0x000107c2ca88(0x58,0x113370618,&UNK_10f74491c,0,0,0,0);
          if (param_1[0x61] != param_1[0x62]) goto LAB_100143f50;
        }
LAB_1001440ac:
        if ((bVar2 != 0) && (*pcVar23 != '\0')) {
          func_0x000107c2d058(pcVar23,puStack_c0,uVar26);
        }
      }
    }
  }
  else {
    if (iVar6 != 0) {
LAB_1001438dc:
      if (iVar6 != 2) {
        *(undefined4 *)(lVar20 + -0x30) = 2;
        if (*(char *)(lVar20 + -0x2c) == '\x01') {
          if (((char)uStack_98 != '\x01') &&
             (plVar7 = plStack_a0, (**(code **)(*plStack_a0 + 0x10))(), plStack_90 = plVar7,
             (uStack_98 & 1) == 0)) {
            uStack_98 = CONCAT71(uStack_98._1_7_,1);
          }
          *(long **)(lVar20 + -0x20) = plStack_90;
          plVar7 = plStack_90;
        }
        if (*(char *)(lVar20 + -0x2b) == '\x01') {
          (*(code *)PTR_DAT_11336f920)();
          *(long **)(lVar20 + -0x10) = plVar7;
        }
      }
      bVar5 = true;
      goto LAB_100143970;
    }
    bVar5 = true;
  }
  bVar2 = bRam0000000113370618 & 0x19;
  if ((bRam0000000113370618 & 0x19) == 0) {
    pcVar23 = (char *)0x0;
    uVar26 = 0xaaaaaaaaaaaaaaaa;
    puStack_c0 = (undefined *)0xaaaaaaaaaaaaaaaa;
    if (param_1[0x5a] != param_1[0x5b]) {
LAB_1001439bc:
      plStack_78 = param_1 + 0x5a;
      pdStack_80 = (double *)(param_1 + 0x5d);
      dStack_88 = (double)param_1[0x5d];
      *(double **)((long)dStack_88 + 8) = &dStack_88;
      param_1[0x5d] = (long)&dStack_88;
      uStack_70 = 0;
      if ((int)param_1[0x60] == 0) {
        uStack_68 = 0xffffffffffffffff;
      }
      else {
        uStack_68 = param_1[0x5b] - param_1[0x5a] >> 3;
      }
      uVar10 = param_1[0x5b] - *plStack_78 >> 3;
      if (uStack_68 <= uVar10) {
        uVar10 = uStack_68;
      }
      uVar15 = 0;
      if (uVar10 != 0) {
        do {
          uVar15 = uStack_70;
          if (*(long *)(*plStack_78 + uStack_70 * 8) != 0) break;
          uStack_70 = uStack_70 + 1;
          uVar15 = uVar10;
        } while (uVar10 != uStack_70);
      }
      if (plStack_78 != (long *)0x0) {
        plVar7 = (long *)*plStack_78;
        plVar22 = (long *)param_1[0x5b];
        uVar10 = (long)plVar22 - (long)plVar7 >> 3;
        if (uStack_68 <= uVar10) {
          uVar10 = uStack_68;
        }
        if (uVar15 != uVar10) {
          do {
            (**(code **)(*(long *)plVar7[uVar15] + 8))((long *)plVar7[uVar15],lVar16);
            if (plStack_78 == (long *)0x0) goto LAB_100143a8c;
            uVar15 = uStack_70 + 1;
            plVar7 = (long *)*plStack_78;
            plVar22 = (long *)plStack_78[1];
            uVar10 = (long)plVar22 - (long)plVar7 >> 3;
            if (uStack_68 <= uVar10) {
              uVar10 = uStack_68;
            }
            uStack_70 = uVar15;
            if (uVar15 < uVar10) {
              do {
                plVar7 = (long *)*plStack_78;
                uVar15 = uStack_70;
                if (plVar7[uStack_70] != 0) goto LAB_100143c68;
                uStack_70 = uStack_70 + 1;
              } while (uVar10 != uStack_70);
              plVar7 = (long *)*plStack_78;
              uVar15 = uVar10;
LAB_100143c68:
              plVar22 = (long *)plStack_78[1];
              uVar10 = (long)plVar22 - (long)plVar7 >> 3;
              if (uStack_68 <= uVar10) {
                uVar10 = uStack_68;
              }
            }
          } while (uVar15 != uVar10);
        }
        if (plStack_78[4] == plStack_78[3] && plVar7 != plVar22) {
          uVar10 = (long)plVar22 + (-8 - (long)plVar7);
          uVar12 = (uint)uVar10;
          if ((~uVar12 & 0x18) != 0) {
            uVar15 = (ulong)((uVar12 >> 3) + 1) & 3;
            do {
              if (*plVar7 == 0) goto LAB_1001441e8;
              plVar7 = plVar7 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (0x17 < uVar10) {
            plVar7 = plVar7 + 2;
            while( true ) {
              if (plVar7[-2] == 0) {
                plVar7 = plVar7 + -2;
                goto LAB_1001441e8;
              }
              if (plVar7[-1] == 0) break;
              if (*plVar7 == 0) goto LAB_1001441e8;
              if (plVar7[1] == 0) {
                plVar7 = plVar7 + 1;
                goto LAB_1001441e8;
              }
              plVar25 = plVar7 + 2;
              plVar7 = plVar7 + 4;
              if (plVar25 == plVar22) goto LAB_100143a74;
            }
            plVar7 = plVar7 + -1;
LAB_1001441e8:
            if ((plVar7 != plVar22) && (plVar25 = plVar7 + 1, plVar14 = plVar7, plVar25 != plVar22))
            {
              do {
                plVar7 = plVar14;
                if (*plVar25 != 0) {
                  plVar7 = plVar14 + 1;
                  *plVar14 = *plVar25;
                }
                plVar25 = plVar25 + 1;
                plVar14 = plVar7;
              } while (plVar25 != plVar22);
              plVar22 = (long *)plStack_78[1];
            }
            if (plVar7 != plVar22) {
              plStack_78[1] = (long)plVar7;
            }
          }
        }
LAB_100143a74:
        if (plStack_78 != (long *)0x0) {
          plStack_78 = (long *)0x0;
          *(double **)((long)dStack_88 + 8) = pdStack_80;
          *pdStack_80 = dStack_88;
        }
      }
    }
  }
  else {
    pcVar23 = (char *)0x113370618;
    uVar26 = 0x58;
    puStack_c0 = &UNK_10f744948;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744948,0,0,0,0);
    if (param_1[0x5a] != param_1[0x5b]) goto LAB_1001439bc;
  }
LAB_100143a8c:
  if ((bVar2 != 0) && (*pcVar23 != '\0')) {
    func_0x000107c2d058(pcVar23,puStack_c0,uVar26);
  }
  if ((bRam0000000113370618 & 0x19) == 0) {
    FUN_10014453c(*(undefined8 *)(lVar20 + -0x40),lVar16);
  }
  else {
    uVar26 = 0x58;
    func_0x000107c2ca88(0x58,0x113370618,&UNK_10f744970,0,0,0,0);
    FUN_10014453c(*(undefined8 *)(lVar20 + -0x40),lVar16);
    if (bRam0000000113370618 != 0) {
      func_0x000107c2d058(0x113370618,&UNK_10f744970,uVar26);
    }
  }
  if (((((bVar5 & *(byte *)(lVar20 + -0x2c)) == 1) &&
       (uVar10 = *(long *)(lVar20 + -0x20) - *(long *)(lVar20 + -0x28), 50000 < (long)uVar10)) &&
      ((int)param_1[0x10] == 0)) && ((bRam000000011336f9c8 & 0x19) != 0)) {
    if (uVar10 + 0x8000000000000001 < 2) {
      dStack_88 = INFINITY;
    }
    else {
      dStack_88 = (double)uVar10 / 1000000.0;
    }
    func_0x000107c2ccec(0x49,0x11336f9c8,&UNK_10f74499a,0,0,8,0,"duration",&dStack_88);
  }
LAB_100143b28:
  if ((bVar3 != 0) && (*pcVar17 != '\0')) {
    func_0x000107c2d058(pcVar17,puVar19,plVar9);
  }
  uVar10 = (param_1[0x7d] + param_1[0x7c]) - 1;
  puVar18 = (undefined8 *)(*(long *)(param_1[0x79] + (uVar10 / 0x12) * 8) + (uVar10 % 0x12) * 0xe0);
  piVar8 = (int *)puVar18[0x12];
  if (piVar8 != (int *)0x0) {
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 + -1 == 0) {
      func_0x000107c60e14();
    }
  }
  plVar7 = (long *)puVar18[0x10];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  piVar8 = (int *)*puVar18;
  if (piVar8 != (int *)0x0) {
    do {
      iVar6 = *piVar8;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 + -1 == 0) {
      (**(code **)(piVar8 + 4))();
    }
  }
  lVar16 = param_1[0x7a];
  lVar13 = param_1[0x7d];
  lVar20 = 0;
  if (lVar16 != param_1[0x79]) {
    lVar20 = (lVar16 - param_1[0x79] >> 3) * 0x12 + -1;
  }
  param_1[0x7d] = lVar13 + -1;
  if (0x23 < (lVar20 - (lVar13 + param_1[0x7c])) + 1U) {
    func_0x000107c60e14(*(undefined8 *)(lVar16 + -8));
    param_1[0x7a] = param_1[0x7a] + -8;
  }
  if ((int)param_1[0x10] == 0) {
    plVar7 = (long *)param_1[0x71];
    if (plVar7 != param_1 + 0x72) {
      plVar9 = param_1 + 0x6f;
      do {
        lVar20 = plVar7[4];
        if (((*(long *)(*(long *)(lVar20 + 0xd8) + 0x10) == 0) &&
            (*(long *)(lVar20 + 0xe8) == *(long *)(lVar20 + 0xf0))) &&
           (*(long *)(*(long *)(lVar20 + 0xe0) + 0x10) == 0)) {
          iVar6 = (int)lVar20 + 0x20;
          func_0x000107c61264();
          if (iVar6 == 0) {
            lVar16 = *(long *)(lVar20 + 0x70);
            func_0x000107c61268(lVar20 + 0x20);
          }
          else {
            func_0x000107c2cfbc(lVar20 + 0x20);
            lVar16 = *(long *)(lVar20 + 0x70);
            func_0x000107c61268(lVar20 + 0x20);
          }
          if (lVar16 != 0) goto LAB_100143d40;
          dStack_88 = (double)plVar7[5];
          plVar7[5] = 0;
          func_0x000107c2cccc(param_1,&dStack_88);
          dVar4 = dStack_88;
          dStack_88 = 0.0;
          if (dVar4 != 0.0) {
            func_0x000107c2ccfc();
            func_0x000107c60e14();
          }
          plVar22 = (long *)*plVar9;
          if (plVar22 != (long *)0x0) {
            plVar14 = plVar22;
            plVar25 = plVar9;
            do {
              lVar20 = 8;
              if ((ulong)plVar7[4] <= (ulong)plVar14[4]) {
                lVar20 = 0;
                plVar25 = plVar14;
              }
              plVar14 = *(long **)((long)plVar14 + lVar20);
            } while (plVar14 != (long *)0x0);
            if ((plVar25 != plVar9) && ((ulong)plVar25[4] <= (ulong)plVar7[4])) {
              plVar14 = (long *)plVar25[1];
              plVar21 = plVar25;
              if ((long *)plVar25[1] == (long *)0x0) {
                do {
                  plVar11 = (long *)plVar21[2];
                  bVar5 = (long *)*plVar11 != plVar21;
                  plVar21 = plVar11;
                } while (bVar5);
              }
              else {
                do {
                  plVar11 = plVar14;
                  plVar14 = (long *)*plVar11;
                } while ((long *)*plVar11 != (long *)0x0);
              }
              if ((long *)param_1[0x6e] == plVar25) {
                param_1[0x6e] = (long)plVar11;
              }
              param_1[0x70] = param_1[0x70] + -1;
              FUN_1001a4a3c(plVar22,plVar25);
              func_0x000107c60e14(plVar25);
            }
          }
          plVar25 = (long *)plVar7[1];
          plVar22 = plVar25;
          plVar14 = plVar7;
          if (plVar25 == (long *)0x0) {
            do {
              plVar21 = (long *)plVar14[2];
              bVar5 = (long *)*plVar21 != plVar14;
              plVar22 = plVar7;
              plVar14 = plVar21;
            } while (bVar5);
            do {
              plVar14 = (long *)plVar22[2];
              bVar5 = (long *)*plVar14 != plVar22;
              plVar22 = plVar14;
            } while (bVar5);
          }
          else {
            do {
              plVar21 = plVar22;
              plVar22 = (long *)*plVar21;
            } while ((long *)*plVar21 != (long *)0x0);
            do {
              plVar14 = plVar25;
              plVar25 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          if ((long *)param_1[0x71] == plVar7) {
            param_1[0x71] = (long)plVar14;
          }
          param_1[0x73] = param_1[0x73] + -1;
          FUN_1001a4a3c(param_1[0x72],plVar7);
          lVar20 = plVar7[5];
          plVar7[5] = 0;
          if (lVar20 != 0) {
            func_0x000107c2ccfc();
            func_0x000107c60e14();
          }
          func_0x000107c60e14(plVar7);
          plVar7 = plVar21;
        }
        else {
LAB_100143d40:
          plVar22 = (long *)plVar7[1];
          plVar25 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar25[2];
              bVar5 = (long *)*plVar7 != plVar25;
              plVar25 = plVar7;
            } while (bVar5);
          }
          else {
            do {
              plVar7 = plVar22;
              plVar22 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
      } while (plVar7 != param_1 + 0x72);
    }
    FUN_1001447a4(param_1[0x75]);
    param_1[0x74] = (long)(param_1 + 0x75);
    param_1[0x76] = 0;
    param_1[0x75] = 0;
  }
  return;
}



/* Entry: 10014453c; end: 1001447a3;  */

/* WARNING: Removing unreachable block (ram,0x000100144724) */

void FUN_10014453c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x108) == *(long *)(param_1 + 0x110)) goto LAB_100144750;
  plStack_48 = (long *)(param_1 + 0x108);
  plStack_50 = (long *)(param_1 + 0x120);
  lStack_58 = *(long *)(param_1 + 0x120);
  *(long **)(lStack_58 + 8) = &lStack_58;
  *(long **)(param_1 + 0x120) = &lStack_58;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    uStack_38 = 0xffffffffffffffff;
  }
  else {
    uStack_38 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3;
  }
  uVar3 = *(long *)(param_1 + 0x110) - *plStack_48 >> 3;
  if (uStack_38 <= uVar3) {
    uVar3 = uStack_38;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      uVar5 = uStack_40;
      if (*(long *)(*plStack_48 + uStack_40 * 8) != 0) break;
      uStack_40 = uStack_40 + 1;
      uVar5 = uVar3;
    } while (uVar3 != uStack_40);
  }
  if (plStack_48 == (long *)0x0) goto LAB_100144750;
  plVar8 = (long *)(param_1 + 0x110);
  plVar4 = (long *)*plVar8;
  plVar6 = (long *)*plStack_48;
  uVar3 = (long)plVar4 - (long)plVar6 >> 3;
  if (uStack_38 <= uVar3) {
    uVar3 = uStack_38;
  }
  if (uVar5 == uVar3) {
    if (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x120)) {
LAB_1001446b4:
      if (plVar6 == plVar4) {
LAB_10014470c:
        if (plVar6 != plVar4) {
          *plVar8 = (long)plVar6;
        }
      }
      else {
        do {
          if (*plVar6 == 0) {
            if ((plVar6 != plVar4) && (plVar1 = plVar6 + 1, plVar7 = plVar6, plVar1 != plVar4)) {
              do {
                plVar6 = plVar7;
                if (*plVar1 != 0) {
                  plVar6 = plVar7 + 1;
                  *plVar7 = *plVar1;
                }
                plVar1 = plVar1 + 1;
                plVar7 = plVar6;
              } while (plVar1 != plVar4);
              plVar4 = (long *)*plVar8;
            }
            goto LAB_10014470c;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4);
      }
    }
  }
  else {
    do {
      (**(code **)(*(long *)plVar6[uVar5] + 8))((long *)plVar6[uVar5],param_2);
      if (plStack_48 == (long *)0x0) goto LAB_100144750;
      uStack_40 = uStack_40 + 1;
      uVar3 = plStack_48[1] - *plStack_48 >> 3;
      if (uStack_38 <= uVar3) {
        uVar3 = uStack_38;
      }
      uVar5 = uStack_40;
      if (uStack_40 < uVar3) {
        do {
          uVar5 = uStack_40;
          if (*(long *)(*plStack_48 + uStack_40 * 8) != 0) break;
          uStack_40 = uStack_40 + 1;
          uVar5 = uVar3;
        } while (uVar3 != uStack_40);
      }
      plVar6 = (long *)*plStack_48;
      plVar4 = (long *)plStack_48[1];
      uVar3 = (long)plVar4 - (long)plVar6 >> 3;
      if (uStack_38 <= uVar3) {
        uVar3 = uStack_38;
      }
    } while (uVar5 != uVar3);
    plVar8 = plStack_48 + 1;
    if (plStack_48[4] == plStack_48[3]) goto LAB_1001446b4;
  }
  if (plStack_48 != (long *)0x0) {
    plStack_48 = (long *)0x0;
    *(long **)(lStack_58 + 8) = plStack_50;
    *plStack_50 = lStack_58;
  }
LAB_100144750:
  lVar2 = *(long *)(param_1 + 0x150);
  if ((lVar2 != 0) && (**(char **)(lVar2 + 0x40) != '\0')) {
    func_0x000107c2d050(0x29,*(char **)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x10),
                        *(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),0,2);
    return;
  }
  return;
}



/* Entry: 1001447a4; end: 1001447ef;  */

/* WARNING: Possible PIC construction at 0x0001001447d8: Changing call to branch */

void FUN_1001447a4(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_1001447a4(*param_1);
  FUN_1001447a4(param_1[1]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    func_0x000107c2ccfc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1001447f0; end: 100144823;  */

void FUN_1001447f0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + param_2 * 4;
  iVar2 = *(int *)(lVar1 + 0x10) + -1;
  *(int *)(lVar1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  *(ulong *)(param_1 + 0x30) =
       *(ulong *)(param_1 + 0x30) & (ulong)(uint)~(1 << (ulong)((uint)param_2 & 0x1f));
  return;
}



/* Entry: 100144824; end: 100144873;  */

void FUN_100144824(long param_1,long param_2)

{
  if (((param_2 == 0x80) && (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x7c))) &&
     (*(char *)(param_1 + 0x87) == '\x01')) {
    func_0x000107c60828(*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x87) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  return;
}



/* Entry: 100144874; end: 100144b97;  */

void FUN_100144874(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010014488c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100144b98; end: 100144b9f;  */

undefined8 FUN_100144b98(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x7fffffffffffffff;
  if (SUB168(SEXT816(500) * SEXT816(1000),8) == 0) {
    uVar1 = 500000;
  }
  return uVar1;
}



/* Entry: 100144ba0; end: 100144bdb;  */

void FUN_100144ba0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100144b98();
  *param_1 = param_2;
  FUN_100144b98();
  param_1[1] = param_2;
  uVar1 = 1000;
  FUN_100144cd0();
  param_1[2] = uVar1;
  FUN_100144b98();
  param_1[3] = uVar1;
  return;
}



/* Entry: 100144bdc; end: 100144ccf;  */

undefined8 * FUN_100144bdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puStack_58;
  undefined8 auStack_50 [4];
  
  FUN_100144ba0(auStack_50);
  func_0x000100144cf0(param_1,auStack_50,0,0);
  *param_1 = &PTR_DAT_110ce00d8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1000ffe38(param_1 + 6);
  func_0x000100145f40(param_1 + 0xe,param_1 + 6);
  param_1[0x16] = 0;
  puStack_58 = param_1 + 0x18;
  *puStack_58 = &PTR_DAT_110ce0160;
  param_1[0x17] = 0;
  param_1[0x19] = param_1;
  param_1[0x1a] = 0;
  FUN_100145f74(auStack_50,&puStack_58);
  uVar1 = auStack_50[0];
  auStack_50[0] = 0;
  FUN_100146124(param_1 + 0x1a,uVar1);
  FUN_100146154(auStack_50);
  return param_1;
}



/* Entry: 100144cd0; end: 100144cdb;  */

long FUN_100144cd0(int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x8000000000000000;
  if (-1 < param_1) {
    lVar1 = 0x7fffffffffffffff;
  }
  lVar2 = (long)param_1 * 1000;
  if (SUB168(SEXT816((long)param_1) * SEXT816(1000),8) == lVar2 >> 0x3f) {
    lVar1 = lVar2;
  }
  return lVar1;
}


