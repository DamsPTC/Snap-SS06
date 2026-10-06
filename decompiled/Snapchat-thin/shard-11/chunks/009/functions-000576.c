/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108991050; end: 108991063;  */

void FUN_108991050(void)

{
  FUN_108991014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108991064; end: 108991067;  */

void FUN_108991064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108991068; end: 10899107b;  */

void FUN_108991068(void)

{
  func_0x000108991088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899107c; end: 1089910ab;  */

long FUN_10899107c(long param_1)

{
  func_0x0001089929b8(param_1 + 0x80);
  func_0x00010899298c(param_1 + 0x78);
  func_0x00010897f638(param_1 + 0x40);
  func_0x000108992934(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 1089910ac; end: 10899110f;  */

void FUN_1089910ac(long param_1,int param_2)

{
  int iStack_14;
  
  if (param_2 == -1) {
    param_2 = 1;
  }
  iStack_14 = param_2;
  func_0x0001089910d8(param_1 + 0x30,&iStack_14);
  return;
}



/* Entry: 108991110; end: 10899111b;  */

void FUN_108991110(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  func_0x000108976994(param_1,param_2);
  uStack_80 = 0;
  uStack_78 = 0;
  uVar12 = 0;
  uVar11 = 0;
  bVar4 = false;
  puVar10 = (ulong *)param_1[6];
  puStack_70 = param_1 + 7;
  while (uVar3 = uVar12 | uVar11 << 8, puVar10 != param_1 + 7) {
    puVar7 = puVar10 + 6;
    puVar6 = puVar7;
    puVar9 = puVar7;
    while (puVar5 = puVar9, puVar9 = (ulong *)*puVar6, puVar9 != (ulong *)0x0) {
      iVar2 = (int)puVar9[4] * *(int *)((long)puVar9 + 0x1c);
      lVar1 = 0;
      if (iVar2 < 0xe1001) {
        lVar1 = 8;
      }
      puVar6 = (ulong *)((long)puVar9 + lVar1);
      if (iVar2 < 0xe1001) {
        puVar9 = puVar5;
      }
    }
    if (puVar7 != puVar5) {
      if ((ulong *)puVar10[5] == puVar5) {
        func_0x000107c27be0();
      }
      while (puVar5 != puVar7) {
        puVar6 = puVar10 + 5;
        func_0x000108991474(puVar6,puVar5);
        __ZdlPv(puVar5);
        puVar5 = puVar6;
      }
    }
    if (puVar10[7] != 0) {
      func_0x000107c27bdc();
      if (!bVar4) {
        uVar3 = 0;
      }
      if ((int)uVar3 <= (int)(uint)puVar7[5]) {
        uVar3 = (uint)puVar7[5];
      }
      uVar12 = uVar3 & 0xff;
      uVar11 = uVar3 >> 8;
      uStack_68 = uStack_78 | uStack_80 << 8 | (long)puStack_70 << 0x20;
      if (!bVar4) {
        uStack_68 = 0;
      }
      puVar6 = (ulong *)((long)puVar7 + 0x1c);
      if ((int)puVar7[4] * *(int *)((long)puVar7 + 0x1c) <=
          (int)(uStack_68 >> 0x20) * (int)uStack_68) {
        puVar6 = &uStack_68;
      }
      uVar8 = *puVar6;
      uStack_78 = uVar8 & 0xff;
      uStack_80 = uVar8 >> 8 & 0xffffff;
      puStack_70 = (ulong *)(uVar8 >> 0x20);
      bVar4 = true;
    }
    func_0x000107c27be0();
  }
  if (bVar4) {
    uVar12 = uVar3;
    if ((int)(uint)param_1[2] <= (int)uVar3) {
      uVar12 = (uint)param_1[2];
    }
    *(uint *)(param_1 + 2) = uVar12;
    uVar12 = uVar3;
    if ((int)*(uint *)((long)param_1 + 0x1c) <= (int)uVar3) {
      uVar12 = *(uint *)((long)param_1 + 0x1c);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar12;
    if ((char)param_1[3] == '\x01') {
      if ((int)*(uint *)((long)param_1 + 0x14) <= (int)uVar3) {
        uVar3 = *(uint *)((long)param_1 + 0x14);
      }
      *(uint *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  if (bVar4) {
    uVar12 = (uint)uStack_78 | (int)uStack_80 << 8;
    uVar8 = (ulong)uVar12 | (long)puStack_70 << 0x20;
    if (*(int *)((long)param_1 + 4) * (int)*param_1 <= (int)(uVar12 * (int)puStack_70)) {
      uVar8 = *param_1;
    }
    *param_1 = uVar8;
  }
  return;
}



/* Entry: 10899111c; end: 10899132f;  */

void FUN_10899111c(ulong *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  func_0x000108976994(param_1,param_2);
  uStack_80 = 0;
  uStack_78 = 0;
  uVar12 = 0;
  uVar11 = 0;
  bVar4 = false;
  puVar10 = (ulong *)param_1[6];
  puStack_70 = param_1 + 7;
  while (uVar3 = uVar12 | uVar11 << 8, puVar10 != param_1 + 7) {
    puVar7 = puVar10 + 6;
    puVar6 = puVar7;
    puVar9 = puVar7;
    while (puVar5 = puVar9, puVar9 = (ulong *)*puVar6, puVar9 != (ulong *)0x0) {
      iVar2 = (int)puVar9[4] * *(int *)((long)puVar9 + 0x1c);
      lVar1 = 0;
      if (iVar2 <= param_3[1] * *param_3) {
        lVar1 = 8;
      }
      puVar6 = (ulong *)((long)puVar9 + lVar1);
      if (iVar2 <= param_3[1] * *param_3) {
        puVar9 = puVar5;
      }
    }
    if (puVar7 != puVar5) {
      if ((ulong *)puVar10[5] == puVar5) {
        func_0x000107c27be0();
      }
      while (puVar5 != puVar7) {
        puVar6 = puVar10 + 5;
        func_0x000108991474(puVar6,puVar5);
        __ZdlPv(puVar5);
        puVar5 = puVar6;
      }
    }
    if (puVar10[7] != 0) {
      func_0x000107c27bdc();
      if (!bVar4) {
        uVar3 = 0;
      }
      if ((int)uVar3 <= (int)(uint)puVar7[5]) {
        uVar3 = (uint)puVar7[5];
      }
      uVar12 = uVar3 & 0xff;
      uVar11 = uVar3 >> 8;
      uStack_68 = uStack_78 | uStack_80 << 8 | (long)puStack_70 << 0x20;
      if (!bVar4) {
        uStack_68 = 0;
      }
      puVar6 = (ulong *)((long)puVar7 + 0x1c);
      if ((int)puVar7[4] * *(int *)((long)puVar7 + 0x1c) <=
          (int)(uStack_68 >> 0x20) * (int)uStack_68) {
        puVar6 = &uStack_68;
      }
      uVar8 = *puVar6;
      uStack_78 = uVar8 & 0xff;
      uStack_80 = uVar8 >> 8 & 0xffffff;
      puStack_70 = (ulong *)(uVar8 >> 0x20);
      bVar4 = true;
    }
    func_0x000107c27be0();
  }
  if (bVar4) {
    uVar12 = uVar3;
    if ((int)(uint)param_1[2] <= (int)uVar3) {
      uVar12 = (uint)param_1[2];
    }
    *(uint *)(param_1 + 2) = uVar12;
    uVar12 = uVar3;
    if ((int)*(uint *)((long)param_1 + 0x1c) <= (int)uVar3) {
      uVar12 = *(uint *)((long)param_1 + 0x1c);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar12;
    if ((char)param_1[3] == '\x01') {
      if ((int)*(uint *)((long)param_1 + 0x14) <= (int)uVar3) {
        uVar3 = *(uint *)((long)param_1 + 0x14);
      }
      *(uint *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  if (bVar4) {
    uVar12 = (uint)uStack_78 | (int)uStack_80 << 8;
    uVar8 = (ulong)uVar12 | (long)puStack_70 << 0x20;
    if (*(int *)((long)param_1 + 4) * (int)*param_1 <= (int)(uVar12 * (int)puStack_70)) {
      uVar8 = *param_1;
    }
    *param_1 = uVar8;
  }
  return;
}



/* Entry: 108991330; end: 1089913eb;  */

bool FUN_108991330(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  while (lVar2 != param_1 + 0x38) {
    if (*(long *)(lVar2 + 0x38) != 0) {
      lVar1 = lVar2 + 0x30;
      func_0x000107c27bdc();
      if (0xe1000 < *(int *)(lVar1 + 0x20) * *(int *)(lVar1 + 0x1c)) break;
    }
    func_0x000107c27be0();
  }
  return lVar2 != param_1 + 0x38;
}



/* Entry: 1089913ec; end: 1089913f3;  */

undefined8 FUN_1089913ec(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000104c037b8(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 1089913f4; end: 1089914cf;  */

undefined8 FUN_1089913f4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uStack_38;
  
  plVar4 = (long *)*param_1;
  plVar1 = plVar4;
  plVar5 = plVar4;
  uStack_38 = param_2;
  if (plVar4 != param_1 + 1) {
    while (plVar5 = plVar1, func_0x000107c27be0(), plVar4 != param_1 + 1) {
      puVar2 = &uStack_38;
      FUN_1089914f8(puVar2,(long)plVar4 + 0x1c);
      puVar3 = &uStack_38;
      FUN_1089914f8(puVar3,(long)plVar5 + 0x1c);
      plVar1 = plVar4;
      if ((int)puVar3 <= (int)puVar2) {
        plVar1 = plVar5;
      }
    }
  }
  return *(undefined8 *)((long)plVar5 + 0x1c);
}



/* Entry: 1089914d0; end: 1089914f7;  */

undefined8 FUN_1089914d0(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000104c037b8(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 1089914f8; end: 10899156b;  */

int FUN_1089914f8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_2;
  iVar5 = param_2[1];
  iVar4 = *(int *)*param_1;
  iVar6 = ((int *)*param_1)[1];
  iVar1 = iVar3;
  if (iVar4 <= iVar3) {
    iVar1 = iVar4;
  }
  iVar2 = iVar5;
  if (iVar6 <= iVar5) {
    iVar2 = iVar6;
  }
  return iVar5 * iVar3 + iVar6 * iVar4 + iVar1 * iVar2 * -2;
}



/* Entry: 10899156c; end: 10899160f;  */

undefined8 * FUN_10899156c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_1 + 3;
  func_0x000108976994(param_1 + 5,param_3);
  FUN_108991110(param_1 + 0x10,param_3);
  FUN_108991610(param_1 + 0x1b,param_3);
  return param_1;
}



/* Entry: 108991610; end: 10899161b;  */

void FUN_108991610(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  func_0x000108976994(param_1,param_2);
  uStack_80 = 0;
  uStack_78 = 0;
  uVar12 = 0;
  uVar11 = 0;
  bVar4 = false;
  puVar10 = (ulong *)param_1[6];
  puStack_70 = param_1 + 7;
  while (uVar3 = uVar12 | uVar11 << 8, puVar10 != param_1 + 7) {
    puVar7 = puVar10 + 6;
    puVar6 = puVar7;
    puVar9 = puVar7;
    while (puVar5 = puVar9, puVar9 = (ulong *)*puVar6, puVar9 != (ulong *)0x0) {
      iVar2 = (int)puVar9[4] * *(int *)((long)puVar9 + 0x1c);
      lVar1 = 0;
      if (iVar2 < 0x38401) {
        lVar1 = 8;
      }
      puVar6 = (ulong *)((long)puVar9 + lVar1);
      if (iVar2 < 0x38401) {
        puVar9 = puVar5;
      }
    }
    if (puVar7 != puVar5) {
      if ((ulong *)puVar10[5] == puVar5) {
        func_0x000107c27be0();
      }
      while (puVar5 != puVar7) {
        puVar6 = puVar10 + 5;
        func_0x000108991474(puVar6,puVar5);
        __ZdlPv(puVar5);
        puVar5 = puVar6;
      }
    }
    if (puVar10[7] != 0) {
      func_0x000107c27bdc();
      if (!bVar4) {
        uVar3 = 0;
      }
      if ((int)uVar3 <= (int)(uint)puVar7[5]) {
        uVar3 = (uint)puVar7[5];
      }
      uVar12 = uVar3 & 0xff;
      uVar11 = uVar3 >> 8;
      uStack_68 = uStack_78 | uStack_80 << 8 | (long)puStack_70 << 0x20;
      if (!bVar4) {
        uStack_68 = 0;
      }
      puVar6 = (ulong *)((long)puVar7 + 0x1c);
      if ((int)puVar7[4] * *(int *)((long)puVar7 + 0x1c) <=
          (int)(uStack_68 >> 0x20) * (int)uStack_68) {
        puVar6 = &uStack_68;
      }
      uVar8 = *puVar6;
      uStack_78 = uVar8 & 0xff;
      uStack_80 = uVar8 >> 8 & 0xffffff;
      puStack_70 = (ulong *)(uVar8 >> 0x20);
      bVar4 = true;
    }
    func_0x000107c27be0();
  }
  if (bVar4) {
    uVar12 = uVar3;
    if ((int)(uint)param_1[2] <= (int)uVar3) {
      uVar12 = (uint)param_1[2];
    }
    *(uint *)(param_1 + 2) = uVar12;
    uVar12 = uVar3;
    if ((int)*(uint *)((long)param_1 + 0x1c) <= (int)uVar3) {
      uVar12 = *(uint *)((long)param_1 + 0x1c);
    }
    *(uint *)((long)param_1 + 0x1c) = uVar12;
    if ((char)param_1[3] == '\x01') {
      if ((int)*(uint *)((long)param_1 + 0x14) <= (int)uVar3) {
        uVar3 = *(uint *)((long)param_1 + 0x14);
      }
      *(uint *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  if (bVar4) {
    uVar12 = (uint)uStack_78 | (int)uStack_80 << 8;
    uVar8 = (ulong)uVar12 | (long)puStack_70 << 0x20;
    if (*(int *)((long)param_1 + 4) * (int)*param_1 <= (int)(uVar12 * (int)puStack_70)) {
      uVar8 = *param_1;
    }
    *param_1 = uVar8;
  }
  return;
}



/* Entry: 10899161c; end: 108991663;  */

undefined8 * FUN_10899161c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_2[2] != 0) {
    puVar1 = param_1 + 2;
    FUN_108991664();
    if (((ulong)puVar1 & 1) == 0) {
      param_1 = param_1 + 2;
      if (param_1 != param_2) {
        func_0x0001001dac34(param_1,*param_2,param_2 + 1);
      }
      return param_1;
    }
  }
  return puVar1;
}



/* Entry: 108991664; end: 10899168f;  */

undefined8 FUN_108991664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_11;
  
  if (param_1[2] == param_2[2]) {
    uVar1 = *param_1;
    FUN_108991978(uVar1,param_1 + 1,*param_2,&uStack_11);
    return uVar1;
  }
  return 0;
}



/* Entry: 108991690; end: 1089917bf;  */

undefined8 FUN_108991690(ulong param_1)

{
  ulong unaff_x20;
  
  func_0x000108991a80(param_1,&UNK_10df7bf90);
  func_0x000108991a6c();
  if ((int)param_1 == 0) {
    func_0x000108991a78();
  }
  else {
    func_0x000108991a60();
    func_0x000108991a54();
    if ((unaff_x20 & 1) != 0) {
      return 4;
    }
  }
  func_0x000108991a80();
  func_0x000108991a6c();
  if ((int)param_1 == 0) {
    func_0x000108991a78();
  }
  else {
    func_0x000108991a60();
    func_0x000108991a54();
    if ((unaff_x20 & 1) != 0) {
      return 2;
    }
  }
  func_0x000108991a80();
  func_0x000108991a6c();
  if ((int)param_1 == 0) {
    func_0x000108991a78();
  }
  else {
    func_0x000108991a60();
    func_0x000108991a54();
    if ((unaff_x20 & 1) != 0) {
      return 1;
    }
  }
  func_0x000108991a80();
  func_0x000108991a6c();
  if ((int)param_1 == 0) {
    func_0x000108991a78();
  }
  else {
    func_0x000108991a60();
    func_0x000108991a78();
    if ((param_1 & 1) != 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* Entry: 1089917c0; end: 1089917eb;  */

bool FUN_1089917c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1089919e0();
  return param_1 + 8 != lVar1;
}



/* Entry: 1089917ec; end: 10899186b;  */

long FUN_1089917ec(long param_1)

{
  long lVar1;
  int unaff_w20;
  
  func_0x000108991a80(param_1,&UNK_10df7bfa7);
  func_0x000108991a94();
  func_0x000108991a54();
  if (unaff_w20 == 0) {
    lVar1 = 0xd8;
  }
  else {
    func_0x000108991a80();
    func_0x000108991a94();
    func_0x000108991a54();
    lVar1 = 0x28;
    if (unaff_w20 == 0) {
      lVar1 = 0x80;
    }
  }
  return param_1 + lVar1;
}



/* Entry: 10899186c; end: 108991873;  */

undefined8 FUN_10899186c(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_14;
  
  puVar1 = (undefined8 *)(*param_1 + 0x18);
  uStack_14 = param_2;
  func_0x0001089968f0(puVar1,&uStack_14);
  return *puVar1;
}



/* Entry: 108991874; end: 1089918b3;  */

long FUN_108991874(long param_1)

{
  FUN_1089917ec();
  return (long)*(int *)(param_1 + 8) * 1000;
}



/* Entry: 1089918b4; end: 108991957;  */

long FUN_1089918b4(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = param_1;
  FUN_1089917ec();
  if (param_2 == 2) {
    if (param_3 < 8 && param_3 != 5) {
      piVar3 = (int *)(lVar2 + 0x10);
    }
    else {
      lVar1 = 0x14;
      if (*(char *)(lVar2 + 0x18) == '\0') {
        lVar1 = 0x10;
      }
      piVar3 = (int *)(lVar2 + lVar1);
    }
  }
  else {
    piVar3 = (int *)(lVar2 + 0x1c);
  }
  iVar4 = *piVar3;
  FUN_108991690(param_1);
  FUN_1089910ac(lVar2,param_1);
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar2 = lVar2 + 8;
    func_0x000107c27bdc();
    if (*(int *)(lVar2 + 0x28) <= iVar4) {
      iVar4 = *(int *)(lVar2 + 0x28);
    }
  }
  return (long)iVar4 * 1000;
}



/* Entry: 108991958; end: 108991977;  */

void FUN_108991958(void)

{
  FUN_108991978();
  return;
}



/* Entry: 108991978; end: 1089919df;  */

bool FUN_108991978(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while (param_1 != param_2) {
    lVar1 = param_1 + 0x20;
    func_0x000107c278d0(lVar1,param_3 + 0x20);
    if ((int)lVar1 == 0) break;
    func_0x000107c27be0();
    func_0x000107c27be0();
  }
  return param_1 == param_2;
}



/* Entry: 1089919e0; end: 108991a27;  */

void FUN_1089919e0(long param_1,undefined8 param_2)

{
  FUN_108991a28(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108991a28; end: 108991a9f;  */

long FUN_108991a28(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(int *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108991aa0; end: 108991b53;  */

undefined8 *
FUN_108991aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  uVar1 = param_6;
  FUN_108990e08(param_6,param_3);
  param_1[3] = 0;
  *(int *)(param_1 + 1) = (int)uVar1;
  param_1[4] = 0;
  param_1[2] = param_1 + 3;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x0001089931ec();
    } while (extraout_w10 != 0);
  }
  param_1[5] = &PTR_FUN_110aa29d8;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[8] = param_4;
  func_0x00010897b3e4(&uStack_40);
  *(int *)(param_1 + 9) = (int)param_6;
  param_1[10] = param_4;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_1 + 0xe;
  return param_1;
}



/* Entry: 108991b54; end: 108991b8f;  */

long FUN_108991b54(long param_1)

{
  func_0x0001089929b8(param_1 + 0x68);
  func_0x00010899298c(param_1 + 0x60);
  func_0x00010897f638(param_1 + 0x28);
  func_0x000108992934(param_1 + 0x10);
  return param_1;
}



/* Entry: 108991b90; end: 108991c63;  */

void FUN_108991b90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x68);
  while (lVar4 != param_1 + 0x70) {
    lStack_40 = *(long *)(lVar4 + 0x28);
    lStack_38 = *(long *)(lVar4 + 0x30);
    if (lStack_38 != 0) {
      plVar1 = (long *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(**(long **)(lStack_40 + 0x10) + 0x18))();
    if (*(long *)(lStack_40 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x50))();
    }
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
              (*(long **)(param_1 + 0x50),*(undefined8 *)(lStack_40 + 0x10));
    FUN_108992a6c(&lStack_40);
    func_0x000107c27be0();
  }
  FUN_108993174((long *)(param_1 + 0x68));
  return;
}



/* Entry: 108991c64; end: 108991c8f;  */

bool FUN_108991c64(long param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(param_1 + 0x48);
  FUN_108990e08();
  lVar2 = param_1 + 0x68;
  FUN_108993040(lVar2,&uStack_34);
  if (param_1 + 0x70 != lVar2) {
    lVar1 = *(long *)(lVar2 + 0x28);
    lStack_40 = *(long *)(lVar2 + 0x30);
    lStack_48 = lVar1;
    if (lStack_40 != 0) {
      do {
        func_0x0001089931ec();
      } while (extraout_w10 != 0);
    }
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))();
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
              (*(long **)(param_1 + 0x50),*(undefined8 *)(lVar1 + 0x10));
    if (*(long *)(lStack_48 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x50))();
    }
    FUN_1089930a4(param_1 + 0x68,&uStack_34);
    FUN_108992a6c(&lStack_48);
  }
  return param_1 + 0x70 != lVar2;
}



/* Entry: 108991c90; end: 108991d5f;  */

bool FUN_108991c90(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  lVar2 = param_1 + 0x68;
  uStack_34 = param_2;
  FUN_108993040(lVar2,&uStack_34);
  if (param_1 + 0x70 != lVar2) {
    lVar1 = *(long *)(lVar2 + 0x28);
    lStack_40 = *(long *)(lVar2 + 0x30);
    lStack_48 = lVar1;
    if (lStack_40 != 0) {
      do {
        func_0x0001089931ec();
      } while (extraout_w10 != 0);
    }
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))();
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
              (*(long **)(param_1 + 0x50),*(undefined8 *)(lVar1 + 0x10));
    if (*(long *)(lStack_48 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x50))();
    }
    FUN_1089930a4(param_1 + 0x68,&uStack_34);
    FUN_108992a6c(&lStack_48);
  }
  return param_1 + 0x70 != lVar2;
}



/* Entry: 108991d60; end: 1089925fb;  */

undefined8 **
FUN_108991d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  long lVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *puVar16;
  int extraout_w10;
  byte *pbVar17;
  long *plVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  byte *unaff_x28;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined1 auStack_398 [207];
  undefined1 uStack_2c9;
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  uint auStack_298 [6];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [40];
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  undefined8 uStack_230;
  uint uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 uStack_218;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  long lStack_1f8;
  undefined1 auStack_1f0 [48];
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [48];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 auStack_170 [6];
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  uint uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_10899ab48(&pbStack_248,param_5,*(undefined4 *)(param_1 + 0x48));
    pbVar22 = pbStack_248;
    pbStack_248 = (byte *)0x0;
    lVar21 = *(long *)(param_1 + 0x60);
    *(byte **)(param_1 + 0x60) = pbVar22;
    if (lVar21 != 0) {
      func_0x0001089931cc();
      pbVar22 = pbStack_248;
      pbStack_248 = (byte *)0x0;
      if (pbVar22 != (byte *)0x0) {
        func_0x0001089931cc();
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x48);
  FUN_108990e08(uVar8,param_3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  puVar9 = (undefined8 *)0xb8;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110aa32e0;
  _bzero(puVar9 + 3,0xa0);
  FUN_1089a00a0(puVar9 + 7);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  puVar9[0x14] = 0;
  puVar9[0x13] = 0;
  puVar9[0x16] = 0;
  puVar9[0x15] = 0;
  puStack_180 = puVar9 + 3;
  puStack_178 = puVar9;
  func_0x000108a29a8c(&pbStack_248,param_1 + 0x28,0);
  uStack_218 = 1;
  uStack_220 = 1000;
  uStack_228 = uVar8;
  uStack_224 = uVar1;
  FUN_108989fe8(&uStack_e0,param_2,*(undefined4 *)(param_1 + 0x48));
  func_0x000107c27b9c(auStack_1b0,&uStack_e0);
  puVar9 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(int *)(param_1 + 0x48) == 1) {
    uStack_e0._0_4_ = 4;
    func_0x0001089931d8();
    uStack_20c = *(undefined4 *)puVar9;
    uStack_208 = 1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,7);
    func_0x0001089931d8();
    uStack_d8._0_4_ = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_b8 = 1;
    uStack_e0 = CONCAT44(*(undefined4 *)puVar9,0x7b);
    uStack_140 = CONCAT44(uStack_140._4_4_,uVar8);
    lStack_b0 = param_1 + 0x28;
    FUN_1089925fc(&uStack_d0,&uStack_140,1);
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar1);
    plVar18 = *(long **)(param_1 + 0x50);
    func_0x000108a1cc2c(auStack_280,&uStack_e0);
    (**(code **)(*plVar18 + 0x48))(plVar18,auStack_280);
    puStack_180[3] = plVar18;
    func_0x00010811ddb8(auStack_270);
    func_0x00010811ddb8(&uStack_d0);
  }
  else {
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0xb);
    func_0x0001089931d8();
    uStack_20c = *(undefined4 *)puVar9;
  }
  func_0x000108993230();
  uStack_230 = *(undefined8 *)(param_1 + 0x60);
  lVar15 = *param_5;
  lVar21 = *(long *)(lVar15 + 0x30);
  do {
    if (lVar21 == lVar15 + 0x38) {
      pbVar12 = pbStack_248;
      pbVar22 = pbStack_240;
      if (pbStack_248 != pbStack_240) {
        for (; pbVar22 = pbVar22 + -0x68, pbVar12 < pbVar22; pbVar12 = pbVar12 + 0x68) {
          func_0x000108a2984c(&uStack_e0,pbVar12);
          FUN_108992910(pbVar12,pbVar22);
          FUN_108992910(pbVar22,&uStack_e0);
          func_0x00010899320c();
        }
      }
      uVar3 = *(undefined1 *)(*param_5 + 0x48);
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110aa3330;
      puVar9[3] = &PTR_FUN_110aa3380;
      puVar9[4] = param_2;
      lVar21 = param_4[1];
      uVar24 = *param_4;
      puVar9[6] = param_4[1];
      puVar9[5] = uVar24;
      if (lVar21 != 0) {
        plVar18 = (long *)(lVar21 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(puVar9 + 7) = uVar3;
      puStack_138 = (undefined1 *)0x0;
      uStack_140 = 0;
      uStack_d8 = puStack_180[1];
      uStack_e0 = *puStack_180;
      *puStack_180 = puVar9 + 3;
      puStack_180[1] = puVar9;
      func_0x000108992620(&uStack_e0);
      func_0x000108992620(&uStack_140);
      uStack_1c0 = *puStack_180;
      plVar18 = *(long **)(param_1 + 0x50);
      func_0x000108a299f4(auStack_398,&pbStack_248);
      (**(code **)(*plVar18 + 0x38))(plVar18,auStack_398);
      puStack_180[2] = plVar18;
      func_0x000108a29aec(auStack_398);
      puVar16 = *(undefined8 **)(param_1 + 0x70);
      puVar9 = (undefined8 *)(param_1 + 0x70);
      do {
        puVar20 = puVar9;
        if (puVar16 == (undefined8 *)0x0) {
LAB_108992444:
          puVar16 = (undefined8 *)0x38;
          __Znwm();
          *(uint *)(puVar16 + 4) = uVar8;
          puVar16[5] = 0;
          puVar16[6] = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = puVar9;
          *puVar20 = puVar16;
          puVar13 = puVar16;
          if (**(long **)(param_1 + 0x68) != 0) {
            *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
            puVar13 = (undefined8 *)*puVar20;
          }
          func_0x000107c27be4(*(undefined8 *)(param_1 + 0x70),puVar13);
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
          puVar13 = puVar9;
          puVar9 = puVar20;
LAB_108992498:
          puVar20 = puStack_180;
          puVar25 = puStack_178;
          if (puStack_178 != (undefined8 *)0x0) {
            do {
              func_0x0001089931ec();
            } while (extraout_w10 != 0);
          }
          uStack_d8 = puVar16[6];
          uStack_e0 = puVar16[5];
          puVar16[6] = puVar25;
          puVar16[5] = puVar20;
          FUN_108992a6c(&uStack_e0);
          (**(code **)(*(long *)puStack_180[2] + 0x10))();
          func_0x000108a29aec(&pbStack_248);
          ppuVar14 = &puStack_180;
          FUN_108992a6c();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
            ___stack_chk_fail();
            func_0x00010811ddb8(puVar13 + 2);
            func_0x00010811ddb8(puVar9 + 2);
            func_0x000108a29aec(&pbStack_248);
            ppuVar14 = &puStack_180;
            FUN_108992a6c(ppuVar14);
            func_0x0001089931e4();
            FUN_1089927c0();
            return ppuVar14;
          }
          return ppuVar14;
        }
        while (puVar13 = puVar16, *(uint *)(puVar13 + 4) <= uVar8) {
          puVar16 = puVar13;
          if (uVar8 <= *(uint *)(puVar13 + 4)) goto LAB_108992498;
          puVar16 = (undefined8 *)puVar13[1];
          if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
            puVar9 = puVar13;
            puVar20 = puVar13 + 1;
            goto LAB_108992444;
          }
        }
        puVar16 = (undefined8 *)*puVar13;
        puVar9 = puVar13;
      } while( true );
    }
    pbVar22 = (byte *)&uStack_e0;
    func_0x000108a297fc();
    func_0x0001089931bc();
    (*extraout_x8)();
    uVar10 = (ulong)*pbVar22;
    uStack_80 = (uint)*pbVar22;
    FUN_108989fc0();
    func_0x000107c278b8(auStack_298,uVar10);
    __ZNSt3__19to_stringEx(auStack_2c8,param_2);
    FUN_1089928c8(auStack_170,&UNK_10f4edf47,auStack_2c8);
    FUN_108992a94(auStack_2b0,auStack_170,1,&uStack_2c9);
    func_0x000108a02644(&uStack_140,auStack_298,auStack_2b0);
    func_0x000108a02784(&uStack_e0,&uStack_140);
    func_0x000108a027e0(&uStack_140);
    func_0x000108992e04(auStack_2b0);
    func_0x000107c278c0(auStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
    if (pbStack_240 < pbStack_238) {
      func_0x000108a2984c(pbStack_240,&uStack_e0);
      pbVar22 = pbStack_240 + 0x68;
      pbVar12 = pbStack_240;
      pbVar17 = pbStack_248;
    }
    else {
      lVar23 = (long)pbStack_240 - (long)pbStack_248;
      pbVar22 = (byte *)(lVar23 / 0x68 + 1);
      if (unaff_x28 < pbVar22) {
        FUN_1089928fc();
LAB_10899252c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x108992530);
        (*pcVar7)();
      }
      uVar10 = ((long)pbStack_238 - (long)pbStack_248) / 0x68;
      pbVar12 = (byte *)(uVar10 * 2);
      if (pbVar12 < pbVar22 || (long)pbVar12 - (long)pbVar22 == 0) {
        pbVar12 = pbVar22;
      }
      if (0x13b13b13b13b13a < uVar10) {
        pbVar12 = unaff_x28;
      }
      if (pbVar12 == (byte *)0x0) {
        lVar11 = 0;
      }
      else {
        if (unaff_x28 < pbVar12) {
          func_0x000104bd35f4();
          goto LAB_10899252c;
        }
        lVar11 = (long)pbVar12 * 0x68;
        __Znwm();
      }
      lVar23 = lVar11 + lVar23;
      func_0x000108a2984c(lVar23,&uStack_e0);
      pbVar6 = pbStack_240;
      pbVar19 = pbStack_248;
      pbVar17 = (byte *)(lVar23 + (((long)pbStack_240 - (long)pbStack_248) / -0x68) * 0x68);
      pbVar22 = pbVar17;
      for (unaff_x28 = pbStack_248; unaff_x28 != pbVar6; unaff_x28 = unaff_x28 + 0x68) {
        func_0x000108a2984c(pbVar22,unaff_x28);
        pbVar22 = pbVar22 + 0x68;
      }
      func_0x000108993230(pbVar22);
      for (; pbVar19 != pbVar6; pbVar19 = pbVar19 + 0x68) {
        func_0x000108a027e0(pbVar19);
      }
      pbVar22 = (byte *)(lVar23 + 0x68);
      pbStack_238 = (byte *)(lVar11 + (long)pbVar12 * 0x68);
      pbVar12 = pbStack_248;
      if (pbStack_248 != (byte *)0x0) {
        pbStack_248 = pbVar17;
        pbStack_240 = pbVar22;
        __ZdlPv();
        pbVar17 = pbStack_248;
      }
    }
    pbStack_248 = pbVar17;
    pbStack_240 = pbVar22;
    func_0x0001089931bc();
    (*extraout_x8_00)();
    bVar2 = *pbVar12;
    func_0x0001089931bc();
    (*extraout_x8_01)();
    auStack_298[0] = (uint)pbVar12[1];
    plVar18 = &lStack_1f8;
    func_0x00010533c250(plVar18,auStack_170);
    lVar23 = *plVar18;
    if (lVar23 == 0) {
      lVar23 = 0x28;
      __Znwm();
      uStack_130 = 1;
      *(uint *)(lVar23 + 0x1c) = auStack_298[0];
      *(undefined4 *)(lVar23 + 0x20) = 0;
      puStack_138 = auStack_1f0;
      func_0x00010533c2a0(&lStack_1f8,auStack_170[0],plVar18,lVar23);
      uStack_140 = 0;
      func_0x00010533c2f0(&uStack_140);
    }
    *(uint *)(lVar23 + 0x20) = (uint)bVar2;
    pbVar12 = *(byte **)(lVar21 + 0x28);
    (**(code **)(*(long *)pbVar12 + 0x20))();
    pbVar22 = pbVar12;
    func_0x0001089931bc();
    (*extraout_x8_02)();
    bVar2 = *pbVar22;
    puVar16 = *(undefined8 **)(param_1 + 0x18);
    puVar9 = (undefined8 *)(param_1 + 0x18);
    while (puVar20 = puVar9, puVar16 != (undefined8 *)0x0) {
      while (puVar20 = puVar16, *(byte *)((long)puVar20 + 0x1c) <= bVar2) {
        if (bVar2 <= *(byte *)((long)puVar20 + 0x1c)) goto LAB_108992280;
        puVar16 = (undefined8 *)puVar20[1];
        if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
          puVar9 = puVar20 + 1;
          goto LAB_108992228;
        }
      }
      puVar9 = puVar20;
      puVar16 = (undefined8 *)*puVar20;
    }
LAB_108992228:
    puVar13 = (undefined8 *)0x28;
    __Znwm();
    *(byte *)((long)puVar13 + 0x1c) = bVar2;
    *(undefined4 *)(puVar13 + 4) = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = puVar20;
    *puVar9 = puVar13;
    puVar16 = puVar13;
    if (**(long **)(param_1 + 0x10) != 0) {
      *(long *)(param_1 + 0x10) = **(long **)(param_1 + 0x10);
      puVar16 = (undefined8 *)*puVar9;
    }
    func_0x000107c27be4(*(undefined8 *)(param_1 + 0x18),puVar16);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    puVar20 = puVar13;
LAB_108992280:
    *(int *)(puVar20 + 4) = (int)pbVar12;
    func_0x00010899320c();
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 1089925fc; end: 108992647;  */

undefined8 FUN_1089925fc(undefined8 param_1,long param_2,long param_3)

{
  FUN_1089927c0(param_1,param_2,param_2 + param_3 * 4);
  return param_1;
}



/* Entry: 108992648; end: 108992697;  */

void FUN_108992648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  while (lVar1 != param_1 + 0x70) {
    FUN_108992698(param_1,lVar1 + 0x28,param_2);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 108992698; end: 108992773;  */

void FUN_108992698(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_318 [244];
  undefined1 uStack_224;
  int iStack_220;
  
  (**(code **)(**(long **)(*param_2 + 0x10) + 0x40))(auStack_318);
  lVar2 = *param_2;
  if (iStack_220 == 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (*(char *)(lVar2 + 0x30) == '\x01') {
      *(undefined1 *)(lVar2 + 0x30) = 0;
    }
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
  }
  else {
    puVar1 = param_1;
    FUN_108992774(param_1,uStack_224);
    FUN_108998640(lVar2 + 0x20,param_3,auStack_318,puVar1,*param_1,
                  *(undefined8 *)(*(long *)*param_2 + 8),*(undefined4 *)(param_1 + 9));
  }
  func_0x000108a2994c(auStack_318);
  return;
}



/* Entry: 108992774; end: 1089927bf;  */

undefined4 FUN_108992774(long param_1,undefined1 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uStack_21;
  
  lVar2 = param_1 + 0x10;
  uStack_21 = param_2;
  FUN_108992fdc(lVar2,&uStack_21);
  if (param_1 + 0x18 == lVar2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x20);
  }
  return uVar1;
}



/* Entry: 1089927c0; end: 1089927cb;  */

void FUN_1089927c0(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (long)param_3 - (long)param_2 >> 2;
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 2) < uVar2) {
    func_0x000107c28480(param_1);
    plVar1 = param_1;
    func_0x000107c28430(param_1,uVar2);
    func_0x000105536f6c(param_1,plVar1);
  }
  else {
    lVar5 = param_1[1] - lVar4;
    if (uVar2 <= (ulong)(lVar5 >> 2)) {
      lVar5 = (long)param_3 - (long)param_2;
      if (lVar5 != 0) {
        _memmove(lVar4,param_2,lVar5);
      }
      param_1[1] = lVar4 + lVar5;
      return;
    }
    if (param_1[1] != lVar4) {
      _memmove(lVar4,param_2,lVar5);
    }
    param_2 = (undefined4 *)((long)param_2 + lVar5);
  }
  puVar3 = (undefined4 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 1089927cc; end: 1089928c7;  */

void FUN_1089927cc(long *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 2) < param_4) {
    func_0x000107c28480(param_1);
    plVar1 = param_1;
    func_0x000107c28430(param_1,param_4);
    func_0x000105536f6c(param_1,plVar1);
  }
  else {
    lVar4 = param_1[1] - lVar3;
    if (param_4 <= (ulong)(lVar4 >> 2)) {
      lVar4 = (long)param_3 - (long)param_2;
      if (lVar4 != 0) {
        _memmove(lVar3,param_2,lVar4);
      }
      param_1[1] = lVar3 + lVar4;
      return;
    }
    if (param_1[1] != lVar3) {
      _memmove(lVar3,param_2,lVar4);
    }
    param_2 = (undefined4 *)((long)param_2 + lVar4);
  }
  puVar2 = (undefined4 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1089928c8; end: 1089928fb;  */

void FUN_1089928c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c278b8();
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 1089928fc; end: 10899290f;  */

void FUN_1089928fc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108a02754();
  *(undefined4 *)(puVar1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return;
}



/* Entry: 108992910; end: 108992a17;  */

void FUN_108992910(long param_1,long param_2)

{
  func_0x000108a02754();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return;
}



/* Entry: 108992a18; end: 108992a1b;  */

void FUN_108992a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa32e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108992a1c; end: 108992a2f;  */

void FUN_108992a1c(void)

{
  FUN_108992a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108992a30; end: 108992a57;  */

long FUN_108992a30(long param_1)

{
  func_0x00010894d60c(param_1 + 0x50);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x18;
}



/* Entry: 108992a58; end: 108992a6b;  */

void FUN_108992a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108992a6c; end: 108992a93;  */

long FUN_108992a6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108992a94; end: 108992adf;  */

undefined8 * FUN_108992a94(undefined8 *param_1,long param_2,long param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_108992ae0(param_1,param_2,param_2 + param_3 * 0x30);
  return param_1;
}



/* Entry: 108992ae0; end: 108992b23;  */

void FUN_108992ae0(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_108992b24(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 108992b24; end: 108992b2b;  */

undefined1  [16] FUN_108992b24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_108992bbc(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_108992ce4(alStack_58,param_1,param_3);
    FUN_10898a18c(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x00010898a1e0(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108992b2c; end: 108992bbb;  */

undefined1  [16]
FUN_108992b2c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_108992bbc(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_108992ce4(alStack_58,param_1,param_4);
    FUN_10898a18c(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x00010898a1e0(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108992bbc; end: 108992ce3;  */

long * FUN_108992bbc(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((param_2 == param_1 + 1) ||
     (uVar1 = param_5, func_0x000107c27bd4(param_5,param_2 + 4), ((uint)uVar1 >> 7 & 1) != 0)) {
    plVar2 = param_2;
    if (param_2 != (long *)*param_1) {
      func_0x000107c27bdc();
      lVar3 = (long)plVar2 + 0x20;
      func_0x000107c27bd4(lVar3,param_5);
      if (((uint)lVar3 >> 7 & 1) == 0) goto FUN_10898a108;
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = (long)plVar2;
      param_4 = (long *)((long)plVar2 + 8);
    }
  }
  else {
    plVar2 = param_2 + 4;
    func_0x000107c27bd4(plVar2,param_5);
    if (((uint)plVar2 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      FUN_108992d68(param_2,1);
      if ((param_1 + 1 != param_4) &&
         (uVar1 = param_5, func_0x000107c27bd4(param_5,param_4 + 4), ((uint)uVar1 >> 7 & 1) == 0)) {
FUN_10898a108:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar2 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar2 = plVar4, uVar1 = param_5, func_0x000107c27bd4(param_5,plVar2 + 4),
                ((uint)uVar1 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar2;
            param_1 = plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto LAB_10898a174;
          }
          plVar4 = plVar2 + 4;
          func_0x000107c27bd4(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar2 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_10898a174:
        *param_3 = (long)plVar2;
        return param_1;
      }
      if (param_2[1] == 0) {
        *param_3 = (long)param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = (long)param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 108992ce4; end: 108992d3f;  */

void FUN_108992ce4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x000107c278d4(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108992d40; end: 108992d67;  */

undefined8 * FUN_108992d40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c27bdc();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 108992d68; end: 108992d8f;  */

undefined8 FUN_108992d68(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_108992d90(&uStack_18);
  return uStack_18;
}



/* Entry: 108992d90; end: 108992e63;  */

void FUN_108992d90(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      FUN_108992d40(param_1);
    }
  }
  else {
    while (0 < param_2) {
      func_0x000108992ddc(param_1);
      param_2 = param_2 + -1;
    }
  }
  return;
}



/* Entry: 108992e64; end: 108992e73;  */

void FUN_108992e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3330;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108992e74; end: 108992e87;  */

void FUN_108992e74(void)

{
  FUN_108992e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108992e88; end: 108992e97;  */

void FUN_108992e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108992e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108992e98; end: 108992ecb;  */

undefined8 * FUN_108992e98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3380;
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 108992ecc; end: 108992edf;  */

void FUN_108992ecc(void)

{
  FUN_108992e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108992ee0; end: 108992fd3;  */

void FUN_108992ee0(long param_1,undefined8 param_2)

{
  long lVar1;
  long alStack_40 [2];
  long *plStack_30;
  long lStack_28;
  
  plStack_30 = (long *)0x0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if ((lVar1 != 0) && (plStack_30 = *(long **)(param_1 + 0x10), plStack_30 != (long *)0x0)) {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x00010899f038(alStack_40,param_2);
        if (alStack_40[0] != 0) {
          (**(code **)(*plStack_30 + 8))(plStack_30,alStack_40);
          FUN_1089909a8(alStack_40[0]);
        }
        FUN_10898d4a0(alStack_40);
      }
      else {
        func_0x00010899fce8(alStack_40,param_2);
        if (alStack_40[0] != 0) {
          (**(code **)*plStack_30)(plStack_30,alStack_40);
        }
        FUN_10898e6b0(alStack_40);
      }
    }
  }
  FUN_10897b634(&plStack_30);
  return;
}



/* Entry: 108992fd4; end: 108992fdb;  */

void FUN_108992fd4(void)

{
  return;
}



/* Entry: 108992fdc; end: 108993013;  */

void FUN_108992fdc(void)

{
  func_0x00010899321c();
  FUN_108993014();
  return;
}



/* Entry: 108993014; end: 10899303f;  */

long FUN_108993014(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(byte *)(param_3 + 0x1c)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108993040; end: 108993077;  */

void FUN_108993040(void)

{
  func_0x00010899321c();
  FUN_108993078();
  return;
}



/* Entry: 108993078; end: 1089930a3;  */

long FUN_108993078(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(uint *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1089930a4; end: 108993117;  */

bool FUN_1089930a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_108993040();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x0001089930e4(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 108993118; end: 108993173;  */

long FUN_108993118(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107c27be0();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 108993174; end: 1089931a7;  */

void FUN_108993174(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x0001089929dc(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 1089931a8; end: 108993243;  */

void FUN_1089931a8(void)

{
  return;
}



/* Entry: 108993244; end: 10899331f;  */

long FUN_108993244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_39;
  long lStack_38;
  
  lVar1 = param_1;
  FUN_10895ae60();
  FUN_10897732c(lVar1 + 0x28,param_3);
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  lStack_38 = param_1;
  FUN_108993320(param_1 + 0x60,&lStack_38);
  if ((param_5 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x60);
    (*(code *)(&PTR_FUN_110aa33d0)[*(byte *)(lVar1 + 0xc)])(&uStack_39,lVar1 + 8,lVar1,lVar1 + 8);
  }
  return param_1;
}



/* Entry: 108993320; end: 10899341b;  */

void FUN_108993320(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((long)puVar1 + 0xc) = 0;
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10899341c; end: 1089934df;  */

void FUN_10899341c(void)

{
  func_0x000108993a38();
  func_0x0001089939e4();
  return;
}



/* Entry: 1089934e0; end: 108993573;  */

void FUN_1089934e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2;
    func_0x000108990e7c(param_2);
    func_0x00010897b950(param_1,lVar1);
  }
  if (*(char *)(param_3 + 0x20) == '\x01') {
    lVar1 = param_3;
    FUN_108993574(param_3);
    FUN_1089935a8(param_1 + 0x28,lVar1);
  }
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108993560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108993574; end: 10899358b;  */

void FUN_108993574(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089935a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))();
    return;
  }
  return;
}



/* Entry: 10899358c; end: 1089935a7;  */

void FUN_10899358c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089935a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x28))();
    return;
  }
  return;
}



/* Entry: 1089935a8; end: 1089935f3;  */

undefined8 * FUN_1089935a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1089935f4(&uStack_40,param_2,param_1);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  FUN_108977458(&uStack_40);
  return param_1;
}



/* Entry: 1089935f4; end: 1089936e3;  */

long * FUN_1089935f4(long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_40;
  undefined8 *puStack_38;
  
  FUN_1089936e4(param_1,0,param_2,param_2,param_3);
  puVar7 = *(undefined8 **)(param_2 + 0x18);
  if (puVar7 != (undefined8 *)0x0) {
    puVar4 = puVar7;
    FUN_10897740c(param_1);
    FUN_108977558();
    lStack_40 = param_2;
    while (lStack_40 != 0) {
      puVar2 = puVar4;
      puStack_38 = puVar4;
      FUN_108977510();
      plVar3 = param_1;
      func_0x00010ae6c8b4(param_1,puVar2);
      bVar1 = (byte)puVar2 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar1;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar1;
      *(undefined8 *)(param_1[1] + (long)plVar3 * 8) = *puVar4;
      FUN_1089775b4(&lStack_40);
      puVar4 = puStack_38;
    }
    param_1[3] = (long)puVar7;
    *(long *)(*param_1 + -8) = *(long *)(*param_1 + -8) - (long)puVar7;
  }
  return param_1;
}



/* Entry: 1089936e4; end: 1089936e7;  */

void FUN_1089936e4(undefined8 param_1,long param_2)

{
  func_0x00010897c53c();
  if (param_2 != 0) {
    func_0x00010897c564();
    func_0x000107516d6c();
  }
  return;
}



/* Entry: 1089936e8; end: 10899370b;  */

undefined8 FUN_1089936e8(undefined8 param_1)

{
  FUN_10899370c(param_1,0);
  return param_1;
}



/* Entry: 10899370c; end: 108993723;  */

void FUN_10899370c(long *param_1,long param_2)

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



/* Entry: 108993724; end: 108993783;  */

long * FUN_108993724(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



/* Entry: 108993784; end: 10899379f;  */

undefined8 FUN_108993784(void)

{
  func_0x000108993a04(1);
  return 1;
}



/* Entry: 1089937a0; end: 1089937ab;  */

undefined8 FUN_1089937a0(void)

{
  return 0;
}



/* Entry: 1089937ac; end: 1089937eb;  */

undefined8 FUN_1089937ac(void)

{
  func_0x0001089939b4(4);
  func_0x000108993a30();
  return 1;
}



/* Entry: 1089937ec; end: 1089937f7;  */

undefined8 FUN_1089937ec(void)

{
  undefined1 *in_x4;
  
  *in_x4 = 4;
  return 1;
}



/* Entry: 1089937f8; end: 108993837;  */

undefined8 FUN_1089937f8(void)

{
  func_0x0001089939b4(4);
  func_0x000108993a30();
  return 1;
}



/* Entry: 108993838; end: 1089938a3;  */

undefined8 FUN_108993838(undefined8 param_1,undefined8 param_2,long *param_3)

{
  func_0x000108993a04(2);
  func_0x000108993a58(**(undefined8 **)(*param_3 + 0x58));
  func_0x0001089939c8(*param_3);
  return 1;
}



/* Entry: 1089938a4; end: 1089938a7;  */

undefined8 FUN_1089938a4(void)

{
  return 0;
}



/* Entry: 1089938a8; end: 1089938d3;  */

undefined8 FUN_1089938a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000108993a04(5);
  func_0x0001089939c8(*param_3);
  return 1;
}



/* Entry: 1089938d4; end: 1089938f7;  */

undefined8 FUN_1089938d4(void)

{
  long extraout_x8;
  
  func_0x0001089939b4(5);
  (**(code **)(extraout_x8 + 0x10))();
  return 1;
}



/* Entry: 1089938f8; end: 1089938fb;  */

undefined8 FUN_1089938f8(void)

{
  return 0;
}



/* Entry: 1089938fc; end: 108993943;  */

undefined8 FUN_1089938fc(void)

{
  long extraout_x8;
  
  func_0x0001089939b4(1);
  (**(code **)(extraout_x8 + 0x18))();
  return 1;
}



/* Entry: 108993944; end: 108993953;  */

undefined8 FUN_108993944(void)

{
  undefined1 *in_x4;
  
  *in_x4 = 3;
  return 1;
}



/* Entry: 108993954; end: 108993977;  */

undefined8 FUN_108993954(void)

{
  long extraout_x8;
  
  func_0x0001089939b4(5);
  (**(code **)(extraout_x8 + 8))();
  return 1;
}



/* Entry: 108993978; end: 10899398b;  */

undefined8 FUN_108993978(void)

{
  return 0;
}



/* Entry: 10899398c; end: 1089939ab;  */

undefined8 FUN_10899398c(void)

{
  func_0x0001089939b4(2);
  func_0x000108993a58();
  return 1;
}



/* Entry: 1089939ac; end: 108993a5f;  */

undefined8 FUN_1089939ac(void)

{
  undefined1 *in_x4;
  
  *in_x4 = 1;
  return 1;
}



/* Entry: 108993a60; end: 108993c63;  */

undefined8 *
FUN_108993a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  
  *param_1 = &PTR_SUB_110aa3530;
  param_1[1] = param_4;
  param_1[2] = param_2;
  uVar4 = param_7[1];
  uVar3 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x0001089958e8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = &PTR_FUN_110aa29d8;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  param_1[6] = param_5;
  func_0x00010897b3e4(&uStack_80);
  param_1[7] = *param_8;
  lVar2 = param_8[1];
  param_1[8] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001089958e8();
    } while (extraout_w10_00 != 0);
  }
  puStack_60 = param_1 + 9;
  *(undefined4 *)puStack_60 = param_9;
  uStack_70 = param_1[1];
  uStack_68 = 0;
  pcStack_58 = FUN_108995414;
  func_0x000107c2793c(&UNK_10f4edf57);
  func_0x000107c3173c(param_1 + 10);
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0x10] = param_11;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_10895ae60(param_1 + 0x12,param_3);
  uVar1 = (undefined4)param_1[2];
  FUN_108991690();
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  *(undefined2 *)((long)param_1 + 0xbc) = 0;
  FUN_10897732c(param_1 + 0x18,param_12);
  FUN_1089917ec(param_2);
  FUN_108993c64(param_1 + 0x1c,param_2,*(undefined4 *)(param_1 + 0x17),param_12);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  FUN_108994034(param_1);
  FUN_1089941f8(param_1,param_1 + 0x1c);
  return param_1;
}



/* Entry: 108993c64; end: 108994033;  */

void FUN_108993c64(long *param_1,long *param_2,long **param_3,long **param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long **pplVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  int *piVar11;
  long **pplVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long **pplStack_e0;
  undefined8 uStack_d8;
  long **pplStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long **pplStack_68;
  
  plVar5 = param_1;
  plVar13 = param_2;
  func_0x000108976994();
  plVar1 = plVar5 + 7;
  plVar8 = plVar1;
  plVar7 = plVar1;
  while( true ) {
    plVar14 = (long *)*plVar7;
    iVar15 = (int)param_3;
    if (plVar14 == (long *)0x0) break;
    lVar2 = 8;
    if (iVar15 <= (int)plVar14[4]) {
      lVar2 = 0;
    }
    plVar7 = (long *)((long)plVar14 + lVar2);
    if (iVar15 <= (int)plVar14[4]) {
      plVar8 = plVar14;
    }
  }
  if ((plVar1 != plVar8) && ((int)plVar8[4] <= iVar15)) {
    plVar7 = (long *)param_1[6];
    while (plVar8 = plVar7, plVar8 != plVar1) {
      lVar2 = plVar8[4];
      plVar7 = plVar8;
      func_0x000107c27be0();
      plVar5 = plVar7;
      if ((int)lVar2 != iVar15) {
        if ((long *)param_1[6] == plVar8) {
          param_1[6] = (long)plVar7;
        }
        param_1[8] = param_1[8] + -1;
        plVar13 = plVar8;
        func_0x00010530d618(param_1[7]);
        func_0x000104c03854(plVar8 + 5);
        __ZdlPv();
        plVar5 = plVar8;
      }
    }
  }
  if (param_4[3] != (long *)0x0) {
    func_0x000108995938();
    if (param_4[3] == (long *)0x0) {
      func_0x00010899594c();
      puVar9 = *(undefined8 **)((long)plVar5 + 0x1c);
    }
    else {
      pplVar6 = param_4;
      plStack_70 = plVar5;
      pplStack_68 = param_4;
      FUN_108977558();
      puVar9 = (undefined8 *)0x0;
      pplVar10 = &plStack_70;
      if (pplVar6 != (long **)0x0) {
        while( true ) {
          plStack_c0 = plVar13;
          uStack_c8 = pplVar6;
          pplStack_d0 = pplVar10;
          puVar9 = &uStack_c8;
          FUN_1089775b4();
          if (uStack_c8 == (long **)0x0) break;
          FUN_1089913f4(*pplStack_d0,plStack_c0);
          func_0x000108995960();
          pplVar10 = pplStack_d0;
          pplVar6 = uStack_c8;
          plVar13 = plStack_c0;
        }
      }
      func_0x000108995960();
    }
    puStack_78 = puVar9;
    FUN_10899111c(&pplStack_d0,param_1,&puStack_78);
    param_1[1] = (long)uStack_c8;
    *param_1 = (long)pplStack_d0;
    param_1[3] = CONCAT44(uStack_b4,uStack_b8);
    param_1[2] = (long)plStack_c0;
    *(undefined8 *)((long)param_1 + 0x24) = uStack_ac;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_b0,uStack_b4);
    func_0x000104c03d58(param_1 + 6,param_1[7]);
    param_1[6] = (long)plStack_a0;
    param_1[7] = lStack_98;
    param_1[8] = lStack_90;
    if (lStack_90 == 0) {
      param_1[6] = (long)plVar1;
    }
    else {
      plStack_a0 = &lStack_98;
      *(long **)(lStack_98 + 0x10) = plVar1;
      lStack_98 = 0;
      lStack_90 = 0;
    }
    param_1[10] = lStack_80;
    param_1[9] = lStack_88;
    pplVar6 = &plStack_a0;
    func_0x000104c03d34();
    func_0x000108995938();
    pplVar10 = pplVar6;
    func_0x00010899594c();
    if (*(char *)(pplVar10 + 6) == '\x01') {
      FUN_1089910ac();
      if ((long *)param_2[2] <= pplVar6[2]) {
        pplVar10 = pplVar6 + 1;
        func_0x000107c27bdc();
        iVar15 = *(int *)((long)pplVar10 + 0x1c);
        iVar3 = *(int *)(pplVar10 + 4);
        FUN_108977558();
        pplVar10 = param_3;
        pplVar12 = param_4;
        pplVar4 = param_3;
        if (param_4 != (long **)0x0) {
          while (uStack_c8 = pplVar4, pplStack_d0 = pplVar12, param_3 = pplVar10,
                FUN_1089775b4(&pplStack_d0), pplStack_d0 != (long **)0x0) {
            pplVar10 = uStack_c8;
            pplVar12 = pplStack_d0;
            pplVar4 = uStack_c8;
            if (*(int *)((long)uStack_c8 + 4) * *(int *)uStack_c8 <=
                *(int *)((long)param_3 + 4) * *(int *)param_3) {
              pplVar10 = param_3;
            }
          }
        }
        if (iVar3 * iVar15 < *(int *)((long)param_3 + 4) * *(int *)param_3) {
          return;
        }
      }
      pplVar10 = pplVar6 + 1;
      FUN_1089913ec();
      func_0x000108991474(pplVar6,pplVar10);
      uStack_c8._0_2_ = CONCAT11(1,(byte)uStack_c8);
      piVar11 = (int *)((long)pplVar10 + 0x2c);
      pplStack_d0 = pplVar10;
      FUN_1081998f4();
      iVar15 = *piVar11;
      *(int *)(pplVar10 + 5) = iVar15;
      pplVar12 = pplVar6;
      func_0x000104c03738(pplVar6,&plStack_70,(long)pplVar10 + 0x1c);
      if (*pplVar12 == (long *)0x0) {
        func_0x000104c036e4(pplVar6,plStack_70,pplVar12,pplVar10);
        uStack_d8 = 0;
        uStack_c8._0_2_ = (ushort)(byte)uStack_c8;
        pplStack_e0 = (long **)0x0;
      }
      else {
        uStack_d8 = CONCAT62(uStack_d8._2_6_,(ushort)uStack_c8);
        pplStack_e0 = pplVar10;
        if (((ushort)uStack_c8 >> 8 & 1) != 0) {
          uStack_c8._0_2_ = (ushort)(byte)uStack_c8;
        }
      }
      pplStack_d0 = (long **)0x0;
      FUN_108995270(&pplStack_e0);
      iVar3 = iVar15;
      if ((int)param_1[2] <= iVar15) {
        iVar3 = (int)param_1[2];
      }
      *(int *)(param_1 + 2) = iVar3;
      iVar3 = iVar15;
      if (*(int *)((long)param_1 + 0x1c) <= iVar15) {
        iVar3 = *(int *)((long)param_1 + 0x1c);
      }
      *(int *)((long)param_1 + 0x1c) = iVar3;
      if ((char)param_1[3] == '\x01') {
        if (*(int *)((long)param_1 + 0x14) <= iVar15) {
          iVar15 = *(int *)((long)param_1 + 0x14);
        }
        *(int *)((long)param_1 + 0x14) = iVar15;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      FUN_108995270(&pplStack_d0);
    }
  }
  return;
}


