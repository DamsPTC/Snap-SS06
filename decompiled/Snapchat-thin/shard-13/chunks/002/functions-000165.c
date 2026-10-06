/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a29eb08; end: 10a29edb7;  */

void FUN_10a29eb08(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar4 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if ((int)plVar4 != 0) {
      (**(code **)(*param_1 + 0x30))(&puStack_40,param_1);
      puVar7 = (undefined8 *)param_1[8];
      lStack_48 = param_1[10];
      puVar8 = (undefined8 *)param_1[9];
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[8] = 0;
      puStack_58 = puVar7;
      puStack_50 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 8) {
        pcVar5 = (code *)*puVar7;
        plStack_68 = plStack_38;
        puStack_70 = puStack_40;
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (*pcVar5)(&puStack_70,puVar7);
        plVar4 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      puVar7 = (undefined8 *)param_1[0xb];
      lStack_60 = param_1[0xd];
      puVar8 = (undefined8 *)param_1[0xc];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      puStack_70 = puVar7;
      plStack_68 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
        FUN_10a29f898(*puVar7,&puStack_40);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (**(code **)(*param_1 + 0x38))(auStack_88,param_1,&puStack_40);
        lVar6 = param_1[1];
        lStack_90 = param_1[3];
        lVar9 = param_1[2];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        lStack_a0 = lVar6;
        lStack_98 = lVar9;
        for (; lVar6 != lVar9; lVar6 = lVar6 + 0x40) {
          FUN_10a2974b8(lVar6,auStack_88);
        }
        puVar7 = (undefined8 *)param_1[4];
        lStack_a8 = param_1[6];
        puVar8 = (undefined8 *)param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[4] = 0;
        puStack_b8 = puVar7;
        puStack_b0 = puVar8;
        for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
          FUN_10a1bcbe0(*puVar7,auStack_88);
        }
        FUN_10a2973e4(&puStack_b8);
        FUN_10a297440(&lStack_a0);
        if (cStack_71 < '\0') {
          __ZdlPv(auStack_88[0]);
        }
      }
      func_0x00010a29f76c(&puStack_70);
      FUN_10a29f820(&puStack_58);
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
  }
  return;
}



/* Entry: 10a29edb8; end: 10a29edf3;  */

bool FUN_10a29edb8(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29edf4; end: 10a29f3bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a29f2a8) */
/* WARNING: Removing unreachable block (ram,0x00010a29f070) */
/* WARNING: Removing unreachable block (ram,0x00010a29f210) */

void FUN_10a29edf4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  char cStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  char cStack_e9;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  char cStack_c9;
  char cStack_c8;
  undefined1 auStack_c0 [64];
  undefined1 uStack_80;
  ushort uStack_76;
  uint uStack_74;
  undefined4 uStack_70;
  ulong uStack_6c;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  if (*(long *)(param_1 + 0x80) != 0) {
    return;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar15 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar15 == (long *)0x0) {
    lVar14 = *(long *)(lVar14 + 0x50);
  }
  else {
    plVar1 = plVar15 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar14 = *(long *)(lVar14 + 0x50);
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (lVar14 == 0) {
    return;
  }
  uStack_74 = uStack_74 & 0xffffff00;
  uStack_64 = 0;
  uStack_76 = 0;
  iVar4 = (int)*(undefined8 *)(param_1 + 0x70);
  FUN_10a53e80c();
  if (iVar4 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    FUN_10a53e874(uVar7);
    func_0x00010988cc0c(auStack_c0,uVar7);
    uVar5 = (uint)auStack_c0;
    func_0x00010988c41c();
    uVar6 = SUB84(auStack_c0,0);
    func_0x00010988c578();
    puVar8 = auStack_c0;
    func_0x00010988c6c4();
    uStack_6c = (ulong)puVar8 & 0xffffffff | 0x100000000;
    uStack_64 = 1;
    puVar8 = auStack_c0;
    uStack_74 = uVar5;
    uStack_70 = uVar6;
    func_0x00010988c41c();
    puVar9 = auStack_c0;
    func_0x00010988c578(puVar9);
    FUN_10a0ed938(puVar8,puVar9);
    uStack_76 = (ushort)puVar8 | 0x100;
  }
  auStack_c0[0] = 0;
  uStack_80 = 0;
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
    puVar10 = *(undefined8 **)(param_1 + 0x90);
    if (*(char *)(puVar10 + 10) == '\x01') {
      lVar14 = (long)*(char *)((long)puVar10 + 0x37);
      if (lVar14 < 0) {
        lVar14 = puVar10[5];
      }
      if (lVar14 == 0) goto LAB_10a29ef58;
    }
    else {
LAB_10a29ef58:
      if (*(int *)(puVar10[3] + 0x1e0) != 2) goto LAB_10a29f078;
    }
    func_0x00010a535f90();
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_60,*puVar10,puVar10[1]);
    }
    else {
      uStack_58 = puVar10[1];
      uStack_60 = *puVar10;
      uStack_50 = puVar10[2];
    }
    uStack_48 = 1;
    lVar14 = *(long *)(param_1 + 0x90);
    if (*(char *)(lVar14 + 0x50) == '\x01') {
      puVar10 = (undefined8 *)(lVar14 + 0x38);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x18) + 0x60);
    }
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_120,*puVar10,puVar10[1]);
    }
    else {
      uStack_118 = puVar10[1];
      uStack_120 = *puVar10;
      lStack_110 = puVar10[2];
    }
    cStack_108 = '\x01';
    FUN_10a29fefc(&uStack_100,&uStack_60,&uStack_120);
    FUN_10a29fe34(auStack_c0,&uStack_100);
    if ((cStack_c8 == '\x01') && (cStack_c9 < '\0')) {
      __ZdlPv(uStack_e0);
    }
    if ((cStack_e8 == '\x01') && (cStack_e9 < '\0')) {
      __ZdlPv(CONCAT71(uStack_ff,uStack_100));
    }
    if ((cStack_108 == '\x01') && (lStack_110 < 0)) {
      __ZdlPv(uStack_120);
    }
  }
LAB_10a29f078:
  if ((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 0xe30) != 2)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(uVar7,&UNK_10f660184,6);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(uVar11,&UNK_10f66018b,8);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(puVar10,&UNK_10f660194,0xb);
    puVar12 = (undefined8 *)0x138;
    __Znwm();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_DAT_110bbad88;
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_60,*puVar10,puVar10[1]);
    }
    else {
      uStack_58 = puVar10[1];
      uStack_60 = *puVar10;
      uStack_50 = puVar10[2];
    }
    uStack_48 = 1;
    puVar10 = puVar12 + 3;
    uStack_100 = 0;
    uStack_d8 = 0;
    FUN_10a247268(puVar10,uVar7,uVar11,&uStack_60,auStack_c0,&uStack_74,&uStack_76,0,&uStack_100);
    *puVar10 = &PTR_DAT_110bb5d18;
    plVar15 = *(long **)(param_1 + 0x88);
    *(undefined8 **)(param_1 + 0x80) = puVar10;
    *(undefined8 **)(param_1 + 0x88) = puVar12;
    if (plVar15 == (long *)0x0) goto LAB_10a29f2ec;
    plVar1 = plVar15 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(uVar7,&UNK_10f660184,6);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(uVar11,&UNK_10f66018b,8);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x18);
    FUN_10a53e714(puVar10,&UNK_10f660194,0xb);
    puVar12 = (undefined8 *)0x138;
    __Znwm();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110bbad38;
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_60,*puVar10,puVar10[1]);
    }
    else {
      uStack_58 = puVar10[1];
      uStack_60 = *puVar10;
      uStack_50 = puVar10[2];
    }
    uStack_48 = 1;
    puVar10 = puVar12 + 3;
    uStack_100 = 0;
    uStack_d8 = 0;
    FUN_10a247268(puVar10,uVar7,uVar11,&uStack_60,auStack_c0,&uStack_74,&uStack_76,1,&uStack_100);
    *puVar10 = &PTR_DAT_110bb5d70;
    plVar15 = *(long **)(param_1 + 0x88);
    *(undefined8 **)(param_1 + 0x80) = puVar10;
    *(undefined8 **)(param_1 + 0x88) = puVar12;
    if (plVar15 == (long *)0x0) goto LAB_10a29f2ec;
    plVar1 = plVar15 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
  }
LAB_10a29f2ec:
  FUN_10a26a30c(auStack_c0);
  return;
}



/* Entry: 10a29f3c0; end: 10a29f46f;  */

bool FUN_10a29f3c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(long *)(lVar6 + 0x50) == 0) || (lVar6 = *(long *)(param_1 + 0x90), lVar6 == 0)) {
    bVar5 = false;
  }
  else if ((*(byte *)(lVar6 + 0x50) & 1) == 0) {
    bVar5 = *(int *)(*(long *)(lVar6 + 0x18) + 0x1e0) != 0;
  }
  else {
    bVar5 = true;
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return bVar5;
}



/* Entry: 10a29f470; end: 10a29f6f3;  */

void FUN_10a29f470(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  char cStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  char cStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char cStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  
  puVar4 = *(undefined8 **)(param_2 + 0x90);
  if (puVar4 == (undefined8 *)0x0) goto LAB_10a29f658;
  if (*(char *)(puVar4 + 10) == '\x01') {
    if (*(char *)((long)puVar4 + 0x37) < '\0') {
      if (puVar4[5] == 0) goto LAB_10a29f4b8;
    }
    else if (*(char *)((long)puVar4 + 0x37) == '\0') goto LAB_10a29f4b8;
  }
  else {
LAB_10a29f4b8:
    if (*(int *)(puVar4[3] + 0x1e0) != 2) goto LAB_10a29f658;
  }
  lVar6 = *(long *)(param_2 + 0x80);
  func_0x00010a535f90();
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_e0,*puVar4,puVar4[1]);
  }
  else {
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    lStack_d0 = puVar4[2];
  }
  cStack_c8 = '\x01';
  lVar5 = *(long *)(param_2 + 0x90);
  if (*(char *)(lVar5 + 0x50) == '\x01') {
    puVar4 = (undefined8 *)(lVar5 + 0x38);
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x18) + 0x60);
  }
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_100,*puVar4,puVar4[1]);
  }
  else {
    uStack_f8 = puVar4[1];
    uStack_100 = *puVar4;
    lStack_f0 = puVar4[2];
  }
  cStack_e8 = '\x01';
  FUN_10a29fefc(&uStack_c0,&uStack_e0,&uStack_100);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_68 = cStack_a8 == '\x01';
  if ((bool)uStack_68) {
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    lStack_70 = lStack_b0;
    uStack_b8 = 0;
    lStack_b0 = 0;
    uStack_c0 = 0;
  }
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_48 = cStack_88 == '\x01';
  if ((bool)uStack_48) {
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    lStack_50 = lStack_90;
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_a0 = 0;
  }
  uStack_40 = 1;
  FUN_10a29ffd8(lVar6 + 0x30,&uStack_80);
  FUN_10a26a30c(&uStack_80);
  if ((cStack_88 == '\x01') && (lStack_90 < 0)) {
    __ZdlPv(uStack_a0);
  }
  if ((cStack_a8 == '\x01') && (lStack_b0 < 0)) {
    __ZdlPv(uStack_c0);
  }
  if ((cStack_e8 == '\x01') && (lStack_f0 < 0)) {
    __ZdlPv(uStack_100);
  }
  if ((cStack_c8 == '\x01') && (lStack_d0 < 0)) {
    __ZdlPv(uStack_e0);
  }
LAB_10a29f658:
  lVar6 = *(long *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
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



/* Entry: 10a29f6f4; end: 10a29f713;  */

void FUN_10a29f6f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29f714; end: 10a29f81f;  */

long FUN_10a29f714(long param_1)

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



/* Entry: 10a29f820; end: 10a29f897;  */

void FUN_10a29f820(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29f898; end: 10a29f8bf;  */

void FUN_10a29f898(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pcVar11 = *param_1;
      pcVar14 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar11)(&stack0xffffffffffffffd0,param_1);
      if (pcVar14 != (code *)0x0) {
        pcVar11 = pcVar14 + 8;
        do {
          lVar12 = *(long *)pcVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
        }
      }
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar11 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = *(long *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a29fdbc;
      ppuStack_70 = &PTR_FUN_110bb9698;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a29fb54(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a29f714(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a29fb54;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a29fc40(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a29f8c0; end: 10a29f963;  */

void FUN_10a29f8c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
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
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a29f964; end: 10a29fb53;  */

void FUN_10a29f964(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a29fdbc;
      ppuStack_70 = &PTR_FUN_110bb9698;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a29fb54(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  FUN_10a29f714(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a29fb54;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a29fc40(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a29fb54; end: 10a29fc3f;  */

void FUN_10a29fb54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a29fc40(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a29fc40; end: 10a29fd1f;  */

void FUN_10a29fc40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
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
  
  FUN_10a29fd20(aiStack_70,param_1,param_4);
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



/* Entry: 10a29fd20; end: 10a29fdbb;  */

void FUN_10a29fd20(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
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
  ppuStack_38 = &PTR_DAT_110bbacc0;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a29fdbc; end: 10a29fdcb;  */

void FUN_10a29fdbc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a29fc40(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a29fdcc; end: 10a29fdf3;  */

long FUN_10a29fdcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a29f714(param_1 + 0x18);
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



/* Entry: 10a29fdf4; end: 10a29fe33;  */

void FUN_10a29fdf4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bb9698;
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



/* Entry: 10a29fe34; end: 10a29fefb;  */

undefined8 * FUN_10a29fe34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010a20a7e0(param_1,param_2);
    func_0x00010a20a7e0(param_1 + 4,param_2 + 4);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(char *)(param_2 + 3) == '\x01') {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if (*(char *)(param_2 + 7) == '\x01') {
      uVar2 = param_2[5];
      uVar1 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar2;
      param_1[4] = uVar1;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[4] = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return param_1;
}



/* Entry: 10a29fefc; end: 10a29ff57;  */

long FUN_10a29fefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a1ccb30();
  FUN_10a1ccb30(lVar1 + 0x20,param_3);
  return param_1;
}



/* Entry: 10a29ff58; end: 10a29ff67;  */

void FUN_10a29ff58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbad38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a29ff68; end: 10a29ff87;  */

void FUN_10a29ff68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbad38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a29ff88; end: 10a29ffa7;  */

void FUN_10a29ff88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a29ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a29ffa8; end: 10a29ffc7;  */

void FUN_10a29ffa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbad88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a29ffc8; end: 10a29ffd7;  */

void FUN_10a29ffc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a29ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a29ffd8; end: 10a2a00b7;  */

/* WARNING: Possible PIC construction at 0x00010a2a0008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2a000c) */

void FUN_10a29ffd8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == *(char *)(param_2 + 8)) {
    if (cVar1 != '\0') {
      cVar1 = *(char *)(param_1 + 3);
      if (cVar1 == *(char *)(param_2 + 3)) {
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                    (param_1);
          return;
        }
      }
      else if (cVar1 == '\0') {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(param_1,*param_2,param_2[1]);
        }
        else {
          uVar3 = param_2[1];
          uVar2 = *param_2;
          param_1[2] = param_2[2];
          param_1[1] = uVar3;
          *param_1 = uVar2;
        }
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 8) == '\x01') {
        if ((*(char *)(param_1 + 7) == '\x01') && (*(char *)((long)param_1 + 0x37) < '\0')) {
          __ZdlPv(param_1[4]);
        }
        if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 8) = 0;
      }
      return;
    }
    FUN_10a26a2b0(param_1,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 10a2a00b8; end: 10a2a01f7;  */

undefined8 * FUN_10a2a00b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb96c0;
  func_0x00010a296658(param_1 + 0x12);
  func_0x00010a29b7f0(param_1 + 0x10);
  *param_1 = &PTR_DAT_110bb9740;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb9290;
  FUN_10a29d474(param_1 + 0xb);
  FUN_10a29d528(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a2a01f8; end: 10a2a059b;  */

void FUN_10a2a01f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  char cStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  char cStack_d8;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  char cStack_b0;
  undefined8 uStack_a8;
  char cStack_91;
  char cStack_90;
  undefined1 auStack_88 [64];
  undefined1 uStack_48;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  if (*(long *)(param_1 + 0x80) != 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar8 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar8 == (long *)0x0) {
    lVar9 = *(long *)(lVar9 + 0x50);
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = *(long *)(lVar9 + 0x50);
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
  if (lVar9 == 0) {
    return;
  }
  auStack_88[0] = 0;
  uStack_48 = 0;
  if (*(long **)(param_1 + 0x90) == (long *)0x0) goto LAB_10a2a03f0;
  (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  if (*(char *)(puVar4 + 10) == '\x01') {
    lVar9 = (long)*(char *)((long)puVar4 + 0x37);
    if (lVar9 < 0) {
      lVar9 = puVar4[5];
    }
    if (lVar9 == 0) goto LAB_10a2a02d0;
  }
  else {
LAB_10a2a02d0:
    if (*(int *)(puVar4[3] + 0x1e0) != 2) goto LAB_10a2a03f0;
  }
  func_0x00010a535f90();
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_f0,*puVar4,puVar4[1]);
  }
  else {
    uStack_e8 = puVar4[1];
    uStack_f0 = *puVar4;
    lStack_e0 = puVar4[2];
  }
  cStack_d8 = '\x01';
  lVar9 = *(long *)(param_1 + 0x90);
  if (*(char *)(lVar9 + 0x50) == '\x01') {
    puVar4 = (undefined8 *)(lVar9 + 0x38);
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x18) + 0x60);
  }
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_110,*puVar4,puVar4[1]);
  }
  else {
    uStack_108 = puVar4[1];
    uStack_110 = *puVar4;
    lStack_100 = puVar4[2];
  }
  cStack_f8 = '\x01';
  FUN_10a29fefc(auStack_c8,&uStack_f0,&uStack_110);
  FUN_10a29fe34(auStack_88,auStack_c8);
  if ((cStack_90 == '\x01') && (cStack_91 < '\0')) {
    __ZdlPv(uStack_a8);
  }
  if ((cStack_b0 == '\x01') && (cStack_b1 < '\0')) {
    __ZdlPv(auStack_c8[0]);
  }
  if ((cStack_f8 == '\x01') && (lStack_100 < 0)) {
    __ZdlPv(uStack_110);
  }
  if ((cStack_d8 == '\x01') && (lStack_e0 < 0)) {
    __ZdlPv(uStack_f0);
  }
LAB_10a2a03f0:
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
  FUN_10a53e714(uVar5,&UNK_10f660194,0xb);
  FUN_10a247400(auStack_c8,uVar5);
  if (*(long *)(param_1 + 0x38) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0xe30) == 2;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
  FUN_10a53e714(uVar5,&UNK_10f660184,6);
  puVar4 = (undefined8 *)0xb8;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar6 = puVar4 + 3;
  *puVar4 = &PTR_DAT_110bbace8;
  FUN_10a247130(puVar6,uVar5,auStack_88,auStack_c8,bVar3);
  plVar8 = *(long **)(param_1 + 0x88);
  *(undefined8 **)(param_1 + 0x80) = puVar6;
  *(undefined8 **)(param_1 + 0x88) = puVar4;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if ((cStack_b0 == '\x01') && (cStack_b1 < '\0')) {
    __ZdlPv(auStack_c8[0]);
  }
  FUN_10a26a30c(auStack_88);
  return;
}



/* Entry: 10a2a059c; end: 10a2a064b;  */

bool FUN_10a2a059c(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar2 = *(long **)(*(long *)(param_1 + 0x70) + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(long *)(lVar6 + 0x50) == 0) || (lVar6 = *(long *)(param_1 + 0x90), lVar6 == 0)) {
    bVar5 = false;
  }
  else if ((*(byte *)(lVar6 + 0x50) & 1) == 0) {
    bVar5 = *(int *)(*(long *)(lVar6 + 0x18) + 0x1e0) != 0;
  }
  else {
    bVar5 = true;
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return bVar5;
}



/* Entry: 10a2a064c; end: 10a2a08d7;  */

void FUN_10a2a064c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  char cStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  char cStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char cStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  
  puVar4 = *(undefined8 **)(param_2 + 0x90);
  if (puVar4 == (undefined8 *)0x0) goto LAB_10a2a083c;
  if (*(char *)(puVar4 + 10) == '\x01') {
    if (*(char *)((long)puVar4 + 0x37) < '\0') {
      if (puVar4[5] == 0) goto LAB_10a2a0694;
    }
    else if (*(char *)((long)puVar4 + 0x37) == '\0') goto LAB_10a2a0694;
  }
  else {
LAB_10a2a0694:
    if (*(int *)(puVar4[3] + 0x1e0) != 2) goto LAB_10a2a083c;
  }
  lVar6 = *(long *)(param_2 + 0x80);
  if ((*(byte *)(lVar6 + 0x70) & 1) == 0) {
    func_0x00010a535f90();
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_e0,*puVar4,puVar4[1]);
    }
    else {
      uStack_d8 = puVar4[1];
      uStack_e0 = *puVar4;
      lStack_d0 = puVar4[2];
    }
    cStack_c8 = '\x01';
    lVar5 = *(long *)(param_2 + 0x90);
    if (*(char *)(lVar5 + 0x50) == '\x01') {
      puVar4 = (undefined8 *)(lVar5 + 0x38);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x18) + 0x60);
    }
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_100,*puVar4,puVar4[1]);
    }
    else {
      uStack_f8 = puVar4[1];
      uStack_100 = *puVar4;
      lStack_f0 = puVar4[2];
    }
    cStack_e8 = '\x01';
    FUN_10a29fefc(&uStack_c0,&uStack_e0,&uStack_100);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    uStack_68 = cStack_a8 == '\x01';
    if ((bool)uStack_68) {
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      lStack_70 = lStack_b0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      uStack_c0 = 0;
    }
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    uStack_48 = cStack_88 == '\x01';
    if ((bool)uStack_48) {
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      lStack_50 = lStack_90;
      uStack_98 = 0;
      lStack_90 = 0;
      uStack_a0 = 0;
    }
    uStack_40 = 1;
    FUN_10a29ffd8(lVar6 + 0x30,&uStack_80);
    FUN_10a26a30c(&uStack_80);
    if ((cStack_88 == '\x01') && (lStack_90 < 0)) {
      __ZdlPv(uStack_a0);
    }
    if ((cStack_a8 == '\x01') && (lStack_b0 < 0)) {
      __ZdlPv(uStack_c0);
    }
    if ((cStack_e8 == '\x01') && (lStack_f0 < 0)) {
      __ZdlPv(uStack_100);
    }
    if ((cStack_c8 == '\x01') && (lStack_d0 < 0)) {
      __ZdlPv(uStack_e0);
    }
  }
LAB_10a2a083c:
  lVar6 = *(long *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
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



/* Entry: 10a2a08d8; end: 10a2a0903;  */

void FUN_10a2a08d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a2a0904; end: 10a2a0923;  */

void FUN_10a2a0904(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbace8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a0924; end: 10a2a0943;  */

void FUN_10a2a0924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2a092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2a0944; end: 10a2a0a3f;  */

void FUN_10a2a0944(long *param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar9 = param_2;
  ppuVar11 = param_3;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    puStack_48 = param_2[1];
    puStack_50 = *param_2;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_3;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_3[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a0a40; end: 10a2a0b5b;  */

void FUN_10a2a0a40(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  puVar16 = (undefined8 *)param_1[1];
  if (puVar16 < (undefined8 *)param_1[2]) {
    *puVar16 = param_2;
    puVar16[1] = param_3;
    if (param_3 != 0) {
      plVar7 = (long *)(param_3 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar16 = puVar16 + 2;
LAB_10a2a0b38:
    param_1[1] = (long)puVar16;
    return;
  }
  lVar13 = *param_1;
  lVar14 = (long)puVar16 - lVar13;
  lVar17 = lVar14 >> 4;
  uVar9 = lVar17 + 1;
  if (uVar9 >> 0x3c == 0) {
    uVar11 = param_1[2] - lVar13;
    uVar12 = (long)uVar11 >> 3;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar12 = 0xfffffffffffffff;
    }
    if (uVar12 >> 0x3c == 0) {
      lVar6 = uVar12 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + lVar14);
      *puVar1 = param_2;
      puVar1[1] = param_3;
      if (param_3 != 0) {
        plVar7 = (long *)(param_3 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar13 = *param_1;
        lVar14 = param_1[1] - lVar13;
        lVar17 = lVar14 >> 4;
      }
      puVar16 = puVar1 + 2;
      _memcpy(puVar1 + lVar17 * -2,lVar13,lVar14);
      *param_1 = (long)(puVar1 + lVar17 * -2);
      param_1[1] = (long)puVar16;
      param_1[2] = lVar6 + uVar12 * 0x10;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar7 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar7,0x10a2a0934,0,param_2,param_3,param_4);
  plVar7 = plVar8 + 0x4b;
  lVar13 = plVar8[0x59];
  uVar9 = lVar13 - 1;
  plVar8[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar13 + 2];
    if (plVar8[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar9) {
      return;
    }
  }
  lVar13 = *plVar7;
  lVar14 = plVar8[0x4c];
  lVar17 = lVar14 - lVar13;
  uVar12 = lVar17 >> 4;
  if (uVar12 < uVar9) {
    uVar11 = uVar9 - uVar12;
    lVar6 = plVar8[0x4d];
    if ((ulong)(lVar6 - lVar14 >> 4) < uVar11) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar6 - lVar13 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar6 - lVar13)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar17;
          _bzero(lVar14,uVar11 * 0x10);
          lVar15 = lVar14 + uVar12 * -0x10;
          _memcpy(lVar15,lVar13,lVar17);
          *plVar7 = lVar15;
          plVar8[0x4c] = lVar14 + uVar11 * 0x10;
          plVar8[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_e8 = lVar13;
          lStack_e0 = lVar13;
          lStack_d8 = lVar13;
          lStack_d0 = lVar6;
          func_0x00010988c1b8(&lStack_e8);
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
    _bzero(lVar14,uVar11 * 0x10);
    plVar8[0x4c] = lVar14 + uVar11 * 0x10;
  }
  else if (uVar9 < uVar12) {
    lVar13 = lVar13 + uVar9 * 0x10;
    while (lVar14 != lVar13) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar8[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar9;
  return;
}



/* Entry: 10a2a0b5c; end: 10a2a0b6f;  */

void FUN_10a2a0b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar3,0x10a2a0934,0,param_2,param_3,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a2a0b70; end: 10a2a0c27;  */

void FUN_10a2a0b70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,0x10a2a0934,0,param_3,param_4,param_5);
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



/* Entry: 10a2a0c28; end: 10a2a0d07;  */

void FUN_10a2a0c28(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a2a0d08(param_2,param_5);
  FUN_10a2a0d70(param_7);
  FUN_10a1cf048(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a2a0d08; end: 10a2a0d6f;  */

/* WARNING: Possible PIC construction at 0x00010a2a118c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2a1190) */

void FUN_10a2a0d08(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  code *pcVar15;
  undefined1 **ppuVar16;
  long lVar17;
  long *plVar18;
  undefined **ppuVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  ulong uVar25;
  undefined8 extraout_x8;
  ulong uVar26;
  undefined8 unaff_x20;
  undefined8 *puVar27;
  long *unaff_x21;
  long lVar28;
  long *unaff_x22;
  long lVar29;
  long lVar30;
  long *unaff_x23;
  long lVar31;
  long *unaff_x24;
  ulong uVar32;
  long *unaff_x25;
  ulong uVar33;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 **ppuVar34;
  undefined8 uVar35;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar22 = param_1;
  func_0x000109898688();
  if (plVar22 != (long *)0x0) {
    plVar18 = param_1;
    FUN_10a053854(param_1,plVar22);
    if (plVar18 != (long *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (plVar18 != (long *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar19 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)ppuVar19 == 1) {
    return;
  }
  ppuVar34 = &puStack_30;
  uStack_28 = 0x10a2a0d70;
  ppuVar24 = (undefined **)0x0;
  uVar35 = 0x10a2a0d94;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a052ee0(1,0);
  ppuVar16 = &puStack_30;
SUB_10a2a0d94:
  *(undefined1 ***)((long)ppuVar16 + -0x10) = ppuVar34;
  *(undefined8 *)((long)ppuVar16 + -8) = uVar35;
  plVar22 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *(long **)((long)ppuVar16 + -0x70) = unaff_x28;
  *(long *)((long)ppuVar16 + -0x68) = unaff_x27;
  *(long **)((long)ppuVar16 + -0x60) = unaff_x26;
  *(long **)((long)ppuVar16 + -0x58) = unaff_x25;
  *(long **)((long)ppuVar16 + -0x50) = unaff_x24;
  *(long **)((long)ppuVar16 + -0x48) = unaff_x23;
  *(long **)((long)ppuVar16 + -0x40) = unaff_x22;
  *(long **)((long)ppuVar16 + -0x38) = unaff_x21;
  *(undefined8 *)((long)ppuVar16 + -0x30) = unaff_x20;
  *(long **)((long)ppuVar16 + -0x28) = param_1;
  *(undefined1 **)((long)ppuVar16 + -0x20) = (undefined1 *)((long)ppuVar16 + -0x10);
  *(code **)((long)ppuVar16 + -0x18) = FUN_10a2a0da8;
  ppuVar34 = (undefined1 **)((long)ppuVar16 + -0x20);
  param_1 = plVar22;
  (**(code **)(*plVar22 + 0x58))();
  if ((ulong)param_1[0x59] < 8) {
    param_1[param_1[0x59] + 0x4e] = param_1[0x5a];
    param_1[0x59] = param_1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_1 + 0x4b);
  }
  unaff_x21 = plVar22;
  FUN_10a2a0d08(plVar22,ppuVar24);
  FUN_10a2a11ec(param_4);
  if (*(int *)ppuVar19 != 7) {
LAB_10a2a1150:
    func_0x00010988bd28(&UNK_10f6347ad);
    goto LAB_10a2a1198;
  }
  plVar18 = plVar22;
  (**(code **)(*plVar22 + 0x98))(plVar22,ppuVar19[1]);
  *(long **)((long)ppuVar16 + -0x78) = plVar18;
  plVar18 = plVar22;
  (**(code **)(*plVar22 + 0x228))(plVar22,(undefined1 *)((long)ppuVar16 + -0x78));
  if ((int)plVar18 != 0) {
    plVar20 = plVar22;
    (**(code **)(*plVar22 + 0x58))();
    lVar21 = plVar20[0x48];
    if ((lVar21 == 0) ||
       (___dynamic_cast(lVar21,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar21 == 0)) {
      func_0x00010988bd28(&UNK_10f685540);
      goto LAB_10a2a1198;
    }
    *(undefined8 *)((long)ppuVar16 + -0x80) = *(undefined8 *)((long)ppuVar16 + -0x78);
    *(undefined8 *)((long)ppuVar16 + -0x78) = 0;
    *(long **)((long)ppuVar16 + -0x90) = plVar22;
    *(undefined4 *)((long)ppuVar16 + -0x88) = 7;
    FUN_10a688ac0((undefined1 *)((long)ppuVar16 + -0xb0),(undefined1 *)((long)ppuVar16 + -0x90),
                  *(undefined8 *)(lVar21 + 8));
    if ((3 < *(int *)((long)ppuVar16 + -0x88)) &&
       (*(undefined8 **)((long)ppuVar16 + -0x80) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)ppuVar16 + -0x80))();
    }
  }
  if (*(undefined8 **)((long)ppuVar16 + -0x78) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)((long)ppuVar16 + -0x78))();
  }
  if (((ulong)plVar18 & 1) == 0) goto LAB_10a2a1150;
  unaff_x22 = (long *)0x60;
  __Znwm();
  unaff_x28 = unaff_x22 + 1;
  *unaff_x28 = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = (long)&PTR_FUN_110bb9790;
  lVar21 = *(long *)((long)ppuVar16 + -0xb0);
  unaff_x26 = unaff_x22 + 3;
  unaff_x22[4] = *(long *)((long)ppuVar16 + -0xa8);
  *unaff_x26 = lVar21;
  if (*(long *)((long)ppuVar16 + -0xa8) != 0) {
    plVar22 = (long *)(*(long *)((long)ppuVar16 + -0xa8) + 8);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *plVar22 = *plVar22 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  *(undefined8 *)((long)ppuVar16 + -200) = extraout_x8;
  lVar21 = *(long *)((long)ppuVar16 + -0x98);
  lVar30 = *(long *)((long)ppuVar16 + -0xa0);
  unaff_x22[6] = *(long *)((long)ppuVar16 + -0x98);
  unaff_x22[5] = lVar30;
  if (lVar21 != 0) {
    plVar22 = (long *)(lVar21 + 0x10);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *plVar22 = *plVar22 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  *(undefined1 *)(unaff_x22 + 0xb) = 2;
  *(long **)((long)ppuVar16 + -0xc0) = unaff_x26;
  *(long **)((long)ppuVar16 + -0xb8) = unaff_x22;
  FUN_10a688c1c((undefined1 *)((long)ppuVar16 + -0xb0));
  unaff_x23 = unaff_x21 + 9;
  FUN_10a1cda24(unaff_x23,&PTR_DAT_110bb7f38);
  if (unaff_x23 == (long *)0x0) {
    puVar23 = &UNK_10f64981f;
LAB_10a2a1184:
    FUN_10a00946c(puVar23);
    goto LAB_10a2a1198;
  }
  *(undefined **)((long)ppuVar16 + -0xb0) = &DAT_10f3b95e5;
  *(undefined8 *)((long)ppuVar16 + -0xa8) = 9;
  FUN_10a2677b4(unaff_x21[0x11],(undefined1 *)((long)ppuVar16 + -0xb0));
  unaff_x24 = (long *)unaff_x23[4];
  if (unaff_x24 == (long *)0x0) {
LAB_10a2a1160:
    puVar23 = &UNK_10f64983a;
    goto LAB_10a2a1184;
  }
  ppuVar24 = &PTR_DAT_110bbadc8;
  ppuVar19 = &PTR_DAT_110bb7f98;
  param_4 = 0;
  unaff_x25 = unaff_x24;
  ___dynamic_cast();
  if (unaff_x25 == (long *)0x0) goto LAB_10a2a1160;
  puVar27 = (undefined8 *)unaff_x25[0xc];
  if (puVar27 < (undefined8 *)unaff_x25[0xd]) {
    *puVar27 = unaff_x26;
    puVar27[1] = unaff_x22;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
      if (bVar14) {
        *unaff_x28 = *unaff_x28 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    puVar27 = puVar27 + 2;
    goto LAB_10a2a10ac;
  }
  unaff_x27 = (long)puVar27 - unaff_x25[0xb];
  uVar25 = (unaff_x27 >> 4) + 1;
  if (uVar25 >> 0x3c != 0) goto LAB_10a2a118c;
  uVar33 = unaff_x25[0xd] - unaff_x25[0xb];
  uVar32 = (long)uVar33 >> 3;
  if (uVar32 <= uVar25) {
    uVar32 = uVar25;
  }
  if (0x7fffffffffffffef < uVar33) {
    uVar32 = 0xfffffffffffffff;
  }
  if (uVar32 >> 0x3c != 0) {
    func_0x000109ffded8();
LAB_10a2a1198:
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10a2a119c);
    (*pcVar15)();
  }
  lVar21 = uVar32 << 4;
  __Znwm();
  *(long **)((long)ppuVar16 + -0xd0) = param_1;
  puVar1 = (undefined8 *)(lVar21 + unaff_x27);
  *puVar1 = unaff_x26;
  puVar1[1] = unaff_x22;
  do {
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
    if (bVar14) {
      *unaff_x28 = *unaff_x28 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar30 = unaff_x25[0xb];
  puVar27 = puVar1 + 2;
  lVar28 = (long)puVar1 - (unaff_x25[0xc] - lVar30);
  _memcpy(lVar28,lVar30);
  unaff_x25[0xb] = lVar28;
  unaff_x25[0xc] = (long)puVar27;
  unaff_x25[0xd] = lVar21 + uVar32 * 0x10;
  if (lVar30 != 0) {
    __ZdlPv(lVar30);
  }
  param_1 = *(long **)((long)ppuVar16 + -0xd0);
LAB_10a2a10ac:
  unaff_x25[0xc] = (long)puVar27;
  (**(code **)(*unaff_x24 + 0x10))(unaff_x24);
  plVar22 = (long *)unaff_x23[4];
  (**(code **)(*plVar22 + 0x18))();
  if ((int)plVar22 != 0) {
    (**(code **)(*(long *)((long)unaff_x21 + *(long *)(*unaff_x21 + -0x18)) + 0x28))
              ((undefined *)((long)unaff_x21 + *(long *)(*unaff_x21 + -0x18)));
  }
  do {
    lVar21 = *unaff_x28;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
    if (bVar14) {
      *unaff_x28 = lVar21 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (lVar21 == 0) {
    (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
  }
  **(undefined4 **)((long)ppuVar16 + -200) = 0;
  plVar22 = param_1 + 0x4b;
  uVar35 = *(undefined8 *)((long)ppuVar16 + -0x20);
  uVar7 = *(undefined8 *)((long)ppuVar16 + -0x18);
  uVar2 = *(undefined8 *)((long)ppuVar16 + -0x30);
  uVar8 = *(undefined8 *)((long)ppuVar16 + -0x28);
  uVar3 = *(undefined8 *)((long)ppuVar16 + -0x40);
  uVar9 = *(undefined8 *)((long)ppuVar16 + -0x38);
  uVar4 = *(undefined8 *)((long)ppuVar16 + -0x50);
  uVar10 = *(undefined8 *)((long)ppuVar16 + -0x48);
  uVar5 = *(undefined8 *)((long)ppuVar16 + -0x60);
  uVar11 = *(undefined8 *)((long)ppuVar16 + -0x58);
  uVar6 = *(undefined8 *)((long)ppuVar16 + -0x70);
  uVar12 = *(undefined8 *)((long)ppuVar16 + -0x68);
  lVar21 = param_1[0x59];
  uVar25 = lVar21 - 1;
  param_1[0x59] = uVar25;
  if (uVar25 < 8) {
    uVar25 = plVar22[lVar21 + 2];
    if (param_1[0x5a] == uVar25) {
      return;
    }
  }
  else {
    uVar25 = *(ulong *)(param_1[0x57] + -8);
    param_1[0x57] = param_1[0x57] + -8;
    if (param_1[0x5a] == uVar25) {
      return;
    }
  }
  *(undefined8 *)((long)ppuVar16 + -0x70) = uVar6;
  *(undefined8 *)((long)ppuVar16 + -0x68) = uVar12;
  *(undefined8 *)((long)ppuVar16 + -0x60) = uVar5;
  *(undefined8 *)((long)ppuVar16 + -0x58) = uVar11;
  *(undefined8 *)((long)ppuVar16 + -0x50) = uVar4;
  *(undefined8 *)((long)ppuVar16 + -0x48) = uVar10;
  *(undefined8 *)((long)ppuVar16 + -0x40) = uVar3;
  *(undefined8 *)((long)ppuVar16 + -0x38) = uVar9;
  *(undefined8 *)((long)ppuVar16 + -0x30) = uVar2;
  *(undefined8 *)((long)ppuVar16 + -0x28) = uVar8;
  *(undefined8 *)((long)ppuVar16 + -0x20) = uVar35;
  *(undefined8 *)((long)ppuVar16 + -0x18) = uVar7;
  lVar21 = *plVar22;
  lVar30 = param_1[0x4c];
  lVar28 = lVar30 - lVar21;
  uVar32 = lVar28 >> 4;
  if (uVar32 < uVar25) {
    uVar33 = uVar25 - uVar32;
    lVar31 = param_1[0x4d];
    if ((ulong)(lVar31 - lVar30 >> 4) < uVar33) {
      if (uVar25 >> 0x3c == 0) {
        uVar26 = lVar31 - lVar21 >> 3;
        if (uVar26 <= uVar25) {
          uVar26 = uVar25;
        }
        if (0x7fffffffffffffef < (ulong)(lVar31 - lVar21)) {
          uVar26 = 0xfffffffffffffff;
        }
        *(long **)((long)ppuVar16 + -0x78) = plVar22;
        if (uVar26 >> 0x3c == 0) {
          lVar17 = uVar26 << 4;
          __Znwm();
          lVar30 = lVar17 + lVar28;
          _bzero(lVar30,uVar33 * 0x10);
          lVar29 = lVar30 + uVar32 * -0x10;
          _memcpy(lVar29,lVar21,lVar28);
          *plVar22 = lVar29;
          param_1[0x4c] = lVar30 + uVar33 * 0x10;
          param_1[0x4d] = lVar17 + uVar26 * 0x10;
          *(long *)((long)ppuVar16 + -0x88) = lVar21;
          *(long *)((long)ppuVar16 + -0x80) = lVar31;
          *(long *)((long)ppuVar16 + -0x98) = lVar21;
          *(long *)((long)ppuVar16 + -0x90) = lVar21;
          func_0x00010988c1b8((undefined1 *)((long)ppuVar16 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar15)();
    }
    _bzero(lVar30,uVar33 * 0x10);
    param_1[0x4c] = lVar30 + uVar33 * 0x10;
  }
  else if (uVar25 < uVar32) {
    lVar21 = lVar21 + uVar25 * 0x10;
    while (lVar30 != lVar21) {
      lVar30 = lVar30 + -0x10;
      func_0x00010988c204(lVar30);
    }
    param_1[0x4c] = lVar21;
  }
code_r0x00010988c138:
  param_1[0x5a] = uVar25;
  return;
LAB_10a2a118c:
  uVar35 = 0x10a2a1190;
  ppuVar16 = (undefined1 **)((long)ppuVar16 + -0xd0);
  unaff_x20 = extraout_x8;
  goto SUB_10a2a0d94;
}



/* Entry: 10a2a0d70; end: 10a2a0da7;  */

/* WARNING: Possible PIC construction at 0x00010a2a118c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2a1190) */

void FUN_10a2a0d70(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  code *pcVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  ulong uVar24;
  undefined8 extraout_x8;
  ulong uVar25;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar26;
  long *unaff_x21;
  long lVar27;
  long *unaff_x22;
  long lVar28;
  long lVar29;
  long *unaff_x23;
  long lVar30;
  long *unaff_x24;
  ulong uVar31;
  long *unaff_x25;
  ulong uVar32;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 *puVar33;
  undefined8 uVar34;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar33 = &stack0xfffffffffffffff0;
  ppuVar23 = (undefined **)0x0;
  uVar34 = 0x10a2a0d94;
  FUN_10a052ee0(1,0);
  puVar16 = &stack0xfffffffffffffff0;
SUB_10a2a0d94:
  *(undefined1 **)(puVar16 + -0x10) = puVar33;
  *(undefined8 *)(puVar16 + -8) = uVar34;
  plVar21 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *(long **)(puVar16 + -0x70) = unaff_x28;
  *(long *)(puVar16 + -0x68) = unaff_x27;
  *(long **)(puVar16 + -0x60) = unaff_x26;
  *(long **)(puVar16 + -0x58) = unaff_x25;
  *(long **)(puVar16 + -0x50) = unaff_x24;
  *(long **)(puVar16 + -0x48) = unaff_x23;
  *(long **)(puVar16 + -0x40) = unaff_x22;
  *(long **)(puVar16 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar16 + -0x30) = unaff_x20;
  *(long **)(puVar16 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar16 + -0x20) = puVar16 + -0x10;
  *(code **)(puVar16 + -0x18) = FUN_10a2a0da8;
  puVar33 = puVar16 + -0x20;
  unaff_x19 = plVar21;
  (**(code **)(*plVar21 + 0x58))();
  if ((ulong)unaff_x19[0x59] < 8) {
    unaff_x19[unaff_x19[0x59] + 0x4e] = unaff_x19[0x5a];
    unaff_x19[0x59] = unaff_x19[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(unaff_x19 + 0x4b);
  }
  unaff_x21 = plVar21;
  FUN_10a2a0d08(plVar21,ppuVar23);
  FUN_10a2a11ec(param_4);
  if (*(int *)param_1 != 7) {
LAB_10a2a1150:
    func_0x00010988bd28(&UNK_10f6347ad);
    goto LAB_10a2a1198;
  }
  plVar18 = plVar21;
  (**(code **)(*plVar21 + 0x98))(plVar21,param_1[1]);
  *(long **)(puVar16 + -0x78) = plVar18;
  plVar18 = plVar21;
  (**(code **)(*plVar21 + 0x228))(plVar21,puVar16 + -0x78);
  if ((int)plVar18 != 0) {
    plVar19 = plVar21;
    (**(code **)(*plVar21 + 0x58))();
    lVar20 = plVar19[0x48];
    if ((lVar20 == 0) ||
       (___dynamic_cast(lVar20,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar20 == 0)) {
      func_0x00010988bd28(&UNK_10f685540);
      goto LAB_10a2a1198;
    }
    *(undefined8 *)(puVar16 + -0x80) = *(undefined8 *)(puVar16 + -0x78);
    *(undefined8 *)(puVar16 + -0x78) = 0;
    *(long **)(puVar16 + -0x90) = plVar21;
    *(undefined4 *)(puVar16 + -0x88) = 7;
    FUN_10a688ac0(puVar16 + -0xb0,puVar16 + -0x90,*(undefined8 *)(lVar20 + 8));
    if ((3 < *(int *)(puVar16 + -0x88)) && (*(undefined8 **)(puVar16 + -0x80) != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)(puVar16 + -0x80))();
    }
  }
  if (*(undefined8 **)(puVar16 + -0x78) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(puVar16 + -0x78))();
  }
  if (((ulong)plVar18 & 1) == 0) goto LAB_10a2a1150;
  unaff_x22 = (long *)0x60;
  __Znwm();
  unaff_x28 = unaff_x22 + 1;
  *unaff_x28 = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = (long)&PTR_FUN_110bb9790;
  lVar20 = *(long *)(puVar16 + -0xb0);
  unaff_x26 = unaff_x22 + 3;
  unaff_x22[4] = *(long *)(puVar16 + -0xa8);
  *unaff_x26 = lVar20;
  if (*(long *)(puVar16 + -0xa8) != 0) {
    plVar21 = (long *)(*(long *)(puVar16 + -0xa8) + 8);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = *plVar21 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  *(undefined8 *)(puVar16 + -200) = extraout_x8;
  lVar20 = *(long *)(puVar16 + -0x98);
  lVar29 = *(long *)(puVar16 + -0xa0);
  unaff_x22[6] = *(long *)(puVar16 + -0x98);
  unaff_x22[5] = lVar29;
  if (lVar20 != 0) {
    plVar21 = (long *)(lVar20 + 0x10);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = *plVar21 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  *(undefined1 *)(unaff_x22 + 0xb) = 2;
  *(long **)(puVar16 + -0xc0) = unaff_x26;
  *(long **)(puVar16 + -0xb8) = unaff_x22;
  FUN_10a688c1c(puVar16 + -0xb0);
  unaff_x23 = unaff_x21 + 9;
  FUN_10a1cda24(unaff_x23,&PTR_DAT_110bb7f38);
  if (unaff_x23 == (long *)0x0) {
    puVar22 = &UNK_10f64981f;
LAB_10a2a1184:
    FUN_10a00946c(puVar22);
    goto LAB_10a2a1198;
  }
  *(undefined **)(puVar16 + -0xb0) = &DAT_10f3b95e5;
  *(undefined8 *)(puVar16 + -0xa8) = 9;
  FUN_10a2677b4(unaff_x21[0x11],puVar16 + -0xb0);
  unaff_x24 = (long *)unaff_x23[4];
  if (unaff_x24 == (long *)0x0) {
LAB_10a2a1160:
    puVar22 = &UNK_10f64983a;
    goto LAB_10a2a1184;
  }
  ppuVar23 = &PTR_DAT_110bbadc8;
  param_1 = &PTR_DAT_110bb7f98;
  param_4 = 0;
  unaff_x25 = unaff_x24;
  ___dynamic_cast();
  if (unaff_x25 == (long *)0x0) goto LAB_10a2a1160;
  puVar26 = (undefined8 *)unaff_x25[0xc];
  if (puVar26 < (undefined8 *)unaff_x25[0xd]) {
    *puVar26 = unaff_x26;
    puVar26[1] = unaff_x22;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
      if (bVar14) {
        *unaff_x28 = *unaff_x28 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    puVar26 = puVar26 + 2;
    goto LAB_10a2a10ac;
  }
  unaff_x27 = (long)puVar26 - unaff_x25[0xb];
  uVar24 = (unaff_x27 >> 4) + 1;
  if (uVar24 >> 0x3c != 0) goto LAB_10a2a118c;
  uVar32 = unaff_x25[0xd] - unaff_x25[0xb];
  uVar31 = (long)uVar32 >> 3;
  if (uVar31 <= uVar24) {
    uVar31 = uVar24;
  }
  if (0x7fffffffffffffef < uVar32) {
    uVar31 = 0xfffffffffffffff;
  }
  if (uVar31 >> 0x3c != 0) {
    func_0x000109ffded8();
LAB_10a2a1198:
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10a2a119c);
    (*pcVar15)();
  }
  lVar20 = uVar31 << 4;
  __Znwm();
  *(long **)(puVar16 + -0xd0) = unaff_x19;
  puVar1 = (undefined8 *)(lVar20 + unaff_x27);
  *puVar1 = unaff_x26;
  puVar1[1] = unaff_x22;
  do {
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
    if (bVar14) {
      *unaff_x28 = *unaff_x28 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar29 = unaff_x25[0xb];
  puVar26 = puVar1 + 2;
  lVar27 = (long)puVar1 - (unaff_x25[0xc] - lVar29);
  _memcpy(lVar27,lVar29);
  unaff_x25[0xb] = lVar27;
  unaff_x25[0xc] = (long)puVar26;
  unaff_x25[0xd] = lVar20 + uVar31 * 0x10;
  if (lVar29 != 0) {
    __ZdlPv(lVar29);
  }
  unaff_x19 = *(long **)(puVar16 + -0xd0);
LAB_10a2a10ac:
  unaff_x25[0xc] = (long)puVar26;
  (**(code **)(*unaff_x24 + 0x10))(unaff_x24);
  plVar21 = (long *)unaff_x23[4];
  (**(code **)(*plVar21 + 0x18))();
  if ((int)plVar21 != 0) {
    (**(code **)(*(long *)((long)unaff_x21 + *(long *)(*unaff_x21 + -0x18)) + 0x28))
              ((undefined *)((long)unaff_x21 + *(long *)(*unaff_x21 + -0x18)));
  }
  do {
    lVar20 = *unaff_x28;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
    if (bVar14) {
      *unaff_x28 = lVar20 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (lVar20 == 0) {
    (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
  }
  **(undefined4 **)(puVar16 + -200) = 0;
  plVar21 = unaff_x19 + 0x4b;
  uVar34 = *(undefined8 *)(puVar16 + -0x20);
  uVar7 = *(undefined8 *)(puVar16 + -0x18);
  uVar2 = *(undefined8 *)(puVar16 + -0x30);
  uVar8 = *(undefined8 *)(puVar16 + -0x28);
  uVar3 = *(undefined8 *)(puVar16 + -0x40);
  uVar9 = *(undefined8 *)(puVar16 + -0x38);
  uVar4 = *(undefined8 *)(puVar16 + -0x50);
  uVar10 = *(undefined8 *)(puVar16 + -0x48);
  uVar5 = *(undefined8 *)(puVar16 + -0x60);
  uVar11 = *(undefined8 *)(puVar16 + -0x58);
  uVar6 = *(undefined8 *)(puVar16 + -0x70);
  uVar12 = *(undefined8 *)(puVar16 + -0x68);
  lVar20 = unaff_x19[0x59];
  uVar24 = lVar20 - 1;
  unaff_x19[0x59] = uVar24;
  if (uVar24 < 8) {
    uVar24 = plVar21[lVar20 + 2];
    if (unaff_x19[0x5a] == uVar24) {
      return;
    }
  }
  else {
    uVar24 = *(ulong *)(unaff_x19[0x57] + -8);
    unaff_x19[0x57] = unaff_x19[0x57] + -8;
    if (unaff_x19[0x5a] == uVar24) {
      return;
    }
  }
  *(undefined8 *)(puVar16 + -0x70) = uVar6;
  *(undefined8 *)(puVar16 + -0x68) = uVar12;
  *(undefined8 *)(puVar16 + -0x60) = uVar5;
  *(undefined8 *)(puVar16 + -0x58) = uVar11;
  *(undefined8 *)(puVar16 + -0x50) = uVar4;
  *(undefined8 *)(puVar16 + -0x48) = uVar10;
  *(undefined8 *)(puVar16 + -0x40) = uVar3;
  *(undefined8 *)(puVar16 + -0x38) = uVar9;
  *(undefined8 *)(puVar16 + -0x30) = uVar2;
  *(undefined8 *)(puVar16 + -0x28) = uVar8;
  *(undefined8 *)(puVar16 + -0x20) = uVar34;
  *(undefined8 *)(puVar16 + -0x18) = uVar7;
  lVar20 = *plVar21;
  lVar29 = unaff_x19[0x4c];
  lVar27 = lVar29 - lVar20;
  uVar31 = lVar27 >> 4;
  if (uVar31 < uVar24) {
    uVar32 = uVar24 - uVar31;
    lVar30 = unaff_x19[0x4d];
    if ((ulong)(lVar30 - lVar29 >> 4) < uVar32) {
      if (uVar24 >> 0x3c == 0) {
        uVar25 = lVar30 - lVar20 >> 3;
        if (uVar25 <= uVar24) {
          uVar25 = uVar24;
        }
        if (0x7fffffffffffffef < (ulong)(lVar30 - lVar20)) {
          uVar25 = 0xfffffffffffffff;
        }
        *(long **)(puVar16 + -0x78) = plVar21;
        if (uVar25 >> 0x3c == 0) {
          lVar17 = uVar25 << 4;
          __Znwm();
          lVar29 = lVar17 + lVar27;
          _bzero(lVar29,uVar32 * 0x10);
          lVar28 = lVar29 + uVar31 * -0x10;
          _memcpy(lVar28,lVar20,lVar27);
          *plVar21 = lVar28;
          unaff_x19[0x4c] = lVar29 + uVar32 * 0x10;
          unaff_x19[0x4d] = lVar17 + uVar25 * 0x10;
          *(long *)(puVar16 + -0x88) = lVar20;
          *(long *)(puVar16 + -0x80) = lVar30;
          *(long *)(puVar16 + -0x98) = lVar20;
          *(long *)(puVar16 + -0x90) = lVar20;
          func_0x00010988c1b8(puVar16 + -0x98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar15)();
    }
    _bzero(lVar29,uVar32 * 0x10);
    unaff_x19[0x4c] = lVar29 + uVar32 * 0x10;
  }
  else if (uVar24 < uVar31) {
    lVar20 = lVar20 + uVar24 * 0x10;
    while (lVar29 != lVar20) {
      lVar29 = lVar29 + -0x10;
      func_0x00010988c204(lVar29);
    }
    unaff_x19[0x4c] = lVar20;
  }
code_r0x00010988c138:
  unaff_x19[0x5a] = uVar24;
  return;
LAB_10a2a118c:
  uVar34 = 0x10a2a1190;
  puVar16 = puVar16 + -0xd0;
  unaff_x20 = extraout_x8;
  goto SUB_10a2a0d94;
}



/* Entry: 10a2a0da8; end: 10a2a11eb;  */

void FUN_10a2a0da8(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
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
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a11ec(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_68 = plVar9;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_68);
    if ((int)plVar12 != 0) {
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar9[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a2a1198;
      }
      plStack_70 = plStack_68;
      plStack_68 = (long *)0x0;
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,7);
      plStack_80 = param_2;
      FUN_10a688ac0(&puStack_a0,&plStack_80,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)plStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)*plStack_68)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar23 = plVar9 + 1;
      *plVar23 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bb9790;
      plVar12 = plVar9 + 3;
      plVar9[4] = lStack_98;
      *plVar12 = (long)puStack_a0;
      if (lStack_98 != 0) {
        plVar10 = (long *)(lStack_98 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9[6] = (long)plStack_88;
      plVar9[5] = lStack_90;
      if (plStack_88 != (long *)0x0) {
        plStack_88 = plStack_88 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
          if (bVar3) {
            *plStack_88 = *plStack_88 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&puStack_a0);
      plVar10 = plVar7 + 9;
      FUN_10a1cda24(plVar10,&PTR_DAT_110bb7f38);
      if (plVar10 == (long *)0x0) {
        puVar13 = &UNK_10f64981f;
      }
      else {
        puStack_a0 = &DAT_10f3b95e5;
        lStack_98 = 9;
        FUN_10a2677b4(plVar7[0x11],&puStack_a0);
        plVar19 = (long *)plVar10[4];
        if ((plVar19 != (long *)0x0) &&
           (plVar11 = plVar19, ___dynamic_cast(plVar19,&PTR_DAT_110bbadc8,&PTR_DAT_110bb7f98,0),
           plVar11 != (long *)0x0)) {
          puVar16 = (undefined8 *)plVar11[0xc];
          if (puVar16 < (undefined8 *)plVar11[0xd]) {
            *puVar16 = plVar12;
            puVar16[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar16 = puVar16 + 2;
          }
          else {
            lVar8 = (long)puVar16 - plVar11[0xb];
            uVar14 = (lVar8 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              func_0x00010a2a0d94();
              goto LAB_10a2a1198;
            }
            uVar21 = plVar11[0xd] - plVar11[0xb];
            uVar20 = (long)uVar21 >> 3;
            if (uVar20 <= uVar14) {
              uVar20 = uVar14;
            }
            if (0x7fffffffffffffef < uVar21) {
              uVar20 = 0xfffffffffffffff;
            }
            if (uVar20 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a2a1198;
            }
            lVar18 = uVar20 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar18 + lVar8);
            *puVar1 = plVar12;
            puVar1[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar8 = plVar11[0xb];
            puVar16 = puVar1 + 2;
            lVar22 = (long)puVar1 - (plVar11[0xc] - lVar8);
            _memcpy(lVar22,lVar8);
            plVar11[0xb] = lVar22;
            plVar11[0xc] = (long)puVar16;
            plVar11[0xd] = lVar18 + uVar20 * 0x10;
            if (lVar8 != 0) {
              __ZdlPv(lVar8);
            }
          }
          plVar11[0xc] = (long)puVar16;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          plVar12 = (long *)plVar10[4];
          (**(code **)(*plVar12 + 0x18))();
          if ((int)plVar12 != 0) {
            (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                      ((long)plVar7 + *(long *)(*plVar7 + -0x18));
          }
          do {
            lVar8 = *plVar23;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar3) {
              *plVar23 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
          *param_1 = 0;
          plVar7 = plVar6 + 0x4b;
          lVar8 = plVar6[0x59];
          uVar14 = lVar8 - 1;
          plVar6[0x59] = uVar14;
          if (uVar14 < 8) {
            uVar14 = plVar7[lVar8 + 2];
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          else {
            uVar14 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          plVar9 = (long *)*plVar7;
          plVar12 = (long *)plVar6[0x4c];
          lVar8 = (long)plVar12 - (long)plVar9;
          uVar20 = lVar8 >> 4;
          if (uVar20 < uVar14) {
            uVar21 = uVar14 - uVar20;
            lVar18 = plVar6[0x4d];
            if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar21) {
              if (uVar14 >> 0x3c == 0) {
                uVar15 = lVar18 - (long)plVar9 >> 3;
                if (uVar15 <= uVar14) {
                  uVar15 = uVar14;
                }
                if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar9)) {
                  uVar15 = 0xfffffffffffffff;
                }
                plStack_68 = plVar7;
                if (uVar15 >> 0x3c == 0) {
                  lVar5 = uVar15 << 4;
                  __Znwm();
                  lVar22 = lVar5 + lVar8;
                  _bzero(lVar22,uVar21 * 0x10);
                  lVar17 = lVar22 + uVar20 * -0x10;
                  _memcpy(lVar17,plVar9,lVar8);
                  *plVar7 = lVar17;
                  plVar6[0x4c] = lVar22 + uVar21 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar15 * 0x10;
                  plStack_88 = plVar9;
                  plStack_80 = plVar9;
                  plStack_78 = plVar9;
                  plStack_70 = (long *)lVar18;
                  func_0x00010988c1b8(&plStack_88);
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
            _bzero(plVar12,uVar21 * 0x10);
            plVar6[0x4c] = (long)(plVar12 + uVar21 * 2);
          }
          else if (uVar14 < uVar20) {
            while (plVar12 != plVar9 + uVar14 * 2) {
              plVar12 = plVar12 + -2;
              func_0x00010988c204(plVar12);
            }
            plVar6[0x4c] = (long)(plVar9 + uVar14 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar14;
          return;
        }
        puVar13 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar13);
      goto LAB_10a2a1198;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a1198:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a119c);
  (*pcVar4)();
}



/* Entry: 10a2a11ec; end: 10a2a120f;  */

void FUN_10a2a11ec(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb9790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a1210; end: 10a2a121f;  */

void FUN_10a2a1210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a1220; end: 10a2a123f;  */

void FUN_10a2a1220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9790;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a1240; end: 10a2a1277;  */

undefined1  [16] FUN_10a2a1240(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a1264);
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



/* Entry: 10a2a1278; end: 10a2a13d7;  */

void FUN_10a2a1278(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  ppuVar5 = &puStack_60;
  ppuVar14 = &puStack_60;
  plVar4 = param_1 + 9;
  puVar7 = param_2;
  plVar13 = param_3;
  FUN_10a1cda24();
  if (plVar4 != (long *)0x0) {
    uStack_58 = param_2[1];
    puStack_60 = (undefined1 *)*param_2;
    FUN_10a2677b4(param_1[0x11],&puStack_60);
    if (*param_3 != 0) {
      plVar13 = (long *)plVar4[4];
      FUN_10a2a0a40(plVar13 + 4,*param_3,param_3[1]);
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    plVar4 = (long *)plVar4[4];
    (**(code **)(*plVar4 + 0x18))();
    if ((int)plVar4 == 0) {
      return;
    }
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    return;
  }
  uVar10 = param_2[1];
  if (0x7ffffffffffffff7 < uVar10) {
    func_0x000109ffde50();
    if ((long)uStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
    __Unwind_Resume();
    plVar6 = plVar4;
    (**(code **)(*plVar4 + 0x58))();
    if ((ulong)plVar6[0x59] < 8) {
      plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
      plVar6[0x59] = plVar6[0x59] + 1;
    }
    else {
      func_0x00010988bfcc(plVar6 + 0x4b);
    }
    FUN_10a2a0c28(extraout_x8,plVar4,0x10a2a1268,0,puVar7,plVar13,param_4);
    plVar4 = plVar6 + 0x4b;
    lVar9 = plVar6[0x59];
    uVar10 = lVar9 - 1;
    plVar6[0x59] = uVar10;
    if (uVar10 < 8) {
      uVar10 = plVar4[lVar9 + 2];
      if (plVar6[0x5a] == uVar10) {
        return;
      }
    }
    else {
      uVar10 = *(ulong *)(plVar6[0x57] + -8);
      plVar6[0x57] = plVar6[0x57] + -8;
      if (plVar6[0x5a] == uVar10) {
        return;
      }
    }
    lVar9 = *plVar4;
    lVar16 = plVar6[0x4c];
    lVar12 = lVar16 - lVar9;
    uVar18 = lVar12 >> 4;
    if (uVar18 < uVar10) {
      uVar19 = uVar10 - uVar18;
      lVar17 = plVar6[0x4d];
      if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
        if (uVar10 >> 0x3c == 0) {
          uVar8 = lVar17 - lVar9 >> 3;
          if (uVar8 <= uVar10) {
            uVar8 = uVar10;
          }
          if (0x7fffffffffffffef < (ulong)(lVar17 - lVar9)) {
            uVar8 = 0xfffffffffffffff;
          }
          plStack_c8 = plVar4;
          if (uVar8 >> 0x3c == 0) {
            lVar3 = uVar8 << 4;
            __Znwm();
            lVar16 = lVar3 + lVar12;
            _bzero(lVar16,uVar19 * 0x10);
            lVar15 = lVar16 + uVar18 * -0x10;
            _memcpy(lVar15,lVar9,lVar12);
            *plVar4 = lVar15;
            plVar6[0x4c] = lVar16 + uVar19 * 0x10;
            plVar6[0x4d] = lVar3 + uVar8 * 0x10;
            lStack_e8 = lVar9;
            lStack_e0 = lVar9;
            lStack_d8 = lVar9;
            lStack_d0 = lVar17;
            func_0x00010988c1b8(&lStack_e8);
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
      _bzero(lVar16,uVar19 * 0x10);
      plVar6[0x4c] = lVar16 + uVar19 * 0x10;
    }
    else if (uVar10 < uVar18) {
      lVar9 = lVar9 + uVar10 * 0x10;
      while (lVar16 != lVar9) {
        lVar16 = lVar16 + -0x10;
        func_0x00010988c204(lVar16);
      }
      plVar6[0x4c] = lVar9;
    }
code_r0x00010988c138:
    plVar6[0x5a] = uVar10;
    return;
  }
  lVar9 = *param_3;
  uVar11 = *param_2;
  if (uVar10 < 0x17) {
    uStack_50 = CONCAT17((char)uVar10,(undefined7)uStack_50);
    if (uVar10 == 0) goto LAB_10a2a1380;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((uVar10 | 7) != 0x17) {
      puVar1 = (undefined1 *)((uVar10 | 7) + 1);
    }
    ppuVar5 = (undefined1 **)puVar1;
    __Znwm();
    uStack_50 = (ulong)puVar1 | 0x8000000000000000;
    puStack_60 = (undefined1 *)ppuVar5;
    uStack_58 = uVar10;
  }
  _memmove(ppuVar5,uVar11,uVar10);
  ppuVar14 = ppuVar5;
LAB_10a2a1380:
  *(undefined1 *)((long)ppuVar14 + uVar10) = 0;
  FUN_10a1bcbe0(lVar9,&puStack_60);
  if ((long)uStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a2a13d8; end: 10a2a148f;  */

void FUN_10a2a13d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,0x10a2a1268,0,param_3,param_4,param_5);
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



/* Entry: 10a2a1490; end: 10a2a149f;  */

void FUN_10a2a1490(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined *unaff_x26;
  undefined8 *puVar21;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8188;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a166c:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a1678:
    FUN_10a2a1680();
  }
  else {
    uStack_68 = 8;
    puStack_70 = &DAT_10f464b16;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a1614;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a1660:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a166c;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb81e8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb81e8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a1660;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a15fc:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a1614:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a1678;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a15fc;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a1680;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a1694;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a174c(extraout_x8,plVar6,FUN_10a2a1490,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a14a0; end: 10a2a167f;  */

void FUN_10a2a14a0(long *param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *unaff_x23;
  long lVar18;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar19;
  undefined *unaff_x26;
  undefined8 *puVar20;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = param_2;
  ppuVar11 = param_3;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a166c:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a1678:
    FUN_10a2a1680();
  }
  else {
    puStack_68 = param_2[1];
    puStack_70 = *param_2;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    param_2 = (undefined **)plVar6[4];
    unaff_x26 = *param_3;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a1614;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (param_2 == (undefined **)0x0) {
LAB_10a2a1660:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a166c;
    }
    unaff_x25 = param_3[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb81e8;
    param_4 = 0;
    ppuVar7 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bbadc8,&PTR_DAT_110bb81e8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a1660;
    puVar20 = (undefined8 *)ppuVar7[0xc];
    if (puVar20 < ppuVar7[0xd]) {
      *puVar20 = unaff_x26;
      puVar20[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar20 = puVar20 + 2;
LAB_10a2a15fc:
      ppuVar7[0xc] = (undefined *)puVar20;
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = (undefined **)plVar6[4];
LAB_10a2a1614:
      (**(code **)(*param_2 + 0x18))();
      if ((int)param_2 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar20 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_3 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a1678;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar20 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar20;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a15fc;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a1680;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a1694;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_3;
  ppuStack_a8 = param_2;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a174c(extraout_x8,plVar6,FUN_10a2a1490,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar9[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar9[0x4c] = lVar17 + uVar19 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar9[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a1680; end: 10a2a1693;  */

void FUN_10a2a1680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2a174c(extraout_x8,plVar3,FUN_10a2a1490,0,param_2,param_3,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a2a1694; end: 10a2a174b;  */

void FUN_10a2a1694(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a174c(param_1,param_2,FUN_10a2a1490,0,param_3,param_4,param_5);
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



/* Entry: 10a2a174c; end: 10a2a19ab;  */

void FUN_10a2a174c(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  int iStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  FUN_10a2a0d08(param_2,param_5);
  FUN_10a2a19ac(param_7);
  if (*param_6 == 7) {
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    plVar5 = param_2;
    plStack_58 = plVar7;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_58);
    if ((int)plVar5 != 0) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar7[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar6 == 0))
      goto LAB_10a2a195c;
      plStack_60 = plStack_58;
      plStack_58 = (long *)0x0;
      iStack_68 = 7;
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_68) && (plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
      }
    }
    if (plStack_58 != (long *)0x0) {
      (**(code **)*plStack_58)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      plVar7 = (long *)0x60;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110bb97e0;
      plStack_a0 = plVar7 + 3;
      plVar7[4] = lStack_88;
      *plStack_a0 = lStack_90;
      if (lStack_88 != 0) {
        plVar5 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7[6] = lStack_78;
      plVar7[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar5 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar7 + 0xb) = 2;
      plStack_98 = plVar7;
      FUN_10a688c1c(&lStack_90);
      plVar4 = (long *)((long)plVar4 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar4 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(plVar4,&plStack_a0);
      plVar4 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar7 = plStack_98 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      *param_1 = 0;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a195c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a196c);
  (*pcVar3)();
}



/* Entry: 10a2a19ac; end: 10a2a19cf;  */

void FUN_10a2a19ac(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb97e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a19d0; end: 10a2a19df;  */

void FUN_10a2a19d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb97e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a19e0; end: 10a2a19ff;  */

void FUN_10a2a19e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb97e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a1a00; end: 10a2a1a37;  */

undefined1  [16] FUN_10a2a1a00(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a1a24);
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



/* Entry: 10a2a1a38; end: 10a2a1aef;  */

void FUN_10a2a1a38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,0x10a2a1a28,0,param_3,param_4,param_5);
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



/* Entry: 10a2a1af0; end: 10a2a1aff;  */

void FUN_10a2a1af0(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb82e8;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a166c:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a1678:
    FUN_10a2a1680();
  }
  else {
    uStack_68 = 0xb;
    puStack_70 = &DAT_10f464ad0;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a1614;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a1660:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a166c;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb81e8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb81e8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a1660;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a15fc:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a1614:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a1678;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a15fc;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a1680;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a1694;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a174c(extraout_x8,plVar6,FUN_10a2a1490,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a1b00; end: 10a2a1bb7;  */

void FUN_10a2a1b00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a174c(param_1,param_2,FUN_10a2a1af0,0,param_3,param_4,param_5);
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



/* Entry: 10a2a1bb8; end: 10a2a1bc7;  */

void FUN_10a2a1bb8(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb83c8;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a166c:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a1678:
    FUN_10a2a1680();
  }
  else {
    uStack_68 = 0x15;
    puStack_70 = &DAT_10f6496d1;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a1614;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a1660:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a166c;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb81e8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb81e8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a1660;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a15fc:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a1614:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a1678;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a15fc;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a1680;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a1694;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a174c(extraout_x8,plVar6,FUN_10a2a1490,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a1bc8; end: 10a2a1c7f;  */

void FUN_10a2a1bc8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a174c(param_1,param_2,FUN_10a2a1bb8,0,param_3,param_4,param_5);
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



/* Entry: 10a2a1c80; end: 10a2a1c8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2a1344) */
/* WARNING: Removing unreachable block (ram,0x00010a2a1348) */
/* WARNING: Removing unreachable block (ram,0x00010a2a1354) */
/* WARNING: Removing unreachable block (ram,0x00010a2a13b8) */
/* WARNING: Removing unreachable block (ram,0x00010a2a13c8) */
/* WARNING: Removing unreachable block (ram,0x00010a2a13d0) */
/* WARNING: Removing unreachable block (ram,0x00010a2a1470) */
/* WARNING: Removing unreachable block (ram,0x00010a2a141c) */
/* WARNING: Removing unreachable block (ram,0x00010988c170) */
/* WARNING: Removing unreachable block (ram,0x00010988c004) */
/* WARNING: Removing unreachable block (ram,0x00010988c01c) */
/* WARNING: Removing unreachable block (ram,0x00010988c020) */
/* WARNING: Removing unreachable block (ram,0x00010988c184) */
/* WARNING: Removing unreachable block (ram,0x00010988c198) */
/* WARNING: Removing unreachable block (ram,0x00010988c19c) */
/* WARNING: Removing unreachable block (ram,0x00010988c024) */
/* WARNING: Removing unreachable block (ram,0x00010988c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010988c100) */
/* WARNING: Removing unreachable block (ram,0x00010988c104) */
/* WARNING: Removing unreachable block (ram,0x00010988c10c) */
/* WARNING: Removing unreachable block (ram,0x00010988c134) */
/* WARNING: Removing unreachable block (ram,0x00010988c060) */
/* WARNING: Removing unreachable block (ram,0x00010988c074) */
/* WARNING: Removing unreachable block (ram,0x00010988c15c) */
/* WARNING: Removing unreachable block (ram,0x00010988c07c) */
/* WARNING: Removing unreachable block (ram,0x00010988c088) */
/* WARNING: Removing unreachable block (ram,0x00010988c098) */
/* WARNING: Removing unreachable block (ram,0x00010988c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010988c164) */
/* WARNING: Removing unreachable block (ram,0x00010988c168) */
/* WARNING: Removing unreachable block (ram,0x00010988c11c) */
/* WARNING: Removing unreachable block (ram,0x00010988c138) */

void FUN_10a2a1c80(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar1 = param_1 + 9;
  FUN_10a1cda24();
  if (plVar1 == (long *)0x0) {
    lVar2 = *param_2;
    uStack_50 = CONCAT17(0xb,(undefined7)uStack_50);
    _memmove(&puStack_60,&DAT_10f464ad0,0xb);
    FUN_10a1bcbe0(lVar2,&puStack_60);
    if (uStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
  }
  else {
    uStack_58 = 0xb;
    puStack_60 = &DAT_10f464ad0;
    FUN_10a2677b4(param_1[0x11],&puStack_60);
    if (*param_2 != 0) {
      plVar3 = (long *)plVar1[4];
      FUN_10a2a0a40(plVar3 + 4,*param_2,param_2[1]);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    plVar1 = (long *)plVar1[4];
    (**(code **)(*plVar1 + 0x18))();
    if ((int)plVar1 != 0) {
      (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                ((long)param_1 + *(long *)(*param_1 + -0x18));
    }
  }
  return;
}



/* Entry: 10a2a1c90; end: 10a2a1d47;  */

void FUN_10a2a1c90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a1c80,0,param_3,param_4,param_5);
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



/* Entry: 10a2a1d48; end: 10a2a1d5b;  */

void FUN_10a2a1d48(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar10 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar6 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar10;
  FUN_10a2a0d08(plVar10,param_2);
  FUN_10a2a21a0(param_4);
  if (*param_3 == 7) {
    plVar13 = plVar10;
    (**(code **)(*plVar10 + 0x98))(plVar10,*(undefined8 *)(param_3 + 2));
    plVar8 = plVar10;
    plStack_78 = plVar13;
    (**(code **)(*plVar10 + 0x228))(plVar10,&plStack_78);
    if ((int)plVar8 != 0) {
      plVar13 = plVar10;
      (**(code **)(*plVar10 + 0x58))();
      lVar9 = plVar13[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a2a214c;
      }
      plStack_80 = plStack_78;
      plStack_78 = (long *)0x0;
      plStack_88 = (long *)CONCAT44(plStack_88._4_4_,7);
      plStack_90 = plVar10;
      FUN_10a688ac0(&puStack_b0,&plStack_90,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)plStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_78 != (long *)0x0) {
      (**(code **)*plStack_78)();
    }
    if (((ulong)plVar8 & 1) != 0) {
      plVar10 = (long *)0x60;
      __Znwm();
      plVar8 = plVar10 + 1;
      *plVar8 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110bb9830;
      plVar13 = plVar10 + 3;
      plVar10[4] = lStack_a8;
      *plVar13 = (long)puStack_b0;
      if (lStack_a8 != 0) {
        plVar11 = (long *)(lStack_a8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[6] = (long)plStack_98;
      plVar10[5] = lStack_a0;
      if (plStack_98 != (long *)0x0) {
        plStack_98 = plStack_98 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
          if (bVar3) {
            *plStack_98 = *plStack_98 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar10 + 0xb) = 2;
      FUN_10a688c1c(&puStack_b0);
      plVar11 = plVar7 + 9;
      FUN_10a1cda24(plVar11,&PTR_DAT_110bb8440);
      if (plVar11 == (long *)0x0) {
        puVar14 = &UNK_10f64981f;
      }
      else {
        puStack_b0 = &DAT_10f6496e7;
        lStack_a8 = 0x10;
        FUN_10a2677b4(plVar7[0x11],&puStack_b0);
        plVar20 = (long *)plVar11[4];
        if ((plVar20 != (long *)0x0) &&
           (plVar12 = plVar20, ___dynamic_cast(plVar20,&PTR_DAT_110bbadc8,&PTR_DAT_110bb84a0,0),
           plVar12 != (long *)0x0)) {
          puVar17 = (undefined8 *)plVar12[0xc];
          if (puVar17 < (undefined8 *)plVar12[0xd]) {
            *puVar17 = plVar13;
            puVar17[1] = plVar10;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar17 = puVar17 + 2;
          }
          else {
            lVar9 = (long)puVar17 - plVar12[0xb];
            uVar15 = (lVar9 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) {
              FUN_10a2a1d48();
              goto LAB_10a2a214c;
            }
            uVar22 = plVar12[0xd] - plVar12[0xb];
            uVar21 = (long)uVar22 >> 3;
            if (uVar21 <= uVar15) {
              uVar21 = uVar15;
            }
            if (0x7fffffffffffffef < uVar22) {
              uVar21 = 0xfffffffffffffff;
            }
            if (uVar21 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a2a214c;
            }
            lVar19 = uVar21 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar19 + lVar9);
            *puVar1 = plVar13;
            puVar1[1] = plVar10;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar9 = plVar12[0xb];
            puVar17 = puVar1 + 2;
            lVar23 = (long)puVar1 - (plVar12[0xc] - lVar9);
            _memcpy(lVar23,lVar9);
            plVar12[0xb] = lVar23;
            plVar12[0xc] = (long)puVar17;
            plVar12[0xd] = lVar19 + uVar21 * 0x10;
            if (lVar9 != 0) {
              __ZdlPv(lVar9);
            }
          }
          plVar12[0xc] = (long)puVar17;
          (**(code **)(*plVar20 + 0x10))(plVar20);
          plVar13 = (long *)plVar11[4];
          (**(code **)(*plVar13 + 0x18))();
          if ((int)plVar13 != 0) {
            (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                      ((undefined *)((long)plVar7 + *(long *)(*plVar7 + -0x18)));
          }
          do {
            lVar9 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
          *extraout_x8 = 0;
          plVar10 = plVar6 + 0x4b;
          lVar9 = plVar6[0x59];
          uVar15 = lVar9 - 1;
          plVar6[0x59] = uVar15;
          if (uVar15 < 8) {
            uVar15 = plVar10[lVar9 + 2];
            if (plVar6[0x5a] == uVar15) {
              return;
            }
          }
          else {
            uVar15 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar15) {
              return;
            }
          }
          plVar7 = (long *)*plVar10;
          plVar13 = (long *)plVar6[0x4c];
          lVar9 = (long)plVar13 - (long)plVar7;
          uVar21 = lVar9 >> 4;
          if (uVar21 < uVar15) {
            uVar22 = uVar15 - uVar21;
            lVar19 = plVar6[0x4d];
            if ((ulong)(lVar19 - (long)plVar13 >> 4) < uVar22) {
              if (uVar15 >> 0x3c == 0) {
                uVar16 = lVar19 - (long)plVar7 >> 3;
                if (uVar16 <= uVar15) {
                  uVar16 = uVar15;
                }
                if (0x7fffffffffffffef < (ulong)(lVar19 - (long)plVar7)) {
                  uVar16 = 0xfffffffffffffff;
                }
                plStack_78 = plVar10;
                if (uVar16 >> 0x3c == 0) {
                  lVar5 = uVar16 << 4;
                  __Znwm();
                  lVar23 = lVar5 + lVar9;
                  _bzero(lVar23,uVar22 * 0x10);
                  lVar18 = lVar23 + uVar21 * -0x10;
                  _memcpy(lVar18,plVar7,lVar9);
                  *plVar10 = lVar18;
                  plVar6[0x4c] = lVar23 + uVar22 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar16 * 0x10;
                  plStack_98 = plVar7;
                  plStack_90 = plVar7;
                  plStack_88 = plVar7;
                  plStack_80 = (long *)lVar19;
                  func_0x00010988c1b8(&plStack_98);
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
            _bzero(plVar13,uVar22 * 0x10);
            plVar6[0x4c] = (long)(plVar13 + uVar22 * 2);
          }
          else if (uVar15 < uVar21) {
            while (plVar13 != plVar7 + uVar15 * 2) {
              plVar13 = plVar13 + -2;
              func_0x00010988c204(plVar13);
            }
            plVar6[0x4c] = (long)(plVar7 + uVar15 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar15;
          return;
        }
        puVar14 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar14);
      goto LAB_10a2a214c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a214c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a2150);
  (*pcVar4)();
}



/* Entry: 10a2a1d5c; end: 10a2a219f;  */

void FUN_10a2a1d5c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
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
  FUN_10a2a0d08(param_2,param_3);
  FUN_10a2a21a0(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_68 = plVar9;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_68);
    if ((int)plVar12 != 0) {
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar8 = plVar9[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a2a214c;
      }
      plStack_70 = plStack_68;
      plStack_68 = (long *)0x0;
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,7);
      plStack_80 = param_2;
      FUN_10a688ac0(&puStack_a0,&plStack_80,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)plStack_78) && (plStack_70 != (long *)0x0)) {
        (**(code **)*plStack_70)();
      }
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)*plStack_68)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar23 = plVar9 + 1;
      *plVar23 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bb9830;
      plVar12 = plVar9 + 3;
      plVar9[4] = lStack_98;
      *plVar12 = (long)puStack_a0;
      if (lStack_98 != 0) {
        plVar10 = (long *)(lStack_98 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9[6] = (long)plStack_88;
      plVar9[5] = lStack_90;
      if (plStack_88 != (long *)0x0) {
        plStack_88 = plStack_88 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
          if (bVar3) {
            *plStack_88 = *plStack_88 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&puStack_a0);
      plVar10 = plVar7 + 9;
      FUN_10a1cda24(plVar10,&PTR_DAT_110bb8440);
      if (plVar10 == (long *)0x0) {
        puVar13 = &UNK_10f64981f;
      }
      else {
        puStack_a0 = &DAT_10f6496e7;
        lStack_98 = 0x10;
        FUN_10a2677b4(plVar7[0x11],&puStack_a0);
        plVar19 = (long *)plVar10[4];
        if ((plVar19 != (long *)0x0) &&
           (plVar11 = plVar19, ___dynamic_cast(plVar19,&PTR_DAT_110bbadc8,&PTR_DAT_110bb84a0,0),
           plVar11 != (long *)0x0)) {
          puVar16 = (undefined8 *)plVar11[0xc];
          if (puVar16 < (undefined8 *)plVar11[0xd]) {
            *puVar16 = plVar12;
            puVar16[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar16 = puVar16 + 2;
          }
          else {
            lVar8 = (long)puVar16 - plVar11[0xb];
            uVar14 = (lVar8 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              FUN_10a2a1d48();
              goto LAB_10a2a214c;
            }
            uVar21 = plVar11[0xd] - plVar11[0xb];
            uVar20 = (long)uVar21 >> 3;
            if (uVar20 <= uVar14) {
              uVar20 = uVar14;
            }
            if (0x7fffffffffffffef < uVar21) {
              uVar20 = 0xfffffffffffffff;
            }
            if (uVar20 >> 0x3c != 0) {
              func_0x000109ffded8();
              goto LAB_10a2a214c;
            }
            lVar18 = uVar20 << 4;
            __Znwm();
            puVar1 = (undefined8 *)(lVar18 + lVar8);
            *puVar1 = plVar12;
            puVar1[1] = plVar9;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *plVar23 = *plVar23 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar8 = plVar11[0xb];
            puVar16 = puVar1 + 2;
            lVar22 = (long)puVar1 - (plVar11[0xc] - lVar8);
            _memcpy(lVar22,lVar8);
            plVar11[0xb] = lVar22;
            plVar11[0xc] = (long)puVar16;
            plVar11[0xd] = lVar18 + uVar20 * 0x10;
            if (lVar8 != 0) {
              __ZdlPv(lVar8);
            }
          }
          plVar11[0xc] = (long)puVar16;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          plVar12 = (long *)plVar10[4];
          (**(code **)(*plVar12 + 0x18))();
          if ((int)plVar12 != 0) {
            (**(code **)(*(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18)) + 0x28))
                      ((long)plVar7 + *(long *)(*plVar7 + -0x18));
          }
          do {
            lVar8 = *plVar23;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar3) {
              *plVar23 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
          *param_1 = 0;
          plVar7 = plVar6 + 0x4b;
          lVar8 = plVar6[0x59];
          uVar14 = lVar8 - 1;
          plVar6[0x59] = uVar14;
          if (uVar14 < 8) {
            uVar14 = plVar7[lVar8 + 2];
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          else {
            uVar14 = *(ulong *)(plVar6[0x57] + -8);
            plVar6[0x57] = plVar6[0x57] + -8;
            if (plVar6[0x5a] == uVar14) {
              return;
            }
          }
          plVar9 = (long *)*plVar7;
          plVar12 = (long *)plVar6[0x4c];
          lVar8 = (long)plVar12 - (long)plVar9;
          uVar20 = lVar8 >> 4;
          if (uVar20 < uVar14) {
            uVar21 = uVar14 - uVar20;
            lVar18 = plVar6[0x4d];
            if ((ulong)(lVar18 - (long)plVar12 >> 4) < uVar21) {
              if (uVar14 >> 0x3c == 0) {
                uVar15 = lVar18 - (long)plVar9 >> 3;
                if (uVar15 <= uVar14) {
                  uVar15 = uVar14;
                }
                if (0x7fffffffffffffef < (ulong)(lVar18 - (long)plVar9)) {
                  uVar15 = 0xfffffffffffffff;
                }
                plStack_68 = plVar7;
                if (uVar15 >> 0x3c == 0) {
                  lVar5 = uVar15 << 4;
                  __Znwm();
                  lVar22 = lVar5 + lVar8;
                  _bzero(lVar22,uVar21 * 0x10);
                  lVar17 = lVar22 + uVar20 * -0x10;
                  _memcpy(lVar17,plVar9,lVar8);
                  *plVar7 = lVar17;
                  plVar6[0x4c] = lVar22 + uVar21 * 0x10;
                  plVar6[0x4d] = lVar5 + uVar15 * 0x10;
                  plStack_88 = plVar9;
                  plStack_80 = plVar9;
                  plStack_78 = plVar9;
                  plStack_70 = (long *)lVar18;
                  func_0x00010988c1b8(&plStack_88);
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
            _bzero(plVar12,uVar21 * 0x10);
            plVar6[0x4c] = (long)(plVar12 + uVar21 * 2);
          }
          else if (uVar14 < uVar20) {
            while (plVar12 != plVar9 + uVar14 * 2) {
              plVar12 = plVar12 + -2;
              func_0x00010988c204(plVar12);
            }
            plVar6[0x4c] = (long)(plVar9 + uVar14 * 2);
          }
code_r0x00010988c138:
          plVar6[0x5a] = uVar14;
          return;
        }
        puVar13 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar13);
      goto LAB_10a2a214c;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a214c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2a2150);
  (*pcVar4)();
}



/* Entry: 10a2a21a0; end: 10a2a21c3;  */

void FUN_10a2a21a0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb9830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a21c4; end: 10a2a21d3;  */

void FUN_10a2a21c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a21d4; end: 10a2a21f3;  */

void FUN_10a2a21d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9830;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a21f4; end: 10a2a222b;  */

undefined1  [16] FUN_10a2a21f4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a2218);
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



/* Entry: 10a2a222c; end: 10a2a22e3;  */

void FUN_10a2a222c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,0x10a2a221c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a22e4; end: 10a2a22f3;  */

void FUN_10a2a22e4(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar9 = &PTR_DAT_110bb85a0;
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    uStack_48 = 4;
    puStack_50 = &DAT_10f6496f8;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_2;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_2[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a22f4; end: 10a2a23ab;  */

void FUN_10a2a22f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a22e4,0,param_3,param_4,param_5);
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



/* Entry: 10a2a23ac; end: 10a2a23bb;  */

void FUN_10a2a23ac(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar9 = &PTR_DAT_110bb8098;
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    uStack_48 = 6;
    puStack_50 = &DAT_10f6496be;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_2;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_2[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a23bc; end: 10a2a2473;  */

void FUN_10a2a23bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a23ac,0,param_3,param_4,param_5);
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



/* Entry: 10a2a2474; end: 10a2a2483;  */

void FUN_10a2a2474(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar9 = &PTR_DAT_110bb8110;
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    uStack_48 = 0xb;
    puStack_50 = &DAT_10f6496c5;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_2;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_2[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a2484; end: 10a2a253b;  */

void FUN_10a2a2484(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a2474,0,param_3,param_4,param_5);
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



/* Entry: 10a2a253c; end: 10a2a254b;  */

void FUN_10a2a253c(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar9 = &PTR_DAT_110bb7d60;
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    uStack_48 = 8;
    puStack_50 = &DAT_10f3acb95;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_2;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_2[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a254c; end: 10a2a2603;  */

void FUN_10a2a254c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a253c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a2604; end: 10a2a2613;  */

void FUN_10a2a2604(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar9 = &PTR_DAT_110bb9498;
  ppuVar10 = &puStack_50;
  plVar6 = param_1 + 9;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 != (long *)0x0) {
    uStack_48 = 0xf;
    puStack_50 = &DAT_10f64980f;
    FUN_10a2677b4(param_1[0x11]);
    plVar17 = (long *)plVar6[4];
    puVar21 = *param_2;
    if (puVar21 == (undefined *)0x0) {
LAB_10a2a09e4:
      (**(code **)(*plVar17 + 0x18))();
      if ((int)plVar17 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    ppuVar9 = ppuVar10;
    if (plVar17 != (long *)0x0) {
      puVar19 = param_2[1];
      ppuVar9 = &PTR_DAT_110bbadc8;
      ppuVar11 = &PTR_DAT_110bbab38;
      param_4 = 0;
      plVar7 = plVar17;
      ___dynamic_cast();
      if (plVar7 != (long *)0x0) {
        FUN_10a2a0a40(plVar7 + 0xb,puVar21,puVar19);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar6[4];
        goto LAB_10a2a09e4;
      }
    }
    FUN_10a00946c(&UNK_10f64983a);
  }
  plVar6 = (long *)&UNK_10f64981f;
  FUN_10a00946c();
  puVar22 = (undefined8 *)plVar6[1];
  if (puVar22 < (undefined8 *)plVar6[2]) {
    *puVar22 = ppuVar9;
    puVar22[1] = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = ppuVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *ppuVar11 = *ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar22 = puVar22 + 2;
LAB_10a2a0b38:
    plVar6[1] = (long)puVar22;
    return;
  }
  lVar16 = *plVar6;
  lVar18 = (long)puVar22 - lVar16;
  lVar23 = lVar18 >> 4;
  uVar12 = lVar23 + 1;
  if (uVar12 >> 0x3c == 0) {
    uVar14 = plVar6[2] - lVar16;
    uVar15 = (long)uVar14 >> 3;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c == 0) {
      lVar8 = uVar15 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar18);
      *puVar1 = ppuVar9;
      puVar1[1] = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = ppuVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar3) {
            *ppuVar11 = *ppuVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar16 = *plVar6;
        lVar18 = plVar6[1] - lVar16;
        lVar23 = lVar18 >> 4;
      }
      puVar22 = puVar1 + 2;
      _memcpy(puVar1 + lVar23 * -2,lVar16,lVar18);
      *plVar6 = (long)(puVar1 + lVar23 * -2);
      plVar6[1] = (long)puVar22;
      plVar6[2] = lVar8 + uVar15 * 0x10;
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      goto LAB_10a2a0b38;
    }
  }
  else {
    FUN_10a2a0b5c();
  }
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar17 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar17[0x59] < 8) {
    plVar17[plVar17[0x59] + 0x4e] = plVar17[0x5a];
    plVar17[0x59] = plVar17[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar17 + 0x4b);
  }
  FUN_10a2a0c28(extraout_x8,plVar6,0x10a2a0934,0,ppuVar9,ppuVar11,param_4);
  plVar6 = plVar17 + 0x4b;
  lVar16 = plVar17[0x59];
  uVar12 = lVar16 - 1;
  plVar17[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar16 + 2];
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar17[0x57] + -8);
    plVar17[0x57] = plVar17[0x57] + -8;
    if (plVar17[0x5a] == uVar12) {
      return;
    }
  }
  lVar16 = *plVar6;
  lVar18 = plVar17[0x4c];
  lVar23 = lVar18 - lVar16;
  uVar15 = lVar23 >> 4;
  if (uVar15 < uVar12) {
    uVar14 = uVar12 - uVar15;
    lVar8 = plVar17[0x4d];
    if ((ulong)(lVar8 - lVar18 >> 4) < uVar14) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar8 - lVar16 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar8 - lVar16)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_118 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar23;
          _bzero(lVar18,uVar14 * 0x10);
          lVar20 = lVar18 + uVar15 * -0x10;
          _memcpy(lVar20,lVar16,lVar23);
          *plVar6 = lVar20;
          plVar17[0x4c] = lVar18 + uVar14 * 0x10;
          plVar17[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_138 = lVar16;
          lStack_130 = lVar16;
          lStack_128 = lVar16;
          lStack_120 = lVar8;
          func_0x00010988c1b8(&lStack_138);
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
    _bzero(lVar18,uVar14 * 0x10);
    plVar17[0x4c] = lVar18 + uVar14 * 0x10;
  }
  else if (uVar12 < uVar15) {
    lVar16 = lVar16 + uVar12 * 0x10;
    while (lVar18 != lVar16) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar17[0x4c] = lVar16;
  }
code_r0x00010988c138:
  plVar17[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a2614; end: 10a2a26cb;  */

void FUN_10a2a2614(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a0c28(param_1,param_2,FUN_10a2a2604,0,param_3,param_4,param_5);
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



/* Entry: 10a2a26cc; end: 10a2a26db;  */

void FUN_10a2a26cc(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined *unaff_x26;
  undefined8 *puVar21;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb6528;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a28a8:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a28b4:
    FUN_10a2a28bc();
  }
  else {
    uStack_68 = 10;
    puStack_70 = &DAT_10f359e34;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2850;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a289c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a28a8;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bbadf8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a289c;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2838:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2850:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a28b4;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2838;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a28bc;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a28d0;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar6,FUN_10a2a26cc,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a26dc; end: 10a2a28bb;  */

void FUN_10a2a26dc(long *param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *unaff_x23;
  long lVar18;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar19;
  undefined *unaff_x26;
  undefined8 *puVar20;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = param_2;
  ppuVar11 = param_3;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a28a8:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a28b4:
    FUN_10a2a28bc();
  }
  else {
    puStack_68 = param_2[1];
    puStack_70 = *param_2;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    param_2 = (undefined **)plVar6[4];
    unaff_x26 = *param_3;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2850;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (param_2 == (undefined **)0x0) {
LAB_10a2a289c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a28a8;
    }
    unaff_x25 = param_3[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bbadf8;
    param_4 = 0;
    ppuVar7 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a289c;
    puVar20 = (undefined8 *)ppuVar7[0xc];
    if (puVar20 < ppuVar7[0xd]) {
      *puVar20 = unaff_x26;
      puVar20[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar20 = puVar20 + 2;
LAB_10a2a2838:
      ppuVar7[0xc] = (undefined *)puVar20;
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = (undefined **)plVar6[4];
LAB_10a2a2850:
      (**(code **)(*param_2 + 0x18))();
      if ((int)param_2 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar20 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_3 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a28b4;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar20 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar20;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2838;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a28bc;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a28d0;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_3;
  ppuStack_a8 = param_2;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar6,FUN_10a2a26cc,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar9[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar9[0x4c] = lVar17 + uVar19 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar9[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a28bc; end: 10a2a28cf;  */

void FUN_10a2a28bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar3,FUN_10a2a26cc,0,param_2,param_3,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a2a28d0; end: 10a2a2987;  */

void FUN_10a2a28d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a2988(param_1,param_2,FUN_10a2a26cc,0,param_3,param_4,param_5);
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



/* Entry: 10a2a2988; end: 10a2a2be7;  */

void FUN_10a2a2988(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  int iStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  FUN_10a2a0d08(param_2,param_5);
  FUN_10a2a2be8(param_7);
  if (*param_6 == 7) {
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    plVar5 = param_2;
    plStack_58 = plVar7;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_58);
    if ((int)plVar5 != 0) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar7[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar6 == 0))
      goto LAB_10a2a2b98;
      plStack_60 = plStack_58;
      plStack_58 = (long *)0x0;
      iStack_68 = 7;
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_68) && (plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
      }
    }
    if (plStack_58 != (long *)0x0) {
      (**(code **)*plStack_58)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      plVar7 = (long *)0x60;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110bb9880;
      plStack_a0 = plVar7 + 3;
      plVar7[4] = lStack_88;
      *plStack_a0 = lStack_90;
      if (lStack_88 != 0) {
        plVar5 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7[6] = lStack_78;
      plVar7[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar5 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar7 + 0xb) = 2;
      plStack_98 = plVar7;
      FUN_10a688c1c(&lStack_90);
      plVar4 = (long *)((long)plVar4 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar4 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(plVar4,&plStack_a0);
      plVar4 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar7 = plStack_98 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      *param_1 = 0;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a2b98:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a2ba8);
  (*pcVar3)();
}



/* Entry: 10a2a2be8; end: 10a2a2c0b;  */

void FUN_10a2a2be8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb9880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a2c0c; end: 10a2a2c1b;  */

void FUN_10a2a2c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a2c1c; end: 10a2a2c3b;  */

void FUN_10a2a2c1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9880;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a2c3c; end: 10a2a2c73;  */

undefined1  [16] FUN_10a2a2c3c(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a2c60);
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



/* Entry: 10a2a2c74; end: 10a2a2d2b;  */

void FUN_10a2a2c74(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a2988(param_1,param_2,0x10a2a2c64,0,param_3,param_4,param_5);
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



/* Entry: 10a2a2d2c; end: 10a2a2d3b;  */

void FUN_10a2a2d2c(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined8 *puVar21;
  undefined *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8b80;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a28a8:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a28b4:
    FUN_10a2a28bc();
  }
  else {
    uStack_68 = 0x10;
    puStack_70 = &DAT_10f649727;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2850;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a289c:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a28a8;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bbadf8;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bbadf8,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a289c;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2838:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2850:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a28b4;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2838;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a28bc;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a28d0;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a2988(extraout_x8,plVar6,FUN_10a2a26cc,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a2d3c; end: 10a2a2df3;  */

void FUN_10a2a2d3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a2988(param_1,param_2,FUN_10a2a2d2c,0,param_3,param_4,param_5);
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



/* Entry: 10a2a2df4; end: 10a2a2e03;  */

void FUN_10a2a2df4(long *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *unaff_x23;
  long lVar19;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar20;
  undefined *unaff_x26;
  undefined8 *puVar21;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar15 = &PTR_DAT_110bb8bf8;
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = ppuVar15;
  ppuVar11 = param_2;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a2fd0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a2fdc:
    FUN_10a2a2fe4();
  }
  else {
    uStack_68 = 0x12;
    puStack_70 = &DAT_10f649738;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    ppuVar15 = (undefined **)plVar6[4];
    unaff_x26 = *param_2;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2f78;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (ppuVar15 == (undefined **)0x0) {
LAB_10a2a2fc4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a2fd0;
    }
    unaff_x25 = param_2[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb8c58;
    param_4 = 0;
    ppuVar7 = ppuVar15;
    ___dynamic_cast(ppuVar15,&PTR_DAT_110bbadc8,&PTR_DAT_110bb8c58,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a2fc4;
    puVar21 = (undefined8 *)ppuVar7[0xc];
    if (puVar21 < ppuVar7[0xd]) {
      *puVar21 = unaff_x26;
      puVar21[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar21 = puVar21 + 2;
LAB_10a2a2f60:
      ppuVar7[0xc] = (undefined *)puVar21;
      (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
      ppuVar15 = (undefined **)plVar6[4];
LAB_10a2a2f78:
      (**(code **)(*ppuVar15 + 0x18))();
      if ((int)ppuVar15 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar21 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_2 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a2fdc;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar21 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar21;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2f60;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a2fe4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a2ff8;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_2;
  ppuStack_a8 = ppuVar15;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar6,FUN_10a2a2df4,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar18 = plVar9[0x4c];
  lVar16 = lVar18 - lVar8;
  uVar14 = lVar16 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar20 = uVar12 - uVar14;
    lVar19 = plVar9[0x4d];
    if ((ulong)(lVar19 - lVar18 >> 4) < uVar20) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar19 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar19 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar18 = lVar5 + lVar16;
          _bzero(lVar18,uVar20 * 0x10);
          lVar17 = lVar18 + uVar14 * -0x10;
          _memcpy(lVar17,lVar8,lVar16);
          *plVar6 = lVar17;
          plVar9[0x4c] = lVar18 + uVar20 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar19;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar18,uVar20 * 0x10);
    plVar9[0x4c] = lVar18 + uVar20 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar18 != lVar8) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a2e04; end: 10a2a2fe3;  */

void FUN_10a2a2e04(long *param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *unaff_x23;
  long lVar18;
  long unaff_x24;
  undefined *unaff_x25;
  ulong uVar19;
  undefined *unaff_x26;
  undefined8 *puVar20;
  long unaff_x27;
  ulong unaff_x28;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_70;
  plVar6 = param_1 + 9;
  ppuVar10 = param_2;
  ppuVar11 = param_3;
  FUN_10a1cda24();
  if (plVar6 == (long *)0x0) {
LAB_10a2a2fd0:
    FUN_10a00946c(&UNK_10f64981f);
LAB_10a2a2fdc:
    FUN_10a2a2fe4();
  }
  else {
    puStack_68 = param_2[1];
    puStack_70 = *param_2;
    FUN_10a2677b4(param_1[0x11],&puStack_70);
    param_2 = (undefined **)plVar6[4];
    unaff_x26 = *param_3;
    if (unaff_x26 == (undefined *)0x0) goto LAB_10a2a2f78;
    ppuVar10 = ppuVar7;
    unaff_x20 = plVar6;
    if (param_2 == (undefined **)0x0) {
LAB_10a2a2fc4:
      FUN_10a00946c(&UNK_10f64983a);
      goto LAB_10a2a2fd0;
    }
    unaff_x25 = param_3[1];
    ppuVar10 = &PTR_DAT_110bbadc8;
    ppuVar11 = &PTR_DAT_110bb8c58;
    param_4 = 0;
    ppuVar7 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bbadc8,&PTR_DAT_110bb8c58,0);
    if (ppuVar7 == (undefined **)0x0) goto LAB_10a2a2fc4;
    puVar20 = (undefined8 *)ppuVar7[0xc];
    if (puVar20 < ppuVar7[0xd]) {
      *puVar20 = unaff_x26;
      puVar20[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar20 = puVar20 + 2;
LAB_10a2a2f60:
      ppuVar7[0xc] = (undefined *)puVar20;
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = (undefined **)plVar6[4];
LAB_10a2a2f78:
      (**(code **)(*param_2 + 0x18))();
      if ((int)param_2 != 0) {
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
      return;
    }
    unaff_x23 = ppuVar7[0xb];
    unaff_x24 = (long)puVar20 - (long)unaff_x23;
    unaff_x27 = unaff_x24 >> 4;
    uVar12 = unaff_x27 + 1;
    param_3 = ppuVar7;
    if (uVar12 >> 0x3c != 0) goto LAB_10a2a2fdc;
    uVar14 = (long)ppuVar7[0xd] - (long)unaff_x23;
    unaff_x28 = (long)uVar14 >> 3;
    if (unaff_x28 <= uVar12) {
      unaff_x28 = uVar12;
    }
    if (0x7fffffffffffffef < uVar14) {
      unaff_x28 = 0xfffffffffffffff;
    }
    if (unaff_x28 >> 0x3c == 0) {
      lVar8 = unaff_x28 << 4;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + unaff_x24);
      *puVar1 = unaff_x26;
      puVar1[1] = unaff_x25;
      if (unaff_x25 != (undefined *)0x0) {
        plVar9 = (long *)(unaff_x25 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x23 = ppuVar7[0xb];
        unaff_x24 = (long)ppuVar7[0xc] - (long)unaff_x23;
        unaff_x27 = unaff_x24 >> 4;
      }
      puVar20 = puVar1 + 2;
      _memcpy(puVar1 + unaff_x27 * -2,unaff_x23,unaff_x24);
      ppuVar7[0xb] = (undefined *)(puVar1 + unaff_x27 * -2);
      ppuVar7[0xc] = (undefined *)puVar20;
      ppuVar7[0xd] = (undefined *)(lVar8 + unaff_x28 * 0x10);
      if (unaff_x23 != (undefined *)0x0) {
        __ZdlPv(unaff_x23);
      }
      goto LAB_10a2a2f60;
    }
  }
  func_0x000109ffded8();
  pcStack_78 = FUN_10a2a2fe4;
  plVar6 = (long *)&DAT_10f62a4d8;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_88 = FUN_10a2a2ff8;
  plVar9 = plVar6;
  lStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = param_3;
  ppuStack_a8 = param_2;
  plStack_a0 = unaff_x20;
  plStack_98 = param_1;
  puStack_90 = (undefined1 *)&puStack_80;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar6,FUN_10a2a2df4,0,ppuVar10,ppuVar11,param_4);
  plVar6 = plVar9 + 0x4b;
  lVar8 = plVar9[0x59];
  uVar12 = lVar8 - 1;
  plVar9[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar6[lVar8 + 2];
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar12) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar17 = plVar9[0x4c];
  lVar15 = lVar17 - lVar8;
  uVar14 = lVar15 >> 4;
  uStack_e0 = unaff_x28;
  lStack_d8 = unaff_x27;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  if (uVar14 < uVar12) {
    uVar19 = uVar12 - uVar14;
    lVar18 = plVar9[0x4d];
    if ((ulong)(lVar18 - lVar17 >> 4) < uVar19) {
      if (uVar12 >> 0x3c == 0) {
        uVar13 = lVar18 - lVar8 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar18 - lVar8)) {
          uVar13 = 0xfffffffffffffff;
        }
        plStack_e8 = plVar6;
        if (uVar13 >> 0x3c == 0) {
          lVar5 = uVar13 << 4;
          __Znwm();
          lVar17 = lVar5 + lVar15;
          _bzero(lVar17,uVar19 * 0x10);
          lVar16 = lVar17 + uVar14 * -0x10;
          _memcpy(lVar16,lVar8,lVar15);
          *plVar6 = lVar16;
          plVar9[0x4c] = lVar17 + uVar19 * 0x10;
          plVar9[0x4d] = lVar5 + uVar13 * 0x10;
          lStack_108 = lVar8;
          lStack_100 = lVar8;
          lStack_f8 = lVar8;
          lStack_f0 = lVar18;
          func_0x00010988c1b8(&lStack_108);
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
    _bzero(lVar17,uVar19 * 0x10);
    plVar9[0x4c] = lVar17 + uVar19 * 0x10;
  }
  else if (uVar12 < uVar14) {
    lVar8 = lVar8 + uVar12 * 0x10;
    while (lVar17 != lVar8) {
      lVar17 = lVar17 + -0x10;
      func_0x00010988c204(lVar17);
    }
    plVar9[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar12;
  return;
}



/* Entry: 10a2a2fe4; end: 10a2a2ff7;  */

void FUN_10a2a2fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2a30b0(extraout_x8,plVar3,FUN_10a2a2df4,0,param_2,param_3,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
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



/* Entry: 10a2a2ff8; end: 10a2a30af;  */

void FUN_10a2a2ff8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2a30b0(param_1,param_2,FUN_10a2a2df4,0,param_3,param_4,param_5);
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



/* Entry: 10a2a30b0; end: 10a2a330f;  */

void FUN_10a2a30b0(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  int iStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar4 = param_2;
  FUN_10a2a0d08(param_2,param_5);
  FUN_10a2a3310(param_7);
  if (*param_6 == 7) {
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_6 + 2));
    plVar5 = param_2;
    plStack_58 = plVar7;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_58);
    if ((int)plVar5 != 0) {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar7[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar6 == 0))
      goto LAB_10a2a32c0;
      plStack_60 = plStack_58;
      plStack_58 = (long *)0x0;
      iStack_68 = 7;
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_68) && (plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
      }
    }
    if (plStack_58 != (long *)0x0) {
      (**(code **)*plStack_58)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      plVar7 = (long *)0x60;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110bb98d0;
      plStack_a0 = plVar7 + 3;
      plVar7[4] = lStack_88;
      *plStack_a0 = lStack_90;
      if (lStack_88 != 0) {
        plVar5 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7[6] = lStack_78;
      plVar7[5] = lStack_80;
      if (lStack_78 != 0) {
        plVar5 = (long *)(lStack_78 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar7 + 0xb) = 2;
      plStack_98 = plVar7;
      FUN_10a688c1c(&lStack_90);
      plVar4 = (long *)((long)plVar4 + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(*plVar4 + ((ulong)param_3 & 0xffffffff));
      }
      (*param_3)(plVar4,&plStack_a0);
      plVar4 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar7 = plStack_98 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      *param_1 = 0;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a2a32c0:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2a32d0);
  (*pcVar3)();
}



/* Entry: 10a2a3310; end: 10a2a3333;  */

void FUN_10a2a3310(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bb98d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a3334; end: 10a2a3343;  */

void FUN_10a2a3334(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb98d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2a3344; end: 10a2a3363;  */

void FUN_10a2a3344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb98d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2a3364; end: 10a2a339b;  */

undefined1  [16] FUN_10a2a3364(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a2a3388);
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


