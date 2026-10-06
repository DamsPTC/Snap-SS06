/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096f6424; end: 1096f65e3;  */

void FUN_1096f6424(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  cVar3 = *(char *)(param_1 + 0x5a);
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  FUN_1096f6314();
  if (iVar4 == 0) {
    uVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (cVar3 == '\x01') {
    *(undefined1 *)(param_1 + 0x5a) = 1;
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}



/* Entry: 1096f65e4; end: 1096f6927;  */

/* WARNING: Removing unreachable block (ram,0x000109711004) */
/* WARNING: Removing unreachable block (ram,0x000109711010) */
/* WARNING: Removing unreachable block (ram,0x000109711024) */
/* WARNING: Removing unreachable block (ram,0x000109711038) */
/* WARNING: Removing unreachable block (ram,0x000109711044) */
/* WARNING: Removing unreachable block (ram,0x000109711058) */
/* WARNING: Removing unreachable block (ram,0x00010971106c) */
/* WARNING: Removing unreachable block (ram,0x000109710f00) */
/* WARNING: Removing unreachable block (ram,0x000109710f08) */
/* WARNING: Removing unreachable block (ram,0x000109710f0c) */
/* WARNING: Removing unreachable block (ram,0x000109710f18) */
/* WARNING: Removing unreachable block (ram,0x000109711080) */
/* WARNING: Removing unreachable block (ram,0x00010971109c) */
/* WARNING: Removing unreachable block (ram,0x000109710f28) */
/* WARNING: Removing unreachable block (ram,0x0001097110a4) */
/* WARNING: Removing unreachable block (ram,0x000109710f30) */
/* WARNING: Removing unreachable block (ram,0x000109710f44) */
/* WARNING: Removing unreachable block (ram,0x000109710f4c) */
/* WARNING: Removing unreachable block (ram,0x000109710f58) */
/* WARNING: Removing unreachable block (ram,0x0001097110a8) */
/* WARNING: Removing unreachable block (ram,0x0001097110b8) */
/* WARNING: Removing unreachable block (ram,0x0001097110f4) */
/* WARNING: Removing unreachable block (ram,0x000109711110) */
/* WARNING: Removing unreachable block (ram,0x000109711118) */
/* WARNING: Removing unreachable block (ram,0x0001097110c4) */
/* WARNING: Removing unreachable block (ram,0x0001097110cc) */
/* WARNING: Removing unreachable block (ram,0x0001097110dc) */
/* WARNING: Removing unreachable block (ram,0x0001097110e4) */
/* WARNING: Removing unreachable block (ram,0x0001097110f0) */
/* WARNING: Removing unreachable block (ram,0x00010971111c) */
/* WARNING: Removing unreachable block (ram,0x000109710fac) */
/* WARNING: Removing unreachable block (ram,0x000109710fb4) */
/* WARNING: Removing unreachable block (ram,0x000109710fc8) */
/* WARNING: Removing unreachable block (ram,0x000109710fdc) */

void FUN_1096f65e4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  
  if (*(int *)(param_1 + 0x1c) != 2) {
    lVar4 = *(long *)(param_1 + 0x70);
    uVar7 = *(uint *)(lVar4 + (ulong)param_2 * 0x14 + 8);
    uVar8 = uVar7;
    if (param_2 + 1 < param_3) {
      iVar12 = ~param_2 + param_3;
      puVar11 = (uint *)(lVar4 + (ulong)(param_2 + 1) * 0x14 + 8);
      do {
        if (*puVar11 <= uVar8) {
          uVar8 = *puVar11;
        }
        iVar12 = iVar12 + -1;
        puVar11 = puVar11 + 5;
      } while (iVar12 != 0);
    }
    uVar6 = param_3;
    if ((uVar8 != *(uint *)(lVar4 + (ulong)(param_3 - 1) * 0x14 + 8)) &&
       (uVar2 = *(uint *)(param_1 + 0x60), param_3 < uVar2)) {
      uVar15 = (ulong)param_3 + 0xffffffff;
      piVar14 = (int *)(lVar4 + (ulong)param_3 * 0x14 + 8);
      do {
        uVar6 = param_3;
        if (*(int *)(lVar4 + (uVar15 & 0xffffffff) * 0x14 + 8) != *piVar14) break;
        param_3 = param_3 + 1;
        uVar15 = uVar15 + 1;
        piVar14 = piVar14 + 5;
        uVar6 = uVar2;
      } while (uVar2 != param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar8 != uVar7) {
      uVar15 = (ulong)param_2;
      uVar1 = uVar2;
      if (param_2 <= uVar2) {
        uVar1 = param_2;
      }
      puVar11 = (uint *)(lVar4 + uVar15 * 0x14 + -0xc);
      uVar5 = param_2 + 1;
      do {
        param_2 = uVar1;
        if (uVar15 <= uVar2) break;
        uVar15 = uVar15 - 1;
        uVar3 = *puVar11;
        param_2 = uVar5 - 1;
        puVar11 = puVar11 + -5;
        uVar5 = param_2;
      } while (uVar3 == uVar7);
    }
    if ((uVar2 == param_2) &&
       (puVar11 = (uint *)(lVar4 + (ulong)uVar2 * 0x14 + 8), *puVar11 != uVar8)) {
      uVar7 = *(uint *)(param_1 + 100);
      uVar15 = (ulong)uVar7;
      if (uVar7 != 0) {
        puVar13 = (uint *)(*(long *)(param_1 + 0x78) + (ulong)uVar7 * 0x14 + -0x10);
        do {
          if (puVar13[1] != *puVar11) break;
          if (puVar13[1] != uVar8) {
            *puVar13 = *puVar13 & 0xfffffff8;
          }
          puVar13[1] = uVar8;
          puVar13 = puVar13 + -5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    if (param_2 < uVar6) {
      lVar10 = (ulong)uVar6 - (ulong)param_2;
      puVar11 = (uint *)(lVar4 + (ulong)param_2 * 0x14 + 8);
      do {
        if (*puVar11 != uVar8) {
          puVar11[-1] = puVar11[-1] & 0xfffffff8;
        }
        *puVar11 = uVar8;
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 5;
      } while (lVar10 != 0);
    }
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x60);
  if (param_3 <= *(uint *)(param_1 + 0x60)) {
    uVar8 = param_3;
  }
  uVar15 = (ulong)uVar8;
  if (uVar8 - param_2 < 2) {
    return;
  }
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
  lVar4 = *(long *)(param_1 + 0x70);
  if (uVar8 != param_2) {
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar7 = *(uint *)(lVar4 + (ulong)param_2 * 0x14 + 8);
      uVar6 = *(uint *)(lVar4 + (ulong)(uVar8 - 1) * 0x14 + 8);
      if (uVar6 <= uVar7) {
        uVar7 = uVar6;
      }
      goto LAB_109711074;
    }
    if (param_2 < uVar8) {
      lVar10 = uVar15 - param_2;
      uVar7 = 0xffffffff;
      puVar11 = (uint *)(lVar4 + (ulong)param_2 * 0x14 + 8);
      do {
        if (*puVar11 <= uVar7) {
          uVar7 = *puVar11;
        }
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 5;
      } while (lVar10 != 0);
      goto LAB_109711074;
    }
  }
  uVar7 = 0xffffffff;
LAB_109711074:
  if (uVar8 != param_2) {
    uVar9 = (ulong)param_2;
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar6 = *(uint *)(lVar4 + (ulong)(uVar8 - 1) * 0x14 + 8);
      uVar2 = *(uint *)(lVar4 + uVar9 * 0x14 + 8);
      if (uVar2 == uVar7 || uVar6 == uVar7) {
        if (uVar2 != uVar7) {
          iVar12 = uVar8 - param_2;
          if (uVar8 < param_2 || iVar12 == 0) {
            return;
          }
          puVar11 = (uint *)(lVar4 + uVar9 * 0x14 + 4);
          do {
            if (puVar11[1] == uVar6) {
              return;
            }
            *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
            *puVar11 = *puVar11 | 3;
            iVar12 = iVar12 + -1;
            puVar11 = puVar11 + 5;
          } while (iVar12 != 0);
          return;
        }
        if (uVar8 <= param_2) {
          return;
        }
        puVar11 = (uint *)(lVar4 + uVar15 * 0x14 + -0x10);
        do {
          if (puVar11[1] == uVar7) {
            return;
          }
          uVar15 = uVar15 - 1;
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar11 = *puVar11 | 3;
          puVar11 = puVar11 + -5;
        } while (uVar9 < uVar15);
        return;
      }
    }
    if (param_2 < uVar8) {
      lVar10 = uVar15 - uVar9;
      puVar11 = (uint *)(lVar4 + uVar9 * 0x14 + 4);
      do {
        if (puVar11[1] != uVar7) {
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar11 = *puVar11 | 3;
        }
        puVar11 = puVar11 + 5;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}



/* Entry: 1096f6928; end: 1096f69f3;  */

void FUN_1096f6928(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  lVar6 = *(long *)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar2 = (ulong)uVar1;
  uVar3 = *(uint *)(lVar6 + uVar2 * 0x14 + 8);
  uVar5 = uVar1 + 1;
  if (uVar5 < *(uint *)(param_1 + 0x60)) {
    if (uVar3 == *(uint *)(lVar6 + (ulong)uVar5 * 0x14 + 8)) goto LAB_1096f69e4;
    iVar8 = *(int *)(param_1 + 100);
    if (iVar8 == 0) {
      FUN_1096f65e4(param_1,uVar2,uVar1 + 2);
      uVar5 = *(int *)(param_1 + 0x5c) + 1;
      goto LAB_1096f69e4;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 100);
    if (iVar8 == 0) goto LAB_1096f69e4;
  }
  lVar7 = *(long *)(param_1 + 0x78);
  uVar9 = iVar8 - 1;
  uVar1 = *(uint *)(lVar7 + (ulong)uVar9 * 0x14 + 8);
  if (uVar3 < uVar1) {
    uVar4 = *(uint *)(lVar6 + uVar2 * 0x14 + 4);
    do {
      lVar6 = lVar7 + (ulong)uVar9 * 0x14;
      if (*(uint *)(lVar6 + 8) != uVar1) break;
      *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) & 0xfffffff8 | uVar4 & 7;
      *(uint *)(lVar6 + 8) = uVar3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0xffffffff);
  }
LAB_1096f69e4:
  *(uint *)(param_1 + 0x5c) = uVar5;
  return;
}



/* Entry: 1096f6b04; end: 1096f6e37;  */

undefined8 FUN_1096f6b04(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (param_1 < 0x4e626174) {
    if (param_1 < 0x48756e67) {
      if (param_1 < 0x43687273) {
        if (param_1 < 0x41726d69) {
          if (param_1 == 0x41646c6d) {
            return uVar1;
          }
          iVar2 = 0x41726162;
        }
        else {
          if (param_1 == 0x41726d69) {
            return uVar1;
          }
          iVar2 = 0x41767374;
        }
      }
      else if (param_1 < 0x456c796d) {
        if (param_1 == 0x43687273) {
          return uVar1;
        }
        iVar2 = 0x43707274;
      }
      else {
        if (param_1 == 0x456c796d) {
          return uVar1;
        }
        if (param_1 == 0x48617472) {
          return uVar1;
        }
        iVar2 = 0x48656272;
      }
    }
    else if (param_1 < 0x4d616e69) {
      if (param_1 < 0x4b686172) {
        if (param_1 == 0x48756e67) {
          return 0;
        }
        iVar2 = 0x4974616c;
        goto LAB_1096f6de0;
      }
      if (param_1 == 0x4b686172) {
        return uVar1;
      }
      if (param_1 == 0x4c796469) {
        return uVar1;
      }
      iVar2 = 0x4d616e64;
    }
    else if (param_1 < 0x4d657263) {
      if (param_1 == 0x4d616e69) {
        return uVar1;
      }
      iVar2 = 0x4d656e64;
    }
    else {
      if (param_1 == 0x4d657263) {
        return uVar1;
      }
      if (param_1 == 0x4d65726f) {
        return uVar1;
      }
      iVar2 = 0x4e617262;
    }
  }
  else if (param_1 < 0x526f6867) {
    if (param_1 < 0x50616c6d) {
      if (param_1 < 0x4f726b68) {
        if (param_1 == 0x4e626174) {
          return uVar1;
        }
        iVar2 = 0x4e6b6f6f;
      }
      else {
        if (param_1 == 0x4f726b68) {
          return uVar1;
        }
        iVar2 = 0x4f756772;
      }
    }
    else if (param_1 < 0x50686c70) {
      if (param_1 == 0x50616c6d) {
        return uVar1;
      }
      iVar2 = 0x50686c69;
    }
    else {
      if (param_1 == 0x50686c70) {
        return uVar1;
      }
      if (param_1 == 0x50686e78) {
        return uVar1;
      }
      iVar2 = 0x50727469;
    }
  }
  else if (param_1 < 0x536f676f) {
    if (param_1 < 0x53616d72) {
      if (param_1 == 0x526f6867) {
        return uVar1;
      }
      iVar2 = 0x52756e72;
LAB_1096f6de0:
      if (param_1 != iVar2) {
        return 4;
      }
      return 0;
    }
    if (param_1 == 0x53616d72) {
      return uVar1;
    }
    if (param_1 == 0x53617262) {
      return uVar1;
    }
    iVar2 = 0x536f6764;
  }
  else {
    if (0x54666e66 < param_1) {
      if (param_1 == 0x59657a69) {
        return uVar1;
      }
      if (param_1 == 0x54686161) {
        return uVar1;
      }
      iVar2 = 0x54666e67;
      goto LAB_1096f6de0;
    }
    if (param_1 == 0x536f676f) {
      return uVar1;
    }
    iVar2 = 0x53797263;
  }
  if (param_1 != iVar2) {
    return 4;
  }
  return uVar1;
}



/* Entry: 1096f6e38; end: 1096f6f43;  */

undefined4 * FUN_1096f6e38(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x1132dfce0;
  }
  else {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 0x31) = 0x1fffffff3fffffff;
    func_0x0001096f61d4();
  }
  return puVar1;
}



/* Entry: 1096f6f44; end: 1096f6f93;  */

void FUN_1096f6f44(long param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined8 *)(param_1 + 0x59) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 1;
  }
  return;
}



/* Entry: 1096f6f94; end: 1096f7003;  */

undefined8 FUN_1096f6f94(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
    if (*(int *)(param_1 + 0xe8) != 0) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x5a) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x60) * 0x14 != 0) {
      _bzero(*(undefined8 *)(param_1 + 0x80));
    }
  }
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1096f7004; end: 1096f7103;  */

void FUN_1096f7004(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar1 = uVar2;
  if (param_2 <= uVar2) {
    uVar1 = param_2;
  }
  uVar6 = (ulong)uVar1;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  uVar5 = uVar2 - 1;
  uVar8 = (ulong)uVar5;
  if (uVar1 + 2 <= uVar2 && uVar1 < uVar5) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar6 * 0x14);
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar5 * 0x14);
    do {
      uVar8 = uVar8 - 1;
      uVar3 = *(undefined4 *)(puVar9 + 2);
      uVar11 = puVar9[1];
      uVar10 = *puVar9;
      uVar4 = *(undefined4 *)(puVar7 + 2);
      uVar12 = *puVar7;
      puVar9[1] = puVar7[1];
      *puVar9 = uVar12;
      *(undefined4 *)(puVar9 + 2) = uVar4;
      puVar7[1] = uVar11;
      *puVar7 = uVar10;
      *(undefined4 *)(puVar7 + 2) = uVar3;
      uVar6 = uVar6 + 1;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      puVar9 = (undefined8 *)((long)puVar9 + -0x14);
    } while (uVar6 < (uVar8 & 0xffffffff));
  }
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = uVar2;
    if (param_2 <= uVar2) {
      uVar1 = param_2;
    }
    uVar6 = (ulong)uVar1;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    uVar5 = uVar2 - 1;
    uVar8 = (ulong)uVar5;
    if (uVar1 + 2 <= uVar2 && uVar1 < uVar5) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar6 * 0x14);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar5 * 0x14);
      do {
        uVar8 = uVar8 - 1;
        uVar3 = *(undefined4 *)(puVar9 + 2);
        uVar11 = puVar9[1];
        uVar10 = *puVar9;
        uVar4 = *(undefined4 *)(puVar7 + 2);
        uVar12 = *puVar7;
        puVar9[1] = puVar7[1];
        *puVar9 = uVar12;
        *(undefined4 *)(puVar9 + 2) = uVar4;
        puVar7[1] = uVar11;
        *puVar7 = uVar10;
        *(undefined4 *)(puVar7 + 2) = uVar3;
        uVar6 = uVar6 + 1;
        puVar7 = (undefined8 *)((long)puVar7 + 0x14);
        puVar9 = (undefined8 *)((long)puVar9 + -0x14);
      } while (uVar6 < (uVar8 & 0xffffffff));
    }
  }
  return;
}



/* Entry: 1096f7104; end: 1096f72ab;  */

void FUN_1096f7104(long param_1,ulong param_2,int param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      uVar6 = param_2;
      _strlen();
      param_3 = (int)uVar6;
    }
    uVar5 = param_3 - param_4;
    if (param_5 != 0xffffffff) {
      uVar5 = param_5;
    }
    if (uVar5 >> 0x1c == 0) {
      iVar4 = *(int *)(param_1 + 0x60);
      uVar2 = iVar4 + (uVar5 >> 2);
      if ((uVar2 != 0) && (*(uint *)(param_1 + 0x68) <= uVar2)) {
        lVar7 = param_1;
        FUN_1096f5ea4();
        if ((int)lVar7 == 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar4 == 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        uVar6 = param_2 + param_4;
        do {
          FUN_109744e90();
          uVar2 = *(uint *)(param_1 + 0xb0);
          *(uint *)(param_1 + 0xb0) = uVar2 + 1;
          *(undefined4 *)(param_1 + 0x88 + (ulong)uVar2 * 4) = uStack_54;
          if (uVar6 <= param_2) break;
        } while (*(uint *)(param_1 + 0xb0) < 5);
      }
      uVar6 = param_2 + param_4;
      if (uVar5 != 0) {
        uVar1 = uVar6 + uVar5;
        uVar8 = uVar6;
        do {
          uVar6 = uVar8;
          FUN_109744f2c(uVar8,uVar1,&uStack_58,uVar3);
          FUN_1096f628c(param_1,uStack_58,(int)uVar8 - (int)param_2);
          uVar8 = uVar6;
        } while (uVar6 < uVar1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      param_2 = param_2 + (long)param_3;
      if (uVar6 < param_2) {
        do {
          if (4 < *(uint *)(param_1 + 0xb4)) break;
          FUN_109744f2c(uVar6,param_2,&uStack_5c,uVar3);
          uVar5 = *(uint *)(param_1 + 0xb4);
          *(uint *)(param_1 + 0xb4) = uVar5 + 1;
          *(undefined4 *)(param_1 + 0x9c + (ulong)uVar5 * 4) = uStack_5c;
        } while (uVar6 < param_2);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 1096f72ac; end: 1096f7543;  */

void FUN_1096f72ac(long param_1,ushort *param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if ((int)param_3 == -1) {
      if (*param_2 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = 0;
        do {
          lVar5 = param_3 + 1;
          param_3 = param_3 + 1;
        } while (param_2[lVar5] != 0);
      }
    }
    uVar6 = (int)param_3 - param_4;
    if (param_5 != 0xffffffff) {
      uVar6 = param_5;
    }
    if (uVar6 >> 0x1c == 0) {
      iVar7 = *(int *)(param_1 + 0x60);
      uVar11 = iVar7 + (uVar6 >> 1);
      if ((uVar11 != 0) && (*(uint *)(param_1 + 0x68) <= uVar11)) {
        lVar5 = param_1;
        FUN_1096f5ea4();
        if ((int)lVar5 == 0) {
          return;
        }
        iVar7 = *(int *)(param_1 + 0x60);
      }
      puVar14 = param_2 + param_4;
      if ((param_4 != 0) && (iVar7 == 0)) {
        uVar8 = 0;
        puVar9 = puVar14;
        do {
          puVar10 = puVar9 + -1;
          uVar3 = *puVar10;
          uVar11 = (uint)uVar3;
          if ((((uVar3 & 0xf800) == 0xd800) && (uVar11 = uVar2, param_2 < puVar10)) &&
             (0x36 < uVar3 >> 10)) {
            uVar12 = (uint)puVar9[-2];
            if ((uVar12 & 0xfc00) == 0xd800) {
              puVar10 = puVar9 + -2;
              uVar11 = (uint)uVar3 + uVar12 * 0x400 + 0xfca02400;
            }
          }
          uVar1 = uVar8 + 1;
          *(uint *)(param_1 + 0x88 + uVar8 * 4) = uVar11;
        } while ((param_2 < puVar10) && (bVar4 = uVar8 < 4, uVar8 = uVar1, puVar9 = puVar10, bVar4))
        ;
        *(int *)(param_1 + 0xb0) = (int)uVar1;
      }
      if (uVar6 != 0) {
        puVar9 = puVar14 + uVar6;
        puVar10 = puVar14;
        do {
          puVar13 = puVar10 + 1;
          uVar3 = *puVar10;
          puVar14 = puVar13;
          uVar6 = (uint)uVar3;
          if (((uVar3 & 0xf800) == 0xd800) &&
             (uVar6 = uVar2, uVar3 >> 10 < 0x37 && puVar13 < puVar9)) {
            if ((*puVar13 & 0xfc00) == 0xdc00) {
              puVar14 = puVar10 + 2;
              uVar6 = (uint)*puVar13 + (uint)uVar3 * 0x400 + 0xfca02400;
            }
          }
          FUN_1096f628c(param_1,uVar6,(ulong)((long)puVar10 - (long)param_2) >> 1);
          puVar10 = puVar14;
        } while (puVar14 < puVar9);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      param_2 = param_2 + (int)param_3;
      if (puVar14 < param_2) {
        do {
          uVar6 = *(uint *)(param_1 + 0xb4);
          if (4 < uVar6) break;
          puVar10 = puVar14 + 1;
          uVar3 = *puVar14;
          puVar9 = puVar10;
          uVar11 = (uint)uVar3;
          if (((uVar3 & 0xf800) == 0xd800) &&
             (uVar11 = uVar2, uVar3 >> 10 < 0x37 && puVar10 < param_2)) {
            if ((*puVar10 & 0xfc00) == 0xdc00) {
              puVar9 = puVar14 + 2;
              uVar11 = (uint)*puVar10 + (uint)uVar3 * 0x400 + 0xfca02400;
            }
          }
          *(uint *)(param_1 + 0xb4) = uVar6 + 1;
          *(uint *)(param_1 + 0x9c + (ulong)uVar6 * 4) = uVar11;
          puVar14 = puVar9;
        } while (puVar9 < param_2);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 1096f7544; end: 1096f7a3f;  */

void FUN_1096f7544(long param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      if (*param_2 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = (int)param_2 + 4;
        _wcslen();
        param_3 = param_3 + 1;
      }
    }
    uVar3 = param_3 - param_4;
    if (param_5 != 0xffffffff) {
      uVar3 = param_5;
    }
    if (uVar3 >> 0x1c == 0) {
      iVar6 = *(int *)(param_1 + 0x60);
      if ((iVar6 + uVar3 != 0) && (*(uint *)(param_1 + 0x68) <= iVar6 + uVar3)) {
        lVar5 = param_1;
        FUN_1096f5ea4();
        if ((int)lVar5 == 0) {
          return;
        }
        iVar6 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar6 == 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        puVar7 = param_2 + param_4;
        uVar9 = 0;
        do {
          puVar7 = puVar7 + -1;
          uVar2 = *puVar7;
          if (0x1a < uVar2 >> 0xb && uVar2 - 0x110000 < 0xffefe000) {
            uVar2 = uVar1;
          }
          *(int *)(param_1 + 0xb0) = (int)(uVar9 + 1);
          *(uint *)(param_1 + 0x88 + uVar9 * 4) = uVar2;
        } while ((param_2 < puVar7) && (bVar4 = uVar9 < 4, uVar9 = uVar9 + 1, bVar4));
      }
      puVar7 = param_2 + param_4;
      if (uVar3 != 0) {
        uVar9 = (ulong)param_4 << 2;
        puVar8 = puVar7 + uVar3;
        do {
          uVar3 = *(uint *)((long)param_2 + uVar9);
          if (0x1a < uVar3 >> 0xb && uVar3 - 0x110000 < 0xffefe000) {
            uVar3 = uVar1;
          }
          FUN_1096f628c(param_1,uVar3,uVar9 >> 2);
          uVar9 = uVar9 + 4;
          puVar7 = (uint *)((long)param_2 + uVar9);
        } while (puVar7 < puVar8);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (puVar7 < param_2 + param_3) {
        do {
          uVar3 = *(uint *)(param_1 + 0xb4);
          if (4 < uVar3) break;
          puVar8 = puVar7 + 1;
          uVar2 = *puVar7;
          if (0x1a < uVar2 >> 0xb && uVar2 - 0x110000 < 0xffefe000) {
            uVar2 = uVar1;
          }
          *(uint *)(param_1 + 0xb4) = uVar3 + 1;
          *(uint *)(param_1 + 0x9c + (ulong)uVar3 * 4) = uVar2;
          puVar7 = puVar8;
        } while (puVar8 < param_2 + param_3);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 1096f7a40; end: 1096f7b97;  */

void FUN_1096f7a40(long param_1,uint param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar13 = param_2 + 1;
  uVar9 = (ulong)uVar13;
  if (uVar13 < param_3) {
    uVar1 = param_2 + 2;
    lVar7 = (ulong)uVar13 * 0x14 + -0x14;
    uVar13 = param_2;
    do {
      uVar8 = (uint)uVar9;
      uVar12 = uVar9;
      lVar5 = lVar7;
      uVar10 = uVar1;
      uVar2 = param_2;
      if (uVar8 <= param_2) {
        uVar2 = uVar8;
      }
      do {
        uVar11 = uVar2;
        if (uVar12 <= param_2) break;
        lVar4 = *(long *)(param_1 + 0x70) + lVar5;
        (*param_4)(lVar4,*(long *)(param_1 + 0x70) + uVar9 * 0x14);
        uVar11 = uVar10 - 1;
        uVar12 = uVar12 - 1;
        lVar5 = lVar5 + -0x14;
        uVar10 = uVar11;
      } while (0 < (int)lVar4);
      if (uVar9 != uVar11) {
        uVar12 = (ulong)uVar11;
        if (1 < (uVar13 + 2) - uVar11) {
          FUN_1096f65e4(param_1,uVar12);
        }
        lVar5 = *(long *)(param_1 + 0x70);
        puVar6 = (undefined8 *)(lVar5 + uVar9 * 0x14);
        uVar15 = puVar6[1];
        uVar14 = *puVar6;
        uVar3 = *(undefined4 *)(puVar6 + 2);
        _memmove(lVar5 + (ulong)(uVar11 + 1) * 0x14,lVar5 + uVar12 * 0x14,
                 (ulong)(uVar8 - uVar11) * 0x14);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar12 * 0x14);
        *(undefined4 *)(puVar6 + 2) = uVar3;
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
      }
      uVar9 = uVar9 + 1;
      uVar1 = uVar1 + 1;
      lVar7 = lVar7 + 0x14;
      uVar13 = uVar8;
    } while (param_3 != (uint)uVar9);
  }
  return;
}



/* Entry: 1096f7b98; end: 1096f7caf;  */

uint FUN_1096f7b98(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30)) {
    if (iVar2 != *(int *)(param_2 + 0x60)) {
      return 2;
    }
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = 0;
    piVar3 = *(int **)(param_1 + 0x70);
    piVar4 = *(int **)(param_2 + 0x70);
    iVar5 = iVar2;
    do {
      if (*piVar3 != *piVar4) {
        uVar1 = uVar1 | 0x10;
      }
      if (piVar3[2] != piVar4[2]) {
        uVar1 = uVar1 | 0x20;
      }
      if (((piVar4[1] ^ piVar3[1]) & 7U) != 0) {
        uVar1 = uVar1 | 0x40;
      }
      piVar3 = piVar3 + 5;
      piVar4 = piVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (*(int *)(param_1 + 0x30) == 2) {
      piVar3 = *(int **)(param_1 + 0x80);
      piVar4 = *(int **)(param_2 + 0x80);
      do {
        if ((((*piVar3 != *piVar4) || (piVar3[1] != piVar4[1])) || (piVar3[2] != piVar4[2])) ||
           (piVar3[3] != piVar4[3])) {
          return uVar1 | 0x80;
        }
        piVar3 = piVar3 + 5;
        piVar4 = piVar4 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x60) != 0) {
        return 2;
      }
      return 0;
    }
    uVar1 = 1;
    if (*(int *)(param_2 + 0x60) == 0) {
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 1096f7cb0; end: 1096f7d43;  */

void FUN_1096f7cb0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_8c [100];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  _vsnprintf(auStack_8c,100);
  lVar4 = param_1;
  (**(code **)(param_1 + 0xd0))(param_1,param_2,auStack_8c,*(undefined8 *)(param_1 + 0xd8));
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail((int)lVar4 != 0);
  pcVar1 = "HB_OPTIONS";
  _getenv();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar3 = 2;
  }
  else {
    uVar5 = 2;
    do {
      pcVar2 = pcVar1;
      _strchr(pcVar1,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = pcVar1;
        _strlen();
        pcVar2 = pcVar1 + (long)pcVar2;
      }
      lVar4 = (long)pcVar2 - (long)pcVar1;
      _strncmp(pcVar1,&UNK_10f57ea54,lVar4);
      uVar3 = uVar5 | 4;
      if (lVar4 != 0x18 || (int)pcVar1 != 0) {
        uVar3 = uVar5;
      }
      pcVar1 = pcVar2;
      if (*pcVar2 != '\0') {
        pcVar1 = pcVar2 + 1;
      }
      uVar5 = uVar3;
    } while (*pcVar1 != '\0');
  }
  uRam0000000113735dc8 = uVar3;
  return;
}



/* Entry: 1096f7d44; end: 1096f7e03;  */

void FUN_1096f7d44(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  pcVar1 = "HB_OPTIONS";
  _getenv();
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar3 = 2;
  }
  else {
    uVar5 = 2;
    do {
      pcVar2 = pcVar1;
      _strchr(pcVar1,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = pcVar1;
        _strlen();
        pcVar2 = pcVar1 + (long)pcVar2;
      }
      lVar4 = (long)pcVar2 - (long)pcVar1;
      _strncmp(pcVar1,&UNK_10f57ea54,lVar4);
      uVar3 = uVar5 | 4;
      if (lVar4 != 0x18 || (int)pcVar1 != 0) {
        uVar3 = uVar5;
      }
      pcVar1 = pcVar2;
      if (*pcVar2 != '\0') {
        pcVar1 = pcVar2 + 1;
      }
      uVar5 = uVar3;
    } while (*pcVar1 != '\0');
  }
  uRam0000000113735dc8 = uVar3;
  return;
}



/* Entry: 1096f7e04; end: 1096f7e1b;  */

uint FUN_1096f7e04(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x20;
  if (0x19 < param_1 - 0x41) {
    uVar1 = param_1;
  }
  return uVar1 & 0xff;
}



/* Entry: 1096f7e1c; end: 1096f7ec7;  */

byte * FUN_1096f7e1c(char *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char acStack_68 [64];
  long lStack_28;
  
  pbVar3 = (byte *)0x0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (*param_1 == '\0') {
      pbVar3 = (byte *)0x0;
    }
    else {
      if (-1 < (int)param_2) {
        if (0x3e < param_2) {
          param_2 = 0x3f;
        }
        _memcpy(acStack_68,param_1,(ulong)param_2);
        acStack_68[param_2] = '\0';
        param_1 = acStack_68;
      }
      FUN_1096f7ec8();
      pbVar3 = (byte *)0x0;
      if (param_1 != (char *)0x0) {
        pbVar3 = *(byte **)(param_1 + 8);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pbVar3;
  }
  ___stack_chk_fail();
  pbVar4 = pbRam000000011382adb0;
  do {
    while (pbVar7 = pbRam000000011382adb0, pbVar4 == (byte *)0x0) {
      pbVar4 = (byte *)0x1;
      _calloc(1,0x10);
      if (pbVar4 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(byte **)pbVar4 = pbVar7;
      FUN_10971127c(pbVar4,pbVar3);
      if (*(long *)(pbVar4 + 8) == 0) {
        _free(pbVar4);
        return (byte *)0x0;
      }
      if (pbRam000000011382adb0 == pbVar7) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11382adb0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pbRam000000011382adb0 = pbVar4;
        }
        if (cVar1 == '\0') {
          if (pbVar7 != (byte *)0x0) {
            return pbVar4;
          }
          _atexit(FUN_109711308);
          return pbVar4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free(*(long *)(pbVar4 + 8));
      _free(pbVar4);
      pbVar4 = pbRam000000011382adb0;
    }
    pbVar6 = *(byte **)(pbVar4 + 8);
    uVar5 = (uint)*pbVar6;
    pbVar7 = pbVar3;
    if (*pbVar6 != 0) {
      do {
        pbVar6 = pbVar6 + 1;
        if (uVar5 != (int)(char)(&UNK_10dfe4c27)[*pbVar7]) break;
        pbVar7 = pbVar7 + 1;
        uVar5 = (uint)*pbVar6;
      } while (uVar5 != 0);
    }
    if (uVar5 == (int)(char)(&UNK_10dfe4c27)[*pbVar7]) {
      return pbVar4;
    }
    pbVar4 = *(byte **)pbVar4;
  } while( true );
}



/* Entry: 1096f7ec8; end: 1096f7fdf;  */

long * FUN_1096f7ec8(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  plVar4 = plRam000000011382adb0;
  do {
    while (plVar3 = plRam000000011382adb0, plVar4 == (long *)0x0) {
      plVar4 = (long *)0x1;
      _calloc(1,0x10);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      *plVar4 = (long)plVar3;
      FUN_10971127c(plVar4,param_1);
      if (plVar4[1] == 0) {
        _free(plVar4);
        return (long *)0x0;
      }
      if (plRam000000011382adb0 == plVar3) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11382adb0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          plRam000000011382adb0 = plVar4;
        }
        if (cVar1 == '\0') {
          if (plVar3 != (long *)0x0) {
            return plVar4;
          }
          _atexit(FUN_109711308);
          return plVar4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free(plVar4[1]);
      _free(plVar4);
      plVar4 = plRam000000011382adb0;
    }
    pbVar6 = (byte *)plVar4[1];
    uVar5 = (uint)*pbVar6;
    pbVar7 = param_1;
    if (*pbVar6 != 0) {
      do {
        pbVar6 = pbVar6 + 1;
        if (uVar5 != (int)(char)(&UNK_10dfe4c27)[*pbVar7]) break;
        pbVar7 = pbVar7 + 1;
        uVar5 = (uint)*pbVar6;
      } while (uVar5 != 0);
    }
    if (uVar5 == (int)(char)(&UNK_10dfe4c27)[*pbVar7]) {
      return plVar4;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}



/* Entry: 1096f7fe0; end: 1096f8333;  */

bool FUN_1096f7fe0(ulong param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = param_1;
    _strlen();
    uVar3 = param_2;
    _strlen();
    if ((uint)uVar2 <= (uint)uVar3) {
      _strncmp(param_1,param_2,uVar2 & 0xffffffff);
      if ((int)param_1 == 0) {
        cVar1 = *(char *)(param_2 + (uVar2 & 0xffffffff));
        if (cVar1 == '\0') {
          return true;
        }
        return cVar1 == '-';
      }
    }
  }
  return false;
}



/* Entry: 1096f8334; end: 1096f8337;  */

void FUN_1096f8334(void)

{
  return;
}



/* Entry: 1096f8338; end: 1096f8423;  */

void FUN_1096f8338(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096f8394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f82a4(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f8424;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x18) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096f8424; end: 1096f8427;  */

void FUN_1096f8424(void)

{
  return;
}



/* Entry: 1096f8428; end: 1096f84a3;  */

void FUN_1096f8428(long param_1,code *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar2 = *(code **)(*(long *)(param_1 + 0x40) + 0x10), pcVar2 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      }
      (*pcVar2)(uVar1);
    }
    pcVar2 = FUN_1096f84a4;
    if (param_2 != (code *)0x0) {
      pcVar2 = param_2;
    }
    *(code **)(param_1 + 0x20) = pcVar2;
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) = 0;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10) = 0;
    }
  }
  return;
}



/* Entry: 1096f84a4; end: 1096f84f7;  */

void FUN_1096f84a4(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,long param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0001096f84f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x28))
            ((*(float *)(param_7 + 0xc) + param_1 * 2.0) * 0.33333334,
             (*(float *)(param_7 + 0x10) + param_2 * 2.0) * 0.33333334,
             (param_3 + param_1 * 2.0) * 0.33333334,(param_4 + param_2 * 2.0) * 0.33333334);
  return;
}



/* Entry: 1096f84f8; end: 1096f85e3;  */

void FUN_1096f84f8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096f8554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f82a4(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f85e4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096f85e4; end: 1096f85e7;  */

void FUN_1096f85e4(void)

{
  return;
}



/* Entry: 1096f85e8; end: 1096f86d3;  */

void FUN_1096f85e8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096f8644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 0x20), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f82a4(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f86d4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 0x20) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096f86d4; end: 1096f86d7;  */

void FUN_1096f86d4(void)

{
  return;
}



/* Entry: 1096f86d8; end: 1096f8823;  */

void FUN_1096f86d8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar6 = *(long *)(param_1 + 2);
      if (lVar6 != 0) {
        FUN_109711500(lVar6 + 0x40,lVar6);
        _pthread_mutex_destroy(lVar6);
        _free(lVar6);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      if (puVar4 != (undefined8 *)0x0) {
        if ((code *)*puVar4 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0xe) == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = **(undefined8 **)(param_1 + 0xe);
          }
          (*(code *)*puVar4)(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)puVar4[1] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 8);
          }
          (*(code *)puVar4[1])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)puVar4[2] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
          }
          (*(code *)puVar4[2])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)puVar4[3] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18);
          }
          (*(code *)puVar4[3])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)puVar4[4] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20);
          }
          (*(code *)puVar4[4])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x10);
        }
      }
      _free(puVar4);
      _free(*(undefined8 *)(param_1 + 0xe));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1096f8824; end: 1096f88a7;  */

void FUN_1096f8824(long param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)0x1;
    _calloc(1,0x1a8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(long *)(puVar1 + 8) = param_1;
      *(undefined8 *)(puVar1 + 10) = param_2;
      *(code **)(puVar1 + 0xc) = param_3;
      puVar1[6] = 0xffffffff;
      *(undefined4 **)(puVar1 + 0x14) = puVar1;
      *(undefined4 **)(puVar1 + 0x18) = puVar1;
      return;
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  return;
}



/* Entry: 1096f88a8; end: 1096f8b8b;  */

undefined4 * FUN_1096f88a8(int *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  uStack_60 = 0;
  uStack_48 = 0x10000;
  uStack_44 = 0;
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*param_1 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = *param_1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  piStack_50 = param_1;
  bVar5 = 0;
  while( true ) {
    bStack_58 = bVar5;
    lVar10 = *(long *)(piStack_50 + 4);
    uStack_68._0_4_ = piStack_50[6];
    uStack_70 = lVar10 + (ulong)(uint)uStack_68;
    uVar1 = (uint)uStack_68 << 6;
    if (uVar1 < 0x4001) {
      uVar1 = 0x4000;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar1;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar10;
    if (lVar10 == 0) {
      FUN_1096f5a5c();
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_1096f8a10;
    }
    lVar6 = lVar10;
    FUN_109745048(lVar10,auStack_80);
    if ((int)lVar6 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_1096f89ec;
    if ((param_1[1] == 0) || (piVar7 = param_1, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_1096f89ec;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar5 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_1096f89ec:
      FUN_1096f5a5c(piStack_50);
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_1096f8a00:
      piStack_50 = (int *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_1096f8a10:
      FUN_109710c0c(auStack_80);
      puVar8 = (undefined8 *)0x1;
      _calloc(1,0x10);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_1096f5a5c(param_1);
        puVar9 = (undefined4 *)&DAT_1132dfe18;
      }
      else {
        *puVar8 = param_1;
        *(short *)(puVar8 + 1) = (short)param_2;
        puVar9 = (undefined4 *)0x1;
        _calloc(1,0x1a8);
        if (puVar9 == (undefined4 *)0x0) {
          FUN_1096f5a5c(param_1);
          _free(puVar8);
          puVar9 = (undefined4 *)&DAT_1132dfe18;
        }
        else {
          *puVar9 = 1;
          puVar9[1] = 1;
          *(undefined8 *)(puVar9 + 2) = 0;
          *(code **)(puVar9 + 8) = FUN_1096f8b8c;
          *(undefined8 **)(puVar9 + 10) = puVar8;
          *(undefined8 *)(puVar9 + 0xc) = 0x1096f8ce4;
          puVar9[6] = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x14) = puVar9;
          *(undefined4 **)(puVar9 + 0x18) = puVar9;
        }
        if (*(code **)(puVar9 + 0x12) != (code *)0x0) {
          (**(code **)(puVar9 + 0x12))(*(undefined8 *)(puVar9 + 0x10));
        }
        *(code **)(puVar9 + 0xe) = FUN_1096f8d0c;
        *(undefined8 **)(puVar9 + 0x10) = puVar8;
        *(undefined8 *)(puVar9 + 0x12) = 0;
        puVar9[4] = param_2;
      }
      return puVar9;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_109745048(lVar10,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    if (((uint)(iVar4 == 0) & (uint)lVar10) == 0) goto LAB_1096f8a00;
  }
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_1096f8a10;
}



/* Entry: 1096f8b8c; end: 1096f8d0b;  */

void FUN_1096f8b8c(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int *piVar8;
  undefined *puVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  int iStack_24;
  
  piVar8 = (int *)*param_3;
  if (param_2 == 0) {
    if (piVar8 == (int *)0x0) {
      return;
    }
    if (*piVar8 == 0) {
      return;
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar7) {
        *piVar8 = *piVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    return;
  }
  puVar9 = &UNK_10dfe4888;
  if (3 < (uint)piVar8[6]) {
    puVar9 = *(undefined **)(piVar8 + 4);
  }
  FUN_1097116b8(puVar9,*(undefined2 *)(param_3 + 1),&iStack_24);
  uVar3 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar5 = (uint)(*(ushort *)(puVar9 + 4) >> 8) | (*(ushort *)(puVar9 + 4) & 0xff00ff) << 8;
  puVar10 = (uint *)(puVar9 + 0xc);
  if (uVar5 < 0x10) {
    if (uVar5 == 0) goto LAB_1096f8cd8;
    if (*puVar10 != uVar3) {
      uVar12 = 0;
      puVar14 = (uint *)(puVar9 + 0x1c);
      do {
        if ((ulong)uVar5 - 1 == uVar12) goto LAB_1096f8c6c;
        uVar1 = *puVar14;
        uVar12 = uVar12 + 1;
        puVar14 = puVar14 + 4;
      } while (uVar1 != uVar3);
      goto LAB_1096f8ca0;
    }
    uVar12 = 0;
  }
  else {
    iVar13 = 0;
    iVar11 = uVar5 - 1;
    do {
      uVar2 = (uint)(iVar11 + iVar13) >> 1;
      uVar12 = (ulong)uVar2;
      uVar1 = puVar10[uVar12 * 4];
      uVar4 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (uVar1 == uVar3 || uVar4 < param_2) {
        if (param_2 <= uVar4 && uVar1 == uVar3) goto LAB_1096f8ca0;
        iVar13 = uVar2 + 1;
      }
      else {
        iVar11 = uVar2 - 1;
      }
    } while (iVar13 <= iVar11);
LAB_1096f8c6c:
    uVar12 = 0xffff;
LAB_1096f8ca0:
    if (uVar5 <= (uint)uVar12) {
LAB_1096f8cd8:
      puVar10 = (uint *)&UNK_10dfe4888;
      goto LAB_1096f8cac;
    }
  }
  puVar10 = puVar10 + (uVar12 & 0xffffffff) * 4;
LAB_1096f8cac:
  uVar3 = (puVar10[2] & 0xff00ff00) >> 8 | (puVar10[2] & 0xff00ff) << 8;
  uVar5 = (puVar10[3] & 0xff00ff00) >> 8 | (puVar10[3] & 0xff00ff) << 8;
  FUN_1096f5af4(*param_3,(uVar3 >> 0x10 | uVar3 << 0x10) + iStack_24,uVar5 >> 0x10 | uVar5 << 0x10);
  return;
}



/* Entry: 1096f8d0c; end: 1096f8ecf;  */

ushort FUN_1096f8d0c(undefined8 param_1,uint param_2,uint *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  
  puVar4 = &UNK_10dfe4888;
  if (3 < *(uint *)(*param_5 + 0x18)) {
    puVar4 = *(undefined **)(*param_5 + 0x10);
  }
  FUN_1097116b8(puVar4,(short)param_5[1],0);
  if (param_3 != (uint *)0x0) {
    uVar1 = (uint)(*(ushort *)(puVar4 + 4) >> 8) | (*(ushort *)(puVar4 + 4) & 0xff00ff) << 8;
    uVar5 = 0;
    if (param_2 <= uVar1) {
      uVar5 = uVar1 - param_2;
    }
    if (*param_3 <= uVar5) {
      uVar5 = *param_3;
    }
    *param_3 = uVar5;
    if (uVar5 != 0) {
      puVar6 = (uint *)(puVar4 + (ulong)param_2 * 0x10 + 0xc);
      iVar7 = -uVar5;
      do {
        if (uVar5 == 0) {
          lVar8 = 0;
          uRam000000011382ab30 = 0;
          puVar9 = (uint *)0x11382ab30;
        }
        else {
          lVar8 = 4;
          puVar9 = param_4;
        }
        uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        bVar3 = uVar5 != 0;
        uVar2 = uVar5 - 1;
        *puVar9 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar5 = 0;
        if (bVar3) {
          uVar5 = uVar2;
        }
        param_4 = (uint *)((long)param_4 + lVar8);
        puVar6 = puVar6 + 4;
        bVar3 = iVar7 != -1;
        iVar7 = iVar7 + 1;
      } while (bVar3);
    }
  }
  return *(ushort *)(puVar4 + 4) >> 8 | *(ushort *)(puVar4 + 4) << 8;
}



/* Entry: 1096f8ed0; end: 1096f8f67;  */

void FUN_1096f8ed0(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        FUN_109711500(lVar4 + 0x40,lVar4);
        _pthread_mutex_destroy(lVar4);
        _free(lVar4);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      _free(*(undefined8 *)(param_1 + 0xe));
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      FUN_10974f66c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1096f8f68; end: 1096f9343;  */

void FUN_1096f8f68(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0 &&
      *(undefined **)(param_1 + 8) != &UNK_10dfe4888) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(undefined **)(param_1 + 0x10) != (undefined *)0x0 &&
      *(undefined **)(param_1 + 0x10) != &UNK_10dfe4888) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1097456e0(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((*(undefined **)(param_1 + 0x20) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x20) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10971da74(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(undefined **)(param_1 + 0x30) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x30) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10974a27c(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar1 = *(undefined **)(param_1 + 0x40);
  if ((puVar1 != (undefined *)0x0) && (puVar1 != &UNK_10dfe4888)) {
    FUN_1096f5a5c(*(undefined8 *)(puVar1 + 0x10));
    *(undefined8 *)(puVar1 + 0x10) = 0;
    if (*(int *)(puVar1 + 0x18) != 0) {
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      _free(*(undefined8 *)(puVar1 + 0x20));
    }
    _free(puVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((*(undefined **)(param_1 + 0x48) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x48) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != (undefined8 *)&UNK_10dfe4888)) {
    FUN_1096f5a5c(*puVar2);
    _free(puVar2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(undefined **)(param_1 + 0x58) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x58) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_10971eddc(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((*(undefined **)(param_1 + 0x68) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x68) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((*(undefined **)(param_1 + 0x70) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x70) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_10974a2ec(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_109723c0c(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_109721d04(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  if ((*(undefined **)(param_1 + 0x90) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x90) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*(undefined **)(param_1 + 0x98) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x98) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((*(undefined **)(param_1 + 0xa0) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0xa0) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_10974a338(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if ((*(undefined **)(param_1 + 0xb0) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0xb0) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_10972ada4(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_10972c75c(*(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_10972ef8c(*(undefined8 *)(param_1 + 200));
  *(undefined8 *)(param_1 + 200) = 0;
  if ((*(undefined **)(param_1 + 0xd0) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0xd0) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_10973a62c(*(undefined8 *)(param_1 + 0xd8));
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_10973c560(*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_109741a88(*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if ((*(undefined **)(param_1 + 0xf0) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0xf0) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((*(undefined **)(param_1 + 0xf8) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0xf8) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if ((*(undefined **)(param_1 + 0x100) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x100) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  if ((*(undefined **)(param_1 + 0x108) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x108) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if ((*(undefined **)(param_1 + 0x110) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x110) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  if ((*(undefined **)(param_1 + 0x118) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x118) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_1097494d0(*(undefined8 *)(param_1 + 0x120));
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_109749ddc(*(undefined8 *)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_109749100(*(undefined8 *)(param_1 + 0x130));
  *(undefined8 *)(param_1 + 0x130) = 0;
  if ((*(undefined **)(param_1 + 0x138) != (undefined *)0x0) &&
     (*(undefined **)(param_1 + 0x138) != &UNK_10dfe4888)) {
    FUN_1096f5a5c();
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



/* Entry: 1096f9344; end: 1096f940b;  */

long FUN_1096f9344(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 2);
  while (lVar4 = *plVar1, lVar4 == 0) {
    lVar4 = 1;
    _calloc(1,0x50);
    if (lVar4 == 0) {
      return 0;
    }
    _pthread_mutex_init();
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_109711500((undefined8 *)(lVar4 + 0x40),lVar4);
    _pthread_mutex_destroy(lVar4);
    _free(lVar4);
  }
  FUN_1097449f0(lVar4,param_2,param_3,param_4,param_5);
  return lVar4;
}



/* Entry: 1096f940c; end: 1096f9463;  */

undefined8 FUN_1096f940c(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      return 0;
    }
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    lVar1 = *(long *)(param_1 + 2) + 0x40;
    FUN_109744dbc(lVar1,param_2,&uStack_28);
    if ((int)lVar1 == 0) {
      uStack_20 = 0;
    }
  }
  return uStack_20;
}



/* Entry: 1096f9464; end: 1096f94cb;  */

void FUN_1096f9464(long param_1,long param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  uint *puVar15;
  
  puVar7 = (undefined8 *)(param_1 + 0x78);
  FUN_109745670();
  uVar6 = *(uint *)(param_1 + 0x18);
  if (uVar6 == 0xffffffff) {
    FUN_109710978();
    uVar6 = (uint)param_1;
  }
  puVar2 = (ushort *)&UNK_10dfe4888;
  if ((ushort *)*puVar7 != (ushort *)0x0) {
    puVar2 = (ushort *)*puVar7;
  }
  uVar5 = *puVar2 >> 8 | *puVar2 << 8;
  if (uVar5 < 10) {
    if (uVar5 == 0) {
      lVar11 = 0;
      do {
        if (*(char *)((long)puVar2 + lVar11 + 6) != '\0') {
          func_0x000109739eb0(param_2 + 0x10,lVar11);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x100);
    }
    else {
      if (uVar5 == 4) {
        func_0x000109711ecc(&stack0xffffffffffffffc0,param_2);
        return;
      }
      if (uVar5 == 6) {
        uVar6 = (uint)(puVar2[4] >> 8) | (puVar2[4] & 0xff00ff) << 8;
        uVar12 = (ulong)uVar6;
        if (uVar6 != 0) {
          uVar13 = 0;
          puVar14 = puVar2 + 5;
          uVar6 = (uint)(puVar2[3] >> 8) | (puVar2[3] & 0xff00ff) << 8;
          do {
            puVar10 = (ushort *)&UNK_10dfe4888;
            if (uVar13 < ((uint)(puVar2[4] >> 8) | (puVar2[4] & 0xff00ff) << 8)) {
              puVar10 = puVar14;
            }
            if (*(char *)((long)puVar10 + 1) != '\0' || (char)*puVar10 != '\0') {
              func_0x000109739eb0(param_2 + 0x10,uVar6);
            }
            uVar13 = uVar13 + 1;
            puVar14 = puVar14 + 1;
            uVar6 = uVar6 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        return;
      }
    }
  }
  else {
    if (uVar5 == 10) {
      uVar6 = (*(uint *)(puVar2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(puVar2 + 8) & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar12 = (ulong)uVar6;
      if (uVar6 != 0) {
        uVar13 = 0;
        puVar14 = puVar2 + 10;
        iVar1 = (uint)(byte)puVar2[6] * 0x1000000 + (uint)*(byte *)((long)puVar2 + 0xd) * 0x10000 +
                (uint)(byte)puVar2[7] * 0x100 + (uint)*(byte *)((long)puVar2 + 0xf);
        do {
          uVar6 = (*(uint *)(puVar2 + 8) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar2 + 8) & 0xff00ff) << 8;
          puVar10 = (ushort *)&UNK_10dfe4888;
          if (uVar13 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
            puVar10 = puVar14;
          }
          if (*(char *)((long)puVar10 + 1) != '\0' || (char)*puVar10 != '\0') {
            func_0x000109739eb0(param_2 + 0x10,iVar1);
          }
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 1;
          iVar1 = iVar1 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      return;
    }
    if (uVar5 == 0xc) {
      if ((*(char *)((long)puVar2 + 0xd) != '\0' || (char)puVar2[6] != '\0') ||
          ((char)puVar2[7] != '\0' || *(char *)((long)puVar2 + 0xf) != '\0')) {
        uVar12 = 0;
        puVar15 = (uint *)(puVar2 + 8);
        do {
          uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
          uVar13 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar8 = (uint *)&UNK_10dfe4b1b;
          if (uVar12 < uVar13) {
            uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
            uVar13 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
            puVar8 = puVar15;
          }
          uVar3 = (uint)(byte)puVar8[1] << 0x18 | (uint)*(byte *)((long)puVar8 + 5) << 0x10;
          uVar4 = 0x10ffff;
          if (uVar3 < 0x110000) {
            uVar4 = uVar3 | (uint)(*(ushort *)((long)puVar8 + 6) >> 8) |
                            (*(ushort *)((long)puVar8 + 6) & 0xff00ff) << 8;
          }
          puVar8 = (uint *)&UNK_10dfe4b1b;
          if (uVar12 < uVar13) {
            puVar8 = puVar15;
          }
          uVar3 = (*puVar15 & 0xff00ff00) >> 8 | (*puVar15 & 0xff00ff) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar9 = (puVar8[2] & 0xff00ff00) >> 8 | (puVar8[2] & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          if (uVar9 == 0) {
            uVar9 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
            puVar8 = (uint *)&UNK_10dfe4b1b;
            if (uVar12 < (uVar9 >> 0x10 | uVar9 << 0x10)) {
              puVar8 = puVar15;
            }
            FUN_109712054(puVar8,uVar4);
            if ((int)puVar8 != 0) {
              uVar3 = uVar3 + 1;
              uVar9 = 1;
              goto LAB_109711cd8;
            }
          }
          else {
LAB_109711cd8:
            if (uVar9 < uVar6) {
              if (uVar6 <= (uVar4 - uVar3) + uVar9) {
                uVar4 = (uVar3 + uVar6) - uVar9;
              }
              if (0x10fffe < uVar4) {
                uVar4 = 0x10ffff;
              }
              FUN_109739f84(param_2 + 0x10,uVar3,uVar4);
            }
          }
          uVar12 = uVar12 + 1;
          uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
          puVar15 = puVar15 + 3;
        } while (uVar12 < (uVar4 >> 0x10 | uVar4 << 0x10));
      }
      return;
    }
    if (uVar5 == 0xd) {
      if ((*(char *)((long)puVar2 + 0xd) != '\0' || (char)puVar2[6] != '\0') ||
          ((char)puVar2[7] != '\0' || *(char *)((long)puVar2 + 0xf) != '\0')) {
        uVar12 = 0;
        puVar15 = (uint *)(puVar2 + 8);
        do {
          uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
          uVar13 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar8 = (uint *)&UNK_10dfe4b1b;
          if (uVar12 < uVar13) {
            uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
            uVar13 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
            puVar8 = puVar15;
          }
          uVar3 = (uint)(byte)puVar8[1] << 0x18 | (uint)*(byte *)((long)puVar8 + 5) << 0x10;
          uVar4 = 0x10ffff;
          if (uVar3 < 0x110000) {
            uVar4 = uVar3 | (uint)(*(ushort *)((long)puVar8 + 6) >> 8) |
                            (*(ushort *)((long)puVar8 + 6) & 0xff00ff) << 8;
          }
          puVar8 = (uint *)&UNK_10dfe4b1b;
          if (uVar12 < uVar13) {
            puVar8 = puVar15;
          }
          uVar3 = (*puVar15 & 0xff00ff00) >> 8 | (*puVar15 & 0xff00ff) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar9 = (puVar8[2] & 0xff00ff00) >> 8 | (puVar8[2] & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          if (uVar9 == 0) {
            uVar9 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
            puVar8 = (uint *)&UNK_10dfe4b1b;
            if (uVar12 < (uVar9 >> 0x10 | uVar9 << 0x10)) {
              puVar8 = puVar15;
            }
            if ((*(char *)((long)puVar8 + 9) != '\0' || (char)puVar8[2] != '\0') ||
                (*(char *)((long)puVar8 + 10) != '\0' || *(char *)((long)puVar8 + 0xb) != '\0')) {
              uVar3 = uVar3 + 1;
              uVar9 = 1;
              goto LAB_109711e50;
            }
          }
          else {
LAB_109711e50:
            if (uVar9 < uVar6) {
              if (uVar6 <= (uVar4 - uVar3) + uVar9) {
                uVar4 = (uVar3 + uVar6) - uVar9;
              }
              if (0x10fffe < uVar4) {
                uVar4 = 0x10ffff;
              }
              FUN_109739f84(param_2 + 0x10,uVar3,uVar4);
            }
          }
          uVar12 = uVar12 + 1;
          uVar4 = (*(uint *)(puVar2 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar2 + 6) & 0xff00ff) << 8;
          puVar15 = puVar15 + 3;
        } while (uVar12 < (uVar4 >> 0x10 | uVar4 << 0x10));
      }
      return;
    }
  }
  return;
}



/* Entry: 1096f94cc; end: 1096f94ff;  */

undefined8 FUN_1096f94cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return 0;
}



/* Entry: 1096f9500; end: 1096f95ff;  */

ulong FUN_1096f9500(long param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,ulong param_5,
                   undefined4 *param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x30) == PTR_FUN_1132e00a8) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(uVar3 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x0001096f95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(uVar3 + 0x90) + 0x38))
              (uVar3,*(undefined8 *)(uVar3 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar4);
    return uVar3;
  }
  uVar6 = 0;
  uVar3 = uVar6;
  if ((uint)param_3 != 0) {
    do {
      uVar2 = *param_4;
      *param_6 = 0;
      lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar5 + 0x10);
      }
      lVar5 = param_1;
      (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                (param_1,*(undefined8 *)(param_1 + 0x98),uVar2,param_6,uVar4);
      if ((int)lVar5 == 0) {
        return uVar6;
      }
      param_4 = (undefined4 *)((long)param_4 + (param_5 & 0xffffffff));
      param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      uVar3 = param_3;
    } while ((uint)param_3 != uVar1);
  }
  return uVar3;
}



/* Entry: 1096f9600; end: 1096f961f;  */

undefined8 FUN_1096f9600(void)

{
  undefined4 *in_x4;
  
  *in_x4 = 0;
  return 0;
}



/* Entry: 1096f9620; end: 1096f9857;  */

void FUN_1096f9620(long param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,uint param_5,
                  int *param_6,ulong param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x48) == PTR_FUN_1132e00c0) {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x38);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x58))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar3);
    if ((int)param_3 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      do {
        iVar6 = *param_6;
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x28);
          if (iVar1 != *(int *)(param_1 + 0x28)) {
            lVar5 = (long)iVar6;
            iVar6 = 0;
            if ((long)iVar1 != 0) {
              iVar6 = (int)((*(int *)(param_1 + 0x28) * lVar5) / (long)iVar1);
            }
          }
        }
        *param_6 = iVar6;
        param_6 = (int *)((long)param_6 + (param_7 & 0xffffffff));
        uVar2 = (int)param_3 - 1;
        param_3 = (ulong)uVar2;
      } while (uVar2 != 0);
    }
  }
  else if ((int)param_3 != 0) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar4 + 0x28);
      }
      lVar4 = param_1;
      (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                (param_1,*(undefined8 *)(param_1 + 0x98),*param_4,uVar3);
      *param_6 = (int)lVar4;
      param_4 = (undefined4 *)((long)param_4 + (ulong)param_5);
      param_6 = (int *)((long)param_6 + (param_7 & 0xffffffff));
      uVar2 = (int)param_3 - 1;
      param_3 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1096f9858; end: 1096f98c7;  */

undefined8 FUN_1096f9858(void)

{
  undefined4 *in_x3;
  undefined4 *in_x4;
  
  *in_x4 = 0;
  *in_x3 = 0;
  return 1;
}



/* Entry: 1096f98c8; end: 1096f9c8b;  */

void FUN_1096f98c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0xb8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar3 = PTR_FUN_1132e0110;
    puVar2 = PTR_DAT_1132e0108;
    puVar1 = PTR_DAT_1132e00f8;
    *(undefined **)(puVar4 + 0x22) = PTR_DAT_1132e0100;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    *(undefined **)(puVar4 + 0x26) = puVar3;
    *(undefined **)(puVar4 + 0x24) = puVar2;
    puVar1 = PTR_DAT_1132e0118;
    *(undefined **)(puVar4 + 0x2a) = PTR_FUN_1132e0120;
    *(undefined **)(puVar4 + 0x28) = puVar1;
    *(undefined **)(puVar4 + 0x2c) = PTR_FUN_1132e0128;
    puVar3 = PTR_FUN_1132e00d0;
    puVar2 = PTR_FUN_1132e00c8;
    puVar1 = PTR_FUN_1132e00b8;
    *(undefined **)(puVar4 + 0x12) = PTR_FUN_1132e00c0;
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(undefined **)(puVar4 + 0x16) = puVar3;
    *(undefined **)(puVar4 + 0x14) = puVar2;
    puVar3 = PTR_FUN_1132e00f0;
    puVar2 = PTR_DAT_1132e00e8;
    puVar1 = PTR_DAT_1132e00d8;
    *(undefined **)(puVar4 + 0x1a) = PTR_DAT_1132e00e0;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    *(undefined **)(puVar4 + 0x1e) = puVar3;
    *(undefined **)(puVar4 + 0x1c) = puVar2;
    puVar3 = PTR_FUN_1132e00b0;
    puVar2 = PTR_FUN_1132e00a8;
    puVar1 = PTR_FUN_1132e0098;
    *(undefined **)(puVar4 + 10) = PTR_FUN_1132e00a0;
    *(undefined **)(puVar4 + 8) = puVar1;
    *(undefined **)(puVar4 + 0xe) = puVar3;
    *(undefined **)(puVar4 + 0xc) = puVar2;
  }
  return;
}



/* Entry: 1096f9c8c; end: 1096f9e07;  */

void FUN_1096f9c8c(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096f9ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
       (pcVar3 = (code *)**(undefined8 **)(param_1 + 0x18), pcVar3 != (code *)0x0)) {
      if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined8 **)(param_1 + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f9e08;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x20) = pcVar3;
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = param_3;
      }
      if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096f9e08; end: 1096f9ea7;  */

void FUN_1096f9e08(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x90) + 0x10);
  if (puVar6 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar6;
  }
  (**(code **)(*(long *)(lVar3 + 0x90) + 0x20))(lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,uVar4);
  if ((int)lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x18) + 0x2c);
    lVar3 = (long)iVar5;
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar5 != iVar1) {
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = (int)(((long)iVar1 * (long)*param_3) / lVar3);
      }
      iVar2 = 0;
      if (lVar3 != 0) {
        iVar2 = (int)(((long)param_3[1] * (long)iVar1) / lVar3);
      }
      *param_3 = iVar5;
      param_3[1] = iVar2;
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = (int)(((long)param_3[2] * (long)iVar1) / lVar3);
      }
      goto LAB_1096f9e70;
    }
  }
  iVar5 = param_3[2];
LAB_1096f9e70:
  param_3[2] = iVar5;
  return;
}



/* Entry: 1096f9ea8; end: 1096f9f93;  */

void FUN_1096f9ea8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096f9f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f9f94;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096f9f94; end: 1096fa033;  */

void FUN_1096f9f94(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  lVar6 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar6 + 8);
  }
  (**(code **)(*(long *)(lVar3 + 0x90) + 0x28))(lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,uVar4);
  if ((int)lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
    lVar3 = (long)iVar5;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar5 != iVar1) {
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = (int)(((long)iVar1 * (long)*param_3) / lVar3);
      }
      iVar2 = 0;
      if (lVar3 != 0) {
        iVar2 = (int)(((long)param_3[1] * (long)iVar1) / lVar3);
      }
      *param_3 = iVar5;
      param_3[1] = iVar2;
      iVar5 = 0;
      if (lVar3 != 0) {
        iVar5 = (int)(((long)param_3[2] * (long)iVar1) / lVar3);
      }
      goto LAB_1096f9ffc;
    }
  }
  iVar5 = param_3[2];
LAB_1096f9ffc:
  param_3[2] = iVar5;
  return;
}



/* Entry: 1096fa034; end: 1096fa11f;  */

void FUN_1096fa034(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x10), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096fa120;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x10) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fa120; end: 1096fa1b7;  */

void FUN_1096fa120(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)param_3;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x90) + 0x38);
  if (pcVar2 != (code *)PTR_FUN_1132e00b0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar4 + 0x18);
    }
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x98),1,&uStack_14,0,param_4,0,uVar1);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  lVar3 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001096fa1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
            (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,uVar1);
  return;
}



/* Entry: 1096fa1b8; end: 1096fa38f;  */

void FUN_1096fa1b8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f9500;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x38) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fa390; end: 1096fa3b7;  */

void FUN_1096fa390(long param_1)

{
  long lVar1;
  undefined4 *in_x4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *in_x4 = 0;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x40);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096fa3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 1096fa3b8; end: 1096fa4a3;  */

void FUN_1096fa3b8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x28), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096fa4a4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x48) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x28) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fa4a4; end: 1096fa567;  */

void FUN_1096fa4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_3;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x90) + 0x58);
  if (pcVar2 == (code *)PTR_FUN_1132e00d0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar4 + 0x28);
    }
    (**(code **)(*(long *)(lVar3 + 0x90) + 0x48))(lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,uVar1)
    ;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar3 + 0x38);
    }
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x98),1,&uStack_24,0,auStack_28,0,uVar1);
  }
  return;
}



/* Entry: 1096fa568; end: 1096fa653;  */

void FUN_1096fa568(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x30), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096fa654;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x50) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x30) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fa654; end: 1096fa717;  */

void FUN_1096fa654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_3;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x90) + 0x60);
  if (pcVar2 == (code *)PTR_DAT_1132e00d8) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar4 + 0x30);
    }
    (**(code **)(*(long *)(lVar3 + 0x90) + 0x50))(lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,uVar1)
    ;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar3 + 0x40);
    }
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x98),1,&uStack_24,0,auStack_28,0,uVar1);
  }
  return;
}



/* Entry: 1096fa718; end: 1096faad3;  */

void FUN_1096fa718(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fa774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x38), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096f9620;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x58) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x38) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096faad4; end: 1096fab9b;  */

void FUN_1096faad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(*(long *)(lVar1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x58);
  }
  (**(code **)(*(long *)(lVar1 + 0x90) + 0x78))
            (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,param_4,uVar2);
  return;
}



/* Entry: 1096fab9c; end: 1096faf9f;  */

void FUN_1096fab9c(long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fabf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x68), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      lVar2 = 0x1096fac88;
      if (param_2 != 0) {
        lVar2 = param_2;
      }
      *(long *)(param_1 + 0x88) = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x68) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fafa0; end: 1096fafcb;  */

void FUN_1096fafa0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  int param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (param_5 != 0) {
    *param_4 = 0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x98);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fafc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096fafc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 1096fafcc; end: 1096fb20f;  */

void FUN_1096fafcc(long param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fb028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x80), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      lVar2 = 0x1096fb0b8;
      if (param_2 != 0) {
        lVar2 = param_2;
      }
      *(long *)(param_1 + 0xa0) = lVar2;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x80) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fb210; end: 1096fb2bb;  */

void FUN_1096fb210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  lVar1 = *(long *)(param_1 + 0x18);
  fStack_1c = 0.0;
  fStack_20 = 0.0;
  if (*(int *)(lVar1 + 0x28) != 0) {
    fStack_20 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar1 + 0x28);
  }
  fStack_18 = 0.0;
  if (*(int *)(lVar1 + 0x2c) != 0) {
    fStack_18 = (float)*(int *)(lVar1 + 0x2c);
    fStack_1c = (float)*(int *)(param_1 + 0x2c) / fStack_18;
    fStack_18 = ((*(float *)(param_1 + 0x44) - *(float *)(lVar1 + 0x44)) *
                (float)*(int *)(param_1 + 0x28)) / fStack_18;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x88);
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*(long *)(lVar1 + 0x90) + 0xa8))
            (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,0x1132e0278,&uStack_30,uVar2);
  return;
}



/* Entry: 1096fb2bc; end: 1096fb3a7;  */

void FUN_1096fb2bc(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fb318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x90), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x0001096f9d78(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_1096fb3a8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0xb0) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x90) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 1096fb3a8; end: 1096fb59b;  */

void FUN_1096fb3a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_1 + 0x18);
  fVar5 = 0.0;
  fVar4 = 0.0;
  if (*(int *)(lVar2 + 0x28) != 0) {
    fVar4 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar2 + 0x28);
  }
  fVar6 = 0.0;
  if (*(int *)(lVar2 + 0x2c) != 0) {
    fVar6 = (float)*(int *)(lVar2 + 0x2c);
    fVar5 = ((*(float *)(param_1 + 0x44) - *(float *)(lVar2 + 0x44)) *
            (float)*(int *)(param_1 + 0x28)) / fVar6;
    fVar6 = (float)*(int *)(param_1 + 0x2c) / fVar6;
  }
  if (*(undefined8 **)(param_4 + 0x80) == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_4 + 0x80);
  }
  (**(code **)(param_4 + 0x10))(fVar4,fVar5,0,fVar6,0,0,param_4,param_5,uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(*(long *)(lVar2 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x90);
  }
  (**(code **)(*(long *)(lVar2 + 0x90) + 0xb0))
            (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar1);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001096fb4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))(param_4,param_5,uVar1);
  return;
}



/* Entry: 1096fb59c; end: 1096fb5e7;  */

long FUN_1096fb59c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1096fb5e8();
  func_0x0001096fb6d0();
  if ((param_1 != 0) && (0xffff < *(uint *)(param_1 + 0x10))) {
    FUN_1096fb7bc(lVar1,(*(uint *)(param_1 + 0x10) >> 0x10) - 1);
  }
  return lVar1;
}



/* Entry: 1096fb5e8; end: 1096fb7bb;  */

undefined4 * FUN_1096fb5e8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)&DAT_1132dfe18;
  }
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0xb8);
  puVar5 = (undefined4 *)0x1132e0130;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    if (param_1[1] != 0) {
      param_1[1] = 0;
    }
    *(undefined8 *)(puVar4 + 6) = 0x1132e0130;
    if (*param_1 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = *param_1 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int **)(puVar4 + 8) = param_1;
    *(undefined8 *)(puVar4 + 0x24) = 0x1132e0078;
    *(undefined4 **)(puVar4 + 0x2a) = puVar4;
    iVar3 = param_1[5];
    if (iVar3 == 0) {
      func_0x0001097109c0();
      iVar3 = (int)param_1;
    }
    puVar4[10] = iVar3;
    puVar4[0xb] = iVar3;
    *(undefined1 *)(puVar4 + 0xe) = 1;
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(puVar4 + 0x13) = uVar6;
    *(undefined8 *)(puVar4 + 0x18) = 0x10000;
    *(undefined8 *)(puVar4 + 0x16) = 0x10000;
    puVar4[0x1d] = 0xffffffff;
    puVar5 = puVar4;
  }
  return puVar5;
}



/* Entry: 1096fb7bc; end: 1096fb7ef;  */

/* WARNING: Removing unreachable block (ram,0x0001096fbde0) */
/* WARNING: Removing unreachable block (ram,0x0001096fbdec) */
/* WARNING: Removing unreachable block (ram,0x0001096fbdf0) */
/* WARNING: Removing unreachable block (ram,0x0001096fbe08) */
/* WARNING: Removing unreachable block (ram,0x0001096fbe18) */
/* WARNING: Removing unreachable block (ram,0x0001096fbe1c) */
/* WARNING: Removing unreachable block (ram,0x0001096fbe2c) */

void FUN_1096fb7bc(ulong param_1,long param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  undefined *puVar17;
  uint *puVar18;
  ushort *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 0x74) == param_3)) {
    return;
  }
  iVar12 = *(int *)(param_2 + 0x10) + 1;
  *(int *)(param_2 + 0x10) = iVar12;
  *(int *)(param_2 + 0x14) = iVar12;
  *(int *)(param_2 + 0x74) = param_3;
  if (*(int *)(param_2 + 4) == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  iVar12 = iVar2 + 1;
  *(int *)(param_2 + 0x10) = iVar12;
  *(int *)(param_2 + 0x14) = iVar12;
  if (*(int *)(param_2 + 0x74) == -1) {
    if (*(int *)(param_2 + 4) == 0) {
      return;
    }
    iVar2 = iVar2 + 2;
    *(int *)(param_2 + 0x10) = iVar2;
    *(int *)(param_2 + 0x14) = iVar2;
    FUN_1097469d4(*(long *)(param_2 + 0x20) + 0xf8);
    pfVar24 = (float *)0x0;
    pfVar25 = (float *)0x0;
    uVar11 = 0;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x20) + 0xf0;
    FUN_1097465e0();
    puVar8 = (ushort *)&UNK_10dfe4888;
    if (0xf < *(uint *)(lVar14 + 0x18)) {
      puVar8 = *(ushort **)(lVar14 + 0x10);
    }
    uVar32 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
    uVar11 = (uint)(puVar8[4] >> 8) | (puVar8[4] & 0xff00ff) << 8;
    pfVar23 = (float *)(ulong)uVar11;
    puVar19 = (ushort *)&UNK_10dfe4888;
    if (uVar32 != 0) {
      puVar19 = (ushort *)((long)puVar8 + (ulong)uVar32);
    }
    if (uVar11 == 0) {
      pfVar24 = (float *)0x0;
      pfVar25 = (float *)0x0;
    }
    else {
      pfVar24 = pfVar23;
      _calloc(pfVar23,4);
      pfVar25 = pfVar23;
      _calloc(pfVar23,4);
      if (pfVar24 == (float *)0x0 || pfVar25 == (float *)0x0) {
        _free(pfVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(pfVar25);
        return;
      }
      lVar14 = 0;
      puVar17 = (undefined *)((long)puVar19 + 0xb);
      do {
        uVar32 = (*(uint *)(puVar17 + -3) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar17 + -3) & 0xff00ff) << 8;
        fVar27 = (float)(int)(uVar32 >> 0x10 | uVar32 << 0x10) / 65536.0;
        param_1 = (ulong)(uint)fVar27;
        *(float *)((long)pfVar25 + lVar14) = fVar27;
        lVar14 = lVar14 + 4;
        puVar17 = puVar17 + 0x14;
      } while ((long)pfVar23 * 4 - lVar14 != 0);
    }
    uVar32 = *(uint *)(param_2 + 0x74);
    if (uVar32 != 0xffffffff) {
      lVar14 = *(long *)(param_2 + 0x20) + 0xf0;
      FUN_1097465e0();
      puVar8 = (ushort *)&UNK_10dfe4888;
      if (0xf < *(uint *)(lVar14 + 0x18)) {
        puVar8 = *(ushort **)(lVar14 + 0x10);
      }
      if (uVar32 < ((uint)(puVar8[6] >> 8) | (puVar8[6] & 0xff00ff) << 8)) {
        uVar5 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
        puVar19 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar19 = (ushort *)((long)puVar8 + (ulong)uVar5);
        }
        if ((uVar11 != 0) && (puVar19 != (ushort *)0x0)) {
          uVar5 = (uint)CONCAT11((byte)puVar8[4],*(byte *)((long)puVar8 + 9));
          if (uVar5 != 0) {
            if (uVar11 <= uVar5) {
              uVar5 = uVar11;
            }
            uVar15 = (ulong)uVar5;
            puVar17 = (undefined *)
                      ((long)puVar19 +
                      (ulong)*(byte *)((long)puVar8 + 9) * 0x14 + (ulong)(byte)puVar8[4] * 0x1400 +
                      (ulong)(uVar32 * ((uint)(byte)puVar8[7] * 0x100 +
                                       (uint)*(byte *)((long)puVar8 + 0xf))) + 7);
            pfVar16 = pfVar25;
            do {
              uVar32 = (*(uint *)(puVar17 + -3) & 0xff00ff00) >> 8 |
                       (*(uint *)(puVar17 + -3) & 0xff00ff) << 8;
              fVar27 = (float)(int)(uVar32 >> 0x10 | uVar32 << 0x10) / 65536.0;
              param_1 = (ulong)(uint)fVar27;
              *pfVar16 = fVar27;
              puVar17 = puVar17 + 4;
              uVar15 = uVar15 - 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar15 != 0);
          }
        }
      }
    }
    lVar26 = *(long *)(param_2 + 0x20);
    lVar14 = lVar26 + 0xf0;
    FUN_1097465e0();
    if (uVar11 != 0) {
      pfVar16 = (float *)0x0;
      puVar8 = (ushort *)&UNK_10dfe4888;
      if (0xf < *(uint *)(lVar14 + 0x18)) {
        puVar8 = *(ushort **)(lVar14 + 0x10);
      }
      uVar32 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
      uVar3 = puVar8[4];
      puVar19 = (ushort *)&UNK_10dfe4888;
      if (uVar32 != 0) {
        puVar19 = (ushort *)((long)puVar8 + (ulong)uVar32);
      }
      param_1 = 0x3f000000;
      do {
        puVar8 = puVar19;
        if ((float *)(ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= pfVar16) {
          puVar8 = (ushort *)&UNK_10dfe4888;
        }
        uVar32 = (*(uint *)(puVar8 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 4) & 0xff00ff) << 8
        ;
        fVar29 = (float)(int)(uVar32 >> 0x10 | uVar32 << 0x10) / 65536.0;
        uVar32 = (*(uint *)(puVar8 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 2) & 0xff00ff) << 8
        ;
        fVar30 = (float)(int)(uVar32 >> 0x10 | uVar32 << 0x10) / 65536.0;
        fVar27 = fVar29;
        if (fVar30 < fVar29) {
          fVar27 = fVar30;
        }
        uVar32 = (*(uint *)(puVar8 + 6) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 6) & 0xff00ff) << 8
        ;
        fVar31 = (float)(int)(uVar32 >> 0x10 | uVar32 << 0x10) / 65536.0;
        fVar30 = fVar29;
        if (fVar29 < fVar31) {
          fVar30 = fVar31;
        }
        fVar31 = pfVar25[(long)pfVar16];
        if (pfVar25[(long)pfVar16] < fVar27) {
          fVar31 = fVar27;
        }
        if (fVar30 < fVar31) {
          fVar31 = fVar30;
        }
        if (fVar31 == fVar29) {
          fVar27 = 0.0;
        }
        else {
          fVar27 = fVar29 - fVar27;
          if (fVar29 <= fVar31) {
            fVar27 = fVar30 - fVar29;
          }
          fVar27 = (float)(int)(((fVar31 - fVar29) / fVar27) * 16384.0 + 0.5);
        }
        pfVar24[(long)pfVar16] = fVar27;
        pfVar16 = (float *)((long)pfVar16 + 1);
        puVar19 = puVar19 + 10;
      } while (pfVar23 != pfVar16);
    }
    lVar26 = lVar26 + 0xf8;
    FUN_1097469d4();
    puVar8 = (ushort *)&UNK_10dfe4888;
    if (7 < *(uint *)(lVar26 + 0x18)) {
      puVar8 = *(ushort **)(lVar26 + 0x10);
    }
    uVar3 = puVar8[3];
    uVar32 = uVar11;
    if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= uVar11) {
      uVar32 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    }
    puVar18 = (uint *)(puVar8 + 4);
    if (uVar32 != 0) {
      uVar15 = 0;
      param_1 = 0x3f000000;
      do {
        fVar27 = pfVar24[uVar15];
        uVar7 = *puVar18;
        uVar5 = (uint)CONCAT11((byte)uVar7,*(undefined *)((long)puVar18 + 1));
        uVar6 = uVar5 - 1;
        if (uVar5 == 0 || uVar6 == 0) {
          if (uVar5 != 0) {
            fVar27 = (float)(((int)fVar27 -
                             ((int)(short)((ushort)*(byte *)((long)puVar18 + 2) << 8) |
                             (uint)*(byte *)((long)puVar18 + 3))) +
                            ((int)(short)((ushort)(byte)puVar18[1] << 8) |
                            (uint)*(byte *)((long)puVar18 + 5)));
          }
        }
        else {
          pbVar20 = (byte *)((long)puVar18 + 2);
          uVar5 = (int)(short)((ushort)*pbVar20 << 8) | (uint)*(byte *)((long)puVar18 + 3);
          iVar12 = (int)fVar27 - uVar5;
          if (iVar12 == 0 || (int)fVar27 < (int)uVar5) {
            fVar27 = (float)(iVar12 + ((int)(short)((ushort)(byte)puVar18[1] << 8) |
                                      (uint)*(byte *)((long)puVar18 + 5)));
          }
          else {
            if (uVar6 < 2) {
              uVar13 = 1;
            }
            else {
              uVar22 = 1;
              pbVar21 = (byte *)((long)puVar18 + 7);
              do {
                uVar13 = uVar22;
                if ((int)fVar27 <= (int)((int)(short)((ushort)pbVar21[-1] << 8) | (uint)*pbVar21))
                break;
                uVar22 = uVar22 + 1;
                uVar13 = (ulong)uVar6;
                pbVar21 = pbVar21 + 4;
              } while (uVar6 != uVar22);
            }
            pbVar21 = pbVar20 + (uVar13 & 0xffffffff) * 4;
            uVar5 = (int)(short)((ushort)*pbVar21 << 8) | (uint)pbVar21[1];
            if ((int)fVar27 < (int)uVar5) {
              pbVar20 = pbVar20 + (ulong)((int)uVar13 - 1) * 4;
              uVar6 = (int)(short)((ushort)*pbVar20 << 8) | (uint)pbVar20[1];
              if (uVar6 == uVar5) {
                fVar27 = (float)((int)(short)((ushort)pbVar20[2] << 8) | (uint)pbVar20[3]);
              }
              else {
                uVar4 = (int)(short)((ushort)pbVar20[2] << 8) | (uint)pbVar20[3];
                fVar27 = (float)(int)(((float)(int)((int)fVar27 - uVar6) *
                                      (float)(int)(((int)(short)((ushort)pbVar21[2] << 8) |
                                                   (uint)pbVar21[3]) - uVar4)) /
                                      (float)(int)(uVar5 - uVar6) + (float)(int)uVar4 + 0.5);
              }
            }
            else {
              fVar27 = (float)(((int)fVar27 - uVar5) +
                              ((int)(short)((ushort)pbVar21[2] << 8) | (uint)pbVar21[3]));
            }
          }
        }
        pfVar24[uVar15] = fVar27;
        puVar18 = (uint *)((long)puVar18 +
                          (ulong)*(byte *)((long)puVar18 + 1) * 4 + (ulong)(byte)uVar7 * 0x400 + 2);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar32);
    }
    if (1 < (ushort)(*puVar8 >> 8 | *puVar8 << 8)) {
      if (uVar32 < CONCAT11((byte)puVar8[3],*(byte *)((long)puVar8 + 7))) {
        iVar12 = ((uint)(byte)puVar8[3] * 0x100 + (uint)*(byte *)((long)puVar8 + 7)) - uVar32;
        do {
          puVar18 = (uint *)((long)puVar18 +
                            (ulong)*(byte *)((long)puVar18 + 1) * 4 + (ulong)(byte)*puVar18 * 0x400
                            + 2);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar32 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
      uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
      puVar19 = (ushort *)&UNK_10dfe4888;
      if (uVar32 != 0) {
        puVar19 = (ushort *)((long)puVar8 + (ulong)uVar32);
      }
      uVar32 = (puVar18[1] & 0xff00ff00) >> 8 | (puVar18[1] & 0xff00ff) << 8;
      uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
      puVar1 = (ushort *)&UNK_10dfe4888;
      if (uVar32 != 0) {
        puVar1 = (ushort *)((long)puVar8 + (ulong)uVar32);
      }
      puVar8 = puVar1;
      FUN_10971d8b8(puVar1);
      uStack_80 = 0;
      lStack_78 = 0;
      FUN_1097219a0(&uStack_80,pfVar23);
      if (uVar11 != 0) {
        pfVar16 = (float *)0x0;
        do {
          fVar29 = (float)param_1;
          fVar27 = pfVar24[(long)pfVar16];
          puVar9 = puVar19;
          FUN_10971e940(puVar19,pfVar16);
          FUN_10971ea00(puVar1,(ulong)puVar9 >> 0x10 & 0xffff,(uint)puVar9 & 0xffff,pfVar24,pfVar23,
                        puVar8);
          fVar27 = (float)(int)(fVar29 + 0.5) + (float)(int)fVar27;
          param_1 = (ulong)(uint)fVar27;
          iVar12 = (int)fVar27;
          if (iVar12 < -0x3fff) {
            iVar12 = -0x4000;
          }
          if (0x3fff < iVar12) {
            iVar12 = 0x4000;
          }
          uVar32 = uStack_80._4_4_;
          if ((int)uStack_80._4_4_ < (int)uStack_80) {
LAB_1096fc234:
            uStack_80 = CONCAT44(uVar32 + 1,(int)uStack_80);
            *(int *)(lStack_78 + (ulong)uVar32 * 4) = iVar12;
          }
          else {
            puVar10 = &uStack_80;
            FUN_1097219a0(puVar10,uStack_80._4_4_ + 1);
            if ((int)puVar10 != 0) {
              uVar32 = uStack_80._4_4_;
              goto LAB_1096fc234;
            }
            uRam000000011382ab30 = 0;
          }
          pfVar16 = (float *)((long)pfVar16 + 1);
        } while (pfVar23 != pfVar16);
        pfVar16 = (float *)0x0;
        do {
          if (pfVar16 < (float *)(uStack_80 >> 0x20)) {
            fVar27 = *(float *)(lStack_78 + (long)pfVar16 * 4);
          }
          else {
            fVar27 = 0.0;
            uRam000000011382ab30 = 0;
          }
          pfVar24[(long)pfVar16] = fVar27;
          pfVar16 = (float *)((long)pfVar16 + 1);
        } while (pfVar23 != pfVar16);
      }
      _free(puVar8);
      if ((int)uStack_80 != 0) {
        _free(lStack_78);
      }
    }
  }
  _free(*(undefined8 *)(param_2 + 0x80));
  _free(*(undefined8 *)(param_2 + 0x88));
  *(float **)(param_2 + 0x80) = pfVar24;
  *(float **)(param_2 + 0x88) = pfVar25;
  *(uint *)(param_2 + 0x78) = uVar11;
  uVar13 = *(ulong *)(param_2 + 0x20);
  uVar15 = (ulong)*(uint *)(uVar13 + 0x14);
  if (*(uint *)(uVar13 + 0x14) == 0) {
    func_0x0001097109c0();
    uVar15 = uVar13;
  }
  fVar30 = (float)(uVar15 & 0xffffffff);
  uVar15 = *(ulong *)(param_2 + 0x28);
  uVar28 = NEON_scvtf(uVar15,4);
  fVar27 = (float)uVar28;
  fVar29 = (float)((ulong)uVar28 >> 0x20);
  *(float *)(param_2 + 0x4c) = fVar27 / fVar30;
  *(float *)(param_2 + 0x50) = fVar29 / fVar30;
  uVar32 = (uint)(uVar15 >> 0x20);
  lVar14 = (uVar15 & 0xffffffff) << 0x10;
  if ((int)uVar15 < 0) {
    lVar14 = (ulong)(uint)-(int)uVar15 * -0x10000;
  }
  lVar26 = (ulong)uVar32 << 0x10;
  if ((long)uVar15 < 0) {
    lVar26 = (ulong)-uVar32 * -0x10000;
  }
  *(long *)(param_2 + 0x58) = (long)((float)lVar14 / fVar30);
  *(long *)(param_2 + 0x60) = (long)((float)lVar26 / fVar30);
  *(ulong *)(param_2 + 0x3c) =
       CONCAT44((int)ABS((float)(int)((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) *
                                      fVar29 + 0.5)),
                (int)ABS((float)(int)((float)*(undefined8 *)(param_2 + 0x30) * fVar27 + 0.5)));
  if (uVar32 == 0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = (*(float *)(param_2 + 0x44) * fVar27) / fVar29;
  }
  *(float *)(param_2 + 0x48) = fVar29;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  return;
}



/* Entry: 1096fb7f0; end: 1096fb90b;  */

long FUN_1096fb7f0(int *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1132e0130;
  }
  lVar3 = *(long *)(param_1 + 8);
  FUN_1096fb5e8();
  if (*(int *)(lVar3 + 4) != 0) {
    if (*param_1 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = *param_1 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int **)(lVar3 + 0x18) = param_1;
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(lVar3 + 0x30) = uVar7;
    *(char *)(lVar3 + 0x38) = (char)param_1[0xe];
    *(int *)(lVar3 + 0x44) = param_1[0x11];
    *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(param_1 + 0x1a);
    *(int *)(lVar3 + 0x70) = param_1[0x1c];
    uVar6 = (ulong)(uint)param_1[0x1e];
    if (param_1[0x1e] != 0) {
      uVar4 = uVar6;
      _calloc(uVar6,4);
      uVar5 = uVar6;
      _calloc(uVar6,4);
      if ((uVar4 == 0) || (uVar5 == 0)) {
        _free(uVar4);
        _free(uVar5);
      }
      else {
        _memcpy(uVar4,*(undefined8 *)(param_1 + 0x20),uVar6 << 2);
        _memcpy(uVar5,*(undefined8 *)(param_1 + 0x22),uVar6 << 2);
        FUN_1096fb90c(lVar3,uVar4,uVar5,uVar6);
      }
    }
    FUN_1096fb958(lVar3);
  }
  return lVar3;
}



/* Entry: 1096fb90c; end: 1096fb957;  */

void FUN_1096fb90c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  uint uVar9;
  
  _free(*(undefined8 *)(param_1 + 0x80));
  _free(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar8 = (ulong)*(uint *)(uVar3 + 0x14);
  if (*(uint *)(uVar3 + 0x14) == 0) {
    func_0x0001097109c0();
    uVar8 = uVar3;
  }
  fVar7 = (float)(uVar8 & 0xffffffff);
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar6 = NEON_scvtf(uVar8,4);
  fVar4 = (float)uVar6;
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  *(float *)(param_1 + 0x4c) = fVar4 / fVar7;
  *(float *)(param_1 + 0x50) = fVar5 / fVar7;
  uVar9 = (uint)(uVar8 >> 0x20);
  lVar1 = (uVar8 & 0xffffffff) << 0x10;
  if ((int)uVar8 < 0) {
    lVar1 = (ulong)(uint)-(int)uVar8 * -0x10000;
  }
  lVar2 = (ulong)uVar9 << 0x10;
  if ((long)uVar8 < 0) {
    lVar2 = (ulong)-uVar9 * -0x10000;
  }
  *(long *)(param_1 + 0x58) = (long)((float)lVar1 / fVar7);
  *(long *)(param_1 + 0x60) = (long)((float)lVar2 / fVar7);
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44((int)ABS((float)(int)((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) *
                                      fVar5 + 0.5)),
                (int)ABS((float)(int)((float)*(undefined8 *)(param_1 + 0x30) * fVar4 + 0.5)));
  if (uVar9 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (*(float *)(param_1 + 0x44) * fVar4) / fVar5;
  }
  *(float *)(param_1 + 0x48) = fVar5;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 1096fb958; end: 1096fbb33;  */

void FUN_1096fb958(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar8 = (ulong)*(uint *)(uVar3 + 0x14);
  if (*(uint *)(uVar3 + 0x14) == 0) {
    func_0x0001097109c0();
    uVar8 = uVar3;
  }
  fVar7 = (float)(uVar8 & 0xffffffff);
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar6 = NEON_scvtf(uVar8,4);
  fVar4 = (float)uVar6;
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  *(float *)(param_1 + 0x4c) = fVar4 / fVar7;
  *(float *)(param_1 + 0x50) = fVar5 / fVar7;
  uVar9 = (uint)(uVar8 >> 0x20);
  lVar1 = (uVar8 & 0xffffffff) << 0x10;
  if ((int)uVar8 < 0) {
    lVar1 = (ulong)(uint)-(int)uVar8 * -0x10000;
  }
  lVar2 = (ulong)uVar9 << 0x10;
  if ((long)uVar8 < 0) {
    lVar2 = (ulong)-uVar9 * -0x10000;
  }
  *(long *)(param_1 + 0x58) = (long)((float)lVar1 / fVar7);
  *(long *)(param_1 + 0x60) = (long)((float)lVar2 / fVar7);
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44((int)ABS((float)(int)((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) *
                                      fVar5 + 0.5)),
                (int)ABS((float)(int)((float)*(undefined8 *)(param_1 + 0x30) * fVar4 + 0.5)));
  if (uVar9 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (*(float *)(param_1 + 0x44) * fVar4) / fVar5;
  }
  *(float *)(param_1 + 0x48) = fVar5;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 1096fbb34; end: 1096fbbeb;  */

void FUN_1096fbb34(long param_1,int *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096fbbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    piVar1 = (int *)0x1132e0078;
    if (param_2 != (int *)0x0) {
      piVar1 = param_2;
    }
    if (*piVar1 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001096f9948(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar1;
    *(undefined8 *)(param_1 + 0x98) = param_3;
    *(code **)(param_1 + 0xa0) = UNRECOVERED_JUMPTABLE;
  }
  return;
}



/* Entry: 1096fbbec; end: 1096fbc23;  */

void FUN_1096fbbec(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  uint uVar9;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     ((*(int *)(param_1 + 0x28) != param_2 || (*(int *)(param_1 + 0x2c) != param_3)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar8 = (ulong)*(uint *)(uVar3 + 0x14);
    if (*(uint *)(uVar3 + 0x14) == 0) {
      func_0x0001097109c0();
      uVar8 = uVar3;
    }
    fVar7 = (float)(uVar8 & 0xffffffff);
    uVar8 = *(ulong *)(param_1 + 0x28);
    uVar6 = NEON_scvtf(uVar8,4);
    fVar4 = (float)uVar6;
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    *(float *)(param_1 + 0x4c) = fVar4 / fVar7;
    *(float *)(param_1 + 0x50) = fVar5 / fVar7;
    uVar9 = (uint)(uVar8 >> 0x20);
    lVar1 = (uVar8 & 0xffffffff) << 0x10;
    if ((int)uVar8 < 0) {
      lVar1 = (ulong)(uint)-(int)uVar8 * -0x10000;
    }
    lVar2 = (ulong)uVar9 << 0x10;
    if ((long)uVar8 < 0) {
      lVar2 = (ulong)-uVar9 * -0x10000;
    }
    *(long *)(param_1 + 0x58) = (long)((float)lVar1 / fVar7);
    *(long *)(param_1 + 0x60) = (long)((float)lVar2 / fVar7);
    *(ulong *)(param_1 + 0x3c) =
         CONCAT44((int)ABS((float)(int)((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) *
                                        fVar5 + 0.5)),
                  (int)ABS((float)(int)((float)*(undefined8 *)(param_1 + 0x30) * fVar4 + 0.5)));
    if (uVar9 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (*(float *)(param_1 + 0x44) * fVar4) / fVar5;
    }
    *(float *)(param_1 + 0x48) = fVar5;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
  }
  return;
}



/* Entry: 1096fbc24; end: 1096fc38f;  */

void FUN_1096fbc24(ulong param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  undefined *puVar17;
  uint *puVar18;
  ushort *puVar19;
  float *pfVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  undefined8 uStack_80;
  long lStack_78;
  
  if (*(int *)(param_2 + 4) == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  iVar12 = iVar2 + 1;
  *(int *)(param_2 + 0x10) = iVar12;
  *(int *)(param_2 + 0x14) = iVar12;
  if ((param_4 == 0) && (*(int *)(param_2 + 0x74) == -1)) {
    if (*(int *)(param_2 + 4) == 0) {
      return;
    }
    iVar2 = iVar2 + 2;
    *(int *)(param_2 + 0x10) = iVar2;
    *(int *)(param_2 + 0x14) = iVar2;
    FUN_1097469d4(*(long *)(param_2 + 0x20) + 0xf8);
    pfVar25 = (float *)0x0;
    pfVar26 = (float *)0x0;
    uVar11 = 0;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x20) + 0xf0;
    FUN_1097465e0();
    puVar8 = (ushort *)&UNK_10dfe4888;
    if (0xf < *(uint *)(lVar14 + 0x18)) {
      puVar8 = *(ushort **)(lVar14 + 0x10);
    }
    uVar33 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
    uVar11 = (uint)(puVar8[4] >> 8) | (puVar8[4] & 0xff00ff) << 8;
    pfVar24 = (float *)(ulong)uVar11;
    puVar19 = (ushort *)&UNK_10dfe4888;
    if (uVar33 != 0) {
      puVar19 = (ushort *)((long)puVar8 + (ulong)uVar33);
    }
    if (uVar11 == 0) {
      pfVar25 = (float *)0x0;
      pfVar26 = (float *)0x0;
    }
    else {
      pfVar25 = pfVar24;
      _calloc(pfVar24,4);
      pfVar26 = pfVar24;
      _calloc(pfVar24,4);
      if (pfVar25 == (float *)0x0 || pfVar26 == (float *)0x0) {
        _free(pfVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(pfVar26);
        return;
      }
      lVar14 = 0;
      puVar17 = (undefined *)((long)puVar19 + 0xb);
      do {
        uVar33 = (*(uint *)(puVar17 + -3) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar17 + -3) & 0xff00ff) << 8;
        fVar28 = (float)(int)(uVar33 >> 0x10 | uVar33 << 0x10) / 65536.0;
        param_1 = (ulong)(uint)fVar28;
        *(float *)((long)pfVar26 + lVar14) = fVar28;
        lVar14 = lVar14 + 4;
        puVar17 = puVar17 + 0x14;
      } while ((long)pfVar24 * 4 - lVar14 != 0);
    }
    uVar33 = *(uint *)(param_2 + 0x74);
    if (uVar33 != 0xffffffff) {
      lVar14 = *(long *)(param_2 + 0x20) + 0xf0;
      FUN_1097465e0();
      puVar8 = (ushort *)&UNK_10dfe4888;
      if (0xf < *(uint *)(lVar14 + 0x18)) {
        puVar8 = *(ushort **)(lVar14 + 0x10);
      }
      if (uVar33 < ((uint)(puVar8[6] >> 8) | (puVar8[6] & 0xff00ff) << 8)) {
        uVar5 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
        puVar1 = (ushort *)&UNK_10dfe4888;
        if (uVar5 != 0) {
          puVar1 = (ushort *)((long)puVar8 + (ulong)uVar5);
        }
        if ((uVar11 != 0) && (puVar1 != (ushort *)0x0)) {
          uVar5 = (uint)CONCAT11((byte)puVar8[4],*(byte *)((long)puVar8 + 9));
          if (uVar5 != 0) {
            if (uVar11 <= uVar5) {
              uVar5 = uVar11;
            }
            uVar15 = (ulong)uVar5;
            puVar17 = (undefined *)
                      ((long)puVar1 +
                      (ulong)*(byte *)((long)puVar8 + 9) * 0x14 + (ulong)(byte)puVar8[4] * 0x1400 +
                      (ulong)(uVar33 * ((uint)(byte)puVar8[7] * 0x100 +
                                       (uint)*(byte *)((long)puVar8 + 0xf))) + 7);
            pfVar16 = pfVar26;
            do {
              uVar33 = (*(uint *)(puVar17 + -3) & 0xff00ff00) >> 8 |
                       (*(uint *)(puVar17 + -3) & 0xff00ff) << 8;
              fVar28 = (float)(int)(uVar33 >> 0x10 | uVar33 << 0x10) / 65536.0;
              param_1 = (ulong)(uint)fVar28;
              *pfVar16 = fVar28;
              puVar17 = puVar17 + 4;
              uVar15 = uVar15 - 1;
              pfVar16 = pfVar16 + 1;
            } while (uVar15 != 0);
          }
        }
      }
    }
    if (param_4 != 0) {
      uVar15 = 0;
      do {
        if (uVar11 != 0) {
          puVar18 = (uint *)(param_3 + uVar15 * 8);
          uVar33 = *puVar18;
          fVar28 = (float)puVar18[1];
          param_1 = (ulong)(uint)fVar28;
          puVar17 = (undefined *)((long)puVar19 + 3);
          pfVar16 = pfVar26;
          pfVar20 = pfVar24;
          do {
            uVar5 = (*(uint *)(puVar17 + -3) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar17 + -3) & 0xff00ff) << 8;
            if ((uVar5 >> 0x10 | uVar5 << 0x10) == uVar33) {
              *pfVar16 = fVar28;
            }
            puVar17 = puVar17 + 0x14;
            pfVar16 = pfVar16 + 1;
            pfVar20 = (float *)((long)pfVar20 - 1);
          } while (pfVar20 != (float *)0x0);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_4);
    }
    lVar27 = *(long *)(param_2 + 0x20);
    lVar14 = lVar27 + 0xf0;
    FUN_1097465e0();
    if (uVar11 != 0) {
      pfVar16 = (float *)0x0;
      puVar8 = (ushort *)&UNK_10dfe4888;
      if (0xf < *(uint *)(lVar14 + 0x18)) {
        puVar8 = *(ushort **)(lVar14 + 0x10);
      }
      uVar33 = (uint)(puVar8[2] >> 8) | (puVar8[2] & 0xff00ff) << 8;
      uVar3 = puVar8[4];
      puVar19 = (ushort *)&UNK_10dfe4888;
      if (uVar33 != 0) {
        puVar19 = (ushort *)((long)puVar8 + (ulong)uVar33);
      }
      param_1 = 0x3f000000;
      do {
        puVar8 = puVar19;
        if ((float *)(ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= pfVar16) {
          puVar8 = (ushort *)&UNK_10dfe4888;
        }
        uVar33 = (*(uint *)(puVar8 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 4) & 0xff00ff) << 8
        ;
        fVar30 = (float)(int)(uVar33 >> 0x10 | uVar33 << 0x10) / 65536.0;
        uVar33 = (*(uint *)(puVar8 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 2) & 0xff00ff) << 8
        ;
        fVar31 = (float)(int)(uVar33 >> 0x10 | uVar33 << 0x10) / 65536.0;
        fVar28 = fVar30;
        if (fVar31 < fVar30) {
          fVar28 = fVar31;
        }
        uVar33 = (*(uint *)(puVar8 + 6) & 0xff00ff00) >> 8 | (*(uint *)(puVar8 + 6) & 0xff00ff) << 8
        ;
        fVar32 = (float)(int)(uVar33 >> 0x10 | uVar33 << 0x10) / 65536.0;
        fVar31 = fVar30;
        if (fVar30 < fVar32) {
          fVar31 = fVar32;
        }
        fVar32 = pfVar26[(long)pfVar16];
        if (pfVar26[(long)pfVar16] < fVar28) {
          fVar32 = fVar28;
        }
        if (fVar31 < fVar32) {
          fVar32 = fVar31;
        }
        if (fVar32 == fVar30) {
          fVar28 = 0.0;
        }
        else {
          fVar28 = fVar30 - fVar28;
          if (fVar30 <= fVar32) {
            fVar28 = fVar31 - fVar30;
          }
          fVar28 = (float)(int)(((fVar32 - fVar30) / fVar28) * 16384.0 + 0.5);
        }
        pfVar25[(long)pfVar16] = fVar28;
        pfVar16 = (float *)((long)pfVar16 + 1);
        puVar19 = puVar19 + 10;
      } while (pfVar24 != pfVar16);
    }
    lVar27 = lVar27 + 0xf8;
    FUN_1097469d4();
    puVar8 = (ushort *)&UNK_10dfe4888;
    if (7 < *(uint *)(lVar27 + 0x18)) {
      puVar8 = *(ushort **)(lVar27 + 0x10);
    }
    uVar3 = puVar8[3];
    uVar33 = uVar11;
    if (((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= uVar11) {
      uVar33 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    }
    puVar18 = (uint *)(puVar8 + 4);
    if (uVar33 != 0) {
      uVar15 = 0;
      param_1 = 0x3f000000;
      do {
        fVar28 = pfVar25[uVar15];
        uVar7 = *puVar18;
        uVar5 = (uint)CONCAT11((byte)uVar7,*(undefined *)((long)puVar18 + 1));
        uVar6 = uVar5 - 1;
        if (uVar5 == 0 || uVar6 == 0) {
          if (uVar5 != 0) {
            fVar28 = (float)(((int)fVar28 -
                             ((int)(short)((ushort)*(byte *)((long)puVar18 + 2) << 8) |
                             (uint)*(byte *)((long)puVar18 + 3))) +
                            ((int)(short)((ushort)(byte)puVar18[1] << 8) |
                            (uint)*(byte *)((long)puVar18 + 5)));
          }
        }
        else {
          pbVar21 = (byte *)((long)puVar18 + 2);
          uVar5 = (int)(short)((ushort)*pbVar21 << 8) | (uint)*(byte *)((long)puVar18 + 3);
          iVar12 = (int)fVar28 - uVar5;
          if (iVar12 == 0 || (int)fVar28 < (int)uVar5) {
            fVar28 = (float)(iVar12 + ((int)(short)((ushort)(byte)puVar18[1] << 8) |
                                      (uint)*(byte *)((long)puVar18 + 5)));
          }
          else {
            if (uVar6 < 2) {
              uVar13 = 1;
            }
            else {
              uVar23 = 1;
              pbVar22 = (byte *)((long)puVar18 + 7);
              do {
                uVar13 = uVar23;
                if ((int)fVar28 <= (int)((int)(short)((ushort)pbVar22[-1] << 8) | (uint)*pbVar22))
                break;
                uVar23 = uVar23 + 1;
                uVar13 = (ulong)uVar6;
                pbVar22 = pbVar22 + 4;
              } while (uVar6 != uVar23);
            }
            pbVar22 = pbVar21 + (uVar13 & 0xffffffff) * 4;
            uVar5 = (int)(short)((ushort)*pbVar22 << 8) | (uint)pbVar22[1];
            if ((int)fVar28 < (int)uVar5) {
              pbVar21 = pbVar21 + (ulong)((int)uVar13 - 1) * 4;
              uVar6 = (int)(short)((ushort)*pbVar21 << 8) | (uint)pbVar21[1];
              if (uVar6 == uVar5) {
                fVar28 = (float)((int)(short)((ushort)pbVar21[2] << 8) | (uint)pbVar21[3]);
              }
              else {
                uVar4 = (int)(short)((ushort)pbVar21[2] << 8) | (uint)pbVar21[3];
                fVar28 = (float)(int)(((float)(int)((int)fVar28 - uVar6) *
                                      (float)(int)(((int)(short)((ushort)pbVar22[2] << 8) |
                                                   (uint)pbVar22[3]) - uVar4)) /
                                      (float)(int)(uVar5 - uVar6) + (float)(int)uVar4 + 0.5);
              }
            }
            else {
              fVar28 = (float)(((int)fVar28 - uVar5) +
                              ((int)(short)((ushort)pbVar22[2] << 8) | (uint)pbVar22[3]));
            }
          }
        }
        pfVar25[uVar15] = fVar28;
        puVar18 = (uint *)((long)puVar18 +
                          (ulong)*(byte *)((long)puVar18 + 1) * 4 + (ulong)(byte)uVar7 * 0x400 + 2);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar33);
    }
    if (1 < (ushort)(*puVar8 >> 8 | *puVar8 << 8)) {
      if (uVar33 < CONCAT11((byte)puVar8[3],*(byte *)((long)puVar8 + 7))) {
        iVar12 = ((uint)(byte)puVar8[3] * 0x100 + (uint)*(byte *)((long)puVar8 + 7)) - uVar33;
        do {
          puVar18 = (uint *)((long)puVar18 +
                            (ulong)*(byte *)((long)puVar18 + 1) * 4 + (ulong)(byte)*puVar18 * 0x400
                            + 2);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar33 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
      uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
      puVar19 = (ushort *)&UNK_10dfe4888;
      if (uVar33 != 0) {
        puVar19 = (ushort *)((long)puVar8 + (ulong)uVar33);
      }
      uVar33 = (puVar18[1] & 0xff00ff00) >> 8 | (puVar18[1] & 0xff00ff) << 8;
      uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
      puVar1 = (ushort *)&UNK_10dfe4888;
      if (uVar33 != 0) {
        puVar1 = (ushort *)((long)puVar8 + (ulong)uVar33);
      }
      puVar8 = puVar1;
      FUN_10971d8b8(puVar1);
      uStack_80 = 0;
      lStack_78 = 0;
      FUN_1097219a0(&uStack_80,pfVar24);
      if (uVar11 != 0) {
        pfVar16 = (float *)0x0;
        do {
          fVar30 = (float)param_1;
          fVar28 = pfVar25[(long)pfVar16];
          puVar9 = puVar19;
          FUN_10971e940(puVar19,pfVar16);
          FUN_10971ea00(puVar1,(ulong)puVar9 >> 0x10 & 0xffff,(uint)puVar9 & 0xffff,pfVar25,pfVar24,
                        puVar8);
          fVar28 = (float)(int)(fVar30 + 0.5) + (float)(int)fVar28;
          param_1 = (ulong)(uint)fVar28;
          iVar12 = (int)fVar28;
          if (iVar12 < -0x3fff) {
            iVar12 = -0x4000;
          }
          if (0x3fff < iVar12) {
            iVar12 = 0x4000;
          }
          uVar33 = uStack_80._4_4_;
          if ((int)uStack_80._4_4_ < (int)uStack_80) {
LAB_1096fc234:
            uStack_80 = CONCAT44(uVar33 + 1,(int)uStack_80);
            *(int *)(lStack_78 + (ulong)uVar33 * 4) = iVar12;
          }
          else {
            puVar10 = &uStack_80;
            FUN_1097219a0(puVar10,uStack_80._4_4_ + 1);
            if ((int)puVar10 != 0) {
              uVar33 = uStack_80._4_4_;
              goto LAB_1096fc234;
            }
            uRam000000011382ab30 = 0;
          }
          pfVar16 = (float *)((long)pfVar16 + 1);
        } while (pfVar24 != pfVar16);
        pfVar16 = (float *)0x0;
        do {
          if (pfVar16 < (float *)(uStack_80 >> 0x20)) {
            fVar28 = *(float *)(lStack_78 + (long)pfVar16 * 4);
          }
          else {
            fVar28 = 0.0;
            uRam000000011382ab30 = 0;
          }
          pfVar25[(long)pfVar16] = fVar28;
          pfVar16 = (float *)((long)pfVar16 + 1);
        } while (pfVar24 != pfVar16);
      }
      _free(puVar8);
      if ((int)uStack_80 != 0) {
        _free(lStack_78);
      }
    }
  }
  _free(*(undefined8 *)(param_2 + 0x80));
  _free(*(undefined8 *)(param_2 + 0x88));
  *(float **)(param_2 + 0x80) = pfVar25;
  *(float **)(param_2 + 0x88) = pfVar26;
  *(uint *)(param_2 + 0x78) = uVar11;
  uVar13 = *(ulong *)(param_2 + 0x20);
  uVar15 = (ulong)*(uint *)(uVar13 + 0x14);
  if (*(uint *)(uVar13 + 0x14) == 0) {
    func_0x0001097109c0();
    uVar15 = uVar13;
  }
  fVar31 = (float)(uVar15 & 0xffffffff);
  uVar15 = *(ulong *)(param_2 + 0x28);
  uVar29 = NEON_scvtf(uVar15,4);
  fVar28 = (float)uVar29;
  fVar30 = (float)((ulong)uVar29 >> 0x20);
  *(float *)(param_2 + 0x4c) = fVar28 / fVar31;
  *(float *)(param_2 + 0x50) = fVar30 / fVar31;
  uVar33 = (uint)(uVar15 >> 0x20);
  lVar14 = (uVar15 & 0xffffffff) << 0x10;
  if ((int)uVar15 < 0) {
    lVar14 = (ulong)(uint)-(int)uVar15 * -0x10000;
  }
  lVar27 = (ulong)uVar33 << 0x10;
  if ((long)uVar15 < 0) {
    lVar27 = (ulong)-uVar33 * -0x10000;
  }
  *(long *)(param_2 + 0x58) = (long)((float)lVar14 / fVar31);
  *(long *)(param_2 + 0x60) = (long)((float)lVar27 / fVar31);
  *(ulong *)(param_2 + 0x3c) =
       CONCAT44((int)ABS((float)(int)((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) *
                                      fVar30 + 0.5)),
                (int)ABS((float)(int)((float)*(undefined8 *)(param_2 + 0x30) * fVar28 + 0.5)));
  if (uVar33 == 0) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = (*(float *)(param_2 + 0x44) * fVar28) / fVar30;
  }
  *(float *)(param_2 + 0x48) = fVar30;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  return;
}



/* Entry: 1096fc390; end: 1096fc3cb;  */

void FUN_1096fc390(long param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    FUN_109754ce4(*(undefined8 *)(param_1 + 0x48));
  }
  _pthread_mutex_destroy(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1096fc3cc; end: 1096fc5a7;  */

undefined * FUN_1096fc3cc(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar3[5] == 0) {
    if (*(int *)(puVar3 + 1) == 0) {
      if (param_2 != (code *)0x0) {
        (*param_2)(param_1);
      }
      puVar1 = &UNK_10dfe4888;
    }
    else {
      puVar1 = (undefined *)*puVar3;
      FUN_1096f58ec(puVar1,*(int *)(puVar3 + 1),1,param_1);
      if (puVar1 == (undefined *)0x0) {
        puVar1 = &UNK_10dfe4888;
      }
    }
    puVar2 = puVar1;
    FUN_1096f88a8(puVar1,*(undefined4 *)(param_1 + 8));
    FUN_1096f5a5c(puVar1);
  }
  else {
    puVar2 = (undefined *)0x1096fc4bc;
    FUN_1096f8824(0x1096fc4bc,param_1,param_2);
    if (*(code **)(puVar2 + 0x48) != (code *)0x0) {
      (**(code **)(puVar2 + 0x48))(*(undefined8 *)(puVar2 + 0x40));
    }
    *(code **)(puVar2 + 0x38) = FUN_1096fc5a8;
    *(long *)(puVar2 + 0x40) = param_1;
    *(undefined8 *)(puVar2 + 0x48) = 0;
  }
  if (*(int *)(puVar2 + 4) != 0) {
    *(int *)(puVar2 + 0x10) = (int)*(undefined8 *)(param_1 + 8);
  }
  if (*(int *)(puVar2 + 4) != 0) {
    *(uint *)(puVar2 + 0x14) = (uint)*(ushort *)(param_1 + 0x88);
  }
  return puVar2;
}



/* Entry: 1096fc5a8; end: 1096fc5ef;  */

ulong FUN_1096fc5a8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uStack_28;
  
  uStack_28 = 0;
  FUN_109755f4c(param_5,0,0,&uStack_28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return uStack_28 & 0xffffffff;
}



/* Entry: 1096fc5f0; end: 1096fc647;  */

undefined8 FUN_1096fc5f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1096fc3cc();
  uVar2 = uVar1;
  FUN_1096fb59c();
  func_0x0001096f8de8(uVar1);
  FUN_1096fc648(uVar2,param_1,0);
  FUN_1096fc718(uVar2);
  return uVar2;
}



/* Entry: 1096fc648; end: 1096fc717;  */

void FUN_1096fc648(long param_1,long param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(long *)(param_2 + 0xa8) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(long *)(param_2 + 0xa8) + 8) == 0x73796d62;
  }
  puVar4 = (undefined4 *)0x1;
  _calloc(1,0x458);
  if (puVar4 != (undefined4 *)0x0) {
    _pthread_mutex_init(puVar4 + 2,0);
    *(long *)(puVar4 + 0x12) = param_2;
    *(bool *)(puVar4 + 1) = bVar3;
    *(undefined1 *)((long)puVar4 + 5) = param_3;
    *puVar4 = 2;
    _memset(puVar4 + 0x14,0xff,0x404);
    piVar5 = (int *)0x11382adb8;
    FUN_109712634();
    if (*(int *)(param_1 + 4) == 0) {
      if (*(char *)((long)puVar4 + 5) == '\x01') {
        FUN_109754ce4(*(undefined8 *)(puVar4 + 0x12));
      }
      _pthread_mutex_destroy(puVar4 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(puVar4);
      return;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    piVar1 = (int *)0x1132e0078;
    if (piVar5 != (int *)0x0) {
      piVar1 = piVar5;
    }
    if (*piVar1 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001096f9948(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar1;
    *(undefined4 **)(param_1 + 0x98) = puVar4;
    *(code **)(param_1 + 0xa0) = FUN_1096fc390;
    return;
  }
  return;
}



/* Entry: 1096fc718; end: 1096fc7eb;  */

void FUN_1096fc718(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(code **)(param_1 + 0xa0) != FUN_1096fc390) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  lVar2 = *(long *)(*(long *)(lVar3 + 0x48) + 0xa0);
  uVar1 = (ulong)*(ushort *)(*(long *)(lVar3 + 0x48) + 0x88);
  FUN_1096fbbec(param_1,*(long *)(lVar2 + 0x20) * uVar1 + 0x8000 >> 0x10,
                *(long *)(lVar2 + 0x28) * uVar1 + 0x8000 >> 0x10);
  _memset(lVar3 + 0x54,0xff,0x400);
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_1 + 0x10);
  return;
}



/* Entry: 1096fc7ec; end: 1096fc87b;  */

void FUN_1096fc7ec(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar4 = *(long *)(param_1 + 2);
      if (lVar4 != 0) {
        FUN_109711500(lVar4 + 0x40,lVar4);
        _pthread_mutex_destroy(lVar4);
        _free(lVar4);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      FUN_10972c54c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1096fc87c; end: 1096fc8cb;  */

void FUN_1096fc87c(long param_1,int param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = param_1, FUN_109739e3c(param_1,param_2,param_2 * -0x61c8864f), lVar1 != 0)) {
    *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) & 0xfffffffe;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return;
}



/* Entry: 1096fc8cc; end: 1096fcbc7;  */

uint FUN_1096fc8cc(undefined8 *param_1,byte *param_2,double *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  double *pdVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pbVar7 = (byte *)*param_1;
  pbVar8 = pbVar7;
  pbVar9 = pbVar7;
  if (pbVar7 < param_2) {
    do {
      if ((4 < *pbVar9 - 9) && (pbVar8 = pbVar9, *pbVar9 != 0x20)) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = param_2;
    } while (pbVar9 != param_2);
  }
  if (pbVar8 == param_2) {
    pbVar9 = param_2;
    dVar16 = 0.0;
  }
  else {
    bVar6 = false;
    bVar5 = false;
    uVar10 = 0;
    dVar18 = 0.0;
    iVar12 = 1;
    dVar17 = 0.0;
    dVar16 = 0.0;
    bVar1 = false;
    do {
      bVar3 = *pbVar8;
      uVar14 = (uint)(char)bVar3;
      iVar15 = (int)(char)(&UNK_10dfe4e03)[iVar12];
      if (((int)(uint)(byte)(&UNK_10dfe4d28)[(long)iVar12 * 2] <= (int)(char)bVar3) &&
         (uVar14 <= (byte)(&UNK_10dfe4d29)[(long)iVar12 * 2])) {
        iVar15 = (int)(char)bVar3 - (uint)(byte)(&UNK_10dfe4d28)[(long)iVar12 * 2];
      }
      uVar13 = (ulong)(char)(&UNK_10dfe4d3b)[(long)iVar15 + (ulong)(byte)(&UNK_10dfe4dfa)[iVar12]];
      uVar2 = uVar10;
      bVar4 = bVar1;
      if ((1L << (uVar13 & 0x3f) & 0x24bU) == 0) {
        bVar3 = (&UNK_10dfe4e16)[uVar13];
        if (bVar3 < 3) {
          if (bVar3 == 1) {
            bVar5 = true;
          }
          else if (bVar3 == 2) {
            dVar16 = (double)(int)(uVar14 - 0x30) + dVar16 * 10.0;
          }
        }
        else if (bVar3 == 3) {
          if (dVar17 <= 450359962737049.0) {
            dVar17 = (double)(int)(uVar14 - 0x30) + dVar17 * 10.0;
            dVar18 = dVar18 + 1.0;
          }
        }
        else if (bVar3 == 4) {
          bVar6 = true;
        }
        else {
          uVar14 = (uVar14 + uVar10 * 10) - 0x30;
          if (uVar14 < 0x800) {
            uVar2 = uVar14;
          }
          bVar4 = (bool)(0x7ff < uVar14 | bVar1);
          if (bVar3 != 5) {
            uVar2 = uVar10;
            bVar4 = bVar1;
          }
        }
      }
      uVar10 = uVar2;
      pbVar9 = pbVar8;
      if ((&UNK_10dfe4d3b)[(long)iVar15 + (ulong)(byte)(&UNK_10dfe4dfa)[iVar12]] == '\x01') break;
      iVar12 = (int)(char)(&UNK_10dfe4e0c)[uVar13];
      pbVar8 = pbVar8 + 1;
      pbVar9 = param_2;
      bVar1 = bVar4;
    } while (pbVar8 != param_2);
    if (dVar18 != 0.0) {
      dVar19 = 1.0;
      pdVar11 = (double *)&UNK_10dfe4e20;
      uVar14 = 0x100;
      do {
        if ((uVar14 & (int)dVar18) != 0) {
          dVar19 = dVar19 * *pdVar11;
        }
        pdVar11 = pdVar11 + 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 >> 1;
      } while (bVar1);
      dVar16 = dVar16 + dVar17 / dVar19;
    }
    if (bVar5) {
      dVar16 = -dVar16;
    }
    if (bVar4) {
      if (dVar16 != 0.0) {
        dVar16 = -1.79769313486232e+308;
        if (!bVar5) {
          dVar16 = 1.79769313486232e+308;
        }
        dVar17 = -2.2250738585072014e-308;
        if (!bVar5) {
          dVar17 = 2.2250738585072014e-308;
        }
        if (bVar6) {
          dVar16 = dVar17;
        }
      }
    }
    else if (uVar10 != 0) {
      dVar17 = 1.0;
      if (bVar6) {
        pdVar11 = (double *)&UNK_10dfe4e20;
        uVar14 = 0x100;
        do {
          if ((uVar14 & uVar10) != 0) {
            dVar17 = dVar17 * *pdVar11;
          }
          pdVar11 = pdVar11 + 1;
          bVar1 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
        } while (bVar1);
        dVar16 = dVar16 / dVar17;
      }
      else {
        pdVar11 = (double *)&UNK_10dfe4e20;
        uVar14 = 0x100;
        do {
          if ((uVar14 & uVar10) != 0) {
            dVar17 = dVar17 * *pdVar11;
          }
          pdVar11 = pdVar11 + 1;
          bVar1 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
        } while (bVar1);
        dVar16 = dVar16 * dVar17;
      }
    }
  }
  *param_3 = dVar16;
  if (pbVar7 == pbVar9) {
    param_4 = 0;
  }
  else {
    *param_1 = pbVar9;
    param_4 = param_4 ^ 1;
    if (pbVar9 == param_2) {
      param_4 = 1;
    }
  }
  return param_4;
}



/* Entry: 1096fcbc8; end: 1096feabb;  */

undefined8 FUN_1096fcbc8(long param_1,undefined8 param_2,double *param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  double in_x11;
  double in_x12;
  uint uVar18;
  uint uVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_12d0 [8];
  double dStack_12c8;
  double dStack_12c0;
  double dStack_12b8;
  double dStack_12b0;
  long lStack_12a8;
  double dStack_12a0;
  undefined8 uStack_1298;
  byte abStack_1290 [4];
  uint uStack_128c;
  double adStack_1288 [513];
  double dStack_280;
  double dStack_278;
  double dStack_270;
  char cStack_268;
  byte bStack_267;
  byte bStack_266;
  int iStack_264;
  int iStack_260;
  uint uStack_25c;
  byte bStack_258;
  uint uStack_254;
  double adStack_250 [30];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  double dStack_140;
  double dStack_138;
  ushort uStack_130;
  undefined4 uStack_12c;
  double dStack_128;
  byte bStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  param_3[1] = 2147483647.0;
  *param_3 = 2147483647.0;
  param_3[3] = -2147483648.0;
  param_3[2] = -2147483648.0;
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  dStack_90 = in_x11;
  dStack_88 = in_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((uint)param_2 < *(uint *)(param_1 + 0x128)) {
    uVar6 = *(ulong *)(param_1 + 0x88);
    FUN_1097007b4(uVar6,param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    FUN_1097007f0();
    puVar2 = (undefined *)(*(long *)(param_1 + 0x120) + (uVar6 & 0xffffffff) * 0x28);
    if (*(uint *)(param_1 + 0x11c) <= (uint)uVar6) {
      puVar2 = &UNK_10dfe4888;
    }
    uStack_110 = uVar7;
    uStack_108 = param_2;
    FUN_109715598(&dStack_12a0,&uStack_110,*(undefined8 *)(param_1 + 0x70),
                  *(undefined8 *)(puVar2 + 0x20));
    dStack_128 = 0.0;
    uStack_130 = 0;
    uStack_12c = 0;
    bStack_120 = param_4;
    auStack_12d0[0] = 0;
    dStack_12c0 = 2147483647.0;
    dStack_12c8 = 2147483647.0;
    dStack_12b0 = -2147483648.0;
    dStack_12b8 = -2147483648.0;
    cStack_268 = '\0';
    iVar20 = 200000;
    uVar17 = uStack_1298._4_4_;
    uVar18 = (uint)uStack_1298;
    lStack_12a8 = param_1;
    do {
      uVar1 = uStack_128c;
      lVar16 = lStack_12a8;
      uVar19 = uVar17 + 1;
      if (uVar18 < uVar19) {
LAB_1096fe918:
        uVar5 = 0xffff;
LAB_1096fe91c:
        FUN_1097159e4(uVar5,&dStack_12a0);
        goto LAB_1096fe7fc;
      }
      uVar5 = (uint)*(byte *)((long)dStack_12a0 + (ulong)uVar17);
      uStack_1298 = (double)CONCAT44(uVar19,(uint)uStack_1298);
      uVar15 = uVar19;
      if (*(byte *)((long)dStack_12a0 + (ulong)uVar17) == 0xc) {
        uVar15 = uVar17 + 2;
        if (uVar18 < uVar15) goto LAB_1096fe918;
        uVar5 = *(byte *)((long)dStack_12a0 + (ulong)uVar19) | 0x100;
        uStack_1298 = (double)CONCAT44(uVar15,(uint)uStack_1298);
      }
      if (0xfe < uVar5) {
        if (0x122 < uVar5) {
          if (uVar5 == 0x123) {
            if (uStack_128c != 0xd) {
LAB_1096fe928:
              uStack_1298 = (double)CONCAT44(uVar18 + 1,(uint)uStack_1298);
              goto LAB_1096fe7f4;
            }
            dStack_d8 = adStack_1288[1] + dStack_138;
            dStack_100 = adStack_1288[2] + adStack_1288[0] + dStack_140;
            dStack_f8 = adStack_1288[3] + dStack_d8;
            dStack_90 = adStack_1288[4] + dStack_100;
            dStack_88 = adStack_1288[5] + dStack_f8;
            dStack_a0 = adStack_1288[6] + dStack_90;
            dStack_98 = adStack_1288[7] + dStack_88;
            dStack_b0 = adStack_1288[8] + dStack_a0;
            dStack_a8 = adStack_1288[9] + dStack_98;
            dStack_c0 = adStack_1288[10] + dStack_b0;
            dStack_b8 = adStack_1288[0xb] + dStack_a8;
          }
          else if (uVar5 == 0x124) {
            if (uStack_128c != 9) goto LAB_1096fe928;
            dStack_d8 = adStack_1288[1] + dStack_138;
            dStack_100 = adStack_1288[2] + adStack_1288[0] + dStack_140;
            dStack_f8 = adStack_1288[3] + dStack_d8;
            dStack_90 = adStack_1288[4] + dStack_100;
            dStack_a0 = adStack_1288[5] + dStack_90;
            dStack_b0 = adStack_1288[6] + dStack_a0;
            dStack_a8 = adStack_1288[7] + dStack_f8;
            dStack_c0 = adStack_1288[8] + dStack_b0;
            dStack_b8 = dStack_138;
            dStack_98 = dStack_f8;
            dStack_88 = dStack_f8;
          }
          else {
            if (uVar5 != 0x125) goto LAB_1096fe91c;
            if (uStack_128c != 0xb) goto LAB_1096fe928;
            dVar21 = 0.0;
            dVar22 = 0.0;
            uVar6 = 0xfffffffffffffffe;
            lVar16 = 0x18;
            do {
              dVar21 = dVar21 + *(double *)((long)&dStack_12a0 + lVar16);
              dVar22 = dVar22 + *(double *)(abStack_1290 + lVar16 + -8);
              uVar6 = uVar6 + 2;
              lVar16 = lVar16 + 0x10;
            } while (uVar6 < 8);
            dStack_d8 = adStack_1288[1] + dStack_138;
            dStack_100 = adStack_1288[2] + adStack_1288[0] + dStack_140;
            dStack_f8 = adStack_1288[3] + dStack_d8;
            dStack_90 = adStack_1288[4] + dStack_100;
            dStack_88 = adStack_1288[5] + dStack_f8;
            dStack_a0 = adStack_1288[6] + dStack_90;
            dStack_98 = adStack_1288[7] + dStack_88;
            dStack_b0 = adStack_1288[8] + dStack_a0;
            dStack_a8 = adStack_1288[9] + dStack_98;
            if (ABS(dVar21) <= ABS(dVar22)) {
              dStack_c0 = dStack_140;
              dStack_b8 = adStack_1288[10] + dStack_a8;
            }
            else {
              dStack_c0 = adStack_1288[10] + dStack_b0;
              dStack_b8 = dStack_138;
            }
          }
LAB_1096fe348:
          dStack_e0 = dStack_140 + adStack_1288[0];
          FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
          lVar16 = -0x90;
          lVar8 = -0xa0;
          lVar9 = -0xb0;
LAB_1096fe7f0:
          FUN_109715cbc(&dStack_12a0,auStack_12d0,&stack0xfffffffffffffff0 + lVar16,
                        &stack0xfffffffffffffff0 + lVar8,&stack0xfffffffffffffff0 + lVar9);
          goto LAB_1096fe7f4;
        }
        if (uVar5 != 0xff) {
          if (uVar5 == 0x100) goto LAB_1096fe7f4;
          if (uVar5 == 0x122) {
            if (uStack_128c != 7) goto LAB_1096fe928;
            dStack_d8 = dStack_138;
            dStack_100 = adStack_1288[1] + dStack_140 + adStack_1288[0];
            dStack_f8 = adStack_1288[2] + dStack_138;
            dStack_90 = adStack_1288[3] + dStack_100;
            dStack_a0 = adStack_1288[4] + dStack_90;
            dStack_b0 = adStack_1288[5] + dStack_a0;
            dStack_a8 = dStack_138;
            dStack_b8 = dStack_138;
            dStack_c0 = adStack_1288[6] + dStack_b0;
            dStack_98 = dStack_f8;
            dStack_88 = dStack_f8;
            goto LAB_1096fe348;
          }
          goto LAB_1096fe91c;
        }
        func_0x000109715858(abStack_1290,&dStack_12a0);
        goto LAB_1096fe7fc;
      }
      switch(uVar5) {
      case 1:
      case 0x12:
        if (((uStack_130 & 1) == 0) && (uVar5 < 0x13)) {
          if ((1 << (ulong)(uVar5 & 0x1f) & 0x4400aU) == 0) {
            if (uVar5 != 4) goto code_r0x0001096fcdbc;
            if (1 < uStack_128c) goto code_r0x0001096fcda8;
          }
          else if ((uStack_128c & 1) != 0) {
code_r0x0001096fcda8:
            if (uStack_128c != 0) {
              dStack_128 = adStack_1288[0];
              uStack_130 = 0x100;
            }
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
code_r0x0001096fcdbc:
        uStack_12c = 0;
        iStack_264 = iStack_264 + (uStack_128c >> 1);
        goto code_r0x0001096fe7f8;
      default:
        goto LAB_1096fe91c;
      case 3:
      case 0x17:
        if (((uStack_130 & 1) == 0) && (uVar5 < 0x18)) {
          uVar18 = 1 << (ulong)(uVar5 & 0x1f);
          if ((uVar18 & 0x9c4008) == 0) {
            if ((uVar18 & 0x400010) == 0) {
              if (uVar5 != 0x15) goto code_r0x0001096fe860;
              bVar3 = 1 < uStack_128c;
              bVar4 = uStack_128c == 2;
            }
            else {
              bVar3 = uStack_128c != 0;
              bVar4 = uStack_128c == 1;
            }
            if (bVar3 && !bVar4) goto code_r0x0001096fe84c;
          }
          else if ((uStack_128c & 1) != 0) {
code_r0x0001096fe84c:
            if (uStack_128c != 0) {
              dStack_128 = adStack_1288[0];
              uStack_130 = 0x100;
            }
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
code_r0x0001096fe860:
        uStack_12c = 0;
        iStack_260 = iStack_260 + (uStack_128c >> 1);
        goto code_r0x0001096fe7f8;
      case 4:
        if ((uStack_130 & 1) == 0) {
          if (1 < uStack_128c) {
            dStack_128 = adStack_1288[0];
            uStack_130 = 0x100;
            uStack_12c = 1;
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
        if (uStack_128c == 0) {
          abStack_1290[0] = 1;
          uRam000000011382ab30 = 0;
          dVar21 = 0.0;
        }
        else {
          dVar21 = adStack_1288[uStack_128c - 1];
          uStack_128c = uStack_128c - 1 >> 1;
        }
        dStack_138 = dStack_138 + dVar21;
        goto code_r0x0001096fd5e4;
      case 5:
        if (1 < uStack_128c) {
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              pdVar14 = adStack_1288 + uVar18;
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 1 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar18 + 1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_e0 = *pdVar14 + dStack_140;
            dStack_d8 = dStack_d8 + dStack_138;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            uVar17 = uVar18 + 4;
            uVar18 = uVar18 + 2;
          } while (uVar17 <= uStack_128c);
        }
        break;
      case 6:
        if (uStack_128c < 2) {
          uVar17 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              dStack_e0 = adStack_1288[uVar18];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_e0 = 0.0;
            }
            dStack_e0 = dStack_e0 + dStack_140;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            if (uVar18 + 1 < uStack_128c) {
              dVar21 = adStack_1288[uVar18 + 1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dStack_d8 = dVar21 + dStack_d8;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            uVar17 = uVar18 + 2;
            uVar19 = uVar18 + 4;
            uVar18 = uVar17;
          } while (uVar19 <= uStack_128c);
        }
        if (uVar17 < uStack_128c) {
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          dStack_e0 = dStack_140 + adStack_1288[uVar17];
code_r0x0001096fdd98:
          FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
        }
        break;
      case 7:
        if (uStack_128c < 2) {
          uVar17 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar18];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_d8 = dStack_d8 + dStack_138;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            if (uVar18 + 1 < uStack_128c) {
              dVar21 = adStack_1288[uVar18 + 1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dStack_e0 = dVar21 + dStack_e0;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            uVar17 = uVar18 + 2;
            uVar19 = uVar18 + 4;
            uVar18 = uVar17;
          } while (uVar19 <= uStack_128c);
        }
        if (uVar17 < uStack_128c) {
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          dStack_d8 = dStack_138 + adStack_1288[uVar17];
          goto code_r0x0001096fdd98;
        }
        break;
      case 8:
        if (5 < uStack_128c) {
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              pdVar14 = adStack_1288 + uVar18;
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 1 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar18 + 1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_e0 = *pdVar14 + dStack_140;
            dStack_d8 = dStack_d8 + dStack_138;
            dStack_f8 = dStack_d8;
            dStack_100 = dStack_e0;
            if (uVar18 + 2 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 2);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 3 < uStack_128c) {
              dStack_f8 = adStack_1288[uVar18 + 3];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_f8 = 0.0;
            }
            dStack_100 = *pdVar14 + dStack_e0;
            dStack_f8 = dStack_f8 + dStack_d8;
            dStack_88 = dStack_f8;
            dStack_90 = dStack_100;
            if (uVar18 + 4 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 4);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 5 < uStack_128c) {
              dStack_88 = adStack_1288[uVar18 + 5];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_88 = 0.0;
            }
            dStack_90 = *pdVar14 + dStack_100;
            dStack_88 = dStack_88 + dStack_f8;
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            uVar17 = uVar18 + 0xc;
            uVar18 = uVar18 + 6;
          } while (uVar17 <= uStack_128c);
        }
        break;
      case 10:
        puVar12 = auStack_150;
        uVar7 = 2;
        goto code_r0x0001096fdc6c;
      case 0xb:
        if (uStack_254 == 0) {
          bStack_258 = 1;
          pdVar14 = (double *)0x11382ab30;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
          uRam000000011382ab30 = 0;
        }
        else {
          uStack_254 = uStack_254 - 1;
          pdVar14 = adStack_250 + (ulong)uStack_254 * 3;
        }
        uStack_1298 = pdVar14[1];
        dStack_12a0 = *pdVar14;
        dStack_278 = uStack_1298;
        dStack_280 = dStack_12a0;
        dStack_270 = pdVar14[2];
        goto LAB_1096fe7fc;
      case 0xe:
        if ((uStack_130 & 1) == 0) {
          if ((uStack_128c & 1) != 0) {
            dStack_128 = adStack_1288[0];
            uStack_130 = 0x100;
            uStack_12c = 1;
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
        if (3 < uStack_128c) {
          dVar21 = adStack_1288[uStack_128c - 4];
          dVar22 = adStack_1288[uStack_128c - 3];
          lVar8 = lStack_12a8;
          func_0x0001097156c8(lStack_12a8,(int)adStack_1288[uStack_128c - 2]);
          uVar1 = uVar1 - 1;
          if (uVar1 < uStack_128c) {
            iVar11 = (int)adStack_1288[uVar1];
          }
          else {
            iVar11 = 0;
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
          }
          lVar9 = lVar16;
          func_0x0001097156c8(lVar16,iVar11);
          if (((((bStack_120 & 1) == 0) && ((int)lVar8 != 0 && (int)lVar9 != 0)) &&
              (lVar10 = lVar16, FUN_1096fcbc8(lVar16,lVar8,&dStack_e0,1), (int)lVar10 != 0)) &&
             (FUN_1096fcbc8(lVar16,lVar9,&dStack_100,1), (int)lVar16 != 0)) {
            if ((dStack_12b8 <= dStack_12c8) || (dStack_12b0 <= dStack_12c0)) {
              dStack_12c0 = dStack_d8;
              dStack_12c8 = dStack_e0;
              dStack_12b0 = dStack_c8;
              dStack_12b8 = dStack_d0;
            }
            else if ((dStack_e0 < dStack_d0) && (dStack_d8 < dStack_c8)) {
              if (dStack_e0 < dStack_12c8) {
                dStack_12c8 = dStack_e0;
              }
              if (dStack_12b8 < dStack_d0) {
                dStack_12b8 = dStack_d0;
              }
              if (dStack_d8 < dStack_12c0) {
                dStack_12c0 = dStack_d8;
              }
              if (dStack_12b0 < dStack_c8) {
                dStack_12b0 = dStack_c8;
              }
            }
            if ((dStack_100 < dStack_f0) && (dStack_f8 < dStack_e8)) {
              dStack_100 = dVar21 + dStack_100;
              dStack_f8 = dVar22 + dStack_f8;
              dStack_f0 = dVar21 + dStack_f0;
              dStack_e8 = dVar22 + dStack_e8;
            }
            if ((dStack_12b8 <= dStack_12c8) || (dStack_12b0 <= dStack_12c0)) {
              dStack_12c0 = dStack_f8;
              dStack_12c8 = dStack_100;
              dStack_12b0 = dStack_e8;
              dStack_12b8 = dStack_f0;
            }
            else if ((dStack_100 < dStack_f0) && (dStack_f8 < dStack_e8)) {
              if (dStack_100 < dStack_12c8) {
                dStack_12c8 = dStack_100;
              }
              if (dStack_12b8 < dStack_f0) {
                dStack_12b8 = dStack_f0;
              }
              if (dStack_f8 < dStack_12c0) {
                dStack_12c0 = dStack_f8;
              }
              if (dStack_12b0 < dStack_e8) {
                dStack_12b0 = dStack_e8;
              }
            }
          }
          else {
            uStack_1298 = (double)CONCAT44((uint)uStack_1298 + 1,(uint)uStack_1298);
          }
        }
        uStack_12c = 0;
        uStack_128c = 0;
        cStack_268 = '\x01';
        goto LAB_1096fe7fc;
      case 0x13:
      case 0x14:
        if ((uStack_130 & 1) == 0) {
          if ((uStack_128c & 1) != 0) {
            dStack_128 = adStack_1288[0];
            uStack_130 = 0x100;
            uStack_12c = 1;
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
        if (bStack_266 != 1) {
          iStack_260 = iStack_260 + (uStack_128c >> 1);
          uStack_25c = iStack_260 + iStack_264 + 7U >> 3;
          bStack_266 = 1;
        }
        if (uVar15 + uStack_25c <= uVar18) {
          uStack_12c = 0;
          uStack_128c = 0;
          uStack_1298 = (double)CONCAT44(uVar15 + uStack_25c,(uint)uStack_1298);
        }
        goto LAB_1096fe7fc;
      case 0x15:
        if ((uStack_130 & 1) == 0) {
          if (2 < uStack_128c) {
            dStack_128 = adStack_1288[0];
            uStack_130 = 0x100;
            uStack_12c = 1;
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
        if (uStack_128c == 0) {
          pdVar14 = (double *)0x11382ab30;
code_r0x0001096fe94c:
          uStack_128c = 0;
          abStack_1290[0] = 1;
          uRam000000011382ab30 = 0;
          dVar21 = 0.0;
        }
        else {
          pdVar14 = adStack_1288 + (uStack_128c - 1);
          if (uStack_128c - 1 == 0) goto code_r0x0001096fe94c;
          dVar21 = adStack_1288[uStack_128c - 2];
          uStack_128c = uStack_128c - 2 >> 1;
        }
        dStack_138 = dStack_138 + *pdVar14;
        dStack_140 = dStack_140 + dVar21;
        goto code_r0x0001096fd5e4;
      case 0x16:
        if ((uStack_130 & 1) == 0) {
          if (1 < uStack_128c) {
            dStack_128 = adStack_1288[0];
            uStack_130 = 0x100;
            uStack_12c = 1;
          }
          uStack_130 = CONCAT11(uStack_130._1_1_,1);
        }
        if (uStack_128c == 0) {
          abStack_1290[0] = 1;
          uRam000000011382ab30 = 0;
          dVar21 = 0.0;
        }
        else {
          dVar21 = adStack_1288[uStack_128c - 1];
          uStack_128c = uStack_128c - 1 >> 1;
        }
        dStack_140 = dStack_140 + dVar21;
code_r0x0001096fd5e4:
        auStack_12d0[0] = 0;
        if ((bStack_267 & 1) == 0) {
          if ((bStack_266 & 1) == 0) {
            iStack_260 = iStack_260 + uStack_128c;
            uStack_25c = iStack_260 + iStack_264 + 7U >> 3;
            bStack_266 = 1;
          }
          bStack_267 = 1;
        }
        break;
      case 0x18:
        if (7 < uStack_128c) {
          uVar17 = uStack_128c - 2;
          uVar18 = 0;
          do {
            uVar19 = uVar18;
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar19 < uStack_128c) {
              pdVar14 = adStack_1288 + uVar19;
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 1 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar19 + 1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_e0 = *pdVar14 + dStack_140;
            dStack_d8 = dStack_d8 + dStack_138;
            dStack_f8 = dStack_d8;
            dStack_100 = dStack_e0;
            if (uVar19 + 2 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar19 + 2);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 3 < uStack_128c) {
              dStack_f8 = adStack_1288[uVar19 + 3];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_f8 = 0.0;
            }
            dStack_100 = *pdVar14 + dStack_e0;
            dStack_f8 = dStack_f8 + dStack_d8;
            dStack_88 = dStack_f8;
            dStack_90 = dStack_100;
            if (uVar19 + 4 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar19 + 4);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 5 < uStack_128c) {
              dStack_88 = adStack_1288[uVar19 + 5];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_88 = 0.0;
            }
            dStack_90 = *pdVar14 + dStack_100;
            dStack_88 = dStack_88 + dStack_f8;
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            uVar18 = uVar19 + 6;
          } while (uVar19 + 0xc <= uVar17);
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          if (uVar18 < uStack_128c) {
            pdVar14 = adStack_1288 + uVar18;
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar19 + 7 < uStack_128c) {
            dStack_d8 = adStack_1288[uVar19 + 7];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_d8 = 0.0;
          }
          dStack_e0 = *pdVar14 + dStack_140;
          dStack_d8 = dStack_d8 + dStack_138;
          goto code_r0x0001096fdd98;
        }
        break;
      case 0x19:
        if (7 < uStack_128c) {
          uVar6 = 0;
          uVar18 = uStack_128c - 6;
          pdVar14 = adStack_1288;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            pdVar13 = pdVar14;
            if (uStack_128c <= uVar6) {
              abStack_1290[0] = 1;
              pdVar13 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar6 + 1 < (ulong)uStack_128c) {
              dStack_d8 = pdVar14[1];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_e0 = *pdVar13 + dStack_140;
            dStack_d8 = dStack_d8 + dStack_138;
            FUN_109715c08(&dStack_12a0,auStack_12d0,&dStack_e0);
            pdVar14 = pdVar14 + 2;
            iVar11 = (int)uVar6;
            uVar6 = uVar6 + 2;
          } while (iVar11 + 4U <= uVar18);
          uVar1 = uVar1 & 0xfffffffe;
          uVar18 = uVar1 - 6;
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          if (uVar18 < uStack_128c) {
            pdVar14 = adStack_1288 + uVar18;
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if ((uVar18 | 1) < uStack_128c) {
            dStack_d8 = adStack_1288[uVar18 | 1];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_d8 = 0.0;
          }
          dStack_e0 = *pdVar14 + dStack_140;
          dStack_d8 = dStack_d8 + dStack_138;
          dStack_f8 = dStack_d8;
          dStack_100 = dStack_e0;
          if (uVar1 - 4 < uStack_128c) {
            pdVar14 = adStack_1288 + (uVar1 - 4);
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar1 - 3 < uStack_128c) {
            dStack_f8 = adStack_1288[uVar1 - 3];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_f8 = 0.0;
          }
          dStack_100 = *pdVar14 + dStack_e0;
          dStack_f8 = dStack_f8 + dStack_d8;
          dStack_88 = dStack_f8;
          dStack_90 = dStack_100;
          if (uVar1 - 2 < uStack_128c) {
            pdVar14 = adStack_1288 + (uVar1 - 2);
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar1 - 1 < uStack_128c) {
            dStack_88 = adStack_1288[uVar1 - 1];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_88 = 0.0;
          }
          dStack_90 = *pdVar14 + dStack_100;
          dStack_88 = dStack_88 + dStack_f8;
code_r0x0001096fe7dc:
          lVar16 = -0xd0;
          lVar8 = -0xf0;
          lVar9 = -0x80;
          goto LAB_1096fe7f0;
        }
        break;
      case 0x1a:
        dStack_d8 = dStack_138;
        dStack_e0 = dStack_140;
        bVar4 = (uStack_128c & 1) != 0;
        if (bVar4) {
          dStack_e0 = adStack_1288[0] + dStack_140;
        }
        uVar17 = (uint)bVar4;
        uVar18 = uVar17 | 4;
        while (dStack_d8 = dStack_138, uVar18 <= uStack_128c) {
          if (uVar17 < uStack_128c) {
            dStack_d8 = adStack_1288[uVar17];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_d8 = 0.0;
          }
          dStack_d8 = dStack_d8 + dStack_138;
          dStack_f8 = dStack_d8;
          dStack_100 = dStack_e0;
          if (uVar17 + 1 < uStack_128c) {
            pdVar14 = adStack_1288 + (uVar17 + 1);
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar17 + 2 < uStack_128c) {
            dStack_f8 = adStack_1288[uVar17 + 2];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_f8 = 0.0;
          }
          dStack_f8 = dStack_f8 + dStack_d8;
          dStack_100 = *pdVar14 + dStack_e0;
          dStack_88 = dStack_f8;
          dStack_90 = *pdVar14 + dStack_e0;
          if (uVar17 + 3 < uStack_128c) {
            dStack_88 = adStack_1288[uVar17 + 3];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_88 = 0.0;
          }
          dStack_88 = dStack_88 + dStack_f8;
          FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          uVar18 = uVar17 + 8;
          uVar17 = uVar17 + 4;
        }
        break;
      case 0x1b:
        dStack_d8 = dStack_138;
        dStack_e0 = dStack_140;
        bVar4 = (uStack_128c & 1) != 0;
        if (bVar4) {
          dStack_d8 = adStack_1288[0] + dStack_138;
        }
        uVar17 = (uint)bVar4;
        uVar18 = uVar17 | 4;
        while (dStack_e0 = dStack_140, uVar18 <= uStack_128c) {
          if (uVar17 < uStack_128c) {
            dStack_e0 = adStack_1288[uVar17];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_e0 = 0.0;
          }
          dStack_e0 = dStack_e0 + dStack_140;
          dStack_f8 = dStack_d8;
          dStack_100 = dStack_e0;
          if (uVar17 + 1 < uStack_128c) {
            pdVar14 = adStack_1288 + (uVar17 + 1);
          }
          else {
            abStack_1290[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar17 + 2 < uStack_128c) {
            dVar21 = adStack_1288[uVar17 + 2];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dVar21 = 0.0;
          }
          dStack_100 = *pdVar14 + dStack_e0;
          dStack_f8 = dVar21 + dStack_d8;
          dStack_88 = dVar21 + dStack_d8;
          dStack_90 = dStack_100;
          if (uVar17 + 3 < uStack_128c) {
            dStack_90 = adStack_1288[uVar17 + 3];
          }
          else {
            abStack_1290[0] = 1;
            uRam000000011382ab30 = 0;
            dStack_90 = 0.0;
          }
          dStack_90 = dStack_90 + dStack_100;
          FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
          dStack_d8 = dStack_138;
          dStack_e0 = dStack_140;
          uVar18 = uVar17 + 8;
          uVar17 = uVar17 + 4;
        }
        break;
      case 0x1d:
        puVar12 = auStack_160;
        uVar7 = 1;
code_r0x0001096fdc6c:
        FUN_1097158dc(&dStack_12a0,puVar12,uVar7);
        goto LAB_1096fe7fc;
      case 0x1e:
        if ((uStack_128c >> 2 & 1) != 0) {
          dStack_e0 = dStack_140;
          dStack_d8 = adStack_1288[0] + dStack_138;
          dStack_f8 = adStack_1288[2] + adStack_1288[0] + dStack_138;
          dStack_100 = adStack_1288[1] + dStack_140;
          dStack_88 = dStack_f8;
          dStack_90 = adStack_1288[3] + adStack_1288[1] + dStack_140;
          if (uStack_128c < 0xc) {
            uVar17 = 4;
          }
          else {
            uVar18 = 6;
            do {
              uVar17 = uVar18;
              dStack_f8 = dStack_88;
              FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
              dStack_d8 = dStack_138;
              dStack_e0 = dStack_140;
              if (uVar17 - 2 < uStack_128c) {
                dStack_e0 = adStack_1288[uVar17 - 2];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_e0 = 0.0;
              }
              dStack_e0 = dStack_e0 + dStack_140;
              dStack_f8 = dStack_138;
              dStack_100 = dStack_e0;
              if (uVar17 - 1 < uStack_128c) {
                pdVar14 = adStack_1288 + (uVar17 - 1);
              }
              else {
                abStack_1290[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar17 < uStack_128c) {
                dStack_f8 = adStack_1288[uVar17];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_f8 = 0.0;
              }
              dStack_f8 = dStack_f8 + dStack_138;
              dStack_100 = *pdVar14 + dStack_e0;
              dStack_88 = dStack_f8;
              dStack_90 = *pdVar14 + dStack_e0;
              if (uVar17 + 1 < uStack_128c) {
                dStack_88 = adStack_1288[uVar17 + 1];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_88 = 0.0;
              }
              dStack_88 = dStack_88 + dStack_f8;
              FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
              dStack_d8 = dStack_88;
              dStack_e0 = dStack_90;
              if (uVar17 + 2 < uStack_128c) {
                dStack_d8 = adStack_1288[uVar17 + 2];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_d8 = 0.0;
              }
              dStack_d8 = dStack_d8 + dStack_88;
              dStack_f8 = dStack_d8;
              dStack_100 = dStack_90;
              if (uVar17 + 3 < uStack_128c) {
                pdVar14 = adStack_1288 + (uVar17 + 3);
              }
              else {
                abStack_1290[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar17 + 4 < uStack_128c) {
                dVar21 = adStack_1288[uVar17 + 4];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dStack_100 = *pdVar14 + dStack_90;
              dStack_f8 = dVar21 + dStack_d8;
              dStack_88 = dVar21 + dStack_d8;
              dStack_90 = dStack_100;
              if (uVar17 + 5 < uStack_128c) {
                dVar21 = adStack_1288[uVar17 + 5];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dStack_90 = dVar21 + dStack_100;
              uVar18 = uVar17 + 8;
            } while (uVar17 + 0xe <= uStack_128c);
            uVar17 = uVar17 + 6;
          }
          dStack_f8 = dStack_88;
          if (uVar17 < uStack_128c) {
            dStack_88 = dStack_88 + adStack_1288[uVar17];
          }
          goto code_r0x0001096fe7dc;
        }
        if (7 < uStack_128c) {
          iVar11 = 0;
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar18];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_d8 = dStack_d8 + dStack_138;
            dStack_f8 = dStack_d8;
            dStack_100 = dStack_140;
            if (uVar18 + 1 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 1);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 2 < uStack_128c) {
              dVar21 = adStack_1288[uVar18 + 2];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dStack_100 = *pdVar14 + dStack_140;
            dStack_f8 = dVar21 + dStack_d8;
            dStack_88 = dVar21 + dStack_d8;
            dStack_90 = dStack_100;
            if (uVar18 + 3 < uStack_128c) {
              dStack_90 = adStack_1288[uVar18 + 3];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_90 = 0.0;
            }
            dStack_90 = dStack_90 + dStack_100;
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            dStack_d8 = dStack_88;
            dStack_e0 = dStack_90;
            if (uVar18 + 4 < uStack_128c) {
              dStack_e0 = adStack_1288[uVar18 + 4];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_e0 = 0.0;
            }
            dStack_e0 = dStack_e0 + dStack_90;
            dStack_f8 = dStack_88;
            dStack_100 = dStack_e0;
            if (uVar18 + 5 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 5);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 6 < uStack_128c) {
              dStack_f8 = adStack_1288[uVar18 + 6];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_f8 = 0.0;
            }
            dStack_100 = *pdVar14 + dStack_e0;
            dStack_f8 = dStack_f8 + dStack_88;
            dStack_88 = dStack_f8;
            dStack_90 = dStack_100;
            if (uVar18 + 7 < uStack_128c) {
              dVar21 = adStack_1288[uVar18 + 7];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dStack_88 = dVar21 + dStack_f8;
            if ((iVar11 + uStack_128c < 0x10) && ((uStack_128c & 1) != 0)) {
              if (uVar18 + 8 < uStack_128c) {
                dStack_90 = adStack_1288[uVar18 + 8];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_90 = 0.0;
              }
              dStack_90 = dStack_90 + dStack_100;
            }
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            uVar17 = uVar18 + 0x10;
            uVar18 = uVar18 + 8;
            iVar11 = iVar11 + -8;
          } while (uVar17 <= uStack_128c);
        }
        break;
      case 0x1f:
        if ((uStack_128c >> 2 & 1) != 0) {
          dStack_d8 = dStack_138;
          dStack_e0 = adStack_1288[0] + dStack_140;
          dStack_100 = adStack_1288[1] + adStack_1288[0] + dStack_140;
          dStack_f8 = adStack_1288[2] + dStack_138;
          dStack_90 = dStack_100;
          dStack_88 = adStack_1288[3] + adStack_1288[2] + dStack_138;
          if (uStack_128c < 0xc) {
            uVar17 = 4;
          }
          else {
            uVar18 = 6;
            do {
              uVar17 = uVar18;
              dStack_100 = dStack_90;
              FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
              dStack_d8 = dStack_138;
              dStack_e0 = dStack_140;
              if (uVar17 - 2 < uStack_128c) {
                dStack_d8 = adStack_1288[uVar17 - 2];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_d8 = 0.0;
              }
              dStack_d8 = dStack_d8 + dStack_138;
              dStack_f8 = dStack_d8;
              dStack_100 = dStack_140;
              if (uVar17 - 1 < uStack_128c) {
                pdVar14 = adStack_1288 + (uVar17 - 1);
              }
              else {
                abStack_1290[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar17 < uStack_128c) {
                dVar21 = adStack_1288[uVar17];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dStack_100 = *pdVar14 + dStack_140;
              dStack_f8 = dVar21 + dStack_d8;
              dStack_88 = dVar21 + dStack_d8;
              dStack_90 = dStack_100;
              if (uVar17 + 1 < uStack_128c) {
                dStack_90 = adStack_1288[uVar17 + 1];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_90 = 0.0;
              }
              dStack_90 = dStack_90 + dStack_100;
              FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
              dStack_d8 = dStack_88;
              dStack_e0 = dStack_90;
              if (uVar17 + 2 < uStack_128c) {
                dStack_e0 = adStack_1288[uVar17 + 2];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_e0 = 0.0;
              }
              dStack_e0 = dStack_e0 + dStack_90;
              dStack_f8 = dStack_88;
              dStack_100 = dStack_e0;
              if (uVar17 + 3 < uStack_128c) {
                pdVar14 = adStack_1288 + (uVar17 + 3);
              }
              else {
                abStack_1290[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar17 + 4 < uStack_128c) {
                dStack_f8 = adStack_1288[uVar17 + 4];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_f8 = 0.0;
              }
              dStack_f8 = dStack_f8 + dStack_88;
              dStack_100 = *pdVar14 + dStack_e0;
              dStack_88 = dStack_f8;
              dStack_90 = *pdVar14 + dStack_e0;
              if (uVar17 + 5 < uStack_128c) {
                dVar21 = adStack_1288[uVar17 + 5];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dStack_88 = dVar21 + dStack_f8;
              uVar18 = uVar17 + 8;
            } while (uVar17 + 0xe <= uStack_128c);
            uVar17 = uVar17 + 6;
          }
          dStack_100 = dStack_90;
          if (uVar17 < uStack_128c) {
            dStack_90 = dStack_90 + adStack_1288[uVar17];
          }
          goto code_r0x0001096fe7dc;
        }
        if (7 < uStack_128c) {
          iVar11 = 0;
          uVar18 = 0;
          do {
            dStack_d8 = dStack_138;
            dStack_e0 = dStack_140;
            if (uVar18 < uStack_128c) {
              dStack_e0 = adStack_1288[uVar18];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_e0 = 0.0;
            }
            dStack_e0 = dStack_e0 + dStack_140;
            dStack_f8 = dStack_138;
            dStack_100 = dStack_e0;
            if (uVar18 + 1 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 1);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 2 < uStack_128c) {
              dStack_f8 = adStack_1288[uVar18 + 2];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_f8 = 0.0;
            }
            dStack_f8 = dStack_f8 + dStack_138;
            dStack_100 = *pdVar14 + dStack_e0;
            dStack_88 = dStack_f8;
            dStack_90 = *pdVar14 + dStack_e0;
            if (uVar18 + 3 < uStack_128c) {
              dStack_88 = adStack_1288[uVar18 + 3];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_88 = 0.0;
            }
            dStack_88 = dStack_88 + dStack_f8;
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            dStack_d8 = dStack_88;
            dStack_e0 = dStack_90;
            if (uVar18 + 4 < uStack_128c) {
              dStack_d8 = adStack_1288[uVar18 + 4];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_d8 = 0.0;
            }
            dStack_d8 = dStack_d8 + dStack_88;
            dStack_f8 = dStack_d8;
            dStack_100 = dStack_90;
            if (uVar18 + 5 < uStack_128c) {
              pdVar14 = adStack_1288 + (uVar18 + 5);
            }
            else {
              abStack_1290[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 6 < uStack_128c) {
              dStack_f8 = adStack_1288[uVar18 + 6];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dStack_f8 = 0.0;
            }
            dStack_100 = *pdVar14 + dStack_90;
            dStack_f8 = dStack_f8 + dStack_d8;
            dStack_88 = dStack_f8;
            dStack_90 = dStack_100;
            if (uVar18 + 7 < uStack_128c) {
              dVar21 = adStack_1288[uVar18 + 7];
            }
            else {
              abStack_1290[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dStack_90 = dVar21 + dStack_100;
            if ((iVar11 + uStack_128c < 0x10) && ((uStack_128c & 1) != 0)) {
              if (uVar18 + 8 < uStack_128c) {
                dStack_88 = adStack_1288[uVar18 + 8];
              }
              else {
                abStack_1290[0] = 1;
                uRam000000011382ab30 = 0;
                dStack_88 = 0.0;
              }
              dStack_88 = dStack_88 + dStack_f8;
            }
            FUN_109715cbc(&dStack_12a0,auStack_12d0,&dStack_e0,&dStack_100,&dStack_90);
            uVar17 = uVar18 + 0x10;
            uVar18 = uVar18 + 8;
            iVar11 = iVar11 + -8;
          } while (uVar17 <= uStack_128c);
        }
      }
LAB_1096fe7f4:
      uStack_12c = 0;
code_r0x0001096fe7f8:
      uStack_12c = 0;
      uStack_128c = 0;
LAB_1096fe7fc:
      if ((bStack_258 & 1) != 0) goto LAB_1096fea6c;
      if ((uint)uStack_1298 < uStack_1298._4_4_) goto LAB_1096fea6c;
      if ((abStack_1290[0] & 1) != 0) {
        return 0;
      }
      iVar20 = iVar20 + -1;
      if (iVar20 == 0) {
        return 0;
      }
      uVar17 = uStack_1298._4_4_;
      uVar18 = (uint)uStack_1298;
    } while (cStack_268 != '\x01');
    param_3[1] = dStack_12c0;
    *param_3 = dStack_12c8;
    param_3[3] = dStack_12b0;
    param_3[2] = dStack_12b8;
    uVar7 = 1;
  }
  else {
LAB_1096fea6c:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 1096feabc; end: 1096febbb;  */

void FUN_1096feabc(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *(float *)(param_1 + 0x48);
  fVar9 = *(float *)(param_1 + 0x4c) * (float)(int)(short)*param_2;
  fVar7 = *(float *)(param_1 + 0x50) * (float)(int)(short)param_2[1];
  fVar8 = *(float *)(param_1 + 0x4c) * (float)(int)(short)((short)param_2[2] + (short)*param_2);
  fVar6 = *(float *)(param_1 + 0x50) * (float)(int)(short)((short)param_2[3] + (short)param_2[1]);
  if (fVar10 != 0.0) {
    fVar11 = fVar7 * fVar10;
    fVar10 = fVar10 * fVar6;
    fVar12 = fVar11;
    if (fVar10 < fVar11) {
      fVar12 = fVar10;
    }
    fVar9 = fVar9 + fVar12;
    if (fVar11 < fVar10) {
      fVar11 = fVar10;
    }
    fVar8 = fVar8 + fVar11;
  }
  iVar5 = (int)((float)(int)fVar6 - (float)(int)(float)(int)fVar7);
  *param_2 = (int)fVar9;
  param_2[1] = (int)fVar7;
  param_2[2] = (int)((float)(int)fVar8 - (float)(int)(float)(int)fVar9);
  param_2[3] = iVar5;
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0 || iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar1 = -iVar4;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = iVar4;
    }
    param_2[1] = iVar1 + (int)fVar7;
    param_2[3] = iVar5 - iVar1;
    iVar4 = -iVar2;
    if (-1 < iVar3) {
      iVar4 = iVar2;
    }
    if (*(char *)(param_1 + 0x38) == '\x01') {
      *param_2 = (int)fVar9 - iVar4 / 2;
    }
    param_2[2] = iVar4 + (int)((float)(int)fVar8 - (float)(int)(float)(int)fVar9);
  }
  return;
}



/* Entry: 1096febbc; end: 1097007b3;  */

undefined8
FUN_1096febbc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  double *pdVar12;
  long *plVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  double in_x9;
  double *pdVar17;
  uint uVar18;
  double in_x12;
  uint uVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  ulong uStack_1258;
  long lStack_1250;
  undefined8 uStack_1248;
  byte abStack_1240 [4];
  uint uStack_123c;
  double adStack_1238 [513];
  long lStack_230;
  long lStack_228;
  long lStack_220;
  char cStack_218;
  byte bStack_217;
  byte bStack_216;
  int iStack_214;
  int iStack_210;
  uint uStack_20c;
  byte bStack_208;
  uint uStack_204;
  long alStack_200 [30];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  double dStack_f0;
  double dStack_e8;
  ushort uStack_e0;
  undefined4 uStack_dc;
  double dStack_d8;
  byte bStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  dStack_b8 = in_x12;
  dStack_b0 = in_x9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((uint)param_3 < *(uint *)(param_1 + 0x128)) {
    uVar6 = *(ulong *)(param_1 + 0x88);
    FUN_1097007b4(uVar6,param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    FUN_1097007f0();
    puVar1 = (undefined *)(*(long *)(param_1 + 0x120) + (uVar6 & 0xffffffff) * 0x28);
    if (*(uint *)(param_1 + 0x11c) <= (uint)uVar6) {
      puVar1 = &UNK_10dfe4888;
    }
    uStack_c8 = uVar7;
    uStack_c0 = param_3;
    FUN_109715598(&lStack_1250,&uStack_c8,*(undefined8 *)(param_1 + 0x70),
                  *(undefined8 *)(puVar1 + 0x20));
    dStack_d8 = 0.0;
    uStack_e0 = 0;
    uStack_dc = 0;
    bStack_d0 = param_5;
    iVar20 = 200000;
    cStack_218 = '\0';
    uVar18 = uStack_1248._4_4_;
    uStack_1270 = param_2;
    uStack_1268 = param_4;
    uStack_1260 = param_6;
    uStack_1258 = param_1;
    do {
      dVar22 = dStack_e8;
      uVar19 = uStack_123c;
      uVar2 = (uint)uStack_1248;
      uVar16 = uVar18 + 1;
      if (uVar2 < uVar16) {
LAB_1097005ec:
        uVar5 = 0xffff;
LAB_1097005f0:
        FUN_1097159e4(uVar5,&lStack_1250);
        goto LAB_1096fffac;
      }
      uVar5 = (uint)*(byte *)(lStack_1250 + (ulong)uVar18);
      uStack_1248 = CONCAT44(uVar16,uVar2);
      uVar15 = uVar16;
      if (*(byte *)(lStack_1250 + (ulong)uVar18) == 0xc) {
        uVar15 = uVar18 + 2;
        if (uVar2 < uVar15) goto LAB_1097005ec;
        uVar5 = *(byte *)(lStack_1250 + (ulong)uVar16) | 0x100;
        uStack_1248 = CONCAT44(uVar15,uVar2);
      }
      if (0xfe < uVar5) {
        if (uVar5 < 0x123) {
          if (uVar5 == 0xff) {
            func_0x000109715858(abStack_1240,&lStack_1250);
            goto LAB_1096fffac;
          }
          if (uVar5 != 0x100) {
            if (uVar5 == 0x122) {
              if (uStack_123c == 7) {
                dVar21 = dStack_f0 + adStack_1238[0] + adStack_1238[1];
                dVar23 = dStack_e8 + adStack_1238[2];
                dVar24 = dVar21 + adStack_1238[3];
                dVar25 = dVar24 + adStack_1238[4];
                dVar27 = dVar25 + adStack_1238[5];
                dVar29 = dVar27 + adStack_1238[6];
                FUN_109715fc4(dStack_f0 + adStack_1238[0],dStack_e8,dVar21,dVar23,dVar24,dVar23,
                              &uStack_1270);
                dStack_f0 = dVar24;
                dStack_e8 = dVar23;
                FUN_109715fc4(dVar25,dVar23,dVar27,dVar22,dVar29,dVar22,&uStack_1270);
                dStack_f0 = dVar29;
                goto LAB_1096ffef0;
              }
              goto LAB_1097005fc;
            }
            goto LAB_1097005f0;
          }
        }
        else {
          if (uVar5 == 0x123) {
            if (uStack_123c == 0xd) {
              dVar22 = dStack_f0 + adStack_1238[0] + adStack_1238[2] + adStack_1238[4];
              dVar21 = dStack_e8 + adStack_1238[1] + adStack_1238[3] + adStack_1238[5];
              dVar23 = dVar22 + adStack_1238[6];
              dVar24 = dVar21 + adStack_1238[7];
              dVar25 = dVar23 + adStack_1238[8];
              dVar27 = dVar24 + adStack_1238[9];
              dVar29 = dVar25 + adStack_1238[10];
              dVar26 = dVar27 + adStack_1238[0xb];
              FUN_109715fc4(&uStack_1270);
              dStack_f0 = dVar22;
              dStack_e8 = dVar21;
              FUN_109715fc4(dVar23,dVar24,dVar25,dVar27,dVar29,dVar26,&uStack_1270);
              dStack_f0 = dVar29;
              dStack_e8 = dVar26;
              goto LAB_1096fffa4;
            }
          }
          else if (uVar5 == 0x124) {
            if (uStack_123c == 9) {
              dVar21 = dStack_e8 + adStack_1238[1] + adStack_1238[3];
              dVar23 = dStack_f0 + adStack_1238[0] + adStack_1238[2] + adStack_1238[4];
              dVar24 = dVar23 + adStack_1238[5];
              dVar25 = dVar24 + adStack_1238[6];
              dVar27 = dVar21 + adStack_1238[7];
              dVar29 = dVar25 + adStack_1238[8];
              FUN_109715fc4(&uStack_1270);
              dStack_f0 = dVar23;
              dStack_e8 = dVar21;
              FUN_109715fc4(dVar24,dVar21,dVar25,dVar27,dVar29,dVar22,&uStack_1270);
              dStack_f0 = dVar29;
              goto LAB_1096ffef0;
            }
          }
          else {
            if (uVar5 != 0x125) goto LAB_1097005f0;
            if (uStack_123c == 0xb) {
              dVar22 = 0.0;
              dVar21 = 0.0;
              uVar6 = 0xfffffffffffffffe;
              pdVar14 = adStack_1238;
              do {
                dVar22 = dVar22 + *pdVar14;
                dVar21 = dVar21 + pdVar14[1];
                uVar6 = uVar6 + 2;
                pdVar14 = pdVar14 + 2;
              } while (uVar6 < 8);
              dVar25 = dStack_f0 + adStack_1238[0] + adStack_1238[2] + adStack_1238[4];
              dVar27 = dStack_e8 + adStack_1238[1] + adStack_1238[3] + adStack_1238[5];
              dVar29 = dVar25 + adStack_1238[6];
              dVar26 = dVar27 + adStack_1238[7];
              dVar28 = dVar29 + adStack_1238[8];
              dVar30 = dVar26 + adStack_1238[9];
              dVar24 = dVar28 + adStack_1238[10];
              dVar23 = dStack_e8;
              if (ABS(dVar22) <= ABS(dVar21)) {
                dVar24 = dStack_f0;
                dVar23 = dVar30 + adStack_1238[10];
              }
              FUN_109715fc4(&uStack_1270);
              dStack_f0 = dVar25;
              dStack_e8 = dVar27;
              FUN_109715fc4(dVar29,dVar26,dVar28,dVar30,dVar24,dVar23,&uStack_1270);
              dStack_f0 = dVar24;
              dStack_e8 = dVar23;
              goto LAB_1096fffa4;
            }
          }
LAB_1097005fc:
          uStack_1248 = CONCAT44(uVar2 + 1,(uint)uStack_1248);
        }
        goto LAB_1096fffa4;
      }
      switch(uVar5) {
      case 1:
      case 0x12:
        if (((uStack_e0 & 1) == 0) && (uVar5 < 0x13)) {
          if ((1 << (ulong)(uVar5 & 0x1f) & 0x4400aU) == 0) {
            if (uVar5 != 4) goto code_r0x0001096fed8c;
            if (1 < uStack_123c) goto code_r0x0001096fed78;
          }
          else if ((uStack_123c & 1) != 0) {
code_r0x0001096fed78:
            if (uStack_123c != 0) {
              dStack_d8 = adStack_1238[0];
              uStack_e0 = 0x100;
            }
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
code_r0x0001096fed8c:
        uStack_dc = 0;
        iStack_214 = iStack_214 + (uStack_123c >> 1);
        goto code_r0x0001096fffa8;
      default:
        goto LAB_1097005f0;
      case 3:
      case 0x17:
        if (((uStack_e0 & 1) == 0) && (uVar5 < 0x18)) {
          uVar18 = 1 << (ulong)(uVar5 & 0x1f);
          if ((uVar18 & 0x9c4008) == 0) {
            if ((uVar18 & 0x400010) == 0) {
              if (uVar5 != 0x15) goto code_r0x0001097005d4;
              bVar3 = 1 < uStack_123c;
              bVar4 = uStack_123c == 2;
            }
            else {
              bVar3 = uStack_123c != 0;
              bVar4 = uStack_123c == 1;
            }
            if (bVar3 && !bVar4) goto code_r0x0001097005c0;
          }
          else if ((uStack_123c & 1) != 0) {
code_r0x0001097005c0:
            if (uStack_123c != 0) {
              dStack_d8 = adStack_1238[0];
              uStack_e0 = 0x100;
            }
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
code_r0x0001097005d4:
        uStack_dc = 0;
        iStack_210 = iStack_210 + (uStack_123c >> 1);
        goto code_r0x0001096fffa8;
      case 4:
        if ((uStack_e0 & 1) == 0) {
          if (1 < uStack_123c) {
            dStack_d8 = adStack_1238[0];
            uStack_e0 = 0x100;
            uStack_dc = 1;
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
        dVar22 = dStack_f0;
        if (uStack_123c == 0) {
          abStack_1240[0] = 1;
          uRam000000011382ab30 = 0;
          dVar21 = 0.0;
        }
        else {
          uStack_123c = uStack_123c - 1;
          dVar21 = adStack_1238[uStack_123c];
        }
        goto code_r0x0001096ff614;
      case 5:
        if (1 < uStack_123c) {
          uVar18 = 0;
          do {
            if (uVar18 < uStack_123c) {
              pdVar14 = adStack_1238 + uVar18;
            }
            else {
              abStack_1240[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 1 < uStack_123c) {
              dVar22 = adStack_1238[uVar18 + 1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar22 = 0.0;
            }
            dVar21 = dStack_f0 + *pdVar14;
            dVar22 = dStack_e8 + dVar22;
            func_0x000109715ed8(dVar21,dVar22,&uStack_1270);
            dStack_f0 = dVar21;
            dStack_e8 = dVar22;
            uVar16 = uVar18 + 4;
            uVar18 = uVar18 + 2;
          } while (uVar16 <= uStack_123c);
        }
        break;
      case 6:
        if (uStack_123c < 2) {
          uVar16 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dVar22 = dStack_e8;
            if (uVar18 < uStack_123c) {
              dVar21 = adStack_1238[uVar18];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dVar21 = dStack_f0 + dVar21;
            func_0x000109715ed8(dVar21,dStack_e8,&uStack_1270);
            dStack_f0 = dVar21;
            dStack_e8 = dVar22;
            if (uVar18 + 1 < uStack_123c) {
              dVar23 = adStack_1238[uVar18 + 1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar23 = 0.0;
            }
            dVar22 = dVar22 + dVar23;
            func_0x000109715ed8(dVar21,dVar22,&uStack_1270);
            dStack_f0 = dVar21;
            dStack_e8 = dVar22;
            uVar16 = uVar18 + 2;
            uVar19 = uVar18 + 4;
            uVar18 = uVar16;
          } while (uVar19 <= uStack_123c);
        }
        dVar22 = dStack_e8;
        if (uVar16 < uStack_123c) {
          dVar21 = dStack_f0 + adStack_1238[uVar16];
          func_0x000109715ed8(dVar21,dStack_e8,&uStack_1270);
          dStack_f0 = dVar21;
LAB_1096ffef0:
          dStack_e8 = dVar22;
        }
        break;
      case 7:
        if (uStack_123c < 2) {
          uVar16 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dVar22 = dStack_f0;
            if (uVar18 < uStack_123c) {
              dVar21 = adStack_1238[uVar18];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dVar21 = dStack_e8 + dVar21;
            func_0x000109715ed8(dStack_f0,dVar21,&uStack_1270);
            dStack_f0 = dVar22;
            dStack_e8 = dVar21;
            if (uVar18 + 1 < uStack_123c) {
              dVar23 = adStack_1238[uVar18 + 1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar23 = 0.0;
            }
            dVar22 = dVar22 + dVar23;
            func_0x000109715ed8(dVar22,dVar21,&uStack_1270);
            dStack_f0 = dVar22;
            dStack_e8 = dVar21;
            uVar16 = uVar18 + 2;
            uVar19 = uVar18 + 4;
            uVar18 = uVar16;
          } while (uVar19 <= uStack_123c);
        }
        if (uVar16 < uStack_123c) {
          dVar25 = dStack_e8 + adStack_1238[uVar16];
          dVar21 = dStack_f0;
code_r0x0001096ffe48:
          func_0x000109715ed8(dVar21,dVar25,&uStack_1270);
code_r0x0001096ffe58:
          dStack_f0 = dVar21;
          dStack_e8 = dVar25;
        }
        break;
      case 8:
        if (5 < uStack_123c) {
          uVar18 = 0;
          do {
            if (uVar18 < uStack_123c) {
              pdVar14 = adStack_1238 + uVar18;
            }
            else {
              abStack_1240[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 1 < uStack_123c) {
              dVar22 = adStack_1238[uVar18 + 1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar22 = 0.0;
            }
            if (uVar18 + 2 < uStack_123c) {
              pdVar12 = adStack_1238 + (uVar18 + 2);
            }
            else {
              abStack_1240[0] = 1;
              pdVar12 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 3 < uStack_123c) {
              dVar21 = adStack_1238[uVar18 + 3];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            dVar23 = *pdVar12;
            if (uVar18 + 4 < uStack_123c) {
              pdVar12 = adStack_1238 + (uVar18 + 4);
            }
            else {
              abStack_1240[0] = 1;
              pdVar12 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 5 < uStack_123c) {
              dVar24 = adStack_1238[uVar18 + 5];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar24 = 0.0;
            }
            dVar25 = dStack_f0 + *pdVar14;
            dVar22 = dStack_e8 + dVar22;
            dVar27 = *pdVar12;
            FUN_109715fc4(&uStack_1270);
            dStack_f0 = dVar25 + dVar23 + dVar27;
            dStack_e8 = dVar22 + dVar21 + dVar24;
            uVar16 = uVar18 + 0xc;
            uVar18 = uVar18 + 6;
          } while (uVar16 <= uStack_123c);
        }
        break;
      case 10:
        puVar11 = auStack_100;
        uVar7 = 2;
        goto code_r0x0001096ffc50;
      case 0xb:
        if (uStack_204 == 0) {
          bStack_208 = 1;
          plVar13 = (long *)0x11382ab30;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
          uRam000000011382ab30 = 0;
        }
        else {
          uStack_204 = uStack_204 - 1;
          plVar13 = alStack_200 + (ulong)uStack_204 * 3;
        }
        uStack_1248 = plVar13[1];
        lStack_1250 = *plVar13;
        lStack_228 = uStack_1248;
        lStack_230 = lStack_1250;
        lStack_220 = plVar13[2];
        goto LAB_1096fffac;
      case 0xe:
        if ((uStack_e0 & 1) == 0) {
          if ((uStack_123c & 1) != 0) {
            dStack_d8 = adStack_1238[0];
            uStack_e0 = 0x100;
            uStack_dc = 1;
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
        if (3 < uStack_123c) {
          FUN_109715d44(param_4);
          uVar18 = uStack_123c;
          dStack_b8 = 0.0;
          dStack_b0 = 0.0;
          if (uStack_123c < 4) {
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
            if (uStack_123c == 3) goto code_r0x0001096ff3c8;
            if (1 < uStack_123c) goto code_r0x0001096ff3d4;
            iVar10 = 0;
          }
          else {
            dStack_b8 = adStack_1238[uStack_123c - 4];
code_r0x0001096ff3c8:
            dStack_b0 = adStack_1238[uStack_123c - 3];
code_r0x0001096ff3d4:
            iVar10 = (int)adStack_1238[uStack_123c - 2];
          }
          uVar6 = param_1;
          func_0x0001097156c8(param_1,iVar10);
          if (uVar18 - 1 < uStack_123c) {
            iVar10 = (int)adStack_1238[uVar18 - 1];
          }
          else {
            iVar10 = 0;
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
          }
          uVar8 = param_1;
          func_0x0001097156c8(param_1,iVar10);
          if (((((bStack_d0 & 1) != 0) || ((int)uVar6 == 0)) || ((int)uVar8 == 0)) ||
             ((uVar9 = param_1, FUN_1096febbc(param_1,param_2,uVar6,param_4,1,0), (int)uVar9 == 0 ||
              (uVar6 = param_1, FUN_1096febbc(param_1,param_2,uVar8,param_4,1,&dStack_b8),
              (uVar6 & 1) == 0)))) {
            uStack_1248 = CONCAT44((uint)uStack_1248 + 1,(uint)uStack_1248);
          }
        }
        uStack_dc = 0;
        uStack_123c = 0;
        cStack_218 = '\x01';
        goto LAB_1096fffac;
      case 0x13:
      case 0x14:
        if ((uStack_e0 & 1) == 0) {
          if ((uStack_123c & 1) != 0) {
            dStack_d8 = adStack_1238[0];
            uStack_e0 = 0x100;
            uStack_dc = 1;
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
        if (bStack_216 != 1) {
          iStack_210 = iStack_210 + (uStack_123c >> 1);
          uStack_20c = iStack_210 + iStack_214 + 7U >> 3;
          bStack_216 = 1;
        }
        if (uVar15 + uStack_20c <= uVar2) {
          uStack_dc = 0;
          uStack_123c = 0;
          uStack_1248 = CONCAT44(uVar15 + uStack_20c,(uint)uStack_1248);
        }
        goto LAB_1096fffac;
      case 0x15:
        if ((uStack_e0 & 1) == 0) {
          if (2 < uStack_123c) {
            dStack_d8 = adStack_1238[0];
            uStack_e0 = 0x100;
            uStack_dc = 1;
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
        if (uStack_123c == 0) {
          pdVar14 = (double *)0x11382ab30;
          uVar18 = uStack_123c;
code_r0x000109700620:
          uStack_123c = uVar18;
          abStack_1240[0] = 1;
          uRam000000011382ab30 = 0;
          dVar22 = 0.0;
        }
        else {
          uVar18 = uStack_123c - 1;
          pdVar14 = adStack_1238 + uVar18;
          if (uVar18 == 0) goto code_r0x000109700620;
          uStack_123c = uStack_123c - 2;
          dVar22 = adStack_1238[uStack_123c];
        }
        dVar21 = *pdVar14;
        dVar22 = dStack_f0 + dVar22;
code_r0x0001096ff614:
        dVar21 = dStack_e8 + dVar21;
        func_0x000109715de4(dVar22,dVar21,&uStack_1270);
        dStack_f0 = dVar22;
        dStack_e8 = dVar21;
code_r0x0001096ff62c:
        if ((bStack_217 & 1) == 0) {
          if ((bStack_216 & 1) == 0) {
            iStack_210 = iStack_210 + (uStack_123c >> 1);
            uStack_20c = iStack_210 + iStack_214 + 7U >> 3;
            bStack_216 = 1;
          }
          bStack_217 = 1;
        }
        break;
      case 0x16:
        if ((uStack_e0 & 1) == 0) {
          if (1 < uStack_123c) {
            dStack_d8 = adStack_1238[0];
            uStack_e0 = 0x100;
            uStack_dc = 1;
          }
          uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
        }
        if (uStack_123c == 0) {
          abStack_1240[0] = 1;
          uRam000000011382ab30 = 0;
          dVar21 = 0.0;
        }
        else {
          uStack_123c = uStack_123c - 1;
          dVar21 = adStack_1238[uStack_123c];
        }
        dVar21 = dStack_f0 + dVar21;
        func_0x000109715de4(dVar21,dStack_e8,&uStack_1270);
        dStack_f0 = dVar21;
        dStack_e8 = dVar22;
        goto code_r0x0001096ff62c;
      case 0x18:
        if (7 < uStack_123c) {
          uVar16 = uStack_123c - 2;
          uVar18 = 0;
          do {
            uVar19 = uVar18;
            if (uVar19 < uStack_123c) {
              pdVar14 = adStack_1238 + uVar19;
            }
            else {
              abStack_1240[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 1 < uStack_123c) {
              dVar22 = adStack_1238[uVar19 + 1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar22 = 0.0;
            }
            if (uVar19 + 2 < uStack_123c) {
              pdVar12 = adStack_1238 + (uVar19 + 2);
            }
            else {
              abStack_1240[0] = 1;
              pdVar12 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 3 < uStack_123c) {
              dVar21 = adStack_1238[uVar19 + 3];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            if (uVar19 + 4 < uStack_123c) {
              pdVar17 = adStack_1238 + (uVar19 + 4);
            }
            else {
              abStack_1240[0] = 1;
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar19 + 5 < uStack_123c) {
              dVar25 = adStack_1238[uVar19 + 5];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar25 = 0.0;
            }
            dVar23 = dStack_f0 + *pdVar14 + *pdVar12 + *pdVar17;
            dVar25 = dStack_e8 + dVar22 + dVar21 + dVar25;
            FUN_109715fc4(&uStack_1270);
            dStack_f0 = dVar23;
            dStack_e8 = dVar25;
            uVar18 = uVar19 + 6;
          } while (uVar19 + 0xc <= uVar16);
          if (uVar18 < uStack_123c) {
            pdVar14 = adStack_1238 + uVar18;
          }
          else {
            abStack_1240[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar19 + 7 < uStack_123c) {
            dVar22 = adStack_1238[uVar19 + 7];
          }
          else {
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
            dVar22 = 0.0;
          }
          dVar25 = dVar25 + dVar22;
          dVar21 = dVar23 + *pdVar14;
          goto code_r0x0001096ffe48;
        }
        break;
      case 0x19:
        if (7 < uStack_123c) {
          uVar6 = 0;
          uVar18 = uStack_123c - 6;
          pdVar14 = adStack_1238;
          do {
            pdVar12 = pdVar14;
            if (uStack_123c <= uVar6) {
              abStack_1240[0] = 1;
              pdVar12 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar6 + 1 < (ulong)uStack_123c) {
              dVar22 = pdVar14[1];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar22 = 0.0;
            }
            dVar21 = dStack_f0 + *pdVar12;
            dVar22 = dStack_e8 + dVar22;
            func_0x000109715ed8(dVar21,dVar22,&uStack_1270);
            dStack_f0 = dVar21;
            dStack_e8 = dVar22;
            pdVar14 = pdVar14 + 2;
            iVar10 = (int)uVar6;
            uVar6 = uVar6 + 2;
          } while (iVar10 + 4U <= uVar18);
          uVar19 = uVar19 & 0xfffffffe;
          uVar18 = uVar19 - 6;
          if (uVar18 < uStack_123c) {
            pdVar14 = adStack_1238 + uVar18;
          }
          else {
            abStack_1240[0] = 1;
            pdVar14 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if ((uVar18 | 1) < uStack_123c) {
            dVar23 = adStack_1238[uVar18 | 1];
          }
          else {
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
            dVar23 = 0.0;
          }
          if (uVar19 - 4 < uStack_123c) {
            pdVar12 = adStack_1238 + (uVar19 - 4);
          }
          else {
            abStack_1240[0] = 1;
            pdVar12 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar19 - 3 < uStack_123c) {
            dVar24 = adStack_1238[uVar19 - 3];
          }
          else {
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
            dVar24 = 0.0;
          }
          if (uVar19 - 2 < uStack_123c) {
            pdVar17 = adStack_1238 + (uVar19 - 2);
          }
          else {
            abStack_1240[0] = 1;
            pdVar17 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar19 - 1 < uStack_123c) {
            dVar25 = adStack_1238[uVar19 - 1];
          }
          else {
            abStack_1240[0] = 1;
            uRam000000011382ab30 = 0;
            dVar25 = 0.0;
          }
          dVar21 = dVar21 + *pdVar14 + *pdVar12 + *pdVar17;
          dVar25 = dVar22 + dVar23 + dVar24 + dVar25;
          FUN_109715fc4(&uStack_1270);
          goto code_r0x0001096ffe58;
        }
        break;
      case 0x1a:
        if ((uStack_123c & 1 | 4) <= uStack_123c) {
          uVar18 = uStack_123c & 1;
          dVar22 = dStack_f0;
          if (uVar18 != 0) {
            dVar22 = dStack_f0 + adStack_1238[0];
          }
          do {
            if (uVar18 < uStack_123c) {
              dVar21 = adStack_1238[uVar18];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            if (uVar18 + 1 < uStack_123c) {
              pdVar14 = adStack_1238 + (uVar18 + 1);
            }
            else {
              abStack_1240[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 2 < uStack_123c) {
              dVar23 = adStack_1238[uVar18 + 2];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar23 = 0.0;
            }
            if (uVar18 + 3 < uStack_123c) {
              dVar24 = adStack_1238[uVar18 + 3];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar24 = 0.0;
            }
            dVar25 = dVar22 + *pdVar14;
            dVar23 = dStack_e8 + dVar21 + dVar23;
            dVar24 = dVar23 + dVar24;
            FUN_109715fc4(dVar22,dStack_e8 + dVar21,dVar25,dVar23,dVar25,dVar24,&uStack_1270);
            dStack_f0 = dVar25;
            dStack_e8 = dVar24;
            uVar16 = uVar18 + 8;
            uVar18 = uVar18 + 4;
            dVar22 = dVar25;
          } while (uVar16 <= uStack_123c);
        }
        break;
      case 0x1b:
        if ((uStack_123c & 1 | 4) <= uStack_123c) {
          uVar18 = uStack_123c & 1;
          if (uVar18 != 0) {
            dVar22 = dStack_e8 + adStack_1238[0];
          }
          do {
            if (uVar18 < uStack_123c) {
              dVar21 = adStack_1238[uVar18];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar21 = 0.0;
            }
            if (uVar18 + 1 < uStack_123c) {
              pdVar14 = adStack_1238 + (uVar18 + 1);
            }
            else {
              abStack_1240[0] = 1;
              pdVar14 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar18 + 2 < uStack_123c) {
              dVar23 = adStack_1238[uVar18 + 2];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar23 = 0.0;
            }
            dVar24 = *pdVar14;
            if (uVar18 + 3 < uStack_123c) {
              dVar25 = adStack_1238[uVar18 + 3];
            }
            else {
              abStack_1240[0] = 1;
              uRam000000011382ab30 = 0;
              dVar25 = 0.0;
            }
            dVar21 = dStack_f0 + dVar21;
            dVar22 = dVar22 + dVar23;
            FUN_109715fc4(&uStack_1270);
            dStack_f0 = dVar21 + dVar24 + dVar25;
            dStack_e8 = dVar22;
            uVar16 = uVar18 + 8;
            uVar18 = uVar18 + 4;
          } while (uVar16 <= uStack_123c);
        }
        break;
      case 0x1d:
        puVar11 = auStack_110;
        uVar7 = 1;
code_r0x0001096ffc50:
        FUN_1097158dc(&lStack_1250,puVar11,uVar7);
        goto LAB_1096fffac;
      case 0x1e:
        if ((uStack_123c >> 2 & 1) == 0) {
          if (7 < uStack_123c) {
            iVar10 = 0;
            uVar18 = 0;
            do {
              if (uVar18 < uStack_123c) {
                dVar22 = adStack_1238[uVar18];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              if (uVar18 + 1 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar18 + 1);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar18 + 2 < uStack_123c) {
                dVar21 = adStack_1238[uVar18 + 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              if (uVar18 + 3 < uStack_123c) {
                dVar23 = adStack_1238[uVar18 + 3];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar23 = 0.0;
              }
              dVar21 = dStack_e8 + dVar22 + dVar21;
              dVar23 = dStack_f0 + *pdVar14 + dVar23;
              FUN_109715fc4(dStack_f0,dStack_e8 + dVar22,dStack_f0 + *pdVar14,dVar21,dVar23,dVar21,
                            &uStack_1270);
              dStack_f0 = dVar23;
              dStack_e8 = dVar21;
              if (uVar18 + 4 < uStack_123c) {
                dVar22 = adStack_1238[uVar18 + 4];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              if (uVar18 + 5 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar18 + 5);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar18 + 6 < uStack_123c) {
                dVar24 = adStack_1238[uVar18 + 6];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar24 = 0.0;
              }
              if (uVar18 + 7 < uStack_123c) {
                dVar25 = adStack_1238[uVar18 + 7];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar25 = 0.0;
              }
              dVar29 = dVar23 + dVar22 + *pdVar14;
              dVar27 = dVar29;
              if ((iVar10 + uStack_123c < 0x10) && ((uStack_123c & 1) != 0)) {
                if (uVar18 + 8 < uStack_123c) {
                  dVar27 = adStack_1238[uVar18 + 8];
                }
                else {
                  abStack_1240[0] = 1;
                  uRam000000011382ab30 = 0;
                  dVar27 = 0.0;
                }
                dVar27 = dVar29 + dVar27;
              }
              dVar25 = dVar21 + dVar24 + dVar25;
              FUN_109715fc4(dVar23 + dVar22,dVar21,dVar29,dVar21 + dVar24,dVar27,dVar25,&uStack_1270
                           );
              dStack_f0 = dVar27;
              dStack_e8 = dVar25;
              uVar16 = uVar18 + 0x10;
              uVar18 = uVar18 + 8;
              iVar10 = iVar10 + -8;
            } while (uVar16 <= uStack_123c);
          }
        }
        else {
          dVar22 = dStack_e8 + adStack_1238[0];
          dVar24 = dStack_f0 + adStack_1238[1];
          dVar21 = dVar22 + adStack_1238[2];
          dVar23 = dVar24 + adStack_1238[3];
          if (uStack_123c < 0xc) {
            uVar16 = 4;
          }
          else {
            uVar18 = 6;
            do {
              uVar16 = uVar18;
              FUN_109715fc4(dStack_f0,dVar22,dVar24,dVar21,dVar23,dVar21,&uStack_1270);
              dStack_f0 = dVar23;
              dStack_e8 = dVar21;
              if (uVar16 - 2 < uStack_123c) {
                dVar25 = adStack_1238[uVar16 - 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar25 = 0.0;
              }
              if (uVar16 - 1 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar16 - 1);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar16 < uStack_123c) {
                dVar27 = adStack_1238[uVar16];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar27 = 0.0;
              }
              if (uVar16 + 1 < uStack_123c) {
                dVar22 = adStack_1238[uVar16 + 1];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              dVar24 = dVar23 + dVar25 + *pdVar14;
              dVar22 = dVar21 + dVar27 + dVar22;
              FUN_109715fc4(dVar23 + dVar25,dVar21,dVar24,dVar21 + dVar27,dVar24,dVar22,&uStack_1270
                           );
              dStack_f0 = dVar24;
              dStack_e8 = dVar22;
              if (uVar16 + 2 < uStack_123c) {
                dVar25 = adStack_1238[uVar16 + 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar25 = 0.0;
              }
              if (uVar16 + 3 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar16 + 3);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar16 + 4 < uStack_123c) {
                dVar21 = adStack_1238[uVar16 + 4];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              if (uVar16 + 5 < uStack_123c) {
                dVar23 = adStack_1238[uVar16 + 5];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar23 = 0.0;
              }
              dVar22 = dVar22 + dVar25;
              dVar24 = dVar24 + *pdVar14;
              dVar21 = dVar22 + dVar21;
              dVar23 = dVar24 + dVar23;
              uVar18 = uVar16 + 8;
            } while (uVar16 + 0xe <= uStack_123c);
            uVar16 = uVar16 + 6;
          }
          dVar25 = dVar21;
          if (uVar16 < uStack_123c) {
            dVar25 = dVar21 + adStack_1238[uVar16];
          }
          FUN_109715fc4(dStack_f0,dVar22,dVar24,dVar21,dVar23,dVar25,&uStack_1270);
          dStack_f0 = dVar23;
          dStack_e8 = dVar25;
        }
        goto code_r0x000109700598;
      case 0x1f:
        if ((uStack_123c >> 2 & 1) == 0) {
          if (7 < uStack_123c) {
            iVar10 = 0;
            uVar18 = 0;
            do {
              if (uVar18 < uStack_123c) {
                dVar22 = adStack_1238[uVar18];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              if (uVar18 + 1 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar18 + 1);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar18 + 2 < uStack_123c) {
                dVar21 = adStack_1238[uVar18 + 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              if (uVar18 + 3 < uStack_123c) {
                dVar23 = adStack_1238[uVar18 + 3];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar23 = 0.0;
              }
              dVar24 = dStack_f0 + dVar22 + *pdVar14;
              dVar23 = dStack_e8 + dVar21 + dVar23;
              FUN_109715fc4(dStack_f0 + dVar22,dStack_e8,dVar24,dStack_e8 + dVar21,dVar24,dVar23,
                            &uStack_1270);
              dStack_f0 = dVar24;
              dStack_e8 = dVar23;
              if (uVar18 + 4 < uStack_123c) {
                dVar22 = adStack_1238[uVar18 + 4];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              if (uVar18 + 5 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar18 + 5);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar18 + 6 < uStack_123c) {
                dVar21 = adStack_1238[uVar18 + 6];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dVar25 = *pdVar14;
              if (uVar18 + 7 < uStack_123c) {
                dVar27 = adStack_1238[uVar18 + 7];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar27 = 0.0;
              }
              dVar21 = dVar23 + dVar22 + dVar21;
              if ((iVar10 + uStack_123c < 0x10) && ((uStack_123c & 1) != 0)) {
                if (uVar18 + 8 < uStack_123c) {
                  dVar22 = adStack_1238[uVar18 + 8];
                }
                else {
                  abStack_1240[0] = 1;
                  uRam000000011382ab30 = 0;
                  dVar22 = 0.0;
                }
                dVar21 = dVar21 + dVar22;
              }
              FUN_109715fc4(dVar24,&uStack_1270);
              dStack_f0 = dVar24 + dVar25 + dVar27;
              dStack_e8 = dVar21;
              uVar16 = uVar18 + 0x10;
              uVar18 = uVar18 + 8;
              iVar10 = iVar10 + -8;
            } while (uVar16 <= uStack_123c);
          }
        }
        else {
          dVar21 = dStack_f0 + adStack_1238[0];
          dVar24 = dVar21 + adStack_1238[1];
          dVar22 = dStack_e8 + adStack_1238[2];
          dVar23 = dVar22 + adStack_1238[3];
          if (uStack_123c < 0xc) {
            uVar16 = 4;
          }
          else {
            uVar18 = 6;
            do {
              uVar16 = uVar18;
              FUN_109715fc4(dVar21,dStack_e8,dVar24,dVar22,dVar24,dVar23,&uStack_1270);
              dStack_f0 = dVar24;
              dStack_e8 = dVar23;
              if (uVar16 - 2 < uStack_123c) {
                dVar25 = adStack_1238[uVar16 - 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar25 = 0.0;
              }
              if (uVar16 - 1 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar16 - 1);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar16 < uStack_123c) {
                dVar22 = adStack_1238[uVar16];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar22 = 0.0;
              }
              if (uVar16 + 1 < uStack_123c) {
                dVar21 = adStack_1238[uVar16 + 1];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar21 = 0.0;
              }
              dVar22 = dVar23 + dVar25 + dVar22;
              dVar21 = dVar24 + *pdVar14 + dVar21;
              FUN_109715fc4(dVar24,dVar23 + dVar25,dVar24 + *pdVar14,dVar22,dVar21,dVar22,
                            &uStack_1270);
              dStack_f0 = dVar21;
              dStack_e8 = dVar22;
              if (uVar16 + 2 < uStack_123c) {
                dVar24 = adStack_1238[uVar16 + 2];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar24 = 0.0;
              }
              if (uVar16 + 3 < uStack_123c) {
                pdVar14 = adStack_1238 + (uVar16 + 3);
              }
              else {
                abStack_1240[0] = 1;
                pdVar14 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar16 + 4 < uStack_123c) {
                dVar25 = adStack_1238[uVar16 + 4];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar25 = 0.0;
              }
              if (uVar16 + 5 < uStack_123c) {
                dVar23 = adStack_1238[uVar16 + 5];
              }
              else {
                abStack_1240[0] = 1;
                uRam000000011382ab30 = 0;
                dVar23 = 0.0;
              }
              dVar21 = dVar21 + dVar24;
              dVar24 = dVar21 + *pdVar14;
              dVar22 = dVar22 + dVar25;
              dVar23 = dVar22 + dVar23;
              uVar18 = uVar16 + 8;
            } while (uVar16 + 0xe <= uStack_123c);
            uVar16 = uVar16 + 6;
          }
          dVar25 = dVar24;
          if (uVar16 < uStack_123c) {
            dVar25 = dVar24 + adStack_1238[uVar16];
          }
          FUN_109715fc4(dVar21,dStack_e8,dVar24,dVar22,dVar25,dVar23,&uStack_1270);
          dStack_f0 = dVar25;
          dStack_e8 = dVar23;
        }
code_r0x000109700598:
        uStack_dc = 0;
        uStack_123c = 0;
        goto LAB_1096fffac;
      }
LAB_1096fffa4:
      uStack_dc = 0;
code_r0x0001096fffa8:
      uStack_dc = 0;
      uStack_123c = 0;
LAB_1096fffac:
      if ((bStack_208 & 1) != 0) goto LAB_109700764;
      if ((uint)uStack_1248 < uStack_1248._4_4_) goto LAB_109700764;
      if ((abStack_1240[0] & 1) != 0) {
        return 0;
      }
      iVar20 = iVar20 + -1;
      if (iVar20 == 0) {
        return 0;
      }
      uVar18 = uStack_1248._4_4_;
    } while (cStack_218 != '\x01');
    FUN_109715d44(param_4);
    uVar7 = 1;
  }
  else {
LAB_109700764:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 1097007b4; end: 1097007ef;  */

char FUN_1097007b4(char *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  
  if (param_1 != "") {
    if (*param_1 == '\x03') {
      puVar1 = (ushort *)(param_1 + 1);
      if (param_1[2] == '\0' && (char)*puVar1 == '\0') {
        param_1 = "";
      }
      else {
        param_1 = param_1 + 3;
      }
      uVar2 = *puVar1;
      uVar4 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
      iVar5 = uVar4 - 2;
      if (1 < uVar4) {
        iVar6 = 0;
        do {
          uVar3 = (uint)(iVar5 + iVar6) >> 1;
          puVar7 = (ushort *)(param_1 + (ulong)uVar3 * 3);
          if (param_2 < ((uint)(*puVar7 >> 8) | (*puVar7 & 0xff00ff) << 8)) {
            iVar5 = uVar3 - 1;
          }
          else {
            if (param_2 < ((uint)(*(ushort *)((long)puVar7 + 3) >> 8) |
                          (*(ushort *)((long)puVar7 + 3) & 0xff00ff) << 8)) goto LAB_1097161b4;
            iVar6 = uVar3 + 1;
          }
        } while (iVar6 <= iVar5);
      }
      if (uVar2 == 0) {
        puVar7 = (ushort *)&UNK_10dfe4888;
      }
      else {
        puVar7 = (ushort *)((long)puVar1 + (ulong)(uVar4 - 1) * 3 + 2);
      }
LAB_1097161b4:
      return (char)puVar7[1];
    }
    if (*param_1 == '\0') {
      return param_1[(ulong)param_2 + 1];
    }
  }
  return '\0';
}



/* Entry: 1097007f0; end: 10970088f;  */

undefined1  [16] FUN_1097007f0(ushort *param_1,uint param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 < ((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8)) {
    puVar4 = param_1;
    FUN_1097255cc();
    puVar5 = param_1;
    FUN_1097255cc(param_1,param_2 + 1);
    uVar3 = (uint)puVar5;
    uVar8 = (ulong)(uVar3 - (uint)puVar4);
    if ((uint)puVar4 <= uVar3) {
      uVar2 = *param_1;
      uVar1 = *(undefined1 *)((long)param_1 + 1);
      puVar5 = param_1;
      FUN_1097255cc(param_1,CONCAT11((char)uVar2,uVar1));
      if (uVar3 <= (uint)puVar5) {
        uVar7 = (ulong)(byte)param_1[1];
        pbVar6 = (byte *)((long)(param_1 + 1) +
                         ((ulong)puVar4 & 0xffffffff) + uVar7 + uVar7 * CONCAT11((char)uVar2,uVar1))
        ;
        goto LAB_10970086c;
      }
    }
  }
  pbVar6 = (byte *)0x0;
  uVar8 = 0;
LAB_10970086c:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = pbVar6;
  return auVar9;
}



/* Entry: 109700890; end: 10970098b;  */

ushort FUN_109700890(char *param_1,uint param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint *puVar12;
  
  if (param_1 != "") {
    cVar2 = *param_1;
    if (cVar2 == '\x04') {
      if ((param_1[2] == '\0' && param_1[1] == '\0') && (param_1[3] == '\0' && param_1[4] == '\0'))
      {
        pcVar8 = "";
      }
      else {
        pcVar8 = param_1 + 5;
      }
      uVar6 = *(uint *)(param_1 + 1);
      uVar4 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar7 = uVar4 - 1;
      if (0 < (int)uVar7) {
        iVar10 = 0;
        iVar9 = uVar4 - 2;
        do {
          uVar4 = (uint)(iVar9 + iVar10) >> 1;
          puVar12 = (uint *)(pcVar8 + (ulong)uVar4 * 6);
          uVar5 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
          if (param_2 < (uVar5 >> 0x10 | uVar5 << 0x10)) {
            iVar9 = uVar4 - 1;
          }
          else {
            uVar5 = (*(uint *)((long)puVar12 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)puVar12 + 6) & 0xff00ff) << 8;
            if (param_2 < (uVar5 >> 0x10 | uVar5 << 0x10)) goto LAB_109700968;
            iVar10 = uVar4 + 1;
          }
        } while (iVar10 <= iVar9);
      }
      if (uVar6 == 0) {
        puVar12 = (uint *)&UNK_10dfe4888;
      }
      else {
        puVar12 = (uint *)(param_1 + (ulong)uVar7 * 6 + 5);
      }
LAB_109700968:
      return (ushort)puVar12[1] >> 8 | (ushort)puVar12[1] << 8;
    }
    if (cVar2 == '\x03') {
      puVar1 = (ushort *)(param_1 + 1);
      if (param_1[2] == '\0' && (char)*puVar1 == '\0') {
        param_1 = "";
      }
      else {
        param_1 = param_1 + 3;
      }
      uVar3 = *puVar1;
      uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      iVar10 = uVar6 - 2;
      if (1 < uVar6) {
        iVar9 = 0;
        do {
          uVar4 = (uint)(iVar10 + iVar9) >> 1;
          puVar11 = (ushort *)(param_1 + (ulong)uVar4 * 3);
          if (param_2 < ((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8)) {
            iVar10 = uVar4 - 1;
          }
          else {
            if (param_2 < ((uint)(*(ushort *)((long)puVar11 + 3) >> 8) |
                          (*(ushort *)((long)puVar11 + 3) & 0xff00ff) << 8)) goto LAB_1097161b4;
            iVar9 = uVar4 + 1;
          }
        } while (iVar9 <= iVar10);
      }
      if (uVar3 == 0) {
        puVar11 = (ushort *)&UNK_10dfe4888;
      }
      else {
        puVar11 = (ushort *)((long)puVar1 + (ulong)(uVar6 - 1) * 3 + 2);
      }
LAB_1097161b4:
      return (ushort)(byte)puVar11[1];
    }
    if (cVar2 == '\0') {
      return (ushort)(byte)param_1[(ulong)param_2 + 1];
    }
  }
  return 0;
}



/* Entry: 10970098c; end: 109700a57;  */

undefined1  [16] FUN_10970098c(uint *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar5 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  if (param_2 < (uVar5 >> 0x10 | uVar5 << 0x10)) {
    puVar6 = param_1;
    FUN_1097234d8();
    puVar7 = param_1;
    FUN_1097234d8(param_1,param_2 + 1);
    uVar5 = (uint)puVar7;
    uVar9 = (ulong)(uVar5 - (uint)puVar6);
    if ((uint)puVar6 <= uVar5) {
      uVar4 = *param_1;
      bVar1 = *(byte *)((long)param_1 + 1);
      bVar2 = *(byte *)((long)param_1 + 2);
      bVar3 = *(byte *)((long)param_1 + 3);
      puVar7 = param_1;
      FUN_1097234d8(param_1,(uint)(byte)uVar4 << 0x18 | (uint)bVar1 << 0x10 | (uint)bVar2 << 8 |
                            (uint)bVar3);
      if (uVar5 <= (uint)puVar7) {
        uVar5 = (uint)(byte)param_1[1];
        lVar8 = (long)(param_1 + 1) +
                ((ulong)puVar6 & 0xffffffff) +
                (ulong)(uVar5 + uVar5 * ((uint)(byte)uVar4 << 0x18 | (uint)bVar1 << 0x10 |
                                         (uint)bVar2 << 8 | (uint)bVar3));
        goto LAB_109700a30;
      }
    }
  }
  lVar8 = 0;
  uVar9 = 0;
LAB_109700a30:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = lVar8;
  return auVar10;
}



/* Entry: 109700a58; end: 109700ab3;  */

bool FUN_109700a58(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1[1] != '\0' || *param_1 != '\0') {
    uVar2 = (*(uint *)(param_1 + 0xe) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xe) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    pcVar1 = "";
    if (uVar2 != 0) {
      pcVar1 = param_1 + uVar2;
    }
    return (pcVar1[1] != '\0' || *pcVar1 != '\0') || (pcVar1[2] != '\0' || pcVar1[3] != '\0');
  }
  return false;
}



/* Entry: 109700ab4; end: 109700bbf;  */

bool FUN_109700ab4(long param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  
  param_1 = param_1 + 0x170;
  FUN_109747f24();
  pcVar2 = "";
  if (0xd < *(uint *)(param_1 + 0x18)) {
    pcVar2 = *(char **)(param_1 + 0x10);
  }
  if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
    bVar1 = false;
  }
  else {
    FUN_1097161d4(pcVar2,param_2);
    bVar1 = pcVar2 != (char *)0x0;
  }
  return bVar1;
}



/* Entry: 109700bc0; end: 109700c47;  */

ushort FUN_109700bc0(long param_1,uint param_2,undefined8 param_3,uint param_4,uint *param_5,
                    int *param_6)

{
  long lVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  undefined *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  int iStack_68;
  int iStack_64;
  
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x118);
  FUN_10972ad34();
  puVar17 = (ushort *)&UNK_10dfe4888;
  if ((ushort *)*puVar9 != (ushort *)0x0) {
    puVar17 = (ushort *)*puVar9;
  }
  puVar10 = (ushort *)&UNK_10dfe4888;
  if (3 < *(uint *)(puVar17 + 0xc)) {
    puVar10 = *(ushort **)(puVar17 + 8);
  }
  puVar17 = (ushort *)&UNK_10dfe4888;
  if (((ushort)(*puVar10 >> 8 | *puVar10 << 8) == 1) &&
     (uVar16 = (uint)(puVar10[4] >> 8) | (puVar10[4] & 0xff00ff) << 8, uVar16 != 0)) {
    puVar17 = (ushort *)((long)puVar10 + (ulong)uVar16);
  }
  FUN_1097012cc();
  uVar16 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
  puVar11 = &UNK_10dfe4888;
  if (uVar16 != 0) {
    puVar11 = (undefined *)((long)puVar17 + (ulong)uVar16);
  }
  func_0x000109729bf8(puVar11,param_3);
  if ((uint)puVar11 == 0xffffffff) {
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    return 0;
  }
  puVar13 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar11 < ((uint)(puVar17[1] >> 8) | (puVar17[1] & 0xff00ff) << 8)) {
    puVar13 = puVar17 + ((ulong)puVar11 & 0xffffffff) + 2;
  }
  uVar16 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
  puVar13 = (ushort *)&UNK_10dfe4888;
  if (uVar16 != 0) {
    puVar13 = (ushort *)((long)puVar17 + (ulong)uVar16);
  }
  if (param_5 != (uint *)0x0) {
    uVar5 = (uint)(*puVar13 >> 8) | (*puVar13 & 0xff00ff) << 8;
    uVar16 = 0;
    if (param_4 <= uVar5) {
      uVar16 = uVar5 - param_4;
    }
    if (*param_5 <= uVar16) {
      uVar16 = *param_5;
    }
    *param_5 = uVar16;
    if (uVar16 != 0) {
      puVar17 = puVar13 + param_4;
      uVar5 = param_2 & 0xfffffffe;
      lVar1 = 0x58;
      if (uVar5 != 4) {
        lVar1 = 0x60;
      }
      iVar18 = -uVar16;
      do {
        puVar17 = puVar17 + 1;
        uVar6 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8;
        puVar2 = (ushort *)&UNK_10dfe4888;
        if (uVar6 != 0) {
          puVar2 = (ushort *)((long)puVar13 + (ulong)uVar6);
        }
        uVar4 = *puVar2 >> 8 | *puVar2 << 8;
        if (uVar4 == 3) {
          uVar14 = (long)(short)((ushort)(byte)puVar2[1] << 8) | (ulong)*(byte *)((long)puVar2 + 3);
          uVar6 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
          puVar12 = (ushort *)&UNK_10dfe4888;
          if (uVar6 != 0) {
            puVar12 = (ushort *)((long)puVar2 + (ulong)uVar6);
          }
          if (uVar5 == 4) {
            iVar15 = (int)(*(long *)(param_1 + 0x58) * uVar14 + 0x8000 >> 0x10);
            FUN_109729fb8(puVar12,param_1,puVar10,0);
            iVar8 = (int)puVar12;
          }
          else {
            iVar15 = (int)(*(long *)(param_1 + 0x60) * uVar14 + 0x8000 >> 0x10);
            func_0x00010972a058(puVar12,param_1,puVar10,0);
            iVar8 = (int)puVar12;
          }
          iVar8 = iVar8 + iVar15;
        }
        else if (uVar4 == 2) {
          func_0x0001096fb4c8(param_1,(int)param_3,puVar2[1] >> 8 | puVar2[1] << 8,param_2,
                              &iStack_64,&iStack_68);
          piVar3 = &iStack_64;
          if (uVar5 != 4) {
            piVar3 = &iStack_68;
          }
          iVar8 = *piVar3;
        }
        else if (uVar4 == 1) {
          iVar8 = (int)(*(long *)(param_1 + lVar1) *
                        ((long)(short)((ushort)(byte)puVar2[1] << 8) |
                        (ulong)*(byte *)((long)puVar2 + 3)) + 0x8000 >> 0x10);
        }
        else {
          iVar8 = 0;
        }
        if (uVar16 != 0) {
          *param_6 = iVar8;
          uVar16 = uVar16 - 1;
          param_6 = param_6 + 1;
          iVar8 = iRam000000011382ab30;
        }
        iRam000000011382ab30 = iVar8;
        bVar7 = iVar18 != -1;
        iVar18 = iVar18 + 1;
      } while (bVar7);
    }
  }
  return *puVar13 >> 8 | *puVar13 << 8;
}



/* Entry: 109700c48; end: 109700cdf;  */

ushort FUN_109700c48(ushort *param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                    uint *param_6,int *param_7)

{
  long lVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int iStack_68;
  int iStack_64;
  
  puVar15 = (ushort *)&UNK_10dfe4888;
  if (((ushort)(*param_1 >> 8 | *param_1 << 8) == 1) &&
     (uVar14 = (uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8, uVar14 != 0)) {
    puVar15 = (ushort *)((long)param_1 + (ulong)uVar14);
  }
  FUN_1097012cc();
  uVar14 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
  puVar9 = &UNK_10dfe4888;
  if (uVar14 != 0) {
    puVar9 = (undefined *)((long)puVar15 + (ulong)uVar14);
  }
  func_0x000109729bf8(puVar9,param_4);
  if ((uint)puVar9 == 0xffffffff) {
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    return 0;
  }
  puVar11 = (ushort *)&UNK_10dfe4888;
  if ((uint)puVar9 < ((uint)(puVar15[1] >> 8) | (puVar15[1] & 0xff00ff) << 8)) {
    puVar11 = puVar15 + ((ulong)puVar9 & 0xffffffff) + 2;
  }
  uVar14 = (uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8;
  puVar11 = (ushort *)&UNK_10dfe4888;
  if (uVar14 != 0) {
    puVar11 = (ushort *)((long)puVar15 + (ulong)uVar14);
  }
  if (param_6 != (uint *)0x0) {
    uVar5 = (uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8;
    uVar14 = 0;
    if (param_5 <= uVar5) {
      uVar14 = uVar5 - param_5;
    }
    if (*param_6 <= uVar14) {
      uVar14 = *param_6;
    }
    *param_6 = uVar14;
    if (uVar14 != 0) {
      puVar15 = puVar11 + param_5;
      uVar5 = param_3 & 0xfffffffe;
      lVar1 = 0x58;
      if (uVar5 != 4) {
        lVar1 = 0x60;
      }
      iVar16 = -uVar14;
      do {
        puVar15 = puVar15 + 1;
        uVar6 = (uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8;
        puVar2 = (ushort *)&UNK_10dfe4888;
        if (uVar6 != 0) {
          puVar2 = (ushort *)((long)puVar11 + (ulong)uVar6);
        }
        uVar4 = *puVar2 >> 8 | *puVar2 << 8;
        if (uVar4 == 3) {
          uVar12 = (long)(short)((ushort)(byte)puVar2[1] << 8) | (ulong)*(byte *)((long)puVar2 + 3);
          uVar6 = (uint)(puVar2[2] >> 8) | (puVar2[2] & 0xff00ff) << 8;
          puVar10 = (ushort *)&UNK_10dfe4888;
          if (uVar6 != 0) {
            puVar10 = (ushort *)((long)puVar2 + (ulong)uVar6);
          }
          if (uVar5 == 4) {
            iVar13 = (int)(*(long *)(param_2 + 0x58) * uVar12 + 0x8000 >> 0x10);
            FUN_109729fb8(puVar10,param_2,param_1,0);
            iVar8 = (int)puVar10;
          }
          else {
            iVar13 = (int)(*(long *)(param_2 + 0x60) * uVar12 + 0x8000 >> 0x10);
            func_0x00010972a058(puVar10,param_2,param_1,0);
            iVar8 = (int)puVar10;
          }
          iVar8 = iVar8 + iVar13;
        }
        else if (uVar4 == 2) {
          func_0x0001096fb4c8(param_2,(int)param_4,puVar2[1] >> 8 | puVar2[1] << 8,param_3,
                              &iStack_64,&iStack_68);
          piVar3 = &iStack_64;
          if (uVar5 != 4) {
            piVar3 = &iStack_68;
          }
          iVar8 = *piVar3;
        }
        else if (uVar4 == 1) {
          iVar8 = (int)(*(long *)(param_2 + lVar1) *
                        ((long)(short)((ushort)(byte)puVar2[1] << 8) |
                        (ulong)*(byte *)((long)puVar2 + 3)) + 0x8000 >> 0x10);
        }
        else {
          iVar8 = 0;
        }
        if (uVar14 != 0) {
          *param_7 = iVar8;
          uVar14 = uVar14 - 1;
          param_7 = param_7 + 1;
          iVar8 = iRam000000011382ab30;
        }
        iRam000000011382ab30 = iVar8;
        bVar7 = iVar16 != -1;
        iVar16 = iVar16 + 1;
      } while (bVar7);
    }
  }
  return *puVar11 >> 8 | *puVar11 << 8;
}



/* Entry: 109700ce0; end: 109700d53;  */

undefined * FUN_109700ce0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  if (param_2 == 0x47504f53) {
    puVar2 = (undefined8 *)(param_1 + 0x128);
    func_0x00010972ef1c();
  }
  else {
    if (param_2 != 0x47535542) {
      return &UNK_10dfe4888;
    }
    puVar2 = (undefined8 *)(param_1 + 0x120);
    FUN_10972c6ec();
  }
  puVar1 = &UNK_10dfe4888;
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    puVar1 = (undefined *)*puVar2;
  }
  puVar3 = &UNK_10dfe4888;
  if (3 < *(uint *)(puVar1 + 0x18)) {
    puVar3 = *(undefined **)(puVar1 + 0x10);
  }
  return puVar3;
}



/* Entry: 109700d54; end: 109700f07;  */

undefined8 FUN_109700d54(ushort *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = (ushort *)&UNK_10dfe4888;
  if (((ushort)(*param_1 >> 8 | *param_1 << 8) == 1) &&
     (uVar6 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8, uVar6 != 0)) {
    puVar3 = (ushort *)((long)param_1 + (ulong)uVar6);
  }
  uVar6 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
  if (uVar6 != 0) {
    iVar5 = 0;
    iVar4 = uVar6 - 1;
    do {
      uVar6 = (uint)(iVar4 + iVar5) >> 1;
      uVar1 = (*(uint *)(puVar3 + (ulong)uVar6 * 3 + 1) & 0xff00ff00) >> 8 |
              (*(uint *)(puVar3 + (ulong)uVar6 * 3 + 1) & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (param_2 < uVar1) {
        iVar4 = uVar6 - 1;
      }
      else {
        if (uVar1 == param_2) {
          uVar2 = 1;
          goto LAB_109700ddc;
        }
        iVar5 = uVar6 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  uVar2 = 0;
  uVar6 = 0xffff;
LAB_109700ddc:
  *param_3 = uVar6;
  return uVar2;
}



/* Entry: 109700f08; end: 109701167;  */

undefined8 FUN_109700f08(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return 0;
  }
  if ((param_2 == 0) || (*(uint *)(param_1 + 0x1c) <= param_2 + (param_2 >> 1))) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) <= param_2) {
      uVar2 = param_2;
    }
    iVar14 = uVar2 * 2 + 8;
    uVar2 = 0;
    if (iVar14 != 0) {
      uVar2 = 0x20 - (int)LZCOUNT(iVar14);
    }
    uVar11 = 0xcL << ((ulong)uVar2 & 0x3f);
    uVar3 = uVar11;
    _malloc();
    if (uVar3 == 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return 0;
    }
    uVar11 = uVar11 & 0xfffffffc;
    if (uVar11 != 0) {
      _bzero(uVar3,uVar11);
    }
    uVar1 = *(int *)(param_1 + 0x1c) + 1;
    lVar12 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = ~(-1 << (ulong)(uVar2 & 0x1f));
    if (uVar2 < 0x20) {
      uVar5 = *(undefined4 *)(&UNK_10dfebaf8 + (ulong)uVar2 * 4);
    }
    else {
      uVar5 = 0x7fffffff;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    *(short *)(param_1 + 0x12) = (short)(uVar2 << 1);
    *(ulong *)(param_1 + 0x28) = uVar3;
    if (1 < uVar1) {
      uVar11 = 0;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        piVar13 = (int *)(lVar12 + uVar11 * 0xc);
        uVar2 = piVar13[1];
        if ((((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x10) == '\x01')) &&
           ((*(uint *)(param_1 + 0x18) + (*(uint *)(param_1 + 0x18) >> 1) <
             *(uint *)(param_1 + 0x1c) ||
            (lVar7 = param_1, FUN_109700f08(param_1,0), (int)lVar7 != 0)))) {
          uVar8 = *(uint *)(param_1 + 0x20);
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = (uVar2 >> 2) / uVar8;
          }
          uVar8 = (uVar2 >> 2) - uVar10 * uVar8;
          lVar7 = *(long *)(param_1 + 0x28);
          piVar6 = (int *)(lVar7 + (ulong)uVar8 * 0xc);
          uVar10 = piVar6[1];
          if ((uVar10 >> 1 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            uVar9 = 0xffffffff;
            do {
              if (*piVar6 == *piVar13) break;
              if ((uVar10 & 1) == 0 && uVar9 == 0xffffffff) {
                uVar9 = uVar8;
              }
              uVar4 = uVar4 + 1;
              uVar8 = *(uint *)(param_1 + 0x1c) & uVar4 + uVar8;
              piVar6 = (int *)(lVar7 + (ulong)uVar8 * 0xc);
              uVar10 = piVar6[1];
            } while ((uVar10 >> 1 & 1) != 0);
            if (uVar9 != 0xffffffff) {
              uVar8 = uVar9;
            }
            piVar6 = (int *)(lVar7 + (ulong)uVar8 * 0xc);
            if ((*(byte *)(piVar6 + 1) >> 1 & 1) != 0) {
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
              *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (piVar6[1] & 1U);
            }
          }
          *piVar6 = *piVar13;
          iVar14 = piVar13[2];
          piVar6[1] = uVar2 | 3;
          piVar6[2] = iVar14;
          iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1;
          *(ulong *)(param_1 + 0x14) = CONCAT44(iVar14,(int)*(undefined8 *)(param_1 + 0x14) + 1);
          if ((*(ushort *)(param_1 + 0x12) < uVar4) &&
             (*(uint *)(param_1 + 0x1c) < (uint)(iVar14 * 8))) {
            FUN_109700f08(param_1,*(uint *)(param_1 + 0x1c) - 8);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
    }
    _free(lVar12);
  }
  return 1;
}



/* Entry: 109701168; end: 1097012cb;  */

void FUN_109701168(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined4 *param_5)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_1;
  FUN_109700ce0();
  puVar7 = (undefined8 *)(param_1 + 0x118);
  FUN_10972ad34();
  puVar1 = (ushort *)&UNK_10dfe4888;
  if ((ushort *)*puVar7 != (ushort *)0x0) {
    puVar1 = (ushort *)*puVar7;
  }
  puVar8 = (ushort *)&UNK_10dfe4888;
  if (3 < *(uint *)(puVar1 + 0xc)) {
    puVar8 = *(ushort **)(puVar1 + 8);
  }
  FUN_1097012cc();
  uStack_80 = 0;
  uStack_70 = param_4 & 0xffffffff;
  uStack_68 = 0;
  puStack_88 = puVar8;
  uStack_78 = param_3;
  FUN_10972a6a4();
  uVar3 = (*(uint *)(lVar6 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 4) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar11 = 0;
    do {
      uVar2 = *(uint *)(lVar6 + 8 + uVar11 * 8);
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      puVar1 = (ushort *)&UNK_10dfe4888;
      if (uVar2 != 0) {
        puVar1 = (ushort *)(lVar6 + (ulong)uVar2);
      }
      uVar2 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
      if (uVar2 == 0) goto LAB_10970129c;
      bVar5 = false;
      puVar9 = (undefined *)((long)puVar1 + 5);
      uVar12 = 1;
      uVar13 = (ulong)uVar2;
      do {
        uVar4 = (*(uint *)(puVar9 + -3) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar9 + -3) & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        puVar8 = (ushort *)&UNK_10dfe4888;
        if (uVar4 != 0) {
          puVar8 = (ushort *)((long)puVar1 + (ulong)uVar4);
        }
        FUN_10972a750(puVar8,param_3,param_4,&puStack_88);
        if (((ulong)puVar8 & 1) == 0) break;
        puVar9 = puVar9 + 4;
        bVar5 = uVar2 <= uVar12;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      if (bVar5) goto LAB_10970129c;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
    uVar11 = 0xffffffff;
LAB_10970129c:
    uVar10 = (undefined4)uVar11;
  }
  *param_5 = uVar10;
  return;
}



/* Entry: 1097012cc; end: 109701337;  */

byte * FUN_1097012cc(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  if (CONCAT11(*param_1,param_1[1]) == 1) {
    pbVar2 = &UNK_10dfe4888;
    if ((0x10002 < ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3] |
                   (uint)param_1[2] << 8)) &&
       (uVar1 = (*(uint *)(param_1 + 0xe) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xe) & 0xff00ff) << 8, uVar1 = uVar1 >> 0x10 | uVar1 << 0x10,
       uVar1 != 0)) {
      pbVar2 = param_1 + uVar1;
    }
  }
  else {
    pbVar2 = &UNK_10dfe4888;
  }
  return pbVar2;
}



/* Entry: 109701338; end: 109701397;  */

bool FUN_109701338(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x120);
  FUN_10972c6ec();
  pcVar1 = "";
  if ((char *)*puVar3 != (char *)0x0) {
    pcVar1 = (char *)*puVar3;
  }
  pcVar2 = "";
  if (3 < *(uint *)(pcVar1 + 0x18)) {
    pcVar2 = *(char **)(pcVar1 + 0x10);
  }
  return (pcVar2[1] != '\0' || *pcVar2 != '\0') || (pcVar2[2] != '\0' || pcVar2[3] != '\0');
}



/* Entry: 109701398; end: 109701453;  */

undefined * FUN_109701398(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(uint *)(param_1 + 1) <= (uint)param_2) {
    return (undefined *)0x0;
  }
  puVar4 = *(undefined **)(param_1[2] + (param_2 & 0xffffffff) * 8);
  if (puVar4 == (undefined *)0x0) {
    do {
      puVar4 = &UNK_10dfe4888;
      if ((undefined *)*param_1 != (undefined *)0x0) {
        puVar4 = (undefined *)*param_1;
      }
      puVar5 = &UNK_10dfe4888;
      if (3 < *(uint *)(puVar4 + 0x18)) {
        puVar5 = *(undefined **)(puVar4 + 0x10);
      }
      func_0x00010972a6f4(puVar5,param_2);
      FUN_109730ee8();
      if (puVar5 == (undefined *)0x0) {
        return (undefined *)0x0;
      }
      plVar1 = (long *)(param_1[2] + (param_2 & 0xffffffff) * 8);
      if (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = (long)puVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return puVar5;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free();
      puVar4 = *(undefined **)(param_1[2] + (param_2 & 0xffffffff) * 8);
    } while (puVar4 == (undefined *)0x0);
  }
  return puVar4;
}


