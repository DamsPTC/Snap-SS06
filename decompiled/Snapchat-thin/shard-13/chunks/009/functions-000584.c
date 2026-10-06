/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae54a4c; end: 10ae54c3b;  */

long * FUN_10ae54a4c(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  iVar2 = (int)&plStack_80;
  plStack_80 = (long *)0x0;
  func_0x000107c34f34(&plStack_80,&DAT_110c894a0,0);
  plVar1 = (long *)0x0;
  if (iVar2 != 0) {
    plVar1 = plStack_80;
  }
  if (plVar1 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    if (param_3 == (ulong *)0x0) {
      return plStack_80;
    }
    uVar7 = 0;
    do {
      if (*param_3 <= uVar7) {
        return plVar1;
      }
      lVar4 = *(long *)(param_3[1] + uVar7 * 8);
      lVar5 = *(long *)(lVar4 + 8);
      lVar3 = lVar5;
      _strncmp(lVar5,&UNK_10f6cf616,9);
      if (((int)lVar3 == 0) && (*(char *)(lVar5 + 9) != '\0')) {
        lStack_78 = 10;
        plVar8 = plVar1;
      }
      else {
        lVar3 = lVar5;
        _strncmp(lVar5,&DAT_10f51c48a,8);
        if (((int)lVar3 != 0) || (*(char *)(lVar5 + 8) == '\0')) {
          func_0x000107c2b29c(0x14,0,0x87,&UNK_10f6cf620,0x88);
          plVar6 = (long *)0x0;
          goto joined_r0x00010ae54c34;
        }
        lStack_78 = 9;
        plVar8 = plVar1 + 1;
      }
      lStack_78 = lVar5 + lStack_78;
      uStack_70 = *(undefined8 *)(lVar4 + 0x10);
      plStack_68 = (long *)0x0;
      func_0x000107c34f34(&plStack_68,&DAT_110c895b8,0);
      plVar6 = plStack_68;
      lVar3 = *plStack_68;
      FUN_10ae5168c(lVar3,param_1,param_2,&plStack_80,1);
      if (lVar3 == 0) goto joined_r0x00010ae54c34;
      lVar3 = *plVar8;
      if (lVar3 == 0) {
        func_0x000107c2b59c();
        *plVar8 = lVar3;
        if (lVar3 == 0) break;
      }
      func_0x000107c2b5ac();
      uVar7 = uVar7 + 1;
    } while (lVar3 != 0);
  }
  func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf620,0x99);
joined_r0x00010ae54c34:
  if (plVar1 != (long *)0x0) {
    plStack_68 = plVar1;
    func_0x000107c2b1bc(&plStack_68,&DAT_110c894a0,0);
  }
  if (plVar6 != (long *)0x0) {
    plStack_68 = plVar6;
    func_0x000107c2b1bc(&plStack_68,&DAT_110c895b8,0);
  }
  return (long *)0x0;
}



/* Entry: 10ae54c3c; end: 10ae54c9b;  */

undefined8
FUN_10ae54c3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10ae54fb0(*param_2,param_3,param_4,&UNK_10f601e83);
  FUN_10ae54fb0(param_2[1],param_3,param_4,&UNK_10f6cf698);
  return 1;
}



/* Entry: 10ae54c9c; end: 10ae54e7b;  */

void FUN_10ae54c9c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 auStack_50 [2];
  long *plStack_48;
  
  iVar4 = (int)auStack_50;
  plVar11 = *(long **)(*param_1 + 0x28);
  if ((plVar11 == (long *)0x0) || ((int *)*plVar11 == (int *)0x0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)*(int *)*plVar11;
  }
  if ((long *)param_1[0xf] == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)param_1[0xf];
  }
  puVar7 = (ulong *)*param_2;
  if (puVar7 == (ulong *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar7;
  }
  uVar1 = lVar10 + lVar8;
  lVar8 = 0;
  if ((long *)param_2[1] != (long *)0x0) {
    lVar8 = *(long *)param_2[1];
  }
  uVar9 = lVar8 + uVar9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  if ((((plVar11 == (long *)0x0) || ((int *)*plVar11 == (int *)0x0)) ||
      ((ulong)(long)*(int *)*plVar11 <= uVar1)) && ((puVar7 == (ulong *)0x0 || (*puVar7 <= uVar9))))
  {
    if (uVar9 == 0) {
      if (0x100000 < uVar9 * uVar1) {
        return;
      }
    }
    else if (0x100000 < uVar9 * uVar1 || SUB168(auVar2 * auVar3,8) != 0) {
      return;
    }
    if (((plVar11 == (long *)0x0) || ((int *)*plVar11 == (int *)0x0)) || (*(int *)*plVar11 < 1)) {
LAB_10ae54e38:
      uVar9 = 0;
      do {
        puVar7 = (ulong *)param_1[0xf];
        if (puVar7 == (ulong *)0x0) {
          return;
        }
        if (*puVar7 <= uVar9) {
          return;
        }
        uVar6 = *(undefined8 *)(puVar7[1] + uVar9 * 8);
        FUN_10ae54e7c(uVar6,param_2);
        uVar9 = uVar9 + 1;
      } while ((int)uVar6 == 0);
    }
    else {
      auStack_50[0] = 4;
      plStack_48 = plVar11;
      FUN_10ae54e7c(auStack_50,param_2);
      if (iVar4 == 0) {
        auStack_50[0] = 1;
        plVar12 = (long *)0xffffffff;
        do {
          plVar5 = plVar11;
          func_0x000107c2b634(plVar11,&PTR_DAT_110c7d438,plVar12);
          if ((int)plVar5 == -1) goto LAB_10ae54e38;
          if ((int)plVar5 < 0) {
LAB_10ae54e10:
            plStack_48 = (long *)0x0;
          }
          else {
            puVar7 = (ulong *)*plVar11;
            plStack_48 = (long *)0x0;
            if (puVar7 != (ulong *)0x0) {
              if (*puVar7 <= ((ulong)plVar5 & 0xffffffff)) goto LAB_10ae54e10;
              lVar8 = *(long *)(puVar7[1] + ((ulong)plVar5 & 0xffffffff) * 8);
              plStack_48 = (long *)0x0;
              if (lVar8 != 0) {
                plStack_48 = *(long **)(lVar8 + 8);
              }
            }
          }
        } while ((*(int *)((long)plStack_48 + 4) == 0x16) &&
                (iVar4 = (int)auStack_50, FUN_10ae54e7c(auStack_50,param_2), plVar12 = plVar5,
                iVar4 == 0));
      }
    }
  }
  return;
}



/* Entry: 10ae54e7c; end: 10ae54faf;  */

void FUN_10ae54e7c(int *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar3 = (ulong *)*param_2;
  if (puVar3 != (ulong *)0x0) {
    uVar5 = 0;
    iVar2 = 0;
    do {
      if (*puVar3 <= uVar5) break;
      puVar4 = *(undefined8 **)(puVar3[1] + uVar5 * 8);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return;
        }
        if (puVar4[2] != 0) {
          return;
        }
        if (iVar2 != 2) {
          piVar1 = param_1;
          FUN_10ae55180();
          if ((int)piVar1 == 0) {
            iVar2 = 2;
          }
          else {
            if ((int)piVar1 != 0x2f) {
              return;
            }
            iVar2 = 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      puVar3 = (ulong *)*param_2;
    } while (puVar3 != (ulong *)0x0);
    if (iVar2 == 1) {
      return;
    }
  }
  puVar3 = (ulong *)param_2[1];
  if (puVar3 != (ulong *)0x0) {
    uVar5 = 0;
    while (uVar5 < *puVar3) {
      puVar4 = *(undefined8 **)(puVar3[1] + uVar5 * 8);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return;
        }
        if (puVar4[2] != 0) {
          return;
        }
        piVar1 = param_1;
        FUN_10ae55180();
        if ((int)piVar1 != 0x2f) {
          return;
        }
        puVar3 = (ulong *)param_2[1];
      }
      uVar5 = uVar5 + 1;
      if (puVar3 == (ulong *)0x0) {
        return;
      }
    }
  }
  return;
}



/* Entry: 10ae54fb0; end: 10ae5517f;  */

void FUN_10ae54fb0(ulong *param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      FUN_10ae1ec34(param_2,&UNK_10f6cf6a1);
    }
    if (*param_1 != 0) {
      uVar6 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[1] + uVar6 * 8);
        FUN_10ae1ec34(param_2,&UNK_10f61b339);
        piVar1 = (int *)*puVar5;
        if (*piVar1 == 7) {
          iVar4 = **(int **)(piVar1 + 2);
          func_0x000107c2b1d4(param_2,&UNK_10f6cf6a9,3);
          if (iVar4 == 8) {
            puVar3 = &UNK_10f6cf6ad;
          }
          else {
            if (iVar4 == 0x20) {
              for (iVar4 = 0;
                  (FUN_10ae1ec34(param_2,&UNK_10f6cf6c5), pcVar2 = "/", iVar4 == 7 ||
                  (pcVar2 = ":", iVar4 != 0xf)); iVar4 = iVar4 + 1) {
                func_0x000107c2b1d4(param_2,pcVar2,1);
              }
              goto LAB_10ae55138;
            }
            puVar3 = &UNK_10f6cf6c8;
          }
          FUN_10ae1ec34(param_2,puVar3);
        }
        else {
          FUN_10ae513a0(param_2);
        }
LAB_10ae55138:
        func_0x000107c2b1d4(param_2,&DAT_10f68f57e,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *param_1);
    }
  }
  return;
}



/* Entry: 10ae55180; end: 10ae5552b;  */

undefined4 FUN_10ae55180(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  byte **ppbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  
  ppbVar7 = &pbStack_70;
  iVar1 = *param_2;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      pbVar19 = *(byte **)(*(int **)(param_1 + 8) + 2);
      iVar1 = **(int **)(param_1 + 8);
      uVar17 = (ulong)iVar1;
      pbVar6 = *(byte **)(*(int **)(param_2 + 2) + 2);
      iVar4 = **(int **)(param_2 + 2);
      uVar12 = (ulong)iVar4;
      if (iVar1 == 0) {
        return 0x35;
      }
      pbVar11 = pbVar19;
      pbStack_70 = pbVar6;
      uStack_68 = uVar12;
      _memchr(pbVar19,0x40,uVar17);
      if (pbVar11 == (byte *)0x0) {
        return 0x35;
      }
      uVar20 = (long)pbVar11 - (long)pbVar19;
      uVar15 = uVar17 - uVar20;
      if (uVar17 < uVar20) {
        return 0x35;
      }
      pbVar11 = pbVar19 + uVar20;
      pbStack_60 = pbVar11;
      uStack_58 = uVar15;
      if (iVar4 == 0) {
        uVar12 = 0;
      }
      else {
        pbVar9 = pbVar6;
        _memchr(pbVar6,0x40,uVar12);
        if ((pbVar9 == (byte *)0x0) || (uVar13 = (long)pbVar9 - (long)pbVar6, uVar12 < uVar13)) {
          if (*pbVar6 == 0x2e) {
            if (uVar15 < uVar12) {
              return 0x2f;
            }
            pbVar6 = pbVar11 + (uVar15 - uVar12);
            goto LAB_10ae55200;
          }
        }
        else {
          if (pbVar9 != pbVar6) {
            if (uVar13 != uVar20) {
              return 0x2f;
            }
            bVar14 = 0;
            pbVar9 = pbVar6;
            uVar16 = uVar20;
            do {
              bVar14 = *pbVar19 ^ *pbVar9 | bVar14;
              uVar16 = uVar16 - 1;
              pbVar9 = pbVar9 + 1;
              pbVar19 = pbVar19 + 1;
            } while (uVar16 != 0);
            if (bVar14 != 0) {
              return 0x2f;
            }
          }
          pbVar6 = pbVar6 + uVar13;
          bVar5 = uVar13 != uVar12;
          uVar13 = ~uVar13 + uVar12;
          uVar12 = 0;
          if (bVar5) {
            pbVar6 = pbVar6 + 1;
            uVar12 = uVar13;
          }
        }
      }
      if (uVar17 != uVar20) {
        pbStack_60 = pbVar11 + 1;
        uStack_58 = uVar15 - 1;
      }
      ppbVar7 = &pbStack_60;
      goto LAB_10ae554f8;
    }
    if (iVar1 != 2) {
      return 0x33;
    }
    pbVar6 = *(byte **)(*(uint **)(param_1 + 8) + 2);
    uVar2 = **(uint **)(param_1 + 8);
    uVar12 = (ulong)(int)uVar2;
    pbStack_60 = *(byte **)(*(uint **)(param_2 + 2) + 2);
    uVar3 = **(uint **)(param_2 + 2);
    uStack_58 = (ulong)(int)uVar3;
    if (uVar3 == 0) {
      return 0;
    }
    if (*pbStack_60 != 0x2e) {
      if (uVar3 < uVar2) {
        if (uVar12 < ~uStack_58 + uVar12) {
          return 0x2f;
        }
        pbVar19 = pbVar6 + ~uStack_58 + uVar12;
        pbVar6 = pbVar19 + 1;
        uVar12 = uStack_58;
        if (*pbVar19 != 0x2e) {
          return 0x2f;
        }
      }
      ppbVar7 = &pbStack_60;
      goto LAB_10ae554f8;
    }
    if (uVar2 < uVar3) {
      return 0x2f;
    }
    pbVar6 = pbVar6 + (uVar12 - uStack_58);
    ppbVar7 = &pbStack_60;
    uVar12 = uStack_58;
    goto LAB_10ae55200;
  }
  if (iVar1 != 6) {
    if (iVar1 != 4) {
      return 0x33;
    }
    pbVar6 = *(byte **)(param_1 + 8);
    pbVar19 = *(byte **)(param_2 + 2);
    if (*(int *)(pbVar6 + 8) != 0) {
      ppbVar7 = &pbStack_60;
      pbStack_60 = pbVar6;
      func_0x000107c34f30(ppbVar7,0,&DAT_110c87418,0xffffffff,0,0);
      if ((int)ppbVar7 < 0) {
        return 0x11;
      }
    }
    if (*(int *)(pbVar19 + 8) != 0) {
      ppbVar7 = &pbStack_60;
      pbStack_60 = pbVar19;
      func_0x000107c34f30(ppbVar7,0,&DAT_110c87418,0xffffffff,0,0);
      if ((int)ppbVar7 < 0) {
        return 0x11;
      }
    }
    if (*(int *)(pbVar6 + 0x20) < *(int *)(pbVar19 + 0x20)) {
      return 0x2f;
    }
    if (*(int *)(pbVar19 + 0x20) == 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(pbVar19 + 0x18);
    _memcmp(uVar8,*(undefined8 *)(pbVar6 + 0x18));
    if ((int)uVar8 == 0) {
      return 0;
    }
    return 0x2f;
  }
  lVar18 = *(long *)(*(int **)(param_1 + 8) + 2);
  iVar1 = **(int **)(param_1 + 8);
  uVar17 = (ulong)iVar1;
  pbVar6 = *(byte **)(*(int **)(param_2 + 2) + 2);
  iVar4 = **(int **)(param_2 + 2);
  uVar12 = (ulong)iVar4;
  if (iVar1 == 0) {
    return 0x35;
  }
  lVar10 = lVar18;
  pbStack_60 = pbVar6;
  uStack_58 = uVar12;
  _memchr(lVar18,0x3a,uVar17);
  if (lVar10 == 0) {
    return 0x35;
  }
  uVar15 = lVar10 - lVar18;
  if (uVar17 <= uVar15) {
    return 0x35;
  }
  lVar10 = ~uVar15 + uVar17;
  if (lVar10 == 0) {
    return 0x35;
  }
  if (lVar10 == 1) {
    return 0x35;
  }
  lVar18 = lVar18 + uVar15;
  if (*(char *)(lVar18 + 1) != '/') {
    return 0x35;
  }
  if (*(char *)(lVar18 + 2) != '/') {
    return 0x35;
  }
  pbVar19 = (byte *)(lVar18 + 3);
  uVar17 = lVar10 - 2;
  if (uVar17 == 0) {
LAB_10ae55400:
    uStack_68 = uVar17;
  }
  else {
    pbVar11 = pbVar19;
    _memchr(pbVar19,0x3a,uVar17);
    uStack_68 = (long)pbVar11 - (long)pbVar19;
    if ((pbVar11 == (byte *)0x0 || uVar17 < (ulong)((long)pbVar11 - (long)pbVar19)) &&
       ((pbVar11 = pbVar19, _memchr(pbVar19,0x2f,uVar17), pbVar11 == (byte *)0x0 ||
        (uStack_68 = (long)pbVar11 - (long)pbVar19, uVar17 < (ulong)((long)pbVar11 - (long)pbVar19))
        ))) goto LAB_10ae55400;
  }
  if (uStack_68 == 0) {
    return 0x35;
  }
  ppbVar7 = &pbStack_70;
  pbStack_70 = pbVar19;
  if ((iVar4 == 0) || (ppbVar7 = &pbStack_70, *pbVar6 != 0x2e)) {
LAB_10ae554f8:
    FUN_10ae5552c(pbVar6,uVar12,ppbVar7);
    if ((int)pbVar6 == 0) {
      return 0x2f;
    }
    return 0;
  }
  if (uStack_68 < uVar12) {
    return 0x2f;
  }
  pbVar6 = pbVar19 + (uStack_68 - uVar12);
  ppbVar7 = &pbStack_60;
LAB_10ae55200:
  FUN_10ae5552c(pbVar6,uVar12,ppbVar7);
  if ((int)pbVar6 == 0) {
    return 0x2f;
  }
  return 0;
}



/* Entry: 10ae5552c; end: 10ae55593;  */

bool FUN_10ae5552c(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 != param_3[1]) {
    return false;
  }
  uVar2 = 0;
  do {
    uVar5 = uVar2;
    if (param_2 == uVar5) break;
    bVar1 = *(byte *)(param_1 + uVar5);
    uVar3 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar3 = (uint)bVar1;
    }
    bVar1 = *(byte *)(*param_3 + uVar5);
    uVar4 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar4 = (uint)bVar1;
    }
    uVar2 = uVar5 + 1;
  } while (uVar3 == uVar4);
  return param_2 <= uVar5;
}



/* Entry: 10ae55594; end: 10ae555fb;  */

bool FUN_10ae55594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  FUN_10ae1ec34(param_3,&UNK_10f61b339);
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    FUN_10ae1d808(param_3,param_2);
    bVar1 = (int)param_3 != 0;
  }
  return bVar1;
}



/* Entry: 10ae555fc; end: 10ae55637;  */

undefined8 FUN_10ae555fc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  func_0x000107c34f34(puVar2,&DAT_110c7b980,0);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 10ae55638; end: 10ae5563f;  */

undefined8 FUN_10ae55638(void)

{
  return 1;
}



/* Entry: 10ae55640; end: 10ae55dbb;  */

undefined8 FUN_10ae55640(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_10ae1ec34(param_3,&UNK_10f6cf6dd);
  if (*param_2 == 0) {
    FUN_10ae1ec34(param_3,&DAT_10f383b8d);
  }
  else {
    FUN_10ae1dec4(param_3);
  }
  func_0x000107c2b1d4(param_3,&DAT_10f68f57e,1);
  FUN_10ae1ec34(param_3,&UNK_10f6cf6f9);
  FUN_10ae1d5a0(param_3,*(undefined8 *)param_2[1]);
  func_0x000107c2b1d4(param_3,&DAT_10f68f57e,1);
  if ((*(long *)(param_2[1] + 8) != 0) && (*(long *)(*(long *)(param_2[1] + 8) + 8) != 0)) {
    FUN_10ae1ec34(param_3,&UNK_10f6cf70e);
  }
  return 1;
}



/* Entry: 10ae55dbc; end: 10ae55e0f;  */

undefined8 FUN_10ae55dbc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  FUN_10ae56d90(&UNK_10f6cf84b,*param_2,&uStack_28);
  FUN_10ae56d90(&UNK_10f6cf863,param_2[1],&uStack_28);
  return uStack_28;
}



/* Entry: 10ae55e10; end: 10ae55fab;  */

long * FUN_10ae55e10(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  long **pplVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plStack_58;
  
  plStack_58 = (long *)0x0;
  pplVar2 = &plStack_58;
  func_0x000107c34f34(pplVar2,&DAT_110c89888,0);
  plVar1 = plStack_58;
  if ((int)pplVar2 == 0 || plStack_58 == (long *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf87a,0x71);
  }
  else {
    if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
      uVar7 = 0;
      do {
        lVar5 = *(long *)(param_3[1] + uVar7 * 8);
        uVar6 = *(undefined8 *)(lVar5 + 8);
        uVar3 = uVar6;
        _strcmp(uVar6,&DAT_10f6cf820);
        plVar4 = plVar1;
        if ((int)uVar3 != 0) {
          _strcmp(uVar6,&DAT_10f6cf836);
          if ((int)uVar6 != 0) {
            func_0x000107c2b29c(0x14,0,0x7b,&UNK_10f6cf87a,0x7d);
            func_0x000107c2b2a0(6);
            goto LAB_10ae55f70;
          }
          plVar4 = plVar1 + 1;
        }
        FUN_10ae56f70(lVar5,plVar4);
        if ((int)lVar5 == 0) goto LAB_10ae55f70;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *param_3);
    }
    if (plVar1[1] != 0) {
      return plVar1;
    }
    if (*plVar1 != 0) {
      return plVar1;
    }
    func_0x000107c2b29c(0x14,0,0x75,&UNK_10f6cf87a,0x83);
LAB_10ae55f70:
    plStack_58 = plVar1;
    func_0x000107c2b1bc(&plStack_58,&DAT_110c89888,0);
  }
  return (long *)0x0;
}



/* Entry: 10ae55fac; end: 10ae5607f;  */

ulong * FUN_10ae55fac(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  long **pplVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plStack_138;
  ulong *puStack_e0;
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = param_3;
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar8 = 0;
    do {
      puVar9 = *(undefined8 **)(param_2[1] + uVar8 * 8);
      func_0x00010ae4599c(auStack_88,0x50,*puVar9,0);
      func_0x00010ae4599c(auStack_d8,0x50,puVar9[1],0);
      puVar1 = auStack_d8;
      _strlen(puVar1);
      FUN_10ae5686c(auStack_88,auStack_d8,puVar1,0,&puStack_e0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puStack_e0;
  }
  puVar5 = puStack_e0;
  ___stack_chk_fail();
  puVar2 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar2 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf938,0x7b);
  }
  else if ((puVar5 != (ulong *)0x0) && (*puVar5 != 0)) {
    uVar8 = 0;
    do {
      lVar11 = *(long *)(puVar5[1] + uVar8 * 8);
      if ((*(long *)(lVar11 + 0x10) == 0) || (lVar3 = *(long *)(lVar11 + 8), lVar3 == 0)) {
        uVar8 = *puVar2;
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            plVar7 = *(long **)(puVar2[1] + uVar10 * 8);
            if (plVar7 != (long *)0x0) {
              plStack_138 = plVar7;
              func_0x000107c2b1bc(&plStack_138,&DAT_110c89a68,0);
              uVar8 = *puVar2;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
        func_0x000107c2b534(puVar2[1]);
        func_0x000107c2b534(puVar2);
        uVar6 = 0x83;
LAB_10ae56248:
        func_0x000107c2b29c(0x14,0,0x81,&UNK_10f6cf938,uVar6);
        func_0x000107c2b2a0(6);
        return (ulong *)0x0;
      }
      FUN_10ae45864(lVar3,0);
      lVar11 = *(long *)(lVar11 + 0x10);
      FUN_10ae45864(lVar11,0);
      if (lVar3 == 0 || lVar11 == 0) {
        uVar8 = *puVar2;
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            plVar7 = *(long **)(puVar2[1] + uVar10 * 8);
            if (plVar7 != (long *)0x0) {
              plStack_138 = plVar7;
              func_0x000107c2b1bc(&plStack_138,&DAT_110c89a68,0);
              uVar8 = *puVar2;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
        func_0x000107c2b534(puVar2[1]);
        func_0x000107c2b534(puVar2);
        uVar6 = 0x8b;
        goto LAB_10ae56248;
      }
      plStack_138 = (long *)0x0;
      pplVar4 = &plStack_138;
      func_0x000107c34f34(pplVar4,&DAT_110c89a68,0);
      if (((int)pplVar4 == 0) || (plStack_138 == (long *)0x0)) {
        uVar8 = *puVar2;
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            plVar7 = *(long **)(puVar2[1] + uVar10 * 8);
            if (plVar7 != (long *)0x0) {
              plStack_138 = plVar7;
              func_0x000107c2b1bc(&plStack_138,&DAT_110c89a68,0);
              uVar8 = *puVar2;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
        func_0x000107c2b534(puVar2[1]);
        func_0x000107c2b534(puVar2);
        func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf938,0x92);
        return (ulong *)0x0;
      }
      *plStack_138 = lVar3;
      plStack_138[1] = lVar11;
      func_0x000107c2b5ac(puVar2,plStack_138,*puVar2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar5);
  }
  return puVar2;
}



/* Entry: 10ae56080; end: 10ae56317;  */

ulong * FUN_10ae56080(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  long **pplVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_58;
  
  puVar1 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar1 == (ulong *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf938,0x7b);
  }
  else if ((param_3 != (ulong *)0x0) && (*param_3 != 0)) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(param_3[1] + uVar8 * 8);
      if ((*(long *)(lVar7 + 0x10) == 0) || (lVar2 = *(long *)(lVar7 + 8), lVar2 == 0)) {
        uVar8 = *puVar1;
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            plVar5 = *(long **)(puVar1[1] + uVar6 * 8);
            if (plVar5 != (long *)0x0) {
              plStack_58 = plVar5;
              func_0x000107c2b1bc(&plStack_58,&DAT_110c89a68,0);
              uVar8 = *puVar1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        func_0x000107c2b534(puVar1[1]);
        func_0x000107c2b534(puVar1);
        uVar4 = 0x83;
LAB_10ae56248:
        func_0x000107c2b29c(0x14,0,0x81,&UNK_10f6cf938,uVar4);
        func_0x000107c2b2a0(6);
        return (ulong *)0x0;
      }
      FUN_10ae45864(lVar2,0);
      lVar7 = *(long *)(lVar7 + 0x10);
      FUN_10ae45864(lVar7,0);
      if (lVar2 == 0 || lVar7 == 0) {
        uVar8 = *puVar1;
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            plVar5 = *(long **)(puVar1[1] + uVar6 * 8);
            if (plVar5 != (long *)0x0) {
              plStack_58 = plVar5;
              func_0x000107c2b1bc(&plStack_58,&DAT_110c89a68,0);
              uVar8 = *puVar1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        func_0x000107c2b534(puVar1[1]);
        func_0x000107c2b534(puVar1);
        uVar4 = 0x8b;
        goto LAB_10ae56248;
      }
      plStack_58 = (long *)0x0;
      pplVar3 = &plStack_58;
      func_0x000107c34f34(pplVar3,&DAT_110c89a68,0);
      if (((int)pplVar3 == 0) || (plStack_58 == (long *)0x0)) {
        uVar8 = *puVar1;
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            plVar5 = *(long **)(puVar1[1] + uVar6 * 8);
            if (plVar5 != (long *)0x0) {
              plStack_58 = plVar5;
              func_0x000107c2b1bc(&plStack_58,&DAT_110c89a68,0);
              uVar8 = *puVar1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        func_0x000107c2b534(puVar1[1]);
        func_0x000107c2b534(puVar1);
        func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cf938,0x92);
        return (ulong *)0x0;
      }
      *plStack_58 = lVar2;
      plStack_58[1] = lVar7;
      func_0x000107c2b5ac(puVar1,plStack_58,*puVar1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *param_3);
  }
  return puVar1;
}



/* Entry: 10ae56318; end: 10ae56347;  */

void FUN_10ae56318(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107c2b1bc(&uStack_18,&DAT_110c89a68,0);
  return;
}



/* Entry: 10ae56348; end: 10ae563b7;  */

uint FUN_10ae56348(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ulong *)(param_2 + 0x38);
  if (((uVar3 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0x48) >> 1 & 1) != 0)) {
    if (param_3 == 0) {
      if ((((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) & 0x88) != 0)) &&
         (((uVar3 >> 3 & 1) == 0 || (*(char *)(param_2 + 0x50) < '\0')))) {
        return 1;
      }
    }
    else if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 2 & 1) != 0)) {
      uVar1 = 0;
      if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
        uVar1 = uVar3 >> 4 & 1;
      }
      uVar2 = 1;
      if ((~uVar3 & 0x2040) != 0) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 10ae563b8; end: 10ae564a3;  */

void FUN_10ae563b8(void)

{
  func_0x000107c2b674();
  return;
}



/* Entry: 10ae564a4; end: 10ae56547;  */

uint FUN_10ae564a4(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ulong *)(param_2 + 0x38);
  if (param_3 == 0) {
    if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 1 & 1) != 0)) {
      return 1;
    }
  }
  else if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0x40) >> 2 & 1) != 0)) {
    uVar1 = 0;
    if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
      uVar1 = uVar3 >> 4 & 1;
    }
    uVar2 = 1;
    if ((~uVar3 & 0x2040) != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 10ae56548; end: 10ae5661b;  */

uint FUN_10ae56548(undefined8 param_1,long *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar3 = (uint)param_2[7];
  if (param_3 == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      if ((uVar3 >> 2 & 1) == 0) {
        return 0;
      }
    }
    else {
      if ((uVar3 >> 2 & 1) == 0) {
        return 0;
      }
      if (param_2[8] == 0) {
        return 0;
      }
      if ((param_2[8] & 0xffffffffffffff3fU) != 0) {
        return 0;
      }
    }
    if ((param_2[9] == 0x40) &&
       ((plVar2 = param_2, func_0x00010ae4b974(param_2,0x7e,0xffffffff), (int)plVar2 < 0 ||
        ((((puVar4 = *(ulong **)(*param_2 + 0x48), puVar4 != (ulong *)0x0 &&
           (((ulong)plVar2 & 0xffffffff) < *puVar4)) &&
          (lVar5 = *(long *)(puVar4[1] + ((ulong)plVar2 & 0xffffffff) * 8), lVar5 != 0)) &&
         (0 < *(int *)(lVar5 + 8))))))) {
      return 1;
    }
  }
  else if (((uVar3 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 8) >> 2 & 1) != 0)) {
    uVar1 = 0;
    if ((param_2[7] & 1U) != 0) {
      uVar1 = uVar3 >> 4 & 1;
    }
    if ((~uVar3 & 0x2040) != 0) {
      return uVar1;
    }
    return 1;
  }
  return 0;
}



/* Entry: 10ae5661c; end: 10ae56697;  */

uint FUN_10ae5661c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ulong *)(param_1 + 0x38);
  if (((uVar3 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0x48) >> 2 & 1) != 0)) {
    if (param_2 == 0) {
      if ((uVar3 >> 3 & 1) == 0) {
        return 1;
      }
      return *(uint *)(param_1 + 0x50) >> 5 & 1;
    }
    if ((((uVar3 >> 3 & 1) == 0) || ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0)) &&
       (((uVar3 >> 1 & 1) == 0 || ((*(byte *)(param_1 + 0x40) >> 2 & 1) != 0)))) {
      uVar1 = 0;
      if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
        uVar1 = uVar3 >> 4 & 1;
      }
      uVar2 = 1;
      if ((~uVar3 & 0x2040) != 0) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 10ae56698; end: 10ae5686b;  */

long * FUN_10ae56698(undefined8 param_1,int *param_2,long *param_3,int param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uStack_7c;
  undefined4 auStack_78 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = "hash";
  plVar1 = param_3;
  plVar9 = param_3;
  _strcmp();
  if ((int)plVar1 == 0) {
    plVar1 = (long *)0x4;
    func_0x000107c2b1ac();
    if (plVar1 == (long *)0x0) {
      param_5 = (long *)0x78;
      goto LAB_10ae5676c;
    }
    plVar2 = plVar1;
    if (param_2 == (int *)0x0) {
LAB_10ae567ec:
      plVar9 = (long *)0x90;
      param_5 = (long *)0x80;
LAB_10ae56804:
      param_4 = 0xf6cfa8a;
      pcVar7 = (char *)0x0;
      func_0x000107c2b29c(0x14);
    }
    else {
      if (*param_2 == 1) goto LAB_10ae5681c;
      plVar9 = *(long **)(param_2 + 6);
      if (plVar9 == (long *)0x0) {
        plVar9 = *(long **)(param_2 + 4);
        if (plVar9 == (long *)0x0) goto LAB_10ae567ec;
        lVar10 = 0x30;
      }
      else {
        lVar10 = 0x28;
      }
      piVar5 = *(int **)(*(long *)(*plVar9 + lVar10) + 8);
      if (piVar5 == (int *)0x0) {
        plVar9 = (long *)0x90;
        param_5 = (long *)0x8a;
        goto LAB_10ae56804;
      }
      iVar6 = (int)*(undefined8 *)(piVar5 + 2);
      pcVar7 = (char *)(long)*piVar5;
      param_5 = plVar1;
      func_0x000107c2b424();
      plVar9 = (long *)auStack_78;
      param_4 = (int)&uStack_7c;
      func_0x000107c2b408();
      if (iVar6 != 0) {
        plVar9 = (long *)(ulong)uStack_7c;
        pcVar7 = (char *)auStack_78;
        func_0x000107c2b1a4();
        if ((int)plVar2 != 0) goto LAB_10ae5681c;
        plVar9 = (long *)0x41;
        param_5 = (long *)0x93;
        goto LAB_10ae56804;
      }
    }
    func_0x000107c2b534(plVar1[1]);
    plVar2 = plVar1;
LAB_10ae56810:
    func_0x000107c2b534();
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)0x4;
    func_0x000107c2b1ac();
    if (plVar1 == (long *)0x0) {
      param_5 = (long *)0x5d;
LAB_10ae5676c:
      param_4 = 0xf6cfa8a;
      plVar9 = (long *)0x41;
      pcVar7 = (char *)0x0;
      plVar2 = (long *)0x14;
      func_0x000107c2b29c();
    }
    else {
      pcVar7 = (char *)auStack_78;
      func_0x00010ae57454();
      plVar1[1] = (long)param_3;
      plVar2 = plVar1;
      if (param_3 == (long *)0x0) goto LAB_10ae56810;
      *(undefined4 *)plVar1 = auStack_78[0];
      plVar2 = param_3;
    }
  }
LAB_10ae5681c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  lVar10 = *param_5;
  if (plVar2 == (long *)0x0) {
    plVar1 = (long *)0x0;
    if (param_4 != 0) goto LAB_10ae568a8;
LAB_10ae568fc:
    plVar2 = plVar1;
    if ((plVar9 != (long *)0x0) &&
       (plVar8 = (long *)pcVar7, _memchr(pcVar7,0,plVar9), plVar8 != (long *)0x0)) {
      func_0x000107c2b29c(0x14,0,0xa3,&UNK_10f6cfb0c,0x68);
      plVar9 = (long *)0x0;
      plVar8 = (long *)0x0;
      goto joined_r0x00010ae56938;
    }
    FUN_10ae4558c(pcVar7,plVar9);
    plVar8 = (long *)pcVar7;
    if ((long *)pcVar7 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto LAB_10ae56964;
    }
LAB_10ae568ac:
    FUN_10ae22da0();
    plVar2 = plVar1;
    plVar9 = (long *)pcVar7;
    if ((long *)pcVar7 != (long *)0x0) {
      if (*param_5 == 0) {
        lVar3 = 0;
        func_0x000107c2b59c();
        *param_5 = lVar3;
        if (lVar3 == 0) goto LAB_10ae56964;
      }
      *(long *)pcVar7 = 0;
      *(long **)((long)pcVar7 + 8) = plVar1;
      *(long **)((long)pcVar7 + 0x10) = plVar8;
      puVar4 = (undefined8 *)*param_5;
      func_0x000107c2b5ac(puVar4,pcVar7,*puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        return (long *)0x1;
      }
    }
  }
  else {
    func_0x000107c2b53c();
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2;
      if (param_4 == 0) goto LAB_10ae568fc;
LAB_10ae568a8:
      pcVar7 = (char *)plVar2;
      plVar8 = (long *)0x0;
      goto LAB_10ae568ac;
    }
    plVar9 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
LAB_10ae56964:
  func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0x7b);
joined_r0x00010ae56938:
  if (lVar10 == 0) {
    func_0x000107c2b5a4(*param_5);
    *param_5 = 0;
  }
  func_0x000107c2b534(plVar9);
  func_0x000107c2b534(plVar2);
  func_0x000107c2b534(plVar8);
  return (long *)0x0;
}



/* Entry: 10ae5686c; end: 10ae569bf;  */

undefined8
FUN_10ae5686c(undefined8 *param_1,undefined8 *param_2,long param_3,int param_4,long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_5;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    if (param_4 != 0) goto LAB_10ae568a8;
LAB_10ae568fc:
    param_1 = puVar2;
    if ((param_3 != 0) &&
       (puVar3 = param_2, _memchr(param_2,0,param_3), puVar3 != (undefined8 *)0x0)) {
      func_0x000107c2b29c(0x14,0,0xa3,&UNK_10f6cfb0c,0x68);
      param_2 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x0;
      goto joined_r0x00010ae56938;
    }
    FUN_10ae4558c(param_2,param_3);
    puVar3 = param_2;
    if (param_2 == (undefined8 *)0x0) {
      param_2 = (undefined8 *)0x0;
      goto LAB_10ae56964;
    }
LAB_10ae568ac:
    FUN_10ae22da0();
    param_1 = puVar2;
    if (param_2 != (undefined8 *)0x0) {
      if (*param_5 == 0) {
        lVar1 = 0;
        func_0x000107c2b59c();
        *param_5 = lVar1;
        if (lVar1 == 0) goto LAB_10ae56964;
      }
      *param_2 = 0;
      param_2[1] = puVar2;
      param_2[2] = puVar3;
      puVar2 = (undefined8 *)*param_5;
      func_0x000107c2b5ac(puVar2,param_2,*puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        return 1;
      }
    }
  }
  else {
    func_0x000107c2b53c();
    if (param_1 != (undefined8 *)0x0) {
      puVar2 = param_1;
      if (param_4 == 0) goto LAB_10ae568fc;
LAB_10ae568a8:
      param_2 = param_1;
      puVar3 = (undefined8 *)0x0;
      goto LAB_10ae568ac;
    }
    param_2 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x0;
  }
LAB_10ae56964:
  func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0x7b);
joined_r0x00010ae56938:
  if (lVar4 == 0) {
    func_0x000107c2b5a4(*param_5);
    *param_5 = 0;
  }
  func_0x000107c2b534(param_2);
  func_0x000107c2b534(param_1);
  func_0x000107c2b534(puVar3);
  return 0;
}



/* Entry: 10ae569c0; end: 10ae56a0b;  */

/* WARNING: Possible PIC construction at 0x00010ae569dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae569f4: Changing call to branch */

void FUN_10ae569c0(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if ((long *)param_1[1] == (long *)0x0) {
    if (param_1[2] != 0) {
      func_0x000107c2b534();
    }
    plVar2 = param_1;
    if ((long *)*param_1 != (long *)0x0) {
      unaff_x30 = 0x10ae569f8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar2 = (long *)*param_1;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
    }
  }
  else {
    unaff_x30 = 0x10ae569e0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar2 = (long *)param_1[1];
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



/* Entry: 10ae56a0c; end: 10ae56a3b;  */

/* WARNING: Removing unreachable block (ram,0x00010ae568a8) */

undefined8 FUN_10ae56a0c(long param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)&UNK_10f6cfb06;
    lVar2 = 5;
  }
  else {
    puVar3 = (undefined8 *)&UNK_10f6cfb01;
    lVar2 = 4;
  }
  lVar5 = *param_3;
  if (param_1 == 0) {
    param_1 = 0;
LAB_10ae568fc:
    if ((lVar2 != 0) && (puVar4 = puVar3, _memchr(puVar3,0,lVar2), puVar4 != (undefined8 *)0x0)) {
      func_0x000107c2b29c(0x14,0,0xa3,&UNK_10f6cfb0c,0x68);
      puVar4 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x0;
      goto joined_r0x00010ae56938;
    }
    FUN_10ae4558c(puVar3,lVar2);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = puVar3;
      FUN_10ae22da0();
      if (puVar4 != (undefined8 *)0x0) {
        if (*param_3 == 0) {
          lVar2 = 0;
          func_0x000107c2b59c();
          *param_3 = lVar2;
          if (lVar2 == 0) goto LAB_10ae56964;
        }
        *puVar4 = 0;
        puVar4[1] = param_1;
        puVar4[2] = puVar3;
        puVar1 = (undefined8 *)*param_3;
        func_0x000107c2b5ac(puVar1,puVar4,*puVar1);
        if (puVar1 != (undefined8 *)0x0) {
          return 1;
        }
      }
    }
  }
  else {
    func_0x000107c2b53c();
    if (param_1 != 0) goto LAB_10ae568fc;
    puVar4 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x0;
  }
LAB_10ae56964:
  func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0x7b);
joined_r0x00010ae56938:
  if (lVar5 == 0) {
    func_0x000107c2b5a4(*param_3);
    *param_3 = 0;
  }
  func_0x000107c2b534(puVar4);
  func_0x000107c2b534(param_1);
  func_0x000107c2b534(puVar3);
  return 0;
}



/* Entry: 10ae56a3c; end: 10ae56ab3;  */

long FUN_10ae56a3c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_10ae1d4e0(param_2,0,10);
    if ((param_2 == 0) || (lVar1 = param_2, FUN_10ae56ab4(), lVar1 == 0)) {
      func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0xe9);
      lVar1 = 0;
    }
    func_0x000107c2b31c(param_2);
  }
  return lVar1;
}



/* Entry: 10ae56ab4; end: 10ae56bbb;  */

ulong * FUN_10ae56ab4(long *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uStack_90;
  ulong *puStack_88;
  undefined1 auStack_80 [32];
  
  plVar11 = param_1;
  func_0x000107c2b32c();
  if (0x1f < (uint)plVar11) {
    FUN_10ae1ee68();
    if (param_1 != (long *)0x0) {
      plVar11 = param_1;
      _strlen();
      pcVar1 = (char *)((long)plVar11 + 3);
      if (pcVar1 < (char *)0xfffffffffffffff8) {
        puVar7 = (ulong *)((long)plVar11 + 0xb);
        _malloc();
        if (puVar7 != (ulong *)0x0) {
          puVar12 = puVar7 + 1;
          *puVar7 = (ulong)pcVar1;
          if ((char)*param_1 == '-') {
            FUN_10ae45668(puVar12,&UNK_10f6cfbbe,pcVar1);
            plVar11 = (long *)((long)param_1 + 1);
          }
          else {
            FUN_10ae45668(puVar12,&UNK_10f6cfbc2,pcVar1);
            plVar11 = param_1;
          }
          func_0x00010ae456dc(puVar12,plVar11,pcVar1);
          func_0x000107c2b534(param_1);
          return puVar12;
        }
      }
      func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0xd0);
      func_0x000107c2b534(param_1);
    }
    return (ulong *)0x0;
  }
  puVar5 = auStack_80;
  func_0x000107c2b200(puVar5,0x10);
  if ((int)puVar5 == 0) {
LAB_10ae1f310:
    plVar11 = (long *)0x0;
  }
  else {
    puVar5 = auStack_80;
    func_0x000107c2b218(puVar5,0);
    if ((int)puVar5 == 0) goto LAB_10ae1f310;
    lVar8 = (long)(int)param_1[1];
    if ((int)param_1[1] == 0) {
LAB_10ae1f364:
      puVar5 = auStack_80;
      func_0x000107c2b218(puVar5,0x30);
      plVar11 = (long *)0x0;
      if ((int)puVar5 != 0) goto LAB_10ae1f378;
    }
    else {
      uVar10 = 0;
      puVar7 = (ulong *)*param_1;
      do {
        uVar10 = *puVar7 | uVar10;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
      if (uVar10 == 0) goto LAB_10ae1f364;
      plVar11 = param_1;
      FUN_10ae2e1dc();
      if (plVar11 == (long *)0x0) goto LAB_10ae1f330;
      iVar9 = (int)plVar11[1];
      while (iVar9 != 0) {
        while( true ) {
          uVar10 = 0;
          lVar8 = (long)iVar9;
          puVar7 = (ulong *)*plVar11;
          do {
            uVar10 = *puVar7 | uVar10;
            lVar8 = lVar8 + -1;
            puVar7 = puVar7 + 1;
          } while (lVar8 != 0);
          if (uVar10 == 0) goto LAB_10ae1f378;
          plVar6 = plVar11;
          FUN_10ae2ec34(plVar11,10000000000000000000);
          if (plVar6 == (long *)0xffffffffffffffff) goto LAB_10ae1f330;
          iVar9 = (int)plVar11[1];
          if (iVar9 == 0) {
            bVar4 = false;
          }
          else {
            uVar10 = 0;
            lVar8 = (long)iVar9;
            puVar7 = (ulong *)*plVar11;
            do {
              uVar10 = *puVar7 | uVar10;
              lVar8 = lVar8 + -1;
              puVar7 = puVar7 + 1;
            } while (lVar8 != 0);
            bVar4 = uVar10 != 0;
          }
          bVar3 = bVar4;
          if ((plVar6 != (long *)0x0) || (bVar3 = true, bVar4)) break;
          if (iVar9 == 0) goto LAB_10ae1f378;
        }
        uVar13 = 0;
        do {
          puVar5 = auStack_80;
          func_0x000107c2b218(puVar5,(int)plVar6 + (int)(long *)((ulong)plVar6 / 10) * -10 & 0xffU |
                                     0x30);
          if ((int)puVar5 == 0) goto LAB_10ae1f314;
          bVar4 = bVar3;
          if ((long *)0x9 < plVar6) {
            bVar4 = true;
          }
        } while ((uVar13 < 0x12) &&
                (uVar13 = uVar13 + 1, plVar6 = (long *)((ulong)plVar6 / 10), bVar4));
        iVar9 = (int)plVar11[1];
      }
LAB_10ae1f378:
      if ((int)param_1[2] != 0) {
        puVar5 = auStack_80;
        func_0x000107c2b218(puVar5,0x2d);
        if ((int)puVar5 == 0) goto LAB_10ae1f314;
      }
      puVar5 = auStack_80;
      func_0x000107c2b208(puVar5,&puStack_88,&uStack_90);
      if ((int)puVar5 != 0) {
        if (1 < uStack_90) {
          uVar10 = 0;
          lVar8 = -1;
          do {
            uVar2 = *(undefined1 *)((long)puStack_88 + uVar10);
            *(undefined1 *)((long)puStack_88 + uVar10) =
                 *(undefined1 *)((long)puStack_88 + lVar8 + uStack_90);
            *(undefined1 *)((long)puStack_88 + lVar8 + uStack_90) = uVar2;
            uVar10 = uVar10 + 1;
            lVar8 = lVar8 + -1;
          } while (uVar10 < uStack_90 >> 1);
        }
        func_0x000107c2b31c(plVar11);
        return puStack_88;
      }
    }
  }
LAB_10ae1f314:
  func_0x000107c2b29c(3,0,0x41,&UNK_10f6c543b,0x131);
LAB_10ae1f330:
  func_0x000107c2b31c(plVar11);
  func_0x000107c2b204(auStack_80);
  return (ulong *)0x0;
}



/* Entry: 10ae56bbc; end: 10ae56d8f;  */

long FUN_10ae56bbc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_10ae1d4e0(param_2,0,2);
    if ((param_2 == 0) || (lVar1 = param_2, FUN_10ae56ab4(), lVar1 == 0)) {
      func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0xf6);
      lVar1 = 0;
    }
    func_0x000107c2b31c(param_2);
  }
  return lVar1;
}



/* Entry: 10ae56d90; end: 10ae56f6f;  */

void FUN_10ae56d90(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != 0) && (lVar1 = param_1, FUN_10ae56bbc(), lVar1 != 0)) {
    lVar2 = lVar1;
    _strlen();
    FUN_10ae5686c(param_1,lVar1,lVar2,0,param_3);
    func_0x000107c2b534(lVar1);
  }
  return;
}



/* Entry: 10ae56f70; end: 10ae56fe7;  */

bool FUN_10ae56f70(long param_1,long *param_2)

{
  func_0x00010ae56c34(param_1,*(undefined8 *)(param_1 + 0x10));
  if (param_1 == 0) {
    func_0x000107c2b2a0(6);
  }
  else {
    *param_2 = param_1;
  }
  return param_1 != 0;
}



/* Entry: 10ae56fe8; end: 10ae5728f;  */

ulong * FUN_10ae56fe8(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  ulong *puStack_58;
  
  puStack_58 = (ulong *)0x0;
  func_0x000107c2b53c();
  if (param_1 == (byte *)0x0) {
    func_0x000107c2b29c(0x14,0,0x41,&UNK_10f6cfb0c,0x16b);
    puVar3 = (ulong *)0x0;
  }
  else {
    pbVar11 = (byte *)0x0;
    iVar12 = 1;
    pbVar2 = param_1;
    pbVar5 = param_1;
    pbVar4 = param_1;
    while( true ) {
      uVar8 = (uint)*pbVar4;
      if (*pbVar4 < 0xe && (1 << (ulong)(uVar8 & 0x1f) & 0x2401U) != 0) break;
      if (iVar12 == 1) {
        if (uVar8 == 0x2c) {
          *pbVar4 = 0;
          FUN_10ae57290();
          if (pbVar2 == (byte *)0x0) {
            uVar6 = 0x7d;
            uVar7 = 0x187;
            goto LAB_10ae57220;
          }
          iVar12 = 1;
          FUN_10ae5686c();
          pbVar11 = pbVar2;
          pbVar2 = pbVar5 + 1;
        }
        else {
          if (uVar8 == 0x3a) {
            *pbVar4 = 0;
            FUN_10ae57290();
            if (pbVar2 != (byte *)0x0) {
              pbVar11 = pbVar2;
              pbVar2 = pbVar5 + 1;
              goto LAB_10ae570c4;
            }
            uVar6 = 0x7d;
            uVar7 = 0x17b;
            goto LAB_10ae57220;
          }
          iVar12 = 1;
        }
      }
      else if (uVar8 == 0x2c) {
        *pbVar4 = 0;
        FUN_10ae57290();
        if (pbVar2 == (byte *)0x0) {
          uVar6 = 0x7e;
          uVar7 = 0x197;
          goto LAB_10ae57220;
        }
        pbVar1 = pbVar2;
        _strlen();
        FUN_10ae5686c(pbVar11,pbVar2,pbVar1,0,&puStack_58);
        pbVar11 = (byte *)0x0;
        iVar12 = 1;
        pbVar2 = pbVar4 + 1;
      }
      else {
LAB_10ae570c4:
        iVar12 = 2;
      }
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    }
    FUN_10ae57290();
    if (iVar12 == 2) {
      if (pbVar2 != (byte *)0x0) {
        pbVar5 = pbVar2;
        _strlen(pbVar2);
        uVar6 = 0;
        pbVar4 = pbVar2;
LAB_10ae57184:
        FUN_10ae5686c(pbVar11,pbVar4,pbVar5,uVar6,&puStack_58);
        func_0x000107c2b534(param_1);
        return puStack_58;
      }
      uVar6 = 0x7e;
      uVar7 = 0x1a8;
    }
    else {
      if (pbVar2 != (byte *)0x0) {
        pbVar4 = (byte *)0x0;
        pbVar5 = (byte *)0x0;
        uVar6 = 1;
        pbVar11 = pbVar2;
        goto LAB_10ae57184;
      }
      uVar6 = 0x7d;
      uVar7 = 0x1b2;
    }
LAB_10ae57220:
    func_0x000107c2b29c(0x14,0,uVar6,&UNK_10f6cfb0c,uVar7);
    puVar3 = puStack_58;
    func_0x000107c2b534(param_1);
    if (puVar3 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar9 = *puVar3;
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if (*(long *)(puVar3[1] + uVar10 * 8) != 0) {
          FUN_10ae569c0();
          uVar9 = *puVar3;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
    func_0x000107c2b534(puVar3[1]);
  }
  func_0x000107c2b534(puVar3);
  return (ulong *)0x0;
}



/* Entry: 10ae57290; end: 10ae57623;  */

byte * FUN_10ae57290(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    uVar5 = (ulong)bVar1;
    if ((char)bVar1 < '\0') {
      ___maskrune(uVar5,0x4000);
      uVar4 = (uint)uVar5;
    }
    else {
      uVar4 = *(uint *)(puVar3 + uVar5 * 4 + 0x3c) & 0x4000;
    }
    if (uVar4 == 0) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  if (*param_1 == 0) {
    return (byte *)0x0;
  }
  pbVar6 = param_1;
  _strlen();
  do {
    pbVar2 = pbVar6 + -1;
    if (pbVar2 == (byte *)0x0) goto LAB_10ae57338;
    bVar1 = (param_1 + (long)pbVar6)[-1];
    if ((long)(char)bVar1 < 0) {
      uVar4 = (uint)bVar1;
      ___maskrune(bVar1,0x4000);
    }
    else {
      uVar4 = *(uint *)(puVar3 + (long)(char)bVar1 * 4 + 0x3c) & 0x4000;
    }
    pbVar6 = pbVar2;
  } while (uVar4 != 0);
  (param_1 + (long)pbVar2)[1] = 0;
LAB_10ae57338:
  pbVar6 = (byte *)0x0;
  if (*param_1 != 0) {
    pbVar6 = param_1;
  }
  return pbVar6;
}



/* Entry: 10ae57624; end: 10ae576ff;  */

bool FUN_10ae57624(char *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar3 = param_2 - (ulong)(param_1[param_2 + -1] == '.');
    if (1 < uVar3) {
      if ((*param_1 != '*') || (param_1[1] != '.')) goto LAB_10ae57668;
      param_1 = param_1 + 2;
      uVar3 = uVar3 - 2;
    }
    if (uVar3 != 0) {
LAB_10ae57668:
      bVar2 = false;
      uVar4 = 0;
      uVar5 = 0;
      do {
        bVar1 = param_1[uVar4];
        if (9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) {
          if (bVar1 < 0x3a) {
            if (bVar1 == 0x2d) {
              if (uVar4 <= uVar5) {
                return bVar2;
              }
            }
            else {
              if ((bVar1 != 0x2e || uVar3 - 1 <= uVar4) || uVar4 <= uVar5) {
                return bVar2;
              }
              uVar5 = uVar4 + 1;
            }
          }
          else if ((bVar1 != 0x3a) && (bVar1 != 0x5f)) {
            return bVar2;
          }
        }
        uVar4 = uVar4 + 1;
        bVar2 = uVar3 <= uVar4;
        if (uVar3 == uVar4) {
          return bVar2;
        }
      } while( true );
    }
  }
  return false;
}



/* Entry: 10ae57700; end: 10ae57787;  */

undefined8 FUN_10ae57700(long *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong *puStack_68;
  
  if ((param_2 == 0) ||
     ((param_3 != 0 && (lVar6 = param_2, _memchr(param_2,0,param_3), lVar6 != 0)))) {
    return 0xfffffffe;
  }
  pcVar1 = FUN_10ae58068;
  if ((param_4 & 2) != 0) {
    pcVar1 = FUN_10ae58000;
  }
  puVar2 = *(ulong **)(*param_1 + 0x48);
  func_0x000107c2b664(puVar2,0x55,0,0);
  if (puVar2 == (ulong *)0x0) {
    if ((param_4 & 0x20) == 0) {
      plVar9 = *(long **)(*param_1 + 0x28);
      plVar10 = (long *)0xffffffff;
      do {
        lVar6 = 0xd;
        func_0x000107c2b554();
        if ((lVar6 == 0) ||
           (plVar4 = plVar9, func_0x000107c2b634(plVar9,lVar6,plVar10), (int)plVar4 < 0))
        goto LAB_10ae57950;
        if ((((plVar9 == (long *)0x0) || (puVar2 = (ulong *)*plVar9, puVar2 == (ulong *)0x0)) ||
            (*puVar2 <= ((ulong)plVar4 & 0xffffffff))) ||
           (lVar6 = *(long *)(puVar2[1] + ((ulong)plVar4 & 0xffffffff) * 8), lVar6 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar6 + 8);
        }
        FUN_10ae58370(uVar3,0xffffffff,pcVar1,param_4,2,param_2,param_3,param_5);
        plVar10 = plVar4;
      } while ((int)uVar3 == 0);
    }
    else {
LAB_10ae57950:
      uVar3 = 0;
    }
  }
  else {
    uVar5 = *puVar2;
    if (uVar5 != 0) {
      uVar8 = 0;
      do {
        piVar7 = *(int **)(puVar2[1] + uVar8 * 8);
        if (*piVar7 == 2) {
          uVar3 = *(undefined8 *)(piVar7 + 2);
          FUN_10ae58370(uVar3,0x16,pcVar1,param_4,2,param_2,param_3,param_5);
          if ((int)uVar3 != 0) goto LAB_10ae5795c;
          uVar5 = *puVar2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
    uVar3 = 0;
LAB_10ae5795c:
    puStack_68 = puVar2;
    func_0x000107c2b1bc(&puStack_68,&DAT_110c88d38,0);
  }
  return uVar3;
}



/* Entry: 10ae57788; end: 10ae57997;  */

undefined8
FUN_10ae57788(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong *puStack_68;
  
  pcVar4 = FUN_10ae58068;
  if ((param_4 & 2) != 0) {
    pcVar4 = FUN_10ae58000;
  }
  iVar10 = (int)param_5;
  bVar5 = iVar10 == 2;
  uVar15 = 0;
  if (bVar5) {
    uVar15 = 0xd;
  }
  uVar14 = 4;
  pcVar3 = FUN_10ae5832c;
  if (bVar5) {
    uVar14 = 0x16;
    pcVar3 = pcVar4;
  }
  bVar6 = iVar10 != 1;
  uVar1 = 0x30;
  if (bVar6) {
    uVar1 = uVar15;
  }
  uVar2 = 0x16;
  if (bVar6) {
    uVar2 = uVar14;
  }
  puVar7 = *(ulong **)(*param_1 + 0x48);
  pcVar4 = (code *)0x10ae57f30;
  if (bVar6) {
    pcVar4 = pcVar3;
  }
  func_0x000107c2b664(puVar7,0x55,0,0);
  if (puVar7 == (ulong *)0x0) {
    if (bVar6 && !bVar5 || (param_4 & 0x20) != 0) {
LAB_10ae57950:
      uVar8 = 0;
    }
    else {
      plVar17 = *(long **)(*param_1 + 0x28);
      plVar18 = (long *)0xffffffff;
      do {
        uVar11 = (ulong)uVar1;
        func_0x000107c2b554();
        if ((uVar11 == 0) ||
           (plVar9 = plVar17, func_0x000107c2b634(plVar17,uVar11,plVar18), (int)plVar9 < 0))
        goto LAB_10ae57950;
        if ((((plVar17 == (long *)0x0) || (puVar7 = (ulong *)*plVar17, puVar7 == (ulong *)0x0)) ||
            (*puVar7 <= ((ulong)plVar9 & 0xffffffff))) ||
           (lVar12 = *(long *)(puVar7[1] + ((ulong)plVar9 & 0xffffffff) * 8), lVar12 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(lVar12 + 8);
        }
        FUN_10ae58370(uVar8,0xffffffff,pcVar4,param_4,param_5,param_2,param_3,param_6);
        plVar18 = plVar9;
      } while ((int)uVar8 == 0);
    }
  }
  else {
    uVar11 = *puVar7;
    if (uVar11 != 0) {
      uVar16 = 0;
      do {
        piVar13 = *(int **)(puVar7[1] + uVar16 * 8);
        if (*piVar13 == iVar10) {
          uVar8 = *(undefined8 *)(piVar13 + 2);
          FUN_10ae58370(uVar8,uVar2,pcVar4,param_4,param_5,param_2,param_3,param_6);
          if ((int)uVar8 != 0) goto LAB_10ae5795c;
          uVar11 = *puVar7;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar11);
    }
    uVar8 = 0;
LAB_10ae5795c:
    puStack_68 = puVar7;
    func_0x000107c2b1bc(&puStack_68,&DAT_110c88d38,0);
  }
  return uVar8;
}



/* Entry: 10ae57998; end: 10ae57a0f;  */

/* WARNING: Removing unreachable block (ram,0x00010ae57820) */
/* WARNING: Removing unreachable block (ram,0x00010ae57814) */
/* WARNING: Removing unreachable block (ram,0x00010ae57808) */
/* WARNING: Removing unreachable block (ram,0x00010ae57800) */
/* WARNING: Removing unreachable block (ram,0x00010ae57804) */
/* WARNING: Removing unreachable block (ram,0x00010ae5780c) */
/* WARNING: Removing unreachable block (ram,0x00010ae5781c) */
/* WARNING: Removing unreachable block (ram,0x00010ae57834) */

undefined8 FUN_10ae57998(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puStack_68;
  
  if ((param_2 == 0) ||
     ((param_3 != 0 && (lVar5 = param_2, _memchr(param_2,0,param_3), lVar5 != 0)))) {
    return 0xfffffffe;
  }
  puVar1 = *(ulong **)(*param_1 + 0x48);
  func_0x000107c2b664(puVar1,0x55,0,0);
  if (puVar1 == (ulong *)0x0) {
    if ((param_4 & 0x20) == 0) {
      plVar8 = *(long **)(*param_1 + 0x28);
      plVar9 = (long *)0xffffffff;
      do {
        lVar5 = 0x30;
        func_0x000107c2b554();
        if ((lVar5 == 0) ||
           (plVar3 = plVar8, func_0x000107c2b634(plVar8,lVar5,plVar9), (int)plVar3 < 0))
        goto LAB_10ae57950;
        if ((((plVar8 == (long *)0x0) || (puVar1 = (ulong *)*plVar8, puVar1 == (ulong *)0x0)) ||
            (*puVar1 <= ((ulong)plVar3 & 0xffffffff))) ||
           (lVar5 = *(long *)(puVar1[1] + ((ulong)plVar3 & 0xffffffff) * 8), lVar5 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(lVar5 + 8);
        }
        FUN_10ae58370(uVar2,0xffffffff,0x10ae57f30,param_4,1,param_2,param_3,0);
        plVar9 = plVar3;
      } while ((int)uVar2 == 0);
    }
    else {
LAB_10ae57950:
      uVar2 = 0;
    }
  }
  else {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      uVar7 = 0;
      do {
        piVar6 = *(int **)(puVar1[1] + uVar7 * 8);
        if (*piVar6 == 1) {
          uVar2 = *(undefined8 *)(piVar6 + 2);
          FUN_10ae58370(uVar2,0x16,0x10ae57f30,param_4,1,param_2,param_3,0);
          if ((int)uVar2 != 0) goto LAB_10ae5795c;
          uVar4 = *puVar1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
    uVar2 = 0;
LAB_10ae5795c:
    puStack_68 = puVar1;
    func_0x000107c2b1bc(&puStack_68,&DAT_110c88d38,0);
  }
  return uVar2;
}



/* Entry: 10ae57a10; end: 10ae57a97;  */

undefined8 * FUN_10ae57a10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined8 auStack_138 [4];
  long lStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [2];
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  int iStack_7c;
  long lStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined8 *)0x0) {
LAB_10ae57a68:
    param_1 = (undefined8 *)0xfffffffe;
  }
  else {
    puVar5 = auStack_38;
    FUN_10ae57a98();
    if ((int)puVar5 == 0) goto LAB_10ae57a68;
    param_2 = auStack_38;
    FUN_10ae57788(param_1,param_2,(ulong)puVar5 & 0xffffffff,param_3,7,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10ae57a98;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  _strchr(param_2,0x3a);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = param_1;
    FUN_10ae57db8(param_1,param_2);
    uVar9 = 0;
    if ((int)puVar5 != 0) {
      uVar9 = 4;
    }
    puVar5 = (undefined8 *)(ulong)uVar9;
  }
  else {
    uStack_84 = -0x100000000;
    iStack_7c = 0;
    puVar5 = param_2;
    FUN_10ae22df4(param_2,0x3a,0,FUN_10ae584dc,&uStack_94);
    if ((int)puVar5 != 0) {
      uVar9 = (uint)uStack_84;
      uVar2 = uStack_84._4_4_;
      param_2 = (undefined8 *)(ulong)uStack_84._4_4_;
      unaff_x21 = (long)(int)(uint)uStack_84;
      if (uStack_84._4_4_ == 0xffffffff) {
        if ((uint)uStack_84 == 0x10) {
LAB_10ae57b64:
          param_1[1] = uStack_8c;
          *param_1 = uStack_94;
LAB_10ae57b6c:
          puVar5 = (undefined8 *)0x10;
          goto LAB_10ae57bb4;
        }
      }
      else if (((uint)uStack_84 != 0x10) && (iStack_7c < 4)) {
        if (iStack_7c == 2) {
          if ((uStack_84._4_4_ == 0) || ((uint)uStack_84 == uStack_84._4_4_)) goto LAB_10ae57b90;
        }
        else if (iStack_7c == 3) {
          if ((int)(uint)uStack_84 < 1) {
LAB_10ae57b90:
            if (uStack_84 < 0) goto LAB_10ae57b64;
            if (uStack_84._4_4_ == 0) {
              unaff_x22 = (undefined8 *)0x0;
            }
            else {
              _memcpy(param_1,&uStack_94,param_2);
              unaff_x22 = param_2;
            }
            param_1 = (undefined8 *)((long)param_1 + (long)unaff_x22);
            _bzero(param_1,0x10 - unaff_x21);
            if (uVar9 != uVar2) {
              _memcpy((undefined1 *)((long)param_1 + (0x10 - unaff_x21)),
                      (undefined1 *)((long)&uStack_94 + (long)unaff_x22),(long)(int)(uVar9 - uVar2))
              ;
            }
            goto LAB_10ae57b6c;
          }
        }
        else if ((uStack_84._4_4_ != 0) && ((uint)uStack_84 != uStack_84._4_4_)) goto LAB_10ae57b90;
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10ae57bb4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail(puVar5);
  pcStack_a8 = FUN_10ae57c24;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = auStack_d8;
  puStack_c0 = param_2;
  puStack_b8 = param_1;
  ppuStack_b0 = &puStack_50;
  FUN_10ae57a98(puVar6,puVar5);
  puVar5 = puVar6;
  if ((int)puVar6 == 0) {
LAB_10ae57c8c:
    puVar6 = param_2;
    puVar10 = (undefined8 *)0x0;
    puVar7 = puVar5;
  }
  else {
    puVar5 = (undefined8 *)0x4;
    func_0x000107c2b1ac();
    puVar7 = puVar5;
    puVar10 = puVar5;
    if ((puVar5 != (undefined8 *)0x0) &&
       (func_0x000107c2b1a4(puVar5,auStack_d8,puVar6), (int)puVar7 == 0)) {
      func_0x000107c2b534(puVar5[1]);
      func_0x000107c2b534();
      param_2 = puVar6;
      goto LAB_10ae57c8c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10ae57cc0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x2f;
  puVar8 = puVar7;
  puStack_110 = unaff_x22;
  lStack_108 = unaff_x21;
  puStack_100 = puVar6;
  puStack_f8 = puVar10;
  pppuStack_f0 = &ppuStack_b0;
  _strchr();
  puVar6 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar6 = puVar7;
    func_0x000107c2b53c();
    puVar10 = (undefined8 *)0x0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_10ae57d84;
    puVar1 = (undefined1 *)((long)puVar6 + ((long)puVar8 - (long)puVar7));
    *puVar1 = 0;
    iVar3 = (int)auStack_138;
    puVar5 = puVar6;
    FUN_10ae57a98();
    if (iVar3 != 0) {
      iVar4 = (int)auStack_138 + iVar3;
      puVar5 = (undefined8 *)(puVar1 + 1);
      FUN_10ae57a98();
      func_0x000107c2b534();
      if (iVar3 != iVar4) goto LAB_10ae57d80;
      puVar10 = (undefined8 *)0x4;
      func_0x000107c2b1ac();
      puVar6 = puVar10;
      if (puVar10 == (undefined8 *)0x0) goto LAB_10ae57d84;
      puVar5 = auStack_138;
      func_0x000107c2b1a4(puVar10,puVar5,iVar3 << 1);
      if ((int)puVar6 != 0) goto LAB_10ae57d84;
      func_0x000107c2b534(puVar10[1]);
      puVar6 = puVar10;
    }
    func_0x000107c2b534();
  }
LAB_10ae57d80:
  puVar10 = (undefined8 *)0x0;
LAB_10ae57d84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _sscanf(puVar5,&DAT_10f332542);
    if ((int)puVar5 == 4) {
      puVar5 = (undefined8 *)0x0;
      if ((((uStack_164 < 0x100) && (uStack_168 < 0x100)) && (uStack_16c < 0x100)) &&
         (uStack_170 < 0x100)) {
        *(char *)puVar6 = (char)uStack_164;
        *(char *)((long)puVar6 + 1) = (char)uStack_168;
        *(char *)((long)puVar6 + 2) = (char)uStack_16c;
        puVar5 = (undefined8 *)0x1;
        *(char *)((long)puVar6 + 3) = (char)uStack_170;
      }
    }
    else {
      puVar5 = (undefined8 *)0x0;
    }
    return puVar5;
  }
  return puVar10;
}



/* Entry: 10ae57a98; end: 10ae57c23;  */

undefined1 * FUN_10ae57a98(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  long unaff_x21;
  undefined1 *unaff_x22;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_f8 [32];
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _strchr(param_2,0x3a);
  if (puVar5 == (undefined1 *)0x0) {
    puVar4 = param_1;
    FUN_10ae57db8(param_1,param_2);
    uVar9 = 0;
    if ((int)puVar4 != 0) {
      uVar9 = 4;
    }
    puVar5 = (undefined1 *)(ulong)uVar9;
  }
  else {
    uStack_44 = -0x100000000;
    iStack_3c = 0;
    puVar5 = param_2;
    FUN_10ae22df4(param_2,0x3a,0,FUN_10ae584dc,&uStack_54);
    if ((int)puVar5 != 0) {
      uVar9 = (uint)uStack_44;
      uVar1 = uStack_44._4_4_;
      param_2 = (undefined1 *)(ulong)uStack_44._4_4_;
      unaff_x21 = (long)(int)(uint)uStack_44;
      if (uStack_44._4_4_ == 0xffffffff) {
        if ((uint)uStack_44 == 0x10) {
LAB_10ae57b64:
          param_1[1] = uStack_4c;
          *param_1 = uStack_54;
LAB_10ae57b6c:
          puVar5 = (undefined1 *)0x10;
          goto LAB_10ae57bb4;
        }
      }
      else if (((uint)uStack_44 != 0x10) && (iStack_3c < 4)) {
        if (iStack_3c == 2) {
          if ((uStack_44._4_4_ == 0) || ((uint)uStack_44 == uStack_44._4_4_)) goto LAB_10ae57b90;
        }
        else if (iStack_3c == 3) {
          if ((int)(uint)uStack_44 < 1) {
LAB_10ae57b90:
            if (uStack_44 < 0) goto LAB_10ae57b64;
            if (uStack_44._4_4_ == 0) {
              unaff_x22 = (undefined1 *)0x0;
            }
            else {
              _memcpy(param_1,&uStack_54,param_2);
              unaff_x22 = param_2;
            }
            param_1 = (undefined8 *)((long)param_1 + (long)unaff_x22);
            _bzero(param_1,0x10 - unaff_x21);
            if (uVar9 != uVar1) {
              _memcpy((undefined1 *)((long)param_1 + (0x10 - unaff_x21)),
                      (undefined1 *)((long)&uStack_54 + (long)unaff_x22),(long)(int)(uVar9 - uVar1))
              ;
            }
            goto LAB_10ae57b6c;
          }
        }
        else if ((uStack_44._4_4_ != 0) && ((uint)uStack_44 != uStack_44._4_4_)) goto LAB_10ae57b90;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10ae57bb4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail(puVar5);
  pcStack_68 = FUN_10ae57c24;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = auStack_98;
  puStack_80 = param_2;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10ae57a98(puVar6,puVar5);
  puVar5 = puVar6;
  if ((int)puVar6 == 0) {
LAB_10ae57c8c:
    puVar6 = param_2;
    puVar10 = (undefined1 *)0x0;
    puVar7 = puVar5;
  }
  else {
    puVar5 = (undefined1 *)0x4;
    func_0x000107c2b1ac();
    puVar7 = puVar5;
    puVar10 = puVar5;
    if ((puVar5 != (undefined1 *)0x0) &&
       (func_0x000107c2b1a4(puVar5,auStack_98,puVar6), (int)puVar7 == 0)) {
      func_0x000107c2b534(*(undefined8 *)(puVar5 + 8));
      func_0x000107c2b534();
      param_2 = puVar6;
      goto LAB_10ae57c8c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10ae57cc0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)0x2f;
  puVar8 = puVar7;
  puStack_d0 = unaff_x22;
  lStack_c8 = unaff_x21;
  puStack_c0 = puVar6;
  puStack_b8 = puVar10;
  ppuStack_b0 = &puStack_70;
  _strchr();
  puVar6 = (undefined1 *)0x0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar6 = puVar7;
    func_0x000107c2b53c();
    puVar10 = (undefined1 *)0x0;
    if (puVar6 == (undefined1 *)0x0) goto LAB_10ae57d84;
    puVar6[(long)puVar8 - (long)puVar7] = 0;
    iVar2 = (int)auStack_f8;
    puVar5 = puVar6;
    FUN_10ae57a98();
    if (iVar2 != 0) {
      iVar3 = (int)auStack_f8 + iVar2;
      puVar5 = puVar6 + ((long)puVar8 - (long)puVar7) + 1;
      FUN_10ae57a98();
      func_0x000107c2b534();
      if (iVar2 != iVar3) goto LAB_10ae57d80;
      puVar10 = (undefined1 *)0x4;
      func_0x000107c2b1ac();
      puVar6 = puVar10;
      if (puVar10 == (undefined1 *)0x0) goto LAB_10ae57d84;
      puVar5 = auStack_f8;
      func_0x000107c2b1a4(puVar10,puVar5,iVar2 << 1);
      if ((int)puVar6 != 0) goto LAB_10ae57d84;
      func_0x000107c2b534(*(undefined8 *)(puVar10 + 8));
      puVar6 = puVar10;
    }
    func_0x000107c2b534();
  }
LAB_10ae57d80:
  puVar10 = (undefined1 *)0x0;
LAB_10ae57d84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _sscanf(puVar5,&DAT_10f332542);
    if ((int)puVar5 == 4) {
      puVar5 = (undefined1 *)0x0;
      if ((((uStack_124 < 0x100) && (uStack_128 < 0x100)) && (uStack_12c < 0x100)) &&
         (uStack_130 < 0x100)) {
        *puVar6 = (char)uStack_124;
        puVar6[1] = (char)uStack_128;
        puVar6[2] = (char)uStack_12c;
        puVar5 = (undefined1 *)0x1;
        puVar6[3] = (char)uStack_130;
      }
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    return puVar5;
  }
  return puVar10;
}



/* Entry: 10ae57c24; end: 10ae57cbf;  */

undefined1 * FUN_10ae57c24(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 auStack_98 [32];
  long lStack_78;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = auStack_38;
  FUN_10ae57a98(puVar6,param_1);
  puVar3 = puVar6;
  if ((int)puVar6 == 0) {
LAB_10ae57c8c:
    puVar7 = (undefined1 *)0x0;
    puVar4 = puVar3;
  }
  else {
    puVar3 = (undefined1 *)0x4;
    func_0x000107c2b1ac();
    puVar4 = puVar3;
    puVar7 = puVar3;
    if ((puVar3 != (undefined1 *)0x0) &&
       (func_0x000107c2b1a4(puVar3,auStack_38,puVar6), (int)puVar4 == 0)) {
      func_0x000107c2b534(*(undefined8 *)(puVar3 + 8));
      func_0x000107c2b534();
      goto LAB_10ae57c8c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar7;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)0x2f;
  puVar7 = puVar4;
  _strchr();
  puVar3 = (undefined1 *)0x0;
  if (puVar7 != (undefined1 *)0x0) {
    puVar3 = puVar4;
    func_0x000107c2b53c();
    puVar5 = (undefined1 *)0x0;
    if (puVar3 == (undefined1 *)0x0) goto LAB_10ae57d84;
    puVar3[(long)puVar7 - (long)puVar4] = 0;
    iVar1 = (int)auStack_98;
    puVar6 = puVar3;
    FUN_10ae57a98();
    if (iVar1 != 0) {
      iVar2 = (int)auStack_98 + iVar1;
      puVar6 = puVar3 + ((long)puVar7 - (long)puVar4) + 1;
      FUN_10ae57a98();
      func_0x000107c2b534();
      if (iVar1 != iVar2) goto LAB_10ae57d80;
      puVar5 = (undefined1 *)0x4;
      func_0x000107c2b1ac();
      puVar3 = puVar5;
      if (puVar5 == (undefined1 *)0x0) goto LAB_10ae57d84;
      puVar6 = auStack_98;
      func_0x000107c2b1a4(puVar5,puVar6,iVar1 << 1);
      if ((int)puVar3 != 0) goto LAB_10ae57d84;
      func_0x000107c2b534(*(undefined8 *)(puVar5 + 8));
      puVar3 = puVar5;
    }
    func_0x000107c2b534();
  }
LAB_10ae57d80:
  puVar5 = (undefined1 *)0x0;
LAB_10ae57d84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail();
  _sscanf(puVar6,&DAT_10f332542);
  if ((int)puVar6 == 4) {
    puVar6 = (undefined1 *)0x0;
    if ((((uStack_c4 < 0x100) && (uStack_c8 < 0x100)) && (uStack_cc < 0x100)) && (uStack_d0 < 0x100)
       ) {
      *puVar3 = (char)uStack_c4;
      puVar3[1] = (char)uStack_c8;
      puVar3[2] = (char)uStack_cc;
      puVar6 = (undefined1 *)0x1;
      puVar3[3] = (char)uStack_d0;
    }
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  return puVar6;
}



/* Entry: 10ae57cc0; end: 10ae57db7;  */

undefined1 * FUN_10ae57cc0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)0x2f;
  puVar3 = param_1;
  _strchr();
  puVar4 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = param_1;
    func_0x000107c2b53c();
    puVar5 = (undefined1 *)0x0;
    if (puVar4 == (undefined1 *)0x0) goto LAB_10ae57d84;
    puVar4[(long)puVar3 - (long)param_1] = 0;
    iVar1 = (int)auStack_58;
    puVar6 = puVar4;
    FUN_10ae57a98();
    if (iVar1 != 0) {
      iVar2 = (int)auStack_58 + iVar1;
      puVar6 = puVar4 + ((long)puVar3 - (long)param_1) + 1;
      FUN_10ae57a98();
      func_0x000107c2b534();
      if (iVar1 != iVar2) goto LAB_10ae57d80;
      puVar5 = (undefined1 *)0x4;
      func_0x000107c2b1ac();
      puVar4 = puVar5;
      if (puVar5 == (undefined1 *)0x0) goto LAB_10ae57d84;
      puVar6 = auStack_58;
      func_0x000107c2b1a4(puVar5,puVar6,iVar1 << 1);
      if ((int)puVar4 != 0) goto LAB_10ae57d84;
      func_0x000107c2b534(*(undefined8 *)(puVar5 + 8));
      puVar4 = puVar5;
    }
    func_0x000107c2b534();
  }
LAB_10ae57d80:
  puVar5 = (undefined1 *)0x0;
LAB_10ae57d84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _sscanf(puVar6,&DAT_10f332542);
  if ((int)puVar6 == 4) {
    puVar6 = (undefined1 *)0x0;
    if ((((uStack_84 < 0x100) && (uStack_88 < 0x100)) && (uStack_8c < 0x100)) && (uStack_90 < 0x100)
       ) {
      *puVar4 = (char)uStack_84;
      puVar4[1] = (char)uStack_88;
      puVar4[2] = (char)uStack_8c;
      puVar6 = (undefined1 *)0x1;
      puVar4[3] = (char)uStack_90;
    }
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  return puVar6;
}



/* Entry: 10ae57db8; end: 10ae57e5f;  */

undefined8 FUN_10ae57db8(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  _sscanf(param_2,&DAT_10f332542);
  if ((int)param_2 == 4) {
    uVar1 = 0;
    if ((((uStack_24 < 0x100) && (uStack_28 < 0x100)) && (uStack_2c < 0x100)) && (uStack_30 < 0x100)
       ) {
      *param_1 = (char)uStack_24;
      param_1[1] = (char)uStack_28;
      param_1[2] = (char)uStack_2c;
      uVar1 = 1;
      param_1[3] = (char)uStack_30;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10ae57e60; end: 10ae57fff;  */

void FUN_10ae57e60(long param_1,ulong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if ((param_1 != 0) && (param_2 != (ulong *)0x0)) {
    uVar7 = 0;
    do {
      if (*param_2 <= uVar7) {
        return;
      }
      lVar4 = *(long *)(param_2[1] + uVar7 * 8);
      pbVar5 = *(byte **)(lVar4 + 8);
      pbVar1 = pbVar5;
      do {
        while( true ) {
          pbVar6 = pbVar1 + 1;
          bVar2 = *pbVar1;
          pbVar1 = pbVar6;
          if (bVar2 < 0x2e) break;
          if ((bVar2 == 0x3a) || (bVar2 == 0x2e)) goto LAB_10ae57ed8;
        }
        if (bVar2 == 0) goto LAB_10ae57ee4;
      } while (bVar2 != 0x2c);
LAB_10ae57ed8:
      if (*pbVar6 != 0) {
        pbVar5 = pbVar6;
      }
LAB_10ae57ee4:
      pbVar1 = pbVar5;
      if (*pbVar5 == 0x2b) {
        pbVar1 = pbVar5 + 1;
      }
      lVar3 = param_1;
      FUN_10ae4dcf0(param_1,pbVar1,param_3,*(undefined8 *)(lVar4 + 0x10),0xffffffff,0xffffffff,
                    -(uint)(*pbVar5 == 0x2b));
      uVar7 = uVar7 + 1;
    } while ((int)lVar3 != 0);
  }
  return;
}



/* Entry: 10ae58000; end: 10ae58067;  */

undefined8 FUN_10ae58000(byte *param_1,long param_2,byte *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_2 == param_4) {
    while( true ) {
      if (param_2 == 0) {
        return 1;
      }
      bVar2 = *param_1;
      if (bVar2 == 0) break;
      bVar3 = *param_3;
      if ((uint)bVar2 != (uint)bVar3) {
        uVar4 = (uint)bVar2;
        uVar1 = uVar4 | 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar1 = uVar4;
        }
        uVar4 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar4 = (uint)bVar3;
        }
        if (uVar1 != uVar4) {
          return 0;
        }
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    }
  }
  return 0;
}



/* Entry: 10ae58068; end: 10ae5832b;  */

byte * FUN_10ae58068(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  
  if (param_4 < (byte *)0x2) {
    if (param_2 == (byte *)0x0) goto code_r0x00010ae58000;
  }
  else if ((param_2 == (byte *)0x0) || (*param_3 == 0x2e)) goto code_r0x00010ae58000;
  pbVar9 = (byte *)0x0;
  iVar8 = 0;
  bVar10 = 1;
  pbVar4 = param_2;
  pbVar5 = param_1;
  do {
    bVar11 = *pbVar5;
    if (bVar11 == 0x2a) {
      if (pbVar4 == (byte *)0x1) {
        bVar2 = true;
      }
      else {
        bVar2 = pbVar5[1] == 0x2e;
      }
      if ((pbVar9 != (byte *)0x0) || ((((bVar10 & 8) == 0 && iVar8 == 0) & bVar10 & bVar2) != 1))
      goto code_r0x00010ae58000;
      iVar8 = 0;
      bVar10 = bVar10 & 0xf6;
      pbVar9 = pbVar5;
    }
    else {
      uVar1 = (bVar11 & 0xffffffdf) - 0x41;
      uVar6 = (uint)bVar11;
      bVar2 = uVar6 - 0x30 < 10;
      if ((!bVar2 && 0x18 < uVar1) && (bVar2 || uVar1 != 0x19)) {
        if (uVar6 == 0x2d) {
          if ((bVar10 & 1) != 0) goto code_r0x00010ae58000;
          bVar10 = bVar10 | 4;
        }
        else {
          if (uVar6 != 0x2e || (bVar10 & 5) != 0) goto code_r0x00010ae58000;
          iVar8 = iVar8 + 1;
          bVar10 = 1;
        }
      }
      else {
        bVar11 = bVar10;
        if (((bVar10 & 1) != 0) && ((byte *)0x3 < pbVar4)) {
          pbVar3 = pbVar5;
          func_0x00010ae45528(pbVar5,&UNK_10f6cfbc5,4);
          bVar11 = 8;
          if ((int)pbVar3 != 0) {
            bVar11 = bVar10;
          }
        }
        bVar10 = bVar11 & 0xfa;
      }
    }
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + -1;
  } while (pbVar4 != (byte *)0x0);
  if ((((bVar10 & 5) == 0) && (1 < iVar8)) && (pbVar9 != (byte *)0x0)) {
    lVar7 = (long)pbVar9 - (long)param_1;
    pbVar5 = param_1 + (long)param_2 + ~(ulong)pbVar9;
    if (param_4 < pbVar5 + lVar7) {
      return (byte *)0x0;
    }
    pbVar4 = param_1;
    FUN_10ae58000(param_1,lVar7,param_3,lVar7);
    if ((int)pbVar4 == 0) {
      return pbVar4;
    }
    lVar12 = (long)param_4 - (long)pbVar5;
    pbVar4 = param_3 + lVar12;
    pbVar3 = pbVar4;
    FUN_10ae58000(pbVar4,pbVar5,pbVar9 + 1,pbVar5);
    if ((int)pbVar3 == 0) {
      return pbVar3;
    }
    if ((pbVar9 == param_1) && (pbVar9[1] == 0x2e)) {
      if (param_4 == pbVar5) {
        return (byte *)0x0;
      }
    }
    else if (((byte *)0x3 < param_4) &&
            (pbVar5 = param_3, func_0x00010ae45528(param_3,&UNK_10f6cfbc5,4), (int)pbVar5 == 0)) {
      return pbVar5;
    }
    param_3 = param_3 + lVar7;
    if (pbVar4 == param_3 + 1) {
      if (lVar12 == lVar7) {
        return (byte *)0x1;
      }
      if (*param_3 == 0x2a) {
        return (byte *)0x1;
      }
    }
    else if (lVar12 == lVar7) {
      return (byte *)0x1;
    }
    param_4 = param_4 + (1 - (long)param_2);
    while ((bVar10 = *param_3, bVar10 - 0x30 < 10 || bVar10 - 0x41 < 0x1a ||
           (bVar10 == 0x2d || bVar10 - 0x61 < 0x1a))) {
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      if (param_4 == (byte *)0x0) {
        return (byte *)0x1;
      }
    }
    return (byte *)0x0;
  }
code_r0x00010ae58000:
  if (param_2 == param_4) {
    while( true ) {
      if (param_2 == (byte *)0x0) {
        return (byte *)0x1;
      }
      bVar10 = *param_1;
      if (bVar10 == 0) break;
      bVar11 = *param_3;
      if ((uint)bVar10 != (uint)bVar11) {
        uVar6 = (uint)bVar10;
        uVar1 = uVar6 | 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar6 = bVar11 | 0x20;
        if (0x19 < bVar11 - 0x41) {
          uVar6 = (uint)bVar11;
        }
        if (uVar1 != uVar6) {
          return (byte *)0x0;
        }
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    }
  }
  return (byte *)0x0;
}



/* Entry: 10ae5832c; end: 10ae5836f;  */

bool FUN_10ae5832c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 != 0) {
    _memcmp(param_1,param_3,param_2);
    return (int)param_1 == 0;
  }
  return true;
}



/* Entry: 10ae58370; end: 10ae584db;  */

long FUN_10ae58370(int *param_1,int param_2,code *param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,long param_7,long *param_8)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lStack_58;
  
  lVar2 = *(long *)(param_1 + 2);
  if (lVar2 != 0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (param_2 < 1) {
        plVar3 = &lStack_58;
        func_0x000107c2b180(plVar3,param_1);
        if ((int)plVar3 < 0) {
          return 0xffffffff;
        }
        uVar5 = (ulong)plVar3 & 0xffffffff;
        if ((param_5 == 2) && (lVar2 = lStack_58, FUN_10ae57624(lStack_58,uVar5), (int)lVar2 == 0))
        {
          lVar2 = 0;
        }
        else {
          lVar2 = lStack_58;
          (*param_3)(lStack_58,uVar5,param_6,param_7,param_4);
          if ((param_8 != (long *)0x0) && (0 < (int)lVar2)) {
            lVar4 = lStack_58;
            FUN_10ae4558c(lStack_58,uVar5);
            *param_8 = lVar4;
          }
        }
        func_0x000107c2b534(lStack_58);
        return lVar2;
      }
      if (param_1[1] == param_2) {
        if (param_2 == 0x16) {
          (*param_3)(lVar2,(long)iVar1,param_6,param_7,param_4);
        }
        else {
          if (iVar1 != (int)param_7) {
            return 0;
          }
          if ((param_7 != 0) && (_memcmp(lVar2,param_6,param_7), (int)lVar2 != 0)) {
            return 0;
          }
          lVar2 = 1;
        }
        if (param_8 == (long *)0x0) {
          return lVar2;
        }
        if (0 < (int)lVar2) {
          lVar4 = *(long *)(param_1 + 2);
          FUN_10ae4558c(lVar4,(long)*param_1);
          *param_8 = lVar4;
          return lVar2;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



/* Entry: 10ae584dc; end: 10ae5875b;  */

void FUN_10ae584dc(byte *param_1,uint param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_3 + 0x10);
  iVar2 = *piVar5;
  if (iVar2 == 0x10) {
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x14) == -1) {
      *(int *)(param_3 + 0x14) = iVar2;
    }
    else if (*(int *)(param_3 + 0x14) != iVar2) {
      return;
    }
    piVar5 = (int *)(param_3 + 0x18);
    iVar2 = 1;
  }
  else if ((int)param_2 < 5) {
    uVar3 = 0;
    do {
      bVar1 = *param_1;
      if (bVar1 - 0x30 < 10) {
        iVar4 = -0x30;
      }
      else if (bVar1 - 0x41 < 6) {
        iVar4 = -0x37;
      }
      else {
        if (5 < bVar1 - 0x61) {
          return;
        }
        iVar4 = -0x57;
      }
      uVar3 = iVar4 + (uint)bVar1 | uVar3 << 4;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    *(ushort *)(param_3 + iVar2) = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
    iVar2 = 2;
  }
  else {
    if (0xc < iVar2) {
      return;
    }
    if (param_1[param_2] != 0) {
      return;
    }
    param_3 = param_3 + iVar2;
    FUN_10ae57db8(param_3,param_1);
    if ((int)param_3 == 0) {
      return;
    }
    iVar2 = 4;
  }
  *piVar5 = *piVar5 + iVar2;
  return;
}



/* Entry: 10ae5875c; end: 10ae58d77;  */

undefined8
FUN_10ae5875c(undefined8 *param_1,undefined1 *param_2,long *param_3,undefined8 *param_4,long param_5
             ,long param_6,ulong param_7)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  long *plVar9;
  char **ppcVar10;
  undefined8 *puVar11;
  long **pplVar12;
  byte **ppbVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  ulong uStack_1b0;
  byte *pbStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  char *pcStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined1 auStack_170 [32];
  long *aplStack_150 [2];
  long lStack_140;
  byte bStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char *pcStack_108;
  ulong uStack_100;
  undefined1 auStack_f8 [24];
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  long lStack_80;
  
  *(undefined1 *)param_3 = 0;
  lStack_180 = 0;
  uStack_178 = 0;
  uVar19 = *(undefined8 *)(param_5 + 8);
  lVar3 = *(long *)(param_5 + 0x10);
  plVar9 = &lStack_180;
  func_0x000107c2b684(plVar9,lVar3);
  uVar2 = (uint)plVar9 ^ 1;
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  if ((uVar2 & 1) == 0) {
    _memcpy(lStack_180,uVar19,lVar3);
  }
  if (((ulong)plVar9 & 1) == 0) {
    uVar19 = 0;
    *param_2 = 0x50;
    goto LAB_10ae58960;
  }
  uVar16 = param_6 - *(long *)(param_5 + 8);
  if (uStack_178 < uVar16) {
LAB_10ae58cf0:
    _abort();
    uStack_98 = param_7;
LAB_10ae58cf4:
    puVar14 = auStack_170;
    func_0x000107c2b21c(puVar14,pbStack_1a8 + uStack_98,lStack_1a0);
    if ((int)puVar14 == 0) {
      uVar15 = 0x44;
      uVar19 = 0xf0;
      goto LAB_10ae58b04;
    }
LAB_10ae58b28:
    iVar8 = (int)aplStack_150;
    func_0x000107c2b20c();
    if (iVar8 == 0) {
      uVar19 = 0xf5;
LAB_10ae58ca8:
      uVar15 = 0x44;
      goto LAB_10ae58b04;
    }
    plVar9 = param_3;
    func_0x00010ae585e4(param_3,param_2,lStack_140 + (ulong)bStack_138 + *aplStack_150[0],
                        aplStack_150[0][1] - (lStack_140 + (ulong)bStack_138));
    if ((int)plVar9 != 0) {
      (**(code **)(*param_3 + 0x60))(param_3,&uStack_130,param_4);
      if (((ulong)param_3 & 1) != 0) {
        func_0x000107c2b204(&uStack_130);
        func_0x000107c2b794(*param_1,0,0x101,*param_4,param_4[1]);
        uVar19 = 1;
        goto LAB_10ae58958;
      }
      uVar19 = 0xff;
      goto LAB_10ae58ca8;
    }
    goto LAB_10ae58b08;
  }
  uVar18 = uStack_178 - uVar16;
  if (param_7 <= uStack_178 - uVar16) {
    uVar18 = param_7;
  }
  if (uVar18 != 0) {
    _bzero(lStack_180 + uVar16);
  }
  pcStack_190 = (char *)0x0;
  uStack_188 = 0;
  ppcVar10 = &pcStack_190;
  func_0x000107c2b684(ppcVar10,param_7);
  if (((ulong)ppcVar10 & 1) != 0) {
    puVar11 = param_1 + 0x58;
    FUN_10ae4297c(puVar11,pcStack_190,&uStack_198,uStack_188,param_6,param_7,lStack_180,uStack_178);
    if ((int)puVar11 == 0) {
      *param_2 = 0x33;
      *(undefined1 *)param_3 = 1;
      uVar19 = 0x8a;
      uVar15 = 0x13c;
LAB_10ae58950:
      func_0x000107c2b29c(0x10,0,uVar19,&UNK_10f6cfc38,uVar15);
    }
    else {
      if (uStack_188 < uStack_198) goto LAB_10ae58cf0;
      uStack_188 = uStack_198;
      param_3 = (long *)*param_1;
      pcStack_108 = pcStack_190;
      uStack_100 = uStack_198;
      plVar9 = param_3;
      FUN_10ae5965c(param_3,&pcStack_108,auStack_f8);
      if (((ulong)plVar9 & 1) == 0) {
        uVar19 = 0x89;
        uVar15 = 0x85;
        goto LAB_10ae58950;
      }
      do {
        pcVar17 = pcStack_108 + 1;
        uVar16 = uStack_100 - 1;
        if (uVar16 == 0xffffffffffffffff) {
          if (pbStack_90 == (byte *)0x0 || lStack_c0 != 0) {
            uVar19 = 0x89;
            uVar15 = 0x96;
            goto LAB_10ae58950;
          }
          uStack_c8 = *(undefined8 *)(param_5 + 0x30);
          lStack_c0 = *(long *)(param_5 + 0x38);
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          plVar9 = param_3;
          (**(code **)(*param_3 + 0x58))(param_3,&uStack_130,aplStack_150,1);
          if ((int)plVar9 != 0) {
            pplVar12 = aplStack_150;
            func_0x000107c2b228(pplVar12,uStack_e0);
            if ((int)pplVar12 != 0) {
              pplVar12 = aplStack_150;
              func_0x000107c2b21c(pplVar12,uStack_d8,uStack_d0);
              if ((int)pplVar12 != 0) {
                pplVar12 = aplStack_150;
                func_0x000107c34f3c(pplVar12,&pbStack_88,1);
                if ((int)pplVar12 != 0) {
                  ppbVar13 = &pbStack_88;
                  func_0x000107c2b21c(ppbVar13,uStack_c8,lStack_c0);
                  if ((int)ppbVar13 != 0) {
                    pplVar12 = aplStack_150;
                    func_0x000107c34f3c(pplVar12,&pbStack_88,2);
                    if ((int)pplVar12 != 0) {
                      ppbVar13 = &pbStack_88;
                      func_0x000107c2b21c(ppbVar13,uStack_b8,uStack_b0);
                      if ((int)ppbVar13 != 0) {
                        pplVar12 = aplStack_150;
                        func_0x000107c34f3c(pplVar12,&pbStack_88,1);
                        if ((int)pplVar12 != 0) {
                          ppbVar13 = &pbStack_88;
                          func_0x000107c2b21c(ppbVar13,uStack_a8,uStack_a0);
                          if ((int)ppbVar13 != 0) {
                            iVar8 = (int)aplStack_150;
                            func_0x000107c2b20c();
                            if (iVar8 != 0) {
                              pplVar12 = aplStack_150;
                              func_0x000107c34f3c(pplVar12,auStack_170,2);
                              if ((int)pplVar12 != 0) {
                                puVar14 = auStack_f8;
                                FUN_10ae59824(puVar14,&pbStack_88,0xfd00);
                                lVar3 = lStack_80;
                                pbVar7 = pbStack_88;
                                if (((ulong)puVar14 & 1) == 0) {
                                  puVar14 = auStack_170;
                                  func_0x000107c2b21c(puVar14,uStack_98,pbStack_90);
                                  if ((int)puVar14 != 0) goto LAB_10ae58b28;
                                  uVar19 = 0xae;
                                  goto LAB_10ae58ca8;
                                }
                                pbStack_1a8 = pbStack_88 + (lStack_80 - uStack_98);
                                lStack_1a0 = (long)pbStack_90 - (long)pbStack_1a8;
                                param_7 = uStack_98;
                                if (pbStack_90 < pbStack_1a8) goto LAB_10ae58cf0;
                                if (pbStack_88 + (-4 - uStack_98) <= pbStack_90) {
                                  pbStack_90 = pbStack_88 + (-4 - uStack_98);
                                }
                                puVar14 = auStack_170;
                                func_0x000107c2b21c(puVar14,uStack_98,pbStack_90);
                                if ((int)puVar14 == 0) {
                                  uVar15 = 0x44;
                                  uVar19 = 0xb9;
                                  goto LAB_10ae58b04;
                                }
                                if (lVar3 != 0) {
                                  puVar22 = (ushort *)(pbVar7 + 1);
                                  bVar4 = *pbVar7;
                                  uVar16 = (ulong)bVar4;
                                  uStack_1b0 = lVar3 - 1;
                                  lVar3 = uStack_1b0 - uVar16;
                                  if (((uVar16 <= uStack_1b0) &&
                                      (pbStack_88 = (byte *)((long)puVar22 + uVar16),
                                      lStack_80 = lVar3, bVar4 != 0)) && (uStack_1b0 == uVar16)) {
                                    puVar21 = *(ushort **)(param_5 + 0x60);
                                    uVar16 = *(ulong *)(param_5 + 0x68);
                                    goto LAB_10ae58be8;
                                  }
                                }
                                uVar15 = 0x89;
                                uVar19 = 0xc1;
                                goto LAB_10ae58b04;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar15 = 0x44;
          uVar19 = 0xa2;
          goto LAB_10ae58b04;
        }
        cVar6 = *pcStack_108;
        pcStack_108 = pcVar17;
        uStack_100 = uVar16;
      } while (cVar6 == '\0');
      func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfc38,0x8c);
      *param_2 = 0x2f;
    }
    goto LAB_10ae58954;
  }
  uVar19 = 0;
  *param_2 = 0x50;
  goto LAB_10ae58958;
  while( true ) {
    puVar14 = auStack_170;
    func_0x000107c2b228(puVar14,uVar20);
    if ((int)puVar14 == 0) break;
    puVar14 = auStack_170;
    func_0x000107c2b21c(puVar14,puVar1,uVar20);
    puVar22 = puVar22 + 1;
    if ((int)puVar14 == 0) break;
LAB_10ae58be8:
    if (uStack_1b0 == 0) goto LAB_10ae58cf4;
    if (uStack_1b0 == 1) {
      uVar19 = 0xcb;
      goto LAB_10ae58cc4;
    }
    uVar5 = *puVar22;
    if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) == 0xfe0d) {
      *param_2 = 0x2f;
      uVar19 = 0xd1;
LAB_10ae58cd8:
      uVar15 = 0x140;
      goto LAB_10ae58b04;
    }
    uStack_1b0 = uStack_1b0 - 2;
    uVar2 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
    do {
      if (uVar16 == 1) goto LAB_10ae58cc0;
      if (uVar16 == 0) {
        *param_2 = 0x2f;
        uVar19 = 0xdb;
        goto LAB_10ae58cd8;
      }
      if ((uVar16 & 0xfffffffffffffffe) == 2) {
LAB_10ae58cc0:
        uVar19 = 0xe0;
        goto LAB_10ae58cc4;
      }
      uVar20 = (ulong)((uint)(puVar21[1] >> 8) | (puVar21[1] & 0xff00ff) << 8);
      uVar18 = uVar16 - 4;
      uVar16 = uVar18 - uVar20;
      if (uVar18 < uVar20) goto LAB_10ae58cc0;
      uVar5 = *puVar21;
      puVar1 = puVar21 + 2;
      puVar21 = (ushort *)((long)puVar1 + uVar20);
    } while (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) != uVar2);
    puVar14 = auStack_170;
    func_0x000107c2b228(puVar14,uVar2);
    if ((int)puVar14 == 0) break;
  }
  uVar19 = 0xe9;
LAB_10ae58cc4:
  uVar15 = 0x89;
LAB_10ae58b04:
  func_0x000107c2b29c(0x10,0,uVar15,&UNK_10f6cfc38,uVar19);
LAB_10ae58b08:
  func_0x000107c2b204(&uStack_130);
LAB_10ae58954:
  uVar19 = 0;
LAB_10ae58958:
  func_0x000107c2b534(pcStack_190);
LAB_10ae58960:
  func_0x000107c2b534(lStack_180);
  return uVar19;
}



/* Entry: 10ae58d78; end: 10ae58f0b;  */

long * FUN_10ae58d78(byte *param_1,long *param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  byte bVar11;
  byte *pbVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ushort *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar12;
  
  if (param_2 == (long *)0x0) {
LAB_10ae58ed8:
    plVar19 = (long *)0x0;
  }
  else {
    plVar15 = (long *)0x0;
    pbVar13 = (byte *)0x0;
    do {
      plVar19 = (long *)0x0;
      do {
        plVar9 = plVar19;
        if (param_1[(long)plVar19] == 0x2e) break;
        plVar19 = (long *)((long)plVar19 + 1);
        plVar9 = param_2;
      } while (param_2 != plVar19);
      plVar19 = param_2;
      if (plVar9 == param_2) {
        pbVar7 = (byte *)0x0;
        plVar9 = (long *)0x0;
        pbVar13 = param_1;
        plVar15 = param_2;
      }
      else {
        plVar1 = (long *)((long)plVar9 + 1);
        if (param_2 < plVar1) {
          _abort();
          uVar14 = *(ulong *)(param_1 + 8);
          if (1 < uVar14) {
            puVar20 = *(ushort **)param_1;
            *(ushort **)param_1 = puVar20 + 1;
            *(ulong *)(param_1 + 8) = uVar14 - 2;
            if (1 < uVar14 - 2) {
              uVar5 = *puVar20;
              uVar16 = uVar14 - 4;
              *(ushort **)param_1 = puVar20 + 2;
              *(ulong *)(param_1 + 8) = uVar16;
              uVar18 = (ulong)((uint)(puVar20[1] >> 8) | (puVar20[1] & 0xff00ff) << 8);
              if (uVar18 <= uVar16) {
                *(ulong *)param_1 = (long)(puVar20 + 2) + uVar18;
                *(ulong *)(param_1 + 8) = uVar16 - uVar18;
                if ((ushort)(uVar5 >> 8 | uVar5 << 8) != 0xfe0d) {
LAB_10ae5918c:
                  *param_3 = 0;
                  return (long *)0x1;
                }
                lVar22 = uVar14 - (uVar16 - uVar18);
                plVar15 = param_2;
                func_0x000107c2b684(param_2,lVar22);
                if ((int)plVar15 == 0) {
                  return plVar15;
                }
                _memcpy(*param_2,puVar20,lVar22);
                uVar14 = param_2[1];
                if ((1 < uVar14) && ((uVar14 & 0xfffffffffffffffe) != 2)) {
                  lVar22 = *param_2;
                  uVar16 = (ulong)((uint)(*(ushort *)(lVar22 + 2) >> 8) |
                                  (*(ushort *)(lVar22 + 2) & 0xff00ff) << 8);
                  if (uVar16 - 1 < uVar14 - 4) {
                    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar22 + 4);
                    if ((2 < uVar16) &&
                       (*(ushort *)(param_2 + 8) =
                             *(ushort *)(lVar22 + 5) >> 8 | *(ushort *)(lVar22 + 5) << 8,
                       1 < uVar16 - 3)) {
                      uVar18 = (ulong)((uint)(*(ushort *)(lVar22 + 7) >> 8) |
                                      (*(ushort *)(lVar22 + 7) & 0xff00ff) << 8);
                      uVar14 = (uVar16 - 5) - uVar18;
                      if ((uVar18 <= uVar16 - 5) &&
                         ((uVar18 != 0 && (uVar16 = uVar14 - 2, 1 < uVar14)))) {
                        puVar2 = (undefined1 *)(lVar22 + 9 + uVar18);
                        uVar14 = (ulong)CONCAT11(*puVar2,puVar2[1]);
                        if ((uVar14 <= uVar16) &&
                           (((uVar14 != 0 && ((puVar2[1] & 3) == 0)) && (uVar16 != uVar14)))) {
                          puVar3 = puVar2 + 2 + uVar14;
                          *(undefined1 *)((long)param_2 + 0x42) = *puVar3;
                          if (uVar16 + ~uVar14 != 0) {
                            uVar17 = (uVar16 + ~uVar14) - 1;
                            uVar21 = (ulong)(byte)puVar3[1];
                            uVar16 = uVar17 - uVar21;
                            if (((uVar21 <= uVar17) && (puVar3[1] != 0)) && (1 < uVar16)) {
                              puVar3 = puVar3 + 2;
                              puVar20 = (ushort *)((long)(puVar3 + uVar21) + 2);
                              uVar5 = *(ushort *)(puVar3 + uVar21);
                              uVar17 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
                              if (uVar16 - 2 == uVar17) {
                                puVar8 = puVar3;
                                FUN_10ae58d78(puVar3,uVar21);
                                if (((ulong)puVar8 & 1) == 0) goto LAB_10ae5918c;
                                uVar12 = 0;
                                bVar11 = 0;
                                param_2[2] = lVar22 + 9;
                                param_2[3] = uVar18;
                                param_2[4] = (long)puVar3;
                                param_2[5] = uVar21;
                                param_2[6] = (long)(puVar2 + 2);
                                param_2[7] = uVar14;
                                goto joined_r0x00010ae59134;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar10 = 0x1be;
                goto LAB_10ae58f80;
              }
            }
          }
          uVar10 = 0x19f;
          goto LAB_10ae58f80;
        }
        if (plVar9 <= param_2) {
          plVar19 = plVar9;
        }
        plVar9 = (long *)((long)param_2 - (long)plVar1);
        if (plVar9 == (long *)0x0) goto LAB_10ae58ed8;
        pbVar7 = param_1 + (long)plVar1;
      }
      if (((plVar19 + -8 < (long *)0xffffffffffffffc1) || (*param_1 == 0x2d)) ||
         ((param_1 + (long)plVar19)[-1] == 0x2d)) goto LAB_10ae58ed8;
      do {
        bVar11 = *param_1;
        if ((0x19 < (bVar11 & 0xffffffdf) - 0x41) && (bVar11 != 0x2d && bVar11 - 0x3a < 0xfffffff6))
        goto LAB_10ae58ed8;
        param_1 = param_1 + 1;
        plVar19 = (long *)((long)plVar19 - 1);
      } while (plVar19 != (long *)0x0);
      param_1 = pbVar7;
      param_2 = plVar9;
    } while (plVar9 != (long *)0x0);
    if (plVar15 < (long *)0x2) {
LAB_10ae58e64:
      if (plVar15 == (long *)0x0) {
        return (long *)0x1;
      }
    }
    else if ((*pbVar13 == 0x30) && ((pbVar13[1] | 0x20) == 0x78)) {
      lVar22 = (long)plVar15 + -2;
      if (lVar22 != 0) {
        pbVar7 = pbVar13 + 2;
        do {
          if ((9 < (*pbVar7 - 0x30 & 0xff)) &&
             (uVar12 = *pbVar7 - 0x41,
             0x25 < uVar12 || (1L << ((ulong)uVar12 & 0x3f) & 0x3f0000003fU) == 0))
          goto LAB_10ae58e64;
          pbVar7 = pbVar7 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      goto LAB_10ae58ed8;
    }
    do {
      plVar15 = (long *)((long)plVar15 + -1);
      bVar6 = *pbVar13 - 0x3a < 0xfffffff6;
      plVar19 = (long *)(ulong)bVar6;
      pbVar13 = pbVar13 + 1;
    } while (!bVar6 && plVar15 != (long *)0x0);
  }
  return plVar19;
joined_r0x00010ae59134:
  if (uVar17 == 0) {
    *param_3 = (bVar11 ^ 0xff) & 1;
    return (long *)0x1;
  }
  if ((uVar17 == 1) || ((uVar17 & 0xfffffffffffffffe) == 2)) {
LAB_10ae59198:
    uVar10 = 0x1d6;
LAB_10ae58f80:
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfc38,uVar10);
    return (long *)0x0;
  }
  uVar14 = (ulong)((uint)(puVar20[1] >> 8) | (puVar20[1] & 0xff00ff) << 8);
  uVar16 = uVar17 - 4;
  uVar17 = uVar16 - uVar14;
  if (uVar16 < uVar14) goto LAB_10ae59198;
  uVar5 = *puVar20;
  puVar20 = (ushort *)((long)puVar20 + uVar14 + 4);
  uVar4 = param_4;
  if ((char)uVar5 < '\0') {
    uVar4 = 1;
  }
  uVar12 = uVar4 | uVar12;
  bVar11 = (byte)uVar12;
  goto joined_r0x00010ae59134;
}



/* Entry: 10ae58f0c; end: 10ae591b3;  */

void FUN_10ae58f0c(long *param_1,long *param_2,byte *param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong uVar14;
  long lVar15;
  
  uVar9 = param_1[1];
  if (1 < uVar9) {
    puVar13 = (ushort *)*param_1;
    *param_1 = (long)(puVar13 + 1);
    param_1[1] = uVar9 - 2;
    if (1 < uVar9 - 2) {
      uVar4 = *puVar13;
      uVar10 = uVar9 - 4;
      *param_1 = (long)(puVar13 + 2);
      param_1[1] = uVar10;
      uVar12 = (ulong)((uint)(puVar13[1] >> 8) | (puVar13[1] & 0xff00ff) << 8);
      if (uVar12 <= uVar10) {
        *param_1 = (long)(puVar13 + 2) + uVar12;
        param_1[1] = uVar10 - uVar12;
        if ((ushort)(uVar4 >> 8 | uVar4 << 8) != 0xfe0d) {
LAB_10ae5918c:
          *param_3 = 0;
          return;
        }
        lVar15 = uVar9 - (uVar10 - uVar12);
        plVar5 = param_2;
        func_0x000107c2b684(param_2,lVar15);
        if ((int)plVar5 == 0) {
          return;
        }
        _memcpy(*param_2,puVar13,lVar15);
        uVar9 = param_2[1];
        if ((1 < uVar9) && ((uVar9 & 0xfffffffffffffffe) != 2)) {
          lVar15 = *param_2;
          uVar10 = (ulong)((uint)(*(ushort *)(lVar15 + 2) >> 8) |
                          (*(ushort *)(lVar15 + 2) & 0xff00ff) << 8);
          if (uVar10 - 1 < uVar9 - 4) {
            *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar15 + 4);
            if ((2 < uVar10) &&
               (*(ushort *)(param_2 + 8) =
                     *(ushort *)(lVar15 + 5) >> 8 | *(ushort *)(lVar15 + 5) << 8, 1 < uVar10 - 3)) {
              uVar12 = (ulong)((uint)(*(ushort *)(lVar15 + 7) >> 8) |
                              (*(ushort *)(lVar15 + 7) & 0xff00ff) << 8);
              uVar9 = (uVar10 - 5) - uVar12;
              if ((uVar12 <= uVar10 - 5) && ((uVar12 != 0 && (uVar10 = uVar9 - 2, 1 < uVar9)))) {
                puVar1 = (undefined1 *)(lVar15 + 9 + uVar12);
                uVar9 = (ulong)CONCAT11(*puVar1,puVar1[1]);
                if ((uVar9 <= uVar10) &&
                   (((uVar9 != 0 && ((puVar1[1] & 3) == 0)) && (uVar10 != uVar9)))) {
                  puVar2 = puVar1 + 2 + uVar9;
                  *(undefined1 *)((long)param_2 + 0x42) = *puVar2;
                  if (uVar10 + ~uVar9 != 0) {
                    uVar11 = (uVar10 + ~uVar9) - 1;
                    uVar14 = (ulong)(byte)puVar2[1];
                    uVar10 = uVar11 - uVar14;
                    if (((uVar14 <= uVar11) && (puVar2[1] != 0)) && (1 < uVar10)) {
                      puVar2 = puVar2 + 2;
                      puVar13 = (ushort *)((long)(puVar2 + uVar14) + 2);
                      uVar4 = *(ushort *)(puVar2 + uVar14);
                      uVar11 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
                      if (uVar10 - 2 == uVar11) {
                        puVar6 = puVar2;
                        FUN_10ae58d78(puVar2,uVar14);
                        if (((ulong)puVar6 & 1) == 0) goto LAB_10ae5918c;
                        bVar8 = 0;
                        param_2[2] = lVar15 + 9;
                        param_2[3] = uVar12;
                        param_2[4] = (long)puVar2;
                        param_2[5] = uVar14;
                        param_2[6] = (long)(puVar1 + 2);
                        param_2[7] = uVar9;
                        while( true ) {
                          if (uVar11 == 0) {
                            *param_3 = (bVar8 ^ 0xff) & 1;
                            return;
                          }
                          if ((uVar11 == 1) || ((uVar11 & 0xfffffffffffffffe) == 2)) break;
                          uVar9 = (ulong)((uint)(puVar13[1] >> 8) | (puVar13[1] & 0xff00ff) << 8);
                          uVar10 = uVar11 - 4;
                          uVar11 = uVar10 - uVar9;
                          if (uVar10 < uVar9) break;
                          uVar4 = *puVar13;
                          puVar13 = (ushort *)((long)puVar13 + uVar9 + 4);
                          bVar3 = param_4;
                          if ((char)uVar4 < '\0') {
                            bVar3 = 1;
                          }
                          bVar8 = bVar3 | bVar8;
                        }
                        uVar7 = 0x1d6;
                        goto LAB_10ae58f80;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar7 = 0x1be;
        goto LAB_10ae58f80;
      }
    }
  }
  uVar7 = 0x19f;
LAB_10ae58f80:
  func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfc38,uVar7);
  return;
}



/* Entry: 10ae591b4; end: 10ae5932b;  */

undefined8
FUN_10ae591b4(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
             undefined8 param_6)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  bool bVar5;
  long **pplVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  int iVar4;
  
  iVar3 = (int)&plStack_70;
  iVar4 = (int)&plStack_70;
  pplVar6 = &plStack_70;
  puVar7 = (ushort *)param_1[6];
  uVar8 = param_1[7];
  do {
    bVar5 = uVar8 < 4;
    uVar8 = uVar8 - 4;
    if (bVar5) {
      return 0;
    }
    uVar2 = *puVar7;
    puVar1 = puVar7 + 1;
    puVar7 = puVar7 + 2;
  } while (param_3 != ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) ||
           ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8) != param_4);
  uStack_68 = 0;
  plStack_70 = (long *)0x0;
  uStack_58 = 0;
  lStack_60 = 0;
  func_0x000107c2b200(&plStack_70,param_1[1] + 8);
  if (((iVar3 == 0) || (func_0x000107c2b21c(&plStack_70,&UNK_10e52ac6c,8), iVar4 == 0)) ||
     (func_0x000107c2b21c(&plStack_70,*param_1,param_1[1]), (int)pplVar6 == 0)) {
    func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cfc38,0x240);
    param_2 = 0;
  }
  else {
    lVar9 = 0;
    do {
      (**(code **)((long)&PTR_FUN_110c89b30 + lVar9))();
      if (*(ushort *)pplVar6 == param_4) goto LAB_10ae59288;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    pplVar6 = (long **)0x0;
LAB_10ae59288:
    lVar9 = lStack_60 + (uStack_58 & 0xff);
    FUN_10ae42870(param_2,param_1 + 9,&UNK_110c7cc78,pplVar6,param_5,param_6,lVar9 + *plStack_70,
                  plStack_70[1] - lVar9);
  }
  func_0x000107c2b204(&plStack_70);
  return param_2;
}



/* Entry: 10ae5932c; end: 10ae593d7;  */

ushort ** FUN_10ae5932c(ushort *param_1,ulong param_2)

{
  uint uVar1;
  ushort **ppuVar2;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ushort *puStack_30;
  ulong uStack_28;
  
  if (((param_2 < 2) ||
      (uStack_28 = (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8),
      param_2 - 2 < uStack_28)) ||
     (puStack_30 = param_1 + 1, uStack_28 == 0 || param_2 - 2 != uStack_28)) {
    ppuVar2 = (ushort **)0x0;
  }
  else {
    do {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      ppuVar2 = &puStack_30;
      FUN_10ae58f0c(ppuVar2,&uStack_80,&uStack_81,0);
      func_0x000107c2b534(uStack_80);
      uVar1 = 0;
      if (uStack_28 != 0) {
        uVar1 = (uint)ppuVar2;
      }
    } while ((uVar1 & 1) != 0);
  }
  return ppuVar2;
}



/* Entry: 10ae593d8; end: 10ae5946f;  */

long FUN_10ae593d8(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = param_2;
    FUN_10ae5932c(param_2,param_3);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      lVar2 = lVar3 + 0xd8;
      func_0x000107c2b684(lVar2,param_3);
      if (param_3 == 0) {
        return lVar2;
      }
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      _memcpy(*(undefined8 *)(lVar3 + 0xd8),param_2,param_3);
      return lVar2;
    }
    func_0x000107c2b29c(0x10,0,0x13e,&UNK_10f6cfc38,0x393);
  }
  return 0;
}



/* Entry: 10ae59470; end: 10ae594ab;  */

void FUN_10ae59470(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x618) >> 1 & 1) == 0)) {
    *param_2 = &UNK_10e52ac7c;
    uVar2 = 5;
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 0x228);
    uVar2 = *(undefined8 *)(lVar1 + 0x230);
  }
  *param_3 = uVar2;
  return;
}



/* Entry: 10ae594ac; end: 10ae594ef;  */

void FUN_10ae594ac(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1 + 0x18;
    func_0x000107c2b58c();
    if (iVar1 != 0) {
      FUN_10ae594f0(param_1 + 8);
      if (param_1 != 0) {
        plVar2 = (long *)(param_1 + -8);
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
  }
  return;
}



/* Entry: 10ae594f0; end: 10ae5951f;  */

undefined8 FUN_10ae594f0(undefined8 param_1)

{
  FUN_10ae59520(param_1,0,0);
  return param_1;
}



/* Entry: 10ae59520; end: 10ae59593;  */

void FUN_10ae59520(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1[1] != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      func_0x00010ae5961c(*param_1 + lVar1,0);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < (ulong)param_1[1]);
  }
  func_0x000107c2b534(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10ae59594; end: 10ae5965b;  */

undefined8 * FUN_10ae59594(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x50;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cfcb5,0xc6);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar3 = param_1[2];
    uVar5 = param_1[5];
    uVar4 = param_1[4];
    puVar1[4] = param_1[3];
    puVar1[3] = uVar3;
    *puVar1 = 0x48;
    uVar3 = param_1[1];
    puVar2 = puVar1 + 1;
    *puVar2 = *param_1;
    puVar1[2] = uVar3;
    *param_1 = 0;
    param_1[1] = 0;
    puVar1[6] = uVar5;
    puVar1[5] = uVar4;
    uVar3 = param_1[6];
    puVar1[8] = param_1[7];
    puVar1[7] = uVar3;
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 8);
  }
  return puVar2;
}



/* Entry: 10ae5965c; end: 10ae59823;  */

void FUN_10ae5965c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar6 = (int)&uStack_60;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = param_1;
  uVar13 = param_2[1];
  if (1 < uVar13) {
    puVar14 = (ushort *)*param_2;
    *param_2 = (long)(puVar14 + 1);
    param_2[1] = uVar13 - 2;
    *(ushort *)(param_3 + 3) = *puVar14 >> 8 | *puVar14 << 8;
    if (0x1f < uVar13 - 2) {
      *param_2 = (long)(puVar14 + 0x11);
      param_2[1] = uVar13 - 0x22;
      if (uVar13 - 0x22 != 0) {
        lVar1 = (long)puVar14 + 0x23;
        uVar12 = uVar13 - 0x23;
        *param_2 = lVar1;
        param_2[1] = uVar12;
        uVar5 = puVar14[0x11];
        uVar9 = (ulong)(byte)uVar5;
        if (uVar9 <= uVar12) {
          *param_2 = lVar1 + uVar9;
          param_2[1] = uVar12 - uVar9;
          if ((byte)uVar5 < 0x21) {
            param_3[4] = puVar14 + 1;
            param_3[5] = 0x20;
            param_3[6] = lVar1;
            param_3[7] = uVar9;
            uVar9 = param_2[1];
            if (**(char **)*param_3 != '\0') {
              if (uVar9 == 0) {
                return;
              }
              pbVar10 = (byte *)*param_2;
              pbVar2 = pbVar10 + 1;
              uVar12 = uVar9 - 1;
              *param_2 = (long)pbVar2;
              param_2[1] = uVar12;
              uVar11 = (ulong)*pbVar10;
              uVar9 = uVar12 - uVar11;
              if (uVar12 < uVar11) {
                return;
              }
              *param_2 = (long)(pbVar2 + uVar11);
              param_2[1] = uVar9;
            }
            uVar12 = uVar9 - 2;
            if (1 < uVar9) {
              puVar8 = (undefined1 *)*param_2;
              puVar3 = puVar8 + 2;
              *param_2 = (long)puVar3;
              param_2[1] = uVar12;
              bVar4 = puVar8[1];
              uVar9 = (ulong)CONCAT11(*puVar8,bVar4);
              if (uVar9 <= uVar12) {
                *param_2 = (long)(puVar3 + uVar9);
                param_2[1] = uVar12 - uVar9;
                if ((((1 < uVar9) && ((bVar4 & 1) == 0)) &&
                    (plVar7 = param_2, FUN_10ae2009c(param_2,&uStack_50,1), (int)plVar7 != 0)) &&
                   (lStack_48 != 0)) {
                  param_3[8] = puVar3;
                  param_3[9] = uVar9;
                  param_3[10] = uStack_50;
                  param_3[0xb] = lStack_48;
                  if (param_2[1] == 0) {
                    param_3[0xc] = 0;
                    param_3[0xd] = 0;
                  }
                  else {
                    plVar7 = param_2;
                    FUN_10ae2009c(param_2,&uStack_60,2);
                    if ((int)plVar7 == 0) {
                      return;
                    }
                    func_0x000107c2b6a4();
                    if (iVar6 == 0) {
                      return;
                    }
                    param_3[0xc] = uStack_60;
                    param_3[0xd] = uStack_58;
                  }
                  param_3[1] = puVar14;
                  param_3[2] = uVar13 - param_2[1];
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10ae59824; end: 10ae5987b;  */

undefined8 FUN_10ae59824(long param_1,long *param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x60);
  uVar4 = *(ulong *)(param_1 + 0x68);
  do {
    if ((uVar4 < 2) || ((uVar4 & 0xfffffffffffffffe) == 2)) {
      return 0;
    }
    uVar6 = (ulong)((uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8);
    uVar5 = uVar4 - 4;
    uVar4 = uVar5 - uVar6;
    if (uVar5 < uVar6) {
      return 0;
    }
    uVar2 = *puVar3;
    puVar1 = puVar3 + 2;
    puVar3 = (ushort *)((long)puVar1 + uVar6);
  } while (((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) != param_3);
  *param_2 = (long)puVar1;
  param_2[1] = uVar6;
  return 1;
}



/* Entry: 10ae5987c; end: 10ae5997b;  */

undefined8 FUN_10ae5987c(long *param_1,short *param_2)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  long lVar8;
  short *psVar9;
  
  lVar1 = *param_1;
  lVar4 = *(long *)(param_1[1] + 0x68);
  if (lVar4 == 0) {
    psVar5 = (short *)&UNK_10e52ac82;
    lVar4 = 3;
  }
  else {
    psVar5 = *(short **)(param_1[1] + 0x60);
  }
  psVar6 = (short *)param_1[0x4f];
  lVar8 = param_1[0x50];
  if ((*(byte *)(lVar1 + 0x82) >> 6 & 1) == 0) {
    if (lVar8 == 0) {
      return 0;
    }
    psVar9 = psVar6 + lVar8;
    psVar7 = psVar5;
    lVar8 = lVar4;
    psVar5 = psVar6;
  }
  else {
    psVar9 = psVar5 + lVar4;
    psVar7 = psVar6;
  }
  do {
    if (lVar8 != 0) {
      sVar2 = *psVar5;
      psVar6 = psVar7;
      lVar4 = lVar8 << 1;
      do {
        if ((sVar2 == *psVar6) &&
           ((lVar3 = lVar1, func_0x000107c2b89c(), 0x303 < (uint)lVar3 || (sVar2 != 0x4138)))) {
          *param_2 = sVar2;
          return 1;
        }
        psVar6 = psVar6 + 1;
        lVar4 = lVar4 + -2;
      } while (lVar4 != 0);
    }
    psVar5 = psVar5 + 1;
    if (psVar5 == psVar9) {
      return 0;
    }
  } while( true );
}



/* Entry: 10ae5997c; end: 10ae59a0b;  */

bool FUN_10ae5997c(undefined8 *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_2 == 0x4138) {
    uVar2 = (uint)*param_1;
    func_0x000107c2b89c();
    if (uVar2 < 0x304) {
      return false;
    }
  }
  lVar4 = *(long *)(param_1[1] + 0x68);
  if (lVar4 == 0) {
    puVar3 = (ushort *)&UNK_10e52ac82;
    lVar4 = 3;
  }
  else {
    puVar3 = *(ushort **)(param_1[1] + 0x60);
  }
  lVar4 = lVar4 * 2;
  do {
    lVar4 = lVar4 + -2;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
  } while (uVar1 != param_2 && lVar4 != 0);
  return uVar1 == param_2;
}



/* Entry: 10ae59a0c; end: 10ae59c2f;  */

void FUN_10ae59a0c(long *param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char cStack_49;
  undefined8 uStack_48;
  ushort *puStack_40;
  ulong uStack_38;
  
  lVar11 = *param_1;
  if ((*(long *)(*(long *)(lVar11 + 0x68) + 0x250) == 0) ||
     (FUN_10ae59824(param_3,&puStack_40,0x10), (param_3 & 1) == 0)) {
    if (*(long *)(lVar11 + 0x98) == 0) {
      return;
    }
    func_0x000107c2b29c(0x10,0,0x133,&UNK_10f6cfd23,0x60c);
    uVar6 = 0x78;
  }
  else {
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xffff7fff;
    uVar2 = uStack_38 - 2;
    if (1 < uStack_38) {
      uVar7 = (ulong)((uint)(*puStack_40 >> 8) | (*puStack_40 & 0xff00ff) << 8);
      puVar8 = puStack_40 + 1;
      uVar9 = uVar2;
      if ((uVar7 <= uVar2 && uVar2 == uVar7) && uVar7 != 0) {
        do {
          if (uVar9 == 0) {
            lVar12 = lVar11;
            (**(code **)(*(long *)(lVar11 + 0x68) + 0x250))
                      (lVar11,&uStack_48,&cStack_49,puStack_40 + 1,uVar2,
                       *(undefined8 *)(*(long *)(lVar11 + 0x68) + 600));
            uVar3 = (uint)lVar12;
            uVar1 = 2;
            if ((uVar3 & 0xfffffffd) != 1) {
              uVar1 = uVar3;
            }
            if (*(long *)(lVar11 + 0x98) != 0) {
              uVar3 = uVar1;
            }
            if ((int)uVar3 < 2) {
              if (uVar3 == 0) {
                if (cStack_49 == '\0') {
                  func_0x000107c2b29c(0x10,0,0x103,&UNK_10f6cfd23,0x62d);
                }
                else {
                  lVar12 = *(long *)(lVar11 + 0x30);
                  lVar11 = lVar12 + 0x1e0;
                  func_0x000107c2b684(lVar11,cStack_49);
                  if ((int)lVar11 != 0) {
                    _memcpy(*(undefined8 *)(lVar12 + 0x1e0),uStack_48,cStack_49);
                    return;
                  }
                }
                uVar6 = 0x50;
                goto LAB_10ae59ad4;
              }
              if (uVar3 == 1) {
                return;
              }
            }
            else {
              if (uVar3 == 2) {
                *param_2 = 0x78;
                uVar4 = 0x133;
                uVar5 = 0x63c;
                goto LAB_10ae59bfc;
              }
              if (uVar3 == 3) {
                return;
              }
            }
            *param_2 = 0x50;
            uVar4 = 0x44;
            uVar5 = 0x641;
LAB_10ae59bfc:
            func_0x000107c2b29c(0x10,0,uVar4,&UNK_10f6cfd23,uVar5);
            return;
          }
          uVar7 = (ulong)(byte)*puVar8;
          uVar10 = uVar9 - 1;
          puVar8 = (ushort *)((long)puVar8 + uVar7 + 1);
          uVar9 = uVar10 - uVar7;
        } while (uVar7 - 1 < uVar10);
      }
    }
    func_0x000107c2b29c(0x10,0,0xbe,&UNK_10f6cfd23,0x61b);
    uVar6 = 0x32;
  }
LAB_10ae59ad4:
  *param_2 = uVar6;
  return;
}



/* Entry: 10ae59c30; end: 10ae59f43;  */

undefined8 FUN_10ae59c30(undefined8 param_1,undefined1 *param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  char *pcVar3;
  
  if (1 < (ulong)param_3[1]) {
    pcVar3 = (char *)*param_3;
    lVar1 = param_3[1] - 2;
    *param_3 = (long)(pcVar3 + 2);
    param_3[1] = lVar1;
    if (lVar1 == 0) {
      if (pcVar3[1] == '\0' && *pcVar3 == '\0') {
        return 1;
      }
      func_0x000107c2b29c(0x10,0,0xc3,&UNK_10f6cfd23,0x7e4);
      uVar2 = 0x73;
      goto LAB_10ae59c80;
    }
  }
  func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,0x7dd);
  uVar2 = 0x32;
LAB_10ae59c80:
  *param_2 = uVar2;
  return 0;
}



/* Entry: 10ae59f44; end: 10ae5a0bf;  */

undefined8
FUN_10ae59f44(long param_1,undefined8 param_2,long *param_3,undefined1 *param_4,ulong param_5)

{
  ushort *puVar1;
  bool bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puStack_40;
  ulong uStack_38;
  
  FUN_10ae59824(param_5,&puStack_40,0x33);
  if ((param_5 & 1) == 0) {
    func_0x000107c2b29c(0x10,0,0x102,&UNK_10f6cfd23,0x958);
    uVar5 = 0x6d;
  }
  else {
    uVar6 = uStack_38 - 2;
    if ((uStack_38 < 2) ||
       (puVar9 = puStack_40 + 1, uVar6 != ((uint)(*puStack_40 >> 8) | (*puStack_40 & 0xff00ff) << 8)
       )) {
      uVar4 = 0x960;
LAB_10ae5a06c:
      func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,uVar4);
      return 0;
    }
    uVar10 = 0;
    puVar8 = (ushort *)0x0;
    do {
      if (uVar6 == 0) {
        if (param_3 != (long *)0x0) {
          *param_3 = (long)puVar8;
          param_3[1] = uVar10;
        }
        *(bool *)param_2 = uVar10 != 0;
        return 1;
      }
      if ((uVar6 == 1) || ((uVar6 & 0xfffffffffffffffe) == 2)) {
LAB_10ae5a088:
        uVar4 = 0x96e;
        goto LAB_10ae5a06c;
      }
      uVar11 = (ulong)((uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8);
      uVar7 = uVar6 - 4;
      uVar6 = uVar7 - uVar11;
      if (uVar7 < uVar11 || uVar11 == 0) goto LAB_10ae5a088;
      uVar3 = *puVar9;
      puVar1 = puVar9 + 2;
      puVar9 = (ushort *)((long)puVar1 + uVar11);
    } while (((ushort)(uVar3 >> 8 | uVar3 << 8) != *(ushort *)(*(long *)(param_1 + 0x5d8) + 6)) ||
            (bVar2 = uVar10 == 0, uVar10 = uVar11, puVar8 = puVar1, bVar2));
    func_0x000107c2b29c(0x10,0,0x108,&UNK_10f6cfd23,0x974);
    uVar5 = 0x2f;
  }
  *param_4 = uVar5;
  return 0;
}



/* Entry: 10ae5a0c0; end: 10ae5a157;  */

void FUN_10ae5a0c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_60;
  uVar2 = param_2;
  func_0x000107c2b228(param_2,0x33);
  if (((int)uVar2 != 0) &&
     (uVar2 = param_2, func_0x000107c34f3c(param_2,auStack_40,2), (int)uVar2 != 0)) {
    puVar3 = auStack_40;
    func_0x000107c2b228(puVar3,*(undefined2 *)(*(long *)(param_1 + 0x5d8) + 6));
    if ((int)puVar3 != 0) {
      puVar3 = auStack_40;
      func_0x000107c34f3c(puVar3,auStack_60,2);
      if (((int)puVar3 != 0) &&
         (func_0x000107c2b21c(auStack_60,*(undefined8 *)(param_1 + 600),
                              *(undefined8 *)(param_1 + 0x260)), iVar1 != 0)) {
        func_0x000107c2b20c(param_2);
      }
    }
  }
  return;
}



/* Entry: 10ae5a158; end: 10ae5a437;  */

undefined8 FUN_10ae5a158(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ushort *puVar6;
  bool bVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uStack_60;
  long lStack_58;
  ushort *puStack_50;
  ulong uStack_48;
  
  lVar1 = *param_1;
  lVar13 = *(long *)(lVar1 + 0x30);
  uVar12 = *(ulong *)(lVar13 + 0x1e8);
  if (uVar12 == 0) {
    return 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  func_0x000107c2b89c();
  if ((uint)lVar1 < 0x304) {
    return 1;
  }
  pbVar14 = *(byte **)(lVar13 + 0x1e0);
  plVar2 = param_1;
  func_0x000107c2b6bc(param_1,&uStack_60,pbVar14,uVar12);
  if ((int)plVar2 == 0) {
    return 1;
  }
  FUN_10ae59824(param_3,&puStack_50,0x4469);
  lVar1 = lStack_58;
  uVar3 = uStack_60;
  if ((int)param_3 == 0) {
    return 1;
  }
  uVar5 = uStack_48 - 2;
  if (1 < uStack_48) {
    puVar6 = puStack_50 + 1;
    uVar8 = (ulong)((uint)(*puStack_50 >> 8) | (*puStack_50 & 0xff00ff) << 8);
    if ((uVar8 <= uVar5) &&
       (puStack_50 = (ushort *)((long)puVar6 + uVar8), uVar5 == uVar8 && uVar8 != 0)) {
      bVar7 = false;
      do {
        while( true ) {
          pbVar9 = (byte *)((long)puVar6 + 1);
          uVar10 = (ulong)(byte)*puVar6;
          uVar8 = uVar5 - 1;
          uVar5 = uVar8 - uVar10;
          if ((uVar8 < uVar10) || ((byte)*puVar6 == 0)) {
            uVar3 = 0xbf8;
            goto LAB_10ae5a204;
          }
          puVar6 = (ushort *)(pbVar9 + uVar10);
          pbVar11 = pbVar14;
          uVar8 = uVar12;
          if (uVar12 != uVar10) break;
          do {
            uVar8 = uVar8 - 1;
            if (*pbVar9 != *pbVar11) goto LAB_10ae5a288;
            pbVar9 = pbVar9 + 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar8 != 0);
          bVar7 = true;
          if (uVar5 == 0) goto LAB_10ae5a290;
        }
LAB_10ae5a288:
      } while (uVar5 != 0);
      if (!bVar7) {
        return 1;
      }
LAB_10ae5a290:
      *(byte *)(param_1[0xbb] + 0x1b0) = *(byte *)(param_1[0xbb] + 0x1b0) | 0x40;
      lVar13 = param_1[0xbb];
      uVar12 = lVar13 + 400;
      func_0x000107c2b684(uVar12,lStack_58);
      if ((lVar1 != 0) && ((int)uVar12 != 0)) {
        _memcpy(*(undefined8 *)(lVar13 + 400),uVar3,lVar1);
      }
      if ((uVar12 & 1) != 0) {
        return 1;
      }
      uVar4 = 0x50;
      goto LAB_10ae5a220;
    }
  }
  uVar3 = 0xbef;
LAB_10ae5a204:
  func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,uVar3);
  uVar4 = 0x32;
LAB_10ae5a220:
  *param_2 = uVar4;
  return 0;
}



/* Entry: 10ae5a438; end: 10ae5a6e3;  */

undefined8 FUN_10ae5a438(long *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ushort **ppuVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  ushort *puVar14;
  long lVar15;
  undefined1 uStack_71;
  ushort *puStack_70;
  ulong uStack_68;
  
  lVar15 = *param_1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  uVar13 = *(ulong *)(param_2 + 0x68);
  if (uVar13 != 0) {
    puVar14 = *(ushort **)(param_2 + 0x60);
    do {
      if ((uVar13 == 1) || ((uVar13 & 0xfffffffffffffffe) == 2)) {
LAB_10ae5a610:
        uVar12 = 0x32;
        goto LAB_10ae5a6b0;
      }
      uVar10 = (ulong)((uint)(puVar14[1] >> 8) | (puVar14[1] & 0xff00ff) << 8);
      uVar7 = uVar13 - 4;
      uVar13 = uVar7 - uVar10;
      if (uVar7 < uVar10) goto LAB_10ae5a610;
      lVar8 = 0;
      uVar1 = *puVar14;
      puStack_70 = puVar14 + 2;
      puVar14 = (ushort *)((long)puStack_70 + uVar10);
      puVar11 = (ushort *)&UNK_110c89b48;
      do {
        uStack_68 = uVar10;
        if (*puVar11 == (ushort)(uVar1 >> 8 | uVar1 << 8)) {
          *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) | 1 << (ulong)((uint)lVar8 & 0x1f);
          uStack_71 = 0x32;
          plVar4 = param_1;
          (**(code **)(puVar11 + 0xc))(param_1,&uStack_71,&puStack_70);
          uVar12 = uStack_71;
          if ((int)plVar4 == 0) {
            func_0x000107c2b29c(0x10,0,0x95,&UNK_10f6cfd23,0xe1d);
            FUN_10ae2a054(&UNK_10f6cfd94);
            goto LAB_10ae5a6b0;
          }
          break;
        }
        lVar8 = lVar8 + 1;
        puVar11 = puVar11 + 0x14;
      } while (lVar8 != 0x18);
    } while (uVar13 != 0);
  }
  lVar8 = 0;
  do {
    uVar2 = 1 << (ulong)((uint)lVar8 & 0x1f);
    if ((uVar2 & *(uint *)(param_1 + 0x2f)) == 0) {
      if (*(short *)(&UNK_110c89b48 + lVar8 * 0x28) == -0xff) {
        uVar13 = *(ulong *)(param_2 + 0x48);
        puVar14 = *(ushort **)(param_2 + 0x40);
        do {
          bVar3 = uVar13 < 2;
          uVar13 = uVar13 - 2;
          if (bVar3) goto LAB_10ae5a590;
          uVar1 = *puVar14;
          puVar14 = puVar14 + 1;
        } while ((ushort)(uVar1 >> 8 | uVar1 << 8) != 0xff);
        puStack_70 = (ushort *)&UNK_10e52acda;
        uStack_68 = 1;
        *(uint *)(param_1 + 0x2f) = uVar2 | *(uint *)(param_1 + 0x2f);
        ppuVar6 = &puStack_70;
      }
      else {
LAB_10ae5a590:
        ppuVar6 = (ushort **)0x0;
      }
      uStack_71 = 0x32;
      plVar4 = param_1;
      (*(code *)(&PTR_DAT_110c89b60)[lVar8 * 5])(param_1,&uStack_71,ppuVar6);
      if (((ulong)plVar4 & 1) == 0) {
        func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6cfd23,0xe39);
        FUN_10ae2a054(&UNK_10f6cfd94);
        uVar12 = uStack_71;
LAB_10ae5a6b0:
        FUN_10ae60390(lVar15,2,uVar12);
        return 0;
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x18);
  lVar8 = *param_1;
  puStack_70 = (ushort *)CONCAT44(puStack_70._4_4_,0x70);
  lVar15 = *(long *)(lVar8 + 0x68);
  pcVar9 = *(code **)(lVar15 + 0x1f0);
  if (pcVar9 == (code *)0x0) {
    lVar15 = *(long *)(lVar8 + 0x70);
    pcVar9 = *(code **)(lVar15 + 0x1f0);
    if (pcVar9 == (code *)0x0) goto LAB_10ae5a5fc;
  }
  lVar5 = lVar8;
  (*pcVar9)(lVar8,&puStack_70,*(undefined8 *)(lVar15 + 0x1f8));
  if ((int)lVar5 == 2) {
    FUN_10ae60390(lVar8,2,(ulong)puStack_70 & 0xffffffff);
    func_0x000107c2b29c(0x10,0,0x84,&UNK_10f6cfd23,0xe4d);
    return 0;
  }
  if ((int)lVar5 != 3) {
    return 1;
  }
LAB_10ae5a5fc:
  *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xfffffdff;
  return 1;
}



/* Entry: 10ae5a6e4; end: 10ae5aba7;  */

undefined8 *****
FUN_10ae5a6e4(long *param_1,undefined8 *****param_2,undefined1 *param_3,undefined8 *****param_4,
             ulong param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  long lVar16;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  ulong uStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_78;
  long lStack_70;
  
  iVar2 = (int)&ppppuStack_180;
  pppppuVar14 = &ppppuStack_180;
  pppppuVar13 = &ppppuStack_180;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = (undefined8 *****)*param_1;
  *param_3 = 0;
  pppppuVar6 = (undefined8 *****)0x0;
  pppppuVar12 = param_2;
  func_0x000107c2b6c0();
  lVar15 = *param_1;
  pppppuVar11 = (undefined8 *****)0x2;
  if (((*(byte *)(lVar15 + 0x81) >> 6 & 1) == 0) && (param_7 < 0x21)) {
    pppppuVar12 = pppppuVar10;
    func_0x000107c2b89c();
    ppppuStack_180 = (undefined8 *****)0x0;
    ppppuStack_178 = (undefined8 *****)0x0;
    lVar16 = param_1[0xc2];
    bVar1 = (uint)pppppuVar12 < 0x304;
    if ((bVar1 || lVar16 == 0) || ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0)) {
LAB_10ae5a7c4:
      if (pppppuVar10[0xe][0x59] == (undefined8 ***)0x0) {
        if (param_5 < 0x20) {
          pppppuVar11 = (undefined8 *****)0x2;
        }
        else {
          if (pppppuVar10[0xe][0x42] == (undefined8 ***)0x0) {
            pppppuVar14 = *(undefined8 ******)(lVar15 + 0x70);
            pppppuVar11 = pppppuVar14;
            FUN_10ae64458();
            if ((int)pppppuVar11 == 0) {
              pppppuVar11 = (undefined8 *****)0x3;
              goto LAB_10ae5aa54;
            }
            FUN_10ae34928();
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            ppppuStack_f8 = (undefined8 *****)0x0;
            ppppuStack_100 = (undefined8 *****)0x0;
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            ppppuStack_170 = (undefined8 *****)0x0;
            uStack_158 = 0;
            uStack_160 = 0;
            pppppuVar12 = pppppuVar14 + 2;
            _pthread_rwlock_rdlock();
            if ((int)pppppuVar12 != 0) goto LAB_10ae5ab60;
            ppppuVar8 = pppppuVar14[0x40];
            if (ppppuVar8 == (undefined8 ****)0x0) {
LAB_10ae5a98c:
              ppppuVar8 = pppppuVar14[0x41];
              if (ppppuVar8 != (undefined8 ****)0x0) {
                lVar15 = 0;
                do {
                  if (*(char *)((long)param_4 + lVar15) != *(char *)((long)ppppuVar8 + lVar15))
                  goto LAB_10ae5aa08;
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 0x10);
                goto LAB_10ae5a9b4;
              }
LAB_10ae5aa08:
              iVar2 = 0;
              pppppuVar11 = (undefined8 *****)0x2;
            }
            else {
              lVar15 = 0;
              do {
                if (*(char *)((long)param_4 + lVar15) != *(char *)((long)ppppuVar8 + lVar15))
                goto LAB_10ae5a98c;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 0x10);
LAB_10ae5a9b4:
              func_0x000107c2b428();
              pppppuVar4 = &ppppuStack_170;
              pppppuVar6 = (undefined8 *****)(ppppuVar8 + 2);
              func_0x000107c2b494(pppppuVar4,pppppuVar6,0x10,pppppuVar12,0);
              if ((int)pppppuVar4 == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (int)&ppppuStack_100;
                FUN_10ae340b8();
                pppppuVar6 = pppppuVar11;
              }
              pppppuVar11 = (undefined8 *****)0x3;
            }
            pppppuVar12 = pppppuVar14 + 2;
            _pthread_rwlock_unlock();
            if ((int)pppppuVar12 != 0) goto LAB_10ae5ab60;
            if (iVar2 != 0) {
              pppppuVar6 = &ppppuStack_100;
              FUN_10ae5c8cc(&ppppuStack_180,pppppuVar6,&ppppuStack_170,param_4,param_5);
              pppppuVar11 = pppppuVar13;
            }
          }
          else {
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            ppppuStack_f8 = (undefined8 *****)0x0;
            ppppuStack_100 = (undefined8 *****)0x0;
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_168 = 0;
            ppppuStack_170 = (undefined8 *****)0x0;
            uStack_158 = 0;
            uStack_160 = 0;
            pppppuVar6 = param_4;
            (**(code **)(*(long *)(lVar15 + 0x70) + 0x210))
                      (lVar15,param_4,param_4 + 2,&ppppuStack_100,&ppppuStack_170,0);
            iVar2 = (int)lVar15;
            if (iVar2 < 0) {
              pppppuVar11 = (undefined8 *****)0x3;
            }
            else if (iVar2 == 0) {
              pppppuVar11 = (undefined8 *****)0x2;
            }
            else {
              if (iVar2 == 2) {
                *param_3 = 1;
              }
              pppppuVar6 = &ppppuStack_100;
              FUN_10ae5c8cc(&ppppuStack_180,pppppuVar6,&ppppuStack_170,param_4,param_5);
              pppppuVar11 = pppppuVar14;
            }
          }
          func_0x000107c2b49c(&ppppuStack_170);
          FUN_10ae33ff8(&ppppuStack_100);
        }
      }
      else {
        ppppuStack_100 = (undefined8 *****)0x0;
        ppppuStack_f8 = (undefined8 *****)0x0;
        pppppuVar12 = &ppppuStack_100;
        func_0x000107c2b684(pppppuVar12,param_5);
        if (((ulong)pppppuVar12 & 1) == 0) {
          pppppuVar6 = (undefined8 *****)0x0;
          func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6cfd23,0xf5e);
          pppppuVar11 = (undefined8 *****)0x3;
        }
        else {
          pppppuVar12 = (undefined8 *****)*param_1;
          pppppuVar6 = (undefined8 *****)ppppuStack_100;
          (*(code *)pppppuVar12[0xe][0x59][2])
                    (pppppuVar12,ppppuStack_100,&ppppuStack_170,param_5,param_4,param_5);
          pppppuVar11 = pppppuVar12;
          if ((int)pppppuVar12 == 0) {
            if (ppppuStack_f8 < ppppuStack_170) {
LAB_10ae5ab60:
              _abort();
              goto LAB_10ae5ab64;
            }
            ppppuStack_f8 = ppppuStack_170;
            func_0x000107c2b534(0);
            ppppuStack_180 = ppppuStack_100;
            ppppuStack_178 = ppppuStack_f8;
            ppppuStack_100 = (undefined8 *****)0x0;
            ppppuStack_f8 = (undefined8 *****)0x0;
          }
        }
        func_0x000107c2b534(ppppuStack_100);
      }
LAB_10ae5aa54:
      if (!bVar1 && lVar16 != 0) goto LAB_10ae5aa58;
LAB_10ae5aa60:
      if ((int)pppppuVar11 == 0) {
LAB_10ae5aa64:
        pppppuVar12 = pppppuVar10 + 0xd;
        pppppuVar10 = (undefined8 *****)ppppuStack_180;
        pppppuVar6 = (undefined8 *****)ppppuStack_178;
        FUN_10ae61ca4(ppppuStack_180,ppppuStack_178,*pppppuVar12);
        if (pppppuVar10 == (undefined8 *****)0x0) {
          func_0x000107c2b290();
          pppppuVar11 = (undefined8 *****)0x2;
        }
        else {
          func_0x000107c2b43c(param_4,param_5,(long)pppppuVar10 + 0x44);
          *(undefined4 *)(pppppuVar10 + 8) = 0x20;
          pppppuVar6 = pppppuVar10;
          func_0x000107c2b6c0(param_2);
          pppppuVar11 = (undefined8 *****)0x0;
        }
      }
    }
    else {
      pppppuVar12 = *(undefined8 ******)(lVar16 + 0x78);
      if (pppppuVar12 == (undefined8 *****)0x0) {
        if ((*(byte *)(lVar16 + 0x80) & 1) == 0) goto LAB_10ae5a7c4;
        pppppuVar11 = (undefined8 *****)0x2;
      }
      else {
        pppppuVar13 = *(undefined8 ******)(lVar16 + 0x70);
        pppppuVar6 = pppppuVar12;
        func_0x000107c2b684();
        if (iVar2 == 0) {
          pppppuVar11 = (undefined8 *****)0x3;
        }
        else {
          _memcpy(ppppuStack_180,pppppuVar13,pppppuVar12);
          pppppuVar11 = (undefined8 *****)0x0;
          pppppuVar6 = pppppuVar13;
        }
      }
LAB_10ae5aa58:
      ppppuVar8 = ppppuStack_178;
      pppppuVar12 = (undefined8 *****)ppppuStack_180;
      if ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) == 0) goto LAB_10ae5aa60;
      if ((int)pppppuVar11 == 0) {
        uVar5 = lVar16 + 0x70;
        pppppuVar6 = (undefined8 *****)ppppuStack_178;
        func_0x000107c2b684();
        uVar3 = (uint)uVar5 ^ 1;
        if ((undefined8 *****)ppppuVar8 == (undefined8 *****)0x0) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) == 0) {
          _memcpy(*(undefined8 *)(lVar16 + 0x70),pppppuVar12,ppppuVar8);
          pppppuVar6 = pppppuVar12;
        }
        if ((uVar5 & 1) == 0) {
          pppppuVar11 = (undefined8 *****)0x3;
          goto LAB_10ae5ab04;
        }
        goto LAB_10ae5aa64;
      }
      if ((int)pppppuVar11 == 2) {
        *(undefined1 *)(lVar16 + 0x80) = 1;
      }
    }
LAB_10ae5ab04:
    pppppuVar12 = (undefined8 *****)ppppuStack_180;
    func_0x000107c2b534();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar11;
  }
  ___stack_chk_fail();
LAB_10ae5ab64:
  func_0x000107c2b49c(&ppppuStack_170);
  FUN_10ae33ff8(&ppppuStack_100);
  func_0x000107c2b534(ppppuStack_180);
  pppppuVar11 = pppppuVar12;
  __Unwind_Resume();
  pcStack_188 = FUN_10ae5aba8;
  uVar3 = (uint)*pppppuVar11;
  uStack_1a0 = param_5;
  ppppuStack_198 = pppppuVar12;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x000107c2b89c();
  if (uVar3 < 0x303) {
    pppppuVar12 = (undefined8 *****)0x1;
  }
  else {
    if (pppppuVar6[1] != (undefined8 ****)0x0) {
      iVar2 = (int)&pppuStack_1c0;
      ppppuVar8 = pppppuVar6[1];
      ppppuStack_1b0 = pppppuVar10;
      ppppuStack_1a8 = param_4;
      if (((ulong)ppppuVar8 & 1) == 0) {
        ppppuVar9 = *pppppuVar6;
        pppuStack_1c0 = (undefined8 ****)0x0;
        pppuStack_1b8 = (undefined8 ****)0x0;
        func_0x000107c2b6a8(&pppuStack_1c0,(ulong)ppppuVar8 >> 1);
        if (iVar2 == 0) {
LAB_10ae5acd0:
          pppppuVar12 = (undefined8 *****)0x0;
        }
        else {
          if ((undefined8 ****)pppuStack_1b8 != (undefined8 ****)0x0) {
            ppppuVar7 = (undefined8 ****)0x0;
            do {
              if (ppppuVar8 < (undefined8 ****)0x2) {
                func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0xa11);
                goto LAB_10ae5acd0;
              }
              ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + -2);
              *(ushort *)((long)pppuStack_1c0 + (long)ppppuVar7 * 2) =
                   *(ushort *)ppppuVar9 >> 8 | *(ushort *)ppppuVar9 << 8;
              ppppuVar7 = (undefined8 ****)((long)ppppuVar7 + 1);
              ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 2);
            } while (ppppuVar7 < pppuStack_1b8);
          }
          func_0x000107c2b534(pppppuVar11[0x4d]);
          pppppuVar11[0x4d] = (undefined8 ****)pppuStack_1c0;
          pppppuVar11[0x4e] = (undefined8 ****)pppuStack_1b8;
          pppuStack_1c0 = (undefined8 ****)0x0;
          pppuStack_1b8 = (undefined8 ****)0x0;
          pppppuVar12 = (undefined8 *****)0x1;
        }
        func_0x000107c2b534(pppuStack_1c0);
      }
      else {
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,0xa07);
        pppppuVar12 = (undefined8 *****)0x0;
      }
      return pppppuVar12;
    }
    pppppuVar12 = (undefined8 *****)0x0;
  }
  return pppppuVar12;
}



/* Entry: 10ae5aba8; end: 10ae5abff;  */

undefined8 FUN_10ae5aba8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lStack_40;
  ulong uStack_38;
  
  uVar2 = (uint)*param_1;
  func_0x000107c2b89c();
  if (uVar2 < 0x303) {
    uVar3 = 1;
  }
  else {
    if (param_2[1] != 0) {
      iVar1 = (int)&lStack_40;
      uVar5 = param_2[1];
      if ((uVar5 & 1) == 0) {
        puVar6 = (ushort *)*param_2;
        lStack_40 = 0;
        uStack_38 = 0;
        func_0x000107c2b6a8(&lStack_40,uVar5 >> 1);
        if (iVar1 == 0) {
LAB_10ae5acd0:
          uVar3 = 0;
        }
        else {
          if (uStack_38 != 0) {
            uVar4 = 0;
            do {
              if (uVar5 < 2) {
                func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0xa11);
                goto LAB_10ae5acd0;
              }
              uVar5 = uVar5 - 2;
              *(ushort *)(lStack_40 + uVar4 * 2) = *puVar6 >> 8 | *puVar6 << 8;
              uVar4 = uVar4 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar4 < uStack_38);
          }
          func_0x000107c2b534(param_1[0x4d]);
          param_1[0x4d] = lStack_40;
          param_1[0x4e] = uStack_38;
          lStack_40 = 0;
          uStack_38 = 0;
          uVar3 = 1;
        }
        func_0x000107c2b534(lStack_40);
      }
      else {
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,0xa07);
        uVar3 = 0;
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10ae5ac00; end: 10ae5ad07;  */

undefined8 FUN_10ae5ac00(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort *puVar5;
  long lStack_40;
  ulong uStack_38;
  
  iVar1 = (int)&lStack_40;
  uVar4 = param_1[1];
  if ((uVar4 & 1) == 0) {
    puVar5 = (ushort *)*param_1;
    lStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c2b6a8(&lStack_40,uVar4 >> 1);
    if (iVar1 == 0) {
LAB_10ae5acd0:
      uVar3 = 0;
    }
    else {
      if (uStack_38 != 0) {
        uVar2 = 0;
        do {
          if (uVar4 < 2) {
            func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0xa11);
            goto LAB_10ae5acd0;
          }
          uVar4 = uVar4 - 2;
          *(ushort *)(lStack_40 + uVar2 * 2) = *puVar5 >> 8 | *puVar5 << 8;
          uVar2 = uVar2 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar2 < uStack_38);
      }
      func_0x000107c2b534(*param_2);
      *param_2 = lStack_40;
      param_2[1] = uStack_38;
      lStack_40 = 0;
      uStack_38 = 0;
      uVar3 = 1;
    }
    func_0x000107c2b534(lStack_40);
  }
  else {
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,0xa07);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10ae5ad08; end: 10ae5ae73;  */

undefined8 FUN_10ae5ad08(short *param_1,short *param_2)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  short sVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  
  uVar2 = (uint)*(undefined8 *)param_1;
  lVar9 = *(long *)(*(long *)(param_1 + 4) + 0x20);
  lVar10 = *(long *)(lVar9 + 0x98);
  psVar6 = param_2;
  func_0x000107c2b89c();
  if (uVar2 < 0x303) {
    if (*(int *)(*(long *)(param_1 + 0x2e4) + 4) == 6) {
      sVar7 = -0xff;
    }
    else {
      if (*(int *)(*(long *)(param_1 + 0x2e4) + 4) != 0x198) {
        uVar5 = 0xfdf;
        goto LAB_10ae5ae44;
      }
      sVar7 = 0x203;
    }
    *param_2 = sVar7;
LAB_10ae5ae54:
    uVar5 = 1;
  }
  else {
    psVar11 = param_1;
    func_0x00010ae6295c();
    if ((int)psVar11 == 0) {
      lVar10 = *(long *)(lVar9 + 0x40);
      if (lVar10 == 0) {
        psVar11 = (short *)&UNK_10e52ac88;
        lVar10 = 0xc;
      }
      else {
        psVar11 = *(short **)(lVar9 + 0x38);
      }
    }
    else {
      psVar11 = (short *)(lVar10 + 8);
      lVar10 = 1;
    }
    psVar3 = param_1;
    FUN_10ae5ae74();
    psVar1 = psVar11 + lVar10;
    do {
      sVar7 = *psVar11;
      if ((sVar7 != -0xff) &&
         (psVar4 = param_1, FUN_10ae63aa8(param_1,sVar7), lVar9 = (long)psVar6 << 1, psVar8 = psVar3
         , (int)psVar4 != 0 && psVar6 != (short *)0x0)) {
        do {
          if (sVar7 == *psVar8) {
            *param_2 = sVar7;
            goto LAB_10ae5ae54;
          }
          lVar9 = lVar9 + -2;
          psVar8 = psVar8 + 1;
        } while (lVar9 != 0);
      }
      psVar11 = psVar11 + 1;
    } while (psVar11 != psVar1);
    uVar5 = 0xffe;
LAB_10ae5ae44:
    func_0x000107c2b29c(0x10,0,0xfd,&UNK_10f6cfd23,uVar5);
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 10ae5ae74; end: 10ae5aebb;  */

undefined1  [16] FUN_10ae5ae74(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  puVar3 = (undefined *)param_1[0x4d];
  lVar2 = param_1[0x4e];
  puVar4 = puVar3;
  if (lVar2 == 0) {
    uVar1 = (uint)*param_1;
    func_0x000107c2b89c();
    puVar4 = &UNK_10e52aca0;
    if (0x303 < uVar1) {
      puVar4 = puVar3;
    }
    lVar2 = 2;
    if (0x303 < uVar1) {
      lVar2 = 0;
    }
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar4;
  return auVar5;
}



/* Entry: 10ae5aebc; end: 10ae5b203;  */

long * FUN_10ae5aebc(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar5;
  ushort *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  long **pplVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar17;
  long *plVar18;
  long unaff_x24;
  ushort *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_298 [8];
  long *plStack_290;
  long *plStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [32];
  undefined8 uStack_250;
  undefined8 auStack_248 [8];
  long lStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  long *aplStack_1c0 [8];
  long *plStack_180;
  long **pplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [64];
  long lStack_68;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = (long *)*param_1;
  uVar14 = *(ulong *)(param_2 + 0x10);
  if ((uVar14 < 2) || ((uVar14 & 0xfffffffffffffffe) == 2)) {
LAB_10ae5b08c:
    func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6cfd23,0x101a);
    param_3 = (long *)0x32;
    FUN_10ae60390(plVar18,2);
LAB_10ae5b0b8:
    plVar10 = (long *)0x0;
  }
  else {
    puVar19 = *(ushort **)(param_2 + 8);
    uVar16 = (ulong)((uint)(puVar19[1] >> 8) | (puVar19[1] & 0xff00ff) << 8);
    if ((uVar14 - 4 < uVar16) ||
       ((uVar14 - 4 != 0x80 || (uVar16 != 0x80 || (ushort)(*puVar19 >> 8 | *puVar19 << 8) != 0x7550)
        ))) goto LAB_10ae5b08c;
    plVar5 = (long *)0x19f;
    func_0x000107c2b44c();
    if (plVar5 == (long *)0x0) {
      plVar18 = (long *)0x10;
      param_3 = (long *)0xb4;
      func_0x000107c2b29c(0x10,0,0xb4,&UNK_10f6cfd23,0x1021);
      goto LAB_10ae5b0b8;
    }
    unaff_x20 = plVar5;
    FUN_10ae355c4();
    unaff_x21 = unaff_x20;
    func_0x000107c2b318();
    unaff_x22 = unaff_x21;
    func_0x000107c2b318();
    if (((unaff_x20 == (long *)0x0) || (unaff_x21 == (long *)0x0)) || (unaff_x22 == (long *)0x0)) {
      plVar10 = (long *)0x0;
      if (unaff_x22 != (long *)0x0) goto LAB_10ae5b128;
    }
    else {
      puVar6 = puVar19 + 2;
      param_3 = unaff_x21;
      func_0x000107c2b338(puVar6,0x20);
      if (puVar6 != (ushort *)0x0) {
        puVar6 = puVar19 + 0x12;
        param_3 = unaff_x22;
        func_0x000107c2b338(puVar6,0x20);
        if (puVar6 != (ushort *)0x0) {
          param_3 = (long *)*unaff_x20;
          puVar6 = puVar19 + 0x22;
          func_0x000107c2b338(puVar6,0x20);
          if (puVar6 != (ushort *)0x0) {
            param_3 = (long *)unaff_x20[1];
            puVar6 = puVar19 + 0x32;
            func_0x000107c2b338(puVar6,0x20);
            if (puVar6 != (ushort *)0x0) {
              unaff_x24 = 0;
              func_0x000107c2b470();
              plVar10 = plVar5;
              func_0x000107c2b454();
              plStack_b0 = plVar10;
              if ((unaff_x24 == 0) || (plVar10 == (long *)0x0)) {
                FUN_10ae5cabc(&plStack_b0,0);
                plVar10 = (long *)0x0;
                plVar18 = (long *)0x0;
                if (unaff_x24 == 0) goto LAB_10ae5b128;
              }
              else {
                plVar7 = plVar5;
                param_3 = unaff_x21;
                FUN_10ae35fe0(plVar5,plVar10,unaff_x21,unaff_x22,0);
                if ((((int)plVar7 == 0) ||
                    (lVar15 = unaff_x24, FUN_10ae36348(unaff_x24,plVar5), (int)lVar15 == 0)) ||
                   (lVar15 = unaff_x24, FUN_10ae363f0(unaff_x24,plVar10), (int)lVar15 == 0)) {
LAB_10ae5b19c:
                  plVar18 = (long *)0x0;
                }
                else {
                  param_3 = &lStack_b8;
                  FUN_10ae5b204(param_1,auStack_a8);
                  if (((ulong)param_1 & 1) == 0) goto LAB_10ae5b19c;
                  puVar8 = auStack_a8;
                  param_3 = unaff_x20;
                  FUN_10ae35658(puVar8,lStack_b8,unaff_x20,unaff_x24);
                  if ((int)puVar8 == 0) {
                    func_0x000107c2b29c(0x10,0,0x81,&UNK_10f6cfd23,0x1049);
                    param_3 = (long *)0x33;
                    FUN_10ae60390(plVar18,2);
                    goto LAB_10ae5b19c;
                  }
                  lVar15 = plVar18[6];
                  uVar21 = *(undefined8 *)(puVar19 + 6);
                  uVar20 = *(undefined8 *)(puVar19 + 2);
                  uVar23 = *(undefined8 *)(puVar19 + 0xe);
                  uVar22 = *(undefined8 *)(puVar19 + 10);
                  uVar24 = *(undefined8 *)(puVar19 + 0x12);
                  uVar26 = *(undefined8 *)(puVar19 + 0x1e);
                  uVar25 = *(undefined8 *)(puVar19 + 0x1a);
                  *(undefined8 *)(lVar15 + 0x220) = *(undefined8 *)(puVar19 + 0x16);
                  *(undefined8 *)(lVar15 + 0x218) = uVar24;
                  *(undefined8 *)(lVar15 + 0x230) = uVar26;
                  *(undefined8 *)(lVar15 + 0x228) = uVar25;
                  *(undefined8 *)(lVar15 + 0x200) = uVar21;
                  *(undefined8 *)(lVar15 + 0x1f8) = uVar20;
                  *(undefined8 *)(lVar15 + 0x210) = uVar23;
                  *(undefined8 *)(lVar15 + 0x208) = uVar22;
                  *(ushort *)(plVar18[6] + 0xd4) = *(ushort *)(plVar18[6] + 0xd4) | 0x200;
                  plVar18 = (long *)0x1;
                }
                FUN_10ae5cabc(&plStack_b0,0);
              }
              plVar10 = plVar18;
              func_0x000107c2b478(unaff_x24);
              goto LAB_10ae5b128;
            }
          }
        }
      }
      plVar10 = (long *)0x0;
LAB_10ae5b128:
      func_0x000107c2b31c(unaff_x22);
    }
    if (unaff_x21 != (long *)0x0) {
      func_0x000107c2b31c(unaff_x21);
    }
    if (unaff_x20 != (long *)0x0) {
      func_0x00010ae35620(unaff_x20);
    }
    plVar18 = plVar5;
    func_0x000107c2b448();
    unaff_x19 = plVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar10;
  }
  ___stack_chk_fail();
  plVar5 = (long *)0x0;
  FUN_10ae5cabc(&plStack_b0);
  func_0x000107c2b478(unaff_x24);
  func_0x000107c2b31c(unaff_x22);
  func_0x000107c2b31c(unaff_x21);
  func_0x00010ae35620(unaff_x20);
  func_0x000107c2b448(unaff_x19);
  __Unwind_Resume();
  pcStack_c8 = FUN_10ae5b204;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)*plVar18;
  puVar9 = puVar17;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c2b89c();
  if ((uint)puVar9 < 0x304) {
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    pplStack_178 = (long **)0xa54ff53a3c6ef372;
    plStack_180 = (long *)0xbb67ae856a09e667;
    uStack_168 = 0x5be0cd191f83d9ab;
    uStack_170 = 0x9b05688c510e527f;
    uStack_114 = 0x20;
    func_0x000107c2b4fc(&plStack_180,&UNK_10e52aca4,0x19);
    if (puVar17[0xb] != 0) {
      func_0x000107c2b4fc(&plStack_180,&UNK_10e52acbd,0xb);
      if (*(char *)(puVar17[0xb] + 0x170) == '\0') {
        plVar10 = (long *)0x10;
        pplVar13 = (long **)0x0;
        func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0x1092);
        plVar18 = (long *)0x0;
        goto LAB_10ae5b360;
      }
      func_0x000107c2b4fc(&plStack_180,puVar17[0xb] + 0x130);
    }
    plVar18 = plVar18 + 0x33;
    pplVar13 = aplStack_1c0;
    func_0x000107c2b890(plVar18,pplVar13,&uStack_1c8);
    plVar10 = plVar18;
    if ((int)plVar18 != 0) {
      func_0x000107c2b4fc(&plStack_180,aplStack_1c0,uStack_1c8);
      pplVar13 = &plStack_180;
      plVar10 = plVar5;
      func_0x000107c34f88();
      *param_3 = 0x20;
    }
  }
  else {
    plStack_180 = (long *)0x0;
    pplStack_178 = (long **)0x0;
    pplVar13 = &plStack_180;
    func_0x000107c2b8cc(plVar18,pplVar13,2);
    if (((ulong)plVar18 & 1) != 0) {
      pplVar13 = pplStack_178;
      func_0x000107c2b43c(plStack_180,pplStack_178,plVar5);
      *param_3 = 0x20;
    }
    plVar10 = plStack_180;
    func_0x000107c2b534();
  }
LAB_10ae5b360:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return plVar18;
  }
  ___stack_chk_fail();
  plVar7 = plVar10;
  __Unwind_Resume();
  iVar1 = (int)auStack_270;
  iVar2 = (int)auStack_270;
  iVar3 = (int)auStack_270;
  iVar4 = (int)auStack_270;
  pcStack_1d8 = FUN_10ae5b3b4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar7;
  puStack_200 = puVar17;
  plStack_1f8 = plVar18;
  plStack_1f0 = plVar5;
  plStack_1e8 = plVar10;
  ppuStack_1e0 = &puStack_d0;
  FUN_10ae5b204();
  if ((int)plVar12 != 0) {
    if (*(int *)(*(long *)(plVar7[1] + 0x70) + 4) == 0x198) {
      puVar17 = *(undefined8 **)(*(long *)(plVar7[1] + 0x70) + 8);
      if (puVar17 != (undefined8 *)0x0) {
        func_0x000107c2b318();
        plVar5 = plVar12;
        func_0x000107c2b318();
        plVar7 = plVar12;
        if (plVar12 == (long *)0x0) {
          plVar12 = plVar5;
          if (plVar5 != (long *)0x0) {
            func_0x000107c2b31c();
          }
          goto LAB_10ae5b514;
        }
        if (plVar5 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          uVar20 = *puVar17;
          func_0x000107c2b45c(uVar20,puVar17[1],plVar12,plVar5,0);
          if ((int)uVar20 == 0) {
LAB_10ae5b558:
            plVar18 = (long *)0x0;
          }
          else {
            puVar9 = auStack_248;
            FUN_10ae35bd4(puVar9,uStack_250,puVar17);
            if (puVar9 == (undefined8 *)0x0) goto LAB_10ae5b558;
            pplVar11 = pplVar13;
            func_0x000107c2b228(pplVar13,0x7550);
            if ((((((int)pplVar11 == 0) ||
                  (pplVar11 = pplVar13, func_0x000107c34f3c(pplVar13,auStack_270,2),
                  (int)pplVar11 == 0)) ||
                 (func_0x00010ae1ee20(auStack_270,0x20,plVar12), iVar1 == 0)) ||
                ((func_0x00010ae1ee20(auStack_270,0x20,plVar5), iVar2 == 0 ||
                 (func_0x00010ae1ee20(auStack_270,0x20,*puVar9), iVar3 == 0)))) ||
               (func_0x00010ae1ee20(auStack_270,0x20,puVar9[1]), iVar4 == 0)) {
              plVar18 = (long *)0x0;
            }
            else {
              func_0x000107c2b20c(pplVar13);
              plVar18 = (long *)(ulong)((int)pplVar13 != 0);
            }
            func_0x00010ae35620(puVar9);
            puVar17 = puVar9;
          }
          func_0x000107c2b31c(plVar5);
        }
        func_0x000107c2b31c();
        goto LAB_10ae5b518;
      }
    }
    else {
      func_0x000107c2b29c(6,0,0x6a,&UNK_10f6c5fb5,0x129);
    }
    plVar12 = (long *)0x10;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0x105c);
  }
LAB_10ae5b514:
  plVar18 = (long *)0x0;
LAB_10ae5b518:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return plVar18;
  }
  ___stack_chk_fail();
  func_0x00010ae35620(puVar17);
  func_0x000107c2b31c(plVar5);
  func_0x000107c2b31c(plVar7);
  __Unwind_Resume();
  if (*(long *)(*plVar12 + 0x58) != 0) {
    return (long *)0x0;
  }
  pcStack_278 = FUN_10ae5b5b8;
  plVar18 = plVar12 + 0x33;
  plStack_290 = plVar5;
  plStack_288 = plVar7;
  pppuStack_280 = &ppuStack_1e0;
  func_0x000107c2b890(plVar18,plVar12[0xbb] + 0x130,auStack_298);
  if ((int)plVar18 != 0) {
    *(undefined1 *)(plVar12[0xbb] + 0x170) = auStack_298[0];
  }
  return plVar18;
}



/* Entry: 10ae5b204; end: 10ae5b3b3;  */

long * FUN_10ae5b204(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_1d8 [8];
  long *plStack_1d0;
  long *plStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 uStack_190;
  undefined8 auStack_188 [8];
  long lStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  long *aplStack_100 [8];
  long *plStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  long lStack_48;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)*param_1;
  puVar5 = puVar12;
  func_0x000107c2b89c();
  if ((uint)puVar5 < 0x304) {
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    pplStack_b8 = (long **)0xa54ff53a3c6ef372;
    plStack_c0 = (long *)0xbb67ae856a09e667;
    uStack_a8 = 0x5be0cd191f83d9ab;
    uStack_b0 = 0x9b05688c510e527f;
    uStack_54 = 0x20;
    func_0x000107c2b4fc(&plStack_c0,&UNK_10e52aca4,0x19);
    if (puVar12[0xb] != 0) {
      func_0x000107c2b4fc(&plStack_c0,&UNK_10e52acbd,0xb);
      if (*(char *)(puVar12[0xb] + 0x170) == '\0') {
        plVar11 = (long *)0x10;
        pplVar10 = (long **)0x0;
        func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0x1092);
        param_1 = (long *)0x0;
        goto LAB_10ae5b360;
      }
      func_0x000107c2b4fc(&plStack_c0,puVar12[0xb] + 0x130);
    }
    param_1 = param_1 + 0x33;
    pplVar10 = aplStack_100;
    func_0x000107c2b890(param_1,pplVar10,&uStack_108);
    plVar11 = param_1;
    if ((int)param_1 != 0) {
      func_0x000107c2b4fc(&plStack_c0,aplStack_100,uStack_108);
      pplVar10 = &plStack_c0;
      plVar11 = param_2;
      func_0x000107c34f88();
      *param_3 = 0x20;
    }
  }
  else {
    plStack_c0 = (long *)0x0;
    pplStack_b8 = (long **)0x0;
    pplVar10 = &plStack_c0;
    func_0x000107c2b8cc(param_1,pplVar10,2);
    if (((ulong)param_1 & 1) != 0) {
      pplVar10 = pplStack_b8;
      func_0x000107c2b43c(plStack_c0,pplStack_b8,param_2);
      *param_3 = 0x20;
    }
    plVar11 = plStack_c0;
    func_0x000107c2b534();
  }
LAB_10ae5b360:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = plVar11;
  __Unwind_Resume();
  iVar1 = (int)auStack_1b0;
  iVar2 = (int)auStack_1b0;
  iVar3 = (int)auStack_1b0;
  iVar4 = (int)auStack_1b0;
  pcStack_118 = FUN_10ae5b3b4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar6;
  puStack_140 = puVar12;
  plStack_138 = param_1;
  plStack_130 = param_2;
  plStack_128 = plVar11;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10ae5b204();
  if ((int)plVar9 != 0) {
    if (*(int *)(*(long *)(plVar6[1] + 0x70) + 4) == 0x198) {
      puVar12 = *(undefined8 **)(*(long *)(plVar6[1] + 0x70) + 8);
      if (puVar12 != (undefined8 *)0x0) {
        func_0x000107c2b318();
        param_2 = plVar9;
        func_0x000107c2b318();
        plVar6 = plVar9;
        if (plVar9 == (long *)0x0) {
          plVar9 = param_2;
          if (param_2 != (long *)0x0) {
            func_0x000107c2b31c();
          }
          goto LAB_10ae5b514;
        }
        if (param_2 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else {
          uVar7 = *puVar12;
          func_0x000107c2b45c(uVar7,puVar12[1],plVar9,param_2,0);
          if ((int)uVar7 == 0) {
LAB_10ae5b558:
            plVar11 = (long *)0x0;
          }
          else {
            puVar5 = auStack_188;
            FUN_10ae35bd4(puVar5,uStack_190,puVar12);
            if (puVar5 == (undefined8 *)0x0) goto LAB_10ae5b558;
            pplVar8 = pplVar10;
            func_0x000107c2b228(pplVar10,0x7550);
            if (((((int)pplVar8 == 0) ||
                 (pplVar8 = pplVar10, func_0x000107c34f3c(pplVar10,auStack_1b0,2), (int)pplVar8 == 0
                 )) || (func_0x00010ae1ee20(auStack_1b0,0x20,plVar9), iVar1 == 0)) ||
               (((func_0x00010ae1ee20(auStack_1b0,0x20,param_2), iVar2 == 0 ||
                 (func_0x00010ae1ee20(auStack_1b0,0x20,*puVar5), iVar3 == 0)) ||
                (func_0x00010ae1ee20(auStack_1b0,0x20,puVar5[1]), iVar4 == 0)))) {
              plVar11 = (long *)0x0;
            }
            else {
              func_0x000107c2b20c(pplVar10);
              plVar11 = (long *)(ulong)((int)pplVar10 != 0);
            }
            func_0x00010ae35620(puVar5);
            puVar12 = puVar5;
          }
          func_0x000107c2b31c(param_2);
        }
        func_0x000107c2b31c();
        goto LAB_10ae5b518;
      }
    }
    else {
      func_0x000107c2b29c(6,0,0x6a,&UNK_10f6c5fb5,0x129);
    }
    plVar9 = (long *)0x10;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0x105c);
  }
LAB_10ae5b514:
  plVar11 = (long *)0x0;
LAB_10ae5b518:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return plVar11;
  }
  ___stack_chk_fail();
  func_0x00010ae35620(puVar12);
  func_0x000107c2b31c(param_2);
  func_0x000107c2b31c(plVar6);
  __Unwind_Resume();
  if (*(long *)(*plVar9 + 0x58) != 0) {
    return (long *)0x0;
  }
  pcStack_1b8 = FUN_10ae5b5b8;
  plVar11 = plVar9 + 0x33;
  plStack_1d0 = param_2;
  plStack_1c8 = plVar6;
  ppuStack_1c0 = &puStack_120;
  func_0x000107c2b890(plVar11,plVar9[0xbb] + 0x130,auStack_1d8);
  if ((int)plVar11 != 0) {
    *(undefined1 *)(plVar9[0xbb] + 0x170) = auStack_1d8[0];
  }
  return plVar11;
}



/* Entry: 10ae5b3b4; end: 10ae5b5b7;  */

long * FUN_10ae5b3b4(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *unaff_x20;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 auStack_78 [8];
  long lStack_38;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)auStack_a0;
  iVar2 = (int)auStack_a0;
  iVar3 = (int)auStack_a0;
  iVar4 = (int)auStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  FUN_10ae5b204(param_1,auStack_78,&uStack_80);
  if ((int)plVar7 != 0) {
    if (*(int *)(*(long *)(param_1[1] + 0x70) + 4) == 0x198) {
      unaff_x22 = *(undefined8 **)(*(long *)(param_1[1] + 0x70) + 8);
      if (unaff_x22 != (undefined8 *)0x0) {
        func_0x000107c2b318();
        unaff_x20 = plVar7;
        func_0x000107c2b318();
        param_1 = plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = unaff_x20;
          if (unaff_x20 != (long *)0x0) {
            func_0x000107c2b31c();
          }
          goto LAB_10ae5b514;
        }
        if (unaff_x20 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          uVar5 = *unaff_x22;
          func_0x000107c2b45c(uVar5,unaff_x22[1],plVar7,unaff_x20,0);
          if ((int)uVar5 == 0) {
LAB_10ae5b558:
            plVar8 = (long *)0x0;
          }
          else {
            puVar6 = auStack_78;
            FUN_10ae35bd4(puVar6,uStack_80,unaff_x22);
            if (puVar6 == (undefined8 *)0x0) goto LAB_10ae5b558;
            uVar5 = param_2;
            func_0x000107c2b228(param_2,0x7550);
            if (((((int)uVar5 == 0) ||
                 (uVar5 = param_2, func_0x000107c34f3c(param_2,auStack_a0,2), (int)uVar5 == 0)) ||
                (func_0x00010ae1ee20(auStack_a0,0x20,plVar7), iVar1 == 0)) ||
               (((func_0x00010ae1ee20(auStack_a0,0x20,unaff_x20), iVar2 == 0 ||
                 (func_0x00010ae1ee20(auStack_a0,0x20,*puVar6), iVar3 == 0)) ||
                (func_0x00010ae1ee20(auStack_a0,0x20,puVar6[1]), iVar4 == 0)))) {
              plVar8 = (long *)0x0;
            }
            else {
              func_0x000107c2b20c(param_2);
              plVar8 = (long *)(ulong)((int)param_2 != 0);
            }
            func_0x00010ae35620(puVar6);
            unaff_x22 = puVar6;
          }
          func_0x000107c2b31c(unaff_x20);
        }
        func_0x000107c2b31c();
        goto LAB_10ae5b518;
      }
    }
    else {
      func_0x000107c2b29c(6,0,0x6a,&UNK_10f6c5fb5,0x129);
    }
    plVar7 = (long *)0x10;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6cfd23,0x105c);
  }
LAB_10ae5b514:
  plVar8 = (long *)0x0;
LAB_10ae5b518:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x00010ae35620(unaff_x22);
  func_0x000107c2b31c(unaff_x20);
  func_0x000107c2b31c(param_1);
  __Unwind_Resume();
  if (*(long *)(*plVar7 + 0x58) != 0) {
    return (long *)0x0;
  }
  pcStack_a8 = FUN_10ae5b5b8;
  plVar8 = plVar7 + 0x33;
  plStack_c0 = unaff_x20;
  plStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c2b890(plVar8,plVar7[0xbb] + 0x130,auStack_c8);
  if ((int)plVar8 != 0) {
    *(undefined1 *)(plVar7[0xbb] + 0x170) = auStack_c8[0];
  }
  return plVar8;
}



/* Entry: 10ae5b5b8; end: 10ae5b613;  */

long * FUN_10ae5b5b8(long *param_1)

{
  long *plVar1;
  undefined1 auStack_28 [8];
  
  if (*(long *)(*param_1 + 0x58) != 0) {
    return (long *)0x0;
  }
  plVar1 = param_1 + 0x33;
  func_0x000107c2b890(plVar1,param_1[0xbb] + 0x130,auStack_28);
  if ((int)plVar1 != 0) {
    *(undefined1 *)(param_1[0xbb] + 0x170) = auStack_28[0];
  }
  return plVar1;
}



/* Entry: 10ae5b614; end: 10ae5b67f;  */

undefined8 FUN_10ae5b614(undefined8 *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (1 < (ulong)param_1[1]) {
    puVar3 = (ushort *)*param_1;
    uVar2 = (ulong)((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
    if (param_1[1] - 2 == uVar2 && uVar2 != 0) {
      do {
        if (uVar2 == 0) {
          return 1;
        }
        if (uVar2 == 1) {
          return 0;
        }
        uVar1 = puVar3[1];
        uVar4 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
        puVar3 = (ushort *)((long)(puVar3 + 1) + uVar4);
        uVar5 = uVar2 - 2;
        uVar2 = uVar5 - uVar4;
      } while (uVar4 - 1 < uVar5);
    }
  }
  return 0;
}



/* Entry: 10ae5b680; end: 10ae5b6d7;  */

void FUN_10ae5b680(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((((*(ushort *)(*(long *)(*param_1 + 0x30) + 0xd4) >> 6 & 1) == 0) &&
      ((*(byte *)((long)param_1 + 0x619) >> 1 & 1) != 0)) &&
     (uVar1 = param_2, func_0x000107c2b228(param_2,0), (int)uVar1 != 0)) {
    func_0x000107c2b228(param_2,0);
  }
  return;
}



/* Entry: 10ae5b6d8; end: 10ae5b723;  */

undefined8 FUN_10ae5b6d8(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_3 != (long *)0x0) {
    if (param_3[1] == 0) {
      return 0;
    }
    pcVar3 = (char *)*param_3;
    lVar2 = param_3[1] + -1;
    *param_3 = (long)(pcVar3 + 1);
    param_3[1] = lVar2;
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01' || lVar2 != 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 1;
    }
  }
  return 1;
}



/* Entry: 10ae5b724; end: 10ae5b80f;  */

void FUN_10ae5b724(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  lVar7 = *param_1;
  lVar4 = lVar7;
  func_0x000107c2b89c();
  if ((((0x303 < (uint)lVar4) && (*(int *)(*(long *)(lVar7 + 0x30) + 0xd0) != 1)) &&
      (param_1[0xbd] != 0)) &&
     ((uVar2 = param_2, func_0x000107c2b228(param_2,0xfe0d), (int)uVar2 != 0 &&
      (uVar2 = param_2, func_0x000107c34f3c(param_2,auStack_50,2), (int)uVar2 != 0)))) {
    puVar3 = auStack_50;
    func_0x000107c34f3c(puVar3,auStack_70,2);
    if ((int)puVar3 != 0) {
      lVar4 = *(long *)param_1[0xbd];
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)((long *)param_1[0xbd])[1];
        lVar4 = lVar4 << 3;
        do {
          puVar5 = (undefined8 *)*puVar6;
          if ((*(char *)(puVar5 + 0x12) == '\x01') &&
             (iVar1 = (int)auStack_70, func_0x000107c2b21c(auStack_70,*puVar5,puVar5[1]), iVar1 == 0
             )) {
            return;
          }
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      func_0x000107c2b20c(param_2);
    }
  }
  return;
}



/* Entry: 10ae5b810; end: 10ae5b8af;  */

undefined8 FUN_10ae5b810(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*param_1;
  func_0x000107c2b89c();
  uVar2 = 1;
  if ((param_3 != 0) && (uVar1 < 0x304)) {
    if (*(long *)(param_3 + 8) == 0) {
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x20000;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 10ae5b8b0; end: 10ae5b98b;  */

undefined8 FUN_10ae5b8b0(long *param_1,undefined1 *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *param_1;
  lVar5 = lVar8;
  func_0x000107c2b89c();
  uVar3 = 1;
  if ((param_3 != (long *)0x0) && ((uint)lVar5 < 0x304)) {
    if (param_3[1] != 0) {
      pbVar6 = (byte *)*param_3;
      pbVar1 = pbVar6 + 1;
      uVar7 = param_3[1] - 1;
      *param_3 = (long)pbVar1;
      param_3[1] = uVar7;
      bVar2 = *pbVar6;
      uVar4 = (ulong)bVar2;
      if (uVar4 <= uVar7) {
        *param_3 = (long)(pbVar1 + uVar4);
        param_3[1] = uVar7 - uVar4;
        if (uVar7 - uVar4 == 0) {
          if (bVar2 != 0) {
            func_0x000107c2b29c(0x10,0,0xca,&UNK_10f6cfd23,0x36f);
            *param_2 = 0x28;
            return 0;
          }
          lVar5 = *(long *)(lVar8 + 0x30);
          *(ushort *)(lVar5 + 0xd4) = *(ushort *)(lVar5 + 0xd4) | 0x100;
          return 1;
        }
      }
    }
    func_0x000107c2b29c(0x10,0,0xc9,&UNK_10f6cfd23,0x368);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10ae5b98c; end: 10ae5b9eb;  */

void FUN_10ae5b98c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*param_1;
  func_0x000107c2b89c();
  if (((uVar1 < 0x304) && (uVar2 = param_2, func_0x000107c2b228(param_2,0xff01), (int)uVar2 != 0))
     && (uVar2 = param_2, func_0x000107c2b228(param_2,1), (int)uVar2 != 0)) {
    func_0x000107c2b218(param_2,0);
  }
  return;
}



/* Entry: 10ae5b9ec; end: 10ae5ba6f;  */

undefined1 * FUN_10ae5b9ec(long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  ulong uVar2;
  ushort **ppuVar3;
  ushort *puVar4;
  ushort *puStack_20;
  ulong uStack_18;
  
  if (param_3 == (long *)0x0) {
    return (undefined1 *)0x1;
  }
  uVar2 = param_3[1] - 2;
  if (1 < (ulong)param_3[1]) {
    ppuVar3 = &puStack_20;
    puVar4 = (ushort *)*param_3;
    puStack_20 = puVar4 + 1;
    *param_3 = (long)puStack_20;
    param_3[1] = uVar2;
    uVar1 = *puVar4;
    uStack_18 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
    if (uStack_18 <= uVar2) {
      *param_3 = (long)puStack_20 + uStack_18;
      param_3[1] = uVar2 - uStack_18;
      if (uStack_18 != 0 && uVar2 == uStack_18) {
        FUN_10ae5ac00(&puStack_20,param_1 + 0x278);
        return (undefined1 *)ppuVar3;
      }
    }
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10ae5ba70; end: 10ae5ba77;  */

undefined8 FUN_10ae5ba70(void)

{
  return 1;
}



/* Entry: 10ae5ba78; end: 10ae5bad3;  */

undefined8 FUN_10ae5ba78(undefined8 *param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar2 = (uint)*param_1;
  func_0x000107c2b89c();
  if (0x303 < uVar2) {
    return 1;
  }
  if (param_3 != (long *)0x0) {
    uVar2 = (uint)*param_1;
    func_0x0001001fa5c4();
    if ((uVar2 < 0x304) && (param_3[1] != 0)) {
      pbVar6 = (byte *)*param_3;
      pbVar3 = pbVar6 + 1;
      uVar4 = param_3[1] - 1;
      *param_3 = (long)pbVar3;
      param_3[1] = uVar4;
      bVar1 = *pbVar6;
      uVar5 = (ulong)bVar1;
      if (uVar5 <= uVar4) {
        *param_3 = (long)(pbVar3 + uVar5);
        param_3[1] = uVar4 - uVar5;
        if (uVar4 - uVar5 == 0) {
          if ((bVar1 != 0) && (func_0x000107c610ac(pbVar3,0), pbVar3 != (byte *)0x0)) {
            return 1;
          }
          *param_2 = 0x2f;
          return 0;
        }
      }
    }
    return 0;
  }
  return 1;
}



/* Entry: 10ae5bad4; end: 10ae5bb27;  */

undefined1 * FUN_10ae5bad4(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  uVar1 = (uint)*param_1;
  func_0x000107c2b89c();
  if ((uVar1 < 0x304) &&
     (((*(uint *)(param_1[0xbf] + 0x14) | *(uint *)(param_1[0xbf] + 0x18)) >> 1 & 1) != 0)) {
    puVar2 = auStack_60;
    puVar3 = param_2;
    func_0x0001001ec108(param_2,0xb);
    if (((int)puVar3 != 0) &&
       (puVar3 = param_2, func_0x0001001ec3c0(param_2,auStack_40,2), (int)puVar3 != 0)) {
      puVar3 = auStack_40;
      func_0x0001001ec3c0(puVar3,auStack_60,1);
      if (((int)puVar3 != 0) &&
         (func_0x0001001ec260(auStack_60,0), puVar3 = puVar2, (int)puVar2 != 0)) {
        func_0x0001001ebf4c(param_2);
        puVar3 = (undefined1 *)(ulong)((int)param_2 != 0);
      }
    }
    return puVar3;
  }
  return (undefined1 *)0x1;
}



/* Entry: 10ae5bb28; end: 10ae5bb2f;  */

undefined8 FUN_10ae5bb28(void)

{
  return 1;
}



/* Entry: 10ae5bb30; end: 10ae5bc23;  */

undefined8 FUN_10ae5bb30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x61a) & 1) == 0) {
    return 1;
  }
  uVar1 = param_2;
  func_0x000107c2b228(param_2,0x23);
  if ((int)uVar1 != 0) {
    func_0x000107c2b228(param_2,0);
    uVar1 = param_2;
  }
  return uVar1;
}



/* Entry: 10ae5bc24; end: 10ae5bc6f;  */

undefined8 FUN_10ae5bc24(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_3 != (long *)0x0) {
    if (param_3[1] == 0) {
      return 0;
    }
    pcVar2 = (char *)*param_3;
    *param_3 = (long)(pcVar2 + 1);
    param_3[1] = param_3[1] + -1;
    uVar1 = 0x80;
    if (*pcVar2 != '\x01') {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) & 0xffffff7f | uVar1;
  }
  return 1;
}



/* Entry: 10ae5bc70; end: 10ae5be2f;  */

void FUN_10ae5bc70(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3;
  func_0x000107c2b89c();
  if (((((uint)lVar1 < 0x304) && ((*(uint *)(param_1 + 0xc3) >> 7 & 1) != 0)) &&
      (*(long *)(*(long *)(param_1[1] + 0x20) + 0x68) != 0)) &&
     (((*(ushort *)(*(long *)(lVar3 + 0x30) + 0xd4) >> 6 & 1) == 0 &&
      ((*(byte *)(param_1[0xbf] + 0x18) & 3) != 0)))) {
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x40;
    uVar2 = param_2;
    func_0x000107c2b228(param_2,5);
    if ((int)uVar2 != 0) {
      func_0x000107c2b228(param_2,0);
    }
  }
  return;
}



/* Entry: 10ae5be30; end: 10ae5bee3;  */

undefined1 * FUN_10ae5be30(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [36];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if (-1 < *(char *)((long)param_1 + 0x619)) {
    return (undefined1 *)0x1;
  }
  puVar2 = auStack_50;
  lVar1 = *param_1;
  (**(code **)(*(long *)(lVar1 + 0x68) + 0x230))
            (lVar1,&uStack_28,&uStack_2c,*(undefined8 *)(*(long *)(lVar1 + 0x68) + 0x238));
  if ((int)lVar1 == 0) {
    puVar3 = param_2;
    func_0x000107c2b228(param_2,0x3374);
    if ((((int)puVar3 != 0) &&
        (puVar3 = param_2, func_0x000107c34f3c(param_2,auStack_50,2), (int)puVar3 != 0)) &&
       (func_0x000107c2b21c(auStack_50,uStack_28,uStack_2c), puVar3 = puVar2, (int)puVar2 != 0)) {
      func_0x000107c2b20c(param_2);
      puVar3 = (undefined1 *)(ulong)((int)param_2 != 0);
    }
  }
  else {
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xffff7fff;
    puVar3 = (undefined1 *)0x1;
  }
  return puVar3;
}



/* Entry: 10ae5bee4; end: 10ae5bf0b;  */

undefined8 FUN_10ae5bee4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    if (*(long *)(param_3 + 8) != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x618) = *(uint *)(param_1 + 0x618) | 4;
  }
  return 1;
}



/* Entry: 10ae5bf0c; end: 10ae5bfc3;  */

void FUN_10ae5bf0c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [32];
  
  iVar1 = (int)auStack_50;
  lVar4 = *param_1;
  lVar3 = lVar4;
  func_0x000107c2b89c();
  if (((((uint)lVar3 < 0x304) && ((*(ushort *)(*(long *)(lVar4 + 0x30) + 0xd4) >> 6 & 1) == 0)) &&
      (*(long *)(*(long *)(param_1[1] + 0x20) + 0x60) != 0)) &&
     (((uVar2 = param_2, func_0x000107c2b228(param_2,0x12), (int)uVar2 != 0 &&
       (uVar2 = param_2, func_0x000107c34f3c(param_2,auStack_50,2), (int)uVar2 != 0)) &&
      (lVar3 = *(long *)(*(long *)(param_1[1] + 0x20) + 0x60),
      func_0x000107c2b21c(auStack_50,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10)),
      iVar1 != 0)))) {
    func_0x000107c2b20c(param_2);
  }
  return;
}



/* Entry: 10ae5bfc4; end: 10ae5c00b;  */

undefined8 FUN_10ae5bfc4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  if (((param_3 != 0) && ((*(ushort *)(param_1[1] + 0xe9) >> 3 & 1) != 0)) &&
     ((**(byte **)*param_1 & 1) == 0)) {
    if (*(long *)(param_3 + 8) != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x1000000;
  }
  return 1;
}



/* Entry: 10ae5c00c; end: 10ae5c053;  */

undefined8 FUN_10ae5c00c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x61b) & 1) == 0) {
    return 1;
  }
  uVar1 = param_2;
  func_0x000107c2b228(param_2,0x7550);
  if ((int)uVar1 != 0) {
    func_0x000107c2b228(param_2,0);
    uVar1 = param_2;
  }
  return uVar1;
}



/* Entry: 10ae5c054; end: 10ae5c1b3;  */

uint FUN_10ae5c054(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_3 == (long *)0x0) {
    uVar4 = 1;
  }
  else {
    param_1 = (undefined8 *)*param_1;
    if (*(char *)*param_1 == '\0') {
      uVar4 = 1;
    }
    else {
      uVar8 = param_3[1] - 2;
      if (1 < (ulong)param_3[1]) {
        puVar5 = (ushort *)*param_3;
        puVar1 = puVar5 + 1;
        *param_3 = (long)puVar1;
        param_3[1] = uVar8;
        uVar3 = *puVar5;
        uVar6 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
        if (uVar6 <= uVar8) {
          pbVar2 = (byte *)((long)puVar1 + uVar6);
          *param_3 = (long)pbVar2;
          param_3[1] = uVar8 - uVar6;
          if (1 < uVar6 && uVar8 != uVar6) {
            uVar9 = (uVar8 - uVar6) - 1;
            *param_3 = (long)(pbVar2 + 1);
            param_3[1] = uVar9;
            uVar8 = (ulong)*pbVar2;
            if (uVar8 <= uVar9) {
              *param_3 = (long)(pbVar2 + 1 + uVar8);
              param_3[1] = uVar9 - uVar8;
              if (uVar9 - uVar8 == 0) {
                if ((param_1[1] != 0) &&
                   (((puVar7 = *(ulong **)(param_1[1] + 0xd0), puVar7 != (ulong *)0x0 ||
                     (puVar7 = *(ulong **)(param_1[0xd] + 0x270), puVar7 != (ulong *)0x0)) &&
                    (uVar8 = *puVar7, uVar8 != 0)))) {
                  uVar9 = 0;
                  do {
                    uVar11 = uVar6;
                    puVar5 = puVar1;
                    if (uVar9 < uVar8) {
                      lVar10 = *(long *)(puVar7[1] + uVar9 * 8);
                    }
                    else {
                      lVar10 = 0;
                    }
                    while (uVar11 != 0) {
                      if (uVar11 == 1) {
                        uVar4 = 0;
                        param_1 = (undefined8 *)0x0;
                        goto LAB_10ae5c1ac;
                      }
                      uVar3 = *puVar5;
                      uVar11 = uVar11 - 2;
                      puVar5 = puVar5 + 1;
                      if (*(ulong *)(lVar10 + 8) ==
                          (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
                        uVar4 = 0;
                        *(long *)(param_1[6] + 0x248) = lVar10;
                        param_1 = (undefined8 *)0x1;
                        goto LAB_10ae5c1ac;
                      }
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != uVar8);
                }
                uVar4 = 1;
LAB_10ae5c1ac:
                uVar4 = uVar4 | (uint)param_1;
                goto LAB_10ae5c188;
              }
            }
          }
        }
      }
      func_0x000107c2b29c(0x10,0,0x74,&UNK_10f6cfd23,0x707);
      uVar4 = 0;
    }
  }
LAB_10ae5c188:
  return uVar4 & 1;
}



/* Entry: 10ae5c1b4; end: 10ae5c2ff;  */

void FUN_10ae5c1b4(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_60;
  lVar4 = *param_1;
  if (((*(long *)(*(long *)(lVar4 + 0x30) + 0x248) != 0) &&
      (uVar2 = param_2, func_0x000107c2b228(param_2,0xe), (int)uVar2 != 0)) &&
     (uVar2 = param_2, func_0x000107c34f3c(param_2,auStack_40,2), (int)uVar2 != 0)) {
    puVar3 = auStack_40;
    func_0x000107c34f3c(puVar3,auStack_60,2);
    if (((int)puVar3 != 0) &&
       (func_0x000107c2b228(auStack_60,
                            *(undefined2 *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x248) + 8)),
       iVar1 != 0)) {
      puVar3 = auStack_40;
      func_0x000107c2b218(puVar3,0);
      if ((int)puVar3 != 0) {
        func_0x000107c2b20c(param_2);
      }
    }
  }
  return;
}



/* Entry: 10ae5c300; end: 10ae5c36f;  */

undefined8 FUN_10ae5c300(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = (uint)*param_1;
  func_0x000107c2b89c();
  if (0x303 < uVar1) {
    if (*(long *)(param_3 + 8) != 0) {
      *param_2 = 0x32;
      return 0;
    }
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x1000;
  }
  return 1;
}


