/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae4a980; end: 10ae4a99f;  */

uint FUN_10ae4a980(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ulong *)*param_2 < *(ulong *)*param_1);
  if (*(ulong *)*param_1 < *(ulong *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10ae4a9a0; end: 10ae4af73;  */

ulong FUN_10ae4a9a0(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_48;
  
  puVar2 = &UNK_110c7bc88;
  func_0x000107c2b1c8();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c2b29c(0xb,0,2,&UNK_10f6cd3a3,0x84);
    return 0;
  }
  puVar3 = puVar2;
  func_0x000107c2b1d8();
  if ((int)puVar3 < 1) {
    uVar4 = 2;
    uVar6 = 0x84;
  }
  else if (param_3 == 2) {
    puVar3 = &UNK_110c87868;
    FUN_10ae1cc60(&UNK_110c87868,puVar2,0);
    if (puVar3 != (undefined *)0x0) {
      uVar7 = *(ulong *)(param_1 + 0x18);
      func_0x000107c34fa8(uVar7,puVar3,0);
LAB_10ae4abac:
      puStack_48 = puVar3;
      func_0x000107c2b1bc(&puStack_48,&UNK_110c87868,0);
      goto LAB_10ae4ab84;
    }
    uVar4 = 0xc;
    uVar6 = 0xa1;
  }
  else if (param_3 == 1) {
    puVar3 = puVar2;
    func_0x000107c2b580(puVar2,0,0,0);
    if (puVar3 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x000107c34fa8(uVar4,puVar3,0);
        if ((int)uVar4 == 0) {
          uVar7 = 0;
          goto LAB_10ae4abac;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
        puStack_48 = puVar3;
        func_0x000107c2b1bc(&puStack_48,&UNK_110c87868,0);
        puVar3 = puVar2;
        func_0x000107c2b580(puVar2,0,0,0);
      } while (puVar3 != (undefined *)0x0);
    }
    lVar5 = 0;
    func_0x000107c34f64();
    if ((((lVar5 != 0) && (*(uint *)(lVar5 + 0x184) != *(uint *)(lVar5 + 0x180))) &&
        (uVar1 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x180) * 0x18 + 0x10),
        uVar1 >> 0x18 == 9)) && ((uVar1 & 0xfff) == 0x6e && (int)uVar7 != 0)) {
      func_0x000107c2b290();
      goto LAB_10ae4ab84;
    }
    uVar4 = 9;
    uVar6 = 0x93;
  }
  else {
    uVar4 = 0x66;
    uVar6 = 0xa9;
  }
  func_0x000107c2b29c(0xb,0,uVar4,&UNK_10f6cd3a3,uVar6);
  uVar7 = 0;
LAB_10ae4ab84:
  func_0x000107c2b1cc(puVar2);
  return uVar7;
}



/* Entry: 10ae4af74; end: 10ae4b02b;  */

bool FUN_10ae4af74(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 != 1) {
    return false;
  }
  if (param_4 == 1) {
    func_0x00010ae4ae00(param_1,param_3);
    iVar2 = (int)param_1;
  }
  else {
    if (param_4 == 3) {
      puVar3 = &UNK_10f6cd593;
      _getenv();
      puVar1 = &UNK_10f6cd574;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
      func_0x00010ae4ae00(param_1,puVar1);
      if ((int)param_1 != 0) {
        return true;
      }
      func_0x000107c2b29c(0xb,0,0x76,&UNK_10f6cd3a3,0x6c);
      return false;
    }
    func_0x00010ae4a9a0(param_1,param_3,param_4);
    iVar2 = (int)param_1;
  }
  return iVar2 != 0;
}



/* Entry: 10ae4b02c; end: 10ae4b29b;  */

bool FUN_10ae4b02c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  FUN_10ae4b29c(param_2,&plStack_60);
  if (param_2 == (undefined8 *)0x0) {
    func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0x10c);
    bVar1 = false;
    goto LAB_10ae4b24c;
  }
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    puVar4 = param_2;
    func_0x000107c2b424();
    puVar3 = puVar4;
  }
  else {
    iVar2 = (int)*(undefined8 *)param_2[1];
    func_0x000107c2b550();
    if ((plStack_60 == (long *)0x0) || (iVar2 != 0x38f)) {
      puVar4 = (undefined8 *)0xb;
      func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0xbc);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)*plStack_60;
      FUN_10ae27f00();
      puVar4 = puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0xb;
        func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0xc1);
      }
    }
  }
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    func_0x000107c2b424();
joined_r0x00010ae4b134:
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = param_2[2];
      if (lVar5 == 0) {
        lVar5 = 0x14;
      }
      else {
        func_0x000107c34f2c(lVar5,2);
        if ((int)lVar5 < 0) {
          uVar7 = 0x11d;
          goto LAB_10ae4b244;
        }
      }
      lVar6 = param_2[3];
      if ((lVar6 != 0) && (func_0x000107c34f2c(lVar6,2), lVar6 != 1)) {
        uVar7 = 0x125;
        goto LAB_10ae4b244;
      }
      func_0x000107c34f6c(param_1,&uStack_68,puVar4,0,param_3,1);
      if ((((int)param_1 != 0) &&
          (uVar7 = uStack_68, func_0x000107c2b2d4(uStack_68,6,0xffffffff,0x1001,6,0),
          (int)uVar7 != 0)) &&
         (uVar7 = uStack_68, func_0x000107c2b2d4(uStack_68,6,0x18,0x1003,lVar5,0), (int)uVar7 != 0))
      {
        func_0x000107c2b2d4(uStack_68,6,0xf8,0x1009,0,puVar3);
        bVar1 = (int)uStack_68 != 0;
        goto LAB_10ae4b24c;
      }
    }
  }
  else {
    puVar4 = *(undefined8 **)*param_2;
    FUN_10ae27f00();
    if (puVar4 != (undefined8 *)0x0) goto joined_r0x00010ae4b134;
    uVar7 = 0xad;
LAB_10ae4b244:
    func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,uVar7);
  }
  bVar1 = false;
LAB_10ae4b24c:
  puStack_58 = param_2;
  func_0x000107c2b1bc(&puStack_58,&UNK_110c86910,0);
  func_0x000107c2b1bc(&puStack_58,&DAT_110c86e10,0);
  return bVar1;
}



/* Entry: 10ae4b29c; end: 10ae4b377;  */

long FUN_10ae4b29c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_2 = 0;
  piVar4 = *(int **)(param_1 + 8);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 0x10)) {
    return 0;
  }
  uStack_40 = *(undefined8 *)(*(int **)(piVar4 + 2) + 2);
  lVar2 = 0;
  func_0x000107c2b1b4(0,&uStack_40,(long)**(int **)(piVar4 + 2),&UNK_110c86910);
  if (lVar2 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(lVar2 + 8);
  if ((puVar5 != (undefined8 *)0x0) && (puVar5[1] != 0)) {
    iVar1 = (int)*puVar5;
    func_0x000107c2b550();
    if ((iVar1 == 0x38f) && (*(int *)puVar5[1] == 0x10)) {
      piVar4 = *(int **)((int *)puVar5[1] + 2);
      uStack_38 = *(undefined8 *)(piVar4 + 2);
      uVar3 = 0;
      func_0x000107c2b1b4(0,&uStack_38,(long)*piVar4,&DAT_110c86e10);
      goto LAB_10ae4b35c;
    }
  }
  uVar3 = 0;
LAB_10ae4b35c:
  *param_2 = uVar3;
  return lVar2;
}



/* Entry: 10ae4b378; end: 10ae4b3bb;  */

undefined8 FUN_10ae4b378(int param_1,long *param_2)

{
  undefined8 uStack_18;
  
  if (param_1 == 2) {
    uStack_18 = *(undefined8 *)(*param_2 + 0x20);
    func_0x000107c2b1bc(&uStack_18,&DAT_110c86e10,0);
  }
  return 1;
}



/* Entry: 10ae4b3bc; end: 10ae4b4ef;  */

undefined8 FUN_10ae4b3bc(undefined8 param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  
  FUN_10ae4c0d4(param_2,0,0);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 != '\0') {
    pbVar2 = (byte *)(param_2 + 1);
    pbVar4 = (byte *)(param_2 + 2);
    iVar5 = (int)param_2;
    while( true ) {
      iVar5 = iVar5 + 1;
      if ((pbVar4[-1] == 0) ||
         (((pbVar4[-1] == 0x2f && (*pbVar4 - 0x41 < 0x1a)) &&
          ((pbVar4[1] == 0x3d || ((pbVar4[1] - 0x41 < 0x1a && (pbVar4[2] == 0x3d)))))))) break;
LAB_10ae4b478:
      pbVar4 = pbVar4 + 1;
    }
    iVar1 = iVar5 - (int)pbVar2;
    uVar3 = param_1;
    func_0x000107c2b1d4(param_1,pbVar2,iVar1);
    if (iVar1 != (int)uVar3) {
LAB_10ae4b4b0:
      func_0x000107c2b29c(0xb,0,7,&UNK_10f6cd4e8,0x16d);
      uVar3 = 0;
      goto LAB_10ae4b4d0;
    }
    if (pbVar4[-1] != 0) {
      uVar3 = param_1;
      func_0x000107c2b1d4(param_1,&UNK_10f6cd55c,2);
      if ((int)uVar3 != 2) goto LAB_10ae4b4b0;
      pbVar2 = pbVar4;
      if (pbVar4[-1] != 0) goto LAB_10ae4b478;
    }
  }
  uVar3 = 1;
LAB_10ae4b4d0:
  func_0x000107c2b534(param_2);
  return uVar3;
}



/* Entry: 10ae4b4f0; end: 10ae4b757;  */

/* WARNING: Removing unreachable block (ram,0x00010ae4b6f4) */

ulong FUN_10ae4b4f0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  uint auStack_78 [4];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long alStack_40 [3];
  long lStack_28;
  int iVar4;
  
  plVar5 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_40[0] = param_1;
  func_0x000107c34f30(alStack_40,0,&DAT_110c87418,0xffffffff,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  func_0x000107c2b424();
  uVar6 = uVar12;
  func_0x000107c2b408(uVar12,(long)iVar1,alStack_40,0,plVar5,0);
  uVar2 = 0;
  if ((int)uVar6 != 0) {
    uVar2 = (uint)alStack_40[0];
  }
  uVar7 = (ulong)uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar7;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_a0;
  iVar3 = (int)&uStack_a0;
  iVar4 = (int)&uStack_a0;
  uStack_48 = 0x10ae4b598;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = uVar7;
  uStack_60 = uVar12;
  lStack_58 = (long)iVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c34f30(&uStack_a0,0,&DAT_110c87418,0xffffffff,0,0);
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  plStack_90 = (long *)0x0;
  FUN_10ae35060();
  func_0x000107c2b418(&uStack_a0,puVar8,0);
  if (iVar3 == 0) {
LAB_10ae4b634:
    uVar7 = 0;
  }
  else {
    (**(code **)(uStack_a0 + 0x18))
              (&uStack_a0,(*(undefined8 **)(uVar7 + 0x10))[1],**(undefined8 **)(uVar7 + 0x10));
    puVar8 = (ulong *)auStack_78;
    func_0x000107c2b41c(&uStack_a0,puVar8,0);
    if (iVar4 == 0) goto LAB_10ae4b634;
    uVar7 = (ulong)auStack_78[0];
  }
  plVar5 = plStack_98;
  func_0x000107c2b534();
  if (puStack_88 != (undefined8 *)0x0) {
    plVar5 = plStack_90;
    (*(code *)*puStack_88)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x000107c2b66c();
  func_0x000107c2b66c(puVar8);
  uVar7 = (plVar5[0x11] & 0xff00ff00ff00ff00U) >> 8 | (plVar5[0x11] & 0xff00ff00ff00ffU) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar7 >> 0x20 | uVar7 << 0x20;
  uVar7 = (*(ulong *)((long)puVar8 + 0x88) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)((long)puVar8 + 0x88) & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
  if (uVar9 == uVar7) {
    uVar7 = (plVar5[0x12] & 0xff00ff00ff00ff00U) >> 8 | (plVar5[0x12] & 0xff00ff00ff00ffU) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = (*(ulong *)((long)puVar8 + 0x90) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)((long)puVar8 + 0x90) & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    if (uVar9 == uVar7) {
      uVar2 = (*(uint *)(plVar5 + 0x13) & 0xff00ff00) >> 8 |
              (*(uint *)(plVar5 + 0x13) & 0xff00ff) << 8;
      uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = (*(uint *)((long)puVar8 + 0x98) & 0xff00ff00) >> 8 |
              (*(uint *)((long)puVar8 + 0x98) & 0xff00ff) << 8;
      uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      if (uVar9 == uVar7) goto LAB_10ae4b708;
    }
  }
  uVar2 = 1;
  if (uVar9 < uVar7) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 != 0) {
    return (ulong)uVar2;
  }
LAB_10ae4b708:
  lVar10 = *plVar5;
  if ((*(int *)(lVar10 + 0x60) == 0) && (lVar11 = *puVar8, *(int *)(lVar11 + 0x60) == 0)) {
    uVar2 = (int)*(long *)(lVar10 + 0x58) - *(int *)(lVar11 + 0x58);
    if (uVar2 != 0) {
      return (ulong)uVar2;
    }
    if (*(long *)(lVar10 + 0x58) != 0) {
      uVar7 = *(ulong *)(lVar10 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcmp_11034c650)(uVar7,*(undefined8 *)(lVar11 + 0x50));
      return uVar7;
    }
  }
  return 0;
}



/* Entry: 10ae4b758; end: 10ae4b807;  */

int * FUN_10ae4b758(long *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return (int *)0x0;
  }
  uVar7 = *(ulong *)(*param_1 + 0x30);
  uStack_28 = 0;
  if (uVar7 != 0) {
    lVar5 = 0x1133114a8;
    func_0x000107c61288();
    if ((int)lVar5 != 0) {
code_r0x000100736a14:
      func_0x000107c60ebc();
      uVar3 = *(int *)(lVar5 + 0x14) - *(int *)((long)param_2 + 0x14);
      piVar8 = (int *)(ulong)uVar3;
      if (uVar3 == 0) {
        if (*(int *)(lVar5 + 0x14) != 0) {
          piVar8 = *(int **)(lVar5 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcmp_11034c650)(piVar8,param_2[3]);
          return piVar8;
        }
        piVar8 = (int *)0x0;
      }
      return piVar8;
    }
    lVar10 = *(long *)(uVar7 + 0x10);
    lVar5 = 0x1133114a8;
    func_0x000107c6128c();
    if ((int)lVar5 != 0) goto code_r0x000100736a14;
    if (lVar10 != 0) {
      piVar8 = *(int **)(uVar7 + 0x10);
      iVar9 = *piVar8;
      do {
        if (iVar9 == -1) break;
        iVar1 = *piVar8;
        if (iVar1 == iVar9) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar2 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar9 = iVar1;
      } while (!bVar4);
      return *(int **)(uVar7 + 0x10);
    }
    param_2 = &uStack_28;
    uVar6 = uVar7;
    func_0x00010072d43c(uVar7,param_2,&DAT_110c874c0);
    if (-1 < (int)uVar6) {
      uStack_30 = uVar6 & 0xffffffff;
      uStack_38 = uStack_28;
      piVar8 = (int *)&uStack_38;
      func_0x000100201d78();
      if ((piVar8 != (int *)0x0) && (uStack_30 == 0)) {
        lVar5 = 0x1133114a8;
        func_0x000107c61290();
        if ((int)lVar5 == 0) {
          if (*(long *)(uVar7 + 0x10) == 0) {
            *(int **)(uVar7 + 0x10) = piVar8;
            lVar5 = 0x1133114a8;
            func_0x000107c6128c();
            if ((int)lVar5 != 0) goto code_r0x000100736a14;
          }
          else {
            lVar5 = 0x1133114a8;
            func_0x000107c6128c();
            if ((int)lVar5 != 0) goto code_r0x000100736a14;
            func_0x00010021f114(piVar8);
            piVar8 = *(int **)(uVar7 + 0x10);
          }
          func_0x0001001e33e0(uStack_28);
          iVar9 = *piVar8;
          do {
            if (iVar9 == -1) {
              return piVar8;
            }
            iVar1 = *piVar8;
            if (iVar1 == iVar9) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar4) {
                *piVar8 = iVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar2 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar9 = iVar1;
          } while (!bVar4);
          return piVar8;
        }
        goto code_r0x000100736a14;
      }
      func_0x0001004d2c58(0xb,0,0x7d,&UNK_10f6ce47e,0x9f);
      goto code_r0x000100736970;
    }
  }
  piVar8 = (int *)0x0;
code_r0x000100736970:
  func_0x0001001e33e0(uStack_28);
  func_0x00010021f114(piVar8);
  return (int *)0x0;
}



/* Entry: 10ae4b808; end: 10ae4b85f;  */

void FUN_10ae4b808(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  if ((param_3 & 0x30000) != 0) {
    uVar1 = **(undefined8 **)(*param_1 + 8);
    uStack_28 = param_3;
    func_0x000107c2b550(uVar1);
    func_0x00010ae4b774(param_2,uVar1,&uStack_28);
  }
  return;
}



/* Entry: 10ae4b860; end: 10ae4b927;  */

void FUN_10ae4b860(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (((param_2 == 0) ||
      (((lVar1 = param_1, func_0x00010ae4bbfc(param_1,&PTR_DAT_113311178), lVar1 != 0 &&
        (*(long *)(lVar1 + 8) != 0)) &&
       ((pcVar2 = *(code **)(*(long *)(lVar1 + 8) + 0x28), pcVar2 == (code *)0x0 ||
        ((*pcVar2)(), (int)lVar1 == 1)))))) &&
     ((((param_3 != 0 && (func_0x00010ae4bbfc(param_1,&PTR_DAT_113311060), param_1 != 0)) &&
       (*(long *)(param_1 + 8) != 0)) &&
      (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x28), pcVar2 != (code *)0x0)))) {
    (*pcVar2)();
  }
  return;
}



/* Entry: 10ae4b928; end: 10ae4ba27;  */

uint FUN_10ae4b928(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*param_1 + 0x30);
  func_0x000107c2b554();
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (piVar4 == (int *)0x0) {
LAB_10ae4c620:
    param_3 = 0xffffffff;
  }
  else {
    iVar1 = *piVar4;
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar3 = (long)(int)param_3;
    do {
      lVar3 = lVar3 + 1;
      if (iVar1 <= lVar3) goto LAB_10ae4c620;
      uVar2 = **(undefined8 **)(*(long *)(piVar4 + 2) + lVar3 * 8);
      func_0x000107c2b54c(uVar2,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar2 != 0);
  }
  return param_3;
}



/* Entry: 10ae4ba28; end: 10ae4ba6f;  */

undefined8 FUN_10ae4ba28(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 0x140);
  iVar5 = *piVar1;
  do {
    if (iVar5 == -1) {
      return 1;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    iVar5 = iVar2;
  } while (!bVar4);
  return 1;
}



/* Entry: 10ae4ba70; end: 10ae4bb87;  */

/* WARNING: Possible PIC construction at 0x00010ae4baec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4baf0) */
/* WARNING: Removing unreachable block (ram,0x00010ae4bb44) */

void FUN_10ae4ba70(ulong *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 == (ulong *)0x0) {
    return;
  }
  iVar2 = (int)param_1 + 0x140;
  func_0x000107c2b58c();
  if (iVar2 == 0) {
    return;
  }
  _pthread_rwlock_destroy(param_1 + 2);
  puVar4 = (ulong *)param_1[0x1b];
  if ((puVar4 == (ulong *)0x0) || (*puVar4 == 0)) {
    func_0x000107c2b5a4(puVar4);
    puVar4 = (ulong *)param_1[1];
    if (puVar4 == (ulong *)0x0) {
      puVar4 = (ulong *)param_1[0x1c];
      puVar5 = param_1;
      if (puVar4 != (ulong *)0x0) {
        func_0x000107c34fb0(puVar4);
        unaff_x30 = 0x10ae4bb64;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar5 = puVar4;
        unaff_x19 = param_1;
        unaff_x20 = puVar4;
        unaff_x29 = puVar1;
      }
    }
    else {
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          if (*(long *)(puVar4[1] + uVar6 * 8) != 0) {
            FUN_10ae4bb88();
            uVar3 = *puVar4;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      unaff_x30 = 0x10ae4bb44;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar5 = (ulong *)puVar4[1];
      unaff_x19 = param_1;
      unaff_x20 = puVar4;
      unaff_x29 = puVar1;
    }
    goto code_r0x0001001e33e0;
  }
  puVar5 = *(ulong **)puVar4[1];
  uVar3 = puVar5[1];
  if (uVar3 != 0) {
    if (*(code **)(uVar3 + 0x20) != (code *)0x0) {
      (**(code **)(uVar3 + 0x20))(puVar5);
      uVar3 = puVar5[1];
      if (uVar3 == 0) goto LAB_10ae4bae8;
    }
    if (*(code **)(uVar3 + 0x10) != (code *)0x0) {
      (**(code **)(uVar3 + 0x10))(puVar5);
    }
  }
LAB_10ae4bae8:
  unaff_x30 = 0x10ae4baf0;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = param_1;
  unaff_x20 = puVar4;
  unaff_x29 = puVar1;
code_r0x0001001e33e0:
  if (puVar5 != (ulong *)0x0) {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = puVar5 + -1;
    if (*puVar5 + 8 != 0) {
      func_0x000107c60ee4(puVar5,*puVar5 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar5);
    return;
  }
  return;
}



/* Entry: 10ae4bb88; end: 10ae4bc9b;  */

void FUN_10ae4bb88(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 2) {
    uStack_28 = *(undefined8 *)(param_1 + 2);
    puVar1 = &UNK_110c871b0;
  }
  else {
    if (*param_1 != 1) goto code_r0x0001001e33e0;
    uStack_28 = *(undefined8 *)(param_1 + 2);
    puVar1 = &UNK_110c87868;
  }
  func_0x000107c2b1bc(&uStack_28,puVar1,0);
code_r0x0001001e33e0:
  if (param_1 != (int *)0x0) {
    plVar2 = (long *)(param_1 + -2);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ae4bc9c; end: 10ae4bcf7;  */

void FUN_10ae4bc9c(int *param_1)

{
  undefined *puVar1;
  undefined8 uStack_18;
  
  if (*param_1 == 2) {
    uStack_18 = *(undefined8 *)(param_1 + 2);
    puVar1 = &UNK_110c871b0;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    uStack_18 = *(undefined8 *)(param_1 + 2);
    puVar1 = &UNK_110c87868;
  }
  func_0x000107c2b1bc(&uStack_18,puVar1,0);
  return;
}



/* Entry: 10ae4bcf8; end: 10ae4c0c3;  */

ulong * FUN_10ae4bcf8(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined1 auStack_c0 [20];
  int iStack_ac;
  long lStack_a8;
  long alStack_58 [2];
  int iStack_44;
  
  puVar5 = (ulong *)0x0;
  lVar9 = param_2;
  func_0x000107c2b59c();
  if (puVar5 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  plVar6 = (long *)(*param_1 + 0x10);
  _pthread_rwlock_wrlock();
  if ((int)plVar6 == 0) {
    uVar7 = *(ulong *)(*param_1 + 8);
    lVar9 = 1;
    func_0x000107c2b5fc(uVar7,1,param_2,&iStack_44);
    if ((int)uVar7 < 0) {
      plVar6 = (long *)(*param_1 + 0x10);
      _pthread_rwlock_unlock();
      if ((int)plVar6 == 0) {
        lVar11 = *param_1;
        lVar9 = 1;
        func_0x000107c2b5f0(lVar11,1,param_2,alStack_58);
        if ((int)lVar11 == 0) {
LAB_10ae4bebc:
          func_0x000107c2b534(puVar5[1]);
          func_0x000107c2b534(puVar5);
          return (ulong *)0x0;
        }
        FUN_10ae4bc9c(alStack_58);
        plVar6 = (long *)(*param_1 + 0x10);
        _pthread_rwlock_wrlock();
        if ((int)plVar6 == 0) {
          uVar7 = *(ulong *)(*param_1 + 8);
          lVar9 = 1;
          func_0x000107c2b5fc(uVar7,1,param_2,&iStack_44);
          if (-1 < (int)uVar7) goto LAB_10ae4bd54;
          plVar6 = (long *)(*param_1 + 0x10);
          _pthread_rwlock_unlock();
          if ((int)plVar6 == 0) goto LAB_10ae4bebc;
        }
      }
    }
    else {
LAB_10ae4bd54:
      if (0 < iStack_44) {
        iVar13 = 0;
        uVar7 = uVar7 & 0xffffffff;
        do {
          lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*param_1 + 8) + 8) + uVar7 * 8) + 8);
          puVar8 = puVar5;
          lVar9 = lVar11;
          func_0x000107c2b5ac(puVar5,lVar11,*puVar5);
          if (puVar8 == (ulong *)0x0) {
            plVar6 = (long *)(*param_1 + 0x10);
            _pthread_rwlock_unlock();
            if ((int)plVar6 != 0) goto LAB_10ae4beec;
            uVar7 = *puVar5;
            if (uVar7 != 0) {
              uVar12 = 0;
              do {
                lVar9 = *(long *)(puVar5[1] + uVar12 * 8);
                if (lVar9 != 0) {
                  alStack_58[0] = lVar9;
                  func_0x000107c2b1bc(alStack_58,&UNK_110c87868,0);
                  uVar7 = *puVar5;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar7);
            }
            goto LAB_10ae4bebc;
          }
          piVar1 = (int *)(lVar11 + 0x18);
          iVar10 = *piVar1;
          do {
            if (iVar10 == -1) break;
            iVar2 = *piVar1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar3 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while (!bVar4);
          iVar13 = iVar13 + 1;
          uVar7 = uVar7 + 1;
        } while (iVar13 < iStack_44);
      }
      plVar6 = (long *)(*param_1 + 0x10);
      _pthread_rwlock_unlock();
      if ((int)plVar6 == 0) {
        return puVar5;
      }
    }
  }
LAB_10ae4beec:
  _abort();
  puVar5 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar5 != (ulong *)0x0) {
    lVar11 = *plVar6;
    func_0x000107c2b5f0(lVar11,2,lVar9,auStack_c0);
    if ((int)lVar11 != 0) {
      FUN_10ae4bc9c(auStack_c0);
      lVar11 = *plVar6 + 0x10;
      _pthread_rwlock_wrlock();
      if ((int)lVar11 != 0) {
LAB_10ae4c0c0:
        _abort();
        return *(ulong **)(lVar11 + 0xe0);
      }
      uVar7 = *(ulong *)(*plVar6 + 8);
      func_0x000107c2b5fc(uVar7,2,lVar9,&iStack_ac);
      if (-1 < (int)uVar7) {
        if (0 < iStack_ac) {
          iVar13 = 0;
          uVar7 = uVar7 & 0xffffffff;
          do {
            lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*plVar6 + 8) + 8) + uVar7 * 8) + 8);
            piVar1 = (int *)(lVar9 + 0x18);
            iVar10 = *piVar1;
            do {
              if (iVar10 == -1) break;
              iVar2 = *piVar1;
              if (iVar2 == iVar10) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                bVar4 = cVar3 == '\0';
              }
              else {
                bVar4 = false;
                ClearExclusiveLocal();
              }
              iVar10 = iVar2;
            } while (!bVar4);
            puVar8 = puVar5;
            func_0x000107c2b5ac(puVar5,lVar9,*puVar5);
            if (puVar8 == (ulong *)0x0) {
              lVar11 = *plVar6 + 0x10;
              _pthread_rwlock_unlock();
              if ((int)lVar11 != 0) goto LAB_10ae4c0c0;
              lStack_a8 = lVar9;
              func_0x000107c2b1bc(&lStack_a8,&UNK_110c871b0,0);
              uVar7 = *puVar5;
              if (uVar7 != 0) {
                uVar12 = 0;
                do {
                  lVar9 = *(long *)(puVar5[1] + uVar12 * 8);
                  if (lVar9 != 0) {
                    lStack_a8 = lVar9;
                    func_0x000107c2b1bc(&lStack_a8,&UNK_110c871b0,0);
                    uVar7 = *puVar5;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar7);
              }
              goto LAB_10ae4c090;
            }
            iVar13 = iVar13 + 1;
            uVar7 = uVar7 + 1;
          } while (iVar13 < iStack_ac);
        }
        lVar11 = *plVar6 + 0x10;
        _pthread_rwlock_unlock();
        if ((int)lVar11 == 0) {
          return puVar5;
        }
        goto LAB_10ae4c0c0;
      }
      lVar11 = *plVar6 + 0x10;
      _pthread_rwlock_unlock();
      if ((int)lVar11 != 0) goto LAB_10ae4c0c0;
    }
LAB_10ae4c090:
    func_0x000107c2b534(puVar5[1]);
    func_0x000107c2b534(puVar5);
  }
  return (ulong *)0x0;
}



/* Entry: 10ae4c0c4; end: 10ae4c0d3;  */

undefined8 FUN_10ae4c0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10ae4c0d4; end: 10ae4c497;  */

undefined1 * FUN_10ae4c0d4(long *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  uint *puVar11;
  long lVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_d8;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    plStack_d8 = param_1;
    func_0x000107c2b1ec();
    if (plStack_d8 == (long *)0x0) {
      plStack_d8 = (long *)0x0;
    }
    else {
      puVar7 = (undefined1 *)0xc8;
      plVar20 = plStack_d8;
      func_0x000107c2b1f8();
      if (plVar20 != (long *)0x0) {
        *(undefined1 *)plStack_d8[1] = 0;
        if (param_1 == (long *)0x0) {
          puVar19 = (undefined1 *)plStack_d8[1];
          func_0x000107c2b534();
          param_3 = 200;
          goto LAB_10ae4c40c;
        }
        param_3 = 200;
        goto LAB_10ae4c150;
      }
    }
LAB_10ae4c3d4:
    uVar8 = 0x41;
    uVar9 = 0xc3;
LAB_10ae4c3ec:
    param_2 = (undefined1 *)0x0;
    func_0x000107c2b29c(0xb,0,uVar8,&UNK_10f6cd634,uVar9);
    func_0x000107c2b1f0();
    param_1 = plStack_d8;
  }
  else if (0 < param_3) {
    if (param_1 == (long *)0x0) {
LAB_10ae4c40c:
      param_2 = &UNK_10f6cd627;
      puVar7 = puVar19;
      FUN_10ae45668(puVar19,&UNK_10f6cd627,param_3);
      iVar4 = (int)puVar7;
      goto LAB_10ae4c420;
    }
    plStack_d8 = (long *)0x0;
    puVar7 = param_2;
LAB_10ae4c150:
    puVar10 = (ulong *)*param_1;
    if (puVar10 == (ulong *)0x0) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      uStack_f8 = 0x100000000;
      uStack_100 = 0;
      iVar4 = 0;
      do {
        if (*puVar10 <= uVar24) break;
        puVar18 = *(undefined8 **)(puVar10[1] + uVar24 * 8);
        puVar5 = (undefined8 *)*puVar18;
        func_0x000107c2b550();
        if ((((int)puVar5 == 0) || (func_0x000107c2b554(), puVar5 == (undefined8 *)0x0)) ||
           (puVar22 = (undefined1 *)*puVar5, puVar22 == (undefined1 *)0x0)) {
          puVar22 = auStack_d0;
          puVar7 = (undefined1 *)0x50;
          func_0x00010ae4599c(auStack_d0,0x50,*puVar18,0);
        }
        puVar6 = puVar22;
        _strlen();
        puVar11 = (uint *)puVar18[1];
        uVar2 = *puVar11;
        uVar21 = (ulong)uVar2;
        if (0x100000 < (int)uVar2) {
          uVar8 = 0x87;
          uVar9 = 0x7b;
          goto LAB_10ae4c3ec;
        }
        lVar12 = *(long *)(puVar11 + 2);
        uStack_80 = 0x100000001;
        uStack_78 = 0x100000001;
        if (((uVar2 & 3) == 0 && puVar11[1] == 0x1b) &&
           (uStack_80 = uStack_100, uStack_78 = uStack_f8, 0 < (int)uVar2)) {
          uVar17 = 0;
          do {
            if (*(char *)(lVar12 + uVar17) != '\0') {
              *(undefined4 *)((ulong)&uStack_80 | (uVar17 & 3) << 2) = 1;
            }
            uVar17 = uVar17 + 1;
          } while (uVar21 != uVar17);
        }
        if ((int)uVar2 < 1) {
          iVar16 = 0;
        }
        else {
          uVar17 = 0;
          iVar16 = 0;
          do {
            iVar1 = iVar16;
            if ((*(int *)((ulong)&uStack_80 | (uVar17 & 3) << 2) != 0) &&
               (iVar1 = iVar16 + 4, 0xffffffa0 < *(byte *)(lVar12 + uVar17) - 0x7f)) {
              iVar1 = iVar16 + 1;
            }
            iVar16 = iVar1;
            uVar17 = uVar17 + 1;
          } while (uVar21 != uVar17);
        }
        iVar16 = iVar4 + (int)puVar6 + iVar16;
        iVar1 = iVar16 + 2;
        if (0x100000 < iVar1) {
          uVar8 = 0x87;
          uVar9 = 0x9a;
          goto LAB_10ae4c3ec;
        }
        if (plStack_d8 == (long *)0x0) {
          puVar13 = param_2;
          if (param_3 <= iVar1) goto LAB_10ae4c3c0;
        }
        else {
          puVar7 = (undefined1 *)(long)(iVar16 + 3);
          plVar20 = plStack_d8;
          func_0x000107c2b1f8();
          if (plVar20 == (long *)0x0) goto LAB_10ae4c3d4;
          puVar13 = (undefined1 *)plStack_d8[1];
        }
        puVar13 = puVar13 + iVar4;
        puVar23 = puVar13 + 1;
        *puVar13 = 0x2f;
        if (((ulong)puVar6 & 0xffffffff) != 0) {
          _memcpy(puVar23);
          puVar7 = puVar22;
        }
        pbVar14 = puVar23 + (int)puVar6 + 1;
        puVar23[(int)puVar6] = 0x3d;
        if (0 < (int)uVar2) {
          uVar17 = 0;
          lVar12 = *(long *)(puVar18[1] + 8);
          pbVar15 = pbVar14;
          do {
            pbVar14 = pbVar15;
            if (*(int *)((ulong)&uStack_80 | (uVar17 & 3) << 2) != 0) {
              bVar3 = *(byte *)(lVar12 + uVar17);
              if (bVar3 - 0x7f < 0xffffffa1) {
                pbVar15[0] = 0x5c;
                pbVar15[1] = 0x78;
                pbVar15[2] = (&UNK_10f6cd616)[bVar3 >> 4];
                pbVar15[3] = (&UNK_10f6cd616)[(ulong)bVar3 & 0xf];
                pbVar14 = pbVar15 + 4;
              }
              else {
                pbVar14 = pbVar15 + 1;
                *pbVar15 = bVar3;
              }
            }
            uVar17 = uVar17 + 1;
            pbVar15 = pbVar14;
          } while (uVar21 != uVar17);
        }
        *pbVar14 = 0;
        uVar24 = uVar24 + 1;
        puVar10 = (ulong *)*param_1;
        iVar4 = iVar1;
      } while (puVar10 != (ulong *)0x0);
    }
    if (plStack_d8 == (long *)0x0) {
LAB_10ae4c3c0:
      iVar4 = (int)plStack_d8;
    }
    else {
      puVar19 = (undefined1 *)plStack_d8[1];
      func_0x000107c2b534();
      iVar4 = (int)plStack_d8;
    }
    param_2 = puVar7;
    if (uVar24 == 0) {
      *puVar19 = 0;
    }
    goto LAB_10ae4c420;
  }
  iVar4 = (int)param_1;
  puVar19 = (undefined1 *)0x0;
LAB_10ae4c420:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar19;
  }
  ___stack_chk_fail();
  plVar20 = *(long **)(param_2 + 0xa0);
  if (plVar20 != (long *)0x0) {
    puVar10 = (ulong *)plVar20[1];
    if (puVar10 != (ulong *)0x0) {
      uVar24 = 0;
      do {
        if (*puVar10 <= uVar24) break;
        iVar16 = (int)*(undefined8 *)(puVar10[1] + uVar24 * 8);
        func_0x000107c2b550();
        if (iVar16 == iVar4) {
          return (undefined1 *)0x2;
        }
        uVar24 = uVar24 + 1;
        puVar10 = (ulong *)plVar20[1];
      } while (puVar10 != (ulong *)0x0);
    }
    puVar10 = (ulong *)*plVar20;
    if (puVar10 != (ulong *)0x0) {
      uVar24 = 0;
      do {
        if (*puVar10 <= uVar24) {
          return (undefined1 *)0x3;
        }
        iVar16 = (int)*(undefined8 *)(puVar10[1] + uVar24 * 8);
        func_0x000107c2b550();
        if (iVar16 == iVar4) {
          return (undefined1 *)0x1;
        }
        uVar24 = uVar24 + 1;
        puVar10 = (ulong *)*plVar20;
      } while (puVar10 != (ulong *)0x0);
    }
  }
  return (undefined1 *)0x3;
}



/* Entry: 10ae4c498; end: 10ae4c547;  */

undefined8 FUN_10ae4c498(int param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_2 + 0xa0);
  if (plVar3 != (long *)0x0) {
    puVar2 = (ulong *)plVar3[1];
    if (puVar2 != (ulong *)0x0) {
      uVar4 = 0;
      do {
        if (*puVar2 <= uVar4) break;
        iVar1 = (int)*(undefined8 *)(puVar2[1] + uVar4 * 8);
        func_0x000107c2b550();
        if (iVar1 == param_1) {
          return 2;
        }
        uVar4 = uVar4 + 1;
        puVar2 = (ulong *)plVar3[1];
      } while (puVar2 != (ulong *)0x0);
    }
    puVar2 = (ulong *)*plVar3;
    if (puVar2 != (ulong *)0x0) {
      uVar4 = 0;
      do {
        if (*puVar2 <= uVar4) {
          return 3;
        }
        iVar1 = (int)*(undefined8 *)(puVar2[1] + uVar4 * 8);
        func_0x000107c2b550();
        if (iVar1 == param_1) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        puVar2 = (ulong *)*plVar3;
      } while (puVar2 != (ulong *)0x0);
    }
  }
  return 3;
}



/* Entry: 10ae4c548; end: 10ae4c583;  */

undefined4 FUN_10ae4c548(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_2;
  func_0x000107c2b66c();
  uVar1 = 3;
  if (((int)lVar2 != 0) && (uVar1 = 3, (*(byte *)(param_2 + 0x39) & 0x20) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae4c584; end: 10ae4c5bf;  */

undefined8 FUN_10ae4c584(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_2 + 0xa0) == 0) {
    return 3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  plVar4 = *(long **)(param_2 + 0xa0);
  if (plVar4 != (long *)0x0) {
    puVar3 = (ulong *)plVar4[1];
    if (puVar3 != (ulong *)0x0) {
      uVar5 = 0;
      do {
        if (*puVar3 <= uVar5) break;
        iVar2 = (int)*(undefined8 *)(puVar3[1] + uVar5 * 8);
        func_0x000107c2b550();
        if (iVar2 == iVar1) {
          return 2;
        }
        uVar5 = uVar5 + 1;
        puVar3 = (ulong *)plVar4[1];
      } while (puVar3 != (ulong *)0x0);
    }
    puVar3 = (ulong *)*plVar4;
    if (puVar3 != (ulong *)0x0) {
      uVar5 = 0;
      do {
        if (*puVar3 <= uVar5) {
          return 3;
        }
        iVar2 = (int)*(undefined8 *)(puVar3[1] + uVar5 * 8);
        func_0x000107c2b550();
        if (iVar2 == iVar1) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        puVar3 = (ulong *)*plVar4;
      } while (puVar3 != (ulong *)0x0);
    }
  }
  return 3;
}



/* Entry: 10ae4c5c0; end: 10ae4c63b;  */

uint FUN_10ae4c5c0(int *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
LAB_10ae4c620:
    param_3 = 0xffffffff;
  }
  else {
    iVar1 = *param_1;
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar3 = (long)(int)param_3;
    do {
      lVar3 = lVar3 + 1;
      if (iVar1 <= lVar3) goto LAB_10ae4c620;
      uVar2 = **(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
      func_0x000107c2b54c(uVar2,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar2 != 0);
  }
  return param_3;
}



/* Entry: 10ae4c63c; end: 10ae4c757;  */

bool FUN_10ae4c63c(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = param_1;
  FUN_10ae4b928(param_1,param_3,0xffffffff);
  if ((int)plVar2 < 0) {
LAB_10ae4c6b0:
    lVar5 = 0;
LAB_10ae4c6b4:
    plVar2 = param_2;
    FUN_10ae4b928(param_2,param_3,0xffffffff);
    if ((int)plVar2 < 0) {
LAB_10ae4c718:
      lVar6 = 0;
    }
    else {
      plVar3 = param_2;
      FUN_10ae4b928(param_2,param_3,plVar2);
      if ((int)plVar3 != -1) goto LAB_10ae4c6e4;
      puVar4 = *(ulong **)(*param_2 + 0x30);
      if (((puVar4 == (ulong *)0x0) || (*puVar4 <= ((ulong)plVar2 & 0xffffffff))) ||
         (lVar6 = *(long *)(puVar4[1] + ((ulong)plVar2 & 0xffffffff) * 8), lVar6 == 0))
      goto LAB_10ae4c718;
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    if (lVar5 == 0 && lVar6 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((lVar5 != 0) && (lVar6 != 0)) {
        func_0x000107c2b1b0(lVar5);
        bVar1 = (int)lVar5 == 0;
      }
    }
  }
  else {
    plVar3 = param_1;
    FUN_10ae4b928(param_1,param_3,plVar2);
    if ((int)plVar3 == -1) {
      puVar4 = *(ulong **)(*param_1 + 0x30);
      if (((puVar4 == (ulong *)0x0) || (*puVar4 <= ((ulong)plVar2 & 0xffffffff))) ||
         (lVar5 = *(long *)(puVar4[1] + ((ulong)plVar2 & 0xffffffff) * 8), lVar5 == 0))
      goto LAB_10ae4c6b0;
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_10ae4c6b4;
    }
LAB_10ae4c6e4:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10ae4c758; end: 10ae4c75f;  */

undefined4 FUN_10ae4c758(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



/* Entry: 10ae4c760; end: 10ae4c78b;  */

void FUN_10ae4c760(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c2b614();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae4c78c; end: 10ae4cac7;  */

undefined8 FUN_10ae4c78c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f0;
  long *plStack_90;
  undefined8 *puStack_50;
  
  puVar9 = (ulong *)param_1[0x13];
  if (puVar9 == (ulong *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)*puVar9 + -1;
  }
  plVar13 = (long *)param_1[0x18];
  if (plVar13 == (long *)0x0) {
    if (*(int *)((long)param_1 + 0xac) < iVar2) {
      if ((puVar9 != (ulong *)0x0) &&
         (uVar1 = (long)*(int *)((long)param_1 + 0xac) + 1, uVar1 < *puVar9)) {
        plVar13 = *(long **)(puVar9[1] + uVar1 * 8);
        goto LAB_10ae4c9cc;
      }
      lVar3 = 0;
    }
    else {
      if ((puVar9 == (ulong *)0x0) || (*puVar9 <= (ulong)(long)iVar2)) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(puVar9[1] + (long)iVar2 * 8);
      }
      puVar5 = param_1;
      (*(code *)param_1[9])(param_1,plVar13,plVar13);
      iVar2 = (int)puVar5;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x16) = 0x21;
        (*(code *)param_1[7])();
        if (iVar2 != 0) goto LAB_10ae4c9cc;
        goto LAB_10ae4c9d8;
      }
LAB_10ae4c9cc:
      lVar3 = 0;
      if (plVar13 != (long *)0x0) goto LAB_10ae4c7cc;
    }
LAB_10ae4c9d0:
    uVar12 = 1;
  }
  else {
LAB_10ae4c7cc:
    if (*(long *)(param_2 + 0x40) == 0) {
      if (((*(byte *)(plVar13 + 7) >> 1 & 1) != 0) && ((*(byte *)(plVar13 + 8) >> 1 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0x16) = 0x23;
        iVar2 = 0;
        (*(code *)param_1[7])(0,param_1);
        if (iVar2 == 0) goto LAB_10ae4c9d8;
      }
      uVar8 = *(uint *)(param_1 + 0x1a);
      if ((uVar8 >> 7 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x16) = 0x2c;
        iVar2 = 0;
        (*(code *)param_1[7])(0,param_1);
        if (iVar2 == 0) goto LAB_10ae4c9d8;
        uVar8 = *(uint *)(param_1 + 0x1a);
      }
      if ((uVar8 >> 3 & 1) == 0) {
        if (param_1[0x1b] == 0) {
          puVar6 = auStack_128;
          func_0x000107c2b618(puVar6,*param_1,param_1[0x18],param_1[2]);
          if ((int)puVar6 != 0) {
            uStack_110 = param_1[3];
            lVar3 = param_1[4];
            if (lStack_108 != 0) {
              func_0x000107c34fb0(lStack_108);
              func_0x000107c2b534(lStack_108);
            }
            uStack_f0 = param_1[7];
            iVar2 = (int)auStack_128;
            lStack_108 = lVar3;
            puStack_50 = param_1;
            func_0x000107c2b608();
            if (iVar2 < 1) {
              func_0x000107c2b614(auStack_128);
            }
            else {
              plVar11 = (long *)param_1[0x13];
              if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(plVar11[1] + *plVar11 * 8 + -8);
              }
              if ((plStack_90 == (long *)0x0) || (*plStack_90 == 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(plStack_90[1] + *plStack_90 * 8 + -8);
              }
              func_0x00010ae4b684(uVar12,uVar7);
              func_0x000107c2b614(auStack_128);
              if ((int)uVar12 == 0) goto LAB_10ae4c948;
            }
          }
        }
        *(undefined4 *)(param_1 + 0x16) = 0x36;
        iVar2 = 0;
        (*(code *)param_1[7])(0,param_1);
        if (iVar2 == 0) goto LAB_10ae4c9d8;
      }
LAB_10ae4c948:
      if ((*(byte *)(param_2 + 0x30) >> 1 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x16) = 0x29;
        iVar2 = 0;
        (*(code *)param_1[7])(0,param_1);
        if (iVar2 == 0) goto LAB_10ae4c9d8;
      }
    }
    if (((*(byte *)(param_1 + 0x1a) >> 6 & 1) == 0) &&
       (puVar5 = param_1, FUN_10ae4d57c(param_1,param_2,1), (int)puVar5 == 0)) {
LAB_10ae4c9d8:
      uVar12 = 0;
      lVar3 = 0;
      goto LAB_10ae4c9e0;
    }
    if (*plVar13 == 0) {
LAB_10ae4c8a4:
      *(undefined4 *)(param_1 + 0x16) = 6;
      iVar2 = 0;
      (*(code *)param_1[7])(0,param_1);
      lVar3 = 0;
joined_r0x00010ae4c8c0:
      if (iVar2 != 0) goto LAB_10ae4c9d0;
    }
    else {
      lVar3 = *(long *)(*plVar13 + 0x30);
      func_0x000107c2b644();
      if (lVar3 == 0) goto LAB_10ae4c8a4;
      lVar4 = param_2;
      FUN_10ae4b808(param_2,lVar3,*(undefined8 *)(param_1[4] + 0x18));
      if ((int)lVar4 == 0) {
LAB_10ae4c838:
        pcVar10 = *(code **)(*(long *)(param_2 + 0x68) + 0x20);
        if ((pcVar10 != (code *)0x0) && ((*pcVar10)(param_2,lVar3), 0 < (int)param_2))
        goto LAB_10ae4c9d0;
        *(undefined4 *)(param_1 + 0x16) = 8;
        iVar2 = 0;
        (*(code *)param_1[7])(0,param_1);
        goto joined_r0x00010ae4c8c0;
      }
      *(int *)(param_1 + 0x16) = (int)lVar4;
      iVar2 = 0;
      (*(code *)param_1[7])(0,param_1);
      if (iVar2 != 0) goto LAB_10ae4c838;
    }
    uVar12 = 0;
  }
LAB_10ae4c9e0:
  func_0x000107c2b2c0(lVar3);
  return uVar12;
}



/* Entry: 10ae4cac8; end: 10ae4ccbf;  */

void FUN_10ae4cac8(long param_1,long param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  long lStack_38;
  
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
     ((*(byte *)(param_2 + 0x1d) >> 1 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    iVar1 = 0;
    (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return;
    }
  }
  pcVar2 = *(code **)(*(long *)(param_2 + 0x68) + 0x18);
  if (((pcVar2 != (code *)0x0) &&
      ((*pcVar2)(param_2,&lStack_38,*(undefined8 *)(*param_3 + 8),*(undefined8 *)(*param_3 + 0x18)),
      (int)param_2 != 0)) && (*(int *)(lStack_38 + 0x20) != 8)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    (**(code **)(param_1 + 0x38))(0,param_1);
  }
  return;
}



/* Entry: 10ae4ccc0; end: 10ae4ccd3;  */

void FUN_10ae4ccc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x40) = FUN_10ae4ccd4;
  return;
}



/* Entry: 10ae4ccd4; end: 10ae4cda3;  */

undefined8 FUN_10ae4ccd4(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  
  puVar9 = *(ulong **)(param_2 + 0x28);
  if (puVar9 == (ulong *)0x0) {
LAB_10ae4cd80:
    uVar6 = 0;
    *param_1 = 0;
  }
  else {
    uVar10 = 0;
    do {
      if (*puVar9 <= uVar10) goto LAB_10ae4cd80;
      lVar8 = *(long *)(puVar9[1] + uVar10 * 8);
      lVar5 = param_2;
      (**(code **)(param_2 + 0x48))(param_2,param_3,lVar8);
      uVar10 = uVar10 + 1;
    } while ((int)lVar5 == 0);
    *param_1 = lVar8;
    if (lVar8 == 0) {
      uVar6 = 0;
    }
    else {
      piVar1 = (int *)(lVar8 + 0x18);
      iVar7 = *piVar1;
      do {
        if (iVar7 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (!bVar4);
      uVar6 = 1;
    }
  }
  return uVar6;
}



/* Entry: 10ae4cda4; end: 10ae4cde7;  */

void FUN_10ae4cda4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x000107c34fb0(lVar1);
    func_0x000107c2b534(lVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



/* Entry: 10ae4cde8; end: 10ae4d57b;  */

bool FUN_10ae4cde8(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                  uint *param_6,ulong *param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong uStack_d0;
  int *piStack_c8;
  long *plStack_a0;
  uint uStack_98;
  long *plStack_90;
  uint uStack_84;
  int iStack_6c;
  long lStack_68;
  
  uVar19 = *param_5;
  if (param_7 == (ulong *)0x0) goto LAB_10ae4d554;
  if (*param_7 == 0) {
    plStack_a0 = (long *)0x0;
    plStack_90 = (long *)0x0;
    uStack_98 = 0;
  }
  else {
    plVar22 = (long *)0x0;
    uVar20 = 0;
    uStack_98 = 0;
    plStack_90 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plVar8 = *(long **)(param_1 + 0xb8);
    do {
      plVar21 = *(long **)(param_7[1] + uVar20 * 8);
      uVar11 = *(uint *)(plVar21 + 6);
      if ((uVar11 >> 1 & 1) == 0) {
        uStack_84 = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
          if ((uVar11 & 0x60) == 0) goto LAB_10ae4ce90;
        }
        else if ((uVar11 >> 6 & 1) == 0) {
          if (plVar21[8] == 0) {
LAB_10ae4ce90:
            uVar6 = *(undefined8 *)(*plVar8 + 0x18);
            func_0x000107c2b5d4(uVar6,*(undefined8 *)(*plVar21 + 0x10));
            if ((int)uVar6 == 0) {
              uVar11 = 0x20;
            }
            else {
              if ((*(byte *)(plVar21 + 6) >> 5 & 1) == 0) goto LAB_10ae4ceb8;
              uVar11 = 0;
            }
            uVar11 = (*(uint *)((long)plVar21 + 0x1c) >> 1 & 0x100 | uVar11) ^ 0x100;
            lVar7 = param_1;
            FUN_10ae4d57c(param_1,plVar21,0);
            if ((int)lVar7 != 0) {
              uVar11 = uVar11 | 0x40;
            }
            uVar16 = (ulong)*(int *)(param_1 + 0xac);
            puVar9 = *(ulong **)(param_1 + 0x98);
            if (puVar9 == (ulong *)0x0) {
              plVar15 = (long *)0x0;
              uVar17 = (ulong)(*(int *)(param_1 + 0xac) != -1);
            }
            else {
              bVar2 = *puVar9 - 1 != uVar16;
              uVar17 = (ulong)bVar2;
              uVar12 = uVar16;
              if (bVar2) {
                uVar12 = uVar16 + 1;
              }
              if (uVar12 < *puVar9) {
                plVar15 = *(long **)(puVar9[1] + uVar12 * 8);
              }
              else {
                plVar15 = (long *)0x0;
              }
            }
            uVar6 = *(undefined8 *)(*plVar21 + 0x10);
            plVar3 = plVar15;
            func_0x000107c2b670(plVar15,plVar21[4]);
            if ((int)plVar3 == 0 && (uVar11 & 0x20) != 0) {
              uVar11 = uVar11 | 0x1c;
              plVar22 = plVar15;
            }
            else {
              piVar10 = *(int **)(param_1 + 0x98);
              if (piVar10 != (int *)0x0) {
                lVar7 = uVar16 + uVar17;
                do {
                  lVar7 = lVar7 + 1;
                  if (*piVar10 <= lVar7) break;
                  plVar15 = *(long **)(*(long *)(piVar10 + 2) + lVar7 * 8);
                  uVar4 = *(undefined8 *)(*plVar15 + 0x28);
                  func_0x000107c2b5d4(uVar4,uVar6);
                  if (((int)uVar4 == 0) &&
                     (plVar3 = plVar15, func_0x000107c2b670(plVar15,plVar21[4]), (int)plVar3 == 0))
                  {
                    uVar11 = uVar11 | 0xc;
                    plVar22 = plVar15;
                    goto LAB_10ae4d048;
                  }
                  piVar10 = *(int **)(param_1 + 0x98);
                } while (piVar10 != (int *)0x0);
              }
              if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) != 0) &&
                 (puVar9 = *(ulong **)(param_1 + 0x10), puVar9 != (ulong *)0x0)) {
                uVar16 = 0;
                do {
                  if (*puVar9 <= uVar16) break;
                  plVar15 = *(long **)(puVar9[1] + uVar16 * 8);
                  uVar4 = *(undefined8 *)(*plVar15 + 0x28);
                  func_0x000107c2b5d4(uVar4,uVar6);
                  if (((int)uVar4 == 0) &&
                     (plVar3 = plVar15, func_0x000107c2b670(plVar15,plVar21[4]), (int)plVar3 == 0))
                  {
                    uVar11 = uVar11 | 4;
                    plVar22 = plVar15;
                    break;
                  }
                  uVar16 = uVar16 + 1;
                  puVar9 = *(ulong **)(param_1 + 0x10);
                } while (puVar9 != (ulong *)0x0);
              }
            }
LAB_10ae4d048:
            if ((uVar11 >> 2 & 1) != 0) {
              uVar13 = *(uint *)(plVar21 + 6);
              if ((uVar13 >> 4 & 1) == 0) {
                if ((*(byte *)(plVar8 + 7) >> 4 & 1) == 0) {
                  uVar13 = uVar13 >> 3;
                }
                else {
                  uVar13 = uVar13 >> 2;
                }
                if ((uVar13 & 1) == 0) {
                  uVar13 = *(uint *)((long)plVar21 + 0x34);
                  puVar9 = (ulong *)plVar8[0xe];
                  if (puVar9 != (ulong *)0x0) {
                    uVar16 = 0;
                    do {
                      if (*puVar9 <= uVar16) break;
                      puVar18 = *(undefined8 **)(puVar9[1] + uVar16 * 8);
                      puVar9 = (ulong *)puVar18[2];
                      if (puVar9 != (ulong *)0x0) {
                        uVar17 = 0;
                        uVar6 = *(undefined8 *)(*plVar21 + 0x10);
                        if (puVar9 == (ulong *)0x0) goto LAB_10ae4d0c8;
                        do {
                          uVar12 = *puVar9;
                          while( true ) {
                            if (uVar12 <= uVar17) goto LAB_10ae4d248;
                            piVar10 = *(int **)(puVar9[1] + uVar17 * 8);
                            if (*piVar10 == 4) {
                              uVar4 = *(undefined8 *)(piVar10 + 2);
                              func_0x000107c2b5d4(uVar4,uVar6);
                              if ((int)uVar4 == 0) goto LAB_10ae4d110;
                              puVar9 = (ulong *)puVar18[2];
                            }
                            uVar17 = uVar17 + 1;
                            if (puVar9 != (ulong *)0x0) break;
LAB_10ae4d0c8:
                            uVar12 = 0;
                          }
                        } while( true );
                      }
                      if ((uVar11 >> 5 & 1) != 0) {
LAB_10ae4d110:
                        if ((((undefined8 *)plVar21[5] == (undefined8 *)0x0) ||
                            (piVar10 = (int *)*puVar18, piVar10 == (int *)0x0)) ||
                           (piStack_c8 = *(int **)plVar21[5], piStack_c8 == (int *)0x0)) {
LAB_10ae4d288:
                          uVar13 = *(uint *)(puVar18 + 3) & uVar13;
                          goto LAB_10ae4d2b0;
                        }
                        if (*piVar10 == 1) {
                          lVar7 = *(long *)(piVar10 + 4);
                          if (lVar7 != 0) {
                            if (*piStack_c8 == 1) {
                              if ((*(long *)(piStack_c8 + 4) != 0) &&
                                 (func_0x000107c2b5d4(), (int)lVar7 == 0)) goto LAB_10ae4d288;
                            }
                            else {
LAB_10ae4d1fc:
                              puVar9 = *(ulong **)(piStack_c8 + 2);
                              if ((puVar9 != (ulong *)0x0) && (*puVar9 != 0)) {
                                uVar17 = 0;
                                do {
                                  piVar10 = *(int **)(puVar9[1] + uVar17 * 8);
                                  if ((*piVar10 == 4) &&
                                     (lVar5 = lVar7,
                                     func_0x000107c2b5d4(lVar7,*(undefined8 *)(piVar10 + 2)),
                                     (int)lVar5 == 0)) goto LAB_10ae4d288;
                                  uVar17 = uVar17 + 1;
                                } while (uVar17 < *puVar9);
                              }
                            }
                          }
                        }
                        else if (*piStack_c8 == 1) {
                          lVar7 = *(long *)(piStack_c8 + 4);
                          piStack_c8 = piVar10;
                          if (lVar7 != 0) goto LAB_10ae4d1fc;
                        }
                        else {
                          puVar9 = *(ulong **)(piVar10 + 2);
                          if (puVar9 != (ulong *)0x0) {
                            uStack_d0 = 0;
                            do {
                              if (*puVar9 <= uStack_d0) break;
                              uVar17 = 0;
                              uVar6 = *(undefined8 *)(puVar9[1] + uStack_d0 * 8);
                              while ((puVar9 = *(ulong **)(piStack_c8 + 2), puVar9 != (ulong *)0x0
                                     && (uVar17 < *puVar9))) {
                                uVar4 = uVar6;
                                FUN_10ae54324(uVar6,*(undefined8 *)(puVar9[1] + uVar17 * 8));
                                uVar17 = uVar17 + 1;
                                if ((int)uVar4 == 0) goto LAB_10ae4d288;
                              }
                              uStack_d0 = uStack_d0 + 1;
                              puVar9 = *(ulong **)(piVar10 + 2);
                            } while (puVar9 != (ulong *)0x0);
                          }
                        }
                      }
LAB_10ae4d248:
                      uVar16 = uVar16 + 1;
                      puVar9 = (ulong *)plVar8[0xe];
                    } while (puVar9 != (ulong *)0x0);
                  }
                  if ((long *)plVar21[5] == (long *)0x0) {
                    if ((uVar11 >> 5 & 1) != 0) goto LAB_10ae4d2b0;
                  }
                  else if (((uVar11 >> 5 & 1) != 0) && (*(long *)plVar21[5] == 0)) {
LAB_10ae4d2b0:
                    if ((uVar13 & (uStack_84 ^ 0xffffffff)) == 0) goto LAB_10ae4ceb8;
                    uStack_84 = uVar13 | uStack_84;
                    uVar11 = uVar11 | 0x80;
                  }
                }
              }
              if (((int)uVar19 <= (int)uVar11) && (uVar11 != 0)) {
                if (uVar11 == uVar19) {
                  if (plStack_90 == (long *)0x0) {
                    uStack_98 = uStack_84;
                    uVar19 = uVar11;
                    plStack_a0 = plVar22;
                    plStack_90 = plVar21;
                  }
                  else {
                    plVar15 = &lStack_68;
                    func_0x000107c2b188(plVar15,&iStack_6c,*(undefined8 *)(*plStack_90 + 0x18),
                                        *(undefined8 *)(*plVar21 + 0x18));
                    if (((int)plVar15 != 0) && ((0 < (int)lStack_68 || (0 < iStack_6c)))) {
                      uStack_98 = uStack_84;
                      plStack_a0 = plVar22;
                      plStack_90 = plVar21;
                    }
                  }
                }
                else {
                  uStack_98 = uStack_84;
                  uVar19 = uVar11;
                  plStack_a0 = plVar22;
                  plStack_90 = plVar21;
                }
              }
            }
          }
        }
        else if ((*(uint *)((long)plVar21 + 0x34) & (uStack_84 ^ 0xffffffff)) != 0)
        goto LAB_10ae4ce90;
      }
LAB_10ae4ceb8:
      uVar20 = uVar20 + 1;
    } while (uVar20 < *param_7);
  }
  if (plStack_90 == (long *)0x0) goto LAB_10ae4d554;
  if (*param_2 != 0) {
    lStack_68 = *param_2;
    func_0x000107c2b1bc(&lStack_68,&UNK_110c871b0,0);
  }
  *param_2 = (long)plStack_90;
  *param_4 = plStack_a0;
  *param_5 = uVar19;
  *param_6 = uStack_98;
  plVar22 = plStack_90 + 3;
  iVar14 = (int)*plVar22;
  do {
    if (iVar14 == -1) break;
    lVar7 = *plVar22;
    if ((int)lVar7 == iVar14) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar2) {
        *(int *)plVar22 = iVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar2 = cVar1 == '\0';
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    iVar14 = (int)lVar7;
  } while (!bVar2);
  if (*param_3 != 0) {
    lStack_68 = *param_3;
    func_0x000107c2b1bc(&lStack_68,&UNK_110c871b0,0);
    *param_3 = 0;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) == 0) ||
     (((*(uint *)(*(long *)(param_1 + 0xb8) + 0x38) | *(uint *)((long)plStack_90 + 0x1c)) >> 0xc & 1
      ) == 0)) goto LAB_10ae4d554;
  if (*param_7 != 0) {
    uVar20 = 0;
    do {
      plVar22 = *(long **)(param_7[1] + uVar20 * 8);
      if ((plVar22[8] != 0) && (plStack_90[7] != 0)) {
        uVar6 = *(undefined8 *)(*plStack_90 + 0x10);
        func_0x000107c2b5d4(uVar6,*(undefined8 *)(*plVar22 + 0x10));
        if (((int)uVar6 == 0) &&
           ((plVar8 = plVar22, FUN_10ae4c63c(plVar22,plStack_90,0x5a), (int)plVar8 != 0 &&
            (plVar8 = plVar22, FUN_10ae4c63c(plVar22,plStack_90,0x302), (int)plVar8 != 0)))) {
          lVar7 = plVar22[8];
          FUN_10ae1d1cc(lVar7,plStack_90[7]);
          if ((int)lVar7 < 1) {
            lVar7 = plVar22[7];
            FUN_10ae1d1cc(lVar7,plStack_90[7]);
            if (0 < (int)lVar7) {
              FUN_10ae4d57c(param_1,plVar22,0);
              if ((int)param_1 != 0) {
                *param_5 = *param_5 | 2;
              }
              plVar8 = plVar22 + 3;
              iVar14 = (int)*plVar8;
              goto LAB_10ae4d510;
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *param_7);
  }
  plVar22 = (long *)0x0;
  goto LAB_10ae4d550;
  while( true ) {
    lVar7 = *plVar8;
    if ((int)lVar7 == iVar14) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar2 = cVar1 == '\0';
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    iVar14 = (int)lVar7;
    if (bVar2) break;
LAB_10ae4d510:
    if (iVar14 == -1) break;
  }
LAB_10ae4d550:
  *param_3 = (long)plVar22;
LAB_10ae4d554:
  return 0x1bf < (int)uVar19;
}



/* Entry: 10ae4d57c; end: 10ae4d673;  */

void FUN_10ae4d57c(long param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    *(long **)(param_1 + 200) = param_2;
  }
  uVar5 = *(long *)(param_1 + 0x20) + 8U &
          (*(long *)(*(long *)(param_1 + 0x20) + 0x18) << 0x3e) >> 0x3f;
  uVar2 = *(undefined8 *)(*param_2 + 0x18);
  func_0x000107c2b60c(uVar2,uVar5);
  if ((int)uVar2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = 0xf;
LAB_10ae4d5e4:
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    iVar1 = 0;
    (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return;
    }
  }
  else if (0 < (int)uVar2) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = 0xb;
    goto LAB_10ae4d5e4;
  }
  lVar3 = *(long *)(*param_2 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c2b60c(lVar3,uVar5);
    if ((int)lVar3 == 0) {
      if (param_3 == 0) {
        return;
      }
      uVar4 = 0x10;
    }
    else {
      if ((-1 < (int)lVar3) || ((*(byte *)(param_1 + 0xd0) >> 1 & 1) != 0))
      goto joined_r0x00010ae4d62c;
      if (param_3 == 0) {
        return;
      }
      uVar4 = 0xc;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    param_3 = 0;
    (**(code **)(param_1 + 0x38))(0,param_1);
  }
joined_r0x00010ae4d62c:
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10ae4d674; end: 10ae4d67f;  */

void FUN_10ae4d674(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ae4d67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 10ae4d680; end: 10ae4d7d7;  */

void FUN_10ae4d680(long param_1,ulong *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    puVar4 = *(ulong **)(param_1 + 0x30);
    if (puVar4 != (ulong *)0x0) {
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          if (*(long *)(puVar4[1] + uVar5 * 8) != 0) {
            func_0x000107c2b17c();
            uVar3 = *puVar4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      func_0x000107c2b534(puVar4[1]);
      func_0x000107c2b534(puVar4);
    }
    if (param_2 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar1 = 0;
      func_0x000107c2b59c();
      *(long *)(param_1 + 0x30) = lVar1;
      if (lVar1 != 0) {
        uVar3 = 0;
        do {
          if (*param_2 <= uVar3) {
            *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
            return;
          }
          lVar1 = *(long *)(param_2[1] + uVar3 * 8);
          func_0x000107c2b548();
          if (lVar1 == 0) {
            return;
          }
          puVar2 = *(undefined8 **)(param_1 + 0x30);
          func_0x000107c2b5ac(puVar2,lVar1,*puVar2);
          uVar3 = uVar3 + 1;
        } while (puVar2 != (undefined8 *)0x0);
        func_0x000107c2b17c(lVar1);
      }
    }
  }
  return;
}



/* Entry: 10ae4d7d8; end: 10ae4d7f7;  */

undefined8 FUN_10ae4d7d8(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return 1;
}



/* Entry: 10ae4d7f8; end: 10ae4d837;  */

bool FUN_10ae4d7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10ae4d838(param_1,0,param_2,param_3);
  bVar1 = (int)lVar2 != 0;
  if (!bVar1) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return bVar1;
}



/* Entry: 10ae4d838; end: 10ae4d953;  */

void FUN_10ae4d838(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_3, _memchr(param_3,0,param_4), lVar1 == 0)) {
    if ((param_2 == 0) && (puVar3 = *(ulong **)(param_1 + 0x38), puVar3 != (ulong *)0x0)) {
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          if (*(long *)(puVar3[1] + uVar4 * 8) != 0) {
            func_0x000107c2b534();
            uVar2 = *puVar3;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      func_0x000107c2b534(puVar3[1]);
      func_0x000107c2b534(puVar3);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_10ae4558c(param_3,param_4);
    if (param_3 != 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      if (lVar1 == 0) {
        func_0x000107c2b59c();
        *(long *)(param_1 + 0x38) = lVar1;
        if (lVar1 == 0) {
          func_0x000107c2b534(param_3);
          return;
        }
      }
      func_0x000107c2b5ac();
      if (lVar1 == 0) {
        func_0x000107c2b534(param_3);
        if ((*(long **)(param_1 + 0x38) == (long *)0x0) || (**(long **)(param_1 + 0x38) == 0)) {
          func_0x000107c2b5a4();
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  return;
}



/* Entry: 10ae4d954; end: 10ae4da83;  */

void FUN_10ae4d954(long *param_1,long *param_2,long param_3,long param_4)

{
  if (((param_3 != 0) && (param_4 != 0)) && (func_0x000107c2b544(param_3,param_4), param_3 != 0)) {
    if (*param_1 != 0) {
      func_0x000107c2b534();
    }
    *param_1 = param_3;
    if (param_2 != (long *)0x0) {
      *param_2 = param_4;
    }
  }
  return;
}



/* Entry: 10ae4da84; end: 10ae4dcef;  */

long FUN_10ae4da84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  if ((param_1 == (long *)0x0) || (lVar3 = *param_1, *param_1 == 0)) {
    lStack_48 = 0;
    plVar1 = &lStack_48;
    func_0x000107c34f34(plVar1,&DAT_110c872e8,0);
    if ((int)plVar1 == 0) {
      return 0;
    }
    lVar3 = lStack_48;
    if (lStack_48 == 0) {
      return 0;
    }
  }
  lVar2 = lVar3;
  FUN_10ae4de20(lVar3,param_2);
  if (((int)lVar2 == 0) ||
     (lVar2 = lVar3, FUN_10ae4de88(lVar3,param_3,param_4,param_5), (int)lVar2 == 0)) {
    if ((param_1 == (long *)0x0) || (lVar3 != *param_1)) {
      lStack_48 = lVar3;
      func_0x000107c2b1bc(&lStack_48,&DAT_110c872e8,0);
    }
    lVar3 = 0;
  }
  else if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
    *param_1 = lVar3;
  }
  return lVar3;
}



/* Entry: 10ae4dcf0; end: 10ae4dd67;  */

void FUN_10ae4dcf0(undefined8 param_1)

{
  long lVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  long lStack_38;
  
  lVar1 = 0;
  FUN_10ae4dd68();
  if (lVar1 != 0) {
    func_0x00010ae4db6c(param_1,lVar1,in_x5,in_x6);
    lStack_38 = lVar1;
    func_0x000107c2b1bc(&lStack_38,&DAT_110c872e8,0);
  }
  return;
}



/* Entry: 10ae4dd68; end: 10ae4de1f;  */

undefined8
FUN_10ae4dd68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_10ae45864(param_2,0);
  if (param_2 == 0) {
    func_0x000107c2b29c(0xb,0,0x6f,&UNK_10f6ce077,0x125);
    func_0x000107c2b2a0(2);
    param_1 = 0;
  }
  else {
    FUN_10ae4da84(param_1,param_2,param_3,param_4,param_5);
    func_0x000107c2b17c(param_2);
  }
  return param_1;
}



/* Entry: 10ae4de20; end: 10ae4de87;  */

bool FUN_10ae4de20(long *param_1,long param_2)

{
  bool bVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    func_0x000107c2b29c(0xb,0,0x43,&UNK_10f6ce077,0x15a);
    bVar1 = false;
  }
  else {
    func_0x000107c2b17c(*param_1);
    func_0x000107c2b548();
    *param_1 = param_2;
    bVar1 = param_2 != 0;
  }
  return bVar1;
}



/* Entry: 10ae4de88; end: 10ae4df3b;  */

void FUN_10ae4de88(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != 0 || ((int)param_4 == 0)))) {
    uVar2 = (uint)param_2;
    if (((int)uVar2 < 1) || ((uVar2 >> 0xc & 1) == 0)) {
      if ((int)param_4 < 0) {
        param_4 = param_3;
        _strlen(param_3);
      }
      uVar1 = param_1[1];
      func_0x000107c2b1a4(uVar1,param_3,param_4);
      if (((int)uVar1 != 0) && (uVar2 != 0xffffffff)) {
        *(uint *)(param_1[1] + 4) = uVar2;
      }
    }
    else {
      uVar1 = *param_1;
      func_0x000107c2b550(uVar1);
      FUN_10ae1da7c(param_1 + 1,param_3,param_4,param_2,uVar1);
    }
  }
  return;
}



/* Entry: 10ae4df3c; end: 10ae4df8b;  */

void FUN_10ae4df3c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 uStack_42;
  
  piVar2 = *(int **)*param_1;
  piVar3 = *(int **)*param_2;
  iVar5 = *piVar3;
  uStack_42 = 0;
  iVar4 = *piVar2;
  if (piVar2[1] == 3) {
    piVar1 = piVar2;
    func_0x00010072d5c8(piVar2,(long)&uStack_42 + 1);
    iVar4 = (int)piVar1;
  }
  if (piVar3[1] == 3) {
    piVar1 = piVar3;
    func_0x00010072d5c8(piVar3,&uStack_42);
    iVar5 = (int)piVar1;
  }
  if ((iVar5 <= iVar4) && (iVar4 <= iVar5)) {
    if ((uStack_42._1_1_ <= (byte)uStack_42) &&
       (((byte)uStack_42 <= uStack_42._1_1_ && (iVar4 != 0)))) {
      func_0x000107c610b0(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar3 + 2),(long)iVar4);
    }
  }
  return;
}



/* Entry: 10ae4df8c; end: 10ae4e35b;  */

void FUN_10ae4df8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  byte bVar10;
  int *piVar11;
  byte *pbVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  long lStack_38;
  
  plVar13 = (long *)*param_2;
  iVar1 = (int)param_1;
  if (iVar1 == 5) {
    func_0x000107c2b424();
    iVar1 = 0x10c871b0;
    func_0x000107c2b5c0(&UNK_110c871b0,param_1,plVar13,plVar13 + 9,0);
    if (iVar1 != 0) {
      puVar2 = *(undefined8 **)(*plVar13 + 0x30);
      func_0x000107c2b664(puVar2,0x302,&lStack_38,0);
      plVar13[5] = (long)puVar2;
      if (puVar2 == (undefined8 *)0x0) {
        if ((int)lStack_38 != -1) {
          return;
        }
      }
      else {
        uVar7 = *(uint *)(plVar13 + 6);
        uVar6 = uVar7 | 1;
        *(uint *)(plVar13 + 6) = uVar6;
        bVar10 = 0 < *(int *)(puVar2 + 1);
        if ((bool)bVar10) {
          uVar6 = uVar7 | 5;
          *(uint *)(plVar13 + 6) = uVar6;
        }
        if (0 < *(int *)((long)puVar2 + 0xc)) {
          bVar10 = bVar10 + 1;
          uVar6 = uVar6 | 8;
          *(uint *)(plVar13 + 6) = uVar6;
        }
        if (0 < *(int *)((long)puVar2 + 0x1c)) {
          bVar10 = bVar10 + 1;
          uVar6 = uVar6 | 0x10;
        }
        uVar7 = uVar6 | 2;
        if (bVar10 < 2) {
          uVar7 = uVar6;
        }
        if (0 < *(int *)((long)puVar2 + 0x1c) || 1 < bVar10) {
          *(uint *)(plVar13 + 6) = uVar7;
        }
        if (0 < *(int *)(puVar2 + 3)) {
          uVar7 = uVar7 | 0x20;
          *(uint *)(plVar13 + 6) = uVar7;
        }
        piVar11 = (int *)puVar2[2];
        if (piVar11 != (int *)0x0) {
          *(uint *)(plVar13 + 6) = uVar7 | 0x40;
          iVar1 = *piVar11;
          if (iVar1 < 1) {
            uVar7 = *(uint *)((long)plVar13 + 0x34);
          }
          else {
            pbVar12 = *(byte **)(piVar11 + 2);
            bVar10 = *pbVar12;
            uVar7 = (uint)bVar10;
            *(uint *)((long)plVar13 + 0x34) = (uint)bVar10;
            if (iVar1 != 1) {
              uVar7 = (uint)CONCAT11(pbVar12[1],bVar10);
            }
          }
          *(uint *)((long)plVar13 + 0x34) = uVar7 & 0x807f;
        }
        uVar3 = *puVar2;
        func_0x00010ae53818(uVar3,*(undefined8 *)(*plVar13 + 0x10));
        if ((int)uVar3 == 0) {
          return;
        }
      }
      lVar4 = *(long *)(*plVar13 + 0x30);
      func_0x000107c2b664(lVar4,0x5a,&lStack_38,0);
      plVar13[4] = lVar4;
      if (lVar4 != 0 || (int)lStack_38 == -1) {
        lVar4 = *(long *)(*plVar13 + 0x30);
        func_0x000107c2b664(lVar4,0x58,&lStack_38,0);
        plVar13[7] = lVar4;
        if (lVar4 != 0 || (int)lStack_38 == -1) {
          lVar4 = *(long *)(*plVar13 + 0x30);
          func_0x000107c2b664(lVar4,0x8c,&lStack_38,0);
          plVar13[8] = lVar4;
          if (lVar4 != 0 || (int)lStack_38 == -1) {
            if ((lVar4 == 0) || (plVar13[7] != 0)) {
              puVar14 = *(ulong **)(*plVar13 + 0x30);
              if ((puVar14 != (ulong *)0x0) && (*puVar14 != 0)) {
                uVar9 = 0;
                do {
                  puVar2 = *(undefined8 **)(puVar14[1] + uVar9 * 8);
                  if (puVar2 == (undefined8 *)0x0) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = (int)*puVar2;
                  }
                  func_0x000107c2b550();
                  if (iVar1 == 0x359) {
                    *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x1000;
                  }
                  if ((((puVar2 != (undefined8 *)0x0) && (0 < *(int *)(puVar2 + 1))) &&
                      (iVar1 != 0x5a)) && ((iVar1 != 0x8c && (iVar1 != 0x302)))) {
                    *(uint *)((long)plVar13 + 0x1c) = *(uint *)((long)plVar13 + 0x1c) | 0x200;
                    break;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *puVar14);
              }
              plVar5 = plVar13;
              FUN_10ae4e35c();
              if (((int)plVar5 != 0) && (*(code **)(plVar13[0xd] + 8) != (code *)0x0)) {
                (**(code **)(plVar13[0xd] + 8))();
              }
            }
            else {
              func_0x000107c2b29c(0xb,0,0x8a,&UNK_10f6ce1c3,0x121);
            }
          }
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if (((plVar13[0xd] == 0) || (pcVar8 = *(code **)(plVar13[0xd] + 0x10), pcVar8 == (code *)0x0))
       || (plVar5 = plVar13, (*pcVar8)(), (int)plVar5 != 0)) {
      if (plVar13[4] != 0) {
        lStack_38 = plVar13[4];
        func_0x000107c2b1bc(&lStack_38,&DAT_110c87a80,0);
      }
      if (plVar13[5] != 0) {
        lStack_38 = plVar13[5];
        func_0x000107c2b1bc(&lStack_38,&DAT_110c88698,0);
      }
      func_0x00010ae1de94(plVar13[7]);
      func_0x00010ae1de94(plVar13[8]);
      puVar14 = (ulong *)plVar13[0xc];
      if (puVar14 != (ulong *)0x0) {
        uVar9 = *puVar14;
        if (uVar9 != 0) {
          uVar15 = 0;
          do {
            if (*(long *)(puVar14[1] + uVar15 * 8) != 0) {
              FUN_10ae542f4();
              uVar9 = *puVar14;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar9);
        }
        func_0x000107c2b534(puVar14[1]);
        func_0x000107c2b534(puVar14);
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined8 *)((long)plVar13 + 0x24) = 0;
    *(undefined8 *)((long)plVar13 + 0x1c) = 0;
    *(undefined8 *)((long)plVar13 + 0x2c) = 0;
    *(undefined4 *)((long)plVar13 + 0x34) = 0x807f;
    plVar13[0xd] = (long)&UNK_110c87150;
    plVar13[0xe] = 0;
    plVar13[0xc] = 0;
    plVar13[7] = 0;
    plVar13[8] = 0;
  }
  return;
}



/* Entry: 10ae4e35c; end: 10ae4e4eb;  */

void FUN_10ae4e35c(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iStack_54;
  
  puVar6 = *(ulong **)(*param_1 + 0x28);
  if ((puVar6 != (ulong *)0x0) && (*puVar6 != 0)) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar9 = *(long *)(puVar6[1] + uVar7 * 8);
      lVar2 = *(long *)(lVar9 + 0x10);
      func_0x000107c2b664(lVar2,0x303,&iStack_54,0);
      if (lVar2 == 0 && iStack_54 != -1) {
LAB_10ae4e4c0:
        *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) | 0x80;
        return;
      }
      if (lVar2 != 0) {
        lVar3 = param_1[0xc];
        if (lVar3 == 0) {
          func_0x000107c2b59c();
          param_1[0xc] = lVar3;
          if (lVar3 == 0) {
            return;
          }
        }
        func_0x000107c2b5ac();
        lVar8 = lVar2;
        if (lVar3 == 0) {
          return;
        }
      }
      *(long *)(lVar9 + 0x18) = lVar8;
      lVar2 = *(long *)(lVar9 + 0x10);
      func_0x000107c2b664(lVar2,0x8d,&iStack_54,0);
      if (lVar2 == 0 && iStack_54 != -1) goto LAB_10ae4e4c0;
      if (lVar2 == 0) {
        *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
      }
      else {
        lVar3 = lVar2;
        func_0x000107c34f2c(lVar2,10);
        *(int *)(lVar9 + 0x20) = (int)lVar3;
        func_0x000107c2b534(*(undefined8 *)(lVar2 + 8));
        func_0x000107c2b534(lVar2);
      }
      puVar5 = *(ulong **)(lVar9 + 0x10);
      if ((puVar5 != (ulong *)0x0) && (*puVar5 != 0)) {
        uVar10 = 0;
        do {
          puVar4 = *(undefined8 **)(puVar5[1] + uVar10 * 8);
          if ((puVar4 != (undefined8 *)0x0) && (0 < *(int *)(puVar4 + 1))) {
            iVar1 = (int)*puVar4;
            func_0x000107c2b550();
            if (iVar1 != 0x303) {
              *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) | 0x200;
              break;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar6);
  }
  return;
}



/* Entry: 10ae4e4ec; end: 10ae4e76f;  */

undefined4 FUN_10ae4e4ec(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined4 uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 auStack_98 [5];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  int *piVar2;
  
  plVar4 = (long *)0x1133113e0;
  puVar15 = param_2;
  auStack_98[0] = param_3;
  _pthread_rwlock_rdlock();
  if ((int)plVar4 == 0) {
    if (*(long *)(*param_1 + 0x28) == 0) {
LAB_10ae4e57c:
      plVar4 = (long *)0x1133113e0;
      _pthread_rwlock_unlock();
      if ((int)plVar4 == 0) {
LAB_10ae4e58c:
        puVar11 = *(ulong **)(*param_1 + 0x28);
        if (puVar11 != (ulong *)0x0) {
          if (puVar11[4] == 0) {
            if (*puVar11 != 0) {
              uVar13 = 0;
              do {
                if (*(undefined8 **)(puVar11[1] + uVar13 * 8) == auStack_98) goto LAB_10ae4e720;
                uVar13 = uVar13 + 1;
              } while (*puVar11 != uVar13);
            }
          }
          else {
            uVar16 = *puVar11;
            if ((int)puVar11[2] == 0) {
              if (uVar16 != 0) {
                uVar13 = 0;
                do {
                  uStack_70 = *(undefined8 *)(puVar11[1] + uVar13 * 8);
                  ppuVar5 = &puStack_68;
                  puStack_68 = auStack_98;
                  (*(code *)puVar11[4])(ppuVar5,&uStack_70);
                  if ((int)ppuVar5 == 0) goto LAB_10ae4e720;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *puVar11);
              }
            }
            else if (uVar16 != 0) {
              uVar14 = 0;
              do {
                uVar13 = uVar14 + ((uVar16 - uVar14) - 1 >> 1);
                uStack_70 = *(undefined8 *)(puVar11[1] + uVar13 * 8);
                ppuVar5 = &puStack_68;
                puStack_68 = auStack_98;
                (*(code *)puVar11[4])(ppuVar5,&uStack_70);
                if ((int)ppuVar5 < 1) {
                  if (-1 < (int)ppuVar5) {
                    if (uVar16 - uVar14 == 1) {
LAB_10ae4e720:
                      do {
                        puVar11 = *(ulong **)(*param_1 + 0x28);
                        if (puVar11 == (ulong *)0x0) {
                          return 0;
                        }
                        if (*puVar11 <= uVar13) {
                          return 0;
                        }
                        puVar15 = *(undefined8 **)(puVar11[1] + uVar13 * 8);
                        uVar6 = *puVar15;
                        FUN_10ae1d1cc(uVar6,param_3);
                        if ((int)uVar6 != 0) {
                          return 0;
                        }
                        puVar11 = (ulong *)puVar15[3];
                        if (puVar11 == (ulong *)0x0) {
                          if ((param_4 == 0) ||
                             (lVar12 = param_4,
                             func_0x000107c2b5d4(param_4,*(undefined8 *)(*param_1 + 0x10)),
                             (int)lVar12 == 0)) {
LAB_10ae4e750:
                            if (param_2 != (undefined8 *)0x0) {
                              *param_2 = puVar15;
                            }
                            if (*(int *)(puVar15 + 4) == 8) {
                              return 2;
                            }
                            return 1;
                          }
                        }
                        else {
                          lVar12 = param_4;
                          if (param_4 == 0) {
                            lVar12 = *(long *)(*param_1 + 0x10);
                          }
                          uVar16 = 0;
                          do {
                            if (*puVar11 <= uVar16) break;
                            piVar9 = *(int **)(puVar11[1] + uVar16 * 8);
                            if (*piVar9 == 4) {
                              lVar7 = lVar12;
                              func_0x000107c2b5d4(lVar12,*(undefined8 *)(piVar9 + 2));
                              if ((int)lVar7 == 0) goto LAB_10ae4e750;
                              puVar11 = (ulong *)puVar15[3];
                            }
                            uVar16 = uVar16 + 1;
                          } while (puVar11 != (ulong *)0x0);
                        }
                        uVar13 = uVar13 + 1;
                      } while( true );
                    }
                    uVar13 = uVar13 + 1;
                  }
                }
                else {
                  uVar14 = uVar13 + 1;
                  uVar13 = uVar16;
                }
                uVar16 = uVar13;
              } while (uVar14 < uVar13);
            }
          }
        }
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(*(long *)(*param_1 + 0x28) + 0x10);
      plVar4 = (long *)0x1133113e0;
      _pthread_rwlock_unlock();
      if ((int)plVar4 == 0) {
        if (iVar1 != 0) goto LAB_10ae4e58c;
        plVar4 = (long *)0x1133113e0;
        _pthread_rwlock_wrlock();
        if ((int)plVar4 == 0) {
          if ((*(long *)(*param_1 + 0x28) != 0) &&
             (*(int *)(*(long *)(*param_1 + 0x28) + 0x10) == 0)) {
            func_0x000107c2b5bc();
          }
          goto LAB_10ae4e57c;
        }
      }
    }
  }
  _abort();
  lVar12 = plVar4[1];
  func_0x000107c2b638(lVar12,*(undefined8 *)(*plVar4 + 8));
  if ((int)lVar12 != 0) {
    func_0x000107c2b29c(0xb,0,0x89,&UNK_10f6ce1c3,0x1bd);
    return 0;
  }
  lVar12 = plVar4[1];
  piVar9 = (int *)plVar4[2];
  lVar7 = *plVar4;
  if (puVar15 == (undefined8 *)0x0) {
    uVar6 = 0x43;
    uVar8 = 0x4c;
code_r0x000100736c00:
    func_0x0001004d2c58(0xb,0,uVar6,&UNK_10f6cd01e,uVar8);
    return 0;
  }
  if (piVar9[1] == 3) {
    piVar2 = piVar9;
    func_0x00010072d5c8(piVar9,&uStack_100);
    iVar1 = (int)piVar2;
    if ((char)uStack_100 != '\0') {
      uVar6 = 0x6d;
      uVar8 = 0x53;
      goto code_r0x000100736c00;
    }
  }
  else {
    iVar1 = *piVar9;
  }
  lStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  puVar3 = &uStack_100;
  func_0x000100736cec(puVar3,lVar12,puVar15);
  if ((int)puVar3 != 0) {
    func_0x00010072d43c(lVar7,&lStack_108,&DAT_110c87178);
    if (lStack_108 == 0) {
      uVar6 = 0x41;
      uVar8 = 0x66;
    }
    else {
      puVar15 = &uStack_100;
      func_0x000100224e44(puVar15,*(undefined8 *)(piVar9 + 2),(long)iVar1,lStack_108,
                          (long)(int)lVar7);
      if ((int)puVar15 != 0) {
        uVar10 = 1;
        goto code_r0x000100736cac;
      }
      uVar6 = 6;
      uVar8 = 0x6c;
    }
    func_0x0001004d2c58(0xb,0,uVar6,&UNK_10f6cd01e,uVar8);
  }
  uVar10 = 0;
code_r0x000100736cac:
  func_0x0001001e33e0(lStack_108);
  func_0x0001001e33e0(uStack_f8);
  if (puStack_e8 != (undefined8 *)0x0) {
    (*(code *)*puStack_e8)(uStack_f0);
  }
  return uVar10;
}



/* Entry: 10ae4e770; end: 10ae4e7e3;  */

undefined8 FUN_10ae4e770(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  int *piVar3;
  
  lVar5 = param_1[1];
  func_0x000107c2b638(lVar5,*(undefined8 *)(*param_1 + 8));
  if ((int)lVar5 != 0) {
    func_0x000107c2b29c(0xb,0,0x89,&UNK_10f6ce1c3,0x1bd);
    return 0;
  }
  lVar5 = param_1[1];
  piVar1 = (int *)param_1[2];
  lVar7 = *param_1;
  if (param_2 == 0) {
    uVar6 = 0x43;
    uVar8 = 0x4c;
code_r0x000100736c00:
    func_0x0001004d2c58(0xb,0,uVar6,&UNK_10f6cd01e,uVar8);
    return 0;
  }
  if (piVar1[1] == 3) {
    piVar3 = piVar1;
    func_0x00010072d5c8(piVar1,&uStack_60);
    iVar2 = (int)piVar3;
    if ((char)uStack_60 != '\0') {
      uVar6 = 0x6d;
      uVar8 = 0x53;
      goto code_r0x000100736c00;
    }
  }
  else {
    iVar2 = *piVar1;
  }
  lStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar4 = &uStack_60;
  func_0x000100736cec(puVar4,lVar5,param_2);
  if ((int)puVar4 != 0) {
    func_0x00010072d43c(lVar7,&lStack_68,&DAT_110c87178);
    if (lStack_68 == 0) {
      uVar6 = 0x41;
      uVar8 = 0x66;
    }
    else {
      puVar4 = &uStack_60;
      func_0x000100224e44(puVar4,*(undefined8 *)(piVar1 + 2),(long)iVar2,lStack_68,(long)(int)lVar7)
      ;
      if ((int)puVar4 != 0) {
        uVar6 = 1;
        goto code_r0x000100736cac;
      }
      uVar6 = 6;
      uVar8 = 0x6c;
    }
    func_0x0001004d2c58(0xb,0,uVar6,&UNK_10f6cd01e,uVar8);
  }
  uVar6 = 0;
code_r0x000100736cac:
  func_0x0001001e33e0(lStack_68);
  func_0x0001001e33e0(uStack_58);
  if (puStack_48 != (undefined8 *)0x0) {
    (*(code *)*puStack_48)(uStack_50);
  }
  return uVar6;
}



/* Entry: 10ae4e7e4; end: 10ae4e843;  */

undefined8 * FUN_10ae4e7e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x40;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  func_0x000107c2b29c(0xb,0,0x41,&UNK_10f6ce2c5,0x46);
  return (undefined8 *)0x0;
}



/* Entry: 10ae4e844; end: 10ae4e8cb;  */

/* WARNING: Possible PIC construction at 0x00010ae4e8b0: Changing call to branch */

void FUN_10ae4e844(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 != 0) {
    lStack_28 = *param_1;
    func_0x000107c2b1bc(&lStack_28,&UNK_110c87868,0);
  }
  if (param_1[1] != 0) {
    lStack_28 = param_1[1];
    func_0x000107c2b1bc(&lStack_28,&UNK_110c871b0,0);
  }
  if (param_1[2] != 0) {
    func_0x00010ae4ec20();
  }
  plVar2 = param_1;
  if ((long *)param_1[7] != (long *)0x0) {
    unaff_x30 = 0x10ae4e8b4;
    register0x00000008 = (BADSPACEBASE *)auStack_30;
    plVar2 = (long *)param_1[7];
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = plVar2 + -1;
  if (*plVar2 + 8 != 0) {
    func_0x000107c60ee4(plVar2,*plVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar2);
  return;
}



/* Entry: 10ae4e8cc; end: 10ae4e8fb;  */

void FUN_10ae4e8cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c2b1bc(&uStack_18,&DAT_110c87418,0);
  return;
}



/* Entry: 10ae4e8fc; end: 10ae4e90b;  */

undefined8 FUN_10ae4e8fc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = 0;
  if (param_1 != 0) {
    func_0x000107c2b1b8(param_1,&lStack_28,&DAT_110c87418);
    if (lStack_28 != 0) {
      lStack_30 = lStack_28;
      uVar1 = 0;
      func_0x000107c2b1b4(0,&lStack_30,(long)(int)param_1,&DAT_110c87418);
      func_0x000107c2b534(lStack_28);
      return uVar1;
    }
    func_0x000107c2b29c(0xc,0,0x41,&UNK_10f6c4819,0x50);
  }
  return 0;
}



/* Entry: 10ae4e90c; end: 10ae4eb5f;  */

ulong FUN_10ae4e90c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong **ppuVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong *puStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_60;
  iVar1 = (int)&puStack_60;
  plVar7 = (long *)*param_1;
  if ((int)plVar7[1] == 0) {
LAB_10ae4ea8c:
    uVar11 = *(ulong *)plVar7[2];
    if (param_2 != (long *)0x0) {
      if ((uVar11 & 0xffffffff) != 0) {
        _memcpy(*param_2,((ulong *)plVar7[2])[1],(long)(int)uVar11);
      }
      *param_2 = *param_2 + (long)(int)uVar11;
    }
  }
  else {
    puVar2 = (ulong *)0x0;
    func_0x000107c2b59c();
    if (puVar2 != (ulong *)0x0) {
      puVar9 = (undefined8 *)0x0;
      uVar11 = 0;
      iVar12 = -1;
      do {
        puVar6 = (ulong *)*plVar7;
        if ((puVar6 == (ulong *)0x0) || (*puVar6 <= uVar11)) {
          puStack_60 = puVar2;
          func_0x000107c34f30(&puStack_60,0,&UNK_110c873a8,0xffffffff,0,0);
          if ((int)ppuVar4 < 1) goto LAB_10ae4eaf0;
          lVar10 = plVar7[2];
          func_0x000107c2b1f8(lVar10,(ulong)ppuVar4 & 0xffffffff);
          if (lVar10 != 0) {
            uStack_58 = *(undefined8 *)(plVar7[2] + 8);
            func_0x000107c34f30(&puStack_60,&uStack_58,&UNK_110c873a8,0xffffffff,0,0);
            if (0 < iVar1) {
              uVar11 = *puVar2;
              if (uVar11 != 0) {
                uVar8 = 0;
                do {
                  lVar10 = *(long *)(puVar2[1] + uVar8 * 8);
                  if (lVar10 != 0) {
                    func_0x000107c2b534(*(undefined8 *)(lVar10 + 8));
                    func_0x000107c2b534(lVar10);
                    uVar11 = *puVar2;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar11);
              }
              func_0x000107c2b534(puVar2[1]);
              func_0x000107c2b534(puVar2);
              *(undefined4 *)(plVar7 + 1) = 0;
              plVar5 = plVar7;
              func_0x000107c2b640();
              if ((int)plVar5 != 0) goto LAB_10ae4ea8c;
              goto LAB_10ae4eb3c;
            }
            goto LAB_10ae4eaf0;
          }
          break;
        }
        lVar10 = *(long *)(puVar6[1] + uVar11 * 8);
        if (*(int *)(lVar10 + 0x10) == iVar12) goto LAB_10ae4e9a4;
        puVar9 = (undefined8 *)0x0;
        func_0x000107c2b59c();
        if (puVar9 == (undefined8 *)0x0) break;
        puVar6 = puVar2;
        func_0x000107c2b5ac(puVar2,puVar9,*puVar2);
        if (puVar6 == (ulong *)0x0) {
          func_0x000107c2b534(puVar9[1]);
          func_0x000107c2b534(puVar9);
          break;
        }
        iVar12 = *(int *)(lVar10 + 0x10);
LAB_10ae4e9a4:
        puVar3 = puVar9;
        func_0x000107c2b5ac(puVar9,lVar10,*puVar9);
        uVar11 = uVar11 + 1;
      } while (puVar3 != (undefined8 *)0x0);
    }
    func_0x000107c2b29c(0xb,0,0x41,&UNK_10f6ce38a,0x144);
LAB_10ae4eaf0:
    if (puVar2 != (ulong *)0x0) {
      uVar11 = *puVar2;
      if (uVar11 != 0) {
        uVar8 = 0;
        do {
          lVar10 = *(long *)(puVar2[1] + uVar8 * 8);
          if (lVar10 != 0) {
            func_0x000107c2b534(*(undefined8 *)(lVar10 + 8));
            func_0x000107c2b534(lVar10);
            uVar11 = *puVar2;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar11);
      }
      func_0x000107c2b534(puVar2[1]);
      func_0x000107c2b534(puVar2);
    }
LAB_10ae4eb3c:
    uVar11 = 0xffffffff;
  }
  return uVar11;
}



/* Entry: 10ae4eb60; end: 10ae4eca7;  */

undefined8 * FUN_10ae4eb60(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_28;
  
  puVar1 = (undefined8 *)0x58;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c2b29c(0xb,0,0x41,&UNK_10f6ce3fe,0x49);
  }
  else {
    puVar4 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar4 = 0;
    *puVar1 = 0x50;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    lStack_28 = 0;
    plVar2 = &lStack_28;
    func_0x000107c34f34(plVar2,&DAT_110c86e10,0);
    lVar3 = 0;
    if ((int)plVar2 != 0) {
      lVar3 = lStack_28;
    }
    puVar1[2] = lVar3;
    if (lVar3 != 0) {
      lVar3 = 4;
      func_0x000107c2b1ac();
      puVar1[3] = lVar3;
      if (lVar3 != 0) {
        return puVar4;
      }
    }
    func_0x00010ae4ec20(puVar4);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ae4eca8; end: 10ae4ecfb;  */

undefined8 FUN_10ae4eca8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = 0;
  puVar1 = &uStack_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  uStack_40 = 0;
  puVar2 = puVar1;
  func_0x0001004ccdac();
  if ((int)puVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}



/* Entry: 10ae4ecfc; end: 10ae4ed7b;  */

/* WARNING: Possible PIC construction at 0x00010ae4ed58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4ed5c) */

void FUN_10ae4ecfc(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  ulong uVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 != 0) {
    FUN_10ae4f368();
  }
  puVar4 = (ulong *)param_1[1];
  plVar2 = param_1;
  if (puVar4 != (ulong *)0x0) {
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        if (*(long *)(puVar4[1] + uVar5 * 8) != 0) {
          FUN_10ae4f368();
          uVar3 = *puVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    unaff_x30 = 0x10ae4ed5c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar2 = (long *)puVar4[1];
    unaff_x19 = param_1;
    unaff_x20 = puVar4;
    unaff_x29 = puVar1;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = plVar2 + -1;
  if (*plVar2 + 8 != 0) {
    func_0x000107c60ee4(plVar2,*plVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar2);
  return;
}



/* Entry: 10ae4ed7c; end: 10ae4f1db;  */

long FUN_10ae4ed7c(long *param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  long **pplVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 **ppuVar10;
  ulong uVar11;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  ulong uVar12;
  long *unaff_x23;
  long *unaff_x24;
  ulong uVar13;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auStack_110 [8];
  code *pcStack_108;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  ulong *puStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint uStack_8c;
  ulong *puStack_88;
  long *plStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar5 = 0x113311648;
  _pthread_rwlock_rdlock();
  if ((int)lVar5 != 0) goto LAB_10ae4f1d8;
  unaff_x20 = param_1[0xd];
  lVar5 = 0x113311648;
  _pthread_rwlock_unlock();
  if ((int)lVar5 != 0) goto LAB_10ae4f1d8;
  if (unaff_x20 != 0) {
    return unaff_x20;
  }
  lVar5 = 0x113311648;
  _pthread_rwlock_wrlock();
  if ((int)lVar5 != 0) goto LAB_10ae4f1d8;
  unaff_x20 = param_1[0xd];
  if (unaff_x20 == 0) {
    plVar3 = (long *)0x30;
    _malloc();
    if (plVar3 != (long *)0x0) {
      *plVar3 = 0x28;
      unaff_x24 = plVar3 + 3;
      *unaff_x24 = -1;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[4] = -1;
      plVar3[5] = -1;
      param_1[0xd] = (long)(plVar3 + 1);
      plVar4 = *(long **)(*param_1 + 0x48);
      param_2 = (code *)0x191;
      func_0x000107c2b664(plVar4,0x191,&uStack_74,0);
      if (plVar4 == (long *)0x0) {
        if (uStack_74 != 0xffffffff) goto LAB_10ae4f0b0;
LAB_10ae4ee94:
        puVar6 = *(ulong **)(*param_1 + 0x48);
        param_2 = (code *)0x59;
        func_0x000107c2b664(puVar6,0x59,&uStack_74,0);
        uVar1 = uStack_74;
        unaff_x25 = (ulong)uStack_74;
        if (puVar6 == (ulong *)0x0) {
          unaff_x21 = plVar3;
          if (uStack_74 == 0xffffffff) goto LAB_10ae4f144;
          goto LAB_10ae4f0b0;
        }
        unaff_x21 = (long *)param_1[0xd];
        unaff_x22 = puVar6;
        plVar3 = unaff_x23;
        if (*puVar6 == 0) {
LAB_10ae4f110:
          func_0x000107c2b5a8(unaff_x22,0x10ae4f35c,FUN_10ae52fb4);
          param_2 = FUN_10ae4f33c;
          func_0x000107c2b5a8(unaff_x21[1],FUN_10ae4f33c,FUN_10ae4f368);
          unaff_x21[1] = 0;
          unaff_x23 = plVar3;
          goto LAB_10ae4f144;
        }
        lVar5 = 0x10ae4f348;
        func_0x000107c2b59c();
        unaff_x21[1] = lVar5;
        if (lVar5 == 0) goto LAB_10ae4f110;
        uVar11 = *puVar6;
        if (uVar11 != 0) {
          unaff_x26 = 0;
          uStack_8c = uVar1;
          puStack_88 = puVar6;
          plStack_80 = unaff_x21;
          do {
            unaff_x22 = puStack_88;
            if (unaff_x26 < uVar11) {
              unaff_x23 = *(long **)(puStack_88[1] + unaff_x26 * 8);
            }
            else {
              unaff_x23 = (long *)0x0;
            }
            FUN_10ae4f428(unaff_x23,0,unaff_x25);
            if (unaff_x23 == (long *)0x0) goto LAB_10ae4f110;
            func_0x000107c2b5bc(unaff_x21[1]);
            iVar2 = (int)unaff_x23[1];
            func_0x000107c2b550();
            plVar3 = unaff_x23;
            uVar11 = unaff_x25;
            if (iVar2 == 0x2ea) {
              if (*unaff_x21 != 0) {
LAB_10ae4f0f4:
                param_1[7] = param_1[7] | 0x800;
                unaff_x21 = plStack_80;
                unaff_x25 = uVar11;
LAB_10ae4f104:
                FUN_10ae4f368(unaff_x23);
                unaff_x22 = puStack_88;
                goto LAB_10ae4f110;
              }
              *plStack_80 = (long)unaff_x23;
              unaff_x21 = plStack_80;
            }
            else {
              puVar6 = (ulong *)unaff_x21[1];
              if (puVar6 != (ulong *)0x0) {
                if (puVar6[4] == 0) {
                  uVar13 = *puVar6;
                  if (uVar13 != 0) {
                    puVar8 = (undefined8 *)puVar6[1];
                    do {
                      if ((long *)*puVar8 == unaff_x23) goto LAB_10ae4f0f4;
                      uVar13 = uVar13 - 1;
                      puVar8 = puVar8 + 1;
                    } while (uVar13 != 0);
                  }
                }
                else {
                  unaff_x25 = *puVar6;
                  uVar11 = unaff_x25;
                  if ((int)puVar6[2] == 0) {
                    if (unaff_x25 != 0) {
                      uVar13 = 0;
                      do {
                        uStack_70 = *(undefined8 *)(puVar6[1] + uVar13 * 8);
                        pplVar7 = &plStack_68;
                        plStack_68 = unaff_x23;
                        (*(code *)puVar6[4])(pplVar7,&uStack_70);
                        if ((int)pplVar7 == 0) goto LAB_10ae4f0f4;
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < *puVar6);
                    }
                  }
                  else if (unaff_x25 != 0) {
                    uVar13 = 0;
                    do {
                      unaff_x25 = uVar13 + ((uVar11 - uVar13) - 1 >> 1);
                      uStack_70 = *(undefined8 *)(puVar6[1] + unaff_x25 * 8);
                      pplVar7 = &plStack_68;
                      plStack_68 = unaff_x23;
                      (*(code *)puVar6[4])(pplVar7,&uStack_70);
                      if ((int)pplVar7 < 1) {
                        if (-1 < (int)pplVar7) {
                          if (uVar11 - uVar13 == 1) goto LAB_10ae4f0f4;
                          unaff_x25 = unaff_x25 + 1;
                        }
                      }
                      else {
                        uVar13 = unaff_x25 + 1;
                        unaff_x25 = uVar11;
                      }
                      uVar11 = unaff_x25;
                    } while (uVar13 < unaff_x25);
                  }
                }
              }
              unaff_x21 = plStack_80;
              puVar8 = (undefined8 *)plStack_80[1];
              func_0x000107c2b5ac(puVar8,unaff_x23,*puVar8);
              if (puVar8 == (undefined8 *)0x0) goto LAB_10ae4f104;
            }
            unaff_x26 = unaff_x26 + 1;
            uVar11 = *puStack_88;
            unaff_x25 = (ulong)uStack_8c;
            unaff_x22 = puStack_88;
          } while (unaff_x26 < uVar11);
        }
        func_0x000107c2b5a8(unaff_x22,0x10ae4f35c,FUN_10ae52fb4);
        uStack_74 = 1;
        pcVar9 = *(code **)(*param_1 + 0x48);
        param_2 = (code *)0x2eb;
        func_0x000107c2b664(pcVar9,0x2eb,&uStack_74,0);
        if (pcVar9 == (code *)0x0) {
          if (uStack_74 == 0xffffffff) goto LAB_10ae4f188;
          goto LAB_10ae4f0b0;
        }
        plVar3 = param_1;
        func_0x00010ae4f520();
        uStack_74 = (uint)plVar3;
        param_2 = pcVar9;
        if ((int)uStack_74 < 1) goto LAB_10ae4f0b0;
LAB_10ae4f188:
        unaff_x21 = *(long **)(*param_1 + 0x48);
        param_2 = (code *)0x2ec;
        func_0x000107c2b664(unaff_x21,0x2ec,&uStack_74,0);
        if (unaff_x21 == (long *)0x0) {
          if (uStack_74 == 0xffffffff) goto LAB_10ae4f0c0;
          goto LAB_10ae4f0b4;
        }
        if (*(int *)((long)unaff_x21 + 4) == 0x102) goto LAB_10ae4f0b4;
        param_2 = (code *)0x2;
        plVar3 = unaff_x21;
        func_0x000107c34f2c();
        *unaff_x24 = (long)plVar3;
      }
      else {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
          lVar5 = plVar4[1];
          if (lVar5 != 0) goto LAB_10ae4ee7c;
        }
        else if (*(int *)(lVar5 + 4) != 0x102) {
          param_2 = (code *)0x2;
          func_0x000107c34f2c();
          plVar3[4] = lVar5;
          lVar5 = plVar4[1];
          if (lVar5 == 0) goto LAB_10ae4ee94;
LAB_10ae4ee7c:
          if (*(int *)(lVar5 + 4) != 0x102) {
            func_0x000107c34f2c(lVar5,2);
            plVar3[5] = lVar5;
            goto LAB_10ae4ee94;
          }
        }
LAB_10ae4f0b0:
        unaff_x21 = (long *)0x0;
LAB_10ae4f0b4:
        param_1[7] = param_1[7] | 0x800;
      }
LAB_10ae4f0c0:
      if (plVar4 != (long *)0x0) {
        param_2 = (code *)&DAT_110c89888;
        plStack_68 = plVar4;
        func_0x000107c2b1bc(&plStack_68,&DAT_110c89888,0);
      }
      if (unaff_x21 != (long *)0x0) {
        func_0x000107c2b534(unaff_x21[1]);
        func_0x000107c2b534(unaff_x21);
      }
    }
LAB_10ae4f144:
    unaff_x20 = param_1[0xd];
  }
  lVar5 = 0x113311648;
  _pthread_rwlock_unlock();
  if ((int)lVar5 == 0) {
    return unaff_x20;
  }
LAB_10ae4f1d8:
  _abort();
  pcStack_98 = FUN_10ae4f1dc;
  pcStack_108 = param_2;
  uStack_e0 = unaff_x26;
  uStack_d8 = unaff_x25;
  plStack_d0 = unaff_x24;
  plStack_c8 = unaff_x23;
  puStack_c0 = unaff_x22;
  plStack_b8 = unaff_x21;
  lStack_b0 = unaff_x20;
  plStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2b5bc(*(undefined8 *)(lVar5 + 8));
  puVar6 = *(ulong **)(lVar5 + 8);
  if (puVar6 != (ulong *)0x0) {
    if (puVar6[4] == 0) {
      if (*puVar6 != 0) {
        uVar11 = 0;
        do {
          if (*(undefined1 **)(puVar6[1] + uVar11 * 8) == auStack_110) goto LAB_10ae4f2fc;
          uVar11 = uVar11 + 1;
        } while (*puVar6 != uVar11);
      }
    }
    else {
      uVar13 = *puVar6;
      if ((int)puVar6[2] == 0) {
        if (uVar13 != 0) {
          uVar11 = 0;
          do {
            uStack_f0 = *(undefined8 *)(puVar6[1] + uVar11 * 8);
            ppuVar10 = &puStack_e8;
            puStack_e8 = auStack_110;
            (*(code *)puVar6[4])(ppuVar10,&uStack_f0);
            if ((int)ppuVar10 == 0) goto LAB_10ae4f2fc;
            uVar11 = uVar11 + 1;
          } while (uVar11 < *puVar6);
        }
      }
      else if (uVar13 != 0) {
        uVar12 = 0;
        do {
          uVar11 = uVar12 + ((uVar13 - uVar12) - 1 >> 1);
          uStack_f0 = *(undefined8 *)(puVar6[1] + uVar11 * 8);
          ppuVar10 = &puStack_e8;
          puStack_e8 = auStack_110;
          (*(code *)puVar6[4])(ppuVar10,&uStack_f0);
          if ((int)ppuVar10 < 1) {
            if (-1 < (int)ppuVar10) {
              if (uVar13 - uVar12 == 1) {
LAB_10ae4f2fc:
                puVar6 = *(ulong **)(lVar5 + 8);
                if (puVar6 == (ulong *)0x0) {
                  return 0;
                }
                if (*puVar6 <= uVar11) {
                  return 0;
                }
                return *(long *)(puVar6[1] + uVar11 * 8);
              }
              uVar11 = uVar11 + 1;
            }
          }
          else {
            uVar12 = uVar11 + 1;
            uVar11 = uVar13;
          }
          uVar13 = uVar11;
        } while (uVar12 < uVar11);
      }
    }
  }
  return 0;
}



/* Entry: 10ae4f1dc; end: 10ae4f33b;  */

undefined8 FUN_10ae4f1dc(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  
  uStack_78 = param_2;
  func_0x000107c2b5bc(*(undefined8 *)(param_1 + 8));
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 != (ulong *)0x0) {
    if (puVar2[4] == 0) {
      if (*puVar2 != 0) {
        uVar3 = 0;
        do {
          if (*(undefined1 **)(puVar2[1] + uVar3 * 8) == auStack_80) goto LAB_10ae4f2fc;
          uVar3 = uVar3 + 1;
        } while (*puVar2 != uVar3);
      }
    }
    else {
      uVar5 = *puVar2;
      if ((int)puVar2[2] == 0) {
        if (uVar5 != 0) {
          uVar3 = 0;
          do {
            uStack_60 = *(undefined8 *)(puVar2[1] + uVar3 * 8);
            ppuVar1 = &puStack_58;
            puStack_58 = auStack_80;
            (*(code *)puVar2[4])(ppuVar1,&uStack_60);
            if ((int)ppuVar1 == 0) goto LAB_10ae4f2fc;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *puVar2);
        }
      }
      else if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar4 + ((uVar5 - uVar4) - 1 >> 1);
          uStack_60 = *(undefined8 *)(puVar2[1] + uVar3 * 8);
          ppuVar1 = &puStack_58;
          puStack_58 = auStack_80;
          (*(code *)puVar2[4])(ppuVar1,&uStack_60);
          if ((int)ppuVar1 < 1) {
            if (-1 < (int)ppuVar1) {
              if (uVar5 - uVar4 == 1) {
LAB_10ae4f2fc:
                puVar2 = *(ulong **)(param_1 + 8);
                if (puVar2 == (ulong *)0x0) {
                  return 0;
                }
                if (*puVar2 <= uVar3) {
                  return 0;
                }
                return *(undefined8 *)(puVar2[1] + uVar3 * 8);
              }
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar4 = uVar3 + 1;
            uVar3 = uVar5;
          }
          uVar5 = uVar3;
        } while (uVar4 < uVar3);
      }
    }
  }
  return 0;
}



/* Entry: 10ae4f33c; end: 10ae4f367;  */

void FUN_10ae4f33c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ae4f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 10ae4f368; end: 10ae4f427;  */

/* WARNING: Possible PIC construction at 0x00010ae4f3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4f408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4f3c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae4f40c) */

void FUN_10ae4f368(byte *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  ulong uVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x000107c2b17c(*(undefined8 *)(param_1 + 8));
  if (((*param_1 >> 2 & 1) == 0) && (puVar4 = *(ulong **)(param_1 + 0x10), puVar4 != (ulong *)0x0))
  {
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        if (*(long *)(puVar4[1] + uVar5 * 8) != 0) {
          func_0x00010ae52fe4();
          uVar2 = *puVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    unaff_x30 = 0x10ae4f3c8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    pbVar3 = (byte *)puVar4[1];
    unaff_x19 = param_1;
    unaff_x20 = puVar4;
    unaff_x29 = puVar1;
  }
  else {
    puVar4 = *(ulong **)(param_1 + 0x18);
    pbVar3 = param_1;
    if (puVar4 != (ulong *)0x0) {
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          if (*(long *)(puVar4[1] + uVar5 * 8) != 0) {
            func_0x000107c2b17c();
            uVar2 = *puVar4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      unaff_x30 = 0x10ae4f40c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      pbVar3 = (byte *)puVar4[1];
      unaff_x19 = param_1;
      unaff_x20 = puVar4;
      unaff_x29 = puVar1;
    }
  }
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pbVar3 = pbVar3 + -8;
  if (*(long *)pbVar3 + 8 != 0) {
    func_0x000107c60ee4(pbVar3,*(long *)pbVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(pbVar3);
  return;
}



/* Entry: 10ae4f428; end: 10ae4f6b3;  */

undefined8 * FUN_10ae4f428(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (param_1 != (undefined8 *)0x0 || param_2 != 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c2b548();
      if (param_2 == 0) {
        return (undefined8 *)0x0;
      }
    }
    puVar2 = (undefined8 *)0x28;
    _malloc();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce654,0x66);
    }
    else {
      *puVar2 = 0x20;
      puVar1 = puVar2 + 1;
      lVar3 = 0;
      func_0x000107c2b59c();
      puVar2[4] = lVar3;
      if (lVar3 != 0) {
        uVar4 = 0;
        if (param_3 != 0) {
          uVar4 = 0x10;
        }
        *(undefined4 *)puVar1 = uVar4;
        if (param_2 == 0) {
          puVar2[2] = *param_1;
          *param_1 = 0;
        }
        else {
          puVar2[2] = param_2;
          if (param_1 == (undefined8 *)0x0) {
            puVar2[3] = 0;
            return puVar1;
          }
        }
        puVar2[3] = param_1[1];
        param_1[1] = 0;
        return puVar1;
      }
      func_0x000107c2b534(puVar1);
    }
    func_0x000107c2b17c(param_2);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ae4f6b4; end: 10ae4f6cf;  */

ulong FUN_10ae4f6b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(*(long *)*param_1 + 8) + 0x14);
  uVar2 = iVar1 - *(int *)(*(long *)(*(long *)*param_2 + 8) + 0x14);
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    if (iVar1 != 0) {
      uVar3 = *(ulong *)(*(long *)(*(long *)*param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcmp_11034c650)
                (uVar3,*(undefined8 *)(*(long *)(*(long *)*param_2 + 8) + 0x18));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10ae4f6d0; end: 10ae4f99f;  */

undefined8 FUN_10ae4f6d0(ulong *param_1,undefined8 param_2)

{
  undefined1 ***pppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *apuStack_88 [3];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined1 **ppuStack_48;
  
  apuStack_88[0] = auStack_70;
  uStack_68 = param_2;
  func_0x000107c2b5bc();
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      if (*param_1 != 0) {
        uVar2 = 0;
        do {
          if (*(undefined1 ***)(param_1[1] + uVar2 * 8) == apuStack_88) goto LAB_10ae4f7f4;
          uVar2 = uVar2 + 1;
        } while (*param_1 != uVar2);
      }
    }
    else {
      uVar4 = *param_1;
      if ((int)param_1[2] == 0) {
        if (uVar4 != 0) {
          uVar2 = 0;
          do {
            uStack_50 = *(undefined8 *)(param_1[1] + uVar2 * 8);
            pppuVar1 = &ppuStack_48;
            ppuStack_48 = apuStack_88;
            (*(code *)param_1[4])(pppuVar1,&uStack_50);
            if ((int)pppuVar1 == 0) goto LAB_10ae4f7f4;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *param_1);
        }
      }
      else if (uVar4 != 0) {
        uVar3 = 0;
        do {
          uVar2 = uVar3 + ((uVar4 - uVar3) - 1 >> 1);
          uStack_50 = *(undefined8 *)(param_1[1] + uVar2 * 8);
          pppuVar1 = &ppuStack_48;
          ppuStack_48 = apuStack_88;
          (*(code *)param_1[4])(pppuVar1,&uStack_50);
          if ((int)pppuVar1 < 1) {
            if (-1 < (int)pppuVar1) {
              if (uVar4 - uVar3 == 1) {
LAB_10ae4f7f4:
                if (*param_1 <= uVar2) {
                  return 0;
                }
                return *(undefined8 *)(param_1[1] + uVar2 * 8);
              }
              uVar2 = uVar2 + 1;
            }
          }
          else {
            uVar3 = uVar2 + 1;
            uVar2 = uVar4;
          }
          uVar4 = uVar2;
        } while (uVar3 < uVar2);
      }
    }
  }
  return 0;
}



/* Entry: 10ae4f9a0; end: 10ae4fa2f;  */

bool FUN_10ae4f9a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  pbVar3 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) >> 2 & 1) == 0) && ((*pbVar3 & 3) != 0)) {
    plVar4 = *(long **)(pbVar3 + 0x18);
    if (plVar4 == (long *)0x0) {
LAB_10ae4fa1c:
      bVar1 = false;
    }
    else {
      lVar5 = 0;
      lVar6 = *plVar4;
      do {
        if (lVar6 == lVar5) goto LAB_10ae4fa1c;
        uVar2 = *(undefined8 *)(plVar4[1] + lVar5 * 8);
        func_0x000107c2b54c(uVar2,param_3);
        lVar5 = lVar5 + 1;
      } while ((int)uVar2 != 0);
      bVar1 = true;
    }
  }
  else {
    uVar2 = *(undefined8 *)(pbVar3 + 8);
    func_0x000107c2b54c(uVar2,param_3);
    bVar1 = (int)uVar2 == 0;
  }
  return bVar1;
}



/* Entry: 10ae4fa30; end: 10ae4fbb3;  */

/* WARNING: Possible PIC construction at 0x00010ae4fa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4faa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4fb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4fb24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4fb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4fb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4fb84) */
/* WARNING: Removing unreachable block (ram,0x00010ae4fb08) */
/* WARNING: Removing unreachable block (ram,0x00010ae4fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010ae4fb94) */

void FUN_10ae4fa30(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lStack_48;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c2b5a4(param_1[3]);
  puVar2 = (ulong *)param_1[4];
  if (puVar2 == (ulong *)0x0) {
    if (0 < *(int *)(param_1 + 1)) {
      iVar5 = 0;
      plVar6 = (long *)*param_1;
      do {
        if (*plVar6 != 0) {
          lStack_48 = *plVar6;
          func_0x000107c2b1bc(&lStack_48,&UNK_110c87868,0);
        }
        puVar2 = (ulong *)plVar6[1];
        if (puVar2 != (ulong *)0x0) {
          if (*puVar2 == 0) goto LAB_10ae4fb18;
          uVar3 = 0;
          goto LAB_10ae4faf8;
        }
        if (plVar6[2] != 0) {
          func_0x000107c2b534();
        }
        iVar5 = iVar5 + 1;
        plVar6 = plVar6 + 4;
      } while (iVar5 < *(int *)(param_1 + 1));
    }
    puVar2 = (ulong *)param_1[2];
    if (puVar2 == (ulong *)0x0) {
      puVar1 = (ulong *)*param_1;
    }
    else {
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          if (*(long *)(puVar2[1] + uVar4 * 8) != 0) {
            FUN_10ae4f368();
            uVar3 = *puVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      puVar1 = (ulong *)puVar2[1];
    }
  }
  else {
    if (*puVar2 != 0) {
      uVar3 = 0;
      do {
        puVar1 = *(ulong **)(puVar2[1] + uVar3 * 8);
        if (((puVar1 != (ulong *)0x0) && ((byte *)*puVar1 != (byte *)0x0)) &&
           ((*(byte *)*puVar1 >> 3 & 1) != 0)) goto code_r0x0001001e33e0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *puVar2);
    }
    func_0x000107c2b534(puVar2[1]);
    puVar1 = puVar2;
  }
code_r0x0001001e33e0:
  if (puVar1 == (ulong *)0x0) {
    return;
  }
  puVar1 = puVar1 + -1;
  if (*puVar1 + 8 != 0) {
    func_0x000107c60ee4(puVar1,*puVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar1);
  return;
  while (uVar3 = uVar3 + 1, uVar3 < *puVar2) {
LAB_10ae4faf8:
    puVar1 = *(ulong **)(puVar2[1] + uVar3 * 8);
    if (puVar1 != (ulong *)0x0) goto code_r0x0001001e33e0;
  }
LAB_10ae4fb18:
  func_0x000107c2b534(puVar2[1]);
  puVar1 = puVar2;
  goto code_r0x0001001e33e0;
}



/* Entry: 10ae4fbb4; end: 10ae5043b;  */

undefined4
FUN_10ae4fbb4(undefined8 *param_1,int *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong *puVar17;
  long *plVar18;
  int *piVar19;
  ulong uVar20;
  long *plVar21;
  int iVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 uVar25;
  long lStack_68;
  
  lStack_68 = 0;
  *param_1 = 0;
  *param_2 = 0;
  if (param_3 == (ulong *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *param_3;
  }
  iVar13 = 0;
  iVar11 = (int)uVar12;
  if ((param_5 & 0x200) == 0) {
    iVar13 = iVar11 + 1;
  }
  iVar22 = 0;
  if ((param_5 & 0x400) == 0) {
    iVar22 = iVar11 + 1;
  }
  if (iVar11 == 1) {
    return 1;
  }
  uVar24 = iVar11 + 1;
  if ((param_5 & 0x100) != 0) {
    uVar24 = 0;
  }
  if (1 < iVar11) {
    iVar16 = 1;
    uVar20 = (ulong)(iVar11 - 2);
    do {
      if ((param_3 == (ulong *)0x0) || (*param_3 <= uVar20)) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(param_3[1] + uVar20 * 8);
      }
      func_0x000107c2b66c(lVar14);
      lVar9 = lVar14;
      FUN_10ae4ed7c();
      if (lVar9 == 0) {
        return 0;
      }
      uVar10 = (uint)*(undefined8 *)(lVar14 + 0x38);
      if ((uVar10 >> 0xb & 1) == 0) {
        if ((iVar16 == 1) && (iVar16 = 1, *(long *)(lVar9 + 8) == 0)) {
          iVar16 = 2;
        }
      }
      else {
        iVar16 = -1;
      }
      if (0 < (int)uVar24) {
        uVar10 = (uVar24 + (uVar10 >> 5 & 1)) - 1;
        lVar14 = *(long *)(lVar9 + 0x18);
        uVar24 = (uint)lVar14;
        if ((long)(ulong)uVar10 <= lVar14 || lVar14 == -1) {
          uVar24 = uVar10;
        }
      }
      bVar2 = 0 < (long)uVar20;
      uVar20 = uVar20 - 1;
    } while (bVar2);
    if (iVar16 != 1) {
      if ((iVar16 == 2) && (uVar24 == 0)) {
        *param_2 = 1;
        return 0xfffffffe;
      }
      if (iVar16 == 2) {
        return 1;
      }
      if (iVar16 == 0) {
        return 0;
      }
      if (iVar16 == -1) {
        return 0xffffffff;
      }
      plVar15 = (long *)0x0;
      goto LAB_10ae503cc;
    }
  }
  puVar3 = (undefined8 *)0x38;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar3 = 0x30;
  plVar15 = puVar3 + 1;
  *(undefined4 *)(puVar3 + 6) = 0;
  uVar20 = -(uVar12 >> 0x1f & 1) & 0xffffffe000000000 | (uVar12 & 0xffffffff) << 5;
  puVar4 = (ulong *)(uVar20 | 8);
  _malloc();
  if (puVar4 == (ulong *)0x0) {
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = 0;
    func_0x000107c2b534(plVar15);
    return 0;
  }
  puVar17 = puVar4 + 1;
  *puVar4 = uVar20;
  puVar3[1] = puVar17;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = 0;
  if ((uVar12 & 0xffffffff) != 0) {
    _bzero(puVar17,uVar20);
  }
  *(int *)(puVar3 + 2) = iVar11;
  lVar14 = 0;
  FUN_10ae4f428(0,&PTR_DAT_110c84148,0);
  if ((lVar14 == 0) ||
     (puVar4 = puVar17, func_0x00010ae4f8a8(puVar17,lVar14,0,plVar15), puVar4 == (ulong *)0x0))
  goto LAB_10ae503cc;
  uVar12 = (ulong)(iVar11 - 2);
  if (1 < iVar11) {
    do {
      if ((param_3 == (ulong *)0x0) || (*param_3 <= uVar12)) {
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = *(long **)(param_3[1] + uVar12 * 8);
      }
      plVar5 = plVar21;
      FUN_10ae4ed7c();
      plVar18 = plVar21 + 3;
      iVar11 = (int)*plVar18;
      do {
        if (iVar11 == -1) break;
        lVar14 = *plVar18;
        if ((int)lVar14 == iVar11) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *(int *)plVar18 = iVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          bVar2 = cVar1 == '\0';
        }
        else {
          bVar2 = false;
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar14;
      } while (!bVar2);
      puVar17[4] = (ulong)plVar21;
      if (*plVar5 == 0) {
        *(uint *)(puVar17 + 7) = (uint)puVar17[7] | 0x200;
      }
      uVar10 = (uint)plVar21[7];
      if (iVar13 == 0) {
        if ((uVar12 == 0) || ((uVar10 >> 5 & 1) == 0)) {
          *(uint *)(puVar17 + 7) = (uint)puVar17[7] | 0x200;
          iVar13 = 0;
          goto joined_r0x00010ae4fe40;
        }
        iVar13 = 0;
        if (iVar22 != 0) goto LAB_10ae4fe44;
LAB_10ae4fe20:
        *(uint *)(puVar17 + 7) = (uint)puVar17[7] | 0x400;
      }
      else {
        iVar11 = iVar13 + (uVar10 >> 5 & 1) + -1;
        uVar20 = plVar5[2];
        iVar13 = (int)uVar20;
        if ((long)iVar11 <= (long)uVar20 || 0x7fffffffffffffff < uVar20) {
          iVar13 = iVar11;
        }
joined_r0x00010ae4fe40:
        if (iVar22 == 0) goto LAB_10ae4fe20;
LAB_10ae4fe44:
        iVar11 = iVar22 + (uVar10 >> 5 & 1) + -1;
        uVar20 = plVar5[4];
        iVar22 = (int)uVar20;
        if ((long)iVar11 <= (long)uVar20 || 0x7fffffffffffffff < uVar20) {
          iVar22 = iVar11;
        }
      }
      bVar2 = 0 < (long)uVar12;
      uVar12 = uVar12 - 1;
      puVar17 = puVar17 + 4;
    } while (bVar2);
  }
  if (uVar24 == 0) {
    *param_2 = 1;
  }
  iVar13 = *(int *)(puVar3 + 2);
  plVar21 = (long *)puVar3[1];
  if (1 < iVar13) {
    iVar11 = 1;
    plVar18 = plVar21;
    do {
      plVar5 = plVar18 + 4;
      puVar6 = (undefined8 *)*plVar5;
      FUN_10ae4ed7c();
      puVar4 = (ulong *)puVar6[1];
      if (puVar4 != (ulong *)0x0) {
        uVar12 = 0;
        do {
          if (*puVar4 <= uVar12) break;
          lVar14 = *(long *)(puVar4[1] + uVar12 * 8);
          puVar4 = (ulong *)plVar18[1];
          if (puVar4 == (ulong *)0x0) {
LAB_10ae4ff2c:
            if ((plVar18[2] != 0) &&
               (plVar21 = plVar5, func_0x00010ae4f8a8(plVar5,lVar14,plVar18[2],0),
               plVar21 == (long *)0x0)) goto LAB_10ae503cc;
          }
          else {
            uVar20 = 0;
            bVar2 = false;
            do {
              if (*puVar4 <= uVar20) break;
              uVar25 = *(undefined8 *)(puVar4[1] + uVar20 * 8);
              plVar21 = plVar18;
              FUN_10ae4f9a0(plVar18,uVar25,*(undefined8 *)(lVar14 + 8));
              if ((int)plVar21 != 0) {
                plVar21 = plVar5;
                func_0x00010ae4f8a8(plVar5,lVar14,uVar25,0);
                if (plVar21 == (long *)0x0) goto LAB_10ae503cc;
                bVar2 = true;
              }
              uVar20 = uVar20 + 1;
              puVar4 = (ulong *)plVar18[1];
            } while (puVar4 != (ulong *)0x0);
            if (!bVar2) goto LAB_10ae4ff2c;
          }
          uVar12 = uVar12 + 1;
          puVar4 = (ulong *)puVar6[1];
        } while (puVar4 != (ulong *)0x0);
      }
      if ((*(byte *)((long)plVar18 + 0x39) >> 1 & 1) == 0) {
        puVar4 = (ulong *)plVar18[1];
        if (puVar4 != (ulong *)0x0) {
          uVar12 = 0;
          do {
            if (*puVar4 <= uVar12) break;
            puVar23 = *(undefined8 **)(puVar4[1] + uVar12 * 8);
            if (((*(byte *)((long)plVar18 + 0x19) >> 2 & 1) == 0) && ((*(byte *)*puVar23 & 1) != 0))
            {
              puVar4 = *(ulong **)((byte *)*puVar23 + 0x18);
              if (((puVar4 != (ulong *)0x0) && (*puVar4 != (long)*(int *)(puVar23 + 2))) &&
                 (*puVar4 != 0)) {
                uVar20 = 0;
                do {
                  uVar25 = *(undefined8 *)(puVar4[1] + uVar20 * 8);
                  plVar21 = plVar5;
                  func_0x00010ae4f828(plVar5,puVar23,uVar25);
                  if ((plVar21 == (long *)0x0) &&
                     (plVar21 = plVar5, FUN_10ae5043c(plVar5,puVar6,uVar25,puVar23,plVar15),
                     (int)plVar21 == 0)) goto LAB_10ae503cc;
                  uVar20 = uVar20 + 1;
                } while (uVar20 < *puVar4);
              }
            }
            else if ((*(int *)(puVar23 + 2) == 0) &&
                    (plVar21 = plVar5, FUN_10ae5043c(plVar5,puVar6,0,puVar23,plVar15),
                    (int)plVar21 == 0)) goto LAB_10ae503cc;
            uVar12 = uVar12 + 1;
            puVar4 = (ulong *)plVar18[1];
          } while (puVar4 != (ulong *)0x0);
        }
        if ((plVar18[2] != 0) &&
           (plVar21 = plVar5, func_0x00010ae4f8a8(plVar5,*puVar6,plVar18[2],0),
           plVar21 == (long *)0x0)) goto LAB_10ae503cc;
      }
      plVar7 = plVar5;
      if (((*(byte *)((long)plVar18 + 0x39) >> 2 & 1) != 0) &&
         ((piVar19 = (int *)plVar18[5], piVar19 != (int *)0x0 &&
          (uVar12 = (ulong)(*piVar19 - 1U), -1 < (int)(*piVar19 - 1U))))) {
        do {
          puVar6 = *(undefined8 **)(*(long *)(piVar19 + 2) + uVar12 * 8);
          if ((*(byte *)*puVar6 & 3) != 0) {
            lVar14 = puVar6[1];
            *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
            func_0x000107c2b534();
            func_0x000107c2b5b0(piVar19,uVar12);
          }
          bVar2 = 0 < (long)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar2);
      }
      do {
        while( true ) {
          piVar19 = (int *)plVar7[-3];
          if ((piVar19 != (int *)0x0) &&
             (uVar12 = (ulong)(*piVar19 - 1U), -1 < (int)(*piVar19 - 1U))) {
            do {
              lVar14 = *(long *)(*(long *)(piVar19 + 2) + uVar12 * 8);
              if (*(int *)(lVar14 + 0x10) == 0) {
                lVar14 = *(long *)(lVar14 + 8);
                *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
                func_0x000107c2b534();
                func_0x000107c2b5b0(piVar19,uVar12);
              }
              bVar2 = 0 < (long)uVar12;
              uVar12 = uVar12 - 1;
            } while (bVar2);
          }
          plVar18 = plVar7 + -4;
          lVar14 = plVar7[-2];
          if (lVar14 != 0) break;
LAB_10ae50144:
          plVar7 = plVar18;
          if (plVar18 == (long *)*plVar15) {
            FUN_10ae4fa30(plVar15);
            if (*param_2 != 0) {
              return 0xfffffffe;
            }
            return 1;
          }
        }
        if (*(int *)(lVar14 + 0x10) == 0) {
          lVar14 = *(long *)(lVar14 + 8);
          if (lVar14 != 0) {
            *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
          }
          func_0x000107c2b534();
          plVar7[-2] = 0;
          goto LAB_10ae50144;
        }
        plVar21 = (long *)*plVar15;
        plVar7 = plVar18;
      } while (plVar18 != plVar21);
      iVar11 = iVar11 + 1;
      iVar13 = *(int *)(puVar3 + 2);
      plVar18 = plVar5;
    } while (iVar11 < iVar13);
  }
  plVar18 = puVar3 + 4;
  plVar5 = plVar18;
  if (plVar21[(long)iVar13 * 4 + -2] != 0) {
    plVar21 = plVar18;
    FUN_10ae504e4();
    if ((int)plVar21 == 0) goto LAB_10ae503cc;
    plVar21 = (long *)puVar3[1];
    iVar13 = *(int *)(puVar3 + 2);
    plVar5 = &lStack_68;
  }
  if (1 < iVar13) {
    iVar11 = 1;
    do {
      lVar14 = plVar21[2];
      if (lVar14 == 0) break;
      puVar4 = (ulong *)plVar21[5];
      if (puVar4 != (ulong *)0x0) {
        uVar12 = 0;
        do {
          if (*puVar4 <= uVar12) break;
          if (*(long *)(*(long *)(puVar4[1] + uVar12 * 8) + 8) == lVar14) {
            plVar7 = plVar5;
            FUN_10ae504e4();
            if ((int)plVar7 == 0) goto LAB_10ae503cc;
            puVar4 = (ulong *)plVar21[5];
          }
          uVar12 = uVar12 + 1;
        } while (puVar4 != (ulong *)0x0);
        iVar13 = *(int *)(puVar3 + 2);
      }
      plVar21 = plVar21 + 4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar13);
  }
  plVar21 = &lStack_68;
  if (plVar5 != &lStack_68) {
    plVar21 = plVar18;
  }
  lVar14 = *plVar21;
  if ((param_4 == (ulong *)0x0) || (*param_4 == 0)) goto LAB_10ae503b4;
  uVar12 = 0;
  plVar21 = *(long **)(*plVar15 + (long)iVar13 * 0x20 + -0x10);
  do {
    uVar20 = *param_4;
    if (uVar20 <= uVar12) {
      if (uVar20 == 0) goto LAB_10ae503b4;
      uVar12 = 0;
      goto LAB_10ae5030c;
    }
    iVar13 = (int)*(undefined8 *)(param_4[1] + uVar12 * 8);
    func_0x000107c2b550();
    uVar12 = uVar12 + 1;
  } while (iVar13 != 0x2ea);
  bVar2 = false;
  *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) | 2;
  goto LAB_10ae503b8;
LAB_10ae5030c:
  do {
    if (uVar12 < uVar20) {
      uVar25 = *(undefined8 *)(param_4[1] + uVar12 * 8);
    }
    else {
      uVar25 = 0;
    }
    lVar9 = lVar14;
    func_0x00010ae4f6d0(lVar14,uVar25);
    if (lVar9 == 0) {
      if (plVar21 != (long *)0x0) {
        puVar8 = (undefined4 *)0x0;
        FUN_10ae4f428(0,uVar25,*(uint *)*plVar21 & 0x10);
        if (puVar8 != (undefined4 *)0x0) {
          lVar9 = plVar21[1];
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(*plVar21 + 0x10);
          *puVar8 = 0xc;
          func_0x00010ae4f8a8(0,puVar8,lVar9,plVar15);
          goto LAB_10ae5037c;
        }
        goto LAB_10ae50434;
      }
    }
    else {
LAB_10ae5037c:
      lVar9 = puVar3[5];
      if (lVar9 == 0) {
        func_0x000107c2b59c();
        puVar3[5] = lVar9;
        if (lVar9 == 0) break;
      }
      func_0x000107c2b5ac();
      if (lVar9 == 0) {
LAB_10ae50434:
        bVar2 = true;
        goto LAB_10ae503b8;
      }
    }
    uVar12 = uVar12 + 1;
    uVar20 = *param_4;
  } while (uVar12 < uVar20);
LAB_10ae503b4:
  bVar2 = false;
LAB_10ae503b8:
  if (plVar5 == &lStack_68) {
    func_0x000107c2b5a4(lVar14);
  }
  if (!bVar2) {
    *param_1 = plVar15;
    if (*param_2 != 0) {
      lVar14 = 0x20;
      if ((*(byte *)(puVar3 + 6) & 2) != 0) {
        lVar14 = 0x18;
      }
      if ((*(long **)((long)plVar15 + lVar14) == (long *)0x0) ||
         (**(long **)((long)plVar15 + lVar14) == 0)) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
LAB_10ae503cc:
  FUN_10ae4fa30(plVar15);
  return 0;
}



/* Entry: 10ae5043c; end: 10ae504e3;  */

void FUN_10ae5043c(long param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  uint *puVar1;
  
  if (param_3 == 0) {
    param_3 = *(long *)((uint *)*param_4 + 2);
  }
  puVar1 = (uint *)0x0;
  FUN_10ae4f428(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar1 != (uint *)0x0) {
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(*param_2 + 0x10);
    *puVar1 = *puVar1 | 4;
    func_0x00010ae4f8a8(param_1,puVar1,param_4,param_5);
    if (param_1 == 0) {
      FUN_10ae4f368(puVar1);
    }
  }
  return;
}



/* Entry: 10ae504e4; end: 10ae50647;  */

void FUN_10ae504e4(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*param_1 == 0) {
    pcVar1 = FUN_10ae4f6b4;
    func_0x000107c2b59c();
    *param_1 = (long)pcVar1;
    if (pcVar1 == (code *)0x0) {
      return;
    }
  }
  else {
    func_0x000107c2b5bc();
    puVar3 = (ulong *)*param_1;
    if (puVar3 != (ulong *)0x0) {
      if (puVar3[4] == 0) {
        uVar4 = *puVar3;
        if (uVar4 != 0) {
          plVar2 = (long *)puVar3[1];
          do {
            if (*plVar2 == param_2) {
              return;
            }
            uVar4 = uVar4 - 1;
            plVar2 = plVar2 + 1;
          } while (uVar4 != 0);
        }
      }
      else if (param_2 != 0) {
        uVar4 = *puVar3;
        if ((int)puVar3[2] == 0) {
          if (uVar4 != 0) {
            uVar4 = 0;
            do {
              uStack_60 = *(undefined8 *)(puVar3[1] + uVar4 * 8);
              plVar2 = &lStack_58;
              lStack_58 = param_2;
              (*(code *)puVar3[4])(plVar2,&uStack_60);
              if ((int)plVar2 == 0) {
                return;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *puVar3);
          }
        }
        else if (uVar4 != 0) {
          uVar6 = 0;
          do {
            uVar5 = uVar6 + ((uVar4 - uVar6) - 1 >> 1);
            uStack_60 = *(undefined8 *)(puVar3[1] + uVar5 * 8);
            plVar2 = &lStack_58;
            lStack_58 = param_2;
            (*(code *)puVar3[4])(plVar2,&uStack_60);
            if ((int)plVar2 < 1) {
              if (-1 < (int)plVar2) {
                if (uVar4 - uVar6 == 1) {
                  return;
                }
                uVar5 = uVar5 + 1;
              }
            }
            else {
              uVar6 = uVar5 + 1;
              uVar5 = uVar4;
            }
            uVar4 = uVar5;
          } while (uVar6 < uVar5);
        }
      }
    }
  }
  func_0x000107c2b5ac();
  return;
}



/* Entry: 10ae50648; end: 10ae50753;  */

ulong * FUN_10ae50648(undefined8 param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puStack_38;
  
  piVar5 = (int *)*param_2;
  puStack_38 = param_3;
  if (piVar5 != (int *)0x0) {
    lVar2 = *(long *)(piVar5 + 2);
    func_0x00010ae5735c(lVar2,(long)*piVar5);
    if (lVar2 == 0) goto LAB_10ae506f4;
    lVar3 = lVar2;
    _strlen();
    iVar1 = 0xf6ce6cc;
    FUN_10ae5686c(&UNK_10f6ce6cc,lVar2,lVar3,0,&puStack_38);
    func_0x000107c2b534(lVar2);
    if (iVar1 == 0) goto LAB_10ae506f4;
  }
  puVar4 = puStack_38;
  if (param_2[1] != 0) {
    puVar4 = (ulong *)0x0;
    FUN_10ae50af0(0,param_2[1],puStack_38);
    if (puVar4 == (ulong *)0x0) goto LAB_10ae506f4;
  }
  puStack_38 = puVar4;
  if (param_2[2] == 0) {
    return puStack_38;
  }
  iVar1 = 0xf3f1517;
  FUN_10ae56d90(&DAT_10f3f1517,param_2[2],&puStack_38);
  if (iVar1 != 0) {
    return puStack_38;
  }
LAB_10ae506f4:
  puVar4 = puStack_38;
  if ((param_3 == (ulong *)0x0) && (puStack_38 != (ulong *)0x0)) {
    uVar6 = *puStack_38;
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (*(long *)(puVar4[1] + uVar7 * 8) != 0) {
          FUN_10ae569c0();
          uVar6 = *puVar4;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    func_0x000107c2b534(puVar4[1]);
    func_0x000107c2b534(puVar4);
  }
  return (ulong *)0x0;
}



/* Entry: 10ae50754; end: 10ae50aef;  */

long * FUN_10ae50754(undefined8 param_1,int *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plStack_68;
  
  if ((param_3 == (long *)0x0) || (lVar15 = *param_3, lVar15 == 0)) {
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    lVar16 = 0;
    iVar6 = 0;
    iVar7 = 0;
    lVar17 = param_3[1];
    do {
      lVar9 = *(long *)(lVar17 + lVar16 * 8);
      uVar13 = *(undefined8 *)(lVar9 + 8);
      uVar5 = uVar13;
      _strcmp(uVar13,&UNK_10f6ce6cc);
      if ((int)uVar5 == 0) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          iVar7 = 1;
        }
        else {
          _strcmp(lVar9,&DAT_10f2ddaf6);
          iVar7 = 1;
          if ((int)lVar9 == 0) {
            iVar7 = 2;
          }
        }
      }
      else {
        _strcmp(uVar13,&DAT_10f6ce6d2);
        if ((int)uVar13 != 0) {
          func_0x000107c2b29c(0x14,0,0x9f,&UNK_10f6ce6d9,0xa4);
          func_0x000107c2b2a0(2);
          return (long *)0x0;
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          iVar6 = 1;
        }
        else {
          _strcmp(lVar9,&DAT_10f2ddaf6);
          iVar6 = 1;
          if ((int)lVar9 == 0) {
            iVar6 = 2;
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar15 != lVar16);
  }
  if (param_2 != (int *)0x0) {
    plVar11 = *(long **)(param_2 + 2);
    if (plVar11 != (long *)0x0) {
      if (iVar7 == 0) {
        lVar15 = 0;
      }
      else {
        plVar2 = plVar11;
        func_0x00010ae4b974(plVar11,0x52,0xffffffff);
        if (((((int)plVar2 < 0) || (puVar8 = *(ulong **)(*plVar11 + 0x48), puVar8 == (ulong *)0x0))
            || (*puVar8 <= ((ulong)plVar2 & 0xffffffff))) ||
           (lVar15 = *(long *)(puVar8[1] + ((ulong)plVar2 & 0xffffffff) * 8), lVar15 == 0)) {
          lVar15 = 0;
        }
        else {
          func_0x000107c2b660();
        }
        if ((iVar7 == 2) && (lVar15 == 0)) {
          uVar5 = 0x9b;
          uVar13 = 0xb8;
          goto LAB_10ae508e0;
        }
      }
      if ((iVar6 == 2) || (lVar15 == 0 && iVar6 != 0)) {
        plVar2 = (long *)&DAT_110c87418;
        func_0x00010ae1ccd4(&DAT_110c87418,*(undefined8 *)(*plVar11 + 0x18));
        plVar10 = *(long **)(*plVar11 + 8);
        func_0x00010ae1de24();
        plVar11 = plVar10;
        if (plVar2 == (long *)0x0 || plVar10 == (long *)0x0) {
          uVar5 = 0x9a;
          uVar13 = 0xc1;
        }
        else {
          plStack_68 = (long *)0x0;
          pplVar3 = &plStack_68;
          func_0x000107c34f34(pplVar3,&DAT_110c87a80,0);
          plVar12 = plStack_68;
          if (((int)pplVar3 == 0) || (plStack_68 == (long *)0x0)) goto LAB_10ae50aa0;
          puVar14 = (undefined8 *)0x0;
          func_0x000107c2b59c();
          if (puVar14 != (undefined8 *)0x0) {
            plStack_68 = (long *)0x0;
            pplVar3 = &plStack_68;
            func_0x000107c34f34(pplVar3,&DAT_110c88cd8,0);
            plVar1 = plStack_68;
            if ((((int)pplVar3 != 0) && (plStack_68 != (long *)0x0)) &&
               (puVar4 = puVar14, func_0x000107c2b5ac(puVar14,plStack_68,*puVar14),
               puVar4 != (undefined8 *)0x0)) {
              *(undefined4 *)plVar1 = 4;
              plVar1[1] = (long)plVar2;
              goto LAB_10ae509a0;
            }
          }
          uVar5 = 0x41;
          uVar13 = 0xcd;
        }
        func_0x000107c2b29c(0x14,0,uVar5,&UNK_10f6ce6d9,uVar13);
      }
      else {
        plStack_68 = (long *)0x0;
        pplVar3 = &plStack_68;
        func_0x000107c34f34(pplVar3,&DAT_110c87a80,0);
        plVar10 = (long *)0x0;
        plVar2 = plVar10;
        if ((int)pplVar3 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          puVar14 = (undefined8 *)0x0;
          plVar11 = (long *)0x0;
          plVar12 = plStack_68;
          if (plStack_68 != (long *)0x0) {
LAB_10ae509a0:
            plVar12[1] = (long)puVar14;
            plVar12[2] = (long)plVar10;
            *plVar12 = lVar15;
            return plVar12;
          }
        }
      }
LAB_10ae50aa0:
      plStack_68 = plVar2;
      func_0x000107c2b1bc(&plStack_68,&DAT_110c87418,0);
      func_0x00010ae1de94(plVar11);
      func_0x00010ae1de94(lVar15);
      return (long *)0x0;
    }
    if (*param_2 == 1) {
      plStack_68 = (long *)0x0;
      pplVar3 = &plStack_68;
      func_0x000107c34f34(pplVar3,&DAT_110c87a80,0);
      if ((int)pplVar3 != 0) {
        return plStack_68;
      }
      return (long *)0x0;
    }
  }
  uVar5 = 0x8c;
  uVar13 = 0xad;
LAB_10ae508e0:
  func_0x000107c2b29c(0x14,0,uVar5,&UNK_10f6ce6d9,uVar13);
  return (long *)0x0;
}



/* Entry: 10ae50af0; end: 10ae50bbb;  */

ulong * FUN_10ae50af0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  puVar3 = param_3;
  do {
    puVar4 = param_3;
    if ((param_2 == (ulong *)0x0) || (puVar4 = puVar3, *param_2 <= uVar6)) {
      if (puVar4 != (ulong *)0x0) {
        return puVar4;
      }
      puVar1 = (undefined8 *)0x30;
      func_0x000107c610a0();
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0x28;
        puVar3 = puVar1 + 1;
        puVar1[2] = 0;
        *puVar3 = 0;
        puVar1[4] = 0;
        puVar1[3] = 0;
        puVar1[5] = 0;
        puVar2 = (undefined8 *)0x28;
        func_0x000107c610a0();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[2] = 0;
          puVar2[1] = 0;
          *puVar2 = 0x20;
          puVar1[2] = puVar2 + 1;
          puVar2[4] = 0;
          puVar2[3] = 0;
          puVar1[4] = 4;
          puVar1[5] = 0;
          return puVar3;
        }
        puVar1[2] = 0;
        func_0x0001001e33e0(puVar3);
      }
      return (ulong *)0x0;
    }
    FUN_10ae50ffc();
    if (param_3 == (ulong *)0x0 && param_1 == (ulong *)0x0) {
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      uVar6 = *puVar3;
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          if (*(long *)(puVar3[1] + uVar5 * 8) != 0) {
            FUN_10ae569c0();
            uVar6 = *puVar3;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      func_0x000107c2b534(puVar3[1]);
      func_0x000107c2b534(puVar3);
      return (ulong *)0x0;
    }
    uVar6 = uVar6 + 1;
    puVar3 = param_1;
  } while (param_1 != (ulong *)0x0);
  return (ulong *)0x0;
}



/* Entry: 10ae50bbc; end: 10ae50ffb;  */

ulong * FUN_10ae50bbc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_68;
  
  puVar1 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar1 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce883,0x15b);
  }
  else if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(param_3[1] + uVar7 * 8);
      uVar2 = *(undefined8 *)(lVar6 + 8);
      func_0x00010ae575cc(uVar2,&UNK_10f6ce7a2);
      if (((int)uVar2 == 0) && (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
        lVar3 = lVar6;
        _strcmp(lVar6,&UNK_10f597991);
        if ((int)lVar3 == 0) {
          uVar2 = 0;
        }
        else {
          _strcmp(lVar6,&DAT_10f51c520);
          if ((int)lVar6 != 0) goto LAB_10ae50c34;
          uVar2 = 1;
        }
        uVar4 = param_2;
        FUN_10ae51c20(param_2,puVar1,uVar2);
        if ((int)uVar4 == 0) {
LAB_10ae50cbc:
          uVar7 = *puVar1;
          if (uVar7 != 0) {
            uVar5 = 0;
            do {
              lVar6 = *(long *)(puVar1[1] + uVar5 * 8);
              if (lVar6 != 0) {
                lStack_68 = lVar6;
                func_0x000107c2b1bc(&lStack_68,&DAT_110c88cd8,0);
                uVar7 = *puVar1;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
          func_0x000107c2b534(puVar1[1]);
          func_0x000107c2b534(puVar1);
          return (ulong *)0x0;
        }
      }
      else {
LAB_10ae50c34:
        lVar6 = 0;
        FUN_10ae5168c();
        if (lVar6 == 0) goto LAB_10ae50cbc;
        func_0x000107c2b5ac(puVar1,lVar6,*puVar1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_3);
  }
  return puVar1;
}



/* Entry: 10ae50ffc; end: 10ae5139f;  */

undefined8 FUN_10ae50ffc(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 auStack_158 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar18 = *param_2;
  uStack_160 = param_3;
  if (iVar18 < 4) {
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        puVar14 = &UNK_10f6ce774;
LAB_10ae510f0:
        param_2 = (int *)&UNK_10f6ce77e;
        puVar16 = (undefined8 *)0xd;
      }
      else {
        if (iVar18 != 1) goto LAB_10ae511dc;
        piVar1 = param_2 + 2;
        param_2 = *(int **)(*(int **)piVar1 + 2);
        puVar16 = (undefined8 *)(long)**(int **)piVar1;
        puVar14 = &UNK_10f6ce7a2;
      }
    }
    else {
      if (iVar18 != 2) {
        if (iVar18 != 3) goto LAB_10ae511dc;
        puVar14 = &UNK_10f6ce78c;
        goto LAB_10ae510f0;
      }
      piVar1 = param_2 + 2;
      param_2 = *(int **)(*(int **)piVar1 + 2);
      puVar16 = (undefined8 *)(long)**(int **)piVar1;
      puVar14 = &UNK_10f6ce7a8;
    }
LAB_10ae511c4:
    FUN_10ae5686c(puVar14,param_2,puVar16,0,&uStack_160);
    param_3 = uStack_160;
    if ((int)puVar14 == 0) {
      param_3 = 0;
    }
  }
  else {
    if (5 < iVar18) {
      if (iVar18 == 6) {
        piVar1 = param_2 + 2;
        param_2 = *(int **)(*(int **)piVar1 + 2);
        puVar16 = (undefined8 *)(long)**(int **)piVar1;
        puVar14 = &UNK_10f6ce7ac;
      }
      else {
        if (iVar18 == 7) {
          if (**(int **)(param_2 + 2) == 0x10) {
            iVar18 = 0;
            auStack_158[0]._0_1_ = 0;
            do {
              func_0x000107c2b540((long)&uStack_168 + 3,5,&UNK_10f6ce7c4);
              puVar16 = &uStack_168;
              lVar15 = -0x110;
              do {
                puVar17 = puVar16 + 2;
                uVar7 = puVar16[3];
                uVar6 = *puVar17;
                cVar19 = -((char)uVar6 == '\0');
                cVar20 = -((char)((ulong)uVar6 >> 8) == '\0');
                cVar21 = -((char)((ulong)uVar6 >> 0x10) == '\0');
                cVar22 = -((char)((ulong)uVar6 >> 0x18) == '\0');
                cVar23 = -((char)((ulong)uVar6 >> 0x20) == '\0');
                cVar24 = -((char)((ulong)uVar6 >> 0x28) == '\0');
                cVar25 = -((char)((ulong)uVar6 >> 0x30) == '\0');
                cVar26 = -((char)((ulong)uVar6 >> 0x38) == '\0');
                bVar27 = -((char)uVar7 == '\0');
                bVar28 = -((char)((ulong)uVar7 >> 8) == '\0');
                bVar29 = -((char)((ulong)uVar7 >> 0x10) == '\0');
                bVar30 = -((char)((ulong)uVar7 >> 0x18) == '\0');
                bVar31 = -((char)((ulong)uVar7 >> 0x20) == '\0');
                bVar32 = -((char)((ulong)uVar7 >> 0x28) == '\0');
                bVar33 = -((char)((ulong)uVar7 >> 0x30) == '\0');
                bVar34 = -((char)((ulong)uVar7 >> 0x38) == '\0');
                auVar36[1] = cVar20;
                auVar36[0] = cVar19;
                auVar36[2] = cVar21;
                auVar36[3] = cVar22;
                auVar36[4] = cVar23;
                auVar36[5] = cVar24;
                auVar36[6] = cVar25;
                auVar36[7] = cVar26;
                auVar36[8] = bVar27;
                auVar36[9] = bVar28;
                auVar36[10] = bVar29;
                auVar36[0xb] = bVar30;
                auVar36[0xc] = bVar31;
                auVar36[0xd] = bVar32;
                auVar36[0xe] = bVar33;
                auVar36[0xf] = bVar34;
                bVar35 = NEON_umaxv(auVar36,1);
                lVar2 = lVar15 + 0x10;
                if ((bVar35 & 1) != 0) break;
                bVar12 = lVar15 != -0x20;
                puVar16 = puVar17;
                lVar15 = lVar2;
              } while (bVar12);
              auVar8[8] = bVar27 & 1;
              auVar8._0_8_ = CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,
                                                  CONCAT13(cVar22,CONCAT12(cVar21,CONCAT11(cVar20,
                                                  cVar19))))))) & 0x8040201008040201;
              auVar8[9] = bVar28 & 2;
              auVar8[10] = bVar29 & 4;
              auVar8[0xb] = bVar30 & 8;
              auVar8[0xc] = bVar31 & 0x10;
              auVar8[0xd] = bVar32 & 0x20;
              auVar8[0xe] = bVar33 & 0x40;
              auVar8[0xf] = bVar34 & 0x80;
              auVar9[8] = bVar27 & 1;
              auVar9._0_8_ = CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,
                                                  CONCAT13(cVar22,CONCAT12(cVar21,CONCAT11(cVar20,
                                                  cVar19))))))) & 0x8040201008040201;
              auVar9[9] = bVar28 & 2;
              auVar9[10] = bVar29 & 4;
              auVar9[0xb] = bVar30 & 8;
              auVar9[0xc] = bVar31 & 0x10;
              auVar9[0xd] = bVar32 & 0x20;
              auVar9[0xe] = bVar33 & 0x40;
              auVar9[0xf] = bVar34 & 0x80;
              auVar36 = NEON_ext(auVar8,auVar9,8,1);
              if ((ushort)((CONCAT11(auVar36[0],cVar19) & 0xff01) +
                           (CONCAT11(auVar36[1],cVar20) & 0xff02) +
                           (CONCAT11(auVar36[2],cVar21) & 0xff04) +
                           (CONCAT11(auVar36[3],cVar22) & 0xff08) +
                           (CONCAT11(auVar36[4],cVar23) & 0xff10) +
                           (CONCAT11(auVar36[5],cVar24) & 0xff20) +
                           (CONCAT11(auVar36[6],cVar25) & 0xff40) +
                          (CONCAT11(auVar36[7],cVar26) & 0xff80)) == 0) {
                lVar15 = 0;
                plVar13 = &lStack_58;
              }
              else {
                auVar3[8] = bVar27 & 8;
                auVar3._0_8_ = CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,
                                                  CONCAT13(cVar22,CONCAT12(cVar21,CONCAT11(cVar20,
                                                  cVar19))))))) & 0x90a0b0c0d0e0f10;
                auVar3[9] = bVar28 & 7;
                auVar3[10] = bVar29 & 6;
                auVar3[0xb] = bVar30 & 5;
                auVar3[0xc] = bVar31 & 4;
                auVar3[0xd] = bVar32 & 3;
                auVar3[0xe] = bVar33 & 2;
                auVar3[0xf] = bVar34 & 1;
                cVar19 = NEON_umaxv(auVar3,1);
                lVar15 = -(lVar2 + (ulong)(byte)(0x10U - cVar19));
                plVar13 = (long *)((long)puVar17 + (ulong)(byte)(0x10U - cVar19));
              }
              FUN_10ae45668(plVar13,(long)&uStack_168 + 3,lVar15);
              if (iVar18 == 7) goto LAB_10ae511a8;
              puVar16 = &uStack_168;
              lVar15 = -0x110;
              do {
                puVar17 = puVar16 + 2;
                uVar7 = puVar16[3];
                uVar6 = *puVar17;
                cVar19 = -((char)uVar6 == '\0');
                cVar20 = -((char)((ulong)uVar6 >> 8) == '\0');
                cVar21 = -((char)((ulong)uVar6 >> 0x10) == '\0');
                cVar22 = -((char)((ulong)uVar6 >> 0x18) == '\0');
                cVar23 = -((char)((ulong)uVar6 >> 0x20) == '\0');
                cVar24 = -((char)((ulong)uVar6 >> 0x28) == '\0');
                cVar25 = -((char)((ulong)uVar6 >> 0x30) == '\0');
                cVar26 = -((char)((ulong)uVar6 >> 0x38) == '\0');
                bVar27 = -((char)uVar7 == '\0');
                bVar28 = -((char)((ulong)uVar7 >> 8) == '\0');
                bVar29 = -((char)((ulong)uVar7 >> 0x10) == '\0');
                bVar30 = -((char)((ulong)uVar7 >> 0x18) == '\0');
                bVar31 = -((char)((ulong)uVar7 >> 0x20) == '\0');
                bVar32 = -((char)((ulong)uVar7 >> 0x28) == '\0');
                bVar33 = -((char)((ulong)uVar7 >> 0x30) == '\0');
                bVar34 = -((char)((ulong)uVar7 >> 0x38) == '\0');
                auVar4[1] = cVar20;
                auVar4[0] = cVar19;
                auVar4[2] = cVar21;
                auVar4[3] = cVar22;
                auVar4[4] = cVar23;
                auVar4[5] = cVar24;
                auVar4[6] = cVar25;
                auVar4[7] = cVar26;
                auVar4[8] = bVar27;
                auVar4[9] = bVar28;
                auVar4[10] = bVar29;
                auVar4[0xb] = bVar30;
                auVar4[0xc] = bVar31;
                auVar4[0xd] = bVar32;
                auVar4[0xe] = bVar33;
                auVar4[0xf] = bVar34;
                bVar35 = NEON_umaxv(auVar4,1);
                lVar2 = lVar15 + 0x10;
                if ((bVar35 & 1) != 0) break;
                bVar12 = lVar15 != -0x20;
                puVar16 = puVar17;
                lVar15 = lVar2;
              } while (bVar12);
              auVar10[8] = bVar27 & 1;
              auVar10._0_8_ =
                   CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,CONCAT13(cVar22,
                                                  CONCAT12(cVar21,CONCAT11(cVar20,cVar19))))))) &
                   0x8040201008040201;
              auVar10[9] = bVar28 & 2;
              auVar10[10] = bVar29 & 4;
              auVar10[0xb] = bVar30 & 8;
              auVar10[0xc] = bVar31 & 0x10;
              auVar10[0xd] = bVar32 & 0x20;
              auVar10[0xe] = bVar33 & 0x40;
              auVar10[0xf] = bVar34 & 0x80;
              auVar11[8] = bVar27 & 1;
              auVar11._0_8_ =
                   CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,CONCAT13(cVar22,
                                                  CONCAT12(cVar21,CONCAT11(cVar20,cVar19))))))) &
                   0x8040201008040201;
              auVar11[9] = bVar28 & 2;
              auVar11[10] = bVar29 & 4;
              auVar11[0xb] = bVar30 & 8;
              auVar11[0xc] = bVar31 & 0x10;
              auVar11[0xd] = bVar32 & 0x20;
              auVar11[0xe] = bVar33 & 0x40;
              auVar11[0xf] = bVar34 & 0x80;
              auVar36 = NEON_ext(auVar10,auVar11,8,1);
              if ((ushort)((CONCAT11(auVar36[0],cVar19) & 0xff01) +
                           (CONCAT11(auVar36[1],cVar20) & 0xff02) +
                           (CONCAT11(auVar36[2],cVar21) & 0xff04) +
                           (CONCAT11(auVar36[3],cVar22) & 0xff08) +
                           (CONCAT11(auVar36[4],cVar23) & 0xff10) +
                           (CONCAT11(auVar36[5],cVar24) & 0xff20) +
                           (CONCAT11(auVar36[6],cVar25) & 0xff40) +
                          (CONCAT11(auVar36[7],cVar26) & 0xff80)) == 0) {
                lVar15 = 0;
                plVar13 = &lStack_58;
              }
              else {
                auVar5[8] = bVar27 & 8;
                auVar5._0_8_ = CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,
                                                  CONCAT13(cVar22,CONCAT12(cVar21,CONCAT11(cVar20,
                                                  cVar19))))))) & 0x90a0b0c0d0e0f10;
                auVar5[9] = bVar28 & 7;
                auVar5[10] = bVar29 & 6;
                auVar5[0xb] = bVar30 & 5;
                auVar5[0xc] = bVar31 & 4;
                auVar5[0xd] = bVar32 & 3;
                auVar5[0xe] = bVar33 & 2;
                auVar5[0xf] = bVar34 & 1;
                cVar19 = NEON_umaxv(auVar5,1);
                lVar15 = -(lVar2 + (ulong)(byte)(0x10U - cVar19));
                plVar13 = (long *)((long)puVar17 + (ulong)(byte)(0x10U - cVar19));
              }
              FUN_10ae45668(plVar13,&UNK_10f6ce7c7,lVar15);
              iVar18 = iVar18 + 1;
            } while( true );
          }
          if (**(int **)(param_2 + 2) != 4) {
            puVar14 = &UNK_10f6ce7c9;
            param_2 = (int *)&UNK_10f6ce7d4;
            puVar16 = (undefined8 *)0x9;
            goto LAB_10ae511c4;
          }
          func_0x000107c2b540(auStack_158,0x100,&UNK_10f6ce7b8);
LAB_10ae511a8:
          puVar16 = auStack_158;
          _strlen(puVar16);
          puVar14 = &UNK_10f6ce7c9;
        }
        else {
          if (iVar18 != 8) goto LAB_10ae511dc;
          func_0x00010ae4599c(auStack_158,0x100,*(undefined8 *)(param_2 + 2),0);
          puVar16 = auStack_158;
          _strlen(puVar16);
          puVar14 = &UNK_10f6ce7de;
        }
LAB_10ae511bc:
        param_2 = (int *)auStack_158;
      }
      goto LAB_10ae511c4;
    }
    if (iVar18 == 4) {
      lVar15 = *(long *)(param_2 + 2);
      param_2 = (int *)auStack_158;
      FUN_10ae4c0d4(lVar15,param_2,0x100);
      param_3 = 0;
      if (lVar15 != 0) {
        puVar16 = auStack_158;
        _strlen(puVar16);
        puVar14 = &UNK_10f6ce7b0;
        goto LAB_10ae511bc;
      }
    }
    else if (iVar18 == 5) {
      puVar14 = &UNK_10f6ce795;
      goto LAB_10ae510f0;
    }
  }
LAB_10ae511dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  iVar18 = *param_2;
  if (iVar18 < 4) {
    if (iVar18 < 2) {
      if (iVar18 != 0) {
        if (iVar18 != 1) {
          return 1;
        }
        puVar14 = &UNK_10f6ce836;
LAB_10ae51480:
        FUN_10ae1ec34(param_3,puVar14);
        FUN_10ae1d6c8(param_3,*(undefined8 *)(param_2 + 2));
        return 1;
      }
      puVar14 = &UNK_10f6ce7ec;
    }
    else {
      if (iVar18 == 2) {
        puVar14 = &UNK_10f6ce83d;
        goto LAB_10ae51480;
      }
      if (iVar18 != 3) {
        return 1;
      }
      puVar14 = &UNK_10f6ce804;
    }
  }
  else if (iVar18 < 6) {
    if (iVar18 == 4) {
      FUN_10ae1ec34(param_3,&UNK_10f6ce847);
      func_0x000107c2b5c8(param_3,*(undefined8 *)(param_2 + 2),0,0x82031f);
      return 1;
    }
    if (iVar18 != 5) {
      return 1;
    }
    puVar14 = &UNK_10f6ce81b;
  }
  else {
    if (iVar18 == 6) {
      puVar14 = &UNK_10f6ce842;
      goto LAB_10ae51480;
    }
    if (iVar18 != 7) {
      if (iVar18 != 8) {
        return 1;
      }
      FUN_10ae1ec34(param_3,&UNK_10f6ce7de);
      FUN_10ae1d5a0(param_3,*(undefined8 *)(param_2 + 2));
      return 1;
    }
    if (**(int **)(param_2 + 2) == 0x10) {
      FUN_10ae1ec34(param_3,&UNK_10f6ce7c9);
      iVar18 = 0;
      do {
        FUN_10ae1ec34(param_3,&UNK_10f6ce868);
        iVar18 = iVar18 + 2;
      } while (iVar18 != 0x10);
      func_0x000107c2b1d4(param_3,&UNK_10f6ce86c,1);
      return 1;
    }
    if (**(int **)(param_2 + 2) == 4) {
      puVar14 = &UNK_10f6ce851;
    }
    else {
      puVar14 = &UNK_10f6ce86e;
    }
  }
  FUN_10ae1ec34(param_3,puVar14);
  return 1;
}



/* Entry: 10ae513a0; end: 10ae5168b;  */

undefined8 FUN_10ae513a0(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 != 1) {
          return 1;
        }
        puVar1 = &UNK_10f6ce836;
LAB_10ae51480:
        FUN_10ae1ec34(param_1,puVar1);
        FUN_10ae1d6c8(param_1,*(undefined8 *)(param_2 + 2));
        return 1;
      }
      puVar1 = &UNK_10f6ce7ec;
    }
    else {
      if (iVar2 == 2) {
        puVar1 = &UNK_10f6ce83d;
        goto LAB_10ae51480;
      }
      if (iVar2 != 3) {
        return 1;
      }
      puVar1 = &UNK_10f6ce804;
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      FUN_10ae1ec34(param_1,&UNK_10f6ce847);
      func_0x000107c2b5c8(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
      return 1;
    }
    if (iVar2 != 5) {
      return 1;
    }
    puVar1 = &UNK_10f6ce81b;
  }
  else {
    if (iVar2 == 6) {
      puVar1 = &UNK_10f6ce842;
      goto LAB_10ae51480;
    }
    if (iVar2 != 7) {
      if (iVar2 != 8) {
        return 1;
      }
      FUN_10ae1ec34(param_1,&UNK_10f6ce7de);
      FUN_10ae1d5a0(param_1,*(undefined8 *)(param_2 + 2));
      return 1;
    }
    if (**(int **)(param_2 + 2) == 0x10) {
      FUN_10ae1ec34(param_1,&UNK_10f6ce7c9);
      iVar2 = 0;
      do {
        FUN_10ae1ec34(param_1,&UNK_10f6ce868);
        iVar2 = iVar2 + 2;
      } while (iVar2 != 0x10);
      func_0x000107c2b1d4(param_1,&UNK_10f6ce86c,1);
      return 1;
    }
    if (**(int **)(param_2 + 2) == 4) {
      puVar1 = &UNK_10f6ce851;
    }
    else {
      puVar1 = &UNK_10f6ce86e;
    }
  }
  FUN_10ae1ec34(param_1,puVar1);
  return 1;
}



/* Entry: 10ae5168c; end: 10ae5180f;  */

uint * FUN_10ae5168c(uint *param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  uint *puVar1;
  uint **ppuVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  uint *puStack_58;
  
  lVar11 = *(long *)(param_4 + 0x10);
  if (lVar11 == 0) {
    func_0x000107c2b29c(0x14,0,0x89,&UNK_10f6ce883,0x232);
    return (uint *)0x0;
  }
  uVar12 = *(undefined8 *)(param_4 + 8);
  uVar7 = uVar12;
  func_0x00010ae575cc(uVar12,&UNK_10f6ce7a2);
  if ((int)uVar7 == 0) {
    uVar8 = 1;
  }
  else {
    uVar7 = uVar12;
    func_0x00010ae575cc(uVar12,&UNK_10f6ce7ac);
    if ((int)uVar7 == 0) {
      uVar8 = 6;
    }
    else {
      uVar7 = uVar12;
      func_0x00010ae575cc(uVar12,&UNK_10f6ce7a8);
      if ((int)uVar7 == 0) {
        uVar8 = 2;
      }
      else {
        uVar7 = uVar12;
        func_0x00010ae575cc(uVar12,&UNK_10f6ce900);
        if ((int)uVar7 == 0) {
          uVar8 = 8;
        }
        else {
          uVar7 = uVar12;
          func_0x00010ae575cc(uVar12,&UNK_10f6ce904);
          if ((int)uVar7 == 0) {
            uVar8 = 7;
          }
          else {
            uVar7 = uVar12;
            func_0x00010ae575cc(uVar12,&UNK_10f6ce907);
            if ((int)uVar7 == 0) {
              uVar8 = 4;
            }
            else {
              func_0x00010ae575cc(uVar12,&UNK_10f6ce90f);
              if ((int)uVar12 != 0) {
                func_0x000107c2b29c(0x14,0,0xa0,&UNK_10f6ce883,0x245);
                func_0x000107c2b2a0(2);
                return (uint *)0x0;
              }
              uVar8 = 0;
            }
          }
        }
      }
    }
  }
  if (lVar11 == 0) {
    uVar7 = 0x89;
    uVar12 = 0x1d4;
LAB_10ae519b0:
    func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar12);
    return (uint *)0x0;
  }
  puVar10 = param_1;
  if (param_1 == (uint *)0x0) {
    puStack_58 = (uint *)0x0;
    ppuVar2 = &puStack_58;
    func_0x000107c34f34(ppuVar2,&DAT_110c88cd8,0);
    if (((int)ppuVar2 == 0) || (puVar10 = puStack_58, puStack_58 == (uint *)0x0)) {
      uVar7 = 0x41;
      uVar12 = 0x1dd;
      goto LAB_10ae519b0;
    }
  }
  if (uVar8 < 6) {
    if (uVar8 - 1 < 2) goto LAB_10ae5194c;
    if (uVar8 == 0) {
      lVar4 = lVar11;
      _strchr(lVar11,0x3b);
      if (lVar4 != 0) {
        puStack_58 = (uint *)0x0;
        ppuVar2 = &puStack_58;
        func_0x000107c34f34(ppuVar2,&DAT_110c88ab0,0);
        puVar1 = (uint *)0x0;
        if ((int)ppuVar2 != 0) {
          puVar1 = puStack_58;
        }
        *(uint **)(puVar10 + 2) = puVar1;
        if (puVar1 != (uint *)0x0) {
          puStack_58 = *(uint **)(puStack_58 + 2);
          func_0x000107c2b1bc(&puStack_58,&DAT_110c7b9f0,0);
          lVar5 = lVar4 + 1;
          FUN_10ae48eec(lVar5,param_3);
          *(long *)(*(long *)(puVar10 + 2) + 8) = lVar5;
          if ((lVar5 != 0) &&
             (uVar14 = (ulong)(((int)lVar4 - (int)lVar11) + 1), uVar14 < 0xfffffffffffffff8)) {
            puVar6 = (ulong *)(uVar14 + 8);
            _malloc();
            if (puVar6 != (ulong *)0x0) {
              puVar13 = puVar6 + 1;
              *puVar6 = uVar14;
              FUN_10ae45668(puVar13,lVar11,uVar14);
              puVar6 = puVar13;
              FUN_10ae45864(puVar13,0);
              **(long **)(puVar10 + 2) = (long)puVar6;
              func_0x000107c2b534(puVar13);
              if (**(long **)(puVar10 + 2) != 0) goto LAB_10ae51aa0;
            }
          }
        }
      }
      uVar7 = 0x94;
      uVar12 = 0x20a;
    }
    else if (uVar8 == 4) {
      puStack_58 = (uint *)0x0;
      ppuVar2 = &puStack_58;
      func_0x000107c34f34(ppuVar2,&DAT_110c87418,0);
      puVar3 = puStack_58;
      puVar1 = (uint *)0x0;
      if ((int)ppuVar2 != 0) {
        puVar1 = puStack_58;
      }
      if (puVar1 == (uint *)0x0) {
LAB_10ae51b10:
        puStack_58 = puVar1;
        func_0x000107c2b1bc(&puStack_58,&DAT_110c87418,0);
      }
      else {
        lVar4 = param_3;
        FUN_10ae521f0(param_3,lVar11);
        if (lVar4 == 0) {
          func_0x000107c2b29c(0x14,0,0x99,&UNK_10f6ce883,0x273);
          func_0x000107c2b2a0(2);
          goto LAB_10ae51b10;
        }
        FUN_10ae57e60(puVar3,lVar4,0x1001);
        if ((int)puVar3 != 0) {
          *(uint **)(puVar10 + 2) = puVar1;
          pcVar9 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(*(undefined8 *)(param_3 + 0x30),lVar4);
          }
          goto LAB_10ae51aa0;
        }
        puStack_58 = puVar1;
        func_0x000107c2b1bc(&puStack_58,&DAT_110c87418,0);
        pcVar9 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(*(undefined8 *)(param_3 + 0x30),lVar4);
        }
      }
      uVar7 = 0x69;
      uVar12 = 0x203;
    }
    else {
LAB_10ae519b8:
      uVar7 = 0xa1;
      uVar12 = 0x20f;
    }
  }
  else {
    if (uVar8 != 6) {
      if (uVar8 == 7) {
        if (param_5 == 0) {
          FUN_10ae57c24();
        }
        else {
          FUN_10ae57cc0();
        }
        *(long *)(puVar10 + 2) = lVar11;
        if (lVar11 != 0) goto LAB_10ae51aa0;
        uVar7 = 100;
        uVar12 = 0x1fb;
      }
      else {
        if (uVar8 != 8) goto LAB_10ae519b8;
        FUN_10ae45864(lVar11,0);
        if (lVar11 != 0) {
          *(long *)(puVar10 + 2) = lVar11;
          goto LAB_10ae51aa0;
        }
        uVar7 = 0x65;
        uVar12 = 0x1ed;
      }
      func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar12);
      func_0x000107c2b2a0(2);
      goto joined_r0x00010ae51ad8;
    }
LAB_10ae5194c:
    lVar4 = 0x16;
    func_0x000107c2b1ac();
    *(long *)(puVar10 + 2) = lVar4;
    if (lVar4 != 0) {
      lVar5 = lVar11;
      _strlen(lVar11);
      func_0x000107c2b1a4(lVar4,lVar11,lVar5);
      if ((int)lVar4 != 0) {
LAB_10ae51aa0:
        *puVar10 = uVar8;
        return puVar10;
      }
    }
    uVar7 = 0x41;
    uVar12 = 0x217;
  }
  func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar12);
joined_r0x00010ae51ad8:
  if (param_1 == (uint *)0x0) {
    puStack_58 = puVar10;
    func_0x000107c2b1bc(&puStack_58,&DAT_110c88cd8,0);
  }
  return (uint *)0x0;
}



/* Entry: 10ae51810; end: 10ae51c1f;  */

int * FUN_10ae51810(int *param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                   int param_6)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uVar12;
  int *piStack_58;
  
  if (param_5 == 0) {
    uVar7 = 0x89;
    uVar8 = 0x1d4;
LAB_10ae519b0:
    func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar8);
    return (int *)0x0;
  }
  piVar10 = param_1;
  if (param_1 == (int *)0x0) {
    piStack_58 = (int *)0x0;
    ppiVar2 = &piStack_58;
    func_0x000107c34f34(ppiVar2,&DAT_110c88cd8,0);
    if (((int)ppiVar2 == 0) || (piVar10 = piStack_58, piStack_58 == (int *)0x0)) {
      uVar7 = 0x41;
      uVar8 = 0x1dd;
      goto LAB_10ae519b0;
    }
  }
  if (param_4 < 6) {
    if (param_4 - 1U < 2) goto LAB_10ae5194c;
    if (param_4 == 0) {
      lVar4 = param_5;
      _strchr(param_5,0x3b);
      if (lVar4 != 0) {
        piStack_58 = (int *)0x0;
        ppiVar2 = &piStack_58;
        func_0x000107c34f34(ppiVar2,&DAT_110c88ab0,0);
        piVar1 = (int *)0x0;
        if ((int)ppiVar2 != 0) {
          piVar1 = piStack_58;
        }
        *(int **)(piVar10 + 2) = piVar1;
        if (piVar1 != (int *)0x0) {
          piStack_58 = *(int **)(piStack_58 + 2);
          func_0x000107c2b1bc(&piStack_58,&DAT_110c7b9f0,0);
          lVar5 = lVar4 + 1;
          FUN_10ae48eec(lVar5,param_3);
          *(long *)(*(long *)(piVar10 + 2) + 8) = lVar5;
          if ((lVar5 != 0) &&
             (uVar12 = (ulong)(((int)lVar4 - (int)param_5) + 1), uVar12 < 0xfffffffffffffff8)) {
            puVar6 = (ulong *)(uVar12 + 8);
            _malloc();
            if (puVar6 != (ulong *)0x0) {
              puVar11 = puVar6 + 1;
              *puVar6 = uVar12;
              FUN_10ae45668(puVar11,param_5,uVar12);
              puVar6 = puVar11;
              FUN_10ae45864(puVar11,0);
              **(long **)(piVar10 + 2) = (long)puVar6;
              func_0x000107c2b534(puVar11);
              if (**(long **)(piVar10 + 2) != 0) goto LAB_10ae51aa0;
            }
          }
        }
      }
      uVar7 = 0x94;
      uVar8 = 0x20a;
    }
    else if (param_4 == 4) {
      piStack_58 = (int *)0x0;
      ppiVar2 = &piStack_58;
      func_0x000107c34f34(ppiVar2,&DAT_110c87418,0);
      piVar3 = piStack_58;
      piVar1 = (int *)0x0;
      if ((int)ppiVar2 != 0) {
        piVar1 = piStack_58;
      }
      if (piVar1 == (int *)0x0) {
LAB_10ae51b10:
        piStack_58 = piVar1;
        func_0x000107c2b1bc(&piStack_58,&DAT_110c87418,0);
      }
      else {
        lVar4 = param_3;
        FUN_10ae521f0(param_3,param_5);
        if (lVar4 == 0) {
          func_0x000107c2b29c(0x14,0,0x99,&UNK_10f6ce883,0x273);
          func_0x000107c2b2a0(2);
          goto LAB_10ae51b10;
        }
        FUN_10ae57e60(piVar3,lVar4,0x1001);
        if ((int)piVar3 != 0) {
          *(int **)(piVar10 + 2) = piVar1;
          pcVar9 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(*(undefined8 *)(param_3 + 0x30),lVar4);
          }
          goto LAB_10ae51aa0;
        }
        piStack_58 = piVar1;
        func_0x000107c2b1bc(&piStack_58,&DAT_110c87418,0);
        pcVar9 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(*(undefined8 *)(param_3 + 0x30),lVar4);
        }
      }
      uVar7 = 0x69;
      uVar8 = 0x203;
    }
    else {
LAB_10ae519b8:
      uVar7 = 0xa1;
      uVar8 = 0x20f;
    }
  }
  else {
    if (param_4 != 6) {
      if (param_4 == 7) {
        if (param_6 == 0) {
          FUN_10ae57c24();
        }
        else {
          FUN_10ae57cc0();
        }
        *(long *)(piVar10 + 2) = param_5;
        if (param_5 != 0) goto LAB_10ae51aa0;
        uVar7 = 100;
        uVar8 = 0x1fb;
      }
      else {
        if (param_4 != 8) goto LAB_10ae519b8;
        FUN_10ae45864(param_5,0);
        if (param_5 != 0) {
          *(long *)(piVar10 + 2) = param_5;
          goto LAB_10ae51aa0;
        }
        uVar7 = 0x65;
        uVar8 = 0x1ed;
      }
      func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar8);
      func_0x000107c2b2a0(2);
      goto joined_r0x00010ae51ad8;
    }
LAB_10ae5194c:
    lVar4 = 0x16;
    func_0x000107c2b1ac();
    *(long *)(piVar10 + 2) = lVar4;
    if (lVar4 != 0) {
      lVar5 = param_5;
      _strlen(param_5);
      func_0x000107c2b1a4(lVar4,param_5,lVar5);
      if ((int)lVar4 != 0) {
LAB_10ae51aa0:
        *piVar10 = param_4;
        return piVar10;
      }
    }
    uVar7 = 0x41;
    uVar8 = 0x217;
  }
  func_0x000107c2b29c(0x14,0,uVar7,&UNK_10f6ce883,uVar8);
joined_r0x00010ae51ad8:
  if (param_1 == (int *)0x0) {
    piStack_58 = piVar10;
    func_0x000107c2b1bc(&piStack_58,&DAT_110c88cd8,0);
  }
  return (int *)0x0;
}



/* Entry: 10ae51c20; end: 10ae51e0b;  */

undefined8 FUN_10ae51c20(int *param_1,undefined8 *param_2,int param_3)

{
  undefined4 **ppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puStack_68;
  
  if (param_1 == (int *)0x0) {
LAB_10ae51d84:
    func_0x000107c2b29c(0x14,0,0x91,&UNK_10f6ce883,0x183);
    lVar5 = 0;
LAB_10ae51dc4:
    puVar8 = (undefined4 *)0x0;
  }
  else {
    if (*param_1 == 1) {
      return 1;
    }
    plVar3 = *(long **)(param_1 + 4);
    if (plVar3 == (long *)0x0) {
      plVar3 = *(long **)(param_1 + 6);
      if (plVar3 == (long *)0x0) goto LAB_10ae51d84;
      lVar5 = 0x20;
    }
    else {
      lVar5 = 0x28;
    }
    plVar6 = *(long **)(*plVar3 + lVar5);
    plVar3 = (long *)0xffffffff;
    do {
      plVar7 = plVar6;
      func_0x000107c2b634(plVar6,&PTR_DAT_110c7d438,plVar3);
      if ((int)plVar7 < 0) {
        return 1;
      }
      if (((plVar6 == (long *)0x0) || (puVar4 = (ulong *)*plVar6, puVar4 == (ulong *)0x0)) ||
         (*puVar4 <= ((ulong)plVar7 & 0xffffffff))) {
        puVar8 = (undefined4 *)0x0;
LAB_10ae51cec:
        lVar5 = 0;
      }
      else {
        puVar8 = *(undefined4 **)(puVar4[1] + ((ulong)plVar7 & 0xffffffff) * 8);
        if (puVar8 == (undefined4 *)0x0) goto LAB_10ae51cec;
        lVar5 = *(long *)(puVar8 + 2);
      }
      FUN_10ae1de24();
      if (param_3 != 0) {
        func_0x00010ae4d9bc(plVar6,plVar7);
        puStack_68 = puVar8;
        func_0x000107c2b1bc(&puStack_68,&DAT_110c872e8,0);
        plVar7 = (long *)(ulong)((int)plVar7 - 1);
      }
      if (lVar5 == 0) {
LAB_10ae51da8:
        func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce883,0x198);
        goto LAB_10ae51dc4;
      }
      puStack_68 = (undefined4 *)0x0;
      ppuVar1 = &puStack_68;
      func_0x000107c34f34(ppuVar1,&DAT_110c88cd8,0);
      puVar8 = puStack_68;
      if (((int)ppuVar1 == 0) || (puStack_68 == (undefined4 *)0x0)) goto LAB_10ae51da8;
      *(long *)(puStack_68 + 2) = lVar5;
      *puStack_68 = 1;
      puVar2 = param_2;
      func_0x000107c2b5ac(param_2,puStack_68,*param_2);
      plVar3 = plVar7;
    } while (puVar2 != (undefined8 *)0x0);
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce883,0x19f);
    lVar5 = 0;
  }
  puStack_68 = puVar8;
  func_0x000107c2b1bc(&puStack_68,&DAT_110c88cd8,0);
  func_0x00010ae1de94(lVar5);
  return 0;
}



/* Entry: 10ae51e0c; end: 10ae51e5f;  */

undefined8 FUN_10ae51e0c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  FUN_10ae56a0c(&DAT_10f4085fa,*param_2,&uStack_28);
  FUN_10ae56d90(&DAT_10f6ce93d,*(undefined8 *)(param_2 + 2),&uStack_28);
  return uStack_28;
}



/* Entry: 10ae51e60; end: 10ae51fd3;  */

long FUN_10ae51e60(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_48;
  
  lStack_48 = 0;
  plVar1 = &lStack_48;
  func_0x000107c34f34(plVar1,&DAT_110c87bf0,0);
  lVar3 = lStack_48;
  if ((int)plVar1 == 0 || lStack_48 == 0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce945,0x70);
LAB_10ae51fb4:
    lVar3 = 0;
  }
  else if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_3[1] + uVar5 * 8);
      pcVar2 = *(char **)(lVar4 + 8);
      if (((*pcVar2 != 'C') || (pcVar2[1] != 'A')) || (pcVar2[2] != '\0')) {
        _strcmp(pcVar2,&DAT_10f6ce93d);
        if ((int)pcVar2 == 0) {
          FUN_10ae56f70(lVar4,lVar3 + 8);
          if ((int)lVar4 != 0) goto LAB_10ae51f24;
        }
        else {
          func_0x000107c2b29c(0x14,0,0x7b,&UNK_10f6ce945,0x7c);
          func_0x000107c2b2a0(6);
        }
LAB_10ae51f9c:
        lStack_48 = lVar3;
        func_0x000107c2b1bc(&lStack_48,&DAT_110c87bf0,0);
        goto LAB_10ae51fb4;
      }
      func_0x00010ae56dfc(lVar4,lVar3);
      if ((int)lVar4 == 0) goto LAB_10ae51f9c;
LAB_10ae51f24:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_3);
  }
  return lVar3;
}



/* Entry: 10ae51fd4; end: 10ae52077;  */

undefined8 FUN_10ae51fd4(long param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uStack_38;
  
  puVar5 = *(uint **)(param_1 + 0x60);
  lVar4 = *(long *)(puVar5 + 2);
  uStack_38 = param_3;
  while (lVar4 != 0) {
    uVar3 = *puVar5;
    uVar2 = uVar3 + 7;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    if ((((param_2 != (int *)0x0) && ((int)uVar2 >> 3 < *param_2)) && (*(long *)(param_2 + 2) != 0))
       && ((*(byte *)(*(long *)(param_2 + 2) + (long)((int)uVar2 >> 3)) >>
            (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) != 0)) {
      FUN_10ae5686c(lVar4,0,0,1,&uStack_38);
    }
    puVar1 = puVar5 + 8;
    puVar5 = puVar5 + 6;
    lVar4 = *(long *)puVar1;
  }
  return uStack_38;
}



/* Entry: 10ae52078; end: 10ae521ef;  */

long FUN_10ae52078(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar1 = 3;
  func_0x000107c2b1ac();
  if (lVar1 == 0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce9d5,0x78);
  }
  else if (param_3 != (ulong *)0x0) {
    uVar5 = 0;
    do {
      if (*param_3 <= uVar5) {
        return lVar1;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 8);
      if (lVar4 == 0) break;
      uVar3 = *(undefined8 *)(*(long *)(param_3[1] + uVar5 * 8) + 8);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
      while( true ) {
        uVar2 = *puVar6;
        _strcmp(uVar2,uVar3);
        if (((int)uVar2 == 0) || (_strcmp(lVar4,uVar3), (int)lVar4 == 0)) break;
        lVar4 = puVar6[2];
        puVar6 = puVar6 + 3;
        if (lVar4 == 0) goto LAB_10ae5212c;
      }
      lVar4 = lVar1;
      FUN_10ae1cb0c(lVar1,*(undefined4 *)(puVar6 + -2),1);
      if ((int)lVar4 == 0) {
        func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6ce9d5,0x81);
        goto LAB_10ae5217c;
      }
      uVar5 = uVar5 + 1;
    } while (puVar6[-1] != 0);
LAB_10ae5212c:
    func_0x000107c2b29c(0x14,0,0x9c,&UNK_10f6ce9d5,0x89);
    func_0x000107c2b2a0(6);
LAB_10ae5217c:
    func_0x000107c2b534(*(undefined8 *)(lVar1 + 8));
    func_0x000107c2b534(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10ae521f0; end: 10ae5223f;  */

long FUN_10ae521f0(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ae5220c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return lVar1;
  }
  func_0x000107c2b29c(0x14,0,0x93,&UNK_10f6cebe1,0x198);
  return 0;
}



/* Entry: 10ae52240; end: 10ae52fb3;  */

undefined8 FUN_10ae52240(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar5 = 0;
    do {
      puVar6 = *(undefined8 **)(param_2[1] + uVar5 * 8);
      FUN_10ae1ec34(param_3,&UNK_10f6cec9b);
      FUN_10ae1d5a0(param_3,*puVar6);
      func_0x000107c2b1d4(param_3,&DAT_10f68f57e,1);
      puVar9 = (ulong *)puVar6[1];
      if ((puVar9 != (ulong *)0x0) && (*puVar9 != 0)) {
        uVar8 = 0;
        do {
          puVar6 = *(undefined8 **)(puVar9[1] + uVar8 * 8);
          iVar1 = (int)*puVar6;
          func_0x000107c2b550();
          if (iVar1 == 0xa5) {
            FUN_10ae1ec34(param_3,&UNK_10f6cedd2);
            plVar12 = (long *)puVar6[1];
            lVar7 = *plVar12;
            if (lVar7 != 0) {
              FUN_10ae1ec34(param_3,&UNK_10f6cedfa);
              FUN_10ae1ec34(param_3,&UNK_10f6cee11);
              puVar4 = *(ulong **)(lVar7 + 8);
              if (puVar4 != (ulong *)0x0) {
                uVar11 = 0;
                do {
                  if (*puVar4 <= uVar11) break;
                  lVar10 = *(long *)(puVar4[1] + uVar11 * 8);
                  if (uVar11 != 0) {
                    func_0x000107c2b1d4(param_3,&DAT_10f68f19e,2);
                  }
                  if (lVar10 == 0) {
                    func_0x000107c2b1d4(param_3,"(null)",6);
                  }
                  else {
                    lVar2 = 0;
                    FUN_10ae56bbc(0,lVar10);
                    if (lVar2 == 0) goto LAB_10ae524b0;
                    lVar10 = lVar2;
                    _strlen();
                    func_0x000107c2b1d4(param_3,lVar2,lVar10);
                    func_0x000107c2b534(lVar2);
                  }
                  uVar11 = uVar11 + 1;
                  puVar4 = *(ulong **)(lVar7 + 8);
                } while (puVar4 != (ulong *)0x0);
              }
              func_0x000107c2b1d4(param_3,&DAT_10f68f57e,1);
            }
            if (plVar12[1] != 0) {
              puVar3 = &UNK_10f6cee1f;
              goto LAB_10ae524ac;
            }
          }
          else if (iVar1 == 0xa4) {
            puVar3 = &UNK_10f6cedc4;
LAB_10ae524ac:
            FUN_10ae1ec34(param_3,puVar3);
          }
          else {
            FUN_10ae1ec34(param_3,&UNK_10f6cede3);
            FUN_10ae1d5a0(param_3,*puVar6);
            func_0x000107c2b1d4(param_3,&DAT_10f68f57e,1);
          }
LAB_10ae524b0:
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar9);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_2);
  }
  return 1;
}



/* Entry: 10ae52fb4; end: 10ae53013;  */

void FUN_10ae52fb4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c2b1bc(&uStack_18,&DAT_110c88090,0);
  return;
}



/* Entry: 10ae53014; end: 10ae536b3;  */

ulong * FUN_10ae53014(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puStack_68;
  
  puVar1 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar1 == (ulong *)0x0) {
    puVar9 = (undefined8 *)0x0;
LAB_10ae53280:
    puVar2 = (undefined8 *)0x0;
LAB_10ae53284:
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cee75,0x154);
LAB_10ae532a0:
    puStack_68 = puVar2;
    func_0x000107c2b1bc(&puStack_68,&DAT_110c88cd8,0);
    puStack_68 = puVar9;
    func_0x000107c2b1bc(&puStack_68,&DAT_110c88d38,0);
    if (puVar1 != (ulong *)0x0) {
      uVar13 = *puVar1;
      if (uVar13 != 0) {
        uVar10 = 0;
        do {
          puVar9 = *(undefined8 **)(puVar1[1] + uVar10 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            puStack_68 = puVar9;
            func_0x000107c2b1bc(&puStack_68,&DAT_110c88548,0);
            uVar13 = *puVar1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      func_0x000107c2b534(puVar1[1]);
      func_0x000107c2b534(puVar1);
      puVar1 = (ulong *)0x0;
    }
  }
  else if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
    uVar13 = 0;
    do {
      lVar8 = *(long *)(param_3[1] + uVar13 * 8);
      if (*(long *)(lVar8 + 0x10) == 0) {
        puVar4 = param_2;
        FUN_10ae521f0(param_2,*(undefined8 *)(lVar8 + 8));
        if (puVar4 != (ulong *)0x0) {
          puStack_68 = (undefined8 *)0x0;
          ppuVar5 = &puStack_68;
          func_0x000107c34f34(ppuVar5,&DAT_110c88548,0);
          puVar3 = puStack_68;
          if (((int)ppuVar5 != 0) && (puStack_68 != (undefined8 *)0x0)) {
            uVar10 = *puVar4;
            if (uVar10 != 0) {
              uVar12 = 0;
              do {
                if (uVar12 < uVar10) {
                  lVar8 = *(long *)(puVar4[1] + uVar12 * 8);
                }
                else {
                  lVar8 = 0;
                }
                puVar9 = puVar3;
                FUN_10ae53908(puVar3,param_2,lVar8);
                if ((int)puVar9 < 1) {
                  if ((int)puVar9 < 0) {
LAB_10ae53350:
                    puStack_68 = puVar3;
                    func_0x000107c2b1bc(&puStack_68,&DAT_110c88548,0);
                    goto LAB_10ae53368;
                  }
                  uVar11 = *(undefined8 *)(lVar8 + 8);
                  uVar6 = uVar11;
                  _strcmp(uVar11,&DAT_10f6ceeec);
                  if ((int)uVar6 == 0) {
                    puVar9 = puVar3 + 1;
                    FUN_10ae53bb4(puVar9,*(undefined8 *)(lVar8 + 0x10));
                    if ((int)puVar9 == 0) goto LAB_10ae53350;
                  }
                  else {
                    _strcmp(uVar11,&DAT_10f6ceef4);
                    if ((int)uVar11 == 0) {
                      puVar7 = param_2;
                      FUN_10ae53cd0(param_2,*(undefined8 *)(lVar8 + 0x10));
                      puVar3[2] = puVar7;
                      if (puVar7 == (ulong *)0x0) goto LAB_10ae53350;
                    }
                  }
                }
                uVar12 = uVar12 + 1;
                uVar10 = *puVar4;
              } while (uVar12 < uVar10);
            }
            if (*(code **)(param_2[5] + 0x18) != (code *)0x0) {
              (**(code **)(param_2[5] + 0x18))(param_2[6],puVar4);
            }
            puVar4 = puVar1;
            func_0x000107c2b5ac(puVar1,puVar3,*puVar1);
            if (puVar4 == (ulong *)0x0) {
              puVar9 = (undefined8 *)0x0;
              goto LAB_10ae533a0;
            }
            goto LAB_10ae53268;
          }
LAB_10ae53368:
          if (*(code **)(param_2[5] + 0x18) != (code *)0x0) {
            (**(code **)(param_2[5] + 0x18))(param_2[6],puVar4);
          }
        }
        puVar9 = (undefined8 *)0x0;
        puVar2 = (undefined8 *)0x0;
        goto LAB_10ae532a0;
      }
      puVar2 = (undefined8 *)0x0;
      FUN_10ae5168c(0,param_1,param_2,lVar8,0);
      if (puVar2 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_10ae532a0;
      }
      puStack_68 = (undefined8 *)0x0;
      ppuVar5 = &puStack_68;
      func_0x000107c34f34(ppuVar5,&DAT_110c88d38,0);
      puVar9 = puStack_68;
      if ((int)ppuVar5 == 0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_10ae53284;
      }
      if ((puStack_68 == (undefined8 *)0x0) ||
         (puVar3 = puStack_68, func_0x000107c2b5ac(puStack_68,puVar2,*puStack_68),
         puVar3 == (undefined8 *)0x0)) goto LAB_10ae53284;
      puStack_68 = (undefined8 *)0x0;
      ppuVar5 = &puStack_68;
      func_0x000107c34f34(ppuVar5,&DAT_110c88548,0);
      puVar3 = puStack_68;
      if ((int)ppuVar5 == 0) goto LAB_10ae53280;
      puVar2 = (undefined8 *)0x0;
      if (puStack_68 == (undefined8 *)0x0) goto LAB_10ae53284;
      puVar4 = puVar1;
      func_0x000107c2b5ac(puVar1,puStack_68,*puVar1);
      if (puVar4 == (ulong *)0x0) {
LAB_10ae533a0:
        puStack_68 = puVar3;
        func_0x000107c2b1bc(&puStack_68,&DAT_110c88548,0);
        goto LAB_10ae53280;
      }
      puStack_68 = (undefined8 *)0x0;
      ppuVar5 = &puStack_68;
      func_0x000107c34f34(ppuVar5,&DAT_110c88498,0);
      puVar2 = (undefined8 *)0x0;
      if ((int)ppuVar5 != 0) {
        puVar2 = puStack_68;
      }
      *puVar3 = puVar2;
      if (puVar2 == (undefined8 *)0x0) goto LAB_10ae53280;
      puStack_68[1] = puVar9;
      *(undefined4 *)*puVar3 = 0;
LAB_10ae53268:
      uVar13 = uVar13 + 1;
    } while (uVar13 < *param_3);
  }
  return puVar1;
}



/* Entry: 10ae536b4; end: 10ae53907;  */

undefined8 FUN_10ae536b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_2 != 0) {
    func_0x00010ae53dc4(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf090);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf0ab);
  }
  if (0 < (int)param_2[3]) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf0c4);
  }
  if (param_2[2] != 0) {
    FUN_10ae53e94(param_3,&UNK_10f6cf0d5,param_2[2],param_4);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf0e7);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf107);
  }
  return 1;
}



/* Entry: 10ae53908; end: 10ae53bb3;  */

undefined8 FUN_10ae53908(long *param_1,ulong *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puStack_48;
  
  uVar8 = *(undefined8 *)(param_3 + 8);
  uVar1 = uVar8;
  _strncmp(uVar8,&UNK_10f6ceefe,9);
  if ((int)uVar1 == 0) {
    FUN_10ae53cd0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (param_2 == (ulong *)0x0) {
      return 0xffffffff;
    }
    puVar6 = (ulong *)0x0;
LAB_10ae5397c:
    if (*param_1 == 0) {
      puStack_48 = (undefined8 *)0x0;
      ppuVar2 = &puStack_48;
      func_0x000107c34f34(ppuVar2,&DAT_110c88498,0);
      puVar5 = (undefined8 *)0x0;
      if ((int)ppuVar2 != 0) {
        puVar5 = puStack_48;
      }
      *param_1 = (long)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        if (param_2 == (ulong *)0x0) {
          *(undefined4 *)puStack_48 = 1;
          puVar5[1] = puVar6;
          return 1;
        }
        *(undefined4 *)puStack_48 = 0;
        puVar5[1] = param_2;
        return 1;
      }
    }
    else {
      func_0x000107c2b29c(0x14,0,0x6a,&UNK_10f6cee75,0x9f);
    }
    if (param_2 != (ulong *)0x0) {
      uVar4 = *param_2;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          puVar5 = *(undefined8 **)(param_2[1] + uVar7 * 8);
          if (puVar5 != (undefined8 *)0x0) {
            puStack_48 = puVar5;
            func_0x000107c2b1bc(&puStack_48,&DAT_110c88cd8,0);
            uVar4 = *param_2;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      func_0x000107c2b534(param_2[1]);
      func_0x000107c2b534(param_2);
    }
LAB_10ae539f8:
    if (puVar6 == (ulong *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    _strcmp(uVar8,&UNK_10f6cef07);
    if ((int)uVar8 != 0) {
      return 0;
    }
    puStack_48 = (undefined8 *)0x0;
    ppuVar2 = &puStack_48;
    func_0x000107c34f34(ppuVar2,&DAT_110c87418,0);
    puVar5 = puStack_48;
    if ((int)ppuVar2 == 0) {
      return 0xffffffff;
    }
    if (puStack_48 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    puVar6 = param_2;
    FUN_10ae521f0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (puVar6 == (ulong *)0x0) {
      func_0x000107c2b29c(0x14,0,0x99,&UNK_10f6cee75,0x89);
      return 0xffffffff;
    }
    puVar3 = puVar5;
    FUN_10ae57e60(puVar5,puVar6,0x1001);
    if (*(code **)(param_2[5] + 0x18) != (code *)0x0) {
      (**(code **)(param_2[5] + 0x18))(param_2[6],puVar6);
    }
    puVar6 = (ulong *)*puVar5;
    *puVar5 = 0;
    puStack_48 = puVar5;
    func_0x000107c2b1bc(&puStack_48,&DAT_110c87418,0);
    if ((int)puVar3 == 0) goto LAB_10ae539f8;
    if (puVar6 == (ulong *)0x0) {
      return 0xffffffff;
    }
    if (*puVar6 == 0) goto LAB_10ae53a40;
    if (*(int *)(*(long *)(puVar6[1] + *puVar6 * 8 + -8) + 0x10) == 0) {
      param_2 = (ulong *)0x0;
      goto LAB_10ae5397c;
    }
    func_0x000107c2b29c(0x14,0,0x7a,&UNK_10f6cee75,0x98);
  }
  uVar4 = *puVar6;
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      puVar5 = *(undefined8 **)(puVar6[1] + uVar7 * 8);
      if (puVar5 != (undefined8 *)0x0) {
        puStack_48 = puVar5;
        func_0x000107c2b1bc(&puStack_48,&DAT_110c872e8,0);
        uVar4 = *puVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
LAB_10ae53a40:
  func_0x000107c2b534(puVar6[1]);
  func_0x000107c2b534(puVar6);
  return 0xffffffff;
}



/* Entry: 10ae53bb4; end: 10ae53ccf;  */

undefined8 FUN_10ae53bb4(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  FUN_10ae56fe8();
  if ((param_2 == (ulong *)0x0) || (*param_1 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = *param_2;
      if (uVar2 <= uVar5) {
        uVar3 = 1;
        goto joined_r0x00010ae53cc8;
      }
      uVar3 = *(undefined8 *)(*(long *)(param_2[1] + uVar5 * 8) + 8);
      puVar4 = (undefined *)*param_1;
      ppuVar6 = &PTR_DAT_110c88758;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)0x3;
        func_0x000107c2b1ac();
        *param_1 = (long)puVar4;
        ppuVar7 = &PTR_DAT_110c88758;
        puVar1 = puVar4;
        goto joined_r0x00010ae53c2c;
      }
      while( true ) {
        puVar1 = ppuVar6[-2];
        _strcmp(puVar1,uVar3);
        if ((int)puVar1 == 0) break;
        ppuVar7 = ppuVar6 + 3;
        puVar1 = *ppuVar6;
joined_r0x00010ae53c2c:
        ppuVar6 = ppuVar7;
        if (puVar1 == (undefined *)0x0) goto LAB_10ae53c68;
      }
      FUN_10ae1cb0c(puVar4,*(undefined4 *)(ppuVar6 + -4),1);
      uVar5 = uVar5 + 1;
    } while ((int)puVar4 != 0);
LAB_10ae53c68:
    uVar3 = 0;
    uVar2 = *param_2;
joined_r0x00010ae53cc8:
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        if (*(long *)(param_2[1] + uVar5 * 8) != 0) {
          FUN_10ae569c0();
          uVar2 = *param_2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    func_0x000107c2b534(param_2[1]);
    func_0x000107c2b534(param_2);
  }
  return uVar3;
}



/* Entry: 10ae53cd0; end: 10ae53e93;  */

undefined8 FUN_10ae53cd0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((char)*param_2 == '@') {
    puVar1 = param_1;
    FUN_10ae521f0(param_1,(char *)((long)param_2 + 1));
  }
  else {
    puVar1 = param_2;
    FUN_10ae56fe8();
  }
  if (puVar1 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x99,&UNK_10f6cee75,0x6c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010ae51584(0,param_1,puVar1);
    if ((char)*param_2 == '@') {
      if (*(code **)(param_1[5] + 0x18) != (code *)0x0) {
        (**(code **)(param_1[5] + 0x18))(param_1[6],puVar1);
      }
    }
    else {
      uVar3 = *puVar1;
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          if (*(long *)(puVar1[1] + uVar4 * 8) != 0) {
            FUN_10ae569c0();
            uVar3 = *puVar1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      func_0x000107c2b534(puVar1[1]);
      func_0x000107c2b534(puVar1);
    }
  }
  return uVar2;
}



/* Entry: 10ae53e94; end: 10ae53fc3;  */

/* WARNING: Possible PIC construction at 0x00010ae53f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae53f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae53f70) */
/* WARNING: Removing unreachable block (ram,0x00010ae53f7c) */
/* WARNING: Removing unreachable block (ram,0x00010ae53f84) */
/* WARNING: Removing unreachable block (ram,0x00010ae53f48) */

void FUN_10ae53e94(long *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *unaff_x19;
  int *unaff_x20;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  char *pcStack_50;
  undefined *puVar6;
  
  puVar3 = &uStack_70;
  puVar11 = &stack0xfffffffffffffff0;
  uStack_58 = (ulong)((int)param_4 + 2);
  pcStack_50 = "";
  pcStack_68 = "";
  uStack_70 = param_4;
  uStack_60 = param_2;
  FUN_10ae1ec34(param_1,&UNK_10f6cf138);
  puVar10 = &DAT_10f601e8d;
  puVar6 = &UNK_110c88750;
  while( true ) {
    uVar2 = *(uint *)(puVar6 + -0x18);
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if ((((int)uVar1 >> 3 < *param_3) && (*(long *)(param_3 + 2) != 0)) &&
       ((*(byte *)(*(long *)(param_3 + 2) + (long)((int)uVar1 >> 3)) >>
         (ulong)((uVar2 ^ 0xffffffff) & 7) & 1) != 0)) break;
    puVar10 = *(undefined **)(puVar6 + 8);
    puVar6 = puVar6 + 0x18;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = &UNK_10f6cf143;
      iVar4 = 0xf6cf143;
      _strlen();
      puVar3 = (undefined8 *)register0x00000008;
      param_3 = unaff_x20;
      puVar11 = unaff_x29;
code_r0x000107c2b1d4:
      *(int **)((long)puVar3 + -0x20) = param_3;
      *(long **)((long)puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar3 + -0x10) = puVar11;
      *(undefined8 *)((long)puVar3 + -8) = unaff_x30;
      if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
         (pcVar9 = *(code **)(*param_1 + 0x10), pcVar9 == (code *)0x0)) {
        uVar7 = 0x73;
        uVar8 = 0xa4;
      }
      else {
        if ((int)param_1[1] != 0) {
          if (iVar4 < 1) {
            return;
          }
          plVar5 = param_1;
          (*pcVar9)(param_1,puVar10);
          if ((int)plVar5 < 1) {
            return;
          }
          param_1[7] = param_1[7] + ((ulong)plVar5 & 0xffffffff);
          return;
        }
        uVar7 = 0x72;
        uVar8 = 0xa8;
      }
      func_0x0001004d2c58(0x11,0,uVar7,&UNK_10f6c5149,uVar8);
      return;
    }
  }
  puVar6 = puVar10;
  _strlen();
  iVar4 = (int)puVar6;
  unaff_x30 = 0x10ae53f70;
  unaff_x19 = param_1;
  goto code_r0x000107c2b1d4;
}



/* Entry: 10ae53fc4; end: 10ae54083;  */

void FUN_10ae53fc4(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar2 = 0;
    do {
      FUN_10ae1ec34(param_1,&UNK_10f61b339);
      if (uVar2 < *param_2) {
        uVar1 = *(undefined8 *)(param_2[1] + uVar2 * 8);
      }
      else {
        uVar1 = 0;
      }
      FUN_10ae513a0(param_1,uVar1);
      func_0x000107c2b1d4(param_1,&DAT_10f68f57e,1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_2);
  }
  return;
}



/* Entry: 10ae54084; end: 10ae541b3;  */

ulong * FUN_10ae54084(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  ulong *puVar8;
  
  puVar8 = param_2;
  func_0x000107c34f2c(param_2,10);
  piVar6 = *(int **)(param_1 + 0x60);
  lVar5 = *(long *)(piVar6 + 2);
  if (lVar5 != 0) {
    if (puVar8 != (ulong *)(long)*piVar6) {
      plVar7 = (long *)(piVar6 + 8);
      do {
        lVar5 = *plVar7;
        if (lVar5 == 0) goto FUN_10ae56a3c;
        plVar1 = plVar7 + -1;
        plVar7 = plVar7 + 3;
      } while (puVar8 != (ulong *)(long)(int)*plVar1);
    }
    puVar8 = (ulong *)0x0;
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c613d0();
      uVar2 = lVar3 + 1;
      if (uVar2 < 0xfffffffffffffff8) {
        puVar4 = (ulong *)(lVar3 + 9);
        func_0x000107c610a0();
        puVar8 = puVar4;
        if (puVar4 != (ulong *)0x0) {
          puVar8 = puVar4 + 1;
          *puVar4 = uVar2;
          if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memcpy_11034c658)(puVar8,lVar5,uVar2);
            return puVar8;
          }
        }
      }
      else {
        puVar8 = (ulong *)0x0;
      }
    }
    return puVar8;
  }
FUN_10ae56a3c:
  if (param_2 == (ulong *)0x0) {
    puVar8 = (ulong *)0x0;
  }
  else {
    FUN_10ae1d4e0(param_2,0,10);
    if ((param_2 == (ulong *)0x0) || (puVar8 = param_2, FUN_10ae56ab4(), puVar8 == (ulong *)0x0)) {
      func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0xe9);
      puVar8 = (ulong *)0x0;
    }
    func_0x000107c2b31c(param_2);
  }
  return puVar8;
}



/* Entry: 10ae541b4; end: 10ae542f3;  */

ulong * FUN_10ae541b4(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar1 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf2b1,0x81);
  }
  else if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_3[1] + uVar5 * 8);
      lVar2 = *(long *)(lVar4 + 0x10);
      if (lVar2 == 0) {
        lVar2 = *(long *)(lVar4 + 8);
      }
      FUN_10ae45864(lVar2,0);
      uVar3 = *puVar1;
      if (lVar2 == 0) {
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            if (*(long *)(puVar1[1] + uVar5 * 8) != 0) {
              func_0x000107c2b17c();
              uVar3 = *puVar1;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3);
        }
        func_0x000107c2b534(puVar1[1]);
        func_0x000107c2b534(puVar1);
        func_0x000107c2b29c(0x14,0,0x81,&UNK_10f6cf2b1,0x8d);
        func_0x000107c2b2a0(6);
        return (ulong *)0x0;
      }
      func_0x000107c2b5ac(puVar1,lVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_3);
  }
  return puVar1;
}



/* Entry: 10ae542f4; end: 10ae54323;  */

void FUN_10ae542f4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c2b1bc(&uStack_18,&DAT_110c88d38,0);
  return;
}



/* Entry: 10ae54324; end: 10ae54497;  */

/* WARNING: Possible PIC construction at 0x00010ae54470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007344c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae5440c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007344cc) */
/* WARNING: Removing unreachable block (ram,0x00010ae54474) */
/* WARNING: Removing unreachable block (ram,0x00010ae54484) */
/* WARNING: Removing unreachable block (ram,0x00010ae54410) */

ulong FUN_10ae54324(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *unaff_x19;
  undefined8 *puVar14;
  undefined8 *unaff_x20;
  undefined8 *puVar15;
  int iVar16;
  undefined8 unaff_x21;
  int iVar17;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte abStack_62 [58];
  long lStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar16 = *param_1;
  if (iVar16 != *param_2) {
    return 0xffffffff;
  }
  if (iVar16 < 5) {
    if (iVar16 < 3) {
      if (iVar16 - 1U < 2) goto LAB_10ae543bc;
      if (iVar16 != 0) {
        return 0xffffffff;
      }
      if ((*(long **)(param_1 + 2) == (long *)0x0) || (*(long **)(param_2 + 2) == (long *)0x0)) {
        return 0xffffffff;
      }
      lVar8 = **(long **)(param_1 + 2);
      lVar11 = **(long **)(param_2 + 2);
    }
    else {
      if (iVar16 != 3) {
        if (iVar16 != 4) {
          return 0xffffffff;
        }
        lVar8 = *(long *)(param_1 + 2);
        lVar11 = *(long *)(param_2 + 2);
        if ((*(long *)(lVar8 + 0x18) == 0) || (*(int *)(lVar8 + 8) != 0)) {
          plVar4 = &lStack_28;
          lStack_28 = lVar8;
          func_0x0001004d0778(plVar4,0,&DAT_110c87418,0xffffffff,0,0);
          if ((int)plVar4 < 0) {
            return 0xfffffffe;
          }
        }
        if ((*(long *)(lVar11 + 0x18) == 0) || (*(int *)(lVar11 + 8) != 0)) {
          plVar4 = &lStack_28;
          lStack_28 = lVar11;
          func_0x0001004d0778(plVar4,0,&DAT_110c87418,0xffffffff,0,0);
          if ((int)plVar4 < 0) {
            return 0xfffffffe;
          }
        }
        iVar16 = *(int *)(lVar8 + 0x20);
        lVar12 = (long)iVar16;
        uVar13 = iVar16 - *(int *)(lVar11 + 0x20);
        if (uVar13 != 0) {
          return (ulong)uVar13;
        }
        if (iVar16 == 0) {
          return 0;
        }
        uVar9 = *(undefined8 *)(lVar11 + 0x18);
        uVar6 = *(ulong *)(lVar8 + 0x18);
        goto code_r0x000107c610b0;
      }
      piVar7 = *(int **)(param_1 + 2);
      piVar10 = *(int **)(param_2 + 2);
      if ((piVar7 == (int *)0x0) || (piVar10 == (int *)0x0)) {
        return 0xffffffff;
      }
      iVar16 = *piVar7;
      if (iVar16 != *piVar10) {
        return 0xffffffff;
      }
      if (iVar16 == 1) {
        return (ulong)(uint)(piVar7[2] - piVar10[2]);
      }
      if (iVar16 == 5) {
        return 0;
      }
      if (iVar16 != 6) {
        piVar7 = *(int **)(piVar7 + 2);
        piVar10 = *(int **)(piVar10 + 2);
        goto code_r0x000100734414;
      }
      lVar8 = *(long *)(piVar7 + 2);
      lVar11 = *(long *)(piVar10 + 2);
    }
code_r0x000100736a18:
    iVar16 = *(int *)(lVar8 + 0x14);
    lVar12 = (long)iVar16;
    uVar13 = iVar16 - *(int *)(lVar11 + 0x14);
    if (uVar13 != 0) {
      return (ulong)uVar13;
    }
    if (iVar16 == 0) {
      return 0;
    }
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    uVar6 = *(ulong *)(lVar8 + 0x18);
    goto code_r0x000107c610b0;
  }
  if (iVar16 < 7) {
    if (iVar16 != 5) {
      if (iVar16 != 6) {
        return 0xffffffff;
      }
      goto LAB_10ae543bc;
    }
    puVar14 = *(undefined8 **)(param_1 + 2);
    puVar15 = *(undefined8 **)(param_2 + 2);
    piVar7 = (int *)*puVar14;
    piVar10 = (int *)*puVar15;
    if (piVar7 == (int *)0x0) {
      if (piVar10 != (int *)0x0) {
        return 0xffffffff;
      }
      piVar7 = (int *)puVar14[1];
      piVar10 = (int *)puVar15[1];
    }
    else {
      if (piVar10 == (int *)0x0) {
        return 0xffffffff;
      }
      unaff_x30 = 0x10ae54410;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = puVar14;
      unaff_x20 = puVar15;
      unaff_x29 = puVar1;
    }
  }
  else {
    if (iVar16 != 7) {
      if (iVar16 != 8) {
        return 0xffffffff;
      }
      lVar8 = *(long *)(param_1 + 2);
      lVar11 = *(long *)(param_2 + 2);
      goto code_r0x000100736a18;
    }
LAB_10ae543bc:
    piVar7 = *(int **)(param_1 + 2);
    piVar10 = *(int **)(param_2 + 2);
  }
code_r0x000100734414:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar17 = *piVar10;
  *(undefined2 *)((long)register0x00000008 + -0x42) = 0;
  iVar16 = *piVar7;
  iVar2 = piVar7[1];
  if (iVar2 == 3) {
    piVar5 = piVar7;
    func_0x00010072d5c8(piVar7,(undefined1 *)((long)register0x00000008 + -0x41));
    iVar16 = (int)piVar5;
  }
  iVar3 = piVar10[1];
  if (iVar3 == 3) {
    piVar5 = piVar10;
    func_0x00010072d5c8(piVar10,(undefined1 *)((long)register0x00000008 + -0x42));
    iVar17 = (int)piVar5;
  }
  if (iVar16 < iVar17) {
code_r0x00010073447c:
    uVar6 = 0xffffffff;
  }
  else {
    if (iVar16 <= iVar17) {
      if (*(byte *)((long)register0x00000008 + -0x42) < *(byte *)((long)register0x00000008 + -0x41))
      goto code_r0x00010073447c;
      if (*(byte *)((long)register0x00000008 + -0x42) <= *(byte *)((long)register0x00000008 + -0x41)
         ) {
        if (iVar16 == 0) {
          uVar13 = 0xffffffff;
          if (iVar3 <= iVar2) {
            uVar13 = (uint)(iVar3 < iVar2);
          }
          return (ulong)uVar13;
        }
        lVar12 = (long)iVar16;
        uVar9 = *(undefined8 *)(piVar10 + 2);
        uVar6 = *(ulong *)(piVar7 + 2);
code_r0x000107c610b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_11034c650)(uVar6,uVar9,lVar12);
        return uVar6;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 10ae54498; end: 10ae5452f;  */

long * FUN_10ae54498(undefined8 param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_2 != (int *)0x0) && (lVar2 = (long)*param_2, *param_2 != 0)) {
    if ((uint)(lVar2 + 1) < 0xfffffff8) {
      plVar1 = (long *)(lVar2 + 9);
      _malloc();
      if (plVar1 != (long *)0x0) {
        plVar3 = plVar1 + 1;
        *plVar1 = lVar2 + 1;
        _memcpy(plVar3,*(undefined8 *)(param_2 + 2),lVar2);
        *(undefined1 *)((long)plVar3 + lVar2) = 0;
        return plVar3;
      }
    }
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf414,0x5f);
  }
  return (long *)0x0;
}



/* Entry: 10ae54530; end: 10ae545cb;  */

long FUN_10ae54530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    uVar4 = 0x7c;
    uVar5 = 0x6c;
  }
  else {
    lVar1 = 0x16;
    func_0x000107c2b1ac();
    if (lVar1 != 0) {
      lVar2 = param_3;
      _strlen(param_3);
      lVar3 = lVar1;
      func_0x000107c2b1a4(lVar1,param_3,lVar2);
      if ((int)lVar3 != 0) {
        return lVar1;
      }
      func_0x000107c2b534(*(undefined8 *)(lVar1 + 8));
      func_0x000107c2b534(lVar1);
    }
    uVar4 = 0x41;
    uVar5 = 0x77;
  }
  func_0x000107c2b29c(0x14,0,uVar4,&UNK_10f6cf414,uVar5);
  return 0;
}



/* Entry: 10ae545cc; end: 10ae54a43;  */

ulong * FUN_10ae545cc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long **pplVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined1 auStack_b8 [80];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  puVar9 = param_2;
  puVar13 = param_3;
  puVar4 = param_3;
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar17 = 0;
    puVar5 = param_3;
    do {
      puVar14 = *(undefined8 **)(param_2[1] + uVar17 * 8);
      puVar4 = param_1;
      FUN_10ae50ffc(param_1,puVar14[1],puVar5);
      if (puVar4 == (ulong *)0x0) {
LAB_10ae5472c:
        puVar3 = (ulong *)0x14;
        puVar9 = (ulong *)0x0;
        puVar13 = (ulong *)0x41;
        func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf4d0,0x97);
        puVar4 = (ulong *)0x0;
        if ((param_3 == (ulong *)0x0) && (puVar5 != (ulong *)0x0)) {
          uVar17 = *puVar5;
          if (uVar17 != 0) {
            uVar18 = 0;
            do {
              if (*(long *)(puVar5[1] + uVar18 * 8) != 0) {
                FUN_10ae569c0();
                uVar17 = *puVar5;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar17);
          }
          func_0x000107c2b534(puVar5[1]);
          func_0x000107c2b534(puVar5);
          puVar4 = (ulong *)0x0;
          puVar3 = puVar5;
        }
        goto LAB_10ae54794;
      }
      if (uVar17 < *puVar4) {
        lVar19 = *(long *)(puVar4[1] + uVar17 * 8);
      }
      else {
        lVar19 = 0;
      }
      func_0x00010ae4599c(auStack_b8,0x50,*puVar14,0);
      iVar1 = (int)auStack_b8;
      _strlen();
      iVar2 = (int)*(undefined8 *)(lVar19 + 8);
      _strlen();
      puVar13 = (ulong *)(long)(iVar2 + iVar1 + 5);
      puVar5 = puVar4;
      if ((ulong *)0xfffffffffffffff7 < puVar13) goto LAB_10ae5472c;
      puVar3 = puVar13 + 1;
      _malloc();
      if (puVar3 == (ulong *)0x0) goto LAB_10ae5472c;
      puVar15 = puVar3 + 1;
      *puVar3 = (ulong)puVar13;
      FUN_10ae45668(puVar15,auStack_b8,puVar13);
      func_0x00010ae456dc(puVar15,&DAT_10f415643,puVar13);
      puVar9 = *(ulong **)(lVar19 + 8);
      func_0x00010ae456dc(puVar15,puVar9);
      puVar3 = *(ulong **)(lVar19 + 8);
      func_0x000107c2b534(puVar3);
      *(ulong **)(lVar19 + 8) = puVar15;
      uVar17 = uVar17 + 1;
    } while (uVar17 < *param_2);
  }
  if (param_3 == (ulong *)0x0 && puVar4 == (ulong *)0x0) {
    puVar4 = (ulong *)0x0;
    func_0x000107c2b59c();
    puVar3 = puVar4;
  }
LAB_10ae54794:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar4 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf4d0,0xaa);
  }
  else if ((puVar13 != (ulong *)0x0) && (*puVar13 != 0)) {
    uVar17 = 0;
    do {
      lVar19 = *(long *)(puVar13[1] + uVar17 * 8);
      plStack_128 = (long *)0x0;
      pplVar6 = &plStack_128;
      func_0x000107c34f34(pplVar6,&DAT_110c89208,0);
      plVar12 = plStack_128;
      if (((int)pplVar6 == 0 || plStack_128 == (long *)0x0) ||
         (puVar5 = puVar4, func_0x000107c2b5ac(puVar4,plStack_128,*puVar4), puVar5 == (ulong *)0x0))
      {
        uVar10 = 0x41;
        uVar11 = 0xb1;
LAB_10ae54988:
        func_0x000107c2b29c(0x14,0,uVar10,&UNK_10f6cf4d0,uVar11);
LAB_10ae5498c:
        uVar17 = *puVar4;
        if (uVar17 != 0) {
          uVar18 = 0;
          do {
            plVar12 = *(long **)(puVar4[1] + uVar18 * 8);
            if (plVar12 != (long *)0x0) {
              plStack_128 = plVar12;
              func_0x000107c2b1bc(&plStack_128,&DAT_110c89208,0);
              uVar17 = *puVar4;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar17);
        }
        func_0x000107c2b534(puVar4[1]);
        func_0x000107c2b534(puVar4);
        return (ulong *)0x0;
      }
      lVar16 = *(long *)(lVar19 + 8);
      lVar7 = lVar16;
      _strchr(lVar16,0x3b);
      if (lVar7 == 0) {
        uVar10 = 0x87;
        uVar11 = 0xb6;
        goto LAB_10ae54988;
      }
      lStack_138 = lVar7 + 1;
      uStack_130 = *(undefined8 *)(lVar19 + 0x10);
      lVar8 = plVar12[1];
      FUN_10ae5168c(lVar8,puVar3,puVar9,auStack_140,0);
      if (lVar8 == 0) goto LAB_10ae5498c;
      uVar18 = (ulong)(((int)lVar7 - (int)lVar16) + 1);
      if (0xfffffffffffffff7 < uVar18) {
LAB_10ae54970:
        uVar10 = 0x41;
        uVar11 = 0xbf;
        goto LAB_10ae54988;
      }
      puVar5 = (ulong *)(uVar18 + 8);
      _malloc();
      if (puVar5 == (ulong *)0x0) goto LAB_10ae54970;
      puVar15 = puVar5 + 1;
      *puVar5 = uVar18;
      FUN_10ae45668(puVar15,*(undefined8 *)(lVar19 + 8),uVar18);
      puVar5 = puVar15;
      FUN_10ae45864(puVar15,0);
      *plVar12 = (long)puVar5;
      if (puVar5 == (ulong *)0x0) {
        func_0x000107c2b29c(0x14,0,0x65,&UNK_10f6cf4d0,0xc5);
        func_0x000107c2b2a0(2);
        func_0x000107c2b534(puVar15);
        goto LAB_10ae5498c;
      }
      func_0x000107c2b534(puVar15);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *puVar13);
  }
  return puVar4;
}



/* Entry: 10ae54a44; end: 10ae54a4b;  */

long * FUN_10ae54a44(long *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plStack_28;
  
  if (param_3 == (char *)0x0) {
    uVar6 = 0x7e;
    uVar7 = 0x102;
  }
  else {
    func_0x000107c2b318();
    cVar1 = *param_3;
    if (cVar1 == '-') {
      param_3 = param_3 + 1;
    }
    plStack_28 = param_1;
    if ((*param_3 == '0') && ((byte)(param_3[1] | 0x20U) == 0x78)) {
      param_3 = param_3 + 2;
      pplVar4 = &plStack_28;
      FUN_10ae1efc0(pplVar4,param_3);
      iVar3 = (int)pplVar4;
      plVar5 = plStack_28;
    }
    else {
      pplVar4 = &plStack_28;
      func_0x00010ae1f3fc(pplVar4,param_3);
      iVar3 = (int)pplVar4;
      plVar5 = plStack_28;
    }
    plStack_28 = plVar5;
    if ((iVar3 == 0) || (param_3[iVar3] != '\0')) {
      func_0x000107c2b31c(plVar5);
      func_0x000107c2b29c(0x14,0,0x66,&UNK_10f6cfb0c,0x119);
      return (long *)0x0;
    }
    if ((cVar1 == '-') && (lVar8 = (long)(int)plVar5[1], (int)plVar5[1] != 0)) {
      uVar9 = 0;
      puVar10 = (ulong *)*plVar5;
      do {
        uVar9 = *puVar10 | uVar9;
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar8 != 0);
      bVar2 = uVar9 == 0;
    }
    else {
      bVar2 = true;
    }
    func_0x00010ae1d3f4(plVar5,0,2);
    func_0x000107c2b31c(plStack_28);
    if (plVar5 != (long *)0x0) {
      if (bVar2) {
        return plVar5;
      }
      *(uint *)((long)plVar5 + 4) = *(uint *)((long)plVar5 + 4) | 0x100;
      return plVar5;
    }
    uVar6 = 0x67;
    uVar7 = 0x123;
  }
  func_0x000107c2b29c(0x14,0,uVar6,&UNK_10f6cfb0c,uVar7);
  return (long *)0x0;
}


