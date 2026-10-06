/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005ed31c; end: 1005ed357;  */

void FUN_1005ed31c(undefined8 param_1)

{
  undefined8 *extraout_x8;
  undefined1 auStack_48 [40];
  
  FUN_1005ed310();
  FUN_1005ed358();
  func_0x0001005e6ff8();
  (*(code *)*extraout_x8)(param_1,auStack_48);
  func_0x0001005ed374();
  return;
}



/* Entry: 1005ed358; end: 1005ed393;  */

void FUN_1005ed358(void)

{
  return;
}



/* Entry: 1005ed394; end: 1005ed3c7;  */

void FUN_1005ed394(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puStack_28;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10) + 2;
  uVar1 = **(undefined4 **)(param_1 + 0x10);
  FUN_1005e3518();
  puStack_28 = puVar2;
  FUN_1005ed31c(uVar1,&puStack_28);
  return;
}



/* Entry: 1005ed3c8; end: 1005ed3db;  */

void FUN_1005ed3c8(void)

{
  long unaff_x20;
  undefined8 *in_stack_000001e8;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ed3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_000001e8)(unaff_x20 + 8);
  return;
}



/* Entry: 1005ed3dc; end: 1005ed43f;  */

void FUN_1005ed3dc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **appuStack_50 [5];
  undefined8 uStack_28;
  
  FUN_100557ab8();
  *param_1 = 0x1005ed49c;
  appuStack_50[0] = &PTR_DAT_110a7ca48;
  uStack_28 = extraout_x8;
  FUN_100078ac0(param_1 + 1,appuStack_50);
  (*(code *)*appuStack_50[0])(appuStack_50);
  func_0x0001005ed474(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_1005ed3dc();
  return;
}



/* Entry: 1005ed440; end: 1005ed45b;  */

void FUN_1005ed440(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1005ed3dc(param_1,&uStack_11);
  return;
}



/* Entry: 1005ed45c; end: 1005ed49f;  */

void FUN_1005ed45c(void)

{
  return;
}



/* Entry: 1005ed4a0; end: 1005ed4ef;  */

undefined8 * FUN_1005ed4a0(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (**(code **)param_1[1])();
  return param_1;
}



/* Entry: 1005ed4f0; end: 1005ed54b;  */

void FUN_1005ed4f0(void)

{
  return;
}



/* Entry: 1005ed54c; end: 1005ed663;  */

/* WARNING: Removing unreachable block (ram,0x0001005ed580) */

undefined1 FUN_1005ed54c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x10);
  do {
    lVar5 = *plVar9;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        lVar5 = param_1 + 0x20;
        lVar6 = lVar5;
        do {
          if (*(char *)(lVar6 + 1) != '\0') {
            uVar7 = 0;
            plVar9 = (long *)(lVar6 + 0x20);
            do {
              plVar3 = (long *)*plVar9;
              pcVar4 = (code *)plVar9[-2];
              if (plVar3 == (long *)0x0) {
                if (pcVar4 == (code *)0x0) {
                  (**(code **)plVar9[-1])();
                }
                else {
                  (*pcVar4)();
                }
              }
              else {
                (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,plVar9[-1]);
              }
              uVar7 = uVar7 + 1;
              plVar9 = plVar9 + 3;
            } while (uVar7 < *(byte *)(lVar6 + 1));
          }
          lVar8 = *(long *)(lVar6 + 8);
          if (lVar6 != lVar5) {
            func_0x000107c60fd0(lVar6);
          }
          lVar6 = lVar8;
        } while (lVar8 != 0);
        *(long *)(param_1 + 0x90) = lVar5;
        *(undefined1 *)(param_1 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1005ed664; end: 1005ed687;  */

undefined8 FUN_1005ed664(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1[1];
}



/* Entry: 1005ed688; end: 1005ed6a7;  */

void FUN_1005ed688(void)

{
  FUN_1005ed664();
  FUN_1005ed6a8();
  func_0x0001005799c4();
  return;
}



/* Entry: 1005ed6a8; end: 1005ed7ff;  */

/* WARNING: Removing unreachable block (ram,0x0001005ed6e4) */

void FUN_1005ed6a8(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lStack_48;
  
  lVar7 = *param_1;
  plVar10 = (long *)(lVar7 + 0x10);
  do {
    lVar5 = *plVar10;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        *(undefined8 *)(lVar7 + 0x98) = param_2;
        *(undefined1 *)(lVar7 + 0xa0) = 1;
        *(undefined8 *)(lVar7 + 0x10) = 2;
        lVar5 = lVar7 + 0x20;
        lVar6 = lVar5;
        do {
          if (*(char *)(lVar6 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar6 + 0x20);
            do {
              plVar3 = (long *)*plVar10;
              pcVar4 = (code *)plVar10[-2];
              if (plVar3 == (long *)0x0) {
                if (pcVar4 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar4)();
                }
              }
              else {
                (**(code **)(*plVar3 + 0x10))(plVar3,pcVar4,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar6 + 1));
          }
          lVar9 = *(long *)(lVar6 + 8);
          if (lVar6 != lVar5) {
            func_0x000107c60fd0(lVar6);
          }
          lVar6 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar7 + 0x90) = lVar5;
        *(undefined1 *)(lVar7 + 0x21) = 0;
LAB_1005ed7ac:
        plVar10 = param_1 + 2;
        do {
          lVar7 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + 1 == param_1[1]) {
          lStack_48 = *param_1;
          *param_1 = 0;
          func_0x00010054ec98(&lStack_48);
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) goto LAB_1005ed7ac;
  } while( true );
}



/* Entry: 1005ed800; end: 1005ed827;  */

void FUN_1005ed800(void)

{
  return;
}



/* Entry: 1005ed828; end: 1005ed8a7;  */

void FUN_1005ed828(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005ed810();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341bc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c3424c();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  func_0x0001005ed930(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005ed94c();
  return;
}



/* Entry: 1005ed8a8; end: 1005ed91b;  */

void FUN_1005ed8a8(long param_1)

{
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_1005ed828(auStack_60,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
  FUN_1005ede90(auStack_38,auStack_60);
  FUN_1005ee044(auStack_60);
  if (cStack_28 == '\0') {
    uStack_30 = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = uStack_30;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1005ed91c; end: 1005ed94b;  */

void FUN_1005ed91c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ed92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)(*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Entry: 1005ed94c; end: 1005ed96f;  */

void FUN_1005ed94c(void)

{
  func_0x0001005ed940();
  FUN_1005ed970();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_1005edcc0();
  func_0x0001005edd60();
  FUN_1005edd6c();
  return;
}



/* Entry: 1005ed970; end: 1005eda37;  */

undefined1 * FUN_1005ed970(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_b8 [144];
  undefined8 uStack_28;
  
  FUN_100557ab8();
  uStack_28 = extraout_x8;
  func_0x000107c60d88();
  puVar3 = (undefined1 *)(unaff_x19 + 0x60);
  puVar2 = *(undefined1 **)(unaff_x19 + 0x68);
  FUN_1005eda38(puVar2,puVar3);
  uVar1 = puVar3 == puVar2;
  if ((bool)uVar1) {
    func_0x0001005ec6c0();
    func_0x0001005ec6c8();
    func_0x0001005eda74(auStack_b8);
    func_0x0001005ec700();
    puVar2 = auStack_b8;
    FUN_1005edab8();
    func_0x0001005edc3c();
  }
  else {
    puVar2 = puVar3;
    FUN_1005ee094(puVar3,puVar3,puVar3);
  }
  func_0x0001005ec750();
  func_0x0001005ed474(uStack_28);
  if ((bool)uVar1) {
    return (undefined1 *)(unaff_x19 + 0x70);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  for (; (puVar4 = puVar2, puVar3 != puVar2 && (puVar4 = puVar3, *(long *)(puVar3 + 0x98) != 0));
      puVar3 = *(undefined1 **)(puVar3 + 8)) {
  }
  return puVar4;
}



/* Entry: 1005eda38; end: 1005eda5b;  */

long FUN_1005eda38(long param_1,long param_2)

{
  long lVar1;
  
  for (; (lVar1 = param_2, param_1 != param_2 && (lVar1 = param_1, *(long *)(param_1 + 0x98) != 0));
      param_1 = *(long *)(param_1 + 8)) {
  }
  return lVar1;
}



/* Entry: 1005eda5c; end: 1005eda8f;  */

void FUN_1005eda5c(void)

{
  FUN_10054bfa4();
  FUN_1005eda90();
  return;
}



/* Entry: 1005eda90; end: 1005edab7;  */

void FUN_1005eda90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7e5d0;
  return;
}



/* Entry: 1005edab8; end: 1005edaef;  */

void FUN_1005edab8(long *param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001005ec580();
  FUN_1005edb00();
  lVar1 = *unaff_x19;
  *param_1 = lVar1;
  param_1[1] = (long)unaff_x19;
  *(long **)(lVar1 + 8) = param_1;
  *unaff_x19 = (long)param_1;
  func_0x0001005edc24();
  return;
}



/* Entry: 1005edaf0; end: 1005edaff;  */

void FUN_1005edaf0(void)

{
  return;
}



/* Entry: 1005edb00; end: 1005edb6f;  */

undefined8 * FUN_1005edb00(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  FUN_1005edaf0();
  FUN_1005edb70();
  uStack_38 = extraout_x8;
  FUN_1005edbac(auStack_50,1);
  *puStack_40 = unaff_x21;
  puStack_40[1] = unaff_x20;
  FUN_1005edbec(puStack_40 + 2);
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_1005edc14(auStack_50);
  func_0x0001005ed474(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  return puVar2;
}



/* Entry: 1005edb70; end: 1005edb7f;  */

void FUN_1005edb70(void)

{
  return;
}



/* Entry: 1005edb80; end: 1005edbab;  */

long FUN_1005edb80(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005edb80();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005edbac; end: 1005edbd3;  */

long FUN_1005edbac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005edb80();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005edbd4; end: 1005edbeb;  */

void FUN_1005edbd4(void)

{
  func_0x00010054c274();
  FUN_1005eda90();
  return;
}



/* Entry: 1005edbec; end: 1005edc13;  */

void FUN_1005edbec(long param_1,long param_2)

{
  FUN_1005edbd4();
  func_0x0001005edaa4();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return;
}



/* Entry: 1005edc14; end: 1005edc67;  */

void FUN_1005edc14(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005edc68; end: 1005edcbf;  */

void FUN_1005edc68(void)

{
  func_0x0001005edc5c();
  FUN_1005edcc0();
  func_0x0001005edd60();
  FUN_1005edd6c();
  return;
}



/* Entry: 1005edcc0; end: 1005edcd3;  */

void FUN_1005edcc0(undefined8 param_1)

{
  int iVar1;
  
  FUN_1005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1005edcd4; end: 1005edd43;  */

void FUN_1005edcd4(int param_1)

{
  FUN_1005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1005edd44; end: 1005edd6b;  */

long FUN_1005edd44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_10054c714(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
  }
  return lVar1;
}



/* Entry: 1005edd6c; end: 1005eddb3;  */

void FUN_1005edd6c(void)

{
  FUN_1005ec7e4();
  func_0x0001005edd90();
  return;
}



/* Entry: 1005eddb4; end: 1005eddcb;  */

void FUN_1005eddb4(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1005eddcc; end: 1005ede53;  */

void FUN_1005eddcc(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  func_0x0001005eddc0();
  if ((param_1 == 0) || (FUN_10054c3a4(), (int)param_1 == 0)) {
    func_0x0001005ee0e4();
    if ((bool)in_ZR) {
      *(undefined1 *)(unaff_x19 + 3) = 0;
    }
  }
  else {
    uVar1 = *unaff_x19;
    func_0x0001005ede1c();
    unaff_x19[1] = uVar1;
    unaff_x19[2] = param_2;
    if ((*(byte *)(unaff_x19 + 3) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 3) = 1;
    }
  }
  return;
}



/* Entry: 1005ede54; end: 1005ede8f;  */

void FUN_1005ede54(undefined8 param_1)

{
  FUN_10054c918(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)();
  return;
}



/* Entry: 1005ede90; end: 1005edef3;  */

void FUN_1005ede90(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_40 [3];
  char cStack_28;
  
  plVar2 = alStack_40;
  func_0x0001005ede78(alStack_40);
  bVar1 = cStack_28 == '\x01' && alStack_40[0] != 0;
  if (bVar1) {
    FUN_1005edfac();
    uVar3 = *plVar2;
    param_1[1] = plVar2[1];
    *param_1 = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 1005edef4; end: 1005edf6f;  */

void FUN_1005edef4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_2[1] = uVar3;
      *param_2 = uVar2;
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)(param_2 + 2) == '\x01') {
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  else {
    uVar2 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
    if (*(char *)(param_1 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return;
}



/* Entry: 1005edf70; end: 1005edfab;  */

void FUN_1005edf70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1005edef4(param_1 + 1,param_2 + 1);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* Entry: 1005edfac; end: 1005ee043;  */

long * FUN_1005edfac(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    func_0x000107c60c94(auStack_50,*param_1 + 0x58);
    FUN_1004c3cd0(auStack_38,&UNK_10f4bd366,auStack_50);
    func_0x000107c313a4(uVar1,0x65,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 1005ee044; end: 1005ee077;  */

undefined8 * FUN_1005ee044(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10054cac4(uVar1);
  return param_1;
}



/* Entry: 1005ee078; end: 1005ee093;  */

void FUN_1005ee078(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005ee094; end: 1005ee0ef;  */

void FUN_1005ee094(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 1005ee0f0; end: 1005ee13b;  */

bool FUN_1005ee0f0(long param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(param_1 + 0x10) != 0;
    func_0x000107c60c18(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1005ee13c; end: 1005ee17f;  */

void FUN_1005ee13c(void)

{
  long unaff_x19;
  
  *(uint *)(unaff_x19 + 0x88) = *(uint *)(unaff_x19 + 0x88) | 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_allEv_1103465e8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 1005ee180; end: 1005ee1c7;  */

void FUN_1005ee180(undefined8 param_1)

{
  undefined **ppuVar1;
  long extraout_x8;
  undefined *extraout_x9;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)(param_1);
  puVar2 = *ppuVar1;
  *ppuVar1 = extraout_x9;
  FUN_100578b90(extraout_x8 + 0x10);
  *ppuVar1 = puVar2;
  return;
}



/* Entry: 1005ee1c8; end: 1005ee1d3;  */

void FUN_1005ee1c8(void)

{
  return;
}



/* Entry: 1005ee1d4; end: 1005ee2d3;  */

void FUN_1005ee1d4(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  FUN_1005ee1c8();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_1005ee2d4(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x30);
    do {
      FUN_100554eec();
    } while (extraout_w10 != 0);
    func_0x0001005ee40c(*(undefined8 *)(unaff_x19 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001005ee488();
      func_0x0001005ee418();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x0001005ee494();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x0001005ee434();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c31f8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001005ee4a0();
          if ((bool)in_ZR) {
            func_0x000107c31f3c();
            func_0x000107c31f24();
            func_0x000107c31f14();
          }
          func_0x0001005ee4b4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(unaff_x19 + 0x28);
  func_0x000107c31f64();
  func_0x000107c31fac();
  func_0x000107c31f74();
  func_0x000107c31f60();
  func_0x000107c31f68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005ee2d4; end: 1005ee3f7;  */

void FUN_1005ee2d4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = (long *)0x30;
  func_0x000107c60e20();
  plVar3 = plVar2;
  FUN_1005ee3f8(&UNK_108677718);
  func_0x0001005ee400();
  plVar5 = plVar2 + 4;
  *plVar5 = *param_1;
  do {
    FUN_100554eec();
  } while (extraout_w10 != 0);
  func_0x0001005ee40c(*plVar5);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar2 + 5) = 0;
    lVar6 = plVar2[4];
    func_0x0001005ee418();
    if (*plVar3 == 0) {
      FUN_10054ef74();
    }
    func_0x0001005ee428();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x0001005ee434();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000107c31f8c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001005ee444();
        if ((bool)in_ZR) {
          func_0x000107c31f3c();
          func_0x000107c31f24();
          func_0x000107c31f2c();
          func_0x000107c31fd4();
        }
        func_0x0001005ee458();
        func_0x0001005ee46c(*(undefined8 *)(lVar6 + 0x90));
        func_0x0001005ee47c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005f9618(plVar5);
  func_0x000107c3201c();
  func_0x000107c31f74();
  func_0x000107c31f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1005ee3f8; end: 1005ee4df;  */

undefined8 * FUN_1005ee3f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 in_x9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_2 = param_1;
  param_2[1] = in_x9;
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar1 + 4) = 4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[0x12] = puVar1 + 4;
  *puVar1 = &PTR_DAT_11087bc20;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ec98(&uStack_40);
  FUN_10054ebfc(&uStack_38);
  param_2[2] = puVar1;
  param_2[3] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return param_2 + 2;
}



/* Entry: 1005ee4e0; end: 1005ee517;  */

void FUN_1005ee4e0(char *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  FUN_100572708();
  FUN_1005ee518();
  if (*param_1 == '\x01') {
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (*(long *)(lVar1 + 0x10) < 1) {
      FUN_10002b838(auStack_38,&UNK_10f4b1dff);
      uVar3 = 0;
      lVar2 = lVar1;
      FUN_1005ee5a8();
      if ((uVar3 & 1) == 0) {
        lVar2 = 0;
      }
      *(long *)(lVar1 + 0x10) = lVar2;
      func_0x000107c60ca0(auStack_38);
    }
    return;
  }
  return;
}



/* Entry: 1005ee518; end: 1005ee52f;  */

long FUN_1005ee518(undefined8 *param_1)

{
  code *pcVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  FUN_100578214(*param_1);
  FUN_100578298();
  func_0x000107c60d88();
  func_0x0001005782a8();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uStack_48 = 0;
  func_0x0001005ee520();
  if (lVar2 == 0) {
    func_0x0001005ee528();
    return unaff_x19 + 0x8c;
  }
  func_0x000107c33c54();
  func_0x000107c60e08(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100578280);
  (*pcVar1)();
}



/* Entry: 1005ee530; end: 1005ee59b;  */

void FUN_1005ee530(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x10) < 1) {
    FUN_10002b838(auStack_38,&UNK_10f4b1dff);
    uVar2 = 0;
    lVar1 = param_1;
    FUN_1005ee5a8();
    if ((uVar2 & 1) == 0) {
      lVar1 = 0;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    func_0x000107c60ca0(auStack_38);
  }
  return;
}



/* Entry: 1005ee59c; end: 1005ee5a7;  */

void FUN_1005ee59c(undefined8 *param_1)

{
  undefined1 auStack_78 [72];
  
  FUN_1005ee648(auStack_78,*param_1);
  FUN_1005eea20(&stack0x00000008,auStack_78);
  FUN_1005eed28(auStack_78);
  return;
}



/* Entry: 1005ee5a8; end: 1005ee62f;  */

undefined1  [16] FUN_1005ee5a8(void)

{
  long unaff_x19;
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 uStack_38;
  
  FUN_1005ee59c();
  if (uStack_38 != '\x01') {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = unaff_x19 + 0x18;
    func_0x000107c60d98(uVar1,0,10);
    uVar2 = uVar1 & 0xffffffffffffff00;
    uVar1 = uVar1 & 0xff;
  }
  FUN_1005eedb0();
  auVar3._0_8_ = uVar2 | uVar1;
  auVar3[8] = uStack_38 == '\x01';
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1005ee630; end: 1005ee647;  */

void FUN_1005ee630(void)

{
  return;
}



/* Entry: 1005ee648; end: 1005ee6c7;  */

void FUN_1005ee648(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  FUN_1005ee630();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  func_0x0001005edc50(*(long *)(unaff_x21 + 0x20) + 0x178);
  FUN_1005ee754();
  return;
}



/* Entry: 1005ee6c8; end: 1005ee753;  */

void FUN_1005ee6c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [72];
  
  FUN_1005ee648(auStack_78,*param_2);
  FUN_1005eea20(param_1,auStack_78);
  FUN_1005eed28(auStack_78);
  return;
}



/* Entry: 1005ee754; end: 1005ee777;  */

void FUN_1005ee754(void)

{
  func_0x0001005ed940();
  FUN_1005ee778();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  func_0x0001005ecd38();
  func_0x0001005edd60();
  FUN_1005ee878();
  return;
}



/* Entry: 1005ee778; end: 1005ee81f;  */

long FUN_1005ee778(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      func_0x0001005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005ee7ec;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005ee7ec:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  func_0x0001005ecd38();
  func_0x0001005edd60();
  FUN_1005ee878();
  return param_1;
}



/* Entry: 1005ee820; end: 1005ee877;  */

void FUN_1005ee820(void)

{
  func_0x0001005edc5c();
  func_0x0001005ecd38();
  func_0x0001005edd60();
  FUN_1005ee878();
  return;
}



/* Entry: 1005ee878; end: 1005ee89b;  */

void FUN_1005ee878(void)

{
  FUN_1005ec7e4();
  FUN_1005ee8b8();
  return;
}



/* Entry: 1005ee89c; end: 1005ee8b7;  */

void FUN_1005ee89c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1005ee8b8; end: 1005ee8e7;  */

void FUN_1005ee8b8(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1005ee8e8();
  return;
}



/* Entry: 1005ee8e8; end: 1005ee9a7;  */

void FUN_1005ee8e8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x0001005eddc0();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_1005ee9a8();
    func_0x0001005ee9b0();
    FUN_1005ecf0c();
    func_0x0001005ee9c4(unaff_x21 + 0x18);
    FUN_1005ecf0c();
    if (*(char *)(unaff_x19 + 0x38) == '\x01') {
      func_0x000107c3453c();
      func_0x000107c29dc8();
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x10) = uStack_58;
      *(undefined8 *)(unaff_x19 + 8) = uStack_60;
      *(undefined8 *)(unaff_x19 + 0x18) = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      uVar2 = *(undefined8 *)(unaff_x21 + 0x18);
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x21 + 0x20);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x21 + 0x28);
      *(undefined8 *)(unaff_x21 + 0x18) = 0;
      *(undefined8 *)(unaff_x21 + 0x20) = 0;
      *(undefined8 *)(unaff_x21 + 0x28) = 0;
      *(undefined1 *)(unaff_x19 + 0x38) = 1;
    }
    FUN_1005ee9d0(&uStack_60);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    FUN_1005ee9d0();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1005ee9a8; end: 1005ee9cf;  */

long FUN_1005ee9a8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  lVar1 = *(long *)(lVar2 + 0x80);
  if (lVar1 == 0) {
    FUN_10054c714(lVar2);
    lVar1 = *(long *)(lVar2 + 0x80);
  }
  return lVar1;
}



/* Entry: 1005ee9d0; end: 1005ee9f7;  */

/* WARNING: Possible PIC construction at 0x0001005ee9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005ee9e8) */

void FUN_1005ee9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1005ee9f8; end: 1005eea1f;  */

void FUN_1005ee9f8(void)

{
  return;
}



/* Entry: 1005eea20; end: 1005eeadb;  */

void FUN_1005eea20(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lStack_60;
  undefined1 auStack_58 [48];
  char cStack_28;
  
  func_0x0001005eea08(&lStack_60);
  if (cStack_28 == '\x01') {
    FUN_1005eebe8();
    if (lStack_60 != 0) {
      plVar1 = &lStack_60;
      FUN_1005eec14();
      lVar3 = *plVar1;
      param_1[1] = plVar1[1];
      *param_1 = lVar3;
      param_1[2] = plVar1[2];
      *plVar1 = 0;
      plVar1[1] = 0;
      lVar3 = plVar1[3];
      plVar1[2] = 0;
      plVar1[3] = 0;
      param_1[4] = plVar1[4];
      param_1[3] = lVar3;
      param_1[5] = plVar1[5];
      uVar2 = 1;
      plVar1[4] = 0;
      plVar1[5] = 0;
      goto LAB_1005eeaac;
    }
  }
  else {
    FUN_1005eebe8();
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_1005eeaac:
  *(undefined1 *)(param_1 + 6) = uVar2;
  FUN_1005eebf4(auStack_58);
  return;
}



/* Entry: 1005eeadc; end: 1005eeb4b;  */

void FUN_1005eeadc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != *(char *)(param_2 + 6)) {
    if (cVar1 == '\0') {
      param_1 = param_2;
      FUN_1005eeb88();
    }
    else {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      param_2[2] = param_1[2];
      param_2[1] = uVar3;
      *param_2 = uVar2;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uVar3 = param_1[4];
      uVar2 = param_1[3];
      param_2[5] = param_1[5];
      param_2[4] = uVar3;
      param_2[3] = uVar2;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    if (*(char *)(param_1 + 6) == '\x01') {
      FUN_1005ee9d0();
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uStack_30 = param_1[4];
    uStack_38 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    uStack_28 = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0001088416dc();
    func_0x0001088416dc(param_2,&uStack_50);
    func_0x000107c28a68(&uStack_50);
    return;
  }
  return;
}



/* Entry: 1005eeb4c; end: 1005eeb87;  */

void FUN_1005eeb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1005eeadc(param_1 + 1,param_2 + 1);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* Entry: 1005eeb88; end: 1005eebc3;  */

void FUN_1005eeb88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 1005eebc4; end: 1005eebe7;  */

void FUN_1005eebc4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005ee9d0();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1005eebe8; end: 1005eebf3;  */

void FUN_1005eebe8(void)

{
  if (*(char *)(((ulong)&stack0x00000000 | 8) + 0x30) == '\x01') {
    FUN_1005ee9d0();
  }
  return;
}



/* Entry: 1005eebf4; end: 1005eec13;  */

void FUN_1005eebf4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005ee9d0();
  }
  return;
}



/* Entry: 1005eec14; end: 1005eecab;  */

long * FUN_1005eec14(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    func_0x000107c60c94(auStack_50,*param_1 + 0x58);
    FUN_1004c3cd0(auStack_38,&UNK_10f4bd391,auStack_50);
    func_0x000107c313a4(uVar1,0x65,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 1005eecac; end: 1005eecdb;  */

long FUN_1005eecac(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      func_0x000107c27b9c();
      func_0x000107c27b9c(param_1 + 0x18,param_2 + 0x18);
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_1005ee9d0();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return param_1;
    }
    FUN_1005eeb88();
  }
  return param_1;
}



/* Entry: 1005eecdc; end: 1005eecff;  */

undefined8 FUN_1005eecdc(undefined8 param_1)

{
  FUN_1005eecac();
  return param_1;
}



/* Entry: 1005eed00; end: 1005eed27;  */

undefined8 * FUN_1005eed00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1005eecdc(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1005eed28; end: 1005eed8b;  */

undefined8 * FUN_1005eed28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1005eed00(param_1 + 1,&uStack_60);
  FUN_1005eebf4((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1005eebf4(param_1 + 2);
  return param_1;
}



/* Entry: 1005eed8c; end: 1005eed93;  */

void FUN_1005eed8c(void)

{
  return;
}



/* Entry: 1005eed94; end: 1005eedaf;  */

void FUN_1005eed94(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005eedb0; end: 1005eeddf;  */

void FUN_1005eedb0(void)

{
  char in_stack_00000038;
  
  if (in_stack_00000038 == '\x01') {
    FUN_1005ee9d0();
  }
  return;
}



/* Entry: 1005eede0; end: 1005eee2b;  */

void FUN_1005eede0(undefined4 *param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1004bae18(param_1,"on Construct");
  FUN_1005eee2c(param_1 + 2,auStack_38,*param_1,param_1[6]);
  func_0x0001004bb078();
  return;
}



/* Entry: 1005eee2c; end: 1005eee4f;  */

long * FUN_1005eee2c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_4 == 2) {
    return param_1;
  }
  plVar2 = *(long **)(*param_1 + 0x48);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  FUN_100460de4(auStack_80);
  plVar3 = plVar2;
  func_0x000104a75678();
  if (plVar3 == (long *)0x0) {
    puVar1 = (undefined8 *)plVar2[0x18];
    func_0x000104aab068();
    if ((undefined **)*puVar1 == &PTR_DAT_1107c7238) {
      plVar3 = (long *)0x3;
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                    ,0x47,2,
                    "grpc_channel_check_connectivity_state called on something that is not a client channel"
                   );
      plVar3 = (long *)0x4;
    }
  }
  else {
    FUN_1004be484();
  }
  FUN_100467a48(auStack_80);
  FUN_1004b6ddc(&uStack_38);
  return plVar3;
}



/* Entry: 1005eee50; end: 1005eeeaf;  */

void FUN_1005eee50(char *param_1)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  FUN_100572708();
  FUN_1005ee518();
  if (*param_1 == '\x01') {
    FUN_10007847c(auStack_38,&UNK_10f4bc8bd);
    FUN_1005eef50(unaff_x19 + 0x10);
    FUN_1005641c0(auStack_38);
    FUN_100078bd8(auStack_38);
  }
  return;
}



/* Entry: 1005eeeb0; end: 1005eeec3;  */

void FUN_1005eeeb0(undefined8 param_1,undefined4 param_2)

{
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0x24) = param_2;
  return;
}



/* Entry: 1005eeec4; end: 1005eef4f;  */

void FUN_1005eeec4(void)

{
  undefined1 in_ZR;
  
  FUN_1005eeeb0();
  if ((bool)in_ZR) {
    FUN_1005ef0c4();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c341a0();
      func_0x000107c341fc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c342a0();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  func_0x0001005ef0d8();
  func_0x0001005ef184();
  func_0x0001005ef18c();
  func_0x0001005ef198();
  return;
}



/* Entry: 1005eef50; end: 1005ef0c3;  */

void FUN_1005eef50(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long alStack_c30 [123];
  byte bStack_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  byte bStack_478;
  undefined1 auStack_470 [1000];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  lVar1 = *param_1;
  FUN_1005eeec4(lVar1,1);
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(*param_1 + 0x18);
    FUN_10002b838(auStack_88,&UNK_10f4bdb25);
    FUN_10054b97c(auStack_70,uVar3,auStack_88);
    func_0x000107c60ca0(auStack_88);
    uStack_850 = 0x100;
    func_0x000107c29fec(auStack_470,*param_1,&uStack_850,0);
    func_0x0001006577b0(&uStack_850,auStack_470);
    func_0x000107c60ee4(alStack_c30,0x3e0);
    while ((((bStack_478 & 1) != 0 || ((bStack_858 & 1) != 0)) &&
           (CONCAT44(uStack_84c,uStack_850) != alStack_c30[0]))) {
      puVar2 = &uStack_850;
      FUN_10065798c(puVar2);
      func_0x000107c29fdc(*param_1,puVar2);
      func_0x000107c2a00c(*param_1,puVar2);
      FUN_100636aa4(&uStack_850);
    }
    func_0x000107c33f60(alStack_c30);
    func_0x000107c33f60(&uStack_850);
    func_0x000107c29fe0(*param_1,1);
    FUN_10054cbac(auStack_70);
    FUN_10065cae8(auStack_470);
    FUN_10054d120(auStack_70);
  }
  return;
}



/* Entry: 1005ef0c4; end: 1005ef0e7;  */

void FUN_1005ef0c4(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ef0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)(*(undefined8 *)(unaff_x19 + 8));
  return;
}



/* Entry: 1005ef0e8; end: 1005ef10b;  */

void FUN_1005ef0e8(void)

{
  func_0x0001005ed940();
  FUN_10054bdcc();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_1005ef160();
  func_0x0001005ef178();
  return;
}



/* Entry: 1005ef10c; end: 1005ef15f;  */

void FUN_1005ef10c(void)

{
  func_0x0001005edc5c();
  FUN_1005ef160();
  func_0x0001005ef178();
  return;
}



/* Entry: 1005ef160; end: 1005ef1db;  */

void FUN_1005ef160(undefined8 param_1)

{
  int iVar1;
  
  FUN_1005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1005ef1dc; end: 1005ef2ff;  */

undefined8 * FUN_1005ef1dc(long param_1,char *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 auStack_a8 [3];
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001005ef1cc();
  uStack_58 = extraout_x8;
  do {
    pcStack_90 = (code *)&UNK_1053a6a3c;
    ppuStack_88 = &PTR_DAT_110873830;
    uStack_60 = 0;
    puVar1 = (undefined8 *)(param_1 + 8);
    func_0x000107c60d88();
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 == 0) {
      FUN_1005ef414();
    }
    else {
      func_0x0001005ef328(&pcStack_90,
                          *(long *)(*(long *)(param_1 + 0x50) +
                                   (*(ulong *)(param_1 + 0x68) / 0x49) * 8) +
                          (*(ulong *)(param_1 + 0x68) % 0x49) * 0x38);
      func_0x0001005ef354(param_1 + 0x48);
      FUN_1005ef414();
      param_2 = "shims.Dispatcher";
      FUN_10028e588(auStack_a8,"shims.Dispatcher",0x10,uStack_60);
      (*pcStack_90)(&pcStack_90);
      puVar1 = auStack_a8;
      FUN_100078bd8();
    }
    func_0x0001005ef43c(ppuStack_88);
  } while (lVar2 != 0);
  func_0x00010054ff88(uStack_58);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    puVar1 = auStack_a8;
    FUN_100078bd8();
    func_0x0001005ef43c(ppuStack_88);
    func_0x0001053a6ad8();
    *puVar1 = *(undefined8 *)param_2;
    FUN_100078ac0(puVar1 + 1,param_2 + 8);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1005ef300; end: 1005ef413;  */

undefined8 * FUN_1005ef300(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_100078ac0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1005ef414; end: 1005ef45b;  */

void FUN_1005ef414(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 1005ef45c; end: 1005ef47f;  */

void FUN_1005ef45c(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


