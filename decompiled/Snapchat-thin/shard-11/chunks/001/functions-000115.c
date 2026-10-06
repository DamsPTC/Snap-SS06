/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081faea0; end: 1081fafb3;  */

long FUN_1081faea0(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_4 != *(int *)(param_2 + 0x10) && *(long *)(param_3 + 8) != 0) {
    return 5;
  }
  *(int *)(param_1 + 0x468) = param_4;
  iVar1 = (int)param_1 + 8;
  func_0x000108154708();
  *(ulong *)(param_1 + 0x478) = (long)iVar1 * (long)param_4 + 7U >> 3;
  lVar2 = *(long *)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (lVar2 != 0) {
    func_0x0001081fb6a8();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 0) || (iVar1 == 6)) {
LAB_1081faf2c:
    if ((*(int *)(param_1 + 0x70) != 0) && (*(long *)(param_3 + 8) == 0)) {
      *(undefined4 *)(param_1 + 0x454) = 1;
      goto LAB_1081faf94;
    }
LAB_1081faf5c:
    if (iVar1 == 4) {
      func_0x0001081fb720();
      FUN_1081fafb4();
      if ((int)lVar2 == 0) {
        return 6;
      }
    }
  }
  else {
    if (iVar1 != 5) goto LAB_1081faf5c;
    if (*(char *)(param_1 + 0x18) == '\x10') goto LAB_1081faf2c;
  }
  func_0x0001081fb720();
  FUN_1081fb2c4();
  if ((int)lVar2 != 0) {
    return lVar2;
  }
LAB_1081faf94:
  func_0x0001081fb720();
  FUN_1081fb4d0();
  return 0;
}



/* Entry: 1081fafb4; end: 1081fb2c3;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1081fafb4(long *param_1,code *param_2,undefined8 *param_3,uint param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  byte *pbVar8;
  byte bVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  code *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lStack_540;
  undefined8 uStack_538;
  ulong uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  int *piStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  code *pcStack_4e8;
  undefined8 *puStack_4e0;
  code *pcStack_4d8;
  ulong uStack_4d0;
  long *plStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  uint uStack_4a8;
  int iStack_4a4;
  byte *pbStack_4a0;
  undefined8 *puStack_498;
  char cStack_490;
  undefined1 *puStack_488;
  undefined8 *puStack_480;
  byte bStack_478;
  uint uStack_474;
  uint auStack_470 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[0x93] == '\x01') {
    plVar10 = param_1 + 0x90;
    pcVar16 = param_2;
    FUN_1081fb5dc();
    if ((int)plVar10 == 0) goto LAB_1081fb018;
    uVar17 = (ulong)(param_1[0x8e] != 0);
  }
  else {
LAB_1081fb018:
    func_0x0001081fb5fc(param_1 + 0x8e,0);
    if ((char)param_1[0x93] == '\x01') {
      pcVar16 = param_2;
      func_0x000108152830();
    }
    else {
      pcVar16 = param_2;
      FUN_10814102c(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0x93) = 1;
    }
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xe8))(&puStack_488);
    uVar17 = (ulong)bStack_478;
    if (bStack_478 == 1) {
      puVar3 = puStack_480;
      if ((undefined8 *)0xff < puStack_480) {
        puVar3 = (undefined8 *)0x100;
      }
      iStack_4a4 = *(int *)(param_2 + 8);
      if ((int)param_1[0xe] != 0) {
        iStack_4a4 = 4;
      }
      (**(code **)(*param_1 + 0xf0))(&pbStack_4a0,param_1);
      if (cStack_490 == '\x01') {
        puVar19 = puVar3;
        if (puStack_498 <= puVar3) {
          puVar19 = puStack_498;
        }
        iVar4 = (int)param_1[0xe];
        if (iVar4 == 0) {
          if (pbStack_4a0 != (byte *)0x0) {
LAB_1081fb118:
            uStack_4a8 = 0;
            pcVar16 = param_2 + 0xc;
            param_2 = (code *)0x1081fb624;
            if (iStack_4a4 != 6) {
              param_2 = (code *)0x1081fb60c;
            }
            pcVar11 = (code *)0x1081fb640;
            if (iStack_4a4 != 6) {
              pcVar11 = (code *)0x1081fb63c;
            }
            if (*(int *)pcVar16 != 2 || *(int *)((long)param_1 + 0x14) != 1) {
              param_2 = pcVar11;
            }
            goto LAB_1081fb168;
          }
          pcVar16 = (code *)0x0;
        }
        else {
          pcVar16 = (code *)(ulong)(iVar4 != 2);
          if (pbStack_4a0 != (byte *)0x0) {
            if (iVar4 == 2) goto LAB_1081fb118;
            param_2 = (code *)0x1081fb640;
            if (iStack_4a4 != 6) {
              param_2 = (code *)0x1081fb63c;
            }
            uStack_4a8 = 1;
LAB_1081fb168:
            puVar7 = auStack_470;
            pbVar8 = pbStack_4a0;
            puVar1 = puStack_488;
            for (puVar18 = puVar19; puVar18 != (undefined8 *)0x0;
                puVar18 = (undefined8 *)((long)puVar18 - 1)) {
              uVar15 = (uint)*pbVar8;
              param_4 = (uint)(byte)puVar1[2];
              (*param_2)(*pbVar8,*puVar1,puVar1[1]);
              *puVar7 = uVar15;
              puVar1 = puVar1 + 3;
              puVar7 = puVar7 + 1;
              pbVar8 = pbVar8 + 1;
            }
            pcVar16 = (code *)(ulong)uStack_4a8;
            puStack_488 = puVar1;
          }
        }
      }
      else {
        puVar19 = (undefined8 *)0x0;
        pcVar16 = (code *)(ulong)((*(uint *)(param_1 + 0xe) & 0xfffffffd) != 0);
      }
      if (puVar19 < puVar3) {
        ppuVar2 = &PTR_DAT_113255f28;
        if (iStack_4a4 != 6) {
          ppuVar2 = &PTR_DAT_113255f20;
        }
        (*(code *)*ppuVar2)((long)auStack_470 + (long)puVar19 * 4,puStack_488,
                            (int)puVar3 - (int)puVar19);
        param_2 = pcVar16;
      }
      if ((int)pcVar16 != 0) {
        puVar19 = puVar3;
        FUN_10821c06c(param_1,auStack_470,auStack_470);
        param_4 = (uint)puVar19;
      }
      unaff_x22 = (undefined8 *)(1L << ((ulong)*(byte *)(param_1 + 3) & 0x3f));
      if (puVar3 < unaff_x22) {
        if (puStack_480 == (undefined8 *)0x0) {
          uVar15 = 0xff000000;
        }
        else {
          uVar15 = (&uStack_474)[(long)puVar3];
        }
        (*(code *)PTR_DAT_113254e78)
                  ((long)auStack_470 + (long)puVar3 * 4,uVar15,(int)unaff_x22 - (int)puVar3);
      }
      unaff_x21 = (code *)0x20;
      __Znwm();
      param_3 = unaff_x22;
      FUN_10821d030();
      plVar10 = param_1 + 0x8e;
      pcVar16 = unaff_x21;
      func_0x0001081fb5fc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar17;
  }
  ___stack_chk_fail();
  pcVar11 = unaff_x21;
  __ZdlPv();
  func_0x0001081fb6ec();
  pcStack_4b8 = FUN_1081fb2c4;
  piStack_508 = *(int **)pcVar16;
  if (piStack_508 != (int *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piStack_508,0x10);
      if (bVar6) {
        *piStack_508 = *piStack_508 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_4f8 = *(undefined8 *)(pcVar16 + 0x10);
  uStack_500 = *(undefined8 *)(pcVar16 + 8);
  uStack_518 = param_3[1];
  uStack_520 = *param_3;
  uStack_510 = param_3[2];
  *(undefined4 *)(pcVar11 + 0x454) = 0;
  pcStack_4e8 = param_2;
  puStack_4e0 = unaff_x22;
  pcStack_4d8 = unaff_x21;
  uStack_4d0 = uVar17;
  plStack_4c8 = plVar10;
  puStack_4c0 = &stack0xfffffffffffffff0;
  if (*(int *)(pcVar11 + 0x70) == 2) {
    if (*(int *)(pcVar11 + 0x10) == 0) {
      func_0x0001078bdd84(&uStack_538,&piStack_508,0xe);
      func_0x0001081fb69c();
    }
    else {
      func_0x0001078bdd84(&uStack_538,&piStack_508,4);
      func_0x0001081fb69c();
    }
    func_0x0001081fb6d8();
    if (*(int *)(pcVar16 + 0xc) == 2) {
      FUN_10814bd9c(&uStack_538,&piStack_508,3);
      func_0x0001081fb69c();
      func_0x0001081fb6d8();
    }
    *(undefined4 *)(pcVar11 + 0x454) = 2;
    uStack_520 = CONCAT44(uStack_520._4_4_,1);
  }
  uStack_530 = param_5 & 0xffffffff | 0x100000000;
  uStack_538 = 0;
  puVar3 = &uStack_538;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (param_4 == 0) {
    if (*(long *)(pcVar11 + 0x470) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(*(long *)(pcVar11 + 0x470) + 0x10);
    }
    FUN_10821edc8(&lStack_540,pcVar11 + 8,uVar14,&piStack_508,&uStack_520);
    lVar13 = lStack_540;
    lStack_540 = 0;
    lVar12 = *(long *)(pcVar11 + 0x458);
    *(long *)(pcVar11 + 0x458) = lVar13;
    if (lVar12 == 0) goto LAB_1081fb468;
    func_0x0001081fb6a8();
    lVar13 = lStack_540;
    lStack_540 = 0;
  }
  else {
    iVar4 = *(int *)(pcVar11 + 0x10);
    if (iVar4 == 0) {
      bVar9 = 1;
    }
    else if (iVar4 == 6) {
      bVar9 = (byte)pcVar11[0x18] >> 1;
    }
    else {
      bVar9 = 0;
      if (iVar4 == 5) {
        bVar9 = 6;
      }
    }
    FUN_10821eb80(&lStack_540,bVar9,&piStack_508,&uStack_520,puVar3);
    lVar13 = *(long *)(pcVar11 + 0x458);
    *(long *)(pcVar11 + 0x458) = lStack_540;
  }
  if (lVar13 != 0) {
    func_0x0001081fb6a8();
  }
LAB_1081fb468:
  uVar15 = 9;
  if (*(long *)(pcVar11 + 0x458) != 0) {
    uVar15 = 0;
  }
  FUN_10810a400(&piStack_508);
  return (ulong)uVar15;
}



/* Entry: 1081fb2c4; end: 1081fb4cf;  */

undefined4
FUN_1081fb2c4(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piStack_58 = (int *)*param_2;
  if (piStack_58 != (int *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
      if (bVar4) {
        *piStack_58 = *piStack_58 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = param_2[2];
  uStack_50 = param_2[1];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  *(undefined4 *)(param_1 + 0x454) = 0;
  if (*(int *)(param_1 + 0x70) == 2) {
    if (*(int *)(param_1 + 0x10) == 0) {
      func_0x0001078bdd84(&uStack_88,&piStack_58,0xe);
      func_0x0001081fb69c();
    }
    else {
      func_0x0001078bdd84(&uStack_88,&piStack_58,4);
      func_0x0001081fb69c();
    }
    func_0x0001081fb6d8();
    if (*(int *)((long)param_2 + 0xc) == 2) {
      FUN_10814bd9c(&uStack_88,&piStack_58,3);
      func_0x0001081fb69c();
      func_0x0001081fb6d8();
    }
    *(undefined4 *)(param_1 + 0x454) = 2;
    uStack_70 = CONCAT44(uStack_70._4_4_,1);
  }
  uStack_80 = param_5 & 0xffffffff | 0x100000000;
  uStack_88 = 0;
  puVar1 = &uStack_88;
  if (param_3[1] != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (param_4 == 0) {
    if (*(long *)(param_1 + 0x470) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x470) + 0x10);
    }
    FUN_10821edc8(&lStack_90,param_1 + 8,uVar8,&piStack_58,&uStack_70);
    lVar7 = lStack_90;
    lStack_90 = 0;
    lVar6 = *(long *)(param_1 + 0x458);
    *(long *)(param_1 + 0x458) = lVar7;
    if (lVar6 == 0) goto LAB_1081fb468;
    func_0x0001081fb6a8();
    lVar7 = lStack_90;
    lStack_90 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      bVar5 = 1;
    }
    else if (iVar2 == 6) {
      bVar5 = *(byte *)(param_1 + 0x18) >> 1;
    }
    else {
      bVar5 = 0;
      if (iVar2 == 5) {
        bVar5 = 6;
      }
    }
    FUN_10821eb80(&lStack_90,bVar5,&piStack_58,&uStack_70,puVar1);
    lVar7 = *(long *)(param_1 + 0x458);
    *(long *)(param_1 + 0x458) = lStack_90;
  }
  if (lVar7 != 0) {
    func_0x0001081fb6a8();
  }
LAB_1081fb468:
  uVar9 = 9;
  if (*(long *)(param_1 + 0x458) != 0) {
    uVar9 = 0;
  }
  FUN_10810a400(&piStack_58);
  return uVar9;
}



/* Entry: 1081fb4d0; end: 1081fb5db;  */

long FUN_1081fb4d0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x454) - 1U < 2) {
    uVar2 = (int)param_1 + 8;
    func_0x000108154708();
    if (uVar2 < 0x21) {
      uVar2 = 0x20;
    }
    lVar1 = (long)(int)(uVar2 >> 3) * (long)*(int *)(param_2 + 0x10);
    if (lVar1 != 0) {
      FUN_10840ffdc(lVar1,1);
    }
    FUN_1081527a0((long *)(param_1 + 0x460),lVar1);
    return *(long *)(param_1 + 0x460);
  }
  return param_1;
}



/* Entry: 1081fb5dc; end: 1081fb643;  */

bool FUN_1081fb5dc(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[2] != (int)param_2[2] ||
      *(int *)((long)param_1 + 0x14) != *(int *)((long)param_2 + 0x14)) {
    return false;
  }
  if (((int)param_1[1] == (int)param_2[1]) &&
     (*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc))) {
    lVar2 = *param_1;
    lVar3 = *param_2;
    if (lVar2 != lVar3) {
      bVar1 = false;
      if ((lVar2 != 0) && (lVar3 != 0)) {
        bVar1 = CONCAT44(*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8)) ==
                CONCAT44(*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8));
      }
      return bVar1;
    }
    return true;
  }
  return false;
}



/* Entry: 1081fb644; end: 1081fb66f;  */

undefined8 * FUN_1081fb644(undefined8 *param_1)

{
  FUN_1081fb670(*param_1);
  return param_1;
}



/* Entry: 1081fb670; end: 1081fb72b;  */

void FUN_1081fb670(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001081fb694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081fb72c; end: 1081fba3f;  */

long * FUN_1081fb72c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  ulong *puStack_68;
  
  lVar8 = *param_2;
  *param_2 = 0;
  *param_1 = lVar8;
  param_1[2] = 0;
  param_1[1] = 0;
  plVar5 = param_1 + 7;
  param_1[8] = 0;
  *plVar5 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  func_0x0001078bde1c(&plStack_88,lVar8 + 8);
  func_0x0001078bddd4(param_1 + 1,&plStack_88);
  FUN_10810a400(&plStack_88);
  FUN_10821c0b4(&plStack_88,*param_1);
  func_0x0001078bdf04(param_1 + 4,&plStack_88);
  func_0x0001078bdf70(&plStack_88);
  uVar6 = (param_1[5] - param_1[4]) / 0x2c;
  puVar10 = (undefined8 *)param_1[8];
  uVar9 = (long)puVar10 - param_1[7] >> 3;
  if (uVar9 < uVar6) {
    uVar12 = uVar6 - uVar9;
    puVar13 = (ulong *)(param_1 + 9);
    lVar8 = uVar6 * 8;
    if ((ulong)((long)(*puVar13 - (long)puVar10) >> 3) < uVar12) {
      plVar4 = plVar5;
      FUN_1081fc1a0();
      lVar1 = param_1[7];
      lVar2 = param_1[8];
      puStack_68 = puVar13;
      if (plVar4 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        FUN_1081fc2ac();
      }
      plStack_70 = plVar4 + uVar6;
      puStack_80 = (undefined8 *)((long)plVar4 + (lVar2 - lVar1));
      puStack_78 = puStack_80 + uVar12;
      puVar10 = puStack_80;
      for (lVar8 = lVar8 + uVar9 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      plStack_88 = plVar4;
      func_0x0001081fc3c0();
      func_0x0001081fc2e0(&plStack_88);
    }
    else {
      puVar11 = puVar10;
      for (lVar8 = lVar8 + uVar9 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      param_1[8] = (long)(puVar10 + uVar12);
    }
  }
  else if (uVar6 < uVar9) {
    func_0x0001081fc32c(plVar5,param_1[7] + uVar6 * 8);
  }
  iVar7 = 0;
  lVar2 = param_1[5];
  lVar1 = param_1[4];
  for (lVar8 = lVar1; lVar8 != lVar2; lVar8 = lVar8 + 0x2c) {
    iVar7 = iVar7 + *(int *)(lVar8 + 4);
    *(int *)(lVar8 + 4) = iVar7;
  }
  *(int *)((long)param_1 + 0x54) = iVar7;
  if (iVar7 == 0) {
    param_1[5] = lVar1;
    FUN_1081fba40(plVar5);
    lStack_a0 = *param_1;
    *param_1 = 0;
    FUN_10821ca88(&lStack_98,&lStack_a0,0);
    FUN_1083b71d4(&uStack_90,&lStack_98);
    uVar3 = uStack_90;
    puVar13 = (ulong *)(param_1 + 9);
    puVar10 = (undefined8 *)param_1[8];
    if (puVar10 < (undefined8 *)*puVar13) {
      uStack_90 = 0;
      puVar11 = puVar10 + 1;
      *puVar10 = uVar3;
    }
    else {
      lVar8 = ((long)puVar10 - *plVar5 >> 3) + 1;
      FUN_1081fc1a0();
      lVar1 = param_1[7];
      lVar2 = param_1[8];
      puStack_68 = puVar13;
      if (plVar5 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        FUN_1081fc2ac();
      }
      uVar3 = uStack_90;
      puStack_80 = (undefined8 *)((long)plVar5 + (lVar2 - lVar1));
      plStack_70 = plVar5 + lVar8;
      uStack_90 = 0;
      puStack_78 = puStack_80 + 1;
      *puStack_80 = uVar3;
      plStack_88 = plVar5;
      func_0x0001081fc3c0();
      puVar11 = (undefined8 *)param_1[8];
      func_0x0001081fc2e0(&plStack_88);
    }
    param_1[8] = (long)puVar11;
    func_0x000106f47184(&uStack_90);
    if (lStack_98 != 0) {
      func_0x0001081fc368();
    }
    if (lStack_a0 != 0) {
      func_0x0001081fc368();
    }
  }
  return param_1;
}



/* Entry: 1081fba40; end: 1081fba47;  */

void FUN_1081fba40(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000106f47184();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1081fba48; end: 1081fba7f;  */

undefined8 * FUN_1081fba48(long *param_1)

{
  undefined8 *unaff_x19;
  
  FUN_1081fc12c(param_1 + 7);
  func_0x0001078bdf70(param_1 + 4);
  FUN_10810a400(param_1 + 1);
  func_0x0001078be09c();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return unaff_x19;
}



/* Entry: 1081fba80; end: 1081fbfc3;  */

void FUN_1081fba80(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  int **ppiVar9;
  undefined8 extraout_x8;
  long lVar10;
  long extraout_x8_00;
  undefined8 uVar11;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar12;
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  int *piStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  
  if (*(long *)(param_2[7] + (long)param_3 * 8) != 0) {
    do {
      func_0x0001081fc374();
    } while (extraout_w11 != 0);
    *param_1 = extraout_x8;
    return;
  }
  plVar8 = param_2 + 1;
  func_0x0001078bdb50(plVar8);
  func_0x00010835c6b0(param_2 + 1,plVar8);
  FUN_1083464d4(&lStack_68);
  auStack_80[0] = 1;
  uStack_78 = 0;
  iStack_6c = -1;
  iVar1 = *(int *)(*param_2 + 0x3c);
  lVar10 = 0x1c;
  if (iVar1 < 5) {
    lVar10 = 0x18;
  }
  lVar13 = 0x18;
  if (iVar1 < 5) {
    lVar13 = 0x1c;
  }
  iStack_70 = param_3;
  if (7 < iVar1 - 1U) {
    FUN_10841076c(&UNK_10f47f455);
    goto code_r0x0001081fbf04;
  }
  iVar2 = *(int *)((long)param_2 + lVar13);
  iVar3 = *(int *)((long)param_2 + lVar10);
  uVar16 = 0x3f800000;
  uVar14 = 0;
  fVar19 = (float)iVar2;
  fVar20 = (float)iVar3;
  uVar11 = 0x3f800000;
  fVar15 = 0.0;
  uVar17 = 0;
  fVar18 = 0.0;
  switch(iVar1) {
  case 1:
    uStack_a8 = uRam0000000113254e28;
    uStack_b0 = uRam0000000113254e20;
    uStack_98 = uRam0000000113254e38;
    uStack_a0 = uRam0000000113254e30;
    uStack_90 = uRam0000000113254e40;
    goto code_r0x0001081fbc00;
  case 2:
    uVar17 = 0x3f800000;
    uVar14 = 0xbf800000;
    goto code_r0x0001081fbba8;
  case 3:
    uVar11 = 0;
    uVar14 = 0xbf800000;
    uVar16 = 0;
    uVar17 = 0xbf800000;
    fVar18 = fVar19;
    fVar15 = fVar20;
    break;
  case 4:
    uVar17 = 0xbf800000;
    uVar14 = 0x3f800000;
    fVar18 = fVar19;
    fVar20 = fVar15;
code_r0x0001081fbba8:
    uVar11 = 0;
    uVar16 = 0;
    fVar15 = fVar20;
    break;
  case 6:
    uVar11 = 0xbf800000;
    fVar15 = fVar20;
    break;
  case 7:
    uVar11 = 0xbf800000;
    fVar15 = fVar20;
  case 8:
    uVar16 = 0xbf800000;
    fVar18 = fVar19;
  }
  FUN_10816eae8(&uStack_b0,uVar14,uVar11,fVar15,uVar16,uVar17,fVar18,0,0);
code_r0x0001081fbc00:
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_c4 = 0x3f800000;
  uStack_bc = 0x40800000;
  FUN_1083762f4(&uStack_100,1);
  piStack_118 = (int *)param_2[1];
  if (piStack_118 != (int *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
      if (bVar6) {
        *piStack_118 = *piStack_118 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_108 = param_2[3];
  lStack_110 = param_2[2];
  lVar10 = param_2[4];
  if (*(int *)(lVar10 + (long)param_3 * 0x2c + 0xc) != 1) {
    if ((ulong)param_2[2] >> 0x20 != 1) {
      uVar12 = (uint)param_2[2];
      if (0x1a < uVar12) {
code_r0x0001081fbf04:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1081fbf08);
        (*pcVar7)();
      }
      if ((1 << (ulong)(uVar12 & 0x1f) & 0x355b1daU) != 0) goto code_r0x0001081fbcc0;
    }
    FUN_10814bd9c(&lStack_150,&piStack_118,2);
    func_0x0001081fc3b4();
    func_0x0001081fc3ac();
    lVar10 = param_2[4];
  }
code_r0x0001081fbcc0:
  lVar13 = lStack_68;
  iVar4 = *(int *)(lVar10 + (long)param_3 * 0x2c);
  if ((iVar4 != -1) && (*(long *)(param_2[7] + (long)iVar4 * 8) != 0)) {
    do {
      func_0x0001081fc374();
    } while (extraout_w11_00 != 0);
    lStack_120 = extraout_x8_00;
    func_0x0001081fc398();
    if (iVar1 != 1) {
      lStack_148 = 0;
      lStack_150 = 0x3f800000;
      uStack_138 = 0;
      uStack_140 = 0x3f800000;
      uStack_130 = 0x103f800000;
      FUN_10818cfd0(&uStack_b0,&lStack_150);
      FUN_10833e2b0(lStack_128,&lStack_150);
    }
    lStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    func_0x0001081fc384(lStack_128,lStack_120);
    lVar10 = lStack_128;
    lStack_128 = 0;
    iStack_6c = iVar4;
    if (lVar10 != 0) {
      func_0x0001081fc368();
    }
    func_0x0001081fc3cc();
  }
  lVar10 = *param_2;
  FUN_10821bce4(lVar10,&piStack_118,*(undefined8 *)(lVar13 + 0x18),plVar8,auStack_80);
  if ((int)lVar10 == 0) {
    lStack_68 = 0;
    lStack_158 = lVar13;
    FUN_1083b81f0(&lStack_120,&piStack_118,&lStack_158,plVar8);
    func_0x0001081fc0f4(lStack_158);
    if (iVar1 != 1) {
      uVar11 = CONCAT44(iVar2,iVar3);
      lVar10 = 0;
      if (piStack_118 != (int *)0x0) {
        do {
          func_0x0001081fc374();
          uVar11 = extraout_x8_01;
          lVar10 = extraout_x9;
        } while (extraout_w11_01 != 0);
      }
      lStack_148 = lStack_110;
      lStack_150 = lVar10;
      uStack_140 = uVar11;
      func_0x0001081fc3b4();
      func_0x0001081fc3ac();
      ppiVar9 = &piStack_118;
      func_0x0001078bdb50(ppiVar9);
      func_0x00010835c6b0(&piStack_118,ppiVar9);
      func_0x0001083464d8(&lStack_150);
      lVar10 = lStack_150;
      lStack_68 = lStack_150;
      func_0x0001081fc0f4(0);
      func_0x0001081fc398();
      FUN_10833e2b0(lStack_128,&uStack_b0);
      lStack_150 = 0;
      lStack_148 = 0;
      uStack_140 = 0;
      func_0x0001081fc384(lStack_128,lStack_120);
      lStack_68 = 0;
      lStack_160 = lVar10;
      FUN_1083b81f0(&lStack_150,&piStack_118,&lStack_160,ppiVar9);
      lVar10 = lStack_120;
      lStack_120 = lStack_150;
      lStack_150 = 0;
      func_0x0001081fc100(lVar10);
      func_0x000106f47184(&lStack_150);
      func_0x0001081fc0f4(lStack_160);
      lVar10 = lStack_128;
      lStack_128 = 0;
      if (lVar10 != 0) {
        func_0x0001081fc368();
      }
    }
    plVar8 = (long *)(param_2[7] + (long)param_3 * 8);
    FUN_1081fbfc4(plVar8,&lStack_120);
    uVar11 = 0;
    if (*plVar8 != 0) {
      do {
        func_0x0001081fc374();
        uVar11 = extraout_x8_02;
      } while (extraout_w11_02 != 0);
    }
    *param_1 = uVar11;
    func_0x0001081fc3cc();
    lVar13 = 0;
  }
  else {
    *param_1 = 0;
  }
  FUN_10810a400(&piStack_118);
  FUN_108375e94(&uStack_100);
  func_0x0001081fc0f4(lVar13);
  return;
}



/* Entry: 1081fbfc4; end: 1081fc00f;  */

long * FUN_1081fbfc4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108175028(param_1);
  }
  return param_1;
}



/* Entry: 1081fc010; end: 1081fc12b;  */

void FUN_1081fc010(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  int **ppiVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar12;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  uint uVar13;
  long extraout_x9;
  long lVar14;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  int *piStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  
  if (*(int *)((long)param_2 + 0x54) == 0) {
    lVar14 = *(long *)param_2[7];
    if (lVar14 != 0) {
      piVar1 = (int *)(lVar14 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    *param_1 = lVar14;
    return;
  }
  iVar3 = (int)param_2[10];
  if (*(long *)(param_2[7] + (long)iVar3 * 8) != 0) {
    do {
      func_0x0001081fc374();
    } while (extraout_w11 != 0);
    *param_1 = extraout_x8;
    return;
  }
  plVar10 = param_2 + 1;
  func_0x0001078bdb50(plVar10);
  func_0x00010835c6b0(param_2 + 1,plVar10);
  FUN_1083464d4(&lStack_68);
  auStack_80[0] = 1;
  uStack_78 = 0;
  iStack_6c = -1;
  iVar2 = *(int *)(*param_2 + 0x3c);
  lVar14 = 0x1c;
  if (iVar2 < 5) {
    lVar14 = 0x18;
  }
  lVar15 = 0x18;
  if (iVar2 < 5) {
    lVar15 = 0x1c;
  }
  iStack_70 = iVar3;
  if (7 < iVar2 - 1U) {
    FUN_10841076c(&UNK_10f47f455);
    goto code_r0x0001081fbf04;
  }
  iVar4 = *(int *)((long)param_2 + lVar15);
  iVar5 = *(int *)((long)param_2 + lVar14);
  uVar18 = 0x3f800000;
  uVar16 = 0;
  fVar21 = (float)iVar4;
  fVar22 = (float)iVar5;
  uVar12 = 0x3f800000;
  fVar17 = 0.0;
  uVar19 = 0;
  fVar20 = 0.0;
  switch(iVar2) {
  case 1:
    uStack_a8 = uRam0000000113254e28;
    uStack_b0 = uRam0000000113254e20;
    uStack_98 = uRam0000000113254e38;
    uStack_a0 = uRam0000000113254e30;
    uStack_90 = uRam0000000113254e40;
    goto code_r0x0001081fbc00;
  case 2:
    uVar19 = 0x3f800000;
    uVar16 = 0xbf800000;
    goto code_r0x0001081fbba8;
  case 3:
    uVar12 = 0;
    uVar16 = 0xbf800000;
    uVar18 = 0;
    uVar19 = 0xbf800000;
    fVar20 = fVar21;
    fVar17 = fVar22;
    break;
  case 4:
    uVar19 = 0xbf800000;
    uVar16 = 0x3f800000;
    fVar20 = fVar21;
    fVar22 = fVar17;
code_r0x0001081fbba8:
    uVar12 = 0;
    uVar18 = 0;
    fVar17 = fVar22;
    break;
  case 6:
    uVar12 = 0xbf800000;
    fVar17 = fVar22;
    break;
  case 7:
    uVar12 = 0xbf800000;
    fVar17 = fVar22;
  case 8:
    uVar18 = 0xbf800000;
    fVar20 = fVar21;
  }
  FUN_10816eae8(&uStack_b0,uVar16,uVar12,fVar17,uVar18,uVar19,fVar20,0,0);
code_r0x0001081fbc00:
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_c4 = 0x3f800000;
  uStack_bc = 0x40800000;
  FUN_1083762f4(&uStack_100,1);
  piStack_118 = (int *)param_2[1];
  if (piStack_118 != (int *)0x0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piStack_118,0x10);
      if (bVar8) {
        *piStack_118 = *piStack_118 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_108 = param_2[3];
  lStack_110 = param_2[2];
  lVar14 = param_2[4];
  if (*(int *)(lVar14 + (long)iVar3 * 0x2c + 0xc) != 1) {
    if ((ulong)param_2[2] >> 0x20 != 1) {
      uVar13 = (uint)param_2[2];
      if (0x1a < uVar13) {
code_r0x0001081fbf04:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1081fbf08);
        (*pcVar9)();
      }
      if ((1 << (ulong)(uVar13 & 0x1f) & 0x355b1daU) != 0) goto code_r0x0001081fbcc0;
    }
    FUN_10814bd9c(&lStack_150,&piStack_118,2);
    func_0x0001081fc3b4();
    func_0x0001081fc3ac();
    lVar14 = param_2[4];
  }
code_r0x0001081fbcc0:
  lVar15 = lStack_68;
  iVar6 = *(int *)(lVar14 + (long)iVar3 * 0x2c);
  if ((iVar6 != -1) && (*(long *)(param_2[7] + (long)iVar6 * 8) != 0)) {
    do {
      func_0x0001081fc374();
    } while (extraout_w11_00 != 0);
    lStack_120 = extraout_x8_00;
    func_0x0001081fc398();
    if (iVar2 != 1) {
      lStack_148 = 0;
      lStack_150 = 0x3f800000;
      uStack_138 = 0;
      uStack_140 = 0x3f800000;
      uStack_130 = 0x103f800000;
      FUN_10818cfd0(&uStack_b0,&lStack_150);
      FUN_10833e2b0(lStack_128,&lStack_150);
    }
    lStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    func_0x0001081fc384(lStack_128,lStack_120);
    lVar14 = lStack_128;
    lStack_128 = 0;
    iStack_6c = iVar6;
    if (lVar14 != 0) {
      func_0x0001081fc368();
    }
    func_0x0001081fc3cc();
  }
  lVar14 = *param_2;
  FUN_10821bce4(lVar14,&piStack_118,*(undefined8 *)(lVar15 + 0x18),plVar10,auStack_80);
  if ((int)lVar14 == 0) {
    lStack_68 = 0;
    lStack_158 = lVar15;
    FUN_1083b81f0(&lStack_120,&piStack_118,&lStack_158,plVar10);
    func_0x0001081fc0f4(lStack_158);
    if (iVar2 != 1) {
      uVar12 = CONCAT44(iVar4,iVar5);
      lVar14 = 0;
      if (piStack_118 != (int *)0x0) {
        do {
          func_0x0001081fc374();
          uVar12 = extraout_x8_01;
          lVar14 = extraout_x9;
        } while (extraout_w11_01 != 0);
      }
      lStack_148 = lStack_110;
      lStack_150 = lVar14;
      uStack_140 = uVar12;
      func_0x0001081fc3b4();
      func_0x0001081fc3ac();
      ppiVar11 = &piStack_118;
      func_0x0001078bdb50(ppiVar11);
      func_0x00010835c6b0(&piStack_118,ppiVar11);
      func_0x0001083464d8(&lStack_150);
      lVar14 = lStack_150;
      lStack_68 = lStack_150;
      func_0x0001081fc0f4(0);
      func_0x0001081fc398();
      FUN_10833e2b0(lStack_128,&uStack_b0);
      lStack_150 = 0;
      lStack_148 = 0;
      uStack_140 = 0;
      func_0x0001081fc384(lStack_128,lStack_120);
      lStack_68 = 0;
      lStack_160 = lVar14;
      FUN_1083b81f0(&lStack_150,&piStack_118,&lStack_160,ppiVar11);
      lVar14 = lStack_120;
      lStack_120 = lStack_150;
      lStack_150 = 0;
      func_0x0001081fc100(lVar14);
      func_0x000106f47184(&lStack_150);
      func_0x0001081fc0f4(lStack_160);
      lVar14 = lStack_128;
      lStack_128 = 0;
      if (lVar14 != 0) {
        func_0x0001081fc368();
      }
    }
    plVar10 = (long *)(param_2[7] + (long)iVar3 * 8);
    FUN_1081fbfc4(plVar10,&lStack_120);
    lVar14 = 0;
    if (*plVar10 != 0) {
      do {
        func_0x0001081fc374();
        lVar14 = extraout_x8_02;
      } while (extraout_w11_02 != 0);
    }
    *param_1 = lVar14;
    func_0x0001081fc3cc();
    lVar15 = 0;
  }
  else {
    *param_1 = 0;
  }
  FUN_10810a400(&piStack_118);
  FUN_108375e94(&uStack_100);
  func_0x0001081fc0f4(lVar15);
  return;
}



/* Entry: 1081fc12c; end: 1081fc19f;  */

undefined8 FUN_1081fc12c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001081fc160(&uStack_28);
  return param_1;
}



/* Entry: 1081fc1a0; end: 1081fc1df;  */

long * FUN_1081fc1a0(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar8 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar8 <= param_2) {
      plVar8 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar8 = (long *)0x1fffffffffffffff;
    }
    return plVar8;
  }
  FUN_1081fc298();
  plVar6 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)((long)plVar6 + (param_2[1] - (long)plVar3));
  plVar7 = plVar2;
  for (plVar8 = plVar6; plVar8 != plVar3; plVar8 = plVar8 + 1) {
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *plVar7 = lVar9;
    plVar7 = plVar7 + 1;
  }
  for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
    func_0x000106f47184();
  }
  param_2[1] = (long)plVar2;
  lVar9 = *param_1;
  *param_1 = (long)plVar2;
  param_1[1] = lVar9;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return plVar6;
}



/* Entry: 1081fc1e0; end: 1081fc297;  */

void FUN_1081fc1e0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar6 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)((long)plVar6 + (param_2[1] - (long)plVar3));
  plVar7 = plVar2;
  for (plVar8 = plVar6; plVar8 != plVar3; plVar8 = plVar8 + 1) {
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *plVar7 = lVar9;
    plVar7 = plVar7 + 1;
  }
  for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
    func_0x000106f47184();
  }
  param_2[1] = plVar2;
  lVar9 = *param_1;
  *param_1 = (long)plVar2;
  param_1[1] = lVar9;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1081fc298; end: 1081fc2ab;  */

undefined1  [16] FUN_1081fc298(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)plVar1 >> 0x3d == 0) {
    lVar2 = (long)plVar1 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    func_0x000106f47184();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 1081fc2ac; end: 1081fc367;  */

undefined1  [16] FUN_1081fc2ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000106f47184();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1081fc368; end: 1081fc3d7;  */

void FUN_1081fc368(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081fc370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1081fc3d8; end: 1081fc437;  */

void FUN_1081fc3d8(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_2 + 0x20))(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x100000001;
  uVar3 = uRam0000000113254e38;
  uVar2 = uRam0000000113254e30;
  uVar1 = uRam0000000113254e20;
  *(undefined8 *)(param_1 + 0x28) = uRam0000000113254e28;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uRam0000000113254e40;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}



/* Entry: 1081fc438; end: 1081fc44b;  */

bool FUN_1081fc438(long param_1)

{
  return *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0;
}



/* Entry: 1081fc44c; end: 1081fc6ab;  */

void FUN_1081fc44c(undefined8 *param_1,float param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  int extraout_w11;
  long *plVar7;
  float fVar8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  plVar7 = (long *)(param_3 + 0x18);
  if ((*plVar7 == 0) || (*(int *)(*(long *)(param_3 + 0x10) + 0x54) != 0)) {
    func_0x0001081fc048(*(long *)(param_3 + 0x10),(int)(param_2 * 1000.0));
    func_0x0001081fc010(&plStack_b0,*(undefined8 *)(param_3 + 0x10));
    plVar5 = plStack_b0;
    if ((*(int *)(param_3 + 0x20) == 1) &&
       ((plStack_b0 != (long *)0x0 &&
        (plVar2 = plStack_b0, (**(code **)(*plStack_b0 + 0x40))(), (int)plVar2 != 0)))) {
      plStack_b0 = (long *)0x0;
      plStack_a8 = plVar5;
      uVar1 = *(int *)((long)plVar5 + 0x24) * (int)plVar5[4];
      if (uVar1 < 0x400001) {
        FUN_1081fce70(&plStack_80,plVar5,1);
        plVar2 = plStack_80;
        plVar5 = plStack_a8;
        plStack_80 = (long *)0x0;
        plStack_a8 = plVar2;
        FUN_1081fcfdc(plVar5);
        func_0x000106f47184(&plStack_80);
      }
      else {
        fVar8 = SQRT(4194304.0 / (float)(ulong)(long)(int)uVar1);
        FUN_10835c77c(auStack_48,(int)(fVar8 * (float)(int)plVar5[4]),
                      (int)(fVar8 * (float)*(int *)((long)plVar5 + 0x24)));
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        plStack_80 = (long *)0x0;
        puVar3 = auStack_48;
        func_0x0001078bdb50(puVar3);
        pplVar4 = &plStack_80;
        FUN_108330b14(pplVar4,auStack_48,puVar3);
        if ((int)pplVar4 != 0) {
          plStack_98 = (long *)((ulong)plStack_98 & 0xffffff0000000000);
          uStack_90 = 0;
          uStack_88 = 0x100000001;
          plVar5 = plStack_a8;
          FUN_1083b5a28(plStack_a8,(ulong)&plStack_80 | 8,&plStack_98,1);
          if ((int)plVar5 != 0) {
            func_0x0001083b812c(&plStack_98,&plStack_80);
            plVar2 = plStack_98;
            plVar5 = plStack_a8;
            plStack_98 = (long *)0x0;
            plStack_a8 = plVar2;
            FUN_1081fcfdc(plVar5);
            func_0x000106f47184(&plStack_98);
          }
        }
        FUN_108330548(&plStack_80);
        FUN_10810a400(auStack_48);
      }
      plVar2 = plStack_a8;
      plVar5 = plStack_b0;
      plStack_a8 = (long *)0x0;
      uStack_a0 = 0;
      plStack_b0 = plVar2;
      FUN_1081fcfdc(plVar5);
      func_0x000106f47184(&uStack_a0);
      func_0x000106f47184(&plStack_a8);
    }
    plVar5 = plStack_b0;
    plStack_b0 = (long *)0x0;
    func_0x000108175028(plVar7,plVar5);
    func_0x000106f47184(&plStack_b0);
    uVar6 = 0;
    if (*plVar7 == 0) goto LAB_1081fc624;
  }
  do {
    func_0x0001081fd1e4();
    uVar6 = extraout_x8;
  } while (extraout_w11 != 0);
LAB_1081fc624:
  *param_1 = uVar6;
  return;
}



/* Entry: 1081fc6ac; end: 1081fc723;  */

void FUN_1081fc6ac(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001081fc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1081fc724; end: 1081fc7a7;  */

undefined8 * FUN_1081fc724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  func_0x0001081fd1a4(uVar1);
  *param_1 = &PTR_FUN_110a2ff20;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1081fc7a8; end: 1081fca47;  */

void FUN_1081fc7a8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  undefined8 *puVar12;
  int extraout_w11;
  int extraout_w11_00;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_80 = param_2 + 0x18;
  func_0x0001081efc58();
  FUN_1083a3348(&lStack_88,param_5);
  uVar8 = (uint)&lStack_88;
  FUN_1081fd038();
  uVar5 = *(uint *)(param_2 + 0x2c);
  uVar2 = uVar5 - 1 & uVar8;
  for (uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar13 = (uint *)(*(long *)(param_2 + 0x30) + (long)(int)uVar2 * 0x18);
    if (*puVar13 == 0) break;
    if (uVar8 == *puVar13) {
      plVar9 = &lStack_88;
      FUN_1083a3440(plVar9,puVar13 + 2);
      if (((ulong)plVar9 & 1) != 0) {
        lVar14 = 0;
        if (*(long *)(puVar13 + 4) != 0) {
          do {
            func_0x0001081fd1e4();
            lVar14 = extraout_x8_00;
          } while (extraout_w11_00 != 0);
        }
        *param_1 = lVar14;
        goto LAB_1081fc994;
      }
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
  }
  func_0x0001081fc6c4(param_1,param_2,param_3,param_4,param_5);
  lStack_90 = lStack_88;
  if (lStack_88 != 0 && lStack_88 != 0x1138270b0) {
    do {
      func_0x0001081fd1e4();
      lStack_90 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lVar14 = *param_1;
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_1083a33c4(auStack_78,&lStack_90);
  uStack_98 = 0;
  uVar8 = *(uint *)(param_2 + 0x2c);
  lStack_70 = lVar14;
  if ((int)(uVar8 * 3) <= *(int *)(param_2 + 0x28) * 4) {
    uVar2 = uVar8 << 1;
    if ((int)uVar8 < 1) {
      uVar2 = 4;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(uint *)(param_2 + 0x2c) = uVar2;
    lVar14 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar10 = (undefined8 *)((ulong)uVar2 * 0x18 + 0x10);
    lStack_68 = lVar14;
    __Znam();
    *puVar10 = 0x18;
    puVar10[1] = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar11 = (ulong)uVar2 * 0x18;
      puVar12 = puVar10 + 2;
      do {
        *(undefined4 *)puVar12 = 0;
        lVar11 = lVar11 + -0x18;
        puVar12 = puVar12 + 3;
      } while (lVar11 != 0);
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10 + 2;
    lVar14 = lVar14 + 8;
    for (uVar15 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)); uVar15 != 0;
        uVar15 = uVar15 - 1) {
      if (*(int *)(lVar14 + -8) != 0) {
        FUN_1081fd064(param_2 + 0x28,lVar14);
      }
      lVar14 = lVar14 + 0x18;
    }
    func_0x0001081fced8(&lStack_68);
  }
  FUN_1081fd064(param_2 + 0x28,auStack_78);
  func_0x0001081fcf8c(auStack_78);
  FUN_10815b8bc(&uStack_98);
  FUN_1083a3ca0(lStack_90);
LAB_1081fc994:
  FUN_1083a3ca0(lStack_88);
  FUN_1081efc78(&lStack_80);
  return;
}



/* Entry: 1081fca48; end: 1081fcb1b;  */

void FUN_1081fca48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x28;
  __Znwm();
  uStack_38 = *param_2;
  *param_2 = 0;
  uStack_40 = *param_4;
  *param_4 = 0;
  func_0x0001081fcab4();
  *param_1 = uVar1;
  FUN_108141d9c(&uStack_40);
  func_0x0001081419f4(&uStack_38);
  return;
}



/* Entry: 1081fcb1c; end: 1081fccab;  */

void FUN_1081fcb1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_1081fccac(&lStack_60,&UNK_10f47f4d5);
  lStack_58 = lStack_60;
  if (lStack_60 == 0) {
    func_0x0001081fd204();
    func_0x0001081fc6c4(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    lStack_60 = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    FUN_10821b4d4(&lStack_50,&lStack_58,0);
    func_0x0001078bddf8(&lStack_58);
    lVar2 = lStack_50;
    if (lStack_50 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      uVar4 = 0x58;
      __Znwm();
      lStack_50 = 0;
      lStack_48 = lVar2;
      FUN_1081fb72c();
      if (lStack_48 != 0) {
        func_0x0001081fd1c0();
      }
      *(undefined4 *)(puVar3 + 1) = 1;
      *puVar3 = &PTR_FUN_110a2fe90;
      lStack_48 = 0;
      puVar3[2] = uVar4;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      FUN_1081fd008(&lStack_48);
      lVar2 = lStack_50;
      lStack_50 = 0;
      if (lVar2 != 0) {
        func_0x0001081fd1c0();
      }
    }
    *param_1 = puVar3;
    func_0x0001081fd1d4();
    func_0x0001081fd204();
  }
  return;
}



/* Entry: 1081fccac; end: 1081fcd73;  */

void FUN_1081fccac(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  _strlen();
  lVar2 = param_3;
  _strncmp(param_3,param_2,lVar1);
  if ((int)lVar2 == 0) {
    param_3 = param_3 + lVar1;
    _strstr(param_3,&UNK_10df099d4);
    if (param_3 != 0) {
      lVar1 = param_3 + 8;
      _strlen(lVar1);
      lVar2 = param_3 + 8;
      FUN_10840e01c(lVar2,lVar1,0,&uStack_38);
      if ((int)lVar2 == 0) {
        FUN_1083464d4(&lStack_40,uStack_38);
        lVar2 = lStack_40;
        param_3 = param_3 + 8;
        FUN_10840e01c(param_3,lVar1,*(undefined8 *)(lStack_40 + 0x18),&uStack_38);
        if ((int)param_3 == 0) {
          lStack_40 = 0;
        }
        else {
          lVar2 = 0;
        }
        *param_1 = lVar2;
        func_0x0001081fd1fc();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1081fcd74; end: 1081fce0f;  */

void FUN_1081fcd74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  long lStack_38;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_1081fccac(&lStack_38,&UNK_10f47f4e1,param_4);
    if (lStack_38 != 0) {
      lStack_40 = lStack_38;
      lStack_38 = 0;
      FUN_108350d94(param_1,*(undefined8 *)(param_2 + 0x20),&lStack_40,0);
      func_0x0001081fd1fc();
      func_0x0001081fd1d4();
      return;
    }
    func_0x0001081fd1d4();
  }
  func_0x0001081fc6dc(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1081fce10; end: 1081fce13;  */

long FUN_1081fce10(long param_1)

{
  func_0x000106f47184(param_1 + 0x18);
  FUN_1081fd008(param_1 + 0x10);
  return param_1;
}



/* Entry: 1081fce14; end: 1081fce27;  */

void FUN_1081fce14(void)

{
  FUN_1081fce7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fce28; end: 1081fce2b;  */

undefined8 * FUN_1081fce28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2fed0;
  func_0x0001081419f4(param_1 + 2);
  return param_1;
}



/* Entry: 1081fce2c; end: 1081fce3f;  */

void FUN_1081fce2c(void)

{
  func_0x0001081fc77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fce40; end: 1081fce43;  */

undefined8 * FUN_1081fce40(undefined8 *param_1)

{
  func_0x0001081fced8(param_1 + 6);
  FUN_108410074(param_1 + 3);
  *param_1 = &PTR_FUN_110a2fed0;
  func_0x0001081419f4(param_1 + 2);
  return param_1;
}



/* Entry: 1081fce44; end: 1081fce57;  */

void FUN_1081fce44(void)

{
  func_0x0001081fcea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fce58; end: 1081fce5b;  */

undefined8 * FUN_1081fce58(undefined8 *param_1)

{
  FUN_108141d9c(param_1 + 4);
  *param_1 = &PTR_FUN_110a2fed0;
  func_0x0001081419f4(param_1 + 2);
  return param_1;
}



/* Entry: 1081fce5c; end: 1081fce6f;  */

void FUN_1081fce5c(void)

{
  func_0x0001081fcfb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fce70; end: 1081fce7b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1081fce70(ulong *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long alStack_d8 [4];
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [7];
  
  alStack_88[5] = 0;
  alStack_88[2] = 0;
  alStack_88[1] = 0;
  alStack_88[4] = 0;
  alStack_88[3] = 0;
  plVar5 = param_2;
  FUN_1083b594c(param_2,alStack_88 + 1);
  if ((int)plVar5 == 0) {
    plVar5 = param_2 + 2;
    func_0x0001078bdb50(plVar5);
    plVar6 = param_2 + 2;
    func_0x00010835c6b0(plVar6,plVar5);
    if (plVar6 == (long *)0xffffffffffffffff) {
      *param_1 = 0;
    }
    else {
      plVar7 = param_2;
      (**(code **)(*param_2 + 0xc0))(param_2);
      FUN_1083464d4(alStack_88,plVar6);
      alStack_d8[1] = 0;
      alStack_d8[2] = 0;
      lVar1 = param_2[3];
      lVar2 = param_2[4];
      uVar8 = *(undefined8 *)(alStack_88[0] + 0x18);
      plVar6 = param_2 + 2;
      alStack_d8[3] = lVar1;
      lStack_b8 = lVar2;
      func_0x0001078bdb50();
      uStack_a0 = 0;
      uStack_b0 = uVar8;
      plStack_a8 = plVar6;
      lStack_98 = lVar1;
      lStack_90 = lVar2;
      FUN_10827c3e4(alStack_88 + 1,&uStack_b0);
      FUN_10810a400(&uStack_a0);
      FUN_10810a400(alStack_d8 + 2);
      FUN_10810a400(alStack_d8 + 1);
      plVar6 = param_2;
      FUN_1083b5b58(param_2,plVar7,alStack_88 + 1,0,0,param_3);
      lVar1 = alStack_88[0];
      if (((ulong)plVar6 & 1) == 0) {
        *param_1 = 0;
      }
      else {
        alStack_88[0] = 0;
        alStack_d8[0] = lVar1;
        FUN_1083b81f0(param_1,param_2 + 2,alStack_d8,plVar5);
        func_0x0001078bddf8(alStack_d8);
      }
      func_0x0001078bddf8(alStack_88);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar5 = param_2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_1 = (ulong)param_2;
  }
  func_0x0001083b5f5c();
  return;
}



/* Entry: 1081fce7c; end: 1081fcf03;  */

long FUN_1081fce7c(long param_1)

{
  func_0x000106f47184(param_1 + 0x18);
  FUN_1081fd008(param_1 + 0x10);
  return param_1;
}



/* Entry: 1081fcf04; end: 1081fcf5b;  */

void FUN_1081fcf04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + -8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0x18;
    lVar1 = param_1 + lVar1 * 0x18;
    do {
      lVar1 = lVar1 + -0x18;
      FUN_1081fcf5c(lVar1);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1081fcf5c; end: 1081fcfdb;  */

void FUN_1081fcf5c(int *param_1)

{
  if (*param_1 != 0) {
    func_0x0001081fcf8c(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1081fcfdc; end: 1081fd007;  */

void FUN_1081fcfdc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001081fd000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081fd008; end: 1081fd037;  */

long * FUN_1081fd008(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1081fba48();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081fd038; end: 1081fd063;  */

uint FUN_1081fd038(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  func_0x0001081565d4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1081fd064; end: 1081fd143;  */

uint * FUN_1081fd064(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  puVar6 = param_2;
  FUN_1081fd038();
  uVar4 = param_1[1];
  uVar5 = (uint)puVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  puVar7 = puVar6;
  while( true ) {
    if (uVar2 == 0) {
      return puVar7;
    }
    puVar9 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x18);
    if (*puVar9 == 0) break;
    if ((uVar5 == *puVar9) &&
       (puVar7 = param_2, FUN_1083a3440(param_2,puVar9 + 2), (int)puVar7 != 0)) {
      FUN_1081fcf5c();
      FUN_1083a33c4(puVar9 + 2,param_2);
      uVar8 = *(undefined8 *)(param_2 + 2);
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined8 *)(puVar9 + 4) = uVar8;
      *puVar9 = uVar5;
      return puVar9;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  FUN_1081fd144(puVar9,param_2,puVar6);
  *param_1 = *param_1 + 1;
  return puVar9;
}



/* Entry: 1081fd144; end: 1081fd193;  */

undefined4 * FUN_1081fd144(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_1081fcf5c();
  FUN_1083a33c4(param_1 + 2,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1081fd194; end: 1081fd20b;  */

void FUN_1081fd194(void)

{
  return;
}



/* Entry: 1081fd20c; end: 1081fd257;  */

void FUN_1081fd20c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_1081fd258(&uStack_38,&uStack_28,&uStack_30);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  FUN_1081fd8c4(&uStack_38);
  return;
}



/* Entry: 1081fd258; end: 1081fd2db;  */

void FUN_1081fd258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *unaff_x20;
  
  func_0x0001081fd980();
  *param_4 = 0;
  FUN_1081fd4e0();
  *unaff_x20 = param_1;
  func_0x0001081fd920();
  return;
}



/* Entry: 1081fd2dc; end: 1081fd337;  */

void FUN_1081fd2dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_48 = param_8;
  uStack_40 = param_6;
  uStack_38 = param_3;
  uStack_30 = param_2;
  uStack_24 = param_7;
  FUN_1081fd338(&uStack_50,&uStack_30,&uStack_38,param_4,param_5,&uStack_40,&uStack_24,&uStack_48);
  uVar1 = uStack_50;
  uStack_50 = 0;
  *param_1 = uVar1;
  FUN_1081fd8c4(&uStack_50);
  return;
}



/* Entry: 1081fd338; end: 1081fd3e7;  */

void FUN_1081fd338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *unaff_x20;
  
  func_0x0001081fd980();
  *param_4 = 0;
  FUN_1081fd560();
  *unaff_x20 = param_1;
  func_0x0001081fd920();
  return;
}



/* Entry: 1081fd3e8; end: 1081fd487;  */

void FUN_1081fd3e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [8];
  undefined8 **appuStack_50 [2];
  char cStack_39;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  __ZNSt3__16localeC1Ev(auStack_58);
  __ZNKSt3__16locale4nameEv(appuStack_50,auStack_58);
  ppuStack_38 = appuStack_50[0];
  if (-1 < cStack_39) {
    ppuStack_38 = appuStack_50;
  }
  FUN_1081fd488(&uStack_30,&ppuStack_38,&uStack_28);
  *param_1 = uStack_30;
  uStack_30 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_50);
  __ZNSt3__16localeD1Ev(auStack_58);
  return;
}



/* Entry: 1081fd488; end: 1081fd4df;  */

void FUN_1081fd488(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  FUN_108185138();
  *param_1 = uVar1;
  return;
}



/* Entry: 1081fd4e0; end: 1081fd55f;  */

undefined8
FUN_1081fd4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
             undefined8 *param_5)

{
  long *plVar1;
  undefined8 uStack_38;
  
  uStack_38 = *param_5;
  *param_5 = 0;
  plVar1 = (long *)*param_4;
  (**(code **)(*plVar1 + 0x28))();
  FUN_1081fd560(param_1,param_2,param_3,param_4,&uStack_38,0,(ulong)plVar1 & 0xffffffff,0);
  FUN_1081fd920();
  return param_1;
}



/* Entry: 1081fd560; end: 1081fd567;  */

undefined8 *
FUN_1081fd560(undefined8 *param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
             undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  *param_1 = &PTR_FUN_110a30048;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2 + param_3;
  uVar4 = *param_5;
  *param_5 = 0;
  param_1[4] = uVar4;
  lVar5 = *param_4;
  if (lVar5 == 0) {
    param_1[5] = 0;
    uVar4 = *(undefined8 *)((long)param_4 + 0xf);
    param_1[6] = param_4[1];
    *(undefined8 *)((long)param_1 + 0x37) = uVar4;
  }
  else {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[5] = lVar5;
    uVar4 = *(undefined8 *)((long)param_4 + 0xf);
    param_1[6] = param_4[1];
    *(undefined8 *)((long)param_1 + 0x37) = uVar4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = lVar5;
  *(undefined8 *)((long)param_1 + 0x4f) = *(undefined8 *)((long)param_1 + 0x37);
  param_1[9] = param_1[6];
  param_1[0xb] = 0;
  param_1[0xc] = param_6;
  *(undefined4 *)(param_1 + 0xd) = param_7;
  param_1[0xe] = param_8;
  lStack_38 = *param_4;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1083502dc(param_1 + 5,&lStack_38);
  func_0x0001081fd964();
  uStack_40 = 0;
  FUN_1083502dc(param_1 + 8,&uStack_40);
  func_0x0001081298a0(&uStack_40);
  return param_1;
}



/* Entry: 1081fd568; end: 1081fd6b3;  */

undefined8 *
FUN_1081fd568(undefined8 *param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
             undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  *param_1 = &PTR_FUN_110a30048;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2 + param_3;
  uVar4 = *param_5;
  *param_5 = 0;
  param_1[4] = uVar4;
  lVar5 = *param_4;
  if (lVar5 == 0) {
    param_1[5] = 0;
    uVar4 = *(undefined8 *)((long)param_4 + 0xf);
    param_1[6] = param_4[1];
    *(undefined8 *)((long)param_1 + 0x37) = uVar4;
  }
  else {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[5] = lVar5;
    uVar4 = *(undefined8 *)((long)param_4 + 0xf);
    param_1[6] = param_4[1];
    *(undefined8 *)((long)param_1 + 0x37) = uVar4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = lVar5;
  *(undefined8 *)((long)param_1 + 0x4f) = *(undefined8 *)((long)param_1 + 0x37);
  param_1[9] = param_1[6];
  param_1[0xb] = 0;
  param_1[0xc] = param_6;
  *(undefined4 *)(param_1 + 0xd) = param_7;
  param_1[0xe] = param_8;
  lStack_38 = *param_4;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1083502dc(param_1 + 5,&lStack_38);
  func_0x0001081fd964();
  uStack_40 = 0;
  FUN_1083502dc(param_1 + 8,&uStack_40);
  func_0x0001081298a0(&uStack_40);
  return param_1;
}



/* Entry: 1081fd6b4; end: 1081fd6b7;  */

long FUN_1081fd6b4(long param_1)

{
  func_0x0001081298a0(param_1 + 0x40);
  func_0x0001081298a0(param_1 + 0x28);
  FUN_10812cc0c(param_1 + 0x20);
  return param_1;
}



/* Entry: 1081fd6b8; end: 1081fd6cb;  */

void FUN_1081fd6b8(void)

{
  FUN_1081fd86c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fd6cc; end: 1081fd843;  */

void FUN_1081fd6cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong uVar5;
  long lStack_48;
  long lStack_40;
  
  lVar2 = param_1 + 8;
  FUN_1081fd8a4(lVar2,*(undefined8 *)(param_1 + 0x18));
  plVar1 = (long *)(param_1 + 0x28);
  plVar4 = plVar1;
  FUN_1083503d0(plVar1,lVar2);
  if ((int)plVar4 == 0) {
    plVar4 = (long *)(param_1 + 0x40);
    if ((*plVar4 == 0) || (plVar3 = plVar4, FUN_1083503d0(plVar4,lVar2), (int)plVar3 == 0)) {
      if (*(long *)(param_1 + 0x70) != 0) {
        func_0x0001081fd974();
      }
      func_0x0001081fd928();
      (*extraout_x9)();
      plVar3 = plVar1;
      if (lStack_40 != 0) {
        lStack_48 = lStack_40;
        lStack_40 = 0;
        FUN_1083502dc(plVar4,&lStack_48);
        func_0x0001081fd964();
        plVar3 = plVar4;
      }
      *(long **)(param_1 + 0x58) = plVar3;
      goto LAB_1081fd79c;
    }
    *(long **)(param_1 + 0x58) = plVar4;
  }
  else {
    *(long **)(param_1 + 0x58) = plVar1;
  }
  while( true ) {
    do {
      uVar5 = *(ulong *)(param_1 + 8);
      if (*(ulong *)(param_1 + 0x18) <= uVar5) {
        return;
      }
      lVar2 = param_1 + 8;
      FUN_1081fd8a4(lVar2);
      plVar4 = *(long **)(param_1 + 0x58);
      if (*plVar4 != *(long *)(param_1 + 0x28)) {
        plVar4 = plVar1;
        FUN_1083503d0(plVar1,lVar2);
        if ((int)plVar4 != 0) {
          *(ulong *)(param_1 + 8) = uVar5;
          return;
        }
        plVar4 = *(long **)(param_1 + 0x58);
      }
      FUN_1083503d0(plVar4,lVar2);
    } while ((int)plVar4 != 0);
    if (*(long *)(param_1 + 0x70) != 0) {
      func_0x0001081fd974();
    }
    func_0x0001081fd928();
    (*extraout_x9_00)();
    if (lStack_40 != 0) break;
LAB_1081fd79c:
    func_0x0001081fd96c();
  }
  *(ulong *)(param_1 + 8) = uVar5;
  func_0x0001081fd96c();
  return;
}



/* Entry: 1081fd844; end: 1081fd86b;  */

long FUN_1081fd844(long param_1)

{
  return *(long *)(param_1 + 8) - *(long *)(param_1 + 0x10);
}



/* Entry: 1081fd86c; end: 1081fd8a3;  */

long FUN_1081fd86c(long param_1)

{
  func_0x0001081298a0(param_1 + 0x40);
  func_0x0001081298a0(param_1 + 0x28);
  FUN_10812cc0c(param_1 + 0x20);
  return param_1;
}



/* Entry: 1081fd8a4; end: 1081fd8c3;  */

int FUN_1081fd8a4(int param_1)

{
  int iVar1;
  
  FUN_10841051c();
  iVar1 = 0xfffd;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Entry: 1081fd8c4; end: 1081fd8eb;  */

undefined8 FUN_1081fd8c4(undefined8 param_1)

{
  FUN_1081fd8ec(param_1,0);
  return param_1;
}



/* Entry: 1081fd8ec; end: 1081fd903;  */

void FUN_1081fd8ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1081fd86c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081fd904; end: 1081fd91f;  */

void FUN_1081fd904(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1081fd86c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fd920; end: 1081fd993;  */

undefined8 * FUN_1081fd920(void)

{
  undefined8 in_stack_00000008;
  
  FUN_10812cc30(in_stack_00000008);
  return &stack0x00000008;
}



/* Entry: 1081fd994; end: 1081fd9e3;  */

void FUN_1081fd994(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a300b8;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  uStack_28 = 0;
  *param_1 = puVar1;
  FUN_1081fd9e4(&uStack_28);
  return;
}



/* Entry: 1081fd9e4; end: 1081fda33;  */

long * FUN_1081fd9e4(long *param_1)

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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1081fda34; end: 1081fda3f;  */

void FUN_1081fda34(void)

{
  return;
}



/* Entry: 1081fda40; end: 1081fdab3;  */

void FUN_1081fda40(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001081fdabc();
  *(undefined2 *)(param_1 + 2) = 1;
  *param_1 = &PTR_FUN_110a2b2b0;
  param_1[1] = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1081fdab4; end: 1081fdac7;  */

undefined8 FUN_1081fdab4(void)

{
  return 0;
}



/* Entry: 1081fdac8; end: 1081fde67;  */

void FUN_1081fdac8(float param_1,undefined8 param_2,undefined8 *param_3,long param_4,long *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  float *pfVar12;
  undefined8 **ppuVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  long *in_stack_00000008;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  int *piStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 auStack_90 [4];
  undefined8 *puVar11;
  
  fVar15 = param_1;
  FUN_108350220(auStack_90);
  plVar3 = param_5;
  (**(code **)(*param_5 + 0x20))();
  if (((ulong)plVar3 & 1) == 0) {
    func_0x0001081fdf74(*(undefined8 *)(*param_5 + 0x10));
    (**(code **)(*param_5 + 0x28))(param_5);
    FUN_1081fde68(auStack_90,param_5);
  }
  puVar4 = auStack_90;
  FUN_1081fdea0(puVar4,param_3,param_4,0);
  if (-1 < (int)puVar4) {
    lVar5 = ((ulong)puVar4 & 0xffffffff) << 1;
    __Znam();
    lStack_98 = lVar5;
    FUN_1083a877c(auStack_90[0],param_3,param_4,0,lVar5,puVar4);
    lVar5 = ((ulong)puVar4 & 0xffffffff) << 2;
    __Znam();
    lStack_a0 = lVar5;
    FUN_108350638(auStack_90,lStack_98,puVar4,lVar5,0,0);
    lVar5 = 0;
    lVar14 = 0;
    do {
      fVar16 = 0.0;
      puVar4 = param_3;
      pfVar12 = (float *)(lStack_a0 + lVar5 * 4);
      ppuVar13 = (undefined8 **)0x1;
      puStack_d0 = param_3;
      do {
        puVar11 = puStack_d0;
        if ((undefined8 *)((long)param_3 + param_4) <= puStack_d0) goto LAB_1081fdc74;
        ppuVar6 = &puStack_d0;
        func_0x0001081fdf7c();
        fVar15 = *pfVar12;
        fVar16 = fVar16 + fVar15;
        func_0x0001081fdef0();
        puVar1 = puVar11;
        if (((uint)ppuVar13 & ((uint)ppuVar6 ^ 1)) == 0) {
          puVar1 = puVar4;
        }
        puVar4 = puVar1;
        pfVar12 = pfVar12 + 1;
        ppuVar13 = ppuVar6;
      } while (fVar16 <= param_1);
      puVar4 = puStack_d0;
      if ((uint)ppuVar6 == 0) {
        if (puVar1 == param_3) {
          if (puVar11 <= param_3) goto LAB_1081fdc28;
LAB_1081fdc74:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          puVar11 = puVar1;
        }
      }
      else {
        if (puVar11 != param_3) {
          puVar4 = puVar11;
        }
LAB_1081fdc28:
        while (puStack_f8 = puStack_d0, puStack_d0 < (undefined8 *)((long)param_3 + param_4)) {
          uVar7 = 0;
          func_0x0001081fdf7c();
          func_0x0001081fdef0();
          if ((uVar7 & 1) == 0) break;
          puStack_d0 = puStack_f8;
        }
        lVar8 = (long)puVar4 - (long)puStack_d0;
        puVar11 = puStack_d0;
      }
      lVar10 = (long)puVar11 - (long)param_3;
      lVar8 = lVar10 + lVar8;
      puVar4 = param_3;
      FUN_1084103a4(param_3,lVar8);
      puStack_d0 = auStack_90;
      uStack_c8 = 0;
      func_0x0001081fdeac(auStack_90,param_3,lVar8,0,0);
      lStack_b8 = (long)(int)puVar4;
      uStack_c0 = 0;
      fStack_c4 = fVar15;
      lStack_b0 = lVar14;
      lStack_a8 = lVar8;
      func_0x0001081fdf74(*(undefined8 *)(*in_stack_00000008 + 0x10));
      if (lStack_b8 != 0) {
        func_0x0001081fdf84(*(undefined8 *)(*in_stack_00000008 + 0x18));
      }
      func_0x0001081fdf74(*(undefined8 *)(*in_stack_00000008 + 0x20));
      if (lStack_b8 != 0) {
        (**(code **)(*in_stack_00000008 + 0x28))(&puStack_f8,in_stack_00000008,&puStack_d0);
        _memcpy(puStack_f8,lStack_98 + lVar5 * 2,lStack_b8 << 1);
        puVar9 = (undefined4 *)(lStack_f0 + 4);
        fVar15 = fStack_d8;
        for (lVar8 = 0; lStack_b8 != lVar8; lVar8 = lVar8 + 1) {
          puVar9[-1] = fVar15;
          *puVar9 = uStack_d4;
          fVar15 = fVar15 + *(float *)(lStack_a0 + lVar5 * 4 + lVar8 * 4);
          puVar9 = puVar9 + 2;
        }
        if (piStack_e0 != (int *)0x0) {
          puStack_100 = param_3;
          piVar2 = piStack_e0;
          for (lVar8 = lStack_b8; lVar8 != 0; lVar8 = lVar8 + -1) {
            *piVar2 = ((int)lVar14 - (int)param_3) + (int)puStack_100;
            func_0x0001081fdf7c(&puStack_100);
            piVar2 = piVar2 + 1;
          }
        }
        func_0x0001081fdf84(*(undefined8 *)(*in_stack_00000008 + 0x30));
      }
      func_0x0001081fdf74(*(undefined8 *)(*in_stack_00000008 + 0x38));
      puVar4 = param_3;
      FUN_1084103a4(param_3,lVar10);
      lVar5 = lVar5 + (int)puVar4;
      lVar14 = lVar10 + lVar14;
      param_3 = (undefined8 *)((long)param_3 + lVar10);
      param_4 = param_4 - lVar10;
    } while (param_4 != 0);
    FUN_1081fdf34(&lStack_a0);
    func_0x0001081a3a7c(&lStack_98);
  }
  func_0x0001081298a0(auStack_90);
  return;
}



/* Entry: 1081fde68; end: 1081fde9f;  */

long FUN_1081fde68(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000108162618();
  uVar1 = *(undefined8 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xf) = uVar1;
  return param_1;
}



/* Entry: 1081fdea0; end: 1081fdeb3;  */

/* WARNING: Removing unreachable block (ram,0x0001083a87cc) */
/* WARNING: Removing unreachable block (ram,0x0001083a87d4) */
/* WARNING: Removing unreachable block (ram,0x0001083a87fc) */
/* WARNING: Removing unreachable block (ram,0x0001083a8888) */
/* WARNING: Removing unreachable block (ram,0x0001083a8810) */
/* WARNING: Removing unreachable block (ram,0x0001083a8850) */
/* WARNING: Removing unreachable block (ram,0x0001083a8868) */
/* WARNING: Removing unreachable block (ram,0x0001083a8870) */
/* WARNING: Removing unreachable block (ram,0x0001083a8818) */
/* WARNING: Removing unreachable block (ram,0x0001083a88c8) */
/* WARNING: Removing unreachable block (ram,0x0001083a881c) */
/* WARNING: Removing unreachable block (ram,0x0001083a8830) */
/* WARNING: Removing unreachable block (ram,0x0001083a8838) */
/* WARNING: Removing unreachable block (ram,0x0001083a888c) */
/* WARNING: Removing unreachable block (ram,0x0001083a87dc) */

undefined8 FUN_1081fdea0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    FUN_108350b78(param_2,param_3,param_4);
  }
  return param_2;
}



/* Entry: 1081fdeb4; end: 1081fdee7;  */

void FUN_1081fdeb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_110a30130;
  *param_1 = puVar1;
  return;
}



/* Entry: 1081fdee8; end: 1081fdf33;  */

void FUN_1081fdee8(void)

{
  return;
}



/* Entry: 1081fdf34; end: 1081fdf5b;  */

undefined8 FUN_1081fdf34(undefined8 param_1)

{
  FUN_1081fdf5c(param_1,0);
  return param_1;
}



/* Entry: 1081fdf5c; end: 1081fdf8f;  */

void FUN_1081fdf5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1081fdf90; end: 1081fdfab;  */

void FUN_1081fdf90(long param_1)

{
  FUN_1081fdfac(param_1,0x1000);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1081fdfac; end: 1081fdfbb;  */

void FUN_1081fdfac(long param_1,undefined4 param_2)

{
  FUN_10840f6d0();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



/* Entry: 1081fdfbc; end: 1081fdfe3;  */

undefined8 * FUN_1081fdfbc(undefined8 *param_1)

{
  func_0x0001081fe4e8(param_1 + 7);
  FUN_10840f768(*param_1);
  return param_1;
}



/* Entry: 1081fdfe4; end: 1081fe063;  */

undefined8 FUN_1081fdfe4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_b0 [88];
  undefined8 uStack_58;
  
  uVar1 = 0;
  FUN_1081fe068(auStack_b0,param_1);
  FUN_1081fe618(auStack_b0,param_2);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    func_0x00010840f9b4(param_1);
    uStack_58 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = uStack_58;
  }
  func_0x0001081fe4a4(auStack_b0);
  return uStack_58;
}



/* Entry: 1081fe064; end: 1081fe067;  */

undefined8 * FUN_1081fe064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a30170;
  FUN_10840f118(param_1 + 0xd);
  FUN_10840f118(param_1 + 7);
  FUN_1081fe538(param_1 + 3);
  return param_1;
}



/* Entry: 1081fe068; end: 1081fe127;  */

undefined8 * FUN_1081fe068(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = &PTR_FUN_110a301c8;
  param_1[1] = 0;
  param_1[2] = param_1 + 3;
  *param_1 = &PTR_FUN_110a30170;
  param_1[6] = 0x1138270b0;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  func_0x00010840f9b4(param_2);
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 1081fe128; end: 1081fe13b;  */

void FUN_1081fe128(void)

{
  func_0x0001081fe4a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fe13c; end: 1081fe177;  */

undefined8 FUN_1081fe13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  FUN_1081fe2bc(param_1,param_2,uVar1,0);
  return 0;
}



/* Entry: 1081fe178; end: 1081fe203;  */

undefined8 FUN_1081fe178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010840f37c(param_1 + 0x68);
  lVar1 = *(long *)(param_1 + 0x70) + (long)*(int *)(param_1 + 0x7c) * 0x10;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = param_2;
  _strlen(param_2);
  FUN_1081fe42c(uVar3,param_2,uVar2);
  *(undefined8 *)(lVar1 + -0x10) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = param_3;
  _strlen(param_3);
  FUN_1081fe42c(uVar3,param_3,uVar2);
  *(undefined8 *)(lVar1 + -8) = uVar3;
  return 0;
}



/* Entry: 1081fe204; end: 1081fe2bb;  */

undefined8 FUN_1081fe204(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_1081fe334(param_1);
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1081fe288);
    (*pcVar4)();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar1 * 8 + -8);
  *(int *)(param_1 + 0x4c) = iVar1 + -1;
  lVar2 = 0;
  lVar3 = *(long *)(lVar5 + 8);
  while (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(long *)(lVar3 + 0x10) = lVar2;
    lVar2 = lVar3;
    lVar3 = lVar6;
  }
  *(long *)(lVar5 + 8) = lVar2;
  return 0;
}



/* Entry: 1081fe2bc; end: 1081fe333;  */

void FUN_1081fe2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((0 < *(int *)(param_1 + 0x8c)) && (*(char *)(param_1 + 0x60) == '\x01')) {
    FUN_1081fe334(param_1);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  FUN_1081fe42c(uVar1,param_2,param_3);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  return;
}



/* Entry: 1081fe334; end: 1081fe42b;  */

void FUN_1081fe334(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x7c);
  if ((-1 < (int)uVar1) && (uVar1 >> 0x1c == 0)) {
    lVar8 = *(long *)(param_1 + 0x50);
    lVar7 = (ulong)uVar1 << 4;
    lVar6 = lVar8;
    func_0x0001081865e0(lVar8,lVar7,8);
    *(ulong *)(lVar8 + 8) = lVar6 + (ulong)uVar1 * 0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    func_0x0001081865ac(puVar4,0x28,8);
    *puVar4 = *(undefined8 *)(param_1 + 0x80);
    puVar4[1] = 0;
    *(short *)(puVar4 + 4) = (short)uVar1;
    puVar4[3] = lVar6;
    *(char *)((long)puVar4 + 0x22) = (char)*(undefined4 *)(param_1 + 0x88);
    if (*(long *)(param_1 + 0x58) == 0) {
      puVar4[2] = 0;
      *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    else {
      if (*(int *)(param_1 + 0x4c) == 0) goto LAB_1081fe428;
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8 + -8);
      puVar4[2] = *(undefined8 *)(lVar6 + 8);
      *(undefined8 **)(lVar6 + 8) = puVar4;
    }
    func_0x00010840f37c(param_1 + 0x38);
    *(undefined8 **)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x4c) * 8 + -8) = puVar4;
    if (uVar1 != 0) {
      _memcpy(puVar4[3],*(undefined8 *)(param_1 + 0x70),lVar7);
    }
    puVar5 = (undefined4 *)(param_1 + 0x68);
    uVar2 = *puVar5;
    FUN_10840f118();
    *puVar5 = uVar2;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    return;
  }
  _abort();
LAB_1081fe428:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1081fe42c);
  (*pcVar3)();
}



/* Entry: 1081fe42c; end: 1081fe46b;  */

long FUN_1081fe42c(long param_1,undefined8 param_2,long param_3)

{
  FUN_1081fe46c(param_1,param_3 + 1);
  _memcpy();
  *(undefined1 *)(param_1 + param_3) = 0;
  return param_1;
}



/* Entry: 1081fe46c; end: 1081fe51b;  */

void FUN_1081fe46c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x20 == 0) {
    puVar1 = param_1;
    func_0x0001081865e0(param_1,param_2,1);
    param_1[1] = (long)puVar1 + param_2;
  }
  else {
    _abort();
    *param_1 = &PTR_FUN_110a30170;
    FUN_10840f118(param_1 + 0xd);
    FUN_10840f118(param_1 + 7);
    FUN_1081fe538(param_1 + 3);
  }
  return;
}



/* Entry: 1081fe51c; end: 1081fe537;  */

void FUN_1081fe51c(void)

{
  return;
}



/* Entry: 1081fe538; end: 1081fe563;  */

undefined8 * FUN_1081fe538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a301c8;
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 1081fe564; end: 1081fe567;  */

undefined8 * FUN_1081fe564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a301c8;
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 1081fe568; end: 1081fe57b;  */

void FUN_1081fe568(void)

{
  FUN_1081fe538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081fe57c; end: 1081fe607;  */

void FUN_1081fe57c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0x1138270b0;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    if (uVar1 < 6) {
      FUN_1083a3680(&uStack_28,(&PTR_DAT_110a301e0)[uVar1 - 1]);
    }
    FUN_1081fe608(&uStack_28,param_1 + 0x18);
  }
  FUN_1081fe608(param_2,&uStack_28);
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 1081fe608; end: 1081fe617;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1081fe608(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  uVar6 = (ulong)*(uint *)*param_2;
  if (uVar6 != 0) {
    uVar7 = (ulong)*(uint *)*param_1;
    uVar1 = uVar7 ^ 0xffffffff;
    if (uVar6 + uVar7 >> 0x20 == 0) {
      uVar1 = uVar6;
    }
    if (uVar1 != 0) {
      uVar6 = uVar1 + uVar7;
      if (((uint *)*param_1)[1] == 1 && (uVar6 ^ uVar7) < 4) {
        plVar5 = param_1;
        func_0x0001083a3dbc(param_1,0xffffffffffffffff,(uint *)*param_2 + 2);
        func_0x0001083a3dd4((long)plVar5 + uVar7);
        *(undefined1 *)((long)plVar5 + uVar6) = 0;
        *(int *)*param_1 = (int)uVar6;
      }
      else {
        puVar3 = auStack_58;
        FUN_1083a3310(puVar3,uVar1 + *(uint *)*param_1);
        func_0x0001083a3de0();
        if (uVar7 != 0) {
          func_0x0001083a3d9c(puVar3,*param_1 + 8);
        }
        func_0x0001083a3dd4(puVar3 + uVar7);
        puVar4 = (uint *)*param_1;
        lVar2 = *puVar4 - uVar7;
        if (uVar7 <= *puVar4 && lVar2 != 0) {
          _memcpy(puVar3 + uVar7 + uVar1,(long)puVar4 + uVar7 + 8,lVar2);
          puVar4 = (uint *)*param_1;
        }
        func_0x0001083a3cdc(puVar4);
      }
    }
  }
  return;
}



/* Entry: 1081fe618; end: 1081fe7df;  */

/* WARNING: Removing unreachable block (ram,0x0001081fe668) */

bool FUN_1081fe618(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = (long *)0x0;
  uStack_68 = param_1;
  func_0x0001081fea68(0,&PTR_FUN_110a30238,0);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_60 = plVar4;
  if (plVar4 == (long *)0x0) {
LAB_1081fe79c:
    bVar2 = false;
  }
  else {
    plVar5 = plVar4;
    FUN_1081ff6c8();
    lVar1 = *plVar4;
    *plVar4 = (long)&uStack_68;
    if (plVar4[1] == lVar1) {
      plVar4[1] = (long)&uStack_68;
    }
    plVar4[0xf] = (long)FUN_1081fe7e0;
    plVar4[0x10] = (long)FUN_1081fe848;
    plVar4[0x11] = (long)FUN_1081fe87c;
    plVar4[0x24] = (long)FUN_1081fe980;
    func_0x0001081fea50(*(undefined8 *)(*param_2 + 0x60));
    if ((plVar5 == (long *)0x0) ||
       (plVar4 = param_2, (**(code **)(*param_2 + 0x50))(), (int)plVar4 == 0)) {
      do {
        plVar4 = plStack_60;
        FUN_1081ff934(plStack_60,0x1000);
        if (plVar4 == (long *)0x0) goto LAB_1081fe79c;
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x10))(param_2,plVar4,0x1000);
        plVar4 = param_2;
        (**(code **)(*param_2 + 0x20))();
        plVar7 = plStack_60;
        func_0x0001081ffbe0(plStack_60,plVar5,plVar4);
        iVar3 = (int)plVar7;
      } while (iVar3 != 0 && ((ulong)plVar4 & 1) == 0);
    }
    else {
      func_0x0001081fea50(*(undefined8 *)(*param_2 + 0x60));
      plVar5 = plStack_60;
      plVar7 = plVar4;
      func_0x0001081fea50(*(undefined8 *)(*param_2 + 0x38));
      plVar6 = plVar7;
      func_0x0001081fea50(*(undefined8 *)(*param_2 + 0x58));
      iVar3 = (int)plVar6;
      func_0x0001081fea50(*(undefined8 *)(*param_2 + 0x38));
      FUN_1081ff6fc(plVar5,(long)plVar4 + (long)plVar7,(int)plVar6 - iVar3,1);
      iVar3 = (int)plVar5;
    }
    bVar2 = iVar3 != 0;
  }
  FUN_1081fe98c(&uStack_68);
  return bVar2;
}



/* Entry: 1081fe7e0; end: 1081fe847;  */

void FUN_1081fe7e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  FUN_1081fe9c0();
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2);
  for (puVar1 = (undefined8 *)(param_3 + 8); puVar1[-1] != 0; puVar1 = puVar1 + 2) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,puVar1[-1],*puVar1);
  }
  return;
}


