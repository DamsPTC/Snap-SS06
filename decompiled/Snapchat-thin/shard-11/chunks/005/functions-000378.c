/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086df14c; end: 1086df21f;  */

long FUN_1086df14c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1086df220; end: 1086df477;  */

bool FUN_1086df220(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong in_x9;
  
  puVar6 = (ulong *)(in_x9 & 0xfffffffffffffffc);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    func_0x000107c610b0(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 1086df478; end: 1086df8b3;  */

void FUN_1086df478(undefined8 param_1,long *param_2,long param_3,long *param_4,ulong param_5)

{
  undefined **ppuVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *pbVar8;
  byte extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined **ppuVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  byte extraout_w9;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint uVar10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  uint auStack_68 [6];
  
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = FUN_1086e018c;
  puVar6[1] = FUN_1086e0324;
  puVar6[8] = param_4;
  puVar6[9] = param_5;
  puVar6[6] = param_2;
  puVar6[7] = param_3;
  func_0x000108653f98(puVar6 + 2);
  FUN_108653ba0(param_1,puVar6 + 2);
  if (param_2[0xf] == 0) {
LAB_1086df77c:
    auStack_68[0] = auStack_68[0] & 0xffffff00;
LAB_1086df780:
    FUN_108653be8(puVar6 + 2,auStack_68);
  }
  else {
    plVar7 = (long *)param_2[1];
    auStack_68[0] = *(uint *)(param_3 + 0xa8);
    (**(code **)(*plVar7 + 0x10))
              (plVar7,auStack_68,*(ulong *)(param_3 + 0x60) & 0xfffffffffffffffc,
               1 < (ulong)((param_4[1] - *param_4) / 0x30));
    lVar13 = *param_4;
    if ((param_4[1] - lVar13 == 0x30) && (*(int *)(lVar13 + 0x28) == 1)) {
      ppuVar9 = *(undefined ***)(*(long *)(lVar13 + 0x20) + 0x18);
      ppuVar1 = &PTR_PTR_11326cb58;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar1 = ppuVar9;
      }
      plVar12 = (long *)param_2[0x11];
      func_0x000107c29ee0(auStack_68,ppuVar1);
      (**(code **)(*plVar12 + 0x40))(plVar12,auStack_68);
      func_0x000107c27914(auStack_68);
    }
    iVar16 = (int)plVar7;
    uVar5 = iVar16 == 2;
    if ((bool)uVar5) {
      pbVar8 = (byte *)param_2[7];
      (**(code **)(*(long *)pbVar8 + 0x18))(puVar6 + 5,pbVar8,param_3,param_4,param_5);
      func_0x0001086e03ec();
      do {
        func_0x0001086e03dc();
      } while (extraout_w10_02 != 0);
      func_0x0001086e03cc();
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 10) = 1;
        func_0x0001086e040c();
        lVar13 = *(long *)pbVar8;
        if (lVar13 == 0) {
          func_0x000107c3a5c0();
          lVar13 = *(long *)pbVar8;
        }
        plVar7 = (long *)(param_5 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001086e0424();
            plVar7 = extraout_x8_02;
            uVar10 = extraout_w10_04;
            uVar11 = extraout_x11_02;
          }
          else {
            func_0x0001086e049c();
            plVar7 = extraout_x8_01;
            uVar10 = extraout_w10_03;
            uVar11 = extraout_x11_01;
          }
          if ((uVar11 & 1) != 0) {
            pbVar14 = *(byte **)(param_5 + 0x90);
            bVar2 = pbVar14[1];
            uVar11 = (ulong)bVar2;
            bVar4 = *pbVar14 <= bVar2;
            if (bVar2 == *pbVar14) {
              func_0x0001086e0434();
              bVar2 = extraout_w8;
              if (bVar4) {
                bVar2 = extraout_w9;
              }
              func_0x0001086e0348();
              uVar11 = 0;
              *pbVar8 = bVar2;
              pbVar8[1] = 0;
              pbVar8[8] = 0;
              pbVar8[9] = 0;
              pbVar8[10] = 0;
              pbVar8[0xb] = 0;
              pbVar8[0xc] = 0;
              pbVar8[0xd] = 0;
              pbVar8[0xe] = 0;
              pbVar8[0xf] = 0;
              *(byte **)(pbVar14 + 8) = pbVar8;
              *(byte **)(param_5 + 0x90) = pbVar8;
              pbVar14 = pbVar8;
            }
            pbVar8 = pbVar14 + uVar11 * 0x18 + 0x10;
            pbVar8[0] = 0;
            pbVar8[1] = 0;
            pbVar8[2] = 0;
            pbVar8[3] = 0;
            pbVar8[4] = 0;
            pbVar8[5] = 0;
            pbVar8[6] = 0;
            pbVar8[7] = 0;
            *(undefined8 **)(pbVar14 + uVar11 * 0x18 + 0x18) = puVar6;
            *(long *)(pbVar14 + uVar11 * 0x18 + 0x20) = lVar13;
            goto LAB_1086df830;
          }
        } while ((uVar10 >> 1 & 1) == 0);
      }
      func_0x0001086e0444();
      bVar2 = *pbVar8;
      param_5 = (ulong)bVar2;
      func_0x0001086e0404();
      func_0x0001086e03fc();
      if ((bVar2 & 1) == 0) goto LAB_1086df77c;
      if ((((*(int *)(puVar6[7] + 0xa8) != 0) || (func_0x0001086e04fc(), !(bool)uVar5)) ||
          (lVar13 = puVar6[9], (*(byte *)(lVar13 + 0x68) & 1) != 0)) ||
         ((*(char *)(lVar13 + 0x44) == '\0' ||
          (uVar5 = *(int *)(lVar13 + 0x40) == 0x1f00e3, !(bool)uVar5)))) goto LAB_1086df5a4;
      func_0x0001086e04e8();
      func_0x0001086e04c8();
      param_2 = (long *)puVar6[6];
      FUN_1086df8e8(puVar6 + 5,param_2,puVar6[7],puVar6[8],puVar6[9]);
      func_0x0001086e03ec();
      do {
        func_0x0001086e03dc();
      } while (extraout_w10_05 != 0);
      func_0x0001086e03cc();
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 10) = 2;
        func_0x0001086e040c();
        lVar13 = *param_2;
        if (lVar13 == 0) {
          func_0x000107c3a5c0();
          lVar13 = *param_2;
        }
        plVar7 = (long *)(param_5 + 0x10);
        lVar15 = 1;
        do {
          if (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
            uVar5 = cVar3 == '\0';
            uVar11 = (ulong)-(uint)(byte)uVar5;
            uVar10 = 0;
          }
          else {
            func_0x0001086e049c();
            plVar7 = extraout_x8_03;
            lVar15 = extraout_x9;
            uVar11 = extraout_x11_03;
            uVar10 = extraout_w10_06;
          }
          if ((uVar11 & 1) != 0) goto LAB_1086df7b0;
        } while ((uVar10 >> 1 & 1) == 0);
      }
      func_0x0001086e0444();
    }
    else {
      uVar5 = iVar16 == 1;
      if (!(bool)uVar5) {
        if (iVar16 != 0) goto LAB_1086df78c;
LAB_1086df5a4:
        auStack_68[0] = CONCAT31(auStack_68[0]._1_3_,1);
        goto LAB_1086df780;
      }
      FUN_1086df8e8(puVar6 + 5,param_2,param_3,param_4,param_5);
      func_0x0001086e03ec();
      do {
        func_0x0001086e03dc();
      } while (extraout_w10 != 0);
      func_0x0001086e03cc();
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 10) = 0;
        func_0x0001086e040c();
        lVar13 = *param_2;
        if (lVar13 == 0) {
          func_0x000107c3a5c0();
          lVar13 = *param_2;
        }
        plVar7 = (long *)(param_5 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001086e0424();
            plVar7 = extraout_x8_00;
            uVar10 = extraout_w10_01;
            uVar11 = extraout_x11_00;
          }
          else {
            func_0x0001086e049c();
            plVar7 = extraout_x8;
            uVar10 = extraout_w10_00;
            uVar11 = extraout_x11;
          }
          if ((uVar11 & 1) != 0) {
LAB_1086df7b0:
            lVar15 = *(long *)(param_5 + 0x90);
            func_0x0001086e045c();
            uVar11 = extraout_x8_04;
            if ((bool)uVar5) {
              func_0x0001086e0434();
              func_0x0001086e0348();
              func_0x0001086e0358();
              *(long **)(param_5 + 0x90) = param_2;
              uVar11 = extraout_x8_05;
            }
            lVar15 = lVar15 + (uVar11 & 0xffffffff) * 0x18;
            *(undefined8 *)(lVar15 + 0x10) = 0;
            *(undefined8 **)(lVar15 + 0x18) = puVar6;
            *(long *)(lVar15 + 0x20) = lVar13;
LAB_1086df830:
            *(char *)(*(long *)(param_5 + 0x90) + 1) =
                 *(char *)(*(long *)(param_5 + 0x90) + 1) + '\x01';
            *(undefined8 *)(param_5 + 0x10) = 0;
            return;
          }
        } while ((uVar10 >> 1 & 1) == 0);
      }
      func_0x0001086e0444();
    }
    FUN_1086df8b4(puVar6 + 2,param_2);
    func_0x0001086e0404();
    func_0x0001086e03fc();
  }
LAB_1086df78c:
  func_0x0001086e041c();
  func_0x0001086e044c();
  return;
}



/* Entry: 1086df8b4; end: 1086df8e7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1086df8b4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1086dffdc(*puVar5,puVar5,param_2);
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



/* Entry: 1086df8e8; end: 1086dfa9b;  */

void FUN_1086df8e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  *puVar3 = FUN_1086e00f0;
  puVar3[1] = FUN_1086e0168;
  func_0x000108653f98(puVar3 + 2);
  FUN_108653ba0(param_1,puVar3 + 2);
  plVar4 = *(long **)(param_2 + 0x18);
  uStack_44 = *(undefined4 *)(param_3 + 0xa8);
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,&uStack_44,param_4);
  if (((ulong)plVar4 & 1) == 0) {
    uStack_45 = 1;
    puVar6 = &uStack_45;
  }
  else {
    pbVar5 = *(byte **)(param_2 + 0x18);
    (**(code **)(*(long *)pbVar5 + 0x18))(puVar3 + 5,pbVar5,param_3,param_4,param_5);
    func_0x0001086e03ec();
    do {
      func_0x0001086e03dc();
    } while (extraout_w10 != 0);
    func_0x0001086e03cc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar3 + 6) = 0;
      func_0x0001086e03b8();
      if (*(long *)pbVar5 == 0) {
        func_0x000107c3a5c0();
      }
      plVar4 = (long *)(param_5 + 0x10);
      do {
        if (*plVar4 == 0) {
          func_0x0001086e0424();
          plVar4 = extraout_x8_00;
          uVar2 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001086e049c();
          plVar4 = extraout_x8;
          uVar2 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001086e045c();
          if ((bool)in_ZR) {
            func_0x0001086e0434();
            func_0x0001086e0348();
            func_0x0001086e0358();
            *(byte **)(param_5 + 0x90) = pbVar5;
          }
          func_0x0001086e0374();
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x0001086e0444();
    bVar1 = *pbVar5;
    func_0x0001086e0404();
    func_0x0001086e03fc();
    if ((bVar1 & 1) == 0) {
      uStack_46 = 0;
      puVar6 = &uStack_46;
    }
    else {
      uStack_47 = 1;
      puVar6 = &uStack_47;
    }
  }
  FUN_108653be8(puVar3 + 2,puVar6);
  func_0x0001086e041c();
  func_0x0001086e044c();
  return;
}



/* Entry: 1086dfa9c; end: 1086dfba3;  */

long * FUN_1086dfa9c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x28);
  }
  ppuVar2 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar1[0xd] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[0xd];
  }
  switch(*(undefined4 *)((long)ppuVar2 + 0x1c)) {
  case 0:
  case 1:
    return (long *)0x0;
  default:
    return (long *)0x4;
  case 3:
    plVar3 = *(long **)(param_1 + 0x18);
    break;
  case 4:
    plVar3 = *(long **)(param_1 + 0x28);
    break;
  case 5:
    plVar3 = *(long **)(param_1 + 0x38);
    break;
  case 6:
    plVar3 = *(long **)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0001086dfb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return plVar3;
}



/* Entry: 1086dfba4; end: 1086dfcff;  */

void FUN_1086dfba4(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
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
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_1086e0078;
  puVar2[1] = FUN_1086e00cc;
  func_0x000107c27f94(puVar2 + 2);
  func_0x000107c287c4(param_1,puVar2 + 2);
  plVar3 = *(long **)(param_2 + 0x38);
  (**(code **)(*plVar3 + 0x30))(puVar2 + 5,plVar3,param_3);
  func_0x0001086e03ec();
  do {
    func_0x0001086e03dc();
  } while (extraout_w10 != 0);
  func_0x0001086e03cc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x0001086e03b8();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    plVar4 = (long *)(param_3 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001086e0424();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x0001086e049c();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001086e045c();
        if ((bool)in_ZR) {
          func_0x0001086e0434();
          func_0x0001086e0348();
          func_0x0001086e0358();
          *(long **)(param_3 + 0x90) = plVar3;
        }
        func_0x0001086e0374();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar2 + 4);
  func_0x0001086e0404();
  func_0x0001086e03fc();
  func_0x000107c287c8(puVar2 + 2);
  func_0x0001086e041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1086dfd00; end: 1086dfe17;  */

undefined4 FUN_1086dfd00(long param_1,uint *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  iVar5 = (int)&ppuStack_50;
  uVar2 = *param_2;
  if (uVar2 < 0x26) {
    if ((1L << ((ulong)uVar2 & 0x3f) & 0x201603013bU) == 0) {
      if ((ulong)uVar2 != 2) goto LAB_1086dfe00;
      ppuStack_50 = &PTR_DAT_110a823c8;
      uStack_48 = 0;
      uStack_38 = 0;
      uVar8 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      func_0x000107c30344(&ppuStack_50,puVar4,uVar8);
      iVar1 = 0;
      if (uStack_38._4_4_ == 7) {
        iVar1 = iVar5;
      }
      if (((iVar1 == 1) && (*(int *)(lStack_40 + 0x30) == 0xb)) &&
         ((*(uint *)(lStack_40 + 0x10) >> 1 & 1) != 0)) {
        uVar8 = *(ulong *)(*(long *)(lStack_40 + 0x20) + 0x10) & 0xfffffffffffffffc;
        lVar7 = (long)*(char *)(uVar8 + 0x17);
        if (lVar7 < 0) {
          lVar7 = *(long *)(uVar8 + 8);
        }
        if (((*(uint *)(lStack_40 + 0x10) & 1) != 0) && (lVar7 != 0)) {
          bVar3 = *(byte *)(*(long *)(lStack_40 + 0x18) + 0x10);
          func_0x0001086e04b8();
          if (((bVar3 & 1) == 0) || ((param_4 != 0 && (*param_2 == 0)))) goto LAB_1086dfd40;
          goto LAB_1086dfe00;
        }
      }
      func_0x0001086e04b8();
    }
LAB_1086dfd40:
    uVar6 = 2;
  }
  else {
LAB_1086dfe00:
    uVar6 = *(undefined4 *)(param_1 + 8);
  }
  return uVar6;
}



/* Entry: 1086dfe18; end: 1086dfe1b;  */

undefined8 * FUN_1086dfe18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65620;
  func_0x000107c29118(param_1 + 0x11);
  func_0x000107c286cc(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c286e0(param_1 + 0xb);
  func_0x0001086dfeac(param_1 + 9);
  func_0x0001086dfeac(param_1 + 7);
  func_0x0001086dfeac(param_1 + 5);
  func_0x0001086dfeac(param_1 + 3);
  func_0x000107c2924c(param_1 + 1);
  return param_1;
}



/* Entry: 1086dfe1c; end: 1086dfe2f;  */

void FUN_1086dfe1c(void)

{
  FUN_1086dfe38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dfe30; end: 1086dfe37;  */

void FUN_1086dfe30(void)

{
  return;
}



/* Entry: 1086dfe38; end: 1086dfecf;  */

undefined8 * FUN_1086dfe38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65620;
  func_0x000107c29118(param_1 + 0x11);
  func_0x000107c286cc(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c286e0(param_1 + 0xb);
  func_0x0001086dfeac(param_1 + 9);
  func_0x0001086dfeac(param_1 + 7);
  func_0x0001086dfeac(param_1 + 5);
  func_0x0001086dfeac(param_1 + 3);
  func_0x000107c2924c(param_1 + 1);
  return param_1;
}



/* Entry: 1086dfed0; end: 1086dfed3;  */

void FUN_1086dfed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a656d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086dfed4; end: 1086dfee7;  */

void FUN_1086dfed4(void)

{
  func_0x0001086dfef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dfee8; end: 1086dfeff;  */

void FUN_1086dfee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dff00; end: 1086dff13;  */

void FUN_1086dff00(void)

{
  func_0x0001086dff1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dff14; end: 1086dff2b;  */

void FUN_1086dff14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dff2c; end: 1086dff3f;  */

void FUN_1086dff2c(void)

{
  func_0x0001086dff48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dff40; end: 1086dff57;  */

void FUN_1086dff40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dff58; end: 1086dff6b;  */

void FUN_1086dff58(void)

{
  func_0x0001086dff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dff6c; end: 1086dff87;  */

void FUN_1086dff6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dff88; end: 1086dff9b;  */

void FUN_1086dff88(void)

{
  func_0x0001086dffa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dff9c; end: 1086dffb3;  */

void FUN_1086dff9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dffb4; end: 1086dffc7;  */

void FUN_1086dffb4(void)

{
  func_0x0001086dffd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086dffc8; end: 1086dffdb;  */

void FUN_1086dffc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086dffdc; end: 1086e0077;  */

long FUN_1086dffdc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0x99) == '\x01') {
        *(undefined1 *)(param_1 + 0x99) = 0;
      }
      *(undefined1 *)(param_1 + 0x98) = *param_3;
      *(undefined1 *)(param_1 + 0x99) = 1;
      *(undefined8 *)(param_1 + 0x10) = 2;
      func_0x000107c31508(param_1,param_2);
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1086e0078; end: 1086e00cb;  */

void FUN_1086e0078(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001086e0404();
  func_0x0001086e03fc();
  func_0x000107c287c8(param_1 + 0x10);
  func_0x0001086e041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e00cc; end: 1086e00ef;  */

void FUN_1086e00cc(void)

{
  func_0x0001086e047c();
  func_0x0001086e03fc();
  func_0x0001086e041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e00f0; end: 1086e0167;  */

void FUN_1086e00f0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 0x20);
  FUN_1086c1de4();
  bVar1 = *pbVar2;
  func_0x0001086e0404();
  func_0x0001086e03fc();
  if ((bVar1 & 1) != 0) {
    func_0x0001086e04d4();
  }
  FUN_108653be8();
  func_0x0001086e041c();
  func_0x0001086e044c();
  return;
}



/* Entry: 1086e0168; end: 1086e018b;  */

void FUN_1086e0168(void)

{
  func_0x0001086e047c();
  func_0x0001086e03fc();
  func_0x0001086e041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e018c; end: 1086e0323;  */

void FUN_1086e018c(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  uint extraout_w8;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  
  pbVar4 = param_1;
  if (param_1[0x50] == 2) {
LAB_1086e0278:
    func_0x0001086e0444();
  }
  else {
    uVar3 = param_1[0x50] == 1;
    if ((bool)uVar3) {
      func_0x0001086e0444();
      bVar1 = *pbVar4;
      func_0x0001086e0404();
      func_0x0001086e03fc();
      if ((bVar1 & 1) != 0) {
        if ((((*(int *)(*(long *)(param_1 + 0x38) + 0xa8) == 0) &&
             (func_0x0001086e04fc(), (bool)uVar3)) &&
            (lVar5 = *(long *)(param_1 + 0x48), (*(byte *)(lVar5 + 0x68) & 1) == 0)) &&
           ((*(char *)(lVar5 + 0x44) != '\0' &&
            (uVar3 = *(int *)(lVar5 + 0x40) == 0x1f00e3, (bool)uVar3)))) {
          func_0x0001086e04e8();
          func_0x0001086e04c8();
          pbVar4 = *(byte **)(param_1 + 0x30);
          FUN_1086df8e8(param_1 + 0x28,pbVar4,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
          func_0x0001086e03ec();
          do {
            func_0x0001086e03dc();
          } while (extraout_w10 != 0);
          func_0x0001086e03cc();
          if ((extraout_w8 >> 1 & 1) == 0) {
            param_1[0x50] = 2;
            func_0x0001086e03b8();
            if (*(long *)pbVar4 == 0) {
              func_0x000107c3a5c0();
            }
            plVar6 = (long *)((ulong)bVar1 + 0x10);
            do {
              if (*plVar6 == 0) {
                func_0x0001086e0424();
                plVar6 = extraout_x8_00;
                uVar2 = extraout_w10_01;
                uVar7 = extraout_w11_00;
              }
              else {
                func_0x0001086e049c();
                plVar6 = extraout_x8;
                uVar2 = extraout_w10_00;
                uVar7 = extraout_w11;
              }
              if ((uVar7 & 1) != 0) {
                func_0x0001086e045c();
                if ((bool)uVar3) {
                  func_0x0001086e0434();
                  func_0x0001086e0348();
                  func_0x0001086e0358();
                  *(byte **)((ulong)bVar1 + 0x90) = pbVar4;
                }
                func_0x0001086e0374();
                return;
              }
            } while ((uVar2 >> 1 & 1) == 0);
          }
          goto LAB_1086e0278;
        }
        func_0x0001086e04d4();
      }
      FUN_108653be8();
      goto LAB_1086e02b8;
    }
    func_0x0001086e0444();
  }
  FUN_1086df8b4(param_1 + 0x10,pbVar4);
  func_0x0001086e0404();
  func_0x0001086e03fc();
LAB_1086e02b8:
  func_0x0001086e041c();
  func_0x0001086e044c();
  return;
}



/* Entry: 1086e0324; end: 1086e0347;  */

void FUN_1086e0324(void)

{
  func_0x0001086e047c();
  func_0x0001086e03fc();
  func_0x0001086e041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e0348; end: 1086e050f;  */

void FUN_1086e0348(void)

{
  int unaff_w23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
  return;
}



/* Entry: 1086e0510; end: 1086e083b;  */

undefined8
FUN_1086e0510(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 auStack_3e0 [2];
  undefined8 uStack_3d8;
  undefined1 uStack_3d0;
  char cStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined1 auStack_2d0 [40];
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_294;
  undefined1 uStack_280;
  undefined1 auStack_218 [4];
  undefined1 uStack_214;
  undefined1 uStack_210;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  char acStack_208 [8];
  undefined1 auStack_200 [32];
  long lStack_1e0;
  char cStack_1d8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_110 [184];
  char cStack_58;
  
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x30);
  }
  if (*(char *)(ppuVar1 + 0x28) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    uVar4 = 0x840295;
LAB_1086e05e4:
    FUN_1086e083c(uVar3,uVar4);
    return 1;
  }
  lVar5 = *(long *)(param_2 + 0x60);
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x28);
  }
  iVar2 = (int)ppuVar1;
  func_0x000107c29dec();
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    uVar4 = 0x840296;
    goto LAB_1086e05e4;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    func_0x000107c287d8(uVar3);
    lVar5 = param_2;
    FUN_1088425e4(param_2,uVar3);
    FUN_108842468(param_2,*(undefined8 *)(param_1 + 0xf0),(uint)lVar5 ^ 1 | 0x100);
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    uVar4 = 0x840297;
    goto LAB_1086e05e4;
  }
  func_0x000107c278b8(auStack_3e0,&UNK_10f4b15a4);
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3a0 = 0x3f800000;
  FUN_1086a32e0(acStack_208,param_1 + 0x60,param_1 + 0xf0,param_4,param_2,auStack_3e0,&uStack_3c0);
  func_0x00010867bb84(&uStack_3c0);
  func_0x0001086e0a50();
  if (acStack_208[0] == '\x01') {
    if ((cStack_58 == '\x01') && (cStack_1d8 == '\x01' && lStack_1e0 == lVar5)) {
      func_0x0001086e0a48(*(undefined8 *)(param_1 + 0xf0),0x294);
      uVar3 = 0;
      goto LAB_1086e07ec;
    }
    func_0x0001086e0a48(*(undefined8 *)(param_1 + 0xf0),0x298);
  }
  else {
    auStack_218[0] = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_20b = 0;
    uStack_209 = *(int *)(param_3 + 0x108) == 1;
    FUN_108842828(param_4,lVar5,param_2,param_1 + 0x80,param_1 + 0x90,param_5,auStack_218);
    if ((int)param_4 != 2) {
      if (cStack_58 != '\x01') {
        (**(code **)(**(long **)(param_1 + 0x120) + 0x10))();
      }
      FUN_1086a2b34(&uStack_3c0);
      if (cStack_58 == '\x01') {
        uStack_380 = uStack_1c0;
        uStack_378 = uStack_1b8;
        FUN_1086aa298(auStack_2d0,auStack_110);
      }
      uStack_280 = (int)param_4 == 1;
      FUN_10869a5c8(auStack_3e0,param_2,param_3,param_1 + 0x18,*(undefined8 *)(param_1 + 0x60));
      if (cStack_3c8 == '\x01') {
        uStack_2a8 = uStack_3d8;
        uStack_2a0 = uStack_3d0;
        uStack_298 = auStack_3e0[0];
        uStack_294 = 1;
      }
      FUN_108864424(*(undefined8 *)(param_1 + 0x60),&uStack_3c0,0);
      func_0x0001086e0a48(*(undefined8 *)(param_1 + 0xf0),0x293);
      func_0x000107c288e0(&uStack_3c0);
      uVar3 = 2;
      goto LAB_1086e07ec;
    }
    func_0x0001086e0a48(*(undefined8 *)(param_1 + 0xf0),0x299);
  }
  uVar3 = 1;
LAB_1086e07ec:
  func_0x000107c288dc(auStack_200);
  return uVar3;
}



/* Entry: 1086e083c; end: 1086e0963;  */

void FUN_1086e083c(long *param_1,uint param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110a609a8;
  uStack_90 = 0;
  uStack_78 = 0x2ce;
  func_0x000107c278b8(auStack_b0,"success");
  pppuVar1 = &ppuStack_98;
  func_0x000107c28818(pppuVar1,auStack_b0,param_2 < 0x840295);
  func_0x000107c278b8(auStack_48,PTR_DAT_113268fd8);
  func_0x000107c28824(pppuVar1,auStack_48,(&PTR_s_success_113269028)[param_2 & 0x29f]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(auStack_70,pppuVar1);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_70);
  func_0x000107c2882c(auStack_70);
  func_0x0001086e0a50();
  func_0x000107c2882c(&ppuStack_98);
  return;
}



/* Entry: 1086e0964; end: 1086e09bf;  */

bool FUN_1086e0964(long param_1,long param_2)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\x01') &&
     (*(long *)(param_1 + 0x58) == *(long *)(param_2 + 0x58))) {
    FUN_10869c864();
    FUN_10869c864(param_2);
    bVar1 = param_1 != param_2;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1086e09c0; end: 1086e0a47;  */

void FUN_1086e09c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  if (*(long *)(param_4 + 0x28) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10867b87c(auStack_48,*(undefined8 *)(param_4 + 0x18),param_4 + 0x20);
    FUN_108861dec(param_1,param_2,param_3,auStack_48,1);
    func_0x000107c27ae4(auStack_48);
  }
  return;
}



/* Entry: 1086e0a48; end: 1086e0a5f;  */

void FUN_1086e0a48(long *param_1,uint param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110a609a8;
  uStack_90 = 0;
  uStack_78 = 0x2ce;
  func_0x000107c278b8(auStack_b0,"success");
  pppuVar1 = &ppuStack_98;
  func_0x000107c28818(pppuVar1,auStack_b0,(param_2 & 0xffff | 0x840000) < 0x840295);
  func_0x000107c278b8(auStack_48,PTR_DAT_113268fd8);
  func_0x000107c28824(pppuVar1,auStack_48,(&PTR_s_success_113269028)[param_2 & 0x29f]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(auStack_70,pppuVar1);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_70);
  func_0x000107c2882c(auStack_70);
  func_0x0001086e0a50();
  func_0x000107c2882c(&ppuStack_98);
  return;
}



/* Entry: 1086e0a60; end: 1086e0ad3;  */

long FUN_1086e0a60(long param_1)

{
  if (*(char *)(param_1 + 0x238) == '\x01') {
    FUN_10869e488();
  }
  else {
    func_0x000104be6f34();
  }
  return param_1;
}



/* Entry: 1086e0ad4; end: 1086e0bb7;  */

void FUN_1086e0ad4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  int iStack_40;
  undefined1 uStack_3c;
  
  iVar1 = (int)param_3 + 0x50;
  func_0x000107c29e2c(&uStack_80);
  func_0x000107c32870(*(undefined8 *)(param_3 + 0x78));
  uStack_3c = *(undefined1 *)(param_3 + 0x148);
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_48 = cStack_68 == '\x01';
  if ((bool)uStack_48) {
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_50 = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
  }
  iStack_40 = iVar1;
  func_0x000107c29268(param_1,param_2,param_3,&uStack_60,0);
  func_0x000107c32880();
  func_0x000107c279a4(&uStack_80);
  func_0x000107c2925c(param_2,param_3,0,param_1);
  *(undefined1 *)(param_1 + 0x4a6) = 0;
  return;
}



/* Entry: 1086e0bb8; end: 1086e0c53;  */

undefined4 FUN_1086e0bb8(uint param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  
  FUN_10883a06c();
  uVar1 = 7;
  if ((param_1 & (param_4 ^ 1)) == 0) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1086e0c54; end: 1086e0c87;  */

void FUN_1086e0c54(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = *param_2;
  FUN_1086e0c88(*param_3,&DAT_10f2fb62f,&uStack_14);
  return;
}



/* Entry: 1086e0c88; end: 1086e0cd3;  */

void FUN_1086e0c88(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong auStack_30 [2];
  
  auStack_30[0] = (ulong)*param_3;
  auStack_30[1] = 0;
  uVar1 = param_2;
  func_0x000107c2793c();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107c28264(param_1,&uStack_40,1,auStack_30);
  return;
}



/* Entry: 1086e0cd4; end: 1086e0d4b;  */

long FUN_1086e0cd4(void)

{
  long unaff_x21;
  
  if (*(char *)(unaff_x21 + 0x308) == '\x01') {
    FUN_10869e488();
  }
  else {
    func_0x000104be6f34(unaff_x21 + 0xd0,&stack0x00000020);
  }
  return unaff_x21 + 0xd0;
}



/* Entry: 1086e0d4c; end: 1086e1537;  */

void FUN_1086e0d4c(long param_1,undefined ******param_2,undefined ******param_3,
                  undefined ******param_4)

{
  undefined **ppuVar1;
  undefined *****pppppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined ******ppppppuVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined ******ppppppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *****pppppuVar12;
  undefined ******ppppppuVar13;
  undefined ***pppuVar14;
  undefined ******ppppppuVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar16;
  undefined *****pppppuVar17;
  undefined ******ppppppuVar18;
  undefined1 auStack_488 [24];
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined1 auStack_448 [40];
  undefined *****pppppuStack_420;
  undefined *****pppppuStack_418;
  undefined *****pppppuStack_410;
  undefined ****ppppuStack_408;
  undefined1 *puStack_400;
  code *pcStack_3f8;
  undefined ****ppppuStack_3f0;
  undefined ****ppppuStack_3e8;
  undefined *****pppppuStack_3e0;
  undefined *****pppppuStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [32];
  long lStack_378;
  long lStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined4 uStack_340;
  undefined4 auStack_338 [116];
  byte bStack_168;
  undefined ****ppppuStack_160;
  undefined ****ppppuStack_158;
  undefined ****ppppuStack_150;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  undefined ****ppppuStack_130;
  undefined ****appppuStack_128 [5];
  byte bStack_fc;
  char cStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ****ppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined **ppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined4 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_f0 = (undefined ***)0x0;
  lVar5 = param_1;
  ppppppuVar9 = param_2;
  func_0x000107c28258();
  uStack_e0 = 1;
  lStack_e8 = lVar5;
  if (*param_3 == param_3[1]) {
    auStack_338[0] = 4;
    pppppuVar12 = *(undefined ******)(param_1 + 0x80);
    ppppppuVar15 = (undefined ******)auStack_338;
    func_0x0001086e20ec();
  }
  else {
    ppppppuVar9 = param_2;
    FUN_10885edd8(auStack_338,*(undefined8 *)(param_1 + 0x50));
    FUN_108663a10(appppuStack_128,auStack_338);
    FUN_108656820(auStack_338);
    if ((cStack_f8 == '\x01') && ((bStack_fc & 1) == 0)) {
      ppppuStack_138 = (undefined ****)0x0;
      ppppuStack_140 = (undefined ****)0x0;
      ppppuStack_130 = (undefined ****)0x0;
      ppppuStack_158 = (undefined ****)0x0;
      ppppuStack_160 = (undefined ****)0x0;
      ppppuStack_150 = (undefined ****)0x0;
      FUN_1086b3d70(&ppppuStack_140,(long)param_3[1] - (long)*param_3 >> 3);
      FUN_1086e162c(&ppppuStack_160,(long)param_3[1] - (long)*param_3 >> 3);
      ppppppuVar9 = param_2;
      func_0x000107c29f64(auStack_338,*(undefined8 *)(param_1 + 0x50),param_2,2);
      if ((bStack_168 & 1) == 0) {
        pppppuStack_a0 = (undefined *****)CONCAT44(pppppuStack_a0._4_4_,7);
        ppppppuVar15 = &pppppuStack_a0;
        func_0x0001086e20ec(*(undefined8 *)(param_1 + 0x80));
      }
      else {
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_340 = 0x3f800000;
        FUN_108861dec(&lStack_378,*(undefined8 *)(param_1 + 0x50),param_2,param_3,0);
        ppppppuVar6 = *(undefined *******)(param_1 + 0x70);
        func_0x0001086e213c();
        (*extraout_x8)();
        func_0x000107c29ee4(auStack_398,param_1 + 0x18);
        for (lVar5 = lStack_378; lVar5 != lStack_370; lVar5 = lVar5 + 0x1a8) {
          if (*(char *)(lVar5 + 0x28) != '\x01') {
            pppppuStack_a0 = (undefined *****)CONCAT44(pppppuStack_a0._4_4_,7);
            ppppppuVar15 = &pppppuStack_a0;
            func_0x0001086e20ec(*(undefined8 *)(param_1 + 0x80));
            ppppppuVar13 = param_3;
            goto LAB_1086e1368;
          }
          ppuVar1 = &PTR_PTR_113286e08;
          if (*(undefined ***)(lVar5 + 0x80) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(lVar5 + 0x80);
          }
          if (((ulong)ppuVar1[0x28] & 1) == 0) {
            uVar8 = 0;
            if (*(ulong *)(lVar5 + 0x78) != 0) {
              uVar8 = *(ulong *)(lVar5 + 0x78);
            }
            func_0x000107c29dec();
            if ((uVar8 & 1) != 0) goto LAB_1086e0f38;
            puVar7 = auStack_338;
            FUN_1086a1f74(puVar7,lVar5,ppppppuVar6,auStack_398);
            if (((ulong)puVar7 & 1) != 0) goto LAB_1086e0f38;
            func_0x000107c278b8(&pppppuStack_a0,&DAT_10f4bdfd4);
            uVar8 = lVar5 + 200;
            func_0x000107c278d0(uVar8,&pppppuStack_a0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
            if ((uVar8 & 1) == 0) goto LAB_1086e0f38;
            FUN_1086e16e8(param_1,auStack_338,appppuStack_128,lVar5,&ppppuStack_140);
          }
          else {
LAB_1086e0f38:
            pppppuStack_a0 = (undefined *****)((ulong)pppppuStack_a0 & 0xffffffffffffff00);
            FUN_1086e169c(&ppppuStack_160,lVar5 + 0x20,&pppppuStack_a0);
          }
          param_2 = (undefined ******)(lVar5 + 0x20);
          FUN_10867b1ac(&uStack_360);
        }
        plVar16 = *(long **)(param_1 + 0x80);
        pppppuStack_90 = (undefined *****)0x0;
        pppppuStack_88 = (undefined *****)0x0;
        pppppuStack_a0 = (undefined *****)&PTR_FUN_110a609a8;
        ppuStack_98 = (undefined **)0x0;
        uStack_80 = 0xfe;
        func_0x000107c278b8(auStack_3b0,&UNK_10f4b0eff);
        uVar8 = uStack_348 & 0xffffffff;
        func_0x000107c28af4(uVar8);
        ppppppuVar9 = &pppppuStack_a0;
        func_0x000107c28824(ppppppuVar9,auStack_3b0,uVar8);
        puVar10 = auStack_3c8;
        func_0x000107c278b8(puVar10,&UNK_10f4b163f);
        func_0x0001086e2104(ppppuStack_158);
        func_0x000107c28824(ppppppuVar9,auStack_3c8,puVar10);
        pppppuVar12 = (undefined *****)&pppuStack_f0;
        func_0x000107c2825c();
        ppppppuVar15 = (undefined ******)&ppppuStack_c8;
        ppppuStack_c8 = (undefined ****)pppppuVar12;
        (**(code **)(*plVar16 + 0x18))(plVar16,ppppppuVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b0);
        func_0x000107c2882c(&pppppuStack_a0);
        ppppppuVar13 = (undefined ******)*param_3;
        ppppppuVar6 = (undefined ******)param_3[1];
        if (uStack_348 == (long)ppppppuVar6 - (long)ppppppuVar13 >> 3) {
          ppppppuVar15 = (undefined ******)&ppppuStack_140;
          param_2 = param_4;
          FUN_1086e1898(*(undefined8 *)(param_1 + 0x80),param_4,ppppppuVar15,&ppppuStack_160);
        }
        else {
          pppppuStack_3e0 = (undefined *****)0x0;
          pppppuStack_3d8 = (undefined *****)0x0;
          uStack_3d0 = 0;
          for (; ppppppuVar13 != ppppppuVar6; ppppppuVar13 = ppppppuVar13 + 1) {
            pppppuStack_a0 = *ppppppuVar13;
            puVar11 = &uStack_360;
            func_0x00010867b2d8(puVar11,&pppppuStack_a0);
            if (((ulong)puVar11 & 1) == 0) {
              func_0x000107c28944(&pppppuStack_3e0,&pppppuStack_a0);
            }
          }
          ppppuStack_c8 = (undefined ****)0x0;
          ppppuStack_c0 = (undefined ****)0x0;
          pppppuVar12 = *(undefined ******)(param_1 + 0x10);
          if ((pppppuVar12 == (undefined *****)0x0) ||
             (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_c0 = (undefined ****)pppppuVar12,
             pppppuVar12 == (undefined *****)0x0)) {
            pppppuVar17 = (undefined *****)0x0;
            pppppuVar12 = (undefined *****)0x0;
          }
          else {
            pppppuVar17 = *(undefined ******)(param_1 + 8);
            ppppuStack_c8 = (undefined ****)pppppuVar17;
            do {
              func_0x0001086e20a0();
            } while (extraout_w10 != 0);
          }
          pppppuStack_b0 = (undefined *****)0x0;
          pppppuStack_a8 = (undefined *****)0x0;
          pppppuStack_a0 = (undefined *****)0x0;
          ppuStack_98 = (undefined **)0x0;
          ppppuStack_3f0 = (undefined ****)pppppuVar17;
          ppppuStack_3e8 = (undefined ****)pppppuVar12;
          func_0x0001086e1f28(&pppppuStack_a0);
          func_0x0001086e1f28(&pppppuStack_b0);
          func_0x000107c29280(&ppppuStack_c8);
          uVar8 = (long)pppppuStack_3d8 - (long)pppppuStack_3e0 >> 3;
          pppppuVar2 = (undefined *****)0x1;
          if (200 < uVar8) {
            pppppuVar2 = (undefined *****)((uVar8 - 1) / 200 + 1);
          }
          ppppppuVar13 = (undefined ******)0x80;
          __Znwm();
          *ppppppuVar13 = pppppuVar17;
          ppppppuVar13[1] = pppppuVar12;
          if (pppppuVar12 != (undefined *****)0x0) {
            do {
              func_0x0001086e20a0();
            } while (extraout_w10_00 != 0);
          }
          func_0x000107c27994(ppppppuVar13 + 2,appppuStack_128);
          ppppppuVar13[6] = (undefined *****)ppppuStack_138;
          ppppppuVar13[5] = (undefined *****)ppppuStack_140;
          ppppppuVar13[7] = (undefined *****)ppppuStack_130;
          ppppuStack_130 = (undefined ****)0x0;
          ppppuStack_138 = (undefined ****)0x0;
          ppppuStack_140 = (undefined ****)0x0;
          ppppppuVar13[9] = (undefined *****)ppppuStack_158;
          ppppppuVar13[8] = (undefined *****)ppppuStack_160;
          ppppppuVar13[10] = (undefined *****)ppppuStack_150;
          ppppuStack_160 = (undefined ****)0x0;
          ppppuStack_158 = (undefined ****)0x0;
          ppppuStack_150 = (undefined ****)0x0;
          pppppuVar12 = param_4[1];
          pppppuVar17 = *param_4;
          ppppppuVar13[0xc] = param_4[1];
          ppppppuVar13[0xb] = pppppuVar17;
          if (pppppuVar12 != (undefined *****)0x0) {
            do {
              func_0x0001086e20a0();
            } while (extraout_w10_01 != 0);
          }
          *(undefined1 *)(ppppppuVar13 + 0xd) = 0;
          *(undefined1 *)((long)ppppppuVar13 + 0x6c) = 0;
          ppppppuVar13[0xe] = (undefined *****)0x0;
          ppppppuVar13[0xf] = pppppuVar2;
          param_4 = (undefined ******)0x20;
          pppppuStack_b0 = (undefined *****)ppppppuVar13;
          pppppuStack_a0 = (undefined *****)ppppppuVar13;
          __Znwm();
          ppppppuVar9 = param_4 + 1;
          *ppppppuVar9 = (undefined *****)0x0;
          *param_4 = (undefined *****)&PTR_FUN_110a65938;
          param_4[2] = (undefined *****)0x0;
          param_4[3] = (undefined *****)ppppppuVar13;
          pppppuStack_a0 = (undefined *****)0x0;
          ppppppuVar6 = &pppppuStack_a0;
          pppppuStack_a8 = (undefined *****)param_4;
          func_0x0001086e1ff4(&pppppuStack_a0);
          if (pppppuVar2 < (undefined *****)0x2) {
            ppppppuVar6 = *(undefined *******)(param_1 + 0x30);
            param_2 = *(undefined *******)(param_1 + 0x40);
            func_0x0001086e213c();
            (*extraout_x8_01)();
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
              if (bVar4) {
                *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            pppppuStack_a0 = (undefined *****)0x1086e205c;
            ppuStack_98 = &PTR_DAT_110a659b8;
            ppppuStack_c8 = (undefined ****)0x0;
            ppppuStack_c0 = (undefined ****)0x0;
            ppppppuVar15 = (undefined ******)appppuStack_128;
            pppppuStack_90 = (undefined *****)ppppppuVar13;
            pppppuStack_88 = (undefined *****)param_4;
            (*(code *)(*ppppppuVar6)[0x13])
                      (ppppppuVar6,param_2,ppppppuVar15,&pppppuStack_3e0,&pppppuStack_a0);
            func_0x0001086e20dc();
            func_0x0001086e2020(&ppppuStack_c8);
          }
          else {
            param_2 = (undefined ******)pppppuStack_3e0;
            for (pppppuVar12 = (undefined *****)0x0; pppppuVar12 != pppppuVar2;
                pppppuVar12 = (undefined *****)((long)pppppuVar12 + 1)) {
              param_4 = (undefined ******)pppppuStack_3d8;
              if (param_2 + 200 <= pppppuStack_3d8) {
                param_4 = param_2 + 200;
              }
              FUN_1086e1dd8(&ppppuStack_c8,param_2,param_4);
              ppppppuVar13 = *(undefined *******)(param_1 + 0x30);
              func_0x0001086e213c(*(undefined8 *)(param_1 + 0x40));
              (*extraout_x8_00)();
              ppppppuVar9 = (undefined ******)pppppuStack_b0;
              ppppppuVar18 = (undefined ******)pppppuStack_a8;
              if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
                do {
                  func_0x0001086e20a0();
                } while (extraout_w10_02 != 0);
              }
              pppppuStack_a0 = (undefined *****)FUN_1086e2044;
              ppuStack_98 = &PTR_DAT_110a659a0;
              uStack_d8 = 0;
              uStack_d0 = 0;
              ppppppuVar15 = (undefined ******)appppuStack_128;
              pppppuStack_90 = (undefined *****)ppppppuVar9;
              pppppuStack_88 = (undefined *****)ppppppuVar18;
              (*(code *)(*ppppppuVar13)[0x13])(ppppppuVar13);
              func_0x0001086e20cc();
              func_0x0001086e2020(&uStack_d8);
              func_0x000107c27ae4(&ppppuStack_c8);
              param_2 = param_4;
            }
          }
          func_0x0001086e2020(&pppppuStack_b0);
          func_0x0001086e1f28(&ppppuStack_3f0);
          func_0x000107c27ae4(&pppppuStack_3e0);
        }
LAB_1086e1368:
        func_0x000107c2a2e0(auStack_398);
        func_0x00010867b9fc(&lStack_378);
        func_0x00010867bb84(&uStack_360);
        ppppppuVar9 = param_2;
        param_3 = ppppppuVar13;
        param_2 = ppppppuVar6;
      }
      func_0x000107c288c8(auStack_338);
      func_0x0001086d6ca4(&ppppuStack_160);
      func_0x0001086cae20(&ppppuStack_140);
    }
    else {
      auStack_338[0] = 7;
      ppppppuVar15 = (undefined ******)auStack_338;
      func_0x0001086e20ec(*(undefined8 *)(param_1 + 0x80));
    }
    pppppuVar12 = appppuStack_128;
    FUN_1086569a0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086e20dc();
  func_0x0001086e2020(&ppppuStack_c8);
  func_0x0001086e2020(&pppppuStack_b0);
  func_0x0001086e1f28(&ppppuStack_3f0);
  func_0x000107c27ae4(&pppppuStack_3e0);
  func_0x000107c2a2e0(auStack_398);
  func_0x00010867b9fc(&lStack_378);
  func_0x00010867bb84(&uStack_360);
  func_0x000107c288c8(auStack_338);
  func_0x0001086d6ca4(&ppppuStack_160);
  func_0x0001086cae20(&ppppuStack_140);
  pppppuVar17 = appppuStack_128;
  FUN_1086569a0();
  func_0x0001086e2098();
  pcStack_3f8 = FUN_1086e1538;
  uStack_460 = 0;
  uStack_458 = 0;
  ppuStack_470 = &PTR_FUN_110a609a8;
  uStack_468 = 0;
  uStack_450 = 0xff;
  pppppuStack_420 = (undefined *****)param_2;
  pppppuStack_418 = (undefined *****)param_3;
  pppppuStack_410 = (undefined *****)param_4;
  ppppuStack_408 = (undefined ****)pppppuVar12;
  puStack_400 = &stack0xfffffffffffffff0;
  func_0x000107c278b8(auStack_488,"error_code");
  ppppppuVar6 = ppppppuVar15;
  FUN_108843ae8(ppppppuVar15);
  pppuVar14 = &ppuStack_470;
  func_0x000107c28824(pppuVar14,auStack_488,ppppppuVar6);
  func_0x000107c2884c(auStack_448,pppuVar14);
  (*(code *)(*pppppuVar17)[10])(pppppuVar17,auStack_448);
  func_0x000107c2882c(auStack_448);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_488);
  func_0x000107c2882c(&ppuStack_470);
  (*(code *)(**ppppppuVar9)[3])(*ppppppuVar9,*(undefined4 *)ppppppuVar15);
  return;
}



/* Entry: 1086e1538; end: 1086e162b;  */

void FUN_1086e1538(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0xff;
  func_0x000107c278b8(auStack_98,"error_code");
  puVar1 = param_3;
  FUN_108843ae8(param_3);
  pppuVar2 = &ppuStack_80;
  func_0x000107c28824(pppuVar2,auStack_98,puVar1);
  func_0x000107c2884c(auStack_58,pppuVar2);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_58);
  func_0x000107c2882c(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000107c2882c(&ppuStack_80);
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,*param_3);
  return;
}



/* Entry: 1086e162c; end: 1086e169b;  */

long * FUN_1086e162c(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long alStack_48 [5];
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_1086d6bf0();
      func_0x0001086e20c4();
      func_0x0001086e2098();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar2 = *param_3;
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = uVar2;
        plVar3 = puVar1 + 2;
      }
      else {
        plVar3 = param_1;
        FUN_1086e1cfc();
      }
      param_1[1] = (long)plVar3;
      return plVar3 + -2;
    }
    plVar3 = param_1 + 1;
    param_1 = alStack_48;
    FUN_1086e1c64(param_1,param_2,*plVar3 - lVar4 >> 4);
    func_0x0001086e2110();
    func_0x0001086e20c4();
  }
  return param_1;
}



/* Entry: 1086e169c; end: 1086e16e7;  */

undefined8 * FUN_1086e169c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar1 = *param_3;
    *puVar2 = *param_2;
    *(undefined1 *)(puVar2 + 1) = uVar1;
    puVar2 = puVar2 + 2;
  }
  else {
    puVar2 = param_1;
    FUN_1086e1cfc();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 1086e16e8; end: 1086e1897;  */

void FUN_1086e16e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined1 auStack_1200 [1496];
  undefined1 auStack_c28 [1528];
  undefined1 auStack_630 [1496];
  undefined1 auStack_58 [16];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1086a1380(auStack_630,*(undefined8 *)(param_1 + 0x50),param_1 + 0x60,param_2);
  func_0x000107c28b7c(auStack_1200,auStack_630);
  func_0x000107c27994(&uStack_1240,param_3);
  uStack_1210 = uStack_1230;
  uStack_1208 = *(undefined8 *)(param_4 + 0x20);
  uStack_1218 = uStack_1238;
  uStack_1220 = uStack_1240;
  uStack_1238 = 0;
  uStack_1230 = 0;
  uStack_1240 = 0;
  func_0x000105295498(auStack_c28,auStack_1200,&uStack_1220);
  uVar1 = param_5[1];
  if (uVar1 < (ulong)param_5[2]) {
    func_0x0001086cb048(uVar1,auStack_c28);
    lVar3 = uVar1 + 0x5f8;
    param_5[1] = lVar3;
  }
  else {
    plVar2 = param_5;
    FUN_1086cb1a8(param_5,(long)(uVar1 - *param_5) / 0x5f8 + 1);
    FUN_1086caf30(auStack_58,plVar2,(param_5[1] - *param_5) / 0x5f8,param_5 + 2);
    func_0x0001086cb048(lStack_48,auStack_c28);
    lStack_48 = lStack_48 + 0x5f8;
    FUN_1086caee0(param_5,auStack_58);
    lVar3 = param_5[1];
    func_0x0001086cb0dc(auStack_58);
  }
  param_5[1] = lVar3;
  func_0x0001086caeac(auStack_c28);
  func_0x000107c27914(&uStack_1220);
  func_0x000107c27914(&uStack_1240);
  func_0x000107c27a10(auStack_1200);
  func_0x000107c27a10(auStack_630);
  return;
}



/* Entry: 1086e1898; end: 1086e19eb;  */

void FUN_1086e1898(void)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  puVar3 = auStack_c0;
  func_0x0001086e2128();
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0xff;
  func_0x000107c278b8(auStack_a8,&UNK_10f4b0eff);
  uVar1 = (ulong)(uint)((int)((ulong)(unaff_x19[1] - *unaff_x19) >> 4) +
                       (int)((unaff_x20[1] - *unaff_x20) / 0x5f8));
  func_0x000107c28af4(uVar1);
  pppuVar2 = &ppuStack_90;
  func_0x000107c28824(pppuVar2,auStack_a8,uVar1);
  func_0x000107c278b8(auStack_c0,&UNK_10f4b163f);
  func_0x0001086e2104(unaff_x19[1]);
  func_0x000107c28824(pppuVar2,auStack_c0,puVar3);
  func_0x000107c2884c(auStack_68,pppuVar2);
  (**(code **)(*unaff_x22 + 0x50))();
  func_0x000107c2882c(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000107c2882c(&ppuStack_90);
  func_0x0001086e213c(*unaff_x21);
  (*extraout_x8)();
  return;
}



/* Entry: 1086e19ec; end: 1086e1bd3;  */

void FUN_1086e19ec(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  lStack_78 = 0;
  lStack_70 = 0;
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_70 = lVar4;
    if (lVar4 != 0) {
      lVar4 = *param_1;
      lStack_78 = lVar4;
      if (lVar4 != 0) {
        lVar6 = param_1[0xe] + 1;
        param_1[0xe] = lVar6;
        if ((*(byte *)((long)param_1 + 0x6c) & 1) == 0) {
          if (param_2[0x80] == 1) {
            *(undefined4 *)(param_1 + 0xd) = *param_2;
            *(undefined1 *)((long)param_1 + 0x6c) = 1;
          }
          else {
            if (param_2[0x80] != 0) {
              func_0x00010563ab98();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1086e1ba4);
              (*pcVar3)();
            }
            FUN_1086e1e9c();
            lVar1 = *(long *)(param_2 + 0x76);
            for (lVar6 = *(long *)(param_2 + 0x74); lVar6 != lVar1; lVar6 = lVar6 + 0x1a8) {
              FUN_1086e16e8(lVar4,param_2,param_1 + 2,lVar6,param_1 + 5);
            }
            puVar2 = *(undefined8 **)(param_2 + 0x7c);
            for (puVar7 = *(undefined8 **)(param_2 + 0x7a); puVar7 != puVar2; puVar7 = puVar7 + 2) {
              puVar8 = (undefined8 *)param_1[9];
              if (puVar8 < (undefined8 *)param_1[10]) {
                uVar9 = *puVar7;
                puVar8[1] = puVar7[1];
                *puVar8 = uVar9;
                puVar8 = puVar8 + 2;
              }
              else {
                plVar5 = param_1 + 8;
                FUN_1086e1d98(plVar5,((long)puVar8 - param_1[8] >> 4) + 1);
                FUN_1086e1c64(auStack_68,plVar5,param_1[9] - param_1[8] >> 4,param_1 + 10);
                uVar9 = *puVar7;
                puStack_58[1] = puVar7[1];
                *puStack_58 = uVar9;
                puStack_58 = puStack_58 + 2;
                FUN_1086e1bec(param_1 + 8,auStack_68);
                puVar8 = (undefined8 *)param_1[9];
                func_0x0001086e1cac(auStack_68);
              }
              param_1[9] = (long)puVar8;
            }
            lVar6 = param_1[0xe];
          }
        }
        if (lVar6 == param_1[0xf]) {
          if (*(char *)((long)param_1 + 0x6c) == '\x01') {
            FUN_1086e1538(*(undefined8 *)(lVar4 + 0x80),param_1 + 0xb,param_1 + 0xd);
          }
          else {
            FUN_1086e1898(*(undefined8 *)(lVar4 + 0x80),param_1 + 0xb,param_1 + 5,param_1 + 8);
          }
        }
      }
    }
  }
  FUN_1086e2074(&lStack_78);
  return;
}



/* Entry: 1086e1bd4; end: 1086e1bd7;  */

undefined8 * FUN_1086e1bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a658b8;
  func_0x000107c289fc(param_1 + 0x12);
  func_0x000107c288a4(param_1 + 0x10);
  func_0x000107c28800(param_1 + 0xe);
  func_0x000107c28ec0(param_1 + 0xc);
  func_0x000107c28808(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c288e8(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000107c2927c(param_1 + 1);
  return param_1;
}



/* Entry: 1086e1bd8; end: 1086e1beb;  */

void FUN_1086e1bd8(void)

{
  FUN_1086e1eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e1bec; end: 1086e1c63;  */

void FUN_1086e1bec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086e1c64; end: 1086e1cd7;  */

long * FUN_1086e1c64(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1086d6bfc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1086e1cd8; end: 1086e1cfb;  */

void FUN_1086e1cd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1086e1cfc; end: 1086e1d97;  */

long FUN_1086e1cfc(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar2 = param_1;
  FUN_1086e1d98(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1086e1c64(auStack_58,plVar2,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar1 = *param_3;
  *puStack_48 = *param_2;
  *(undefined1 *)(puStack_48 + 1) = uVar1;
  puStack_48 = puStack_48 + 2;
  func_0x0001086e2110();
  lVar3 = param_1[1];
  func_0x0001086e20c4();
  return lVar3;
}



/* Entry: 1086e1d98; end: 1086e1dd7;  */

long * FUN_1086e1d98(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_1086d6bf0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086e1e08();
  return param_1;
}



/* Entry: 1086e1dd8; end: 1086e1e07;  */

undefined8 * FUN_1086e1dd8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086e1e08();
  return param_1;
}



/* Entry: 1086e1e08; end: 1086e1e7b;  */

void FUN_1086e1e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001086e2128();
    func_0x000107c27dd8();
    FUN_1086e1e7c();
  }
  uStack_38 = 1;
  func_0x00010867b9d0(&uStack_40);
  return;
}



/* Entry: 1086e1e7c; end: 1086e1e9b;  */

void FUN_1086e1e7c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1086e1e9c; end: 1086e1eb3;  */

undefined8 * FUN_1086e1e9c(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_FUN_110a658b8;
  func_0x000107c289fc(param_1 + 0x12);
  func_0x000107c288a4(param_1 + 0x10);
  func_0x000107c28800(param_1 + 0xe);
  func_0x000107c28ec0(param_1 + 0xc);
  func_0x000107c28808(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c288e8(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000107c2927c(param_1 + 1);
  return param_1;
}



/* Entry: 1086e1eb4; end: 1086e1f4b;  */

undefined8 * FUN_1086e1eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a658b8;
  func_0x000107c289fc(param_1 + 0x12);
  func_0x000107c288a4(param_1 + 0x10);
  func_0x000107c28800(param_1 + 0xe);
  func_0x000107c28ec0(param_1 + 0xc);
  func_0x000107c28808(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c288e8(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000107c2927c(param_1 + 1);
  return param_1;
}



/* Entry: 1086e1f4c; end: 1086e1f4f;  */

void FUN_1086e1f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086e1f50; end: 1086e1f63;  */

void FUN_1086e1f50(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e1f64; end: 1086e1f6b;  */

void FUN_1086e1f64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x000104be3c30(lVar1 + 0x58);
    func_0x0001086d6ca4(lVar1 + 0x40);
    func_0x0001086cae20(lVar1 + 0x28);
    func_0x000107c27914(lVar1 + 0x10);
    func_0x0001086e1f28(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1086e1f6c; end: 1086e1fa3;  */

long FUN_1086e1f6c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a65978);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1086e1fa4; end: 1086e1fa7;  */

void FUN_1086e1fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e1fa8; end: 1086e2043;  */

void FUN_1086e1fa8(long param_1)

{
  if (param_1 != 0) {
    func_0x000104be3c30(param_1 + 0x58);
    func_0x0001086d6ca4(param_1 + 0x40);
    func_0x0001086cae20(param_1 + 0x28);
    func_0x000107c27914(param_1 + 0x10);
    func_0x0001086e1f28(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e2044; end: 1086e2073;  */

void FUN_1086e2044(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  plVar6 = *(long **)(param_2 + 0x10);
  lStack_78 = 0;
  lStack_70 = 0;
  lVar4 = plVar6[1];
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_70 = lVar4;
    if (lVar4 != 0) {
      lVar4 = *plVar6;
      lStack_78 = lVar4;
      if (lVar4 != 0) {
        lVar7 = plVar6[0xe] + 1;
        plVar6[0xe] = lVar7;
        if ((*(byte *)((long)plVar6 + 0x6c) & 1) == 0) {
          if (param_1[0x80] == 1) {
            *(undefined4 *)(plVar6 + 0xd) = *param_1;
            *(undefined1 *)((long)plVar6 + 0x6c) = 1;
          }
          else {
            if (param_1[0x80] != 0) {
              func_0x00010563ab98();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1086e1ba4);
              (*pcVar3)();
            }
            FUN_1086e1e9c();
            lVar1 = *(long *)(param_1 + 0x76);
            for (lVar7 = *(long *)(param_1 + 0x74); lVar7 != lVar1; lVar7 = lVar7 + 0x1a8) {
              FUN_1086e16e8(lVar4,param_1,plVar6 + 2,lVar7,plVar6 + 5);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x7c);
            for (puVar8 = *(undefined8 **)(param_1 + 0x7a); puVar8 != puVar2; puVar8 = puVar8 + 2) {
              puVar9 = (undefined8 *)plVar6[9];
              if (puVar9 < (undefined8 *)plVar6[10]) {
                uVar10 = *puVar8;
                puVar9[1] = puVar8[1];
                *puVar9 = uVar10;
                puVar9 = puVar9 + 2;
              }
              else {
                plVar5 = plVar6 + 8;
                FUN_1086e1d98(plVar5,((long)puVar9 - plVar6[8] >> 4) + 1);
                FUN_1086e1c64(auStack_68,plVar5,plVar6[9] - plVar6[8] >> 4,plVar6 + 10);
                uVar10 = *puVar8;
                puStack_58[1] = puVar8[1];
                *puStack_58 = uVar10;
                puStack_58 = puStack_58 + 2;
                FUN_1086e1bec(plVar6 + 8,auStack_68);
                puVar9 = (undefined8 *)plVar6[9];
                func_0x0001086e1cac(auStack_68);
              }
              plVar6[9] = (long)puVar9;
            }
            lVar7 = plVar6[0xe];
          }
        }
        if (lVar7 == plVar6[0xf]) {
          if (*(char *)((long)plVar6 + 0x6c) == '\x01') {
            FUN_1086e1538(*(undefined8 *)(lVar4 + 0x80),plVar6 + 0xb,plVar6 + 0xd);
          }
          else {
            FUN_1086e1898(*(undefined8 *)(lVar4 + 0x80),plVar6 + 0xb,plVar6 + 5,plVar6 + 8);
          }
        }
      }
    }
  }
  FUN_1086e2074(&lStack_78);
  return;
}



/* Entry: 1086e2074; end: 1086e2097;  */

void FUN_1086e2074(long param_1)

{
  func_0x000107c328b0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086e2098; end: 1086e2147;  */

void FUN_1086e2098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1086e2148; end: 1086e23e3;  */

undefined8 *
FUN_1086e2148(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_110a659e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110a65ac8;
  func_0x000107c278b8(auStack_80,&UNK_10f4b1650);
  func_0x000107c28a44(param_1 + 4,param_2,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  lVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[0x11] = param_4[1];
  param_1[0x10] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001086e4f48();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0x13] = param_3[1];
  param_1[0x12] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001086e4f48();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0x15] = param_5[1];
  param_1[0x14] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001086e4f48();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = param_6[1];
  uVar1 = *param_6;
  param_1[0x17] = param_6[1];
  param_1[0x16] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001086e4f48();
    } while (extraout_w10_02 != 0);
  }
  uVar1 = *param_7;
  lVar2 = param_7[1];
  uStack_90 = uVar1;
  lStack_88 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001086e4f48();
    } while (extraout_w10_03 != 0);
  }
  func_0x000107c278b8(&uStack_a8,&UNK_10f4b1665);
  param_1[0x18] = uVar1;
  param_1[0x19] = lVar2;
  uStack_90 = 0;
  lStack_88 = 0;
  param_1[0x1b] = uStack_a0;
  param_1[0x1a] = uStack_a8;
  param_1[0x1c] = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xea) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  func_0x000107c289fc(&uStack_90);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  func_0x000107c289d4(param_1 + 0x1f);
  func_0x000107c289d0(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  uVar1 = 0xf0;
  __Znwm();
  func_0x000107c31504();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_b8 = uVar1;
  uStack_b0 = uVar1;
  func_0x000107c28a38(&uStack_60);
  func_0x000107c28a38(&uStack_68);
  func_0x000107c28a3c(&puStack_c8);
  func_0x000107c28a3c(&uStack_58);
  func_0x000107c28a2c(param_1 + 0x21,&uStack_b8);
  func_0x000107c28a30(param_1 + 0x22,&uStack_b0);
  func_0x000107c28a38(&uStack_b0);
  func_0x000107c28a3c(&uStack_b8);
  func_0x000107c289cc(&uStack_b8);
  puStack_c8 = param_1 + 0x20;
  puStack_c0 = param_1 + 0x1f;
  func_0x000107c289d8(&puStack_c8,&uStack_b8);
  func_0x0001086e51c0();
  return param_1;
}



/* Entry: 1086e23e4; end: 1086e245f;  */

void FUN_1086e23e4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = param_1;
  func_0x000107c288a8(&uStack_48,param_1 + 0x20);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1086e33f4(auStack_58,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  func_0x000107c27f9c(auStack_58);
  return;
}



/* Entry: 1086e2460; end: 1086e2467;  */

void FUN_1086e2460(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_50 = param_1 + -0x18;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c288a8(&uStack_48,param_1 + 8);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_1086e33f4(auStack_58,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  func_0x000107c27f9c(auStack_58);
  return;
}



/* Entry: 1086e2468; end: 1086e285f;  */

void FUN_1086e2468(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long extraout_x8_01;
  long lVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  ulong uVar14;
  undefined8 uVar15;
  
  plVar8 = (long *)0x2f0;
  __Znwm();
  *plVar8 = (long)FUN_1086e46b4;
  plVar8[1] = (long)FUN_1086e4a74;
  plVar8[0x5c] = param_1;
  plVar9 = plVar8;
  func_0x0001086e5108();
  func_0x0001086e50fc();
  func_0x00010bcd3464(plVar8 + 0x54);
  plVar1 = plVar8 + 0x5a;
  *(undefined1 *)(plVar8 + 0x55) = 0;
  *(undefined1 *)(plVar8 + 0x56) = 0;
  func_0x0001086e4d94();
  while( true ) {
    func_0x0001086e51c8();
    if (extraout_x8 != 0) {
      do {
        func_0x0001086e4d64();
      } while (extraout_w10 != 0);
    }
    plVar10 = plVar8 + 4;
    func_0x000107c314f0();
    if (((ulong)plVar10 & 1) == 0) {
      *(undefined1 *)(plVar8 + 0x5d) = 0;
      uVar14 = plVar8[4];
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086e50c4();
      if ((uVar14 & 1) != 0) {
        return;
      }
    }
    pbVar2 = (byte *)(plVar8[5] + 0xa8);
    do {
      bVar4 = *pbVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar7) {
        *pbVar2 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar4 & 1) != 0));
    if ((*(long *)(plVar8[5] + 0xe8) == 0) && ((*(byte *)(plVar8[5] + 0xb8) & 1) != 0)) break;
    func_0x0001086e4f68();
    plVar10 = (long *)(extraout_x8_00 + 0x10);
    func_0x000107c314e4();
    *pbVar2 = 0;
    func_0x0001086e4fc8();
    func_0x0001086e5188(plVar8[0x5c]);
    if ((char)plVar8[0x56] == '\x01') {
      plVar10 = plVar8 + 0x55;
      func_0x000107c28850();
    }
    lVar11 = plVar8[0x54];
    plVar8[0x3f] = lVar11;
    lVar12 = 0;
    if (lVar11 != 0) {
      do {
        func_0x0001086e4d64();
      } while (extraout_w10_00 != 0);
      lVar12 = plVar8[0x3f];
    }
    plVar8[4] = lVar12;
    do {
      func_0x0001086e4d64();
    } while (extraout_w10_01 != 0);
    func_0x0001086e4eb0();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(plVar8 + 0x5d) = 1;
      lVar12 = plVar8[4];
      lVar11 = *plVar9;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar10;
      }
      plVar3 = (long *)(lVar12 + 0x10);
      do {
        lVar13 = *plVar3;
        if (lVar13 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar6 == '\0';
          if (bVar7) {
            func_0x0001086e4e44();
            if (bVar7) {
              func_0x0001086e4df4();
              func_0x0001086e4db4();
              func_0x0001086e4d48();
              *(long **)(lVar12 + 0x90) = plVar10;
            }
            func_0x0001086e4e34();
            *(long *)(extraout_x8_01 + 0x20) = lVar11;
            func_0x0001086e4de4(*(undefined8 *)(lVar12 + 0x90));
            *(undefined8 *)(lVar12 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    func_0x0001086e4f9c();
    func_0x0001086e4e68();
    func_0x0001086e4f94();
    if ((char)plVar8[0x53] == '\x01') {
      func_0x0001086e505c(*(undefined8 *)(plVar8[0x5c] + 0x90));
      lVar12 = plVar8[0x3e];
      iVar5 = *(int *)((long)plVar8 + 0x13c);
      func_0x000107c288c8(plVar8 + 4);
      if ((char)lVar12 == '\x01' && iVar5 == 8) {
        lVar12 = plVar8[0x5c];
        func_0x000107c289cc(plVar8 + 0x57);
        plVar8[0x4b] = lVar12;
        func_0x0001086e5128();
        plVar8[0x4f] = plVar8[0x57];
        if (plVar8[0x57] != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_02 != 0);
        }
        uVar15 = *(undefined8 *)(plVar8[0x5c] + 0x30);
        func_0x0001086e511c();
        func_0x0001086e5110(plVar8[0x5c]);
        func_0x0001086e5134();
        FUN_1086e3750(plVar8 + 0x59,plVar8 + 0x3f,uVar15);
        func_0x0001086e3728(plVar8 + 0x3f);
        func_0x0001086e5034();
        func_0x0001086e502c();
        lVar12 = plVar8[0x59];
        *plVar1 = lVar12;
        if (lVar12 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_03 != 0);
        }
        lVar12 = plVar8[0x58];
        plVar8[0x5b] = lVar12;
        if (lVar12 != 0) {
          plVar10 = (long *)(lVar12 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 0x200000000;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plVar8[4] = *plVar1;
        if (*plVar1 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_04 != 0);
        }
        lVar12 = plVar8[0x5b];
        plVar8[5] = lVar12;
        if (lVar12 != 0) {
          plVar10 = (long *)(lVar12 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 0x200000000;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        *(undefined1 *)(plVar8 + 6) = 1;
        func_0x000107c27f98(plVar8 + 0x5b);
        func_0x000107c27f9c(plVar1);
        func_0x0001086e4ef0();
        func_0x0001086e5014();
        func_0x0001086e50e4();
        FUN_1086e30bc(plVar8 + 0x55,plVar8 + 5);
        FUN_1086e313c(plVar8 + 4);
      }
    }
    func_0x0001086e4fc0();
  }
  func_0x000107c314e4(plVar8[5] + 0x58);
  *pbVar2 = 0;
  func_0x0001086e4fc8();
  func_0x0001086e501c();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar8);
  return;
}



/* Entry: 1086e2860; end: 1086e2883;  */

void FUN_1086e2860(void)

{
  long unaff_x19;
  
  func_0x0001086e4e9c();
  func_0x000107c27914(unaff_x19 + 8);
  return;
}



/* Entry: 1086e2884; end: 1086e2d1b;  */

void FUN_1086e2884(undefined8 param_1,long *param_2,long *param_3)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long **pplVar8;
  int iVar9;
  long lVar10;
  long ***ppplVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar12;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  long lVar13;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar14;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  long *plVar15;
  long ***ppplVar16;
  long **pplStack_b8;
  undefined1 uStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long alStack_78 [3];
  
  alStack_78[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x68;
  __Znwm();
  *puVar6 = FUN_1086e3ee8;
  puVar6[1] = FUN_1086e4078;
  pplVar8 = (long **)(puVar6 + 4);
  puVar6[7] = *param_2;
  *param_2 = 0;
  puVar6[8] = *param_3;
  *param_3 = 0;
  func_0x000108653f98(puVar6 + 2);
  FUN_108653ba0(param_1,puVar6 + 2);
  alStack_78[0] = puVar6[7];
  if (alStack_78[0] != 0) {
    do {
      func_0x0001086e4d64();
    } while (extraout_w10_00 != 0);
  }
  alStack_78[1] = puVar6[8];
  if (alStack_78[1] != 0) {
    do {
      func_0x0001086e4d64();
    } while (extraout_w10_01 != 0);
  }
  *pplVar8 = (long *)0x0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  uStack_b0 = 0;
  lVar10 = 2;
  plVar15 = puVar6 + 6;
  pplStack_b8 = pplVar8;
  FUN_1086e3178();
  pplVar1 = (long **)(puVar6 + 9);
  puVar6[4] = plVar15;
  puVar6[5] = plVar15;
  puVar6[6] = plVar15 + lVar10;
  plStack_88 = plVar15;
  plStack_80 = plVar15;
  plStack_a8 = puVar6 + 6;
  pplStack_a0 = &plStack_88;
  pplStack_98 = &plStack_80;
  uStack_90 = 0;
  for (lVar10 = 0; lVar10 != 0x10; lVar10 = lVar10 + 8) {
    lVar13 = *(long *)((long)alStack_78 + lVar10);
    *plVar15 = lVar13;
    if (lVar13 != 0) {
      plVar12 = (long *)(lVar13 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = plVar15 + 1;
    plStack_80 = plVar15;
  }
  uStack_90 = 1;
  plStack_80 = plVar15;
  FUN_1086e31b8(&plStack_a8);
  puVar6[5] = plVar15;
  uStack_b0 = 1;
  func_0x0001086e3238(&pplStack_b8);
  lVar10 = 8;
  do {
    func_0x000107c27f9c((long)alStack_78 + lVar10);
    lVar10 = lVar10 + -8;
  } while (lVar10 != -8);
  lVar10 = puVar6[4];
  lVar13 = puVar6[5];
  plVar15 = (long *)(lVar13 - lVar10 >> 3);
  func_0x000107c28874(&plStack_a8);
  func_0x000107c28878(&pplStack_b8,plVar15);
  pplVar7 = pplStack_b8;
  pplStack_b8 = (long **)0x0;
  func_0x000107c28888(pplStack_98 + 3,pplVar7);
  func_0x000107c28890(&pplStack_b8);
  pplStack_98[1] = plVar15;
  ppplVar11 = &pplStack_a0;
  func_0x000107c2887c();
  ppplVar16 = (long ***)0x0;
  for (; plVar15 = plStack_a8, uVar5 = lVar10 == lVar13, !(bool)uVar5; lVar10 = lVar10 + 8) {
    ppplVar11 = ppplVar16;
    func_0x000107c28894(pplStack_98,ppplVar16,lVar10);
    ppplVar16 = (long ***)((long)ppplVar16 + 1);
  }
  puVar6[10] = plStack_a8;
  plStack_a8 = (long *)0x0;
  pplVar7 = &plStack_a8;
  func_0x000107c2889c();
  *pplVar1 = plVar15;
  do {
    func_0x0001086e4d64();
  } while (extraout_w10_02 != 0);
  func_0x0001086e4ec8(*pplVar1);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xc) = 0;
    lVar10 = puVar6[9];
    func_0x0001086e51a0();
    plVar15 = *pplVar7;
    if (plVar15 == (long *)0x0) {
      func_0x000107c3a5c0();
      plVar15 = *pplVar7;
    }
    plVar12 = (long *)(lVar10 + 0x10);
    do {
      if (*plVar12 == 0) {
        func_0x0001086e4e04();
        iVar9 = (int)ppplVar11;
        plVar12 = extraout_x8_00;
        uVar4 = extraout_w10_04;
        uVar14 = extraout_x11_00;
      }
      else {
        func_0x0001086e4edc();
        iVar9 = (int)ppplVar11;
        plVar12 = extraout_x8;
        uVar4 = extraout_w10_03;
        uVar14 = extraout_x11;
      }
      if ((uVar14 & 1) != 0) {
        func_0x0001086e4e44();
        if ((bool)uVar5) {
          func_0x0001086e4df4();
          func_0x0001086e4db4();
          func_0x0001086e4d48();
          *(long ***)(lVar10 + 0x90) = pplVar7;
        }
        func_0x0001086e4e34();
        *(long **)(extraout_x8_03 + 0x20) = plVar15;
        func_0x0001086e4de4(*(undefined8 *)(lVar10 + 0x90));
        goto LAB_1086e2c40;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  pplVar7 = pplVar1;
  func_0x000107c28870();
  plVar15 = *pplVar7;
  puVar6[0xb] = plVar15;
  func_0x0001086e5084();
  func_0x0001086e507c();
  puVar6[9] = *(undefined8 *)(puVar6[4] + (long)plVar15 * 8);
  do {
    func_0x0001086e4d64();
  } while (extraout_w10_05 != 0);
  func_0x0001086e4ec8(*pplVar1);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xc) = 1;
    lVar10 = puVar6[9];
    func_0x0001086e51a0();
    plVar15 = *pplVar7;
    if (plVar15 == (long *)0x0) {
      func_0x000107c3a5c0();
      plVar15 = *pplVar7;
    }
    plVar12 = (long *)(lVar10 + 0x10);
    do {
      if (*plVar12 == 0) {
        func_0x0001086e4e04();
        iVar9 = (int)ppplVar11;
        plVar12 = extraout_x8_02;
        uVar4 = extraout_w10_07;
        uVar14 = extraout_x11_02;
      }
      else {
        func_0x0001086e4edc();
        iVar9 = (int)ppplVar11;
        plVar12 = extraout_x8_01;
        uVar4 = extraout_w10_06;
        uVar14 = extraout_x11_01;
      }
      if ((uVar14 & 1) != 0) {
        func_0x0001086e4e44();
        if ((bool)uVar5) {
          func_0x0001086e4df4();
          func_0x0001086e4db4();
          func_0x0001086e4d48();
          *(long ***)(lVar10 + 0x90) = pplVar7;
        }
        func_0x0001086e4e34();
        *(long **)(extraout_x8_04 + 0x20) = plVar15;
        func_0x0001086e4de4(*(undefined8 *)(lVar10 + 0x90));
LAB_1086e2c40:
        *(undefined8 *)(lVar10 + 0x10) = 0;
        pplVar8 = pplVar7;
        goto LAB_1086e2c44;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  func_0x000107c28834(pplVar1);
  lVar10 = puVar6[0xb];
  func_0x0001086e5084();
  uVar5 = lVar10 == 0;
  plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,uVar5);
  iVar9 = (int)&plStack_a8;
  FUN_108653be8(puVar6 + 2);
  func_0x0001086e32dc();
  func_0x0001086e4e60();
  func_0x0001086e4ef0();
  func_0x0001086e4f00();
  func_0x0001086e4ed4();
LAB_1086e2c44:
  func_0x0001086e51f4(alStack_78[2]);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    if (iVar9 == 0) {
      __Unwind_Resume(pplVar8);
    }
    func_0x000104bd46a0();
    func_0x00010bcd3614(pplVar8[0x22]);
    iVar9 = (int)pplVar8 + 0x60;
    func_0x000107c28850();
    if (iVar9 != 0) {
      func_0x000107c28854(pplVar8 + 4);
    }
    plVar15 = pplVar8[0xd];
    *extraout_x8_05 = plVar15;
    if (plVar15 != (long *)0x0) {
      do {
        func_0x000107c31d08();
      } while (extraout_w10 != 0);
    }
    return;
  }
  return;
}



/* Entry: 1086e2d1c; end: 1086e2d4b;  */

void FUN_1086e2d1c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0x110));
  iVar1 = (int)param_2 + 0x60;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x20);
  }
  lVar2 = *(long *)(param_2 + 0x68);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1086e2d4c; end: 1086e2d53;  */

void FUN_1086e2d4c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0xf8));
  iVar1 = (int)param_2 + 0x48;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 8);
  }
  lVar2 = *(long *)(param_2 + 0x50);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1086e2d54; end: 1086e2d93;  */

void FUN_1086e2d54(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_108691254(auStack_40);
  func_0x000107c28908(param_1 + 0x118,auStack_40);
  func_0x000107c279dc(auStack_40);
  FUN_1086e2d94(param_1 + 0x110);
  return;
}



/* Entry: 1086e2d94; end: 1086e2e8f;  */

/* WARNING: Possible PIC construction at 0x0001086e2e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086e2e3c) */

void FUN_1086e2d94(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long *plVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  byte *pbStack_28;
  
  puVar7 = auStack_30;
  puVar16 = &stack0xfffffffffffffff0;
  iVar8 = (int)*param_1 + 0x10;
  func_0x000107c314e8();
  if (iVar8 == 0) {
    return;
  }
  pbVar1 = (byte *)(*param_1 + 0xa8);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  lVar11 = *param_1;
  if (*(char *)(lVar11 + 0xb8) == '\x01') {
    pbVar9 = (byte *)(lVar11 + 0x10);
    unaff_x30 = 0x1086e2e3c;
    pbStack_28 = pbVar1;
  }
  else {
    uVar12 = *(long *)(lVar11 + 0xe0) + 1;
    uVar14 = *(ulong *)(lVar11 + 0xa0);
    uVar6 = 0;
    if (uVar14 != 0) {
      uVar6 = uVar12 / uVar14;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar12 - uVar6 * uVar14;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    *pbVar1 = 0;
    pbVar9 = (byte *)(*param_1 + 0x58);
    puVar7 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar16 = unaff_x29;
  }
  *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
  *(long **)(puVar7 + -0x18) = param_1;
  *(undefined1 **)(puVar7 + -0x10) = puVar16;
  *(undefined8 *)(puVar7 + -8) = unaff_x30;
  do {
    bVar2 = *pbVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar9,0x10);
    if (bVar5) {
      *pbVar9 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(pbVar9 + 0x40) != 0) {
    uVar12 = *(ulong *)(pbVar9 + 0x38);
    puVar13 = (undefined8 *)
              ((*(undefined8 **)(pbVar9 + 0x20))[uVar12 / 0xaa] + (uVar12 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    puVar3 = (undefined8 *)puVar13[1];
    plVar15 = (long *)puVar13[2];
    *(ulong *)(pbVar9 + 0x38) = uVar12 + 1;
    *(long *)(pbVar9 + 0x40) = *(long *)(pbVar9 + 0x40) + -1;
    if (0x153 < uVar12 + 1) {
      uVar10 = **(undefined8 **)(pbVar9 + 0x20);
      *(code **)(puVar7 + -0x38) = UNRECOVERED_JUMPTABLE;
      func_0x000107c60e14(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + -0x38);
      *(long *)(pbVar9 + 0x20) = *(long *)(pbVar9 + 0x20) + 8;
      *(long *)(pbVar9 + 0x38) = *(long *)(pbVar9 + 0x38) + -0xaa;
    }
    *pbVar9 = 0;
    if (plVar15 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar3);
        return;
      }
      (*(code *)*puVar3)(puVar3);
    }
    else {
      (**(code **)(*plVar15 + 0x10))(plVar15,UNRECOVERED_JUMPTABLE,puVar3);
    }
    return;
  }
  *(int *)(pbVar9 + 0x10) = *(int *)(pbVar9 + 0x10) + 1;
  *pbVar9 = 0;
  return;
}



/* Entry: 1086e2e90; end: 1086e2f67;  */

void FUN_1086e2e90(long param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  func_0x000107c28908(param_1 + 0x118,auStack_40);
  func_0x000107c279dc(auStack_40);
  FUN_1086e2d94(param_1 + 0x110);
  return;
}



/* Entry: 1086e2f68; end: 1086e307b;  */

long * FUN_1086e2f68(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar3;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_38;
  
  plVar2 = &lStack_c0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x000107c289cc(&lStack_a8);
  uVar3 = *(undefined8 *)(param_2 + 8);
  lStack_c0 = lStack_a0;
  if (lStack_a0 == 0) {
    lStack_88 = 0;
  }
  else {
    do {
      func_0x0001086e509c();
      lStack_88 = lStack_c0;
    } while (extraout_w11 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  pcStack_98 = FUN_1086e3ec0;
  ppuStack_90 = &PTR_DAT_110a65b70;
  lStack_c0 = 0;
  func_0x00010bcce9b8(auStack_b8,uVar3,&pcStack_98,lVar1 + *(long *)(param_2 + 0x18) * 1000000000);
  func_0x0001086e504c();
  func_0x000107c27f44(auStack_b8);
  func_0x000107c27f98();
  *param_1 = lStack_a8;
  if (lStack_a8 != 0) {
    do {
      func_0x0001086e4d64();
    } while (extraout_w10 != 0);
  }
  func_0x0001086e51c0();
  func_0x0001086e51f4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086e504c();
    func_0x000107c27f98(&lStack_c0);
    func_0x0001086e51c0();
    __Unwind_Resume();
    *plVar2 = (long)&PTR_FUN_110a659e0;
    plVar2[3] = (long)&PTR_FUN_110a65ac8;
    func_0x000107c279dc(plVar2 + 0x23);
    func_0x000107c28a38(plVar2 + 0x22);
    func_0x000107c28a3c(plVar2 + 0x21);
    func_0x000107c27f9c(plVar2 + 0x20);
    func_0x000107c27f98(plVar2 + 0x1f);
    func_0x000107c289f8(plVar2 + 0x18);
    func_0x000107c28abc(plVar2 + 0x16);
    func_0x0001086e33c8(plVar2 + 0x14);
    func_0x000107c28808(plVar2 + 0x12);
    func_0x000107c28254(plVar2 + 0x10);
    FUN_10865a95c(plVar2 + 4);
    *plVar2 = (long)&PTR_DAT_110a627a0;
    func_0x000107c28cac(plVar2 + 1);
    return plVar2;
  }
  return plVar2;
}



/* Entry: 1086e307c; end: 1086e307f;  */

undefined8 * FUN_1086e307c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a659e0;
  param_1[3] = &PTR_FUN_110a65ac8;
  func_0x000107c279dc(param_1 + 0x23);
  func_0x000107c28a38(param_1 + 0x22);
  func_0x000107c28a3c(param_1 + 0x21);
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x000107c27f98(param_1 + 0x1f);
  func_0x000107c289f8(param_1 + 0x18);
  func_0x000107c28abc(param_1 + 0x16);
  func_0x0001086e33c8(param_1 + 0x14);
  func_0x000107c28808(param_1 + 0x12);
  func_0x000107c28254(param_1 + 0x10);
  FUN_10865a95c(param_1 + 4);
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086e3080; end: 1086e3093;  */

void FUN_1086e3080(void)

{
  func_0x0001086e3310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e3094; end: 1086e30a7;  */

undefined8 * FUN_1086e3094(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110a659e0;
  *param_1 = &PTR_FUN_110a65ac8;
  func_0x000107c279dc(param_1 + 0x20);
  func_0x000107c28a38(param_1 + 0x1f);
  func_0x000107c28a3c(param_1 + 0x1e);
  func_0x000107c27f9c(param_1 + 0x1d);
  func_0x000107c27f98(param_1 + 0x1c);
  func_0x000107c289f8(param_1 + 0x15);
  func_0x000107c28abc(param_1 + 0x13);
  func_0x0001086e33c8(param_1 + 0x11);
  func_0x000107c28808(param_1 + 0xf);
  func_0x000107c28254(param_1 + 0xd);
  FUN_10865a95c(param_1 + 1);
  *puVar1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + -2);
  return puVar1;
}



/* Entry: 1086e30a8; end: 1086e30bb;  */

void FUN_1086e30a8(void)

{
  func_0x0001086e339c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e30bc; end: 1086e30df;  */

undefined8 FUN_1086e30bc(undefined8 param_1)

{
  FUN_1086e30e0();
  return param_1;
}



/* Entry: 1086e30e0; end: 1086e3117;  */

void FUN_1086e30e0(long *param_1,long *param_2)

{
  char cVar1;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == (char)param_2[1]) {
    if (cVar1 != '\0') {
      func_0x00010054eed4();
      if (*param_1 != 0) {
        func_0x000100850dfc();
      }
      func_0x00010054ef0c();
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if ((char)param_1[1] == '\x01') {
        func_0x000107c27f98();
        *(undefined1 *)(param_1 + 1) = 0;
      }
      return;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 1086e3118; end: 1086e313b;  */

void FUN_1086e3118(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27f98();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1086e313c; end: 1086e3163;  */

undefined8 * FUN_1086e313c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_1086a8a50(param_1 + 1);
  plVar5 = (long *)*param_1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
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
  return param_1;
}



/* Entry: 1086e3164; end: 1086e3177;  */

void FUN_1086e3164(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1086e319c();
  return;
}



/* Entry: 1086e3178; end: 1086e319b;  */

void FUN_1086e3178(void)

{
  FUN_1086e319c();
  return;
}



/* Entry: 1086e319c; end: 1086e31b7;  */

long FUN_1086e319c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086e31e8(param_1);
  }
  return param_1;
}



/* Entry: 1086e31b8; end: 1086e31e7;  */

long FUN_1086e31b8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086e31e8(param_1);
  }
  return param_1;
}



/* Entry: 1086e31e8; end: 1086e3207;  */

void FUN_1086e31e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1086e3208; end: 1086e329b;  */

void FUN_1086e3208(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1086e329c; end: 1086e32a3;  */

void FUN_1086e329c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1086e32a4; end: 1086e33ef;  */

void FUN_1086e32a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


