/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d71c2c; end: 108d71d73;  */

undefined * FUN_108d71c2c(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 auStack_8c0 [64];
  byte bStack_880;
  int aiStack_878 [524];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    _statfs(param_1,auStack_8c0);
    if ((int)param_1 == -1) {
LAB_108d71cd4:
      iVar1 = *(int *)(param_2 + 0x18);
      (*(code *)PTR__fcntl_1132991a8)(iVar1,7);
      if (iVar1 == -1) {
        puVar3 = &UNK_110ac3c60;
      }
      else {
        puVar3 = &UNK_110ac3bc8;
        if (aiStack_878[0] != 0x73666e) {
          puVar3 = &DAT_110ac3968;
        }
      }
      goto LAB_108d71d40;
    }
    if ((bStack_880 & 1) == 0) {
      if (aiStack_878[0] == 0x736668) {
        ppuVar7 = &PTR_DAT_110ac3908;
      }
      else {
        lVar4 = 5;
        ppuVar5 = &PTR_DAT_110ac3908;
        do {
          lVar4 = lVar4 + -1;
          if (lVar4 == 0) goto LAB_108d71cd4;
          ppuVar7 = ppuVar5 + 2;
          piVar2 = aiStack_878;
          _strcmp(piVar2,ppuVar5[2]);
          ppuVar5 = ppuVar7;
        } while ((int)piVar2 != 0);
      }
      puVar3 = ppuVar7[1];
      goto LAB_108d71d40;
    }
  }
  puVar3 = &DAT_110ac3b30;
LAB_108d71d40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108d732e8();
    FUN_108d738e0(puVar3,0,0);
    if (iRam0000000113297914 != 0) {
      lVar4 = 2;
      (*pcRam0000000113297988)();
      if (lVar4 != 0) {
        (*pcRam0000000113297998)();
      }
    }
    lVar4 = *(long *)(puVar3 + 0x10);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x28) != 0)) {
      lVar6 = *(long *)(puVar3 + 0x30);
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar4 + 0x30);
      *(long *)(lVar4 + 0x30) = lVar6;
      *(undefined4 *)(puVar3 + 0x18) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0;
    }
    func_0x000108d733d8(puVar3);
    func_0x000108d73440(puVar3);
    if (iRam0000000113297914 != 0) {
      lVar4 = 2;
      (*pcRam0000000113297988)();
      if (lVar4 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return (undefined *)0x0;
  }
  return puVar3;
}



/* Entry: 108d71d74; end: 108d7201f;  */

undefined8 FUN_108d71d74(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_108d732e8();
  FUN_108d738e0(param_1,0,0);
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != 0)) {
    lVar2 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = lVar2;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  func_0x000108d733d8(param_1);
  func_0x000108d73440(param_1);
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return 0;
}



/* Entry: 108d72020; end: 108d7219f;  */

int FUN_108d72020(long param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_24;
  
  puVar5 = (undefined4 *)(ulong)*(uint *)(param_1 + 0x18);
  if ((((param_2 & 0xf) == 3) &&
      (puVar2 = puVar5, (*(code *)PTR__fcntl_1132991a8)(puVar5,0x33), (int)puVar2 == 0)) ||
     (_fsync(), (int)puVar5 == 0)) {
    if ((*(ushort *)(param_1 + 0x1e) >> 3 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR_FUN_113299298)(uVar3,&iStack_24);
      iVar1 = (int)uVar3;
      if ((iVar1 == 0) && (-1 < iStack_24)) {
        _fsync(iStack_24);
        FUN_108d734ec(param_1,iStack_24,0x7fa8);
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        if (iVar1 != 0xe) {
          iVar4 = iVar1;
        }
      }
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfff7;
    }
  }
  else {
    ___error();
    *(undefined4 *)(param_1 + 0x20) = *puVar5;
    ___error();
    iVar4 = 0x40a;
    FUN_108d64c00(0x40a,&UNK_10f5176e7);
  }
  return iVar4;
}



/* Entry: 108d721a0; end: 108d72473;  */

ulong FUN_108d721a0(uint *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined2 uStack_54;
  undefined2 uStack_52;
  
  if ((int)param_2 <= (int)(uint)(byte)param_1[7]) {
    return 0;
  }
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar3 = *(long *)(param_1 + 4);
  bVar1 = *(byte *)(lVar3 + 0x14);
  if ((byte)param_1[7] == bVar1) {
    if (param_2 == 1) goto LAB_108d7225c;
    uStack_60 = 1;
    uStack_52 = 0;
    if (param_2 != 4) goto LAB_108d72328;
    if ((byte)param_1[7] < 3) {
      bVar2 = false;
      uStack_54 = 3;
      goto LAB_108d722a0;
    }
LAB_108d72330:
    if (*(int *)(lVar3 + 0x10) < 2) {
LAB_108d72344:
      uStack_54 = 3;
      uVar5 = 1;
      if (param_2 != 2) {
        uVar5 = 2;
      }
      lStack_68 = (long)iRam0000000113298da4 + (ulong)uVar5;
      uStack_60 = 0x1fe;
      if (param_2 == 2) {
        uStack_60 = 1;
      }
      puVar4 = param_1;
      FUN_108d737a0(param_1,&lStack_68);
      if ((int)puVar4 == 0) {
LAB_108d72424:
        uVar6 = 0;
        *(char *)(param_1 + 7) = (char)param_2;
        *(char *)(lVar3 + 0x14) = (char)param_2;
        goto LAB_108d72430;
      }
      ___error();
      uVar5 = *puVar4;
      uVar6 = (ulong)uVar5;
      FUN_108d73860(uVar6,0xf0a);
      if ((int)uVar6 != 5) {
        param_1[8] = uVar5;
      }
      if (param_2 != 4) goto LAB_108d72430;
    }
    else {
      uVar6 = 5;
    }
    *(undefined1 *)(param_1 + 7) = 3;
    *(undefined1 *)(lVar3 + 0x14) = 3;
  }
  else {
    uVar6 = 5;
    if ((1 < param_2) || (2 < bVar1)) goto LAB_108d72430;
LAB_108d7225c:
    if (bVar1 - 1 < 2) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
      goto LAB_108d72430;
    }
    bVar2 = true;
    uStack_54 = 1;
LAB_108d722a0:
    uStack_52 = 0;
    uStack_60 = 1;
    lStack_68 = (long)iRam0000000113298da4;
    puVar4 = param_1;
    FUN_108d737a0(param_1,&lStack_68);
    if ((int)puVar4 != 0) {
      ___error();
      uVar5 = *puVar4;
      uVar6 = (ulong)uVar5;
      FUN_108d73860(uVar6,0xf0a);
      if ((int)uVar6 != 5) {
        param_1[8] = uVar5;
      }
      goto LAB_108d72430;
    }
    if (!bVar2) {
LAB_108d72328:
      if (param_2 == 4) goto LAB_108d72330;
      goto LAB_108d72344;
    }
    lStack_68 = (long)iRam0000000113298da4 + 2;
    uStack_60 = 0x1fe;
    puVar4 = param_1;
    FUN_108d737a0(param_1,&lStack_68);
    if ((int)puVar4 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      ___error();
      uVar5 = *puVar4;
      uVar6 = (ulong)uVar5;
      FUN_108d73860(uVar6,0xf0a);
    }
    lStack_68 = (long)iRam0000000113298da4;
    uStack_60 = 1;
    uStack_54 = 2;
    puVar4 = param_1;
    FUN_108d737a0(param_1,&lStack_68);
    iVar7 = (int)uVar6;
    if (((int)puVar4 == 0) || (iVar7 != 0)) {
      if (iVar7 == 0) {
        *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
        *(undefined4 *)(lVar3 + 0x10) = 1;
        goto LAB_108d72424;
      }
      if (iVar7 == 5) goto LAB_108d72430;
    }
    else {
      ___error();
      uVar5 = *puVar4;
      uVar6 = 0x80a;
    }
    param_1[8] = uVar5;
  }
LAB_108d72430:
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar6;
}



/* Entry: 108d72474; end: 108d7247b;  */

/* WARNING: Removing unreachable block (ram,0x000108d73958) */
/* WARNING: Removing unreachable block (ram,0x000108d73988) */
/* WARNING: Removing unreachable block (ram,0x000108d73ac8) */
/* WARNING: Removing unreachable block (ram,0x000108d73ae8) */
/* WARNING: Removing unreachable block (ram,0x000108d739b4) */
/* WARNING: Removing unreachable block (ram,0x000108d739e0) */

int FUN_108d72474(undefined4 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  long alStack_58 [2];
  undefined4 uStack_44;
  
  if ((int)(uint)*(byte *)(param_1 + 7) <= param_2) {
    return 0;
  }
  if (iRam0000000113297914 != 0) {
    lVar2 = 2;
    (*pcRam0000000113297988)();
    if (lVar2 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar2 = *(long *)(param_1 + 4);
  if (1 < *(byte *)(param_1 + 7)) {
    if (param_2 == 1) {
      uStack_44 = 1;
      alStack_58[0] = (long)iRam0000000113298da4 + 2;
      alStack_58[1] = 0x1fe;
      puVar3 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar3 != 0) {
        ___error();
        param_1[8] = *puVar3;
        iVar4 = 0x90a;
        goto LAB_108d73b10;
      }
    }
    uStack_44 = 2;
    alStack_58[0] = (long)iRam0000000113298da4;
    alStack_58[1] = 2;
    puVar3 = param_1;
    FUN_108d737a0(param_1,alStack_58);
    if ((int)puVar3 != 0) {
      ___error();
      param_1[8] = *puVar3;
      iVar4 = 0x80a;
      goto LAB_108d73b10;
    }
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
  if (param_2 == 0) {
    iVar4 = *(int *)(lVar2 + 0x10) + -1;
    *(int *)(lVar2 + 0x10) = iVar4;
    if (iVar4 == 0) {
      uStack_44 = 2;
      alStack_58[0] = 0;
      alStack_58[1] = 0;
      puVar3 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar3 == 0) {
        iVar4 = 0;
        *(undefined1 *)(lVar2 + 0x14) = 0;
      }
      else {
        ___error();
        param_1[8] = *puVar3;
        *(undefined1 *)(lVar2 + 0x14) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        iVar4 = 0x80a;
      }
    }
    else {
      iVar4 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x28) + -1;
    *(int *)(lVar2 + 0x28) = iVar1;
    if (iVar1 == 0) {
      FUN_108d73494(param_1);
    }
  }
  else {
    iVar4 = 0;
  }
LAB_108d73b10:
  if (iRam0000000113297914 != 0) {
    lVar2 = 2;
    (*pcRam0000000113297988)();
    if (lVar2 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  if (iVar4 == 0) {
    *(char *)(param_1 + 7) = (char)param_2;
  }
  return iVar4;
}



/* Entry: 108d7247c; end: 108d7296b;  */

undefined8 FUN_108d7247c(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  if (*(byte *)(*(long *)(param_1 + 0x10) + 0x14) < 2) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x15) == '\0') {
      puVar2 = (undefined4 *)(ulong)*(uint *)(param_1 + 0x18);
      (*(code *)PTR__fcntl_1132991a8)(puVar2,7);
      if ((int)puVar2 == 0) {
        uVar3 = 0;
        uVar4 = 1;
      }
      else {
        ___error();
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x20) = *puVar2;
        uVar3 = 0xe0a;
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = 1;
  }
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  *param_2 = uVar4;
  return uVar3;
}



/* Entry: 108d7296c; end: 108d72983;  */

undefined8 FUN_108d7296c(void)

{
  return 0x1000;
}



/* Entry: 108d72984; end: 108d72f93;  */

ulong FUN_108d72984(ulong param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 uVar20;
  long lVar21;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  long lStack_98;
  
  uVar19 = param_1;
  (*(code *)PTR_FUN_113299340)();
  uVar5 = (uint)uVar19;
  uVar13 = uVar5;
  if ((int)uVar5 < 0x8001) {
    uVar13 = 0x8000;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    FUN_108d62be4();
    if (uVar5 == 0) {
      puVar7 = (undefined8 *)0x18;
      FUN_108d60848();
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        if (iRam0000000113297914 != 0) {
          lVar17 = 2;
          (*pcRam0000000113297988)();
          if (lVar17 != 0) {
            (*pcRam0000000113297998)();
          }
        }
        lVar17 = *(long *)(param_1 + 0x10);
        plVar18 = *(long **)(lVar17 + 0x20);
        if (plVar18 != (long *)0x0) goto LAB_108d72aa0;
        iVar14 = (int)*(undefined8 *)(param_1 + 0x38);
        iVar6 = *(int *)(param_1 + 0x18);
        (*(code *)PTR__fstat_113299178)(iVar6,auStack_f8);
        if ((iVar6 == 0) || (*(char *)(lVar17 + 0x15) != '\0')) {
          _strlen();
          iVar6 = iVar14;
          FUN_108d62be4();
          if (iVar6 == 0) {
            plVar18 = (long *)((long)iVar14 + 0x46);
            FUN_108d60848();
            if (plVar18 != (long *)0x0) {
              _bzero();
              plVar1 = plVar18 + 8;
              plVar18[2] = (long)plVar1;
              uVar19 = (ulong)(iVar14 + 6);
              func_0x000108d64bd8(uVar19,plVar1,&UNK_10f5178c9);
              *(undefined4 *)(plVar18 + 3) = 0xffffffff;
              lVar21 = *(long *)(param_1 + 0x10);
              *(long **)(lVar21 + 0x20) = plVar18;
              *plVar18 = lVar21;
              FUN_108d62be4();
              if ((int)uVar19 == 0) {
                (*pcRam0000000113297988)();
                plVar18[1] = uVar19;
                if (uVar19 != 0) {
                  if (*(char *)(lVar17 + 0x15) != '\0') {
LAB_108d72aa0:
                    *puVar7 = plVar18;
                    *(int *)(plVar18 + 6) = (int)plVar18[6] + 1;
                    *(undefined8 **)(param_1 + 0x40) = puVar7;
                    if (iRam0000000113297914 != 0) {
                      lVar17 = 2;
                      (*pcRam0000000113297988)();
                      if (lVar17 != 0) {
                        (*pcRam00000001132979a8)();
                      }
                    }
                    if (plVar18[1] == 0) {
                      puVar7[1] = plVar18[7];
                      plVar18[7] = (long)puVar7;
                    }
                    else {
                      (*pcRam0000000113297998)();
                      lVar17 = plVar18[1];
                      puVar7[1] = plVar18[7];
                      plVar18[7] = (long)puVar7;
                      if (lVar17 != 0) {
                        (*pcRam00000001132979a8)();
                      }
                    }
                    goto LAB_108d729d8;
                  }
                  uVar16 = *(undefined8 *)(param_1 + 0x38);
                  FUN_108d70de0(uVar16,&UNK_10f5178d0,0);
                  if ((int)uVar16 == 0) {
                    uVar16 = 0x202;
                  }
                  else {
                    uVar16 = 0;
                    *(undefined1 *)((long)plVar18 + 0x22) = 1;
                  }
                  plVar9 = plVar1;
                  func_0x000108d74b40(plVar1,uVar16,uStack_f4 & 0x1ff);
                  *(int *)(plVar18 + 3) = (int)plVar9;
                  if ((int)plVar9 < 0) {
                    uVar19 = 0xe;
                    FUN_108d64c00(0xe,&UNK_10f517890);
                    pcVar11 = "open";
                    uVar16 = 0xe;
                    uVar12 = 0x8284;
                  }
                  else {
                    (*(code *)PTR_FUN_1132992e0)();
                    uVar19 = param_1;
                    FUN_108d754dc(param_1,3,0x80,1);
                    if ((int)uVar19 != 0) {
LAB_108d72ee4:
                      uVar19 = param_1;
                      FUN_108d754dc(param_1,1,0x80,1);
                      if ((int)uVar19 != 0) goto LAB_108d72da8;
                      goto LAB_108d72aa0;
                    }
                    uVar5 = *(uint *)(plVar18 + 3);
                    do {
                      piVar10 = (int *)(ulong)uVar5;
                      (*(code *)PTR__ftruncate_113299190)((int *)(ulong)uVar5,0);
                      if (-1 < (int)piVar10) {
                        if ((int)piVar10 == 0) goto LAB_108d72ee4;
                        break;
                      }
                      ___error();
                    } while (*piVar10 == 4);
                    pcVar11 = "ftruncate";
                    uVar19 = 0x120a;
                    uVar16 = 0x120a;
                    uVar12 = 0x8294;
                  }
                  FUN_108d7356c(uVar16,pcVar11,plVar1,uVar12);
                  goto LAB_108d72da8;
                }
              }
              else {
                plVar18[1] = 0;
              }
            }
          }
          uVar19 = 7;
        }
        else {
          uVar19 = 0x70a;
        }
LAB_108d72da8:
        FUN_108d75568(param_1);
        func_0x000108d5e198(puVar7);
        if (iRam0000000113297914 == 0) {
          return uVar19;
        }
        lVar17 = 2;
        (*pcRam0000000113297988)();
        goto joined_r0x000108d72dd4;
      }
    }
    uVar19 = 7;
  }
  else {
LAB_108d729d8:
    uVar5 = uVar13 >> 0xf;
    lVar17 = **(long **)(param_1 + 0x40);
    if (*(long *)(lVar17 + 8) != 0) {
      (*pcRam0000000113297998)();
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      iVar6 = (int)(uVar5 + param_2) / (int)uVar5;
    }
    uVar4 = iVar6 * uVar5;
    uVar3 = *(ushort *)(lVar17 + 0x20);
    if ((int)(uint)uVar3 < (int)uVar4) {
      *(int *)(lVar17 + 0x1c) = param_3;
      iVar6 = *(int *)(lVar17 + 0x18);
      if (iVar6 < 0) goto LAB_108d72b98;
      (*(code *)PTR__fstat_113299178)(iVar6,auStack_f8);
      if (iVar6 == 0) {
        iVar14 = uVar4 * param_3;
        iVar6 = 0;
        if (lStack_98 < iVar14) {
          if (param_4 != 0) {
            lVar21 = lStack_98 + 0xfff;
            if (-1 < lStack_98) {
              lVar21 = lStack_98;
            }
            iVar2 = iVar14 + 0xfff;
            if (-1 < iVar14) {
              iVar2 = iVar14;
            }
            iVar14 = (int)(lVar21 >> 0xc);
            if (iVar14 < iVar2 >> 0xc) {
              uVar19 = (long)iVar14 << 0xc | 0xfff;
              lVar21 = (long)(iVar2 >> 0xc) - (long)iVar14;
              do {
                iVar6 = *(int *)(lVar17 + 0x18);
                func_0x000108d736e4(iVar6,uVar19,"",1,0);
                if (iVar6 != 1) {
                  uVar13 = 0x130a;
                  FUN_108d7356c(0x130a,"write",*(undefined8 *)(lVar17 + 0x10),0x8317);
                  goto LAB_108d72c78;
                }
                uVar19 = uVar19 + 0x1000;
                lVar21 = lVar21 + -1;
                iVar6 = 1;
              } while (lVar21 != 0);
            }
            goto LAB_108d72b98;
          }
        }
        else {
LAB_108d72b98:
          lVar21 = *(long *)(lVar17 + 0x28);
          FUN_108d62be4();
          if ((iVar6 != 0) ||
             (FUN_108d63588(lVar21,uVar4 * 8 & ((int)(uVar4 * 8) >> 0x1f ^ 0xffffffffU)),
             lVar21 == 0)) {
            uVar13 = 0xc0a;
            goto LAB_108d72c78;
          }
          *(long *)(lVar17 + 0x28) = lVar21;
          uVar15 = (uint)*(ushort *)(lVar17 + 0x20);
          if ((int)(uint)*(ushort *)(lVar17 + 0x20) < (int)uVar4) {
            do {
              iVar6 = (int)lVar21;
              if (*(int *)(lVar17 + 0x18) < 0) {
                FUN_108d62be4();
                if ((iVar6 != 0) || (lVar8 = (long)param_3, FUN_108d60848(), lVar8 == 0)) {
                  uVar13 = 7;
                  goto LAB_108d72c78;
                }
                lVar21 = lVar8;
                _bzero();
              }
              else {
                uVar20 = 3;
                if (*(char *)(lVar17 + 0x22) != '\0') {
                  uVar20 = 1;
                }
                lVar21 = 0;
                (*(code *)PTR__mmap_1132992f8)
                          (0,(long)(int)(uVar5 * param_3),uVar20,1,*(int *)(lVar17 + 0x18),
                           (long)(int)(uVar15 & 0xffff) * (long)param_3);
                lVar8 = lVar21;
                if (lVar21 == -1) {
                  ___error();
                  uVar13 = 0x150a;
                  FUN_108d64c00(0x150a,&UNK_10f5176e7);
                  goto LAB_108d72c78;
                }
              }
              uVar3 = *(ushort *)(lVar17 + 0x20);
              plVar18 = (long *)(*(long *)(lVar17 + 0x28) + (ulong)uVar3 * 8);
              uVar19 = (ulong)uVar5;
              do {
                *plVar18 = lVar8;
                lVar8 = lVar8 + param_3;
                uVar19 = uVar19 - 1;
                plVar18 = plVar18 + 1;
              } while (uVar19 != 0);
              uVar15 = (uint)uVar3 + (uVar13 >> 0xf);
              *(short *)(lVar17 + 0x20) = (short)uVar15;
            } while ((uVar15 & 0xffff) < uVar4);
          }
        }
        uVar13 = 0;
      }
      else {
        uVar13 = 0x130a;
      }
LAB_108d72c78:
      uVar3 = *(ushort *)(lVar17 + 0x20);
    }
    else {
      uVar13 = 0;
    }
    if (param_2 < (int)(uint)uVar3) {
      uVar16 = *(undefined8 *)(*(long *)(lVar17 + 0x28) + (long)param_2 * 8);
    }
    else {
      uVar16 = 0;
    }
    *param_5 = uVar16;
    uVar5 = 8;
    if (*(char *)(lVar17 + 0x22) == '\0' || uVar13 != 0) {
      uVar5 = uVar13;
    }
    uVar19 = (ulong)uVar5;
    lVar17 = *(long *)(lVar17 + 8);
joined_r0x000108d72dd4:
    if (lVar17 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar19;
}



/* Entry: 108d72f94; end: 108d7314b;  */

long FUN_108d72f94(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x40);
  lVar6 = *plVar7;
  if (*(long *)(lVar6 + 8) != 0) {
    (*pcRam0000000113297998)();
  }
  uVar1 = (1 << (ulong)((int)param_3 + param_2 & 0x1f)) + (-1 << (ulong)(param_2 & 0x1f));
  uVar2 = (ushort)uVar1;
  if ((param_4 & 1) == 0) {
    lVar3 = *(long *)(lVar6 + 0x38);
    if ((param_4 >> 2 & 1) == 0) {
      for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        if (((uVar1 & *(ushort *)(lVar3 + 0x14)) != 0) || ((uVar1 & *(ushort *)(lVar3 + 0x12)) != 0)
           ) goto LAB_108d730f8;
      }
      FUN_108d754dc(param_1,3,param_2 + 0x78,param_3);
      if ((int)param_1 == 0) {
        *(ushort *)((long)plVar7 + 0x14) = *(ushort *)((long)plVar7 + 0x14) | uVar2;
      }
      goto LAB_108d7311c;
    }
    uVar5 = 0;
    for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      if ((uVar1 & *(ushort *)(lVar3 + 0x14)) != 0) goto LAB_108d730f8;
      uVar5 = *(ushort *)(lVar3 + 0x12) | uVar5;
    }
    if (((uVar5 & uVar1) == 0) &&
       (FUN_108d754dc(param_1,1,param_2 + 0x78,param_3), (int)param_1 != 0)) goto LAB_108d7311c;
    uVar2 = *(ushort *)((long)plVar7 + 0x12) | uVar2;
  }
  else {
    plVar4 = *(long **)(lVar6 + 0x38);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      uVar5 = 0;
      do {
        if (plVar4 != plVar7) {
          uVar5 = *(ushort *)((long)plVar4 + 0x12) | uVar5;
        }
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)0x0);
    }
    if (((uVar5 & uVar1) == 0) &&
       (FUN_108d754dc(param_1,2,param_2 + 0x78,param_3), (int)param_1 != 0)) goto LAB_108d7311c;
    *(ushort *)((long)plVar7 + 0x14) = *(ushort *)((long)plVar7 + 0x14) & (uVar2 ^ 0xffff);
    uVar2 = *(ushort *)((long)plVar7 + 0x12) & (uVar2 ^ 0xffff);
  }
  param_1 = 0;
  *(ushort *)((long)plVar7 + 0x12) = uVar2;
LAB_108d7311c:
  if (*(long *)(lVar6 + 8) != 0) {
    (*pcRam00000001132979a8)();
  }
  return param_1;
LAB_108d730f8:
  param_1 = 5;
  goto LAB_108d7311c;
}



/* Entry: 108d7314c; end: 108d731bb;  */

void FUN_108d7314c(void)

{
  long lVar1;
  
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)();
    }
    if (iRam0000000113297914 != 0) {
      lVar1 = 2;
      (*pcRam0000000113297988)();
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d731ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam00000001132979a8)();
        return;
      }
    }
  }
  return;
}



/* Entry: 108d731bc; end: 108d732d3;  */

undefined8 FUN_108d731bc(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (*(long *)(lVar7 + 8) != 0) {
      (*pcRam0000000113297998)();
    }
    plVar2 = (long *)(lVar7 + 0x38);
    do {
      plVar4 = plVar2;
      plVar5 = (long *)*plVar4;
      plVar2 = plVar5 + 1;
    } while (plVar5 != plVar6);
    *plVar4 = plVar6[1];
    func_0x000108d5e198(plVar6);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(long *)(lVar7 + 8) != 0) {
      (*pcRam00000001132979a8)();
    }
    if (iRam0000000113297914 != 0) {
      lVar3 = 2;
      (*pcRam0000000113297988)();
      if (lVar3 != 0) {
        (*pcRam0000000113297998)();
      }
    }
    iVar1 = *(int *)(lVar7 + 0x30) + -1;
    *(int *)(lVar7 + 0x30) = iVar1;
    if (iVar1 == 0) {
      if ((param_2 != 0) && (-1 < *(int *)(lVar7 + 0x18))) {
        (*(code *)PTR__unlink_113299280)(*(undefined8 *)(lVar7 + 0x10));
      }
      FUN_108d75568(param_1);
    }
    if (iRam0000000113297914 != 0) {
      lVar7 = 2;
      (*pcRam0000000113297988)();
      if (lVar7 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
  }
  return 0;
}



/* Entry: 108d732d4; end: 108d732e7;  */

undefined8 FUN_108d732d4(void)

{
  undefined8 *in_x3;
  
  *in_x3 = 0;
  return 0;
}



/* Entry: 108d732e8; end: 108d73493;  */

void FUN_108d732e8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_140 [6];
  short sStack_13a;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  
  if ((*(ushort *)(param_1 + 0x1e) >> 8 & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  (*(code *)PTR__fstat_113299178)(iVar1,auStack_140);
  if (iVar1 != 0) {
    puVar3 = &UNK_10f51767b;
    goto LAB_108d7332c;
  }
  if (sStack_13a != 1) {
    if (sStack_13a != 0) {
      puVar3 = &UNK_10f5176b0;
      goto LAB_108d7332c;
    }
    if ((*(ushort *)(param_1 + 0x1e) >> 5 & 1) == 0) {
      puVar3 = &UNK_10f517693;
      goto LAB_108d7332c;
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__stat_113299160)(uVar2,auStack_b0);
  if (((int)uVar2 == 0) && (lStack_a8 == *(long *)(*(long *)(param_1 + 0x10) + 8))) {
    return;
  }
  puVar3 = &UNK_10f5176cb;
LAB_108d7332c:
  FUN_108d64c00(0x1c,puVar3);
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x100;
  return;
}



/* Entry: 108d73494; end: 108d734eb;  */

void FUN_108d73494(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = *(undefined4 **)(lVar2 + 0x30);
  while (puVar1 != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(puVar1 + 2);
    FUN_108d734ec(param_1,*puVar1,0x7647);
    func_0x000108d5e198(puVar1);
    puVar1 = puVar3;
  }
  *(undefined8 *)(lVar2 + 0x30) = 0;
  return;
}



/* Entry: 108d734ec; end: 108d7356b;  */

void FUN_108d734ec(undefined8 param_1,int param_2)

{
  (*(code *)PTR__close_113299118)();
  if (param_2 != 0) {
    ___error();
    FUN_108d64c00(0x100a,&UNK_10f5176e7);
  }
  return;
}



/* Entry: 108d7356c; end: 108d735db;  */

undefined8 FUN_108d7356c(undefined8 param_1)

{
  ___error();
  FUN_108d64c00(param_1,&UNK_10f5176e7);
  return param_1;
}



/* Entry: 108d735dc; end: 108d7379f;  */

int FUN_108d735dc(long param_1,undefined4 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(ulong)*(uint *)(param_1 + 0x18);
  _lseek(puVar2,param_2,0);
  if (puVar2 == param_2) {
    iVar5 = 0;
    param_4 = param_4 & 0x1ffff;
    do {
      piVar3 = (int *)(ulong)*(uint *)(param_1 + 0x18);
      (*(code *)PTR__read_1132991c0)(piVar3,param_3,(long)(int)param_4);
      uVar4 = (uint)piVar3;
      uVar1 = param_4 - uVar4;
      if (uVar1 == 0) {
LAB_108d736c8:
        return iVar5 + param_4;
      }
      if ((int)uVar4 < 0) {
        ___error();
        if (*piVar3 != 4) {
          ___error();
          iVar5 = 0;
          *(int *)(param_1 + 0x20) = *piVar3;
          param_4 = uVar4;
          goto LAB_108d736c8;
        }
      }
      else {
        param_4 = uVar4;
        if (uVar4 == 0) goto LAB_108d736c8;
        param_2 = (undefined4 *)(((ulong)piVar3 & 0x7fffffff) + (long)param_2);
        iVar5 = iVar5 + uVar4;
        param_3 = param_3 + ((ulong)piVar3 & 0x7fffffff);
        param_4 = uVar1;
      }
      puVar2 = (undefined4 *)(ulong)*(uint *)(param_1 + 0x18);
      _lseek(puVar2,param_2,0);
    } while (puVar2 == param_2);
  }
  if (puVar2 == (undefined4 *)0xffffffffffffffff) {
    ___error();
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return -1;
}



/* Entry: 108d737a0; end: 108d7385f;  */

void FUN_108d737a0(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 0x1e);
  if ((uVar1 & 1) == 0) {
    if (((uVar1 >> 1 & 1) == 0) && (*(char *)(lVar3 + 0x15) != '\0')) {
      return;
    }
  }
  else if ((uVar1 >> 1 & 1) == 0) {
    if (*(char *)(lVar3 + 0x15) != '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    (*(code *)PTR__fcntl_1132991a8)(iVar2,8);
    if (iVar2 < 0) {
      return;
    }
    *(undefined1 *)(lVar3 + 0x15) = 1;
    *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
    return;
  }
  (*(code *)PTR__fcntl_1132991a8)(*(undefined4 *)(param_1 + 0x18),8);
  return;
}



/* Entry: 108d73860; end: 108d738df;  */

uint FUN_108d73860(uint param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 < 0x3d) {
    uVar2 = (ulong)param_1;
    if ((1L << (uVar2 & 0x3f) & 0x1000000800010010U) != 0) {
      return 5;
    }
    if (uVar2 == 1) {
      return 3;
    }
    if (uVar2 == 0xd) {
      uVar1 = 5;
      if ((param_2 & 0xeff) != 0x80a && (param_2 & 0xeff) != 0xe0a) {
        uVar1 = 3;
      }
      return uVar1;
    }
  }
  uVar1 = 5;
  if (param_1 != 0x4d) {
    uVar1 = param_2;
  }
  return uVar1;
}



/* Entry: 108d738e0; end: 108d73b57;  */

ulong FUN_108d738e0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long alStack_58 [2];
  undefined4 uStack_44;
  
  if ((int)(uint)(byte)param_1[7] <= param_2) {
    return 0;
  }
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar3 = *(long *)(param_1 + 4);
  if ((byte)param_1[7] < 2) {
LAB_108d73a6c:
    if (param_2 == 0) {
      iVar2 = *(int *)(lVar3 + 0x10) + -1;
      *(int *)(lVar3 + 0x10) = iVar2;
      if (iVar2 == 0) {
        uStack_44 = 2;
        alStack_58[0] = 0;
        alStack_58[1] = 0;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 == 0) {
          uVar5 = 0;
          *(undefined1 *)(lVar3 + 0x14) = 0;
        }
        else {
          ___error();
          param_1[8] = *puVar4;
          *(undefined1 *)(lVar3 + 0x14) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
          uVar5 = 0x80a;
        }
      }
      else {
        uVar5 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x28) + -1;
      *(int *)(lVar3 + 0x28) = iVar2;
      if (iVar2 == 0) {
        FUN_108d73494(param_1);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    if (param_2 == 1) {
      if (param_3 == 0) {
        uStack_44 = 1;
        alStack_58[0] = (long)iRam0000000113298da4 + 2;
        alStack_58[1] = 0x1fe;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 != 0) {
          ___error();
          param_1[8] = *puVar4;
          uVar5 = 0x90a;
          goto LAB_108d73b10;
        }
        goto LAB_108d73a2c;
      }
      uStack_44 = 2;
      alStack_58[0] = (long)iRam0000000113298da4 + 2;
      alStack_58[1] = 0x1fd;
      puVar4 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar4 != -1) {
        uStack_44 = 1;
        alStack_58[0] = (long)iRam0000000113298da4 + 2;
        alStack_58[1] = 0x1fd;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 == -1) {
          ___error();
          uVar1 = *puVar4;
          uVar5 = (ulong)uVar1;
          FUN_108d73860(uVar5,0x90a);
          if ((int)uVar5 != 5) {
            param_1[8] = uVar1;
          }
          goto LAB_108d73b10;
        }
        uStack_44 = 2;
        alStack_58[0] = (long)iRam0000000113298da4 + 0x1ff;
        alStack_58[1] = 1;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 != -1) goto LAB_108d73a2c;
      }
    }
    else {
LAB_108d73a2c:
      uStack_44 = 2;
      alStack_58[0] = (long)iRam0000000113298da4;
      alStack_58[1] = 2;
      puVar4 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar4 == 0) {
        *(undefined1 *)(lVar3 + 0x14) = 1;
        goto LAB_108d73a6c;
      }
    }
    ___error();
    param_1[8] = *puVar4;
    uVar5 = 0x80a;
  }
LAB_108d73b10:
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  if ((int)uVar5 == 0) {
    *(char *)(param_1 + 7) = (char)param_2;
  }
  return uVar5;
}



/* Entry: 108d73b58; end: 108d7422f;  */

undefined8 FUN_108d73b58(int param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar8;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  ulong uVar7;
  
  uRam0000000113298da8 = uRam000000011372e6e8;
  if (puRam0000000113298db0 == (undefined *)0x0) {
    puVar4 = &UNK_10f51777c;
    _getenv();
    puRam0000000113298db0 = puVar4;
  }
  if (puRam0000000113298db8 == (undefined *)0x0) {
    puVar4 = &UNK_10f51778a;
    _getenv();
    puRam0000000113298db8 = puVar4;
  }
  lVar5 = 0;
  puVar4 = (undefined *)0x0;
  do {
    if ((((puVar4 != (undefined *)0x0) &&
         (puVar2 = puVar4, (*(code *)PTR__stat_113299160)(puVar4,auStack_f8), (int)puVar2 == 0)) &&
        ((uStack_f4 & 0xf000) == 0x4000)) &&
       (puVar2 = puVar4, (*(code *)PTR__access_113299130)(puVar4,7), (int)puVar2 == 0)) break;
    puVar4 = *(undefined **)(lVar5 + 0x113298da8);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x38);
  puVar2 = &DAT_10f62a9de;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
  }
  _strlen();
  if (puVar2 + 0x19 < (undefined *)(long)param_1) {
    do {
      func_0x000108d64bd8(param_1 + -0x12,param_2,&UNK_10f51775a);
      uVar7 = param_2;
      _strlen();
      iVar8 = 0xf;
      FUN_108d64cc0(0xf,param_2 + (uVar7 & 0xffffffff));
      do {
        bVar1 = *(byte *)(param_2 + (uVar7 & 0xffffffff));
        *(undefined *)(param_2 + (uVar7 & 0xffffffff)) =
             (&UNK_10f51771b)[(ulong)((uint)bVar1 + ((bVar1 >> 1) / 0x1f) * -0x3e) & 0xff];
        iVar6 = (int)uVar7;
        uVar7 = (ulong)(iVar6 + 1);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined1 *)(param_2 + uVar7) = 0;
      *(undefined1 *)(param_2 + (iVar6 + 2)) = 0;
      uVar7 = param_2;
      (*(code *)PTR__access_113299130)(param_2,0);
    } while ((int)uVar7 == 0);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 108d74230; end: 108d7456b;  */

long * FUN_108d74230(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 auStack_d68 [144];
  undefined1 auStack_cd8 [64];
  byte bStack_c98;
  long alStack_459 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    plVar15 = (long *)0x5;
    plVar4 = param_1;
    goto LAB_108d74394;
  }
  if ((undefined *)*param_1 == &DAT_110ac3a98) {
    lVar13 = *(long *)(param_1[5] + 8);
LAB_108d742b4:
    plVar14 = alStack_459;
    ___strlcpy_chk(plVar14,lVar13,0x400,0x401);
    if (param_2 == (long *)0x0) goto LAB_108d74310;
LAB_108d742ec:
    if ((char)*param_2 == '\0') goto LAB_108d74310;
    plVar14 = param_2;
    _strcmp(param_2,&UNK_10f5177a3);
    plVar4 = (long *)0x0;
    if ((int)plVar14 != 0) {
      plVar4 = param_2;
    }
  }
  else {
    lVar13 = param_1[5];
    if ((undefined *)*param_1 != &UNK_110ac3c60) goto LAB_108d742b4;
    lVar17 = lVar13;
    _strlen(lVar13);
    plVar14 = alStack_459;
    ___memcpy_chk(plVar14,lVar13,(long)((int)lVar17 + -4),0x401);
    if (param_2 != (long *)0x0) goto LAB_108d742ec;
LAB_108d74310:
    plVar4 = (long *)0x0;
  }
  FUN_108d62be4();
  if ((int)plVar14 == 0) {
    plVar14 = (long *)0x40;
    FUN_108d60848();
    if (plVar14 != (long *)0x0) {
      plVar14[5] = 0;
      plVar14[4] = 0;
      plVar14[7] = 0;
      plVar14[6] = 0;
      plVar14[1] = 0;
      *plVar14 = 0;
      plVar14[3] = 0;
      plVar14[2] = 0;
      plVar15 = alStack_459;
      _strlen();
      uVar1 = (uint)plVar15;
      uVar2 = uVar1;
      FUN_108d62be4();
      if (uVar2 == 0) {
        lVar17 = (long)plVar15 << 0x20;
        lVar13 = lVar17 + 0x800000000 >> 0x20;
        FUN_108d60848();
        plVar14[1] = lVar13;
        if (lVar13 == 0) goto LAB_108d74358;
        _memcpy();
        plVar6 = plVar15;
        do {
          plVar6 = (long *)((long)plVar6 + -1);
          iVar8 = (int)plVar15;
          plVar15 = (long *)(ulong)(iVar8 - 1);
          iVar5 = (uVar1 & (int)uVar1 >> 0x1f) - 1;
          if (iVar8 < 1) break;
          iVar5 = iVar8;
        } while (*(char *)(lVar13 + ((ulong)plVar6 & 0xffffffff)) != '/');
        lVar10 = (long)iVar5;
        *(undefined1 *)(lVar13 + iVar5) = 0x2e;
        lVar7 = lVar10;
        if (iVar5 < (int)uVar1) {
          lVar7 = lVar17 >> 0x20;
          lVar17 = lVar7 - lVar10;
          puVar9 = (undefined1 *)(lVar10 + lVar13);
          puVar11 = (undefined1 *)((long)alStack_459 + lVar10);
          do {
            puVar9 = puVar9 + 1;
            *puVar9 = *puVar11;
            lVar17 = lVar17 + -1;
            puVar11 = puVar11 + 1;
          } while (lVar17 != 0);
        }
        *(undefined4 *)(lVar13 + lVar7 + 4) = 0x68636e;
        *(undefined4 *)(lVar13 + lVar7 + 1) = 0x6e6f632d;
        plVar15 = (long *)plVar14[1];
        func_0x000108d74c7c(plVar15,plVar14,0);
        if ((int)plVar15 != 0xe) {
LAB_108d744f8:
          if (plVar4 == (long *)0x0) {
LAB_108d7452c:
            if ((int)plVar15 != 0) goto LAB_108d7435c;
          }
          else {
LAB_108d744fc:
            if ((int)plVar15 != 0) goto LAB_108d7452c;
            lVar13 = 0;
            FUN_108d68d58(0,plVar4);
            plVar14[3] = lVar13;
          }
          plVar4 = (long *)0x0;
          FUN_108d68d58(0,alStack_459);
          plVar14[4] = (long)plVar4;
          if (plVar4 != (long *)0x0) {
            plVar15 = (long *)0x0;
            lVar13 = param_1[5];
            param_1[5] = (long)plVar14;
            lVar17 = *param_1;
            plVar14[6] = lVar13;
            plVar14[7] = lVar17;
            *param_1 = (long)&UNK_110ac3a00;
            goto LAB_108d74394;
          }
          goto LAB_108d74358;
        }
        if ((*(byte *)((long)param_1 + 0x4c) >> 1 & 1) == 0) {
          piVar3 = (int *)plVar14[1];
          (*(code *)PTR__stat_113299160)(piVar3,auStack_d68);
          if (((int)piVar3 != -1) || (___error(), *piVar3 != 2)) {
LAB_108d744f4:
            plVar15 = (long *)0xe;
            goto LAB_108d744f8;
          }
          plVar15 = alStack_459;
          _statfs(plVar15,auStack_cd8);
          if (((int)plVar15 == -1) || ((bStack_c98 & 1) == 0)) goto LAB_108d744f4;
          plVar15 = (long *)0x0;
          *(undefined4 *)(plVar14 + 5) = 0xffffffff;
          if (plVar4 != (long *)0x0) goto LAB_108d744fc;
          goto LAB_108d7452c;
        }
        plVar15 = (long *)0xe;
      }
      else {
        plVar14[1] = 0;
LAB_108d74358:
        plVar15 = (long *)0x7;
      }
LAB_108d7435c:
      if ((long *)*plVar14 != (long *)0x0) {
        (**(code **)(*(long *)*plVar14 + 8))();
        func_0x000108d5e198(*plVar14);
      }
      if (plVar14[3] != 0) {
        func_0x000108d5e198();
      }
      func_0x000108d5e198(plVar14[1]);
      func_0x000108d5e198();
      plVar4 = plVar14;
      goto LAB_108d74394;
    }
  }
  plVar15 = (long *)0x7;
  plVar4 = plVar14;
LAB_108d74394:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar15;
  }
  ___stack_chk_fail();
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar12 = (undefined8 *)plVar4[5];
  plVar15 = (long *)puVar12[2];
  plVar14 = (long *)*puVar12;
  if (plVar15 != (long *)0x0) {
    plVar6 = plVar15;
    (**(code **)(*plVar15 + 0x40))(plVar15,0);
    if ((int)plVar6 != 0) {
      return plVar6;
    }
    plVar6 = plVar15;
    (**(code **)(*plVar15 + 8))();
    if ((int)plVar6 != 0) {
      return plVar6;
    }
    func_0x000108d5e198(plVar15);
    puVar12[2] = 0;
  }
  if (plVar14 != (long *)0x0) {
    if (*(int *)(puVar12 + 5) != 0) {
      puVar16 = (undefined8 *)plVar4[5];
      if (*(int *)(puVar16 + 5) < 1) {
        *(undefined4 *)(puVar16 + 5) = 0;
      }
      else {
        plVar15 = (long *)*puVar16;
        (**(code **)(*plVar15 + 0x40))(plVar15,0);
        *(undefined4 *)(puVar16 + 5) = 0;
        if ((int)plVar15 != 0) {
          return plVar15;
        }
      }
    }
    plVar15 = plVar14;
    (**(code **)(*plVar14 + 8))();
    if ((int)plVar15 != 0) {
      return plVar15;
    }
    func_0x000108d5e198(plVar14);
  }
  if (puVar12[3] != 0) {
    func_0x000108d5e198();
  }
  func_0x000108d5e198(puVar12[1]);
  if (puVar12[4] != 0) {
    func_0x000108d5e198();
  }
  lVar13 = puVar12[7];
  plVar4[5] = puVar12[6];
  *plVar4 = lVar13;
  func_0x000108d5e198(puVar12);
                    /* WARNING: Could not recover jumptable at 0x000108d74684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 8))(plVar4);
  return plVar4;
}



/* Entry: 108d7456c; end: 108d74757;  */

void FUN_108d7456c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[5];
  plVar5 = (long *)puVar3[2];
  plVar4 = (long *)*puVar3;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 0x40))(plVar5,0);
    if ((int)plVar2 != 0) {
      return;
    }
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 8))();
    if ((int)plVar2 != 0) {
      return;
    }
    func_0x000108d5e198(plVar5);
    puVar3[2] = 0;
  }
  if (plVar4 != (long *)0x0) {
    if (*(int *)(puVar3 + 5) != 0) {
      puVar6 = (undefined8 *)param_1[5];
      if (*(int *)(puVar6 + 5) < 1) {
        *(undefined4 *)(puVar6 + 5) = 0;
      }
      else {
        plVar5 = (long *)*puVar6;
        (**(code **)(*plVar5 + 0x40))(plVar5,0);
        *(undefined4 *)(puVar6 + 5) = 0;
        if ((int)plVar5 != 0) {
          return;
        }
      }
    }
    plVar5 = plVar4;
    (**(code **)(*plVar4 + 8))();
    if ((int)plVar5 != 0) {
      return;
    }
    func_0x000108d5e198(plVar4);
  }
  if (puVar3[3] != 0) {
    func_0x000108d5e198();
  }
  func_0x000108d5e198(puVar3[1]);
  if (puVar3[4] != 0) {
    func_0x000108d5e198();
  }
  lVar1 = puVar3[7];
  param_1[5] = puVar3[6];
  *param_1 = lVar1;
  func_0x000108d5e198(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000108d74684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 108d74758; end: 108d747b3;  */

void FUN_108d74758(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1;
  func_0x000108d73d1c();
  if (((int)lVar1 == 0) && (0 < *(int *)(*(long *)(param_1 + 0x28) + 0x28))) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000108d747a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
    return;
  }
  return;
}



/* Entry: 108d747b4; end: 108d74f8f;  */

/* WARNING: Possible PIC construction at 0x000108d749c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d749c4) */
/* WARNING: Removing unreachable block (ram,0x000108d74a08) */
/* WARNING: Removing unreachable block (ram,0x000108d749c8) */
/* WARNING: Removing unreachable block (ram,0x000108d74a84) */
/* WARNING: Removing unreachable block (ram,0x000108d749ec) */
/* WARNING: Removing unreachable block (ram,0x000108d74acc) */
/* WARNING: Removing unreachable block (ram,0x000108d74b0c) */
/* WARNING: Removing unreachable block (ram,0x000108d74b24) */
/* WARNING: Removing unreachable block (ram,0x000108d749fc) */
/* WARNING: Removing unreachable block (ram,0x000108d74a8c) */

long * FUN_108d747b4(long param_1,long *param_2,char *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined1 *unaff_x23;
  char *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar13;
  undefined1 auStack_a70 [4];
  ushort uStack_a6c;
  long lStack_a10;
  undefined8 uStack_9d8;
  ulong uStack_9d0;
  long lStack_9c8;
  char *pcStack_9c0;
  undefined1 *puStack_9b8;
  long *plStack_9b0;
  long *plStack_9a8;
  char *pcStack_9a0;
  long lStack_998;
  undefined1 *puStack_990;
  undefined8 uStack_988;
  long *plStack_980;
  undefined8 *puStack_978;
  long lStack_968;
  char acStack_960 [48];
  long lStack_930;
  long lStack_928;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  char cStack_889;
  long lStack_888;
  long lStack_880;
  char acStack_47d [4];
  undefined1 auStack_479 [1025];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)**(undefined8 **)(param_1 + 0x28);
  plVar6 = plVar12;
  pcVar8 = param_3;
  pcVar10 = param_3;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_3);
  if ((int)plVar6 == 5) {
    unaff_x25 = 0;
    unaff_x24 = &cStack_889;
    unaff_x26 = 1;
    unaff_x27 = 0x113299000;
    unaff_x23 = (undefined1 *)0x1;
    lVar11 = 0;
    lStack_968 = param_1;
    while( true ) {
      puVar5 = (undefined4 *)(ulong)*(uint *)(plVar12 + 3);
      pcVar8 = acStack_960;
      (*(code *)PTR__fstat_113299178)(puVar5,pcVar8);
      lVar3 = lStack_928;
      lVar2 = lStack_930;
      param_1 = lStack_968;
      if ((int)puVar5 != 0) break;
      if ((int)unaff_x23 == 0) {
        if (lVar11 == lStack_930 && unaff_x25 == lStack_928) {
          if ((int)unaff_x26 == 0) {
            puVar5 = (undefined4 *)(ulong)*(uint *)(plVar12 + 3);
            pcVar8 = &cStack_889;
            pcVar10 = (char *)0x411;
            (*(code *)PTR__pread_1132991d8)(puVar5,pcVar8,0x411,0);
            if ((int)(uint)puVar5 < 0) break;
            plVar6 = (long *)0x5;
            param_1 = lVar11;
            if (((0x11 < (uint)puVar5) && (cStack_889 == '\x02')) &&
               (lStack_888 == *param_2 && lStack_880 == param_2[1])) {
              _usleep(10000000);
              goto LAB_108d748d8;
            }
            goto LAB_108d74a4c;
          }
          unaff_x25 = **(long **)(lStack_968 + 0x28);
          param_2 = (long *)(*(long **)(lStack_968 + 0x28))[1];
          uStack_8a8 = 0;
          uStack_8b0 = 0;
          uStack_898 = 0;
          uStack_8a0 = 0;
          uStack_8c8 = 0;
          uStack_8d0 = 0;
          uStack_8b8 = 0;
          uStack_8c0 = 0;
          unaff_x23 = auStack_479 + 1;
          pcVar8 = auStack_479 + 1;
          ___strlcpy_chk(pcVar8,param_2,0x400,0x400);
          if (pcVar8 + -0x401 < (char *)0xfffffffffffffc05) {
            pcVar10 = "path error (len %d)";
            plStack_980 = (long *)pcVar8;
          }
          else {
            *(undefined2 *)(auStack_479 + (long)pcVar8) = 0x6b;
            builtin_strncpy(acStack_47d + (long)pcVar8,"brea",4);
            unaff_x24 = (char *)(ulong)*(uint *)(unaff_x25 + 0x18);
            (*(code *)PTR__pread_1132991d8)(unaff_x24,&cStack_889,0x411,0);
            if ((char *)0x10 < unaff_x24) {
              plVar6 = (long *)(auStack_479 + 1);
              pcVar8 = (char *)0xa02;
              pcVar10 = (char *)0x0;
              uVar13 = 0x108d749c4;
              goto SUB_108d74b40;
            }
            pcVar10 = "read error (len %d)";
            plStack_980 = (long *)unaff_x24;
          }
          func_0x000108d64bd8(0x40,&uStack_8d0);
          puStack_978 = &uStack_8d0;
          pcVar8 = "failed to break stale lock on %s, %s\n";
          plStack_980 = param_2;
          _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f517828);
          lVar11 = param_1;
        }
        plVar6 = (long *)0x5;
        param_1 = lVar11;
        goto LAB_108d74a4c;
      }
      _usleep(500000);
      param_1 = lVar2;
      unaff_x25 = lVar3;
LAB_108d748d8:
      plVar6 = plVar12;
      pcVar8 = param_3;
      (**(code **)(*plVar12 + 0x38))(plVar12,param_3);
      unaff_x23 = (undefined1 *)0x0;
      unaff_x26 = (ulong)((int)unaff_x26 - 1);
      lVar11 = param_1;
      if ((int)plVar6 != 5) goto LAB_108d74a4c;
    }
    ___error();
    *(undefined4 *)(lStack_968 + 0x20) = *puVar5;
    plVar6 = (long *)0xf0a;
    param_1 = lVar11;
  }
LAB_108d74a4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar6;
  }
  uVar13 = 0x108d74b40;
  ___stack_chk_fail();
SUB_108d74b40:
  uVar9 = (uint)pcVar10;
  uVar1 = 0x1a4;
  if (uVar9 != 0) {
    uVar1 = uVar9;
  }
  uStack_9d8 = unaff_x27;
  uStack_9d0 = unaff_x26;
  lStack_9c8 = unaff_x25;
  pcStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  plStack_9b0 = param_2;
  plStack_9a8 = plVar12;
  pcStack_9a0 = param_3;
  lStack_998 = param_1;
  puStack_990 = &stack0xfffffffffffffff0;
  uStack_988 = uVar13;
  while( true ) {
    while( true ) {
      plVar12 = plVar6;
      (*(code *)PTR_FUN_113299100)(plVar6,(uint)pcVar8 | 0x1000000,uVar1);
      if (-1 < (int)(uint)plVar12) break;
      plVar7 = plVar12;
      ___error();
      if ((int)*plVar7 != 4) {
        return plVar12;
      }
    }
    if (2 < (uint)plVar12) break;
    (*(code *)PTR__close_113299118)(plVar12);
    FUN_108d64c00(0x1c,&UNK_10f51785b);
    iVar4 = 0xf517886;
    (*(code *)PTR_FUN_113299100)(&UNK_10f517886,pcVar8,pcVar10);
    if (iVar4 < 0) {
      return (long *)0xffffffff;
    }
  }
  if (uVar9 == 0) {
    return plVar12;
  }
  plVar6 = plVar12;
  (*(code *)PTR__fstat_113299178)(plVar12,auStack_a70);
  if ((int)plVar6 != 0 || lStack_a10 != 0) {
    return plVar12;
  }
  if ((uStack_a6c & 0x1ff) == uVar9) {
    return plVar12;
  }
  (*(code *)PTR__fchmod_113299250)(plVar12,pcVar10);
  return plVar12;
}



/* Entry: 108d74f90; end: 108d7509f;  */

long FUN_108d74f90(undefined8 param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int aiStack_c0 [2];
  long lStack_b8;
  
  (*(code *)PTR__stat_113299160)(param_1,aiStack_c0);
  if ((int)param_1 != 0) {
    return 0;
  }
  piVar1 = piRam000000011372e688;
  if (iRam0000000113297914 != 0) {
    lVar2 = 2;
    (*pcRam0000000113297988)();
    piVar1 = piRam000000011372e688;
    if (lVar2 != 0) {
      (*pcRam0000000113297998)();
      piVar1 = piRam000000011372e688;
    }
  }
  for (; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 0xe)) {
    if ((*piVar1 == aiStack_c0[0]) && (*(long *)(piVar1 + 2) == lStack_b8)) {
      plVar4 = (long *)(piVar1 + 0xc);
      lVar2 = *plVar4;
      if (lVar2 == 0) goto LAB_108d7503c;
      if (*(int *)(lVar2 + 4) != param_2) goto LAB_108d75078;
      goto LAB_108d75094;
    }
  }
  lVar2 = 0;
  goto LAB_108d7503c;
  while (*(int *)(lVar2 + 4) != param_2) {
LAB_108d75078:
    lVar3 = lVar2;
    lVar2 = *(long *)(lVar3 + 8);
    if (lVar2 == 0) goto LAB_108d7503c;
  }
  plVar4 = (long *)(lVar3 + 8);
LAB_108d75094:
  *plVar4 = *(long *)(lVar2 + 8);
LAB_108d7503c:
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return lVar2;
}



/* Entry: 108d750a0; end: 108d754db;  */

undefined8 *
FUN_108d750a0(long param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4,uint param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  *(int *)(param_3 + 3) = (int)param_2;
  param_3[1] = param_1;
  param_3[7] = param_4;
  *(short *)((long)param_3 + 0x1e) = (short)param_5;
  puVar2 = (undefined *)0x0;
  if ((param_5 & 0x40) != 0) {
    puVar2 = param_4;
  }
  FUN_108d70de0(puVar2,&UNK_10f5178b7,1);
  if ((int)puVar2 != 0) {
    *(ushort *)((long)param_3 + 0x1e) = *(ushort *)((long)param_3 + 0x1e) | 0x10;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _strcmp(uVar3,&DAT_10f5173f9);
  if ((int)uVar3 == 0) {
    *(ushort *)((long)param_3 + 0x1e) = *(ushort *)((long)param_3 + 0x1e) | 1;
  }
  if (param_5 < 0x80) {
    puVar2 = param_4;
    (*(code *)**(undefined8 **)(param_1 + 0x20))(param_4,param_3);
    param_3[5] = param_4;
    puVar7 = param_3;
    if (puVar2 == &DAT_110ac3968 || puVar2 == &UNK_110ac3bc8) {
      if (iRam0000000113297914 != 0) {
        lVar4 = 2;
        (*pcRam0000000113297988)();
        if (lVar4 != 0) {
          (*pcRam0000000113297998)();
        }
      }
      func_0x000108d75350(param_3,param_3 + 2);
      if ((int)puVar7 != 0) {
        FUN_108d734ec(param_3,param_2,0x866f);
        param_2 = 0xffffffff;
      }
joined_r0x000108d752d8:
      if (iRam0000000113297914 != 0) {
        lVar4 = 2;
        (*pcRam0000000113297988)();
        if (lVar4 != 0) {
          (*pcRam00000001132979a8)();
        }
      }
LAB_108d75318:
      *(undefined4 *)(param_3 + 4) = 0;
      if ((int)puVar7 == 0) goto LAB_108d751f0;
      if ((int)param_2 < 0) {
        return puVar7;
      }
    }
    else {
      if (puVar2 != &DAT_110ac3a98) {
        if (puVar2 != &UNK_110ac3c60) goto LAB_108d751ec;
        _strlen();
        iVar1 = (int)param_4;
        FUN_108d62be4();
        if (iVar1 == 0) {
          iVar1 = (int)param_4 + 6;
          lVar4 = (long)iVar1;
          FUN_108d60848();
          if (lVar4 == 0) goto LAB_108d7523c;
          func_0x000108d64bd8(iVar1,lVar4,&UNK_10f5178bc);
          puVar7 = (undefined8 *)0x0;
        }
        else {
          lVar4 = 0;
LAB_108d7523c:
          puVar7 = (undefined8 *)0x7;
        }
        param_3[5] = lVar4;
        goto LAB_108d75318;
      }
      puVar5 = puVar2;
      FUN_108d62be4();
      if ((int)puVar5 == 0) {
        puVar6 = (undefined4 *)0x10;
        FUN_108d60848();
        param_3[5] = puVar6;
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined **)(puVar6 + 2) = param_4;
          *puVar6 = 0;
          _srandomdev();
          if (iRam0000000113297914 != 0) {
            lVar4 = 2;
            (*pcRam0000000113297988)();
            if (lVar4 != 0) {
              (*pcRam0000000113297998)();
            }
          }
          func_0x000108d75350(param_3,param_3 + 2);
          if ((int)puVar7 != 0) {
            func_0x000108d5e198(param_3[5]);
            FUN_108d734ec(param_3,param_2,0x8689);
            param_2 = 0xffffffff;
          }
          goto joined_r0x000108d752d8;
        }
      }
      else {
        param_3[5] = 0;
      }
      *(undefined4 *)(param_3 + 4) = 0;
      puVar7 = (undefined8 *)0x7;
    }
    FUN_108d734ec(param_3,param_2,0x86c4);
  }
  else {
    puVar2 = &DAT_110ac3b30;
LAB_108d751ec:
    *(undefined4 *)(param_3 + 4) = 0;
LAB_108d751f0:
    *param_3 = puVar2;
    FUN_108d732e8(param_3);
    puVar7 = (undefined8 *)0x0;
  }
  return puVar7;
}



/* Entry: 108d754dc; end: 108d75567;  */

undefined4 FUN_108d754dc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + 0x18);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if ((*(ushort *)(param_1 + 0x1e) & 0x200) != 0) {
      uVar2 = 9;
    }
    (*(code *)PTR__fcntl_1132991a8)(iVar1,uVar2);
    uVar2 = 5;
    if (iVar1 != -1) {
      uVar2 = 0;
    }
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfdff;
  }
  return uVar2;
}



/* Entry: 108d75568; end: 108d75667;  */

/* WARNING: Possible PIC construction at 0x000108d75628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d75610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d7562c) */
/* WARNING: Removing unreachable block (ram,0x000108d75634) */
/* WARNING: Removing unreachable block (ram,0x000108d75648) */

void FUN_108d75568(long param_1)

{
  uint uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x30) != 0)) {
    return;
  }
  (*(code *)PTR_FUN_113299340)();
  uVar1 = (uint)param_1;
  if ((int)uVar1 < 0x8001) {
    uVar1 = 0x8000;
  }
  if (*(long *)(lVar3 + 8) != 0) {
    (*pcRam0000000113297990)();
  }
  if (*(short *)(lVar3 + 0x20) != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) < 0) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x28) + uVar4 * 8);
        goto SUB_108d5e198;
      }
      (*(code *)PTR__munmap_113299310)
                (*(undefined8 *)(*(long *)(lVar3 + 0x28) + uVar4 * 8),(long)*(int *)(lVar3 + 0x1c));
      uVar4 = uVar4 + (uVar1 >> 0xf);
    } while (uVar4 < *(ushort *)(lVar3 + 0x20));
  }
  lVar3 = *(long *)(lVar3 + 0x28);
SUB_108d5e198:
  if (lVar3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    lVar2 = lVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)lVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(lVar3);
    lVar3 = lRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (lRam0000000113829af0 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar3);
  return;
}



/* Entry: 108d75668; end: 108d7572f;  */

undefined8 FUN_108d75668(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    FUN_108d75a60(param_1,0);
    if (iRam0000000113297914 != 0) {
      lVar1 = 2;
      (*pcRam0000000113297988)();
      if (lVar1 != 0) {
        (*pcRam0000000113297998)();
      }
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != 0)) {
      lVar2 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 0x30);
      *(long *)(lVar1 + 0x30) = lVar2;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    func_0x000108d733d8(param_1);
    func_0x000108d5e198(*(undefined8 *)(param_1 + 0x28));
    func_0x000108d73440(param_1);
    if (iRam0000000113297914 != 0) {
      lVar1 = 2;
      (*pcRam0000000113297988)();
      if (lVar1 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
  }
  return 0;
}



/* Entry: 108d75730; end: 108d75a5f;  */

ulong FUN_108d75730(long param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  
  if ((int)param_2 <= (int)(uint)*(byte *)(param_1 + 0x1c)) {
    return 0;
  }
  puVar10 = *(undefined4 **)(param_1 + 0x28);
  if (iRam0000000113297914 != 0) {
    lVar5 = 2;
    (*pcRam0000000113297988)();
    if (lVar5 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  bVar9 = *(byte *)(param_1 + 0x1c);
  bVar1 = *(byte *)(lVar5 + 0x14);
  if (bVar9 != bVar1) {
    uVar6 = 5;
    if ((1 < param_2) || (2 < bVar1)) goto LAB_108d75a14;
LAB_108d757d8:
    bVar2 = true;
    if (bVar1 - 1 < 2) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
      *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
      uVar6 = 0;
      goto LAB_108d75a14;
    }
LAB_108d75818:
    uVar6 = *(ulong *)(puVar10 + 2);
    FUN_108d75dcc(uVar6,param_1,(long)iRam0000000113298da4,1,1);
    if ((int)uVar6 != 0) goto LAB_108d75a14;
    if (!bVar2) {
      if (param_2 == 4) goto LAB_108d758ac;
      bVar2 = false;
      goto LAB_108d758cc;
    }
    _random();
    uVar6 = (uVar6 & 0x7fffffffffffffff) % 0x1fd;
    *(ulong *)(lVar5 + 0x48) = uVar6;
    uVar7 = *(ulong *)(puVar10 + 2);
    FUN_108d75dcc(uVar7,param_1,(long)iRam0000000113298da4 + uVar6 + 2,1,1);
    iVar3 = (int)uVar7;
    if (iVar3 == 0 || iVar3 == 5) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x20);
    }
    uVar6 = *(ulong *)(puVar10 + 2);
    FUN_108d75dcc(uVar6,param_1,(long)iRam0000000113298da4,1,0);
    if (iVar3 != 0 && iVar3 != 5) {
      *(undefined4 *)(param_1 + 0x20) = uVar11;
      uVar6 = uVar7;
      goto LAB_108d75a14;
    }
    if (((int)uVar6 != 5) && ((int)uVar6 != 0)) goto LAB_108d75a14;
    if (iVar3 != 0) goto LAB_108d75938;
    *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + 1;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    goto LAB_108d75a08;
  }
  if (param_2 == 4) {
    if (bVar9 < 3) {
      bVar2 = false;
      goto LAB_108d75818;
    }
LAB_108d758ac:
    if (*(int *)(lVar5 + 0x10) < 2) {
      bVar2 = true;
LAB_108d758cc:
      bVar9 = *(byte *)(param_1 + 0x1c);
      goto LAB_108d758d0;
    }
    uVar7 = 5;
  }
  else {
    if (param_2 == 1) goto LAB_108d757d8;
    bVar2 = false;
LAB_108d758d0:
    if (bVar9 < 2) {
      uVar7 = *(ulong *)(puVar10 + 2);
      FUN_108d75dcc(uVar7,param_1,(long)iRam0000000113298da4 + 1,1,1);
      if ((int)uVar7 == 0) {
        *puVar10 = 1;
        goto LAB_108d75904;
      }
    }
    else {
LAB_108d75904:
      if (!bVar2) {
LAB_108d75a08:
        *(char *)(param_1 + 0x1c) = (char)param_2;
        *(char *)(lVar5 + 0x14) = (char)param_2;
        uVar6 = 0;
        goto LAB_108d75a14;
      }
      uVar7 = *(ulong *)(puVar10 + 2);
      FUN_108d75dcc(uVar7,param_1,(long)iRam0000000113298da4 + *(long *)(lVar5 + 0x48) + 2,1,0);
      if ((int)uVar7 == 0) {
        uVar7 = *(ulong *)(puVar10 + 2);
        FUN_108d75dcc(uVar7,param_1,(long)iRam0000000113298da4 + 2,0x1fe,1);
        if ((uint)uVar7 == 0) goto LAB_108d75a08;
        uVar8 = *(undefined8 *)(puVar10 + 2);
        FUN_108d75dcc(uVar8,param_1,(long)iRam0000000113298da4 + *(long *)(lVar5 + 0x48) + 2,1,1);
        uVar4 = (uint)uVar8;
        if (uVar4 != 0) {
          if ((((uint)uVar7 ^ 0xffffffff) & 10) != 0) {
            uVar4 = 0xf0a;
          }
          uVar6 = (ulong)uVar4;
          goto LAB_108d75a14;
        }
      }
    }
LAB_108d75938:
    uVar6 = uVar7;
    if (param_2 != 4) goto LAB_108d75a14;
  }
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(undefined1 *)(lVar5 + 0x14) = 3;
  uVar6 = uVar7;
LAB_108d75a14:
  if (iRam0000000113297914 != 0) {
    lVar5 = 2;
    (*pcRam0000000113297988)();
    if (lVar5 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar6;
}



/* Entry: 108d75a60; end: 108d75dcb;  */

undefined8 FUN_108d75a60(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  
  if ((int)(uint)*(byte *)(param_1 + 0x1c) <= param_2) {
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0x28);
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  bVar5 = *(byte *)(param_1 + 0x1c);
  if (bVar5 < 2) {
    bVar2 = false;
LAB_108d75b10:
    uVar4 = 0;
  }
  else if (bVar5 == 4) {
    uVar4 = *(undefined8 *)(piVar7 + 2);
    FUN_108d75dcc(uVar4,param_1,(long)iRam0000000113298da4 + 2,0x1fe,0);
    if ((int)uVar4 == 0) {
      if ((param_2 == 1) || (1 < *(int *)(lVar3 + 0x10))) {
        uVar4 = *(undefined8 *)(piVar7 + 2);
        FUN_108d75dcc(uVar4,param_1,(long)(iRam0000000113298da4 + *(int *)(lVar3 + 0x48) + 2),1,1);
        bVar2 = false;
        if ((int)uVar4 != 0) goto LAB_108d75bec;
      }
      else {
        bVar2 = true;
      }
      bVar5 = *(byte *)(param_1 + 0x1c);
      goto LAB_108d75b1c;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
LAB_108d75b1c:
    if (2 < bVar5) {
      uVar4 = *(undefined8 *)(piVar7 + 2);
      FUN_108d75dcc(uVar4,param_1,(long)iRam0000000113298da4,1,0);
      if ((int)uVar4 != 0) goto LAB_108d75bec;
      bVar5 = *(byte *)(param_1 + 0x1c);
    }
    if ((1 < bVar5) && (*piVar7 != 0)) {
      uVar4 = *(undefined8 *)(piVar7 + 2);
      FUN_108d75dcc(uVar4,param_1,(long)iRam0000000113298da4 + 1,1,0);
      if ((int)uVar4 != 0) goto LAB_108d75bec;
      *piVar7 = 0;
    }
    if ((param_2 != 1) && (*(int *)(lVar3 + 0x10) < 2)) goto LAB_108d75b10;
    uVar4 = 0;
    *(undefined1 *)(lVar3 + 0x14) = 1;
  }
LAB_108d75bec:
  if ((int)uVar4 == 0 && param_2 == 0) {
    lVar6 = (long)iRam0000000113298da4;
    iVar1 = *(int *)(lVar3 + 0x10) + -1;
    *(int *)(lVar3 + 0x10) = iVar1;
    if (iVar1 == 0) {
      if (!bVar2) {
        uVar4 = *(undefined8 *)(piVar7 + 2);
        FUN_108d75dcc(uVar4,param_1,lVar6 + *(long *)(lVar3 + 0x48) + 2,1,0);
        if ((int)uVar4 != 0) goto LAB_108d75c38;
      }
      *(undefined1 *)(lVar3 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x28) + -1;
    *(int *)(lVar3 + 0x28) = iVar1;
    if (iVar1 == 0) {
      FUN_108d73494(param_1);
    }
    uVar4 = 0;
  }
LAB_108d75c38:
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  if ((int)uVar4 == 0) {
    *(char *)(param_1 + 0x1c) = (char)param_2;
  }
  return uVar4;
}



/* Entry: 108d75dcc; end: 108d75e63;  */

void FUN_108d75dcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte bStack_38;
  undefined1 uStack_37;
  undefined4 uStack_34;
  
  bStack_38 = (byte)param_5 ^ 1;
  uStack_37 = 0;
  uStack_34 = *(undefined4 *)(param_2 + 0x18);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _fsctl(param_1,0xc0207a17,&uStack_50,0);
  piVar3 = (int *)0x0;
  if ((int)param_1 == -1) {
    ___error();
    iVar1 = *piVar3;
    uVar4 = 0x80a;
    if (param_5 != 0) {
      uVar4 = 0xf0a;
    }
    iVar2 = iVar1;
    FUN_108d73860(iVar1,uVar4);
    if (iVar2 != 5) {
      *(int *)(param_2 + 0x20) = iVar1;
    }
  }
  return;
}



/* Entry: 108d75e64; end: 108d75e7b;  */

undefined8 FUN_108d75e64(void)

{
  func_0x000108d73440();
  return 0;
}



/* Entry: 108d75e7c; end: 108d75e97;  */

undefined8 FUN_108d75e7c(void)

{
  return 0;
}



/* Entry: 108d75e98; end: 108d75eb7;  */

void FUN_108d75e98(void)

{
  _open();
  return;
}



/* Entry: 108d75eb8; end: 108d75ff7;  */

char * FUN_108d75eb8(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  char acStack_239 [513];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = &UNK_10f517517;
  func_0x000108d64bd8(0x200,acStack_239,&UNK_10f517517);
  pcVar1 = acStack_239;
  _strlen();
  if ((int)pcVar1 < 2) {
    if ((int)pcVar1 == 1) goto LAB_108d75f34;
    *param_2 = -1;
  }
  else {
    do {
      uVar5 = (ulong)pcVar1 & 0xffffffff;
      if (acStack_239[(ulong)pcVar1 & 0xffffffff] == '/') goto LAB_108d75f38;
      iVar4 = (int)pcVar1;
      pcVar1 = (char *)(ulong)(iVar4 - 1);
    } while (2 < iVar4);
LAB_108d75f34:
    uVar5 = 1;
LAB_108d75f38:
    acStack_239[uVar5] = '\0';
    pcVar1 = acStack_239;
    puVar2 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
    func_0x000108d74b40(pcVar1,0,0);
    pcVar6 = (char *)0x0;
    *param_2 = (int)pcVar1;
    if (-1 < (int)pcVar1) goto LAB_108d75fc4;
  }
  pcVar6 = (char *)0xe;
  FUN_108d64c00(0xe,&UNK_10f517890);
  ___error();
  puVar2 = &UNK_10f5176e7;
  pcVar1 = (char *)0xe;
  FUN_108d64c00(0xe,&UNK_10f5176e7);
LAB_108d75fc4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pcVar6;
  }
  ___stack_chk_fail();
  pcVar6 = pcVar1;
  _geteuid();
  if ((int)pcVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fchown_11034c268)(pcVar1,puVar2,puVar3);
    return pcVar1;
  }
  return (char *)0x0;
}



/* Entry: 108d75ff8; end: 108d7604b;  */

undefined8 FUN_108d75ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _geteuid();
  if ((int)uVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fchown_11034c268)(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 108d7604c; end: 108d76063;  */

void FUN_108d7604c(void)

{
  _sysconf(0x1d);
  return;
}



/* Entry: 108d76064; end: 108d7606b;  */

/* WARNING: Removing unreachable block (ram,0x000108d739ec) */
/* WARNING: Removing unreachable block (ram,0x000108d73a18) */

ulong FUN_108d76064(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long alStack_58 [2];
  undefined4 uStack_44;
  
  if ((int)(uint)(byte)param_1[7] <= param_2) {
    return 0;
  }
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  lVar3 = *(long *)(param_1 + 4);
  if ((byte)param_1[7] < 2) {
LAB_108d73a6c:
    if (param_2 == 0) {
      iVar2 = *(int *)(lVar3 + 0x10) + -1;
      *(int *)(lVar3 + 0x10) = iVar2;
      if (iVar2 == 0) {
        uStack_44 = 2;
        alStack_58[0] = 0;
        alStack_58[1] = 0;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 == 0) {
          uVar5 = 0;
          *(undefined1 *)(lVar3 + 0x14) = 0;
        }
        else {
          ___error();
          param_1[8] = *puVar4;
          *(undefined1 *)(lVar3 + 0x14) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
          uVar5 = 0x80a;
        }
      }
      else {
        uVar5 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x28) + -1;
      *(int *)(lVar3 + 0x28) = iVar2;
      if (iVar2 == 0) {
        FUN_108d73494(param_1);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    if (param_2 == 1) {
      uStack_44 = 2;
      alStack_58[0] = (long)iRam0000000113298da4 + 2;
      alStack_58[1] = 0x1fd;
      puVar4 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar4 != -1) {
        uStack_44 = 1;
        alStack_58[0] = (long)iRam0000000113298da4 + 2;
        alStack_58[1] = 0x1fd;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 == -1) {
          ___error();
          uVar1 = *puVar4;
          uVar5 = (ulong)uVar1;
          FUN_108d73860(uVar5,0x90a);
          if ((int)uVar5 != 5) {
            param_1[8] = uVar1;
          }
          goto LAB_108d73b10;
        }
        uStack_44 = 2;
        alStack_58[0] = (long)iRam0000000113298da4 + 0x1ff;
        alStack_58[1] = 1;
        puVar4 = param_1;
        FUN_108d737a0(param_1,alStack_58);
        if ((int)puVar4 != -1) goto LAB_108d73a2c;
      }
    }
    else {
LAB_108d73a2c:
      uStack_44 = 2;
      alStack_58[0] = (long)iRam0000000113298da4;
      alStack_58[1] = 2;
      puVar4 = param_1;
      FUN_108d737a0(param_1,alStack_58);
      if ((int)puVar4 == 0) {
        *(undefined1 *)(lVar3 + 0x14) = 1;
        goto LAB_108d73a6c;
      }
    }
    ___error();
    param_1[8] = *puVar4;
    uVar5 = 0x80a;
  }
LAB_108d73b10:
  if (iRam0000000113297914 != 0) {
    lVar3 = 2;
    (*pcRam0000000113297988)();
    if (lVar3 != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  if ((int)uVar5 == 0) {
    *(char *)(param_1 + 7) = (char)param_2;
  }
  return uVar5;
}



/* Entry: 108d7606c; end: 108d76237;  */

undefined8 FUN_108d7606c(long param_1)

{
  if (param_1 != 0) {
    func_0x000108d76134(param_1,0);
    func_0x000108d5e198(*(undefined8 *)(param_1 + 0x28));
    func_0x000108d73440(param_1);
  }
  return 0;
}



/* Entry: 108d76238; end: 108d76267;  */

undefined * FUN_108d76238(void)

{
  return &DAT_110ac3b30;
}



/* Entry: 108d76268; end: 108d76377;  */

undefined8 FUN_108d76268(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      iVar1 = *(int *)(param_1 + 0x18);
      func_0x000108d76420(iVar1,8);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x1c) = 0;
      }
    }
    func_0x000108d73440(param_1);
  }
  return 0;
}



/* Entry: 108d76378; end: 108d7646f;  */

void FUN_108d76378(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(byte *)(param_1 + 0x1c) < 2) {
    piVar3 = (int *)(ulong)*(uint *)(param_1 + 0x18);
    func_0x000108d76420(piVar3,6);
    if ((int)piVar3 == 0) {
      piVar3 = (int *)(ulong)*(uint *)(param_1 + 0x18);
      func_0x000108d76420(piVar3,8);
      if ((int)piVar3 == 0) {
        uVar4 = 0;
        goto LAB_108d7640c;
      }
      ___error();
      iVar5 = *piVar3;
      uVar1 = 0;
    }
    else {
      ___error();
      iVar5 = *piVar3;
      iVar2 = iVar5;
      FUN_108d73860(iVar5,0xf0a);
      uVar4 = 1;
      uVar1 = 1;
      if (iVar2 == 5) goto LAB_108d7640c;
    }
    uVar4 = uVar1;
    *(int *)(param_1 + 0x20) = iVar5;
  }
  else {
    uVar4 = 1;
  }
LAB_108d7640c:
  *param_2 = uVar4;
  return;
}



/* Entry: 108d76470; end: 108d76493;  */

undefined * FUN_108d76470(void)

{
  return &DAT_110ac3a98;
}



/* Entry: 108d76494; end: 108d765f7;  */

long FUN_108d76494(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_58;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((uVar2 == 0) || (*(short *)(param_1 + 0x3c) == 0)) {
    *param_3 = 0;
  }
  else {
    uVar10 = (ulong)(uVar2 + 0x1000) + 0xffffffff021 >> 0xc;
    if ((int)uVar10 < 0) {
      uVar5 = 0;
    }
    else {
      uVar11 = (ulong)(param_2 * 0x17f & 0x1fff);
      do {
        lVar4 = param_1;
        FUN_108d76a9c(param_1,uVar10,&lStack_58);
        if ((int)lVar4 != 0) {
          return lVar4;
        }
        iVar9 = (int)uVar10;
        lVar4 = 0x88;
        if (iVar9 != 0) {
          lVar4 = 0;
        }
        iVar1 = 0;
        if (iVar9 != 0) {
          iVar1 = iVar9 * 0x1000 + -0x22;
        }
        puVar8 = (ushort *)(lStack_58 + 0x4000 + uVar11 * 2);
        uVar5 = (uint)*puVar8;
        if (*puVar8 != 0) {
          uVar7 = 0xffffdfff;
          uVar10 = uVar11;
          uVar6 = 0;
          do {
            uVar5 = uVar6;
            if ((iVar1 + (uint)*puVar8 <= uVar2) &&
               (uVar5 = iVar1 + (uint)*puVar8,
               *(int *)(lStack_58 + lVar4 + -4 + (ulong)*puVar8 * 4) != param_2)) {
              uVar5 = uVar6;
            }
            bVar3 = 0xfffffffe < uVar7;
            uVar7 = uVar7 + 1;
            if (bVar3) {
              FUN_108d64c00(0xb,&UNK_10f51799f);
              return 0xb;
            }
            uVar10 = (ulong)((int)uVar10 + 1U & 0x1fff);
            puVar8 = (ushort *)(lStack_58 + 0x4000 + uVar10 * 2);
            uVar6 = uVar5;
          } while (*puVar8 != 0);
        }
        uVar10 = (ulong)(iVar9 - 1);
      } while ((0 < iVar9) && (uVar5 == 0));
    }
    *param_3 = uVar5;
  }
  return 0;
}



/* Entry: 108d765f8; end: 108d7663b;  */

long * FUN_108d765f8(long param_1,undefined8 param_2)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x130) + 0x40);
  (*pcRam00000001132979f8)(plVar2,param_2,0);
  lVar3 = *(long *)(param_1 + 0x130);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar4 = (long *)plVar2[1];
    if (*plVar4 != 0) break;
    plVar4 = (long *)plVar2[1];
    plVar4[8] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    plVar4[1] = 0;
    *plVar4 = 0;
    plVar4[3] = 0;
    plVar4[2] = 0;
    lVar5 = *plVar2;
    *plVar4 = (long)plVar2;
    plVar4[1] = lVar5;
    plVar4[2] = (long)(plVar4 + 9);
    _bzero(plVar4 + 9,(long)*(int *)(lVar3 + 0x24));
    plVar4[6] = lVar3;
    *(int *)(plVar4 + 5) = (int)param_2;
  }
  sVar1 = *(short *)((long)plVar4 + 0x2e);
  if (sVar1 == 0) {
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  }
  *(short *)((long)plVar4 + 0x2e) = sVar1 + 1;
  if ((int)param_2 == 1) {
    *(long **)(lVar3 + 0x48) = plVar4;
  }
  return plVar4;
}



/* Entry: 108d7663c; end: 108d7668b;  */

long * FUN_108d7663c(long param_1,int param_2,long *param_3)

{
  short sVar1;
  long *plVar2;
  long lVar3;
  
  while( true ) {
    if (param_3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2 = (long *)param_3[1];
    if (*plVar2 != 0) break;
    plVar2 = (long *)param_3[1];
    plVar2[8] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    lVar3 = *param_3;
    *plVar2 = (long)param_3;
    plVar2[1] = lVar3;
    plVar2[2] = (long)(plVar2 + 9);
    _bzero(plVar2 + 9,(long)*(int *)(param_1 + 0x24));
    plVar2[6] = param_1;
    *(int *)(plVar2 + 5) = param_2;
  }
  sVar1 = *(short *)((long)plVar2 + 0x2e);
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(short *)((long)plVar2 + 0x2e) = sVar1 + 1;
  if (param_2 == 1) {
    *(long **)(param_1 + 0x48) = plVar2;
  }
  return plVar2;
}



/* Entry: 108d7668c; end: 108d76947;  */

uint * FUN_108d7668c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  if (param_1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  uVar7 = param_2 - 1;
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 < 0xf81) {
      *(byte *)((long)param_1 + (ulong)(uVar7 >> 3) + 0x10) =
           *(byte *)((long)param_1 + (ulong)(uVar7 >> 3) + 0x10) | (byte)(1 << (ulong)(uVar7 & 7));
      return (uint *)0x0;
    }
    uVar1 = param_1[2];
    puVar9 = param_1 + 4;
    if (uVar1 == 0) break;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar7 / uVar1;
    }
    param_1 = *(uint **)(puVar9 + (ulong)uVar2 * 2);
    if (param_1 == (uint *)0x0) {
      param_1 = (uint *)0x200;
      FUN_108d60848();
      if (param_1 == (uint *)0x0) {
        (puVar9 + (ulong)uVar2 * 2)[0] = 0;
        (puVar9 + (ulong)uVar2 * 2)[1] = 0;
        goto LAB_108d768b4;
      }
      param_1[0x7a] = 0;
      param_1[0x7b] = 0;
      param_1[0x78] = 0;
      param_1[0x79] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      param_1[0x76] = 0;
      param_1[0x77] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      param_1[0x66] = 0;
      param_1[0x67] = 0;
      param_1[100] = 0;
      param_1[0x65] = 0;
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      param_1[0x56] = 0;
      param_1[0x57] = 0;
      param_1[0x54] = 0;
      param_1[0x55] = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = uVar1;
      *(uint **)(puVar9 + (ulong)uVar2 * 2) = param_1;
    }
    uVar7 = uVar7 - uVar2 * uVar1;
    uVar1 = *param_1;
  }
  uVar1 = uVar7 + 1;
  uVar6 = (ulong)(uVar7 % 0x7c);
  uVar7 = puVar9[uVar6];
  if (uVar7 == 0) {
    uVar7 = param_1[1];
    if (uVar7 < 0x7b) {
LAB_108d767b4:
      param_1[1] = uVar7 + 1;
      puVar9[uVar6] = uVar1;
      return (uint *)0x0;
    }
  }
  else {
    do {
      if (uVar7 == uVar1) {
        return (uint *)0x0;
      }
      uVar7 = 0;
      if ((int)uVar6 + 1U < 0x7c) {
        uVar7 = (int)uVar6 + 1;
      }
      uVar6 = (ulong)uVar7;
      uVar7 = puVar9[uVar6];
    } while (uVar7 != 0);
    uVar7 = param_1[1];
    if (uVar7 < 0x3e) goto LAB_108d767b4;
  }
  lVar4 = 0x1f0;
  FUN_108d60848();
  if (lVar4 == 0) {
LAB_108d768b4:
    puVar9 = (uint *)0x7;
  }
  else {
    _memcpy();
    param_1[6] = 0;
    param_1[7] = 0;
    puVar9[0] = 0;
    puVar9[1] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)*param_1 + 0x3d;
    param_1[2] = SUB164(auVar3 * ZEXT816(0x421084210842109),8);
    puVar9 = param_1;
    FUN_108d7668c(param_1,uVar1);
    lVar8 = 0;
    do {
      if (*(int *)(lVar4 + lVar8) != 0) {
        puVar5 = param_1;
        FUN_108d7668c(param_1);
        puVar9 = (uint *)(ulong)((uint)puVar5 | (uint)puVar9);
      }
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x1f0);
    func_0x000108d5e198(lVar4);
  }
  return puVar9;
}



/* Entry: 108d76948; end: 108d76a37;  */

long * FUN_108d76948(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x28);
  uVar4 = *(uint *)(lVar7 + 0xbc);
  if (param_2 == 0) {
    plVar5 = *(long **)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))
              (plVar5,*(undefined8 *)(param_1 + 8),(long)(int)uVar4,
               (ulong)(iVar2 - 1) * (long)(int)uVar4);
    uVar4 = 0;
    if ((uint)plVar5 != 0x20a) {
      uVar4 = (uint)plVar5;
    }
    plVar5 = (long *)(ulong)uVar4;
  }
  else {
    uVar3 = *(undefined2 *)(*(long *)(lVar7 + 0x138) + 0x56);
    uVar1 = CONCAT22(uVar3,uVar3) & 0x1fe00;
    plVar5 = *(long **)(*(long *)(lVar7 + 0x138) + 0x10);
    if ((int)uVar1 <= (int)uVar4) {
      uVar4 = uVar1;
    }
    (**(code **)(*plVar5 + 0x10))
              (plVar5,*(undefined8 *)(param_1 + 8),uVar4,
               (ulong)(uVar1 | 0x18) * (ulong)(param_2 - 1) + 0x38);
  }
  if (iVar2 == 1) {
    if ((uint)plVar5 == 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
      *(undefined8 *)(lVar7 + 0x88) = uVar8;
    }
    else {
      *(undefined8 *)(lVar7 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(lVar7 + 0x90) = 0xffffffffffffffff;
    }
  }
  if (*(code **)(lVar7 + 0x108) != (code *)0x0) {
    lVar6 = *(long *)(lVar7 + 0x120);
    (**(code **)(lVar7 + 0x108))(lVar6,*(undefined8 *)(param_1 + 8),iVar2,3);
    uVar4 = 7;
    if (lVar6 != 0) {
      uVar4 = (uint)plVar5;
    }
    plVar5 = (long *)(ulong)uVar4;
  }
  return plVar5;
}



/* Entry: 108d76a38; end: 108d76a9b;  */

void FUN_108d76a38(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(ushort *)((long)param_1 + 0x2c) >> 1 & 1) != 0) {
    FUN_108d76c34(param_1,1);
  }
  lVar1 = param_1[6];
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  if (*(int *)(param_1 + 5) == 1) {
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d76a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000113297a00)(*(undefined8 *)(lVar1 + 0x40),*param_1,1);
  return;
}



/* Entry: 108d76a9c; end: 108d76bc7;  */

void FUN_108d76a9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar5 = (int)param_2;
  if (iVar5 < *(int *)(param_1 + 0x28)) {
    lVar7 = *(long *)(param_1 + 0x30);
LAB_108d76acc:
    if (*(long *)(lVar7 + (long)iVar5 * 8) == 0) {
      if (*(char *)(param_1 + 0x3f) == '\x02') {
        lVar3 = 0x8000;
        FUN_108d60848();
        if (lVar3 != 0) {
          _bzero(lVar3,0x8000);
        }
        *(long *)(*(long *)(param_1 + 0x30) + (long)iVar5 * 8) = lVar3;
      }
      else {
        plVar4 = *(long **)(param_1 + 8);
        (**(code **)(*plVar4 + 0x68))(plVar4,param_2,0x8000,*(undefined1 *)(param_1 + 0x40));
        if ((int)plVar4 == 8) {
          *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 2;
        }
      }
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar5 * 8);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    lVar3 = param_1;
    FUN_108d62be4();
    if ((int)lVar3 == 0) {
      iVar1 = iVar5 + 1;
      FUN_108d63588(lVar7,(long)(iVar1 * 8));
      if (lVar7 != 0) {
        uVar2 = iVar1 - *(int *)(param_1 + 0x28);
        _bzero(lVar7 + (long)*(int *)(param_1 + 0x28) * 8,
               -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
        *(long *)(param_1 + 0x30) = lVar7;
        *(int *)(param_1 + 0x28) = iVar1;
        goto LAB_108d76acc;
      }
    }
    uVar6 = 0;
  }
  *param_3 = uVar6;
  return;
}



/* Entry: 108d76bc8; end: 108d76c33;  */

long * FUN_108d76bc8(long param_1,int param_2,long *param_3)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  
  do {
    plVar3 = (long *)param_3[1];
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    lVar2 = *param_3;
    *plVar3 = (long)param_3;
    plVar3[1] = lVar2;
    plVar3[2] = (long)(plVar3 + 9);
    _bzero(plVar3 + 9,(long)*(int *)(param_1 + 0x24));
    plVar3[6] = param_1;
    *(int *)(plVar3 + 5) = param_2;
    if (param_3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar3 = (long *)param_3[1];
  } while (*plVar3 == 0);
  sVar1 = *(short *)((long)plVar3 + 0x2e);
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(short *)((long)plVar3 + 0x2e) = sVar1 + 1;
  if (param_2 == 1) {
    *(long **)(param_1 + 0x48) = plVar3;
  }
  return plVar3;
}



/* Entry: 108d76c34; end: 108d76cf3;  */

void FUN_108d76c34(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if ((param_2 & 1) == 0) goto LAB_108d76c8c;
  lVar3 = param_1;
  if (plVar2[2] == param_1) {
    do {
      lVar3 = *(long *)(lVar3 + 0x40);
      if (lVar3 == 0) break;
    } while ((*(ushort *)(lVar3 + 0x2c) >> 2 & 1) != 0);
    plVar2[2] = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    plVar2[1] = lVar1;
    if (lVar1 != 0) goto LAB_108d76c84;
    *plVar2 = 0;
    if ((char)plVar2[5] != '\0') {
      *(undefined1 *)((long)plVar2 + 0x29) = 2;
    }
  }
  else {
    *(long *)(lVar3 + 0x40) = lVar1;
    if (lVar1 == 0) {
      *plVar2 = lVar3;
    }
    else {
LAB_108d76c84:
      *(long *)(lVar1 + 0x38) = lVar3;
    }
  }
  *(long *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
LAB_108d76c8c:
  if (1 < param_2) {
    lVar3 = *plVar2;
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 == 0) {
      plVar2[1] = param_1;
      if ((char)plVar2[5] != '\0') {
        *(undefined1 *)((long)plVar2 + 0x29) = 1;
      }
    }
    else {
      *(long *)(lVar3 + 0x40) = param_1;
    }
    *plVar2 = param_1;
    if ((plVar2[2] == 0) && ((*(ushort *)(param_1 + 0x2c) >> 2 & 1) == 0)) {
      plVar2[2] = param_1;
      return;
    }
  }
  return;
}



/* Entry: 108d76cf4; end: 108d76e43;  */

void FUN_108d76cf4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_108d76e44(param_1,0,0);
      }
    }
    else if (cVar1 != '\x06') {
      if (pcRam000000011372e6f8 != (code *)0x0) {
        (*pcRam000000011372e6f8)();
      }
      func_0x000108d76d70(param_1);
      if (pcRam000000011372e700 != (code *)0x0) {
        (*pcRam000000011372e700)();
      }
    }
  }
  FUN_108d77c44(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_108d793c8(param_1);
  if (*(long *)(param_1 + 0x138) == 0) {
    if (*(char *)(param_1 + 8) != '\0') goto LAB_108d77238;
    plVar3 = *(long **)(param_1 + 0x48);
    if (((*plVar3 == 0) || ((**(code **)(*plVar3 + 0x60))(), ((uint)plVar3 >> 0xb & 1) == 0)) ||
       ((*(byte *)(param_1 + 9) & 5) != 1)) {
      plVar3 = *(long **)(param_1 + 0x50);
      if (*plVar3 != 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        *plVar3 = 0;
      }
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (*plVar3 != 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        (**(code **)(*plVar3 + 0x40))(plVar3,0);
        bVar2 = (int)plVar3 == 0;
      }
      else {
        bVar2 = true;
      }
      if (*(char *)(param_1 + 0x15) != '\x05') {
        *(undefined1 *)(param_1 + 0x15) = 0;
      }
      if ((!bVar2) && (*(char *)(param_1 + 0x14) == '\x06')) {
        *(undefined1 *)(param_1 + 0x15) = 5;
      }
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  else {
    FUN_108d79470();
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
LAB_108d77238:
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_108d78cec(param_1);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 108d76e44; end: 108d771f7;  */

int FUN_108d76e44(long *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_48;
  
  if ((*(byte *)((long)param_1 + 0x14) < 2) && (*(byte *)((long)param_1 + 0x15) < 2)) {
    return 0;
  }
  FUN_108d793c8(param_1);
  puVar7 = (undefined8 *)param_1[10];
  puVar5 = (undefined *)*puVar7;
  if (puVar5 == (undefined *)0x0) {
LAB_108d76f90:
    iVar2 = 0;
  }
  else if (puVar5 == &UNK_110ac3d90) {
    plVar4 = (long *)puVar7[1];
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      func_0x000108d5e198();
    }
    iVar2 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    *puVar7 = 0;
  }
  else {
    cVar1 = *(char *)((long)param_1 + 9);
    if (cVar1 == '\x01') {
LAB_108d76f44:
      if (param_1[0xc] == 0) {
LAB_108d77044:
        iVar2 = 0;
      }
      else {
        lVar6 = param_1[0x19];
        if ((param_2 == 0) && (lVar6 != 0)) {
          (**(code **)(puVar5 + 0x18))(puVar7,&UNK_10dfa09d8,0x1c,0);
          iVar2 = (int)puVar7;
        }
        else {
          (**(code **)(puVar5 + 0x20))(puVar7,0);
          iVar2 = (int)puVar7;
        }
        if (iVar2 == 0) {
          if (*(char *)((long)param_1 + 0xb) == '\0') {
            plVar4 = (long *)param_1[10];
            (**(code **)(*plVar4 + 0x28))(plVar4,*(byte *)((long)param_1 + 0xf) | 0x10);
            iVar2 = (int)plVar4;
          }
          else {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && (0 < lVar6)) {
            plVar4 = (long *)param_1[10];
            (**(code **)(*plVar4 + 0x30))(plVar4,&lStack_48);
            iVar2 = (int)plVar4;
            if (iVar2 == 0) {
              if (lStack_48 <= lVar6) goto LAB_108d77044;
              plVar4 = (long *)param_1[10];
              (**(code **)(*plVar4 + 0x20))(plVar4,lVar6);
              iVar2 = (int)plVar4;
            }
          }
        }
      }
    }
    else {
      if (cVar1 != '\x03') {
        if ((cVar1 == '\x05') || ((char)param_1[1] == '\0')) {
          lVar6 = param_1[2];
          (**(code **)(puVar5 + 8))(puVar7);
          *puVar7 = 0;
          if ((char)lVar6 != '\0') goto LAB_108d76f90;
          lVar6 = *param_1;
          (**(code **)(lVar6 + 0x30))(lVar6,param_1[0x1b],0);
          iVar2 = (int)lVar6;
          goto LAB_108d7704c;
        }
        goto LAB_108d76f44;
      }
      if (param_1[0xc] == 0) goto LAB_108d77044;
      (**(code **)(puVar5 + 0x20))(puVar7,0);
      iVar2 = (int)puVar7;
      if (iVar2 == 0) {
        if (*(char *)((long)param_1 + 0xc) == '\0') goto LAB_108d77044;
        plVar4 = (long *)param_1[10];
        (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined1 *)((long)param_1 + 0xf));
        iVar2 = (int)plVar4;
      }
    }
    param_1[0xc] = 0;
  }
LAB_108d7704c:
  FUN_108d77c44(param_1[8]);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar4 = (long *)param_1[0x26];
  if (*plVar4 != 0) {
    do {
      FUN_108d78b28();
    } while (*plVar4 != 0);
    plVar4 = (long *)param_1[0x26];
  }
  func_0x000108d78f50(plVar4,*(undefined4 *)((long)param_1 + 0x1c));
  lVar6 = param_1[0x27];
  if (lVar6 == 0) {
    if ((param_3 != 0) && (iVar2 == 0)) {
      if (*(uint *)((long)param_1 + 0x1c) < *(uint *)((long)param_1 + 0x24)) {
        plVar4 = param_1;
        FUN_108d79268();
        iVar2 = (int)plVar4;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  else if (*(char *)(lVar6 + 0x40) != '\0') {
    if (*(char *)(lVar6 + 0x3f) == '\0') {
      (**(code **)(**(long **)(lVar6 + 8) + 0x70))(*(long **)(lVar6 + 8),0,1,9);
    }
    *(undefined1 *)(lVar6 + 0x40) = 0;
    *(undefined1 *)(lVar6 + 0x43) = 0;
  }
  if ((param_3 != 0) && (iVar2 == 0)) {
    plVar4 = (long *)param_1[9];
    if (*plVar4 == 0) {
      iVar2 = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x50))(plVar4,0x16,0);
      iVar2 = 0;
      if ((int)plVar4 != 0xc) {
        iVar2 = (int)plVar4;
      }
    }
  }
  if ((char)param_1[1] == '\0') {
    lVar6 = param_1[0x27];
    if (lVar6 == 0) {
LAB_108d771ac:
      plVar4 = (long *)param_1[9];
      if (*plVar4 == 0) {
        iVar3 = 0;
      }
      else {
        if (*(char *)((long)param_1 + 0x11) == '\0') {
          (**(code **)(*plVar4 + 0x40))(plVar4,1);
          iVar3 = (int)plVar4;
        }
        else {
          iVar3 = 0;
        }
        if (*(char *)((long)param_1 + 0x15) != '\x05') {
          *(undefined1 *)((long)param_1 + 0x15) = 1;
        }
      }
      *(undefined1 *)((long)param_1 + 0x16) = 0;
      goto LAB_108d77128;
    }
    if (*(char *)(lVar6 + 0x3f) != '\0') {
      *(undefined1 *)(lVar6 + 0x3f) = 0;
      plVar4 = *(long **)(lVar6 + 8);
      (**(code **)(*plVar4 + 0x70))(plVar4,*(short *)(lVar6 + 0x3c) + 3,1,6);
      if ((int)plVar4 != 0) {
        iVar3 = 0;
        *(undefined1 *)(lVar6 + 0x3f) = 1;
        goto LAB_108d77128;
      }
      if (*(char *)(lVar6 + 0x3f) == '\0') goto LAB_108d771ac;
    }
  }
  iVar3 = 0;
LAB_108d77128:
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 108d771f8; end: 108d77313;  */

void FUN_108d771f8(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  FUN_108d77c44(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_108d793c8(param_1);
  if (*(long *)(param_1 + 0x138) == 0) {
    if (*(char *)(param_1 + 8) != '\0') goto LAB_108d77238;
    plVar2 = *(long **)(param_1 + 0x48);
    if (((*plVar2 == 0) || ((**(code **)(*plVar2 + 0x60))(), ((uint)plVar2 >> 0xb & 1) == 0)) ||
       ((*(byte *)(param_1 + 9) & 5) != 1)) {
      plVar2 = *(long **)(param_1 + 0x50);
      if (*plVar2 != 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        *plVar2 = 0;
      }
    }
    plVar2 = *(long **)(param_1 + 0x48);
    if (*plVar2 != 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        (**(code **)(*plVar2 + 0x40))(plVar2,0);
        bVar1 = (int)plVar2 == 0;
      }
      else {
        bVar1 = true;
      }
      if (*(char *)(param_1 + 0x15) != '\x05') {
        *(undefined1 *)(param_1 + 0x15) = 0;
      }
      if ((!bVar1) && (*(char *)(param_1 + 0x14) == '\x06')) {
        *(undefined1 *)(param_1 + 0x15) = 5;
      }
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  else {
    FUN_108d79470();
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
LAB_108d77238:
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_108d78cec(param_1);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 108d77314; end: 108d77c43;  */

/* WARNING: Removing unreachable block (ram,0x000108d775ec) */

ulong FUN_108d77314(ulong param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uStack_70;
  undefined1 auStack_64 [4];
  
  if (*(uint *)(param_1 + 0x2c) != 0) {
    return (ulong)*(uint *)(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x80) <= param_3) {
    return 0;
  }
  iVar2 = param_3;
  if (param_2 != 1) {
    iVar2 = param_3 + 1;
  }
  if (iVar2 < *(int *)(param_1 + 0x80)) {
    lVar7 = (long)param_3;
    if (param_2 != 1) {
      lVar7 = lVar7 + 1;
    }
    lVar10 = lVar7 * 0x30 + 0x10;
    do {
      FUN_108d77c44(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar10));
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x30;
    } while (lVar7 < *(int *)(param_1 + 0x80));
  }
  *(int *)(param_1 + 0x80) = iVar2;
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return 0;
    }
    puVar6 = *(undefined8 **)(param_1 + 0x58);
    if ((undefined *)*puVar6 == (undefined *)0x0) {
      return 0;
    }
    if ((undefined *)*puVar6 == &UNK_110ac3d90) {
      plVar9 = (long *)puVar6[1];
      while (plVar9 != (long *)0x0) {
        plVar9 = (long *)*plVar9;
        func_0x000108d5e198();
      }
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      *puVar6 = &UNK_110ac3d90;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x138);
  if ((lVar7 == 0) && (**(long **)(param_1 + 0x50) == 0)) {
    return 0;
  }
  if (iVar2 == 0) {
LAB_108d77480:
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0x40) == '\0') {
        uVar12 = 0;
      }
      else {
        uVar15 = *(uint *)(lVar7 + 0x58);
        puVar6 = (undefined8 *)**(long **)(lVar7 + 0x30);
        uVar20 = puVar6[2];
        uVar17 = puVar6[5];
        uVar16 = puVar6[4];
        uVar19 = puVar6[1];
        uVar18 = *puVar6;
        *(undefined8 *)(lVar7 + 0x60) = puVar6[3];
        *(undefined8 *)(lVar7 + 0x58) = uVar20;
        *(undefined8 *)(lVar7 + 0x50) = uVar19;
        *(undefined8 *)(lVar7 + 0x48) = uVar18;
        *(undefined8 *)(lVar7 + 0x70) = uVar17;
        *(undefined8 *)(lVar7 + 0x68) = uVar16;
        uVar13 = *(uint *)(lVar7 + 0x58);
        if (uVar15 < uVar13 + 1) {
          uVar12 = 0;
        }
        else {
          uVar13 = uVar13 + 0x1001;
          do {
            if (((ulong)uVar13 + 0xffffffff021 & 0xffffffff000) == 0) {
              puVar8 = (undefined4 *)
                       (**(long **)(lVar7 + 0x30) + (ulong)(uVar13 - 0x1000) * 4 + 0x84);
            }
            else {
              puVar8 = (undefined4 *)
                       ((*(long **)(lVar7 + 0x30))[(int)((ulong)uVar13 + 0xffffffff021 >> 0xc)] +
                       (ulong)(uVar13 - 0xfdf & 0xfff) * 4);
            }
            uVar12 = param_1;
            func_0x000108d78504(param_1,*puVar8);
            uVar4 = uVar13 - 0xfff;
            uVar13 = uVar13 + 1;
          } while ((int)uVar12 == 0 && uVar4 <= uVar15);
          uVar13 = *(uint *)(lVar7 + 0x58);
        }
        if (uVar15 != uVar13) {
          FUN_108d78714(lVar7);
        }
      }
      lVar7 = **(long **)(param_1 + 0x130);
      func_0x000108d785e8();
      if ((int)uVar12 == 0 && lVar7 != 0) {
        do {
          lVar10 = *(long *)(lVar7 + 0x18);
          uVar12 = param_1;
          func_0x000108d78504(param_1,*(undefined4 *)(lVar7 + 0x28));
          lVar7 = lVar10;
        } while (lVar10 != 0 && (int)uVar12 == 0);
        return uVar12;
      }
      return uVar12;
    }
    lVar10 = 0;
    lVar7 = *(long *)(param_1 + 0x60);
    bVar14 = true;
    puVar6 = (undefined8 *)0x0;
LAB_108d77534:
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_108d77538:
    do {
      plVar9 = (long *)(param_1 + 0x60);
      if (lVar7 <= *plVar9) {
        uVar12 = 0;
        break;
      }
      uStack_70 = uStack_70 & 0xffffffff00000000;
      uVar12 = param_1;
      FUN_108d782d8(param_1,0,lVar7,&uStack_70,auStack_64);
      uVar13 = (uint)uStack_70;
      if ((uint)uStack_70 == 0) {
        lVar11 = *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0xb8);
        if (lVar11 == *(long *)(param_1 + 0x60)) {
          lVar1 = (long)*(int *)(param_1 + 0xbc) + 8;
          uVar13 = 0;
          if (lVar1 != 0) {
            uVar13 = (uint)((lVar7 - lVar11) / lVar1);
          }
          goto joined_r0x000108d775d8;
        }
      }
      else {
joined_r0x000108d775d8:
        if (((int)uVar12 == 0) && (uVar13 != 0)) {
          uVar15 = 1;
          do {
            if (lVar7 <= *plVar9) goto LAB_108d77538;
            uVar12 = param_1;
            FUN_108d77f24(param_1,plVar9,puVar6,1,1);
          } while (((int)uVar12 == 0) && (bVar5 = uVar15 < uVar13, uVar15 = uVar15 + 1, bVar5));
        }
      }
    } while ((int)uVar12 == 0);
    if (bVar14) goto LAB_108d77734;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x78) + (long)iVar2 * 0x30;
    lVar10 = lVar11 + -0x30;
    if (lVar10 == 0) goto LAB_108d77480;
    uVar3 = *(undefined4 *)(lVar11 + -0x18);
    puVar6 = (undefined8 *)0x200;
    FUN_108d60848();
    if (puVar6 == (undefined8 *)0x0) {
      return 7;
    }
    puVar6[0x3d] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x39] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x35] = 0;
    puVar6[0x34] = 0;
    puVar6[0x37] = 0;
    puVar6[0x36] = 0;
    puVar6[0x31] = 0;
    puVar6[0x30] = 0;
    puVar6[0x33] = 0;
    puVar6[0x32] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x29] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x25] = 0;
    puVar6[0x24] = 0;
    puVar6[0x27] = 0;
    puVar6[0x26] = 0;
    puVar6[0x21] = 0;
    puVar6[0x20] = 0;
    puVar6[0x23] = 0;
    puVar6[0x22] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    *(undefined4 *)puVar6 = uVar3;
    plVar9 = (long *)(param_1 + 0x60);
    lVar7 = *plVar9;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar11 + -0x18);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x138) != 0) {
      bVar14 = false;
      goto LAB_108d77534;
    }
    lVar1 = lVar7;
    if (*(long *)(lVar11 + -0x28) != 0) {
      lVar1 = *(long *)(lVar11 + -0x28);
    }
    *plVar9 = *(long *)(lVar11 + -0x30);
    do {
      if (lVar1 <= *plVar9) {
        bVar14 = false;
        goto LAB_108d77538;
      }
      uVar12 = param_1;
      FUN_108d77f24(param_1,plVar9,puVar6,1,1);
    } while ((int)uVar12 == 0);
  }
  uVar13 = *(uint *)(lVar10 + 0x1c);
  uStack_70 = ((long)*(int *)(param_1 + 0xbc) + 4) * (ulong)uVar13;
  if (*(long *)(param_1 + 0x138) == 0) {
    if ((int)uVar12 != 0) goto LAB_108d77734;
  }
  else {
    FUN_108d784b4(*(long *)(param_1 + 0x138),lVar10 + 0x20);
    uVar13 = *(uint *)(lVar10 + 0x1c);
  }
  uVar13 = uVar13 - 1;
  do {
    uVar13 = uVar13 + 1;
    if (*(uint *)(param_1 + 0x38) <= uVar13) {
      uVar12 = 0;
      break;
    }
    uVar12 = param_1;
    FUN_108d77f24(param_1,&uStack_70,puVar6,0,1);
  } while ((int)uVar12 == 0);
LAB_108d77734:
  FUN_108d77c44(puVar6);
  if ((int)uVar12 == 0) {
    *(long *)(param_1 + 0x60) = lVar7;
    return uVar12;
  }
  return uVar12;
}



/* Entry: 108d77c44; end: 108d77cdb;  */

void FUN_108d77c44(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    lVar1 = 0x10;
    do {
      FUN_108d77c44(*(undefined8 *)(param_1 + lVar1));
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x200);
  }
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      lVar1 = param_1;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)lVar1;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(param_1);
      param_1 = lRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (lRam0000000113829af0 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* Entry: 108d77cdc; end: 108d77ebb;  */

undefined8 FUN_108d77cdc(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((param_4 == 0) || (*(long *)(param_1 + 0x20) != param_4)) {
    plVar6 = (long *)(param_1 + 8);
    lVar5 = 0x3f8;
    do {
      plVar6 = (long *)*plVar6;
      bVar3 = lVar5 <= param_4;
      lVar5 = lVar5 + 0x3f8;
    } while (plVar6 != (long *)0x0 && bVar3);
  }
  else {
    plVar6 = *(long **)(param_1 + 0x28);
  }
  iVar4 = (int)param_4 +
          (SUB164(SEXT816(param_4) * SEXT816(0x4081020408102041),9) -
          (SUB164(SEXT816(param_4) * SEXT816(0x4081020408102041),0xc) >> 0x1f)) * -0x3f8;
  iVar7 = param_3;
  do {
    iVar1 = 0x3f8 - iVar4;
    iVar2 = iVar7 - iVar1;
    if (iVar1 <= iVar7) {
      iVar7 = iVar1;
    }
    _memcpy(param_2,(long)plVar6 + (long)iVar4 + 8,(long)iVar7);
    if ((iVar2 < 0) || (plVar6 = (long *)*plVar6, iVar2 == 0)) break;
    iVar4 = 0;
    param_2 = param_2 + iVar7;
    iVar7 = iVar2;
  } while (plVar6 != (long *)0x0);
  *(long *)(param_1 + 0x20) = param_4 + param_3;
  *(long **)(param_1 + 0x28) = plVar6;
  return 0;
}



/* Entry: 108d77ebc; end: 108d77f0b;  */

undefined8 FUN_108d77ebc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000108d5e198();
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *param_1 = &UNK_110ac3d90;
  return 0;
}



/* Entry: 108d77f0c; end: 108d77f23;  */

undefined8 FUN_108d77f0c(void)

{
  return 0;
}



/* Entry: 108d77f24; end: 108d782d7;  */

long * FUN_108d77f24(long *param_1,long *param_2,long *param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iStack_70;
  uint uStack_6c;
  long *plStack_68;
  
  lVar9 = param_1[0x25];
  lVar5 = 0x58;
  if (param_4 != 0) {
    lVar5 = 0x50;
  }
  plVar10 = *(long **)((long)param_1 + lVar5);
  plVar3 = plVar10;
  FUN_108d78940(plVar10,*param_2,&uStack_6c);
  if ((int)plVar3 != 0) {
    return plVar3;
  }
  plVar3 = plVar10;
  (**(code **)(*plVar10 + 0x10))(plVar10,lVar9,*(undefined4 *)((long)param_1 + 0xbc),*param_2 + 4);
  if ((int)plVar3 != 0) {
    return plVar3;
  }
  iVar6 = *(int *)((long)param_1 + 0xbc);
  lVar5 = *param_2 + (long)(iVar6 + param_4 * 4 + 4);
  *param_2 = lVar5;
  if (uStack_6c == 0) {
    return (long *)0x65;
  }
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = iRam0000000113298da4 / iVar6;
  }
  if (uStack_6c == iVar1 + 1U) {
    return (long *)0x65;
  }
  if ((*(uint *)((long)param_1 + 0x1c) < uStack_6c) ||
     (plVar3 = param_3, FUN_108d7898c(param_3,uStack_6c), (int)plVar3 != 0)) {
    return (long *)0x0;
  }
  if (param_4 != 0) {
    FUN_108d78940(plVar10,lVar5 + -4,&iStack_70);
    if ((int)plVar10 != 0) {
      return plVar10;
    }
    if (param_5 == 0) {
      iVar6 = *(int *)((long)param_1 + 0x34);
      if (200 < (int)*(uint *)((long)param_1 + 0xbc)) {
        uVar8 = (ulong)*(uint *)((long)param_1 + 0xbc) + 200;
        do {
          iVar6 = iVar6 + (uint)*(byte *)(lVar9 + uVar8 + -400);
          uVar8 = uVar8 - 200;
        } while (400 < uVar8);
      }
      if (iVar6 != iStack_70) {
        return (long *)0x65;
      }
    }
  }
  if ((param_3 != (long *)0x0) && (FUN_108d7668c(param_3,uStack_6c), (int)param_3 != 0)) {
    return param_3;
  }
  if ((uStack_6c - 1 == 0) && (*(ushort *)((long)param_1 + 0xb2) != (ushort)*(byte *)(lVar9 + 0x14))
     ) {
    *(ushort *)((long)param_1 + 0xb2) = (ushort)*(byte *)(lVar9 + 0x14);
    if ((code *)param_1[0x22] != (code *)0x0) {
      (*(code *)param_1[0x22])(param_1[0x24],*(undefined4 *)((long)param_1 + 0xbc));
    }
  }
  if (param_1[0x27] == 0) {
    plVar3 = param_1;
    FUN_108d765f8(param_1,uStack_6c);
    plStack_68 = plVar3;
    if (param_4 != 0) goto LAB_108d78100;
    if (plVar3 == (long *)0x0) goto LAB_108d78108;
    bVar2 = (*(ushort *)((long)plVar3 + 0x2c) & 4) == 0;
  }
  else {
    plStack_68 = (long *)0x0;
    if (param_4 != 0) {
LAB_108d78100:
      if (*(char *)((long)param_1 + 0xb) == '\0') {
        bVar2 = *param_2 <= param_1[0xd];
        goto LAB_108d78134;
      }
    }
LAB_108d78108:
    bVar2 = true;
  }
LAB_108d78134:
  plVar3 = plStack_68;
  plVar10 = (long *)param_1[9];
  lVar5 = lVar9;
  if (*plVar10 == 0) {
LAB_108d78150:
    plVar10 = (long *)0x0;
    if ((param_4 == 0) && (plStack_68 == (long *)0x0)) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
      plVar10 = param_1;
      FUN_108d5fcfc(param_1,uStack_6c,&plStack_68,1);
      plVar3 = plStack_68;
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
      if ((int)plVar10 != 0) {
        return plVar10;
      }
      *(ushort *)((long)plStack_68 + 0x2c) = *(ushort *)((long)plStack_68 + 0x2c) & 0xfff7;
      FUN_108d78b04(plStack_68);
      goto LAB_108d78254;
    }
  }
  else {
    if (*(byte *)((long)param_1 + 0x14) < 4) {
      bVar2 = (bool)(*(byte *)((long)param_1 + 0x14) == 0 & bVar2);
    }
    if (!bVar2) goto LAB_108d78150;
    (**(code **)(*plVar10 + 0x18))
              (plVar10,lVar9,(long)*(int *)((long)param_1 + 0xbc),
               (long)*(int *)((long)param_1 + 0xbc) * (ulong)(uStack_6c - 1));
    if (*(uint *)((long)param_1 + 0x24) < uStack_6c) {
      *(uint *)((long)param_1 + 0x24) = uStack_6c;
    }
    lVar4 = param_1[0xe];
    if (lVar4 != 0) {
      if ((code *)param_1[0x21] != (code *)0x0) {
        lVar4 = param_1[0x24];
        (*(code *)param_1[0x21])(lVar4,lVar9,uStack_6c,3);
        uVar7 = 7;
        if (lVar4 != 0) {
          uVar7 = (uint)plVar10;
        }
        plVar10 = (long *)(ulong)uVar7;
        lVar4 = param_1[0xe];
      }
      FUN_108d78a40(lVar4,uStack_6c,lVar9);
      if ((code *)param_1[0x21] != (code *)0x0) {
        lVar5 = param_1[0x24];
        (*(code *)param_1[0x21])(lVar5,lVar9,uStack_6c,7);
        uVar7 = 7;
        if (lVar5 != 0) {
          uVar7 = (uint)plVar10;
        }
        plVar10 = (long *)(ulong)uVar7;
      }
    }
  }
  if (plVar3 == (long *)0x0) {
    return plVar10;
  }
LAB_108d78254:
  lVar9 = plVar3[1];
  _memcpy(lVar9,lVar5,(long)*(int *)((long)param_1 + 0xbc));
  (*(code *)param_1[0x20])(plVar3);
  if ((param_4 != 0) && ((param_5 == 0 || (*param_2 <= param_1[0xd])))) {
    FUN_108d78b28(plVar3);
  }
  if (uStack_6c == 1) {
    lVar5 = *(long *)(lVar9 + 0x18);
    param_1[0x12] = *(long *)(lVar9 + 0x20);
    param_1[0x11] = lVar5;
  }
  if ((code *)param_1[0x21] != (code *)0x0) {
    lVar5 = param_1[0x24];
    (*(code *)param_1[0x21])(lVar5,lVar9,(int)plVar3[5],3);
    uVar7 = 7;
    if (lVar5 != 0) {
      uVar7 = (uint)plVar10;
    }
    plVar10 = (long *)(ulong)uVar7;
  }
  FUN_108d78844(plVar3);
  return plVar10;
}



/* Entry: 108d782d8; end: 108d784b3;  */

void FUN_108d782d8(long *param_1,uint *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lStack_78;
  uint uStack_48;
  uint uStack_44;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0xc] == 0) {
    lVar9 = 0;
    uVar4 = (ulong)*(uint *)(param_1 + 0x17);
  }
  else {
    uVar4 = (ulong)*(uint *)(param_1 + 0x17);
    lVar9 = 0;
    if (uVar4 != 0) {
      lVar9 = (param_1[0xc] + -1) / (long)uVar4;
    }
    lVar9 = uVar4 + uVar4 * lVar9;
  }
  param_1[0xc] = lVar9;
  if (param_3 < (long)(lVar9 + uVar4)) {
LAB_108d7833c:
    plVar1 = (long *)0x65;
  }
  else {
    if (((int)param_2 != 0) || (lVar9 != param_1[0xd])) {
      plVar1 = (long *)param_1[10];
      param_2 = (uint *)&lStack_40;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2,8,lVar9);
      if ((int)plVar1 != 0) goto LAB_108d78410;
      if (lStack_40 != -0x289c5edf06fa2a27) goto LAB_108d7833c;
    }
    plVar1 = (long *)param_1[10];
    param_2 = (uint *)(lVar9 + 8);
    FUN_108d78940(plVar1,param_2,param_4);
    if ((int)plVar1 == 0) {
      plVar1 = (long *)param_1[10];
      param_2 = (uint *)(lVar9 + 0xc);
      FUN_108d78940(plVar1,param_2,(long)param_1 + 0x34);
      if ((int)plVar1 == 0) {
        plVar1 = (long *)param_1[10];
        param_2 = (uint *)(lVar9 + 0x10);
        FUN_108d78940(plVar1,param_2,param_5);
        if ((int)plVar1 == 0) {
          lVar5 = param_1[0xc];
          if (lVar5 == 0) {
            plVar1 = (long *)param_1[10];
            param_2 = (uint *)(lVar9 + 0x14);
            FUN_108d78940(plVar1,param_2,&uStack_48);
            if ((int)plVar1 != 0) goto LAB_108d78410;
            plVar1 = (long *)param_1[10];
            param_2 = (uint *)(lVar9 + 0x18);
            FUN_108d78940(plVar1,param_2,&uStack_44);
            if ((int)plVar1 != 0) goto LAB_108d78410;
            if (uStack_44 == 0) {
              uStack_44 = *(uint *)((long)param_1 + 0xbc);
            }
            plVar1 = (long *)0x65;
            if (uStack_44 - 0x10001 < 0xffff01ff) goto LAB_108d78410;
            if (((uStack_48 - 0x10001 < 0xffff001f) || ((uStack_44 + 0x1ffff & uStack_44) != 0)) ||
               ((uStack_48 + 0x1ffff & uStack_48) != 0)) goto LAB_108d78410;
            param_2 = &uStack_44;
            plVar1 = param_1;
            FUN_108d78ba4(param_1,param_2,0xffffffff);
            *(uint *)(param_1 + 0x17) = uStack_48;
            lVar5 = param_1[0xc];
          }
          else {
            plVar1 = (long *)0x0;
            uStack_48 = *(uint *)(param_1 + 0x17);
          }
          param_1[0xc] = lVar5 + (ulong)uStack_48;
        }
      }
    }
  }
LAB_108d78410:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (param_2[3] == *(uint *)(plVar1 + 0x10)) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = 0;
    *param_2 = 0;
    param_2[3] = *(uint *)(plVar1 + 0x10);
  }
  if (uVar3 < *(uint *)(plVar1 + 0xb)) {
    *(uint *)(plVar1 + 0xb) = uVar3;
    *(uint *)(plVar1 + 0xc) = param_2[1];
    *(uint *)((long)plVar1 + 100) = param_2[2];
    lVar9 = plVar1[0xb];
    if ((int)lVar9 != 0) {
      plVar2 = plVar1;
      FUN_108d76a9c();
      if ((int)plVar2 == 0) {
        lVar5 = lStack_78 + 0x4000;
        iVar8 = (int)((ulong)((int)lVar9 + 0x1000) + 0xffffffff021 >> 0xc);
        lVar9 = 0x88;
        if (iVar8 != 0) {
          lVar9 = 0;
        }
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = iVar8 * 0x1000 + -0x22;
        }
        lVar9 = lStack_78 + lVar9 + -4;
      }
      else {
        lVar5 = 0;
        lVar9 = 0;
        iVar7 = 0;
      }
      lVar6 = 0;
      iVar7 = (int)plVar1[0xb] - iVar7;
      do {
        if (iVar7 < (int)(uint)*(ushort *)(lVar5 + lVar6)) {
          *(undefined2 *)(lVar5 + lVar6) = 0;
        }
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0x4000);
      lVar9 = lVar9 + (long)iVar7 * 4 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(lVar9,(long)((int)lVar5 - (int)lVar9));
      return;
    }
    return;
  }
  return;
}



/* Entry: 108d784b4; end: 108d78503;  */

void FUN_108d784b4(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lStack_28;
  
  if (param_2[3] == *(uint *)(param_1 + 0x80)) {
    uVar1 = *param_2;
  }
  else {
    uVar1 = 0;
    *param_2 = 0;
    param_2[3] = *(uint *)(param_1 + 0x80);
  }
  if (uVar1 < *(uint *)(param_1 + 0x58)) {
    *(uint *)(param_1 + 0x58) = uVar1;
    *(uint *)(param_1 + 0x60) = param_2[1];
    *(uint *)(param_1 + 100) = param_2[2];
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar7 = (ulong)(*(int *)(param_1 + 0x58) + 0x1000) + 0xffffffff021 >> 0xc;
      lVar2 = param_1;
      FUN_108d76a9c(param_1,uVar7,&lStack_28);
      if ((int)lVar2 == 0) {
        lVar2 = lStack_28 + 0x4000;
        iVar6 = (int)uVar7;
        lVar3 = 0x88;
        if (iVar6 != 0) {
          lVar3 = 0;
        }
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = iVar6 * 0x1000 + -0x22;
        }
        lVar3 = lStack_28 + lVar3 + -4;
      }
      else {
        lVar2 = 0;
        lVar3 = 0;
        iVar5 = 0;
      }
      lVar4 = 0;
      iVar5 = *(int *)(param_1 + 0x58) - iVar5;
      do {
        if (iVar5 < (int)(uint)*(ushort *)(lVar2 + lVar4)) {
          *(undefined2 *)(lVar2 + lVar4) = 0;
        }
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0x4000);
      lVar3 = lVar3 + (long)iVar5 * 4 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(lVar3,(long)((int)lVar2 - (int)lVar3));
      return;
    }
    return;
  }
  return;
}



/* Entry: 108d78504; end: 108d78713;  */

long FUN_108d78504(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x40);
  (*pcRam00000001132979f8)(uVar2,param_2,0);
  lVar3 = *(long *)(param_1 + 0x130);
  FUN_108d7663c(lVar3,param_2,uVar2);
  if (lVar3 != 0) {
    if (*(short *)(lVar3 + 0x2e) != 1) {
      uStack_34 = 0;
      lVar4 = *(long *)(param_1 + 0x138);
      FUN_108d76494(lVar4,*(undefined4 *)(lVar3 + 0x28),&uStack_34);
      iVar1 = (int)lVar4;
      if (iVar1 == 0) {
        lVar4 = lVar3;
        FUN_108d76948(lVar3,uStack_34);
        iVar1 = (int)lVar4;
      }
      if (iVar1 == 0) {
        (**(code **)(param_1 + 0x100))(lVar3);
      }
      func_0x000108d787d8(lVar3);
      goto LAB_108d78594;
    }
    FUN_108d76a38(lVar3);
  }
  lVar4 = 0;
LAB_108d78594:
  for (lVar3 = *(long *)(param_1 + 0x70); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x40)) {
    *(undefined4 *)(lVar3 + 0x18) = 1;
  }
  return lVar4;
}



/* Entry: 108d78714; end: 108d78843;  */

void FUN_108d78714(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar6 = (ulong)(*(int *)(param_1 + 0x58) + 0x1000) + 0xffffffff021 >> 0xc;
    lVar1 = param_1;
    FUN_108d76a9c(param_1,uVar6,&lStack_28);
    if ((int)lVar1 == 0) {
      lVar1 = lStack_28 + 0x4000;
      iVar5 = (int)uVar6;
      lVar2 = 0x88;
      if (iVar5 != 0) {
        lVar2 = 0;
      }
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar5 * 0x1000 + -0x22;
      }
      lVar2 = lStack_28 + lVar2 + -4;
    }
    else {
      lVar1 = 0;
      lVar2 = 0;
      iVar4 = 0;
    }
    lVar3 = 0;
    iVar4 = *(int *)(param_1 + 0x58) - iVar4;
    do {
      if (iVar4 < (int)(uint)*(ushort *)(lVar1 + lVar3)) {
        *(undefined2 *)(lVar1 + lVar3) = 0;
      }
      lVar3 = lVar3 + 2;
    } while (lVar3 != 0x4000);
    lVar2 = lVar2 + (long)iVar4 * 4 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(lVar2,(long)((int)lVar1 - (int)lVar2));
    return;
  }
  return;
}



/* Entry: 108d78844; end: 108d788b7;  */

void FUN_108d78844(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  sVar2 = *(short *)((long)param_1 + 0x2e) + -1;
  *(short *)((long)param_1 + 0x2e) = sVar2;
  if (sVar2 != 0) {
    return;
  }
  lVar4 = param_1[6];
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
  if ((*(byte *)((long)param_1 + 0x2c) >> 1 & 1) == 0) {
    if (*(char *)(lVar4 + 0x28) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 5) == 1) {
      *(undefined8 *)(lVar4 + 0x48) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000108d788a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297a00)(*(undefined8 *)(lVar4 + 0x40),*param_1,0);
    return;
  }
  if (param_1[8] == 0) {
    return;
  }
  plVar3 = (long *)param_1[6];
  puVar5 = param_1;
  if ((undefined8 *)plVar3[2] == param_1) {
    do {
      puVar5 = (undefined8 *)puVar5[8];
      if (puVar5 == (undefined8 *)0x0) break;
    } while ((*(ushort *)((long)puVar5 + 0x2c) >> 2 & 1) != 0);
    plVar3[2] = (long)puVar5;
  }
  lVar4 = param_1[7];
  lVar1 = param_1[8];
  if (lVar4 == 0) {
    plVar3[1] = lVar1;
    if (lVar1 == 0) {
      *plVar3 = 0;
      if ((char)plVar3[5] != '\0') {
        *(undefined1 *)((long)plVar3 + 0x29) = 2;
      }
      goto LAB_108d76c88;
    }
  }
  else {
    *(long *)(lVar4 + 0x40) = lVar1;
    if (lVar1 == 0) {
      *plVar3 = lVar4;
      goto LAB_108d76c88;
    }
  }
  *(long *)(lVar1 + 0x38) = lVar4;
LAB_108d76c88:
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = *plVar3;
  param_1[7] = lVar4;
  if (lVar4 == 0) {
    plVar3[1] = (long)param_1;
    if ((char)plVar3[5] != '\0') {
      *(undefined1 *)((long)plVar3 + 0x29) = 1;
    }
  }
  else {
    *(undefined8 **)(lVar4 + 0x40) = param_1;
  }
  *plVar3 = (long)param_1;
  if ((plVar3[2] == 0) && ((*(ushort *)((long)param_1 + 0x2c) >> 2 & 1) == 0)) {
    plVar3[2] = (long)param_1;
    return;
  }
  return;
}



/* Entry: 108d788b8; end: 108d7893f;  */

undefined8 FUN_108d788b8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  puVar1 = auStack_48;
  while ((param_1 != (undefined1 *)0x0 && (param_2 != (undefined1 *)0x0))) {
    if (*(uint *)(param_1 + 0x28) < *(uint *)(param_2 + 0x28)) {
      *(undefined1 **)(puVar1 + 0x18) = param_1;
      puVar1 = param_1;
      param_1 = *(undefined1 **)(param_1 + 0x18);
    }
    else {
      *(undefined1 **)(puVar1 + 0x18) = param_2;
      puVar1 = param_2;
      param_2 = *(undefined1 **)(param_2 + 0x18);
    }
  }
  if (param_1 == (undefined1 *)0x0) {
    param_1 = param_2;
  }
  *(undefined1 **)(puVar1 + 0x18) = param_1;
  return uStack_30;
}



/* Entry: 108d78940; end: 108d7898b;  */

void FUN_108d78940(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uStack_24;
  
  iVar2 = (int)param_1;
  (**(code **)(*param_1 + 0x10))(iVar2,&uStack_24,4,param_2);
  if (iVar2 == 0) {
    uVar1 = (uStack_24 & 0xff00ff00) >> 8 | (uStack_24 & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}



/* Entry: 108d7898c; end: 108d78a3f;  */

byte FUN_108d7898c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != (uint *)0x0) {
    uVar2 = param_2 - 1;
    if (*param_1 <= uVar2) {
      return 0;
    }
    do {
      uVar4 = param_1[2];
      if (uVar4 == 0) {
        if (*param_1 < 0xf81) {
          return *(byte *)((long)param_1 + (ulong)(uVar2 >> 3) + 0x10) >> (ulong)(uVar2 & 7) & 1;
        }
        uVar4 = param_1[(ulong)(uVar2 % 0x7c) + 4];
        if (uVar4 == 0) {
          return 0;
        }
        uVar3 = uVar2 % 0x7c;
        do {
          if (uVar4 == uVar2 + 1) {
            return 1;
          }
          uVar1 = 0;
          if (uVar3 != 0x7b) {
            uVar1 = uVar3 + 1;
          }
          uVar4 = param_1[(ulong)uVar1 + 4];
          uVar3 = uVar1;
        } while (uVar4 != 0);
        return 0;
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      uVar2 = uVar2 - uVar3 * uVar4;
      param_1 = *(uint **)(param_1 + (ulong)uVar3 * 2 + 4);
    } while (param_1 != (uint *)0x0);
  }
  return 0;
}



/* Entry: 108d78a40; end: 108d78b03;  */

void FUN_108d78a40(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  for (; param_1 != (long *)0x0; param_1 = (long *)param_1[8]) {
    if ((*(uint *)(param_1 + 6) < 7 && (1 << (ulong)(*(uint *)(param_1 + 6) & 0x1f) & 0x61U) != 0)
       && ((uint)param_2 < *(uint *)(param_1 + 3))) {
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      plVar1 = param_1;
      FUN_108d6651c(param_1,param_2,param_3,1);
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*pcRam00000001132979a8)();
      }
      if ((int)plVar1 != 0) {
        *(int *)(param_1 + 6) = (int)plVar1;
      }
    }
  }
  return;
}



/* Entry: 108d78b04; end: 108d78b27;  */

/* WARNING: Removing unreachable block (ram,0x000108d76c3c) */
/* WARNING: Removing unreachable block (ram,0x000108d76c48) */
/* WARNING: Removing unreachable block (ram,0x000108d76c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d76c54) */
/* WARNING: Removing unreachable block (ram,0x000108d76c5c) */
/* WARNING: Removing unreachable block (ram,0x000108d76c60) */
/* WARNING: Removing unreachable block (ram,0x000108d76c7c) */
/* WARNING: Removing unreachable block (ram,0x000108d76cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d76ce8) */
/* WARNING: Removing unreachable block (ram,0x000108d76c6c) */
/* WARNING: Removing unreachable block (ram,0x000108d76c84) */
/* WARNING: Removing unreachable block (ram,0x000108d76c74) */
/* WARNING: Removing unreachable block (ram,0x000108d76c88) */

void FUN_108d78b04(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2c);
  uVar1 = uVar2 & 0xffdf;
  *(ushort *)(param_1 + 0x2c) = uVar1;
  if ((uVar2 >> 1 & 1) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0x2c) = uVar1 | 2;
  plVar3 = *(long **)(param_1 + 0x30);
  lVar4 = *plVar3;
  *(long *)(param_1 + 0x38) = lVar4;
  if (lVar4 == 0) {
    plVar3[1] = param_1;
    if ((char)plVar3[5] != '\0') {
      *(undefined1 *)((long)plVar3 + 0x29) = 1;
    }
  }
  else {
    *(long *)(lVar4 + 0x40) = param_1;
  }
  *plVar3 = param_1;
  if ((plVar3[2] == 0) && ((*(ushort *)(param_1 + 0x2c) >> 2 & 1) == 0)) {
    plVar3[2] = param_1;
    return;
  }
  return;
}



/* Entry: 108d78b28; end: 108d78ba3;  */

void FUN_108d78b28(undefined8 *param_1)

{
  long lVar1;
  
  if ((*(ushort *)((long)param_1 + 0x2c) >> 1 & 1) != 0) {
    FUN_108d76c34(param_1,1);
    *(ushort *)((long)param_1 + 0x2c) = *(ushort *)((long)param_1 + 0x2c) & 0xfff9;
    if ((*(short *)((long)param_1 + 0x2e) == 0) &&
       (lVar1 = param_1[6], *(char *)(lVar1 + 0x28) != '\0')) {
      if (*(int *)(param_1 + 5) == 1) {
        *(undefined8 *)(lVar1 + 0x48) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000108d78ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000113297a00)(*(undefined8 *)(lVar1 + 0x40),*param_1,0);
      return;
    }
  }
  return;
}



/* Entry: 108d78ba4; end: 108d78ceb;  */

long * FUN_108d78ba4(long param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lStack_48;
  
  uVar2 = *param_2;
  uVar3 = (ulong)uVar2;
  if ((((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(param_1 + 0x1c) == 0)) &&
      (*(int *)(*(long *)(param_1 + 0x130) + 0x18) == 0 && uVar2 != 0)) &&
     (uVar2 != *(uint *)(param_1 + 0xbc))) {
    lStack_48 = 0;
    if (*(char *)(param_1 + 0x14) == '\0') {
LAB_108d78c7c:
      uVar4 = uVar3;
      func_0x000108d78dcc();
      if (uVar4 == 0) {
        plVar5 = (long *)0x7;
      }
      else {
        FUN_108d78cec(param_1);
        plVar5 = *(long **)(param_1 + 0x130);
        func_0x000108d78d1c(plVar5,uVar3);
        if ((int)plVar5 == 0) {
          func_0x000108d78fdc(*(undefined8 *)(param_1 + 0x128));
          *(ulong *)(param_1 + 0x128) = uVar4;
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = (undefined4)((long)(uVar3 + lStack_48 + -1) / (long)uVar3);
          }
          *(undefined4 *)(param_1 + 0x1c) = uVar1;
          *(uint *)(param_1 + 0xbc) = uVar2;
          goto LAB_108d78c00;
        }
      }
    }
    else {
      plVar5 = *(long **)(param_1 + 0x48);
      if ((*plVar5 == 0) || ((**(code **)(*plVar5 + 0x30))(plVar5,&lStack_48), (int)plVar5 == 0))
      goto LAB_108d78c7c;
      uVar4 = 0;
    }
    func_0x000108d78fdc(uVar4);
    *param_2 = *(uint *)(param_1 + 0xbc);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xbc);
LAB_108d78c00:
    *param_2 = uVar2;
    if ((int)param_3 < 0) {
      param_3 = (uint)*(ushort *)(param_1 + 0xb2);
    }
    *(short *)(param_1 + 0xb2) = (short)param_3;
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
      (**(code **)(param_1 + 0x110))
                (*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0xbc),
                 (int)(short)param_3);
    }
    plVar5 = (long *)0x0;
  }
  return plVar5;
}



/* Entry: 108d78cec; end: 108d78d1b;  */

void FUN_108d78cec(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  for (lVar3 = *(long *)(param_1 + 0x70); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x40)) {
    *(undefined4 *)(lVar3 + 0x18) = 1;
  }
  plVar2 = *(long **)(param_1 + 0x130);
  if (plVar2[8] != 0) {
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x38);
      piVar1 = (int *)(lVar3 + 0x28);
      lVar3 = lVar4;
      if (*piVar1 != 0) {
        FUN_108d78b28();
      }
    }
    lVar3 = plVar2[9];
    if (lVar3 != 0) {
      _bzero(*(undefined8 *)(lVar3 + 8),(long)(int)plVar2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x000108d78fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297a10)(plVar2[8],(lVar3 != 0) + '\x01');
    return;
  }
  return;
}



/* Entry: 108d78d1c; end: 108d79267;  */

undefined8 FUN_108d78d1c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar3 = param_2;
  (*pcRam00000001132979e0)(param_2,*(int *)(param_1 + 0x24) + 0x48,*(undefined1 *)(param_1 + 0x28));
  if (lVar3 == 0) {
    uVar4 = 7;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1c);
    uVar5 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      lVar1 = (long)*(int *)(param_1 + 0x24) + (long)*(int *)(param_1 + 0x20);
      uVar5 = 0;
      if (lVar1 != 0) {
        uVar5 = ((long)(int)uVar2 * -0x400) / lVar1;
      }
    }
    (*pcRam00000001132979e8)(lVar3,uVar5);
    if (*(long *)(param_1 + 0x40) != 0) {
      (*pcRam0000000113297a18)();
    }
    uVar4 = 0;
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x20) = (int)param_2;
  }
  return uVar4;
}



/* Entry: 108d79268; end: 108d7934f;  */

void FUN_108d79268(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_48;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (*plVar2 == 0) {
    return;
  }
  if (0xfffffffc < *(byte *)(param_1 + 0x14) - 4) {
    return;
  }
  lVar3 = (long)*(int *)(param_1 + 0xbc);
  (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_48);
  if ((int)plVar2 != 0) {
    return;
  }
  lVar4 = lVar3 * (ulong)param_2;
  if (lStack_48 == lVar4) {
    return;
  }
  if (lVar4 < lStack_48) {
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4);
    iVar1 = (int)plVar2;
  }
  else {
    if (lVar4 < lStack_48 + lVar3) goto LAB_108d79344;
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    _bzero(uVar5,lVar3);
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar5,lVar3,lVar4 - lVar3);
    iVar1 = (int)plVar2;
  }
  if (iVar1 != 0) {
    return;
  }
LAB_108d79344:
  *(uint *)(param_1 + 0x24) = param_2;
  return;
}



/* Entry: 108d79350; end: 108d793c7;  */

void FUN_108d79350(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x60))();
    if (((uint)plVar2 >> 0xc & 1) == 0) {
      plVar2 = *(long **)(param_1 + 0x48);
      if (*(code **)(*plVar2 + 0x58) == (code *)0x0) {
        uVar4 = 0x1000;
      }
      else {
        (**(code **)(*plVar2 + 0x58))();
        uVar1 = (uint)plVar2;
        uVar3 = uVar1;
        if (0xffff < uVar1) {
          uVar3 = 0x10000;
        }
        uVar4 = 0x200;
        if (0x1f < (int)uVar1) {
          uVar4 = uVar3;
        }
      }
      goto LAB_108d793b0;
    }
  }
  uVar4 = 0x200;
LAB_108d793b0:
  *(uint *)(param_1 + 0xb8) = uVar4;
  return;
}



/* Entry: 108d793c8; end: 108d7946f;  */

void FUN_108d793c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar3 = 0;
    lVar5 = 0x10;
    do {
      FUN_108d77c44(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar5));
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar3 < *(int *)(param_1 + 0x80));
  }
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  puVar1 = (undefined *)*puVar4;
  if (*(char *)(param_1 + 8) == '\0') {
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) goto LAB_108d7944c;
  }
  else {
    puVar2 = &UNK_110ac3d90;
    if (puVar1 != &UNK_110ac3d90) goto LAB_108d7944c;
  }
  (**(code **)(puVar2 + 8))(puVar4);
  *puVar4 = 0;
LAB_108d7944c:
  func_0x000108d5e198(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 108d79470; end: 108d794f7;  */

void FUN_108d79470(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(param_1 + 0x3f) == '\0') {
      (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (-1 < (short)*(ushort *)(param_1 + 0x3c)) {
    if (*(char *)(param_1 + 0x3f) == '\0') {
      (**(code **)(**(long **)(param_1 + 8) + 0x70))
                (*(long **)(param_1 + 8),*(ushort *)(param_1 + 0x3c) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  }
  return;
}



/* Entry: 108d794f8; end: 108d796d3;  */

long FUN_108d794f8(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lStack_68;
  
  lVar10 = *(long *)(param_1 + 0x20);
  uVar6 = 0;
  if (*(uint *)(lVar10 + 0xbc) != 0) {
    uVar6 = *(uint *)(lVar10 + 0xb8) / *(uint *)(lVar10 + 0xbc);
  }
  *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) | 4;
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar2 = uVar3 - 1 & -uVar6;
  uVar4 = *(uint *)(lVar10 + 0x1c);
  uVar12 = uVar4 - uVar2;
  if (uVar2 + uVar6 <= uVar4) {
    uVar12 = uVar6;
  }
  if (uVar4 < uVar3) {
    uVar12 = uVar3 - uVar2;
  }
  if (0 < (int)uVar12) {
    bVar7 = false;
    iVar13 = 1;
    do {
      iVar1 = uVar2 + iVar13;
      if (iVar1 == *(int *)(param_1 + 0x28)) {
LAB_108d795d8:
        iVar5 = 0;
        if (*(int *)(lVar10 + 0xbc) != 0) {
          iVar5 = iRam0000000113298da4 / *(int *)(lVar10 + 0xbc);
        }
        if (iVar1 == iVar5 + 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = lVar10;
          FUN_108d5fcfc(lVar10,iVar1,&lStack_68,0);
          lVar9 = lStack_68;
          if ((int)lVar11 != 0) goto LAB_108d796a4;
          lVar11 = lStack_68;
          FUN_108d796d4();
LAB_108d79620:
          if ((*(ushort *)(lVar9 + 0x2c) & 4) != 0) {
            bVar7 = true;
          }
          func_0x000108d787d8(lVar9);
        }
      }
      else {
        uVar8 = *(undefined8 *)(lVar10 + 0x40);
        FUN_108d7898c(uVar8,iVar1);
        if ((int)uVar8 == 0) goto LAB_108d795d8;
        uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x130) + 0x40);
        (*pcRam00000001132979f8)(uVar8,iVar1,0);
        lVar9 = *(long *)(lVar10 + 0x130);
        FUN_108d7663c(lVar9,iVar1,uVar8);
        lVar11 = 0;
        if (lVar9 != 0) goto LAB_108d79620;
      }
    } while ((iVar13 < (int)uVar12) && (iVar13 = iVar13 + 1, (int)lVar11 == 0));
    if (((int)lVar11 != 0) || (!bVar7)) goto LAB_108d796a4;
    do {
      uVar2 = uVar2 + 1;
      uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x130) + 0x40);
      (*pcRam00000001132979f8)(uVar8,uVar2,0);
      lVar9 = *(long *)(lVar10 + 0x130);
      FUN_108d7663c(lVar9,uVar2,uVar8);
      if (lVar9 != 0) {
        *(ushort *)(lVar9 + 0x2c) = *(ushort *)(lVar9 + 0x2c) | 4;
        func_0x000108d787d8();
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  lVar11 = 0;
LAB_108d796a4:
  *(byte *)(lVar10 + 0x18) = *(byte *)(lVar10 + 0x18) & 0xfb;
  return lVar11;
}



/* Entry: 108d796d4; end: 108d79a5f;  */

long * FUN_108d796d4(long *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  uint uStack_48;
  uint uStack_44;
  
  plVar10 = (long *)param_1[4];
  if (*(char *)((long)plVar10 + 0x14) == '\x02') {
    if (*(uint *)((long)plVar10 + 0x2c) != 0) {
      return (long *)(ulong)*(uint *)((long)plVar10 + 0x2c);
    }
    if ((plVar10[0x27] == 0) && (*(char *)((long)plVar10 + 9) != '\x02')) {
      plVar12 = (long *)*plVar10;
      uVar7 = *(undefined4 *)((long)plVar10 + 0x1c);
      puVar6 = (undefined8 *)0x200;
      FUN_108d60848();
      if (puVar6 == (undefined8 *)0x0) {
        plVar10[8] = 0;
        return (long *)0x7;
      }
      puVar6[0x3d] = 0;
      puVar6[0x3c] = 0;
      puVar6[0x3f] = 0;
      puVar6[0x3e] = 0;
      puVar6[0x39] = 0;
      puVar6[0x38] = 0;
      puVar6[0x3b] = 0;
      puVar6[0x3a] = 0;
      puVar6[0x35] = 0;
      puVar6[0x34] = 0;
      puVar6[0x37] = 0;
      puVar6[0x36] = 0;
      puVar6[0x31] = 0;
      puVar6[0x30] = 0;
      puVar6[0x33] = 0;
      puVar6[0x32] = 0;
      puVar6[0x2d] = 0;
      puVar6[0x2c] = 0;
      puVar6[0x2f] = 0;
      puVar6[0x2e] = 0;
      puVar6[0x29] = 0;
      puVar6[0x28] = 0;
      puVar6[0x2b] = 0;
      puVar6[0x2a] = 0;
      puVar6[0x25] = 0;
      puVar6[0x24] = 0;
      puVar6[0x27] = 0;
      puVar6[0x26] = 0;
      puVar6[0x21] = 0;
      puVar6[0x20] = 0;
      puVar6[0x23] = 0;
      puVar6[0x22] = 0;
      puVar6[0x1d] = 0;
      puVar6[0x1c] = 0;
      puVar6[0x1f] = 0;
      puVar6[0x1e] = 0;
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      puVar6[0x1b] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *(undefined4 *)puVar6 = uVar7;
      plVar10[8] = (long)puVar6;
      plVar8 = (long *)plVar10[10];
      if (*plVar8 == 0) {
        if (*(char *)((long)plVar10 + 9) == '\x04') {
          plVar8[3] = 0;
          plVar8[2] = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
          *plVar8 = (long)&UNK_110ac3d90;
        }
        else {
          lVar4 = plVar10[2];
          plVar8 = plVar10;
          FUN_108d79c10();
          if ((int)plVar8 == 0) {
            uVar7 = 0x806;
            if ((char)lVar4 != '\0') {
              uVar7 = 0x100e;
            }
            (*(code *)plVar12[5])(plVar12,plVar10[0x1b],plVar10[10],uVar7,0);
            plVar8 = plVar12;
          }
          if ((int)plVar8 != 0) goto LAB_108d79a04;
        }
      }
      *(undefined4 *)(plVar10 + 6) = 0;
      *(undefined1 *)((long)plVar10 + 0x17) = 0;
      plVar10[0xc] = 0;
      plVar10[0xd] = 0;
      plVar8 = plVar10;
      FUN_108d79c78();
      if ((int)plVar8 != 0) {
LAB_108d79a04:
        FUN_108d77c44(plVar10[8]);
        plVar10[8] = 0;
        return plVar8;
      }
    }
    *(undefined1 *)((long)plVar10 + 0x14) = 3;
  }
  uVar2 = *(ushort *)((long)param_1 + 0x2c);
  uVar1 = uVar2 & 0xffdf;
  *(ushort *)((long)param_1 + 0x2c) = uVar1;
  if ((uVar2 >> 1 & 1) == 0) {
    *(ushort *)((long)param_1 + 0x2c) = uVar1 | 2;
    FUN_108d76c34(param_1,2);
  }
  lVar4 = plVar10[8];
  uVar11 = *(uint *)(param_1 + 5);
  FUN_108d7898c(lVar4,uVar11);
  if ((int)lVar4 == 0) {
    if (plVar10[0x27] == 0) {
      if ((*(uint *)(plVar10 + 4) < uVar11) || (*(long *)plVar10[10] == 0)) {
        if (*(char *)((long)plVar10 + 0x14) != '\x04') {
          *(ushort *)((long)param_1 + 0x2c) = *(ushort *)((long)param_1 + 0x2c) | 4;
        }
      }
      else {
        lVar4 = plVar10[0xc];
        if ((code *)plVar10[0x21] == (code *)0x0) {
          lVar5 = param_1[1];
        }
        else {
          lVar5 = plVar10[0x24];
          (*(code *)plVar10[0x21])(lVar5,param_1[1],uVar11,7);
          if (lVar5 == 0) {
            return (long *)0x7;
          }
        }
        uVar11 = *(uint *)((long)plVar10 + 0x34);
        if (200 < (int)*(uint *)((long)plVar10 + 0xbc)) {
          uVar9 = (ulong)*(uint *)((long)plVar10 + 0xbc) + 200;
          do {
            uVar11 = uVar11 + *(byte *)(lVar5 + uVar9 + -400);
            uVar9 = uVar9 - 200;
          } while (400 < uVar9);
        }
        *(ushort *)((long)param_1 + 0x2c) = *(ushort *)((long)param_1 + 0x2c) | 4;
        plVar12 = (long *)plVar10[10];
        uVar3 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
        uStack_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_48,4,lVar4);
        if ((int)plVar12 != 0) {
          return plVar12;
        }
        plVar12 = (long *)plVar10[10];
        lVar4 = lVar4 + 4;
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar5,*(undefined4 *)((long)plVar10 + 0xbc),lVar4);
        if ((int)plVar12 != 0) {
          return plVar12;
        }
        plVar12 = (long *)plVar10[10];
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        uStack_44 = uVar11 >> 0x10 | uVar11 << 0x10;
        (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_44,4,lVar4 + *(int *)((long)plVar10 + 0xbc));
        if ((int)plVar12 != 0) {
          return plVar12;
        }
        plVar10[0xc] = (long)*(int *)((long)plVar10 + 0xbc) + plVar10[0xc] + 8;
        *(int *)(plVar10 + 6) = (int)plVar10[6] + 1;
        lVar4 = plVar10[8];
        FUN_108d7668c(lVar4,(int)param_1[5]);
        plVar12 = plVar10;
        func_0x000108d768bc(plVar10,(int)param_1[5]);
        uVar11 = (uint)plVar12 | (uint)lVar4;
        if (uVar11 != 0) {
          return (long *)(ulong)uVar11;
        }
        uVar11 = *(uint *)(param_1 + 5);
      }
    }
LAB_108d79780:
    if (0 < (int)plVar10[0x10]) {
      lVar4 = param_1[4];
      FUN_108d79a60(lVar4,uVar11);
      if ((int)lVar4 != 0) {
        plVar12 = param_1;
        FUN_108d79acc(param_1);
        uVar11 = *(uint *)(param_1 + 5);
        goto LAB_108d797b4;
      }
    }
  }
  else if ((int)plVar10[0x10] != 0) {
    lVar4 = param_1[4];
    FUN_108d79a60(lVar4,uVar11);
    if ((int)lVar4 != 0) goto LAB_108d79780;
  }
  plVar12 = (long *)0x0;
LAB_108d797b4:
  if (*(uint *)((long)plVar10 + 0x1c) < uVar11) {
    *(uint *)((long)plVar10 + 0x1c) = uVar11;
  }
  return plVar12;
}



/* Entry: 108d79a60; end: 108d79acb;  */

undefined8 FUN_108d79a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = (uint *)(*(long *)(param_1 + 0x78) + 0x18);
    do {
      if ((uint)param_2 <= *puVar3) {
        uVar1 = *(undefined8 *)(puVar3 + -2);
        FUN_108d7898c(uVar1,param_2);
        if ((int)uVar1 == 0) {
          return 1;
        }
      }
      puVar3 = puVar3 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}



/* Entry: 108d79acc; end: 108d79c0f;  */

long * FUN_108d79acc(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uStack_44;
  
  plVar6 = *(long **)(param_1 + 0x20);
  if (*(char *)((long)plVar6 + 9) != '\x02') {
    plVar5 = (long *)plVar6[0xb];
    if (*plVar5 == 0) {
      if ((*(char *)((long)plVar6 + 9) == '\x04') || (*(char *)((long)plVar6 + 0x19) != '\0')) {
        plVar5[3] = 0;
        plVar5[2] = 0;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
        *plVar5 = (long)&UNK_110ac3d90;
      }
      else {
        plVar4 = (long *)*plVar6;
        (*(code *)plVar4[5])(plVar4,0,plVar5,0x201e,0);
        if ((int)plVar4 != 0) {
          return plVar4;
        }
      }
    }
    uVar1 = *(uint *)(plVar6 + 7);
    iVar2 = *(int *)((long)plVar6 + 0xbc);
    lVar3 = *(long *)(param_1 + 8);
    if ((code *)plVar6[0x21] != (code *)0x0) {
      lVar3 = plVar6[0x24];
      (*(code *)plVar6[0x21])(lVar3,*(long *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),7);
      if (lVar3 == 0) {
        return (long *)0x7;
      }
    }
    lVar7 = ((long)iVar2 + 4) * (ulong)uVar1;
    plVar5 = (long *)plVar6[0xb];
    uVar1 = (*(uint *)(param_1 + 0x28) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x28) & 0xff00ff) << 8;
    uStack_44 = uVar1 >> 0x10 | uVar1 << 0x10;
    (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_44,4,lVar7);
    if ((int)plVar5 != 0) {
      return plVar5;
    }
    plVar5 = (long *)plVar6[0xb];
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,*(undefined4 *)((long)plVar6 + 0xbc),lVar7 + 4);
    if ((int)plVar5 != 0) {
      return plVar5;
    }
  }
  *(int *)(plVar6 + 7) = (int)plVar6[7] + 1;
  func_0x000108d768bc(plVar6,*(undefined4 *)(param_1 + 0x28));
  return plVar6;
}



/* Entry: 108d79c10; end: 108d79c77;  */

int FUN_108d79c10(long param_1)

{
  int iVar1;
  long *plVar2;
  int iStack_14;
  
  iStack_14 = 0;
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x50))(plVar2,0x14,&iStack_14);
    iVar1 = (int)plVar2;
    if (iVar1 != 0xc) {
      if (iStack_14 != 0 && iVar1 == 0) {
        return 0x408;
      }
      return iVar1;
    }
  }
  return 0;
}



/* Entry: 108d79c78; end: 108d79ddb;  */

void FUN_108d79c78(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar6 = *(undefined8 **)(param_1 + 0x128);
  uVar8 = *(uint *)(param_1 + 0xb8);
  uVar2 = (ulong)uVar8;
  uVar1 = *(uint *)(param_1 + 0xbc);
  if (uVar8 <= *(uint *)(param_1 + 0xbc)) {
    uVar1 = uVar8;
  }
  uVar7 = (ulong)uVar1;
  uVar5 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      if (*plVar3 == 0) {
        *plVar3 = *(long *)(param_1 + 0x60);
      }
      plVar3 = plVar3 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = (*(long *)(param_1 + 0x60) + -1) / (long)uVar2;
    }
    lVar4 = uVar2 + uVar2 * lVar4;
  }
  *(long *)(param_1 + 0x60) = lVar4;
  *(long *)(param_1 + 0x68) = lVar4;
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)(param_1 + 9) != '\x04')) {
    plVar3 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar3 + 0x60))();
    if (((uint)plVar3 >> 9 & 1) == 0) {
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = 0;
      goto LAB_108d79d3c;
    }
  }
  *puVar6 = 0xd763a120f905d5d9;
  *(undefined4 *)(puVar6 + 1) = 0xffffffff;
LAB_108d79d3c:
  FUN_108d64cc0(4,param_1 + 0x34);
  uVar8 = (*(uint *)(param_1 + 0x34) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x34) & 0xff00ff) << 8;
  *(uint *)((long)puVar6 + 0xc) = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (*(uint *)(param_1 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x20) & 0xff00ff) << 8;
  *(uint *)(puVar6 + 2) = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (*(uint *)(param_1 + 0xb8) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0xb8) & 0xff00ff) << 8;
  *(uint *)((long)puVar6 + 0x14) = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (*(uint *)(param_1 + 0xbc) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0xbc) & 0xff00ff) << 8;
  *(uint *)(puVar6 + 3) = uVar8 >> 0x10 | uVar8 << 0x10;
  _bzero((long)puVar6 + 0x1c,uVar7 - 0x1c);
  uVar8 = -uVar1;
  do {
    uVar8 = uVar8 + uVar1;
    if (*(uint *)(param_1 + 0xb8) <= uVar8) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x50);
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar6,uVar7,*(undefined8 *)(param_1 + 0x60));
    *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar7;
  } while ((int)plVar3 == 0);
  return;
}



/* Entry: 108d79ddc; end: 108d79ee3;  */

void FUN_108d79ddc(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = param_1[1];
    if (*(char *)(lVar5 + 0x11) != '\0') {
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      if (*(char *)(lVar5 + 0x12) == '\0') {
        FUN_108d7f528(lVar5);
      }
    }
    func_0x000108d5e198(param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined1 *)((long)param_1 + 0x6d) = 0;
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    lVar8 = lVar6;
    if (lVar2 != 0) {
      lVar8 = lVar2;
    }
    *(long *)(lVar8 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x18) = lVar2;
    }
    sVar4 = (short)param_1[0xe];
    if (-1 < sVar4) {
      lVar8 = -1;
      plVar7 = param_1 + 0x14;
      do {
        if (*plVar7 != 0) {
          func_0x000108d787d8(*(undefined8 *)(*plVar7 + 0x68));
          sVar4 = (short)param_1[0xe];
        }
        lVar8 = lVar8 + 1;
        plVar7 = plVar7 + 1;
      } while (lVar8 < sVar4);
    }
    if ((*(char *)(lVar6 + 0x24) == '\0') && (lVar8 = *(long *)(lVar6 + 0x18), lVar8 != 0)) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      func_0x000108d787d8(*(undefined8 *)(lVar8 + 0x68));
    }
    func_0x000108d5e198(param_1[5]);
    if ((*(char *)(lVar5 + 0x11) != '\0') &&
       (iVar3 = *(int *)(lVar5 + 0x14) + -1, *(int *)(lVar5 + 0x14) = iVar3, iVar3 == 0)) {
      if (*(long *)(*(long *)(lVar5 + 8) + 0x58) != 0) {
        (*pcRam00000001132979a8)();
      }
      *(undefined1 *)(lVar5 + 0x12) = 0;
      return;
    }
  }
  return;
}



/* Entry: 108d79ee4; end: 108d7a01f;  */

/* WARNING: Possible PIC construction at 0x000108d79f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d79f1c) */

void FUN_108d79ee4(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  long *plVar6;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  if (pcRam000000011372e6f8 != (code *)0x0) {
    (*pcRam000000011372e6f8)();
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_108d7a020(*(undefined8 *)(param_1 + 0x138),*(undefined1 *)(param_1 + 0xd),
                  *(undefined4 *)(param_1 + 0xbc),uVar5);
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_108d78cec(param_1);
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (**(long **)(param_1 + 0x50) != 0) {
        lVar4 = param_1;
        FUN_108d7a190();
        uVar2 = (uint)lVar4 & 0xff;
        if ((uVar2 == 0xd) || (uVar2 == 10)) {
          *(uint *)(param_1 + 0x2c) = (uint)lVar4;
          *(undefined1 *)(param_1 + 0x14) = 6;
        }
      }
      FUN_108d76cf4(param_1);
    }
    else {
      FUN_108d771f8(param_1);
    }
    if (pcRam000000011372e700 != (code *)0x0) {
      (*pcRam000000011372e700)();
    }
    plVar6 = *(long **)(param_1 + 0x50);
    if (*plVar6 != 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      *plVar6 = 0;
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (*plVar6 != 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      *plVar6 = 0;
    }
    func_0x000108d78fdc(uVar5);
    (*pcRam0000000113297a18)(*(undefined8 *)(*(long *)(param_1 + 0x130) + 0x40));
    lVar4 = param_1;
    if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
    }
  }
  else {
    unaff_x21 = *(undefined8 *)(lVar4 + 0x18);
    unaff_x30 = 0x108d79f1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar4 != 0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      lVar3 = lVar4;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)lVar3;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(lVar4);
      lVar4 = lRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (lRam0000000113829af0 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar4);
    return;
  }
  return;
}



/* Entry: 108d7a020; end: 108d7a18f;  */

long * FUN_108d7a020(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int iStack_44;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar1 = (long *)param_1[1];
  (**(code **)(*plVar1 + 0x38))(plVar1,4);
  if ((int)plVar1 == 0) {
    if (*(char *)((long)param_1 + 0x3f) == '\0') {
      *(undefined1 *)((long)param_1 + 0x3f) = 1;
    }
    plVar1 = param_1;
    FUN_108d7a1e8(param_1,0,0,0,param_2,param_3,param_4,0,0);
    if ((int)plVar1 == 0) {
      iStack_44 = -1;
      (**(code **)(*(long *)param_1[1] + 0x50))((long *)param_1[1],10,&iStack_44);
      if (iStack_44 == 1) {
        if (-1 < param_1[4]) {
          FUN_108d7abf4(param_1,0);
        }
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      plVar1 = (long *)0x0;
      goto LAB_108d7a0a8;
    }
  }
  iVar2 = 0;
LAB_108d7a0a8:
  FUN_108d7aca8(param_1,iVar2);
  plVar3 = (long *)param_1[2];
  if (*plVar3 != 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    *plVar3 = 0;
  }
  if (iVar2 != 0) {
    if (pcRam000000011372e6f8 != (code *)0x0) {
      (*pcRam000000011372e6f8)();
    }
    (**(code **)(*param_1 + 0x30))(*param_1,param_1[0xf],0);
    if (pcRam000000011372e700 != (code *)0x0) {
      (*pcRam000000011372e700)();
    }
  }
  func_0x000108d5e198(param_1[6]);
  func_0x000108d5e198(param_1);
  return plVar1;
}



/* Entry: 108d7a190; end: 108d7a1e7;  */

void FUN_108d7a190(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    plVar1 = *(long **)(param_1 + 0x50);
    (**(code **)(*plVar1 + 0x28))(plVar1,2);
    if ((int)plVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d7a1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(*(long **)(param_1 + 0x50),param_1 + 0x68);
  return;
}



/* Entry: 108d7a1e8; end: 108d7abf3;  */

void FUN_108d7a1e8(long param_1,ulong *param_2,code *param_3,undefined8 param_4,uint param_5,
                  uint param_6,ulong *param_7,undefined4 *param_8,undefined4 *param_9)

{
  bool bVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ushort *puVar16;
  ulong *unaff_x19;
  undefined **ppuVar17;
  long unaff_x20;
  ulong *unaff_x21;
  undefined4 *unaff_x22;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  uint uVar28;
  long lStack_228;
  undefined4 *puStack_220;
  ulong *puStack_218;
  long lStack_210;
  ulong *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  ulong *puStack_1d8;
  uint uStack_1cc;
  long lStack_1c8;
  undefined4 *puStack_1c0;
  undefined **ppuStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  ulong *puStack_190;
  uint uStack_184;
  ulong *puStack_180;
  uint uStack_174;
  undefined **ppuStack_170;
  int iStack_164;
  undefined *puStack_160;
  uint uStack_154;
  ulong uStack_150;
  undefined *apuStack_148 [26];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_164 = 0;
  if (*(char *)(param_1 + 0x42) != '\0') {
    plVar9 = (long *)0x8;
    puVar12 = param_2;
    param_2 = unaff_x19;
    param_1 = unaff_x20;
    param_8 = unaff_x22;
    goto LAB_108d7a9c8;
  }
  if (*(char *)(param_1 + 0x3f) == '\0') {
    plVar9 = *(long **)(param_1 + 8);
    puVar12 = (ulong *)0x1;
    (**(code **)(*plVar9 + 0x70))(plVar9,1,1,10);
    if ((int)plVar9 != 0) goto LAB_108d7a9c8;
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  if ((uint)param_2 != 0) {
    do {
      unaff_x21 = param_2;
      if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_108d7a2d4:
        *(undefined1 *)(param_1 + 0x40) = 1;
        goto LAB_108d7a2ec;
      }
      plVar9 = *(long **)(param_1 + 8);
      puVar12 = (ulong *)0x0;
      (**(code **)(*plVar9 + 0x70))(plVar9,0,1,10);
      uVar8 = (uint)plVar9;
      if ((param_3 == (code *)0x0) || (uVar8 != 5)) {
        if (uVar8 != 5) {
          uVar19 = uStack_174;
          if (uVar8 == 0) goto LAB_108d7a2d4;
          goto joined_r0x000108d7a398;
        }
        break;
      }
      uVar10 = param_4;
      (*param_3)();
    } while ((int)uVar10 != 0);
    param_3 = (code *)0x0;
  }
  unaff_x21 = (ulong *)0x0;
LAB_108d7a2ec:
  puVar12 = (ulong *)&iStack_164;
  lVar20 = param_1;
  FUN_108d7ad1c();
  uVar8 = (uint)lVar20;
  uVar19 = uStack_174;
joined_r0x000108d7a398:
  uStack_174 = uVar19;
  if (uVar8 == 0) {
    iVar23 = 0;
    uStack_174 = *(uint *)(param_1 + 0x58);
    uVar8 = CONCAT22(*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x56)) & 0x1fe00;
    if ((uStack_174 != 0) && (uVar8 != param_6)) {
      uStack_1f0 = 0xd92e;
      puStack_1e8 = &UNK_10f517536;
      puVar12 = (ulong *)&UNK_10f51799f;
      uVar8 = 0xb;
      uStack_174 = uVar19;
      FUN_108d64c00(0xb);
      goto LAB_108d7a944;
    }
    lVar20 = **(long **)(param_1 + 0x30);
    uVar15 = (uint)unaff_x21;
    if (uStack_174 <= *(uint *)(lVar20 + 0x60)) {
      puVar26 = (ulong *)0x0;
      uVar8 = 0;
      puVar21 = puVar12;
      uStack_174 = uVar19;
      goto joined_r0x000108d7a8f8;
    }
    FUN_108d62be4();
    if (iVar23 != 0) {
      uVar8 = 7;
      goto LAB_108d7a944;
    }
    uVar14 = (ulong)(uStack_174 + 0x1000) + 0xffffffff021;
    iVar23 = (int)(uVar14 >> 0xc);
    puVar21 = (ulong *)(long)(int)(iVar23 * 0x20 + uStack_174 * 2 + 0x28);
    puVar26 = puVar21;
    puStack_1d8 = param_7;
    uStack_1cc = param_5;
    lStack_1c8 = lVar20;
    puStack_1c0 = param_8;
    uStack_1a0 = uVar15;
    uStack_19c = (uint)param_2;
    FUN_108d60848();
    if (puVar26 == (ulong *)0x0) {
      uVar8 = 7;
      unaff_x21 = (ulong *)(ulong)uStack_1a0;
      param_2 = (ulong *)(ulong)uStack_19c;
      goto LAB_108d7a944;
    }
    puVar12 = puVar26;
    _bzero();
    iVar7 = (int)puVar12;
    *(uint *)((long)puVar26 + 4) = iVar23 + 1;
    FUN_108d62be4();
    if (iVar7 == 0) {
      uVar19 = uStack_174;
      if (0xfff < uStack_174) {
        uVar19 = 0x1000;
      }
      uVar22 = (ulong)(uVar19 << 1);
      uStack_1e0 = (ulong)uVar8;
      FUN_108d60848();
      uStack_198 = param_4;
      puStack_190 = puVar26;
      if ((uVar22 == 0) || (iVar23 < 0)) {
        func_0x000108d5e198(uVar22);
        if (uVar22 == 0) {
          uVar8 = 7;
          goto LAB_108d7a410;
        }
      }
      else {
        puVar12 = (ulong *)0x0;
        puStack_1a8 = puVar26 + 1;
        ppuStack_170 = apuStack_148;
        puStack_1b0 = (ulong *)(uVar14 >> 0xc & 0x7fffffff);
        ppuStack_1b8 = apuStack_148 + 2;
        do {
          puVar26 = puStack_190;
          puVar6 = puStack_1a8;
          puVar3 = puStack_1b0;
          lVar20 = param_1;
          puVar21 = puVar12;
          FUN_108d76a9c(param_1,puVar12,&uStack_150);
          uVar8 = (uint)lVar20;
          if (uVar8 != 0) goto LAB_108d7a408;
          lVar20 = 0x88;
          if (puVar12 != (ulong *)0x0) {
            lVar20 = 0;
          }
          uVar14 = uStack_150 + lVar20;
          uStack_184 = 0;
          if (puVar12 != (ulong *)0x0) {
            uStack_184 = (int)puVar12 * 0x1000 - 0x22;
          }
          uVar8 = uStack_174 - uStack_184;
          if (puVar12 != puVar3) {
            uVar8 = (uint)(0x4000U - lVar20 >> 2);
          }
          uVar24 = (ulong)uVar8;
          puVar2 = (undefined *)
                   ((long)puVar6 +
                   (ulong)uStack_184 * 2 + (long)(int)*(uint *)((long)puVar26 + 4) * 0x20);
          puStack_180 = puVar12;
          if ((int)uVar8 < 1) {
            uVar13 = 0;
            uStack_154 = 0;
            puStack_160 = (undefined *)0x0;
            apuStack_148[0x16] = (undefined *)0x0;
            apuStack_148[0x15] = (undefined *)0x0;
            apuStack_148[0x18] = (undefined *)0x0;
            apuStack_148[0x17] = (undefined *)0x0;
            apuStack_148[0x12] = (undefined *)0x0;
            apuStack_148[0x11] = (undefined *)0x0;
            apuStack_148[0x14] = (undefined *)0x0;
            apuStack_148[0x13] = (undefined *)0x0;
            apuStack_148[0xe] = (undefined *)0x0;
            apuStack_148[0xd] = (undefined *)0x0;
            apuStack_148[0x10] = (undefined *)0x0;
            apuStack_148[0xf] = (undefined *)0x0;
            apuStack_148[10] = (undefined *)0x0;
            apuStack_148[9] = (undefined *)0x0;
            apuStack_148[0xc] = (undefined *)0x0;
            apuStack_148[0xb] = (undefined *)0x0;
            apuStack_148[6] = (undefined *)0x0;
            apuStack_148[5] = (undefined *)0x0;
            apuStack_148[8] = (undefined *)0x0;
            apuStack_148[7] = (undefined *)0x0;
            apuStack_148[2] = (undefined *)0x0;
            apuStack_148[1] = (undefined *)0x0;
            apuStack_148[4] = (undefined *)0x0;
            apuStack_148[3] = (undefined *)0x0;
            apuStack_148[0] = (undefined *)0x0;
            uStack_150 = 0;
LAB_108d7a654:
            ppuVar17 = ppuStack_1b8 + uVar13 * 2;
            do {
              if (((uVar8 >> (ulong)((uint)uVar13 & 0x1f)) >> 1 & 1) != 0) {
                puVar21 = (ulong *)*ppuVar17;
                FUN_108d7b724(uVar14,puVar21,*(undefined4 *)(ppuVar17 + -1),&puStack_160,&uStack_154
                              ,uVar22);
              }
              uVar13 = uVar13 + 1;
              ppuVar17 = ppuVar17 + 2;
            } while (uVar13 != 0xc);
          }
          else {
            uVar13 = 0;
            do {
              *(short *)(puVar2 + uVar13 * 2) = (short)uVar13;
              uVar13 = uVar13 + 1;
            } while (uVar24 != uVar13);
            uVar27 = 0;
            apuStack_148[0x16] = (undefined *)0x0;
            apuStack_148[0x15] = (undefined *)0x0;
            apuStack_148[0x18] = (undefined *)0x0;
            apuStack_148[0x17] = (undefined *)0x0;
            apuStack_148[0x12] = (undefined *)0x0;
            apuStack_148[0x11] = (undefined *)0x0;
            apuStack_148[0x14] = (undefined *)0x0;
            apuStack_148[0x13] = (undefined *)0x0;
            apuStack_148[0xe] = (undefined *)0x0;
            apuStack_148[0xd] = (undefined *)0x0;
            apuStack_148[0x10] = (undefined *)0x0;
            apuStack_148[0xf] = (undefined *)0x0;
            apuStack_148[10] = (undefined *)0x0;
            apuStack_148[9] = (undefined *)0x0;
            apuStack_148[0xc] = (undefined *)0x0;
            apuStack_148[0xb] = (undefined *)0x0;
            apuStack_148[6] = (undefined *)0x0;
            apuStack_148[5] = (undefined *)0x0;
            apuStack_148[8] = (undefined *)0x0;
            apuStack_148[7] = (undefined *)0x0;
            apuStack_148[2] = (undefined *)0x0;
            apuStack_148[1] = (undefined *)0x0;
            apuStack_148[4] = (undefined *)0x0;
            apuStack_148[3] = (undefined *)0x0;
            apuStack_148[0] = (undefined *)0x0;
            uStack_150 = 0;
            do {
              while( true ) {
                uStack_154 = 1;
                puStack_160 = puVar2 + uVar27 * 2;
                if ((uVar27 & 1) != 0) break;
                uStack_150 = CONCAT44(uStack_150._4_4_,1);
                uVar27 = uVar27 + 1;
                apuStack_148[0] = puStack_160;
                if (uVar27 == uVar24) {
                  uVar13 = 0;
                  goto LAB_108d7a654;
                }
              }
              ppuVar17 = ppuStack_170;
              uVar13 = 0;
              do {
                uVar18 = uVar13;
                puVar21 = (ulong *)*ppuVar17;
                FUN_108d7b724(uVar14,puVar21,*(undefined4 *)(ppuVar17 + -1),&puStack_160,&uStack_154
                              ,uVar22);
                uVar13 = uVar18 + 1;
                ppuVar17 = ppuVar17 + 2;
              } while ((((uint)uVar27 >> (ulong)((uint)uVar18 & 0x1f)) >> 1 & 1) != 0);
              apuStack_148[(uVar13 & 0xffffffff) * 2] = puStack_160;
              *(uint *)(&uStack_150 + (uVar13 & 0xffffffff) * 2) = uStack_154;
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar24);
            if (uVar18 < 0xb) goto LAB_108d7a654;
          }
          param_4 = uStack_198;
          *(uint *)(puStack_1a8 + (long)puStack_180 * 4 + 3) = uStack_154;
          *(uint *)((long)puStack_1a8 + ((long)puStack_180 * 8 + 7) * 4) = uStack_184 | 1;
          puStack_1a8[(long)puStack_180 * 4 + 1] = (ulong)puVar2;
          puStack_1a8[(long)puStack_180 * 4 + 2] = uVar14;
          puVar12 = (ulong *)((long)puStack_180 + 1);
        } while (puStack_180 != puStack_1b0);
        func_0x000108d5e198(uVar22);
      }
      plVar9 = (long *)0x0;
      uVar19 = *(uint *)(param_1 + 0x58);
      ppuStack_170 = (undefined **)(ulong)*(uint *)(param_1 + 0x5c);
      lVar20 = lStack_1c8 + 100;
      lVar25 = 1;
      do {
        uVar15 = *(uint *)(lVar20 + lVar25 * 4);
        if (uVar15 < uVar19) {
          do {
            if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_108d7a754:
              uVar8 = uVar19;
              if (lVar25 != 1) {
                uVar8 = 0xffffffff;
              }
              *(uint *)(lVar20 + lVar25 * 4) = uVar8;
              if (*(char *)(param_1 + 0x3f) == '\0') {
                puVar21 = (ulong *)(ulong)((int)lVar25 + 3);
                (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),puVar21,1,9);
              }
              plVar9 = (long *)0x0;
              goto LAB_108d7a794;
            }
            plVar9 = *(long **)(param_1 + 8);
            puVar21 = (ulong *)(ulong)((int)lVar25 + 3);
            (**(code **)(*plVar9 + 0x70))(plVar9,puVar21,1,10);
            uVar8 = (uint)plVar9;
            if ((param_3 == (code *)0x0) || (uVar8 != 5)) {
              if (uVar8 == 5) goto LAB_108d7a790;
              if (uVar8 == 0) goto LAB_108d7a754;
              unaff_x21 = (ulong *)(ulong)uStack_1a0;
              param_2 = (ulong *)(ulong)uStack_19c;
              param_8 = puStack_1c0;
              puVar26 = puStack_190;
              goto LAB_108d7a90c;
            }
            iVar23 = (int)param_4;
            (*param_3)();
          } while (iVar23 != 0);
          plVar9 = (long *)0x5;
LAB_108d7a790:
          param_3 = (code *)0x0;
          uVar19 = uVar15;
        }
LAB_108d7a794:
        puVar26 = puStack_190;
        param_8 = puStack_1c0;
        uVar15 = (uint)plVar9;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 5);
      unaff_x21 = (ulong *)(ulong)uStack_1a0;
      param_2 = (ulong *)(ulong)uStack_19c;
      if (uVar19 <= *(uint *)(lStack_1c8 + 0x60)) goto LAB_108d7a8ec;
      do {
        if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_108d7a874:
          uStack_174 = *(uint *)(lStack_1c8 + 0x60);
          puVar21 = (ulong *)(ulong)uStack_1cc;
          if (uStack_1cc != 0) {
            plVar9 = *(long **)(param_1 + 0x10);
            (**(code **)(*plVar9 + 0x28))();
            uVar15 = (uint)plVar9;
            if (uVar15 != 0) goto LAB_108d7a8c8;
          }
          puStack_160 = (undefined *)
                        (((ulong)ppuStack_170 & 0xffffffff) * (uStack_1e0 & 0xffffffff));
          plVar9 = *(long **)(param_1 + 8);
          puVar21 = &uStack_150;
          (**(code **)(*plVar9 + 0x30))();
          uVar15 = (uint)plVar9;
          if (uVar15 != 0) goto LAB_108d7a8c8;
          if ((long)uStack_150 < (long)puStack_160) {
            puVar21 = (ulong *)0x5;
            (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),5,&puStack_160);
          }
          uVar14 = (ulong)*(uint *)((long)puVar26 + 4);
          if ((int)*(uint *)((long)puVar26 + 4) < 1) goto LAB_108d7ab50;
          uVar8 = 0;
          puStack_180 = (ulong *)(ulong)((uint)uStack_1e0 | 0x18);
          uVar22 = uStack_1e0;
          goto LAB_108d7aa48;
        }
        plVar9 = *(long **)(param_1 + 8);
        puVar21 = (ulong *)0x3;
        (**(code **)(*plVar9 + 0x70))(plVar9,3,1,10);
        uVar15 = (uint)plVar9;
        if ((param_3 == (code *)0x0) || (uVar15 != 5)) {
          if (uVar15 == 0) goto LAB_108d7a874;
          goto LAB_108d7a8ec;
        }
        iVar23 = (int)param_4;
        (*param_3)();
      } while (iVar23 != 0);
      uVar8 = 0;
      goto LAB_108d7a8f4;
    }
    uVar22 = 0;
    uVar8 = 7;
LAB_108d7a408:
    func_0x000108d5e198(uVar22);
LAB_108d7a410:
    unaff_x21 = (ulong *)(ulong)uStack_1a0;
    param_2 = (ulong *)(ulong)uStack_19c;
    param_8 = puStack_1c0;
    goto LAB_108d7a90c;
  }
  goto LAB_108d7a944;
LAB_108d7aa48:
  do {
    puVar12 = puStack_1d8;
    uVar24 = *puVar26;
    uVar28 = 0xffffffff;
    uVar13 = uVar14;
    do {
      puVar3 = puVar26 + (uVar13 - 1) * 4 + 1;
      uVar15 = (uint)*puVar3;
      if ((int)uVar15 < (int)(uint)puVar3[3]) {
        iVar23 = (uint)puVar3[3] - uVar15;
        puVar16 = (ushort *)(puVar3[1] + (long)(int)uVar15 * 2);
        do {
          uVar15 = uVar15 + 1;
          uVar4 = *(uint *)(puVar3[2] + (ulong)*puVar16 * 4);
          if ((uint)uVar24 < uVar4) {
            if (uVar4 < uVar28) {
              uVar8 = *(uint *)((long)puVar3 + 0x1c) + (uint)*puVar16;
              uVar28 = uVar4;
            }
            break;
          }
          *(uint *)puVar3 = uVar15;
          iVar23 = iVar23 + -1;
          puVar16 = puVar16 + 1;
        } while (iVar23 != 0);
      }
      bVar1 = 1 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
    *(uint *)puVar26 = uVar28;
    if (uVar28 == 0xffffffff) goto LAB_108d7ab58;
    if (((uStack_174 < uVar8) && (uVar8 <= uVar19)) && (uVar28 <= (uint)ppuStack_170)) {
      plVar9 = *(long **)(param_1 + 0x10);
      puVar21 = puStack_1d8;
      (**(code **)(*plVar9 + 0x10))
                (plVar9,puStack_1d8,uVar22,
                 ((ulong)puStack_180 & 0xffffffff) * (ulong)(uVar8 - 1) + 0x38);
      uVar15 = (uint)plVar9;
      if (uVar15 == 0) {
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x18))
                  (plVar9,puVar12,uVar22,(uVar22 & 0xffffffff) * (ulong)(uVar28 - 1));
        uVar15 = (uint)plVar9;
        puVar21 = puVar12;
        if (uVar15 == 0) {
          uVar14 = (ulong)*(uint *)((long)puVar26 + 4);
          uVar22 = uStack_1e0;
          goto LAB_108d7ab48;
        }
      }
      unaff_x21 = (ulong *)(ulong)uStack_1a0;
      param_2 = (ulong *)(ulong)uStack_19c;
      param_8 = puStack_1c0;
      param_4 = uStack_198;
      goto LAB_108d7a8c8;
    }
LAB_108d7ab48:
  } while (0 < (int)uVar14);
LAB_108d7ab50:
  *(uint *)puVar26 = 0xffffffff;
LAB_108d7ab58:
  unaff_x21 = (ulong *)(ulong)uStack_1a0;
  param_2 = (ulong *)(ulong)uStack_19c;
  if (uVar19 == *(uint *)(**(long **)(param_1 + 0x30) + 0x10)) {
    puVar21 = (ulong *)((ulong)*(uint *)(param_1 + 0x5c) * (uStack_1e0 & 0xffffffff));
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x20))();
    uVar15 = (uint)plVar9;
    if ((uStack_1cc != 0) && (uVar15 == 0)) {
      plVar9 = *(long **)(param_1 + 8);
      puVar21 = (ulong *)(ulong)uStack_1cc;
      (**(code **)(*plVar9 + 0x28))();
      uVar15 = (uint)plVar9;
    }
    unaff_x21 = (ulong *)(ulong)uStack_1a0;
    param_2 = (ulong *)(ulong)uStack_19c;
    param_8 = puStack_1c0;
    puVar26 = puStack_190;
    param_4 = uStack_198;
    if (uVar15 == 0) goto LAB_108d7abcc;
  }
  else {
LAB_108d7abcc:
    uVar15 = 0;
    *(uint *)(lStack_1c8 + 0x60) = uVar19;
    param_8 = puStack_1c0;
    param_4 = uStack_198;
  }
LAB_108d7a8c8:
  if (*(char *)(param_1 + 0x3f) == '\0') {
    puVar21 = (ulong *)0x3;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),3,1,9);
  }
LAB_108d7a8ec:
  uVar8 = 0;
  if (uVar15 != 5) {
    uVar8 = uVar15;
  }
LAB_108d7a8f4:
  uVar15 = (uint)unaff_x21;
  lVar20 = lStack_1c8;
joined_r0x000108d7a8f8:
  if ((uVar15 != 0) && (uVar8 == 0)) {
    if (*(uint *)(param_1 + 0x58) <= *(uint *)(lVar20 + 0x60)) {
      if ((int)unaff_x21 < 2) {
        uVar8 = 0;
        goto LAB_108d7a90c;
      }
      puVar21 = &uStack_150;
      FUN_108d64cc0(4);
      do {
        if (*(char *)(param_1 + 0x3f) != '\0') {
LAB_108d7a804:
          if ((int)unaff_x21 == 3) {
            func_0x000108d7b6ac(param_1,uStack_150 & 0xffffffff);
            plVar9 = *(long **)(param_1 + 0x10);
            puVar21 = (ulong *)0x0;
            (**(code **)(*plVar9 + 0x20))();
            uVar8 = (uint)plVar9;
          }
          else {
            uVar8 = 0;
          }
          if (*(char *)(param_1 + 0x3f) == '\0') {
            puVar21 = (ulong *)0x4;
            (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),4,4,9);
          }
          goto LAB_108d7a90c;
        }
        plVar9 = *(long **)(param_1 + 8);
        puVar21 = (ulong *)0x4;
        (**(code **)(*plVar9 + 0x70))(plVar9,4,4,10);
        uVar8 = (uint)plVar9;
        if ((param_3 == (code *)0x0) || (uVar8 != 5)) {
          if (uVar8 == 0) goto LAB_108d7a804;
          goto LAB_108d7a90c;
        }
        iVar23 = (int)param_4;
        (*param_3)();
      } while (iVar23 != 0);
    }
    uVar8 = 5;
  }
LAB_108d7a90c:
  func_0x000108d5e198(puVar26);
  puVar12 = puVar21;
  if ((uVar8 == 5) || (uVar8 == 0)) {
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = *(undefined4 *)(param_1 + 0x58);
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = *(undefined4 *)(**(long **)(param_1 + 0x30) + 0x60);
    }
  }
LAB_108d7a944:
  if (iStack_164 != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  cVar5 = *(char *)(param_1 + 0x3f);
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (cVar5 == '\0') {
      puVar12 = (ulong *)0x0;
      (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),0,1,9);
      cVar5 = *(char *)(param_1 + 0x3f);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (cVar5 == '\0') {
    puVar12 = (ulong *)0x1;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))(*(long **)(param_1 + 8),1,1,9);
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  if (uVar8 == 0 && (int)param_2 != (int)unaff_x21) {
    uVar8 = 5;
  }
  plVar9 = (long *)(ulong)uVar8;
LAB_108d7a9c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_108d7abf4;
  puStack_220 = param_8;
  puStack_218 = unaff_x21;
  lStack_210 = param_1;
  puStack_208 = param_2;
  puStack_200 = &stack0xfffffffffffffff0;
  if (pcRam000000011372e6f8 != (code *)0x0) {
    (*pcRam000000011372e6f8)();
  }
  plVar11 = (long *)plVar9[2];
  (**(code **)(*plVar11 + 0x30))(plVar11,&lStack_228);
  if ((int)plVar11 == 0) {
    if ((long)puVar12 < lStack_228) {
      plVar11 = (long *)plVar9[2];
      (**(code **)(*plVar11 + 0x20))(plVar11,puVar12);
    }
    else {
      plVar11 = (long *)0x0;
    }
  }
  if (pcRam000000011372e700 != (code *)0x0) {
    (*pcRam000000011372e700)();
  }
  if ((int)plVar11 != 0) {
    FUN_108d64c00(plVar11,&UNK_10f517a09);
  }
  return;
}



/* Entry: 108d7abf4; end: 108d7aca7;  */

void FUN_108d7abf4(long param_1,long param_2)

{
  long *plVar1;
  long lStack_38;
  
  if (pcRam000000011372e6f8 != (code *)0x0) {
    (*pcRam000000011372e6f8)();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x30))(plVar1,&lStack_38);
  if ((int)plVar1 == 0) {
    if (param_2 < lStack_38) {
      plVar1 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    }
    else {
      plVar1 = (long *)0x0;
    }
  }
  if (pcRam000000011372e700 != (code *)0x0) {
    (*pcRam000000011372e700)();
  }
  if ((int)plVar1 != 0) {
    FUN_108d64c00(plVar1,&UNK_10f517a09);
  }
  return;
}



/* Entry: 108d7aca8; end: 108d7ad1b;  */

void FUN_108d7aca8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x3f) == '\x02') {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar2 = 0;
      lVar1 = *(long *)(param_1 + 0x30);
      do {
        func_0x000108d5e198(*(undefined8 *)(lVar1 + lVar2 * 8));
        lVar1 = *(long *)(param_1 + 0x30);
        *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x28));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d7ad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  return;
}



/* Entry: 108d7ad1c; end: 108d7b25b;  */

byte * FUN_108d7ad1c(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  ulong unaff_x21;
  long *plVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  ulong uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  uint uStack_a4;
  long lStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  long lStack_90;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  uint uStack_84;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined1 uStack_7d;
  uint uStack_7c;
  long lStack_78;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar10 = (byte *)0x0;
  pbVar7 = param_1;
  FUN_108d76a9c(param_1,0,&lStack_a0);
  pbVar9 = pbVar7;
  if ((int)pbVar7 != 0) goto LAB_108d7ad68;
  if ((lStack_a0 == 0) || (pbVar7 = param_1, pbVar10 = param_2, FUN_108d7b25c(), (int)pbVar7 != 0))
  {
    if ((param_1[0x42] >> 1 & 1) != 0) {
      if (param_1[0x3f] == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar10 = (byte *)0x0;
        (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,0,1,6);
        pbVar9 = pbVar7;
        if ((int)pbVar7 != 0) goto LAB_108d7ad68;
        if (param_1[0x3f] == 0) {
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar10 = (byte *)0x0;
          (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,0,1,5);
        }
      }
      pbVar9 = (byte *)0x108;
      goto LAB_108d7ad68;
    }
    if (param_1[0x3f] == 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x50))(*(long **)(param_1 + 8),0x18,0);
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar10 = (byte *)0x0;
      (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,0,1,10);
      pbVar9 = pbVar7;
      if ((int)pbVar7 != 0) goto LAB_108d7ad68;
    }
    param_1[0x40] = 1;
    pbVar10 = (byte *)0x0;
    pbVar7 = param_1;
    FUN_108d76a9c(param_1,0,&lStack_a0);
    pbVar9 = pbVar7;
    if ((int)pbVar7 == 0) {
      pbVar7 = param_1;
      pbVar10 = param_2;
      FUN_108d7b25c();
      if ((int)pbVar7 != 0) {
        bVar3 = param_1[0x41];
        uVar17 = (uint)bVar3;
        unaff_x21 = (ulong)(7 - bVar3);
        if (param_1[0x3f] == 0) {
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar10 = (byte *)(ulong)(bVar3 + 1);
          (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,pbVar10,unaff_x21,10);
          pbVar9 = pbVar7;
          if ((int)pbVar7 == 0) goto LAB_108d7ae10;
        }
        else {
LAB_108d7ae10:
          param_1[0x70] = 0;
          param_1[0x71] = 0;
          param_1[0x72] = 0;
          param_1[0x73] = 0;
          param_1[0x74] = 0;
          param_1[0x75] = 0;
          param_1[0x76] = 0;
          param_1[0x77] = 0;
          param_1[0x68] = 0;
          param_1[0x69] = 0;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[0x6c] = 0;
          param_1[0x6d] = 0;
          param_1[0x6e] = 0;
          param_1[0x6f] = 0;
          param_1[0x60] = 0;
          param_1[0x61] = 0;
          param_1[0x62] = 0;
          param_1[99] = 0;
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
          param_1[0x67] = 0;
          param_1[0x58] = 0;
          param_1[0x59] = 0;
          param_1[0x5a] = 0;
          param_1[0x5b] = 0;
          param_1[0x5c] = 0;
          param_1[0x5d] = 0;
          param_1[0x5e] = 0;
          param_1[0x5f] = 0;
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[0x52] = 0;
          param_1[0x53] = 0;
          param_1[0x54] = 0;
          param_1[0x55] = 0;
          param_1[0x56] = 0;
          param_1[0x57] = 0;
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x4c] = 0;
          param_1[0x4d] = 0;
          param_1[0x4e] = 0;
          param_1[0x4f] = 0;
          pbVar7 = *(byte **)(param_1 + 0x10);
          pbVar10 = (byte *)&lStack_90;
          (**(code **)(*(long *)pbVar7 + 0x30))();
          pbVar9 = pbVar7;
          if ((int)pbVar7 == 0) {
            if (lStack_90 < 0x21) goto LAB_108d7b07c;
            pbVar7 = *(byte **)(param_1 + 0x10);
            pbVar10 = &bStack_88;
            (**(code **)(*(long *)pbVar7 + 0x10))(pbVar7,pbVar10,0x20,0);
            pbVar9 = pbVar7;
            if ((int)pbVar7 != 0) goto LAB_108d7b0e4;
            if (((uint)bStack_88 << 0x18 | (uint)bStack_87 << 0x10 | (uint)bStack_86 << 8 |
                bStack_85 & 0xfe) == 0x377f0682) {
              uVar4 = (uint)bStack_80 << 0x18 | (uint)bStack_7f << 0x10;
              uVar2 = uVar4 | CONCAT11(bStack_7e,uStack_7d);
              lVar12 = 0;
              if (((uVar2 & uVar2 - 1) == 0) && (0xffff01fe < uVar2 - 0x10001)) {
                uVar1 = bStack_85 & 1;
                param_1[0x55] = (byte)uVar1;
                *(uint *)(param_1 + 0x38) = uVar2;
                uVar5 = (uStack_7c & 0xff00ff00) >> 8 | (uStack_7c & 0xff00ff) << 8;
                *(uint *)(param_1 + 0x80) = uVar5 >> 0x10 | uVar5 << 0x10;
                *(long *)(param_1 + 0x68) = lStack_78;
                pbVar7 = (byte *)(ulong)(uVar1 ^ 1);
                pbVar10 = &bStack_88;
                FUN_108d7b384(pbVar7,pbVar10,0x18,0,param_1 + 0x60);
                uVar1 = (uStack_70 & 0xff00ff00) >> 8 | (uStack_70 & 0xff00ff) << 8;
                if ((*(uint *)(param_1 + 0x60) == (uVar1 >> 0x10 | uVar1 << 0x10)) &&
                   (uVar1 = (uStack_6c & 0xff00ff00) >> 8 | (uStack_6c & 0xff00ff) << 8,
                   *(uint *)(param_1 + 100) == (uVar1 >> 0x10 | uVar1 << 0x10))) {
                  uVar1 = (uStack_84 & 0xff00ff00) >> 8 | (uStack_84 & 0xff00ff) << 8;
                  if ((uVar1 >> 0x10 | uVar1 << 0x10) == 0x2de218) {
                    uStack_a4 = (uint)bVar3;
                    FUN_108d62be4();
                    if ((int)pbVar7 == 0) {
                      pbVar18 = (byte *)(ulong)(uVar2 + 0x18);
                      pbVar7 = pbVar18;
                      FUN_108d60848();
                      if (pbVar7 != (byte *)0x0) {
                        if (lStack_90 < (long)(pbVar18 + 0x20)) {
                          uStack_b8 = 0;
                          lStack_c0 = 0;
                        }
                        else {
                          uStack_b8 = 0;
                          lStack_c0 = 0;
                          pbVar19 = (byte *)0x1;
                          pbVar9 = pbVar18 + 0x20;
                          pbVar20 = (byte *)0x20;
                          do {
                            pbVar13 = pbVar9;
                            pbVar9 = *(byte **)(param_1 + 0x10);
                            pbVar10 = pbVar7;
                            (**(code **)(*(long *)pbVar9 + 0x10))(pbVar9,pbVar7,pbVar18,pbVar20);
                            if ((int)pbVar9 != 0) {
LAB_108d7b248:
                              func_0x000108d5e198();
                              uVar17 = uStack_a4;
                              goto LAB_108d7b0e4;
                            }
                            pbVar10 = (byte *)&uStack_94;
                            pbVar9 = param_1;
                            FUN_108d7b3ec(param_1,pbVar10,&iStack_98,pbVar7 + 0x18,pbVar7);
                            if ((int)pbVar9 == 0) break;
                            pbVar9 = param_1;
                            pbVar10 = pbVar19;
                            func_0x000108d7b4d4(param_1,pbVar19,uStack_94);
                            if ((int)pbVar9 != 0) goto LAB_108d7b248;
                            if (iStack_98 != 0) {
                              *(int *)(param_1 + 0x58) = (int)pbVar19;
                              *(int *)(param_1 + 0x5c) = iStack_98;
                              *(ushort *)(param_1 + 0x56) =
                                   (ushort)bStack_7e << 8 | (ushort)(uVar4 >> 0x10);
                              lStack_c0 = *(long *)(param_1 + 0x60);
                              uStack_b8 = 0;
                            }
                            pbVar9 = pbVar13 + (long)pbVar18;
                            pbVar19 = (byte *)(ulong)((int)pbVar19 + 1);
                            pbVar20 = pbVar13;
                          } while ((long)pbVar9 <= lStack_90);
                        }
                        func_0x000108d5e198(pbVar7);
                        lVar12 = lStack_c0;
                        uVar17 = uStack_a4;
                        goto LAB_108d7b080;
                      }
                    }
                    pbVar9 = (byte *)0x7;
                    uVar17 = uStack_a4;
                  }
                  else {
                    uStack_d0 = 0xd1ce;
                    puStack_c8 = &UNK_10f517536;
                    pbVar10 = &UNK_10f517890;
                    pbVar9 = (byte *)0xe;
                    pbVar7 = (byte *)0xe;
                    FUN_108d64c00();
                  }
                  goto LAB_108d7b0e4;
                }
                goto LAB_108d7b07c;
              }
            }
            else {
LAB_108d7b07c:
              lVar12 = 0;
            }
LAB_108d7b080:
            *(long *)(param_1 + 0x60) = lVar12;
            pbVar7 = param_1;
            FUN_108d7b600();
            lVar12 = **(long **)(param_1 + 0x30);
            *(undefined4 *)(lVar12 + 0x60) = 0;
            *(undefined4 *)(lVar12 + 100) = 0;
            *(undefined4 *)(lVar12 + 0x68) = 0xffffffff;
            *(undefined4 *)(lVar12 + 0x6c) = 0xffffffff;
            *(undefined4 *)(lVar12 + 0x70) = 0xffffffff;
            *(undefined4 *)(lVar12 + 0x74) = 0xffffffff;
            if (*(int *)(param_1 + 0x58) != 0) {
              *(int *)(lVar12 + 0x68) = *(int *)(param_1 + 0x58);
            }
            if (*(int *)(param_1 + 0x5c) != 0) {
              puStack_c8 = *(undefined **)(param_1 + 0x78);
              uStack_d0 = (ulong)*(uint *)(param_1 + 0x58);
              pbVar10 = &UNK_10f5179e4;
              pbVar7 = (byte *)0x11b;
              FUN_108d64c00();
            }
            pbVar9 = (byte *)0x0;
          }
LAB_108d7b0e4:
          if (param_1[0x3f] == 0) {
            pbVar7 = *(byte **)(param_1 + 8);
            pbVar10 = (byte *)(ulong)(uVar17 + 1);
            (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,pbVar10,unaff_x21,9);
          }
        }
        param_2[0] = 1;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        goto LAB_108d7b110;
      }
      pbVar9 = (byte *)0x0;
      param_1[0x40] = 0;
      if (param_1[0x3f] != 0) goto LAB_108d7af80;
      param_2 = (byte *)0x1;
    }
    else {
LAB_108d7b110:
      param_1[0x40] = 0;
      if (param_1[0x3f] != 0) goto LAB_108d7ad68;
      param_2 = (byte *)0x0;
    }
    pbVar7 = *(byte **)(param_1 + 8);
    pbVar10 = (byte *)0x0;
    (**(code **)(*(long *)pbVar7 + 0x70))(pbVar7,0,1,9);
    if ((int)param_2 == 0) goto LAB_108d7ad68;
  }
  else {
    pbVar9 = (byte *)0x0;
  }
LAB_108d7af80:
  if (*(int *)(param_1 + 0x48) != 0x2de218) {
    uStack_d0 = 0xd574;
    puStack_c8 = &UNK_10f517536;
    pbVar10 = &UNK_10f517890;
    pbVar7 = (byte *)0xe;
    FUN_108d64c00();
    pbVar9 = (byte *)0xe;
  }
LAB_108d7ad68:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar9;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_108d7b25c;
  plVar16 = (long *)**(undefined8 **)(pbVar7 + 0x30);
  uStack_128 = plVar16[1];
  uStack_130 = *plVar16;
  lStack_118 = plVar16[3];
  lStack_120 = plVar16[2];
  uStack_108 = plVar16[5];
  lStack_110 = plVar16[4];
  pbStack_100 = pbVar9;
  uStack_f8 = unaff_x21;
  pbStack_f0 = param_2;
  pbStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (pbVar7[0x3f] != 2) {
    (**(code **)(**(long **)(pbVar7 + 8) + 0x78))();
  }
  lStack_158 = plVar16[7];
  lStack_160 = plVar16[6];
  lStack_148 = plVar16[9];
  lStack_150 = plVar16[8];
  lStack_138 = plVar16[0xb];
  lStack_140 = plVar16[10];
  puVar8 = &uStack_130;
  _memcmp(puVar8,&lStack_160,0x30);
  pbVar9 = (byte *)0x1;
  if (((int)puVar8 == 0) && (uStack_128._4_1_ != '\0')) {
    iVar11 = 0;
    uVar14 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + iVar11 + *(int *)((long)&uStack_130 + uVar14);
      iVar11 = *(int *)((long)&uStack_130 + uVar14 + 4) + iVar11 + iVar15;
      bVar6 = uVar14 < 0x20;
      uVar14 = uVar14 + 8;
    } while (bVar6);
    if (iVar15 == (int)uStack_108 && iVar11 == uStack_108._4_4_) {
      pbVar9 = pbVar7 + 0x48;
      _memcmp(pbVar9,&uStack_130,0x30);
      if ((int)pbVar9 != 0) {
        pbVar9 = (byte *)0x0;
        pbVar10[0] = 1;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        *(long *)(pbVar7 + 0x50) = uStack_128;
        *(long *)(pbVar7 + 0x48) = uStack_130;
        *(long *)(pbVar7 + 0x60) = lStack_118;
        *(long *)(pbVar7 + 0x58) = lStack_120;
        *(long *)(pbVar7 + 0x70) = uStack_108;
        *(long *)(pbVar7 + 0x68) = lStack_110;
        *(uint *)(pbVar7 + 0x38) =
             CONCAT22(*(undefined2 *)(pbVar7 + 0x56),*(undefined2 *)(pbVar7 + 0x56)) & 0x1fe00;
      }
    }
    else {
      pbVar9 = (byte *)0x1;
    }
  }
  return pbVar9;
}



/* Entry: 108d7b25c; end: 108d7b383;  */

void FUN_108d7b25c(long param_1,undefined4 *param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
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
  
  puVar6 = (undefined8 *)**(long **)(param_1 + 0x30);
  uStack_58 = puVar6[1];
  uStack_60 = *puVar6;
  uStack_48 = puVar6[3];
  uStack_50 = puVar6[2];
  uStack_38 = puVar6[5];
  uStack_40 = puVar6[4];
  if (*(char *)(param_1 + 0x3f) != '\x02') {
    (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  }
  uStack_88 = puVar6[7];
  uStack_90 = puVar6[6];
  uStack_78 = puVar6[9];
  uStack_80 = puVar6[8];
  uStack_68 = puVar6[0xb];
  uStack_70 = puVar6[10];
  puVar6 = &uStack_60;
  _memcmp(puVar6,&uStack_90,0x30);
  if (((int)puVar6 == 0) && (uStack_58._4_1_ != '\0')) {
    iVar3 = 0;
    uVar4 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + iVar3 + *(int *)((long)&uStack_60 + uVar4);
      iVar3 = *(int *)((long)&uStack_60 + uVar4 + 4) + iVar3 + iVar5;
      bVar1 = uVar4 < 0x20;
      uVar4 = uVar4 + 8;
    } while (bVar1);
    if (iVar5 == (int)uStack_38 && iVar3 == uStack_38._4_4_) {
      lVar2 = param_1 + 0x48;
      _memcmp(lVar2,&uStack_60,0x30);
      if ((int)lVar2 != 0) {
        *param_2 = 1;
        *(undefined8 *)(param_1 + 0x50) = uStack_58;
        *(undefined8 *)(param_1 + 0x48) = uStack_60;
        *(undefined8 *)(param_1 + 0x60) = uStack_48;
        *(undefined8 *)(param_1 + 0x58) = uStack_50;
        *(undefined8 *)(param_1 + 0x70) = uStack_38;
        *(undefined8 *)(param_1 + 0x68) = uStack_40;
        *(uint *)(param_1 + 0x38) =
             CONCAT22(*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x56)) & 0x1fe00;
      }
    }
  }
  return;
}



/* Entry: 108d7b384; end: 108d7b3eb;  */

void FUN_108d7b384(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == (int *)0x0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = *param_4;
    iVar4 = param_4[1];
  }
  puVar3 = param_2;
  if (param_1 == 0) {
    do {
      puVar2 = puVar3 + 2;
      uVar1 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
      iVar5 = iVar5 + iVar4 + (uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (puVar3[1] & 0xff00ff00) >> 8 | (puVar3[1] & 0xff00ff) << 8;
      iVar4 = (uVar1 >> 0x10 | uVar1 << 0x10) + iVar4 + iVar5;
      puVar3 = puVar2;
    } while (puVar2 < (uint *)((long)param_2 + (long)param_3));
  }
  else {
    do {
      puVar2 = puVar3 + 2;
      iVar5 = iVar5 + iVar4 + *puVar3;
      iVar4 = puVar3[1] + iVar4 + iVar5;
      puVar3 = puVar2;
    } while (puVar2 < (uint *)((long)param_2 + (long)param_3));
  }
  *param_5 = iVar5;
  param_5[1] = iVar4;
  return;
}



/* Entry: 108d7b3ec; end: 108d7b5ff;  */

undefined8 FUN_108d7b3ec(long param_1,uint *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 0x68) != *(long *)(param_5 + 2)) {
    return 0;
  }
  uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (uVar1 != 0) {
    bVar3 = *(char *)(param_1 + 0x55) == '\0';
    FUN_108d7b384(bVar3,param_5,8,param_1 + 0x60,param_1 + 0x60);
    FUN_108d7b384(bVar3,param_4,*(undefined4 *)(param_1 + 0x38),param_1 + 0x60,param_1 + 0x60);
    uVar2 = (param_5[4] & 0xff00ff00) >> 8 | (param_5[4] & 0xff00ff) << 8;
    if ((*(uint *)(param_1 + 0x60) == (uVar2 >> 0x10 | uVar2 << 0x10)) &&
       (uVar2 = (param_5[5] & 0xff00ff00) >> 8 | (param_5[5] & 0xff00ff) << 8,
       *(uint *)(param_1 + 100) == (uVar2 >> 0x10 | uVar2 << 0x10))) {
      *param_2 = uVar1;
      uVar1 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
      *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
      return 1;
    }
  }
  return 0;
}



/* Entry: 108d7b600; end: 108d7b723;  */

void FUN_108d7b600(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *(undefined4 *)puVar6 = 0x2de218;
  puVar5 = (undefined8 *)**(long **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x54) = 1;
  do {
    iVar4 = iVar4 + iVar2 + *(int *)(param_1 + lVar3 + 0x48);
    iVar2 = *(int *)(param_1 + lVar3 + 0x4c) + iVar2 + iVar4;
    uVar1 = lVar3 + 0x48;
    lVar3 = lVar3 + 8;
  } while (uVar1 < 0x68);
  *(int *)(param_1 + 0x70) = iVar4;
  *(int *)(param_1 + 0x74) = iVar2;
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *puVar6;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  puVar5[9] = *(undefined8 *)(param_1 + 0x60);
  puVar5[8] = uVar9;
  puVar5[0xb] = uVar11;
  puVar5[10] = uVar10;
  puVar5[7] = uVar8;
  puVar5[6] = uVar7;
  if (*(char *)(param_1 + 0x3f) != '\x02') {
    (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *puVar6;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  puVar5[3] = *(undefined8 *)(param_1 + 0x60);
  puVar5[2] = uVar9;
  puVar5[5] = uVar11;
  puVar5[4] = uVar10;
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  return;
}



/* Entry: 108d7b724; end: 108d7b873;  */

void FUN_108d7b724(long param_1,long param_2,int param_3,long *param_4,int *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  ushort *puVar9;
  bool bVar10;
  
  iVar1 = *param_5;
  lVar3 = *param_4;
  bVar10 = 0 < iVar1;
  bVar7 = 0 < param_3;
  if ((param_3 < 1) && (iVar1 < 1)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    do {
      if ((!bVar7) ||
         ((lVar8 = (long)iVar5, bVar10 &&
          (*(uint *)(param_1 + (ulong)*(ushort *)(lVar3 + (long)iVar6 * 2) * 4) <=
           *(uint *)(param_1 + (ulong)*(ushort *)(param_2 + lVar8 * 2) * 4))))) {
        lVar8 = (long)iVar6;
        iVar6 = iVar6 + 1;
        puVar9 = (ushort *)(lVar3 + lVar8 * 2);
      }
      else {
        iVar5 = iVar5 + 1;
        puVar9 = (ushort *)(param_2 + lVar8 * 2);
      }
      iVar2 = *(int *)(param_1 + (ulong)*puVar9 * 4);
      *(ushort *)(param_6 + lVar4 * 2) = *puVar9;
      if ((iVar5 < param_3) &&
         (*(int *)(param_1 + (ulong)*(ushort *)(param_2 + (long)iVar5 * 2) * 4) == iVar2)) {
        iVar5 = iVar5 + 1;
      }
      bVar7 = iVar5 < param_3;
      lVar4 = lVar4 + 1;
      bVar10 = iVar6 < iVar1;
    } while ((iVar6 < iVar1) || (iVar5 < param_3));
  }
  *param_4 = param_2;
  *param_5 = (int)lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_2,param_6,(int)lVar4 << 1);
  return;
}


