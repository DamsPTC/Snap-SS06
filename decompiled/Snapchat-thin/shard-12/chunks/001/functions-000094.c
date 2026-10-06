/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d6b15c; end: 108d6b1d3;  */

undefined8 FUN_108d6b15c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_108d67440(uVar1);
    func_0x000108d60660(lVar2,param_1);
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar1;
}



/* Entry: 108d6b1d4; end: 108d6b1df;  */

uint FUN_108d6b1d4(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    if (((int)(param_4 | (uint)param_3) < 0) ||
       ((long)*(int *)(param_1 + 4) < (long)((ulong)param_4 + (param_3 & 0xffffffff)))) {
      uVar6 = 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar6 = 4;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x10);
        lVar4 = *plVar3;
        if ((*(char *)(lVar4 + 0x11) != '\0') &&
           (*(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1, *(char *)(lVar4 + 0x12) == '\0')) {
          FUN_108d7f528(lVar4);
          plVar3 = *(long **)(param_1 + 0x10);
        }
        FUN_108d6b39c(plVar3,*(int *)(param_1 + 8) + param_4,param_3,param_2);
        uVar6 = (uint)plVar3;
        lVar4 = **(long **)(param_1 + 0x10);
        if (*(char *)(lVar4 + 0x11) != '\0') {
          iVar1 = *(int *)(lVar4 + 0x14) + -1;
          *(int *)(lVar4 + 0x14) = iVar1;
          if (iVar1 == 0) {
            FUN_108d7f5fc();
          }
        }
        if (uVar6 == 4) {
          func_0x000108d674fc(lVar2);
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        else {
          *(uint *)(lVar2 + 0x84) = uVar6;
        }
      }
    }
    *(uint *)(lVar5 + 0x44) = uVar6;
    lVar2 = *(long *)(lVar5 + 0x140);
    if (lVar2 != 0) {
      if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar2 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
    if ((uVar6 == 0xc0a) || (*(char *)(lVar5 + 0x51) != '\0')) {
      FUN_108d80e10(lVar5);
      uVar6 = 7;
    }
    else {
      uVar6 = *(uint *)(lVar5 + 0x48) & uVar6;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar6;
}



/* Entry: 108d6b1e0; end: 108d6b39b;  */

uint FUN_108d6b1e0(long param_1,undefined8 param_2,ulong param_3,uint param_4,code *param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    if (((int)(param_4 | (uint)param_3) < 0) ||
       ((long)*(int *)(param_1 + 4) < (long)((ulong)param_4 + (param_3 & 0xffffffff)))) {
      uVar6 = 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar6 = 4;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x10);
        lVar4 = *plVar3;
        if ((*(char *)(lVar4 + 0x11) != '\0') &&
           (*(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1, *(char *)(lVar4 + 0x12) == '\0')) {
          FUN_108d7f528(lVar4);
          plVar3 = *(long **)(param_1 + 0x10);
        }
        (*param_5)(plVar3,*(int *)(param_1 + 8) + param_4,param_3,param_2);
        uVar6 = (uint)plVar3;
        lVar4 = **(long **)(param_1 + 0x10);
        if (*(char *)(lVar4 + 0x11) != '\0') {
          iVar1 = *(int *)(lVar4 + 0x14) + -1;
          *(int *)(lVar4 + 0x14) = iVar1;
          if (iVar1 == 0) {
            FUN_108d7f5fc();
          }
        }
        if (uVar6 == 4) {
          func_0x000108d674fc(lVar2);
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        else {
          *(uint *)(lVar2 + 0x84) = uVar6;
        }
      }
    }
    *(uint *)(lVar5 + 0x44) = uVar6;
    lVar2 = *(long *)(lVar5 + 0x140);
    if (lVar2 != 0) {
      if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar2 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
    if ((uVar6 == 0xc0a) || (*(char *)(lVar5 + 0x51) != '\0')) {
      FUN_108d80e10(lVar5);
      uVar6 = 7;
    }
    else {
      uVar6 = *(uint *)(lVar5 + 0x48) & uVar6;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar6;
}



/* Entry: 108d6b39c; end: 108d6b40f;  */

long * FUN_108d6b39c(long *param_1,uint param_2,int param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lStack_70;
  uint uStack_64;
  
  if (*(byte *)((long)param_1 + 0x6d) == 0) {
    return (long *)0x4;
  }
  if ((2 < *(byte *)((long)param_1 + 0x6d)) &&
     (plVar12 = param_1, func_0x000108d8dc64(), (int)plVar12 != 0)) {
    return plVar12;
  }
  lVar13 = param_1[(long)(short)param_1[0xe] + 0x14];
  plVar12 = (long *)param_1[1];
  if ((short)param_1[9] == 0) {
    puVar1 = (undefined1 *)
             (*(long *)(lVar13 + 0x60) +
             (ulong)*(ushort *)((long)param_1 + (long)(short)param_1[0xe] * 2 + 0x72) * 2);
    FUN_108d7cec4(lVar13,*(long *)(lVar13 + 0x50) +
                         (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar13 + 0x14)),
                  param_1 + 6);
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 2;
  }
  lVar10 = param_1[7];
  uVar3 = *(ushort *)((long)param_1 + 0x44);
  if (*(long *)(lVar13 + 0x50) + (ulong)*(uint *)(plVar12 + 7) < lVar10 + (ulong)uVar3)
  goto LAB_108d7d500;
  uVar9 = (uint)uVar3;
  uVar11 = param_2 - uVar9;
  if (param_2 < uVar9) {
    iVar2 = uVar9 - param_2;
    if (param_3 + param_2 <= (uint)uVar3) {
      iVar2 = param_3;
    }
    plVar8 = (long *)(lVar10 + (ulong)param_2);
    FUN_108d7d550(plVar8,param_4,iVar2,0,*(undefined8 *)(lVar13 + 0x68));
    uVar11 = 0;
    param_3 = param_3 - iVar2;
    param_4 = param_4 + iVar2;
    if ((int)plVar8 == 0) goto LAB_108d7d320;
  }
  else {
    plVar8 = (long *)0x0;
LAB_108d7d320:
    if (param_3 != 0) {
      uVar4 = (int)plVar12[7] - 4;
      uVar9 = *(uint *)(lVar10 + (ulong)*(ushort *)((long)param_1 + 0x44));
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      uStack_64 = uVar9;
      if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) == 0) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = ((((int)plVar12[7] - (uint)*(ushort *)((long)param_1 + 0x44)) + (int)param_1[8]) -
                  5) / uVar4;
        }
        lVar13 = param_1[5];
        if ((int)uVar5 <= *(int *)((long)param_1 + 100)) {
LAB_108d7d38c:
          _bzero();
          *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
          goto LAB_108d7d3ac;
        }
        FUN_108d63588(lVar13,-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar5 << 1) << 2);
        if (lVar13 != 0) {
          *(uint *)((long)param_1 + 100) = uVar5 << 1;
          param_1[5] = lVar13;
          goto LAB_108d7d38c;
        }
        bVar7 = false;
        plVar8 = (long *)0x7;
      }
      else {
LAB_108d7d3ac:
        plVar8 = (long *)0x0;
        bVar7 = true;
      }
      if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) == 0) {
LAB_108d7d3dc:
        lVar13 = 0;
      }
      else {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar11 / uVar4;
        }
        if (*(int *)(param_1[5] + (ulong)uVar5 * 4) == 0) goto LAB_108d7d3dc;
        lVar13 = (long)(int)uVar5;
        uVar9 = *(uint *)(param_1[5] + (long)(int)uVar5 * 4);
        uVar11 = uVar11 - uVar5 * uVar4;
        uStack_64 = uVar9;
      }
      bVar6 = false;
      if (uVar9 != 0) {
        bVar6 = bVar7;
      }
      if (bVar6) {
        lVar13 = lVar13 << 2;
        do {
          if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) != 0) {
            *(uint *)(param_1[5] + lVar13) = uVar9;
          }
          if (uVar11 < uVar4) {
            iVar2 = uVar4 - uVar11;
            if (param_3 + uVar11 <= uVar4) {
              iVar2 = param_3;
            }
            plVar8 = (long *)*plVar12;
            FUN_108d5fcfc(plVar8,uVar9,&lStack_70,2);
            lVar10 = lStack_70;
            if ((int)plVar8 == 0) {
              uVar9 = **(uint **)(lStack_70 + 8);
              uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
              uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
              plVar8 = (long *)((long)*(uint **)(lStack_70 + 8) + (ulong)(uVar11 + 4));
              uStack_64 = uVar9;
              FUN_108d7d550(plVar8,param_4,iVar2,0,lStack_70);
              func_0x000108d787d8(lVar10);
              uVar11 = 0;
            }
            param_3 = param_3 - iVar2;
            param_4 = param_4 + iVar2;
          }
          else {
            uVar5 = *(uint *)(param_1[5] + lVar13 + 4);
            if (uVar5 == 0) {
              plVar8 = plVar12;
              FUN_108d7d5b0(plVar12,uVar9,0,&uStack_64);
              uVar11 = uVar11 - uVar4;
              uVar9 = uStack_64;
            }
            else {
              plVar8 = (long *)0x0;
              uVar11 = uVar11 - uVar4;
              uStack_64 = uVar5;
              uVar9 = uVar5;
            }
          }
        } while ((((int)plVar8 == 0) && (param_3 != 0)) && (lVar13 = lVar13 + 4, uVar9 != 0));
      }
    }
  }
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  if (param_3 == 0) {
    return plVar8;
  }
LAB_108d7d500:
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return (long *)0xb;
}



/* Entry: 108d6b410; end: 108d6b41b;  */

uint FUN_108d6b410(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    if (((int)(param_4 | (uint)param_3) < 0) ||
       ((long)*(int *)(param_1 + 4) < (long)((ulong)param_4 + (param_3 & 0xffffffff)))) {
      uVar6 = 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar6 = 4;
      }
      else {
        plVar3 = *(long **)(param_1 + 0x10);
        lVar4 = *plVar3;
        if ((*(char *)(lVar4 + 0x11) != '\0') &&
           (*(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1, *(char *)(lVar4 + 0x12) == '\0')) {
          FUN_108d7f528(lVar4);
          plVar3 = *(long **)(param_1 + 0x10);
        }
        FUN_108d6b41c(plVar3,*(int *)(param_1 + 8) + param_4,param_3,param_2);
        uVar6 = (uint)plVar3;
        lVar4 = **(long **)(param_1 + 0x10);
        if (*(char *)(lVar4 + 0x11) != '\0') {
          iVar1 = *(int *)(lVar4 + 0x14) + -1;
          *(int *)(lVar4 + 0x14) = iVar1;
          if (iVar1 == 0) {
            FUN_108d7f5fc();
          }
        }
        if (uVar6 == 4) {
          func_0x000108d674fc(lVar2);
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        else {
          *(uint *)(lVar2 + 0x84) = uVar6;
        }
      }
    }
    *(uint *)(lVar5 + 0x44) = uVar6;
    lVar2 = *(long *)(lVar5 + 0x140);
    if (lVar2 != 0) {
      if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar2 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
    if ((uVar6 == 0xc0a) || (*(char *)(lVar5 + 0x51) != '\0')) {
      FUN_108d80e10(lVar5);
      uVar6 = 7;
    }
    else {
      uVar6 = *(uint *)(lVar5 + 0x48) & uVar6;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar6;
}



/* Entry: 108d6b41c; end: 108d6b4bb;  */

long * FUN_108d6b41c(long *param_1,uint param_2,int param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lStack_70;
  uint uStack_64;
  
  bVar9 = *(byte *)((long)param_1 + 0x6d);
  if (2 < bVar9) {
    plVar13 = param_1;
    func_0x000108d8dc64();
    if ((int)plVar13 != 0) {
      return plVar13;
    }
    bVar9 = *(byte *)((long)param_1 + 0x6d);
  }
  if (bVar9 != 1) {
    return (long *)0x4;
  }
  FUN_108d7ca08(*(undefined8 *)(param_1[1] + 0x10),(int)param_1[0xc],param_1);
  if ((*(byte *)((long)param_1 + 0x6c) & 1) == 0) {
    return (long *)0x8;
  }
  lVar14 = param_1[(long)(short)param_1[0xe] + 0x14];
  plVar13 = (long *)param_1[1];
  if ((short)param_1[9] == 0) {
    puVar1 = (undefined1 *)
             (*(long *)(lVar14 + 0x60) +
             (ulong)*(ushort *)((long)param_1 + (long)(short)param_1[0xe] * 2 + 0x72) * 2);
    FUN_108d7cec4(lVar14,*(long *)(lVar14 + 0x50) +
                         (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar14 + 0x14)),
                  param_1 + 6);
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 2;
  }
  lVar11 = param_1[7];
  uVar3 = *(ushort *)((long)param_1 + 0x44);
  if (*(long *)(lVar14 + 0x50) + (ulong)*(uint *)(plVar13 + 7) < lVar11 + (ulong)uVar3)
  goto LAB_108d7d500;
  uVar10 = (uint)uVar3;
  uVar12 = param_2 - uVar10;
  if (param_2 < uVar10) {
    iVar2 = uVar10 - param_2;
    if (param_3 + param_2 <= (uint)uVar3) {
      iVar2 = param_3;
    }
    plVar8 = (long *)(lVar11 + (ulong)param_2);
    FUN_108d7d550(plVar8,param_4,iVar2,1,*(undefined8 *)(lVar14 + 0x68));
    uVar12 = 0;
    param_3 = param_3 - iVar2;
    param_4 = param_4 + iVar2;
    if ((int)plVar8 == 0) goto LAB_108d7d320;
  }
  else {
    plVar8 = (long *)0x0;
LAB_108d7d320:
    if (param_3 != 0) {
      uVar4 = (int)plVar13[7] - 4;
      uVar10 = *(uint *)(lVar11 + (ulong)*(ushort *)((long)param_1 + 0x44));
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      uStack_64 = uVar10;
      if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) == 0) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = ((((int)plVar13[7] - (uint)*(ushort *)((long)param_1 + 0x44)) + (int)param_1[8]) -
                  5) / uVar4;
        }
        lVar14 = param_1[5];
        if ((int)uVar5 <= *(int *)((long)param_1 + 100)) {
LAB_108d7d38c:
          _bzero();
          *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
          goto LAB_108d7d3ac;
        }
        FUN_108d63588(lVar14,-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar5 << 1) << 2);
        if (lVar14 != 0) {
          *(uint *)((long)param_1 + 100) = uVar5 << 1;
          param_1[5] = lVar14;
          goto LAB_108d7d38c;
        }
        bVar7 = false;
        plVar8 = (long *)0x7;
      }
      else {
LAB_108d7d3ac:
        plVar8 = (long *)0x0;
        bVar7 = true;
      }
      if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) == 0) {
LAB_108d7d3dc:
        lVar14 = 0;
      }
      else {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar12 / uVar4;
        }
        if (*(int *)(param_1[5] + (ulong)uVar5 * 4) == 0) goto LAB_108d7d3dc;
        lVar14 = (long)(int)uVar5;
        uVar10 = *(uint *)(param_1[5] + (long)(int)uVar5 * 4);
        uVar12 = uVar12 - uVar5 * uVar4;
        uStack_64 = uVar10;
      }
      bVar6 = false;
      if (uVar10 != 0) {
        bVar6 = bVar7;
      }
      if (bVar6) {
        lVar14 = lVar14 << 2;
        do {
          if ((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) != 0) {
            *(uint *)(param_1[5] + lVar14) = uVar10;
          }
          if (uVar12 < uVar4) {
            iVar2 = uVar4 - uVar12;
            if (param_3 + uVar12 <= uVar4) {
              iVar2 = param_3;
            }
            plVar8 = (long *)*plVar13;
            FUN_108d5fcfc(plVar8,uVar10,&lStack_70,0);
            lVar11 = lStack_70;
            if ((int)plVar8 == 0) {
              uVar10 = **(uint **)(lStack_70 + 8);
              uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
              uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
              plVar8 = (long *)((long)*(uint **)(lStack_70 + 8) + (ulong)(uVar12 + 4));
              uStack_64 = uVar10;
              FUN_108d7d550(plVar8,param_4,iVar2,1,lStack_70);
              func_0x000108d787d8(lVar11);
              uVar12 = 0;
            }
            param_3 = param_3 - iVar2;
            param_4 = param_4 + iVar2;
          }
          else {
            uVar5 = *(uint *)(param_1[5] + lVar14 + 4);
            if (uVar5 == 0) {
              plVar8 = plVar13;
              FUN_108d7d5b0(plVar13,uVar10,0,&uStack_64);
              uVar12 = uVar12 - uVar4;
              uVar10 = uStack_64;
            }
            else {
              plVar8 = (long *)0x0;
              uVar12 = uVar12 - uVar4;
              uStack_64 = uVar5;
              uVar10 = uVar5;
            }
          }
        } while ((((int)plVar8 == 0) && (param_3 != 0)) && (lVar14 = lVar14 + 4, uVar10 != 0));
      }
    }
  }
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  if (param_3 == 0) {
    return plVar8;
  }
LAB_108d7d500:
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return (long *)0xb;
}



/* Entry: 108d6b4bc; end: 108d6b4d7;  */

undefined4 FUN_108d6b4bc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}



/* Entry: 108d6b4d8; end: 108d6b65f;  */

uint FUN_108d6b4d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lStack_38;
  
  if (param_1 == 0) {
    uVar3 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      param_1 = 4;
    }
    else {
      FUN_108d6afb4(param_1,param_2,&lStack_38);
      if ((int)param_1 != 0) {
        puVar1 = (undefined *)0x0;
        if (lStack_38 != 0) {
          puVar1 = &UNK_10f517517;
        }
        FUN_108d65cb8(lVar2,param_1,puVar1);
        func_0x000108d60660(lVar2,lStack_38);
      }
    }
    if (((uint)param_1 == 0xc0a) || (*(char *)(lVar2 + 0x51) != '\0')) {
      FUN_108d80e10(lVar2);
      uVar3 = 7;
    }
    else {
      uVar3 = *(uint *)(lVar2 + 0x48) & (uint)param_1;
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar3;
}



/* Entry: 108d6b660; end: 108d6b683;  */

uint FUN_108d6b660(undefined8 param_1,undefined8 param_2)

{
  FUN_108d6b684(param_1,param_2,&DAT_10dfa0745,0);
  return (uint)param_1 ^ 1;
}



/* Entry: 108d6b684; end: 108d6b9cb;  */

void FUN_108d6b684(char *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char **ppcVar9;
  byte **ppbVar10;
  char *pcVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  ulong uVar15;
  char *pcVar16;
  byte *pbStack_70;
  char *pcStack_68;
  
  iVar12 = (int)param_4;
  uVar15 = param_4;
  if (iVar12 == 0) {
    uVar15 = (ulong)param_3[2];
  }
  pcVar16 = (char *)0x0;
  bVar13 = param_3[1];
  bVar1 = *param_3;
  bVar2 = param_3[3];
  pbStack_70 = param_2;
  pcStack_68 = param_1;
  do {
    while( true ) {
      uVar8 = (uint)&pcStack_68;
      FUN_108d96304();
      if (uVar8 == 0) {
        return;
      }
      if (uVar8 == bVar1) {
        while( true ) {
          ppcVar9 = &pcStack_68;
          FUN_108d96304();
          uVar8 = (uint)ppcVar9;
          if ((uVar8 != bVar1) && (uVar8 != bVar13)) break;
          if (uVar8 == bVar13) {
            iVar7 = (int)&pbStack_70;
            FUN_108d96304();
            if (iVar7 == 0) {
              return;
            }
          }
        }
        if (uVar8 == 0) {
          return;
        }
        if (uVar8 == (uint)uVar15) {
          if (iVar12 == 0) {
            bVar13 = *pbStack_70;
            if (bVar13 == 0) {
              return;
            }
            pcVar16 = pcStack_68 + -1;
            pbVar14 = pbStack_70;
            do {
              pcVar11 = pcVar16;
              FUN_108d6b684(pcVar16,pbVar14,param_3,0);
              if ((int)pcVar11 != 0) {
                return;
              }
              if (bVar13 < 0xc0) {
                pbVar14 = pbVar14 + 1;
                bVar13 = *pbVar14;
              }
              else {
                do {
                  pbVar14 = pbVar14 + 1;
                  bVar13 = *pbVar14;
                } while ((char)bVar13 < -0x40);
              }
            } while (bVar13 != 0);
            return;
          }
          ppcVar9 = &pcStack_68;
          FUN_108d96304();
          if ((int)ppcVar9 == 0) {
            return;
          }
        }
        pcVar16 = pcStack_68;
        uVar8 = (uint)ppcVar9;
        if (0x80 < uVar8) {
          do {
            uVar5 = (uint)&pbStack_70;
            FUN_108d96304();
            if (uVar5 == 0) {
              return;
            }
          } while ((uVar5 != uVar8) ||
                  (pcVar11 = pcVar16, FUN_108d6b684(pcVar16,pbStack_70,param_3,param_4),
                  (int)pcVar11 == 0));
          return;
        }
        uVar5 = uVar8;
        if (bVar2 != 0) {
          uVar5 = uVar8 & (~(uint)(byte)(&UNK_10dfa0749)[(ulong)ppcVar9 & 0xffffffff] | 0xffffffdf);
          uVar8 = (uint)(byte)(&UNK_10dfa05fd)[(ulong)ppcVar9 & 0xffffffff];
        }
        bVar13 = *pbStack_70;
        pbVar14 = pbStack_70;
        while( true ) {
          if (bVar13 == 0) {
            return;
          }
          pbVar14 = pbVar14 + 1;
          if (((uVar8 == bVar13) || (uVar5 == bVar13)) &&
             (pcVar11 = pcVar16, FUN_108d6b684(pcVar16,pbVar14,param_3,param_4), (int)pcVar11 != 0))
          break;
          bVar13 = *pbVar14;
        }
        return;
      }
      if (uVar8 == (uint)uVar15) break;
LAB_108d6b760:
      ppbVar10 = &pbStack_70;
      FUN_108d96304();
      uVar5 = (uint)ppbVar10;
      if ((uVar8 != uVar5) &&
         (((bVar2 == 0 || (0x7f < (uVar5 | uVar8))) ||
          ((&UNK_10dfa05fd)[uVar8] != (&UNK_10dfa05fd)[(ulong)ppbVar10 & 0xffffffff])))) {
        if (uVar8 != bVar13) {
          return;
        }
        if (uVar5 == 0) {
          return;
        }
        if (pcStack_68 == pcVar16) {
          return;
        }
      }
    }
    if (iVar12 != 0) {
      uVar8 = (uint)&pcStack_68;
      FUN_108d96304();
      pcVar16 = pcStack_68;
      if (uVar8 == 0) {
        return;
      }
      goto LAB_108d6b760;
    }
    uVar8 = (uint)&pbStack_70;
    FUN_108d96304();
    if (uVar8 == 0) {
      return;
    }
    ppcVar9 = &pcStack_68;
    FUN_108d96304();
    bVar3 = (int)ppcVar9 == 0x5e;
    if (bVar3) {
      ppcVar9 = &pcStack_68;
      FUN_108d96304();
    }
    if ((int)ppcVar9 != 0x5d) {
      uVar5 = 0;
      bVar4 = false;
      goto LAB_108d6b7cc;
    }
    ppcVar9 = (char **)0x0;
    bVar4 = uVar8 == 0x5d;
    while( true ) {
      while( true ) {
        uVar5 = (uint)ppcVar9;
        ppcVar9 = &pcStack_68;
        FUN_108d96304();
LAB_108d6b7cc:
        uVar6 = (uint)ppcVar9;
        if (uVar6 != 0x2d) break;
        if ((*pcStack_68 == ']' || uVar5 == 0) || (*pcStack_68 == '\0')) goto LAB_108d6b804;
        uVar6 = (uint)&pcStack_68;
        FUN_108d96304();
        ppcVar9 = (char **)0x0;
        if (uVar8 <= uVar6 && uVar5 <= uVar8) {
          bVar4 = true;
        }
      }
      if (uVar6 == 0x5d) break;
      if (uVar6 == 0) {
        return;
      }
LAB_108d6b804:
      if (uVar8 == uVar6) {
        bVar4 = true;
      }
    }
    if (bVar4 == bVar3) {
      return;
    }
  } while( true );
}



/* Entry: 108d6b9cc; end: 108d6ba37;  */

void FUN_108d6b9cc(long param_1)

{
  if ((param_1 == 0) ||
     ((*(int *)(param_1 + 0x5c) != -0x5fd65969 && (FUN_108d6ef54(), (int)param_1 != 0)))) {
    FUN_108d64c00(0x15,&UNK_10f518d7a);
  }
  return;
}



/* Entry: 108d6ba38; end: 108d6ba4b;  */

long FUN_108d6ba38(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  *param_4 = 0;
  lVar1 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)lVar1 == 0)) {
    lVar1 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d62704(param_1);
    lVar1 = param_1;
    FUN_108d96494(param_1,param_2,param_3,1,0,param_4,param_5);
    if ((int)lVar1 == 0x11) {
      FUN_108d67440(*param_4);
      lVar1 = param_1;
      FUN_108d96494(param_1,param_2,param_3,1,0,param_4,param_5);
    }
    func_0x000108d6277c(param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return lVar1;
}



/* Entry: 108d6ba4c; end: 108d6bb4b;  */

undefined * FUN_108d6ba4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    puVar2 = &DAT_10f517a23;
  }
  else {
    lVar1 = param_1;
    FUN_108d6ef54();
    if ((int)lVar1 == 0) {
      FUN_108d64c00(0x15,&UNK_10f51b96f);
      puVar2 = &DAT_10f51b785;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      if (*(char *)(param_1 + 0x51) == '\0') {
        puVar2 = *(undefined **)(param_1 + 0x140);
        FUN_108d67a14(puVar2,1);
        if (puVar2 == (undefined *)0x0) {
          if (*(uint *)(param_1 + 0x44) == 0x204) {
            puVar2 = &UNK_10f51b857;
          }
          else {
            uVar4 = (ulong)*(uint *)(param_1 + 0x44) & 0xff;
            puVar2 = &UNK_10f51b849;
            uVar3 = (uint)uVar4;
            if ((uVar3 < 0x1b) && (uVar3 != 2)) {
              puVar2 = (&PTR_DAT_110ac5208)[uVar4];
            }
          }
        }
      }
      else {
        puVar2 = &DAT_10f517a23;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*pcRam00000001132979a8)();
      }
    }
  }
  return puVar2;
}



/* Entry: 108d6bb4c; end: 108d6bfc7;  */

uint FUN_108d6bb4c(long *param_1,code *param_2,undefined8 *param_3,ulong *param_4)

{
  uint uVar1;
  code cVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  code *pcVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 uStack_68;
  
  if (param_1[3] != 0) {
    (*pcRam0000000113297998)();
  }
  pcVar16 = (code *)*param_1;
  uStack_68 = 0;
  if (param_2 == (code *)0x0) {
    uVar18 = 0;
    if (param_4 != (ulong *)0x0) goto LAB_108d6bbac;
LAB_108d6bbd4:
    if ((*(byte *)((long)param_1 + 0x2e) >> 6 & 1) != 0) {
LAB_108d6bbdc:
      uVar1 = uVar18 + 300;
      puVar17 = (undefined8 *)&UNK_10f518dbc;
      if (param_3 != (undefined8 *)0x0) {
        puVar17 = param_3;
      }
      pcVar6 = pcVar16;
      (**(code **)(pcVar16 + 0x48))(pcVar16,param_2);
      if (pcVar6 == (code *)0x0) {
        puVar9 = &UNK_10f518dd3;
        FUN_108d5e0b4();
        if (puVar9 != (undefined *)0x0) {
          pcVar6 = pcVar16;
          (**(code **)(pcVar16 + 0x48))(pcVar16,puVar9);
          func_0x000108d5e198();
          iVar5 = (int)puVar9;
          if (pcVar6 == (code *)0x0) {
            if (param_4 != (ulong *)0x0) {
              FUN_108d62be4();
              if (iVar5 == 0) {
                uVar11 = (ulong)uVar1;
                FUN_108d60848();
                *param_4 = uVar11;
                if (uVar11 != 0) {
                  func_0x000108d64bd8((ulong)uVar1,uVar11,&UNK_10f518dd9);
                  (**(code **)(pcVar16 + 0x50))(pcVar16,uVar18 + 299,uVar11);
                }
              }
              else {
                *param_4 = 0;
              }
            }
            goto LAB_108d6bf28;
          }
          goto LAB_108d6bc08;
        }
      }
      else {
LAB_108d6bc08:
        pcVar7 = pcVar16;
        (**(code **)(pcVar16 + 0x58))(pcVar16,pcVar6,puVar17);
        if (param_3 == (undefined8 *)0x0 && pcVar7 == (code *)0x0) {
          if (param_2 == (code *)0x0) {
            uVar18 = 0;
          }
          else {
            pcVar7 = param_2;
            _strlen();
            uVar18 = (uint)pcVar7 & 0x3fffffff;
          }
          iVar5 = (int)pcVar7;
          FUN_108d62be4();
          if (iVar5 == 0) {
            puVar10 = (undefined8 *)(ulong)(uVar18 + 0x1e);
            FUN_108d60848();
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x5f336870636c7173;
              uVar11 = (ulong)uVar18;
              do {
                uVar4 = uVar11 - 1;
                if ((long)uVar11 < 1) {
                  uVar18 = 0;
                  uVar13 = 0;
                  if (param_2 == (code *)0x0) goto LAB_108d6be28;
                  goto LAB_108d6bdcc;
                }
                lVar14 = uVar11 - 1;
                uVar11 = uVar4;
              } while (param_2[lVar14] != (code)0x2f);
              uVar18 = (int)uVar4 + 1;
LAB_108d6bdcc:
              lVar14 = 0;
              do {
                if ((ulong)(byte)param_2[lVar14 + (ulong)uVar18] == 0) {
                  cVar3 = (&UNK_10dfa05fd)[(byte)(&UNK_10f431562)[lVar14]];
                  cVar15 = '\0';
LAB_108d6be1c:
                  uVar13 = uVar18 + 3;
                  if (cVar15 != cVar3) {
                    uVar13 = uVar18;
                  }
                  goto LAB_108d6be28;
                }
                cVar15 = (&UNK_10dfa05fd)[(byte)param_2[lVar14 + (ulong)uVar18]];
                cVar3 = (&UNK_10dfa05fd)[(byte)(&UNK_10f431562)[lVar14]];
                if (cVar15 != cVar3) goto LAB_108d6be1c;
                lVar14 = lVar14 + 1;
              } while (lVar14 != 3);
              uVar13 = uVar18 + 3;
LAB_108d6be28:
              iVar5 = 8;
              pcVar7 = param_2 + uVar13;
              while( true ) {
                pcVar12 = pcVar7 + 1;
                cVar2 = *pcVar7;
                if ((cVar2 == (code)0x0) || (cVar2 == (code)0x2e)) break;
                pcVar7 = pcVar12;
                if (((byte)(&UNK_10dfa0749)[(byte)cVar2] >> 1 & 1) != 0) {
                  *(undefined *)((long)puVar10 + (long)iVar5) =
                       (&UNK_10dfa05fd)[(long)(char)cVar2 & 0xffffffff];
                  iVar5 = iVar5 + 1;
                }
              }
              *(undefined2 *)((undefined4 *)((long)puVar10 + (long)iVar5) + 1) = 0x74;
              *(undefined4 *)((long)puVar10 + (long)iVar5) = 0x696e695f;
              pcVar7 = pcVar16;
              (**(code **)(pcVar16 + 0x58))(pcVar16,pcVar6,puVar10);
              puVar17 = puVar10;
              if (pcVar7 != (code *)0x0) goto LAB_108d6bc44;
              goto LAB_108d6bea8;
            }
          }
          (**(code **)(pcVar16 + 0x60))(pcVar16,pcVar6);
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (pcVar7 == (code *)0x0) {
LAB_108d6bea8:
            uVar18 = (uint)puVar17;
            if (param_4 != (ulong *)0x0) {
              _strlen();
              uVar13 = uVar18;
              FUN_108d62be4();
              if (uVar13 == 0) {
                uVar1 = (uVar18 & 0x3fffffff) + uVar1;
                uVar11 = (ulong)uVar1;
                FUN_108d60848();
                *param_4 = uVar11;
                if (uVar11 != 0) {
                  func_0x000108d64bd8((ulong)uVar1,uVar11,&UNK_10f518dfc);
                  (**(code **)(pcVar16 + 0x50))(pcVar16,uVar1 - 1,uVar11);
                }
              }
              else {
                *param_4 = 0;
              }
            }
            (**(code **)(pcVar16 + 0x60))(pcVar16,pcVar6);
            func_0x000108d5e198(puVar10);
            goto LAB_108d6bf28;
          }
LAB_108d6bc44:
          func_0x000108d5e198(puVar10);
          plVar8 = param_1;
          (*pcVar7)(param_1,&uStack_68,&PTR_DAT_110ac4368);
          if ((int)plVar8 != 0) {
            if (param_4 != (ulong *)0x0) {
              puVar9 = &UNK_10f518e27;
              FUN_108d5e0b4();
              *param_4 = (ulong)puVar9;
            }
            func_0x000108d5e198(uStack_68);
            (**(code **)(pcVar16 + 0x60))(pcVar16,pcVar6);
            goto LAB_108d6bf28;
          }
          plVar8 = param_1;
          FUN_108d68fc8(param_1,(long)(int)param_1[0x17] * 8 + 8);
          if (plVar8 != (long *)0x0) {
            if (0 < (int)*(uint *)(param_1 + 0x17)) {
              _memcpy(plVar8,param_1[0x18],(ulong)*(uint *)(param_1 + 0x17) << 3);
            }
            func_0x000108d60660(param_1,param_1[0x18]);
            uVar18 = 0;
            param_1[0x18] = (long)plVar8;
            lVar14 = param_1[0x17];
            *(int *)(param_1 + 0x17) = (int)lVar14 + 1;
            plVar8[(int)lVar14] = (long)pcVar6;
            goto LAB_108d6bf2c;
          }
        }
      }
      uVar18 = 7;
      goto LAB_108d6bf2c;
    }
  }
  else {
    pcVar6 = param_2;
    _strlen();
    uVar18 = (uint)pcVar6 & 0x3fffffff;
    if (param_4 == (ulong *)0x0) goto LAB_108d6bbd4;
LAB_108d6bbac:
    *param_4 = 0;
    if ((*(byte *)((long)param_1 + 0x2e) >> 6 & 1) != 0) goto LAB_108d6bbdc;
    puVar9 = &UNK_10f518dad;
    FUN_108d5e0b4();
    *param_4 = (ulong)puVar9;
  }
LAB_108d6bf28:
  uVar18 = 1;
LAB_108d6bf2c:
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    uVar18 = *(uint *)(param_1 + 9) & uVar18;
  }
  else {
    FUN_108d80e10(param_1);
    uVar18 = 7;
  }
  if (param_1[3] != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar18;
}



/* Entry: 108d6bfc8; end: 108d6c0f7;  */

long FUN_108d6bfc8(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = param_1;
  FUN_108d62be4();
  if ((int)lVar4 != 0) {
    return lVar4;
  }
  if (iRam0000000113297914 == 0) {
    lVar5 = 0;
LAB_108d6c02c:
    iVar3 = (int)lVar4;
    bVar1 = true;
  }
  else {
    lVar5 = 2;
    (*pcRam0000000113297988)();
    lVar4 = 0;
    if (lVar5 == 0) goto LAB_108d6c02c;
    lVar4 = lVar5;
    (*pcRam0000000113297998)();
    iVar3 = (int)lVar4;
    bVar1 = false;
  }
  lVar4 = lRam000000011372e708;
  uVar2 = uRam000000011372e6d0;
  if (uRam000000011372e6d0 == 0) {
    uVar6 = 0;
LAB_108d6c068:
    if ((uint)uVar6 != uRam000000011372e6d0) {
      lVar7 = 0;
      goto joined_r0x000108d6c090;
    }
  }
  else {
    uVar6 = 0;
    do {
      if (*(long *)(lRam000000011372e708 + uVar6 * 8) == param_1) goto LAB_108d6c068;
      uVar6 = uVar6 + 1;
    } while (uRam000000011372e6d0 != uVar6);
  }
  FUN_108d62be4();
  if ((iVar3 == 0) && (FUN_108d63588(lVar4,(ulong)(uVar2 + 1) << 3), lVar4 != 0)) {
    lVar7 = 0;
    lRam000000011372e708 = lVar4;
    *(long *)(lVar4 + (ulong)uRam000000011372e6d0 * 8) = param_1;
    uRam000000011372e6d0 = uRam000000011372e6d0 + 1;
  }
  else {
    lVar7 = 7;
  }
joined_r0x000108d6c090:
  if (!bVar1) {
    (*pcRam00000001132979a8)(lVar5);
  }
  return lVar7;
}



/* Entry: 108d6c0f8; end: 108d6c1bf;  */

undefined8 FUN_108d6c0f8(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (iRam0000000113297914 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 2;
    (*pcRam0000000113297988)();
    if (lVar2 != 0) {
      (*pcRam0000000113297998)(lVar2);
      bVar1 = false;
      goto LAB_108d6c14c;
    }
  }
  bVar1 = true;
LAB_108d6c14c:
  uVar3 = (ulong)uRam000000011372e6d0;
  plVar4 = (long *)(lRam000000011372e708 + uVar3 * 8);
  do {
    iVar5 = (int)uVar3;
    uVar3 = (ulong)(iVar5 - 1);
    if (iVar5 < 1) {
      uVar6 = 0;
      if (bVar1) {
        return 0;
      }
      goto LAB_108d6c1a0;
    }
    plVar4 = plVar4 + -1;
  } while (*plVar4 != param_1);
  uRam000000011372e6d0 = uRam000000011372e6d0 - 1;
  *plVar4 = *(long *)(lRam000000011372e708 + (ulong)uRam000000011372e6d0 * 8);
  uVar6 = 1;
  if (!bVar1) {
LAB_108d6c1a0:
    (*pcRam00000001132979a8)(lVar2);
  }
  return uVar6;
}



/* Entry: 108d6c1c0; end: 108d6c263;  */

void FUN_108d6c1c0(int param_1)

{
  long lVar1;
  bool bVar2;
  
  FUN_108d62be4();
  if (param_1 != 0) {
    return;
  }
  if (iRam0000000113297914 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)(lVar1);
      bVar2 = false;
      goto LAB_108d6c21c;
    }
  }
  bVar2 = true;
LAB_108d6c21c:
  func_0x000108d5e198(uRam000000011372e708);
  uRam000000011372e708 = 0;
  uRam000000011372e6d0 = 0;
  if (bVar2) {
    uRam000000011372e708 = 0;
    uRam000000011372e6d0 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d6c260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000001132979a8)(lVar1);
  return;
}



/* Entry: 108d6c264; end: 108d6c277;  */

long FUN_108d6c264(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  *param_4 = 0;
  lVar1 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)lVar1 == 0)) {
    lVar1 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d62704(param_1);
    lVar1 = param_1;
    FUN_108d96494(param_1,param_2,param_3,0,0,param_4,param_5);
    if ((int)lVar1 == 0x11) {
      FUN_108d67440(*param_4);
      lVar1 = param_1;
      FUN_108d96494(param_1,param_2,param_3,0,0,param_4,param_5);
    }
    func_0x000108d6277c(param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return lVar1;
}



/* Entry: 108d6c278; end: 108d6c39b;  */

long FUN_108d6c278(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  
  *param_6 = 0;
  lVar1 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)lVar1 == 0)) {
    lVar1 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d62704(param_1);
    lVar1 = param_1;
    FUN_108d96494(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((int)lVar1 == 0x11) {
      FUN_108d67440(*param_6);
      lVar1 = param_1;
      FUN_108d96494(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    func_0x000108d6277c(param_1);
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return lVar1;
}



/* Entry: 108d6c39c; end: 108d6c3ab;  */

uint FUN_108d6c39c(ulong param_1,long param_2,ulong param_3,undefined8 *param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  long lStack_58;
  
  lStack_58 = 0;
  *param_4 = 0;
  uVar4 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)uVar4 == 0)) {
    uVar3 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    iVar8 = (int)param_3;
    if ((-1 < iVar8) && (param_3 = 0, iVar8 != 0)) {
      pcVar6 = (char *)(param_2 + 1);
      do {
        if ((pcVar6[-1] == '\0') && (*pcVar6 == '\0')) break;
        uVar3 = (int)param_3 + 2;
        param_3 = (ulong)uVar3;
        pcVar6 = pcVar6 + 2;
      } while ((int)uVar3 < iVar8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    uVar4 = param_1;
    FUN_108d6e504(param_1,param_2,param_3);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = param_1;
      FUN_108d6c278(param_1,uVar4,0xffffffff,0,0,param_4,&lStack_58);
      uVar3 = (uint)uVar5;
      if ((param_5 != (long *)0x0) && (lStack_58 != 0)) {
        uVar5 = uVar4;
        FUN_108d96950(uVar4,(int)lStack_58 - (int)uVar4);
        lVar7 = param_2;
        if (0 < (int)uVar5) {
          do {
            lVar1 = 4;
            if ((*(byte *)(lVar7 + 1) & 0xf8) != 0xd8) {
              lVar1 = 2;
            }
            lVar7 = lVar7 + lVar1;
            uVar2 = (int)uVar5 - 1;
            uVar5 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
        *param_5 = param_2 + ((int)lVar7 - (int)param_2);
      }
    }
    func_0x000108d60660(param_1,uVar4);
    if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
      FUN_108d80e10(param_1);
      uVar3 = 7;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x48) & uVar3;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar3;
}



/* Entry: 108d6c3ac; end: 108d6c56f;  */

uint FUN_108d6c3ac(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
                  long *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  long lStack_58;
  
  lStack_58 = 0;
  *param_5 = 0;
  uVar4 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)uVar4 == 0)) {
    uVar3 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    iVar8 = (int)param_3;
    if ((-1 < iVar8) && (param_3 = 0, iVar8 != 0)) {
      pcVar6 = (char *)(param_2 + 1);
      do {
        if ((pcVar6[-1] == '\0') && (*pcVar6 == '\0')) break;
        uVar3 = (int)param_3 + 2;
        param_3 = (ulong)uVar3;
        pcVar6 = pcVar6 + 2;
      } while ((int)uVar3 < iVar8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    uVar4 = param_1;
    FUN_108d6e504(param_1,param_2,param_3);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = param_1;
      FUN_108d6c278(param_1,uVar4,0xffffffff,param_4,0,param_5,&lStack_58);
      uVar3 = (uint)uVar5;
      if ((param_6 != (long *)0x0) && (lStack_58 != 0)) {
        uVar5 = uVar4;
        FUN_108d96950(uVar4,(int)lStack_58 - (int)uVar4);
        lVar7 = param_2;
        if (0 < (int)uVar5) {
          do {
            lVar1 = 4;
            if ((*(byte *)(lVar7 + 1) & 0xf8) != 0xd8) {
              lVar1 = 2;
            }
            lVar7 = lVar7 + lVar1;
            uVar2 = (int)uVar5 - 1;
            uVar5 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
        *param_6 = param_2 + ((int)lVar7 - (int)param_2);
      }
    }
    func_0x000108d60660(param_1,uVar4);
    if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
      FUN_108d80e10(param_1);
      uVar3 = 7;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x48) & uVar3;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar3;
}



/* Entry: 108d6c570; end: 108d6c57f;  */

uint FUN_108d6c570(ulong param_1,long param_2,ulong param_3,undefined8 *param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  long lStack_58;
  
  lStack_58 = 0;
  *param_4 = 0;
  uVar4 = param_1;
  FUN_108d6b9cc();
  if ((param_2 == 0) || ((int)uVar4 == 0)) {
    uVar3 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    iVar8 = (int)param_3;
    if ((-1 < iVar8) && (param_3 = 0, iVar8 != 0)) {
      pcVar6 = (char *)(param_2 + 1);
      do {
        if ((pcVar6[-1] == '\0') && (*pcVar6 == '\0')) break;
        uVar3 = (int)param_3 + 2;
        param_3 = (ulong)uVar3;
        pcVar6 = pcVar6 + 2;
      } while ((int)uVar3 < iVar8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    uVar4 = param_1;
    FUN_108d6e504(param_1,param_2,param_3);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = param_1;
      FUN_108d6c278(param_1,uVar4,0xffffffff,1,0,param_4,&lStack_58);
      uVar3 = (uint)uVar5;
      if ((param_5 != (long *)0x0) && (lStack_58 != 0)) {
        uVar5 = uVar4;
        FUN_108d96950(uVar4,(int)lStack_58 - (int)uVar4);
        lVar7 = param_2;
        if (0 < (int)uVar5) {
          do {
            lVar1 = 4;
            if ((*(byte *)(lVar7 + 1) & 0xf8) != 0xd8) {
              lVar1 = 2;
            }
            lVar7 = lVar7 + lVar1;
            uVar2 = (int)uVar5 - 1;
            uVar5 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
        *param_5 = param_2 + ((int)lVar7 - (int)param_2);
      }
    }
    func_0x000108d60660(param_1,uVar4);
    if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
      FUN_108d80e10(param_1);
      uVar3 = 7;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x48) & uVar3;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar3;
}



/* Entry: 108d6c580; end: 108d6c8c3;  */

ulong FUN_108d6c580(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                   undefined4 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar5;
  ulong *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  long lVar4;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  lStack_60 = 0;
  uStack_50 = 0x100000000;
  uStack_58 = 0x14;
  uStack_48 = 0;
  uVar5 = param_1;
  FUN_108d62be4();
  if ((int)uVar5 == 0) {
    puVar2 = (ulong *)0xa0;
    FUN_108d60848();
    if (puVar2 != (ulong *)0x0) {
      *puVar2 = 0;
      uVar5 = param_1;
      puStack_68 = puVar2;
      FUN_108d61210(param_1,param_2,0x108d6c720,&puStack_68,param_6);
      *puStack_68 = uStack_50 >> 0x20;
      if (((uint)uVar5 & 0xff) == 4) {
        FUN_108d6c8c4(puStack_68 + 1);
        if (lStack_60 != 0) {
          if (param_6 != (undefined8 *)0x0) {
            func_0x000108d5e198(*param_6);
            puVar3 = &UNK_10f517517;
            FUN_108d5e0b4();
            *param_6 = puVar3;
          }
          func_0x000108d5e198(lStack_60);
        }
        uVar5 = (ulong)uStack_48;
        goto LAB_108d6c5ec;
      }
      lVar4 = lStack_60;
      func_0x000108d5e198();
      puVar2 = puStack_68;
      iVar1 = (int)lVar4;
      if ((uint)uVar5 != 0) {
        FUN_108d6c8c4(puStack_68 + 1);
        return uVar5;
      }
      uVar5 = (ulong)uStack_50._4_4_;
      if (((uint)uStack_58 <= uStack_50._4_4_) ||
         ((FUN_108d62be4(), iVar1 == 0 && (FUN_108d63588(puVar2,uVar5 << 3), puVar2 != (ulong *)0x0)
          ))) {
        *param_3 = puVar2 + 1;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (undefined4)uStack_50;
        }
        if (param_4 == (undefined4 *)0x0) {
          return 0;
        }
        *param_4 = uStack_58._4_4_;
        return 0;
      }
      FUN_108d6c8c4(puStack_68 + 1);
    }
  }
  uVar5 = 7;
LAB_108d6c5ec:
  *(int *)(param_1 + 0x44) = (int)uVar5;
  return uVar5;
}



/* Entry: 108d6c8c4; end: 108d6c91f;  */

/* WARNING: Possible PIC construction at 0x000108d6c8fc: Changing call to branch */

void FUN_108d6c8c4(long *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = (ulong *)(param_1 + -1);
  puVar3 = puVar2;
  if (1 < (int)*puVar2) {
    lVar4 = (*puVar2 & 0x7fffffff) - 1;
    do {
      if ((ulong *)*param_1 != (ulong *)0x0) {
        unaff_x30 = 0x108d6c900;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar3 = (ulong *)*param_1;
        unaff_x19 = param_1 + 1;
        unaff_x20 = puVar2;
        unaff_x21 = lVar4;
        unaff_x29 = puVar1;
        break;
      }
      lVar4 = lVar4 + -1;
      param_1 = param_1 + 1;
    } while (lVar4 != 0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (ulong *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (ulong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108d6c920; end: 108d6c927;  */

/* WARNING: Removing unreachable block (ram,0x000108d6ca50) */
/* WARNING: Removing unreachable block (ram,0x000108d6ca54) */

uint FUN_108d6c920(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_54 [4];
  
  if (param_1[3] != 0) {
    (*pcRam0000000113297998)();
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_2;
    _strlen(param_2);
    uVar5 = (uint)lVar2 & 0x3fffffff;
  }
  puVar3 = param_1 + 0x35;
  func_0x000108d93668(puVar3,param_2,auStack_54);
  if ((puVar3 == (undefined8 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = param_1;
    FUN_108d6a6fc(param_1,uVar5 + 0x21);
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3 + 4;
      _memcpy(puVar1,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[1] = puVar1;
      puVar3[2] = param_4;
      puVar3[3] = 0;
      puVar4 = param_1 + 0x35;
      FUN_108d93af0(puVar4,puVar1,puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)((long)param_1 + 0x51) = 1;
        func_0x000108d60660(param_1,puVar4);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    uVar5 = *(uint *)(param_1 + 9) & uVar5;
  }
  else {
    FUN_108d80e10(param_1);
    uVar5 = 7;
  }
  if (param_1[3] != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar5;
}



/* Entry: 108d6c928; end: 108d6ca8f;  */

uint FUN_108d6c928(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_54 [4];
  
  if (param_1[3] != 0) {
    (*pcRam0000000113297998)();
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_2;
    _strlen(param_2);
    uVar5 = (uint)lVar2 & 0x3fffffff;
  }
  puVar3 = param_1 + 0x35;
  func_0x000108d93668(puVar3,param_2,auStack_54);
  if ((puVar3 == (undefined8 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = param_1;
    FUN_108d6a6fc(param_1,uVar5 + 0x21);
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3 + 4;
      _memcpy(puVar1,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[1] = puVar1;
      puVar3[2] = param_4;
      puVar3[3] = param_5;
      puVar4 = param_1 + 0x35;
      FUN_108d93af0(puVar4,puVar1,puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)((long)param_1 + 0x51) = 1;
        func_0x000108d60660(param_1,puVar4);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    uVar5 = *(uint *)(param_1 + 9) & uVar5;
  }
  else {
    FUN_108d80e10(param_1);
    uVar5 = 7;
  }
  if ((param_5 != (code *)0x0) && (uVar5 != 0)) {
    (*param_5)(param_4);
  }
  if (param_1[3] != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar5;
}



/* Entry: 108d6ca90; end: 108d6ca93;  */

uint FUN_108d6ca90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_54 [4];
  
  if (param_1[3] != 0) {
    (*pcRam0000000113297998)();
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_2;
    _strlen(param_2);
    uVar5 = (uint)lVar2 & 0x3fffffff;
  }
  puVar3 = param_1 + 0x35;
  func_0x000108d93668(puVar3,param_2,auStack_54);
  if ((puVar3 == (undefined8 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = param_1;
    FUN_108d6a6fc(param_1,uVar5 + 0x21);
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = puVar3 + 4;
      _memcpy(puVar1,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[1] = puVar1;
      puVar3[2] = param_4;
      puVar3[3] = param_5;
      puVar4 = param_1 + 0x35;
      FUN_108d93af0(puVar4,puVar1,puVar3);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)((long)param_1 + 0x51) = 1;
        func_0x000108d60660(param_1,puVar4);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    uVar5 = *(uint *)(param_1 + 9) & uVar5;
  }
  else {
    FUN_108d80e10(param_1);
    uVar5 = 7;
  }
  if ((param_5 != (code *)0x0) && (uVar5 != 0)) {
    (*param_5)(param_4);
  }
  if (param_1[3] != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar5;
}



/* Entry: 108d6ca94; end: 108d6ccaf;  */

uint FUN_108d6ca94(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lStack_48;
  
  lStack_48 = 0;
  if (param_1[3] != 0) {
    (*pcRam0000000113297998)();
  }
  lVar6 = param_1[0x38];
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) != 0)) {
    *(undefined4 *)((long)param_1 + 0x44) = 0x15;
    lVar6 = param_1[0x28];
    if (lVar6 != 0) {
      if ((*(ushort *)(lVar6 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar6 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
    if (param_1[3] != 0) {
      (*pcRam00000001132979a8)();
    }
    uVar7 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  else {
    lVar8 = *(long *)(lVar6 + 8);
    plVar3 = param_1;
    FUN_108d6a6fc(param_1,0x288);
    if (plVar3 == (long *)0x0) {
      uVar7 = 7;
    }
    else {
      _bzero();
      *(undefined1 *)((long)plVar3 + 499) = 1;
      *plVar3 = (long)param_1;
      *(undefined4 *)(plVar3 + 0x3b) = 1;
      plVar4 = plVar3;
      FUN_108d6ccb0(plVar3,param_2,&lStack_48);
      lVar2 = lStack_48;
      if (((((int)plVar4 == 0) && (lVar5 = plVar3[0x44], lVar5 != 0)) &&
          (*(char *)((long)param_1 + 0x51) == '\0')) &&
         ((*(long *)(lVar5 + 0x18) == 0 && ((*(byte *)(lVar5 + 0x46) >> 4 & 1) == 0)))) {
        if (*(long *)(lVar8 + 8) == 0) {
          *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar5 + 8);
          *(undefined2 *)(lVar8 + 0x3e) = *(undefined2 *)(lVar5 + 0x3e);
          *(undefined2 *)(lVar5 + 0x3e) = 0;
          *(undefined8 *)(lVar5 + 8) = 0;
        }
        uVar7 = 0;
        *(undefined4 *)(lVar6 + 0x18) = 1;
      }
      else {
        puVar1 = (undefined *)0x0;
        if (lStack_48 != 0) {
          puVar1 = &UNK_10f517517;
        }
        uVar7 = 1;
        FUN_108d65cb8(param_1,1,puVar1);
        func_0x000108d60660(param_1,lVar2);
      }
      *(undefined1 *)((long)plVar3 + 499) = 0;
      if (plVar3[2] != 0) {
        func_0x000108d674fc();
      }
      FUN_108d62864(param_1,plVar3[0x44]);
      lVar6 = *plVar3;
      func_0x000108d60660(lVar6,plVar3[0x10]);
      FUN_108d93e84(lVar6,plVar3[0x2a]);
      func_0x000108d60660(param_1,plVar3);
    }
    if (*(char *)((long)param_1 + 0x51) == '\0') {
      uVar7 = *(uint *)(param_1 + 9) & uVar7;
    }
    else {
      FUN_108d80e10(param_1);
      uVar7 = 7;
    }
    if (param_1[3] != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar7;
}



/* Entry: 108d6ccb0; end: 108d6d0b3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_108d6ccb0(long *param_1,long param_2,long *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint *puVar7;
  char *pcVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack_64;
  
  lVar13 = *param_1;
  iVar3 = *(int *)(lVar13 + 0x6c);
  if (*(int *)(lVar13 + 0xa4) == 0) {
    *(undefined4 *)(lVar13 + 0x148) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x43] = param_2;
  puVar7 = (uint *)0xc90;
  FUN_108d60848();
  if (puVar7 == (uint *)0x0) {
    *(undefined1 *)(lVar13 + 0x51) = 1;
    return (bool)7;
  }
  *puVar7 = 0xffffffff;
  uVar6 = *(undefined1 *)(lVar13 + 0x152);
  if (*(long *)(lVar13 + 0x170) != 0) {
    *(undefined1 *)(lVar13 + 0x152) = 1;
  }
  if (*(char *)(lVar13 + 0x51) == '\0') {
    iVar16 = 0;
    iVar14 = -1;
    do {
      while( true ) {
        pcVar2 = (char *)(param_2 + iVar16);
        iVar15 = iVar14;
        if (*pcVar2 == '\0') goto LAB_108d6ce40;
        param_1[0x49] = (long)pcVar2;
        pcVar8 = pcVar2;
        FUN_108d95788(pcVar2,&iStack_64);
        iVar15 = iStack_64;
        *(int *)(param_1 + 0x4a) = (int)pcVar8;
        iVar16 = (int)pcVar8 + iVar16;
        if (iVar3 < iVar16) {
          uVar10 = 0x12;
          goto LAB_108d6ce30;
        }
        if (iStack_64 == 0x97) break;
        if (iStack_64 == 1) {
          param_1[0x43] = param_2 + iVar16;
        }
        else if (iStack_64 == 0x96) {
          func_0x000108d6a85c(param_1,&UNK_10f518ef1);
          iVar15 = iVar14;
          goto LAB_108d6ce40;
        }
        FUN_108d96a1c(puVar7,iStack_64,pcVar2,param_1[0x4a],param_1);
        if (((int)param_1[3] != 0) || (iVar14 = iVar15, *(char *)(lVar13 + 0x51) != '\0'))
        goto LAB_108d6ce40;
      }
    } while (*(int *)(lVar13 + 0x148) == 0);
    func_0x000108d6a85c(param_1,&DAT_10f518ee7);
    uVar10 = 9;
LAB_108d6ce30:
    *(undefined4 *)(param_1 + 3) = uVar10;
    iVar15 = iVar14;
  }
  else {
    iVar16 = 0;
    iVar15 = -1;
  }
LAB_108d6ce40:
  if (((*(char *)(param_2 + iVar16) == '\0') && ((int)param_1[3] == 0)) &&
     (*(char *)(lVar13 + 0x51) == '\0')) {
    if (iVar15 != 1) {
      FUN_108d96a1c(puVar7,1,param_1[0x49],param_1[0x4a],param_1);
      param_1[0x43] = param_2 + iVar16;
      if (((int)param_1[3] != 0) || (*(char *)(lVar13 + 0x51) != '\0')) goto LAB_108d6ceac;
    }
    FUN_108d96a1c(puVar7,0,param_1[0x49],param_1[0x4a],param_1);
  }
LAB_108d6ceac:
  uVar4 = *puVar7;
  if (-1 < (int)uVar4) {
    do {
      FUN_108d9884c(*(undefined8 *)(puVar7 + 2),
                    *(undefined1 *)((long)puVar7 + (ulong)uVar4 * 0x20 + 0x12),
                    puVar7 + (ulong)uVar4 * 8 + 6);
      uVar5 = *puVar7;
      uVar4 = uVar5 - 1;
      *puVar7 = uVar4;
    } while (0 < (int)uVar5);
  }
  func_0x000108d5e198(puVar7);
  *(undefined1 *)(lVar13 + 0x152) = uVar6;
  if (*(char *)(lVar13 + 0x51) == '\0') {
    if (((int)param_1[3] == 0) || ((int)param_1[3] == 0x65)) goto LAB_108d6cf68;
    lVar12 = param_1[1];
  }
  else {
    lVar12 = param_1[1];
    *(undefined4 *)(param_1 + 3) = 7;
  }
  if (lVar12 == 0) {
    func_0x000108d7163c(param_1 + 1,lVar13,&UNK_10f517517);
  }
LAB_108d6cf68:
  lVar12 = param_1[1];
  if (lVar12 != 0) {
    *param_3 = lVar12;
    FUN_108d64c00((int)param_1[3],&UNK_10f517517);
    param_1[1] = 0;
  }
  if (((param_1[2] != 0) && (0 < *(int *)((long)param_1 + 0x4c))) &&
     (*(char *)((long)param_1 + 0x1e) == '\0')) {
    func_0x000108d80da4();
    param_1[2] = 0;
  }
  if (*(char *)((long)param_1 + 0x1e) == '\0') {
    func_0x000108d60660(lVar13,param_1[0x36]);
    param_1[0x36] = 0;
    *(undefined4 *)((long)param_1 + 0x1ac) = 0;
  }
  func_0x000108d5e198(param_1[0x4d]);
  if (*(char *)((long)param_1 + 499) == '\0') {
    FUN_108d62864(lVar13,param_1[0x44]);
  }
  if (*(char *)((long)param_1 + 0x1f1) != '\0') {
    func_0x000108d9409c(lVar13,param_1[0x50]);
  }
  FUN_108d627fc(lVar13,param_1[0x45]);
  uVar11 = (ulong)*(uint *)((long)param_1 + 0x1ec);
  if (0 < (int)*(uint *)((long)param_1 + 0x1ec)) {
    do {
      func_0x000108d60660(lVar13,*(undefined8 *)(param_1[0x41] + (uVar11 - 1) * 8));
      bVar1 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar1);
  }
  plVar9 = (long *)param_1[0x41];
  while( true ) {
    func_0x000108d60660(lVar13,plVar9);
    plVar9 = (long *)param_1[0x37];
    if (plVar9 == (long *)0x0) break;
    param_1[0x37] = *plVar9;
  }
  while (param_1[0x4e] != 0) {
    param_1[0x4e] = *(long *)(param_1[0x4e] + 0x70);
    FUN_108d62864(lVar13);
  }
  return lVar12 != 0;
}



/* Entry: 108d6d0b4; end: 108d6d0cb;  */

undefined1 FUN_108d6d0b4(long param_1)

{
  return (&UNK_10dfa0848)[*(byte *)(param_1 + 0x55)];
}



/* Entry: 108d6d0cc; end: 108d6d1af;  */

undefined8 FUN_108d6d0cc(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_stack_00000000;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if ((param_2 == 1) && (*(long **)(param_1 + 0x1c0) != (long *)0x0)) {
    uVar2 = 0;
    *(undefined1 *)(**(long **)(param_1 + 0x1c0) + 0x1c) = in_stack_00000000;
  }
  else {
    uVar2 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
    *(undefined4 *)(param_1 + 0x44) = 0x15;
    lVar1 = *(long *)(param_1 + 0x140);
    if (lVar1 != 0) {
      if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar1 + 8) = 1;
      }
      else {
        func_0x000108d82720();
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar2;
}



/* Entry: 108d6d1b0; end: 108d6d57b;  */

bool FUN_108d6d1b0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  uint uVar7;
  long lVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar8;
  
  uVar12 = 0;
  do {
    bVar3 = *param_1;
    uVar7 = (uint)bVar3;
    uVar8 = (uint)bVar3;
    pbVar5 = param_1;
    if (0x26 < bVar3) {
      if (bVar3 < 0x3b) {
        if (uVar8 == 0x27) {
LAB_108d6d2ac:
          do {
            param_1 = param_1 + 1;
            bVar2 = *param_1;
          } while (bVar2 != 0 && bVar2 != bVar3);
          pbVar5 = param_1;
          if (bVar2 == 0) {
            return false;
          }
        }
        else if (uVar7 == 0x2d) {
          bVar3 = param_1[1];
          if (bVar3 == 0x2d) {
            while( true ) {
              if (bVar3 == 0) goto LAB_108d6d570;
              if (bVar3 == 10) break;
              param_1 = param_1 + 1;
              bVar3 = *param_1;
            }
            goto LAB_108d6d2d4;
          }
        }
        else {
          if (uVar7 != 0x2f) goto LAB_108d6d328;
          if (param_1[1] == 0x2a) {
            param_1 = param_1 + 3;
            do {
              if (param_1[-1] == 0x2a) {
                if (*param_1 == 0x2f) goto LAB_108d6d2d4;
              }
              else if (param_1[-1] == 0) {
                return false;
              }
              param_1 = param_1 + 1;
            } while( true );
          }
        }
      }
      else {
        if (uVar7 == 0x3b) {
          lVar9 = 0;
          goto LAB_108d6d3d8;
        }
        if (uVar7 != 0x5b) {
          if (uVar8 != 0x60) goto LAB_108d6d328;
          goto LAB_108d6d2ac;
        }
        do {
          param_1 = param_1 + 1;
          if (*param_1 == 0) {
            return false;
          }
          pbVar5 = param_1;
        } while (*param_1 != 0x5d);
      }
      goto LAB_108d6d3d4;
    }
    if (bVar3 < 0xc) {
      if (1 < uVar7 - 9) {
        if (uVar7 == 0) {
LAB_108d6d570:
          return (int)uVar12 == 1;
        }
        goto LAB_108d6d328;
      }
LAB_108d6d2d4:
      lVar9 = 1;
      goto LAB_108d6d3d8;
    }
    if ((uVar7 - 0xc < 2) || (uVar7 == 0x20)) goto LAB_108d6d2d4;
    if (bVar3 == 0x22) goto LAB_108d6d2ac;
LAB_108d6d328:
    if (((&UNK_10dfa0749)[uVar8] & 0x46) == 0) {
LAB_108d6d3d4:
      lVar9 = 2;
      param_1 = pbVar5;
    }
    else {
      pbVar5 = param_1 + -1;
      lVar9 = 1;
      do {
        pbVar1 = pbVar5 + 2;
        lVar9 = lVar9 + 1;
        pbVar5 = pbVar5 + 1;
      } while (((&UNK_10dfa0749)[*pbVar1] & 0x46) != 0);
      uVar11 = (ulong)(uVar8 - 0x43);
      if (0x31 < uVar8 - 0x43) goto LAB_108d6d3d4;
      if ((1L << (uVar11 & 0x3f) & 0x100000001U) == 0) {
        iVar4 = (int)lVar9;
        if ((1L << (uVar11 & 0x3f) & 0x400000004U) == 0) {
          if ((1L << (uVar11 & 0x3f) & 0x2000000020000U) == 0) goto LAB_108d6d3d4;
          if (iVar4 == 5) {
            lVar9 = 0;
            do {
              if ((ulong)param_1[lVar9] == 0) {
                bVar3 = (&DAT_10f3ed9b4)[lVar9];
                goto LAB_108d6d55c;
              }
              cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
              cVar10 = (&UNK_10dfa05fd)[(byte)(&DAT_10f3ed9b4)[lVar9]];
              if (cVar6 != cVar10) goto LAB_108d6d560;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 4);
LAB_108d6d568:
            lVar9 = 5;
            param_1 = pbVar5;
          }
          else {
            if (iVar4 != 8) {
              if (iVar4 == 10) {
                lVar9 = 0;
LAB_108d6d3a4:
                if ((ulong)param_1[lVar9] == 0) {
                  bVar3 = "temporary"[lVar9];
LAB_108d6d55c:
                  cVar6 = '\0';
                  cVar10 = (&UNK_10dfa05fd)[bVar3];
                }
                else {
                  cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
                  cVar10 = (&UNK_10dfa05fd)[(byte)"temporary"[lVar9]];
                  if (cVar6 == cVar10) break;
                }
LAB_108d6d560:
                if (cVar6 == cVar10) goto LAB_108d6d568;
              }
              goto LAB_108d6d3d4;
            }
            lVar9 = 0;
            do {
              if ((ulong)param_1[lVar9] == 0) {
                cVar10 = (&UNK_10dfa05fd)[(byte)"trigger"[lVar9]];
                cVar6 = '\0';
LAB_108d6d540:
                if (cVar6 != cVar10) goto LAB_108d6d3d4;
                break;
              }
              cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
              cVar10 = (&UNK_10dfa05fd)[(byte)"trigger"[lVar9]];
              if (cVar6 != cVar10) goto LAB_108d6d540;
              lVar9 = lVar9 + 1;
            } while (lVar9 != 7);
            lVar9 = 6;
            param_1 = pbVar5;
          }
        }
        else if (iVar4 == 4) {
          lVar9 = 0;
          do {
            if ((ulong)param_1[lVar9] == 0) {
              cVar10 = (&UNK_10dfa05fd)[(byte)"end"[lVar9]];
              cVar6 = '\0';
LAB_108d6d528:
              if (cVar6 != cVar10) goto LAB_108d6d3d4;
              break;
            }
            cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
            cVar10 = (&UNK_10dfa05fd)[(byte)"end"[lVar9]];
            if (cVar6 != cVar10) goto LAB_108d6d528;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          lVar9 = 7;
          param_1 = pbVar5;
        }
        else {
          if (iVar4 != 8) goto LAB_108d6d3d4;
          lVar9 = 0;
          do {
            if ((ulong)param_1[lVar9] == 0) {
              cVar10 = (&UNK_10dfa05fd)[(byte)(&UNK_10f51751a)[lVar9]];
              cVar6 = '\0';
LAB_108d6d510:
              if (cVar6 != cVar10) goto LAB_108d6d3d4;
              break;
            }
            cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
            cVar10 = (&UNK_10dfa05fd)[(byte)(&UNK_10f51751a)[lVar9]];
            if (cVar6 != cVar10) goto LAB_108d6d510;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 7);
          lVar9 = 3;
          param_1 = pbVar5;
        }
      }
      else {
        if (lVar9 != 7) goto LAB_108d6d3d4;
        lVar9 = 0;
        do {
          if ((ulong)param_1[lVar9] == 0) {
            cVar10 = (&UNK_10dfa05fd)[(byte)(&DAT_10f68efec)[lVar9]];
            cVar6 = '\0';
LAB_108d6d4f8:
            if (cVar6 != cVar10) goto LAB_108d6d3d4;
            break;
          }
          cVar6 = (&UNK_10dfa05fd)[param_1[lVar9]];
          cVar10 = (&UNK_10dfa05fd)[(byte)(&DAT_10f68efec)[lVar9]];
          if (cVar6 != cVar10) goto LAB_108d6d4f8;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 6);
        lVar9 = 4;
        param_1 = pbVar5;
      }
    }
LAB_108d6d3d8:
    uVar12 = (ulong)(byte)(&UNK_10dfa084e)[lVar9 + uVar12 * 8];
    param_1 = param_1 + 1;
  } while( true );
  lVar9 = lVar9 + 1;
  if (lVar9 == 9) goto LAB_108d6d568;
  goto LAB_108d6d3a4;
}



/* Entry: 108d6d57c; end: 108d6d617;  */

undefined8 * FUN_108d6d57c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  FUN_108d62be4();
  if ((int)puVar2 == 0) {
    puVar1 = (undefined8 *)0x38;
    FUN_108d60848();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 1;
      puVar1[5] = 0;
      puVar1[6] = 0;
      FUN_108d67c04(puVar1,param_1,0xffffffff,2,0);
    }
    puVar2 = puVar1;
    FUN_108d67a14(puVar1,1);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x7;
    }
    else {
      FUN_108d6d1b0();
    }
    FUN_108d6d618(puVar1);
  }
  return puVar2;
}



/* Entry: 108d6d618; end: 108d6d663;  */

void FUN_108d6d618(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((*(ushort *)(param_1 + 1) & 0x2460) != 0) || (*(int *)(param_1 + 4) != 0)) {
    FUN_108d826d0(param_1);
  }
  lVar3 = param_1[5];
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x328) != 0) {
      if ((param_1 < *(undefined8 **)(lVar3 + 0x170)) ||
         (*(undefined8 **)(lVar3 + 0x178) <= param_1)) {
        (*pcRam0000000113297950)();
        uVar1 = (uint)param_1;
      }
      else {
        uVar1 = (uint)*(ushort *)(lVar3 + 0x150);
      }
      **(int **)(lVar3 + 0x328) = **(int **)(lVar3 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(lVar3 + 0x170) <= param_1) && (param_1 < *(undefined8 **)(lVar3 + 0x178)))
    {
      *param_1 = *(undefined8 *)(lVar3 + 0x168);
      *(undefined8 **)(lVar3 + 0x168) = param_1;
      *(int *)(lVar3 + 0x154) = *(int *)(lVar3 + 0x154) + -1;
      return;
    }
  }
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = param_1;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_1);
    param_1 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 108d6d664; end: 108d6d73b;  */

undefined * FUN_108d6d664(void)

{
  return &UNK_10dfa05e4;
}



/* Entry: 108d6d73c; end: 108d6d9cf;  */

void FUN_108d6d73c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = uRam0000000113297978;
  if (iRam0000000113297a7c != 0) {
    FUN_108d64c00(0x15,&UNK_10f51b96f);
    return;
  }
  switch(param_1) {
  case 4:
    plVar7 = (long *)CONCAT44(in_stack_00000004,in_stack_00000000);
    lVar10 = plVar7[1];
    lVar9 = *plVar7;
    lVar12 = plVar7[3];
    lVar11 = plVar7[2];
    lVar14 = plVar7[5];
    lVar13 = plVar7[4];
    lVar16 = plVar7[7];
    lVar15 = plVar7[6];
    plVar7 = (long *)0x113297938;
    goto code_r0x000108d6d90c;
  case 5:
    if (lRam0000000113297938 == 0) {
      FUN_108d6d73c(4);
    }
    plVar7 = (long *)CONCAT44(in_stack_00000004,in_stack_00000000);
    lVar9 = lRam0000000113297938;
    lVar10 = lRam0000000113297940;
    lVar11 = lRam0000000113297948;
    lVar12 = lRam0000000113297950;
    lVar13 = lRam0000000113297958;
    lVar14 = lRam0000000113297960;
    lVar15 = lRam0000000113297968;
    lVar16 = lRam0000000113297970;
code_r0x000108d6d90c:
    plVar7[5] = lVar14;
    plVar7[4] = lVar13;
    plVar7[7] = lVar16;
    plVar7[6] = lVar15;
    plVar7[1] = lVar10;
    *plVar7 = lVar9;
    plVar7[3] = lVar12;
    plVar7[2] = lVar11;
    break;
  case 6:
    puVar8 = (undefined8 *)0x113297a50;
    goto code_r0x000108d6d8a4;
  case 7:
    puVar8 = (undefined8 *)0x113297a60;
code_r0x000108d6d8a4:
    *puVar8 = CONCAT44(in_stack_00000004,in_stack_00000000);
    *(undefined4 *)(puVar8 + 1) = in_stack_00000008;
    *(undefined4 *)((long)puVar8 + 0xc) = in_stack_00000010;
    break;
  case 9:
    uRam0000000113297910 = in_stack_00000000;
    break;
  case 10:
    puVar8 = (undefined8 *)CONCAT44(in_stack_00000004,in_stack_00000000);
    uRam0000000113297980 = puVar8[1];
    uRam0000000113297978 = *puVar8;
    uRam0000000113297990 = puVar8[3];
    uRam0000000113297988 = puVar8[2];
    uRam00000001132979a0 = puVar8[5];
    uRam0000000113297998 = puVar8[4];
    uRam00000001132979b0 = puVar8[7];
    uRam00000001132979a8 = puVar8[6];
    uRam00000001132979b8 = puVar8[8];
    break;
  case 0xb:
    puVar8 = (undefined8 *)CONCAT44(in_stack_00000004,in_stack_00000000);
    puVar8[1] = uRam0000000113297980;
    *puVar8 = uVar1;
    uVar6 = uRam00000001132979b0;
    uVar5 = uRam00000001132979a8;
    uVar4 = uRam00000001132979a0;
    uVar3 = uRam0000000113297998;
    uVar2 = uRam0000000113297990;
    uVar1 = uRam0000000113297988;
    puVar8[8] = uRam00000001132979b8;
    puVar8[5] = uVar4;
    puVar8[4] = uVar3;
    puVar8[7] = uVar6;
    puVar8[6] = uVar5;
    puVar8[3] = uVar2;
    puVar8[2] = uVar1;
    break;
  case 0xd:
    uRam000000011329792c = in_stack_00000000;
    uRam0000000113297930 = in_stack_00000008;
    break;
  case 0x10:
    uRam0000000113297aa0 = CONCAT44(in_stack_00000004,in_stack_00000000);
    uRam0000000113297aa8 = CONCAT44(in_stack_0000000c,in_stack_00000008);
    break;
  case 0x11:
    uRam000000011329791c = in_stack_00000000;
    break;
  case 0x12:
    puVar8 = (undefined8 *)CONCAT44(in_stack_00000004,in_stack_00000000);
    uRam00000001132979c8 = puVar8[1];
    uRam00000001132979c0 = *puVar8;
    uRam00000001132979d8 = puVar8[3];
    uRam00000001132979d0 = puVar8[2];
    uRam00000001132979e8 = puVar8[5];
    uRam00000001132979e0 = puVar8[4];
    uRam00000001132979f8 = puVar8[7];
    uRam00000001132979f0 = puVar8[6];
    uRam0000000113297a08 = puVar8[9];
    uRam0000000113297a00 = puVar8[8];
    uRam0000000113297a18 = puVar8[0xb];
    uRam0000000113297a10 = puVar8[10];
    uRam0000000113297a20 = puVar8[0xc];
  }
  return;
}



/* Entry: 108d6d9d0; end: 108d6d9d7;  */

undefined8 FUN_108d6d9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108d6d9d8; end: 108d6da87;  */

undefined8 FUN_108d6d9d8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  FUN_108d62704(param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
      if (lVar2 != 0) {
        (*pcRam0000000113297a20)(*(undefined8 *)(*(long *)(**(long **)(lVar2 + 8) + 0x130) + 0x40));
        iVar1 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < iVar1);
  }
  func_0x000108d6277c(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d6da88; end: 108d6db9b;  */

long FUN_108d6da88(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  if (param_2 == 0x3eb) {
    puVar3 = &UNK_10dfa0898;
  }
  else {
    if (param_2 != 0x3ea) {
      if (param_2 == 0x3e9) {
        FUN_108d6db9c(param_1,CONCAT44(in_stack_00000004,in_stack_00000000),in_stack_00000008,
                      in_stack_00000010);
        return param_1;
      }
      return 1;
    }
    puVar3 = &UNK_10dfa0890;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (in_stack_00000000 < 1) {
    if (in_stack_00000000 != 0) goto LAB_108d6db64;
    uVar4 = uVar1 & (*(uint *)(puVar3 + 4) ^ 0xffffffff);
  }
  else {
    uVar4 = *(uint *)(puVar3 + 4) | uVar1;
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  if (uVar1 != uVar4) {
    for (lVar2 = *(long *)(param_1 + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x58)) {
      *(ushort *)(lVar2 + 0x8c) = *(ushort *)(lVar2 + 0x8c) | 8;
    }
  }
LAB_108d6db64:
  if ((uint *)CONCAT44(in_stack_0000000c,in_stack_00000008) != (uint *)0x0) {
    *(uint *)CONCAT44(in_stack_0000000c,in_stack_00000008) =
         (uint)((*(uint *)(puVar3 + 4) & *(uint *)(param_1 + 0x2c)) != 0);
  }
  return 0;
}



/* Entry: 108d6db9c; end: 108d6dcdb;  */

undefined8 FUN_108d6db9c(long param_1,ulong *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0x153) != '\0') {
    func_0x000108d5e198(*(undefined8 *)(param_1 + 0x170));
  }
  uVar1 = (uint)param_3 & 0xfffffff8;
  uVar5 = 0;
  if (((int)uVar1 < 9) || ((int)param_4 < 1)) {
LAB_108d6dca8:
    bVar2 = false;
    *(short *)(param_1 + 0x150) = (short)uVar5;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(long *)(param_1 + 0x170) = param_1;
    *(long *)(param_1 + 0x178) = param_1;
    *(undefined1 *)(param_1 + 0x152) = 0;
  }
  else {
    param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
    puVar3 = param_2;
    if (param_2 == (ulong *)0x0) {
      if (pcRam000000011372e6f8 != (code *)0x0) {
        (*pcRam000000011372e6f8)();
      }
      puVar3 = (ulong *)(ulong)(param_4 * uVar1);
      FUN_108d60848();
      if (pcRam000000011372e700 != (code *)0x0) {
        (*pcRam000000011372e700)();
      }
      uVar5 = uVar1;
      if (puVar3 == (ulong *)0x0) goto LAB_108d6dca8;
      puVar4 = puVar3;
      (*pcRam0000000113297950)();
      param_4 = 0;
      if ((param_3 & 0xfffffff8) != 0) {
        param_4 = (int)puVar4 / (int)uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(ulong **)(param_1 + 0x170) = puVar3;
    *(short *)(param_1 + 0x150) = (short)uVar1;
    if (0 < (int)param_4) {
      param_4 = param_4 + 1;
      puVar4 = (ulong *)0x0;
      puVar6 = puVar3;
      do {
        *puVar6 = (ulong)puVar4;
        puVar3 = (ulong *)((long)puVar6 + (ulong)uVar1);
        param_4 = param_4 - 1;
        puVar4 = puVar6;
        puVar6 = puVar3;
      } while (1 < param_4);
      *(ulong *)(param_1 + 0x168) = (long)puVar3 - (param_3 & 0xfffffff8);
    }
    bVar2 = param_2 == (ulong *)0x0;
    *(ulong **)(param_1 + 0x178) = puVar3;
    *(undefined1 *)(param_1 + 0x152) = 1;
  }
  *(bool *)(param_1 + 0x153) = bVar2;
  return 0;
}



/* Entry: 108d6dcdc; end: 108d6dcfb;  */

undefined8 FUN_108d6dcdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108d6dcfc; end: 108d6de7f;  */

undefined8 FUN_108d6dcfc(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_1 != 0) {
    lVar5 = param_1;
    FUN_108d6ef54();
    if ((int)lVar5 == 0) {
      FUN_108d64c00(0x15,&UNK_10f51b96f);
      return 0x15;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d62704(param_1);
    iVar2 = *(int *)(param_1 + 0x28);
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar5 * 0x20 + 0x18);
        if ((lVar4 != 0) && (plVar6 = *(long **)(lVar4 + 0x10), plVar6 != (long *)0x0)) {
          do {
            if ((*(byte *)(plVar6[2] + 0x46) >> 4 & 1) != 0) {
              plVar3 = (long *)(plVar6[2] + 0x58);
              plVar1 = (long *)*plVar3;
              if (plVar1 != (long *)0x0) {
                if (*plVar1 != param_1) {
                  do {
                    plVar3 = plVar1;
                    plVar1 = (long *)plVar3[5];
                    if (plVar1 == (long *)0x0) goto LAB_108d6ddb0;
                  } while (*plVar1 != param_1);
                  plVar3 = plVar3 + 5;
                }
                *plVar3 = plVar1[5];
                func_0x000108d80d4c();
              }
            }
LAB_108d6ddb0:
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
          iVar2 = *(int *)(param_1 + 0x28);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
    func_0x000108d960a8(param_1);
    func_0x000108d6277c(param_1);
    FUN_108d823ac(param_1,0x88);
    if ((param_2 == 0) && (lVar5 = param_1, FUN_108dcc96c(), (int)lVar5 != 0)) {
      FUN_108d65cb8(param_1,5,&UNK_10f51b5b7);
      if (*(long *)(param_1 + 0x18) == 0) {
        return 5;
      }
      (*pcRam00000001132979a8)();
      return 5;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x64cffc7f;
    FUN_108d67144(param_1);
  }
  return 0;
}



/* Entry: 108d6de80; end: 108d6de87;  */

/* WARNING: Removing unreachable block (ram,0x000108d6de44) */
/* WARNING: Removing unreachable block (ram,0x000108d6de50) */
/* WARNING: Removing unreachable block (ram,0x000108d6de70) */

undefined8 FUN_108d6de80(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_1 != 0) {
    lVar5 = param_1;
    FUN_108d6ef54();
    if ((int)lVar5 == 0) {
      FUN_108d64c00(0x15,&UNK_10f51b96f);
      return 0x15;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d62704(param_1);
    iVar2 = *(int *)(param_1 + 0x28);
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar5 * 0x20 + 0x18);
        if ((lVar4 != 0) && (plVar6 = *(long **)(lVar4 + 0x10), plVar6 != (long *)0x0)) {
          do {
            if ((*(byte *)(plVar6[2] + 0x46) >> 4 & 1) != 0) {
              plVar3 = (long *)(plVar6[2] + 0x58);
              plVar1 = (long *)*plVar3;
              if (plVar1 != (long *)0x0) {
                if (*plVar1 != param_1) {
                  do {
                    plVar3 = plVar1;
                    plVar1 = (long *)plVar3[5];
                    if (plVar1 == (long *)0x0) goto LAB_108d6ddb0;
                  } while (*plVar1 != param_1);
                  plVar3 = plVar3 + 5;
                }
                *plVar3 = plVar1[5];
                func_0x000108d80d4c();
              }
            }
LAB_108d6ddb0:
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
          iVar2 = *(int *)(param_1 + 0x28);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
    func_0x000108d960a8(param_1);
    func_0x000108d6277c(param_1);
    FUN_108d823ac(param_1,0x88);
    *(undefined4 *)(param_1 + 0x5c) = 0x64cffc7f;
    FUN_108d67144(param_1);
  }
  return 0;
}



/* Entry: 108d6de88; end: 108d6df7f;  */

undefined8 FUN_108d6de88(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x2a8) = param_2;
    *(undefined8 *)(param_1 + 0x2b0) = param_3;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  else {
    (*pcRam0000000113297998)();
    *(undefined8 *)(param_1 + 0x2a8) = param_2;
    *(undefined8 *)(param_1 + 0x2b0) = param_3;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return 0;
}



/* Entry: 108d6df80; end: 108d6dfd7;  */

undefined8 FUN_108d6df80(long param_1,int param_2)

{
  if (param_2 < 1) {
    FUN_108d6de88(param_1,0,0);
  }
  else {
    FUN_108d6de88(param_1,FUN_108d6dfd8,param_1);
    *(int *)(param_1 + 0x308) = param_2;
  }
  return 0;
}



/* Entry: 108d6dfd8; end: 108d6e01b;  */

undefined8 FUN_108d6dfd8(long *param_1,int param_2)

{
  if ((int)param_1[0x61] < param_2 * 1000 + 1000) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(*param_1,1000000);
  return 1;
}



/* Entry: 108d6e01c; end: 108d6e027;  */

void FUN_108d6e01c(long param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 1;
  return;
}



/* Entry: 108d6e028; end: 108d6e047;  */

void FUN_108d6e028(void)

{
  FUN_108d6e048();
  return;
}



/* Entry: 108d6e048; end: 108d6e413;  */

uint FUN_108d6e048(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9)

{
  uint uVar1;
  int *piVar3;
  int *piVar2;
  
  if (*(long *)(param_1 + 6) != 0) {
    (*pcRam0000000113297998)();
  }
  if (param_9 == (code *)0x0) {
    piVar3 = param_1;
    func_0x000108d6e1a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    uVar1 = (uint)piVar3;
  }
  else {
    piVar3 = param_1;
    FUN_108d6a6fc(param_1,0x18);
    if (piVar3 == (int *)0x0) {
      (*param_9)(param_5);
      uVar1 = 1;
    }
    else {
      piVar3[0] = 0;
      piVar3[1] = 0;
      *(code **)(piVar3 + 2) = param_9;
      *(undefined8 *)(piVar3 + 4) = param_5;
      piVar2 = param_1;
      func_0x000108d6e1a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
      uVar1 = (uint)piVar2;
      if (*piVar3 == 0) {
        (*param_9)(param_5);
        func_0x000108d60660(param_1,piVar3);
      }
    }
  }
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    uVar1 = param_1[0x12] & uVar1;
  }
  else {
    FUN_108d80e10(param_1);
    uVar1 = 7;
  }
  if (*(long *)(param_1 + 6) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar1;
}



/* Entry: 108d6e414; end: 108d6e503;  */

uint FUN_108d6e414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar1 = param_1;
  FUN_108d6e504(param_1,param_2,0xffffffff);
  lVar2 = param_1;
  func_0x000108d6e1a0(param_1,lVar1,param_3,param_4,param_5,param_6,param_7,param_8,0);
  func_0x000108d60660(param_1,lVar1);
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar3 = *(uint *)(param_1 + 0x48) & (uint)lVar2;
  }
  else {
    FUN_108d80e10(param_1);
    uVar3 = 7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar3;
}



/* Entry: 108d6e504; end: 108d6e59b;  */

undefined8 FUN_108d6e504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  lStack_38 = param_1;
  FUN_108d67c04(&uStack_60,param_2,param_3,2,0);
  if ((((ushort)uStack_58 >> 1 & 1) != 0) && (uStack_58._2_1_ != '\x01')) {
    FUN_108d833e4(&uStack_60,1);
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    if ((uStack_58 & 0x2460) != 0 || (int)uStack_40 != 0) {
      FUN_108d826d0(&uStack_60);
    }
    uStack_50 = 0;
  }
  return uStack_50;
}



/* Entry: 108d6e59c; end: 108d6e687;  */

uint FUN_108d6e59c(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_2;
    _strlen(param_2);
    uVar1 = (uint)lVar2 & 0x3fffffff;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar2 = param_1;
  FUN_108d6e688(param_1,param_2,uVar1,param_3,1,0);
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000108d6e1a0(param_1,param_2,param_3,1,0,FUN_108d6e83c,0,0,0);
    uVar1 = (uint)lVar2;
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x48) & uVar1;
  }
  else {
    FUN_108d80e10(param_1);
    uVar1 = 7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar1;
}



/* Entry: 108d6e688; end: 108d6e83b;  */

undefined2 *
FUN_108d6e688(undefined2 *param_1,byte *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             int param_6)

{
  bool bVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  uVar6 = ((int)param_3 + (uint)(byte)(&UNK_10dfa05fd)[*param_2]) % 0x17;
  puVar7 = param_1 + 0xec;
  FUN_108dc9d24(puVar7,uVar6,param_2,param_3);
  if (puVar7 == (undefined2 *)0x0) {
    if (param_6 != 0) {
LAB_108d6e748:
      param_3 = param_3 & 0xffffffff;
      puVar4 = param_1;
      FUN_108d68fc8(param_1,param_3 + 0x49);
      if (puVar4 == (undefined2 *)0x0) {
        return (undefined2 *)0x0;
      }
      puVar7 = puVar4 + 0x24;
      *(undefined2 **)(puVar4 + 0x18) = puVar7;
      *puVar4 = (short)param_4;
      puVar4[1] = (short)param_5;
      _memcpy(puVar7,param_2,param_3);
      *(undefined1 *)((long)puVar7 + param_3) = 0;
      FUN_108dc9c0c(param_1 + 0xec,puVar4);
      bVar1 = true;
      goto LAB_108d6e800;
    }
    puVar4 = (undefined2 *)0x0;
LAB_108d6e7b0:
    puVar7 = (undefined2 *)0x11372e5d0;
    FUN_108dc9d24(0x11372e5d0,uVar6,param_2,param_3);
    if (puVar7 != (undefined2 *)0x0) {
      uVar6 = 0;
      puVar5 = puVar4;
      do {
        puVar3 = puVar7;
        FUN_108dcca00(puVar7,param_4,param_5);
        puVar4 = puVar7;
        uVar8 = (uint)puVar3;
        if ((uint)puVar3 <= uVar6) {
          puVar4 = puVar5;
          uVar8 = uVar6;
        }
        uVar6 = uVar8;
        puVar7 = *(undefined2 **)(puVar7 + 8);
        puVar5 = puVar4;
      } while (puVar7 != (undefined2 *)0x0);
    }
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    puVar5 = (undefined2 *)0x0;
    do {
      puVar3 = puVar7;
      FUN_108dcca00(puVar7,param_4,param_5);
      puVar4 = puVar7;
      uVar2 = (uint)puVar3;
      if ((uint)puVar3 <= uVar8) {
        puVar4 = puVar5;
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      puVar7 = *(undefined2 **)(puVar7 + 8);
      puVar5 = puVar4;
    } while (puVar7 != (undefined2 *)0x0);
    if (param_6 == 0) {
      if ((puVar4 != (undefined2 *)0x0) && ((*(byte *)(param_1 + 0x17) >> 5 & 1) == 0)) {
        bVar1 = false;
        goto LAB_108d6e800;
      }
      goto LAB_108d6e7b0;
    }
    if ((int)uVar8 < 6) goto LAB_108d6e748;
    bVar1 = true;
  }
  if (puVar4 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
LAB_108d6e800:
  if (*(long *)(puVar4 + 0x10) != 0) {
    return puVar4;
  }
  if (*(long *)(puVar4 + 0xc) != 0) {
    bVar1 = true;
  }
  if (!bVar1) {
    return (undefined2 *)0x0;
  }
  return puVar4;
}



/* Entry: 108d6e83c; end: 108d6e8a3;  */

void FUN_108d6e83c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = &UNK_10f51b8ac;
  FUN_108d5e0b4();
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  FUN_108d67c04(*param_1,puVar2,0xffffffff,1,0xffffffffffffffff);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar1 = puVar2;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar1;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar2);
    puVar2 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar2);
  return;
}



/* Entry: 108d6e8a4; end: 108d6ea53;  */

undefined8 FUN_108d6e8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_3;
  }
  else {
    (*pcRam0000000113297998)();
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar1;
}



/* Entry: 108d6ea54; end: 108d6eaef;  */

undefined8 FUN_108d6ea54(long param_1,uint param_2)

{
  long lVar1;
  
  if ((int)param_2 < 1) {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      return 0;
    }
    (*pcRam0000000113297998)();
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(code **)(param_1 + 0x118) = FUN_108d6eb5c;
      *(ulong *)(param_1 + 0x120) = (ulong)param_2;
      return 0;
    }
    (*pcRam0000000113297998)();
    lVar1 = *(long *)(param_1 + 0x18);
    *(code **)(param_1 + 0x118) = FUN_108d6eb5c;
    *(ulong *)(param_1 + 0x120) = (ulong)param_2;
  }
  if (lVar1 != 0) {
    (*pcRam00000001132979a8)();
  }
  return 0;
}



/* Entry: 108d6eaf0; end: 108d6eb5b;  */

undefined8 FUN_108d6eaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x118) = param_2;
    *(undefined8 *)(param_1 + 0x120) = param_3;
  }
  else {
    (*pcRam0000000113297998)();
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x118) = param_2;
    *(undefined8 *)(param_1 + 0x120) = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar1;
}



/* Entry: 108d6eb5c; end: 108d6ebbf;  */

undefined8 FUN_108d6eb5c(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (pcRam000000011372e6f8 != (code *)0x0) {
      (*pcRam000000011372e6f8)();
    }
    FUN_108d6ebc0(param_2,param_3,0,0,0);
    if (pcRam000000011372e700 != (code *)0x0) {
      (*pcRam000000011372e700)();
    }
  }
  return 0;
}



/* Entry: 108d6ebc0; end: 108d6edb7;  */

uint FUN_108d6ebc0(long param_1,char *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xffffffff;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0xffffffff;
  }
  if (3 < (uint)param_3) {
    return 0x15;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    lVar2 = 10;
  }
  else {
    lVar2 = param_1;
    func_0x000108d6ed0c(param_1,param_2);
    if ((int)lVar2 < 0) {
      uVar3 = 1;
      FUN_108d65cb8(param_1,1,&UNK_10f51755f);
      goto LAB_108d6ecb4;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  lVar1 = param_1;
  FUN_108d6edb8(param_1,lVar2,param_3,param_4,param_5);
  uVar3 = (uint)lVar1;
  *(uint *)(param_1 + 0x44) = uVar3;
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
      *(undefined2 *)(lVar2 + 8) = 1;
    }
    else {
      func_0x000108d82720();
    }
  }
LAB_108d6ecb4:
  if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_108d80e10(param_1);
    uVar3 = 7;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x48) & uVar3;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar3;
}



/* Entry: 108d6edb8; end: 108d6ef43;  */

int FUN_108d6edb8(long param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    bVar1 = false;
    lVar10 = 1;
    lVar6 = 8;
    do {
      if ((param_2 == 10) || (lVar10 - (ulong)param_2 == 1)) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
        if (lVar7 == 0) {
          iVar8 = 0;
        }
        else {
          plVar9 = *(long **)(lVar7 + 8);
          if ((*(char *)(lVar7 + 0x11) != '\0') &&
             (*(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1, *(char *)(lVar7 + 0x12) == '\0'))
          {
            FUN_108d7f528(lVar7);
          }
          if (*(char *)((long)plVar9 + 0x24) == '\0') {
            lVar5 = *plVar9;
            lVar2 = *(long *)(lVar5 + 0x138);
            if (lVar2 == 0) {
              iVar8 = 0;
            }
            else {
              if (param_3 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(undefined8 *)(lVar5 + 0xe0);
              }
              FUN_108d7a1e8(lVar2,param_3,uVar3,*(undefined8 *)(lVar5 + 0xe8),
                            *(undefined1 *)(lVar5 + 0xd),*(undefined4 *)(lVar5 + 0xbc),
                            *(undefined8 *)(lVar5 + 0x128),param_4,param_5);
              iVar8 = (int)lVar2;
            }
          }
          else {
            iVar8 = 6;
          }
          if ((*(char *)(lVar7 + 0x11) != '\0') &&
             (iVar4 = *(int *)(lVar7 + 0x14) + -1, *(int *)(lVar7 + 0x14) = iVar4, iVar4 == 0)) {
            FUN_108d7f5fc(lVar7);
          }
        }
        param_4 = 0;
        param_5 = 0;
        if (iVar8 == 5) {
          bVar1 = true;
          iVar8 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x28);
      }
      else {
        iVar8 = 0;
      }
      if (iVar4 <= lVar10) break;
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar8 == 0);
    iVar4 = 5;
    if (!bVar1 || iVar8 != 0) {
      iVar4 = iVar8;
    }
  }
  return iVar4;
}



/* Entry: 108d6ef44; end: 108d6ef53;  */

/* WARNING: Removing unreachable block (ram,0x000108d6ebfc) */
/* WARNING: Removing unreachable block (ram,0x000108d6ebf0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ec0c) */

uint FUN_108d6ef44(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    lVar2 = 10;
  }
  else {
    lVar2 = param_1;
    func_0x000108d6ed0c(param_1,param_2);
    if ((int)lVar2 < 0) {
      uVar3 = 1;
      FUN_108d65cb8(param_1,1,&UNK_10f51755f);
      goto LAB_108d6ecb4;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  lVar1 = param_1;
  FUN_108d6edb8(param_1,lVar2,0,0,0);
  uVar3 = (uint)lVar1;
  *(uint *)(param_1 + 0x44) = uVar3;
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
      *(undefined2 *)(lVar2 + 8) = 1;
    }
    else {
      func_0x000108d82720();
    }
  }
LAB_108d6ecb4:
  if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_108d80e10(param_1);
    uVar3 = 7;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x48) & uVar3;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar3;
}



/* Entry: 108d6ef54; end: 108d6efbf;  */

undefined8 FUN_108d6ef54(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if ((iVar1 == -0x5fd65969 || iVar1 == -0xfc486fa) || iVar1 == 0x4b771290) {
    return 1;
  }
  FUN_108d64c00(0x15,&UNK_10f518d7a);
  return 0;
}



/* Entry: 108d6efc0; end: 108d6f19b;  */

undefined * FUN_108d6efc0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    puVar3 = &UNK_10dfa08a0;
  }
  else {
    lVar2 = param_1;
    FUN_108d6ef54();
    if ((int)lVar2 == 0) {
      puVar3 = &UNK_10dfa08bc;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      if (*(char *)(param_1 + 0x51) == '\0') {
        puVar3 = *(undefined **)(param_1 + 0x140);
        FUN_108d67a14(puVar3,2);
        if (puVar3 == (undefined *)0x0) {
          uVar1 = *(uint *)(param_1 + 0x44);
          if (uVar1 == 0x204) {
            puVar3 = &UNK_10f51b857;
          }
          else {
            uVar5 = (ulong)uVar1 & 0xff;
            uVar4 = (uint)uVar5;
            puVar3 = &UNK_10f51b849;
            if ((uVar4 < 0x1b) && (puVar3 = &UNK_10f51b849, uVar4 != 2)) {
              puVar3 = (&PTR_DAT_110ac5208)[uVar5];
            }
          }
          FUN_108d65cb8(param_1,(ulong)uVar1,puVar3);
          puVar3 = *(undefined **)(param_1 + 0x140);
          func_0x000108d67a18(puVar3,2);
        }
        *(undefined1 *)(param_1 + 0x51) = 0;
      }
      else {
        puVar3 = &UNK_10dfa08a0;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*pcRam00000001132979a8)();
      }
    }
  }
  return puVar3;
}



/* Entry: 108d6f19c; end: 108d6f21f;  */

undefined * FUN_108d6f19c(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0x204) {
    return &UNK_10f51b857;
  }
  param_1 = param_1 & 0xff;
  puVar1 = &UNK_10f51b849;
  if ((param_1 < 0x1b) && (param_1 != 2)) {
    puVar1 = (&PTR_DAT_110ac5208)[param_1];
  }
  return puVar1;
}



/* Entry: 108d6f220; end: 108d6f7fb;  */

ulong FUN_108d6f220(ulong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  undefined1 auStack_54 [4];
  
  lStack_68 = 0;
  uStack_60 = 0;
  *param_2 = 0;
  uVar6 = param_1;
  FUN_108d62be4();
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
    FUN_108d64c00(0x15,&UNK_10f51b96f);
    return 0x15;
  }
  bVar3 = true;
  if (((param_3 >> 0xf & 1) == 0) && (iRam0000000113297914 != 0)) {
    if ((param_3 >> 0x10 & 1) == 0) {
      bVar3 = iRam0000000113297918 == 0;
      goto LAB_108d6f2a0;
    }
    bVar3 = false;
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_108d6f2f0;
LAB_108d6f2a4:
    if (iRam0000000113297a74 != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
LAB_108d6f2a0:
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_108d6f2a4;
LAB_108d6f2f0:
    param_3 = param_3 & 0xfffdffff;
  }
  puVar7 = (undefined8 *)0x330;
  uStack_58 = param_3 & 0xfff600e7;
  FUN_108d60848();
  if (puVar7 == (undefined8 *)0x0) goto LAB_108d6f55c;
  _bzero(puVar7,0x330);
  if (!bVar3) {
    if (iRam0000000113297914 == 0) {
      puVar7[3] = 0;
    }
    else {
      lVar9 = 1;
      (*pcRam0000000113297988)();
      puVar7[3] = lVar9;
      if (lVar9 != 0) goto LAB_108d6f358;
    }
    func_0x000108d5e198(puVar7);
    puVar7 = (undefined8 *)0x0;
    goto LAB_108d6f55c;
  }
  if (puVar7[3] != 0) {
LAB_108d6f358:
    (*pcRam0000000113297998)();
  }
  puVar7[0xe] = 0x3e8000007d0;
  puVar7[0xd] = 0x3b9aca003b9aca00;
  puVar7[4] = puVar7 + 0x58;
  *(undefined4 *)(puVar7 + 9) = 0xff;
  puVar7[0x10] = 0xa0000007f;
  puVar7[0xf] = 0x61a8000001f4;
  puVar7[0x12] = 0x8000003e8;
  puVar7[0x11] = 0x3e70000c350;
  *(undefined1 *)((long)puVar7 + 0x4f) = 1;
  *(undefined1 *)((long)puVar7 + 0x53) = 0xff;
  puVar7[7] = uRam0000000113297a40;
  puVar7[0xb] = 0xf03b790600000000;
  *(undefined8 *)((long)puVar7 + 0x94) = 0x7ff8000000000000;
  *(undefined4 *)(puVar7 + 5) = 2;
  *(uint *)((long)puVar7 + 0x2c) = *(uint *)((long)puVar7 + 0x2c) | 0x900050;
  puVar7[0x54] = 0;
  puVar7[0x53] = 0;
  puVar7[0x52] = 0;
  puVar7[0x35] = 0;
  puVar7[0x36] = 0;
  puVar7[0x37] = 0;
  FUN_108d6f998(puVar7,&UNK_10f51757c,1,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f51757c,3,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f51757c,2,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f519f39,1,0,0x108dccb44,0);
  FUN_108d6f998(puVar7,&UNK_10f51b8e7,1,1,FUN_108dcca70,0);
  uVar11 = 0;
  if (*(char *)((long)puVar7 + 0x51) == '\0') {
    puVar10 = puVar7 + 0x52;
    func_0x000108d93668(puVar10,&UNK_10f51757c,auStack_54);
    if (puVar10 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = puVar10[2];
    }
    puVar7[2] = uVar11;
    *(uint *)(puVar7 + 8) = param_3 & 0xfff600e7;
    func_0x000108dc5bd8(param_4,param_1,&uStack_58,puVar7,&uStack_60,&lStack_68);
    uVar11 = uStack_60;
    lVar9 = lStack_68;
    if ((int)param_4 == 0) {
      uVar8 = *puVar7;
      FUN_108d7d91c(uVar8,uStack_60,puVar7,puVar7[4] + 8,0,uStack_58 | 0x100);
      iVar5 = (int)uVar8;
      if (iVar5 == 0) {
        FUN_108d664f8(*(undefined8 *)(puVar7[4] + 8));
        puVar10 = puVar7;
        FUN_108dc616c(puVar7,*(undefined8 *)(puVar7[4] + 8));
        lVar9 = puVar7[4];
        *(undefined8 **)(lVar9 + 0x18) = puVar10;
        if (*(char *)((long)puVar7 + 0x51) == '\0') {
          *(undefined1 *)((long)puVar7 + 0x4e) = *(undefined1 *)((long)puVar10 + 0x71);
        }
        lVar9 = *(long *)(lVar9 + 8);
        if ((*(char *)(lVar9 + 0x11) != '\0') &&
           (iVar5 = *(int *)(lVar9 + 0x14) + -1, *(int *)(lVar9 + 0x14) = iVar5, iVar5 == 0)) {
          FUN_108d7f5fc();
        }
        puVar10 = (undefined8 *)0x78;
        FUN_108d60848();
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined1 *)((long)puVar7 + 0x51) = 1;
        }
        else {
          puVar10[0xe] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[0xd] = 0;
          puVar10[0xc] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[0xc] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *(undefined1 *)((long)puVar10 + 0x71) = 1;
        }
        puVar12 = (undefined8 *)puVar7[4];
        puVar12[7] = puVar10;
        *puVar12 = &UNK_10f516f53;
        *(undefined1 *)(puVar12 + 2) = 3;
        puVar12[4] = &DAT_10f3ed9b4;
        *(undefined1 *)(puVar12 + 6) = 1;
        *(undefined4 *)((long)puVar7 + 0x5c) = 0xa029a697;
        if (*(char *)((long)puVar7 + 0x51) == '\0') {
          *(undefined4 *)((long)puVar7 + 0x44) = 0;
          lVar9 = puVar7[0x28];
          if (lVar9 != 0) {
            if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
              *(undefined2 *)(lVar9 + 8) = 1;
            }
            else {
              func_0x000108d82720();
            }
          }
          func_0x000108dccb78(puVar7);
          puVar10 = puVar7;
          func_0x000108d6f0b0();
          if ((int)puVar10 == 0) {
            FUN_108dccbec(puVar7);
            puVar10 = puVar7;
            func_0x000108d6f0b0();
            if ((int)puVar10 != 0) goto LAB_108d6f540;
          }
          else {
            *(int *)((long)puVar7 + 0x44) = (int)puVar10;
            lVar9 = puVar7[0x28];
            if (lVar9 != 0) {
              if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
                *(undefined2 *)(lVar9 + 8) = 1;
              }
              else {
                func_0x000108d82720();
              }
            }
          }
          FUN_108d6db9c(puVar7,0,uRam000000011329792c,uRam0000000113297930);
          if (puVar7[3] == 0) {
            puVar7[0x23] = FUN_108d6eb5c;
            puVar7[0x24] = 1000;
          }
          else {
            (*pcRam0000000113297998)();
            puVar7[0x23] = FUN_108d6eb5c;
            puVar7[0x24] = 1000;
            if (puVar7[3] != 0) {
              (*pcRam00000001132979a8)();
            }
          }
        }
      }
      else {
        iVar1 = 7;
        if (iVar5 != 0xc0a) {
          iVar1 = iVar5;
        }
        *(int *)((long)puVar7 + 0x44) = iVar1;
        lVar9 = puVar7[0x28];
        if (lVar9 != 0) {
          if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
            *(undefined2 *)(lVar9 + 8) = 1;
          }
          else {
            func_0x000108d82720();
          }
        }
      }
    }
    else {
      if ((int)param_4 == 7) {
        *(undefined1 *)((long)puVar7 + 0x51) = 1;
      }
      puVar2 = (undefined *)0x0;
      if (lStack_68 != 0) {
        puVar2 = &UNK_10f517517;
      }
      FUN_108d65cb8(puVar7,param_4,puVar2);
      func_0x000108d5e198(lVar9);
      uVar11 = uStack_60;
    }
  }
LAB_108d6f540:
  func_0x000108d5e198(uVar11);
  if (puVar7[3] != 0) {
    (*pcRam00000001132979a8)();
  }
LAB_108d6f55c:
  puVar10 = puVar7;
  func_0x000108d6f0b0();
  uVar4 = (uint)puVar10;
  if (uVar4 != 0) {
    if (uVar4 == 7) {
      FUN_108d6dcfc(puVar7,0);
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)((long)puVar7 + 0x5c) = 0x4b771290;
    }
  }
  *param_2 = puVar7;
  return (ulong)(uVar4 & 0xff);
}



/* Entry: 108d6f7fc; end: 108d6f7ff;  */

ulong FUN_108d6f7fc(ulong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  undefined1 auStack_54 [4];
  
  lStack_68 = 0;
  uStack_60 = 0;
  *param_2 = 0;
  uVar6 = param_1;
  FUN_108d62be4();
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
    FUN_108d64c00(0x15,&UNK_10f51b96f);
    return 0x15;
  }
  bVar3 = true;
  if (((param_3 >> 0xf & 1) == 0) && (iRam0000000113297914 != 0)) {
    if ((param_3 >> 0x10 & 1) == 0) {
      bVar3 = iRam0000000113297918 == 0;
      goto LAB_108d6f2a0;
    }
    bVar3 = false;
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_108d6f2f0;
LAB_108d6f2a4:
    if (iRam0000000113297a74 != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
LAB_108d6f2a0:
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_108d6f2a4;
LAB_108d6f2f0:
    param_3 = param_3 & 0xfffdffff;
  }
  puVar7 = (undefined8 *)0x330;
  uStack_58 = param_3 & 0xfff600e7;
  FUN_108d60848();
  if (puVar7 == (undefined8 *)0x0) goto LAB_108d6f55c;
  _bzero(puVar7,0x330);
  if (!bVar3) {
    if (iRam0000000113297914 == 0) {
      puVar7[3] = 0;
    }
    else {
      lVar9 = 1;
      (*pcRam0000000113297988)();
      puVar7[3] = lVar9;
      if (lVar9 != 0) goto LAB_108d6f358;
    }
    func_0x000108d5e198(puVar7);
    puVar7 = (undefined8 *)0x0;
    goto LAB_108d6f55c;
  }
  if (puVar7[3] != 0) {
LAB_108d6f358:
    (*pcRam0000000113297998)();
  }
  puVar7[0xe] = 0x3e8000007d0;
  puVar7[0xd] = 0x3b9aca003b9aca00;
  puVar7[4] = puVar7 + 0x58;
  *(undefined4 *)(puVar7 + 9) = 0xff;
  puVar7[0x10] = 0xa0000007f;
  puVar7[0xf] = 0x61a8000001f4;
  puVar7[0x12] = 0x8000003e8;
  puVar7[0x11] = 0x3e70000c350;
  *(undefined1 *)((long)puVar7 + 0x4f) = 1;
  *(undefined1 *)((long)puVar7 + 0x53) = 0xff;
  puVar7[7] = uRam0000000113297a40;
  puVar7[0xb] = 0xf03b790600000000;
  *(undefined8 *)((long)puVar7 + 0x94) = 0x7ff8000000000000;
  *(undefined4 *)(puVar7 + 5) = 2;
  *(uint *)((long)puVar7 + 0x2c) = *(uint *)((long)puVar7 + 0x2c) | 0x900050;
  puVar7[0x54] = 0;
  puVar7[0x53] = 0;
  puVar7[0x52] = 0;
  puVar7[0x35] = 0;
  puVar7[0x36] = 0;
  puVar7[0x37] = 0;
  FUN_108d6f998(puVar7,&UNK_10f51757c,1,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f51757c,3,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f51757c,2,0,FUN_108dcca70,0);
  FUN_108d6f998(puVar7,&UNK_10f519f39,1,0,0x108dccb44,0);
  FUN_108d6f998(puVar7,&UNK_10f51b8e7,1,1,FUN_108dcca70,0);
  uVar11 = 0;
  if (*(char *)((long)puVar7 + 0x51) == '\0') {
    puVar10 = puVar7 + 0x52;
    func_0x000108d93668(puVar10,&UNK_10f51757c,auStack_54);
    if (puVar10 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = puVar10[2];
    }
    puVar7[2] = uVar11;
    *(uint *)(puVar7 + 8) = param_3 & 0xfff600e7;
    func_0x000108dc5bd8(param_4,param_1,&uStack_58,puVar7,&uStack_60,&lStack_68);
    uVar11 = uStack_60;
    lVar9 = lStack_68;
    if ((int)param_4 == 0) {
      uVar8 = *puVar7;
      FUN_108d7d91c(uVar8,uStack_60,puVar7,puVar7[4] + 8,0,uStack_58 | 0x100);
      iVar5 = (int)uVar8;
      if (iVar5 == 0) {
        FUN_108d664f8(*(undefined8 *)(puVar7[4] + 8));
        puVar10 = puVar7;
        FUN_108dc616c(puVar7,*(undefined8 *)(puVar7[4] + 8));
        lVar9 = puVar7[4];
        *(undefined8 **)(lVar9 + 0x18) = puVar10;
        if (*(char *)((long)puVar7 + 0x51) == '\0') {
          *(undefined1 *)((long)puVar7 + 0x4e) = *(undefined1 *)((long)puVar10 + 0x71);
        }
        lVar9 = *(long *)(lVar9 + 8);
        if ((*(char *)(lVar9 + 0x11) != '\0') &&
           (iVar5 = *(int *)(lVar9 + 0x14) + -1, *(int *)(lVar9 + 0x14) = iVar5, iVar5 == 0)) {
          FUN_108d7f5fc();
        }
        puVar10 = (undefined8 *)0x78;
        FUN_108d60848();
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined1 *)((long)puVar7 + 0x51) = 1;
        }
        else {
          puVar10[0xe] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[0xd] = 0;
          puVar10[0xc] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[0xc] = 0;
          puVar10[0xb] = 0;
          puVar10[10] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *(undefined1 *)((long)puVar10 + 0x71) = 1;
        }
        puVar12 = (undefined8 *)puVar7[4];
        puVar12[7] = puVar10;
        *puVar12 = &UNK_10f516f53;
        *(undefined1 *)(puVar12 + 2) = 3;
        puVar12[4] = &DAT_10f3ed9b4;
        *(undefined1 *)(puVar12 + 6) = 1;
        *(undefined4 *)((long)puVar7 + 0x5c) = 0xa029a697;
        if (*(char *)((long)puVar7 + 0x51) == '\0') {
          *(undefined4 *)((long)puVar7 + 0x44) = 0;
          lVar9 = puVar7[0x28];
          if (lVar9 != 0) {
            if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
              *(undefined2 *)(lVar9 + 8) = 1;
            }
            else {
              func_0x000108d82720();
            }
          }
          func_0x000108dccb78(puVar7);
          puVar10 = puVar7;
          func_0x000108d6f0b0();
          if ((int)puVar10 == 0) {
            FUN_108dccbec(puVar7);
            puVar10 = puVar7;
            func_0x000108d6f0b0();
            if ((int)puVar10 != 0) goto LAB_108d6f540;
          }
          else {
            *(int *)((long)puVar7 + 0x44) = (int)puVar10;
            lVar9 = puVar7[0x28];
            if (lVar9 != 0) {
              if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
                *(undefined2 *)(lVar9 + 8) = 1;
              }
              else {
                func_0x000108d82720();
              }
            }
          }
          FUN_108d6db9c(puVar7,0,uRam000000011329792c,uRam0000000113297930);
          if (puVar7[3] == 0) {
            puVar7[0x23] = FUN_108d6eb5c;
            puVar7[0x24] = 1000;
          }
          else {
            (*pcRam0000000113297998)();
            puVar7[0x23] = FUN_108d6eb5c;
            puVar7[0x24] = 1000;
            if (puVar7[3] != 0) {
              (*pcRam00000001132979a8)();
            }
          }
        }
      }
      else {
        iVar1 = 7;
        if (iVar5 != 0xc0a) {
          iVar1 = iVar5;
        }
        *(int *)((long)puVar7 + 0x44) = iVar1;
        lVar9 = puVar7[0x28];
        if (lVar9 != 0) {
          if ((*(ushort *)(lVar9 + 8) & 0x2460) == 0) {
            *(undefined2 *)(lVar9 + 8) = 1;
          }
          else {
            func_0x000108d82720();
          }
        }
      }
    }
    else {
      if ((int)param_4 == 7) {
        *(undefined1 *)((long)puVar7 + 0x51) = 1;
      }
      puVar2 = (undefined *)0x0;
      if (lStack_68 != 0) {
        puVar2 = &UNK_10f517517;
      }
      FUN_108d65cb8(puVar7,param_4,puVar2);
      func_0x000108d5e198(lVar9);
      uVar11 = uStack_60;
    }
  }
LAB_108d6f540:
  func_0x000108d5e198(uVar11);
  if (puVar7[3] != 0) {
    (*pcRam00000001132979a8)();
  }
LAB_108d6f55c:
  puVar10 = puVar7;
  func_0x000108d6f0b0();
  uVar4 = (uint)puVar10;
  if (uVar4 != 0) {
    if (uVar4 == 7) {
      FUN_108d6dcfc(puVar7,0);
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)((long)puVar7 + 0x5c) = 0x4b771290;
    }
  }
  *param_2 = puVar7;
  return (ulong)(uVar4 & 0xff);
}



/* Entry: 108d6f800; end: 108d6f8e7;  */

void FUN_108d6f800(undefined *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_2 = 0;
  puVar1 = param_1;
  FUN_108d62be4();
  if ((int)puVar1 == 0) {
    puVar2 = (undefined8 *)0x38;
    FUN_108d60848();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar1 = &UNK_10dfa093c;
      if (param_1 != (undefined *)0x0) {
        puVar1 = param_1;
      }
      puVar2[1] = 0;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 1;
      puVar2[5] = 0;
      puVar2[6] = 0;
      FUN_108d67c04(puVar2,puVar1,0xffffffff,2,0);
    }
    puVar3 = puVar2;
    FUN_108d67a14(puVar2,1);
    if ((puVar3 != (undefined8 *)0x0) && (FUN_108d6f220(), (int)puVar3 == 0)) {
      lVar4 = *(long *)(*(long *)(*param_2 + 0x20) + 0x18);
      if ((*(ushort *)(lVar4 + 0x72) & 1) == 0) {
        *(undefined1 *)(*param_2 + 0x4e) = 2;
        *(undefined1 *)(lVar4 + 0x71) = 2;
      }
    }
    FUN_108d6d618(puVar2);
  }
  return;
}



/* Entry: 108d6f8e8; end: 108d6f8ef;  */

uint FUN_108d6f8e8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar1 = param_1;
  FUN_108d6f998(param_1,param_2,param_3,param_4,param_5,0);
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x48) & (uint)lVar1;
  }
  else {
    FUN_108d80e10(param_1);
    uVar2 = 7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar2;
}



/* Entry: 108d6f8f0; end: 108d6f997;  */

uint FUN_108d6f8f0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar1 = param_1;
  FUN_108d6f998(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x48) & (uint)lVar1;
  }
  else {
    FUN_108d80e10(param_1);
    uVar2 = 7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar2;
}



/* Entry: 108d6f998; end: 108d6fb73;  */

undefined8
FUN_108d6f998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_64 [4];
  
  iVar2 = (int)param_3;
  uVar4 = 2;
  if (((iVar2 == 4) || (iVar2 == 8)) || (uVar4 = param_3, 0xfffffffc < iVar2 - 4U)) {
    lVar1 = param_1;
    FUN_108da6a98(param_1,uVar4,param_2,0);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0xa4) != 0) {
        FUN_108d65cb8(param_1,5,&UNK_10f51b92b);
        return 5;
      }
      for (lVar3 = *(long *)(param_1 + 8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x58)) {
        *(ushort *)(lVar3 + 0x8c) = *(ushort *)(lVar3 + 0x8c) | 8;
      }
      if ((uint)uVar4 == (*(byte *)(lVar1 + 8) & 0xfffffff7)) {
        lVar3 = param_1 + 0x290;
        func_0x000108d93668(lVar3,param_2,auStack_64);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        puVar5 = (undefined8 *)(lVar3 + 0x20);
        lVar3 = 3;
        do {
          if (*(char *)(puVar5 + -3) == *(char *)(lVar1 + 8)) {
            if ((code *)*puVar5 != (code *)0x0) {
              (*(code *)*puVar5)(puVar5[-2]);
            }
            puVar5[-1] = 0;
          }
          puVar5 = puVar5 + 5;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    lVar1 = param_1;
    FUN_108da6a98(param_1,uVar4,param_2,1);
    if (lVar1 == 0) {
      uVar4 = 7;
    }
    else {
      *(undefined8 *)(lVar1 + 0x10) = param_4;
      *(undefined8 *)(lVar1 + 0x18) = param_5;
      *(undefined8 *)(lVar1 + 0x20) = param_6;
      *(byte *)(lVar1 + 8) = (byte)uVar4 | (byte)param_3 & 8;
      *(undefined4 *)(param_1 + 0x44) = 0;
      lVar1 = *(long *)(param_1 + 0x140);
      if (lVar1 != 0) {
        if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
          *(undefined2 *)(lVar1 + 8) = 1;
          return 0;
        }
        func_0x000108d82720();
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x15;
    FUN_108d64c00(0x15,&UNK_10f51b96f);
  }
  return uVar4;
}



/* Entry: 108d6fb74; end: 108d6fc47;  */

uint FUN_108d6fb74(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar2 = param_1;
  FUN_108d6e504(param_1,param_2,0xffffffff);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = param_1;
    FUN_108d6f998(param_1,lVar2,param_3,param_4,param_5,0);
    uVar1 = (uint)lVar3;
    func_0x000108d60660(param_1,lVar2);
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x48) & uVar1;
  }
  else {
    FUN_108d80e10(param_1);
    uVar1 = 7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar1;
}



/* Entry: 108d6fc48; end: 108d6fd1f;  */

undefined8 FUN_108d6fc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x128) = param_3;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = param_2;
  }
  else {
    (*pcRam0000000113297998)();
    *(undefined8 *)(param_1 + 0x128) = param_3;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return 0;
}



/* Entry: 108d6fd20; end: 108d6fd2b;  */

undefined1 FUN_108d6fd20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4f);
}



/* Entry: 108d6fd2c; end: 108d6ffd3;  */

uint FUN_108d6fd2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5,undefined8 *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  long lStack_68;
  
  lStack_68 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  FUN_108d62704(param_1);
  lVar5 = param_1;
  FUN_108d6ffd4(param_1,&lStack_68);
  if ((int)lVar5 != 0) {
LAB_108d6fda0:
    bVar9 = false;
    puVar8 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    uVar14 = 0;
    uVar6 = 0;
    uVar13 = 0;
    goto LAB_108d6fdb8;
  }
  lVar2 = param_1;
  func_0x000108d700dc(param_1,param_3,param_2);
  if (lVar2 == 0) {
    bVar9 = false;
    puVar8 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    uVar14 = 0;
    uVar6 = 0;
    uVar13 = 0;
    goto LAB_108d6fdb8;
  }
  if (*(long *)(lVar2 + 0x18) != 0) goto LAB_108d6fda0;
  if (param_4 == 0) {
LAB_108d6ff9c:
    puVar4 = (undefined *)0x0;
    uVar14 = 0;
    uVar13 = 0;
    uVar6 = 1;
    puVar8 = &DAT_10f517574;
  }
  else {
    sVar1 = *(short *)(lVar2 + 0x3e);
    if (sVar1 < 1) {
      lVar11 = 0;
      puVar7 = (undefined8 *)0x0;
LAB_108d6ff38:
      iVar10 = (int)lVar11;
      if (iVar10 == sVar1) goto LAB_108d6ff40;
    }
    else {
      lVar11 = 0;
      puVar7 = *(undefined8 **)(lVar2 + 8);
      do {
        uVar3 = *puVar7;
        FUN_108d5e044(uVar3,param_4);
        if ((int)uVar3 == 0) goto LAB_108d6ff38;
        lVar11 = lVar11 + 1;
        puVar7 = puVar7 + 6;
      } while (sVar1 != lVar11);
LAB_108d6ff40:
      if (((*(byte *)(lVar2 + 0x46) >> 5 & 1) != 0) || (FUN_108d70180(), (int)param_4 == 0))
      goto LAB_108d6fda0;
      sVar1 = *(short *)(lVar2 + 0x3c);
      iVar10 = (int)sVar1;
      if (sVar1 < 0) goto LAB_108d6ff9c;
      puVar7 = (undefined8 *)(*(long *)(lVar2 + 8) + (long)(int)sVar1 * 0x30);
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_108d6ff9c;
    puVar8 = (undefined *)puVar7[3];
    puVar4 = (undefined *)puVar7[4];
    uVar14 = (uint)(*(char *)(puVar7 + 5) != '\0');
    uVar6 = *(byte *)((long)puVar7 + 0x2b) & 1;
    if (iVar10 == *(short *)(lVar2 + 0x3c)) {
      uVar13 = *(byte *)(lVar2 + 0x46) >> 3 & 1;
    }
    else {
      uVar13 = 0;
    }
  }
  puVar12 = &UNK_10f51757c;
  if (puVar4 != (undefined *)0x0) {
    puVar12 = puVar4;
  }
  bVar9 = true;
LAB_108d6fdb8:
  func_0x000108d6277c(param_1);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = puVar8;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = puVar12;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar14;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar6;
  }
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar13;
  }
  if ((int)lVar5 != 0) {
    bVar9 = true;
  }
  if (!bVar9) {
    func_0x000108d60660(param_1);
    lVar2 = param_1;
    FUN_108d6a8e0(param_1,&UNK_10f517583);
    lVar5 = 1;
    lStack_68 = lVar2;
  }
  puVar12 = (undefined *)0x0;
  if (lStack_68 != 0) {
    puVar12 = &UNK_10f517517;
  }
  FUN_108d65cb8(param_1,lVar5,puVar12);
  func_0x000108d60660(param_1,lStack_68);
  if (((uint)lVar5 == 0xc0a) || (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_108d80e10(param_1);
    uVar6 = 7;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x48) & (uint)lVar5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar6;
}



/* Entry: 108d6ffd4; end: 108d7017f;  */

long FUN_108d6ffd4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0xa1) = 1;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x71);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 0x18;
    do {
      if ((lVar4 != 1) && ((*(ushort *)(*(long *)(lVar2 + lVar5) + 0x72) & 1) == 0)) {
        lVar2 = param_1;
        func_0x000108dccd20(param_1,lVar4,param_2);
        if ((int)lVar2 != 0) {
          FUN_108d89c20(param_1,lVar4);
          goto LAB_108d700c0;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        lVar2 = *(long *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < iVar3);
  }
  if (((*(ushort *)(*(long *)(lVar2 + 0x38) + 0x72) & 1) == 0) &&
     (lVar2 = param_1, func_0x000108dccd20(param_1,1,param_2), (int)lVar2 != 0)) {
    func_0x000108d8e2fc(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
LAB_108d700c0:
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  else {
    lVar2 = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    if ((uVar1 >> 1 & 1) == 0) {
      lVar2 = 0;
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffd;
    }
  }
  return lVar2;
}



/* Entry: 108d70180; end: 108d7029b;  */

bool FUN_108d70180(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_108d5e044(param_1,&UNK_10f51b9db);
  if (((int)uVar2 == 0) || (uVar2 = param_1, FUN_108d5e044(param_1,&UNK_10f5194be), (int)uVar2 == 0)
     ) {
    bVar1 = true;
  }
  else {
    FUN_108d5e044(param_1,&DAT_10f51b9e3);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 108d7029c; end: 108d70403;  */

long * FUN_108d7029c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar2 = param_1;
  func_0x000108d7039c(param_1,param_2);
  if (lVar2 == 0) {
    plVar3 = (long *)0x1;
  }
  else {
    if (*(char *)(lVar2 + 0x11) != '\0') {
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      if (*(char *)(lVar2 + 0x12) == '\0') {
        FUN_108d7f528(lVar2);
      }
    }
    plVar3 = *(long **)(**(long **)(lVar2 + 8) + 0x48);
    if ((int)param_3 == 7) {
      *param_4 = plVar3;
      plVar3 = (long *)0x0;
    }
    else if (*plVar3 == 0) {
      plVar3 = (long *)0xc;
    }
    else {
      (**(code **)(*plVar3 + 0x50))(plVar3,param_3,param_4);
    }
    if (*(char *)(lVar2 + 0x11) != '\0') {
      iVar1 = *(int *)(lVar2 + 0x14) + -1;
      *(int *)(lVar2 + 0x14) = iVar1;
      if (iVar1 == 0) {
        FUN_108d7f5fc(lVar2);
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar3;
}



/* Entry: 108d70404; end: 108d70993;  */

ulong FUN_108d70404(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  uint uStack_64;
  
  uVar15 = 0;
  switch(param_1) {
  case 5:
    uVar12 = 0x11372e770;
    uVar7 = 0x11372e873;
    goto code_r0x000108d705b4;
  case 6:
    uVar7 = 0x11372e770;
    uVar12 = 0x11372e873;
code_r0x000108d705b4:
    _memcpy(uVar7,uVar12,0x103);
    goto code_r0x000108d70798;
  case 7:
    FUN_108d64cc0(0,0);
    goto code_r0x000108d70798;
  case 8:
    puVar8 = (uint *)0x200;
    FUN_108d60848();
    if (puVar8 != (uint *)0x0) {
      puVar8[0x7a] = 0;
      puVar8[0x7b] = 0;
      puVar8[0x78] = 0;
      puVar8[0x79] = 0;
      puVar8[0x7e] = 0;
      puVar8[0x7f] = 0;
      puVar8[0x7c] = 0;
      puVar8[0x7d] = 0;
      puVar8[0x72] = 0;
      puVar8[0x73] = 0;
      puVar8[0x70] = 0;
      puVar8[0x71] = 0;
      puVar8[0x76] = 0;
      puVar8[0x77] = 0;
      puVar8[0x74] = 0;
      puVar8[0x75] = 0;
      puVar8[0x6a] = 0;
      puVar8[0x6b] = 0;
      puVar8[0x68] = 0;
      puVar8[0x69] = 0;
      puVar8[0x6e] = 0;
      puVar8[0x6f] = 0;
      puVar8[0x6c] = 0;
      puVar8[0x6d] = 0;
      puVar8[0x62] = 0;
      puVar8[99] = 0;
      puVar8[0x60] = 0;
      puVar8[0x61] = 0;
      puVar8[0x66] = 0;
      puVar8[0x67] = 0;
      puVar8[100] = 0;
      puVar8[0x65] = 0;
      puVar8[0x5a] = 0;
      puVar8[0x5b] = 0;
      puVar8[0x58] = 0;
      puVar8[0x59] = 0;
      puVar8[0x5e] = 0;
      puVar8[0x5f] = 0;
      puVar8[0x5c] = 0;
      puVar8[0x5d] = 0;
      puVar8[0x52] = 0;
      puVar8[0x53] = 0;
      puVar8[0x50] = 0;
      puVar8[0x51] = 0;
      puVar8[0x56] = 0;
      puVar8[0x57] = 0;
      puVar8[0x54] = 0;
      puVar8[0x55] = 0;
      puVar8[0x4a] = 0;
      puVar8[0x4b] = 0;
      puVar8[0x48] = 0;
      puVar8[0x49] = 0;
      puVar8[0x4e] = 0;
      puVar8[0x4f] = 0;
      puVar8[0x4c] = 0;
      puVar8[0x4d] = 0;
      puVar8[0x42] = 0;
      puVar8[0x43] = 0;
      puVar8[0x40] = 0;
      puVar8[0x41] = 0;
      puVar8[0x46] = 0;
      puVar8[0x47] = 0;
      puVar8[0x44] = 0;
      puVar8[0x45] = 0;
      puVar8[0x3a] = 0;
      puVar8[0x3b] = 0;
      puVar8[0x38] = 0;
      puVar8[0x39] = 0;
      puVar8[0x3e] = 0;
      puVar8[0x3f] = 0;
      puVar8[0x3c] = 0;
      puVar8[0x3d] = 0;
      puVar8[0x32] = 0;
      puVar8[0x33] = 0;
      puVar8[0x30] = 0;
      puVar8[0x31] = 0;
      puVar8[0x36] = 0;
      puVar8[0x37] = 0;
      puVar8[0x34] = 0;
      puVar8[0x35] = 0;
      puVar8[0x2a] = 0;
      puVar8[0x2b] = 0;
      puVar8[0x28] = 0;
      puVar8[0x29] = 0;
      puVar8[0x2e] = 0;
      puVar8[0x2f] = 0;
      puVar8[0x2c] = 0;
      puVar8[0x2d] = 0;
      puVar8[0x22] = 0;
      puVar8[0x23] = 0;
      puVar8[0x20] = 0;
      puVar8[0x21] = 0;
      puVar8[0x26] = 0;
      puVar8[0x27] = 0;
      puVar8[0x24] = 0;
      puVar8[0x25] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *puVar8 = in_stack_00000000;
    }
    iVar4 = in_stack_00000000 + 0xe;
    if (-8 < (int)in_stack_00000000) {
      iVar4 = in_stack_00000000 + 7;
    }
    lVar9 = (long)((iVar4 >> 3) + 1);
    func_0x000108d65d8c();
    lVar6 = lVar9;
    FUN_108d62be4();
    if ((int)lVar6 == 0) {
      lVar6 = 0x200;
      FUN_108d60848();
      uVar15 = 0xffffffff;
      if ((puVar8 == (uint *)0x0) || (lVar9 == 0 || lVar6 == 0)) goto code_r0x000108d706b8;
      lVar16 = 0;
      do {
        while( true ) {
          puVar10 = (uint *)(CONCAT44(in_stack_0000000c,in_stack_00000008) + lVar16 * 4);
          uVar13 = *puVar10;
          if (uVar13 - 1 < 2 || uVar13 == 5) {
            uStack_64 = puVar10[2] - 1;
            puVar10[2] = puVar10[3] + puVar10[2];
            lVar14 = 4;
          }
          else {
            if (uVar13 == 0) {
              puVar10 = puVar8;
              FUN_108d7898c(puVar8,in_stack_00000000 + 1);
              puVar11 = puVar8;
              FUN_108d7898c(puVar8,0);
              uVar17 = (ulong)(((int)puVar10 - in_stack_00000000) + (int)puVar11 + *puVar8);
              uVar15 = uVar17;
              if ((int)in_stack_00000000 < 1) goto code_r0x000108d706b8;
              uVar18 = 1;
              goto code_r0x000108d7094c;
            }
            FUN_108d64cc0(4,&uStack_64);
            lVar14 = 2;
          }
          uVar2 = puVar10[1];
          uVar5 = uVar2 - 1;
          puVar10[1] = uVar5;
          lVar1 = 0;
          if (uVar5 == 0 || (int)uVar2 < 1) {
            lVar1 = lVar14;
          }
          lVar16 = lVar1 + lVar16;
          iVar4 = 0;
          if (in_stack_00000000 != 0) {
            iVar4 = (int)(uStack_64 & 0x7fffffff) / (int)in_stack_00000000;
          }
          uStack_64 = (uStack_64 & 0x7fffffff) - iVar4 * in_stack_00000000;
          uVar2 = uStack_64 + 1;
          uVar15 = (ulong)(uVar2 >> 3);
          bVar3 = (byte)(1 << (ulong)(uVar2 & 7));
          if ((uVar13 & 1) != 0) break;
          *(byte *)(lVar9 + uVar15) = *(byte *)(lVar9 + uVar15) & (bVar3 ^ 0xff);
          FUN_108d80a04(puVar8,uVar2,lVar6);
        }
        *(byte *)(lVar9 + uVar15) = *(byte *)(lVar9 + uVar15) | bVar3;
      } while ((uVar13 == 5) || (puVar10 = puVar8, FUN_108d7668c(), (int)puVar10 == 0));
    }
    else {
      lVar6 = 0;
    }
    uVar15 = 0xffffffff;
    goto code_r0x000108d706b8;
  case 9:
    pcRam0000000113297ab0 = (code *)CONCAT44(in_stack_00000004,in_stack_00000000);
    if (pcRam0000000113297ab0 != (code *)0x0) {
      uVar15 = 0;
      (*pcRam0000000113297ab0)(0);
      return uVar15;
    }
    goto code_r0x000108d70798;
  case 10:
    uVar15 = 0;
    uRam000000011372e6f8 = CONCAT44(in_stack_00000004,in_stack_00000000);
    uRam000000011372e700 = CONCAT44(in_stack_0000000c,in_stack_00000008);
    break;
  case 0xb:
    uVar15 = (ulong)uRam0000000113298da4;
    if (in_stack_00000000 != 0) {
      uRam0000000113298da4 = in_stack_00000000;
    }
    break;
  case 0xc:
    uVar15 = 0;
    break;
  case 0xd:
    uVar15 = (ulong)in_stack_00000000;
    break;
  case 0xe:
    lVar6 = CONCAT44(in_stack_00000004,in_stack_00000000);
    if (*(long *)(lVar6 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    FUN_108d70994(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 8),0,in_stack_00000008,0);
    lVar6 = *(long *)(lVar6 + 0x18);
    goto joined_r0x000108d704ec;
  case 0xf:
    uVar15 = 0;
    *(short *)(CONCAT44(in_stack_00000004,in_stack_00000000) + 0x4c) = (short)in_stack_00000008;
    break;
  case 0x10:
    lVar6 = CONCAT44(in_stack_00000004,in_stack_00000000);
    if (lVar6 == 0) {
      uVar13 = 0;
    }
    else {
      lVar9 = lVar6;
      _strlen(lVar6);
      uVar13 = (uint)lVar9 & 0x3fffffff;
    }
    FUN_108d95db0(lVar6,uVar13);
    uVar13 = 0;
    if ((int)lVar6 != 0x1b) {
      uVar13 = 0x7c;
    }
    uVar15 = (ulong)uVar13;
    break;
  case 0x11:
    uVar15 = (ulong)in_stack_00000000;
    if (in_stack_00000000 != 0) {
      FUN_108d70ac4();
      *(ulong *)CONCAT44(in_stack_0000000c,in_stack_00000008) = uVar15;
    }
    func_0x000108d70c1c(CONCAT44(in_stack_00000014,in_stack_00000010));
    goto code_r0x000108d70798;
  case 0x12:
    uVar15 = 0;
    uRam0000000113297ab8 = in_stack_00000000;
    break;
  case 0x14:
    uVar15 = 0;
    uRam0000000113297928 = in_stack_00000000;
    break;
  case 0x16:
    uVar15 = 10;
    break;
  case 0x17:
    uVar15 = (ulong)(iRam0000000113297a7c == 0);
    break;
  case 0x18:
    uVar15 = 0;
    *(undefined4 *)(CONCAT44(in_stack_00000004,in_stack_00000000) + 0x98) = in_stack_00000008;
    break;
  case 0x19:
    lVar6 = CONCAT44(in_stack_00000004,in_stack_00000000);
    if (*(long *)(lVar6 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    lVar9 = lVar6;
    func_0x000108d6ed0c(lVar6,CONCAT44(in_stack_0000000c,in_stack_00000008));
    *(char *)(lVar6 + 0xa0) = (char)lVar9;
    *(char *)(lVar6 + 0xa3) = (char)in_stack_00000010;
    *(char *)(lVar6 + 0xa1) = (char)in_stack_00000010;
    *(int *)(lVar6 + 0x9c) = in_stack_00000018;
    if (*(char *)(lVar6 + 0xa1) == '\0' && 0 < in_stack_00000018) {
      FUN_108d61aa4(lVar6);
    }
    lVar6 = *(long *)(lVar6 + 0x18);
joined_r0x000108d704ec:
    if (lVar6 != 0) {
      (*pcRam00000001132979a8)();
    }
code_r0x000108d70798:
    uVar15 = 0;
  }
  return uVar15;
  while (uVar13 = (uint)uVar18 + 1, uVar18 = (ulong)uVar13, uVar15 = uVar17,
        uVar13 - in_stack_00000000 != 1) {
code_r0x000108d7094c:
    bVar3 = *(byte *)(lVar9 + (uVar18 >> 3));
    puVar10 = puVar8;
    FUN_108d7898c(puVar8,uVar18);
    uVar15 = uVar18;
    if ((bVar3 >> (ulong)((uint)uVar18 & 7) & 1) != (uint)puVar10) break;
  }
code_r0x000108d706b8:
  func_0x000108d5e198(lVar6);
  func_0x000108d5e198(lVar9);
  FUN_108d77c44(puVar8);
  return uVar15;
}



/* Entry: 108d70994; end: 108d70ac3;  */

undefined8 FUN_108d70994(long param_1,uint param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if ((int)(uint)*(byte *)((long)puVar3 + 0x26) < (int)param_3) {
    *(char *)((long)puVar3 + 0x26) = (char)param_3;
  }
  if ((*(ushort *)(puVar3 + 5) >> 1 & 1) == 0) {
    if ((int)param_3 < 0) {
      param_3 = (ulong)(uint)(*(int *)((long)puVar3 + 0x34) - *(int *)(puVar3 + 7));
    }
    if ((param_2 - 0x200 < 0xfe01) && ((param_2 + 0x1ffff & param_2) == 0)) {
      *(uint *)((long)puVar3 + 0x34) = param_2;
      if (puVar3[0x11] != 0) {
        puVar3[0x11] = puVar3[0x11] + -4;
        func_0x000108d78fdc();
        puVar3[0x11] = 0;
      }
    }
    uVar1 = *puVar3;
    FUN_108d78ba4(uVar1,(long)puVar3 + 0x34,param_3);
    *(uint *)(puVar3 + 7) = *(int *)((long)puVar3 + 0x34) - ((uint)param_3 & 0xffff);
    if (param_4 != 0) {
      *(ushort *)(puVar3 + 5) = *(ushort *)(puVar3 + 5) | 2;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      return uVar1;
    }
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      return 8;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    uVar1 = 8;
  }
  *(int *)(param_1 + 0x14) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_108d7f5fc(param_1);
  }
  return uVar1;
}



/* Entry: 108d70ac4; end: 108d70ddf;  */

long * FUN_108d70ac4(int param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (lRam0000000113829af0 != 0) {
    (*pcRam0000000113297998)();
  }
  plVar4 = (long *)(long)param_1;
  if ((long)plRam0000000113829ae0 < (long)param_1) {
    plRam0000000113829ae0 = plVar4;
  }
  plRam0000000113829a90 = plVar4;
  if (iRam0000000113829b20 == 0 || iRam0000000113297a58 < param_1) {
    if (lRam0000000113829af0 != 0) {
      (*pcRam00000001132979a8)();
    }
    FUN_108d60848();
    if (iRam0000000113297910 == 0) {
      return plVar4;
    }
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    plVar3 = plVar4;
    (*pcRam0000000113297950)();
    lRam0000000113829a70 = lRam0000000113829a70 + (int)plVar3;
    if (lRam0000000113829ac0 < lRam0000000113829a70) {
      lRam0000000113829ac0 = lRam0000000113829a70;
    }
  }
  else {
    iRam0000000113829b20 = iRam0000000113829b20 + -1;
    lVar2 = lRam0000000113829a68 + 1;
    bVar1 = lRam0000000113829ab8 <= lRam0000000113829a68;
    plVar4 = plRam0000000113829b18;
    lRam0000000113829a68 = lVar2;
    plRam0000000113829b18 = (long *)*plRam0000000113829b18;
    if (bVar1) {
      lRam0000000113829ab8 = lVar2;
    }
  }
  if (lRam0000000113829af0 != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar4;
}



/* Entry: 108d70de0; end: 108d70f6b;  */

bool FUN_108d70de0(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  
  func_0x000108d70d54();
  bVar1 = param_3 == 0;
  if (param_1 != 0) {
    FUN_108d96384(param_1,1,!bVar1);
    bVar1 = (int)param_1 == 0;
  }
  return !bVar1;
}



/* Entry: 108d70f6c; end: 108d70f97;  */

uint FUN_108d70f6c(long param_1)

{
  uint uVar1;
  
  func_0x000108d7039c();
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x28) & 1;
  }
  return uVar1;
}



/* Entry: 108d70f98; end: 108d71003;  */

long * FUN_108d70f98(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 == (long *)0x0) {
    plVar1 = param_1;
    FUN_108d6a908();
    param_1[2] = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      FUN_108d71098(plVar1,0x9b,0,0,0);
    }
    if ((param_1[0x38] == 0) && ((*(ushort *)(*param_1 + 0x4c) >> 3 & 1) == 0)) {
      *(undefined1 *)((long)param_1 + 0x23) = 1;
    }
  }
  return plVar1;
}



/* Entry: 108d71004; end: 108d71097;  */

void FUN_108d71004(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  FUN_108d712cc(param_1[4],(ulong)*(ushort *)(param_1 + 0x11) << 1);
  func_0x000108d60660(lVar4,param_1[4]);
  *(short *)(param_1 + 0x11) = (short)param_2;
  FUN_108d68fc8(lVar4,(long)(param_2 * 2) * 0x38);
  param_1[4] = lVar4;
  if ((0 < param_2) && (lVar4 != 0)) {
    lVar1 = *param_1;
    iVar3 = param_2 * 2 + 1;
    plVar2 = (long *)(lVar4 + 0x28);
    do {
      *(undefined2 *)(plVar2 + -4) = 1;
      *plVar2 = lVar1;
      iVar3 = iVar3 + -1;
      plVar2 = plVar2 + 7;
    } while (1 < iVar3);
  }
  return;
}



/* Entry: 108d71098; end: 108d71133;  */

int FUN_108d71098(long param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = iVar1;
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x60) <= iVar1) {
    lVar2 = param_1;
    FUN_108d71134();
    if ((int)lVar2 != 0) {
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x3c) = iVar3 + 1;
  puVar4 = (undefined1 *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x18);
  *puVar4 = param_2;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = param_3;
  *(undefined4 *)(puVar4 + 8) = param_4;
  *(undefined4 *)(puVar4 + 0xc) = param_5;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[1] = 0;
  return iVar1;
}



/* Entry: 108d71134; end: 108d712cb;  */

undefined8 FUN_108d71134(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar6 = *(ulong **)(param_1 + 0x30);
  lVar1 = 0x3f0;
  if ((int)puVar6[0xc] != 0) {
    lVar1 = (long)(int)puVar6[0xc] * 0x30;
  }
  uVar2 = *puVar6;
  func_0x000108d711ec(uVar2,*(undefined8 *)(param_1 + 8),lVar1);
  if (uVar2 == 0) {
    uVar3 = 7;
  }
  else {
    uVar5 = *puVar6;
    if (((uVar5 == 0) || (uVar2 < *(ulong *)(uVar5 + 0x170))) ||
       (*(ulong *)(uVar5 + 0x178) <= uVar2)) {
      uVar5 = uVar2;
      (*pcRam0000000113297950)();
      uVar4 = (uint)uVar5;
    }
    else {
      uVar4 = (uint)*(ushort *)(uVar5 + 0x150);
    }
    uVar3 = 0;
    *(int *)(puVar6 + 0xc) = (int)((ulong)(long)(int)uVar4 / 0x18);
    *(ulong *)(param_1 + 8) = uVar2;
  }
  return uVar3;
}



/* Entry: 108d712cc; end: 108d71387;  */

void FUN_108d712cc(ulong param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = param_1 + (long)param_2 * 0x38;
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar2 + 0x328) == 0) {
      uVar1 = *(undefined1 *)(lVar2 + 0x51);
      do {
        if ((*(ushort *)(param_1 + 8) & 0x2460) == 0) {
          if (*(int *)(param_1 + 0x20) != 0) {
            func_0x000108d60660(lVar2,*(undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
        }
        else {
          FUN_108d826d0(param_1);
        }
        *(undefined2 *)(param_1 + 8) = 0x80;
        param_1 = param_1 + 0x38;
      } while (param_1 < uVar3);
      *(undefined1 *)(lVar2 + 0x51) = uVar1;
    }
    else {
      do {
        if (*(int *)(param_1 + 0x20) != 0) {
          func_0x000108d60660(lVar2,*(undefined8 *)(param_1 + 0x18));
        }
        param_1 = param_1 + 0x38;
      } while (param_1 < uVar3);
    }
  }
  return;
}



/* Entry: 108d71388; end: 108d71533;  */

void FUN_108d71388(undefined4 *param_1)

{
  long lVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_108d606b0(*(undefined8 *)(param_1 + 2),*param_1);
    FUN_108d606b0(*(undefined8 *)(param_1 + 4),*param_1);
    if (*(long *)(param_1 + 6) != 0) {
      func_0x000108d5e198();
    }
    func_0x000108d60cd4(*(undefined8 *)(param_1 + 10));
    func_0x000108d60cd4(*(undefined8 *)(param_1 + 0xc));
    FUN_108d606b0(param_1,0x40);
    lVar1 = 2;
    func_0x000108d60700();
    if (lVar1 != 0) {
      (*pcRam0000000113297998)();
    }
    iRam000000011372e6c4 = iRam000000011372e6c4 + -1;
    if (iRam000000011372e6c4 == 0) {
      if (lRam000000011372e6d8 != 0) {
        (*pcRam0000000113297998)();
      }
      if (lRam000000011372e6e0 != 0) {
        FUN_108d606b0(lRam000000011372e6e0,0x98);
        lRam000000011372e6e0 = 0;
      }
      if (lRam000000011372e6d8 != 0) {
        (*pcRam00000001132979a8)();
        if (lRam000000011372e6d8 != 0) {
          (*pcRam0000000113297990)();
        }
      }
      lRam000000011372e6d8 = 0;
      iRam000000011372e6c4 = 0;
    }
    lVar1 = 2;
    func_0x000108d60700();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d7148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001132979a8)();
      return;
    }
  }
  return;
}



/* Entry: 108d71534; end: 108d7169b;  */

undefined8 FUN_108d71534(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  if (((*(ushort *)(lVar3 + 0x28) >> 1 & 1) == 0) ||
     ((bool)*(char *)(lVar3 + 0x21) == (param_2 != 0))) {
    uVar2 = 0;
    *(bool *)(lVar3 + 0x21) = param_2 != 0;
    *(bool *)(lVar3 + 0x22) = param_2 == 2;
  }
  else {
    uVar2 = 8;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return uVar2;
}



/* Entry: 108d7169c; end: 108d7173f;  */

long * FUN_108d7169c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  char cStack_74;
  undefined1 auStack_6e [70];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined4 *)(param_1 + 0x68);
  puStack_90 = auStack_6e;
  uStack_80 = 0x4600000000;
  cStack_74 = '\0';
  lStack_98 = param_1;
  puStack_88 = puStack_90;
  FUN_108d63850(&lStack_98,1,param_2,param_3);
  plVar1 = &lStack_98;
  FUN_108d64afc(plVar1);
  if (cStack_74 == '\x01') {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar1;
  }
  ___stack_chk_fail();
  return (long *)0x0;
}



/* Entry: 108d71740; end: 108d7174f;  */

undefined8 FUN_108d71740(void)

{
  return 0;
}



/* Entry: 108d71750; end: 108d71857;  */

undefined8 * FUN_108d71750(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 auStack_38 [2];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)0x40;
    FUN_108d60848();
    param_1 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      _pthread_mutex_init(puVar2,0);
    }
  }
  else if (iVar1 == 1) {
    puVar2 = (undefined8 *)0x40;
    FUN_108d60848();
    param_1 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      _pthread_mutexattr_init(auStack_38);
      _pthread_mutexattr_settype(auStack_38,2);
      _pthread_mutex_init(puVar2,auStack_38);
      param_1 = auStack_38;
      _pthread_mutexattr_destroy();
    }
  }
  else {
    puVar2 = (undefined8 *)((long)iVar1 * 0x40 + 0x113297a40);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _pthread_mutex_destroy();
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined8 *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar2 = param_1;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(param_1);
      param_1 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return param_1;
  }
  return puVar2;
}



/* Entry: 108d71858; end: 108d7185b;  */

void FUN_108d71858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_11034c908)();
  return;
}



/* Entry: 108d7185c; end: 108d7187b;  */

undefined4 FUN_108d7185c(int param_1)

{
  undefined4 uVar1;
  
  _pthread_mutex_trylock();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 108d7187c; end: 108d718ab;  */

void FUN_108d7187c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)();
  return;
}



/* Entry: 108d718ac; end: 108d7193b;  */

void FUN_108d718ac(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = uRam0000000113829b08;
  pcVar2 = pcRam0000000113829b00;
  uVar1 = uRam0000000113829a50;
  if (pcRam0000000113829b00 != (code *)0x0) {
    pcRam0000000113829b00 = (code *)0x0;
    if (lRam0000000113829af0 != 0) {
      (*pcRam00000001132979a8)();
    }
    (*pcVar2)(uVar3,uVar1,param_1);
    if (lRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  pcRam0000000113829b00 = pcVar2;
  uRam0000000113829b08 = uVar3;
  return;
}



/* Entry: 108d7193c; end: 108d71997;  */

void FUN_108d7193c(long param_1,ulong param_2)

{
  uint uVar1;
  
  if ((param_2 < *(ulong *)(param_1 + 0x170)) || (*(ulong *)(param_1 + 0x178) <= param_2)) {
    (*pcRam0000000113297950)();
    uVar1 = (uint)param_2;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x150);
  }
  **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar1;
  return;
}



/* Entry: 108d71998; end: 108d719c3;  */

void FUN_108d71998(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = iVar2 + (int)param_3;
  if (iVar1 < *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x18) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (*(long *)(param_1 + 0x10) + (long)iVar2,param_2,(long)(int)param_3);
    return;
  }
  uVar3 = param_1;
  func_0x000108d71acc(param_1,param_3);
  if (0 < (int)uVar3) {
    _memcpy(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18),param_2,uVar3 & 0xffffffff);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)uVar3;
  }
  return;
}



/* Entry: 108d719c4; end: 108d71a6b;  */

void FUN_108d719c4(long param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (((long)((long)*(int *)(param_1 + 0x18) + (ulong)param_2) < (long)*(int *)(param_1 + 0x1c)) ||
     (lVar2 = param_1, func_0x000108d71acc(), param_2 = (uint)lVar2, 0 < (int)param_2)) {
    param_2 = param_2 + 1;
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)iVar1) = param_3;
      param_2 = param_2 - 1;
    } while (1 < param_2);
  }
  return;
}



/* Entry: 108d71a6c; end: 108d71c2b;  */

void FUN_108d71a6c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000108d71acc(param_1,param_3);
  if (0 < (int)uVar1) {
    _memcpy(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18),param_2,uVar1 & 0xffffffff);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)uVar1;
  }
  return;
}


