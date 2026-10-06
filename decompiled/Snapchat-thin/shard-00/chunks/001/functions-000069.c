/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001ef48c; end: 1001ef4f3;  */

void FUN_1001ef48c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 200);
  if (lVar2 == 0) {
    puVar3 = (undefined2 *)&UNK_10e52acc8;
    lVar2 = 9;
  }
  else {
    puVar3 = *(undefined2 **)(*(long *)(param_1 + 8) + 0xc0);
  }
  lVar2 = lVar2 * 2;
  do {
    lVar2 = lVar2 + -2;
    uVar1 = param_2;
    FUN_1001ec108(param_2,*puVar3);
    puVar3 = puVar3 + 1;
  } while ((int)uVar1 != 0 && lVar2 != 0);
  return;
}



/* Entry: 1001ef4f4; end: 1001ef62f;  */

void FUN_1001ef4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if ((((*(long *)(puVar2[0xd] + 0x240) != 0) && ((*(ushort *)(puVar2[6] + 0xd4) >> 5 & 1) == 0)) &&
      ((*(byte *)*puVar2 & 1) == 0)) &&
     (((param_4 != 1 && (*(ushort *)((long)param_1 + 0x1c) < 0x304)) &&
      (uVar1 = param_2, FUN_1001ec108(param_2,0x3374), (int)uVar1 != 0)))) {
    FUN_1001ec108(param_2,0);
  }
  return;
}



/* Entry: 1001ef630; end: 1001ef72b;  */

undefined1 * FUN_1001ef630(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    return (undefined1 *)0x1;
  }
  if (((param_1[1] == 0) ||
      (((plVar2 = *(long **)(param_1[1] + 0xd0), plVar2 == (long *)0x0 &&
        (plVar2 = *(long **)(param_1[0xd] + 0x270), plVar2 == (long *)0x0)) || (*plVar2 == 0)))) ||
     (*(char *)*param_1 == '\0')) {
    puVar1 = (undefined1 *)0x1;
  }
  else {
    puVar1 = param_3;
    FUN_1001ec108(param_3,0xe);
    if (((int)puVar1 != 0) &&
       (puVar1 = param_3, FUN_1001ec3c0(param_3,auStack_50,2), (int)puVar1 != 0)) {
      puVar1 = auStack_50;
      FUN_1001ec3c0(puVar1,auStack_70,2);
      if ((int)puVar1 != 0) {
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          lVar4 = 0;
          do {
            puVar1 = auStack_70;
            FUN_1001ec108(auStack_70,*(undefined2 *)(*(long *)(plVar2[1] + lVar4 * 8) + 8));
            if ((int)puVar1 == 0) {
              return puVar1;
            }
            lVar4 = lVar4 + 1;
          } while (lVar3 != lVar4);
        }
        puVar1 = auStack_50;
        FUN_1001ec260(puVar1,0);
        if ((int)puVar1 != 0) {
          FUN_1001ebf4c(param_3);
          puVar1 = (undefined1 *)(ulong)((int)param_3 != 0);
        }
      }
    }
  }
  return puVar1;
}



/* Entry: 1001ef72c; end: 1001ef8bf;  */

undefined1 * FUN_1001ef72c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  if (*(ushort *)(param_1 + 0x1e) < 0x304) {
    return (undefined1 *)0x1;
  }
  puVar1 = auStack_60;
  puVar2 = param_3;
  FUN_1001ec108(param_3,0x33);
  if (((int)puVar2 != 0) &&
     (puVar2 = param_3, FUN_1001ec3c0(param_3,auStack_40,2), (int)puVar2 != 0)) {
    puVar2 = auStack_40;
    FUN_1001ec3c0(puVar2,auStack_60,2);
    if (((int)puVar2 != 0) &&
       (FUN_1001ed748(auStack_60,*(undefined8 *)(param_1 + 0x248),*(undefined8 *)(param_1 + 0x250)),
       puVar2 = puVar1, (int)puVar1 != 0)) {
      FUN_1001ebf4c(param_3);
      puVar2 = (undefined1 *)(ulong)((int)param_3 != 0);
    }
  }
  return puVar2;
}



/* Entry: 1001ef8c0; end: 1001ef9a3;  */

long * FUN_1001ef8c0(long *param_1,long *param_2,long *param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long alStack_70 [4];
  long alStack_50 [4];
  
  if (*(ushort *)((long)param_1 + 0x1e) < 0x304) {
    return (long *)0x1;
  }
  plVar2 = alStack_70;
  lVar5 = *param_1;
  if (*(ushort *)((long)param_1 + 0x1c) < 0x304) {
    param_3 = param_2;
  }
  plVar3 = param_3;
  FUN_1001ec108(param_3,0x2b);
  if (((int)plVar3 != 0) &&
     (plVar3 = param_3, FUN_1001ec3c0(param_3,alStack_50,2), (int)plVar3 != 0)) {
    plVar3 = alStack_50;
    FUN_1001ec3c0(plVar3,alStack_70,1);
    if ((int)plVar3 != 0) {
      if (((*(ushort *)(*(long *)(lVar5 + 0x68) + 0x2f0) >> 5 & 1) != 0) &&
         (uVar1 = (*(byte *)(param_1 + 0xc9) | 0xe) & 0xfa,
         FUN_1001ec108(alStack_70,uVar1 | uVar1 << 8), (int)plVar2 == 0)) {
        return plVar2;
      }
      uVar4 = 0x304;
      if (param_4 != 1) {
        uVar4 = 0;
      }
      FUN_1001efa48(param_1,alStack_70,uVar4);
      plVar3 = param_1;
      if ((int)param_1 != 0) {
        FUN_1001ebf4c(param_3);
        plVar3 = (long *)(ulong)((int)param_3 != 0);
      }
    }
  }
  return plVar3;
}



/* Entry: 1001ef9a4; end: 1001efa47;  */

bool FUN_1001ef9a4(undefined8 *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ushort *puVar4;
  
  lVar3 = 2;
  if (**(char **)*param_1 == '\0') {
    lVar3 = 6;
  }
  puVar4 = (ushort *)&UNK_10e52b190;
  if (**(char **)*param_1 == '\0') {
    puVar4 = (ushort *)&UNK_10e52b194;
  }
  do {
    uVar1 = *puVar4;
    bVar2 = lVar3 != 0;
    lVar3 = lVar3 + -2;
    puVar4 = puVar4 + 1;
  } while (uVar1 != param_2 && bVar2);
  if (uVar1 == param_2) {
    if (3 < param_2 - 0x301) {
      if (param_2 == 0xfefd) {
        param_2 = 0x303;
      }
      else {
        if (param_2 != 0xfeff) {
          return false;
        }
        param_2 = 0x302;
      }
    }
    if (*(ushort *)((long)param_1 + 0x1c) <= param_2) {
      return param_2 <= *(ushort *)((long)param_1 + 0x1e);
    }
  }
  return false;
}



/* Entry: 1001efa48; end: 1001efb2f;  */

void FUN_1001efa48(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  
  lVar5 = 4;
  if (**(char **)*param_1 == '\0') {
    lVar5 = 8;
  }
  puVar6 = (ushort *)&UNK_10e52b190;
  if (**(char **)*param_1 == '\0') {
    puVar6 = (ushort *)&UNK_10e52b194;
  }
  do {
    uVar1 = *puVar6;
    uVar4 = (uint)uVar1;
    puVar2 = param_1;
    FUN_1001ef9a4(param_1,uVar1);
    if ((int)puVar2 != 0) {
      if (3 < uVar1 - 0x301) {
        if (uVar1 == 0xfefd) {
          uVar4 = 0x303;
        }
        else {
          if (uVar1 != 0xfeff) goto LAB_1001efafc;
          uVar4 = 0x302;
        }
      }
      if ((param_3 <= uVar4) && (uVar3 = param_2, FUN_1001ec108(param_2,uVar1), (int)uVar3 == 0)) {
        return;
      }
    }
LAB_1001efafc:
    lVar5 = lVar5 + -2;
    puVar6 = puVar6 + 1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}



/* Entry: 1001efb30; end: 1001efbc3;  */

undefined1 * FUN_1001efb30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  if (*(long *)(param_1 + 0x210) != 0) {
    puVar1 = auStack_60;
    puVar2 = param_3;
    FUN_1001ec108(param_3,0x2c);
    if (((int)puVar2 != 0) &&
       (puVar2 = param_3, FUN_1001ec3c0(param_3,auStack_40,2), (int)puVar2 != 0)) {
      puVar2 = auStack_40;
      FUN_1001ec3c0(puVar2,auStack_60,2);
      if (((int)puVar2 != 0) &&
         (FUN_1001ed748(auStack_60,*(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x210)
                       ), puVar2 = puVar1, (int)puVar1 != 0)) {
        FUN_1001ebf4c(param_3);
        puVar2 = (undefined1 *)(ulong)((int)param_3 != 0);
      }
    }
    return puVar2;
  }
  return (undefined1 *)0x1;
}



/* Entry: 1001efbc4; end: 1001efbcf;  */

void FUN_1001efbc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [32];
  
  iVar2 = (int)auStack_40;
  if (*(long *)(param_1[1] + 0xa8) == 0) {
    if (*(long *)(*param_1 + 0x98) == 0) {
      return;
    }
  }
  else if (*(long *)(*param_1 + 0x98) != 0) {
    uVar1 = *(ushort *)(param_1[1] + 0xe9);
    if ((uVar1 & 0x200) != 0) {
      return;
    }
    uVar4 = 0x39;
    if ((uVar1 & 0x200) != 0) {
      uVar4 = 0xffa5;
    }
    uVar3 = param_3;
    FUN_1001ec108(param_3,uVar4);
    if ((int)uVar3 == 0) {
      return;
    }
    uVar3 = param_3;
    FUN_1001ec3c0(param_3,auStack_40,2);
    if ((int)uVar3 == 0) {
      return;
    }
    FUN_1001ed748(auStack_40,*(undefined8 *)(param_1[1] + 0xa0),*(undefined8 *)(param_1[1] + 0xa8));
    if (iVar2 == 0) {
      return;
    }
    FUN_1001ebf4c(param_3);
    return;
  }
  FUN_1004d2c58(0x10,0,0x131,&UNK_10f6cfd23,0xa39);
  return;
}



/* Entry: 1001efbd0; end: 1001efc9f;  */

void FUN_1001efbd0(long *param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [32];
  
  iVar2 = (int)auStack_40;
  if (*(long *)(param_1[1] + 0xa8) == 0) {
    if (*(long *)(*param_1 + 0x98) == 0) {
      return;
    }
  }
  else if (*(long *)(*param_1 + 0x98) != 0) {
    uVar1 = *(ushort *)(param_1[1] + 0xe9);
    if (param_3 != (uVar1 & 0x200) >> 9) {
      return;
    }
    uVar4 = 0x39;
    if ((uVar1 & 0x200) != 0) {
      uVar4 = 0xffa5;
    }
    uVar3 = param_2;
    FUN_1001ec108(param_2,uVar4);
    if ((int)uVar3 == 0) {
      return;
    }
    uVar3 = param_2;
    FUN_1001ec3c0(param_2,auStack_40,2);
    if ((int)uVar3 == 0) {
      return;
    }
    FUN_1001ed748(auStack_40,*(undefined8 *)(param_1[1] + 0xa0),*(undefined8 *)(param_1[1] + 0xa8));
    if (iVar2 == 0) {
      return;
    }
    FUN_1001ebf4c(param_2);
    return;
  }
  FUN_1004d2c58(0x10,0,0x131,&UNK_10f6cfd23,0xa39);
  return;
}



/* Entry: 1001efca0; end: 1001efcab;  */

void FUN_1001efca0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [32];
  
  iVar2 = (int)auStack_40;
  if (*(long *)(param_1[1] + 0xa8) == 0) {
    if (*(long *)(*param_1 + 0x98) == 0) {
      return;
    }
  }
  else if (*(long *)(*param_1 + 0x98) != 0) {
    uVar1 = *(ushort *)(param_1[1] + 0xe9);
    if ((uVar1 & 0x200) != 0x200) {
      return;
    }
    uVar4 = 0x39;
    if ((uVar1 & 0x200) != 0) {
      uVar4 = 0xffa5;
    }
    uVar3 = param_3;
    FUN_1001ec108(param_3,uVar4);
    if ((int)uVar3 == 0) {
      return;
    }
    uVar3 = param_3;
    FUN_1001ec3c0(param_3,auStack_40,2);
    if ((int)uVar3 == 0) {
      return;
    }
    FUN_1001ed748(auStack_40,*(undefined8 *)(param_1[1] + 0xa0),*(undefined8 *)(param_1[1] + 0xa8));
    if (iVar2 == 0) {
      return;
    }
    FUN_1001ebf4c(param_3);
    return;
  }
  FUN_1004d2c58(0x10,0,0x131,&UNK_10f6cfd23,0xa39);
  return;
}



/* Entry: 1001efcac; end: 1001efd8b;  */

void FUN_1001efcac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  lVar5 = *(long *)(*(long *)(*param_1 + 0x68) + 0x278);
  if (lVar5 != 0) {
    lVar6 = *(long *)(*(long *)(*param_1 + 0x68) + 0x280);
    lVar5 = lVar6 + lVar5 * 0x18;
    bVar1 = true;
    do {
      while (lVar7 = lVar6 + 0x18, *(long *)(lVar6 + 8) != 0) {
        if (bVar1) {
          uVar3 = param_3;
          FUN_1001ec108(param_3,0x1b);
          if ((int)uVar3 == 0) {
            return;
          }
          uVar3 = param_3;
          FUN_1001ec3c0(param_3,auStack_50,2);
          if ((int)uVar3 == 0) {
            return;
          }
          puVar4 = auStack_50;
          FUN_1001ec3c0(puVar4,auStack_70,1);
          if ((int)puVar4 == 0) {
            return;
          }
        }
        iVar2 = (int)auStack_70;
        FUN_1001ec108(auStack_70,*(undefined2 *)(lVar6 + 0x10));
        if (iVar2 == 0) {
          return;
        }
        bVar1 = false;
        lVar6 = lVar7;
        if (lVar7 == lVar5) goto LAB_1001efd68;
      }
      lVar6 = lVar7;
    } while (lVar7 != lVar5);
    if (bVar1) {
      return;
    }
LAB_1001efd68:
    FUN_1001ebf4c(param_3);
  }
  return;
}



/* Entry: 1001efd8c; end: 1001efd93;  */

undefined8 FUN_1001efd8c(void)

{
  return 1;
}



/* Entry: 1001efd94; end: 1001eff23;  */

undefined1 * FUN_1001efd94(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  if (*(ushort *)((long)param_1 + 0x1e) < 0x304) {
    return (undefined1 *)0x1;
  }
  if (((*(long *)(param_1[1] + 0x80) == 0) || (*(long *)(param_1[1] + 0x88) == 0)) ||
     ((*(ushort *)(*(long *)(*param_1 + 0x30) + 0xd4) >> 5 & 1) != 0)) {
    puVar1 = (undefined1 *)0x1;
  }
  else {
    puVar1 = param_3;
    FUN_1001ec108(param_3,0x4469);
    if (((int)puVar1 != 0) &&
       (puVar1 = param_3, FUN_1001ec3c0(param_3,auStack_50,2), (int)puVar1 != 0)) {
      puVar1 = auStack_50;
      FUN_1001ec3c0(puVar1,auStack_70,2);
      if ((int)puVar1 != 0) {
        lVar2 = *(long *)(param_1[1] + 0x88);
        if (lVar2 != 0) {
          puVar3 = *(undefined8 **)(param_1[1] + 0x90);
          puVar4 = puVar3;
          do {
            puVar1 = auStack_70;
            FUN_1001ec3c0(puVar1,auStack_90,1);
            if ((int)puVar1 == 0) {
              return puVar1;
            }
            puVar5 = puVar4 + 4;
            puVar1 = auStack_90;
            FUN_1001ed748(auStack_90,*puVar4,puVar4[1]);
            if ((int)puVar1 == 0) {
              return puVar1;
            }
            puVar4 = puVar5;
          } while (puVar5 != puVar3 + lVar2 * 4);
        }
        FUN_1001ebf4c(param_3);
        puVar1 = (undefined1 *)(ulong)((int)param_3 != 0);
      }
    }
  }
  return puVar1;
}



/* Entry: 1001eff24; end: 1001f006b;  */

void FUN_1001eff24(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  int aiStack_60 [4];
  
  iVar4 = (int)auStack_100;
  lVar8 = *param_1;
  *param_3 = 0;
  func_0x0001001efe8c(param_1,param_4);
  if ((int)param_1 != 0) {
    FUN_1001fc600(*(undefined8 *)(lVar8 + 0x68),aiStack_60);
    lVar5 = *(long *)(lVar8 + 0x58);
    iVar1 = *(int *)(lVar5 + 200);
    iVar2 = *(int *)(lVar5 + 0x178);
    func_0x0001001fe454();
    uVar3 = *(undefined4 *)(lVar5 + 4);
    uVar6 = param_2;
    FUN_1001ec108(param_2,0x29);
    if (((int)uVar6 != 0) && (uVar6 = param_2, FUN_1001ec3c0(param_2,auStack_80,2), (int)uVar6 != 0)
       ) {
      puVar7 = auStack_80;
      FUN_1001ec3c0(puVar7,auStack_a0,2);
      if ((int)puVar7 != 0) {
        puVar7 = auStack_a0;
        FUN_1001ec3c0(puVar7,auStack_c0,2);
        if ((int)puVar7 != 0) {
          puVar7 = auStack_c0;
          FUN_1001ed748(puVar7,*(undefined8 *)(*(long *)(lVar8 + 0x58) + 0xf0),
                        *(undefined8 *)(*(long *)(lVar8 + 0x58) + 0xf8));
          if ((int)puVar7 != 0) {
            puVar7 = auStack_a0;
            func_0x000107c2b22c(puVar7,iVar2 + (aiStack_60[0] - iVar1) * 1000);
            if ((int)puVar7 != 0) {
              puVar7 = auStack_80;
              FUN_1001ec3c0(puVar7,auStack_e0,2);
              if ((int)puVar7 != 0) {
                puVar7 = auStack_e0;
                FUN_1001ec3c0(puVar7,auStack_100,1);
                if (((int)puVar7 != 0) && (FUN_1001eed20(auStack_100,uVar3), iVar4 != 0)) {
                  *param_3 = 1;
                  FUN_1001ebf4c(param_2);
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



/* Entry: 1001f006c; end: 1001f0077;  */

undefined8 FUN_1001f006c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001001ed7c0(param_2,&uStack_38,&uStack_40);
  if ((int)param_2 == 0) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0a17,0xc2);
  }
  else {
    FUN_1001e33e0(*param_3);
    *param_3 = uStack_38;
    param_3[1] = uStack_40;
  }
  return param_2;
}



/* Entry: 1001f0078; end: 1001f02d3;  */

void FUN_1001f0078(ulong param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar4 = *param_2;
  uVar7 = param_2[1];
  if ((*(long *)(param_1 + 0x98) == 0) && (**(long **)(*(long *)(param_1 + 0x30) + 0x108) == 0)) {
    do {
      if (uVar7 == 0) {
LAB_1001f0178:
        func_0x0001001f102c(param_1,1,0x16,*param_2,param_2[1]);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
        if (lVar4 == 0) {
          return;
        }
        func_0x0001001f114c(lVar4 + 0x198,*param_2,param_2[1]);
        return;
      }
      uVar6 = uVar7;
      if (*(ushort *)(param_1 + 0x12) <= uVar7) {
        uVar6 = (ulong)*(ushort *)(param_1 + 0x12);
      }
      uVar7 = uVar7 - uVar6;
      uVar3 = param_1;
      func_0x0001001f01c8(param_1,0x16,lVar4);
      lVar4 = lVar4 + uVar6;
    } while ((uVar3 & 1) != 0);
  }
  else {
    do {
      if (uVar7 == 0) goto LAB_1001f0178;
      lVar8 = *(long *)(param_1 + 0x30);
      puVar1 = *(ulong **)(lVar8 + 0xe0);
      uVar6 = uVar7;
      if (puVar1 == (ulong *)0x0) {
LAB_1001f0100:
        uVar2 = 0;
        if (*(ushort *)(param_1 + 0x12) <= uVar7) {
          uVar6 = (ulong)*(ushort *)(param_1 + 0x12);
        }
        FUN_1001e6bb0();
        func_0x0001001e6c68(lVar8 + 0xe0,uVar2);
        puVar1 = *(ulong **)(*(long *)(param_1 + 0x30) + 0xe0);
        if (puVar1 == (ulong *)0x0) {
          return;
        }
      }
      else {
        uVar3 = *puVar1;
        uVar5 = (ulong)*(ushort *)(param_1 + 0x12);
        if (uVar5 <= uVar3) {
          uVar3 = param_1;
          FUN_1001f11b0();
          if ((int)uVar3 == 0) {
            return;
          }
          lVar8 = *(long *)(param_1 + 0x30);
          puVar1 = *(ulong **)(lVar8 + 0xe0);
          if (puVar1 == (ulong *)0x0) goto LAB_1001f0100;
          uVar3 = *puVar1;
          uVar5 = (ulong)*(ushort *)(param_1 + 0x12);
        }
        if (uVar5 - uVar3 <= uVar7) {
          uVar6 = uVar5 - uVar3;
        }
      }
      uVar7 = uVar7 - uVar6;
      FUN_1001f10b8(puVar1,lVar4,uVar6);
      lVar4 = lVar4 + uVar6;
    } while ((int)puVar1 != 0);
  }
  return;
}



/* Entry: 1001f02d4; end: 1001f0387;  */

long FUN_1001f02d4(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = *(long **)(param_1[6] + 0x108);
  if (*(char *)*param_1 == '\0') {
    if ((*(byte *)((long)plVar2 + 0x271) & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)*(byte *)((long)plVar2 + 0x26d);
    }
    if (*plVar2 == 0) {
      lVar3 = uVar4 + 5;
    }
    else {
      bVar1 = *(byte *)(plVar2[1] + 2);
      FUN_1001ffd20();
      lVar3 = 5;
      if (0x303 < (uint)plVar2) {
        lVar3 = 6;
      }
      lVar3 = uVar4 + lVar3 + (ulong)bVar1;
    }
    FUN_1001f0388(param_1);
    lVar3 = lVar3 << ((ulong)param_1 & 0x3f);
  }
  else {
    if ((*(byte *)((long)plVar2 + 0x271) & 1) == 0) {
      lVar3 = 0xd;
    }
    else {
      lVar3 = (ulong)*(byte *)((long)plVar2 + 0x26d) + 0xd;
    }
    uVar4 = 0;
    if (*plVar2 != 0) {
      uVar4 = (ulong)*(byte *)(plVar2[1] + 2);
    }
    lVar3 = uVar4 + lVar3;
  }
  return lVar3;
}



/* Entry: 1001f0388; end: 1001f054f;  */

bool FUN_1001f0388(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 0x108);
  if ((((*plVar2 == 0) || (FUN_1001ffd20(), 0x301 < (uint)plVar2)) ||
      ((*(byte *)(param_1 + 0x85) & 1) == 0)) ||
     (lVar3 = **(long **)(*(long *)(param_1 + 0x30) + 0x108),
     (*(byte *)(lVar3 + 0x1c) >> 5 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar3 + 0x20) != 2;
  }
  return bVar1;
}



/* Entry: 1001f0550; end: 1001f068b;  */

void FUN_1001f0550(ulong param_1,ulong param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uStack_68;
  
  bVar1 = param_4 + param_2 <= param_6;
  if ((!bVar1 && param_2 <= param_7 + param_6) && (bVar1 || param_7 + param_6 != param_2)) {
    uVar4 = 0xbd;
    uVar5 = 0x206;
  }
  else {
    uVar2 = param_1;
    func_0x0001001f04c4(param_1,param_5,param_7);
    uVar3 = param_1;
    FUN_1001f068c(param_1,&uStack_68,param_5,param_7);
    if ((int)uVar3 == 0) {
      return;
    }
    if ((CARRY8(uVar2,param_7)) ||
       (uVar3 = uStack_68 + uVar2 + param_7, CARRY8(uStack_68,uVar2 + param_7))) {
      uVar4 = 200;
      uVar5 = 0x211;
    }
    else {
      if (uVar3 <= param_4) {
        FUN_1001f0734(param_1,param_2,param_2 + uVar2,param_2 + uVar2 + param_7,param_5,param_6,
                      param_7);
        if ((int)param_1 == 0) {
          return;
        }
        *param_3 = uVar3;
        return;
      }
      uVar4 = 0x79;
      uVar5 = 0x215;
    }
  }
  FUN_1004d2c58(0x10,0,uVar4,&UNK_10f6d15f7,uVar5);
  return;
}



/* Entry: 1001f068c; end: 1001f0733;  */

void FUN_1001f068c(ulong param_1,ulong *param_2,int param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x108);
  if (*plVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_1001ffd20();
    uVar3 = (ulong)(0x303 < (uint)plVar1);
  }
  if ((param_3 == 0x17) && (1 < param_4)) {
    uVar2 = param_1;
    FUN_1001f0388(param_1);
    param_4 = param_4 - (uVar2 & 0xffffffff);
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x108);
  if (*plVar1 == 0) {
    *param_2 = uVar3;
  }
  else {
    FUN_100229220(plVar1 + 1,param_2,param_4,uVar3);
  }
  return;
}



/* Entry: 1001f0734; end: 1001f086b;  */

long * FUN_1001f0734(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                    int param_5,long param_6,ulong param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ushort auStack_78 [4];
  ulong uStack_70;
  undefined1 uStack_61;
  undefined8 in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  if (((param_5 == 0x17) && (1 < param_7)) && (plVar4 = param_1, FUN_1001f0388(), (int)plVar4 != 0))
  {
    plVar4 = param_1;
    FUN_1001f086c(param_1,param_2,param_2 + 5,param_2 + 6,0x17,param_6,1);
    if ((int)plVar4 != 0) {
      if (**(long **)(param_1[6] + 0x108) == 0) {
        in_stack_ffffffffffffffa8 = 0;
      }
      else {
        plVar4 = *(long **)(param_1[6] + 0x108) + 1;
        FUN_100229220(plVar4,&stack0xffffffffffffffa8,1,0);
        if ((int)plVar4 == 0) {
          return plVar4;
        }
      }
      FUN_1001f086c(param_1,&stack0xffffffffffffffa0,param_3 + 1,param_4,0x17,param_6 + 1,
                    param_7 - 1);
      plVar4 = param_1;
      if ((int)param_1 != 0) {
        *(int *)(param_2 + in_stack_ffffffffffffffa8 + 6) = (int)in_stack_ffffffffffffffa0;
        *param_3 = (char)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
      }
    }
    return plVar4;
  }
  uStack_61 = (undefined1)param_5;
  plVar4 = *(long **)(param_1[6] + 0x108);
  if (*plVar4 == 0) {
    puVar7 = (undefined1 *)0x0;
    uVar6 = 0;
LAB_1001f0908:
    uVar5 = (undefined1)param_5;
    uStack_70 = uVar6;
  }
  else {
    plVar2 = plVar4;
    FUN_1001ffd20();
    uVar6 = (ulong)(0x303 < (uint)plVar2);
    puVar7 = &uStack_61;
    iVar1 = 0x17;
    if ((uint)plVar2 < 0x304) {
      puVar7 = (undefined1 *)0x0;
      iVar1 = param_5;
    }
    param_5 = iVar1;
    uVar5 = (undefined1)param_5;
    if (*plVar4 == 0) goto LAB_1001f0908;
    plVar2 = plVar4 + 1;
    FUN_100229220(plVar2,&uStack_70,param_7,uVar6);
    if ((int)plVar2 == 0) goto LAB_1001f09c4;
  }
  plVar2 = plVar4;
  FUN_1001f0a10(plVar4,auStack_78,param_7,uVar6);
  if (((ulong)plVar2 & 1) != 0) {
    *param_2 = uVar5;
    plVar2 = plVar4;
    FUN_1001f0ac4();
    *(ushort *)(param_2 + 1) =
         (ushort)((ulong)plVar2 >> 8) & 0xff | (ushort)(((uint)plVar2 & 0xff00ff) << 8);
    *(ushort *)(param_2 + 3) = auStack_78[0] >> 8 | auStack_78[0] << 8;
    FUN_1001f0b04(plVar4,param_2 + 5,param_3,param_4,*param_2,plVar2,param_1[6] + 8,param_8,param_2,
                  5,param_6,param_7,puVar7,uVar6);
    if ((int)plVar4 == 0) {
      return (long *)0x0;
    }
    lVar3 = param_1[6] + 8;
    FUN_1001f0e5c(lVar3,8);
    if ((int)lVar3 == 0) {
      return (long *)0x0;
    }
    if ((code *)param_1[8] == (code *)0x0) {
      return (long *)0x1;
    }
    (*(code *)param_1[8])(1,0,0x100,param_2,5,param_1,param_1[9]);
    return (long *)0x1;
  }
LAB_1001f09c4:
  FUN_1004d2c58(0x10,0,200,&UNK_10f6d15f7,0x188);
  return (long *)0x0;
}



/* Entry: 1001f086c; end: 1001f0a0f;  */

undefined8
FUN_1001f086c(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ushort auStack_78 [4];
  ulong uStack_70;
  undefined1 uStack_61;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x30) + 0x108);
  uStack_61 = param_5;
  if (*plVar5 == 0) {
    puVar7 = (undefined1 *)0x0;
    uVar6 = 0;
    uVar1 = uVar6;
  }
  else {
    plVar3 = plVar5;
    FUN_1001ffd20();
    uVar6 = (ulong)(0x303 < (uint)plVar3);
    puVar7 = &uStack_61;
    uVar2 = 0x17;
    if ((uint)plVar3 < 0x304) {
      puVar7 = (undefined1 *)0x0;
      uVar2 = param_5;
    }
    param_5 = uVar2;
    uVar1 = uVar6;
    if (*plVar5 != 0) {
      plVar3 = plVar5 + 1;
      FUN_100229220(plVar3,&uStack_70,param_7,uVar6);
      uVar1 = uStack_70;
      if ((int)plVar3 == 0) goto LAB_1001f09c4;
    }
  }
  uStack_70 = uVar1;
  plVar3 = plVar5;
  FUN_1001f0a10(plVar5,auStack_78,param_7,uVar6);
  if (((ulong)plVar3 & 1) != 0) {
    *param_2 = param_5;
    plVar3 = plVar5;
    FUN_1001f0ac4();
    *(ushort *)(param_2 + 1) =
         (ushort)((ulong)plVar3 >> 8) & 0xff | (ushort)(((uint)plVar3 & 0xff00ff) << 8);
    *(ushort *)(param_2 + 3) = auStack_78[0] >> 8 | auStack_78[0] << 8;
    FUN_1001f0b04(plVar5,param_2 + 5,param_3,param_4,*param_2,plVar3,*(long *)(param_1 + 0x30) + 8,
                  param_8,param_2,5,param_6,param_7,puVar7,uVar6);
    if ((int)plVar5 == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x30) + 8;
    FUN_1001f0e5c(lVar4,8);
    if ((int)lVar4 == 0) {
      return 0;
    }
    if (*(code **)(param_1 + 0x40) == (code *)0x0) {
      return 1;
    }
    (**(code **)(param_1 + 0x40))(1,0,0x100,param_2,5,param_1,*(undefined8 *)(param_1 + 0x48));
    return 1;
  }
LAB_1001f09c4:
  FUN_1004d2c58(0x10,0,200,&UNK_10f6d15f7,0x188);
  return 0;
}



/* Entry: 1001f0a10; end: 1001f0ac3;  */

void FUN_1001f0a10(long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_38;
  
  lVar1 = param_4;
  if (*param_1 != 0) {
    plVar2 = param_1 + 1;
    FUN_100229220(plVar2,&lStack_38,param_3);
    lVar1 = lStack_38;
    if ((int)plVar2 == 0) {
      return;
    }
  }
  lStack_38 = lVar1;
  if ((*(byte *)((long)param_1 + 0x271) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x26d);
  }
  uVar3 = uVar3 + param_3 + lStack_38;
  if (uVar3 < param_3 || 0xfffe < uVar3) {
    FUN_1004d2c58(0x10,0,0x45,&UNK_10f6d010a,0xd0);
  }
  else {
    *param_2 = uVar3;
  }
  return;
}



/* Entry: 1001f0ac4; end: 1001f0b03;  */

ushort FUN_1001f0ac4(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x26e);
  if (uVar1 - 0x301 < 4) {
    if (0x303 < uVar1) {
      uVar1 = 0x303;
    }
  }
  else if ((uVar1 == 0) && (uVar1 = 0xfeff, *(char *)(param_1 + 0x270) == '\0')) {
    uVar1 = 0x301;
  }
  return uVar1;
}



/* Entry: 1001f0b04; end: 1001f0e5b;  */

long * FUN_1001f0b04(long *param_1,long *param_2,long *param_3,long *param_4,undefined1 param_5,
                    undefined8 param_6,undefined8 *param_7,undefined8 param_8,undefined8 *param_9,
                    undefined8 param_10,long *param_11,long param_12,long *param_13,long param_14)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_d0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  byte abStack_98 [24];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  ushort uStack_75;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 0x271) & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)*(byte *)((long)param_1 + 0x26d);
  }
  if (*param_1 == 0) {
    lStack_a0 = param_14;
    plVar7 = param_2;
LAB_1001f0bb0:
    lVar2 = lStack_a0;
    plVar3 = (long *)(param_12 + (long)param_11);
    if (((((param_11 == param_3) || (plVar3 <= param_3)) ||
         ((long *)(param_12 + (long)param_3) <= param_11)) &&
        (((long *)(uVar12 + (long)param_2) <= param_11 || (plVar3 <= param_2)))) &&
       ((plVar3 <= param_4 || ((long *)(lStack_a0 + (long)param_4) <= param_11)))) {
      if (*param_1 == 0) {
        if (param_12 != 0) {
          func_0x000107c610b8(param_3,param_11,param_12);
          plVar7 = param_11;
        }
        param_3 = plVar7;
        if (param_14 != 0) {
          func_0x000107c610b8(param_4,param_13,param_14);
          param_3 = param_13;
        }
        param_1 = (long *)0x1;
        goto LAB_1001f0c24;
      }
      bVar1 = *(byte *)((long)param_1 + 0x271);
      if ((bVar1 >> 4 & 1) == 0) {
        uStack_80 = *param_7;
        uStack_78 = param_5;
        uStack_77 = (char)((ulong)param_6 >> 8);
        uStack_76 = (char)param_6;
        if ((bVar1 >> 3 & 1) == 0) {
          uStack_75 = (ushort)((ulong)param_12 >> 8) & 0xff |
                      (ushort)(((uint)param_12 & 0xff00ff) << 8);
          uStack_d0 = 0xd;
        }
        else {
          uStack_d0 = 0xb;
        }
        param_9 = &uStack_80;
      }
      else {
        uStack_d0 = param_10;
      }
      uVar12 = (ulong)*(byte *)((long)param_1 + 0x26c);
      if ((bVar1 >> 2 & 1) == 0) {
        if (*(byte *)((long)param_1 + 0x26c) != 0) {
          func_0x000107c610b4(abStack_98,param_1 + 0x4c,uVar12);
          goto LAB_1001f0d48;
        }
        uVar12 = 0;
        if ((bVar1 >> 1 & 1) != 0) goto LAB_1001f0d80;
LAB_1001f0d4c:
        uVar11 = (ulong)*(byte *)((long)param_1 + 0x26d);
        if (*(byte *)((long)param_1 + 0x26d) != 0) {
          func_0x000107c610b4(abStack_98 + uVar12,param_7,uVar11);
        }
      }
      else {
        uVar12 = uVar12 - *(byte *)((long)param_1 + 0x26d);
        if (uVar12 != 0) {
          func_0x000107c60ee4(abStack_98,uVar12);
        }
LAB_1001f0d48:
        if ((bVar1 >> 1 & 1) == 0) goto LAB_1001f0d4c;
LAB_1001f0d80:
        FUN_1001e47a4(abStack_98 + uVar12,*(undefined1 *)((long)param_1 + 0x26d),&UNK_10e525a20);
        uVar11 = (ulong)*(byte *)((long)param_1 + 0x26d);
        bVar1 = *(byte *)((long)param_1 + 0x271);
      }
      uVar9 = (uint)bVar1;
      if ((bVar1 & 1) != 0) {
        if ((param_2 < plVar3) && (param_11 < (long *)(uVar11 + (long)param_2))) {
          uVar4 = 0xbd;
          uVar5 = 0x178;
          goto LAB_1001f0c1c;
        }
        if ((int)uVar11 != 0) {
          func_0x000107c610b4(param_2,abStack_98 + *(byte *)((long)param_1 + 0x26c));
          uVar9 = (uint)*(byte *)((long)param_1 + 0x271);
        }
      }
      if (((uVar9 >> 2 & 1) != 0) && (uVar6 = (ulong)*(byte *)((long)param_1 + 0x26c), uVar6 != 0))
      {
        pbVar8 = (byte *)(param_1 + 0x4c);
        pbVar10 = abStack_98;
        do {
          *pbVar10 = *pbVar10 ^ *pbVar8;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar6 != 0);
      }
      param_1 = param_1 + 1;
      FUN_100229298(param_1,param_3,param_4,auStack_a8,lVar2,abStack_98,uVar12 + uVar11,param_11,
                    param_12,param_13,param_14,param_9,uStack_d0);
      goto LAB_1001f0c24;
    }
    uVar4 = 0xbd;
    uVar5 = 0x14a;
  }
  else {
    plVar3 = param_1 + 1;
    plVar7 = &lStack_a0;
    FUN_100229220(plVar3,plVar7,param_12,param_14);
    if ((int)plVar3 != 0) goto LAB_1001f0bb0;
    uVar4 = 200;
    uVar5 = 0x144;
  }
LAB_1001f0c1c:
  param_3 = (long *)0x0;
  FUN_1004d2c58(0x10,0,uVar4,&UNK_10f6d010a,uVar5);
  param_1 = (long *)0x0;
LAB_1001f0c24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  func_0x000107c60e78();
  plVar7 = param_3;
  do {
    plVar7 = (long *)((long)plVar7 + -1);
    if (param_3 <= plVar7) {
      FUN_1004d2c58(0x10,0,0x45,&UNK_10f6d15f7,0xa1);
      break;
    }
    uVar9 = *(byte *)((long)param_1 + (long)plVar7) + 1;
    *(char *)((long)param_1 + (long)plVar7) = (char)uVar9;
  } while (uVar9 >> 8 != 0);
  return (long *)(ulong)(plVar7 < param_3);
}



/* Entry: 1001f0e5c; end: 1001f0ec3;  */

bool FUN_1001f0e5c(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  do {
    uVar2 = uVar2 - 1;
    if (param_2 <= uVar2) {
      FUN_1004d2c58(0x10,0,0x45,&UNK_10f6d15f7,0xa1);
      break;
    }
    uVar1 = *(byte *)(param_1 + uVar2) + 1;
    *(char *)(param_1 + uVar2) = (char)uVar1;
  } while (uVar1 >> 8 != 0);
  return uVar2 < param_2;
}



/* Entry: 1001f0ec4; end: 1001f0ff7;  */

void FUN_1001f0ec4(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_w9;
  int extraout_w9_00;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  puVar1 = param_1;
  func_0x0001001e2918();
  FUN_1001f0ff8(param_6,*puVar1);
  if (param_3 == 0x101) {
    FUN_1001f1098();
    if (extraout_w9_00 == 0) {
      return;
    }
    func_0x000107c370d0();
  }
  else {
    if (param_3 != 0x16) {
      if (param_3 != 0x15) {
        return;
      }
      lVar3 = *(long *)(param_6 + 0x348);
      if (*(int *)(lVar3 + 0x44) == 0) {
        return;
      }
      uVar2 = 0x3d;
      if ((int)param_1 != 0) {
        uVar2 = 0x3e;
      }
      uStack_78 = 0xaaaaaaaaaaaaaaaa;
      uStack_80 = 0xaaaaaaaaaaaaaaaa;
      uStack_68 = 0xaaaaaaaaaaaaaaaa;
      uStack_70 = 0xaaaaaaaaaaaaaaaa;
      func_0x000107c370cc(&uStack_80);
      func_0x000107c2e000(auStack_60,param_4,param_5);
      func_0x000107c370e8(&uStack_80,"bytes");
      func_0x000100139d84(auStack_60);
      func_0x000107c370e4(lVar3,uVar2,param_6 + 0x338);
      func_0x000100139d84(&uStack_80);
      return;
    }
    FUN_1001f1098();
    if (extraout_w9 == 0) {
      return;
    }
    func_0x000107c370d0();
  }
  func_0x000107c2dfe8();
  return;
}



/* Entry: 1001f0ff8; end: 1001f1097;  */

undefined8 FUN_1001f0ff8(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && (puVar2 = *(ulong **)(param_1 + 0x78), puVar2 != (ulong *)0x0)) {
    if (*puVar2 <= (ulong)param_2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(puVar2[1] + (ulong)param_2 * 8);
  }
  return uVar1;
}



/* Entry: 1001f1098; end: 1001f10b7;  */

void FUN_1001f1098(void)

{
  return;
}



/* Entry: 1001f10b8; end: 1001f11af;  */

ulong * FUN_1001f10b8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_3 != 0) {
    uVar1 = *param_1 + param_3;
    if (CARRY8(*param_1,param_3)) {
      FUN_1004d2c58(7,0,0x45,&UNK_10f6c54b4,0x8d);
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x0001001f03f0(param_1,uVar1);
      if ((int)puVar2 != 0) {
        func_0x000107c610b4(param_1[1] + *param_1,param_2,param_3);
        *param_1 = uVar1;
        puVar2 = (ulong *)0x1;
      }
    }
    return puVar2;
  }
  return (ulong *)0x1;
}



/* Entry: 1001f11b0; end: 1001f1283;  */

long FUN_1001f11b0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  plVar2 = *(long **)(lVar1 + 0xe0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
    param_1 = 1;
  }
  else {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    if (*(long *)(param_1 + 0x98) == 0) {
      func_0x0001001f01c8(param_1,0x16,plVar2[1]);
    }
    else if (((*(long *)(lVar1 + 0x110) == 0) ||
             ((*(byte *)(*(long *)(lVar1 + 0x110) + 0x61a) >> 4 & 1) == 0)) &&
            ((**(code **)(*(long *)(param_1 + 0x98) + 0x10))(param_1,*(undefined4 *)(lVar1 + 0xc4)),
            (int)param_1 == 0)) {
      FUN_1004d2c58(0x10,0,0x12a,&UNK_10f6d0013,0x101);
      param_1 = 0;
    }
    else {
      param_1 = 1;
    }
    FUN_1001e33e0(plVar2[1]);
    FUN_1001e33e0(plVar2);
  }
  return param_1;
}



/* Entry: 1001f1284; end: 1001f1453;  */

void FUN_1001f1284(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  lVar4 = param_1;
  FUN_1001f11b0();
  if ((int)lVar4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0xac) != 0) {
      uVar2 = 0xc2;
      uVar3 = 0x123;
      goto LAB_1001f134c;
    }
    lVar4 = param_1;
    (**(code **)(*(long *)(param_1 + 0x98) + 0x18))();
    if ((int)lVar4 == 0) {
      uVar2 = 0x12a;
      uVar3 = 0x128;
      goto LAB_1001f134c;
    }
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(ulong **)(lVar4 + 0xe8) == (ulong *)0x0) {
    return;
  }
  if (*(int *)(lVar4 + 0xac) == 0) {
    if (**(ulong **)(lVar4 + 0xe8) >> 0x1f == 0) {
      if ((*(short *)(lVar4 + 0x72) != 0) &&
         (lVar4 = param_1, func_0x000100649724(), (int)lVar4 < 1)) {
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xbc) = 3;
        return;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0xf0);
        puVar6 = *(ulong **)(*(long *)(param_1 + 0x30) + 0xe8);
        uVar7 = *puVar6;
        if (uVar5 < uVar7) {
          do {
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            FUN_1001f16f8(uVar2,puVar6[1] + uVar5,(int)uVar7 - (int)uVar5);
            lVar4 = *(long *)(param_1 + 0x30);
            if ((int)uVar2 < 1) {
              *(undefined4 *)(lVar4 + 0xbc) = 3;
              return;
            }
            uVar1 = *(int *)(lVar4 + 0xf0) + (int)uVar2;
            uVar5 = (ulong)uVar1;
            *(uint *)(lVar4 + 0xf0) = uVar1;
            puVar6 = *(ulong **)(lVar4 + 0xe8);
            uVar7 = *puVar6;
          } while (uVar5 < uVar7);
          lVar4 = *(long *)(param_1 + 0x20);
        }
        FUN_1001f1f60(lVar4,0xb,0,0);
        if (0 < (int)lVar4) {
          func_0x0001001e6c68(*(long *)(param_1 + 0x30) + 0xe8,0);
          *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xf0) = 0;
          return;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xbc) = 3;
        return;
      }
      uVar2 = 0x77;
      uVar3 = 0x147;
    }
    else {
      uVar2 = 0x44;
      uVar3 = 0x138;
    }
  }
  else {
    uVar2 = 0xc2;
    uVar3 = 0x132;
  }
LAB_1001f134c:
  FUN_1004d2c58(0x10,0,uVar2,&UNK_10f6d0013,uVar3);
  return;
}



/* Entry: 1001f1454; end: 1001f16f7;  */

void FUN_1001f1454(void)

{
  undefined8 *puVar1;
  int extraout_w10;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_DAT_110cd7478;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      FUN_1001f179c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1001f16f8; end: 1001f179b;  */

void FUN_1001f16f8(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar4 = *(code **)(*param_1 + 0x10), pcVar4 == (code *)0x0)) {
    uVar2 = 0x73;
    uVar3 = 0xa4;
  }
  else {
    if ((int)param_1[1] != 0) {
      if (param_3 < 1) {
        return;
      }
      plVar1 = param_1;
      (*pcVar4)();
      if ((int)plVar1 < 1) {
        return;
      }
      param_1[7] = param_1[7] + ((ulong)plVar1 & 0xffffffff);
      return;
    }
    uVar2 = 0x72;
    uVar3 = 0xa8;
  }
  FUN_1004d2c58(0x11,0,uVar2,&UNK_10f6c5149,uVar3);
  return;
}



/* Entry: 1001f179c; end: 1001f1f5f;  */

void FUN_1001f179c(int *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1001f1f60; end: 1001f1fa7;  */

long * FUN_1001f1f60(long *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x0001001f1f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    FUN_1004d2c58(0x11,0,0x73,&UNK_10f6c5149,0xd0);
    plVar1 = (long *)0xfffffffffffffffe;
  }
  return plVar1;
}



/* Entry: 1001f1fa8; end: 1001f1fb3;  */

bool FUN_1001f1fa8(undefined8 param_1,int param_2)

{
  return param_2 == 0xb;
}



/* Entry: 1001f1fb4; end: 1001f204f;  */

undefined8 FUN_1001f1fb4(long param_1,byte *param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = *(ulong **)(*(long *)(param_1 + 0x30) + 0xd8);
  if ((puVar2 != (ulong *)0x0) && (uVar5 = *puVar2, uVar5 != 0)) {
    pbVar4 = (byte *)puVar2[1];
    param_2[1] = *pbVar4;
    if (3 < uVar5) {
      uVar3 = 0;
      lVar6 = 1;
      do {
        uVar1 = (uint)pbVar4[lVar6] | (int)uVar3 << 8;
        uVar3 = (ulong)uVar1;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      if (uVar3 <= uVar5 - 4) {
        *(byte **)(param_2 + 8) = pbVar4 + 4;
        *(ulong *)(param_2 + 0x10) = uVar3;
        *(undefined8 *)(param_2 + 0x18) =
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0xd8) + 8);
        *(ulong *)(param_2 + 0x20) = (ulong)(uVar1 + 4);
        *param_2 = *(byte *)(*(long *)(param_1 + 0x30) + 0xd4) >> 3 & 1;
        return 1;
      }
      uVar5 = (ulong)(uVar1 + 4);
      goto LAB_1001f1fe4;
    }
  }
  uVar5 = 4;
LAB_1001f1fe4:
  *param_3 = uVar5;
  return 0;
}



/* Entry: 1001f2050; end: 1001f20cb;  */

long FUN_1001f2050(long param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  FUN_1001f1fb4(param_1,param_2,auStack_38);
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    uVar3 = *(ushort *)(lVar2 + 0xd4);
    if ((uVar3 >> 4 & 1) == 0) {
      if ((*param_2 & 1) == 0) {
        func_0x0001001f102c(param_1,0,0x16,*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)(param_2 + 0x20));
        lVar2 = *(long *)(param_1 + 0x30);
        uVar3 = *(ushort *)(lVar2 + 0xd4);
      }
      *(ushort *)(lVar2 + 0xd4) = uVar3 | 0x10;
    }
  }
  return lVar1;
}



/* Entry: 1001f20cc; end: 1001f214f;  */

void FUN_1001f20cc(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  if (*(int *)(param_1[6] + 0xa8) == 2) {
    func_0x000107c2b2b0(*(undefined8 *)(param_1[6] + 0xb0));
    *param_3 = 0;
  }
  else {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
    if ((int)plVar1 == 4) {
      lVar3 = param_1[6];
      *(undefined4 *)(lVar3 + 0xa8) = 2;
      func_0x000107c2b2ac();
      lVar2 = *(long *)(lVar3 + 0xb0);
      *(long **)(lVar3 + 0xb0) = plVar1;
      if (lVar2 != 0) {
        func_0x000107c2b2a8();
      }
    }
  }
  return;
}



/* Entry: 1001f2150; end: 1001f239f;  */

void FUN_1001f2150(ulong param_1,undefined8 *param_2,undefined1 *param_3,char *param_4,ulong param_5
                  )

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_51;
  
  *param_2 = 0;
  if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    uVar1 = *(ushort *)(lVar7 + 0xd4);
    if ((uVar1 >> 2 & 1) == 0) {
      if (param_5 < 5) {
        *param_2 = 5;
        return;
      }
      iVar2 = 0xf6d0081;
      func_0x000107c613d4(&UNK_10f6d0081,param_4,4);
      if (iVar2 != 0) {
        iVar2 = 0xf6d0086;
        func_0x000107c613d4(&UNK_10f6d0086,param_4,5);
        if (iVar2 != 0) {
          iVar2 = 0xf6d008c;
          func_0x000107c613d4(&UNK_10f6d008c,param_4,5);
          if (iVar2 != 0) {
            iVar2 = 0xf6d0092;
            func_0x000107c613d4(&UNK_10f6d0092,param_4,4);
            if (iVar2 != 0) {
              iVar2 = 0xf6d0097;
              func_0x000107c613d4(&UNK_10f6d0097,param_4,5);
              if (iVar2 == 0) {
                uVar4 = 0x9b;
                uVar5 = 0x24b;
                goto LAB_1001f2288;
              }
              if (((*param_4 < '\0') && (param_4[2] == '\x01')) && (param_4[3] == '\x03')) {
                uVar3 = param_1;
                func_0x000107c2b720(param_1,param_2,param_4,param_5);
                if ((int)uVar3 == 0) {
                  *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) =
                       *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) | 4;
                  return;
                }
                if ((int)uVar3 != 4) {
                  return;
                }
                *param_3 = 0;
                return;
              }
              *(ushort *)(lVar7 + 0xd4) = uVar1 | 4;
              goto LAB_1001f229c;
            }
          }
        }
      }
      uVar4 = 0x9c;
      uVar5 = 0x246;
LAB_1001f2288:
      FUN_1004d2c58(0x10,0,uVar4,&UNK_10f6d0013,uVar5);
      *param_3 = 0;
      return;
    }
  }
LAB_1001f229c:
  uStack_68 = 0;
  uStack_60 = 0;
  uVar3 = param_1;
  FUN_1001f23a0(param_1,&cStack_51,&uStack_68,param_2,param_3,param_4,param_5);
  if ((int)uVar3 != 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0xa4) & 1) == 0) && (cStack_51 == '\x17')) {
    if (**(long **)(*(long *)(param_1 + 0x30) + 0x100) != 0) goto LAB_1001f2324;
    uVar4 = 0x119;
    uVar5 = 0x26c;
  }
  else {
    if (cStack_51 == '\x16') {
      FUN_1001fa2c8(param_1,uStack_68,uStack_60);
      if ((param_1 & 1) != 0) {
        return;
      }
      uVar6 = 0x50;
      goto LAB_1001f2344;
    }
LAB_1001f2324:
    uVar4 = 0xe1;
    uVar5 = 0x272;
  }
  FUN_1004d2c58(0x10,0,uVar4,&UNK_10f6d0013,uVar5);
  uVar6 = 10;
LAB_1001f2344:
  *param_3 = uVar6;
  return;
}



/* Entry: 1001f23a0; end: 1001f2837;  */

undefined8
FUN_1001f23a0(ulong param_1,char *param_2,long *param_3,ulong *param_4,undefined1 *param_5,
             char *param_6,ulong param_7,undefined8 param_8)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  code *pcVar11;
  uint uVar12;
  char cVar13;
  long lVar14;
  
  *param_4 = 0;
  if (*(int *)(*(long *)(param_1 + 0x30) + 0xa8) == 1) {
    return 3;
  }
  uVar10 = param_1;
  FUN_1001f2838(param_1,param_5);
  if ((int)uVar10 == 0) {
    return 4;
  }
  if (((param_7 == 0) || (param_7 < 3)) || (param_7 - 3 < 2)) {
    uVar10 = 5;
    goto LAB_1001f241c;
  }
  cVar13 = *param_6;
  uVar12 = (uint)CONCAT11(param_6[1],param_6[2]);
  uVar2 = *(ushort *)(param_6 + 3);
  plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x100);
  if (*plVar4 == 0) {
    if (param_6[1] != '\x03') {
LAB_1001f2498:
      FUN_1004d2c58(0x10,0,0xf7,&UNK_10f6d15f7,0xf2);
      uVar9 = 0x46;
      goto LAB_1001f24b8;
    }
  }
  else {
    FUN_1001f0ac4();
    if (uVar12 != (uint)plVar4) goto LAB_1001f2498;
  }
  uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
  uVar10 = (ulong)uVar3;
  if (0x4140 < uVar3) {
    uVar6 = 0x92;
    uVar8 = 0xf9;
LAB_1001f2484:
    FUN_1004d2c58(0x10,0,uVar6,&UNK_10f6d15f7,uVar8);
    uVar9 = 0x16;
    goto LAB_1001f24b8;
  }
  lVar14 = uVar10 - (param_7 - 5);
  if (param_7 - 5 <= uVar10 && lVar14 != 0) {
    uVar10 = uVar10 + 5;
LAB_1001f241c:
    *param_4 = uVar10;
    return 2;
  }
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(0,0,0x100,param_6,5,param_1,*(undefined8 *)(param_1 + 0x48));
  }
  param_7 = lVar14 + param_7;
  *param_4 = param_7;
  lVar14 = *(long *)(param_1 + 0x30);
  uVar2 = *(ushort *)(lVar14 + 0xd4);
  if ((((((uVar2 >> 1 & 1) == 0) || (uVar5 = param_1, FUN_1001fa5c4(), (uint)uVar5 < 0x304)) ||
       ((*(long *)(lVar14 + 0x110) == 0 ||
        (((*(byte *)(*(long *)(lVar14 + 0x110) + 0x618) >> 3 & 1) != 0 || (cVar13 != '\x14')))))) ||
      (uVar3 != 1)) || (param_6[5] != '\x01')) {
    plVar4 = *(long **)(lVar14 + 0x100);
    if ((((uVar2 & 1) != 0) && (*plVar4 == 0)) && (cVar13 == '\x17')) {
LAB_1001f26ac:
      uVar12 = (uint)*(ushort *)(lVar14 + 200) + (int)param_7;
      uVar2 = (ushort)uVar12;
      *(ushort *)(lVar14 + 200) = uVar2;
      if (uVar2 < param_7) {
        *(undefined2 *)(lVar14 + 200) = 0x4001;
      }
      else if ((uVar12 & 0xffff) < 0x4001) {
        return 1;
      }
      func_0x000107c2b29c(0x10,0,0x10e,&UNK_10f6d15f7,0xc6);
      *param_5 = 10;
      return 4;
    }
    FUN_1001fa088(plVar4,param_3,cVar13,uVar12,lVar14,param_6,5,param_8,param_6 + 5,uVar10);
    lVar14 = *(long *)(param_1 + 0x30);
    if (((ulong)plVar4 & 1) == 0) {
      if (((*(ushort *)(lVar14 + 0xd4) & 1) != 0) && (**(long **)(lVar14 + 0x100) != 0)) {
        FUN_1001e83a0();
        param_7 = *param_4;
        lVar14 = *(long *)(param_1 + 0x30);
        goto LAB_1001f26ac;
      }
      FUN_1004d2c58(0x10,0,0x8b,&UNK_10f6d15f7,0x12a);
      uVar9 = 0x14;
      goto LAB_1001f24b8;
    }
    *(ushort *)(lVar14 + 0xd4) = *(ushort *)(lVar14 + 0xd4) & 0xfffe;
    uVar10 = *(ulong *)(param_1 + 0x30);
    FUN_1001f0e5c(uVar10,8);
    if ((uVar10 & 1) == 0) {
      uVar9 = 0x50;
      goto LAB_1001f24b8;
    }
    plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x100);
    if (*plVar4 == 0) {
      uVar10 = param_3[1];
      if (0x4000 < uVar10) goto LAB_1001f2708;
    }
    else {
      FUN_1001ffd20();
      uVar12 = (uint)plVar4 & 0xffff;
      uVar5 = 0x4000;
      if (0x303 < uVar12) {
        uVar5 = 0x4001;
      }
      uVar10 = param_3[1];
      if (uVar5 < uVar10) {
LAB_1001f2708:
        uVar6 = 0x88;
        uVar8 = 0x140;
        goto LAB_1001f2484;
      }
      if (0x303 < uVar12) {
        if (cVar13 != '\x17') {
          FUN_1004d2c58(0x10,0,0xfb,&UNK_10f6d15f7,0x148);
          uVar9 = 0x32;
          goto LAB_1001f24b8;
        }
        do {
          uVar10 = uVar10 - 1;
          if (uVar10 == 0xffffffffffffffff) {
            FUN_1004d2c58(0x10,0,0x8b,&UNK_10f6d15f7,0x14f);
            uVar9 = 0x33;
            goto LAB_1001f24b8;
          }
          cVar13 = *(char *)(*param_3 + uVar10);
          param_3[1] = uVar10;
        } while (cVar13 == '\0');
      }
    }
    lVar14 = *(long *)(param_1 + 0x30);
    if (uVar10 == 0) {
      bVar1 = *(char *)(lVar14 + 0xca) + 1;
      *(byte *)(lVar14 + 0xca) = bVar1;
      if (0x20 < bVar1) {
        uVar6 = 0xdb;
        uVar8 = 0x15c;
        goto LAB_1001f27d0;
      }
    }
    else {
      *(undefined1 *)(lVar14 + 0xca) = 0;
    }
    if (cVar13 == '\x16') {
LAB_1001f2804:
      *(undefined1 *)(lVar14 + 0xcb) = 0;
      *param_2 = cVar13;
      return 0;
    }
    if (cVar13 == '\x15') {
      pcVar7 = (char *)*param_3;
      if (uVar10 == 2) {
        func_0x000107c2b794(param_1,0,0x15,pcVar7,2);
        cVar13 = *pcVar7;
        pcVar11 = *(code **)(param_1 + 0x60);
        uVar12 = (uint)(byte)pcVar7[1];
        if ((pcVar11 != (code *)0x0) ||
           (pcVar11 = *(code **)(*(long *)(param_1 + 0x68) + 0x180), pcVar11 != (code *)0x0)) {
          (*pcVar11)(param_1,0x4004,CONCAT11(cVar13,pcVar7[1]));
        }
        if (cVar13 == '\x02') {
          func_0x000107c2b29c(0x10,0,uVar12 + 1000,&UNK_10f6d15f7,0x252);
          func_0x00010ae2a054(&UNK_10f6d1668);
          *param_5 = 0;
          return 4;
        }
        if (cVar13 == '\x01') {
          lVar14 = *(long *)(param_1 + 0x30);
          if (uVar12 == 0) {
            *(undefined4 *)(lVar14 + 0xa8) = 1;
            return 3;
          }
          if ((((*(ushort *)(lVar14 + 0xd4) >> 1 & 1) == 0) ||
              (func_0x000107c2b89c(), uVar12 == 0x5a)) || ((uint)param_1 < 0x304)) {
            bVar1 = *(char *)(lVar14 + 0xcb) + 1;
            *(byte *)(lVar14 + 0xcb) = bVar1;
            if (bVar1 < 5) {
              return 1;
            }
            *param_5 = 10;
            uVar6 = 0xdc;
            uVar8 = 0x24b;
          }
          else {
            *param_5 = 0x32;
            uVar6 = 0x66;
            uVar8 = 0x244;
          }
        }
        else {
          *param_5 = 0x2f;
          uVar6 = 0xe3;
          uVar8 = 0x259;
        }
      }
      else {
        *param_5 = 0x32;
        uVar6 = 0x66;
        uVar8 = 0x229;
      }
      func_0x000107c2b29c(0x10,0,uVar6,&UNK_10f6d15f7,uVar8);
      return 4;
    }
    uVar10 = param_1;
    FUN_1001ff19c();
    if ((uVar10 & 1) == 0) {
      lVar14 = *(long *)(param_1 + 0x30);
      goto LAB_1001f2804;
    }
    uVar6 = 0xe1;
    uVar8 = 0x16d;
  }
  else {
    bVar1 = *(char *)(lVar14 + 0xca) + 1;
    *(byte *)(lVar14 + 0xca) = bVar1;
    if (bVar1 < 0x21) {
      return 1;
    }
    uVar6 = 0xdb;
    uVar8 = 0x112;
  }
LAB_1001f27d0:
  FUN_1004d2c58(0x10,0,uVar6,&UNK_10f6d15f7,uVar8);
  uVar9 = 10;
LAB_1001f24b8:
  *param_5 = uVar9;
  return 4;
}



/* Entry: 1001f2838; end: 1001f28e3;  */

undefined8 FUN_1001f2838(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  ulong uStack_60;
  undefined1 auStack_58 [40];
  
  lVar1 = param_1;
  FUN_1001f1fb4(param_1,auStack_58,&uStack_60);
  if ((int)lVar1 == 0) {
    FUN_1001f28e4();
    if (uStack_60 <= param_1 + 4U) {
      return 1;
    }
    FUN_1004d2c58(0x10,0,0x96,&UNK_10f6d0013,0x213);
    uVar2 = 0x2f;
  }
  else {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0013,0x20c);
    uVar2 = 0x50;
  }
  *param_2 = uVar2;
  return 0;
}



/* Entry: 1001f28e4; end: 1001f296b;  */

uint FUN_1001f28e4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x618) >> 3 & 1) != 0)) {
    lVar2 = param_1;
    FUN_1001fa5c4();
    if ((uint)lVar2 < 0x304) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x4000;
      if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
        uVar1 = 1;
      }
    }
  }
  else if (((*(byte *)(param_1 + 0xa4) & 1) == 0) ||
          ((*(byte *)(*(long *)(param_1 + 8) + 0xe8) & 1) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x88);
    if (uVar1 < 0x4001) {
      uVar1 = 0x4000;
    }
  }
  else {
    uVar1 = 0x4000;
  }
  return uVar1;
}



/* Entry: 1001f296c; end: 1001f2a8b;  */

/* WARNING: Possible PIC construction at 0x0001001f2b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001f2b20) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b24) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b60) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b7c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b2c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b94) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c30) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c3c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c64) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c78) */
/* WARNING: Removing unreachable block (ram,0x0001001f2ba0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b3c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bf0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c94) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c10) */
/* WARNING: Removing unreachable block (ram,0x0001001f2ca4) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c24) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b44) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bb8) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bc0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bcc) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bd8) */
/* WARNING: Removing unreachable block (ram,0x0001001f2be0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b80) */

undefined8 *
FUN_1001f296c(undefined8 *param_1,undefined1 *param_2,int param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  *param_2 = 0;
  lVar9 = param_1[6];
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x5a);
  if (param_3 == 2) {
LAB_1001f29d4:
    if ((uVar7 & 0xffff) == 0) {
      if (*(char *)(lVar9 + 99) == '\x01') {
        func_0x000107c60fd0(*(undefined8 *)(lVar9 + 0x50));
      }
      *(undefined1 *)(lVar9 + 99) = 0;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined8 *)(lVar9 + 0x56) = 0;
    }
    if (param_3 < 2) {
      if (param_3 == 0) goto LAB_1001f2a4c;
      if (param_3 == 1) goto LAB_1001f2a40;
    }
    else if (param_3 == 4) {
      if ((int)param_5 != 0) {
        func_0x000107c2b730(param_1,2,param_5);
      }
    }
    else {
      if (param_3 == 3) {
        return (undefined8 *)0x0;
      }
      if (param_3 == 2) {
        FUN_1001f2a8c(param_1,param_4);
        if ((int)param_1 < 1) {
          return param_1;
        }
LAB_1001f2a40:
        *param_2 = 1;
        return (undefined8 *)0x1;
      }
    }
    puVar3 = (undefined8 *)0xffffffff;
  }
  else {
    if (uVar7 < param_4) {
      func_0x000107c60ebc();
      lVar9 = param_1[6];
      if (*(short *)(lVar9 + 0x5a) == 0) {
        if (*(char *)(lVar9 + 99) == '\x01') {
          func_0x000107c60fd0(*(undefined8 *)(lVar9 + 0x50));
        }
        *(undefined1 *)(lVar9 + 99) = 0;
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(undefined8 *)(lVar9 + 0x56) = 0;
        lVar9 = param_1[6];
      }
      if (*(char *)*param_1 != '\0') {
        param_2 = (undefined1 *)0x414d;
      }
      if ((*(byte *)(*(long *)(lVar9 + 0x100) + 0x271) & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)(*(long *)(lVar9 + 0x100) + 0x26d);
      }
      iVar2 = 5;
      if (*(char *)*param_1 != '\0') {
        iVar2 = 0xd;
      }
      plVar1 = (long *)(lVar9 + 0x50);
      if (param_2 < (undefined1 *)0x10000) {
        if ((undefined1 *)(ulong)*(ushort *)(lVar9 + 0x5c) < param_2) {
          if (param_2 < (undefined1 *)0x6) {
            uVar7 = 0;
            puVar4 = (undefined1 *)(lVar9 + 0x5e);
          }
          else {
            puVar4 = param_2 + 7;
            func_0x000107c610a0();
            if (puVar4 == (undefined1 *)0x0) {
              uVar5 = 0x41;
              uVar6 = 0x4d;
              goto LAB_1001f2cd8;
            }
            uVar7 = (ulong)(-(int)puVar4 - (uVar8 + iVar2)) & 7;
          }
          if (*(short *)(lVar9 + 0x5a) != 0) {
            func_0x000107c610b8(puVar4 + uVar7,*plVar1 + (ulong)*(ushort *)(lVar9 + 0x58));
          }
          if (*(char *)(lVar9 + 99) == '\x01') {
            func_0x000107c60fd0(*plVar1);
          }
          *plVar1 = (long)puVar4;
          *(bool *)(lVar9 + 99) = (undefined1 *)0x5 < param_2;
          *(short *)(lVar9 + 0x58) = (short)uVar7;
          *(short *)(lVar9 + 0x5c) = (short)param_2;
        }
        puVar3 = (undefined8 *)0x1;
      }
      else {
        uVar5 = 0x44;
        uVar6 = 0x34;
LAB_1001f2cd8:
        FUN_1004d2c58(0x10,0,uVar5,&UNK_10f6d025a,uVar6);
        puVar3 = (undefined8 *)0x0;
      }
      return puVar3;
    }
    *(short *)(lVar9 + 0x58) = *(short *)(lVar9 + 0x58) + (short)param_4;
    uVar8 = (uint)*(ushort *)(lVar9 + 0x5a) - (int)param_4;
    uVar7 = (ulong)uVar8;
    *(short *)(lVar9 + 0x5a) = (short)uVar8;
    *(short *)(lVar9 + 0x5c) = *(short *)(lVar9 + 0x5c) - (short)param_4;
    if (param_3 != 0) goto LAB_1001f29d4;
LAB_1001f2a4c:
    puVar3 = (undefined8 *)0x1;
  }
  return puVar3;
}



/* Entry: 1001f2a8c; end: 1001f2da3;  */

/* WARNING: Possible PIC construction at 0x0001001f2b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001f2b20) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b24) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b60) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b7c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b2c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b94) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c30) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c3c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c64) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c78) */
/* WARNING: Removing unreachable block (ram,0x0001001f2ba0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b3c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bf0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c94) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c10) */
/* WARNING: Removing unreachable block (ram,0x0001001f2ca4) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c24) */
/* WARNING: Removing unreachable block (ram,0x0001001f2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b44) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bb8) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bc0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bcc) */
/* WARNING: Removing unreachable block (ram,0x0001001f2bd8) */
/* WARNING: Removing unreachable block (ram,0x0001001f2be0) */
/* WARNING: Removing unreachable block (ram,0x0001001f2b80) */

undefined8 FUN_1001f2a8c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = param_1[6];
  if (*(short *)(lVar7 + 0x5a) == 0) {
    if (*(char *)(lVar7 + 99) == '\x01') {
      func_0x000107c60fd0(*(undefined8 *)(lVar7 + 0x50));
    }
    *(undefined1 *)(lVar7 + 99) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x56) = 0;
    lVar7 = param_1[6];
  }
  if (*(char *)*param_1 != '\0') {
    param_2 = 0x414d;
  }
  if ((*(byte *)(*(long *)(lVar7 + 0x100) + 0x271) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(byte *)(*(long *)(lVar7 + 0x100) + 0x26d);
  }
  iVar2 = 5;
  if (*(char *)*param_1 != '\0') {
    iVar2 = 0xd;
  }
  plVar1 = (long *)(lVar7 + 0x50);
  if (param_2 < 0x10000) {
    if (*(ushort *)(lVar7 + 0x5c) < param_2) {
      if (param_2 < 6) {
        uVar8 = 0;
        lVar3 = lVar7 + 0x5e;
      }
      else {
        lVar3 = param_2 + 7;
        func_0x000107c610a0();
        if (lVar3 == 0) {
          uVar4 = 0x41;
          uVar5 = 0x4d;
          goto LAB_1001f2cd8;
        }
        uVar8 = (ulong)(-(int)lVar3 - (uVar6 + iVar2)) & 7;
      }
      if (*(short *)(lVar7 + 0x5a) != 0) {
        func_0x000107c610b8(lVar3 + uVar8,*plVar1 + (ulong)*(ushort *)(lVar7 + 0x58));
      }
      if (*(char *)(lVar7 + 99) == '\x01') {
        func_0x000107c60fd0(*plVar1);
      }
      *plVar1 = lVar3;
      *(bool *)(lVar7 + 99) = 5 < param_2;
      *(short *)(lVar7 + 0x58) = (short)uVar8;
      *(short *)(lVar7 + 0x5c) = (short)param_2;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0x44;
    uVar5 = 0x34;
LAB_1001f2cd8:
    FUN_1004d2c58(0x10,0,uVar4,&UNK_10f6d025a,uVar5);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1001f2da4; end: 1001f2fe7;  */

ulong FUN_1001f2da4(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 == (long *)0x0) {
    func_0x000107c37080(&UNK_10f759d12);
    FUN_10012dd4c();
    uVar6 = 0xfffffff7;
    goto LAB_1001f2fa8;
  }
  uVar7 = (uint)param_3;
  if ((int)uVar7 < 1) {
    return param_3;
  }
  if ((1 < *(int *)((long)plVar10 + 0x4c) + 1U) && (*(int *)((long)plVar10 + 0x34) + 1U < 2)) {
    func_0x000107c37080(&UNK_10f759cca);
    FUN_10012dd4c();
    uVar6 = *(undefined4 *)((long)plVar10 + 0x4c);
    goto LAB_1001f2fa8;
  }
  iVar8 = *(int *)((long)plVar10 + 0x34);
  if (iVar8 == 0) {
    plVar12 = plVar10 + 4;
    func_0x0001001f3098();
    func_0x0001001f3124(plVar10 + 5);
    plVar11 = (long *)plVar10[1];
    plVar4 = plVar10 + 0xb;
    func_0x0001001e745c();
    puVar5 = (undefined8 *)0x1001f9b04;
    plStack_60 = plVar4;
    plStack_58 = plVar12;
    func_0x0001001e74d8(0x1001f9b04,0x1001f9bc8,0,&plStack_60);
    puStack_68 = puVar5;
    func_0x0001001f3164(*(undefined8 *)(*plVar11 + 0x18));
    func_0x0001001e7594();
    FUN_10014f860(&plStack_60);
    if ((int)puVar5 == -0xae) {
      plVar12 = (long *)plVar10[1];
      puVar5 = &uStack_78;
      func_0x00010015d41c(puVar5,plVar10 + 2);
      uStack_70 = uStack_78;
      uStack_78 = 0;
      func_0x0001001f3164(*(undefined8 *)(*plVar12 + 0x10));
      func_0x000100140e00(&uStack_70);
      func_0x000100140e00(&uStack_78);
      if ((int)puVar5 != -1) goto LAB_1001f2f18;
    }
    else {
      if ((int)puVar5 != -1) {
LAB_1001f2f18:
        func_0x0001001fa064(plVar10,puVar5);
        iVar8 = *(int *)((long)plVar10 + 0x34);
        goto LAB_1001f2f28;
      }
      func_0x0001001f347c(plVar10 + 5);
    }
    *(undefined4 *)((long)plVar10 + 0x34) = 0xffffffff;
  }
  else {
LAB_1001f2f28:
    if (iVar8 != -1) {
      if (-1 < iVar8) {
        iVar2 = (int)plVar10[6];
        if (iVar8 <= iVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x1001f2fe0);
          (*pcVar3)();
        }
        uVar1 = iVar8 - iVar2;
        if ((int)uVar7 <= iVar8 - iVar2) {
          uVar1 = uVar7;
        }
        uVar9 = (ulong)uVar1;
        func_0x000107c610b4(param_2,*(long *)(plVar10[5] + 0x10) + (long)iVar2,uVar9);
        iVar8 = (int)plVar10[6] + uVar1;
        *(int *)(plVar10 + 6) = iVar8;
        if (iVar8 == *(int *)((long)plVar10 + 0x34)) {
          func_0x0001001f347c(plVar10 + 5);
          plVar10[6] = 0;
          return uVar9;
        }
        return uVar9;
      }
      func_0x000107c37080(&UNK_10f759cca);
      FUN_10012dd4c();
      uVar6 = *(undefined4 *)((long)plVar10 + 0x34);
LAB_1001f2fa8:
      func_0x000107c2e918(&plStack_60,uVar6);
      return 0xffffffff;
    }
  }
  *(uint *)(*plVar10 + 0x10) = *(uint *)(*plVar10 + 0x10) | 9;
  return 0xffffffff;
}



/* Entry: 1001f2fe8; end: 1001f308b;  */

void FUN_1001f2fe8(long *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar4 = *(code **)(*param_1 + 0x18), pcVar4 == (code *)0x0)) {
    uVar2 = 0x73;
    uVar3 = 0x7e;
  }
  else {
    if ((int)param_1[1] != 0) {
      if (param_3 < 1) {
        return;
      }
      plVar1 = param_1;
      (*pcVar4)();
      if ((int)plVar1 < 1) {
        return;
      }
      param_1[6] = param_1[6] + ((ulong)plVar1 & 0xffffffff);
      return;
    }
    uVar2 = 0x72;
    uVar3 = 0x82;
  }
  FUN_1004d2c58(0x11,0,uVar2,&UNK_10f6c5149,uVar3);
  return;
}



/* Entry: 1001f308c; end: 1001f34c7;  */

void FUN_1001f308c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 1001f34c8; end: 1001f35bb;  */

int FUN_1001f34c8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_2) {
    return 0;
  }
  lVar2 = param_1;
  FUN_1001f35bc();
  if ((uint)lVar2 != 0) {
    if ((uint)lVar2 >> 0x18 != 2) {
      return 1;
    }
    return 5;
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0xa8) == 1) {
      return 6;
    }
    return 5;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0xbc);
  if (iVar3 - 0xbU < 10 || iVar3 == 4) {
    return iVar3;
  }
  if (iVar3 == 3) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(uint *)(lVar2 + 0x10);
    if ((uVar1 >> 1 & 1) != 0) {
      return 3;
    }
    if ((uVar1 & 1) != 0) {
      return 2;
    }
  }
  else {
    if (iVar3 != 2) {
      return 5;
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      return 2;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = *(uint *)(lVar2 + 0x10);
    if ((uVar1 & 1) != 0) {
      return 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 3;
    }
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return 5;
  }
  iVar3 = 8;
  if (*(int *)(lVar2 + 0x14) != 3) {
    iVar3 = 5;
  }
  if (*(int *)(lVar2 + 0x14) != 2) {
    return iVar3;
  }
  return 7;
}



/* Entry: 1001f35bc; end: 1001f35ff;  */

void FUN_1001f35bc(void)

{
  FUN_1001e82f0();
  return;
}



/* Entry: 1001f3600; end: 1001f39bf;  */

void FUN_1001f3600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001001f36a8(param_2,param_3,param_4);
  return;
}



/* Entry: 1001f39c0; end: 1001f3a0b;  */

void FUN_1001f39c0(undefined8 param_1)

{
  FUN_1000285a8(0x112f93630,&UNK_10dc0c100);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100c060ec,param_1);
  return;
}



/* Entry: 1001f3a0c; end: 1001f3a2b;  */

void FUN_1001f3a0c(void)

{
  func_0x000107c61168(&PTR_PTR_112f936a8);
  return;
}



/* Entry: 1001f3a2c; end: 1001f3b5b;  */

void FUN_1001f3a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db06c8,&UNK_10d95a1e0);
  puVar1 = &UNK_1103d8ef8;
  func_0x000107c613fc(&UNK_1103d8ef8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100458f40,puVar1);
  return;
}



/* Entry: 1001f3b5c; end: 1001f3b63; -[KSCrash monitoring] */

undefined4 FUN_1001f3b5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1001f3b64; end: 1001f3be3;  */

void FUN_1001f3b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db0c70,&UNK_10d95ade0);
  puVar1 = &UNK_1103da738;
  func_0x000107c613fc(&UNK_1103da738,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d08c0,puVar1);
  return;
}



/* Entry: 1001f3be4; end: 1001f3bf7;  */

void FUN_1001f3be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1001f3bf8; end: 1001f3c23; +[SCGrapheneAuthenticationMetric userSessionSource] */

void FUN_1001f3bf8(void)

{
  func_0x000107c610f4(PTR_PTR_1126bd520);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001f3c24; end: 1001f3c47;  */

void FUN_1001f3c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103daaa8;
  FUN_1000285a8(0x112db0da0,&UNK_10d95afb8);
  func_0x000107c613fc(&UNK_1103daaa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10076e6d8,puVar1);
  return;
}



/* Entry: 1001f3c48; end: 1001f3c57; -[SCAbnormalExitResult crashType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001f3c48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113080848);
}



/* Entry: 1001f3c58; end: 1001f3cd7;  */

void FUN_1001f3c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df36e0,&UNK_10d9c1c10);
  puVar1 = &UNK_110436f58;
  func_0x000107c613fc(&UNK_110436f58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101a80ea8,puVar1);
  return;
}



/* Entry: 1001f3cd8; end: 1001f3d23;  */

void FUN_1001f3cd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f3d24; end: 1001f3d3f;  */

void FUN_1001f3d24(undefined8 param_1)

{
  FUN_1000285a8(0x112df36e8,&UNK_10d9c1c18);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a810e8,param_1);
  return;
}



/* Entry: 1001f3d40; end: 1001f3d8f;  */

void FUN_1001f3d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f3d90; end: 1001f3dab;  */

void FUN_1001f3d90(undefined8 param_1)

{
  FUN_1000285a8(0x112de2250,&UNK_10d9aa1b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007ad7e4,param_1);
  return;
}



/* Entry: 1001f3dac; end: 1001f3dfb;  */

void FUN_1001f3dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f3dfc; end: 1001f3e0b;  */

void FUN_1001f3dfc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1001f3e0c; end: 1001f3e3b;  */

void FUN_1001f3e0c(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (param_1 != 0) {
    func_0x000107c613c8();
  }
  do {
    lVar3 = lRam000000011381b448;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x11381b448,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam000000011381b448 = param_1;
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar3);
  return;
}



/* Entry: 1001f3e3c; end: 1001f3e4b;  */

void FUN_1001f3e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001f3e4c; end: 1001f3ea3;  */

void FUN_1001f3e4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f3ea4; end: 1001f3f3b;  */

void FUN_1001f3ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de3928,&UNK_10d9ac950);
  puVar1 = &UNK_110423c68;
  func_0x000107c613fc(&UNK_110423c68,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1007b0940,puVar1);
  return;
}



/* Entry: 1001f3f3c; end: 1001f3f5b;  */

void FUN_1001f3f3c(void)

{
  func_0x000107c61168(&PTR_PTR_112de39a0);
  return;
}



/* Entry: 1001f3f5c; end: 1001f3f77;  */

void FUN_1001f3f5c(undefined8 param_1)

{
  FUN_1000285a8(0x112de3930,&UNK_10d9ac958);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007b08e4,param_1);
  return;
}



/* Entry: 1001f3f78; end: 1001f3fc7;  */

void FUN_1001f3f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f3fc8; end: 1001f3fe7;  */

void FUN_1001f3fc8(void)

{
  func_0x000107c61168(&PTR_PTR_112db03c0);
  return;
}



/* Entry: 1001f3fe8; end: 1001f4107; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader sendAllReportsWithCompletion:] */

void FUN_1001f3fe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c60bc4();
  uVar2 = param_1;
  if (param_3 == 0) {
    func_0x000107c61174(param_1);
    FUN_1001ad520();
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
    ppuVar5 = (undefined **)0x0;
  }
  else {
    puVar3 = &UNK_1103cf3f8;
    func_0x000107c613fc(&UNK_1103cf3f8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    func_0x000107c61174(param_1);
    FUN_1001ad520();
    pcVar4 = FUN_1001f8dbc;
    pcStack_50 = FUN_1001f8dbc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1001f8d28;
    puStack_58 = &UNK_1103cf3c0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
  }
  func_0x000107c51da8(uVar2);
  func_0x000107c61170(param_1);
  FUN_1001f9174(pcVar4,puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1001f4108; end: 1001f411f;  */

void FUN_1001f4108(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1001f4120; end: 1001f413f;  */

void FUN_1001f4120(void)

{
  func_0x000107c61168(&PTR_PTR_112969508);
  return;
}



/* Entry: 1001f4140; end: 1001f4147;  */

void FUN_1001f4140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1001f4148; end: 1001f429b; -[KSCrashInstallation sendAllReportsWithCompletion:] */

/* WARNING: Possible PIC construction at 0x0001001f41f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001f41f4) */

void FUN_1001f4148(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  
  FUN_1001f4140();
  lVar3 = param_1;
  func_0x000107c5dbf4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x000107c5b074();
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126d05c8;
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar3 != 0) {
      func_0x000107c4ee40(param_1);
      func_0x000107c61180();
      func_0x000107c43504(puVar2,param_2,param_1);
      func_0x000107c61180();
      func_0x0001001f8008();
      goto code_r0x000107c61170;
    }
    func_0x000107c61158(param_1);
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c42a54(puVar1,param_2,param_1,0,&PTR____CFConstantStringClassReference_110e6f3f8);
    func_0x000107c61180();
    func_0x000106ae4c68();
    (*extraout_x8_00)();
    func_0x0001001aecf0();
    func_0x0001001f9118();
  }
  else if (param_3 != 0) {
    func_0x000106ae4c68();
    (*extraout_x8)();
  }
  func_0x0001001f9120();
  param_1 = param_3;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001f429c; end: 1001f42af;  */

void FUN_1001f429c(void)

{
  return;
}



/* Entry: 1001f42b0; end: 1001f4493; -[KSCrashInstallation validateProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f42b0(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  
  FUN_1001f429c();
  puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000107c5c158();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x000107c50488();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4080c();
  lVar5 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        func_0x000107c61128(uVar1);
      }
      uVar3 = unaff_x20;
      func_0x000107c5dc2c();
      func_0x000107c61180();
      if (uVar3 == 0) {
        func_0x0001001f4c5c();
        if (uVar3 != 0) {
          func_0x000107c3df20(puVar6);
        }
        func_0x000107c3def8(puVar6);
      }
      else {
        func_0x000107c61170();
      }
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    uVar2 = uVar1;
    func_0x000107c4080c();
  }
  lVar5 = 0;
  func_0x0001001aecf0();
  func_0x0001001f4c5c();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar5 == 0) {
    puVar6 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61158();
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c42a54();
    func_0x000107c61180();
    puVar4 = puVar6;
    func_0x0001001f9118();
  }
  func_0x0001001b2854();
  func_0x0001001f4c64(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c60bd8();
    lVar5 = *(long *)((long)(puVar4 + _DAT_113080850) + 8);
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(puVar4 + _DAT_113080850);
      func_0x000107c61434(lVar5);
      func_0x000107c5fadc(puVar6,lVar5);
      func_0x000107c6142c(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1001f4494; end: 1001f449f; -[SCAbnormalExitResult previousAppVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f4494(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080850))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080850);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001f44a0; end: 1001f44f7;  */

void FUN_1001f44a0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001f44f8; end: 1001f454b; -[SCBlizzardCrashLogger reportCrashEventWithAppVersion:isCrashLoop:applicationState:crashCategory:crashId:] */

/* WARNING: Possible PIC construction at 0x0001001f4538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001f453c) */

void FUN_1001f44f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3b1b8();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4bf74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001f454c; end: 1001f4567;  */

void FUN_1001f454c(undefined8 param_1)

{
  FUN_1000285a8(0x112de28e0,&UNK_10d9aad08);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1019b25a0,param_1);
  return;
}



/* Entry: 1001f4568; end: 1001f45b7;  */

void FUN_1001f4568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f45b8; end: 1001f4723; -[SCBlizzardCrashLogger _crashEventWithAppVersion:isCrashLoop:applicationState:crashCategory:crashId:] */

void FUN_1001f45b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b6c08;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_4);
  func_0x000107c61160(puVar2);
  puVar3 = PTR_PTR_1126b24e8;
  func_0x000107c4392c(PTR_PTR_1126b24e8,param_3,0);
  func_0x000107c3bef4(param_2,param_3,puVar3);
  func_0x000107c541d8(puVar2,param_3,(long)param_1);
  puVar3 = PTR_PTR_1126b24e8;
  func_0x000107c5ccd4(PTR_PTR_1126b24e8,param_3,0);
  func_0x000107c3bef4(param_2,param_3,puVar3);
  puVar3 = puVar2;
  func_0x000107c541dc(puVar2,param_3,(long)param_1);
  FUN_100209f0c();
  dVar1 = (double)(long)puVar3;
  FUN_10020a1d0();
  func_0x000107c565fc(puVar2,param_3,
                      (long)((double)(long)puVar3 / 1048576.0 + (double)(long)(dVar1 / 1048576.0)));
  func_0x000107c56600(puVar2,param_3,(long)(dVar1 / 1048576.0));
  lVar4 = param_2;
  func_0x000107c3b1bc(param_2,param_3,param_7);
  func_0x000107c52760(puVar2,param_3,lVar4);
  func_0x000107c53a44(puVar2,param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c5a754(puVar2,param_3,param_5);
  func_0x000107c5718c(puVar2,param_3,*(undefined8 *)(param_2 + 8));
  func_0x000107c53a4c(puVar2,param_3,param_8);
  func_0x000107c61170(param_8);
  func_0x000107c3af28(param_2,param_3,param_6);
  func_0x000107c527c0(puVar2,param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1001f4724; end: 1001f476f;  */

void FUN_1001f4724(undefined8 param_1)

{
  FUN_1000285a8(0x112e01808,&UNK_10d9d2a50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100261334,param_1);
  return;
}



/* Entry: 1001f4770; end: 1001f478f;  */

void FUN_1001f4770(void)

{
  func_0x000107c61168(&PTR_PTR_1127f76c0);
  return;
}



/* Entry: 1001f4790; end: 1001f480f;  */

void FUN_1001f4790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de8808,&UNK_10d9b36c0);
  puVar1 = &UNK_110429fd8;
  func_0x000107c613fc(&UNK_110429fd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006f9d70,puVar1);
  return;
}



/* Entry: 1001f4810; end: 1001f482f;  */

void FUN_1001f4810(void)

{
  func_0x000107c61168(&PTR_PTR_112de8880);
  return;
}



/* Entry: 1001f4830; end: 1001f484b;  */

void FUN_1001f4830(undefined8 param_1)

{
  FUN_1000285a8(0x112de8810,&UNK_10d9b36c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f9d14,param_1);
  return;
}



/* Entry: 1001f484c; end: 1001f491b;  */

void FUN_1001f484c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f491c; end: 1001f493b;  */

void FUN_1001f491c(void)

{
  func_0x000107c61168(&PTR_PTR_112dee0a8);
  return;
}



/* Entry: 1001f493c; end: 1001f4957;  */

void FUN_1001f493c(undefined8 param_1)

{
  FUN_1000285a8(0x112dee038,&UNK_10d9bb2c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100760e88,param_1);
  return;
}



/* Entry: 1001f4958; end: 1001f49a7;  */

void FUN_1001f4958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f49a8; end: 1001f49c7;  */

void FUN_1001f49a8(void)

{
  func_0x000107c61168(&PTR_PTR_112975e90);
  return;
}


