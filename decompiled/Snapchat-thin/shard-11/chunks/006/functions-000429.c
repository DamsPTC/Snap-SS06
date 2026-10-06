/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087c41f8; end: 1087c42c3;  */

void FUN_1087c41f8(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  lVar2 = param_3;
  uVar1 = param_4;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 >> 5) < uVar1) {
    func_0x000108794824();
    func_0x000105285cbc();
    FUN_1086854a0();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 8) - lVar2;
    if (param_4 <= (ulong)(lVar2 >> 5)) {
      FUN_1087c42c4(param_2,param_3);
      lVar2 = unaff_x19;
      func_0x000104befd58();
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x20;
        func_0x000100100fec();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c42c4(param_2,param_2 + lVar2);
  }
  lVar2 = unaff_x19;
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086854f4();
  *(long *)(unaff_x19 + 8) = lVar2;
  return;
}



/* Entry: 1087c42c4; end: 1087c42df;  */

void FUN_1087c42c4(void)

{
  func_0x0001087c5998();
  FUN_1087c42e0();
  return;
}



/* Entry: 1087c42e0; end: 1087c4327;  */

void FUN_1087c42e0(void)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0001087c5984();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    FUN_1087c4328(unaff_x22,unaff_x21);
    unaff_x22 = unaff_x22 + 0x20;
  }
  return;
}



/* Entry: 1087c4328; end: 1087c434f;  */

void FUN_1087c4328(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087c5a98();
  func_0x000107c27cfc();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1087c4350; end: 1087c4377;  */

long FUN_1087c4350(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000104bee478();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return param_1;
    }
    FUN_1086855f4();
    func_0x0001006a07dc();
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      func_0x0001087c5a88();
      FUN_1087c43a4();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1087c4378; end: 1087c43a3;  */

long FUN_1087c4378(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001087c5a88();
    FUN_1087c43a4();
  }
  return param_1;
}



/* Entry: 1087c43a4; end: 1087c43b3;  */

void FUN_1087c43a4(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  uVar1 = (param_3 - (long)param_2) / 0x18;
  lVar3 = param_3;
  uVar4 = uVar1;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 / 0x18) < uVar4) {
    func_0x0001087948ec();
    func_0x0001052861b8();
    param_2 = unaff_x19;
    FUN_108685660();
    func_0x0001087c5bd8();
  }
  else {
    if (uVar1 <= (ulong)((unaff_x19[1] - lVar3) / 0x18)) {
      FUN_1087c447c(param_2,param_3);
      plVar2 = unaff_x19;
      func_0x000104befd58();
      while (plVar2 != unaff_x19) {
        plVar2 = plVar2 + -3;
        func_0x000104bee500();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c447c(param_2,(long)param_2 + (unaff_x19[1] - lVar3));
    func_0x0001087c5aa4(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086856b4();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1087c43b4; end: 1087c447b;  */

void FUN_1087c43b4(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  lVar2 = param_3;
  uVar3 = param_4;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 / 0x18) < uVar3) {
    func_0x0001087948ec();
    func_0x0001052861b8();
    param_2 = unaff_x19;
    FUN_108685660();
    func_0x0001087c5bd8();
  }
  else {
    if (param_4 <= (ulong)((unaff_x19[1] - lVar2) / 0x18)) {
      FUN_1087c447c(param_2,param_3);
      plVar1 = unaff_x19;
      func_0x000104befd58();
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -3;
        func_0x000104bee500();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c447c(param_2,(long)param_2 + (unaff_x19[1] - lVar2));
    func_0x0001087c5aa4(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086856b4();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1087c447c; end: 1087c4497;  */

void FUN_1087c447c(void)

{
  func_0x0001087c5998();
  FUN_1087c4498();
  return;
}



/* Entry: 1087c4498; end: 1087c44df;  */

void FUN_1087c4498(void)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0001087c5984();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    FUN_1087c44e0(unaff_x22,unaff_x21);
    unaff_x22 = unaff_x22 + 0x18;
  }
  return;
}



/* Entry: 1087c44e0; end: 1087c450b;  */

long FUN_1087c44e0(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001087c5a88();
    FUN_1087c450c();
  }
  return param_1;
}



/* Entry: 1087c450c; end: 1087c451b;  */

void FUN_1087c450c(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  uVar1 = (param_3 - (long)param_2) / 0x30;
  lVar3 = param_3;
  uVar4 = uVar1;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 / 0x30) < uVar4) {
    FUN_1087c45e4();
    func_0x00010528e950();
    param_2 = unaff_x19;
    FUN_108685788();
    func_0x0001087c5bd8();
  }
  else {
    if (uVar1 <= (ulong)((unaff_x19[1] - lVar3) / 0x30)) {
      FUN_1087c461c(param_2,param_3);
      plVar2 = unaff_x19;
      func_0x000104befd58();
      while (plVar2 != unaff_x19) {
        plVar2 = plVar2 + -6;
        func_0x000104be0e14();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c461c(param_2,(long)param_2 + (unaff_x19[1] - lVar3));
    func_0x0001087c5aa4(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086857f0();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1087c451c; end: 1087c45e3;  */

void FUN_1087c451c(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  lVar2 = param_3;
  uVar3 = param_4;
  func_0x0001087c59ac();
  if ((ulong)(extraout_x8 / 0x30) < uVar3) {
    FUN_1087c45e4();
    func_0x00010528e950();
    param_2 = unaff_x19;
    FUN_108685788();
    func_0x0001087c5bd8();
  }
  else {
    if (param_4 <= (ulong)((unaff_x19[1] - lVar2) / 0x30)) {
      FUN_1087c461c(param_2,param_3);
      plVar1 = unaff_x19;
      func_0x000104befd58();
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -6;
        func_0x000104be0e14();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087c461c(param_2,(long)param_2 + (unaff_x19[1] - lVar2));
    func_0x0001087c5aa4(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086857f0();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1087c45e4; end: 1087c461b;  */

void FUN_1087c45e4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104bee550();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1087c461c; end: 1087c4637;  */

void FUN_1087c461c(void)

{
  func_0x0001087c5998();
  FUN_1087c4638();
  return;
}



/* Entry: 1087c4638; end: 1087c467f;  */

void FUN_1087c4638(void)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0001087c5984();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x30) {
    FUN_1087c4680(unaff_x22,unaff_x21);
    unaff_x22 = unaff_x22 + 0x30;
  }
  return;
}



/* Entry: 1087c4680; end: 1087c46ef;  */

void FUN_1087c4680(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087c5a98();
  func_0x000107c27cfc();
  func_0x000107c27cfc(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 1087c46f0; end: 1087c46f3;  */

void FUN_1087c46f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a713e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c46f4; end: 1087c4707;  */

void FUN_1087c46f4(void)

{
  FUN_1087c48dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c4708; end: 1087c471b;  */

void FUN_1087c4708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087c4710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087c471c; end: 1087c472f;  */

void FUN_1087c471c(void)

{
  func_0x0001087c4870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c4730; end: 1087c47bb;  */

void FUN_1087c4730(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_3c0 [904];
  undefined8 uStack_38;
  
  FUN_108685044(auStack_3c0,param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  do {
    uStack_38 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087c5b18(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      func_0x0001087c48a8(lVar2 + 0x98);
      *(undefined4 *)(lVar2 + 0x98) = param_2;
      FUN_108639eb0(lVar2 + 0xa0,auStack_3c0);
      func_0x0001087c591c();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x000104bee3a8(auStack_3c0);
  return;
}



/* Entry: 1087c47bc; end: 1087c4817;  */

void FUN_1087c47bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x430;
  __Znwm();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a71488;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x85) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001087c5afc();
  return;
}



/* Entry: 1087c4818; end: 1087c481b;  */

undefined8 * FUN_1087c4818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71488;
  if (*(char *)(param_1 + 0x85) == '\x01') {
    func_0x000104bee3a8(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087c481c; end: 1087c482f;  */

void FUN_1087c481c(void)

{
  FUN_1087c4830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c4830; end: 1087c48db;  */

undefined8 * FUN_1087c4830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71488;
  if (*(char *)(param_1 + 0x85) == '\x01') {
    func_0x000104bee3a8(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087c48dc; end: 1087c48eb;  */

void FUN_1087c48dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a713e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087c48ec; end: 1087c4913;  */

long FUN_1087c48ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087c4914; end: 1087c4987;  */

void FUN_1087c4914(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_30 = puVar5[0x13d];
  lStack_28 = puVar5[0x13e];
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar5 + 0x11,puVar5 + 0x21,&uStack_30);
  FUN_10862e9b0(&uStack_30);
  return;
}



/* Entry: 1087c4988; end: 1087c49a7;  */

void FUN_1087c4988(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087c3a3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087c49a8; end: 1087c49bf;  */

void FUN_1087c49a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087c49c0; end: 1087c4a03;  */

void FUN_1087c49c0(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      FUN_1087c5754();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x0001087c5afc();
  return;
}



/* Entry: 1087c4a04; end: 1087c4a77;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087c4a04(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  plVar6 = (long *)(param_1 + 8);
  lVar7 = *plVar6;
  do {
    uStack_38 = 0;
    lVar4 = lVar7 + 0x10;
    func_0x0001087c5b18(lVar4,&uStack_38);
    if ((int)lVar4 != 0) {
      func_0x0001087c48a8(lVar7 + 0x98);
      FUN_1087c3f04(lVar7 + 0x98,param_2);
      func_0x0001087c591c();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
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
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
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
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 1087c4a78; end: 1087c4ce3;  */

void FUN_1087c4a78(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  long lVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087c59cc();
  plVar5 = param_1;
  func_0x0001087c5870(FUN_1087c503c);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
  }
  lVar6 = *unaff_x23;
  param_1[8] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087c58f4();
  func_0x0001087c596c();
  func_0x0001087c5a08();
  func_0x0001087c595c();
  do {
    func_0x0001087c5754();
  } while (extraout_w10_01 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087c5820();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087c5abc();
    plVar7 = extraout_x8_00;
    do {
      if (*plVar7 == 0) {
        func_0x0001087c57cc();
        plVar7 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x0001087c5978();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087c580c();
        if ((bool)in_ZR) {
          func_0x0001087c57dc();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x0001087c5894();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087c5794(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_06 + 0x20) = lVar6;
        goto LAB_1087c4c28;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c5a18();
  unaff_x22 = *plVar5;
  func_0x0001087c5850();
  func_0x0001087c5884();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087c58e8(param_1[8]);
    if ((extraout_w8_03 >> 5 & 1) == 0) {
      func_0x0001087c5a58();
      FUN_1087c26bc();
      func_0x0001087c5bb0();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087c57fc();
      func_0x0001087c5a20();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c4c78);
    (*pcVar2)();
  }
  func_0x0001087c59e4(*unaff_x20);
  do {
    func_0x0001087c5754();
  } while (extraout_w10_04 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    func_0x0001087c5ba4();
    func_0x0001087c5820();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087c5abc();
    plVar7 = extraout_x8_03;
    do {
      if (*plVar7 == 0) {
        func_0x0001087c57cc();
        plVar7 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar8 = extraout_w11_02;
      }
      else {
        func_0x0001087c5978();
        plVar7 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar8 = extraout_w11_01;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087c580c();
        if ((bool)uVar4) {
          func_0x0001087c57dc();
          uVar4 = extraout_w8_00;
          if ((bool)uVar3) {
            uVar4 = extraout_w9_00;
          }
          func_0x0001087c5784();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087c5794(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_07 + 0x20) = lVar6;
LAB_1087c4c28:
        func_0x0001087c5840(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c58a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c4ce4; end: 1087c4d1f;  */

undefined8 * FUN_1087c4ce4(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1087c47bc(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 1087c4d20; end: 1087c4dcf;  */

void FUN_1087c4d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087c4dd0; end: 1087c503b;  */

void FUN_1087c4dd0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  long lVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087c59cc();
  plVar5 = param_1;
  func_0x0001087c5870(FUN_1087c52c8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
  }
  lVar6 = *unaff_x23;
  param_1[8] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087c5754();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087c58f4();
  func_0x0001087c596c();
  func_0x0001087c5a08();
  func_0x0001087c595c();
  do {
    func_0x0001087c5754();
  } while (extraout_w10_01 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087c5820();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087c5abc();
    plVar7 = extraout_x8_00;
    do {
      if (*plVar7 == 0) {
        func_0x0001087c57cc();
        plVar7 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x0001087c5978();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087c580c();
        if ((bool)in_ZR) {
          func_0x0001087c57dc();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x0001087c5894();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087c5794(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_06 + 0x20) = lVar6;
        goto LAB_1087c4f80;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c5a18();
  unaff_x22 = *plVar5;
  func_0x0001087c5850();
  func_0x0001087c5884();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087c58e8(param_1[8]);
    if ((extraout_w8_03 >> 5 & 1) == 0) {
      func_0x0001087c5a58();
      FUN_1087aead8();
      func_0x0001087c5b90();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087c57fc();
      func_0x0001087c5a20();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c4fd0);
    (*pcVar2)();
  }
  func_0x0001087c59e4(*unaff_x20);
  do {
    func_0x0001087c5754();
  } while (extraout_w10_04 != 0);
  func_0x0001087c57ec();
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    func_0x0001087c5ba4();
    func_0x0001087c5820();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    func_0x0001087c5abc();
    plVar7 = extraout_x8_03;
    do {
      if (*plVar7 == 0) {
        func_0x0001087c57cc();
        plVar7 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar8 = extraout_w11_02;
      }
      else {
        func_0x0001087c5978();
        plVar7 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar8 = extraout_w11_01;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087c580c();
        if ((bool)uVar4) {
          func_0x0001087c57dc();
          uVar4 = extraout_w8_00;
          if ((bool)uVar3) {
            uVar4 = extraout_w9_00;
          }
          func_0x0001087c5784();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087c5794(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087c5830();
        *(long *)(extraout_x8_07 + 0x20) = lVar6;
LAB_1087c4f80:
        func_0x0001087c5840(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c58a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c503c; end: 1087c51cf;  */

void FUN_1087c503c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087c5a18();
    lVar8 = *plVar4;
    func_0x0001087c5850();
    func_0x0001087c5884();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087c58e8(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087c5a58();
        FUN_1087c26bc();
        func_0x0001087c5bb0();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087c57fc();
        func_0x0001087c5a20();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c5180);
      (*pcVar2)();
    }
    func_0x0001087c59e4(param_1[7]);
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
    func_0x0001087c57ec();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087c5ba4();
      lVar8 = param_1[9];
      func_0x0001087c57a8();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087c57cc();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087c5978();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087c5b7c();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087c57dc();
            func_0x0001087c5784();
            func_0x0001087c57b8();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087c5840(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c51d0; end: 1087c5217;  */

void FUN_1087c51d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c5218; end: 1087c528f;  */

void FUN_1087c5218(long param_1)

{
  FUN_1087c3e3c(param_1 + 0x48);
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c5290; end: 1087c52c7;  */

void FUN_1087c5290(void)

{
  func_0x0001087c5b24();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c52c8; end: 1087c545b;  */

void FUN_1087c52c8(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087c5a18();
    lVar8 = *plVar4;
    func_0x0001087c5850();
    func_0x0001087c5884();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087c58e8(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087c5a58();
        FUN_1087aead8();
        func_0x0001087c5b90();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087c57fc();
        func_0x0001087c5a20();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087c540c);
      (*pcVar2)();
    }
    func_0x0001087c59e4(param_1[7]);
    do {
      func_0x0001087c5754();
    } while (extraout_w10 != 0);
    func_0x0001087c57ec();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087c5ba4();
      lVar8 = param_1[9];
      func_0x0001087c57a8();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087c57cc();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087c5978();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087c5b7c();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087c57dc();
            func_0x0001087c5784();
            func_0x0001087c57b8();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087c5840(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087c5954();
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c545c; end: 1087c54a3;  */

void FUN_1087c545c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087c5858();
  func_0x0001087c5860();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c54a4; end: 1087c551b;  */

void FUN_1087c54a4(long param_1)

{
  FUN_1087c3e3c(param_1 + 0x48);
  func_0x0001087c593c();
  func_0x0001087c5850();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c551c; end: 1087c5553;  */

void FUN_1087c551c(void)

{
  func_0x0001087c5b24();
  func_0x0001087c5884();
  func_0x0001087c5860();
  func_0x0001087c58ac();
  func_0x0001087c58b4();
  func_0x0001087c5858();
  func_0x0001087c5868();
  func_0x0001087c5914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c5554; end: 1087c570f;  */

void FUN_1087c5554(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_98;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1 + 0x3f8;
  FUN_1087c3e3c(lVar4);
  FUN_1087c3f04(param_1 + 0x20,lVar4);
  uVar1 = param_1 + 0x3f8;
  func_0x000107c27f9c();
  func_0x0001087c5af4();
  func_0x0001087c59f0();
  func_0x0001087c5aec();
  func_0x0001087c5ae4();
  if (*(int *)(param_1 + 0x20) == 0) {
    func_0x0001087c5ac8(*(undefined8 *)(param_1 + 0x418));
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x418);
      FUN_108656428(&uStack_100,lVar4 + 0x4a0);
      func_0x000107c29edc(auStack_118,param_1 + 0x28);
      FUN_10879d9ac(&uStack_100);
      func_0x000107c27b9c();
      func_0x0001087c5a40();
      func_0x0001087be850(lVar4 + 0x4a0,&uStack_100);
      func_0x0001087c5b5c(*(undefined8 *)(param_1 + 0x418));
      func_0x000107c2a500(&uStack_100);
    }
    uStack_100 = 0x18;
  }
  else {
    uStack_100 = CONCAT44(*(int *)(param_1 + 0x20),0x18);
  }
  uStack_f8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  puVar3 = &uStack_100;
  FUN_1087a9380(param_1 + 0x10);
  puVar2 = &uStack_100;
  func_0x0001087a3420();
  func_0x0001087c5a70();
  func_0x0001087c5adc();
  func_0x0001087c5ad4();
  func_0x0001087c59f8();
  while( true ) {
    func_0x0001087c5858();
    func_0x0001087c594c();
    func_0x0001087c5bc4(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar3 == 0) break;
    func_0x0001087c5a40();
    puVar2 = &uStack_100;
    func_0x000107c2a500();
    func_0x0001087c5a70();
    func_0x0001087c5adc();
    func_0x0001087c5ad4();
    func_0x0001087c59f8();
    func_0x0001087c5a00();
    func_0x0001087c58bc();
    ___cxa_end_catch();
  }
  __Unwind_Resume(puVar2);
  func_0x000107c27f9c(puVar2 + 0x7f);
  func_0x0001087c5af4();
  func_0x0001087c59f0();
  func_0x0001087c5aec();
  func_0x0001087c5ae4();
  func_0x0001087c5adc();
  func_0x0001087c5ad4();
  func_0x0001087c59f8();
  func_0x0001087c5858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087c5710; end: 1087c5753;  */

void FUN_1087c5710(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x3f8);
  func_0x0001087c5af4();
  func_0x0001087c59f0();
  func_0x0001087c5aec();
  func_0x0001087c5ae4();
  func_0x0001087c5adc();
  func_0x0001087c5ad4();
  func_0x0001087c59f8();
  func_0x0001087c5858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c5754; end: 1087c5bff;  */

void FUN_1087c5754(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087c5c00; end: 1087c5d63;  */

undefined8 *
FUN_1087c5c00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 5;
  *param_1 = &PTR_FUN_110a714e0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10_02 != 0);
  }
  uVar2 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar2;
  *param_6 = 0;
  param_6[1] = 0;
  lVar1 = param_7[1];
  uVar2 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10_03 != 0);
  }
  FUN_1087bc1b8(param_1 + 0xe,param_8);
  lVar1 = param_9[1];
  uVar2 = *param_9;
  param_1[0x16] = param_9[1];
  param_1[0x15] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001087c6c70();
    } while (extraout_w10_04 != 0);
  }
  return param_1;
}



/* Entry: 1087c5d64; end: 1087c633f;  */

void FUN_1087c5d64(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar16;
  undefined8 uVar17;
  byte *pbVar18;
  long lVar19;
  byte abStack_d8 [4];
  uint uStack_d4;
  undefined1 uStack_d0;
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)0x2d8;
  __Znwm();
  *puVar8 = FUN_1087c6ae0;
  puVar8[1] = FUN_1087c6c1c;
  puVar8[0x59] = param_3;
  puVar8[0x58] = param_2;
  func_0x0001087a93b4(puVar8 + 2);
  FUN_1087a9334(param_1,puVar8 + 2);
  puVar8[0x50] = 0;
  puVar8[0x4f] = 0;
  puVar8[0x4e] = 0;
  uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x000107c278b8(puVar8 + 0x51,&UNK_10f4bb6b3);
  func_0x000107c31420(puVar8 + 0x3f,uVar17,puVar8 + 0x51);
  pbVar18 = (byte *)(puVar8 + 0x47);
  plVar1 = puVar8 + 0x54;
  plVar2 = puVar8 + 0x55;
  pbVar10 = (byte *)(puVar8 + 0x56);
  pbVar3 = (byte *)(puVar8 + 0x57);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x51);
  lVar14 = *(long *)(param_3 + 0x98);
  lVar19 = *(long *)(param_3 + 0xa0);
  do {
    if (lVar14 == lVar19) {
LAB_1087c5f80:
      func_0x000107c31424(puVar8 + 0x3f);
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      if (puVar8[0x4e] == puVar8[0x4f]) {
        uVar13 = 0;
        uVar7 = 1;
      }
      else {
        FUN_1087bcc74(pbVar18);
        *(long *)pbVar10 = *(long *)pbVar18;
        if (*(long *)pbVar18 != 0) {
          do {
            func_0x0001087c6ca8();
          } while (extraout_w10 != 0);
        }
        lVar14 = *param_4;
        *(long *)pbVar3 = lVar14;
        if (lVar14 != 0) {
          do {
            func_0x0001087c6ca8();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c278b8(puVar8 + 0x3f,&UNK_10f4bb6bd);
        pbVar11 = pbVar10;
        pbVar12 = pbVar3;
        FUN_1087ae498(plVar2,pbVar10,pbVar3,puVar8 + 0x3f);
        *plVar1 = *plVar2;
        do {
          func_0x0001087c6ca8();
        } while (extraout_w10_01 != 0);
        if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x5a) = 0;
          lVar14 = puVar8[0x54];
          func_0x0001087c6d60();
          lVar19 = *(long *)pbVar11;
          if (lVar19 == 0) {
            func_0x000107c3a5c0();
            lVar19 = *(long *)pbVar11;
          }
          plVar9 = (long *)(lVar14 + 0x10);
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                pbVar18 = *(byte **)(lVar14 + 0x90);
                bVar4 = pbVar18[1];
                uVar15 = (ulong)bVar4;
                uVar7 = 0;
                if (bVar4 == *pbVar18) {
                  uVar13 = (uint)bVar4 << 1;
                  uVar7 = bVar4 == 0x40;
                  if (0x7f < uVar13) {
                    uVar13 = 0x80;
                  }
                  pbVar11 = (byte *)(ulong)(uVar13 * 0x18 + 0x10);
                  _malloc();
                  uVar15 = 0;
                  *pbVar11 = (byte)uVar13;
                  pbVar11[1] = 0;
                  pbVar11[8] = 0;
                  pbVar11[9] = 0;
                  pbVar11[10] = 0;
                  pbVar11[0xb] = 0;
                  pbVar11[0xc] = 0;
                  pbVar11[0xd] = 0;
                  pbVar11[0xe] = 0;
                  pbVar11[0xf] = 0;
                  *(byte **)(pbVar18 + 8) = pbVar11;
                  *(byte **)(lVar14 + 0x90) = pbVar11;
                  pbVar18 = pbVar11;
                }
                pbVar10 = pbVar18 + uVar15 * 0x18 + 0x10;
                pbVar10[0] = 0;
                pbVar10[1] = 0;
                pbVar10[2] = 0;
                pbVar10[3] = 0;
                pbVar10[4] = 0;
                pbVar10[5] = 0;
                pbVar10[6] = 0;
                pbVar10[7] = 0;
                *(undefined8 **)(pbVar18 + uVar15 * 0x18 + 0x18) = puVar8;
                *(long *)(pbVar18 + uVar15 * 0x18 + 0x20) = lVar19;
                *(char *)(*(long *)(lVar14 + 0x90) + 1) =
                     *(char *)(*(long *)(lVar14 + 0x90) + 1) + '\x01';
                *(undefined8 *)(lVar14 + 0x10) = 0;
                goto LAB_1087c61a8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        func_0x000107c28834(plVar1);
        func_0x000107c27f9c(plVar1);
        func_0x000107c27f9c(plVar2);
        func_0x0001087c6d30();
        func_0x000107c27f9c(pbVar3);
        func_0x000107c27f9c();
        uVar13 = (uint)pbVar10;
        func_0x0001087c6d40();
        bVar6 = 6 < uVar13;
        uVar7 = uVar13 == 7;
        if ((bool)uVar7) {
          func_0x0001087c6dac();
          if (bVar6) {
            uVar13 = 7;
          }
          else {
            func_0x0001087c6cb8(*(undefined8 *)(puVar8[0x58] + 0x20));
            uVar13 = 0;
          }
        }
        func_0x000107c27f9c(pbVar18);
      }
      abStack_d8[0] = 5;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      abStack_d8[3] = 0;
      uStack_d0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      pbVar12 = abStack_d8;
      uStack_d4 = uVar13;
      func_0x0001087a9380(puVar8 + 2);
      pbVar11 = abStack_d8;
      func_0x0001087a3420(pbVar11);
      func_0x0001087c6d38();
      func_0x0001087c6ce0();
      while( true ) {
        func_0x0001087c6c80();
        func_0x0001087c6cd0();
LAB_1087c61a8:
        func_0x0001087c6e80(uStack_68);
        if ((bool)uVar7) break;
        ___stack_chk_fail();
        if ((int)pbVar12 == 0) {
          do {
            __Unwind_Resume(pbVar11);
            func_0x000104bd46a0();
          } while ((int)pbVar12 == 0);
          func_0x0001087c6da4();
          func_0x0001087c6dc8();
          func_0x0001087c6e78();
          func_0x0001087c6e34();
          func_0x000107c31424(puVar8 + 0x3f);
        }
        else {
          func_0x000107c27f9c(pbVar18);
          func_0x0001087c6d38();
        }
        func_0x0001087c6ce0();
        ___cxa_begin_catch();
        func_0x0001087c6d58();
        ___cxa_end_catch();
      }
      return;
    }
    FUN_10885edd8(abStack_d8,*(undefined8 *)(param_2 + 0x20),lVar14);
    FUN_108663a10(pbVar18,abStack_d8);
    FUN_108656820(abStack_d8);
    if ((*(byte *)(puVar8 + 0x4d) & 1) == 0) {
      abStack_d8[0] = 7;
      abStack_d8[1] = 0;
      abStack_d8[2] = 0;
      abStack_d8[3] = 0;
      func_0x0001087c6e50();
      uStack_b8 = 0;
      uStack_b4 = 0;
      func_0x0001087c6e44();
      func_0x0001087c6e18();
      func_0x0001087c6da4();
      func_0x0001087c6dc8();
LAB_1087c5f7c:
      func_0x0001087c6e34();
      goto LAB_1087c5f80;
    }
    if (*(char *)((long)puVar8 + 0x264) == '\x01' && *(int *)(puVar8 + 0x4c) == 1) {
      func_0x000107c29f64(puVar8 + 4,*(undefined8 *)(param_2 + 0x20),pbVar18,2);
      if ((*(byte *)(puVar8 + 0x3e) & 1) == 0) {
        abStack_d8[0] = 7;
        abStack_d8[1] = 0;
        abStack_d8[2] = 0;
        abStack_d8[3] = 0;
        func_0x0001087c6e50();
        uStack_b8 = 0;
        uStack_b4 = 0;
        func_0x0001087c6e44();
        func_0x0001087c6e18();
        func_0x0001087c6da4();
        func_0x0001087c6dc8();
        func_0x0001087c6e78();
        goto LAB_1087c5f7c;
      }
      plVar9 = *(long **)(param_2 + 0x40);
      (**(code **)(*plVar9 + 0x10))();
      puVar8[0x4a] = plVar9;
      *(undefined1 *)(puVar8 + 0x4b) = 1;
      puVar8[0x3b] = plVar9;
      *(undefined1 *)(puVar8 + 0x3c) = 1;
      FUN_10885fef4(*(undefined8 *)(param_2 + 0x20),pbVar18);
      FUN_10885ff98(*(undefined8 *)(param_2 + 0x20),puVar8 + 4);
      func_0x000107c31428(puVar8 + 0x3f);
      FUN_1087c6340(abStack_d8,param_2,param_3,*(long *)(param_2 + 0x20) + 0x40,pbVar18);
      FUN_1087bc634(puVar8 + 0x4e,abStack_d8);
      func_0x000107c27f9c(abStack_d8);
      func_0x0001087c6e78();
    }
    func_0x0001087c6e34();
    lVar14 = lVar14 + 0x18;
  } while( true );
}



/* Entry: 1087c6340; end: 1087c676f;  */

/* WARNING: Removing unreachable block (ram,0x0001087c64c0) */

void FUN_1087c6340(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  int extraout_w10;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auStack_8c [28];
  ulong auStack_70 [6];
  
  puVar4 = (undefined8 *)0x1e0;
  __Znwm();
  *puVar4 = FUN_1087c68c4;
  puVar4[1] = FUN_1087c6aa0;
  puVar4[0x3a] = param_2;
  func_0x0001087bdacc(puVar4 + 2);
  FUN_1087bcd54(param_1,puVar4 + 2);
  func_0x000107c27994(puVar4 + 0x33,param_5);
  puVar4[0x13] = &PTR_FUN_110a8ea18;
  puVar4[0x14] = 0;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  puVar4[0x16] = 0;
  puVar4[0x15] = 0;
  puVar4[0x18] = 0;
  puVar4[0x17] = 0;
  *(undefined8 *)((long)puVar4 + 0xc9) = 0;
  *(undefined8 *)((long)puVar4 + 0xc1) = 0;
  func_0x0001086d0f30(puVar4 + 0x13);
  func_0x000107c29ee4(auStack_70,param_4);
  FUN_1086c77e0(puVar4 + 0x13);
  func_0x000107c287d0();
  func_0x0001087c6e68();
  func_0x000107c29ee4(auStack_70,puVar4 + 0x33);
  FUN_1086c1e2c(puVar4 + 0x13);
  func_0x000107c287d0();
  func_0x0001087c6e68();
  *(undefined1 *)(puVar4 + 0x25) = 0;
  *(undefined1 *)(puVar4 + 0x2b) = 0;
  FUN_1087bcd9c(puVar4 + 0x25,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x9c),
                *(undefined4 *)(param_3 + 0xa10));
  FUN_108848684(puVar4 + 0x36);
  plVar5 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar5 + 0x58))
            (puVar4 + 0x39,plVar5,puVar4 + 0x33,puVar4 + 0x36,puVar4 + 0x13,puVar4 + 0x25);
  puVar4[0x2c] = puVar4[0x39];
  do {
    func_0x0001087c6ca8();
  } while (extraout_w10 != 0);
  if (((uint)*(undefined8 *)(puVar4[0x2c] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x3b) = 0;
    param_2 = puVar4[0x2c];
    func_0x0001087c6d60();
    lVar11 = *plVar5;
    if (lVar11 == 0) {
      func_0x000107c3a5c0();
      lVar11 = *plVar5;
    }
    plVar5 = (long *)(param_2 + 0x10);
    do {
      lVar10 = *plVar5;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          pbVar12 = *(byte **)(param_2 + 0x90);
          bVar1 = pbVar12[1];
          uVar9 = (ulong)bVar1;
          pbVar7 = pbVar12;
          if (bVar1 == *pbVar12) {
            uVar8 = (uint)bVar1 << 1;
            if (0x7f < uVar8) {
              uVar8 = 0x80;
            }
            pbVar7 = (byte *)(ulong)(uVar8 * 0x18 + 0x10);
            _malloc();
            uVar9 = 0;
            *pbVar7 = (byte)uVar8;
            pbVar7[1] = 0;
            pbVar7[8] = 0;
            pbVar7[9] = 0;
            pbVar7[10] = 0;
            pbVar7[0xb] = 0;
            pbVar7[0xc] = 0;
            pbVar7[0xd] = 0;
            pbVar7[0xe] = 0;
            pbVar7[0xf] = 0;
            *(byte **)(pbVar12 + 8) = pbVar7;
            *(byte **)(param_2 + 0x90) = pbVar7;
          }
          pbVar12 = pbVar7 + uVar9 * 0x18 + 0x10;
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          *(undefined8 **)(pbVar7 + uVar9 * 0x18 + 0x18) = puVar4;
          *(long *)(pbVar7 + uVar9 * 0x18 + 0x20) = lVar11;
          *(char *)(*(long *)(param_2 + 0x90) + 1) =
               *(char *)(*(long *)(param_2 + 0x90) + 1) + '\x01';
          *(undefined8 *)(param_2 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  puVar6 = puVar4 + 0x2c;
  FUN_1087c6770(puVar6);
  FUN_10877d4b8(puVar4 + 0x1d,puVar6);
  func_0x0001087c6d94();
  func_0x0001087c6d20();
  if (*(int *)(puVar4 + 0x24) == 0) {
    func_0x0001087c6820(puVar4 + 0x1d);
    func_0x0001087c6de8();
    func_0x0001087c6c64();
    func_0x0001087c6cfc();
    func_0x0001087c6d50();
  }
  else {
    puVar6 = puVar4 + 0x1d;
    func_0x0001087c6838(puVar6);
    func_0x00010877d53c(puVar4 + 0x2c,puVar6);
    if (*(int *)(puVar4 + 0x32) == 4) {
      auStack_70[3] = 0;
      auStack_70[2] = 0;
      auStack_70[5] = 0;
      auStack_70[4] = 0;
      auStack_70[1] = 0;
      auStack_70[0] = 0;
      FUN_1086cf200(auStack_70);
      func_0x0001087c6d70();
      FUN_10868cc20(puVar4 + 4);
      func_0x0001087c6c88(auStack_8c);
      func_0x0001087c6dd0();
      func_0x0001086cf230(auStack_70);
      auStack_70[0] = auStack_70[0] & 0xffffffff00000000;
      func_0x0001087c6c64();
    }
    else if ((*(int *)(puVar4 + 0x32) == 3) && ((*(byte *)(puVar4[0x31] + 0x10) >> 2 & 1) != 0)) {
      func_0x0001087c6df8();
      func_0x0001087c6e5c();
      if (*(int *)(param_2 + 0x38) == 7) {
        auStack_70[0] = CONCAT44(auStack_70[0]._4_4_,3);
        func_0x0001087c6c64();
      }
      else {
        func_0x0001087c6de8();
        func_0x0001087c6c64();
      }
    }
    else {
      func_0x0001087c6de8();
      func_0x0001087c6c64();
    }
    func_0x0001087c6cfc();
    func_0x0001087c6d50();
    func_0x0001087c6d9c();
  }
  func_0x0001087c6d8c();
  func_0x0001087c6d18();
  func_0x0001087c6d28();
  func_0x0001087c6cd8();
  func_0x0001087c6d10();
  func_0x0001087c6c80();
  func_0x0001087c6cd0();
  return;
}



/* Entry: 1087c6770; end: 1087c67d3;  */

long FUN_1087c6770(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087c67c0);
  (*pcVar1)();
}



/* Entry: 1087c67d4; end: 1087c6807;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087c67d4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087bd39c(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087c6808; end: 1087c680b;  */

undefined8 * FUN_1087c6808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a714e0;
  func_0x000107c297ac(param_1 + 0x15);
  func_0x000107c30608(param_1 + 0xe);
  func_0x000107c289fc(param_1 + 0xc);
  func_0x000107c288a4(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c2917c(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087c680c; end: 1087c6853;  */

void FUN_1087c680c(void)

{
  FUN_1087c6854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087c6854; end: 1087c68c3;  */

undefined8 * FUN_1087c6854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a714e0;
  func_0x000107c297ac(param_1 + 0x15);
  func_0x000107c30608(param_1 + 0xe);
  func_0x000107c289fc(param_1 + 0xc);
  func_0x000107c288a4(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c2917c(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087c68c4; end: 1087c6a9f;  */

void FUN_1087c68c4(long param_1)

{
  long lVar1;
  long unaff_x20;
  ulong auStack_70 [6];
  undefined1 auStack_3c [28];
  
  lVar1 = param_1 + 0x160;
  FUN_1087c6770(lVar1);
  FUN_10877d4b8(param_1 + 0xe8,lVar1);
  func_0x0001087c6d94();
  func_0x0001087c6d20();
  if (*(int *)(param_1 + 0x120) == 0) {
    func_0x0001087c6820(param_1 + 0xe8);
    func_0x0001087c6dd8();
    func_0x0001087c6c64();
    func_0x0001087c6ce8();
    func_0x0001087c6d50();
  }
  else {
    lVar1 = param_1 + 0xe8;
    func_0x0001087c6838(lVar1);
    func_0x00010877d53c(param_1 + 0x160,lVar1);
    if (*(int *)(param_1 + 400) == 4) {
      auStack_70[3] = 0;
      auStack_70[2] = 0;
      auStack_70[5] = 0;
      auStack_70[4] = 0;
      auStack_70[1] = 0;
      auStack_70[0] = 0;
      FUN_1086cf200(auStack_70);
      func_0x0001087c6d70();
      FUN_10868cc20(param_1 + 0x20);
      func_0x0001087c6c88(auStack_3c);
      func_0x0001087c6dd0();
      func_0x0001086cf230(auStack_70);
      auStack_70[0] = auStack_70[0] & 0xffffffff00000000;
      func_0x0001087c6c64();
    }
    else if ((*(int *)(param_1 + 400) == 3) &&
            ((*(byte *)(*(long *)(param_1 + 0x188) + 0x10) >> 2 & 1) != 0)) {
      func_0x0001087c6df8();
      func_0x0001087c6e5c();
      if (*(int *)(unaff_x20 + 0x38) == 7) {
        auStack_70[0] = CONCAT44(auStack_70[0]._4_4_,3);
        func_0x0001087c6c64();
      }
      else {
        func_0x0001087c6dd8();
        func_0x0001087c6c64();
      }
    }
    else {
      func_0x0001087c6dd8();
      func_0x0001087c6c64();
    }
    func_0x0001087c6ce8();
    func_0x0001087c6d50();
    func_0x0001087c6d9c();
  }
  func_0x0001087c6d8c();
  func_0x0001087c6d18();
  func_0x0001087c6d28();
  func_0x0001087c6cd8();
  func_0x0001087c6d10();
  func_0x0001087c6c80();
  func_0x0001087c6cd0();
  return;
}



/* Entry: 1087c6aa0; end: 1087c6adf;  */

void FUN_1087c6aa0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x160);
  func_0x0001087c6d20();
  func_0x0001087c6d18();
  func_0x0001087c6d28();
  func_0x0001087c6cd8();
  func_0x0001087c6d10();
  func_0x0001087c6c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c6ae0; end: 1087c6c1b;  */

void FUN_1087c6ae0(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c28834(param_1 + 0x2a0);
  uVar5 = (int)param_1 + 0x2a0;
  func_0x000107c27f9c();
  func_0x0001087c6e2c();
  func_0x0001087c6d30();
  func_0x0001087c6e24();
  func_0x0001087c6e10();
  func_0x0001087c6d40();
  bVar1 = 6 < uVar5;
  uVar2 = uVar5 == 7;
  if ((bool)uVar2) {
    func_0x0001087c6dac();
    if (bVar1) {
      uVar5 = 7;
    }
    else {
      func_0x0001087c6cb8(*(undefined8 *)(*(long *)(param_1 + 0x2c0) + 0x20));
      uVar5 = 0;
    }
  }
  func_0x0001087c6e70();
  uStack_98 = 5;
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  puVar4 = &uStack_98;
  uStack_94 = uVar5;
  FUN_1087a9380(param_1 + 0x10);
  puVar3 = &uStack_98;
  func_0x0001087a3420();
  func_0x0001087c6d38();
  func_0x0001087c6ce0();
  while( true ) {
    func_0x0001087c6c80();
    func_0x0001087c6cd0();
    func_0x0001087c6e80(uStack_28);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar4 == 0) break;
    func_0x0001087c6e70();
    func_0x0001087c6d38();
    func_0x0001087c6ce0();
    func_0x0001087c6e3c();
    func_0x0001087c6d58();
    ___cxa_end_catch();
  }
  __Unwind_Resume(puVar3);
  func_0x000107c27f9c(puVar3 + 0xa8);
  func_0x0001087c6e2c();
  func_0x0001087c6d30();
  func_0x0001087c6e24();
  func_0x0001087c6e10();
  func_0x0001087c6e70();
  func_0x0001087c6d38();
  func_0x0001087c6ce0();
  func_0x0001087c6c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087c6c1c; end: 1087c6c63;  */

void FUN_1087c6c1c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x2a0);
  func_0x0001087c6e2c();
  func_0x0001087c6d30();
  func_0x0001087c6e24();
  func_0x0001087c6e10();
  func_0x0001087c6e70();
  func_0x0001087c6d38();
  func_0x0001087c6ce0();
  func_0x0001087c6c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087c6c64; end: 1087c6e93;  */

void FUN_1087c6c64(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054f8c8(unaff_x20 + 8,unaff_x19 + 0x198);
  func_0x000100292164();
  return;
}



/* Entry: 1087c6e94; end: 1087c70af;  */

void FUN_1087c6e94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 unaff_x30;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_1 + 1) = 0x15;
  *param_1 = &PTR_FUN_110a71520;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar7 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar7;
  param_1[4] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar7 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar7;
  *param_3 = 0;
  param_3[1] = 0;
  uVar7 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar7;
  *param_4 = 0;
  param_4[1] = 0;
  uVar7 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar7;
  *param_5 = 0;
  param_5[1] = 0;
  puVar5 = (undefined8 *)0x10;
  __Znwm();
  uVar8 = param_6[1];
  uVar7 = *param_6;
  *param_6 = 0;
  param_6[1] = 0;
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  uStack_70 = 0;
  uStack_68 = 0;
  param_1[0xb] = puVar5;
  func_0x000107c29948(&uStack_70);
  uVar7 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar7;
  *param_7 = 0;
  param_7[1] = 0;
  uVar7 = *param_8;
  param_1[0xf] = param_8[1];
  param_1[0xe] = uVar7;
  *param_8 = 0;
  param_8[1] = 0;
  uVar7 = *param_9;
  param_1[0x11] = param_9[1];
  param_1[0x10] = uVar7;
  *param_9 = 0;
  param_9[1] = 0;
  uVar7 = *param_10;
  param_1[0x13] = param_10[1];
  param_1[0x12] = uVar7;
  *param_10 = 0;
  param_10[1] = 0;
  uVar7 = *param_11;
  param_1[0x15] = param_11[1];
  param_1[0x14] = uVar7;
  *param_11 = 0;
  param_11[1] = 0;
  FUN_1087bc1b8(param_1 + 0x16,param_12);
  lVar6 = param_13[1];
  uVar7 = *param_13;
  param_1[0x1e] = param_13[1];
  param_1[0x1d] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar7 = *param_14;
  param_1[0x20] = param_14[1];
  param_1[0x1f] = uVar7;
  *param_14 = 0;
  param_14[1] = 0;
  uVar7 = *param_15;
  param_1[0x22] = param_15[1];
  param_1[0x21] = uVar7;
  *param_15 = 0;
  param_15[1] = 0;
  uVar7 = *param_16;
  param_1[0x24] = param_16[1];
  param_1[0x23] = uVar7;
  *param_16 = 0;
  param_16[1] = 0;
  uVar8 = param_16[3];
  uVar7 = param_16[2];
  param_1[0x27] = param_16[4];
  param_1[0x26] = uVar8;
  param_1[0x25] = uVar7;
  param_16[3] = 0;
  param_16[4] = 0;
  param_16[2] = 0;
  uVar2 = *(undefined2 *)(param_16 + 5);
  *(undefined1 *)((long)param_1 + 0x142) = *(undefined1 *)((long)param_16 + 0x2a);
  *(undefined2 *)(param_1 + 0x28) = uVar2;
  func_0x0001087ce960(param_1,unaff_x30);
  return;
}



/* Entry: 1087c70b0; end: 1087c722b;  */

void FUN_1087c70b0(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)0xa8;
  __Znwm();
  *puVar2 = FUN_1087ce098;
  puVar2[1] = FUN_1087ce100;
  func_0x0001087a93b4(puVar2 + 2);
  FUN_1087a9334(param_1,puVar2 + 2);
  FUN_1087c722c(puVar2 + 0x13,param_2,param_3);
  puVar2[0x12] = puVar2[0x13];
  do {
    func_0x0001087ce1c4();
  } while (extraout_w10 != 0);
  func_0x0001087ce564(puVar2[0x12]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x14) = 0;
    lVar6 = puVar2[0x12];
    func_0x0001087ce1b4();
    if (*param_2 == 0) {
      func_0x000107c3a5c0();
    }
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001087ce258();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001087ce548();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087ce874();
        if ((bool)in_ZR) {
          func_0x0001087ce248();
          func_0x0001087ce1a4();
          func_0x0001087ce2a4();
          *(long **)(param_1 + 8) = param_2;
          *(long **)(lVar6 + 0x90) = param_2;
        }
        func_0x0001087ce3a4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar3 = puVar2 + 0x12;
  FUN_1087afeec(puVar3);
  FUN_1087a3188(puVar2 + 4,puVar3);
  func_0x0001087ce540();
  func_0x0001087ce47c();
  func_0x0001087ce764();
  func_0x0001087a3420(puVar2 + 4);
  func_0x0001087ce2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087c722c; end: 1087c7cdb;  */

void FUN_1087c722c(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint uVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar14;
  long lVar15;
  long *extraout_x8_01;
  long extraout_x8_02;
  ulong uVar16;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *plVar17;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  long extraout_x9;
  long *extraout_x9_00;
  ulong uVar18;
  ulong extraout_x9_01;
  long *plVar19;
  ulong uVar20;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  long *extraout_x10;
  long *plVar21;
  long *plVar22;
  long *extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  long *unaff_x25;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  undefined1 auStack_290 [40];
  undefined1 auStack_268 [16];
  long alStack_258 [5];
  undefined1 auStack_230 [4];
  undefined1 uStack_22c;
  undefined8 uStack_70;
  
  func_0x0001087ce308();
  puVar9 = (undefined8 *)0x198;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar9 = FUN_1087cdbc8;
  puVar9[1] = FUN_1087ce058;
  puVar9[0x2f] = param_2;
  puVar9[0x30] = param_3;
  func_0x0001087a93b4(puVar9 + 2);
  FUN_1087a9334(param_1,puVar9 + 2);
  FUN_10877c1a4(puVar9 + 0x29,param_3 + 0xf8);
  plVar17 = puVar9 + 0x23;
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 8) = 0x3f800000;
  lVar12 = puVar9[0x2a];
  plVar32 = puVar9 + 6;
  for (lVar10 = puVar9[0x29]; lVar10 != lVar12; lVar10 = lVar10 + 0x30) {
    uVar7 = *(int *)(lVar10 + 0x28) + -1 < 0;
    bVar8 = *(int *)(lVar10 + 0x28) == 1;
    if (bVar8) {
      func_0x0001087ce350(*(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x18));
      lVar15 = extraout_x9 + 0xb58;
      if (!bVar8) {
        lVar15 = extraout_x8_00;
      }
      func_0x000107c29ee0(plVar17,lVar15);
      plVar19 = plVar17;
      FUN_108848654();
      plVar27 = (long *)puVar9[5];
      if (plVar27 != (long *)0x0) {
        uVar25 = (long)plVar27 - 1;
        uVar26 = (uint)plVar27;
        if (((ulong)plVar27 & uVar25) == 0) {
          unaff_x25 = (long *)((ulong)(uVar26 - 1) & (ulong)plVar19);
          uVar7 = false;
        }
        else {
          uVar7 = (long)plVar19 - (long)plVar27 < 0;
          unaff_x25 = plVar19;
          if (plVar27 <= plVar19) {
            uVar13 = 0;
            if (uVar26 != 0) {
              uVar13 = (uint)plVar19 / uVar26;
            }
            unaff_x25 = (long *)(ulong)((uint)plVar19 - uVar13 * uVar26);
          }
        }
        plVar30 = *(long **)(puVar9[4] + (long)unaff_x25 * 8);
        if (plVar30 != (long *)0x0) {
          do {
            while( true ) {
              plVar30 = (long *)*plVar30;
              if (plVar30 == (long *)0x0) goto LAB_1087c7394;
              plVar14 = (long *)plVar30[1];
              uVar7 = (long)plVar14 - (long)plVar19 < 0;
              if (plVar14 != plVar19) break;
              plVar14 = plVar30 + 2;
              func_0x000107c28078(plVar14,plVar17);
              if (((ulong)plVar14 & 1) != 0) goto LAB_1087c7628;
            }
            if (((ulong)plVar27 & uVar25) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar25);
            }
            else if (plVar27 <= plVar14) {
              uVar18 = 0;
              if (plVar27 != (long *)0x0) {
                uVar18 = (ulong)plVar14 / (ulong)plVar27;
              }
              plVar14 = (long *)((long)plVar14 - uVar18 * (long)plVar27);
            }
            uVar7 = (long)plVar14 - (long)unaff_x25 < 0;
          } while (plVar14 == unaff_x25);
        }
      }
LAB_1087c7394:
      plVar30 = (long *)0x30;
      __Znwm();
      puVar9[0x1c] = plVar30;
      puVar9[0x1d] = plVar32;
      puVar9[0x1e] = 1;
      *plVar30 = 0;
      plVar30[1] = (long)plVar19;
      lVar15 = *plVar17;
      plVar30[3] = puVar9[0x24];
      plVar30[2] = lVar15;
      lVar15 = puVar9[0x25];
      *plVar17 = 0;
      puVar9[0x24] = 0;
      puVar9[0x25] = 0;
      plVar30[4] = lVar15;
      plVar30[5] = 0;
      func_0x0001087ce5cc(puVar9[7]);
      if ((plVar27 == (long *)0x0) || (func_0x0001087ce5c0(), (bool)uVar7)) {
        bVar5 = (long *)0x2 < plVar27;
        bVar8 = plVar27 == (long *)0x3;
        func_0x0001087ce16c((long)plVar27 << 1);
        plVar14 = extraout_x8_01;
        if (!bVar5 || bVar8) {
          plVar14 = extraout_x9_00;
        }
        if ((long)plVar14 - 1U == 0) {
          plVar14 = (long *)0x2;
        }
        else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar27 = (long *)puVar9[5];
        if (plVar27 < plVar14) {
LAB_1087c7438:
          plVar27 = plVar14;
          if ((ulong)plVar27 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1087c7bb4);
            (*pcVar4)();
          }
          lVar15 = (long)plVar27 << 3;
          __Znwm(lVar15);
          FUN_1087cd874(puVar9 + 4,lVar15);
          puVar9[5] = plVar27;
          lVar15 = puVar9[4];
          for (plVar14 = (long *)0x0; plVar27 != plVar14; plVar14 = (long *)((long)plVar14 + 1)) {
            *(undefined8 *)(lVar15 + (long)plVar14 * 8) = 0;
          }
          plVar14 = (long *)*plVar32;
          if (plVar14 != (long *)0x0) {
            plVar21 = (long *)plVar14[1];
            uVar18 = (long)plVar27 - 1;
            uVar25 = 0;
            if (plVar27 != (long *)0x0) {
              uVar25 = (ulong)plVar21 / (ulong)plVar27;
            }
            plVar22 = plVar21;
            if (plVar27 <= plVar21) {
              plVar22 = (long *)((long)plVar21 - uVar25 * (long)plVar27);
            }
            if (((ulong)plVar27 & uVar18) == 0) {
              plVar22 = (long *)((ulong)plVar21 & uVar18);
            }
            *(long **)(lVar15 + (long)plVar22 * 8) = plVar32;
            while (plVar21 = plVar14, plVar14 = (long *)*plVar21, plVar14 != (long *)0x0) {
              plVar23 = (long *)plVar14[1];
              if (((ulong)plVar27 & uVar18) == 0) {
                plVar23 = (long *)((ulong)plVar23 & uVar18);
              }
              else if (plVar27 <= plVar23) {
                uVar25 = 0;
                if (plVar27 != (long *)0x0) {
                  uVar25 = (ulong)plVar23 / (ulong)plVar27;
                }
                plVar23 = (long *)((long)plVar23 - uVar25 * (long)plVar27);
              }
              if (plVar23 != plVar22) {
                if (*(long *)(lVar15 + (long)plVar23 * 8) == 0) {
                  *(long **)(lVar15 + (long)plVar23 * 8) = plVar21;
                  plVar22 = plVar23;
                }
                else {
                  func_0x0001087ce4d0();
                  lVar15 = extraout_x8_02;
                  uVar18 = extraout_x9_01;
                  plVar14 = extraout_x10;
                  plVar22 = extraout_x11;
                }
              }
            }
          }
        }
        else if (plVar14 < plVar27) {
          plVar21 = (long *)(long)((float)(ulong)puVar9[7] / *(float *)(puVar9 + 8));
          if ((plVar27 < (long *)0x3) || (((ulong)plVar27 & (long)plVar27 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar21) {
            plVar21 = (long *)(1L << (-LZCOUNT((long)plVar21 + -1) & 0x3fU));
          }
          if (plVar14 <= plVar21) {
            plVar14 = plVar21;
          }
          if (plVar14 < plVar27) {
            if (plVar14 != (long *)0x0) goto LAB_1087c7438;
            FUN_1087cd874(puVar9 + 4,0);
            plVar27 = (long *)0x0;
            puVar9[5] = 0;
          }
          else {
            plVar27 = (long *)puVar9[5];
          }
        }
        if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
          unaff_x25 = (long *)((ulong)((int)plVar27 - 1) & (ulong)plVar19);
        }
        else {
          unaff_x25 = plVar19;
          if (plVar27 <= plVar19) {
            uVar25 = 0;
            if (plVar27 != (long *)0x0) {
              uVar25 = (ulong)plVar19 / (ulong)plVar27;
            }
            unaff_x25 = (long *)((long)plVar19 - uVar25 * (long)plVar27);
          }
        }
      }
      lVar15 = puVar9[4];
      plVar19 = *(long **)(lVar15 + (long)unaff_x25 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar30 = *plVar32;
        *plVar32 = (long)plVar30;
        *(long **)(lVar15 + (long)unaff_x25 * 8) = plVar32;
        if (*plVar30 != 0) {
          plVar19 = *(long **)(*plVar30 + 8);
          if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
            plVar19 = (long *)((ulong)plVar19 & (long)plVar27 - 1U);
          }
          else if (plVar27 <= plVar19) {
            uVar25 = 0;
            if (plVar27 != (long *)0x0) {
              uVar25 = (ulong)plVar19 / (ulong)plVar27;
            }
            plVar19 = (long *)((long)plVar19 - uVar25 * (long)plVar27);
          }
          *(long **)(lVar15 + (long)plVar19 * 8) = plVar30;
        }
      }
      else {
        *plVar30 = *plVar19;
        *plVar19 = (long)plVar30;
      }
      puVar9[0x1c] = 0;
      puVar9[7] = puVar9[7] + 1;
      FUN_1087cd88c(puVar9 + 0x1c);
LAB_1087c7628:
      plVar30[5] = lVar10;
      func_0x0001087ce7a4();
    }
  }
  FUN_10885f2fc(puVar9 + 0x2c,param_2[5],param_3 + 0x98);
  uVar25 = puVar9[0x2c];
  uVar18 = puVar9[0x2d];
  while( true ) {
    uVar6 = uVar18 <= uVar25;
    uVar7 = uVar25 == uVar18;
    if ((bool)uVar7) break;
    uVar28 = puVar9[5];
    if ((uVar28 != 0) && (puVar9[7] != 0)) {
      uVar20 = uVar25;
      FUN_108848654();
      uVar31 = uVar28 - 1;
      if ((uVar28 & uVar31) == 0) {
        uVar33 = uVar20 & uVar31;
      }
      else {
        uVar33 = uVar20;
        if (uVar28 <= uVar20) {
          uVar26 = 0;
          uVar13 = (uint)uVar28;
          if (uVar13 != 0) {
            uVar26 = (uint)uVar20 / uVar13;
          }
          uVar33 = (ulong)((uint)uVar20 - uVar26 * uVar13);
        }
      }
      plVar32 = *(long **)(puVar9[4] + uVar33 * 8);
      if (plVar32 != (long *)0x0) {
        do {
          while( true ) {
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) goto LAB_1087c7728;
            uVar16 = plVar32[1];
            if (uVar16 != uVar20) break;
            uVar16 = (ulong)(plVar32 + 2);
            func_0x000107c28078(uVar16,uVar25);
            if ((uVar16 & 1) != 0) {
              uVar28 = uVar25;
              func_0x000107c28da8();
              lVar10 = plVar32[5];
              FUN_1086cf28c();
              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(uVar25 + 0x158);
              lVar10 = plVar32[5];
              FUN_1086cf28c();
              *(char *)(lVar10 + 0x38) = (char)uVar28;
              goto LAB_1087c7728;
            }
          }
          if ((uVar28 & uVar31) == 0) {
            uVar16 = uVar16 & uVar31;
          }
          else if (uVar28 <= uVar16) {
            uVar3 = 0;
            if (uVar28 != 0) {
              uVar3 = uVar16 / uVar28;
            }
            uVar16 = uVar16 - uVar3 * uVar28;
          }
        } while (uVar16 == uVar33);
      }
    }
LAB_1087c7728:
    uVar25 = uVar25 + 0x1d0;
  }
  func_0x0001086aaf34(puVar9 + 0x2c);
  func_0x0001087be884(param_3 + 0xf8,puVar9 + 0x29);
  FUN_1087cd82c(puVar9 + 4);
  FUN_1086a9294(puVar9 + 0x29);
  FUN_1087c7cdc(plVar17);
  puVar9[0x1c] = *plVar17;
  do {
    func_0x0001087ce1c4();
  } while (extraout_w10 != 0);
  func_0x0001087ce564(puVar9[0x1c]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x32) = 0;
    func_0x0001087ce620();
    lVar10 = *param_2;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *param_2;
    }
    func_0x0001087ce954();
    plVar32 = extraout_x8_03;
    do {
      if (*plVar32 == 0) {
        func_0x0001087ce258();
        plVar32 = extraout_x8_05;
        uVar26 = extraout_w10_01;
        uVar25 = extraout_x11_01;
      }
      else {
        func_0x0001087ce548();
        plVar32 = extraout_x8_04;
        uVar26 = extraout_w10_00;
        uVar25 = extraout_x11_00;
      }
      if ((uVar25 & 1) != 0) {
        func_0x0001087ce2b8();
        if ((bool)uVar7) {
          func_0x0001087ce248();
          uVar1 = extraout_w8;
          if ((bool)uVar6) {
            uVar1 = extraout_w9;
          }
          func_0x0001087ce520();
          *(undefined1 *)param_2 = uVar1;
          func_0x0001087ce18c(0);
        }
        func_0x0001087ce3d0();
        *(long *)(extraout_x8_09 + 0x20) = lVar10;
        goto LAB_1087c7a18;
      }
    } while ((uVar26 >> 1 & 1) == 0);
  }
  FUN_1087c7fc0(puVar9 + 0x1c);
  func_0x0001087ce530();
  func_0x0001087ce2f8();
  func_0x0001087ce584();
  if (*(int *)(puVar9 + 0xb) != 0) {
    puVar24 = puVar9 + 4;
    FUN_1086ecda4();
    puVar9[0x31] = puVar24;
    param_2 = (long *)puVar9[0x2f];
    param_3 = (undefined1 *)puVar9[0x30];
    FUN_1087c801c(plVar17,param_2,param_3,puVar24);
    puVar9[0x1c] = *plVar17;
    do {
      func_0x0001087ce1c4();
    } while (extraout_w10_02 != 0);
    func_0x0001087ce564(puVar9[0x1c]);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x32) = 1;
      func_0x0001087ce620();
      lVar10 = *param_2;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *param_2;
      }
      func_0x0001087ce954();
      plVar17 = extraout_x8_06;
      do {
        if (*plVar17 == 0) {
          func_0x0001087ce258();
          plVar17 = extraout_x8_08;
          uVar26 = extraout_w10_04;
          uVar25 = extraout_x11_03;
        }
        else {
          func_0x0001087ce548();
          plVar17 = extraout_x8_07;
          uVar26 = extraout_w10_03;
          uVar25 = extraout_x11_02;
        }
        if ((uVar25 & 1) != 0) {
          func_0x0001087ce2b8();
          if ((bool)uVar7) {
            func_0x0001087ce248();
            uVar1 = extraout_w8_00;
            if ((bool)uVar6) {
              uVar1 = extraout_w9_00;
            }
            func_0x0001087ce1a4();
            *(undefined1 *)param_2 = uVar1;
            func_0x0001087ce18c(0);
          }
          func_0x0001087ce3d0();
          *(long *)(extraout_x8_10 + 0x20) = lVar10;
LAB_1087c7a18:
          func_0x0001087ce288();
          goto LAB_1087c7b5c;
        }
      } while ((uVar26 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar9 + 0x1c);
    lVar10 = puVar9[0x30];
    uVar2 = puVar9[0x31];
    uVar29 = puVar9[0x2f];
    func_0x0001087ce2f8();
    func_0x0001087ce584();
    FUN_1087c87c8(auStack_268,uVar29,lVar10 + 0x20,uVar2);
    FUN_1087a9768(auStack_290,alStack_258);
    param_3 = auStack_290;
    FUN_1087a9768(puVar9 + 0x15);
    *(undefined4 *)(puVar9 + 0x1a) = 1;
    *(undefined1 *)(puVar9 + 0x1b) = 1;
    func_0x0001087ce43c(auStack_230);
    func_0x0001087ce77c();
    func_0x0001087a3420(auStack_230);
    func_0x0001087a33a8(puVar9 + 0x14);
    func_0x0001087a3168(auStack_290);
    param_2 = alStack_258;
    goto LAB_1087c7b4c;
  }
  puVar11 = (uint *)(puVar9 + 4);
  func_0x0001086ecdc0();
  lVar10 = puVar9[0x2f];
  uVar26 = *puVar11;
  uVar18 = (ulong)uVar26;
  puVar9[0x26] = 0;
  func_0x000107c28258();
  puVar9[0x27] = puVar11;
  *(undefined1 *)(puVar9 + 0x28) = 1;
  uVar25 = uVar18;
  FUN_108770a30(uVar18,lVar10 + 0x90);
  uVar13 = (int)uVar25 - 1;
  lVar10 = puVar9[0x30];
  uVar7 = uVar13 == 2;
  if (uVar13 < 3) {
    lVar12 = *(long *)(lVar10 + 0xa0) - *(long *)(lVar10 + 0x98);
    uVar7 = 1;
    if (lVar12 == 0) goto LAB_1087c7a70;
    FUN_108862ee8(auStack_230,*(undefined8 *)(puVar9[0x2f] + 0x28),*(undefined8 *)(lVar10 + 0x658));
    FUN_10867b070(plVar17,auStack_230);
    uVar31 = lVar12 / 0x18;
    func_0x000107c28948(auStack_230);
    uVar20 = puVar9[0x24];
    for (uVar28 = puVar9[0x23]; uVar28 != uVar20; uVar28 = uVar28 + 0x1a8) {
      if (*(char *)(uVar28 + 0x28) == '\x01') {
        lVar12 = *(long *)(puVar9[0x30] + 0x98);
        func_0x000107c28da4(lVar12,*(undefined8 *)(lVar10 + 0xa0),uVar28);
        if (*(long *)(lVar10 + 0xa0) != lVar12) {
          FUN_1087cc638(puVar9[0x30] + 0x20,uVar28,uVar28);
        }
      }
    }
    uVar20 = *(ulong *)(puVar9[0x30] + 0x6e0);
    bVar8 = uVar31 <= uVar20;
    uVar7 = uVar20 == uVar31;
    if ((bool)uVar7) {
      bVar5 = false;
      func_0x0001087ce1e8();
      uVar13 = 1;
      if (bVar8 && !(bool)uVar7) {
        uVar13 = 2;
      }
      uVar28 = (ulong)uVar13;
    }
    else if ((uVar20 == 0) || (func_0x0001087ce1e8(), !bVar8 || (bool)uVar7)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
      uVar28 = 3;
    }
    func_0x00010867b9fc(plVar17);
    if (bVar5) goto LAB_1087c7a70;
    uVar13 = (int)uVar28 - 1;
    uVar7 = uVar13 == 2;
    if (uVar13 < 2) {
      func_0x0001087ce8d8();
      func_0x0001087cc8bc();
      uVar25 = 0;
    }
    else {
      uVar7 = (int)uVar28 == 3;
      if ((bool)uVar7) {
        func_0x0001087ce8d8();
        func_0x0001087ce7c0();
      }
    }
  }
  else {
LAB_1087c7a70:
    puVar24 = *(undefined8 **)(puVar9[0x2f] + 0x58);
    FUN_1087cd8cc(uVar18);
    auStack_230[0] = 0;
    uStack_22c = 0;
    func_0x0001087ce390(*puVar24);
    (*extraout_x8_11)();
  }
  func_0x000107c2825c(puVar9 + 0x26);
  func_0x0001087ce598(puVar9[0x30]);
  func_0x0001087ce150();
  *(int *)(puVar9 + 0x1c) = (int)uVar25;
  if ((int)uVar25 == 0) {
    *(undefined1 *)((long)puVar9 + 0xe4) = 0;
    *(undefined1 *)(puVar9 + 0x1d) = 0;
  }
  else {
    uVar7 = uVar26 == 0x10;
    if (uVar26 < 0x11) {
      uVar18 = *(ulong *)(&UNK_10df58358 + uVar18 * 8) | *(ulong *)(&UNK_10df582d0 + uVar18 * 8);
    }
    else {
      uVar18 = 0x100000015;
    }
    *(int *)((long)puVar9 + 0xe4) = (int)uVar18;
    *(char *)(puVar9 + 0x1d) = (char)(uVar18 >> 0x20);
  }
  *(undefined1 *)(puVar9 + 0x1e) = 0;
  *(undefined1 *)(puVar9 + 0x22) = 0;
  *(undefined1 *)(puVar9 + 0xc) = 0;
  *(undefined1 *)(puVar9 + 0x13) = 0;
  param_3 = (undefined1 *)0x15;
  FUN_1087a986c(auStack_230,0x15,uVar25,puVar9 + 0xc,*(undefined8 *)((long)puVar9 + 0xe4));
  func_0x0001087ce77c();
  func_0x0001087a3420(auStack_230);
  func_0x0001087a33a8(puVar9 + 0xc);
  param_2 = puVar9 + 0x1e;
LAB_1087c7b4c:
  func_0x0001087a3168(param_2);
  func_0x0001087ce330();
  while( true ) {
    func_0x0001087ce2d8();
    func_0x0001087ce300();
LAB_1087c7b5c:
    func_0x0001087ce1d4(uStack_70);
    if ((bool)uVar7) break;
    ___stack_chk_fail();
    if ((int)param_3 == 0) {
      do {
        __Unwind_Resume(param_2);
        func_0x000104bd46a0();
      } while ((int)param_3 == 0);
    }
    else {
      func_0x000107c28948(auStack_230);
    }
    func_0x0001087ce330();
    ___cxa_begin_catch();
    func_0x0001087ce410();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087c7cdc; end: 1087c7fbf;  */

void FUN_1087c7cdc(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  long lVar10;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0xe8;
  __Znwm();
  *puVar5 = FUN_1087cd8f4;
  puVar5[1] = FUN_1087cd9fc;
  puVar5[0x1a] = param_2;
  puVar5[0x1b] = param_3;
  FUN_10877c400(&lStack_50);
  puVar5[3] = uStack_48;
  puVar5[2] = lStack_50;
  lStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27fec(&lStack_50);
  lStack_50 = puVar5[2];
  if (lStack_50 != 0) {
    do {
      func_0x0001087ce1c4();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_50;
  lStack_50 = 0;
  plVar6 = &lStack_50;
  func_0x000107c27f9c();
  puVar5[0x13] = 0;
  func_0x000107c28258();
  puVar5[0x14] = plVar6;
  *(undefined1 *)(puVar5 + 0x15) = 1;
  uVar4 = (undefined1)*(undefined8 *)(param_2 + 0x28);
  lVar10 = param_3 + 0x20;
  FUN_10869a500();
  puVar1 = puVar5 + 0xc;
  puVar5[0x16] = lVar10;
  *(undefined1 *)(puVar5 + 0x17) = uVar4;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  FUN_1087bcd9c(puVar1,*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xdc),
                *(undefined4 *)(param_3 + 0xa10));
  plVar6 = *(long **)(param_2 + 0x48);
  uVar4 = *(char *)(param_3 + 0x638) == '\0';
  uVar3 = 1;
  lVar10 = 0x550;
  if ((bool)uVar4) {
    lVar10 = 0x480;
  }
  (**(code **)(*plVar6 + 0x68))
            (puVar5 + 0x19,plVar6,*(undefined8 *)(param_3 + 0x658),param_3 + 0xf8,
             param_3 + 0x20 + lVar10,0,param_3 + 0x328,puVar5 + 0x16,param_3 + 0x170,param_3 + 0x3e0
             ,puVar1);
  puVar5[0x18] = puVar5[0x19];
  do {
    func_0x0001087ce1c4();
  } while (extraout_w10_00 != 0);
  func_0x0001087ce564(puVar5[0x18]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x1c) = 0;
    func_0x0001087ce1b4();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x0001087ce954();
    plVar8 = extraout_x8;
    do {
      if (*plVar8 == 0) {
        func_0x0001087ce258();
        plVar8 = extraout_x8_01;
        uVar2 = extraout_w10_02;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x0001087ce548();
        plVar8 = extraout_x8_00;
        uVar2 = extraout_w10_01;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x0001087ce2b8();
        if ((bool)uVar4) {
          func_0x0001087ce248();
          uVar4 = extraout_w8;
          if ((bool)uVar3) {
            uVar4 = extraout_w9;
          }
          func_0x0001087ce520();
          *(undefined1 *)plVar6 = uVar4;
          func_0x0001087ce18c(0);
        }
        func_0x0001087ce3d0();
        *(long *)(extraout_x8_02 + 0x20) = lVar10;
        func_0x0001087ce288();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1087c7fc0(puVar5 + 0x18);
  func_0x0001087ce530();
  func_0x0001087ce630();
  func_0x0001087ce4bc();
  func_0x000107c2825c(puVar5 + 0x13);
  func_0x0001087ce598(puVar5[0x1b]);
  func_0x0001087ce150();
  lVar10 = puVar5[3];
  do {
    lStack_50 = 0;
    lVar7 = lVar10 + 0x10;
    func_0x0001087ce458(lVar7,&lStack_50);
    if ((int)lVar7 != 0) {
      func_0x00010877c4dc(lVar10 + 0x98);
      FUN_10877c50c(lVar10 + 0x98,puVar5 + 4);
      *(undefined1 *)(lVar10 + 0xd8) = 1;
      *(undefined8 *)(lVar10 + 0x10) = 2;
      func_0x000107c31508(lVar10,puVar5 + 3);
      break;
    }
  } while (((uint)lStack_50 >> 1 & 1) == 0);
  func_0x000107c27fa0(puVar5 + 3,0);
  func_0x0001087ce330();
  func_0x00010086ab34(puVar1);
  func_0x0001087ce7ac();
  func_0x0001087ce300();
  return;
}



/* Entry: 1087c7fc0; end: 1087c801b;  */

long FUN_1087c7fc0(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x0001087ce824(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087c800c);
  (*pcVar1)();
}



/* Entry: 1087c801c; end: 1087c87c7;  */

void FUN_1087c801c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 ******ppppppuVar13;
  ulong uVar14;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 *puVar15;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  undefined1 extraout_w9;
  long *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 ******ppppppuVar24;
  long lVar25;
  undefined8 *****pppppuStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined8 *****pppppuStack_290;
  undefined1 uStack_288;
  undefined8 *****pppppuStack_260;
  undefined1 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 *****pppppuStack_248;
  undefined8 *****pppppuStack_240;
  undefined8 *****pppppuStack_238;
  undefined8 *****pppppuStack_230;
  undefined8 *****pppppuStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined ***pppuStack_208;
  long lStack_e8;
  undefined8 uStack_70;
  
  func_0x0001087ce308();
  puVar11 = (undefined8 *)0xf8;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar11 = FUN_1087cda2c;
  puVar11[1] = FUN_1087cdb88;
  puVar11[0x1c] = param_2;
  puVar11[0x1d] = param_3;
  func_0x000107c27f94(puVar11 + 2);
  puVar12 = puVar11 + 2;
  func_0x000107c287c4(param_1);
  puVar11[0xe] = 0;
  func_0x000107c28258();
  puVar15 = puVar11 + 0x11;
  *puVar15 = 0;
  puVar11[0xf] = puVar12;
  *(undefined1 *)(puVar11 + 0x10) = 1;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  plVar20 = (long *)(param_4 + 0x10);
  func_0x0001087ce918(*plVar20);
  if (!(bool)in_ZR) {
    plVar20 = extraout_x9;
  }
  for (lVar25 = (long)*(int *)(param_4 + 0x18) << 3; lVar25 != 0; lVar25 = lVar25 + -8) {
    lVar21 = *plVar20;
    if (*(int *)(lVar21 + 0x68) == 0xe) {
      *(undefined1 *)(puVar11 + 4) = 0;
      *(undefined1 *)(puVar11 + 7) = 0;
      bVar4 = *(byte *)(lVar21 + 0x48);
      if (*(int *)(*(long *)(lVar21 + 0x60) + 0x30) == 3) {
        func_0x000107c29ee0(&pppppuStack_240,*(undefined8 *)(*(long *)(lVar21 + 0x60) + 0x28));
        func_0x0001087ce74c();
        func_0x0001087ce5fc();
        ppppppuVar24 = (undefined8 ******)0x0;
        if ((bVar4 & 1) == 0) goto LAB_1087c812c;
LAB_1087c818c:
        if (*(int *)(lVar21 + 0x68) == 0xe) {
          if (*(int *)(*(long *)(lVar21 + 0x60) + 0x30) == 3) goto LAB_1087c8238;
        }
        else {
          func_0x000107c29f60(&pppppuStack_240,*(undefined8 *)(param_2 + 0x28),puVar11 + 4,0);
          if (lStack_e8 == -2) {
            uVar22 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x18);
            func_0x000107c278b8(puVar11 + 0xb,&UNK_10f4bb6dd);
            func_0x000107c31420(&pppppuStack_2a0,uVar22,puVar11 + 0xb);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 0xb);
            lStack_e8 = -3;
            FUN_10885ff98(*(undefined8 *)(param_2 + 0x28),&pppppuStack_240);
            func_0x000107c31428(&pppppuStack_2a0);
            func_0x000107c31424(&pppppuStack_2a0);
          }
          lVar21 = (long)ppppppuVar24 - lStack_e8;
          func_0x000107c287e4(&pppppuStack_240);
          if (1 < lVar21) goto LAB_1087c8238;
        }
      }
      else {
        ppppppuVar24 = (undefined8 ******)0x0;
joined_r0x0001087c8188:
        if (bVar4 != 0) goto LAB_1087c818c;
LAB_1087c812c:
        if ((*(byte *)(lVar21 + 0x10) >> 1 & 1) == 0) {
          func_0x00010bd3f434(&pppppuStack_240,&UNK_10f4bb701,0x25,&UNK_10f4bb727);
          ppppppuVar24 = (undefined8 ******)pppppuStack_240;
          if (-1 < (long)pppppuStack_230) {
            ppppppuVar24 = &pppppuStack_240;
          }
          func_0x00010bd3f4e0(ppppppuVar24,"unknown",0x198);
          goto LAB_1087c869c;
        }
        if (*(int *)(*(long *)(lVar21 + 0x20) + 0x38) != 4) goto LAB_1087c8264;
LAB_1087c8238:
        if (*(char *)(puVar11 + 7) == '\x01') {
          func_0x000107c27994(&pppppuStack_240,puVar11 + 4);
          pppppuStack_228 = ppppppuVar24;
          func_0x0001086b1420(puVar15,&pppppuStack_240);
          func_0x0001087ce5fc();
        }
      }
LAB_1087c8264:
      func_0x0001087ce538();
    }
    else if (*(int *)(lVar21 + 0x68) == 0xc) {
      *(undefined1 *)(puVar11 + 4) = 0;
      *(undefined1 *)(puVar11 + 7) = 0;
      lVar17 = *(long *)(lVar21 + 0x60);
      if ((*(byte *)(lVar17 + 0x10) >> 6 & 1) == 0) {
        bVar4 = *(byte *)(lVar21 + 0x48);
        ppuVar2 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(lVar17 + 0x78) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar17 + 0x78);
        }
        func_0x000107c29ee0(&pppppuStack_240,ppuVar2);
        func_0x0001087ce74c();
        func_0x0001087ce5fc();
        ppppppuVar24 = *(undefined8 *******)(lVar17 + 0xb8);
        bVar4 = bVar4 & 1;
        goto joined_r0x0001087c8188;
      }
      goto LAB_1087c8264;
    }
    plVar20 = plVar20 + 1;
  }
  uVar10 = 1;
  if (puVar11[0x11] == puVar11[0x12]) {
LAB_1087c85cc:
    func_0x000107c2825c(puVar11 + 0xe);
    func_0x0001087ce5a4();
    func_0x0001087ce494();
    func_0x000107c287c8(puVar11 + 2);
    func_0x00010086ad3c(puVar15);
    func_0x0001087ce2d8();
    func_0x0001087ce300();
LAB_1087c85f4:
    func_0x0001087ce1d4(uStack_70);
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar12 = (undefined8 *)0x28;
    __Znwm();
    plVar20 = puVar12 + 1;
    *plVar20 = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110a71740;
    puVar23 = puVar12 + 3;
    *puVar23 = 0;
    pppppuStack_240 = (undefined8 *****)0x0;
    func_0x000107c27f9c(&pppppuStack_240);
    puVar12[4] = 0;
    pppppuStack_240 = (undefined8 *****)0x0;
    func_0x000107c27f98(&pppppuStack_240);
    ppppppuVar13 = (undefined8 ******)0xb8;
    __Znwm();
    ppppppuVar24 = ppppppuVar13;
    func_0x000107c31510();
    *ppppppuVar24 = (undefined8 *****)&PTR_DAT_110a71790;
    *(undefined1 *)(ppppppuVar24 + 0x13) = 0;
    *(undefined1 *)(ppppppuVar24 + 0x16) = 0;
    pppppuStack_240 = (undefined8 *****)0x0;
    pppppuStack_2a0 = (undefined8 *****)0x0;
    func_0x000107c27f98(&pppppuStack_2a0);
    func_0x000107c27f9c(&pppppuStack_240);
    pppppuStack_240 = (undefined8 *****)0x0;
    pppppuStack_238 = (undefined8 *****)0x0;
    pppppuStack_260 = (undefined8 *****)0x0;
    pppppuStack_248 = (undefined8 ******)0x0;
    pppppuStack_2a0 = ppppppuVar13;
    pppppuStack_298 = ppppppuVar13;
    func_0x000107c27f98(&pppppuStack_248);
    func_0x000107c27f9c(&pppppuStack_260);
    func_0x000107c27fec(&pppppuStack_240);
    func_0x000107c288b0(puVar23,&pppppuStack_2a0);
    func_0x000107c2887c(puVar12 + 4,&pppppuStack_298);
    func_0x000107c27f98(&pppppuStack_298);
    func_0x000107c27f9c(&pppppuStack_2a0);
    puVar11[0x14] = puVar23;
    puVar11[0x15] = puVar12;
    puVar11[0x16] = puVar23;
    puVar11[0x17] = puVar12;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(puVar11 + 4) = 0;
    *(undefined1 *)(puVar11 + 10) = 0;
    FUN_1087bcd9c(puVar11 + 4,*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc),
                  *(undefined4 *)(param_3 + 0xa10));
    plVar18 = *(long **)(param_2 + 0x38);
    pppppuStack_240 = (undefined8 *****)CONCAT44(pppppuStack_240._4_4_,0x12009e);
    pppppuStack_260 = &pppppuStack_238;
    pppppuStack_230 = (undefined8 ******)0x0;
    pppppuStack_228 = (undefined8 ******)0x0;
    pppppuStack_238 = (undefined8 ******)0x0;
    uVar19 = puVar11[0x11];
    uVar3 = puVar11[0x12];
    uStack_258 = 0;
    uVar9 = uVar19 <= uVar3;
    uVar10 = uVar3 - uVar19 == 0;
    if (!(bool)uVar10) {
      uVar14 = (long)(uVar3 - uVar19) >> 5;
      if (uVar14 >> 0x3b != 0) {
        FUN_1086b111c();
        goto LAB_1087c869c;
      }
      ppppppuVar24 = &pppppuStack_228;
      func_0x0001086b11f8();
      pppppuStack_228 = ppppppuVar24 + uVar14 * 4;
      pppppuStack_298 = &pppppuStack_250;
      pppppuStack_290 = &pppppuStack_248;
      uStack_288 = 0;
      pppppuStack_2a0 = &pppppuStack_228;
      pppppuStack_250 = ppppppuVar24;
      pppppuStack_238 = ppppppuVar24;
      pppppuStack_230 = ppppppuVar24;
      while( true ) {
        uVar9 = uVar3 <= uVar19;
        uVar10 = uVar19 == uVar3;
        pppppuStack_248 = ppppppuVar24;
        if ((bool)uVar10) break;
        FUN_1086e9298(ppppppuVar24,uVar19);
        uVar19 = uVar19 + 0x20;
        ppppppuVar24 = (undefined8 ******)(pppppuStack_248 + 4);
      }
      uStack_288 = 1;
      FUN_1086b1334(&pppppuStack_2a0);
      pppppuStack_230 = ppppppuVar24;
    }
    uStack_258 = 1;
    FUN_1087cc920(&pppppuStack_260);
    pppuStack_208 = &ppuStack_220;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppuStack_220 = &PTR_SUB_110a717d0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puStack_218 = puVar23;
    puStack_210 = puVar12;
    (**(code **)(*plVar18 + 0x38))(plVar18,&pppppuStack_240,puVar11 + 4);
    func_0x00010086aba8(&pppppuStack_240);
    plVar20 = puVar11 + 0x18;
    FUN_1087cd614();
    puVar11[0x1b] = *puVar23;
    do {
      func_0x0001087ce1c4();
    } while (extraout_w10 != 0);
    puVar11[0x1a] = puVar11[0x1b];
    do {
      func_0x0001087ce1c4();
    } while (extraout_w10_00 != 0);
    func_0x0001087ce564(puVar11[0x1a]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x1e) = 0;
      func_0x0001087ce1b4();
      lVar25 = *plVar20;
      if (lVar25 == 0) {
        func_0x000107c3a5c0();
        lVar25 = *plVar20;
      }
      func_0x0001087ce954();
      plVar18 = extraout_x8_00;
      do {
        if (*plVar18 == 0) {
          func_0x0001087ce258();
          plVar18 = extraout_x8_02;
          uVar7 = extraout_w10_02;
          uVar16 = extraout_w11_00;
        }
        else {
          func_0x0001087ce548();
          plVar18 = extraout_x8_01;
          uVar7 = extraout_w10_01;
          uVar16 = extraout_w11;
        }
        if ((uVar16 & 1) != 0) {
          func_0x0001087ce2b8();
          if ((bool)uVar10) {
            func_0x0001087ce248();
            uVar1 = extraout_w8;
            if ((bool)uVar9) {
              uVar1 = extraout_w9;
            }
            func_0x0001087ce1a4();
            *(undefined1 *)plVar20 = uVar1;
            func_0x0001087ce18c(0);
          }
          func_0x0001087ce3d0();
          *(long *)(extraout_x8_03 + 0x20) = lVar25;
          func_0x0001087ce288();
          goto LAB_1087c85f4;
        }
      } while ((uVar7 >> 1 & 1) == 0);
    }
    if (((uint)*(undefined8 *)(puVar11[0x1a] + 0x10) >> 5 & 1) == 0) {
      func_0x00010086a70c(puVar11 + 0xb,puVar11[0x1a] + 0x98);
      func_0x000107c27f9c(puVar11 + 0x1a);
      func_0x0001087ce860();
      func_0x00010086aa78(puVar11 + 0xb);
      func_0x0001087ce744();
      func_0x0001087ce858();
      func_0x0001087ce81c();
      goto LAB_1087c85cc;
    }
  }
  func_0x0001087ce824(&pppppuStack_240);
  __ZSt17rethrow_exceptionSt13exception_ptr(&pppppuStack_240);
LAB_1087c869c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1087c86a0);
  (*pcVar8)();
}



/* Entry: 1087c87c8; end: 1087cc3ef;  */

/* WARNING: Removing unreachable block (ram,0x0001087ca324) */

void FUN_1087c87c8(uint *param_1,long param_2,undefined ******param_3,undefined ******param_4)

{
  undefined ******ppppppuVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined ******ppppppuVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined ****ppppuVar14;
  undefined8 uVar15;
  undefined ****ppppuVar16;
  undefined4 *puVar17;
  undefined ******ppppppuVar18;
  byte bVar19;
  int extraout_w8;
  undefined4 uVar20;
  undefined8 extraout_x8;
  undefined ******extraout_x8_00;
  undefined ******ppppppuVar21;
  undefined ******extraout_x8_01;
  undefined ******extraout_x8_02;
  uint *puVar22;
  long extraout_x8_03;
  undefined ******extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined4 *extraout_x8_09;
  long extraout_x8_10;
  undefined ****ppppuVar23;
  undefined1 *extraout_x8_11;
  undefined ******extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  undefined1 *extraout_x8_15;
  undefined ****extraout_x8_16;
  long extraout_x8_17;
  ulong uVar24;
  undefined ******extraout_x8_18;
  undefined *****extraout_x8_19;
  code *extraout_x8_20;
  undefined8 extraout_x8_21;
  code *extraout_x8_22;
  long extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  undefined *****extraout_x8_26;
  long extraout_x8_27;
  code *extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  code *extraout_x8_33;
  code *extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  undefined ******ppppppuVar25;
  undefined8 extraout_x8_39;
  undefined ******extraout_x8_40;
  undefined *****extraout_x8_41;
  code *extraout_x8_42;
  long extraout_x8_43;
  code *extraout_x8_44;
  undefined ******extraout_x8_45;
  undefined1 extraout_w9;
  long extraout_x9;
  undefined ******extraout_x9_00;
  byte *extraout_x9_01;
  undefined ******ppppppuVar26;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  ulong uVar27;
  undefined ******extraout_x9_11;
  long extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  long extraout_x9_15;
  undefined8 extraout_x9_16;
  undefined ******extraout_x9_17;
  long extraout_x9_18;
  undefined ******ppppppuVar28;
  undefined ******extraout_x10;
  undefined ******ppppppuVar29;
  undefined ******extraout_x11;
  undefined ******ppppppuVar30;
  undefined ******ppppppuVar31;
  uint uVar32;
  undefined *****pppppuVar33;
  undefined ******ppppppuVar34;
  long *plVar35;
  undefined ******ppppppuVar36;
  undefined **ppuVar37;
  undefined *****pppppuVar38;
  undefined ******ppppppuVar39;
  undefined *****pppppuVar40;
  long lVar41;
  undefined *****pppppuVar42;
  undefined ******ppppppuVar43;
  byte *pbVar44;
  long lVar45;
  undefined ******unaff_x26;
  undefined ******ppppppuVar46;
  undefined ******ppppppuVar47;
  undefined ******unaff_x28;
  undefined *****pppppuStack_1930;
  undefined ****ppppuStack_1880;
  undefined ****ppppuStack_1878;
  uint *puStack_1870;
  long lStack_1868;
  undefined *****pppppuStack_1860;
  undefined1 auStack_1858 [40];
  undefined1 auStack_1830 [24];
  undefined1 auStack_1818 [24];
  undefined1 auStack_1800 [24];
  undefined1 auStack_17e8 [40];
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined *****pppppuStack_17b0;
  undefined *****pppppuStack_17a8;
  ulong uStack_17a0;
  undefined ****appppuStack_1778 [315];
  undefined **ppuStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined1 auStack_d80 [24];
  byte bStack_d68;
  undefined *****pppppuStack_d60;
  undefined ****ppppuStack_d58;
  undefined8 uStack_d50;
  char cStack_d48;
  undefined ****ppppuStack_d40;
  undefined8 uStack_d38;
  ulong uStack_d30;
  undefined *puStack_d28;
  undefined8 uStack_d20;
  byte bStack_d18;
  int iStack_d10;
  undefined1 auStack_d08 [24];
  byte bStack_cf0;
  undefined1 uStack_ce8;
  undefined **ppuStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined *puStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined ****appppuStack_cb0 [11];
  byte bStack_c58;
  undefined *****pppppuStack_c50;
  undefined *****pppppuStack_c48;
  undefined *****pppppuStack_c40;
  undefined1 uStack_c38;
  undefined1 auStack_c30 [16];
  uint uStack_c20;
  undefined8 uStack_c18;
  int iStack_c10;
  int iStack_bf8;
  undefined1 auStack_be8 [24];
  undefined1 auStack_bd0 [8];
  int iStack_bc8;
  undefined8 uStack_bb8;
  undefined **ppuStack_bb0;
  undefined8 uStack_ba8;
  undefined **ppuStack_b90;
  undefined8 uStack_b88;
  long lStack_b78;
  undefined *****pppppuStack_b70;
  undefined4 uStack_b68;
  undefined ****appppuStack_b60 [3];
  byte bStack_b48;
  char cStack_b40;
  uint uStack_b38;
  uint uStack_b34;
  byte bStack_b30;
  undefined1 auStack_b28 [32];
  char cStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  long lStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  long lStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  undefined *****pppppuStack_a58;
  undefined ****ppppuStack_a50;
  undefined4 *puStack_a48;
  undefined *****pppppuStack_a40;
  undefined *****pppppuStack_a38;
  undefined *****pppppuStack_a30;
  undefined4 *puStack_a28;
  float fStack_a20;
  char cStack_a18;
  undefined1 auStack_a10 [24];
  undefined8 uStack_9f8;
  undefined *****pppppuStack_9f0;
  undefined1 uStack_9e8;
  undefined *****pppppuStack_9e0;
  undefined *****pppppuStack_9d8;
  undefined *****pppppuStack_9d0;
  undefined8 uStack_9c8;
  undefined4 uStack_9b8;
  undefined1 uStack_9a0;
  byte bStack_998;
  undefined *****pppppuStack_980;
  undefined *****pppppuStack_960;
  undefined *****pppppuStack_958;
  undefined *****pppppuStack_950;
  undefined8 uStack_948;
  undefined *****pppppuStack_940;
  long lStack_938;
  undefined8 uStack_930;
  ulong uStack_928;
  undefined1 uStack_920;
  ulong uStack_918;
  undefined1 auStack_910 [16];
  undefined *****pppppuStack_900;
  undefined4 uStack_8f8;
  undefined1 auStack_898 [24];
  undefined ****ppppuStack_880;
  undefined8 uStack_878;
  undefined1 auStack_870 [32];
  undefined1 uStack_850;
  undefined1 uStack_84c;
  undefined ****ppppuStack_848;
  byte bStack_840;
  undefined1 uStack_830;
  undefined1 uStack_828;
  undefined1 uStack_820;
  undefined1 uStack_81c;
  undefined1 uStack_818;
  undefined1 uStack_810;
  undefined1 uStack_7f8;
  undefined1 uStack_7f0;
  undefined1 uStack_7ec;
  undefined1 uStack_7e8;
  undefined1 uStack_7e4;
  undefined1 uStack_7e0;
  undefined1 uStack_7d8;
  undefined1 uStack_7c0;
  undefined *****apppppuStack_7b0 [5];
  undefined1 auStack_788 [24];
  undefined *****pppppuStack_770;
  undefined *****pppppuStack_768;
  undefined *****pppppuStack_760;
  undefined *****pppppuStack_730;
  undefined *****pppppuStack_728;
  undefined *****pppppuStack_720;
  undefined *****pppppuStack_718;
  undefined *****pppppuStack_710;
  byte bStack_708;
  undefined1 uStack_700;
  char cStack_6e8;
  undefined *****pppppuStack_680;
  undefined4 uStack_678;
  undefined *puStack_650;
  undefined *****pppppuStack_618;
  undefined ****ppppuStack_610;
  undefined4 uStack_608;
  byte bStack_604;
  byte bStack_588;
  undefined *****pppppuStack_580;
  undefined *****pppppuStack_578;
  undefined *****pppppuStack_570;
  undefined4 *puStack_568;
  float afStack_560 [4];
  undefined1 uStack_550;
  undefined *****pppppuStack_548;
  undefined *****apppppuStack_540 [2];
  byte bStack_530;
  byte bStack_4f8;
  undefined *****pppppuStack_4f0;
  undefined *****pppppuStack_4e8;
  undefined *****pppppuStack_4e0;
  undefined **ppuStack_4a0;
  int iStack_464;
  long lStack_428;
  byte bStack_400;
  byte bStack_3b0;
  undefined *****pppppuStack_3a0;
  undefined *****pppppuStack_398;
  char cStack_390;
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  int iStack_368;
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [24];
  undefined *****pppppuStack_320;
  undefined *****pppppuStack_318;
  undefined *****pppppuStack_310;
  undefined *****pppppuStack_300;
  undefined *****pppppuStack_2f8;
  byte bStack_2f0;
  uint uStack_2e8;
  ulong uStack_2e0;
  char cStack_2d8;
  undefined1 auStack_2d0 [32];
  char cStack_2b0;
  undefined ****ppppuStack_2a8;
  undefined *****pppppuStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_28c;
  undefined1 uStack_288;
  undefined1 uStack_284;
  undefined *****pppppuStack_280;
  undefined *****pppppuStack_278;
  undefined *****pppppuStack_270;
  undefined8 uStack_268;
  undefined *****pppppuStack_260;
  ulong uStack_258;
  undefined1 uStack_240;
  uint uStack_238;
  undefined1 auStack_230 [8];
  byte bStack_228;
  undefined *****pppppuStack_1d0;
  undefined1 auStack_1b8 [24];
  undefined ****ppppuStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [32];
  undefined1 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_154;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_e0;
  byte bStack_d8;
  undefined8 uStack_b8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppppuVar18 = param_3;
  puStack_1870 = param_1;
  func_0x0001087ce308();
  lStack_1868 = param_2;
  pppppuStack_1860 = (undefined *****)ppppppuVar18;
  uStack_b8 = extraout_x8;
  if (ppppppuVar18[0x12] != ppppppuVar18[0x13]) {
    ppppppuVar21 = (undefined ******)(param_2 + 0x118);
    func_0x000107c289e8();
    if (((ulong)*ppppppuVar21 & 1) != 0) {
      pppppuVar40 = param_3[0x62];
      ppppuStack_1880 = (undefined ****)pppppuVar40;
      for (pppppuVar33 = param_3[0x61]; pppppuVar33 != pppppuVar40; pppppuVar33 = pppppuVar33 + 3) {
        pppppuStack_278 = (undefined *****)0x0;
        uStack_268 = (undefined ******)0x0;
        pppppuStack_280 = (undefined *****)&PTR_DAT_110a93b98;
        func_0x0001087ce200();
        func_0x000107c3034c();
        uVar9 = 0;
        if (uStack_268._4_4_ == 0xf) {
          uVar9 = (uint)ppppppuVar21;
        }
        if ((uVar9 & 1) != 0) {
          puStack_568 = (undefined4 *)0x0;
          pppppuStack_570 = (undefined *****)0x0;
          afStack_560[0] = 1.0;
          pppppuVar40 = (undefined *****)pppppuStack_270[2];
          pppppuStack_578 = (undefined *****)0x0;
          pppppuStack_580 = (undefined *****)0x0;
          ppppppuVar43 = (undefined ******)(pppppuStack_270 + 2);
          if (((ulong)pppppuVar40 & 1) != 0) {
            ppppppuVar43 = (undefined ******)((long)pppppuVar40 + 7);
          }
          ppppppuVar1 = ppppppuVar43 + *(int *)(pppppuStack_270 + 3);
          ppppuStack_1878 = (undefined ****)pppppuVar33;
          while( true ) {
            pppppuVar40 = pppppuStack_578;
            pppppuVar33 = pppppuStack_580;
            uVar7 = (long)ppppppuVar43 - (long)ppppppuVar1 < 0;
            bVar8 = ppppppuVar43 == ppppppuVar1;
            if (bVar8) break;
            pppppuVar33 = *ppppppuVar43;
            func_0x0001087ce350(pppppuVar33[3]);
            ppppppuVar26 = (undefined ******)(extraout_x9 + 0xb58);
            if (!bVar8) {
              ppppppuVar26 = extraout_x8_00;
            }
            func_0x0001087ce514();
            func_0x000107c29ee0();
            uVar9 = *(uint *)(pppppuVar33 + 4);
            unaff_x28 = (undefined ******)(ulong)uVar9;
            func_0x0001087ce230();
            FUN_108848654();
            ppppppuVar36 = (undefined ******)pppppuStack_578;
            if ((undefined ******)pppppuStack_578 != (undefined ******)0x0) {
              pbVar44 = (byte *)((long)pppppuStack_578 + -1);
              uVar32 = (uint)pppppuStack_578;
              if (((ulong)pppppuStack_578 & (ulong)pbVar44) == 0) {
                unaff_x26 = (undefined ******)((ulong)(uVar32 - 1) & (ulong)ppppppuVar26);
                uVar7 = false;
              }
              else {
                uVar7 = (long)ppppppuVar26 - (long)pppppuStack_578 < 0;
                unaff_x26 = ppppppuVar26;
                if (pppppuStack_578 <= ppppppuVar26) {
                  uVar3 = 0;
                  if (uVar32 != 0) {
                    uVar3 = (uint)ppppppuVar26 / uVar32;
                  }
                  unaff_x26 = (undefined ******)(ulong)((uint)ppppppuVar26 - uVar3 * uVar32);
                }
              }
              pppppuVar33 = (undefined *****)pppppuStack_580[(long)unaff_x26];
              if (pppppuVar33 != (undefined *****)0x0) {
                do {
                  while( true ) {
                    pppppuVar33 = (undefined *****)*pppppuVar33;
                    if (pppppuVar33 == (undefined *****)0x0) goto LAB_1087c89ac;
                    ppppppuVar21 = (undefined ******)pppppuVar33[1];
                    uVar7 = (long)ppppppuVar21 - (long)ppppppuVar26 < 0;
                    if (ppppppuVar21 != ppppppuVar26) break;
                    ppppppuVar21 = (undefined ******)(pppppuVar33 + 2);
                    func_0x0001087ce4f0();
                    func_0x000107c28078();
                    if (((ulong)ppppppuVar21 & 1) != 0) goto LAB_1087c8c28;
                  }
                  if (((ulong)ppppppuVar36 & (ulong)pbVar44) == 0) {
                    ppppppuVar21 = (undefined ******)((ulong)ppppppuVar21 & (ulong)pbVar44);
                  }
                  else if (ppppppuVar36 <= ppppppuVar21) {
                    uVar12 = 0;
                    if (ppppppuVar36 != (undefined ******)0x0) {
                      uVar12 = (ulong)ppppppuVar21 / (ulong)ppppppuVar36;
                    }
                    ppppppuVar21 = (undefined ******)
                                   ((long)ppppppuVar21 - uVar12 * (long)ppppppuVar36);
                  }
                  uVar7 = (long)ppppppuVar21 - (long)unaff_x26 < 0;
                } while (ppppppuVar21 == unaff_x26);
              }
            }
LAB_1087c89ac:
            ppppppuVar11 = (undefined ******)0x30;
            __Znwm();
            pppppuStack_720 = (undefined *****)0x1;
            *ppppppuVar11 = (undefined *****)0x0;
            ppppppuVar11[1] = (undefined *****)ppppppuVar26;
            ppppppuVar11[3] = pppppuStack_958;
            ppppppuVar11[2] = pppppuStack_960;
            ppppppuVar21 = ppppppuVar11;
            pppppuStack_730 = (undefined *****)ppppppuVar11;
            pppppuStack_728 = (undefined *****)&pppppuStack_570;
            func_0x0001087ce6b4();
            *(uint *)(ppppppuVar21 + 5) = uVar9;
            func_0x0001087ce5cc(puStack_568);
            if ((ppppppuVar36 == (undefined ******)0x0) || (func_0x0001087ce5c0(), (bool)uVar7)) {
              func_0x0001087ce8ac();
              bVar6 = (undefined ******)0x2 < ppppppuVar36;
              bVar8 = ppppppuVar36 == (undefined ******)0x3;
              func_0x0001087ce16c();
              ppppppuVar46 = extraout_x8_01;
              if (!bVar6 || bVar8) {
                ppppppuVar46 = extraout_x9_00;
              }
              if ((byte *)((long)ppppppuVar46 + -1) == (byte *)0x0) {
                ppppppuVar46 = (undefined ******)0x2;
              }
              else if (((ulong)ppppppuVar46 & (ulong)((long)ppppppuVar46 + -1)) != 0) {
                __ZNSt3__112__next_primeEm();
                ppppppuVar21 = ppppppuVar46;
              }
              pppppuVar33 = pppppuStack_578;
              ppppppuVar36 = ppppppuVar46;
              if (pppppuStack_578 < ppppppuVar46) {
LAB_1087c8a3c:
                if ((ulong)ppppppuVar36 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                  goto LAB_1087cbf24;
                }
                ppppppuVar21 = (undefined ******)0x0;
                __Znwm();
                func_0x0001087ce20c();
                FUN_1087cd510();
                for (ppppppuVar46 = (undefined ******)0x0; ppppppuVar36 != ppppppuVar46;
                    ppppppuVar46 = (undefined ******)((long)ppppppuVar46 + 1)) {
                  pppppuStack_580[(long)ppppppuVar46] = (undefined ****)0x0;
                }
                pppppuStack_578 = (undefined *****)ppppppuVar36;
                if ((undefined ******)pppppuStack_570 != (undefined ******)0x0) {
                  ppppppuVar46 = (undefined ******)pppppuStack_570[1];
                  pbVar44 = (byte *)((long)ppppppuVar36 + -1);
                  uVar12 = 0;
                  if (ppppppuVar36 != (undefined ******)0x0) {
                    uVar12 = (ulong)ppppppuVar46 / (ulong)ppppppuVar36;
                  }
                  ppppppuVar29 = ppppppuVar46;
                  if (ppppppuVar36 <= ppppppuVar46) {
                    ppppppuVar29 = (undefined ******)
                                   ((long)ppppppuVar46 - uVar12 * (long)ppppppuVar36);
                  }
                  if (((ulong)ppppppuVar36 & (ulong)pbVar44) == 0) {
                    ppppppuVar29 = (undefined ******)((ulong)ppppppuVar46 & (ulong)pbVar44);
                  }
                  pppppuStack_580[(long)ppppppuVar29] = (undefined ****)&pppppuStack_570;
                  ppppppuVar46 = (undefined ******)pppppuStack_580;
                  ppppppuVar30 = (undefined ******)pppppuStack_570;
                  while (ppppppuVar28 = ppppppuVar30, ppppppuVar30 = (undefined ******)*ppppppuVar28
                        , ppppppuVar30 != (undefined ******)0x0) {
                    ppppppuVar31 = (undefined ******)ppppppuVar30[1];
                    if (((ulong)ppppppuVar36 & (ulong)pbVar44) == 0) {
                      ppppppuVar31 = (undefined ******)((ulong)ppppppuVar31 & (ulong)pbVar44);
                    }
                    else if (ppppppuVar36 <= ppppppuVar31) {
                      uVar12 = 0;
                      if (ppppppuVar36 != (undefined ******)0x0) {
                        uVar12 = (ulong)ppppppuVar31 / (ulong)ppppppuVar36;
                      }
                      ppppppuVar31 = (undefined ******)
                                     ((long)ppppppuVar31 - uVar12 * (long)ppppppuVar36);
                    }
                    if (ppppppuVar31 != ppppppuVar29) {
                      if (ppppppuVar46[(long)ppppppuVar31] == (undefined *****)0x0) {
                        ppppppuVar46[(long)ppppppuVar31] = (undefined *****)ppppppuVar28;
                        ppppppuVar29 = ppppppuVar31;
                      }
                      else {
                        func_0x0001087ce4d0();
                        ppppppuVar46 = extraout_x8_02;
                        pbVar44 = extraout_x9_01;
                        ppppppuVar30 = extraout_x10;
                        ppppppuVar29 = extraout_x11;
                      }
                    }
                  }
                }
              }
              else {
                ppppppuVar36 = (undefined ******)pppppuStack_578;
                if (ppppppuVar46 < pppppuStack_578) {
                  ppppppuVar21 = (undefined ******)(long)((float)puStack_568 / afStack_560[0]);
                  if ((pppppuStack_578 < (undefined ******)0x3) ||
                     (((ulong)pppppuStack_578 & (ulong)((long)pppppuStack_578 + -1)) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((undefined ******)0x1 < ppppppuVar21) {
                    ppppppuVar21 = (undefined ******)
                                   (1L << (-LZCOUNT((byte *)((long)ppppppuVar21 + -1)) & 0x3fU));
                  }
                  if (ppppppuVar46 <= ppppppuVar21) {
                    ppppppuVar46 = ppppppuVar21;
                  }
                  ppppppuVar36 = (undefined ******)pppppuStack_578;
                  if (ppppppuVar46 < pppppuVar33) {
                    ppppppuVar36 = ppppppuVar46;
                    if (ppppppuVar46 != (undefined ******)0x0) goto LAB_1087c8a3c;
                    func_0x0001087ce20c();
                    FUN_1087cd510();
                    pppppuStack_578 = (undefined *****)0x0;
                    ppppppuVar36 = (undefined ******)0x0;
                  }
                }
              }
              if (((ulong)ppppppuVar36 & (ulong)((long)ppppppuVar36 + -1)) == 0) {
                unaff_x26 = (undefined ******)((ulong)((int)ppppppuVar36 - 1) & (ulong)ppppppuVar26)
                ;
              }
              else {
                unaff_x26 = ppppppuVar26;
                if (ppppppuVar36 <= ppppppuVar26) {
                  uVar12 = 0;
                  if (ppppppuVar36 != (undefined ******)0x0) {
                    uVar12 = (ulong)ppppppuVar26 / (ulong)ppppppuVar36;
                  }
                  unaff_x26 = (undefined ******)((long)ppppppuVar26 - uVar12 * (long)ppppppuVar36);
                }
              }
            }
            pppppuVar33 = (undefined *****)pppppuStack_580[(long)unaff_x26];
            if (pppppuVar33 == (undefined *****)0x0) {
              *ppppppuVar11 = pppppuStack_570;
              pppppuStack_580[(long)unaff_x26] = (undefined ****)&pppppuStack_570;
              pppppuStack_570 = (undefined *****)ppppppuVar11;
              if (*ppppppuVar11 != (undefined *****)0x0) {
                ppppppuVar26 = (undefined ******)(*ppppppuVar11)[1];
                if (((ulong)ppppppuVar36 & (ulong)((long)ppppppuVar36 + -1)) == 0) {
                  ppppppuVar26 = (undefined ******)
                                 ((ulong)ppppppuVar26 & (ulong)((long)ppppppuVar36 + -1));
                }
                else if (ppppppuVar36 <= ppppppuVar26) {
                  uVar12 = 0;
                  if (ppppppuVar36 != (undefined ******)0x0) {
                    uVar12 = (ulong)ppppppuVar26 / (ulong)ppppppuVar36;
                  }
                  ppppppuVar26 = (undefined ******)
                                 ((long)ppppppuVar26 - uVar12 * (long)ppppppuVar36);
                }
                pppppuStack_580[(long)ppppppuVar26] = (undefined ****)ppppppuVar11;
              }
            }
            else {
              *ppppppuVar11 = (undefined *****)*pppppuVar33;
              *pppppuVar33 = (undefined ****)ppppppuVar11;
            }
            pppppuStack_730 = (undefined *****)0x0;
            puStack_568 = (undefined4 *)((long)puStack_568 + 1);
            func_0x0001087ce224();
            FUN_1087cd528();
LAB_1087c8c28:
            func_0x0001087ce180();
            ppppppuVar43 = ppppppuVar43 + 1;
            param_3 = (undefined ******)pppppuStack_1860;
          }
          if (puStack_568 != (undefined4 *)0x0) {
            pppppuStack_578 = (undefined *****)0x0;
            pppppuStack_580 = (undefined *****)0x0;
            pppppuStack_a40 = pppppuVar33;
            pppppuStack_a38 = pppppuVar40;
            pppppuStack_a30 = pppppuStack_570;
            puStack_a28 = puStack_568;
            fStack_a20 = afStack_560[0];
            ppppppuVar21 = (undefined ******)pppppuStack_570[1];
            if (((ulong)pppppuVar40 & (ulong)((long)pppppuVar40 + -1)) == 0) {
              ppppppuVar21 = (undefined ******)
                             ((ulong)ppppppuVar21 & (ulong)((long)pppppuVar40 + -1));
            }
            else if (pppppuVar40 <= ppppppuVar21) {
              uVar12 = 0;
              if ((undefined ******)pppppuVar40 != (undefined ******)0x0) {
                uVar12 = (ulong)ppppppuVar21 / (ulong)pppppuVar40;
              }
              ppppppuVar21 = (undefined ******)((long)ppppppuVar21 - uVar12 * (long)pppppuVar40);
            }
            pppppuVar33[(long)ppppppuVar21] = (undefined ****)&pppppuStack_a30;
            pppppuStack_570 = (undefined *****)0x0;
            puStack_568 = (undefined4 *)0x0;
            cStack_a18 = '\x01';
            func_0x0001087ce20c();
            FUN_1087cd4c8();
            func_0x0001087ce200();
            FUN_108912edc();
            if (cStack_a18 == '\x01') {
              plVar35 = *(long **)(lStack_1868 + 0x60);
              pppppuStack_270 = (undefined *****)0x0;
              uStack_268 = (undefined ******)0x0;
              func_0x0001087ce638();
              pppppuStack_278 = (undefined *****)0x0;
              pppppuStack_260 = (undefined *****)CONCAT44(pppppuStack_260._4_4_,0x2a9);
              pppppuStack_280 = (undefined *****)extraout_x8_45;
              func_0x0001087ce224();
              func_0x000107c278b8();
              puVar17 = puStack_a28;
              func_0x0001087ce514(puStack_a28);
              __ZNSt3__19to_stringEm();
              func_0x0001087ce200();
              func_0x0001087ce318();
              func_0x0001087ce6cc();
              func_0x000107c28820();
              func_0x000107c278b8(auStack_c30,&UNK_10f4bb7ad);
              __ZNSt3__19to_stringEi(&ppuStack_ce0,*(undefined4 *)(param_3 + 0x97));
              func_0x000107c28820(puVar17,auStack_c30,&ppuStack_ce0);
              func_0x0001087ce20c();
              func_0x000107c2884c();
              func_0x0001087ce2cc(*(undefined8 *)(*plVar35 + 0x50));
              func_0x0001087ce7cc();
              func_0x0001087ce20c();
              func_0x000107c2882c();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_ce0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c30);
              func_0x0001087ce230();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x0001087ce224();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              func_0x0001087ce200();
              func_0x000107c2882c();
            }
            goto LAB_1087c8c78;
          }
          func_0x0001087ce20c();
          FUN_1087cd4c8();
          pppppuVar33 = (undefined *****)ppppuStack_1878;
          pppppuVar40 = (undefined *****)ppppuStack_1880;
        }
        func_0x0001087ce200();
        FUN_108912edc();
      }
      pppppuStack_a40 = (undefined *****)((ulong)pppppuStack_a40 & 0xffffffffffffff00);
      cStack_a18 = '\0';
      goto LAB_1087c8c78;
    }
  }
  pppppuStack_a40 = (undefined *****)((ulong)pppppuStack_a40 & 0xffffffffffffff00);
  cStack_a18 = '\0';
LAB_1087c8c78:
  ppppuStack_1878 = (undefined ****)(puStack_1870 + 1);
  *(undefined1 *)ppppuStack_1878 = 0;
  *(undefined1 *)(puStack_1870 + 2) = 0;
  puVar22 = puStack_1870 + 4;
  *(undefined1 *)puVar22 = 0;
  *(undefined1 *)(puStack_1870 + 0xc) = 0;
  uVar9 = 0;
  if (*(int *)(param_4 + 3) != (int)(((long)param_3[0x1c] - (long)param_3[0x1b]) / 0x30)) {
    uVar9 = 3;
  }
  *puStack_1870 = uVar9;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  lStack_a88 = 0;
  uStack_a90 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa8 = 0;
  uStack_a80 = 0;
  uStack_a78 = 0;
  uStack_ac8 = 0;
  uStack_ad0 = 0;
  uStack_ac0 = 0;
  lStack_a70 = 0;
  uStack_a68 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad8 = 0;
  ppppppuVar21 = ppppppuVar18 + 0xdb;
  uStack_a60 = 0;
  pppppuStack_a58 = (undefined *****)0x0;
  ppppuStack_a50 = (undefined ****)0x0;
  puStack_a48 = (undefined4 *)0x0;
  uStack_af8 = 0;
  uStack_b00 = 0;
  uStack_af0 = 0;
  func_0x000104bee7a0(&uStack_b00);
  func_0x000104bee7dc(&uStack_ae8);
  func_0x000104bee864(&uStack_ad0);
  func_0x000107c27a04(&uStack_ab8);
  pppppuVar33 = param_4[2];
  ppppppuVar43 = param_4 + 2;
  if (((ulong)pppppuVar33 & 1) != 0) {
    ppppppuVar43 = (undefined ******)((long)pppppuVar33 + 7);
  }
  ppppppuVar28 = ppppppuVar43 + *(int *)(param_4 + 3);
  ppppuStack_1880 = (undefined ****)((ulong)&uStack_b38 | 4);
  func_0x0001087ce470();
  func_0x0001087ce514();
  ppppppuVar1 = param_3 + 0xe2;
  ppppppuVar26 = param_3 + 0xdf;
  ppppppuVar36 = param_3 + 0x96;
  ppppppuVar11 = param_3 + 0xdc;
  pppppuStack_1930 = (undefined *****)0x2000000007;
  func_0x0001087ce638();
  ppppppuVar46 = param_3 + 0x99;
  ppppppuVar29 = param_3 + 0xe3;
  ppppppuVar30 = param_3 + 0xe5;
LAB_1087c8ed8:
  pppppuVar33 = pppppuStack_1860;
  ppppppuVar31 = &pppppuStack_280;
  uVar7 = ppppppuVar43 == ppppppuVar28;
  if ((bool)uVar7) {
    func_0x000107c28904(pppppuStack_1860 + 0xe8,&uStack_aa0);
    func_0x0001087ad048(pppppuVar33 + 0xeb,&lStack_a88);
    func_0x00010879dd54(pppppuVar33 + 0xee,&lStack_a70);
    FUN_1087ccbc0(pppppuVar33 + 0xf1,&pppppuStack_a58);
    func_0x000104bee768(&uStack_aa0);
    func_0x0001087ccca8(&pppppuStack_a40);
    func_0x0001087ce1d4(uStack_b8);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
LAB_1087cbf10:
    FUN_10879368c();
LAB_1087cbf24:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1087cbf28);
    (*pcVar5)();
  }
  ppppppuVar47 = (undefined ******)*ppppppuVar43;
  uStack_b38 = 0;
  uStack_b34 = uStack_b34 & 0xffffff00;
  bStack_b30 = 0;
  auStack_b28[0] = 0;
  cStack_b08 = '\0';
  auStack_c30[0] = 0;
  cStack_b40 = '\0';
  ppuStack_ce0 = (undefined **)((ulong)ppuStack_ce0 & 0xffffffffffffff00);
  uStack_c38 = 0;
  ppppuStack_d40 = (undefined ****)((ulong)ppppuStack_d40 & 0xffffffffffffff00);
  uStack_ce8 = 0;
  ppuStack_da0 = (undefined **)((ulong)ppuStack_da0 & 0xffffffffffffff00);
  cStack_d48 = '\0';
  ppppppuVar34 = ppppppuVar47;
  func_0x000108799d14();
  uStack_b34 = (uint)ppppppuVar34;
  bStack_b30 = (byte)((ulong)ppppppuVar34 >> 0x20);
  bVar8 = *(int *)(ppppppuVar47 + 0xd) + -0xc == 3;
  switch(*(int *)(ppppppuVar47 + 0xd) + -0xc) {
  case 0:
    func_0x0001087ce350(ppppppuVar47[0xc][0xf]);
    lVar41 = extraout_x9_03 + 0xb58;
    if (!bVar8) {
      lVar41 = extraout_x8_05;
    }
    func_0x0001087ce338(lVar41);
    func_0x000107c29ee0();
    ppppppuVar34 = ppppppuVar18 + 0xcc;
    func_0x0001087ce318();
    FUN_108699c84();
    pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
    uStack_268 = (undefined ******)((ulong)uStack_268 & 0xffffffffffffff00);
    if (ppppppuVar34 != (undefined ******)0x0) {
      func_0x0001087ce200(ppppppuVar34);
      FUN_108690b88();
    }
    func_0x0001087ce20c();
    FUN_108903ae8();
    func_0x0001087ce464(unaff_x28 + 0x1a);
    func_0x000107c279d4();
    func_0x0001087ce200();
    func_0x000107c279dc();
    func_0x0001087ce224();
    func_0x000107c27914();
    if (cStack_b40 == '\x01') {
      func_0x0001087ce2cc(auStack_c30);
      FUN_1087cc94c();
      ppppppuVar34 = (undefined ******)appppuStack_b60;
      func_0x000107c28908(ppppppuVar34,unaff_x28 + 0x1a);
    }
    else {
      FUN_108903a80(auStack_c30,0);
      func_0x0001087ce2cc(auStack_c30);
      FUN_1087cc94c();
      ppppppuVar34 = (undefined ******)appppuStack_b60;
      func_0x000107c27afc(ppppppuVar34,unaff_x28 + 0x1a);
      cStack_b40 = '\x01';
    }
    func_0x0001087ce20c();
    func_0x0001087cc9a4();
    break;
  case 1:
    func_0x0001087ce350(ppppppuVar47[0xc][4]);
    lVar41 = extraout_x9_05 + 0xb58;
    if (!bVar8) {
      lVar41 = extraout_x8_07;
    }
    func_0x0001087ce338(lVar41);
    func_0x000107c29ee0();
    pppppuVar40 = (undefined *****)pppppuStack_1860[0x13];
    for (pppppuVar33 = (undefined *****)pppppuStack_1860[0x12]; pppppuVar38 = pppppuVar40,
        pppppuVar33 != pppppuVar40; pppppuVar33 = pppppuVar33 + 0xb) {
      func_0x0001087ce318();
      pppppuVar42 = pppppuVar33;
      func_0x000107c28078();
      pppppuVar38 = pppppuVar33;
      if (((ulong)pppppuVar42 & 1) != 0) break;
    }
    pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
    bStack_228 = 0;
    uVar7 = (undefined *****)pppppuStack_1860[0x13] == pppppuVar38;
    bVar8 = !(bool)uVar7;
    if (bVar8) {
      func_0x0001087ce200();
      FUN_108685a78();
    }
    bStack_228 = bVar8;
    func_0x0001087ce20c();
    func_0x000108903760();
    func_0x0001087ce4c4();
    func_0x0001087ce464(pppppuVar33 + 6);
    func_0x0001087cc9cc();
    pppppuStack_4e8 = pppppuStack_728;
    pppppuStack_4f0 = pppppuStack_730;
    pppppuStack_4e0 = pppppuStack_720;
    pppppuStack_720 = (undefined *****)0x0;
    pppppuStack_728 = (undefined *****)0x0;
    pppppuStack_730 = (undefined *****)0x0;
    func_0x0001087ce200();
    func_0x0001087cca20();
    func_0x0001087ce224();
    func_0x000107c27914();
    func_0x0001087ce868();
    if ((bool)uVar7) {
      func_0x0001087ce2cc(&ppuStack_ce0);
      FUN_1087cca40();
      if (bStack_c58 == bStack_4f8) {
        func_0x0001087ce4c4();
        if (extraout_w8 != 0) {
          FUN_1087a2964(appppuStack_cb0,pppppuVar33 + 6);
        }
      }
      else if (bStack_c58 == 0) {
        func_0x0001087ce4c4(appppuStack_cb0);
        func_0x0001087cca04();
      }
      else {
        func_0x000104bee8ec();
        bStack_c58 = 0;
        func_0x0001087ce4c4();
      }
      ppppppuVar34 = &pppppuStack_c50;
      func_0x0001087ce470();
      func_0x000107c3194c();
    }
    else {
      uStack_cd0 = 0;
      uStack_cd8 = 0;
      ppuStack_ce0 = &PTR_DAT_110a8fef8;
      puStack_cc8 = &DAT_11383d918;
      uStack_cc0 = 0;
      uStack_cb8 = 0;
      func_0x0001087ce2cc(&ppuStack_ce0);
      FUN_1087cca40();
      ppppppuVar34 = (undefined ******)appppuStack_cb0;
      func_0x0001087cc9cc(ppppppuVar34,pppppuVar33 + 6);
      pppppuStack_c48 = pppppuStack_4e8;
      pppppuStack_c50 = pppppuStack_4f0;
      pppppuStack_c40 = pppppuStack_4e0;
      pppppuVar33[0x13] = (undefined ****)0x0;
      pppppuVar33[0x14] = (undefined ****)0x0;
      func_0x0001087ce470();
      pppppuVar33[0x12] = (undefined ****)0x0;
      uStack_c38 = 1;
    }
    func_0x0001087ce20c();
    FUN_1087cca98();
    break;
  case 2:
    func_0x0001087ce224(ppppppuVar47[0xc][3]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
    uStack_268 = (undefined ******)((ulong)uStack_268 & 0xffffffffffffff00);
    pppppuVar33 = (undefined *****)pppppuStack_1860[0x15];
    pppppuVar40 = (undefined *****)pppppuStack_1860[0x16];
    do {
      if (pppppuVar33 == pppppuVar40) goto code_r0x0001087c93a0;
      func_0x0001087ce318();
      pppppuVar38 = pppppuVar33;
      func_0x000107c278d0();
      pppppuVar33 = pppppuVar33 + 3;
    } while ((int)pppppuVar38 == 0);
    func_0x0001087ce318(&pppppuStack_9e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    pppppuStack_958 = pppppuStack_9d8;
    pppppuStack_960 = pppppuStack_9e0;
    pppppuStack_950 = pppppuStack_9d0;
    pppppuStack_9d0 = (undefined *****)0x0;
    pppppuStack_9e0 = (undefined *****)0x0;
    pppppuStack_9d8 = (undefined *****)0x0;
    if ((char)uStack_268 == '\x01') {
      func_0x0001087ce200();
      func_0x0001087ce4f0();
      func_0x000107c27b9c();
    }
    else {
      func_0x0001087ce66c();
      pppppuStack_960 = (undefined *****)0x0;
      pppppuStack_958 = (undefined *****)0x0;
      uStack_268 = (undefined ******)CONCAT71(uStack_268._1_7_,1);
    }
    func_0x0001087ce230();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_9e0);
code_r0x0001087c93a0:
    func_0x0001087ce20c();
    FUN_108904384();
    pppppuStack_548 = (undefined *****)((ulong)pppppuStack_548 & 0xffffffffffffff00);
    bStack_530 = 0;
    bVar8 = (char)uStack_268 == '\x01';
    uVar7 = bVar8;
    if (bVar8) {
      apppppuStack_540[0] = pppppuStack_278;
      pppppuStack_548 = pppppuStack_280;
      func_0x0001087ce470(pppppuStack_270);
      *(undefined8 *)(extraout_x9_06 + 0x48) = extraout_x8_08;
      pppppuStack_270 = (undefined *****)0x0;
      pppppuStack_280 = (undefined *****)0x0;
      pppppuStack_278 = (undefined *****)0x0;
    }
    bStack_530 = bVar8;
    func_0x0001087ce200();
    FUN_1087ccac8();
    func_0x0001087ce224();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001087ce93c();
    if ((bool)uVar7) {
      ppppppuVar34 = (undefined ******)&ppppuStack_d40;
      func_0x0001087ce2cc();
      FUN_1087ccae8();
      if (bStack_cf0 == bStack_530) {
        if (bStack_cf0 != 0) {
          ppppppuVar34 = (undefined ******)auStack_d08;
          func_0x000107c27b9c(ppppppuVar34,unaff_x28 + 7);
        }
      }
      else if (bStack_cf0 == 0) {
        func_0x0001087ce35c();
      }
      else {
        ppppppuVar34 = (undefined ******)auStack_d08;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        bStack_cf0 = 0;
      }
    }
    else {
      uStack_d30 = 0;
      uStack_d38 = 0;
      ppppuStack_d40 = (undefined ****)&PTR_DAT_110a8ff48;
      puStack_d28 = &DAT_11383d918;
      iStack_d10 = 0;
      uStack_d20 = 0;
      ppppppuVar34 = (undefined ******)&ppppuStack_d40;
      func_0x0001087ce2cc();
      FUN_1087ccae8();
      auStack_d08[0] = 0;
      bStack_cf0 = 0;
      if (bStack_530 == 1) {
        func_0x0001087ce35c();
      }
      uStack_ce8 = 1;
    }
    func_0x0001087ce20c();
    FUN_1087ccb40();
    break;
  case 3:
    FUN_108792860(appppuStack_1778,pppppuStack_1860);
    if (*(int *)(ppppppuVar47 + 0xd) != 0xf) {
      func_0x0001087ce894(&UNK_10f4bb7e8);
      func_0x0001087ce344();
      func_0x00010bd3f434();
      ppppppuVar18 = (undefined ******)pppppuStack_280;
      if (-1 < (long)pppppuStack_270) {
        ppppppuVar18 = param_4;
      }
      func_0x00010bd3f4e0(ppppppuVar18,"unknown",0xeb);
      goto LAB_1087cbf24;
    }
    func_0x0001087ce224();
    func_0x000108685c38();
    bVar8 = *(int *)(ppppppuVar47 + 0xd) == 0xf;
    pppppuVar33 = ppppppuVar47[0xc];
    if (!bVar8) {
      pppppuVar33 = (undefined *****)&PTR_PTR_11327e840;
    }
    func_0x0001087ce350(pppppuVar33[3]);
    lVar41 = extraout_x9_04 + 0xb58;
    if (!bVar8) {
      lVar41 = extraout_x8_06;
    }
    func_0x0001087ce514(lVar41);
    func_0x000107c29ee0();
    func_0x0001087ce66c();
    pppppuStack_958 = (undefined *****)0x0;
    pppppuStack_960 = (undefined *****)0x0;
    uStack_268 = (undefined ******)CONCAT71(uStack_268._1_7_,1);
    func_0x0001087ce180();
    func_0x0001087ce20c();
    FUN_108904734();
    func_0x0001087ce464(afStack_560);
    func_0x000107c27afc();
    func_0x0001087ce4c4();
    func_0x0001087ce318(apppppuStack_540);
    func_0x000108685c38();
    func_0x0001087ce200();
    func_0x000107c279dc();
    func_0x0001087ce224();
    func_0x000104bee7a0();
    if (cStack_d48 == '\x01') {
      func_0x0001087ce2cc(&ppuStack_da0);
      FUN_1087ccb68();
      func_0x0001087ce4c4(auStack_d80);
      func_0x000107c28908();
      func_0x0001087ce470(&pppppuStack_d60);
      FUN_1087ccbc0();
    }
    else {
      uStack_d98 = 0;
      ppuStack_da0 = &PTR_DAT_110a8ff98;
      uStack_d90 = 0;
      uStack_d88 = 0;
      func_0x0001087ce2cc(&ppuStack_da0);
      FUN_1087ccb68();
      func_0x0001087ce4c4(auStack_d80);
      func_0x000107c27afc();
      pppppuStack_d60 = apppppuStack_540[0];
      ppppuStack_d58 = (undefined ****)0x0;
      uStack_d50 = 0;
      func_0x0001087ce470();
      pppppuStack_d60 = (undefined *****)0x0;
      cStack_d48 = '\x01';
    }
    func_0x0001087ce20c();
    func_0x0001087ccbfc();
    ppppppuVar34 = (undefined ******)appppuStack_1778;
    func_0x0001086a931c();
  }
  bVar8 = cStack_b40 == '\x01';
  if ((bVar8) && ((bStack_b48 & 1) == 0)) {
    pppppuStack_580 = (undefined *****)0x1600000007;
    ppppppuVar31 = (undefined ******)pppppuStack_580;
LAB_1087c9544:
    pppppuStack_580 = (undefined *****)ppppppuVar31;
    pppppuStack_578 = (undefined *****)CONCAT71(pppppuStack_578._1_7_,1);
    goto LAB_1087c9548;
  }
  func_0x0001087ce868();
  if ((bVar8) && ((bStack_c58 & 1) == 0)) {
    pppppuStack_580 = (undefined *****)0x1700000007;
    ppppppuVar31 = (undefined ******)pppppuStack_580;
    goto LAB_1087c9544;
  }
  func_0x0001087ce93c();
  if ((bVar8) && ((bStack_cf0 & 1) == 0)) {
    pppppuStack_580 = (undefined *****)0x1800000007;
    ppppppuVar31 = (undefined ******)pppppuStack_580;
    goto LAB_1087c9544;
  }
  if ((cStack_d48 == '\x01') && ((bStack_d68 & 1) == 0)) {
    pppppuStack_580 = (undefined *****)0x1900000007;
    ppppppuVar31 = (undefined ******)pppppuStack_580;
    goto LAB_1087c9544;
  }
  uVar7 = *(int *)(ppppppuVar47 + 0xd) == 0xc;
  if (((bool)uVar7) && ((*(byte *)(ppppppuVar47 + 2) >> 1 & 1) != 0)) {
    if (*(int *)(ppppppuVar47[4] + 7) == 4) {
      pppppuStack_960 = (undefined *****)0x0;
      func_0x000107c28258();
      pppppuStack_950 = (undefined *****)CONCAT71(pppppuStack_950._1_7_,1);
      pppppuStack_958 = (undefined *****)ppppppuVar34;
      func_0x0001087ce554(&pppppuStack_580,*(undefined8 *)(lStack_1868 + 0x28));
      func_0x0001087ce344();
      func_0x0001087ce20c();
      func_0x000107c28998();
      func_0x0001087ce20c();
      func_0x000107c28948();
      if ((bStack_d8 == 1) && ((uStack_258 & 1) != 0)) {
        func_0x0001087ce570();
        func_0x0001087ce8e4();
        FUN_1087cc638(pppppuStack_1860);
        func_0x0001087ce278();
        FUN_1087cc890();
        uVar9 = 0;
      }
      else {
        func_0x0001087ce278();
        FUN_1087cc890();
        uVar9 = 3;
      }
      func_0x0001087ce230();
      func_0x000107c2825c();
      func_0x0001087ce268();
      func_0x0001087ce150();
      pppppuStack_730._0_5_ = (uint5)uVar9;
      pppppuStack_728 = (undefined *****)((ulong)pppppuStack_728 & 0xffffffffffffff00);
      pppppuStack_720 = (undefined *****)((ulong)pppppuStack_720 & 0xffffffffffffff00);
      uStack_700 = 0;
      func_0x0001087ce200();
      func_0x000107c288dc();
      func_0x0001087ce318(&uStack_b38);
      FUN_1087cc3f0();
      func_0x0001087ce338();
      ppppppuVar31 = extraout_x8_12;
    }
    else {
      uVar7 = *(int *)(ppppppuVar47[4] + 7) == 6;
      if (!(bool)uVar7) goto LAB_1087c96a8;
      uStack_9f8 = 0;
      func_0x000107c28258();
      uStack_9e8 = 1;
      pppppuStack_9f0 = (undefined *****)ppppppuVar34;
      func_0x000107c278b8(auStack_a10,&UNK_10f4bb7bd);
      func_0x0001087ce324();
      func_0x000107c31420();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a10);
      lVar41 = lStack_1868;
      func_0x0001087ce6d8(*(undefined8 *)(lStack_1868 + 0x28));
      func_0x000107c29f60();
      func_0x0001087ce344(*(undefined8 *)(lVar41 + 0x28));
      func_0x0001087ce2cc();
      FUN_1088636fc();
      func_0x0001087ce200(&pppppuStack_3a0);
      FUN_1087155f0();
      func_0x0001087ce200();
      FUN_10871d008();
      if ((cStack_390 != '\x01') ||
         (ppppppuVar31 = (undefined ******)pppppuStack_3a0, ((ulong)pppppuStack_398 & 1) == 0)) {
        ppppppuVar31 = unaff_x28 + 3;
        FUN_1086a3c30(ppppppuVar31,lStack_1868 + 0x10);
      }
      pppppuVar33 = pppppuStack_1860;
      ppppppuVar34 = (undefined ******)((long)ppppppuVar31 + 1);
      pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
      bStack_d8 = 0;
      uVar7 = (long)pppppuStack_1860[4] - (long)pppppuStack_1860[3] == 0x18;
      if ((bool)uVar7) {
        func_0x0001087ce338(*(undefined8 *)(lStack_1868 + 0x28),pppppuStack_1860[0xc5]);
        FUN_108869aa4();
        func_0x0001087ce200();
        func_0x0001087ce318();
        func_0x000107c2894c();
        func_0x0001087ce224();
        func_0x000107c288dc();
        uVar12 = ((long)pppppuVar33[4] - (long)pppppuVar33[3]) / 0x18;
        uVar7 = uVar12 == 1;
        if ((1 < uVar12) || ((bStack_d8 & 1) == 0)) goto LAB_1087c9f88;
        func_0x0001087ce224();
        func_0x0001087ce2e0();
        func_0x0001087ce318(auStack_1b8);
        func_0x000107c27b9c();
        func_0x0001087ce224();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        uStack_258 = CONCAT71(uStack_258._1_7_,1);
        ppppuStack_1a0 = pppppuStack_1860[0xf4];
        pppppuStack_260 = (undefined *****)ppppppuVar34;
        pppppuStack_1d0 = (undefined *****)ppppppuVar34;
        func_0x0001087ce894();
        puVar13 = auStack_230;
        FUN_1086a2754();
        *(undefined *****)(puVar13 + 0x120) = ppppuStack_1a0;
        FUN_108848684(&pppppuStack_9e0);
        func_0x0001087ce338();
        func_0x000107c29ee4(&pppppuStack_9e0);
        func_0x0001086ec2c0((long)ppppppuVar31 + 0x51);
        func_0x0001087cd3a4();
        func_0x0001087ce318();
        func_0x000107c287d0();
        func_0x0001087ce224();
        func_0x000107c2a2e0();
        func_0x0001087ce790();
        if ((char)uStack_238 == '\x01') {
          uStack_238 = uStack_238 & 0xffffff00;
        }
        func_0x0001087ce230();
        func_0x0001087ce464();
        func_0x000107c28a9c();
        ppppppuVar31 = (undefined ******)pppppuStack_1860;
      }
      else {
LAB_1087c9f88:
        pppppuStack_9d8 = (undefined *****)0x0;
        pppppuStack_9e0 = (undefined *****)&PTR_DAT_110a96180;
        func_0x0001087ce6f0(&pppppuStack_9e0);
        func_0x0001087ce338();
        func_0x0001087ce7d4();
        func_0x0001086ec2b0(&pppppuStack_9e0);
        func_0x0001087ce318();
        func_0x000107c287d0();
        func_0x0001087ce224();
        func_0x000107c2a2e0();
        FUN_108653db8(&pppppuStack_9e0);
        pppppuVar40 = pppppuStack_1860;
        func_0x00010890d3ac();
        pppppuVar33 = (undefined *****)pppppuVar40[0x1b];
        pppppuVar40 = (undefined *****)pppppuVar40[0x1c];
        func_0x0001087ce350(uStack_bb8);
        lVar41 = extraout_x9_07 + 0xb58;
        if (!(bool)uVar7) {
          lVar41 = extraout_x8_13;
        }
        FUN_10865ecd8(&pppppuStack_300,lVar41);
        for (; pppppuVar33 != pppppuVar40; pppppuVar33 = pppppuVar33 + 6) {
          bVar8 = *(int *)(pppppuVar33 + 5) == 1;
          ppppuVar23 = pppppuVar33[4];
          if (!bVar8) {
            ppppuVar23 = (undefined ****)&PTR_PTR_11327fd08;
          }
          func_0x0001087ce350(ppppuVar23[3]);
          lVar41 = extraout_x9_08 + 0xb58;
          if (!bVar8) {
            lVar41 = extraout_x8_14;
          }
          ppppppuVar31 = &pppppuStack_300;
          func_0x000107c287e8(ppppppuVar31,lVar41);
          if (((ulong)ppppppuVar31 & 1) != 0) break;
        }
        func_0x0001087ce430();
        FUN_108667a24(&pppppuStack_9e0);
        FUN_108907d50();
        func_0x0001087ce224();
        func_0x000107c2a5dc();
        ppppuStack_610 = pppppuStack_1860[0xf4];
        FUN_1086a2754(&pppppuStack_9e0);
        func_0x0001087ce318();
        FUN_1089229ac();
        FUN_108848684(auStack_788);
        func_0x0001087ce5f0(apppppuStack_7b0);
        func_0x000107c29ee4();
        func_0x0001086ec2c0(&pppppuStack_9e0);
        func_0x0001087cd3a4();
        func_0x000107c287d0();
        func_0x0001087ce5e4();
        func_0x000107c2a2e0();
        func_0x0001087ce5f0();
        func_0x000107c27914();
        func_0x0001087ce8a0();
        pppppuStack_980 = (undefined *****)ppppppuVar34;
        func_0x0001087ce230();
        func_0x0001087ce2cc();
        func_0x000107c27994();
        uVar15 = *(undefined8 *)(lStack_1868 + 0x70);
        func_0x0001087ce660();
        (*extraout_x8_20)();
        lStack_938 = CONCAT71(lStack_938._1_7_,1);
        uStack_948 = uVar15;
        pppppuStack_940 = (undefined *****)ppppppuVar34;
        func_0x0001087ce8a0();
        uStack_928 = CONCAT71(uStack_928._1_7_,extraout_w9);
        uStack_920 = 0;
        uStack_918 = uStack_918 & 0xffffffffffffff00;
        uStack_930 = extraout_x8_21;
        func_0x000107c287dc(auStack_910,&pppppuStack_9e0);
        func_0x0001087ce2e0(auStack_898);
        ppppppuVar31 = (undefined ******)pppppuStack_1860;
        ppppuStack_880 = pppppuStack_1860[0xf4];
        uStack_878 = 0;
        FUN_10879c838(auStack_870,pppppuStack_1860 + 0x1f);
        uStack_850 = 0;
        uStack_84c = 0;
        ppppuStack_848 = (undefined ****)param_3[0x10f];
        bStack_840 = *(byte *)(param_3 + 0x110);
        bVar19 = *(byte *)(ppppppuVar31 + 0x110);
        *(byte *)(extraout_x8_03 + 300) = bVar19;
        *(uint *)(extraout_x8_03 + 0x128) = (uint)bVar19;
        uStack_830 = 0;
        uStack_828 = 0;
        uStack_820 = 0;
        uStack_81c = 0;
        uStack_818 = 0;
        uStack_810 = 0;
        uStack_7f8 = 0;
        uStack_7f0 = 0;
        uStack_7ec = 0;
        uStack_7e8 = 0;
        uStack_7e4 = 0;
        uStack_7e0 = 0;
        uStack_7d8 = 0;
        uStack_7c0 = 0;
        func_0x0001087ce224();
        func_0x000107c2a5e0();
        func_0x000107c2a5a4(&pppppuStack_9e0);
      }
      func_0x0001087ce200();
      func_0x000107c288dc();
      func_0x0001087ce570();
      func_0x0001087ce6cc();
      FUN_1087cc638(ppppppuVar31);
      func_0x0001087ce278();
      uVar12 = (ulong)pppppuStack_280 >> 0x28;
      pppppuStack_280._0_4_ = (uint)pppppuStack_280 & 0xffffff00;
      pppppuStack_280._0_5_ = (uint5)(uint)pppppuStack_280;
      pppppuStack_280 = (undefined *****)CONCAT35((int3)uVar12,(uint5)pppppuStack_280);
      func_0x0001087ce390();
      func_0x0001087ce5d8();
      func_0x0001087ce428();
      func_0x0001087ce4fc();
      func_0x0001087ce660();
      func_0x0001087ce4f0();
      (*extraout_x8_22)();
      lStack_428 = -2;
      func_0x0001087ce4fc();
      func_0x0001087ce2cc();
      FUN_10885ff98();
      func_0x0001087ce324();
      func_0x000107c31428();
      func_0x000107c2825c(&uStack_9f8);
      func_0x0001087ce268();
      func_0x0001087ce150();
      pppppuStack_17b0 = (undefined *****)((ulong)pppppuStack_17b0 & 0xffffff0000000000);
      pppppuStack_17a8 = (undefined *****)((ulong)pppppuStack_17a8 & 0xffffffffffffff00);
      func_0x0001087ce8c0();
      func_0x0001087ce230();
      func_0x000107c288e0();
      func_0x0001087ce20c();
      func_0x000107c287e4();
      func_0x0001087ce2ec();
LAB_1087cba54:
      FUN_1087cc3f0(&uStack_b38,&pppppuStack_17b0);
      ppppppuVar31 = &pppppuStack_17b0;
    }
    goto LAB_1087c9560;
  }
LAB_1087c96a8:
  ppppppuVar34 = ppppppuVar47;
  FUN_108770af8(ppppppuVar47,lStack_1868 + 0x90,&UNK_10f4bb74e);
  uVar9 = (uint)ppppppuVar34;
  if (uVar9 != 0) {
    if (cStack_b40 != '\0') {
      FUN_1087cc424(lStack_1868,uStack_c20,uStack_b88,1);
    }
    pppppuVar40 = ppppppuVar47[4];
    pppppuVar33 = (undefined *****)&PTR_PTR_11326b328;
    if (pppppuVar40 != (undefined *****)0x0) {
      pppppuVar33 = pppppuVar40;
    }
    ppppuVar23 = (undefined ****)&PTR_PTR_11326b300;
    if (pppppuVar33[4] != (undefined ****)0x0) {
      ppppuVar23 = pppppuVar33[4];
    }
    uStack_b38 = uVar9;
    if (((ulong)ppppuVar23[2] & 1) != 0) {
      if (cStack_b08 == '\x01') {
        FUN_1088ba040(auStack_b28);
      }
      else {
        FUN_1087a3380(auStack_b28,ppppuVar23[3]);
      }
      pppppuVar40 = ppppppuVar47[4];
    }
    pppppuVar33 = (undefined *****)&PTR_PTR_11326b328;
    if (pppppuVar40 != (undefined *****)0x0) {
      pppppuVar33 = pppppuVar40;
    }
    uVar12 = (ulong)*(uint *)(pppppuVar33 + 7);
    plVar35 = (long *)**(undefined8 **)(lStack_1868 + 0x58);
    FUN_1087ceb70(uVar12);
    (**(code **)(*plVar35 + 0x60))(plVar35,pppppuStack_1860,uVar12,ppppuStack_1880);
    goto LAB_1087c9564;
  }
  if (cStack_b40 != '\0') {
    pppppuStack_3a0 = (undefined *****)0x0;
    func_0x000107c28258();
    lVar41 = lStack_1868;
    cStack_390 = '\x01';
    pppppuStack_398 = (undefined *****)ppppppuVar34;
    FUN_1087cc424(lStack_1868,uStack_c20,uStack_b88,0);
    func_0x0001087ce6d8(*(undefined8 *)(lVar41 + 0x28));
    func_0x000107c29f64();
    if ((bStack_3b0 & 1) == 0) {
      pppppuStack_17b0 = (undefined *****)0x1b00000007;
      pppppuStack_17a8 = (undefined *****)CONCAT71(pppppuStack_17a8._1_7_,1);
      func_0x0001087ce8c0();
      func_0x0001087ce20c();
      func_0x000107c288c8();
    }
    else {
      uVar12 = *(ulong *)(lStack_1868 + 0x28);
      func_0x0001087ce344();
      func_0x0001087ce554();
      func_0x0001087ce338();
      func_0x0001087ce200();
      func_0x000107c28998();
      func_0x0001087ce200();
      func_0x000107c28948();
      lVar41 = lStack_b78;
      lVar45 = lStack_b78 - lStack_428;
      if (lVar45 < 2) {
        if (lVar45 == 1) {
          uVar9 = 2;
        }
        else {
          uVar9 = 3;
          if (lStack_b78 != lStack_428) {
            uVar9 = 4;
          }
        }
      }
      else {
        uVar9 = 1;
      }
      func_0x0001087ce5f0();
      func_0x000107c278b8();
      func_0x0001087ce324();
      func_0x000107c31420();
      func_0x0001087ce5f0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      if (uVar9 < 3) {
        if (uVar9 == 2) {
          if ((iStack_bc8 != 0) && (*(long *)(lStack_1868 + 0xa0) != 0)) {
            func_0x0001087ce20c();
            func_0x000107c28db0();
            bVar8 = (uVar12 & 1) == 0;
            if (bVar8) {
              pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
            }
            else {
              pppppuStack_280 = (undefined *****)&PTR_FUN_110a716c0;
              pppppuStack_278 = pppppuStack_1860;
              uStack_268 = ppppppuVar31;
            }
            pppppuStack_260 = (undefined *****)CONCAT71(pppppuStack_260._1_7_,!bVar8);
            func_0x0001087ce514();
            func_0x0001087ce2cc(auStack_bd0);
            FUN_10879d848();
            func_0x0001087ce200();
            FUN_1086cf26c();
          }
          lStack_428 = lVar41;
          if ((bStack_400 & 1) == 0) {
            func_0x0001087ce648(pppppuStack_b70);
          }
          if ((uStack_c20 >> 4 & 1) != 0) {
            pppppuStack_278 = (undefined *****)0x0;
            pppppuStack_280 = (undefined *****)&PTR_FUN_110a8ea68;
            uStack_238 = 0;
            func_0x0001087ce344();
            *(undefined8 *)(extraout_x8_27 + 0x18) = 0;
            *(undefined8 *)(extraout_x8_27 + 0x10) = 0;
            *(undefined8 *)(extraout_x8_27 + 0x28) = 0;
            *(undefined8 *)(extraout_x8_27 + 0x20) = 0;
            *(undefined8 *)(extraout_x8_27 + 0x38) = 0;
            *(undefined8 *)(extraout_x8_27 + 0x30) = 0;
            func_0x0001087ce200();
            func_0x0001086d0688();
            FUN_10892a9f0();
            func_0x0001087ce464(apppppuStack_7b0,unaff_x28 + 3);
            FUN_1086dcd58();
            func_0x0001087ce5e4();
            FUN_1086af46c();
            func_0x0001087ce200();
            FUN_1088fc38c();
          }
          if ((uStack_c20 >> 2 & 1) != 0) {
            FUN_1086a4a3c(unaff_x28 + 3);
            FUN_1088bf0ac();
          }
          func_0x0001087ce344();
          func_0x000107c29940(lStack_1868 + 0xe8);
          if ((undefined ******)pppppuStack_280 != (undefined ******)0x0) {
            func_0x0001087ce660();
            (*extraout_x8_28)();
          }
          func_0x0001087ce200();
          func_0x000107c29574();
          func_0x0001087ce4fc();
          func_0x0001087ce2cc();
          FUN_10885ff98();
        }
        else if (iStack_464 == 8) {
          ppuVar37 = &PTR_PTR_11326bbc8;
          if (ppuStack_4a0 != (undefined **)0x0) {
            ppuVar37 = ppuStack_4a0;
          }
          if ((((ulong)ppuVar37[2] & 1) != 0) && (ppuVar37[5][0x10] == '\x01')) {
            plVar35 = *(long **)(lStack_1868 + 0x60);
            func_0x0001087ce344();
            *(undefined8 *)(extraout_x8_23 + 8) = 0;
            *(undefined8 *)(extraout_x8_23 + 0x10) = 0;
            *(undefined8 *)(extraout_x8_23 + 0x18) = 0;
            pppppuStack_280 = (undefined *****)&PTR_FUN_110a6f328;
            pppppuStack_260 = (undefined *****)CONCAT44(pppppuStack_260._4_4_,0x18);
            func_0x0001087ce5e4();
            func_0x000107c278b8();
            uVar12 = (ulong)*(uint *)(pppppuStack_1860 + 0x27);
            FUN_10879cf94(uVar12);
            func_0x0001087ce200();
            FUN_108791610();
            FUN_1087b7e18();
            (**(code **)(*plVar35 + 0x80))(plVar35,uVar12,lVar45);
            func_0x0001087ce5e4();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x0001087ce200();
            FUN_108788618();
          }
        }
        uVar7 = bStack_588 == 1;
        if ((bool)uVar7) {
          if ((bStack_708 & 1) == 0) {
            if (cStack_6e8 == '\x01') {
              cStack_6e8 = '\0';
            }
            func_0x0001087ce2e0(auStack_388);
            func_0x0001087ce338();
            func_0x000107c27b9c(extraout_x8_29 + 200,auStack_388);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
            if ((bStack_708 & 1) == 0) {
              bStack_708 = 1;
            }
            pppppuStack_710 = pppppuStack_b70;
            pppppuStack_680 = pppppuStack_b70;
            if (iStack_c10 != 0) {
              ppuVar37 = &PTR_PTR_113280b68;
              if (ppuStack_b90 != (undefined **)0x0) {
                ppuVar37 = ppuStack_b90;
              }
              func_0x000107c29a00(&uStack_370,0,ppppppuVar36);
              FUN_1086eb9e8(ppppppuVar36);
              pppppuStack_278 = (undefined *****)0x0;
              pppppuStack_280 = (undefined *****)&PTR_FUN_110a92130;
              func_0x0001087ce344();
              *(undefined8 *)(extraout_x8_30 + 0x18) = 0;
              *(undefined8 *)(extraout_x8_30 + 0x20) = 0;
              *(undefined8 *)(extraout_x8_30 + 0x10) = 0;
              *(undefined4 *)(extraout_x8_30 + 0x28) = 0;
              func_0x0001087ce918(uStack_c18);
              for (lVar41 = (long)iStack_c10 << 3; lVar41 != 0; lVar41 = lVar41 + -8) {
                FUN_1087cd114(&pppppuStack_270);
                func_0x00010b51f87c();
              }
              FUN_10879d9f8(ppppppuVar36);
              func_0x0001087ce464();
              FUN_10890b528();
              func_0x0001087ce918(uStack_370);
              for (lVar41 = (long)iStack_368 << 3; lVar41 != 0; lVar41 = lVar41 + -8) {
                FUN_10879d9f8(ppppppuVar36);
                FUN_10890b528();
              }
              func_0x0001087ce918(ppuVar37[2]);
              for (lVar41 = (long)*(int *)(ppuVar37 + 3) << 3; lVar41 != 0; lVar41 = lVar41 + -8) {
                ppppppuVar31 = (undefined ******)(pppppuStack_1860 + 0x90);
                func_0x0001086eb9fc(ppppppuVar31);
                func_0x000107c303b0(ppppppuVar31 + 2,FUN_1087cd120);
                FUN_10890daa8();
              }
              func_0x0001087ce200();
              func_0x000107c2a4cc();
              func_0x0001087ce7ec();
              ppppppuVar31 = (undefined ******)0x0;
            }
            if ((ppppppuVar46 != (undefined ******)(extraout_x9_02 + 0x30)) &&
               (FUN_1087cd16c(ppppppuVar46), iStack_bf8 != 0)) {
              func_0x000107c303c4(ppppppuVar46,(undefined ******)(extraout_x9_02 + 0x30));
            }
            func_0x0001087ce338();
            FUN_108653db8(extraout_x8_35 + 0x50);
            func_0x00010890d3ac();
            uStack_678 = uStack_b68;
            func_0x0001087ce338();
            FUN_1086a2754(extraout_x8_36 + 0x50);
            FUN_1089229ac();
            func_0x0001087ce338();
            func_0x0001086ec2c0(extraout_x8_37 + 0x50);
            FUN_1088bbb00();
            ppuVar37 = &PTR_PTR_113286e08;
            if (ppuStack_bb0 != (undefined **)0x0) {
              ppuVar37 = ppuStack_bb0;
            }
            puStack_650 = ppuVar37[0x24];
            if ((char)uStack_c20 < '\0') {
              func_0x0001087ce338();
              FUN_1086eb714(extraout_x8_38 + 0x50);
              FUN_10891aaf8();
            }
            func_0x0001087ce224();
            FUN_10886e2e0();
            ppuVar37 = &PTR_PTR_113286e08;
            if (ppuStack_bb0 != (undefined **)0x0) {
              ppuVar37 = ppuStack_bb0;
            }
            if (((bStack_604 & 1) == 0) && ((char)ppppuStack_610 == '\0')) {
              if ((*(uint *)(ppuVar37 + 0x2a) & 0xfffffffe) == 0xc) {
                func_0x0001087ce344();
                FUN_10869a650();
                pppppuStack_618 = pppppuStack_278;
                ppppuStack_610 =
                     (undefined ****)CONCAT71(ppppuStack_610._1_7_,pppppuStack_270._0_1_);
                uStack_608 = 1;
                bStack_604 = 1;
              }
            }
            else if ((*(uint *)(ppuVar37 + 0x2a) & 0xfffffffe) != 0xc) {
              if ((char)ppppuStack_610 != '\0') {
                ppppuStack_610 = (undefined ****)((ulong)ppppuStack_610 & 0xffffffffffffff00);
              }
              if (bStack_604 != 0) {
                bStack_604 = 0;
              }
            }
            goto LAB_1087cb0b0;
          }
        }
        else {
          pppppuStack_958 = (undefined *****)0x0;
          pppppuStack_960 = (undefined *****)&PTR_DAT_110a96180;
          func_0x0001087ce514();
          func_0x0001087ce6f0();
          func_0x0001087ce7d4(&pppppuStack_9e0);
          func_0x0001087ce230();
          func_0x0001086ec2b0();
          func_0x000107c287d0();
          func_0x000107c2a2e0(&pppppuStack_9e0);
          func_0x0001087ce230();
          pppppuVar40 = pppppuStack_1860;
          FUN_108653db8();
          func_0x00010890d3ac();
          pppppuVar33 = (undefined *****)pppppuVar40[0x1b];
          pppppuVar40 = (undefined *****)pppppuVar40[0x1c];
          func_0x0001087ce350(uStack_bb8);
          lVar41 = extraout_x9_14 + 0xb58;
          if (!(bool)uVar7) {
            lVar41 = extraout_x8_31;
          }
          FUN_10865ecd8(auStack_358,lVar41);
          for (; pppppuVar38 = pppppuVar40, pppppuVar33 != pppppuVar40;
              pppppuVar33 = pppppuVar33 + 6) {
            bVar8 = *(int *)(pppppuVar33 + 5) == 1;
            ppppuVar23 = pppppuVar33[4];
            if (!bVar8) {
              ppppuVar23 = (undefined ****)&PTR_PTR_11327fd08;
            }
            func_0x0001087ce350(ppppuVar23[3]);
            lVar41 = extraout_x9_15 + 0xb58;
            if (!bVar8) {
              lVar41 = extraout_x8_32;
            }
            puVar13 = auStack_358;
            func_0x000107c287e8(puVar13,lVar41);
            pppppuVar38 = pppppuVar33;
            if (((ulong)puVar13 & 1) != 0) break;
          }
          func_0x000107c2a2e0(auStack_358);
          if ((undefined *****)pppppuStack_1860[0x1c] == pppppuVar38) {
            pppppuStack_9d8 = (undefined *****)0x0;
            pppppuStack_9e0 = (undefined *****)&PTR_FUN_110a90cd0;
            uStack_9b8 = 0;
            pppppuStack_9d0 = (undefined *****)0x0;
            uStack_9c8 = 0;
            func_0x000107c29ee4(&pppppuStack_300,appppuStack_b60);
            FUN_1086cf28c(&pppppuStack_9e0);
            func_0x0001086c1dc8();
            func_0x000107c287d0();
            func_0x0001087ce430();
          }
          else {
            func_0x0001086c1dd8(&pppppuStack_9e0,pppppuVar38);
          }
          func_0x0001087ce230();
          FUN_108667a24();
          FUN_108907d50();
          func_0x0001087ce230();
          FUN_1086a2754();
          FUN_1089229ac();
          func_0x0001087ce230();
          func_0x0001086ec2c0();
          FUN_1088bbb00();
          uStack_8f8 = uStack_b68;
          func_0x0001087ce8a0();
          pppppuStack_900 = pppppuStack_b70;
          func_0x0001087ce200();
          func_0x0001087ce570();
          func_0x000107c27994();
          ppppppuVar34 = *(undefined *******)(lStack_1868 + 0x70);
          func_0x0001087ce660();
          (*extraout_x8_33)();
          pppppuStack_260 = pppppuStack_b70;
          uStack_258 = CONCAT71(uStack_258._1_7_,1);
          uStack_268 = ppppppuVar34;
          func_0x0001087ce8a0();
          uStack_240 = 0;
          uStack_238 = uStack_238 & 0xffffff00;
          func_0x0001087ce4f0(auStack_230);
          func_0x000107c287dc();
          func_0x0001087ce2e0(auStack_1b8);
          ppuVar37 = &PTR_PTR_113286e08;
          if (ppuStack_bb0 != (undefined **)0x0) {
            ppuVar37 = ppuStack_bb0;
          }
          ppppuStack_1a0 = (undefined ****)ppuVar37[0x24];
          uStack_198 = 0;
          func_0x0001087ce894();
          FUN_10879c838(auStack_190,pppppuStack_1860 + 0x1f);
          uStack_170 = 0;
          uStack_16c = 0;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_e0 = 0;
          func_0x0001087ce200();
          FUN_10886e2e0();
          func_0x000107c2a484(&pppppuStack_9e0);
          func_0x0001087ce230();
          func_0x000107c2a5a4();
          func_0x0001087ce224();
          func_0x0001087ce464();
          func_0x000107c28984();
          func_0x0001087ce200();
          func_0x000107c288e0();
LAB_1087cb0b0:
          func_0x0001087ce4fc();
          func_0x0001087ce660();
          func_0x0001087ce318();
          (*extraout_x8_34)();
        }
        uStack_268 = (undefined ******)0x0;
        pppppuStack_270 = (undefined *****)0x0;
        pppppuStack_278 = (undefined *****)0x0;
        pppppuStack_280 = (undefined *****)0x0;
        pppppuStack_260 = (undefined *****)CONCAT44(pppppuStack_260._4_4_,0x3f800000);
        FUN_1086a67dc(auStack_338,auStack_be8,appppuStack_b60,&pppppuStack_770,
                      *(undefined8 *)(lStack_1868 + 0x28),*(undefined8 *)(lStack_1868 + 0x70),
                      &pppppuStack_280);
        FUN_1087ccdb4(pppppuStack_1860 + 0xfa,appppuStack_b60,auStack_338);
        func_0x0001087ce4fc();
        func_0x0001087ce8e4();
        FUN_10886488c();
        pppppuStack_958 = (undefined *****)0x0;
        pppppuStack_960 = (undefined *****)0x0;
        pppppuStack_950 = (undefined *****)0x0;
        func_0x0001087ce230();
        func_0x000104be7444();
        for (ppppppuVar34 = (undefined ******)pppppuStack_270; ppppppuVar34 != (undefined ******)0x0
            ; ppppppuVar34 = (undefined ******)*ppppppuVar34) {
          func_0x0001087ce230(auStack_c30);
          FUN_10867d0d8();
        }
        func_0x0001087ce6cc(pppppuStack_1860 + 0xff,appppuStack_b60);
        FUN_1087ccf64();
        func_0x0001087ce230();
        func_0x000104be1274();
        func_0x0001087ce7f8();
        func_0x0001087ce200();
        func_0x00010867bb84();
      }
      else {
        if ((bStack_588 & 1) == 0) {
          func_0x0001087ce4fc();
          func_0x0001087ce344();
          FUN_108862de8();
          func_0x0001087ce514();
          func_0x0001087ce200();
          func_0x000107c28998();
          func_0x0001087ce224();
          func_0x0001087ce4f0();
          func_0x000107c2894c();
          func_0x0001087ce230();
          func_0x000107c288dc();
          func_0x0001087ce200();
          func_0x000107c28948();
          bVar19 = bStack_588;
        }
        else {
          bVar19 = 1;
        }
        if ((((bVar19 & 1) != 0) && ((bStack_708 & 1) != 0)) && ((bStack_400 & 1) == 0)) {
          func_0x0001087ce648(pppppuStack_710);
          func_0x0001087ce4fc();
          func_0x0001087ce2cc();
          FUN_10885ff98();
        }
      }
      bVar19 = bStack_588;
      if (bStack_588 == 1) {
        func_0x0001087ce570();
        FUN_1087cc638(pppppuStack_1860);
        lVar41 = 0x11372cd30;
        if (*(long *)(lStack_1868 + 0x108) != 0) {
          lVar41 = *(long *)(lStack_1868 + 0x108);
        }
        if ((uStack_c20 & 1) == 0) {
          auStack_2d0[0] = 0;
          cStack_2b0 = '\0';
          if ((uStack_c20 >> 2 & 1) == 0) goto LAB_1087cb1e4;
LAB_1087cb29c:
          FUN_1086ab8b8(&pppppuStack_9e0,uStack_ba8);
          lVar45 = lStack_b78;
          if ((cStack_2b0 != '\x01') || ((bStack_998 & 1) == 0)) goto LAB_1087cb1ec;
          FUN_10883e734(&pppppuStack_300,&pppppuStack_9e0,lVar41);
          cVar2 = cStack_2d8;
          bVar4 = bStack_2f0;
          ppppppuVar31 = (undefined ******)(ulong)bStack_2f0;
          if (((bStack_2f0 & 1) == 0) && (cStack_2d8 == '\0')) goto LAB_1087cb1ec;
          func_0x000107c29ee0(&pppppuStack_320,auStack_2d0);
          uVar15 = uStack_930;
          pppppuStack_958 = pppppuStack_318;
          pppppuStack_960 = pppppuStack_320;
          pppppuStack_950 = pppppuStack_310;
          pppppuStack_310 = (undefined *****)0x0;
          pppppuStack_318 = (undefined *****)0x0;
          pppppuStack_320 = (undefined *****)0x0;
          pppppuStack_940 = pppppuStack_2f8;
          uVar20 = pppppuStack_300._0_4_;
          if (bVar4 == 0) {
            uVar20 = 0;
            pppppuStack_940 = (undefined *****)0x0;
          }
          uStack_948 = CONCAT44(uStack_948._4_4_,uVar20);
          lStack_938 = lVar45;
          uStack_930 = CONCAT71(uStack_930._1_7_,uVar9 == 3);
          uStack_930._5_3_ = SUB83(uVar15,5);
          uStack_930._0_5_ = CONCAT14(uStack_9a0,CONCAT22(1,(undefined2)uStack_930));
          if (cVar2 == '\0') {
            uStack_920 = false;
            uStack_928 = uStack_928 & 0xffffffffffffff00;
            uStack_918 = uStack_918 & 0xffffffffffffff00;
          }
          else {
            uStack_928 = (ulong)uStack_2e8;
            uStack_920 = uStack_928 != 0;
            uStack_918 = uStack_2e0;
          }
          auStack_910[0] = cVar2 != '\0' && uStack_2e0 != 0;
          func_0x0001087ce200();
          func_0x0001087ce4f0();
          FUN_1086d736c();
          func_0x0001087ce180();
          func_0x000107c27914(&pppppuStack_320);
        }
        else {
          func_0x0001086aaa9c(auStack_2d0,uStack_bb8);
          if ((uStack_c20 >> 2 & 1) != 0) goto LAB_1087cb29c;
LAB_1087cb1e4:
          pppppuStack_9e0 = (undefined *****)((ulong)pppppuStack_9e0 & 0xffffffffffffff00);
          bStack_998 = 0;
LAB_1087cb1ec:
          pppppuStack_280 = (undefined *****)((ulong)pppppuStack_280 & 0xffffffffffffff00);
          bStack_228 = 0;
        }
        ppppppuVar34 = &pppppuStack_9e0;
        FUN_1086d73b8();
        func_0x0001087ce804();
        uVar7 = (int)(bStack_228 - 1) < 0;
        if (bStack_228 == 1) {
          func_0x0001087ce230();
          func_0x0001087ce570();
          func_0x000107c27994();
          func_0x0001087ce230();
          FUN_108848654();
          ppppppuVar39 = (undefined ******)pppppuStack_1860[0xe4];
          if (ppppppuVar39 != (undefined ******)0x0) {
            pbVar44 = (byte *)((long)ppppppuVar39 + -1);
            uVar9 = (uint)ppppppuVar39;
            if (((ulong)ppppppuVar39 & (ulong)pbVar44) == 0) {
              ppppppuVar31 = (undefined ******)((ulong)(uVar9 - 1) & (ulong)ppppppuVar34);
              uVar7 = false;
            }
            else {
              uVar7 = (long)ppppppuVar34 - (long)ppppppuVar39 < 0;
              ppppppuVar31 = ppppppuVar34;
              if (ppppppuVar39 <= ppppppuVar34) {
                uVar32 = 0;
                if (uVar9 != 0) {
                  uVar32 = (uint)ppppppuVar34 / uVar9;
                }
                ppppppuVar31 = (undefined ******)(ulong)((uint)ppppppuVar34 - uVar32 * uVar9);
              }
            }
            ppppuVar23 = (*ppppppuVar29)[(long)ppppppuVar31];
            if (ppppuVar23 != (undefined ****)0x0) {
              do {
                while( true ) {
                  ppppuVar23 = (undefined ****)*ppppuVar23;
                  if (ppppuVar23 == (undefined ****)0x0) goto LAB_1087cb600;
                  ppppppuVar25 = (undefined ******)ppppuVar23[1];
                  uVar7 = (long)ppppppuVar25 - (long)ppppppuVar34 < 0;
                  if (ppppppuVar25 != ppppppuVar34) break;
                  ppppuVar16 = ppppuVar23 + 2;
                  func_0x0001087ce4f0();
                  func_0x000107c28078();
                  if (((ulong)ppppuVar16 & 1) != 0) goto LAB_1087cb93c;
                }
                if (((ulong)ppppppuVar39 & (ulong)pbVar44) == 0) {
                  ppppppuVar25 = (undefined ******)((ulong)ppppppuVar25 & (ulong)pbVar44);
                }
                else if (ppppppuVar39 <= ppppppuVar25) {
                  uVar12 = 0;
                  if (ppppppuVar39 != (undefined ******)0x0) {
                    uVar12 = (ulong)ppppppuVar25 / (ulong)ppppppuVar39;
                  }
                  ppppppuVar25 = (undefined ******)
                                 ((long)ppppppuVar25 - uVar12 * (long)ppppppuVar39);
                }
                uVar7 = (long)ppppppuVar25 - (long)ppppppuVar31 < 0;
              } while (ppppppuVar25 == ppppppuVar31);
            }
          }
LAB_1087cb600:
          pppppuVar33 = (undefined *****)0x80;
          __Znwm();
          uStack_298 = 0;
          pppppuVar33[3] = (undefined ****)pppppuStack_958;
          pppppuVar33[2] = (undefined ****)pppppuStack_960;
          *pppppuVar33 = (undefined ****)0x0;
          pppppuVar33[1] = (undefined ****)ppppppuVar34;
          ppppuStack_2a8 = (undefined ****)pppppuVar33;
          pppppuStack_2a0 = (undefined *****)ppppppuVar30;
          func_0x0001087ce6b4();
          func_0x0001087ce464(pppppuVar33 + 5);
          FUN_10871bf30();
          uStack_298 = CONCAT71(uStack_298._1_7_,1);
          func_0x0001087ce5cc(pppppuStack_1860[0xe6]);
          if ((ppppppuVar39 == (undefined ******)0x0) || (func_0x0001087ce5c0(), (bool)uVar7)) {
            func_0x0001087ce8ac();
            bVar6 = (undefined ******)0x2 < ppppppuVar39;
            bVar8 = ppppppuVar39 == (undefined ******)0x3;
            func_0x0001087ce16c();
            uVar15 = extraout_x8_39;
            if (!bVar6 || bVar8) {
              uVar15 = extraout_x9_16;
            }
            func_0x000108793870(ppppppuVar29,uVar15);
            ppppppuVar39 = (undefined ******)pppppuStack_1860[0xe4];
            if (((ulong)ppppppuVar39 & (ulong)((long)ppppppuVar39 + -1)) == 0) {
              ppppppuVar31 = (undefined ******)
                             ((ulong)((int)ppppppuVar39 - 1) & (ulong)ppppppuVar34);
            }
            else {
              ppppppuVar31 = ppppppuVar34;
              if (ppppppuVar39 <= ppppppuVar34) {
                uVar12 = 0;
                if (ppppppuVar39 != (undefined ******)0x0) {
                  uVar12 = (ulong)ppppppuVar34 / (ulong)ppppppuVar39;
                }
                ppppppuVar31 = (undefined ******)((long)ppppppuVar34 - uVar12 * (long)ppppppuVar39);
              }
            }
          }
          pppppuVar33 = *ppppppuVar29;
          if (pppppuVar33[(long)ppppppuVar31] == (undefined ****)0x0) {
            *ppppuStack_2a8 = (undefined ***)*ppppppuVar30;
            *ppppppuVar30 = (undefined *****)ppppuStack_2a8;
            pppppuVar33[(long)ppppppuVar31] = (undefined ****)ppppppuVar30;
            if ((undefined ****)*ppppuStack_2a8 != (undefined ****)0x0) {
              ppppppuVar31 = (undefined ******)(*ppppuStack_2a8)[1];
              if (((ulong)ppppppuVar39 & (ulong)((long)ppppppuVar39 + -1)) == 0) {
                ppppppuVar31 = (undefined ******)
                               ((ulong)ppppppuVar31 & (ulong)((long)ppppppuVar39 + -1));
              }
              else if (ppppppuVar39 <= ppppppuVar31) {
                uVar12 = 0;
                if (ppppppuVar39 != (undefined ******)0x0) {
                  uVar12 = (ulong)ppppppuVar31 / (ulong)ppppppuVar39;
                }
                ppppppuVar31 = (undefined ******)((long)ppppppuVar31 - uVar12 * (long)ppppppuVar39);
              }
              pppppuVar33[(long)ppppppuVar31] = ppppuStack_2a8;
            }
          }
          else {
            func_0x0001087ce448();
          }
          ppppuStack_2a8 = (undefined ****)0x0;
          pppppuStack_1860[0xe6] = (undefined ****)((long)pppppuStack_1860[0xe6] + 1);
          func_0x0001087ce7e0();
LAB_1087cb93c:
          func_0x0001087ce180();
        }
        func_0x0001087ce200();
        FUN_1086d0498();
        uStack_290 = 0;
        uStack_28c = 0;
        func_0x0001087ce390(**(undefined8 **)(lStack_1868 + 0x58));
        (*extraout_x8_42)();
        func_0x0001087ce324();
        func_0x000107c31428();
      }
      else {
        func_0x0001087ce278();
        uStack_288 = 0;
        uStack_284 = 0;
        func_0x0001087ce390();
        func_0x0001087ce428();
        pppppuStack_17b0 = (undefined *****)0x1c00000007;
        pppppuStack_17a8 = (undefined *****)CONCAT71(pppppuStack_17a8._1_7_,1);
        func_0x0001087ce8c0();
      }
      func_0x0001087ce2ec();
      func_0x0001087ce224();
      func_0x000107c288dc();
      func_0x0001087ce20c();
      func_0x000107c288c8();
      if ((bVar19 & 1) != 0) {
        func_0x0001087ce200();
        func_0x000104be0ccc();
        bVar8 = (char)uStack_268 == '\x01';
        if (bVar8) {
          plVar35 = *(long **)(lStack_1868 + 0x80);
          func_0x0001087ce350(uStack_bb8);
          lVar41 = extraout_x9_18 + 0xb58;
          if (!bVar8) {
            lVar41 = extraout_x8_43;
          }
          func_0x0001087ce338(lVar41);
          func_0x000107c29ee0();
          func_0x0001087ce318(*(undefined8 *)(*plVar35 + 0x10));
          func_0x0001087ce5d8();
          (*extraout_x8_44)(plVar35);
          func_0x0001087ce224();
          func_0x000107c27914();
        }
        func_0x000107c2825c(&pppppuStack_3a0);
        func_0x0001087ce268();
        func_0x0001087ce150();
        pppppuStack_17b0 = (undefined *****)0x0;
        pppppuStack_17a8 = (undefined *****)((ulong)pppppuStack_17a8 & 0xffffffffffffff00);
        func_0x0001087ce8c0();
        func_0x0001087ce200();
        func_0x000107c279c4();
      }
    }
    goto LAB_1087cba54;
  }
  func_0x0001087ce868();
  if ((bool)uVar7) {
    pppppuStack_9e0 = (undefined *****)0x0;
    func_0x000107c28258();
    pppppuVar33 = pppppuStack_1860;
    pppppuStack_9d0 = (undefined *****)CONCAT71(pppppuStack_9d0._1_7_,1);
    uVar12 = (ulong)pppppuStack_280 >> 0x28;
    pppppuStack_280._0_4_ = (uint)pppppuStack_280 & 0xffffff00;
    pppppuStack_280._0_5_ = (uint5)(uint)pppppuStack_280;
    pppppuStack_280 = (undefined *****)CONCAT35((int3)uVar12,(uint5)pppppuStack_280);
    pppppuStack_9d8 = (undefined *****)ppppppuVar34;
    func_0x0001087ce390(**(undefined8 **)(lStack_1868 + 0x58));
    func_0x0001087ce5d8();
    func_0x0001087ce428();
    pppppuVar40 = pppppuStack_a38;
    ppppppuVar31 = (undefined ******)0x1e00000007;
    if (*(int *)(pppppuVar33 + 0x97) == 0) goto LAB_1087c9544;
    if (cStack_a18 == '\x01') {
      uVar9 = 0;
      if (((undefined ******)pppppuStack_a38 != (undefined ******)0x0) &&
         (puStack_a28 != (undefined4 *)0x0)) {
        ppppppuVar34 = (undefined ******)appppuStack_cb0;
        FUN_108848654();
        pbVar44 = (byte *)((long)pppppuVar40 + -1);
        if (((ulong)pppppuVar40 & (ulong)pbVar44) == 0) {
          ppppppuVar39 = (undefined ******)((ulong)ppppppuVar34 & (ulong)pbVar44);
        }
        else {
          ppppppuVar39 = ppppppuVar34;
          if (pppppuVar40 <= ppppppuVar34) {
            uVar9 = 0;
            uVar32 = (uint)pppppuVar40;
            if (uVar32 != 0) {
              uVar9 = (uint)ppppppuVar34 / uVar32;
            }
            ppppppuVar39 = (undefined ******)(ulong)((uint)ppppppuVar34 - uVar9 * uVar32);
          }
        }
        pppppuVar33 = (undefined *****)pppppuStack_a40[(long)ppppppuVar39];
        if (pppppuVar33 != (undefined *****)0x0) {
          do {
            while( true ) {
              pppppuVar33 = (undefined *****)*pppppuVar33;
              if (pppppuVar33 == (undefined *****)0x0) goto LAB_1087ca900;
              ppppppuVar25 = (undefined ******)pppppuVar33[1];
              if (ppppppuVar34 != ppppppuVar25) break;
              iVar10 = (int)pppppuVar33 + 0x10;
              func_0x0001087ce508();
              func_0x000107c28078();
              if (iVar10 != 0) {
                uVar9 = *(uint *)(pppppuVar33 + 5);
                goto LAB_1087ca910;
              }
            }
            if (((ulong)pppppuVar40 & (ulong)pbVar44) == 0) {
              ppppppuVar25 = (undefined ******)((ulong)ppppppuVar25 & (ulong)pbVar44);
            }
            else if (pppppuVar40 <= ppppppuVar25) {
              uVar12 = 0;
              if ((undefined ******)pppppuVar40 != (undefined ******)0x0) {
                uVar12 = (ulong)ppppppuVar25 / (ulong)pppppuVar40;
              }
              ppppppuVar25 = (undefined ******)((long)ppppppuVar25 - uVar12 * (long)pppppuVar40);
            }
          } while (ppppppuVar25 == ppppppuVar39);
        }
LAB_1087ca900:
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
LAB_1087ca910:
    if (*(uint *)(pppppuStack_1860 + 0x97) <= uVar9) goto LAB_1087c9544;
    ppppppuVar31 = ppppppuVar36;
    if (((ulong)*ppppppuVar36 & 1) != 0) {
      ppppppuVar31 = (undefined ******)((long)*ppppppuVar36 + (long)(int)uVar9 * 8 + 7);
    }
    pppppuVar33 = *ppppppuVar31;
    func_0x0001087ce324();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    FUN_108845754(&pppppuStack_17b0,pppppuVar33);
    pppppuStack_270 = pppppuStack_760;
    pppppuStack_278 = pppppuStack_768;
    pppppuStack_280 = pppppuStack_770;
    pppppuStack_760 = (undefined *****)0x0;
    pppppuStack_770 = (undefined *****)0x0;
    pppppuStack_768 = (undefined *****)0x0;
    pppppuStack_260 = pppppuStack_17a8;
    uStack_268 = (undefined ******)pppppuStack_17b0;
    uStack_258 = uStack_17a0;
    pppppuStack_17b0 = (undefined *****)0x0;
    pppppuStack_17a8 = (undefined *****)0x0;
    uStack_17a0 = 0;
    func_0x000107c27a50(&pppppuStack_17b0);
    func_0x0001087ce324();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    pppppuVar33 = *ppppppuVar21;
    if (pppppuVar33 < *ppppppuVar11) {
      func_0x0001087ce508();
      func_0x0001087ce8e4();
      FUN_1087cd1c0(pppppuVar33);
      pppppuVar33 = pppppuVar33 + 0x11;
      *ppppppuVar21 = pppppuVar33;
      ppppppuVar31 = (undefined ******)pppppuStack_1860;
    }
    else {
      pppppuVar40 = (undefined *****)pppppuStack_1860[0xda];
      if (0x1e1e1e1e1e1e1e1 < ((long)pppppuVar33 - (long)pppppuVar40) / 0x88 + 1U) {
        FUN_1087931a0();
        goto LAB_1087cbf24;
      }
      func_0x0001087ce720();
      lVar41 = extraout_x9_13;
      if (0xf0f0f0f0f0f0ef < extraout_x8_25) {
        lVar41 = 0x1e1e1e1e1e1e1e1;
      }
      pppppuStack_710 = (undefined *****)ppppppuVar11;
      if (lVar41 == 0) {
        ppppppuVar31 = (undefined ******)0x0;
      }
      else {
        ppppppuVar31 = ppppppuVar11;
        FUN_1087931ac();
      }
      pbVar44 = (byte *)((long)ppppppuVar31 + ((long)pppppuVar33 - (long)pppppuVar40));
      pppppuStack_718 = (undefined *****)(ppppppuVar31 + lVar41 * 0x11);
      pppppuStack_730 = (undefined *****)ppppppuVar31;
      pppppuStack_728 = (undefined *****)pbVar44;
      pppppuStack_720 = (undefined *****)pbVar44;
      func_0x0001087ce508();
      func_0x0001087ce8e4();
      FUN_1087cd1c0();
      pppppuStack_720 = (undefined *****)(pbVar44 + 0x88);
      pppppuVar38 = (undefined *****)pppppuStack_1860[0xdb];
      pppppuVar40 = (undefined *****)pppppuStack_1860[0xda];
      ppppppuVar34 = (undefined ******)
                     (pbVar44 + (((long)pppppuVar38 - (long)pppppuVar40) / -0x88) * 0x88);
      pppppuStack_958 = (undefined *****)apppppuStack_7b0;
      pppppuStack_950 = (undefined *****)&pppppuStack_300;
      ppppppuVar31 = ppppppuVar34;
      pppppuStack_960 = (undefined *****)ppppppuVar11;
      apppppuStack_7b0[0] = (undefined *****)ppppppuVar34;
      for (pppppuVar33 = pppppuVar40; pppppuStack_300 = (undefined *****)ppppppuVar31,
          pppppuVar33 != pppppuVar38; pppppuVar33 = pppppuVar33 + 0x11) {
        func_0x000105291934(ppppppuVar31,pppppuVar33);
        FUN_10861b4c0(ppppppuVar31 + 0xb,pppppuVar33 + 0xb);
        ppppppuVar31 = (undefined ******)(pppppuStack_300 + 0x11);
      }
      uStack_948 = CONCAT71(uStack_948._1_7_,1);
      for (; pppppuVar40 != pppppuVar38; pppppuVar40 = pppppuVar40 + 0x11) {
        func_0x0001086a9160(pppppuVar40);
      }
      func_0x0001087ce230();
      FUN_10879329c();
      ppppppuVar31 = (undefined ******)pppppuStack_1860;
      pppppuStack_730 = (undefined *****)pppppuStack_1860[0xda];
      pppppuStack_1860[0xda] = (undefined ****)ppppppuVar34;
      pppppuVar33 = (undefined *****)pppppuStack_1860[0xdc];
      ppppppuVar18[0xdc] = pppppuStack_718;
      *ppppppuVar21 = pppppuStack_720;
      pppppuStack_728 = pppppuStack_730;
      pppppuStack_720 = pppppuStack_730;
      pppppuStack_718 = pppppuVar33;
      func_0x0001087ce224();
      FUN_1087cd200();
      func_0x0001087ce888();
      pppppuVar33 = extraout_x8_26;
    }
    ppppppuVar31[0xdb] = pppppuVar33;
    pppppuVar40 = ppppppuVar31[0x13];
    for (pppppuVar33 = ppppppuVar31[0x12]; pppppuVar38 = pppppuVar40, pppppuVar33 != pppppuVar40;
        pppppuVar33 = pppppuVar33 + 0xb) {
      func_0x0001087ce508();
      pppppuVar42 = pppppuVar33;
      func_0x000107c28078();
      pppppuVar38 = pppppuVar33;
      if ((int)pppppuVar42 != 0) goto LAB_1087cab7c;
    }
    goto LAB_1087cabb0;
  }
  func_0x0001087ce93c();
  ppppuVar23 = ppppuStack_d58;
  if (!(bool)uVar7) {
    pppppuVar33 = pppppuStack_d60;
    if (cStack_d48 == '\x01') {
LAB_1087ca050:
      if (pppppuVar33 != (undefined *****)ppppuVar23) {
        ppuVar37 = &PTR_PTR_11327e840;
        if (*(int *)(ppppppuVar47 + 0xd) == 0xf) {
          ppuVar37 = (undefined **)ppppppuVar47[0xc];
        }
        iVar10 = *(int *)pppppuVar33;
        pppppuStack_960 = (undefined *****)0x0;
        func_0x000107c28258();
        pppppuStack_950 = (undefined *****)CONCAT71(pppppuStack_950._1_7_,1);
        pppppuStack_958 = (undefined *****)ppppppuVar34;
        func_0x0001087ce278();
        func_0x0001087ce344();
        *extraout_x8_15 = 0;
        extraout_x8_15[4] = 0;
        func_0x0001087ce390();
        func_0x0001087ce5d8();
        func_0x0001087ce428();
        bVar8 = *(byte *)(pppppuStack_1860 + 0xa9) == 1;
        if (!bVar8) {
LAB_1087ca160:
          pppppuStack_580 = (undefined *****)0x2b00000007;
          uVar7 = 1;
          goto LAB_1087ca36c;
        }
        func_0x0001087ce350(ppuVar37[3]);
        ppppuVar16 = (undefined ****)(extraout_x9_09 + 0xb58);
        if (!bVar8) {
          ppppuVar16 = extraout_x8_16;
        }
        pppppuVar40 = (undefined *****)&PTR_PTR_113280a08;
        if ((undefined *****)pppppuStack_1860[0xa4] != (undefined *****)0x0) {
          pppppuVar40 = (undefined *****)pppppuStack_1860[0xa4];
        }
        uVar7 = pppppuVar40[3] == (undefined ****)0x0;
        ppppuVar14 = (undefined ****)(extraout_x9_09 + 0xb58);
        if (!(bool)uVar7) {
          ppppuVar14 = pppppuVar40[3];
        }
        func_0x000107c287e8(ppppuVar14,ppppuVar16);
        if (((ulong)ppppuVar14 & 1) == 0) goto LAB_1087ca160;
        func_0x0001087ce350(ppuVar37[3]);
        lVar41 = extraout_x9_10 + 0xb58;
        if (!(bool)uVar7) {
          lVar41 = extraout_x8_17;
        }
        func_0x0001087ce810(lVar41);
        ppppppuVar34 = (undefined ******)pppppuStack_768;
        ppppppuVar31 = (undefined ******)pppppuStack_770;
        pppppuStack_9d8 = pppppuStack_768;
        pppppuStack_9e0 = pppppuStack_770;
        pppppuStack_9d0 = pppppuStack_760;
        pppppuStack_760 = (undefined *****)0x0;
        pppppuStack_768 = (undefined *****)0x0;
        pppppuStack_770 = (undefined *****)0x0;
        pppppuVar40 = ppppppuVar18[0xe1];
        if (pppppuVar40 < *ppppppuVar1) {
          *(int *)pppppuVar40 = iVar10;
          func_0x000107c27994(pppppuVar40 + 1,&pppppuStack_9e0);
          pppppuVar40 = pppppuVar40 + 4;
          ppppppuVar18[0xe1] = pppppuVar40;
          ppppppuVar39 = (undefined ******)pppppuStack_1860;
        }
        else {
          lVar41 = (long)pppppuVar40 - (long)pppppuStack_1860[0xe0];
          uVar12 = (lVar41 >> 5) + 1;
          if (uVar12 >> 0x3b != 0) goto LAB_1087cbf10;
          uVar24 = (long)*ppppppuVar1 - (long)pppppuStack_1860[0xe0];
          uVar27 = (long)uVar24 >> 4;
          if (uVar27 <= uVar12) {
            uVar27 = uVar12;
          }
          if (0x7fffffffffffffdf < uVar24) {
            uVar27 = 0x7ffffffffffffff;
          }
          pppppuStack_260 = (undefined *****)ppppppuVar1;
          if (uVar27 == 0) {
            ppppppuVar39 = (undefined ******)0x0;
          }
          else {
            ppppppuVar39 = ppppppuVar1;
            FUN_108793698();
          }
          pppppuVar40 = (undefined *****)((long)ppppppuVar39 + lVar41);
          uStack_268 = ppppppuVar39 + uVar27 * 4;
          *(int *)pppppuVar40 = iVar10;
          pppppuStack_280 = (undefined *****)ppppppuVar39;
          pppppuStack_278 = pppppuVar40;
          pppppuStack_270 = pppppuVar40;
          func_0x000107c27994(pppppuVar40 + 1,&pppppuStack_9e0);
          pppppuStack_270 = pppppuVar40 + 4;
          pppppuVar42 = (undefined *****)pppppuStack_1860[0xe1];
          pppppuVar38 = (undefined *****)pppppuStack_1860[0xe0];
          ppppppuVar25 = (undefined ******)
                         ((long)pppppuVar40 + ((long)pppppuVar38 - (long)pppppuVar42));
          pppppuStack_17b0 = (undefined *****)ppppppuVar25;
          pppppuStack_300 = (undefined *****)ppppppuVar25;
          func_0x0001087ce604(ppppppuVar1);
          ppppppuVar39 = ppppppuVar25;
          for (pppppuVar40 = pppppuVar38; pppppuVar40 != pppppuVar42; pppppuVar40 = pppppuVar40 + 4)
          {
            *(undefined4 *)ppppppuVar39 = *(undefined4 *)pppppuVar40;
            ppppppuVar39[2] = (undefined *****)0x0;
            ppppppuVar39[3] = (undefined *****)0x0;
            ppppppuVar39[1] = (undefined *****)0x0;
            ppppppuVar34 = (undefined ******)pppppuVar40[2];
            ppppppuVar31 = (undefined ******)pppppuVar40[1];
            ppppppuVar39[2] = (undefined *****)ppppppuVar34;
            ppppppuVar39[1] = (undefined *****)ppppppuVar31;
            ppppppuVar39[3] = (undefined *****)pppppuVar40[3];
            pppppuVar40[1] = (undefined ****)0x0;
            pppppuVar40[2] = (undefined ****)0x0;
            pppppuVar40[3] = (undefined ****)0x0;
            ppppppuVar39 = ppppppuVar39 + 4;
            pppppuStack_17b0 = (undefined *****)ppppppuVar39;
          }
          pppppuStack_718 = (undefined *****)CONCAT71(pppppuStack_718._1_7_,1);
          for (; pppppuVar38 != pppppuVar42; pppppuVar38 = pppppuVar38 + 4) {
            func_0x000107c27914(pppppuVar38 + 1);
          }
          func_0x0001087ce224();
          FUN_10879376c();
          ppppppuVar39 = (undefined ******)pppppuStack_1860;
          pppppuVar40 = (undefined *****)pppppuStack_1860[0xe0];
          pppppuStack_1860[0xe0] = (undefined ****)ppppppuVar25;
          func_0x0001087ce904(pppppuVar40);
          ppppppuVar18[0xe2] = (undefined *****)ppppppuVar34;
          ppppppuVar18[0xe1] = (undefined *****)ppppppuVar31;
          pppppuStack_280 = (undefined *****)extraout_x8_18;
          pppppuStack_278 = (undefined *****)extraout_x8_18;
          pppppuStack_270 = (undefined *****)extraout_x8_18;
          uStack_268 = extraout_x9_11;
          func_0x0001087ce200();
          func_0x0001087cd358();
          func_0x0001087ce888();
          pppppuVar40 = extraout_x8_19;
        }
        ppppppuVar39[0xe1] = pppppuVar40;
        pppppuVar38 = ppppppuVar39[0x19];
        for (pppppuVar40 = ppppppuVar39[0x18]; pppppuVar40 != pppppuVar38;
            pppppuVar40 = (undefined *****)((long)pppppuVar40 + 4)) {
          pppppuVar42 = pppppuVar40;
          if (*(int *)pppppuVar40 == iVar10) goto LAB_1087ca2ec;
        }
        goto LAB_1087ca33c;
      }
      goto LAB_1087c9564;
    }
    pppppuStack_580 = (undefined *****)0x1a00000007;
    ppppppuVar31 = (undefined ******)pppppuStack_580;
    goto LAB_1087c9544;
  }
  pppppuStack_9e0 = (undefined *****)0x0;
  func_0x000107c28258();
  pppppuStack_9d0 = (undefined *****)CONCAT71(pppppuStack_9d0._1_7_,1);
  pppppuStack_9d8 = (undefined *****)ppppppuVar34;
  func_0x0001087ce278();
  func_0x0001087ce344();
  *extraout_x8_11 = 0;
  extraout_x8_11[4] = 0;
  func_0x0001087ce390();
  func_0x0001087ce5d8();
  func_0x0001087ce428();
  puVar13 = auStack_d08;
  func_0x000107c278d0(puVar13,(ulong)puStack_d28 & 0xfffffffffffffffc);
  if (((ulong)puVar13 & 1) == 0) {
    ppppppuVar31 = (undefined ******)0x1f00000007;
LAB_1087ca5e0:
    uVar7 = 1;
    pppppuStack_580 = (undefined *****)ppppppuVar31;
    goto LAB_1087cb914;
  }
  ppppppuVar31 = (undefined ******)pppppuStack_1930;
  if ((uStack_d30 & 1) == 0) goto LAB_1087ca5e0;
  func_0x0001087ce810(uStack_d20);
  ppppppuVar34 = (undefined ******)pppppuStack_768;
  ppppppuVar31 = (undefined ******)pppppuStack_770;
  pppppuStack_958 = pppppuStack_768;
  pppppuStack_960 = pppppuStack_770;
  pppppuStack_950 = pppppuStack_760;
  pppppuStack_760 = (undefined *****)0x0;
  pppppuStack_768 = (undefined *****)0x0;
  pppppuStack_770 = (undefined *****)0x0;
  uStack_948 = CONCAT71(uStack_948._1_7_,iStack_d10 == 4 & bStack_d18);
  pppppuVar33 = (undefined *****)pppppuStack_1860[0xde];
  if (pppppuVar33 < pppppuStack_1860[0xdf]) {
    func_0x0001087ce58c();
    func_0x0001087ce6cc();
    FUN_1087cd2d0(pppppuVar33);
    pppppuVar33 = pppppuVar33 + 7;
    pppppuStack_1860[0xde] = (undefined ****)pppppuVar33;
    ppppppuVar39 = (undefined ******)pppppuStack_1860;
  }
  else {
    pppppuVar40 = (undefined *****)pppppuStack_1860[0xdd];
    if (0x492492492492492 < ((long)pppppuVar33 - (long)pppppuVar40) / 0x38 + 1U) {
      FUN_108793420();
      goto LAB_1087cbf24;
    }
    func_0x0001087ce720();
    lVar41 = extraout_x9_12;
    if (0x249249249249248 < extraout_x8_24) {
      lVar41 = 0x492492492492492;
    }
    pppppuStack_260 = (undefined *****)ppppppuVar26;
    if (lVar41 == 0) {
      ppppppuVar39 = (undefined ******)0x0;
    }
    else {
      ppppppuVar39 = ppppppuVar26;
      FUN_10879342c();
    }
    pppppuVar33 = (undefined *****)((long)ppppppuVar39 + ((long)pppppuVar33 - (long)pppppuVar40));
    uStack_268 = ppppppuVar39 + lVar41 * 7;
    pppppuStack_280 = (undefined *****)ppppppuVar39;
    pppppuStack_278 = pppppuVar33;
    pppppuStack_270 = pppppuVar33;
    func_0x0001087ce58c();
    func_0x0001087ce6cc();
    FUN_1087cd2d0();
    pppppuStack_270 = pppppuVar33 + 7;
    pppppuVar38 = (undefined *****)pppppuStack_1860[0xde];
    pppppuVar40 = (undefined *****)pppppuStack_1860[0xdd];
    ppppppuVar25 = (undefined ******)
                   (pppppuVar33 + (((long)pppppuVar38 - (long)pppppuVar40) / -0x38) * 7);
    pppppuStack_17b0 = (undefined *****)ppppppuVar25;
    pppppuStack_300 = (undefined *****)ppppppuVar25;
    func_0x0001087ce604(ppppppuVar26);
    ppppppuVar39 = ppppppuVar25;
    for (pppppuVar33 = pppppuVar40; pppppuVar33 != pppppuVar38; pppppuVar33 = pppppuVar33 + 7) {
      ppppppuVar34 = (undefined ******)pppppuVar33[1];
      ppppppuVar31 = (undefined ******)*pppppuVar33;
      ppppppuVar39[2] = (undefined *****)pppppuVar33[2];
      ppppppuVar39[1] = (undefined *****)ppppppuVar34;
      *ppppppuVar39 = (undefined *****)ppppppuVar31;
      pppppuVar33[1] = (undefined ****)0x0;
      pppppuVar33[2] = (undefined ****)0x0;
      *pppppuVar33 = (undefined ****)0x0;
      FUN_10861b208(ppppppuVar39 + 3,pppppuVar33 + 3);
      ppppppuVar39 = (undefined ******)(pppppuStack_17b0 + 7);
      pppppuStack_17b0 = (undefined *****)ppppppuVar39;
    }
    pppppuStack_718 = (undefined *****)CONCAT71(pppppuStack_718._1_7_,1);
    for (; pppppuVar40 != pppppuVar38; pppppuVar40 = pppppuVar40 + 7) {
      func_0x0001086a90b4(pppppuVar40);
    }
    func_0x0001087ce224();
    FUN_108793520();
    ppppppuVar39 = (undefined ******)pppppuStack_1860;
    pppppuVar33 = (undefined *****)pppppuStack_1860[0xdd];
    pppppuStack_1860[0xdd] = (undefined ****)ppppppuVar25;
    func_0x0001087ce904(pppppuVar33);
    ppppppuVar39[0xdf] = (undefined *****)ppppppuVar34;
    ppppppuVar39[0xde] = (undefined *****)ppppppuVar31;
    pppppuStack_280 = (undefined *****)extraout_x8_40;
    pppppuStack_278 = (undefined *****)extraout_x8_40;
    pppppuStack_270 = (undefined *****)extraout_x8_40;
    uStack_268 = extraout_x9_17;
    func_0x0001087ce200();
    func_0x0001087cd310();
    func_0x0001087ce888();
    pppppuVar33 = extraout_x8_41;
  }
  ppppppuVar39[0xde] = pppppuVar33;
  pppppuVar40 = ppppppuVar39[0x16];
  for (pppppuVar33 = ppppppuVar39[0x15]; pppppuVar38 = pppppuVar40, pppppuVar33 != pppppuVar40;
      pppppuVar33 = pppppuVar33 + 3) {
    func_0x0001087ce58c();
    pppppuVar42 = pppppuVar33;
    func_0x000107c278d0();
    pppppuVar38 = pppppuVar33;
    if ((int)pppppuVar42 != 0) goto LAB_1087cb898;
  }
  goto LAB_1087cb8cc;
LAB_1087cab7c:
  while (pppppuVar33 = pppppuVar33 + 0xb, pppppuVar33 != pppppuVar40) {
    func_0x0001087ce508();
    pppppuVar42 = pppppuVar33;
    func_0x000107c28078();
    if (((ulong)pppppuVar42 & 1) == 0) {
      FUN_1087a2964(pppppuVar38,pppppuVar33);
      pppppuVar38 = pppppuVar38 + 0xb;
    }
  }
LAB_1087cabb0:
  FUN_1087cd180(ppppppuVar18 + 0x12,pppppuVar38,pppppuStack_1860[0x13]);
  func_0x000107c2825c(&pppppuStack_9e0);
  func_0x0001087ce268();
  func_0x0001087ce150();
  pppppuStack_580 = (undefined *****)((ulong)pppppuStack_580 & 0xffffff0000000000);
  pppppuStack_578 = (undefined *****)((ulong)pppppuStack_578 & 0xffffffffffffff00);
  pppppuStack_570 = (undefined *****)((ulong)pppppuStack_570 & 0xffffffffffffff00);
  uStack_550 = 0;
  func_0x0001087ce200();
  FUN_10861b5cc();
  goto LAB_1087c9550;
LAB_1087ca2ec:
  while (pppppuVar40 = (undefined *****)((long)pppppuVar40 + 4), pppppuVar40 != pppppuVar38) {
    if (*(int *)pppppuVar40 != iVar10) {
      *(int *)pppppuVar42 = *(int *)pppppuVar40;
      pppppuVar42 = (undefined *****)((long)pppppuVar42 + 4);
    }
  }
  if (pppppuVar42 != pppppuVar38) {
    pppppuStack_1860[0x19] = (undefined ****)pppppuVar42;
  }
LAB_1087ca33c:
  func_0x0001087ce790();
  func_0x0001087ce324();
  func_0x000107c27914();
  func_0x0001087ce230();
  func_0x000107c2825c();
  func_0x0001087ce268();
  func_0x0001087ce150();
  uVar7 = 0;
  pppppuStack_580 = (undefined *****)((ulong)pppppuStack_580 & 0xffffff0000000000);
LAB_1087ca36c:
  pppppuStack_578 = (undefined *****)CONCAT71(pppppuStack_578._1_7_,uVar7);
  pppppuStack_570 = (undefined *****)((ulong)pppppuStack_570 & 0xffffffffffffff00);
  uStack_550 = 0;
  func_0x0001087ce2cc(&uStack_b38);
  FUN_1087cc3f0();
  ppppppuVar34 = unaff_x28 + 2;
  func_0x0001087a3168();
  pppppuVar33 = (undefined *****)((long)pppppuVar33 + 4);
  goto LAB_1087ca050;
LAB_1087cb898:
  while (pppppuVar33 = pppppuVar33 + 3, pppppuVar33 != pppppuVar40) {
    func_0x0001087ce58c();
    pppppuVar42 = pppppuVar33;
    func_0x000107c278d0();
    if (((ulong)pppppuVar42 & 1) == 0) {
      func_0x000107c27b9c(pppppuVar38,pppppuVar33);
      pppppuVar38 = pppppuVar38 + 3;
    }
  }
LAB_1087cb8cc:
  if (pppppuVar38 != (undefined *****)pppppuStack_1860[0x16]) {
    func_0x000104bee834(pppppuStack_1860 + 0x15,pppppuVar38);
  }
  func_0x0001087ce180();
  func_0x0001087ce324();
  func_0x000107c27914();
  func_0x000107c2825c(&pppppuStack_9e0);
  func_0x0001087ce268();
  func_0x0001087ce150();
  uVar7 = 0;
  pppppuStack_580 = (undefined *****)((ulong)pppppuStack_580 & 0xffffff0000000000);
LAB_1087cb914:
  pppppuStack_578 = (undefined *****)CONCAT71(pppppuStack_578._1_7_,uVar7);
LAB_1087c9548:
  pppppuStack_570 = (undefined *****)((ulong)pppppuStack_570 & 0xffffffffffffff00);
  uStack_550 = 0;
LAB_1087c9550:
  func_0x0001087ce2cc(&uStack_b38);
  FUN_1087cc3f0();
  ppppppuVar31 = unaff_x28;
LAB_1087c9560:
  func_0x0001087a3168(ppppppuVar31 + 2);
LAB_1087c9564:
  if (uStack_b38 == 0) {
    bVar8 = cStack_b40 == '\x01';
    if (bVar8) {
      func_0x0001087ce570(&uStack_aa0);
      func_0x00010086ca80();
    }
    else {
      func_0x0001087ce868();
      uVar12 = uStack_a80;
      if (bVar8) {
        if (uStack_a80 < uStack_a78) {
          func_0x0001087ce508();
          FUN_108685a78(uVar12);
          uStack_a80 = uVar12 + 0x58;
        }
        else {
          func_0x000105291b60(&lStack_a88,(long)(uStack_a80 - lStack_a88) / 0x58 + 1);
          func_0x0001087ce20c();
          func_0x0001052917dc();
          func_0x0001087ce508(pppppuStack_570);
          FUN_108685a78();
          pppppuStack_570 = pppppuStack_570 + 0xb;
          func_0x0001087ce2cc(&lStack_a88);
          func_0x00010529179c();
          uVar12 = uStack_a80;
          func_0x0001087ce20c();
          func_0x000105291a1c();
          uStack_a80 = uVar12;
        }
      }
      else {
        func_0x0001087ce93c();
        uVar12 = uStack_a68;
        if (bVar8) {
          if (uStack_a68 < uStack_a60) {
            func_0x0001087ce58c();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(uVar12);
            uStack_a68 = uVar12 + 0x18;
          }
          else {
            func_0x000105291f78(&lStack_a70,(long)(uStack_a68 - lStack_a70) / 0x18 + 1);
            func_0x0001087ce20c();
            func_0x000105291c78();
            func_0x0001087ce58c(pppppuStack_570);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
            pppppuStack_570 = pppppuStack_570 + 3;
            func_0x0001087ce2cc(&lStack_a70);
            func_0x000105291c38();
            uVar12 = uStack_a68;
            func_0x0001087ce20c();
            func_0x000105291e34();
            uStack_a68 = uVar12;
          }
        }
        else if (*(int *)(ppppppuVar47 + 0xd) == 0xf) {
          if (ppppuStack_a50 < puStack_a48) {
            *(undefined4 *)ppppuStack_a50 = 0;
            ppppuStack_a50 = (undefined ****)((long)ppppuStack_a50 + 4);
          }
          else {
            func_0x0001052921ec(&pppppuStack_a58,
                                ((long)ppppuStack_a50 - (long)pppppuStack_a58 >> 2) + 1);
            func_0x0001087ce20c();
            func_0x00010529205c();
            *(undefined4 *)pppppuStack_570 = 0;
            ppppppuVar31 = (undefined ******)
                           ((long)pppppuStack_578 - ((long)ppppuStack_a50 - (long)pppppuStack_a58));
            pppppuStack_570 = (undefined *****)((long)pppppuStack_570 + 4);
            _memcpy(ppppppuVar31);
            puVar17 = puStack_a48;
            puStack_a48 = puStack_568;
            ppppuStack_a50 = (undefined ****)pppppuStack_570;
            pppppuStack_570 = pppppuStack_a58;
            puStack_568 = puVar17;
            pppppuStack_578 = pppppuStack_a58;
            pppppuStack_580 = pppppuStack_a58;
            pppppuStack_a58 = (undefined *****)ppppppuVar31;
            func_0x0001087ce20c();
            func_0x0001052920d8();
            func_0x0001087ce888();
            ppppuStack_a50 = (undefined ****)extraout_x8_09;
          }
        }
      }
    }
  }
  if ((*(byte *)(ppppppuVar47 + 2) >> 1 & 1) != 0) {
    pppppuStack_580 = *(undefined ******)(lStack_1868 + 0xf8);
    pppppuStack_570 = *(undefined ******)(lStack_1868 + 0x60);
    puStack_568 = *(undefined4 **)(lStack_1868 + 0x68);
    if (puStack_568 != (undefined4 *)0x0) {
      plVar35 = (long *)(puStack_568 + 2);
      do {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar8) {
          *plVar35 = *plVar35 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_578 = pppppuStack_1860;
    uStack_17c0 = 0;
    uStack_17b8 = 0;
    func_0x000107c288a4(&uStack_17c0);
    func_0x0001087ce20c();
    FUN_1087a7680();
    plVar35 = *(long **)(lStack_1868 + 0x60);
    pppppuVar33 = (undefined *****)&PTR_PTR_11326b328;
    if (ppppppuVar47[4] != (undefined *****)0x0) {
      pppppuVar33 = ppppppuVar47[4];
    }
    FUN_108681744(auStack_17e8,pppppuVar33,7,1);
    func_0x0001087ce7cc(*(undefined8 *)(*plVar35 + 0x50));
    func_0x000107c2882c(auStack_17e8);
    func_0x000107c288a4(unaff_x28 + 2);
  }
  func_0x0001087ce344();
  *(undefined8 *)(extraout_x8_10 + 8) = 0;
  *(undefined8 *)(extraout_x8_10 + 0x10) = 0;
  *(undefined8 *)(extraout_x8_10 + 0x18) = 0;
  pppppuStack_260 = (undefined *****)CONCAT44(pppppuStack_260._4_4_,0x287);
  pppppuStack_280 = (undefined *****)extraout_x8_04;
  func_0x000107c278b8(auStack_1800,&UNK_10f4affde);
  func_0x0001087ce200();
  func_0x000107c28824();
  func_0x0001087ce20c();
  func_0x000107c2884c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1800);
  func_0x0001087ce200();
  func_0x000107c2882c();
  if (bStack_b30 == 1) {
    func_0x000107c278b8(auStack_1818,"error_code");
    func_0x0001087ce20c();
    func_0x000107c28824();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1818);
    pppppuVar33 = ppppppuVar47[2];
    func_0x000107c278b8(auStack_1830,"error_source");
    uVar20 = 3;
    if (((ulong)pppppuVar33 & 2) == 0) {
      uVar20 = 4;
    }
    FUN_10868157c(uVar20);
    func_0x0001087ce20c();
    func_0x000107c28824();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1830);
  }
  param_4 = *(undefined *******)(lStack_1868 + 0x60);
  func_0x0001087ce2cc(auStack_1858);
  func_0x000107c2884c();
  func_0x0001087ce7cc((*param_4)[10]);
  func_0x000107c2882c(auStack_1858);
  uVar9 = *puStack_1870;
  if (uVar9 < 8) {
    uVar32 = 1 << (ulong)(uVar9 & 0x1f);
    if ((((uVar32 & 0x4e) == 0) && (uVar9 = uStack_b38, (uVar32 & 0x31) == 0)) &&
       (uVar9 = 7, ((uint)(uStack_b38 < 8) & 0xf1U >> (ulong)(uStack_b38 & 0x1f)) == 0)) {
      uVar9 = uStack_b38;
    }
  }
  else {
    uVar9 = 7;
  }
  *puStack_1870 = uVar9;
  if ((puStack_1870[2] & 1) == 0) {
    pppppuVar33 = (undefined *****)ppppuStack_1880;
    if ((bStack_b30 & 1) == 0) {
      ppppuVar23 = (undefined ****)0x0;
      goto LAB_1087c9bb8;
    }
  }
  else {
    pppppuVar33 = &ppppuStack_1880;
    if (bStack_b30 == 0) {
      pppppuVar33 = &ppppuStack_1878;
    }
    pppppuVar33 = (undefined *****)*pppppuVar33;
  }
  ppppuVar23 = *pppppuVar33;
LAB_1087c9bb8:
  *(uint *)ppppuStack_1878 = (uint)ppppuVar23;
  *(char *)((long)ppppuStack_1878 + 4) = (char)((ulong)ppppuVar23 >> 0x20);
  if (cStack_b08 == '\x01') {
    FUN_1087b1450(puVar22,auStack_b28);
  }
  func_0x0001087ce20c();
  func_0x000107c2882c();
  FUN_1087ccc28(&ppuStack_da0);
  func_0x0001087ccc48(&ppppuStack_d40);
  func_0x0001087ccc68(&ppuStack_ce0);
  func_0x0001087ccc88(auStack_c30);
  func_0x0001087ce82c();
  ppppppuVar43 = ppppppuVar43 + 1;
  goto LAB_1087c8ed8;
}



/* Entry: 1087cc3f0; end: 1087cc423;  */

undefined8 * FUN_1087cc3f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_1087b1450(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1087cc424; end: 1087cc637;  */

long ** FUN_1087cc424(long **param_1,long **param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long **pplVar10;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  long **pplVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long **pplVar15;
  long **unaff_x26;
  long *plStack_1f8;
  long **pplStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_174 [28];
  undefined1 auStack_158 [120];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [40];
  long *aplStack_88 [3];
  undefined1 auStack_70 [32];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001087ce308();
  uStack_48 = extraout_x8;
  if ((((uint)param_2 >> 6 & 1) != 0) && (param_1[0x14] != (long *)0x0)) {
    func_0x0001086a6ac0(&uStack_e0,param_3);
    func_0x000107c29ee0(aplStack_88,&uStack_e0);
    func_0x000107c2a2e0(&uStack_e0);
    plVar12 = param_1[0xc];
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x0001087ce638();
    uStack_d8 = 0;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0x1a1);
    func_0x000107c278b8(auStack_70,PTR_DAT_113268d98);
    in_NG = param_4 < 0;
    in_ZR = param_4 == 0;
    lVar1 = 0xc58;
    if ((bool)in_ZR) {
      lVar1 = 0xc50;
    }
    puVar6 = &uStack_e0;
    func_0x000107c28824(puVar6,auStack_70,*(undefined8 *)((long)&PTR_s_success_113269028 + lVar1));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    func_0x000107c2884c(auStack_b0,puVar6);
    (**(code **)(*plVar12 + 0x50))(plVar12,auStack_b0);
    func_0x000107c2882c(auStack_b0);
    func_0x000107c2882c(&uStack_e0);
    plVar12 = param_1[0x14];
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_1086cf200(&uStack_e0);
    FUN_10868cc20(auStack_158,param_3);
    auStack_70[0] = 0;
    uStack_50 = 0;
    param_2 = aplStack_88;
    param_3 = 1;
    (**(code **)(*plVar12 + 0x30))
              (auStack_174,plVar12,param_2,1,0x1200ac,&uStack_e0,auStack_158,auStack_70,0);
    FUN_1086cf26c(auStack_70);
    FUN_1089058f8(auStack_158);
    func_0x0001086cf230(&uStack_e0);
    param_1 = aplStack_88;
    func_0x000107c27914();
  }
  func_0x0001087ce1d4(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1086cf26c(auStack_70);
  FUN_1089058f8(auStack_158);
  func_0x0001086cf230(&uStack_e0);
  pplVar7 = aplStack_88;
  func_0x000107c27914();
  func_0x0001087ce39c();
  FUN_10879cf30();
  pplVar11 = pplVar7 + 0xd5;
  pplVar8 = param_2;
  FUN_108848654();
  pplVar15 = (long **)pplVar7[0xd6];
  if (pplVar15 != (long **)0x0) {
    uVar13 = (long)pplVar15 - 1;
    uVar14 = (uint)pplVar15;
    if (((ulong)pplVar15 & uVar13) == 0) {
      unaff_x26 = (long **)((ulong)(uVar14 - 1) & (ulong)pplVar8);
      in_NG = false;
    }
    else {
      in_NG = (long)pplVar8 - (long)pplVar15 < 0;
      unaff_x26 = pplVar8;
      if (pplVar15 <= pplVar8) {
        uVar3 = 0;
        if (uVar14 != 0) {
          uVar3 = (uint)pplVar8 / uVar14;
        }
        unaff_x26 = (long **)(ulong)((uint)pplVar8 - uVar3 * uVar14);
      }
    }
    plVar12 = (long *)(*pplVar11)[(long)unaff_x26];
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1087cc714;
          pplVar10 = (long **)plVar12[1];
          in_NG = (long)pplVar10 - (long)pplVar8 < 0;
          if (pplVar10 != pplVar8) break;
          uVar9 = (ulong)(plVar12 + 2);
          func_0x000107c28078(uVar9,param_2);
          if ((uVar9 & 1) != 0) {
            func_0x0001087ce960(plVar12 + 5,param_3);
            func_0x000107c324b0();
            func_0x000107c27cfc();
            pplVar7[0xd9] = pplVar7[4];
            pplVar7[0xd8] = pplVar7[3];
            *(undefined1 *)(pplVar7 + 0xde) = *(undefined1 *)(pplVar7 + 9);
            pplVar7[0xdd] = pplVar7[8];
            pplVar7[0xdc] = pplVar7[7];
            pplVar7[0xdb] = pplVar7[6];
            pplVar7[0xda] = pplVar7[5];
            FUN_108919e8c(pplVar7 + 0xdf,pplVar7 + 10);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (pplVar7 + 0xee,pplVar7 + 0x19);
            pplVar7[0xf2] = pplVar7[0x1d];
            pplVar7[0xf1] = pplVar7[0x1c];
            FUN_1086aa298(pplVar7 + 0xf3,pplVar7 + 0x1e);
            *(undefined8 *)((long)pplVar7 + 0x7e9) = *(undefined8 *)((long)pplVar7 + 0x141);
            *(undefined8 *)((long)pplVar7 + 0x7e1) = *(undefined8 *)((long)pplVar7 + 0x139);
            pplVar7[0xfa] = pplVar7[0x25];
            pplVar7[0xf9] = pplVar7[0x24];
            pplVar7[0xfc] = pplVar7[0x27];
            pplVar7[0xfb] = pplVar7[0x26];
            pplVar7[0xf8] = pplVar7[0x23];
            pplVar7[0xf7] = pplVar7[0x22];
            func_0x000107c28d24(pplVar7 + 0xff,pplVar7 + 0x2a);
            *(undefined1 *)(pplVar7 + 0x105) = *(undefined1 *)(pplVar7 + 0x30);
            pplVar7[0x104] = pplVar7[0x2f];
            pplVar7[0x103] = pplVar7[0x2e];
            func_0x000107c28d24(pplVar7 + 0x106,pplVar7 + 0x31);
            return pplVar11;
          }
        }
        if (((ulong)pplVar15 & uVar13) == 0) {
          pplVar10 = (long **)((ulong)pplVar10 & uVar13);
        }
        else if (pplVar15 <= pplVar10) {
          uVar9 = 0;
          if (pplVar15 != (long **)0x0) {
            uVar9 = (ulong)pplVar10 / (ulong)pplVar15;
          }
          pplVar10 = (long **)((long)pplVar10 - uVar9 * (long)pplVar15);
        }
        in_NG = (long)pplVar10 - (long)unaff_x26 < 0;
      } while (pplVar10 == unaff_x26);
    }
  }
LAB_1087cc714:
  pplVar10 = pplVar7 + 0xd7;
  plVar12 = (long *)0x1d0;
  __Znwm();
  uStack_1e8 = 0;
  *plVar12 = 0;
  plVar12[1] = (long)pplVar8;
  plStack_1f8 = plVar12;
  pplStack_1f0 = pplVar10;
  func_0x000107c27994(plVar12 + 2,param_2);
  func_0x000107c28a9c(plVar12 + 5,param_3);
  uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
  func_0x0001087ce5cc(pplVar7[0xd8]);
  if ((pplVar15 == (long **)0x0) || (func_0x0001087ce5c0(), (bool)in_NG)) {
    bVar4 = (long **)0x2 < pplVar15;
    bVar5 = pplVar15 == (long **)0x3;
    func_0x0001087ce16c((long)pplVar15 << 1);
    uVar2 = extraout_x8_00;
    if (!bVar4 || bVar5) {
      uVar2 = extraout_x9;
    }
    func_0x000108792d10(pplVar11,uVar2);
    pplVar15 = (long **)pplVar7[0xd6];
    if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
      unaff_x26 = (long **)((ulong)((int)pplVar15 - 1) & (ulong)pplVar8);
    }
    else {
      unaff_x26 = pplVar8;
      if (pplVar15 <= pplVar8) {
        uVar13 = 0;
        if (pplVar15 != (long **)0x0) {
          uVar13 = (ulong)pplVar8 / (ulong)pplVar15;
        }
        unaff_x26 = (long **)((long)pplVar8 - uVar13 * (long)pplVar15);
      }
    }
  }
  plVar12 = *pplVar11;
  if (plVar12[(long)unaff_x26] == 0) {
    *plStack_1f8 = (long)*pplVar10;
    *pplVar10 = plStack_1f8;
    plVar12[(long)unaff_x26] = (long)pplVar10;
    if (*plStack_1f8 != 0) {
      pplVar11 = *(long ***)(*plStack_1f8 + 8);
      if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
        pplVar11 = (long **)((ulong)pplVar11 & (long)pplVar15 - 1U);
      }
      else if (pplVar15 <= pplVar11) {
        uVar13 = 0;
        if (pplVar15 != (long **)0x0) {
          uVar13 = (ulong)pplVar11 / (ulong)pplVar15;
        }
        pplVar11 = (long **)((long)pplVar11 - uVar13 * (long)pplVar15);
      }
      plVar12[(long)pplVar11] = (long)plStack_1f8;
    }
  }
  else {
    func_0x0001087ce448();
  }
  plStack_1f8 = (long *)0x0;
  pplVar7[0xd8] = (long *)((long)pplVar7[0xd8] + 1);
  pplVar11 = &plStack_1f8;
  FUN_108793048(pplVar11);
  func_0x0001087ce960();
  return pplVar11;
}



/* Entry: 1087cc638; end: 1087cc88f;  */

long ** FUN_1087cc638(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long **pplVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x26;
  long *plVar13;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  FUN_10879cf30(param_1,param_3,0);
  pplVar7 = (long **)(param_1 + 0x6a8);
  uVar9 = param_2;
  FUN_108848654();
  uVar12 = *(ulong *)(param_1 + 0x6b0);
  if (uVar12 != 0) {
    uVar10 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar10) == 0) {
      unaff_x26 = uVar11 - 1 & uVar9;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar9 - uVar12) < 0;
      unaff_x26 = uVar9;
      if (uVar12 <= uVar9) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = (uint)uVar9 / uVar11;
        }
        unaff_x26 = (ulong)((uint)uVar9 - uVar2 * uVar11);
      }
    }
    plVar13 = (long *)(*pplVar7)[unaff_x26];
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1087cc714;
          uVar8 = plVar13[1];
          in_NG = (long)(uVar8 - uVar9) < 0;
          if (uVar8 != uVar9) break;
          uVar8 = (ulong)(plVar13 + 2);
          func_0x000107c28078(uVar8,param_2);
          if ((uVar8 & 1) != 0) {
            func_0x0001087ce960(plVar13 + 5,param_3);
            func_0x000107c324b0();
            func_0x000107c27cfc();
            *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_1 + 0x18);
            *(undefined1 *)(param_1 + 0x6f0) = *(undefined1 *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x6e0) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_1 + 0x28);
            FUN_108919e8c(param_1 + 0x6f8,param_1 + 0x50);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_1 + 0x770,param_1 + 200);
            *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(param_1 + 0xe8);
            *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_1 + 0xe0);
            FUN_1086aa298(param_1 + 0x798,param_1 + 0xf0);
            *(undefined8 *)(param_1 + 0x7e9) = *(undefined8 *)(param_1 + 0x141);
            *(undefined8 *)(param_1 + 0x7e1) = *(undefined8 *)(param_1 + 0x139);
            *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(param_1 + 0x120);
            *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_1 + 0x138);
            *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_1 + 0x130);
            *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(param_1 + 0x118);
            *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_1 + 0x110);
            func_0x000107c28d24(param_1 + 0x7f8,param_1 + 0x150);
            *(undefined1 *)(param_1 + 0x828) = *(undefined1 *)(param_1 + 0x180);
            *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0x178);
            *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_1 + 0x170);
            func_0x000107c28d24(param_1 + 0x830,param_1 + 0x188);
            return pplVar7;
          }
        }
        if ((uVar12 & uVar10) == 0) {
          uVar8 = uVar8 & uVar10;
        }
        else if (uVar12 <= uVar8) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar8 / uVar12;
          }
          uVar8 = uVar8 - uVar3 * uVar12;
        }
        in_NG = (long)(uVar8 - unaff_x26) < 0;
      } while (uVar8 == unaff_x26);
    }
  }
LAB_1087cc714:
  plVar13 = (long *)(param_1 + 0x6b8);
  plVar6 = (long *)0x1d0;
  __Znwm();
  uStack_68 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar9;
  plStack_78 = plVar6;
  plStack_70 = plVar13;
  func_0x000107c27994(plVar6 + 2,param_2);
  func_0x000107c28a9c(plVar6 + 5,param_3);
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x0001087ce5cc(*(undefined8 *)(param_1 + 0x6c0));
  if ((uVar12 == 0) || (func_0x0001087ce5c0(), (bool)in_NG)) {
    bVar4 = 2 < uVar12;
    bVar5 = uVar12 == 3;
    func_0x0001087ce16c(uVar12 << 1);
    uVar1 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar1 = extraout_x9;
    }
    func_0x000108792d10(pplVar7,uVar1);
    uVar12 = *(ulong *)(param_1 + 0x6b0);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = (int)uVar12 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar12 <= uVar9) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar9 / uVar12;
        }
        unaff_x26 = uVar9 - uVar10 * uVar12;
      }
    }
  }
  plVar6 = *pplVar7;
  if (plVar6[unaff_x26] == 0) {
    *plStack_78 = *plVar13;
    *plVar13 = (long)plStack_78;
    plVar6[unaff_x26] = (long)plVar13;
    if (*plStack_78 != 0) {
      uVar9 = *(ulong *)(*plStack_78 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar10 * uVar12;
      }
      plVar6[uVar9] = (long)plStack_78;
    }
  }
  else {
    func_0x0001087ce448();
  }
  plStack_78 = (long *)0x0;
  *(long *)(param_1 + 0x6c0) = *(long *)(param_1 + 0x6c0) + 1;
  pplVar7 = &plStack_78;
  FUN_108793048(pplVar7);
  func_0x0001087ce960();
  return pplVar7;
}



/* Entry: 1087cc890; end: 1087cc907;  */

void FUN_1087cc890(void)

{
  code *extraout_x8;
  
  func_0x0001087ce390();
  (*extraout_x8)();
  return;
}



/* Entry: 1087cc908; end: 1087cc90b;  */

undefined8 * FUN_1087cc908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71520;
  func_0x000107c289f8(param_1 + 0x23);
  func_0x000107c2916c(param_1 + 0x21);
  func_0x000107c297ac(param_1 + 0x1f);
  func_0x000107c299b8(param_1 + 0x1d);
  func_0x000107c30608(param_1 + 0x16);
  func_0x000107c2917c(param_1 + 0x14);
  func_0x000107c2995c(param_1 + 0x12);
  func_0x000107c286d0(param_1 + 0x10);
  func_0x000107c29194(param_1 + 0xe);
  func_0x000107c288a4(param_1 + 0xc);
  func_0x0001087cd498(param_1 + 0xb);
  func_0x000107c288e8(param_1 + 9);
  func_0x000107c28abc(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x0001087ce7a4();
  return param_1;
}



/* Entry: 1087cc90c; end: 1087cc91f;  */

void FUN_1087cc90c(void)

{
  func_0x0001087cd3f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087cc920; end: 1087cc94b;  */

long FUN_1087cc920(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010086ad00(param_1);
  }
  return param_1;
}



/* Entry: 1087cc94c; end: 1087cc9a3;  */

void FUN_1087cc94c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001087ce948();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087ce930();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001087ce924();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001089042d0();
    }
    else {
      FUN_1089042a0();
    }
  }
  return;
}



/* Entry: 1087cc9a4; end: 1087cca03;  */

long FUN_1087cc9a4(long param_1)

{
  func_0x000107c279dc(param_1 + 0xd0);
  func_0x0001089050d4();
  FUN_108903cb4(param_1);
  return param_1;
}



/* Entry: 1087cca04; end: 1087cca3f;  */

void FUN_1087cca04(long param_1)

{
  func_0x000105291934();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1087cca40; end: 1087cca97;  */

void FUN_1087cca40(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001087ce948();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087ce930();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001087ce924();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_108903a58();
    }
    else {
      FUN_108903a28();
    }
  }
  return;
}



/* Entry: 1087cca98; end: 1087ccac7;  */

long FUN_1087cca98(long param_1)

{
  func_0x000107c27914(param_1 + 0x90);
  func_0x0001087cca20(param_1 + 0x30);
  func_0x0001089050d4();
  FUN_10890381c(param_1);
  return param_1;
}



/* Entry: 1087ccac8; end: 1087ccae7;  */

void FUN_1087ccac8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1087ccae8; end: 1087ccb3f;  */

void FUN_1087ccae8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001087ce948();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087ce930();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001087ce924();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_1089046e4();
    }
    else {
      FUN_1089046b4();
    }
  }
  return;
}



/* Entry: 1087ccb40; end: 1087ccb67;  */

long FUN_1087ccb40(long param_1)

{
  FUN_1087ccac8(param_1 + 0x38);
  func_0x0001089050d4();
  FUN_10890444c(param_1);
  return param_1;
}



/* Entry: 1087ccb68; end: 1087ccbbf;  */

void FUN_1087ccb68(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001087ce948();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087ce930();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001087ce924();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10890490c();
    }
    else {
      FUN_1089048dc();
    }
  }
  return;
}



/* Entry: 1087ccbc0; end: 1087ccc27;  */

void FUN_1087ccbc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1087a30f0();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1087ccc28; end: 1087cccc7;  */

void FUN_1087ccc28(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x0001087ccbfc();
  }
  return;
}



/* Entry: 1087cccc8; end: 1087ccccf;  */

void FUN_1087cccc8(void)

{
  return;
}



/* Entry: 1087cccd0; end: 1087cccff;  */

void FUN_1087cccd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a716c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1087ccd00; end: 1087ccd23;  */

void FUN_1087ccd00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a716c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1087ccd24; end: 1087ccd6f;  */

void FUN_1087ccd24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  ulong uVar8;
  long *unaff_x19;
  undefined8 unaff_x21;
  ulong unaff_x23;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long *plVar11;
  undefined8 uStack_68;
  
  FUN_1087ccdb4(*(long *)(param_2 + 8) + 0x820,param_3,param_6);
  uVar8 = *(long *)(param_2 + 8) + 0x848;
  func_0x0001087ce4a8(uVar8,param_3,param_7);
  uVar10 = unaff_x19[1];
  if (uVar10 != 0) {
    unaff_x23 = uVar10 - 1;
    in_NG = (long)(uVar10 & unaff_x23) < 0;
    uVar6 = uVar8;
    if ((uVar10 & unaff_x23) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      in_NG = (long)(uVar8 - uVar10) < 0;
      unaff_x25 = uVar8;
      if (uVar10 <= uVar8) {
        uVar2 = 0;
        uVar9 = (uint)uVar10;
        if (uVar9 != 0) {
          uVar2 = (uint)uVar8 / uVar9;
        }
        unaff_x25 = (ulong)((uint)uVar8 - uVar2 * uVar9);
      }
    }
    plVar11 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1087cd010;
          uVar7 = plVar11[1];
          in_NG = (long)(uVar7 - uVar8) < 0;
          if (uVar7 != uVar8) break;
          func_0x0001087ce738();
          if ((uVar6 & 1) != 0) {
            return;
          }
        }
        if ((uVar10 & unaff_x23) == 0) {
          uVar7 = uVar7 & unaff_x23;
        }
        else if (uVar10 <= uVar7) {
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar3 * uVar10;
        }
        in_NG = (long)(uVar7 - unaff_x25) < 0;
      } while (uVar7 == unaff_x25);
    }
  }
LAB_1087cd010:
  func_0x0001087ce7b4();
  func_0x0001087ce8f0();
  func_0x000107c27994();
  func_0x000108684e9c(unaff_x23 + 0x28,unaff_x21);
  func_0x0001087ce5cc(unaff_x19[3]);
  if ((uVar10 == 0) || (func_0x0001087ce5c0(param_1,(int)unaff_x19[4],(float)uVar10), (bool)in_NG))
  {
    func_0x0001087ce69c();
    bVar4 = 2 < uVar10;
    bVar5 = uVar10 == 3;
    func_0x0001087ce16c();
    uVar1 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar1 = extraout_x9;
    }
    func_0x000108794098(unaff_x19,uVar1);
    uVar10 = unaff_x19[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      unaff_x25 = uVar8;
      if (uVar10 <= uVar8) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar8 / uVar10;
        }
        unaff_x25 = uVar8 - uVar6 * uVar10;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001087ce684(uStack_68);
    if (extraout_x10 != 0) {
      uVar8 = *(ulong *)(extraout_x10 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar8 / uVar10;
        }
        uVar8 = uVar8 - uVar6 * uVar10;
      }
      *(undefined8 *)(extraout_x9_00 + uVar8 * 8) = extraout_x8_00;
    }
  }
  else {
    func_0x0001087ce448();
  }
  func_0x0001087ce708();
  FUN_1087943d0();
  return;
}



/* Entry: 1087ccd70; end: 1087ccda7;  */

long FUN_1087ccd70(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a71720);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087ccda8; end: 1087ccdb3;  */

undefined ** FUN_1087ccda8(void)

{
  return &PTR_DAT_110a71720;
}



/* Entry: 1087ccdb4; end: 1087ccf63;  */

void FUN_1087ccdb4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x10;
  ulong uVar4;
  long *unaff_x19;
  ulong unaff_x23;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x25;
  long *plVar7;
  undefined8 uStack_68;
  
  func_0x0001087ce4a8();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    unaff_x23 = uVar6 - 1;
    in_NG = (long)(uVar6 & unaff_x23) < 0;
    uVar4 = param_2;
    if ((uVar6 & unaff_x23) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      in_NG = (long)(param_2 - uVar6) < 0;
      unaff_x25 = param_2;
      if (uVar6 <= param_2) {
        uVar1 = 0;
        uVar5 = (uint)uVar6;
        if (uVar5 != 0) {
          uVar1 = (uint)param_2 / uVar5;
        }
        unaff_x25 = (ulong)((uint)param_2 - uVar1 * uVar5);
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1087cce60;
          uVar3 = plVar7[1];
          in_NG = (long)(uVar3 - param_2) < 0;
          if (uVar3 != param_2) break;
          func_0x0001087ce738();
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        if ((uVar6 & unaff_x23) == 0) {
          uVar3 = uVar3 & unaff_x23;
        }
        else if (uVar6 <= uVar3) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar2 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1087cce60:
  func_0x0001087ce7b4();
  func_0x0001087ce8f0();
  func_0x000107c27994();
  func_0x0001086cf8e0(unaff_x23 + 0x28);
  func_0x0001087ce5cc(unaff_x19[3]);
  if ((uVar6 == 0) || (func_0x0001087ce5c0(param_1,(int)unaff_x19[4],(float)uVar6), (bool)in_NG)) {
    func_0x0001087ce69c();
    func_0x0001087ce16c();
    func_0x000108793c84();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      unaff_x25 = param_2;
      if (uVar6 <= param_2) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_2 / uVar6;
        }
        unaff_x25 = param_2 - uVar4 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001087ce684(uStack_68);
    if (extraout_x10 != 0) {
      uVar4 = *(ulong *)(extraout_x10 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar3 * uVar6;
      }
      *(undefined8 *)(extraout_x9 + uVar4 * 8) = extraout_x8;
    }
  }
  else {
    func_0x0001087ce448();
  }
  func_0x0001087ce708();
  FUN_108793fbc();
  return;
}



/* Entry: 1087ccf64; end: 1087cd113;  */

void FUN_1087ccf64(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x10;
  ulong uVar4;
  long *unaff_x19;
  ulong unaff_x23;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x25;
  long *plVar7;
  undefined8 uStack_68;
  
  func_0x0001087ce4a8();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    unaff_x23 = uVar6 - 1;
    in_NG = (long)(uVar6 & unaff_x23) < 0;
    uVar4 = param_2;
    if ((uVar6 & unaff_x23) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      in_NG = (long)(param_2 - uVar6) < 0;
      unaff_x25 = param_2;
      if (uVar6 <= param_2) {
        uVar1 = 0;
        uVar5 = (uint)uVar6;
        if (uVar5 != 0) {
          uVar1 = (uint)param_2 / uVar5;
        }
        unaff_x25 = (ulong)((uint)param_2 - uVar1 * uVar5);
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1087cd010;
          uVar3 = plVar7[1];
          in_NG = (long)(uVar3 - param_2) < 0;
          if (uVar3 != param_2) break;
          func_0x0001087ce738();
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        if ((uVar6 & unaff_x23) == 0) {
          uVar3 = uVar3 & unaff_x23;
        }
        else if (uVar6 <= uVar3) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar2 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1087cd010:
  func_0x0001087ce7b4();
  func_0x0001087ce8f0();
  func_0x000107c27994();
  func_0x000108684e9c(unaff_x23 + 0x28);
  func_0x0001087ce5cc(unaff_x19[3]);
  if ((uVar6 == 0) || (func_0x0001087ce5c0(param_1,(int)unaff_x19[4],(float)uVar6), (bool)in_NG)) {
    func_0x0001087ce69c();
    func_0x0001087ce16c();
    func_0x000108794098();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      func_0x0001087ce8cc();
    }
    else {
      unaff_x25 = param_2;
      if (uVar6 <= param_2) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_2 / uVar6;
        }
        unaff_x25 = param_2 - uVar4 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001087ce684(uStack_68);
    if (extraout_x10 != 0) {
      uVar4 = *(ulong *)(extraout_x10 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar3 * uVar6;
      }
      *(undefined8 *)(extraout_x9 + uVar4 * 8) = extraout_x8;
    }
  }
  else {
    func_0x0001087ce448();
  }
  func_0x0001087ce708();
  FUN_1087943d0();
  return;
}



/* Entry: 1087cd114; end: 1087cd11f;  */

void FUN_1087cd114(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_10068da0c);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_10068da0c);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1087cd120; end: 1087cd16b;  */

void FUN_1087cd120(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a91cd0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1087cd16c; end: 1087cd17f;  */

void FUN_1087cd16c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1087cd180; end: 1087cd1bf;  */

long FUN_1087cd180(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    FUN_1087cd248(param_3,*(undefined8 *)(param_1 + 8),param_2);
    func_0x000104bee8bc(param_1);
  }
  return param_2;
}



/* Entry: 1087cd1c0; end: 1087cd1ff;  */

long FUN_1087cd1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108685a78();
  FUN_108686110(lVar1 + 0x58,param_3);
  return param_1;
}



/* Entry: 1087cd200; end: 1087cd247;  */

long * FUN_1087cd200(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x88;
    func_0x0001086a9160();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


