/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005ef480; end: 1005ef4bb;  */

void FUN_1005ef480(void)

{
  return;
}



/* Entry: 1005ef4bc; end: 1005ef4d3;  */

undefined8 FUN_1005ef4bc(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005ef4d4; end: 1005ef54b;  */

void FUN_1005ef4d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2 + 0x10;
  lStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_1;
  FUN_1005ef4bc(lVar1);
  uStack_58 = uStack_40;
  FUN_1005ef644(auStack_50,param_2);
  func_0x0001005ef908(param_1,lVar1,&uStack_58);
  func_0x0001005efed8(&uStack_58);
  return;
}



/* Entry: 1005ef54c; end: 1005ef5af;  */

void FUN_1005ef54c(long param_1)

{
  undefined1 auStack_20 [8];
  long lStack_18;
  
  lStack_18 = param_1;
  FUN_1005ef4d4(auStack_20,param_1 + 0x80,param_1);
  func_0x0001005eff74(auStack_20);
  return;
}



/* Entry: 1005ef5b0; end: 1005ef643;  */

void FUN_1005ef5b0(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_10054eed4();
  *param_1 = param_2;
  FUN_1005ef688();
  if ((param_2 & 1) != 0) {
    return;
  }
  func_0x000107c31d80();
  func_0x000107c60dec(auStack_48,&UNK_10f4afc5c,unaff_x20 + 0x20);
  func_0x000107c288a0(param_2,auStack_48);
  func_0x000107c31d38();
  func_0x000107c60e54(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ef624);
  (*pcVar1)();
}



/* Entry: 1005ef644; end: 1005ef67f;  */

undefined8 FUN_1005ef644(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ef5b0(param_1,param_2);
  return param_1;
}



/* Entry: 1005ef680; end: 1005ef687;  */

undefined8 FUN_1005ef680(long *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if ((iVar2 - 1U < 2) || (iVar2 != 5)) {
code_r0x0001005ef790:
      lVar6 = *param_2;
      lVar5 = *param_1;
      goto LAB_1005ef798;
    }
    break;
  case 3:
    if ((iVar2 - 1U < 2) || (iVar2 == 5)) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
    goto code_r0x0001005ef7b8;
  case 4:
  case 5:
    break;
  default:
    if (iVar2 - 1U < 2) goto code_r0x0001005ef790;
    if (iVar2 == 5) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
LAB_1005ef798:
    if (lVar5 != lVar6) goto LAB_1005ef7dc;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
    goto LAB_1005ef7c4;
  }
  lVar6 = *param_2;
  lVar5 = *param_1;
code_r0x0001005ef7b8:
  if (lVar5 == lVar6) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
LAB_1005ef7c4:
    if (cVar3 == '\0') {
      return 1;
    }
  }
  else {
LAB_1005ef7dc:
    ClearExclusiveLocal();
  }
  *param_2 = lVar5;
  return 0;
}



/* Entry: 1005ef688; end: 1005ef6ff;  */

undefined8 FUN_1005ef688(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  uint extraout_w8;
  long lStack_28;
  
  plVar1 = (long *)(param_1 + 0x58);
  lStack_28 = *plVar1;
  do {
    if (lStack_28 == 0) goto LAB_1005ef6ec;
    plVar2 = plVar1;
    FUN_1005ef680(plVar1,&lStack_28,lStack_28 + 1,5);
  } while ((int)plVar2 == 0);
  func_0x0001005ef7fc(*(undefined8 *)(param_1 + 0x38));
  if ((extraout_w8 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    func_0x0001005f96f8(param_1);
LAB_1005ef6ec:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1005ef700; end: 1005ef817;  */

undefined8 FUN_1005ef700(long *param_1,long *param_2,long param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_5 != 4) {
    iVar1 = param_5;
  }
  iVar2 = 0;
  if (param_5 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if ((iVar2 - 1U < 2) || (iVar2 != 5)) {
code_r0x0001005ef790:
      lVar6 = *param_2;
      lVar5 = *param_1;
      goto LAB_1005ef798;
    }
    break;
  case 3:
    if ((iVar2 - 1U < 2) || (iVar2 == 5)) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
    goto code_r0x0001005ef7b8;
  case 4:
  case 5:
    break;
  default:
    if (iVar2 - 1U < 2) goto code_r0x0001005ef790;
    if (iVar2 == 5) break;
    lVar6 = *param_2;
    lVar5 = *param_1;
LAB_1005ef798:
    if (lVar5 != lVar6) goto LAB_1005ef7dc;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
    goto LAB_1005ef7c4;
  }
  lVar6 = *param_2;
  lVar5 = *param_1;
code_r0x0001005ef7b8:
  if (lVar5 == lVar6) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = param_3;
      cVar3 = ExclusiveMonitorsStatus();
    }
LAB_1005ef7c4:
    if (cVar3 == '\0') {
      return 1;
    }
  }
  else {
LAB_1005ef7dc:
    ClearExclusiveLocal();
  }
  *param_2 = lVar5;
  return 0;
}



/* Entry: 1005ef818; end: 1005ef843;  */

void FUN_1005ef818(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 1005ef844; end: 1005ef95f;  */

undefined8 FUN_1005ef844(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ef818(param_1,param_2);
  return param_1;
}



/* Entry: 1005ef960; end: 1005efc5b;  */

void FUN_1005ef960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar6 = (undefined8 *)0x58;
  func_0x000107c60e20();
  *puVar6 = FUN_1005f74d4;
  puVar6[1] = &UNK_1088b3e1c;
  puVar1 = puVar6 + 4;
  uVar11 = (long)puVar6 + 0x51;
  puVar10 = puVar6 + 7;
  puVar2 = puVar6 + 8;
  puVar3 = puVar6 + 9;
  uVar4 = (long)puVar6 + 0x52;
  puVar5 = puVar6 + 2;
  func_0x0001005ef8cc(puVar1,param_2);
  puVar6[6] = param_3;
  FUN_1005efc5c(puVar5);
  FUN_10054f4ac(param_1,puVar5);
  FUN_1005efc90(puVar5);
  uVar7 = uVar11;
  func_0x0001005efca0();
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(puVar6 + 10) = 0;
    FUN_1005efd24();
    ppuVar9 = &puStack_88;
    puStack_88 = puVar6;
    FUN_1005efd6c(ppuVar9);
    func_0x000107c2a190(uVar11,ppuVar9);
  }
  else {
    func_0x0001005efcb8(uVar11);
    *puVar10 = puVar6[6];
    func_0x0001005efcc8(puVar10);
    *(undefined1 *)(puVar6 + 10) = 1;
    puVar8 = puVar6;
    FUN_1005efd24();
    ppuVar9 = &puStack_80;
    puStack_80 = puVar8;
    FUN_1005efd6c(ppuVar9);
    puVar8 = puVar10;
    func_0x0001005efe18(puVar10,ppuVar9);
    if (((ulong)puVar8 & 1) == 0) {
      FUN_1005f7754(puVar10);
      FUN_1005f7764(puVar3,puVar1);
      FUN_1005f89e0(puVar2,puVar3);
      puVar10 = puVar2;
      FUN_1005f8a24();
      if (((ulong)puVar10 & 1) == 0) {
        *(undefined1 *)(puVar6 + 10) = 2;
        puVar10 = puVar6;
        FUN_1005efd24();
        ppuVar9 = &puStack_78;
        puStack_78 = puVar10;
        FUN_1005efd6c(ppuVar9);
        puVar10 = puVar2;
        FUN_1005f8b14(puVar2,ppuVar9);
        if (((ulong)puVar10 & 1) != 0) {
          return;
        }
      }
      FUN_1005f9618(puVar2);
      func_0x000107c2a1a8(puVar2);
      func_0x0001005eff74(puVar3);
      FUN_1005f94f0(puVar5);
      func_0x000107c2a1b0(puVar5);
      uVar11 = uVar4;
      func_0x0001005efca0();
      if ((uVar11 & 1) == 0) {
        *puVar6 = 0;
        FUN_1005efd24();
        ppuVar9 = apuStack_70;
        apuStack_70[0] = puVar6;
        FUN_1005efd6c(ppuVar9);
        func_0x000107c2a190(uVar4,ppuVar9);
      }
      else {
        func_0x0001005efcb8(uVar4);
        func_0x000107c2a1b4(puVar5);
        func_0x0001005efed8(puVar1);
        func_0x000107c60e14(puVar6);
      }
    }
  }
  return;
}



/* Entry: 1005efc5c; end: 1005efc8f;  */

undefined8 FUN_1005efc5c(undefined8 param_1)

{
  FUN_10054f3f8(param_1);
  return param_1;
}



/* Entry: 1005efc90; end: 1005efcef;  */

void FUN_1005efc90(void)

{
  return;
}



/* Entry: 1005efcf0; end: 1005efd23;  */

undefined8 FUN_1005efcf0(undefined8 param_1)

{
  func_0x0001005efcd8(param_1);
  return param_1;
}



/* Entry: 1005efd24; end: 1005efd53;  */

undefined8 FUN_1005efd24(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_1005efcf0(auStack_18);
  return param_1;
}



/* Entry: 1005efd54; end: 1005efd6b;  */

undefined8 FUN_1005efd54(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005efd6c; end: 1005efd9b;  */

undefined8 FUN_1005efd6c(undefined8 param_1)

{
  FUN_1005efd54();
  FUN_1005efde8();
  return param_1;
}



/* Entry: 1005efd9c; end: 1005efdb3;  */

void FUN_1005efd9c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1005efdb4; end: 1005efde7;  */

undefined8 FUN_1005efdb4(undefined8 param_1)

{
  FUN_1005efd9c(param_1);
  return param_1;
}



/* Entry: 1005efde8; end: 1005efe47;  */

undefined8 FUN_1005efde8(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_1005efdb4(auStack_18);
  return param_1;
}



/* Entry: 1005efe48; end: 1005effa7;  */

long * FUN_1005efe48(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001005f96f8();
  }
  return param_1;
}



/* Entry: 1005effa8; end: 1005effcf;  */

void FUN_1005effa8(long param_1)

{
  FUN_1005ef54c(param_1 + 8);
  return;
}



/* Entry: 1005effd0; end: 1005effd7;  */

void FUN_1005effd0(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = unaff_x19 + 0x50;
  FUN_10054eed4();
  *param_1 = uVar2;
  FUN_1005ef688();
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x000107c31d80();
  func_0x000107c60dec(auStack_48,&UNK_10f4afc5c,unaff_x20 + 0x20);
  func_0x000107c288a0(uVar2,auStack_48);
  func_0x000107c31d38();
  func_0x000107c60e54(uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ef624);
  (*pcVar1)();
}



/* Entry: 1005effd8; end: 1005f0187;  */

void FUN_1005effd8(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  lStack_80 = param_1;
  FUN_1005effd0(&lStack_78);
  lStack_60 = lStack_80;
  lStack_58 = lStack_78;
  lStack_78 = 0;
  FUN_1005f0198(&lStack_88,&lStack_60,uVar2);
  func_0x0001005f0270();
  func_0x0001005f0278();
  lVar1 = lStack_88;
  if (lStack_88 != 0) {
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
  }
  lStack_78 = lVar1;
  lStack_80 = param_1;
  FUN_1005effd0(auStack_70);
  func_0x0001005f0290();
  func_0x0001005f02a8();
  FUN_1005f02b8();
  FUN_1005f049c(&lStack_60);
  FUN_1005f049c(&lStack_80);
  FUN_10054eee0(param_1 + 0x130,auStack_90);
  func_0x0001005f04c8();
  func_0x0001005f04d0();
  if (lStack_88 != 0) {
    do {
      func_0x0001005f0280();
    } while (extraout_w10_00 != 0);
  }
  lStack_78 = lStack_88;
  lStack_80 = param_1;
  FUN_1005effd0(auStack_70);
  func_0x0001005f0290();
  func_0x0001005f02a8();
  FUN_1005f04d8();
  FUN_1005f0550(&lStack_60);
  FUN_1005f0550(&lStack_80);
  FUN_10054eee0(param_1 + 0x138,auStack_90);
  func_0x0001005f04c8();
  func_0x0001005f04d0();
  lStack_80 = param_1;
  FUN_1005effd0(&lStack_78);
  lStack_60 = lStack_80;
  lStack_58 = lStack_78;
  lStack_78 = 0;
  func_0x0001005f02a8();
  FUN_1005f0574();
  func_0x0001005f0278();
  FUN_1005efe48(&lStack_78);
  func_0x0001005f04c8();
  FUN_1005f05e4();
  return;
}



/* Entry: 1005f0188; end: 1005f0197;  */

void FUN_1005f0188(void)

{
  return;
}



/* Entry: 1005f0198; end: 1005f0207;  */

void FUN_1005f0198(void)

{
  FUN_1005f0188();
  FUN_1005f0208();
  func_0x0001005f0210(FUN_1005f8c48);
  FUN_10054f3f8();
  func_0x0001005f0230();
  func_0x0001005f023c();
  func_0x0001005f0254();
  return;
}



/* Entry: 1005f0208; end: 1005f02b7;  */

void FUN_1005f0208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x48);
  return;
}



/* Entry: 1005f02b8; end: 1005f032f;  */

void FUN_1005f02b8(long param_1)

{
  undefined8 unaff_x21;
  
  FUN_1005f0188();
  FUN_1005f0330();
  func_0x0001005f0338(FUN_1005f9728);
  func_0x0001005f0424();
  *(undefined8 *)(param_1 + 0x38) = unaff_x21;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_1005f0480();
  func_0x0001005f0254();
  return;
}



/* Entry: 1005f0330; end: 1005f035b;  */

void FUN_1005f0330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x50);
  return;
}



/* Entry: 1005f035c; end: 1005f03ab;  */

void FUN_1005f035c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xa8;
  func_0x000107c60e20();
  FUN_1005f03d8();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x00010054ec98(&uStack_30);
  FUN_100576f58();
  return;
}



/* Entry: 1005f03ac; end: 1005f03d7;  */

undefined8 FUN_1005f03ac(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1005f035c(auStack_30);
  FUN_1005f0404();
  return param_1;
}



/* Entry: 1005f03d8; end: 1005f0403;  */

void FUN_1005f03d8(undefined8 *param_1)

{
  FUN_10054edec();
  *param_1 = &PTR_DAT_110a61748;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 1005f0404; end: 1005f0437;  */

void FUN_1005f0404(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  func_0x00010054ee70();
  plVar5 = (long *)*unaff_x19;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
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
  return;
}



/* Entry: 1005f0438; end: 1005f047f;  */

void FUN_1005f0438(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x0001005f0430();
  return;
}



/* Entry: 1005f0480; end: 1005f049b;  */

void FUN_1005f0480(void)

{
  return;
}



/* Entry: 1005f049c; end: 1005f04bf;  */

void FUN_1005f049c(void)

{
  long unaff_x19;
  
  func_0x0001005f0490();
  FUN_10054ebfc(unaff_x19 + 8);
  return;
}



/* Entry: 1005f04c0; end: 1005f04d7;  */

void FUN_1005f04c0(void)

{
  return;
}



/* Entry: 1005f04d8; end: 1005f054f;  */

void FUN_1005f04d8(long param_1)

{
  undefined8 unaff_x21;
  
  FUN_1005f0188();
  FUN_1005f0330();
  func_0x0001005f0338(FUN_1005fbd48);
  func_0x0001005f0424();
  *(undefined8 *)(param_1 + 0x38) = unaff_x21;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_1005f0480();
  func_0x0001005f0254();
  return;
}



/* Entry: 1005f0550; end: 1005f0573;  */

void FUN_1005f0550(void)

{
  long unaff_x19;
  
  func_0x0001005f0490();
  FUN_10054ebfc(unaff_x19 + 8);
  return;
}



/* Entry: 1005f0574; end: 1005f05e3;  */

void FUN_1005f0574(void)

{
  FUN_1005f0188();
  FUN_1005f0208();
  func_0x0001005f0210(FUN_10061dee0);
  FUN_10054f3f8();
  func_0x0001005f0230();
  func_0x0001005f023c();
  func_0x0001005f0254();
  return;
}



/* Entry: 1005f05e4; end: 1005f05ff;  */

undefined8 * FUN_1005f05e4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *in_stack_00000028;
  
  plVar4 = in_stack_00000028;
  if (in_stack_00000028 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_00000028 + 1);
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
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028,0,&stack0x00000028);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return &stack0x00000028;
}



/* Entry: 1005f0600; end: 1005f06e7;  */

void FUN_1005f0600(long param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  ushort uStack_7c;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  ushort uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ushort uStack_3c;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  func_0x0001005f05ec();
  uStack_7c = (ushort)lVar1;
  lVar2 = *(long *)(param_1 + 0xb0);
  uStack_68 = *(undefined8 *)(lVar2 + 0x38);
  uStack_70 = *(undefined8 *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x38) != 0) {
    do {
      func_0x00010054e67c();
      uStack_7c = (ushort)lVar1;
    } while (extraout_w10 != 0);
  }
  uStack_80 = *(undefined4 *)(param_1 + 0x7c);
  uStack_7c = uStack_7c | 0x100;
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  FUN_1005ef5b0(&uStack_58,param_1 + 0x170);
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_58 = 0;
  FUN_1005f06f0(auStack_78,&uStack_50,uVar3);
  FUN_1005f0930(&uStack_50);
  FUN_1005f0930(&uStack_70);
  func_0x00010054fa34(&uStack_90);
  FUN_10054ebfc(auStack_78);
  return;
}



/* Entry: 1005f06e8; end: 1005f06ef;  */

void FUN_1005f06e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x58);
  return;
}



/* Entry: 1005f06f0; end: 1005f07af;  */

void FUN_1005f06f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  FUN_1005f06e8();
  *puVar1 = FUN_1005f07b0;
  puVar1[1] = FUN_1005f08c0;
  uVar2 = *param_2;
  puVar1[5] = param_2[1];
  puVar1[4] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)puVar1 + 0x34) = *(undefined2 *)((long)param_2 + 0x14);
  puVar1[7] = param_2[3];
  param_2[3] = 0;
  FUN_10054f3f8(puVar1 + 2);
  FUN_10054f4ac(param_1,puVar1 + 2);
  puVar1[8] = param_3;
  *(undefined1 *)(puVar1 + 10) = 0;
  FUN_1005f08fc(*param_3);
  func_0x0001005f0908();
  return;
}



/* Entry: 1005f07b0; end: 1005f08bf;  */

void FUN_1005f07b0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_10061e874(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
    do {
      func_0x0001006215b8();
    } while (extraout_w10 != 0);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      func_0x000107c32bb0();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x000107c32c84();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000107c32be0();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c32c68();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c32bc0();
          if ((bool)in_ZR) {
            func_0x000107c32bdc();
            func_0x000107c32bb8();
            func_0x000107c32ba4();
          }
          func_0x000107c32b98();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(param_1 + 0x40);
  func_0x000100621610();
  func_0x000100621618();
  func_0x0001006215f0();
  func_0x0001006215f8();
  FUN_1005f0930(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005f08c0; end: 1005f08fb;  */

void FUN_1005f08c0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000100621610();
    func_0x000100621618();
  }
  func_0x0001006215f8();
  FUN_1005f0930(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005f08fc; end: 1005f092f;  */

void FUN_1005f08fc(void)

{
  return;
}



/* Entry: 1005f0930; end: 1005f0953;  */

void FUN_1005f0930(void)

{
  long unaff_x19;
  
  func_0x0001005f0924();
  FUN_1005efe48();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f0954; end: 1005f0987;  */

void FUN_1005f0954(void)

{
  return;
}



/* Entry: 1005f0988; end: 1005f09b7;  */

void FUN_1005f0988(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    FUN_10054fc78(*puVar2);
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1005f09b8; end: 1005f0a7f;  */

void FUN_1005f09b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lStack_50 = param_1;
  FUN_1005ef5b0(&uStack_48);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1005f0a80(auStack_58,&lStack_40,uVar1);
  FUN_1005efe48(&uStack_38);
  FUN_1005efe48(&uStack_48);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lStack_50 = param_1;
  FUN_1005ef5b0(&uStack_48);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1005f0b5c(auStack_60,&lStack_40,uVar1);
  FUN_1005efe48(&uStack_38);
  FUN_1005efe48(&uStack_48);
  FUN_10054ebfc(auStack_60);
  FUN_10054ebfc(auStack_58);
  return;
}



/* Entry: 1005f0a80; end: 1005f0afb;  */

void FUN_1005f0a80(void)

{
  func_0x000107c60e20(0x48);
  FUN_1005f0afc(FUN_10062c690);
  func_0x0001005f0b1c();
  func_0x0001005f0b28();
  func_0x0001005f0b40();
  return;
}



/* Entry: 1005f0afc; end: 1005f0b5b;  */

undefined8 * FUN_1005f0afc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 in_x9;
  undefined8 *unaff_x23;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_2 = param_1;
  param_2[1] = in_x9;
  uVar1 = unaff_x23[1];
  param_2[4] = *unaff_x23;
  param_2[5] = uVar1;
  unaff_x23[1] = 0;
  puVar2 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar2 + 4) = 4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[5] = 0;
  puVar2[0x12] = puVar2 + 4;
  *puVar2 = &PTR_DAT_11087bc20;
  puVar2[1] = 0x200000006;
  *(undefined2 *)(puVar2 + 0x13) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ec98(&uStack_40);
  FUN_10054ebfc(&uStack_38);
  param_2[2] = puVar2;
  param_2[3] = puVar2;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return param_2 + 2;
}



/* Entry: 1005f0b5c; end: 1005f0bd7;  */

void FUN_1005f0b5c(void)

{
  func_0x000107c60e20(0x48);
  FUN_1005f0afc(FUN_10062d17c);
  func_0x0001005f0b1c();
  func_0x0001005f0b28();
  func_0x0001005f0b40();
  return;
}



/* Entry: 1005f0bd8; end: 1005f0be7;  */

void FUN_1005f0bd8(void)

{
  return;
}



/* Entry: 1005f0be8; end: 1005f0cef;  */

void FUN_1005f0be8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lStack_50 = param_1;
  FUN_1005ef5b0(&uStack_48);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1005f0cf0(auStack_58,&lStack_40,uVar1);
  FUN_1005efe48(&uStack_38);
  func_0x0001005f0d9c();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lStack_50 = param_1;
    FUN_1005ef5b0(&uStack_48);
    func_0x000107c31fec();
    func_0x000107c28a50();
    FUN_1005efe48(&uStack_38);
    func_0x0001005f0d9c();
    FUN_10054ebfc(auStack_60);
  }
  if (*(char *)(param_1 + 0x51) == '\x01') {
    lStack_50 = param_1;
    FUN_1005ef5b0(&uStack_48);
    func_0x000107c31fec();
    func_0x000107c28a54();
    func_0x0001005f0d9c();
    FUN_1005efe48(&uStack_48);
    FUN_10054ebfc(auStack_60);
  }
  func_0x0001005550c8();
  return;
}



/* Entry: 1005f0cf0; end: 1005f0d5b;  */

void FUN_1005f0cf0(void)

{
  func_0x000100554efc();
  FUN_1005f0d5c();
  func_0x0001005f0d64(FUN_10062ff88);
  func_0x000100554fe0();
  func_0x0001005f0d84();
  func_0x000100554fec();
  return;
}



/* Entry: 1005f0d5c; end: 1005f0da3;  */

void FUN_1005f0d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x48);
  return;
}



/* Entry: 1005f0da4; end: 1005f0e1b;  */

void FUN_1005f0da4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  lStack_50 = param_1;
  FUN_1005ef5b0(&uStack_48,param_1 + 0x100);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1005f0e24(auStack_58,&lStack_40,uVar1);
  FUN_1005efe48(&uStack_38);
  FUN_1005efe48(&uStack_48);
  func_0x0001005f0430();
  return;
}



/* Entry: 1005f0e1c; end: 1005f0e23;  */

void FUN_1005f0e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x48);
  return;
}



/* Entry: 1005f0e24; end: 1005f0ecb;  */

void FUN_1005f0e24(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  FUN_1005f0e1c();
  *puVar2 = FUN_100630508;
  puVar2[1] = &UNK_108704f04;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar1;
  param_2[1] = 0;
  FUN_1005f0ecc();
  FUN_10054f4ac(param_1,puVar2 + 2);
  puVar2[6] = param_3;
  *(undefined1 *)(puVar2 + 8) = 0;
  func_0x0001005f0ed4(*(undefined8 *)(*(long *)*param_3 + 0x10));
  return;
}



/* Entry: 1005f0ecc; end: 1005f0eef;  */

undefined8 * FUN_1005f0ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  *(undefined8 *)(param_1 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005f0ef0; end: 1005f0f67;  */

void FUN_1005f0ef0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lStack_50 = param_1;
  FUN_1005ef5b0(&uStack_48,param_1 + 0x78);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1005f0f68(auStack_58,&lStack_40,uVar1);
  FUN_1005efe48(&uStack_38);
  FUN_1005efe48(&uStack_48);
  func_0x0001005f1038();
  return;
}



/* Entry: 1005f0f68; end: 1005f1013;  */

void FUN_1005f0f68(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  func_0x000107c60e20();
  *puVar2 = FUN_100633940;
  puVar2[1] = &UNK_1086894b8;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar1;
  param_2[1] = 0;
  FUN_1005f1014();
  FUN_10054f4ac(param_1,puVar2 + 2);
  puVar2[6] = param_3;
  *(undefined1 *)(puVar2 + 8) = 0;
  func_0x0001005f101c(*(undefined8 *)(*(long *)*param_3 + 0x10));
  return;
}



/* Entry: 1005f1014; end: 1005f1073;  */

undefined8 * FUN_1005f1014(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  *(undefined8 *)(param_1 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005f1074; end: 1005f1103;  */

void FUN_1005f1074(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1104; end: 1005f110f;  */

long FUN_1005f1104(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 1005f1110; end: 1005f1137;  */

void FUN_1005f1110(void)

{
  long unaff_x19;
  
  FUN_1005f1104();
  FUN_100100fec();
  FUN_1005f1138();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1138; end: 1005f113f;  */

long FUN_1005f1138(void)

{
  long unaff_x19;
  long lStack_28;
  
  lStack_28 = unaff_x19 + 0x10;
  func_0x000100100fd4(&lStack_28);
  return unaff_x19 + 0x10;
}



/* Entry: 1005f1140; end: 1005f157b;  */

void FUN_1005f1140(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f157c; end: 1005f1583;  */

void FUN_1005f157c(void)

{
  return;
}



/* Entry: 1005f1584; end: 1005f1733;  */

void FUN_1005f1584(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1734; end: 1005f173f;  */

void FUN_1005f1734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 1005f1740; end: 1005f18ef;  */

void FUN_1005f1740(long param_1)

{
  func_0x000100555fb4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f18f0; end: 1005f1907;  */

void FUN_1005f18f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1005f1908; end: 1005f1937;  */

undefined8 FUN_1005f1908(undefined8 param_1)

{
  func_0x0001005f18f8(&PTR_DAT_110a75400);
  FUN_10054fff0();
  return param_1;
}



/* Entry: 1005f1938; end: 1005f193b;  */

void FUN_1005f1938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005f193c; end: 1005f195f;  */

void FUN_1005f193c(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1960; end: 1005f19ff;  */

void FUN_1005f1960(ulong param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  func_0x00010054fc34();
  if (param_1 != 0) {
    FUN_1005ee0f0();
    lVar1 = *unaff_x19;
    if (((param_1 & 1) == 0) && (0 < *(long *)(lVar1 + 8))) {
      func_0x000107c60d24();
      func_0x000107c60ca8(auStack_48,4,param_1);
      func_0x00010538cac0(auStack_28,auStack_48);
      func_0x000107c60d44(lVar1,auStack_28);
      func_0x000107c60c18(auStack_28);
      func_0x000107c60cac(auStack_48);
      lVar1 = *unaff_x19;
    }
    do {
      func_0x0001005eedc8();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x0001005630b8();
      (*extraout_x8)(lVar1);
    }
  }
  return;
}



/* Entry: 1005f1a00; end: 1005f1a0b;  */

void FUN_1005f1a00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005f1a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1005f1a0c; end: 1005f1a57;  */

void FUN_1005f1a0c(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 1005f1a58; end: 1005f1a6b;  */

void FUN_1005f1a58(void)

{
  FUN_1005f1a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005f1a6c; end: 1005f1a8f;  */

void FUN_1005f1a6c(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1a90; end: 1005f1aa7;  */

void FUN_1005f1a90(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00001010;
  FUN_1000dfb88();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1aa8; end: 1005f1c2b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f1b30) */

void FUN_1005f1aa8(long param_1,int param_2)

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
  undefined **appuStack_58 [2];
  undefined1 auStack_48 [8];
  
  if ((param_2 != 1) || (plVar9 = (long *)(param_1 + 0x10), ((uint)*plVar9 >> 1 & 1) != 0)) {
    return;
  }
  func_0x000107c60c28(appuStack_58,&UNK_10f82fc91);
  appuStack_58[0] = &PTR_DAT_110d9aa90;
  func_0x000107c3151c(auStack_48,appuStack_58);
  do {
    lVar5 = *plVar9;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        func_0x000107c60c1c(param_1 + 0x18,auStack_48);
        *(undefined8 *)(param_1 + 0x10) = 0x22;
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
LAB_1005f1bf8:
        func_0x000107c60c18(auStack_48);
        func_0x000107c60c34(appuStack_58);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) goto LAB_1005f1bf8;
  } while( true );
}



/* Entry: 1005f1c2c; end: 1005f1c5b;  */

undefined1 * FUN_1005f1c2c(void)

{
  long in_stack_00001058;
  
  if (in_stack_00001058 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00001050;
}



/* Entry: 1005f1c5c; end: 1005f1caf;  */

void FUN_1005f1c5c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x10;
      FUN_100555494();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1005f1cb0; end: 1005f1ceb;  */

undefined8 * FUN_1005f1cb0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_DAT_110a73c98;
  FUN_1005f1c5c(&puStack_28);
  return param_1;
}



/* Entry: 1005f1cec; end: 1005f1d1b;  */

void FUN_1005f1cec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005f1d1c; end: 1005f1d67;  */

void FUN_1005f1d1c(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1d68; end: 1005f1d8b;  */

void FUN_1005f1d68(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long unaff_x19;
  
  puVar1 = &stack0x00001108;
  FUN_1000784e0();
  plVar2 = *(long **)(puVar1 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 1005f1d8c; end: 1005f1e6f;  */

long FUN_1005f1d8c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001005f1614(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1005f1e70; end: 1005f1e7b;  */

undefined8 FUN_1005f1e70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005f1e7c; end: 1005f1e9f;  */

void FUN_1005f1e7c(long param_1)

{
  FUN_1005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1ea0; end: 1005f1ea7;  */

void FUN_1005f1ea0(void)

{
  return;
}



/* Entry: 1005f1ea8; end: 1005f1ecb;  */

void FUN_1005f1ea8(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f1ecc; end: 1005f1edb;  */

undefined8 * FUN_1005f1ecc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_stack_00000180;
  long in_stack_00000190;
  
  plVar1 = (long *)in_stack_00000190;
  lVar2 = in_stack_00000180;
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    in_stack_00000180 = lVar2;
    FUN_1000df75c(plVar1 + 3);
    func_0x000107c60e14(plVar1);
    plVar1 = (long *)lVar3;
    lVar2 = in_stack_00000180;
  }
  in_stack_00000180 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return &stack0x00000180;
}



/* Entry: 1005f1edc; end: 1005f1f6b;  */

long FUN_1005f1edc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd17b0;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    FUN_10011485c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1005f1f6c; end: 1005f202f;  */

void FUN_1005f1f6c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1004a531c();
  func_0x000107c60d88();
  uStack_60 = *param_2;
  uStack_58 = *param_3;
  lVar1 = param_1;
  FUN_1000deb4c(param_1,&uStack_60);
  if (lVar1 != 0) {
    func_0x0001005f2078(&uStack_60,lVar1 + 0x20);
    FUN_1005f20bc(&uStack_40,&uStack_60);
    FUN_1000df524(&uStack_60);
    if ((*(long *)(lVar1 + 0x28) == 0) || (*(long *)(*(long *)(lVar1 + 0x28) + 8) == -1)) {
      FUN_1005f21f8(param_1,lVar1);
    }
  }
  func_0x0001004a5580();
  func_0x0001000df510();
  return;
}


